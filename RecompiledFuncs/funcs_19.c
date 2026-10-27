#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8003F740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F740: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F744: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F748: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8003F74C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8003F750: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x8003F754: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8003F758: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x8003F75C: jal         0x8003F670
    // 0x8003F760: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_8003F670(rdram, ctx);
        goto after_0;
    // 0x8003F760: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x8003F764: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8003F768: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8003F76C: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8003F770: nop

    // 0x8003F774: swc1        $f0, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f0.u32l;
    // 0x8003F778: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x8003F77C: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8003F780: nop

    // 0x8003F784: swc1        $f0, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f0.u32l;
    // 0x8003F788: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    // 0x8003F78C: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8003F790: nop

    // 0x8003F794: swc1        $f0, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->f0.u32l;
    // 0x8003F798: swc1        $f0, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f0.u32l;
    // 0x8003F79C: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8003F7A0: nop

    // 0x8003F7A4: swc1        $f0, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->f0.u32l;
    // 0x8003F7A8: swc1        $f0, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f0.u32l;
    // 0x8003F7AC: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8003F7B0: nop

    // 0x8003F7B4: swc1        $f0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f0.u32l;
    // 0x8003F7B8: swc1        $f0, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->f0.u32l;
    // 0x8003F7BC: lwc1        $f0, 0x8($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8003F7C0: nop

    // 0x8003F7C4: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x8003F7C8: swc1        $f0, 0x34($a3)
    MEM_W(0X34, ctx->r7) = ctx->f0.u32l;
    // 0x8003F7CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F7D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003F7D4: jr          $ra
    // 0x8003F7D8: nop

    return;
    // 0x8003F7D8: nop

;}
RECOMP_FUNC void func_8003F7DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F7DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003F7E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003F7E4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8003F7E8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8003F7EC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003F7F0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003F7F4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8003F7F8: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x8003F7FC: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x8003F800: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x8003F804: blez        $t6, L_8003F83C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8003F808: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8003F83C;
    }
    // 0x8003F808: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003F80C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8003F810:
    // 0x8003F810: lw          $t7, 0x4($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X4);
    // 0x8003F814: nop

    // 0x8003F818: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x8003F81C: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x8003F820: jal         0x80006DC0
    // 0x8003F824: nop

    func_80006DC0(rdram, ctx);
        goto after_0;
    // 0x8003F824: nop

    after_0:
    // 0x8003F828: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x8003F82C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003F830: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8003F834: bne         $at, $zero, L_8003F810
    if (ctx->r1 != 0) {
        // 0x8003F838: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8003F810;
    }
    // 0x8003F838: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_8003F83C:
    // 0x8003F83C: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x8003F840: jal         0x80006DC0
    // 0x8003F844: nop

    func_80006DC0(rdram, ctx);
        goto after_1;
    // 0x8003F844: nop

    after_1:
    // 0x8003F848: jal         0x80006DC0
    // 0x8003F84C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80006DC0(rdram, ctx);
        goto after_2;
    // 0x8003F84C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x8003F850: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8003F854: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003F858: bne         $t0, $at, L_8003F8BC
    if (ctx->r8 != ctx->r1) {
        // 0x8003F85C: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_8003F8BC;
    }
    // 0x8003F85C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8003F860: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x8003F864: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003F868: blez        $t1, L_8003F89C
    if (SIGNED(ctx->r9) <= 0) {
        // 0x8003F86C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8003F89C;
    }
    // 0x8003F86C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8003F870:
    // 0x8003F870: lw          $t2, 0x4($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X4);
    // 0x8003F874: nop

    // 0x8003F878: addu        $t3, $t2, $s1
    ctx->r11 = ADD32(ctx->r10, ctx->r17);
    // 0x8003F87C: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x8003F880: jal         0x80006DC0
    // 0x8003F884: nop

    func_80006DC0(rdram, ctx);
        goto after_3;
    // 0x8003F884: nop

    after_3:
    // 0x8003F888: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    // 0x8003F88C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003F890: slt         $at, $s0, $t4
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8003F894: bne         $at, $zero, L_8003F870
    if (ctx->r1 != 0) {
        // 0x8003F898: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8003F870;
    }
    // 0x8003F898: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_8003F89C:
    // 0x8003F89C: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x8003F8A0: jal         0x80006DC0
    // 0x8003F8A4: nop

    func_80006DC0(rdram, ctx);
        goto after_4;
    // 0x8003F8A4: nop

    after_4:
    // 0x8003F8A8: jal         0x80006DC0
    // 0x8003F8AC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80006DC0(rdram, ctx);
        goto after_5;
    // 0x8003F8AC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_5:
    // 0x8003F8B0: b           L_8003F8C8
    // 0x8003F8B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8003F8C8;
    // 0x8003F8B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003F8B8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_8003F8BC:
    // 0x8003F8BC: jal         0x80002D08
    // 0x8003F8C0: nop

    func_80002D08(rdram, ctx);
        goto after_6;
    // 0x8003F8C0: nop

    after_6:
    // 0x8003F8C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8003F8C8:
    // 0x8003F8C8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003F8CC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003F8D0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8003F8D4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8003F8D8: jr          $ra
    // 0x8003F8DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8003F8DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003F8E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F8E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F8E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F8E8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8003F8EC: lw          $a2, 0x4($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X4);
    // 0x8003F8F0: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x8003F8F4: jal         0x8003F7DC
    // 0x8003F8F8: nop

    func_8003F7DC(rdram, ctx);
        goto after_0;
    // 0x8003F8F8: nop

    after_0:
    // 0x8003F8FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F900: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003F904: jr          $ra
    // 0x8003F908: nop

    return;
    // 0x8003F908: nop

;}
RECOMP_FUNC void func_8003F90C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F90C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8003F910: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8003F914: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8003F918: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003F91C: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8003F920: or          $s7, $a3, $zero
    ctx->r23 = ctx->r7 | 0;
    // 0x8003F924: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8003F928: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8003F92C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8003F930: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8003F934: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8003F938: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8003F93C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003F940: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003F944: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8003F948: beq         $t6, $zero, L_8003F95C
    if (ctx->r14 == 0) {
        // 0x8003F94C: sw          $a1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r5;
            goto L_8003F95C;
    }
    // 0x8003F94C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8003F950: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x8003F954: b           L_8003F964
    // 0x8003F958: addiu       $s1, $s1, 0xB00
    ctx->r17 = ADD32(ctx->r17, 0XB00);
        goto L_8003F964;
    // 0x8003F958: addiu       $s1, $s1, 0xB00
    ctx->r17 = ADD32(ctx->r17, 0XB00);
L_8003F95C:
    // 0x8003F95C: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x8003F960: addiu       $s1, $s1, 0xA40
    ctx->r17 = ADD32(ctx->r17, 0XA40);
L_8003F964:
    // 0x8003F964: jal         0x80006DFC
    // 0x8003F968: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80006DFC(rdram, ctx);
        goto after_0;
    // 0x8003F968: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x8003F96C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8003F970: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x8003F974: jal         0x80006DFC
    // 0x8003F978: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    func_80006DFC(rdram, ctx);
        goto after_1;
    // 0x8003F978: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    after_1:
    // 0x8003F97C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8003F980: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8003F984: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8003F988: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x8003F98C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x8003F990: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8003F994: nop

    // 0x8003F998: sw          $v1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r3;
    // 0x8003F99C: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x8003F9A0: jal         0x80006DFC
    // 0x8003F9A4: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    func_80006DFC(rdram, ctx);
        goto after_2;
    // 0x8003F9A4: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    after_2:
    // 0x8003F9A8: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x8003F9AC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x8003F9B0: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x8003F9B4: jal         0x80006DFC
    // 0x8003F9B8: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    func_80006DFC(rdram, ctx);
        goto after_3;
    // 0x8003F9B8: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    after_3:
    // 0x8003F9BC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8003F9C0: or          $s3, $s1, $zero
    ctx->r19 = ctx->r17 | 0;
    // 0x8003F9C4: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8003F9C8: or          $s6, $s1, $zero
    ctx->r22 = ctx->r17 | 0;
    // 0x8003F9CC: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x8003F9D0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8003F9D4: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8003F9D8: addiu       $fp, $zero, 0xC0
    ctx->r30 = ADD32(0, 0XC0);
    // 0x8003F9DC: sw          $v0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r2;
L_8003F9E0:
    // 0x8003F9E0: jal         0x80006DFC
    // 0x8003F9E4: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    func_80006DFC(rdram, ctx);
        goto after_4;
    // 0x8003F9E4: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    after_4:
    // 0x8003F9E8: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8003F9EC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8003F9F0: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x8003F9F4: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    // 0x8003F9F8: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8003F9FC: nop

    // 0x8003FA00: addu        $t8, $t7, $s4
    ctx->r24 = ADD32(ctx->r15, ctx->r20);
    // 0x8003FA04: jal         0x80006DFC
    // 0x8003FA08: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
    func_80006DFC(rdram, ctx);
        goto after_5;
    // 0x8003FA08: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
    after_5:
    // 0x8003FA0C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8003FA10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003FA14: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x8003FA18: or          $v1, $s6, $zero
    ctx->r3 = ctx->r22 | 0;
    // 0x8003FA1C: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x8003FA20: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8003FA24: addu        $t2, $t1, $s4
    ctx->r10 = ADD32(ctx->r9, ctx->r20);
    // 0x8003FA28: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
    // 0x8003FA2C: lwc1        $f0, 0x24($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X24);
    // 0x8003FA30: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8003FA34: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x8003FA38: swc1        $f0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f0.u32l;
    // 0x8003FA3C: lwc1        $f0, 0x28($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X28);
    // 0x8003FA40: nop

    // 0x8003FA44: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x8003FA48: swc1        $f0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f0.u32l;
    // 0x8003FA4C: lwc1        $f0, 0x2C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X2C);
    // 0x8003FA50: nop

    // 0x8003FA54: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8003FA58: swc1        $f0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f0.u32l;
    // 0x8003FA5C: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8003FA60: lwc1        $f14, 0x0($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8003FA64: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8003FA68: mul.s       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x8003FA6C: beq         $a2, $s1, L_8003FAD0
    if (ctx->r6 == ctx->r17) {
        // 0x8003FA70: nop
    
            goto L_8003FAD0;
    }
    // 0x8003FA70: nop

L_8003FA74:
    // 0x8003FA74: swc1        $f18, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f18.u32l;
    // 0x8003FA78: swc1        $f18, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f18.u32l;
    // 0x8003FA7C: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8003FA80: lwc1        $f14, 0x4($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8003FA84: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8003FA88: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x8003FA8C: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x8003FA90: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x8003FA94: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x8003FA98: swc1        $f14, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f14.u32l;
    // 0x8003FA9C: swc1        $f14, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f14.u32l;
    // 0x8003FAA0: lwc1        $f14, -0x4($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, -0X4);
    // 0x8003FAA4: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8003FAA8: nop

    // 0x8003FAAC: mul.s       $f16, $f14, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x8003FAB0: swc1        $f16, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f16.u32l;
    // 0x8003FAB4: swc1        $f16, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f16.u32l;
    // 0x8003FAB8: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8003FABC: lwc1        $f14, 0x0($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8003FAC0: nop

    // 0x8003FAC4: mul.s       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x8003FAC8: bne         $a2, $s1, L_8003FA74
    if (ctx->r6 != ctx->r17) {
        // 0x8003FACC: nop
    
            goto L_8003FA74;
    }
    // 0x8003FACC: nop

L_8003FAD0:
    // 0x8003FAD0: swc1        $f18, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f18.u32l;
    // 0x8003FAD4: swc1        $f18, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f18.u32l;
    // 0x8003FAD8: lwc1        $f14, 0x4($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8003FADC: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8003FAE0: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x8003FAE4: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x8003FAE8: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x8003FAEC: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x8003FAF0: swc1        $f14, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f14.u32l;
    // 0x8003FAF4: swc1        $f14, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f14.u32l;
    // 0x8003FAF8: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8003FAFC: lwc1        $f14, -0x4($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, -0X4);
    // 0x8003FB00: nop

    // 0x8003FB04: mul.s       $f16, $f14, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x8003FB08: swc1        $f16, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f16.u32l;
    // 0x8003FB0C: swc1        $f16, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f16.u32l;
    // 0x8003FB10: addiu       $s5, $s5, 0x30
    ctx->r21 = ADD32(ctx->r21, 0X30);
    // 0x8003FB14: sw          $s7, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r23;
    // 0x8003FB18: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8003FB1C: addiu       $s3, $s3, 0x30
    ctx->r19 = ADD32(ctx->r19, 0X30);
    // 0x8003FB20: addiu       $s6, $s6, 0x30
    ctx->r22 = ADD32(ctx->r22, 0X30);
    // 0x8003FB24: bne         $s5, $fp, L_8003F9E0
    if (ctx->r21 != ctx->r30) {
        // 0x8003FB28: sw          $s7, 0x30($s2)
        MEM_W(0X30, ctx->r18) = ctx->r23;
            goto L_8003F9E0;
    }
    // 0x8003FB28: sw          $s7, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->r23;
    // 0x8003FB2C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8003FB30: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003FB34: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003FB38: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003FB3C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8003FB40: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8003FB44: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8003FB48: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8003FB4C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8003FB50: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8003FB54: jr          $ra
    // 0x8003FB58: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8003FB58: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8003FB5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003FB5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003FB60: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8003FB64: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8003FB68: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8003FB6C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8003FB70: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8003FB74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003FB78: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8003FB7C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x8003FB80: addiu       $a1, $a0, 0x4
    ctx->r5 = ADD32(ctx->r4, 0X4);
    // 0x8003FB84: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003FB88: jal         0x8003F90C
    // 0x8003FB8C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8003F90C(rdram, ctx);
        goto after_0;
    // 0x8003FB8C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x8003FB90: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8003FB94: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8003FB98: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8003FB9C: beq         $t7, $zero, L_8003FBF0
    if (ctx->r15 == 0) {
        // 0x8003FBA0: lui         $at, 0xBF00
        ctx->r1 = S32(0XBF00 << 16);
            goto L_8003FBF0;
    }
    // 0x8003FBA0: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x8003FBA4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8003FBA8: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x8003FBAC: swc1        $f2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f2.u32l;
    // 0x8003FBB0: swc1        $f2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f2.u32l;
    // 0x8003FBB4: swc1        $f2, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f2.u32l;
    // 0x8003FBB8: swc1        $f2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f2.u32l;
    // 0x8003FBBC: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8003FBC0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8003FBC4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8003FBC8: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8003FBCC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8003FBD0: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x8003FBD4: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x8003FBD8: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8003FBDC: nop

    // 0x8003FBE0: mul.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8003FBE4: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x8003FBE8: b           L_8003FC30
    // 0x8003FBEC: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
        goto L_8003FC30;
    // 0x8003FBEC: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
L_8003FBF0:
    // 0x8003FBF0: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8003FBF4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8003FBF8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8003FBFC: mul.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8003FC00: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8003FC04: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8003FC08: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x8003FC0C: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x8003FC10: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8003FC14: swc1        $f2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f2.u32l;
    // 0x8003FC18: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8003FC1C: swc1        $f2, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f2.u32l;
    // 0x8003FC20: swc1        $f2, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f2.u32l;
    // 0x8003FC24: swc1        $f2, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f2.u32l;
    // 0x8003FC28: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x8003FC2C: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
L_8003FC30:
    // 0x8003FC30: swc1        $f2, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f2.u32l;
    // 0x8003FC34: swc1        $f2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f2.u32l;
    // 0x8003FC38: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8003FC3C: nop

    // 0x8003FC40: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x8003FC44: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x8003FC48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003FC4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003FC50: jr          $ra
    // 0x8003FC54: nop

    return;
    // 0x8003FC54: nop

;}
RECOMP_FUNC void func_8003FC58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003FC58: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8003FC5C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8003FC60: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x8003FC64: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8003FC68: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8003FC6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003FC70: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8003FC74: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x8003FC78: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8003FC7C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8003FC80: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8003FC84: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8003FC88: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003FC8C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003FC90: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8003FC94: jal         0x80006DFC
    // 0x8003FC98: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80006DFC(rdram, ctx);
        goto after_0;
    // 0x8003FC98: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x8003FC9C: sw          $v0, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r2;
    // 0x8003FCA0: jal         0x80006DFC
    // 0x8003FCA4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80006DFC(rdram, ctx);
        goto after_1;
    // 0x8003FCA4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x8003FCA8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8003FCAC: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x8003FCB0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8003FCB4: lw          $t6, 0x0($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X0);
    // 0x8003FCB8: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x8003FCBC: sw          $v1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r3;
    // 0x8003FCC0: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8003FCC4: jal         0x80006DFC
    // 0x8003FCC8: sw          $v1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r3;
    func_80006DFC(rdram, ctx);
        goto after_2;
    // 0x8003FCC8: sw          $v1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r3;
    after_2:
    // 0x8003FCCC: lw          $t8, 0x0($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X0);
    // 0x8003FCD0: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x8003FCD4: jal         0x80006DFC
    // 0x8003FCD8: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    func_80006DFC(rdram, ctx);
        goto after_3;
    // 0x8003FCD8: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    after_3:
    // 0x8003FCDC: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8003FCE0: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8003FCE4: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x8003FCE8: addiu       $s5, $t1, 0x800
    ctx->r21 = ADD32(ctx->r9, 0X800);
    // 0x8003FCEC: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x8003FCF0: addiu       $s7, $s7, 0xA40
    ctx->r23 = ADD32(ctx->r23, 0XA40);
    // 0x8003FCF4: or          $s3, $s5, $zero
    ctx->r19 = ctx->r21 | 0;
    // 0x8003FCF8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8003FCFC: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x8003FD00: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
L_8003FD04:
    // 0x8003FD04: jal         0x80006DFC
    // 0x8003FD08: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    func_80006DFC(rdram, ctx);
        goto after_4;
    // 0x8003FD08: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    after_4:
    // 0x8003FD0C: lw          $t2, 0x0($fp)
    ctx->r10 = MEM_W(ctx->r30, 0X0);
    // 0x8003FD10: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8003FD14: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x8003FD18: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    // 0x8003FD1C: addu        $t4, $t3, $s4
    ctx->r12 = ADD32(ctx->r11, ctx->r20);
    // 0x8003FD20: jal         0x80006DFC
    // 0x8003FD24: sw          $v0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r2;
    func_80006DFC(rdram, ctx);
        goto after_5;
    // 0x8003FD24: sw          $v0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r2;
    after_5:
    // 0x8003FD28: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8003FD2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003FD30: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x8003FD34: or          $v1, $s5, $zero
    ctx->r3 = ctx->r21 | 0;
    // 0x8003FD38: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8003FD3C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8003FD40: addu        $t8, $t7, $s4
    ctx->r24 = ADD32(ctx->r15, ctx->r20);
    // 0x8003FD44: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
    // 0x8003FD48: lwc1        $f0, 0x24($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X24);
    // 0x8003FD4C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8003FD50: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x8003FD54: swc1        $f0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f0.u32l;
    // 0x8003FD58: lwc1        $f0, 0x28($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X28);
    // 0x8003FD5C: nop

    // 0x8003FD60: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x8003FD64: swc1        $f0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f0.u32l;
    // 0x8003FD68: lwc1        $f0, 0x2C($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X2C);
    // 0x8003FD6C: nop

    // 0x8003FD70: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8003FD74: swc1        $f0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f0.u32l;
    // 0x8003FD78: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8003FD7C: lwc1        $f14, 0x0($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8003FD80: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8003FD84: mul.s       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x8003FD88: beq         $a2, $s1, L_8003FDEC
    if (ctx->r6 == ctx->r17) {
        // 0x8003FD8C: nop
    
            goto L_8003FDEC;
    }
    // 0x8003FD8C: nop

L_8003FD90:
    // 0x8003FD90: swc1        $f18, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f18.u32l;
    // 0x8003FD94: swc1        $f18, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f18.u32l;
    // 0x8003FD98: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8003FD9C: lwc1        $f14, 0x4($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8003FDA0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8003FDA4: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x8003FDA8: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x8003FDAC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x8003FDB0: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x8003FDB4: swc1        $f14, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f14.u32l;
    // 0x8003FDB8: swc1        $f14, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f14.u32l;
    // 0x8003FDBC: lwc1        $f14, -0x4($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, -0X4);
    // 0x8003FDC0: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8003FDC4: nop

    // 0x8003FDC8: mul.s       $f16, $f14, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x8003FDCC: swc1        $f16, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f16.u32l;
    // 0x8003FDD0: swc1        $f16, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f16.u32l;
    // 0x8003FDD4: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8003FDD8: lwc1        $f14, 0x0($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8003FDDC: nop

    // 0x8003FDE0: mul.s       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x8003FDE4: bne         $a2, $s1, L_8003FD90
    if (ctx->r6 != ctx->r17) {
        // 0x8003FDE8: nop
    
            goto L_8003FD90;
    }
    // 0x8003FDE8: nop

L_8003FDEC:
    // 0x8003FDEC: swc1        $f18, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f18.u32l;
    // 0x8003FDF0: swc1        $f18, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f18.u32l;
    // 0x8003FDF4: lwc1        $f14, 0x4($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8003FDF8: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8003FDFC: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x8003FE00: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x8003FE04: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x8003FE08: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x8003FE0C: swc1        $f14, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f14.u32l;
    // 0x8003FE10: swc1        $f14, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f14.u32l;
    // 0x8003FE14: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8003FE18: lwc1        $f14, -0x4($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, -0X4);
    // 0x8003FE1C: nop

    // 0x8003FE20: mul.s       $f16, $f14, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x8003FE24: swc1        $f16, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f16.u32l;
    // 0x8003FE28: swc1        $f16, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f16.u32l;
    // 0x8003FE2C: addiu       $s5, $s5, 0x30
    ctx->r21 = ADD32(ctx->r21, 0X30);
    // 0x8003FE30: sw          $s6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r22;
    // 0x8003FE34: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8003FE38: addiu       $s3, $s3, 0x30
    ctx->r19 = ADD32(ctx->r19, 0X30);
    // 0x8003FE3C: bne         $s5, $s7, L_8003FD04
    if (ctx->r21 != ctx->r23) {
        // 0x8003FE40: sw          $s6, 0x30($s2)
        MEM_W(0X30, ctx->r18) = ctx->r22;
            goto L_8003FD04;
    }
    // 0x8003FE40: sw          $s6, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->r22;
    // 0x8003FE44: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8003FE48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003FE4C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003FE50: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003FE54: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8003FE58: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8003FE5C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8003FE60: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8003FE64: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8003FE68: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8003FE6C: jr          $ra
    // 0x8003FE70: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8003FE70: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8003FE74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003FE74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003FE78: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x8003FE7C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8003FE80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003FE84: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003FE88: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8003FE8C: addiu       $a1, $a0, 0x4
    ctx->r5 = ADD32(ctx->r4, 0X4);
    // 0x8003FE90: jal         0x8003FC58
    // 0x8003FE94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8003FC58(rdram, ctx);
        goto after_0;
    // 0x8003FE94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8003FE98: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8003FE9C: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x8003FEA0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8003FEA4: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8003FEA8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003FEAC: mul.s       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8003FEB0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8003FEB4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8003FEB8: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x8003FEBC: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x8003FEC0: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8003FEC4: nop

    // 0x8003FEC8: mul.s       $f0, $f6, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8003FECC: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x8003FED0: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x8003FED4: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8003FED8: nop

    // 0x8003FEDC: mul.s       $f0, $f8, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8003FEE0: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x8003FEE4: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x8003FEE8: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8003FEEC: nop

    // 0x8003FEF0: mul.s       $f0, $f10, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8003FEF4: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x8003FEF8: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x8003FEFC: lwc1        $f0, 0x4($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8003FF00: nop

    // 0x8003FF04: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x8003FF08: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x8003FF0C: lwc1        $f16, 0x8($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8003FF10: nop

    // 0x8003FF14: mul.s       $f0, $f16, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x8003FF18: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x8003FF1C: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x8003FF20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003FF24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003FF28: jr          $ra
    // 0x8003FF2C: nop

    return;
    // 0x8003FF2C: nop

;}
RECOMP_FUNC void func_8003FF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003FF30: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8003FF34: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8003FF38: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8003FF3C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8003FF40: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003FF44: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8003FF48: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x8003FF4C: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x8003FF50: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8003FF54: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8003FF58: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8003FF5C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8003FF60: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003FF64: jal         0x80002F88
    // 0x8003FF68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80002F88(rdram, ctx);
        goto after_0;
    // 0x8003FF68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8003FF6C: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x8003FF70: lw          $t6, 0x34($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X34);
    // 0x8003FF74: addiu       $s0, $v0, 0x1C
    ctx->r16 = ADD32(ctx->r2, 0X1C);
    // 0x8003FF78: addu        $s5, $v0, $t6
    ctx->r21 = ADD32(ctx->r2, ctx->r14);
    // 0x8003FF7C: sw          $s5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r21;
    // 0x8003FF80: jal         0x80006DFC
    // 0x8003FF84: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80006DFC(rdram, ctx);
        goto after_1;
    // 0x8003FF84: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x8003FF88: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x8003FF8C: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x8003FF90: nop

    // 0x8003FF94: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8003FF98: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x8003FF9C: nop

    // 0x8003FFA0: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8003FFA4: jal         0x80006DFC
    // 0x8003FFA8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80006DFC(rdram, ctx);
        goto after_2;
    // 0x8003FFA8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_2:
    // 0x8003FFAC: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x8003FFB0: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x8003FFB4: sw          $v0, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r2;
    // 0x8003FFB8: lw          $a0, 0x4($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X4);
    // 0x8003FFBC: lw          $t0, 0x20($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X20);
    // 0x8003FFC0: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x8003FFC4: sltu        $at, $a0, $v1
    ctx->r1 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x8003FFC8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8003FFCC: beq         $at, $zero, L_8003FFE0
    if (ctx->r1 == 0) {
        // 0x8003FFD0: addu        $fp, $a2, $t0
        ctx->r30 = ADD32(ctx->r6, ctx->r8);
            goto L_8003FFE0;
    }
    // 0x8003FFD0: addu        $fp, $a2, $t0
    ctx->r30 = ADD32(ctx->r6, ctx->r8);
    // 0x8003FFD4: addu        $v0, $a2, $a1
    ctx->r2 = ADD32(ctx->r6, ctx->r5);
    // 0x8003FFD8: b           L_8003FFE4
    // 0x8003FFDC: sw          $v0, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r2;
        goto L_8003FFE4;
    // 0x8003FFDC: sw          $v0, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r2;
L_8003FFE0:
    // 0x8003FFE0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8003FFE4:
    // 0x8003FFE4: lw          $t1, 0x0($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X0);
    // 0x8003FFE8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8003FFEC: blez        $t1, L_800400A8
    if (SIGNED(ctx->r9) <= 0) {
        // 0x8003FFF0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_800400A8;
    }
    // 0x8003FFF0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003FFF4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8003FFF8: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    // 0x8003FFFC: addiu       $s6, $zero, 0x34
    ctx->r22 = ADD32(0, 0X34);
L_80040000:
    // 0x80040000: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80040004: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x80040008: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8004000C: beq         $at, $zero, L_80040024
    if (ctx->r1 == 0) {
        // 0x80040010: nop
    
            goto L_80040024;
    }
    // 0x80040010: nop

    // 0x80040014: multu       $v0, $s6
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80040018: mflo        $t2
    ctx->r10 = lo;
    // 0x8004001C: addu        $t3, $t2, $fp
    ctx->r11 = ADD32(ctx->r10, ctx->r30);
    // 0x80040020: sw          $t3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r11;
L_80040024:
    // 0x80040024: jal         0x80006DFC
    // 0x80040028: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_80006DFC(rdram, ctx);
        goto after_3;
    // 0x80040028: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_3:
    // 0x8004002C: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    // 0x80040030: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x80040034: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x80040038: nop

    // 0x8004003C: addu        $t6, $t5, $s0
    ctx->r14 = ADD32(ctx->r13, ctx->r16);
    // 0x80040040: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    // 0x80040044: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x80040048: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8004004C: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x80040050: nop

    // 0x80040054: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x80040058: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x8004005C: jal         0x80076BF8
    // 0x80040060: nop

    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80040060: nop

    after_4:
    // 0x80040064: beq         $s4, $s7, L_8004008C
    if (ctx->r20 == ctx->r23) {
        // 0x80040068: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8004008C;
    }
    // 0x80040068: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8004006C: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x80040070: nop

    // 0x80040074: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x80040078: nop

    // 0x8004007C: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x80040080: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80040084: nop

    // 0x80040088: sw          $s4, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r20;
L_8004008C:
    // 0x8004008C: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80040090: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80040094: slt         $at, $s2, $t4
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80040098: bne         $at, $zero, L_80040000
    if (ctx->r1 != 0) {
        // 0x8004009C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80040000;
    }
    // 0x8004009C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800400A0: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x800400A4: nop

L_800400A8:
    // 0x800400A8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800400AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800400B0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800400B4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800400B8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800400BC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800400C0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800400C4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800400C8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800400CC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800400D0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x800400D4: jr          $ra
    // 0x800400D8: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    return;
    // 0x800400D8: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
;}
RECOMP_FUNC void func_800400DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800400DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800400E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800400E4: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x800400E8: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    // 0x800400EC: jal         0x8003FF30
    // 0x800400F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003FF30(rdram, ctx);
        goto after_0;
    // 0x800400F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800400F4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800400F8: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x800400FC: nop

    // 0x80040100: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x80040104: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x80040108: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8004010C: nop

    // 0x80040110: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    // 0x80040114: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x80040118: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8004011C: nop

    // 0x80040120: swc1        $f0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
    // 0x80040124: swc1        $f0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f0.u32l;
    // 0x80040128: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8004012C: nop

    // 0x80040130: swc1        $f0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->f0.u32l;
    // 0x80040134: swc1        $f0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f0.u32l;
    // 0x80040138: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8004013C: nop

    // 0x80040140: swc1        $f0, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->f0.u32l;
    // 0x80040144: swc1        $f0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f0.u32l;
    // 0x80040148: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8004014C: nop

    // 0x80040150: swc1        $f0, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->f0.u32l;
    // 0x80040154: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x80040158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004015C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80040160: jr          $ra
    // 0x80040164: nop

    return;
    // 0x80040164: nop

;}
RECOMP_FUNC void func_80040170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040170: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80040174: lw          $a0, -0x3C78($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3C78);
    // 0x80040178: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004017C: beq         $a0, $zero, L_80040194
    if (ctx->r4 == 0) {
        // 0x80040180: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80040194;
    }
    // 0x80040180: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80040184: jal         0x800075A0
    // 0x80040188: nop

    func_800075A0(rdram, ctx);
        goto after_0;
    // 0x80040188: nop

    after_0:
    // 0x8004018C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80040190: sw          $zero, -0x3C78($at)
    MEM_W(-0X3C78, ctx->r1) = 0;
L_80040194:
    // 0x80040194: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80040198: lw          $a0, -0x3C68($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3C68);
    // 0x8004019C: nop

    // 0x800401A0: beq         $a0, $zero, L_800401BC
    if (ctx->r4 == 0) {
        // 0x800401A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800401BC;
    }
    // 0x800401A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800401A8: jal         0x800075A0
    // 0x800401AC: nop

    func_800075A0(rdram, ctx);
        goto after_1;
    // 0x800401AC: nop

    after_1:
    // 0x800401B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800401B4: sw          $zero, -0x3C68($at)
    MEM_W(-0X3C68, ctx->r1) = 0;
    // 0x800401B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800401BC:
    // 0x800401BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800401C0: jr          $ra
    // 0x800401C4: nop

    return;
    // 0x800401C4: nop

    // 0x800401C8: jr          $ra
    // 0x800401CC: nop

    return;
    // 0x800401CC: nop

    // 0x800401D0: jr          $ra
    // 0x800401D4: nop

    return;
    // 0x800401D4: nop

;}
RECOMP_FUNC void func_800401D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800401D8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800401DC: addiu       $a0, $a0, -0x4298
    ctx->r4 = ADD32(ctx->r4, -0X4298);
    // 0x800401E0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800401E4: lw          $t8, 0x120($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X120);
    // 0x800401E8: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x800401EC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800401F0: addu        $t5, $t7, $t9
    ctx->r13 = ADD32(ctx->r15, ctx->r25);
    // 0x800401F4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800401F8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800401FC: lw          $t6, 0xBFC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XBFC);
    // 0x80040200: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80040204: addiu       $t7, $t7, 0xD5C
    ctx->r15 = ADD32(ctx->r15, 0XD5C);
    // 0x80040208: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8004020C: addu        $t2, $t8, $t7
    ctx->r10 = ADD32(ctx->r24, ctx->r15);
    // 0x80040210: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x80040214: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80040218: addiu       $v0, $v0, -0x3C7C
    ctx->r2 = ADD32(ctx->r2, -0X3C7C);
    // 0x8004021C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80040220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80040224: bgez        $t4, L_8004024C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80040228: sw          $t6, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r14;
            goto L_8004024C;
    }
    // 0x80040228: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8004022C: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x80040230: addiu       $t5, $t5, 0xC9C
    ctx->r13 = ADD32(ctx->r13, 0XC9C);
    // 0x80040234: sll         $t9, $t6, 3
    ctx->r25 = S32(ctx->r14 << 3);
    // 0x80040238: addu        $v0, $t9, $t5
    ctx->r2 = ADD32(ctx->r25, ctx->r13);
    // 0x8004023C: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80040240: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x80040244: b           L_80040270
    // 0x80040248: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_80040270;
    // 0x80040248: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_8004024C:
    // 0x8004024C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80040250: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80040254: jal         0x80002F88
    // 0x80040258: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    func_80002F88(rdram, ctx);
        goto after_0;
    // 0x80040258: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    after_0:
    // 0x8004025C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80040260: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80040264: lhu         $a3, 0x0($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X0);
    // 0x80040268: lhu         $t1, 0x2($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X2);
    // 0x8004026C: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
L_80040270:
    // 0x80040270: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80040274: addiu       $a0, $a0, -0x4170
    ctx->r4 = ADD32(ctx->r4, -0X4170);
    // 0x80040278: sw          $a3, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r7;
    // 0x8004027C: sw          $t1, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r9;
    // 0x80040280: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80040284: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80040288: addiu       $v1, $v1, -0x75A8
    ctx->r3 = ADD32(ctx->r3, -0X75A8);
    // 0x8004028C: addiu       $a0, $a0, -0x65A8
    ctx->r4 = ADD32(ctx->r4, -0X65A8);
    // 0x80040290: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_80040294:
    // 0x80040294: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80040298: sh          $v0, -0x8($v1)
    MEM_H(-0X8, ctx->r3) = ctx->r2;
    // 0x8004029C: sh          $v0, -0x6($v1)
    MEM_H(-0X6, ctx->r3) = ctx->r2;
    // 0x800402A0: sh          $v0, -0x4($v1)
    MEM_H(-0X4, ctx->r3) = ctx->r2;
    // 0x800402A4: bne         $v1, $a0, L_80040294
    if (ctx->r3 != ctx->r4) {
        // 0x800402A8: sh          $v0, -0x2($v1)
        MEM_H(-0X2, ctx->r3) = ctx->r2;
            goto L_80040294;
    }
    // 0x800402A8: sh          $v0, -0x2($v1)
    MEM_H(-0X2, ctx->r3) = ctx->r2;
    // 0x800402AC: blez        $t1, L_80040398
    if (SIGNED(ctx->r9) <= 0) {
        // 0x800402B0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80040398;
    }
    // 0x800402B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800402B4: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800402B8: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x800402BC: addiu       $t0, $t0, 0xDAC
    ctx->r8 = ADD32(ctx->r8, 0XDAC);
    // 0x800402C0: addiu       $t3, $t3, -0x75A8
    ctx->r11 = ADD32(ctx->r11, -0X75A8);
    // 0x800402C4: sll         $t8, $a2, 7
    ctx->r24 = S32(ctx->r6 << 7);
L_800402C8:
    // 0x800402C8: addu        $v0, $t3, $t8
    ctx->r2 = ADD32(ctx->r11, ctx->r24);
    // 0x800402CC: blez        $a3, L_8004038C
    if (SIGNED(ctx->r7) <= 0) {
        // 0x800402D0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8004038C;
    }
    // 0x800402D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_800402D4:
    // 0x800402D4: beq         $a1, $zero, L_8004031C
    if (ctx->r5 == 0) {
        // 0x800402D8: addiu       $v1, $a0, 0x1
        ctx->r3 = ADD32(ctx->r4, 0X1);
            goto L_8004031C;
    }
    // 0x800402D8: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x800402DC: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x800402E0: bne         $t2, $t0, L_80040314
    if (ctx->r10 != ctx->r8) {
        // 0x800402E4: sh          $t7, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r15;
            goto L_80040314;
    }
    // 0x800402E4: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x800402E8: slti        $at, $a0, 0xD
    ctx->r1 = SIGNED(ctx->r4) < 0XD ? 1 : 0;
    // 0x800402EC: bne         $at, $zero, L_800402F8
    if (ctx->r1 != 0) {
        // 0x800402F0: ori         $t5, $t7, 0x400
        ctx->r13 = ctx->r15 | 0X400;
            goto L_800402F8;
    }
    // 0x800402F0: ori         $t5, $t7, 0x400
    ctx->r13 = ctx->r15 | 0X400;
    // 0x800402F4: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
L_800402F8:
    // 0x800402F8: slti        $at, $a2, 0x9
    ctx->r1 = SIGNED(ctx->r6) < 0X9 ? 1 : 0;
    // 0x800402FC: bne         $at, $zero, L_80040314
    if (ctx->r1 != 0) {
        // 0x80040300: nop
    
            goto L_80040314;
    }
    // 0x80040300: nop

    // 0x80040304: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x80040308: nop

    // 0x8004030C: ori         $t8, $t6, 0x800
    ctx->r24 = ctx->r14 | 0X800;
    // 0x80040310: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
L_80040314:
    // 0x80040314: b           L_80040380
    // 0x80040318: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
        goto L_80040380;
    // 0x80040318: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
L_8004031C:
    // 0x8004031C: bne         $a2, $zero, L_80040330
    if (ctx->r6 != 0) {
        // 0x80040320: sh          $zero, 0x0($v0)
        MEM_H(0X0, ctx->r2) = 0;
            goto L_80040330;
    }
    // 0x80040320: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x80040324: ori         $t9, $zero, 0x40
    ctx->r25 = 0 | 0X40;
    // 0x80040328: b           L_8004034C
    // 0x8004032C: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
        goto L_8004034C;
    // 0x8004032C: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
L_80040330:
    // 0x80040330: addiu       $t5, $a2, 0x1
    ctx->r13 = ADD32(ctx->r6, 0X1);
    // 0x80040334: bne         $t1, $t5, L_8004034C
    if (ctx->r9 != ctx->r13) {
        // 0x80040338: nop
    
            goto L_8004034C;
    }
    // 0x80040338: nop

    // 0x8004033C: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x80040340: nop

    // 0x80040344: ori         $t8, $t6, 0x10
    ctx->r24 = ctx->r14 | 0X10;
    // 0x80040348: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
L_8004034C:
    // 0x8004034C: bne         $a0, $zero, L_80040368
    if (ctx->r4 != 0) {
        // 0x80040350: addiu       $v1, $a0, 0x1
        ctx->r3 = ADD32(ctx->r4, 0X1);
            goto L_80040368;
    }
    // 0x80040350: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x80040354: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x80040358: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x8004035C: ori         $t9, $t7, 0x80
    ctx->r25 = ctx->r15 | 0X80;
    // 0x80040360: b           L_80040380
    // 0x80040364: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
        goto L_80040380;
    // 0x80040364: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
L_80040368:
    // 0x80040368: bne         $a3, $v1, L_80040384
    if (ctx->r7 != ctx->r3) {
        // 0x8004036C: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_80040384;
    }
    // 0x8004036C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80040370: lhu         $t5, 0x0($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X0);
    // 0x80040374: nop

    // 0x80040378: ori         $t6, $t5, 0x20
    ctx->r14 = ctx->r13 | 0X20;
    // 0x8004037C: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
L_80040380:
    // 0x80040380: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_80040384:
    // 0x80040384: bne         $v1, $a3, L_800402D4
    if (ctx->r3 != ctx->r7) {
        // 0x80040388: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_800402D4;
    }
    // 0x80040388: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8004038C:
    // 0x8004038C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80040390: bne         $a2, $t1, L_800402C8
    if (ctx->r6 != ctx->r9) {
        // 0x80040394: sll         $t8, $a2, 7
        ctx->r24 = S32(ctx->r6 << 7);
            goto L_800402C8;
    }
    // 0x80040394: sll         $t8, $a2, 7
    ctx->r24 = S32(ctx->r6 << 7);
L_80040398:
    // 0x80040398: beq         $a1, $zero, L_800403A8
    if (ctx->r5 == 0) {
        // 0x8004039C: nop
    
            goto L_800403A8;
    }
    // 0x8004039C: nop

    // 0x800403A0: jal         0x80002D08
    // 0x800403A4: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_80002D08(rdram, ctx);
        goto after_1;
    // 0x800403A4: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_1:
L_800403A8:
    // 0x800403A8: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800403AC: addiu       $a0, $a0, 0x12F0
    ctx->r4 = ADD32(ctx->r4, 0X12F0);
    // 0x800403B0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x800403B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800403B8: jal         0x80007C3C
    // 0x800403BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_2;
    // 0x800403BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x800403C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800403C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800403C8: sw          $v0, -0x3C78($at)
    MEM_W(-0X3C78, ctx->r1) = ctx->r2;
    // 0x800403CC: jr          $ra
    // 0x800403D0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x800403D0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_800403D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800403D4: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800403D8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800403DC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x800403E0: addiu       $t7, $t7, -0x7688
    ctx->r15 = ADD32(ctx->r15, -0X7688);
    // 0x800403E4: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800403E8: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800403EC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800403F0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x800403F4: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x800403F8: addiu       $v1, $v1, 0x3F44
    ctx->r3 = ADD32(ctx->r3, 0X3F44);
    // 0x800403FC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80040400: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80040404: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x80040408: sw          $a0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r4;
    // 0x8004040C: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x80040410: sw          $a1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r5;
    // 0x80040414: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x80040418: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x8004041C: sw          $t8, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r24;
    // 0x80040420: sw          $a1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r5;
    // 0x80040424: sw          $zero, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = 0;
    // 0x80040428: sw          $zero, 0x30($v0)
    MEM_W(0X30, ctx->r2) = 0;
    // 0x8004042C: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
    // 0x80040430: jr          $ra
    // 0x80040434: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    return;
    // 0x80040434: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80040438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040438: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004043C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80040440: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80040444: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
L_80040448:
    // 0x80040448: jal         0x800403D4
    // 0x8004044C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800403D4(rdram, ctx);
        goto after_0;
    // 0x8004044C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x80040450: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80040454: bne         $a2, $a3, L_80040448
    if (ctx->r6 != ctx->r7) {
        // 0x80040458: nop
    
            goto L_80040448;
    }
    // 0x80040458: nop

    // 0x8004045C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80040460: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80040464: sw          $zero, 0x1A44($at)
    MEM_W(0X1A44, ctx->r1) = 0;
    // 0x80040468: jr          $ra
    // 0x8004046C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8004046C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80040470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040470: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80040474: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80040478: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8004047C: addiu       $t7, $t7, -0x7688
    ctx->r15 = ADD32(ctx->r15, -0X7688);
    // 0x80040480: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80040484: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80040488: lw          $a1, 0x34($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X34);
    // 0x8004048C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80040490: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80040494: beq         $a1, $zero, L_800404BC
    if (ctx->r5 == 0) {
        // 0x80040498: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_800404BC;
    }
    // 0x80040498: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8004049C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800404A0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800404A4: jal         0x800075A0
    // 0x800404A8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800075A0(rdram, ctx);
        goto after_0;
    // 0x800404A8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x800404AC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x800404B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800404B4: jal         0x800403D4
    // 0x800404B8: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
    func_800403D4(rdram, ctx);
        goto after_1;
    // 0x800404B8: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
    after_1:
L_800404BC:
    // 0x800404BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800404C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800404C4: jr          $ra
    // 0x800404C8: nop

    return;
    // 0x800404C8: nop

;}
RECOMP_FUNC void func_800404CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800404CC: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x800404D0: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800404D4: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800404D8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800404DC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800404E0: jr          $ra
    // 0x800404E4: sw          $zero, -0x765C($at)
    MEM_W(-0X765C, ctx->r1) = 0;
    return;
    // 0x800404E4: sw          $zero, -0x765C($at)
    MEM_W(-0X765C, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800404E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800404E8: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x800404EC: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x800404F0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800404F4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800404F8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800404FC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80040500: jr          $ra
    // 0x80040504: sw          $t6, -0x765C($at)
    MEM_W(-0X765C, ctx->r1) = ctx->r14;
    return;
    // 0x80040504: sw          $t6, -0x765C($at)
    MEM_W(-0X765C, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80040508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040508: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004050C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80040510: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80040514: jal         0x8002D000
    // 0x80040518: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x80040518: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8004051C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80040520: jal         0x8005B0A0
    // 0x80040524: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8005B0A0(rdram, ctx);
        goto after_1;
    // 0x80040524: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80040528: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8004052C: addiu       $a0, $a0, 0x2CC8
    ctx->r4 = ADD32(ctx->r4, 0X2CC8);
    // 0x80040530: ori         $a1, $zero, 0xFF8F
    ctx->r5 = 0 | 0XFF8F;
    // 0x80040534: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x80040538: jal         0x80007C3C
    // 0x8004053C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_2;
    // 0x8004053C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x80040540: sll         $t6, $s0, 3
    ctx->r14 = S32(ctx->r16 << 3);
    // 0x80040544: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x80040548: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8004054C: addiu       $t7, $t7, -0x7688
    ctx->r15 = ADD32(ctx->r15, -0X7688);
    // 0x80040550: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80040554: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80040558: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x8004055C: addiu       $t9, $t9, -0x3C60
    ctx->r25 = ADD32(ctx->r25, -0X3C60);
    // 0x80040560: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x80040564: sw          $v0, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r2;
    // 0x80040568: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x8004056C: sw          $s0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r16;
    // 0x80040570: lw          $t0, 0x34($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X34);
    // 0x80040574: nop

    // 0x80040578: sw          $a0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r4;
    // 0x8004057C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80040580: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80040584: jr          $ra
    // 0x80040588: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80040588: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004058C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004058C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80040590: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x80040594: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80040598: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004059C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x800405A0: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x800405A4: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x800405A8: jal         0x8002D000
    // 0x800405AC: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x800405AC: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x800405B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800405B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800405B8: jal         0x8004A0A0
    // 0x800405BC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x800405BC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_1:
    // 0x800405C0: beq         $v0, $zero, L_800405D0
    if (ctx->r2 == 0) {
        // 0x800405C4: nop
    
            goto L_800405D0;
    }
    // 0x800405C4: nop

    // 0x800405C8: b           L_80040668
    // 0x800405CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80040668;
    // 0x800405CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800405D0:
    // 0x800405D0: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800405D4: jal         0x80028C2C
    // 0x800405D8: nop

    func_80028C2C(rdram, ctx);
        goto after_2;
    // 0x800405D8: nop

    after_2:
    // 0x800405DC: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800405E0: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800405E4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800405E8: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800405EC: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800405F0: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800405F4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800405F8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800405FC: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x80040600: jal         0x80028C00
    // 0x80040604: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    func_80028C00(rdram, ctx);
        goto after_3;
    // 0x80040604: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x80040608: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8004060C: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80040610: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80040614: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80040618: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x8004061C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80040620: jal         0x8005093C
    // 0x80040624: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    func_8005093C(rdram, ctx);
        goto after_4;
    // 0x80040624: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x80040628: andi        $t6, $v0, 0x7000
    ctx->r14 = ctx->r2 & 0X7000;
    // 0x8004062C: addiu       $at, $zero, 0x1000
    ctx->r1 = ADD32(0, 0X1000);
    // 0x80040630: bne         $t6, $at, L_80040644
    if (ctx->r14 != ctx->r1) {
        // 0x80040634: lui         $at, 0xC700
        ctx->r1 = S32(0XC700 << 16);
            goto L_80040644;
    }
    // 0x80040634: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x80040638: b           L_80040668
    // 0x8004063C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80040668;
    // 0x8004063C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80040640: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
L_80040644:
    // 0x80040644: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80040648: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8004064C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80040650: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80040654: nop

    // 0x80040658: bc1f        L_80040668
    if (!c1cs) {
        // 0x8004065C: nop
    
            goto L_80040668;
    }
    // 0x8004065C: nop

    // 0x80040660: b           L_80040668
    // 0x80040664: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80040668;
    // 0x80040664: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80040668:
    // 0x80040668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004066C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80040670: jr          $ra
    // 0x80040674: nop

    return;
    // 0x80040674: nop

;}
RECOMP_FUNC void func_80040678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040678: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8004067C: lw          $t6, -0x77CC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X77CC);
    // 0x80040680: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80040684: beq         $t6, $zero, L_800406D0
    if (ctx->r14 == 0) {
        // 0x80040688: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800406D0;
    }
    // 0x80040688: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004068C: jal         0x800075A0
    // 0x80040690: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_800075A0(rdram, ctx);
        goto after_0;
    // 0x80040690: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x80040694: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80040698: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004069C: sw          $zero, -0x77CC($at)
    MEM_W(-0X77CC, ctx->r1) = 0;
    // 0x800406A0: addiu       $a2, $a2, -0x3C98
    ctx->r6 = ADD32(ctx->r6, -0X3C98);
    // 0x800406A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800406A8: jal         0x80056C2C
    // 0x800406AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80056C2C(rdram, ctx);
        goto after_1;
    // 0x800406AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x800406B0: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x800406B4: addiu       $a2, $a2, -0x3C98
    ctx->r6 = ADD32(ctx->r6, -0X3C98);
    // 0x800406B8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x800406BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800406C0: andi        $t7, $v0, 0x100
    ctx->r15 = ctx->r2 & 0X100;
    // 0x800406C4: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x800406C8: jal         0x80056C2C
    // 0x800406CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80056C2C(rdram, ctx);
        goto after_2;
    // 0x800406CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
L_800406D0:
    // 0x800406D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800406D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800406D8: jr          $ra
    // 0x800406DC: nop

    return;
    // 0x800406DC: nop

;}
RECOMP_FUNC void func_800406E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800406E0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800406E4: jr          $ra
    // 0x800406E8: sw          $zero, -0x77CC($at)
    MEM_W(-0X77CC, ctx->r1) = 0;
    return;
    // 0x800406E8: sw          $zero, -0x77CC($at)
    MEM_W(-0X77CC, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800406EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800406EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800406F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800406F4: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800406F8: addiu       $a0, $a0, 0x4948
    ctx->r4 = ADD32(ctx->r4, 0X4948);
    // 0x800406FC: ori         $a1, $zero, 0xFF8E
    ctx->r5 = 0 | 0XFF8E;
    // 0x80040700: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x80040704: jal         0x80007C3C
    // 0x80040708: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_0;
    // 0x80040708: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8004070C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80040710: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80040714: sw          $v0, -0x77CC($at)
    MEM_W(-0X77CC, ctx->r1) = ctx->r2;
    // 0x80040718: jr          $ra
    // 0x8004071C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8004071C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80040720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040720: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80040724: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80040728: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8004072C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80040730: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80040734: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80040738: addiu       $s0, $s0, -0x7728
    ctx->r16 = ADD32(ctx->r16, -0X7728);
    // 0x8004073C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80040740: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
L_80040744:
    // 0x80040744: lw          $a0, 0x4C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4C);
    // 0x80040748: nop

    // 0x8004074C: beq         $a0, $zero, L_80040760
    if (ctx->r4 == 0) {
        // 0x80040750: nop
    
            goto L_80040760;
    }
    // 0x80040750: nop

    // 0x80040754: jal         0x800075A0
    // 0x80040758: nop

    func_800075A0(rdram, ctx);
        goto after_0;
    // 0x80040758: nop

    after_0:
    // 0x8004075C: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
L_80040760:
    // 0x80040760: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80040764: bne         $s1, $s2, L_80040744
    if (ctx->r17 != ctx->r18) {
        // 0x80040768: addiu       $s0, $s0, 0x50
        ctx->r16 = ADD32(ctx->r16, 0X50);
            goto L_80040744;
    }
    // 0x80040768: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    // 0x8004076C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80040770: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80040774: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80040778: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8004077C: jr          $ra
    // 0x80040780: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80040780: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80040784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040784: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80040788: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8004078C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80040790: addiu       $t7, $t7, -0x7868
    ctx->r15 = ADD32(ctx->r15, -0X7868);
    // 0x80040794: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80040798: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8004079C: lw          $t8, 0x18C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X18C);
    // 0x800407A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800407A4: beq         $t8, $zero, L_800407C8
    if (ctx->r24 == 0) {
        // 0x800407A8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800407C8;
    }
    // 0x800407A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800407AC: addiu       $v1, $v0, 0x140
    ctx->r3 = ADD32(ctx->r2, 0X140);
    // 0x800407B0: lw          $a0, 0x4C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4C);
    // 0x800407B4: jal         0x800075A0
    // 0x800407B8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_800075A0(rdram, ctx);
        goto after_0;
    // 0x800407B8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x800407BC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800407C0: nop

    // 0x800407C4: sw          $zero, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = 0;
L_800407C8:
    // 0x800407C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800407CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800407D0: jr          $ra
    // 0x800407D4: nop

    return;
    // 0x800407D4: nop

;}
RECOMP_FUNC void func_800407D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800407D8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800407DC: addiu       $v0, $v0, -0x7728
    ctx->r2 = ADD32(ctx->r2, -0X7728);
    // 0x800407E0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800407E4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_800407E8:
    // 0x800407E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800407EC: sw          $zero, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = 0;
    // 0x800407F0: bne         $v1, $a0, L_800407E8
    if (ctx->r3 != ctx->r4) {
        // 0x800407F4: addiu       $v0, $v0, 0x50
        ctx->r2 = ADD32(ctx->r2, 0X50);
            goto L_800407E8;
    }
    // 0x800407F4: addiu       $v0, $v0, 0x50
    ctx->r2 = ADD32(ctx->r2, 0X50);
    // 0x800407F8: jr          $ra
    // 0x800407FC: nop

    return;
    // 0x800407FC: nop

;}
RECOMP_FUNC void func_80040800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040800: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80040804: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80040808: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8004080C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80040810: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80040814: jr          $ra
    // 0x80040818: sw          $zero, -0x76DC($at)
    MEM_W(-0X76DC, ctx->r1) = 0;
    return;
    // 0x80040818: sw          $zero, -0x76DC($at)
    MEM_W(-0X76DC, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8004081C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004081C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80040820: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80040824: addiu       $s0, $s0, -0x3C8C
    ctx->r16 = ADD32(ctx->r16, -0X3C8C);
    // 0x80040828: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004082C: jal         0x8005BCB4
    // 0x80040830: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8005BCB4(rdram, ctx);
        goto after_0;
    // 0x80040830: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x80040834: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80040838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004083C: andi        $t6, $v1, 0x1000
    ctx->r14 = ctx->r3 & 0X1000;
    // 0x80040840: beq         $t6, $zero, L_80040850
    if (ctx->r14 == 0) {
        // 0x80040844: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80040850;
    }
    // 0x80040844: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80040848: b           L_80040850
    // 0x8004084C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80040850;
    // 0x8004084C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80040850:
    // 0x80040850: beq         $v0, $zero, L_80040880
    if (ctx->r2 == 0) {
        // 0x80040854: andi        $t7, $v1, 0x2000
        ctx->r15 = ctx->r3 & 0X2000;
            goto L_80040880;
    }
    // 0x80040854: andi        $t7, $v1, 0x2000
    ctx->r15 = ctx->r3 & 0X2000;
    // 0x80040858: beq         $t7, $zero, L_80040868
    if (ctx->r15 == 0) {
        // 0x8004085C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80040868;
    }
    // 0x8004085C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80040860: b           L_80040868
    // 0x80040864: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80040868;
    // 0x80040864: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80040868:
    // 0x80040868: bne         $v0, $zero, L_80040878
    if (ctx->r2 != 0) {
        // 0x8004086C: nop
    
            goto L_80040878;
    }
    // 0x8004086C: nop

    // 0x80040870: b           L_80040884
    // 0x80040874: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80040884;
    // 0x80040874: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80040878:
    // 0x80040878: b           L_80040884
    // 0x8004087C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80040884;
    // 0x8004087C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80040880:
    // 0x80040880: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80040884:
    // 0x80040884: jr          $ra
    // 0x80040888: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80040888: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004088C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004088C: jr          $ra
    // 0x80040890: nop

    return;
    // 0x80040890: nop

;}
RECOMP_FUNC void func_8004089C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004089C: bltz        $a0, L_8004093C
    if (SIGNED(ctx->r4) < 0) {
        // 0x800408A0: lui         $t3, 0x800D
        ctx->r11 = S32(0X800D << 16);
            goto L_8004093C;
    }
    // 0x800408A0: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x800408A4: addiu       $t3, $t3, -0x75A8
    ctx->r11 = ADD32(ctx->r11, -0X75A8);
    // 0x800408A8: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x800408AC: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x800408B0: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x800408B4: addiu       $at, $zero, 0xF0
    ctx->r1 = ADD32(0, 0XF0);
    // 0x800408B8: andi        $t9, $t8, 0xF0
    ctx->r25 = ctx->r24 & 0XF0;
    // 0x800408BC: beq         $t9, $at, L_8004093C
    if (ctx->r25 == ctx->r1) {
        // 0x800408C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8004093C;
    }
    // 0x800408C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800408C4: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x800408C8: addiu       $t5, $t5, 0xBC0
    ctx->r13 = ADD32(ctx->r13, 0XBC0);
    // 0x800408CC: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x800408D0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_800408D4:
    // 0x800408D4: blez        $a2, L_80040930
    if (SIGNED(ctx->r6) <= 0) {
        // 0x800408D8: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80040930;
    }
    // 0x800408D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800408DC: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x800408E0: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x800408E4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800408E8: lw          $t2, 0xBD4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0XBD4);
    // 0x800408EC: nop

L_800408F0:
    // 0x800408F0: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x800408F4: addu        $a3, $t3, $t6
    ctx->r7 = ADD32(ctx->r11, ctx->r14);
    // 0x800408F8: lhu         $t7, 0x0($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X0);
    // 0x800408FC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80040900: ori         $t8, $t7, 0x200
    ctx->r24 = ctx->r15 | 0X200;
    // 0x80040904: andi        $t0, $t8, 0xFFFF
    ctx->r8 = ctx->r24 & 0XFFFF;
    // 0x80040908: and         $t9, $t2, $t0
    ctx->r25 = ctx->r10 & ctx->r8;
    // 0x8004090C: andi        $t6, $t9, 0xF0
    ctx->r14 = ctx->r25 & 0XF0;
    // 0x80040910: bne         $t6, $zero, L_80040930
    if (ctx->r14 != 0) {
        // 0x80040914: sh          $t8, 0x0($a3)
        MEM_H(0X0, ctx->r7) = ctx->r24;
            goto L_80040930;
    }
    // 0x80040914: sh          $t8, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r24;
    // 0x80040918: andi        $t7, $t0, 0x100
    ctx->r15 = ctx->r8 & 0X100;
    // 0x8004091C: bne         $t7, $zero, L_80040930
    if (ctx->r15 != 0) {
        // 0x80040920: addu        $t8, $t5, $t1
        ctx->r24 = ADD32(ctx->r13, ctx->r9);
            goto L_80040930;
    }
    // 0x80040920: addu        $t8, $t5, $t1
    ctx->r24 = ADD32(ctx->r13, ctx->r9);
    // 0x80040924: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80040928: bne         $a1, $a2, L_800408F0
    if (ctx->r5 != ctx->r6) {
        // 0x8004092C: addu        $v1, $v1, $t9
        ctx->r3 = ADD32(ctx->r3, ctx->r25);
            goto L_800408F0;
    }
    // 0x8004092C: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
L_80040930:
    // 0x80040930: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80040934: bne         $v0, $t4, L_800408D4
    if (ctx->r2 != ctx->r12) {
        // 0x80040938: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_800408D4;
    }
    // 0x80040938: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8004093C:
    // 0x8004093C: jr          $ra
    // 0x80040940: nop

    return;
    // 0x80040940: nop

    // 0x80040944: jr          $ra
    // 0x80040948: nop

    return;
    // 0x80040948: nop

;}
RECOMP_FUNC void func_8004094C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004094C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80040950: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80040954: addiu       $fp, $sp, 0x4C
    ctx->r30 = ADD32(ctx->r29, 0X4C);
    // 0x80040958: jal         0x8005AB1C
    // 0x8004095C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_8005AB1C(rdram, ctx);
        goto after_0;
    // 0x8004095C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_0:
    // 0x80040960: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80040964: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x80040968: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8004096C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80040970: bne         $t7, $zero, L_80040D68
    if (ctx->r15 != 0) {
        // 0x80040974: or          $s7, $v0, $zero
        ctx->r23 = ctx->r2 | 0;
            goto L_80040D68;
    }
    // 0x80040974: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x80040978: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8004097C: addiu       $a1, $a1, -0x65A8
    ctx->r5 = ADD32(ctx->r5, -0X65A8);
    // 0x80040980: addiu       $v1, $v1, -0x75A8
    ctx->r3 = ADD32(ctx->r3, -0X75A8);
    // 0x80040984: addiu       $a0, $zero, -0x201
    ctx->r4 = ADD32(0, -0X201);
L_80040988:
    // 0x80040988: lhu         $t8, 0x0($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X0);
    // 0x8004098C: lhu         $t6, 0x2($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X2);
    // 0x80040990: and         $t9, $t8, $a0
    ctx->r25 = ctx->r24 & ctx->r4;
    // 0x80040994: and         $t7, $t6, $a0
    ctx->r15 = ctx->r14 & ctx->r4;
    // 0x80040998: lhu         $t6, 0x6($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X6);
    // 0x8004099C: lhu         $t8, 0x4($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X4);
    // 0x800409A0: sh          $t7, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r15;
    // 0x800409A4: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
    // 0x800409A8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800409AC: and         $t7, $t6, $a0
    ctx->r15 = ctx->r14 & ctx->r4;
    // 0x800409B0: and         $t9, $t8, $a0
    ctx->r25 = ctx->r24 & ctx->r4;
    // 0x800409B4: sh          $t9, -0x4($v1)
    MEM_H(-0X4, ctx->r3) = ctx->r25;
    // 0x800409B8: bne         $v1, $a1, L_80040988
    if (ctx->r3 != ctx->r5) {
        // 0x800409BC: sh          $t7, -0x2($v1)
        MEM_H(-0X2, ctx->r3) = ctx->r15;
            goto L_80040988;
    }
    // 0x800409BC: sh          $t7, -0x2($v1)
    MEM_H(-0X2, ctx->r3) = ctx->r15;
    // 0x800409C0: blez        $v0, L_80040BB0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800409C4: or          $s5, $zero, $zero
        ctx->r21 = 0 | 0;
            goto L_80040BB0;
    }
    // 0x800409C4: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x800409C8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800409CC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800409D0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x800409D4: addiu       $s6, $zero, 0x64
    ctx->r22 = ADD32(0, 0X64);
L_800409D8:
    // 0x800409D8: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800409DC: nop

    // 0x800409E0: addu        $t9, $t8, $s4
    ctx->r25 = ADD32(ctx->r24, ctx->r20);
    // 0x800409E4: lw          $s0, 0x0($t9)
    ctx->r16 = MEM_W(ctx->r25, 0X0);
    // 0x800409E8: nop

    // 0x800409EC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x800409F0: jal         0x8005AE1C
    // 0x800409F4: nop

    func_8005AE1C(rdram, ctx);
        goto after_1;
    // 0x800409F4: nop

    after_1:
    // 0x800409F8: bne         $v0, $zero, L_80040BA0
    if (ctx->r2 != 0) {
        // 0x800409FC: nop
    
            goto L_80040BA0;
    }
    // 0x800409FC: nop

    // 0x80040A00: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80040A04: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80040A08: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80040A0C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80040A10: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80040A14: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80040A18: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80040A1C: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80040A20: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80040A24: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x80040A28: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80040A2C: div         $zero, $t7, $s6
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r22)));
    // 0x80040A30: bne         $s6, $zero, L_80040A3C
    if (ctx->r22 != 0) {
        // 0x80040A34: nop
    
            goto L_80040A3C;
    }
    // 0x80040A34: nop

    // 0x80040A38: break       7
    do_break(2147748408);
L_80040A3C:
    // 0x80040A3C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80040A40: bne         $s6, $at, L_80040A54
    if (ctx->r22 != ctx->r1) {
        // 0x80040A44: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80040A54;
    }
    // 0x80040A44: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80040A48: bne         $t7, $at, L_80040A54
    if (ctx->r15 != ctx->r1) {
        // 0x80040A4C: nop
    
            goto L_80040A54;
    }
    // 0x80040A4C: nop

    // 0x80040A50: break       6
    do_break(2147748432);
L_80040A54:
    // 0x80040A54: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80040A58: nop

    // 0x80040A5C: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80040A60: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80040A64: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80040A68: nop

    // 0x80040A6C: cvt.w.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = CVT_W_S(ctx->f2.fl);
    // 0x80040A70: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80040A74: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x80040A78: div.s       $f8, $f2, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = DIV_S(ctx->f2.fl, ctx->f20.fl);
    // 0x80040A7C: mfhi        $s1
    ctx->r17 = hi;
    // 0x80040A80: nop

    // 0x80040A84: nop

    // 0x80040A88: div         $zero, $t9, $s6
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r22)));
    // 0x80040A8C: bne         $s6, $zero, L_80040A98
    if (ctx->r22 != 0) {
        // 0x80040A90: nop
    
            goto L_80040A98;
    }
    // 0x80040A90: nop

    // 0x80040A94: break       7
    do_break(2147748500);
L_80040A98:
    // 0x80040A98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80040A9C: bne         $s6, $at, L_80040AB0
    if (ctx->r22 != ctx->r1) {
        // 0x80040AA0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80040AB0;
    }
    // 0x80040AA0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80040AA4: bne         $t9, $at, L_80040AB0
    if (ctx->r25 != ctx->r1) {
        // 0x80040AA8: nop
    
            goto L_80040AB0;
    }
    // 0x80040AA8: nop

    // 0x80040AAC: break       6
    do_break(2147748524);
L_80040AB0:
    // 0x80040AB0: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80040AB4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80040AB8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80040ABC: nop

    // 0x80040AC0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80040AC4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80040AC8: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80040ACC: div.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80040AD0: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x80040AD4: mfhi        $s3
    ctx->r19 = hi;
    // 0x80040AD8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80040ADC: nop

    // 0x80040AE0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80040AE4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80040AE8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80040AEC: nop

    // 0x80040AF0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80040AF4: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x80040AF8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80040AFC: jal         0x8005AEA0
    // 0x80040B00: addu        $s2, $t8, $t6
    ctx->r18 = ADD32(ctx->r24, ctx->r14);
    func_8005AEA0(rdram, ctx);
        goto after_2;
    // 0x80040B00: addu        $s2, $t8, $t6
    ctx->r18 = ADD32(ctx->r24, ctx->r14);
    after_2:
    // 0x80040B04: nop

    // 0x80040B08: div.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80040B0C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80040B10: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80040B14: nop

    // 0x80040B18: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80040B1C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80040B20: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80040B24: nop

    // 0x80040B28: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80040B2C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80040B30: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80040B34: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80040B38: jal         0x8004089C
    // 0x80040B3C: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    func_8004089C(rdram, ctx);
        goto after_3;
    // 0x80040B3C: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    after_3:
    // 0x80040B40: slti        $at, $s1, 0x1E
    ctx->r1 = SIGNED(ctx->r17) < 0X1E ? 1 : 0;
    // 0x80040B44: beq         $at, $zero, L_80040B5C
    if (ctx->r1 == 0) {
        // 0x80040B48: addiu       $a0, $s2, -0x1
        ctx->r4 = ADD32(ctx->r18, -0X1);
            goto L_80040B5C;
    }
    // 0x80040B48: addiu       $a0, $s2, -0x1
    ctx->r4 = ADD32(ctx->r18, -0X1);
    // 0x80040B4C: jal         0x8004089C
    // 0x80040B50: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_8004089C(rdram, ctx);
        goto after_4;
    // 0x80040B50: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
    // 0x80040B54: b           L_80040B74
    // 0x80040B58: slti        $at, $s3, 0x1E
    ctx->r1 = SIGNED(ctx->r19) < 0X1E ? 1 : 0;
        goto L_80040B74;
    // 0x80040B58: slti        $at, $s3, 0x1E
    ctx->r1 = SIGNED(ctx->r19) < 0X1E ? 1 : 0;
L_80040B5C:
    // 0x80040B5C: slti        $at, $s1, 0x47
    ctx->r1 = SIGNED(ctx->r17) < 0X47 ? 1 : 0;
    // 0x80040B60: bne         $at, $zero, L_80040B70
    if (ctx->r1 != 0) {
        // 0x80040B64: addiu       $a0, $s2, 0x1
        ctx->r4 = ADD32(ctx->r18, 0X1);
            goto L_80040B70;
    }
    // 0x80040B64: addiu       $a0, $s2, 0x1
    ctx->r4 = ADD32(ctx->r18, 0X1);
    // 0x80040B68: jal         0x8004089C
    // 0x80040B6C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_8004089C(rdram, ctx);
        goto after_5;
    // 0x80040B6C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_5:
L_80040B70:
    // 0x80040B70: slti        $at, $s3, 0x1E
    ctx->r1 = SIGNED(ctx->r19) < 0X1E ? 1 : 0;
L_80040B74:
    // 0x80040B74: beq         $at, $zero, L_80040B8C
    if (ctx->r1 == 0) {
        // 0x80040B78: addiu       $a0, $s2, -0x40
        ctx->r4 = ADD32(ctx->r18, -0X40);
            goto L_80040B8C;
    }
    // 0x80040B78: addiu       $a0, $s2, -0x40
    ctx->r4 = ADD32(ctx->r18, -0X40);
    // 0x80040B7C: jal         0x8004089C
    // 0x80040B80: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_8004089C(rdram, ctx);
        goto after_6;
    // 0x80040B80: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_6:
    // 0x80040B84: b           L_80040BA4
    // 0x80040B88: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
        goto L_80040BA4;
    // 0x80040B88: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_80040B8C:
    // 0x80040B8C: slti        $at, $s3, 0x47
    ctx->r1 = SIGNED(ctx->r19) < 0X47 ? 1 : 0;
    // 0x80040B90: bne         $at, $zero, L_80040BA0
    if (ctx->r1 != 0) {
        // 0x80040B94: addiu       $a0, $s2, 0x40
        ctx->r4 = ADD32(ctx->r18, 0X40);
            goto L_80040BA0;
    }
    // 0x80040B94: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    // 0x80040B98: jal         0x8004089C
    // 0x80040B9C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_8004089C(rdram, ctx);
        goto after_7;
    // 0x80040B9C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_7:
L_80040BA0:
    // 0x80040BA0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_80040BA4:
    // 0x80040BA4: bne         $s5, $s7, L_800409D8
    if (ctx->r21 != ctx->r23) {
        // 0x80040BA8: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_800409D8;
    }
    // 0x80040BA8: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x80040BAC: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
L_80040BB0:
    // 0x80040BB0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80040BB4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80040BB8: addiu       $s6, $zero, 0x64
    ctx->r22 = ADD32(0, 0X64);
    // 0x80040BBC: jal         0x8005AF3C
    // 0x80040BC0: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_8005AF3C(rdram, ctx);
        goto after_8;
    // 0x80040BC0: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_8:
    // 0x80040BC4: blez        $v0, L_80040D68
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80040BC8: or          $s7, $v0, $zero
        ctx->r23 = ctx->r2 | 0;
            goto L_80040D68;
    }
    // 0x80040BC8: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x80040BCC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80040BD0: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x80040BD4: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
L_80040BD8:
    // 0x80040BD8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80040BDC: addu        $t8, $t9, $s4
    ctx->r24 = ADD32(ctx->r25, ctx->r20);
    // 0x80040BE0: lw          $v1, 0x0($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X0);
    // 0x80040BE4: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80040BE8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80040BEC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80040BF0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80040BF4: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80040BF8: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80040BFC: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80040C00: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80040C04: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x80040C08: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80040C0C: div         $zero, $t7, $s6
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r22)));
    // 0x80040C10: bne         $s6, $zero, L_80040C1C
    if (ctx->r22 != 0) {
        // 0x80040C14: nop
    
            goto L_80040C1C;
    }
    // 0x80040C14: nop

    // 0x80040C18: break       7
    do_break(2147748888);
L_80040C1C:
    // 0x80040C1C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80040C20: bne         $s6, $at, L_80040C34
    if (ctx->r22 != ctx->r1) {
        // 0x80040C24: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80040C34;
    }
    // 0x80040C24: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80040C28: bne         $t7, $at, L_80040C34
    if (ctx->r15 != ctx->r1) {
        // 0x80040C2C: nop
    
            goto L_80040C34;
    }
    // 0x80040C2C: nop

    // 0x80040C30: break       6
    do_break(2147748912);
L_80040C34:
    // 0x80040C34: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80040C38: nop

    // 0x80040C3C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80040C40: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80040C44: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80040C48: nop

    // 0x80040C4C: cvt.w.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = CVT_W_S(ctx->f2.fl);
    // 0x80040C50: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80040C54: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x80040C58: div.s       $f8, $f2, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = DIV_S(ctx->f2.fl, ctx->f20.fl);
    // 0x80040C5C: mfhi        $s1
    ctx->r17 = hi;
    // 0x80040C60: nop

    // 0x80040C64: nop

    // 0x80040C68: div         $zero, $t8, $s6
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r22)));
    // 0x80040C6C: bne         $s6, $zero, L_80040C78
    if (ctx->r22 != 0) {
        // 0x80040C70: nop
    
            goto L_80040C78;
    }
    // 0x80040C70: nop

    // 0x80040C74: break       7
    do_break(2147748980);
L_80040C78:
    // 0x80040C78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80040C7C: bne         $s6, $at, L_80040C90
    if (ctx->r22 != ctx->r1) {
        // 0x80040C80: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80040C90;
    }
    // 0x80040C80: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80040C84: bne         $t8, $at, L_80040C90
    if (ctx->r24 != ctx->r1) {
        // 0x80040C88: nop
    
            goto L_80040C90;
    }
    // 0x80040C88: nop

    // 0x80040C8C: break       6
    do_break(2147749004);
L_80040C90:
    // 0x80040C90: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80040C94: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80040C98: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80040C9C: nop

    // 0x80040CA0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80040CA4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80040CA8: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80040CAC: div.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80040CB0: sll         $t9, $t7, 6
    ctx->r25 = S32(ctx->r15 << 6);
    // 0x80040CB4: mfhi        $s3
    ctx->r19 = hi;
    // 0x80040CB8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80040CBC: nop

    // 0x80040CC0: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80040CC4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80040CC8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80040CCC: nop

    // 0x80040CD0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80040CD4: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x80040CD8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80040CDC: addu        $s2, $t9, $t6
    ctx->r18 = ADD32(ctx->r25, ctx->r14);
    // 0x80040CE0: jal         0x8004089C
    // 0x80040CE4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8004089C(rdram, ctx);
        goto after_9;
    // 0x80040CE4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_9:
    // 0x80040CE8: slti        $at, $s1, 0x1E
    ctx->r1 = SIGNED(ctx->r17) < 0X1E ? 1 : 0;
    // 0x80040CEC: beq         $at, $zero, L_80040D0C
    if (ctx->r1 == 0) {
        // 0x80040CF0: slti        $at, $s1, 0x47
        ctx->r1 = SIGNED(ctx->r17) < 0X47 ? 1 : 0;
            goto L_80040D0C;
    }
    // 0x80040CF0: slti        $at, $s1, 0x47
    ctx->r1 = SIGNED(ctx->r17) < 0X47 ? 1 : 0;
    // 0x80040CF4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80040CF8: jal         0x8004089C
    // 0x80040CFC: addiu       $a0, $s2, -0x1
    ctx->r4 = ADD32(ctx->r18, -0X1);
    func_8004089C(rdram, ctx);
        goto after_10;
    // 0x80040CFC: addiu       $a0, $s2, -0x1
    ctx->r4 = ADD32(ctx->r18, -0X1);
    after_10:
    // 0x80040D00: b           L_80040D24
    // 0x80040D04: slti        $at, $s3, 0x1E
    ctx->r1 = SIGNED(ctx->r19) < 0X1E ? 1 : 0;
        goto L_80040D24;
    // 0x80040D04: slti        $at, $s3, 0x1E
    ctx->r1 = SIGNED(ctx->r19) < 0X1E ? 1 : 0;
    // 0x80040D08: slti        $at, $s1, 0x47
    ctx->r1 = SIGNED(ctx->r17) < 0X47 ? 1 : 0;
L_80040D0C:
    // 0x80040D0C: bne         $at, $zero, L_80040D24
    if (ctx->r1 != 0) {
        // 0x80040D10: slti        $at, $s3, 0x1E
        ctx->r1 = SIGNED(ctx->r19) < 0X1E ? 1 : 0;
            goto L_80040D24;
    }
    // 0x80040D10: slti        $at, $s3, 0x1E
    ctx->r1 = SIGNED(ctx->r19) < 0X1E ? 1 : 0;
    // 0x80040D14: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80040D18: jal         0x8004089C
    // 0x80040D1C: addiu       $a0, $s2, 0x1
    ctx->r4 = ADD32(ctx->r18, 0X1);
    func_8004089C(rdram, ctx);
        goto after_11;
    // 0x80040D1C: addiu       $a0, $s2, 0x1
    ctx->r4 = ADD32(ctx->r18, 0X1);
    after_11:
    // 0x80040D20: slti        $at, $s3, 0x1E
    ctx->r1 = SIGNED(ctx->r19) < 0X1E ? 1 : 0;
L_80040D24:
    // 0x80040D24: beq         $at, $zero, L_80040D44
    if (ctx->r1 == 0) {
        // 0x80040D28: slti        $at, $s3, 0x47
        ctx->r1 = SIGNED(ctx->r19) < 0X47 ? 1 : 0;
            goto L_80040D44;
    }
    // 0x80040D28: slti        $at, $s3, 0x47
    ctx->r1 = SIGNED(ctx->r19) < 0X47 ? 1 : 0;
    // 0x80040D2C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80040D30: jal         0x8004089C
    // 0x80040D34: addiu       $a0, $s2, -0x40
    ctx->r4 = ADD32(ctx->r18, -0X40);
    func_8004089C(rdram, ctx);
        goto after_12;
    // 0x80040D34: addiu       $a0, $s2, -0x40
    ctx->r4 = ADD32(ctx->r18, -0X40);
    after_12:
    // 0x80040D38: b           L_80040D5C
    // 0x80040D3C: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
        goto L_80040D5C;
    // 0x80040D3C: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x80040D40: slti        $at, $s3, 0x47
    ctx->r1 = SIGNED(ctx->r19) < 0X47 ? 1 : 0;
L_80040D44:
    // 0x80040D44: bne         $at, $zero, L_80040D58
    if (ctx->r1 != 0) {
        // 0x80040D48: nop
    
            goto L_80040D58;
    }
    // 0x80040D48: nop

    // 0x80040D4C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80040D50: jal         0x8004089C
    // 0x80040D54: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    func_8004089C(rdram, ctx);
        goto after_13;
    // 0x80040D54: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    after_13:
L_80040D58:
    // 0x80040D58: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_80040D5C:
    // 0x80040D5C: slt         $at, $s4, $s0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80040D60: bne         $at, $zero, L_80040BD8
    if (ctx->r1 != 0) {
        // 0x80040D64: lw          $t9, 0x4C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X4C);
            goto L_80040BD8;
    }
    // 0x80040D64: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
L_80040D68:
    // 0x80040D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80040D6C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80040D70: jr          $ra
    // 0x80040D74: nop

    return;
    // 0x80040D74: nop

    // 0x80040D78: jr          $ra
    // 0x80040D7C: nop

    return;
    // 0x80040D7C: nop

;}
RECOMP_FUNC void func_80040D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040D80: blez        $a0, L_80040ECC
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80040D84: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80040ECC;
    }
    // 0x80040D84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80040D88: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x80040D8C: addiu       $t5, $t5, -0x75A8
    ctx->r13 = ADD32(ctx->r13, -0X75A8);
L_80040D90:
    // 0x80040D90: blez        $a1, L_80040EC0
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80040D94: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80040EC0;
    }
    // 0x80040D94: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80040D98: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80040D9C: lw          $t6, 0x1964($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1964);
    // 0x80040DA0: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80040DA4: multu       $t6, $v0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80040DA8: lw          $t1, 0x1960($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1960);
    // 0x80040DAC: andi        $a2, $a1, 0x3
    ctx->r6 = ctx->r5 & 0X3;
    // 0x80040DB0: mflo        $t7
    ctx->r15 = lo;
    // 0x80040DB4: addu        $t0, $t7, $a3
    ctx->r8 = ADD32(ctx->r15, ctx->r7);
    // 0x80040DB8: beq         $a2, $zero, L_80040E08
    if (ctx->r6 == 0) {
        // 0x80040DBC: nop
    
            goto L_80040E08;
    }
    // 0x80040DBC: nop

    // 0x80040DC0: multu       $t1, $zero
    result = U64(U32(ctx->r9)) * U64(U32(0)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80040DC4: or          $t4, $a2, $zero
    ctx->r12 = ctx->r6 | 0;
    // 0x80040DC8: mflo        $t8
    ctx->r24 = lo;
    // 0x80040DCC: addu        $t2, $t0, $t8
    ctx->r10 = ADD32(ctx->r8, ctx->r24);
    // 0x80040DD0: nop

L_80040DD4:
    // 0x80040DD4: sll         $t9, $t2, 1
    ctx->r25 = S32(ctx->r10 << 1);
    // 0x80040DD8: addu        $t3, $t5, $t9
    ctx->r11 = ADD32(ctx->r13, ctx->r25);
    // 0x80040DDC: lhu         $t6, 0x0($t3)
    ctx->r14 = MEM_HU(ctx->r11, 0X0);
    // 0x80040DE0: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80040DE4: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x80040DE8: sh          $t7, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r15;
    // 0x80040DEC: addiu       $t8, $t8, 0x1960
    ctx->r24 = ADD32(ctx->r24, 0X1960);
    // 0x80040DF0: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80040DF4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80040DF8: bne         $t4, $v1, L_80040DD4
    if (ctx->r12 != ctx->r3) {
        // 0x80040DFC: addu        $t2, $t2, $t9
        ctx->r10 = ADD32(ctx->r10, ctx->r25);
            goto L_80040DD4;
    }
    // 0x80040DFC: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x80040E00: beq         $v1, $a1, L_80040EC0
    if (ctx->r3 == ctx->r5) {
        // 0x80040E04: nop
    
            goto L_80040EC0;
    }
    // 0x80040E04: nop

L_80040E08:
    // 0x80040E08: multu       $t1, $v1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80040E0C: mflo        $t6
    ctx->r14 = lo;
    // 0x80040E10: addu        $t2, $t0, $t6
    ctx->r10 = ADD32(ctx->r8, ctx->r14);
    // 0x80040E14: nop

L_80040E18:
    // 0x80040E18: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x80040E1C: multu       $t1, $t6
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80040E20: sll         $t7, $t2, 1
    ctx->r15 = S32(ctx->r10 << 1);
    // 0x80040E24: addu        $t3, $t5, $t7
    ctx->r11 = ADD32(ctx->r13, ctx->r15);
    // 0x80040E28: lhu         $t8, 0x0($t3)
    ctx->r24 = MEM_HU(ctx->r11, 0X0);
    // 0x80040E2C: nop

    // 0x80040E30: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x80040E34: sh          $t9, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r25;
    // 0x80040E38: mflo        $t7
    ctx->r15 = lo;
    // 0x80040E3C: addu        $a2, $t0, $t7
    ctx->r6 = ADD32(ctx->r8, ctx->r15);
    // 0x80040E40: addiu       $t7, $v1, 0x2
    ctx->r15 = ADD32(ctx->r3, 0X2);
    // 0x80040E44: multu       $t1, $t7
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80040E48: sll         $t8, $a2, 1
    ctx->r24 = S32(ctx->r6 << 1);
    // 0x80040E4C: addu        $t3, $t5, $t8
    ctx->r11 = ADD32(ctx->r13, ctx->r24);
    // 0x80040E50: lhu         $t9, 0x0($t3)
    ctx->r25 = MEM_HU(ctx->r11, 0X0);
    // 0x80040E54: nop

    // 0x80040E58: ori         $t6, $t9, 0x100
    ctx->r14 = ctx->r25 | 0X100;
    // 0x80040E5C: sh          $t6, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r14;
    // 0x80040E60: mflo        $t8
    ctx->r24 = lo;
    // 0x80040E64: addu        $a2, $t0, $t8
    ctx->r6 = ADD32(ctx->r8, ctx->r24);
    // 0x80040E68: addiu       $t8, $v1, 0x3
    ctx->r24 = ADD32(ctx->r3, 0X3);
    // 0x80040E6C: multu       $t1, $t8
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80040E70: sll         $t9, $a2, 1
    ctx->r25 = S32(ctx->r6 << 1);
    // 0x80040E74: addu        $t3, $t5, $t9
    ctx->r11 = ADD32(ctx->r13, ctx->r25);
    // 0x80040E78: lhu         $t6, 0x0($t3)
    ctx->r14 = MEM_HU(ctx->r11, 0X0);
    // 0x80040E7C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80040E80: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x80040E84: sh          $t7, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r15;
    // 0x80040E88: mflo        $t9
    ctx->r25 = lo;
    // 0x80040E8C: addu        $a2, $t0, $t9
    ctx->r6 = ADD32(ctx->r8, ctx->r25);
    // 0x80040E90: sll         $t6, $a2, 1
    ctx->r14 = S32(ctx->r6 << 1);
    // 0x80040E94: addu        $t3, $t5, $t6
    ctx->r11 = ADD32(ctx->r13, ctx->r14);
    // 0x80040E98: lhu         $t7, 0x0($t3)
    ctx->r15 = MEM_HU(ctx->r11, 0X0);
    // 0x80040E9C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80040EA0: ori         $t8, $t7, 0x100
    ctx->r24 = ctx->r15 | 0X100;
    // 0x80040EA4: sh          $t8, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r24;
    // 0x80040EA8: addiu       $t9, $t9, 0x1960
    ctx->r25 = ADD32(ctx->r25, 0X1960);
    // 0x80040EAC: lw          $t6, 0x0($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X0);
    // 0x80040EB0: nop

    // 0x80040EB4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80040EB8: bne         $v1, $a1, L_80040E18
    if (ctx->r3 != ctx->r5) {
        // 0x80040EBC: addu        $t2, $t2, $t7
        ctx->r10 = ADD32(ctx->r10, ctx->r15);
            goto L_80040E18;
    }
    // 0x80040EBC: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
L_80040EC0:
    // 0x80040EC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80040EC4: bne         $v0, $a0, L_80040D90
    if (ctx->r2 != ctx->r4) {
        // 0x80040EC8: nop
    
            goto L_80040D90;
    }
    // 0x80040EC8: nop

L_80040ECC:
    // 0x80040ECC: jr          $ra
    // 0x80040ED0: nop

    return;
    // 0x80040ED0: nop

    // 0x80040ED4: jr          $ra
    // 0x80040ED8: nop

    return;
    // 0x80040ED8: nop

    // 0x80040EDC: jr          $ra
    // 0x80040EE0: nop

    return;
    // 0x80040EE0: nop

;}
RECOMP_FUNC void func_80040EE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040EE4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80040EE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80040EEC: jal         0x8005AFA4
    // 0x80040EF0: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    func_8005AFA4(rdram, ctx);
        goto after_0;
    // 0x80040EF0: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    after_0:
    // 0x80040EF4: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80040EF8: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x80040EFC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80040F00: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80040F04: bne         $t7, $zero, L_800412E0
    if (ctx->r15 != 0) {
        // 0x80040F08: or          $fp, $v0, $zero
        ctx->r30 = ctx->r2 | 0;
            goto L_800412E0;
    }
    // 0x80040F08: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x80040F0C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80040F10: addiu       $a1, $a1, -0x65A8
    ctx->r5 = ADD32(ctx->r5, -0X65A8);
    // 0x80040F14: addiu       $v1, $v1, -0x75A8
    ctx->r3 = ADD32(ctx->r3, -0X75A8);
    // 0x80040F18: addiu       $a0, $zero, -0x101
    ctx->r4 = ADD32(0, -0X101);
L_80040F1C:
    // 0x80040F1C: lhu         $t8, 0x0($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X0);
    // 0x80040F20: lhu         $t6, 0x2($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X2);
    // 0x80040F24: and         $t9, $t8, $a0
    ctx->r25 = ctx->r24 & ctx->r4;
    // 0x80040F28: and         $t7, $t6, $a0
    ctx->r15 = ctx->r14 & ctx->r4;
    // 0x80040F2C: lhu         $t6, 0x6($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X6);
    // 0x80040F30: lhu         $t8, 0x4($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X4);
    // 0x80040F34: sh          $t7, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r15;
    // 0x80040F38: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
    // 0x80040F3C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80040F40: and         $t7, $t6, $a0
    ctx->r15 = ctx->r14 & ctx->r4;
    // 0x80040F44: and         $t9, $t8, $a0
    ctx->r25 = ctx->r24 & ctx->r4;
    // 0x80040F48: sh          $t9, -0x4($v1)
    MEM_H(-0X4, ctx->r3) = ctx->r25;
    // 0x80040F4C: bne         $v1, $a1, L_80040F1C
    if (ctx->r3 != ctx->r5) {
        // 0x80040F50: sh          $t7, -0x2($v1)
        MEM_H(-0X2, ctx->r3) = ctx->r15;
            goto L_80040F1C;
    }
    // 0x80040F50: sh          $t7, -0x2($v1)
    MEM_H(-0X2, ctx->r3) = ctx->r15;
    // 0x80040F54: blez        $v0, L_800410F4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80040F58: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_800410F4;
    }
    // 0x80040F58: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80040F5C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80040F60: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x80040F64: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x80040F68: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x80040F6C: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x80040F70: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80040F74: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80040F78: addiu       $s0, $s0, -0x75A8
    ctx->r16 = ADD32(ctx->r16, -0X75A8);
    // 0x80040F7C: addiu       $s1, $s1, 0x1A34
    ctx->r17 = ADD32(ctx->r17, 0X1A34);
    // 0x80040F80: addiu       $s2, $s2, 0x1A3C
    ctx->r18 = ADD32(ctx->r18, 0X1A3C);
    // 0x80040F84: addiu       $s3, $s3, 0x1A44
    ctx->r19 = ADD32(ctx->r19, 0X1A44);
    // 0x80040F88: addiu       $s7, $s7, -0x3C7C
    ctx->r23 = ADD32(ctx->r23, -0X3C7C);
    // 0x80040F8C: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x80040F90: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
L_80040F94:
    // 0x80040F94: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x80040F98: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80040F9C: addu        $t9, $t8, $s5
    ctx->r25 = ADD32(ctx->r24, ctx->r21);
    // 0x80040FA0: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80040FA4: nop

    // 0x80040FA8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80040FAC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80040FB0: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80040FB4: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80040FB8: div.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80040FBC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80040FC0: addiu       $v0, $v0, 0x1A28
    ctx->r2 = ADD32(ctx->r2, 0X1A28);
    // 0x80040FC4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80040FC8: nop

    // 0x80040FCC: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80040FD0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80040FD4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80040FD8: nop

    // 0x80040FDC: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80040FE0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80040FE4: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80040FE8: div.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80040FEC: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x80040FF0: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    // 0x80040FF4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80040FF8: nop

    // 0x80040FFC: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80041000: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80041004: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80041008: nop

    // 0x8004100C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80041010: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x80041014: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80041018: bne         $s6, $t7, L_800410D0
    if (ctx->r22 != ctx->r15) {
        // 0x8004101C: addu        $v1, $t8, $t6
        ctx->r3 = ADD32(ctx->r24, ctx->r14);
            goto L_800410D0;
    }
    // 0x8004101C: addu        $v1, $t8, $t6
    ctx->r3 = ADD32(ctx->r24, ctx->r14);
L_80041020:
    // 0x80041020: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80041024: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80041028: bne         $v1, $t9, L_80041040
    if (ctx->r3 != ctx->r25) {
        // 0x8004102C: sltu        $at, $v0, $s1
        ctx->r1 = ctx->r2 < ctx->r17 ? 1 : 0;
            goto L_80041040;
    }
    // 0x8004102C: sltu        $at, $v0, $s1
    ctx->r1 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x80041030: jal         0x80040D80
    // 0x80041034: addiu       $a3, $v1, -0x41
    ctx->r7 = ADD32(ctx->r3, -0X41);
    func_80040D80(rdram, ctx);
        goto after_1;
    // 0x80041034: addiu       $a3, $v1, -0x41
    ctx->r7 = ADD32(ctx->r3, -0X41);
    after_1:
    // 0x80041038: b           L_800410EC
    // 0x8004103C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_800410EC;
    // 0x8004103C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80041040:
    // 0x80041040: bne         $at, $zero, L_80041020
    if (ctx->r1 != 0) {
        // 0x80041044: nop
    
            goto L_80041020;
    }
    // 0x80041044: nop

    // 0x80041048: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8004104C: addiu       $v0, $v0, 0x1A34
    ctx->r2 = ADD32(ctx->r2, 0X1A34);
L_80041050:
    // 0x80041050: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80041054: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80041058: bne         $v1, $t8, L_80041078
    if (ctx->r3 != ctx->r24) {
        // 0x8004105C: sltu        $at, $v0, $s2
        ctx->r1 = ctx->r2 < ctx->r18 ? 1 : 0;
            goto L_80041078;
    }
    // 0x8004105C: sltu        $at, $v0, $s2
    ctx->r1 = ctx->r2 < ctx->r18 ? 1 : 0;
    // 0x80041060: addiu       $a3, $v1, -0x40
    ctx->r7 = ADD32(ctx->r3, -0X40);
    // 0x80041064: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80041068: jal         0x80040D80
    // 0x8004106C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_80040D80(rdram, ctx);
        goto after_2;
    // 0x8004106C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_2:
    // 0x80041070: b           L_800410EC
    // 0x80041074: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_800410EC;
    // 0x80041074: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80041078:
    // 0x80041078: bne         $at, $zero, L_80041050
    if (ctx->r1 != 0) {
        // 0x8004107C: nop
    
            goto L_80041050;
    }
    // 0x8004107C: nop

    // 0x80041080: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80041084: addiu       $v0, $v0, 0x1A3C
    ctx->r2 = ADD32(ctx->r2, 0X1A3C);
L_80041088:
    // 0x80041088: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8004108C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80041090: bne         $v1, $t6, L_800410AC
    if (ctx->r3 != ctx->r14) {
        // 0x80041094: addiu       $a3, $v1, -0x1
        ctx->r7 = ADD32(ctx->r3, -0X1);
            goto L_800410AC;
    }
    // 0x80041094: addiu       $a3, $v1, -0x1
    ctx->r7 = ADD32(ctx->r3, -0X1);
    // 0x80041098: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x8004109C: jal         0x80040D80
    // 0x800410A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80040D80(rdram, ctx);
        goto after_3;
    // 0x800410A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x800410A4: b           L_800410EC
    // 0x800410A8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_800410EC;
    // 0x800410A8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_800410AC:
    // 0x800410AC: bne         $v0, $s3, L_80041088
    if (ctx->r2 != ctx->r19) {
        // 0x800410B0: nop
    
            goto L_80041088;
    }
    // 0x800410B0: nop

    // 0x800410B4: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x800410B8: addu        $v0, $s0, $t7
    ctx->r2 = ADD32(ctx->r16, ctx->r15);
    // 0x800410BC: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x800410C0: nop

    // 0x800410C4: ori         $t8, $t9, 0x100
    ctx->r24 = ctx->r25 | 0X100;
    // 0x800410C8: b           L_800410E8
    // 0x800410CC: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
        goto L_800410E8;
    // 0x800410CC: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
L_800410D0:
    // 0x800410D0: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x800410D4: addu        $v0, $s0, $t6
    ctx->r2 = ADD32(ctx->r16, ctx->r14);
    // 0x800410D8: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x800410DC: nop

    // 0x800410E0: ori         $t9, $t7, 0x100
    ctx->r25 = ctx->r15 | 0X100;
    // 0x800410E4: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
L_800410E8:
    // 0x800410E8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_800410EC:
    // 0x800410EC: bne         $s4, $fp, L_80040F94
    if (ctx->r20 != ctx->r30) {
        // 0x800410F0: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_80040F94;
    }
    // 0x800410F0: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
L_800410F4:
    // 0x800410F4: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x800410F8: addiu       $s7, $s7, -0x3C7C
    ctx->r23 = ADD32(ctx->r23, -0X3C7C);
    // 0x800410FC: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x80041100: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80041104: bne         $t8, $zero, L_800412E0
    if (ctx->r24 != 0) {
        // 0x80041108: addiu       $s0, $s0, -0x75A8
        ctx->r16 = ADD32(ctx->r16, -0X75A8);
            goto L_800412E0;
    }
    // 0x80041108: addiu       $s0, $s0, -0x75A8
    ctx->r16 = ADD32(ctx->r16, -0X75A8);
    // 0x8004110C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80041110: lw          $t6, -0x4260($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4260);
    // 0x80041114: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80041118: bne         $t6, $zero, L_800412E4
    if (ctx->r14 != 0) {
        // 0x8004111C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800412E4;
    }
    // 0x8004111C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80041120: lw          $v0, -0x415C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X415C);
    // 0x80041124: nop

    // 0x80041128: blez        $v0, L_800412E0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004112C: slti        $at, $v0, 0x384
        ctx->r1 = SIGNED(ctx->r2) < 0X384 ? 1 : 0;
            goto L_800412E0;
    }
    // 0x8004112C: slti        $at, $v0, 0x384
    ctx->r1 = SIGNED(ctx->r2) < 0X384 ? 1 : 0;
    // 0x80041130: beq         $at, $zero, L_800412E0
    if (ctx->r1 == 0) {
        // 0x80041134: addiu       $t7, $zero, 0x384
        ctx->r15 = ADD32(0, 0X384);
            goto L_800412E0;
    }
    // 0x80041134: addiu       $t7, $zero, 0x384
    ctx->r15 = ADD32(0, 0X384);
    // 0x80041138: subu        $v1, $t7, $v0
    ctx->r3 = SUB32(ctx->r15, ctx->r2);
    // 0x8004113C: addiu       $at, $zero, 0x96
    ctx->r1 = ADD32(0, 0X96);
    // 0x80041140: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x80041144: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80041148: addiu       $t1, $t1, -0x75A8
    ctx->r9 = ADD32(ctx->r9, -0X75A8);
    // 0x8004114C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80041150: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x80041154: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x80041158: mflo        $t9
    ctx->r25 = lo;
    // 0x8004115C: addiu       $t3, $t9, 0x1
    ctx->r11 = ADD32(ctx->r25, 0X1);
    // 0x80041160: bltz        $t9, L_800412E4
    if (SIGNED(ctx->r25) < 0) {
        // 0x80041164: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800412E4;
    }
    // 0x80041164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80041168:
    // 0x80041168: blez        $a0, L_80041180
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8004116C: nop
    
            goto L_80041180;
    }
    // 0x8004116C: nop

    // 0x80041170: lhu         $t8, -0x2($t1)
    ctx->r24 = MEM_HU(ctx->r9, -0X2);
    // 0x80041174: nop

    // 0x80041178: ori         $t6, $t8, 0x100
    ctx->r14 = ctx->r24 | 0X100;
    // 0x8004117C: sh          $t6, -0x2($t1)
    MEM_H(-0X2, ctx->r9) = ctx->r14;
L_80041180:
    // 0x80041180: lhu         $t7, 0x0($t1)
    ctx->r15 = MEM_HU(ctx->r9, 0X0);
    // 0x80041184: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x80041188: ori         $t9, $t7, 0x200
    ctx->r25 = ctx->r15 | 0X200;
    // 0x8004118C: blez        $a0, L_800411AC
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80041190: sh          $t9, 0x0($t1)
        MEM_H(0X0, ctx->r9) = ctx->r25;
            goto L_800411AC;
    }
    // 0x80041190: sh          $t9, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r25;
    // 0x80041194: sll         $t8, $t2, 1
    ctx->r24 = S32(ctx->r10 << 1);
    // 0x80041198: addu        $v0, $s0, $t8
    ctx->r2 = ADD32(ctx->r16, ctx->r24);
    // 0x8004119C: lhu         $t6, 0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2);
    // 0x800411A0: nop

    // 0x800411A4: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x800411A8: sh          $t7, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r15;
L_800411AC:
    // 0x800411AC: sll         $t9, $a3, 1
    ctx->r25 = S32(ctx->r7 << 1);
    // 0x800411B0: addu        $v0, $s0, $t9
    ctx->r2 = ADD32(ctx->r16, ctx->r25);
    // 0x800411B4: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x800411B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800411BC: ori         $t6, $t8, 0x200
    ctx->r14 = ctx->r24 | 0X200;
    // 0x800411C0: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
L_800411C4:
    // 0x800411C4: blez        $a0, L_800411EC
    if (SIGNED(ctx->r4) <= 0) {
        // 0x800411C8: sll         $v1, $a1, 6
        ctx->r3 = S32(ctx->r5 << 6);
            goto L_800411EC;
    }
    // 0x800411C8: sll         $v1, $a1, 6
    ctx->r3 = S32(ctx->r5 << 6);
    // 0x800411CC: sll         $t7, $a1, 6
    ctx->r15 = S32(ctx->r5 << 6);
    // 0x800411D0: addu        $t9, $t7, $a0
    ctx->r25 = ADD32(ctx->r15, ctx->r4);
    // 0x800411D4: sll         $t8, $t9, 1
    ctx->r24 = S32(ctx->r25 << 1);
    // 0x800411D8: addu        $v0, $s0, $t8
    ctx->r2 = ADD32(ctx->r16, ctx->r24);
    // 0x800411DC: lhu         $t6, -0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, -0X2);
    // 0x800411E0: nop

    // 0x800411E4: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x800411E8: sh          $t7, -0x2($v0)
    MEM_H(-0X2, ctx->r2) = ctx->r15;
L_800411EC:
    // 0x800411EC: addu        $t9, $v1, $a0
    ctx->r25 = ADD32(ctx->r3, ctx->r4);
    // 0x800411F0: sll         $t8, $t9, 1
    ctx->r24 = S32(ctx->r25 << 1);
    // 0x800411F4: addu        $v0, $s0, $t8
    ctx->r2 = ADD32(ctx->r16, ctx->r24);
    // 0x800411F8: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x800411FC: subu        $t9, $v1, $a0
    ctx->r25 = SUB32(ctx->r3, ctx->r4);
    // 0x80041200: ori         $t7, $t6, 0x200
    ctx->r15 = ctx->r14 | 0X200;
    // 0x80041204: blez        $a0, L_80041224
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80041208: sh          $t7, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r15;
            goto L_80041224;
    }
    // 0x80041208: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x8004120C: sll         $t8, $t9, 1
    ctx->r24 = S32(ctx->r25 << 1);
    // 0x80041210: addu        $v0, $s0, $t8
    ctx->r2 = ADD32(ctx->r16, ctx->r24);
    // 0x80041214: lhu         $t6, 0x1A($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X1A);
    // 0x80041218: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x8004121C: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x80041220: sh          $t7, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r15;
L_80041224:
    // 0x80041224: subu        $t9, $v1, $a0
    ctx->r25 = SUB32(ctx->r3, ctx->r4);
    // 0x80041228: sll         $t8, $t9, 1
    ctx->r24 = S32(ctx->r25 << 1);
    // 0x8004122C: addu        $v0, $s0, $t8
    ctx->r2 = ADD32(ctx->r16, ctx->r24);
    // 0x80041230: lhu         $t6, 0x18($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X18);
    // 0x80041234: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x80041238: ori         $t7, $t6, 0x200
    ctx->r15 = ctx->r14 | 0X200;
    // 0x8004123C: blez        $a0, L_80041268
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80041240: sh          $t7, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r15;
            goto L_80041268;
    }
    // 0x80041240: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x80041244: addiu       $t9, $a1, 0x1
    ctx->r25 = ADD32(ctx->r5, 0X1);
    // 0x80041248: sll         $t8, $t9, 6
    ctx->r24 = S32(ctx->r25 << 6);
    // 0x8004124C: addu        $t6, $t8, $a0
    ctx->r14 = ADD32(ctx->r24, ctx->r4);
    // 0x80041250: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80041254: addu        $v1, $s0, $t7
    ctx->r3 = ADD32(ctx->r16, ctx->r15);
    // 0x80041258: lhu         $t9, -0x2($v1)
    ctx->r25 = MEM_HU(ctx->r3, -0X2);
    // 0x8004125C: nop

    // 0x80041260: ori         $t8, $t9, 0x100
    ctx->r24 = ctx->r25 | 0X100;
    // 0x80041264: sh          $t8, -0x2($v1)
    MEM_H(-0X2, ctx->r3) = ctx->r24;
L_80041268:
    // 0x80041268: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8004126C: sll         $t6, $v0, 6
    ctx->r14 = S32(ctx->r2 << 6);
    // 0x80041270: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x80041274: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x80041278: addu        $v1, $s0, $t9
    ctx->r3 = ADD32(ctx->r16, ctx->r25);
    // 0x8004127C: lhu         $t8, 0x0($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X0);
    // 0x80041280: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80041284: subu        $a2, $v0, $a0
    ctx->r6 = SUB32(ctx->r2, ctx->r4);
    // 0x80041288: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x8004128C: ori         $t6, $t8, 0x200
    ctx->r14 = ctx->r24 | 0X200;
    // 0x80041290: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
    // 0x80041294: blez        $a0, L_800412B4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80041298: or          $a3, $a2, $zero
        ctx->r7 = ctx->r6 | 0;
            goto L_800412B4;
    }
    // 0x80041298: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x8004129C: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
    // 0x800412A0: addu        $v0, $s0, $t7
    ctx->r2 = ADD32(ctx->r16, ctx->r15);
    // 0x800412A4: lhu         $t9, 0x2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X2);
    // 0x800412A8: nop

    // 0x800412AC: ori         $t8, $t9, 0x100
    ctx->r24 = ctx->r25 | 0X100;
    // 0x800412B0: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
L_800412B4:
    // 0x800412B4: sll         $t6, $a3, 1
    ctx->r14 = S32(ctx->r7 << 1);
    // 0x800412B8: addu        $v0, $s0, $t6
    ctx->r2 = ADD32(ctx->r16, ctx->r14);
    // 0x800412BC: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x800412C0: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x800412C4: ori         $t9, $t7, 0x200
    ctx->r25 = ctx->r15 | 0X200;
    // 0x800412C8: bne         $a1, $t0, L_800411C4
    if (ctx->r5 != ctx->r8) {
        // 0x800412CC: sh          $t9, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r25;
            goto L_800411C4;
    }
    // 0x800412CC: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x800412D0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800412D4: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x800412D8: bne         $t3, $a0, L_80041168
    if (ctx->r11 != ctx->r4) {
        // 0x800412DC: addiu       $t1, $t1, 0x2
        ctx->r9 = ADD32(ctx->r9, 0X2);
            goto L_80041168;
    }
    // 0x800412DC: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
L_800412E0:
    // 0x800412E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800412E4:
    // 0x800412E4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x800412E8: jr          $ra
    // 0x800412EC: nop

    return;
    // 0x800412EC: nop

;}
RECOMP_FUNC void func_800412F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800412F0: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x800412F4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x800412F8: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x800412FC: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80041300: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80041304: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80041308: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8004130C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80041310: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80041314: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80041318: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8004131C: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80041320: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80041324: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80041328: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8004132C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80041330: jal         0x80007774
    // 0x80041334: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80041334: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80041338: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x8004133C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80041340: addiu       $s6, $s6, -0x3CA0
    ctx->r22 = ADD32(ctx->r22, -0X3CA0);
    // 0x80041344: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80041348: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8004134C: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80041350: sw          $t6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r14;
    // 0x80041354: sw          $zero, 0x0($s6)
    MEM_W(0X0, ctx->r22) = 0;
    // 0x80041358: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8004135C: addiu       $fp, $zero, 0x4
    ctx->r30 = ADD32(0, 0X4);
    // 0x80041360: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
L_80041364:
    // 0x80041364: sw          $s2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r18;
    // 0x80041368: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8004136C: jal         0x80040EE4
    // 0x80041370: sw          $t8, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r24;
    func_80040EE4(rdram, ctx);
        goto after_1;
    // 0x80041370: sw          $t8, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r24;
    after_1:
    // 0x80041374: jal         0x8004094C
    // 0x80041378: addiu       $fp, $zero, 0x4
    ctx->r30 = ADD32(0, 0X4);
    func_8004094C(rdram, ctx);
        goto after_2;
    // 0x80041378: addiu       $fp, $zero, 0x4
    ctx->r30 = ADD32(0, 0X4);
    after_2:
    // 0x8004137C: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80041380: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x80041384: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x80041388: lw          $s2, 0x8C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X8C);
    // 0x8004138C: addiu       $s6, $s6, -0x3CA0
    ctx->r22 = ADD32(ctx->r22, -0X3CA0);
    // 0x80041390: addiu       $s4, $s4, -0x4170
    ctx->r20 = ADD32(ctx->r20, -0X4170);
    // 0x80041394: addiu       $s3, $s3, -0x3C8C
    ctx->r19 = ADD32(ctx->r19, -0X3C8C);
    // 0x80041398: addiu       $s5, $zero, 0xC
    ctx->r21 = ADD32(0, 0XC);
    // 0x8004139C: addiu       $s7, $zero, 0x3
    ctx->r23 = ADD32(0, 0X3);
    // 0x800413A0: addiu       $fp, $zero, 0x4
    ctx->r30 = ADD32(0, 0X4);
L_800413A4:
    // 0x800413A4: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x800413A8: xor         $t9, $s2, $s7
    ctx->r25 = ctx->r18 ^ ctx->r23;
    // 0x800413AC: sltu        $t9, $zero, $t9
    ctx->r25 = 0 < ctx->r25 ? 1 : 0;
    // 0x800413B0: and         $t7, $t9, $t6
    ctx->r15 = ctx->r25 & ctx->r14;
    // 0x800413B4: bne         $t7, $zero, L_800415E4
    if (ctx->r15 != 0) {
        // 0x800413B8: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_800415E4;
    }
    // 0x800413B8: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x800413BC: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x800413C0: addiu       $t9, $t9, -0x4298
    ctx->r25 = ADD32(ctx->r25, -0X4298);
    // 0x800413C4: addu        $s1, $t8, $t9
    ctx->r17 = ADD32(ctx->r24, ctx->r25);
    // 0x800413C8: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x800413CC: nop

    // 0x800413D0: beq         $t6, $zero, L_800415E4
    if (ctx->r14 == 0) {
        // 0x800413D4: nop
    
            goto L_800415E4;
    }
    // 0x800413D4: nop

    // 0x800413D8: jal         0x8004081C
    // 0x800413DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8004081C(rdram, ctx);
        goto after_3;
    // 0x800413DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
    // 0x800413E0: bne         $v0, $zero, L_80041400
    if (ctx->r2 != 0) {
        // 0x800413E4: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80041400;
    }
    // 0x800413E4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800413E8: lw          $v0, 0xC8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC8);
    // 0x800413EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800413F0: beq         $v0, $at, L_800415E4
    if (ctx->r2 == ctx->r1) {
        // 0x800413F4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800415E4;
    }
    // 0x800413F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800413F8: beq         $v0, $at, L_800415E4
    if (ctx->r2 == ctx->r1) {
        // 0x800413FC: nop
    
            goto L_800415E4;
    }
    // 0x800413FC: nop

L_80041400:
    // 0x80041400: jal         0x8005BCB4
    // 0x80041404: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_8005BCB4(rdram, ctx);
        goto after_4;
    // 0x80041404: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_4:
    // 0x80041408: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8004140C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80041410: andi        $t7, $v0, 0x200
    ctx->r15 = ctx->r2 & 0X200;
    // 0x80041414: beq         $t7, $zero, L_80041424
    if (ctx->r15 == 0) {
        // 0x80041418: andi        $t8, $v0, 0x4
        ctx->r24 = ctx->r2 & 0X4;
            goto L_80041424;
    }
    // 0x80041418: andi        $t8, $v0, 0x4
    ctx->r24 = ctx->r2 & 0X4;
    // 0x8004141C: b           L_80041424
    // 0x80041420: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80041424;
    // 0x80041420: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80041424:
    // 0x80041424: beq         $v1, $zero, L_80041454
    if (ctx->r3 == 0) {
        // 0x80041428: nop
    
            goto L_80041454;
    }
    // 0x80041428: nop

    // 0x8004142C: beq         $t8, $zero, L_8004143C
    if (ctx->r24 == 0) {
        // 0x80041430: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004143C;
    }
    // 0x80041430: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80041434: b           L_8004143C
    // 0x80041438: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004143C;
    // 0x80041438: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004143C:
    // 0x8004143C: bne         $v0, $zero, L_80041454
    if (ctx->r2 != 0) {
        // 0x80041440: nop
    
            goto L_80041454;
    }
    // 0x80041440: nop

    // 0x80041444: jal         0x8004081C
    // 0x80041448: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8004081C(rdram, ctx);
        goto after_5;
    // 0x80041448: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_5:
    // 0x8004144C: bgez        $v0, L_800415E4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80041450: nop
    
            goto L_800415E4;
    }
    // 0x80041450: nop

L_80041454:
    // 0x80041454: jal         0x8002D000
    // 0x80041458: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8002D000(rdram, ctx);
        goto after_6;
    // 0x80041458: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_6:
    // 0x8004145C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80041460: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x80041464: jal         0x8004A0A0
    // 0x80041468: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    func_8004A0A0(rdram, ctx);
        goto after_7;
    // 0x80041468: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    after_7:
    // 0x8004146C: bne         $v0, $zero, L_800415F0
    if (ctx->r2 != 0) {
        // 0x80041470: nop
    
            goto L_800415F0;
    }
    // 0x80041470: nop

    // 0x80041474: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80041478: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8004147C: c.lt.s      $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f4.fl < ctx->f22.fl;
    // 0x80041480: nop

    // 0x80041484: bc1t        L_800415E4
    if (c1cs) {
        // 0x80041488: nop
    
            goto L_800415E4;
    }
    // 0x80041488: nop

    // 0x8004148C: c.lt.s      $f6, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f6.fl < ctx->f22.fl;
    // 0x80041490: sll         $t9, $s2, 3
    ctx->r25 = S32(ctx->r18 << 3);
    // 0x80041494: bc1t        L_800415E4
    if (c1cs) {
        // 0x80041498: subu        $t9, $t9, $s2
        ctx->r25 = SUB32(ctx->r25, ctx->r18);
            goto L_800415E4;
    }
    // 0x80041498: subu        $t9, $t9, $s2
    ctx->r25 = SUB32(ctx->r25, ctx->r18);
    // 0x8004149C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800414A0: addiu       $t6, $t6, -0x7688
    ctx->r14 = ADD32(ctx->r14, -0X7688);
    // 0x800414A4: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800414A8: addu        $v0, $t9, $t6
    ctx->r2 = ADD32(ctx->r25, ctx->r14);
    // 0x800414AC: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x800414B0: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x800414B4: multu       $t7, $s5
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800414B8: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x800414BC: mflo        $t8
    ctx->r24 = lo;
    // 0x800414C0: addu        $v1, $s4, $t8
    ctx->r3 = ADD32(ctx->r20, ctx->r24);
    // 0x800414C4: lwc1        $f10, 0xB0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XB0);
    // 0x800414C8: nop

    // 0x800414CC: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x800414D0: nop

    // 0x800414D4: bc1f        L_8004152C
    if (!c1cs) {
        // 0x800414D8: nop
    
            goto L_8004152C;
    }
    // 0x800414D8: nop

    // 0x800414DC: lwc1        $f6, 0xB4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XB4);
    // 0x800414E0: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x800414E4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800414E8: nop

    // 0x800414EC: bc1f        L_8004152C
    if (!c1cs) {
        // 0x800414F0: nop
    
            goto L_8004152C;
    }
    // 0x800414F0: nop

    // 0x800414F4: lwc1        $f10, 0xB8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XB8);
    // 0x800414F8: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x800414FC: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80041500: nop

    // 0x80041504: bc1f        L_8004152C
    if (!c1cs) {
        // 0x80041508: nop
    
            goto L_8004152C;
    }
    // 0x80041508: nop

    // 0x8004150C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80041510: addiu       $t9, $t9, 0x3CF8
    ctx->r25 = ADD32(ctx->r25, 0X3CF8);
    // 0x80041514: bne         $t9, $t6, L_8004152C
    if (ctx->r25 != ctx->r14) {
        // 0x80041518: nop
    
            goto L_8004152C;
    }
    // 0x80041518: nop

    // 0x8004151C: lw          $t7, 0x2C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X2C);
    // 0x80041520: nop

    // 0x80041524: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80041528: sw          $t8, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r24;
L_8004152C:
    // 0x8004152C: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80041530: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80041534: div.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f24.fl);
    // 0x80041538: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8004153C: nop

    // 0x80041540: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80041544: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80041548: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004154C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80041550: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80041554: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80041558: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8004155C: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80041560: div.s       $f4, $f10, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f24.fl);
    // 0x80041564: sll         $t8, $t7, 7
    ctx->r24 = S32(ctx->r15 << 7);
    // 0x80041568: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004156C: addiu       $at, $zero, 0xF0
    ctx->r1 = ADD32(0, 0XF0);
    // 0x80041570: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80041574: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x80041578: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8004157C: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80041580: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x80041584: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80041588: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8004158C: lhu         $t6, -0x75A8($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X75A8);
    // 0x80041590: nop

    // 0x80041594: andi        $t8, $t6, 0xF0
    ctx->r24 = ctx->r14 & 0XF0;
    // 0x80041598: beq         $t8, $at, L_800415E4
    if (ctx->r24 == ctx->r1) {
        // 0x8004159C: nop
    
            goto L_800415E4;
    }
    // 0x8004159C: nop

    // 0x800415A0: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x800415A4: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x800415A8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x800415AC: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x800415B0: jal         0x8004058C
    // 0x800415B4: nop

    func_8004058C(rdram, ctx);
        goto after_8;
    // 0x800415B4: nop

    after_8:
    // 0x800415B8: bne         $v0, $zero, L_800415E4
    if (ctx->r2 != 0) {
        // 0x800415BC: nop
    
            goto L_800415E4;
    }
    // 0x800415BC: nop

    // 0x800415C0: multu       $s2, $s5
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800415C4: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x800415C8: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x800415CC: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x800415D0: mflo        $t7
    ctx->r15 = lo;
    // 0x800415D4: addu        $v0, $s4, $t7
    ctx->r2 = ADD32(ctx->r20, ctx->r15);
    // 0x800415D8: swc1        $f8, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->f8.u32l;
    // 0x800415DC: swc1        $f10, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->f10.u32l;
    // 0x800415E0: swc1        $f4, 0xB8($v0)
    MEM_W(0XB8, ctx->r2) = ctx->f4.u32l;
L_800415E4:
    // 0x800415E4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800415E8: bne         $s2, $fp, L_800413A4
    if (ctx->r18 != ctx->r30) {
        // 0x800415EC: nop
    
            goto L_800413A4;
    }
    // 0x800415EC: nop

L_800415F0:
    // 0x800415F0: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x800415F4: lw          $t9, -0x3C7C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3C7C);
    // 0x800415F8: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x800415FC: bne         $t9, $at, L_80041654
    if (ctx->r25 != ctx->r1) {
        // 0x80041600: nop
    
            goto L_80041654;
    }
    // 0x80041600: nop

    // 0x80041604: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    // 0x80041608: nop

    // 0x8004160C: beq         $t6, $zero, L_80041630
    if (ctx->r14 == 0) {
        // 0x80041610: addiu       $t8, $t6, -0x1
        ctx->r24 = ADD32(ctx->r14, -0X1);
            goto L_80041630;
    }
    // 0x80041610: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x80041614: bne         $t8, $zero, L_80041654
    if (ctx->r24 != 0) {
        // 0x80041618: sw          $t8, 0x98($sp)
        MEM_W(0X98, ctx->r29) = ctx->r24;
            goto L_80041654;
    }
    // 0x80041618: sw          $t8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r24;
    // 0x8004161C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80041620: jal         0x8002E048
    // 0x80041624: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002E048(rdram, ctx);
        goto after_9;
    // 0x80041624: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80041628: b           L_80041654
    // 0x8004162C: nop

        goto L_80041654;
    // 0x8004162C: nop

L_80041630:
    // 0x80041630: jal         0x80028AB8
    // 0x80041634: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_80028AB8(rdram, ctx);
        goto after_10;
    // 0x80041634: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_10:
    // 0x80041638: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8004163C: beq         $at, $zero, L_80041654
    if (ctx->r1 == 0) {
        // 0x80041640: addiu       $a0, $zero, -0x1
        ctx->r4 = ADD32(0, -0X1);
            goto L_80041654;
    }
    // 0x80041640: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80041644: addiu       $t7, $zero, 0x11
    ctx->r15 = ADD32(0, 0X11);
    // 0x80041648: sw          $t7, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r15;
    // 0x8004164C: jal         0x8002E048
    // 0x80041650: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002E048(rdram, ctx);
        goto after_11;
    // 0x80041650: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
L_80041654:
    // 0x80041654: jal         0x80007AB0
    // 0x80041658: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    func_80007AB0(rdram, ctx);
        goto after_12;
    // 0x80041658: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_12:
    // 0x8004165C: b           L_80041364
    // 0x80041660: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
        goto L_80041364;
    // 0x80041660: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x80041664: nop

    // 0x80041668: nop

    // 0x8004166C: nop

    // 0x80041670: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80041674: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80041678: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8004167C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80041680: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80041684: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80041688: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8004168C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80041690: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80041694: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80041698: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8004169C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x800416A0: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x800416A4: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x800416A8: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x800416AC: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x800416B0: jr          $ra
    // 0x800416B4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x800416B4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_800416B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800416B8: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800416BC: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800416C0: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800416C4: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800416C8: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800416CC: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800416D0: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800416D4: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800416D8: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800416DC: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800416E0: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x800416E4: nop

    // 0x800416E8: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x800416EC: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800416F0: jr          $ra
    // 0x800416F4: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    return;
    // 0x800416F4: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
;}
RECOMP_FUNC void func_800416F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800416F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800416FC: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80041700: addiu       $s0, $s0, -0x3C8C
    ctx->r16 = ADD32(ctx->r16, -0X3C8C);
    // 0x80041704: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80041708: jal         0x8005BCB4
    // 0x8004170C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8005BCB4(rdram, ctx);
        goto after_0;
    // 0x8004170C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x80041710: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80041714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80041718: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8004171C: beq         $t7, $zero, L_8004172C
    if (ctx->r15 == 0) {
        // 0x80041720: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004172C;
    }
    // 0x80041720: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80041724: b           L_8004172C
    // 0x80041728: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004172C;
    // 0x80041728: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004172C:
    // 0x8004172C: beq         $v0, $zero, L_80041740
    if (ctx->r2 == 0) {
        // 0x80041730: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80041740;
    }
    // 0x80041730: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80041734: b           L_80041740
    // 0x80041738: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80041740;
    // 0x80041738: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004173C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041740:
    // 0x80041740: jr          $ra
    // 0x80041744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80041744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80041748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041748: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8004174C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80041750: lw          $t6, 0xC($s2)
    ctx->r14 = MEM_W(ctx->r18, 0XC);
    // 0x80041754: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80041758: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8004175C: addu        $s1, $s1, $t7
    ctx->r17 = ADD32(ctx->r17, ctx->r15);
    // 0x80041760: lw          $s1, -0x4204($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X4204);
    // 0x80041764: nop

    // 0x80041768: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8004176C: jal         0x800416F8
    // 0x80041770: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800416F8(rdram, ctx);
        goto after_0;
    // 0x80041770: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x80041774: beq         $v0, $zero, L_80041784
    if (ctx->r2 == 0) {
        // 0x80041778: nop
    
            goto L_80041784;
    }
    // 0x80041778: nop

    // 0x8004177C: b           L_8004180C
    // 0x80041780: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8004180C;
    // 0x80041780: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041784:
    // 0x80041784: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x80041788: jal         0x8002D000
    // 0x8004178C: nop

    func_8002D000(rdram, ctx);
        goto after_1;
    // 0x8004178C: nop

    after_1:
    // 0x80041790: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
    // 0x80041794: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80041798: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8004179C: jal         0x8004A0A0
    // 0x800417A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x800417A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x800417A4: beq         $v0, $zero, L_800417B4
    if (ctx->r2 == 0) {
        // 0x800417A8: nop
    
            goto L_800417B4;
    }
    // 0x800417A8: nop

    // 0x800417AC: b           L_8004180C
    // 0x800417B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8004180C;
    // 0x800417B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800417B4:
    // 0x800417B4: jal         0x8002D000
    // 0x800417B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8002D000(rdram, ctx);
        goto after_3;
    // 0x800417B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x800417BC: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x800417C0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x800417C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800417C8: jal         0x8004A0A0
    // 0x800417CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004A0A0(rdram, ctx);
        goto after_4;
    // 0x800417CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x800417D0: beq         $v0, $zero, L_800417E0
    if (ctx->r2 == 0) {
        // 0x800417D4: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_800417E0;
    }
    // 0x800417D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800417D8: b           L_8004180C
    // 0x800417DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8004180C;
    // 0x800417DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800417E0:
    // 0x800417E0: jal         0x800416B8
    // 0x800417E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800416B8(rdram, ctx);
        goto after_5;
    // 0x800417E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x800417E8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800417EC: lwc1        $f4, 0x5C18($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5C18);
    // 0x800417F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800417F4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800417F8: nop

    // 0x800417FC: bc1f        L_8004180C
    if (!c1cs) {
        // 0x80041800: nop
    
            goto L_8004180C;
    }
    // 0x80041800: nop

    // 0x80041804: b           L_8004180C
    // 0x80041808: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004180C;
    // 0x80041808: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004180C:
    // 0x8004180C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80041810: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80041814: jr          $ra
    // 0x80041818: nop

    return;
    // 0x80041818: nop

;}
RECOMP_FUNC void func_8004181C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004181C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80041820: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80041824: lw          $t6, -0x4298($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4298);
    // 0x80041828: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8004182C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80041830: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80041834: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80041838: bne         $t6, $at, L_8004185C
    if (ctx->r14 != ctx->r1) {
        // 0x8004183C: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8004185C;
    }
    // 0x8004183C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80041840: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80041844: jal         0x80041748
    // 0x80041848: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_80041748(rdram, ctx);
        goto after_0;
    // 0x80041848: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x8004184C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80041850: beq         $v0, $zero, L_8004185C
    if (ctx->r2 == 0) {
        // 0x80041854: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8004185C;
    }
    // 0x80041854: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80041858: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_8004185C:
    // 0x8004185C: lw          $t7, 0x20($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X20);
    // 0x80041860: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80041864: bne         $t7, $zero, L_80041878
    if (ctx->r15 != 0) {
        // 0x80041868: ori         $t8, $zero, 0x8000
        ctx->r24 = 0 | 0X8000;
            goto L_80041878;
    }
    // 0x80041868: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x8004186C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80041870: sh          $t8, -0x3C96($at)
    MEM_H(-0X3C96, ctx->r1) = ctx->r24;
    // 0x80041874: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_80041878:
    // 0x80041878: sw          $v0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r2;
    // 0x8004187C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80041880: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80041884: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80041888: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8004188C: jr          $ra
    // 0x80041890: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80041890: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80041894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041894: jr          $ra
    // 0x80041898: nop

    return;
    // 0x80041898: nop

;}
RECOMP_FUNC void func_8004189C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004189C: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x800418A0: addiu       $a2, $a2, -0x75A8
    ctx->r6 = ADD32(ctx->r6, -0X75A8);
    // 0x800418A4: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x800418A8: addu        $t7, $a2, $t6
    ctx->r15 = ADD32(ctx->r6, ctx->r14);
    // 0x800418AC: sll         $t9, $a1, 1
    ctx->r25 = S32(ctx->r5 << 1);
    // 0x800418B0: addu        $t6, $a2, $t9
    ctx->r14 = ADD32(ctx->r6, ctx->r25);
    // 0x800418B4: lhu         $v0, 0x0($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X0);
    // 0x800418B8: lhu         $v1, 0x0($t6)
    ctx->r3 = MEM_HU(ctx->r14, 0X0);
    // 0x800418BC: andi        $t8, $v0, 0xF
    ctx->r24 = ctx->r2 & 0XF;
    // 0x800418C0: andi        $t7, $v1, 0xF
    ctx->r15 = ctx->r3 & 0XF;
    // 0x800418C4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x800418C8: bne         $t8, $t7, L_800418D8
    if (ctx->r24 != ctx->r15) {
        // 0x800418CC: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_800418D8;
    }
    // 0x800418CC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x800418D0: jr          $ra
    // 0x800418D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800418D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800418D8:
    // 0x800418D8: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800418DC: beq         $at, $zero, L_800418EC
    if (ctx->r1 == 0) {
        // 0x800418E0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800418EC;
    }
    // 0x800418E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800418E4: jr          $ra
    // 0x800418E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x800418E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800418EC:
    // 0x800418EC: jr          $ra
    // 0x800418F0: nop

    return;
    // 0x800418F0: nop

;}
RECOMP_FUNC void func_800418F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800418F4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800418F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800418FC: lw          $t6, 0x18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X18);
    // 0x80041900: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x80041904: addiu       $s1, $s1, -0x75A8
    ctx->r17 = ADD32(ctx->r17, -0X75A8);
    // 0x80041908: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8004190C: addu        $t8, $s1, $t7
    ctx->r24 = ADD32(ctx->r17, ctx->r15);
    // 0x80041910: lhu         $v0, 0x0($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X0);
    // 0x80041914: ori         $at, $zero, 0xF000
    ctx->r1 = 0 | 0XF000;
    // 0x80041918: andi        $t9, $v0, 0xF000
    ctx->r25 = ctx->r2 & 0XF000;
    // 0x8004191C: beq         $t9, $zero, L_80041AAC
    if (ctx->r25 == 0) {
        // 0x80041920: nop
    
            goto L_80041AAC;
    }
    // 0x80041920: nop

    // 0x80041924: beq         $t9, $at, L_80041AAC
    if (ctx->r25 == ctx->r1) {
        // 0x80041928: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_80041AAC;
    }
    // 0x80041928: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8004192C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x80041930: jal         0x8004A0A0
    // 0x80041934: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x80041934: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_0:
    // 0x80041938: beq         $v0, $zero, L_8004195C
    if (ctx->r2 == 0) {
        // 0x8004193C: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_8004195C;
    }
    // 0x8004193C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80041940: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x80041944: addiu       $t6, $t6, 0x3F44
    ctx->r14 = ADD32(ctx->r14, 0X3F44);
    // 0x80041948: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8004194C: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80041950: sw          $t7, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r15;
    // 0x80041954: b           L_80041ADC
    // 0x80041958: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80041ADC;
    // 0x80041958: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004195C:
    // 0x8004195C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80041960: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80041964: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80041968: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8004196C: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x80041970: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80041974: nop

    // 0x80041978: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8004197C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80041980: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80041984: nop

    // 0x80041988: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8004198C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80041990: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x80041994: div.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80041998: sll         $t6, $t9, 6
    ctx->r14 = S32(ctx->r25 << 6);
    // 0x8004199C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800419A0: nop

    // 0x800419A4: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800419A8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800419AC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800419B0: nop

    // 0x800419B4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800419B8: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x800419BC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800419C0: addu        $a1, $t6, $t8
    ctx->r5 = ADD32(ctx->r14, ctx->r24);
    // 0x800419C4: jal         0x8004189C
    // 0x800419C8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    func_8004189C(rdram, ctx);
        goto after_1;
    // 0x800419C8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    after_1:
    // 0x800419CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800419D0: bne         $v0, $v1, L_80041AAC
    if (ctx->r2 != ctx->r3) {
        // 0x800419D4: lui         $v0, 0x800B
        ctx->r2 = S32(0X800B << 16);
            goto L_80041AAC;
    }
    // 0x800419D4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800419D8: lw          $v0, -0x3C7C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C7C);
    // 0x800419DC: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x800419E0: beq         $v0, $at, L_800419F0
    if (ctx->r2 == ctx->r1) {
        // 0x800419E4: nop
    
            goto L_800419F0;
    }
    // 0x800419E4: nop

    // 0x800419E8: bne         $v1, $v0, L_80041A2C
    if (ctx->r3 != ctx->r2) {
        // 0x800419EC: nop
    
            goto L_80041A2C;
    }
    // 0x800419EC: nop

L_800419F0:
    // 0x800419F0: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x800419F4: sll         $t8, $a3, 1
    ctx->r24 = S32(ctx->r7 << 1);
    // 0x800419F8: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x800419FC: addu        $t7, $s1, $t9
    ctx->r15 = ADD32(ctx->r17, ctx->r25);
    // 0x80041A00: addu        $t9, $s1, $t8
    ctx->r25 = ADD32(ctx->r17, ctx->r24);
    // 0x80041A04: lhu         $v1, 0x0($t7)
    ctx->r3 = MEM_HU(ctx->r15, 0X0);
    // 0x80041A08: lhu         $a0, 0x0($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X0);
    // 0x80041A0C: andi        $t6, $v1, 0xC00
    ctx->r14 = ctx->r3 & 0XC00;
    // 0x80041A10: andi        $t7, $a0, 0xC00
    ctx->r15 = ctx->r4 & 0XC00;
    // 0x80041A14: bne         $t6, $t7, L_80041A24
    if (ctx->r14 != ctx->r15) {
        // 0x80041A18: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80041A24;
    }
    // 0x80041A18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80041A1C: b           L_80041A24
    // 0x80041A20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80041A24;
    // 0x80041A20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041A24:
    // 0x80041A24: bne         $v0, $zero, L_80041AAC
    if (ctx->r2 != 0) {
        // 0x80041A28: nop
    
            goto L_80041AAC;
    }
    // 0x80041A28: nop

L_80041A2C:
    // 0x80041A2C: lw          $t6, 0x18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X18);
    // 0x80041A30: addiu       $at, $zero, 0x1000
    ctx->r1 = ADD32(0, 0X1000);
    // 0x80041A34: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x80041A38: addu        $t9, $s1, $t8
    ctx->r25 = ADD32(ctx->r17, ctx->r24);
    // 0x80041A3C: lhu         $v0, 0x0($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X0);
    // 0x80041A40: nop

    // 0x80041A44: andi        $t7, $v0, 0xF000
    ctx->r15 = ctx->r2 & 0XF000;
    // 0x80041A48: beq         $t7, $at, L_80041A70
    if (ctx->r15 == ctx->r1) {
        // 0x80041A4C: addiu       $at, $zero, 0x2000
        ctx->r1 = ADD32(0, 0X2000);
            goto L_80041A70;
    }
    // 0x80041A4C: addiu       $at, $zero, 0x2000
    ctx->r1 = ADD32(0, 0X2000);
    // 0x80041A50: beq         $t7, $at, L_80041A7C
    if (ctx->r15 == ctx->r1) {
        // 0x80041A54: addiu       $at, $zero, 0x4000
        ctx->r1 = ADD32(0, 0X4000);
            goto L_80041A7C;
    }
    // 0x80041A54: addiu       $at, $zero, 0x4000
    ctx->r1 = ADD32(0, 0X4000);
    // 0x80041A58: beq         $t7, $at, L_80041A8C
    if (ctx->r15 == ctx->r1) {
        // 0x80041A5C: ori         $at, $zero, 0x8000
        ctx->r1 = 0 | 0X8000;
            goto L_80041A8C;
    }
    // 0x80041A5C: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x80041A60: beq         $t7, $at, L_80041AA0
    if (ctx->r15 == ctx->r1) {
        // 0x80041A64: lui         $at, 0xC2B4
        ctx->r1 = S32(0XC2B4 << 16);
            goto L_80041AA0;
    }
    // 0x80041A64: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x80041A68: b           L_80041AAC
    // 0x80041A6C: nop

        goto L_80041AAC;
    // 0x80041A6C: nop

L_80041A70:
    // 0x80041A70: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80041A74: b           L_80041AAC
    // 0x80041A78: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
        goto L_80041AAC;
    // 0x80041A78: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
L_80041A7C:
    // 0x80041A7C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80041A80: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80041A84: b           L_80041AAC
    // 0x80041A88: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
        goto L_80041AAC;
    // 0x80041A88: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
L_80041A8C:
    // 0x80041A8C: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x80041A90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80041A94: b           L_80041AAC
    // 0x80041A98: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
        goto L_80041AAC;
    // 0x80041A98: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x80041A9C: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
L_80041AA0:
    // 0x80041AA0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80041AA4: nop

    // 0x80041AA8: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
L_80041AAC:
    // 0x80041AAC: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80041AB0: lw          $t6, -0x4298($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4298);
    // 0x80041AB4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80041AB8: bne         $t6, $at, L_80041AD0
    if (ctx->r14 != ctx->r1) {
        // 0x80041ABC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80041AD0;
    }
    // 0x80041ABC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80041AC0: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x80041AC4: addiu       $t8, $t8, 0x3E40
    ctx->r24 = ADD32(ctx->r24, 0X3E40);
    // 0x80041AC8: b           L_80041ADC
    // 0x80041ACC: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
        goto L_80041ADC;
    // 0x80041ACC: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
L_80041AD0:
    // 0x80041AD0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x80041AD4: addiu       $t9, $t9, 0x3CF8
    ctx->r25 = ADD32(ctx->r25, 0X3CF8);
    // 0x80041AD8: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
L_80041ADC:
    // 0x80041ADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80041AE0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80041AE4: jr          $ra
    // 0x80041AE8: nop

    return;
    // 0x80041AE8: nop

;}
RECOMP_FUNC void func_80041AEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041AEC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80041AF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80041AF4: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80041AF8: lui         $s1, 0x8004
    ctx->r17 = S32(0X8004 << 16);
    // 0x80041AFC: addiu       $s1, $s1, 0x3E40
    ctx->r17 = ADD32(ctx->r17, 0X3E40);
    // 0x80041B00: bne         $s1, $t6, L_80041B10
    if (ctx->r17 != ctx->r14) {
        // 0x80041B04: sll         $t7, $a1, 2
        ctx->r15 = S32(ctx->r5 << 2);
            goto L_80041B10;
    }
    // 0x80041B04: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80041B08: b           L_80041C60
    // 0x80041B0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80041C60;
    // 0x80041B0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041B10:
    // 0x80041B10: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80041B14: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80041B18: lw          $t9, 0x1870($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1870);
    // 0x80041B1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80041B20: jalr        $t9
    // 0x80041B24: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80041B24: nop

    after_0:
    // 0x80041B28: beq         $v0, $zero, L_80041C5C
    if (ctx->r2 == 0) {
        // 0x80041B2C: andi        $t8, $s2, 0x2
        ctx->r24 = ctx->r18 & 0X2;
            goto L_80041C5C;
    }
    // 0x80041B2C: andi        $t8, $s2, 0x2
    ctx->r24 = ctx->r18 & 0X2;
    // 0x80041B30: beq         $t8, $zero, L_80041C3C
    if (ctx->r24 == 0) {
        // 0x80041B34: andi        $t7, $s2, 0x4
        ctx->r15 = ctx->r18 & 0X4;
            goto L_80041C3C;
    }
    // 0x80041B34: andi        $t7, $s2, 0x4
    ctx->r15 = ctx->r18 & 0X4;
    // 0x80041B38: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x80041B3C: jal         0x8002D000
    // 0x80041B40: nop

    func_8002D000(rdram, ctx);
        goto after_1;
    // 0x80041B40: nop

    after_1:
    // 0x80041B44: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80041B48: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80041B4C: jal         0x8004A0A0
    // 0x80041B50: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x80041B50: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_2:
    // 0x80041B54: beq         $v0, $zero, L_80041B64
    if (ctx->r2 == 0) {
        // 0x80041B58: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_80041B64;
    }
    // 0x80041B58: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80041B5C: b           L_80041C60
    // 0x80041B60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80041C60;
    // 0x80041B60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041B64:
    // 0x80041B64: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x80041B68: jal         0x8004A0A0
    // 0x80041B6C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_8004A0A0(rdram, ctx);
        goto after_3;
    // 0x80041B6C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_3:
    // 0x80041B70: beq         $v0, $zero, L_80041B80
    if (ctx->r2 == 0) {
        // 0x80041B74: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_80041B80;
    }
    // 0x80041B74: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80041B78: b           L_80041C60
    // 0x80041B7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80041C60;
    // 0x80041B7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041B80:
    // 0x80041B80: lwc1        $f2, 0x58($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80041B84: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80041B88: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80041B8C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80041B90: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80041B94: bc1f        L_80041BA8
    if (!c1cs) {
        // 0x80041B98: nop
    
            goto L_80041BA8;
    }
    // 0x80041B98: nop

    // 0x80041B9C: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80041BA0: b           L_80041BAC
    // 0x80041BA4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80041BAC;
    // 0x80041BA4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80041BA8:
    // 0x80041BA8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80041BAC:
    // 0x80041BAC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80041BB0: nop

    // 0x80041BB4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80041BB8: nop

    // 0x80041BBC: bc1f        L_80041C3C
    if (!c1cs) {
        // 0x80041BC0: andi        $t7, $s2, 0x4
        ctx->r15 = ctx->r18 & 0X4;
            goto L_80041C3C;
    }
    // 0x80041BC0: andi        $t7, $s2, 0x4
    ctx->r15 = ctx->r18 & 0X4;
    // 0x80041BC4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80041BC8: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80041BCC: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80041BD0: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80041BD4: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80041BD8: bc1f        L_80041BE8
    if (!c1cs) {
        // 0x80041BDC: nop
    
            goto L_80041BE8;
    }
    // 0x80041BDC: nop

    // 0x80041BE0: b           L_80041BEC
    // 0x80041BE4: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_80041BEC;
    // 0x80041BE4: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_80041BE8:
    // 0x80041BE8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80041BEC:
    // 0x80041BEC: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80041BF0: nop

    // 0x80041BF4: bc1f        L_80041C3C
    if (!c1cs) {
        // 0x80041BF8: andi        $t7, $s2, 0x4
        ctx->r15 = ctx->r18 & 0X4;
            goto L_80041C3C;
    }
    // 0x80041BF8: andi        $t7, $s2, 0x4
    ctx->r15 = ctx->r18 & 0X4;
    // 0x80041BFC: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80041C00: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x80041C04: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80041C08: addiu       $t6, $t6, 0x181C
    ctx->r14 = ADD32(ctx->r14, 0X181C);
    // 0x80041C0C: bc1f        L_80041C1C
    if (!c1cs) {
        // 0x80041C10: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80041C1C;
    }
    // 0x80041C10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80041C14: b           L_80041C20
    // 0x80041C18: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_80041C20;
    // 0x80041C18: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_80041C1C:
    // 0x80041C1C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80041C20:
    // 0x80041C20: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80041C24: nop

    // 0x80041C28: bc1f        L_80041C3C
    if (!c1cs) {
        // 0x80041C2C: andi        $t7, $s2, 0x4
        ctx->r15 = ctx->r18 & 0X4;
            goto L_80041C3C;
    }
    // 0x80041C2C: andi        $t7, $s2, 0x4
    ctx->r15 = ctx->r18 & 0X4;
    // 0x80041C30: b           L_80041C60
    // 0x80041C34: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
        goto L_80041C60;
    // 0x80041C34: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80041C38: andi        $t7, $s2, 0x4
    ctx->r15 = ctx->r18 & 0X4;
L_80041C3C:
    // 0x80041C3C: beq         $t7, $zero, L_80041C54
    if (ctx->r15 == 0) {
        // 0x80041C40: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80041C54;
    }
    // 0x80041C40: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80041C44: jal         0x800418F4
    // 0x80041C48: nop

    func_800418F4(rdram, ctx);
        goto after_4;
    // 0x80041C48: nop

    after_4:
    // 0x80041C4C: b           L_80041C64
    // 0x80041C50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80041C64;
    // 0x80041C50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80041C54:
    // 0x80041C54: b           L_80041C60
    // 0x80041C58: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
        goto L_80041C60;
    // 0x80041C58: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
L_80041C5C:
    // 0x80041C5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041C60:
    // 0x80041C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80041C64:
    // 0x80041C64: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80041C68: jr          $ra
    // 0x80041C6C: nop

    return;
    // 0x80041C6C: nop

;}
RECOMP_FUNC void func_80041C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041C70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80041C74: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80041C78: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80041C7C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80041C80: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80041C84: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80041C88: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80041C8C: jal         0x80041AEC
    // 0x80041C90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80041AEC(rdram, ctx);
        goto after_0;
    // 0x80041C90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80041C94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80041C98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80041C9C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80041CA0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80041CA4: jr          $ra
    // 0x80041CA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80041CA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80041CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041CAC: jr          $ra
    // 0x80041CB0: nop

    return;
    // 0x80041CB0: nop

;}
RECOMP_FUNC void func_80041CBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041CBC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80041CC0: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80041CC4: bgez        $v0, L_80041CD4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80041CC8: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_80041CD4;
    }
    // 0x80041CC8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80041CCC: b           L_80041CD4
    // 0x80041CD0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80041CD4;
    // 0x80041CD0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80041CD4:
    // 0x80041CD4: sll         $a1, $v1, 2
    ctx->r5 = S32(ctx->r3 << 2);
    // 0x80041CD8: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x80041CDC: lwc1        $f0, 0xBE8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE8);
    // 0x80041CE0: lw          $a2, 0x18($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X18);
    // 0x80041CE4: bgez        $v0, L_80041CF4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80041CE8: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_80041CF4;
    }
    // 0x80041CE8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x80041CEC: b           L_80041CF8
    // 0x80041CF0: negu        $t1, $v0
    ctx->r9 = SUB32(0, ctx->r2);
        goto L_80041CF8;
    // 0x80041CF0: negu        $t1, $v0
    ctx->r9 = SUB32(0, ctx->r2);
L_80041CF4:
    // 0x80041CF4: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
L_80041CF8:
    // 0x80041CF8: blez        $t1, L_80041DA4
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80041CFC: lui         $t2, 0x8009
        ctx->r10 = S32(0X8009 << 16);
            goto L_80041DA4;
    }
    // 0x80041CFC: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x80041D00: addu        $t2, $t2, $a1
    ctx->r10 = ADD32(ctx->r10, ctx->r5);
    // 0x80041D04: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x80041D08: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80041D0C: lw          $t2, 0xBD4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0XBD4);
    // 0x80041D10: addiu       $s0, $s0, -0x75A8
    ctx->r16 = ADD32(ctx->r16, -0X75A8);
    // 0x80041D14: addiu       $s1, $s1, 0xBC0
    ctx->r17 = ADD32(ctx->r17, 0XBC0);
    // 0x80041D18: sll         $t6, $a2, 1
    ctx->r14 = S32(ctx->r6 << 1);
L_80041D1C:
    // 0x80041D1C: addu        $v1, $s0, $t6
    ctx->r3 = ADD32(ctx->r16, ctx->r14);
    // 0x80041D20: lhu         $t7, 0x0($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X0);
    // 0x80041D24: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80041D28: and         $t8, $t2, $t7
    ctx->r24 = ctx->r10 & ctx->r15;
    // 0x80041D2C: andi        $t9, $t8, 0xF0
    ctx->r25 = ctx->r24 & 0XF0;
    // 0x80041D30: beq         $t9, $zero, L_80041D40
    if (ctx->r25 == 0) {
        // 0x80041D34: addu        $t6, $s1, $a1
        ctx->r14 = ADD32(ctx->r17, ctx->r5);
            goto L_80041D40;
    }
    // 0x80041D34: addu        $t6, $s1, $a1
    ctx->r14 = ADD32(ctx->r17, ctx->r5);
    // 0x80041D38: jr          $ra
    // 0x80041D3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80041D3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041D40:
    // 0x80041D40: lw          $t1, 0x0($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X0);
    // 0x80041D44: nop

    // 0x80041D48: sll         $t7, $t1, 1
    ctx->r15 = S32(ctx->r9 << 1);
    // 0x80041D4C: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x80041D50: lhu         $t5, 0x0($t8)
    ctx->r13 = MEM_HU(ctx->r24, 0X0);
    // 0x80041D54: nop

    // 0x80041D58: andi        $t9, $t5, 0x100
    ctx->r25 = ctx->r13 & 0X100;
    // 0x80041D5C: beq         $t9, $zero, L_80041D6C
    if (ctx->r25 == 0) {
        // 0x80041D60: andi        $t6, $t5, 0x200
        ctx->r14 = ctx->r13 & 0X200;
            goto L_80041D6C;
    }
    // 0x80041D60: andi        $t6, $t5, 0x200
    ctx->r14 = ctx->r13 & 0X200;
    // 0x80041D64: jr          $ra
    // 0x80041D68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80041D68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041D6C:
    // 0x80041D6C: beq         $t3, $zero, L_80041D84
    if (ctx->r11 == 0) {
        // 0x80041D70: nop
    
            goto L_80041D84;
    }
    // 0x80041D70: nop

    // 0x80041D74: beq         $t6, $zero, L_80041D84
    if (ctx->r14 == 0) {
        // 0x80041D78: nop
    
            goto L_80041D84;
    }
    // 0x80041D78: nop

    // 0x80041D7C: jr          $ra
    // 0x80041D80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80041D80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041D84:
    // 0x80041D84: bgez        $v0, L_80041D94
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80041D88: addu        $a2, $a2, $t1
        ctx->r6 = ADD32(ctx->r6, ctx->r9);
            goto L_80041D94;
    }
    // 0x80041D88: addu        $a2, $a2, $t1
    ctx->r6 = ADD32(ctx->r6, ctx->r9);
    // 0x80041D8C: b           L_80041D98
    // 0x80041D90: negu        $t1, $v0
    ctx->r9 = SUB32(0, ctx->r2);
        goto L_80041D98;
    // 0x80041D90: negu        $t1, $v0
    ctx->r9 = SUB32(0, ctx->r2);
L_80041D94:
    // 0x80041D94: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
L_80041D98:
    // 0x80041D98: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80041D9C: bne         $at, $zero, L_80041D1C
    if (ctx->r1 != 0) {
        // 0x80041DA0: sll         $t6, $a2, 1
        ctx->r14 = S32(ctx->r6 << 1);
            goto L_80041D1C;
    }
    // 0x80041DA0: sll         $t6, $a2, 1
    ctx->r14 = S32(ctx->r6 << 1);
L_80041DA4:
    // 0x80041DA4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80041DA8: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80041DAC: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x80041DB0: addiu       $s1, $s1, 0xBC0
    ctx->r17 = ADD32(ctx->r17, 0XBC0);
    // 0x80041DB4: addiu       $s0, $s0, -0x75A8
    ctx->r16 = ADD32(ctx->r16, -0X75A8);
    // 0x80041DB8: bne         $v0, $zero, L_80041DD0
    if (ctx->r2 != 0) {
        // 0x80041DBC: or          $t4, $a2, $zero
        ctx->r12 = ctx->r6 | 0;
            goto L_80041DD0;
    }
    // 0x80041DBC: or          $t4, $a2, $zero
    ctx->r12 = ctx->r6 | 0;
    // 0x80041DC0: sw          $a2, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r6;
    // 0x80041DC4: swc1        $f0, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f0.u32l;
    // 0x80041DC8: jr          $ra
    // 0x80041DCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80041DCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80041DD0:
    // 0x80041DD0: bgez        $v0, L_80041DE0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80041DD4: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_80041DE0;
    }
    // 0x80041DD4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x80041DD8: b           L_80041DE4
    // 0x80041DDC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_80041DE4;
    // 0x80041DDC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80041DE0:
    // 0x80041DE0: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_80041DE4:
    // 0x80041DE4: bgez        $v0, L_80041DF4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80041DE8: or          $t1, $v0, $zero
        ctx->r9 = ctx->r2 | 0;
            goto L_80041DF4;
    }
    // 0x80041DE8: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x80041DEC: b           L_80041DF4
    // 0x80041DF0: negu        $t1, $v0
    ctx->r9 = SUB32(0, ctx->r2);
        goto L_80041DF4;
    // 0x80041DF0: negu        $t1, $v0
    ctx->r9 = SUB32(0, ctx->r2);
L_80041DF4:
    // 0x80041DF4: blez        $t1, L_80041E98
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80041DF8: sll         $a1, $v1, 2
        ctx->r5 = S32(ctx->r3 << 2);
            goto L_80041E98;
    }
    // 0x80041DF8: sll         $a1, $v1, 2
    ctx->r5 = S32(ctx->r3 << 2);
    // 0x80041DFC: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x80041E00: addu        $t2, $t2, $a1
    ctx->r10 = ADD32(ctx->r10, ctx->r5);
    // 0x80041E04: lw          $t2, 0xBD4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0XBD4);
    // 0x80041E08: nop

    // 0x80041E0C: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
L_80041E10:
    // 0x80041E10: addu        $v1, $s0, $t7
    ctx->r3 = ADD32(ctx->r16, ctx->r15);
    // 0x80041E14: lhu         $t8, 0x0($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X0);
    // 0x80041E18: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80041E1C: and         $t9, $t2, $t8
    ctx->r25 = ctx->r10 & ctx->r24;
    // 0x80041E20: andi        $t6, $t9, 0xF0
    ctx->r14 = ctx->r25 & 0XF0;
    // 0x80041E24: beq         $t6, $zero, L_80041E34
    if (ctx->r14 == 0) {
        // 0x80041E28: addu        $t7, $s1, $a1
        ctx->r15 = ADD32(ctx->r17, ctx->r5);
            goto L_80041E34;
    }
    // 0x80041E28: addu        $t7, $s1, $a1
    ctx->r15 = ADD32(ctx->r17, ctx->r5);
    // 0x80041E2C: jr          $ra
    // 0x80041E30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80041E30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041E34:
    // 0x80041E34: lw          $t1, 0x0($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X0);
    // 0x80041E38: nop

    // 0x80041E3C: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x80041E40: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x80041E44: lhu         $t5, 0x0($t9)
    ctx->r13 = MEM_HU(ctx->r25, 0X0);
    // 0x80041E48: nop

    // 0x80041E4C: andi        $t6, $t5, 0x100
    ctx->r14 = ctx->r13 & 0X100;
    // 0x80041E50: beq         $t6, $zero, L_80041E60
    if (ctx->r14 == 0) {
        // 0x80041E54: andi        $t7, $t5, 0x200
        ctx->r15 = ctx->r13 & 0X200;
            goto L_80041E60;
    }
    // 0x80041E54: andi        $t7, $t5, 0x200
    ctx->r15 = ctx->r13 & 0X200;
    // 0x80041E58: jr          $ra
    // 0x80041E5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80041E5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041E60:
    // 0x80041E60: beq         $t3, $zero, L_80041E78
    if (ctx->r11 == 0) {
        // 0x80041E64: nop
    
            goto L_80041E78;
    }
    // 0x80041E64: nop

    // 0x80041E68: beq         $t7, $zero, L_80041E78
    if (ctx->r15 == 0) {
        // 0x80041E6C: nop
    
            goto L_80041E78;
    }
    // 0x80041E6C: nop

    // 0x80041E70: jr          $ra
    // 0x80041E74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80041E74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041E78:
    // 0x80041E78: bgez        $v0, L_80041E88
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80041E7C: addu        $a2, $a2, $t1
        ctx->r6 = ADD32(ctx->r6, ctx->r9);
            goto L_80041E88;
    }
    // 0x80041E7C: addu        $a2, $a2, $t1
    ctx->r6 = ADD32(ctx->r6, ctx->r9);
    // 0x80041E80: b           L_80041E8C
    // 0x80041E84: negu        $t1, $v0
    ctx->r9 = SUB32(0, ctx->r2);
        goto L_80041E8C;
    // 0x80041E84: negu        $t1, $v0
    ctx->r9 = SUB32(0, ctx->r2);
L_80041E88:
    // 0x80041E88: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
L_80041E8C:
    // 0x80041E8C: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80041E90: bne         $at, $zero, L_80041E10
    if (ctx->r1 != 0) {
        // 0x80041E94: sll         $t7, $a2, 1
        ctx->r15 = S32(ctx->r6 << 1);
            goto L_80041E10;
    }
    // 0x80041E94: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
L_80041E98:
    // 0x80041E98: sw          $t4, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r12;
    // 0x80041E9C: swc1        $f0, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f0.u32l;
    // 0x80041EA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80041EA4: jr          $ra
    // 0x80041EA8: nop

    return;
    // 0x80041EA8: nop

;}
RECOMP_FUNC void func_80041EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041EAC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80041EB0: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80041EB4: bgez        $v0, L_80041EC4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80041EB8: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_80041EC4;
    }
    // 0x80041EB8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80041EBC: b           L_80041EC4
    // 0x80041EC0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_80041EC4;
    // 0x80041EC0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80041EC4:
    // 0x80041EC4: sll         $a1, $v1, 2
    ctx->r5 = S32(ctx->r3 << 2);
    // 0x80041EC8: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x80041ECC: lwc1        $f0, 0xBE8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XBE8);
    // 0x80041ED0: lw          $a2, 0x18($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X18);
    // 0x80041ED4: bgez        $v0, L_80041EE4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80041ED8: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_80041EE4;
    }
    // 0x80041ED8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x80041EDC: b           L_80041EE8
    // 0x80041EE0: negu        $t1, $v0
    ctx->r9 = SUB32(0, ctx->r2);
        goto L_80041EE8;
    // 0x80041EE0: negu        $t1, $v0
    ctx->r9 = SUB32(0, ctx->r2);
L_80041EE4:
    // 0x80041EE4: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
L_80041EE8:
    // 0x80041EE8: blez        $t1, L_80041F94
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80041EEC: lui         $t2, 0x8009
        ctx->r10 = S32(0X8009 << 16);
            goto L_80041F94;
    }
    // 0x80041EEC: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x80041EF0: addu        $t2, $t2, $a1
    ctx->r10 = ADD32(ctx->r10, ctx->r5);
    // 0x80041EF4: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x80041EF8: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80041EFC: lw          $t2, 0xBD4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0XBD4);
    // 0x80041F00: addiu       $s0, $s0, -0x75A8
    ctx->r16 = ADD32(ctx->r16, -0X75A8);
    // 0x80041F04: addiu       $s1, $s1, 0xBC0
    ctx->r17 = ADD32(ctx->r17, 0XBC0);
    // 0x80041F08: sll         $t6, $a2, 1
    ctx->r14 = S32(ctx->r6 << 1);
L_80041F0C:
    // 0x80041F0C: addu        $v1, $s0, $t6
    ctx->r3 = ADD32(ctx->r16, ctx->r14);
    // 0x80041F10: lhu         $t7, 0x0($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X0);
    // 0x80041F14: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80041F18: and         $t8, $t2, $t7
    ctx->r24 = ctx->r10 & ctx->r15;
    // 0x80041F1C: andi        $t9, $t8, 0xF0
    ctx->r25 = ctx->r24 & 0XF0;
    // 0x80041F20: beq         $t9, $zero, L_80041F30
    if (ctx->r25 == 0) {
        // 0x80041F24: addu        $t6, $s1, $a1
        ctx->r14 = ADD32(ctx->r17, ctx->r5);
            goto L_80041F30;
    }
    // 0x80041F24: addu        $t6, $s1, $a1
    ctx->r14 = ADD32(ctx->r17, ctx->r5);
    // 0x80041F28: jr          $ra
    // 0x80041F2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80041F2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041F30:
    // 0x80041F30: lw          $t1, 0x0($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X0);
    // 0x80041F34: nop

    // 0x80041F38: sll         $t7, $t1, 1
    ctx->r15 = S32(ctx->r9 << 1);
    // 0x80041F3C: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x80041F40: lhu         $t5, 0x0($t8)
    ctx->r13 = MEM_HU(ctx->r24, 0X0);
    // 0x80041F44: nop

    // 0x80041F48: andi        $t9, $t5, 0x100
    ctx->r25 = ctx->r13 & 0X100;
    // 0x80041F4C: beq         $t9, $zero, L_80041F5C
    if (ctx->r25 == 0) {
        // 0x80041F50: andi        $t6, $t5, 0x200
        ctx->r14 = ctx->r13 & 0X200;
            goto L_80041F5C;
    }
    // 0x80041F50: andi        $t6, $t5, 0x200
    ctx->r14 = ctx->r13 & 0X200;
    // 0x80041F54: jr          $ra
    // 0x80041F58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80041F58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041F5C:
    // 0x80041F5C: beq         $t3, $zero, L_80041F74
    if (ctx->r11 == 0) {
        // 0x80041F60: nop
    
            goto L_80041F74;
    }
    // 0x80041F60: nop

    // 0x80041F64: beq         $t6, $zero, L_80041F74
    if (ctx->r14 == 0) {
        // 0x80041F68: nop
    
            goto L_80041F74;
    }
    // 0x80041F68: nop

    // 0x80041F6C: jr          $ra
    // 0x80041F70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80041F70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041F74:
    // 0x80041F74: bgez        $v0, L_80041F84
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80041F78: addu        $a2, $a2, $t1
        ctx->r6 = ADD32(ctx->r6, ctx->r9);
            goto L_80041F84;
    }
    // 0x80041F78: addu        $a2, $a2, $t1
    ctx->r6 = ADD32(ctx->r6, ctx->r9);
    // 0x80041F7C: b           L_80041F88
    // 0x80041F80: negu        $t1, $v0
    ctx->r9 = SUB32(0, ctx->r2);
        goto L_80041F88;
    // 0x80041F80: negu        $t1, $v0
    ctx->r9 = SUB32(0, ctx->r2);
L_80041F84:
    // 0x80041F84: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
L_80041F88:
    // 0x80041F88: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80041F8C: bne         $at, $zero, L_80041F0C
    if (ctx->r1 != 0) {
        // 0x80041F90: sll         $t6, $a2, 1
        ctx->r14 = S32(ctx->r6 << 1);
            goto L_80041F0C;
    }
    // 0x80041F90: sll         $t6, $a2, 1
    ctx->r14 = S32(ctx->r6 << 1);
L_80041F94:
    // 0x80041F94: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80041F98: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80041F9C: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x80041FA0: addiu       $s1, $s1, 0xBC0
    ctx->r17 = ADD32(ctx->r17, 0XBC0);
    // 0x80041FA4: addiu       $s0, $s0, -0x75A8
    ctx->r16 = ADD32(ctx->r16, -0X75A8);
    // 0x80041FA8: bne         $v0, $zero, L_80041FC0
    if (ctx->r2 != 0) {
        // 0x80041FAC: or          $t4, $a2, $zero
        ctx->r12 = ctx->r6 | 0;
            goto L_80041FC0;
    }
    // 0x80041FAC: or          $t4, $a2, $zero
    ctx->r12 = ctx->r6 | 0;
    // 0x80041FB0: sw          $a2, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r6;
    // 0x80041FB4: swc1        $f0, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f0.u32l;
    // 0x80041FB8: jr          $ra
    // 0x80041FBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80041FBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80041FC0:
    // 0x80041FC0: bgez        $v0, L_80041FD0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80041FC4: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_80041FD0;
    }
    // 0x80041FC4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x80041FC8: b           L_80041FD4
    // 0x80041FCC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80041FD4;
    // 0x80041FCC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80041FD0:
    // 0x80041FD0: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_80041FD4:
    // 0x80041FD4: bgez        $v0, L_80041FE4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80041FD8: or          $t1, $v0, $zero
        ctx->r9 = ctx->r2 | 0;
            goto L_80041FE4;
    }
    // 0x80041FD8: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x80041FDC: b           L_80041FE4
    // 0x80041FE0: negu        $t1, $v0
    ctx->r9 = SUB32(0, ctx->r2);
        goto L_80041FE4;
    // 0x80041FE0: negu        $t1, $v0
    ctx->r9 = SUB32(0, ctx->r2);
L_80041FE4:
    // 0x80041FE4: blez        $t1, L_80042088
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80041FE8: sll         $a1, $v1, 2
        ctx->r5 = S32(ctx->r3 << 2);
            goto L_80042088;
    }
    // 0x80041FE8: sll         $a1, $v1, 2
    ctx->r5 = S32(ctx->r3 << 2);
    // 0x80041FEC: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x80041FF0: addu        $t2, $t2, $a1
    ctx->r10 = ADD32(ctx->r10, ctx->r5);
    // 0x80041FF4: lw          $t2, 0xBD4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0XBD4);
    // 0x80041FF8: nop

    // 0x80041FFC: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
L_80042000:
    // 0x80042000: addu        $v1, $s0, $t7
    ctx->r3 = ADD32(ctx->r16, ctx->r15);
    // 0x80042004: lhu         $t8, 0x0($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X0);
    // 0x80042008: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8004200C: and         $t9, $t2, $t8
    ctx->r25 = ctx->r10 & ctx->r24;
    // 0x80042010: andi        $t6, $t9, 0xF0
    ctx->r14 = ctx->r25 & 0XF0;
    // 0x80042014: beq         $t6, $zero, L_80042024
    if (ctx->r14 == 0) {
        // 0x80042018: addu        $t7, $s1, $a1
        ctx->r15 = ADD32(ctx->r17, ctx->r5);
            goto L_80042024;
    }
    // 0x80042018: addu        $t7, $s1, $a1
    ctx->r15 = ADD32(ctx->r17, ctx->r5);
    // 0x8004201C: jr          $ra
    // 0x80042020: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80042020: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80042024:
    // 0x80042024: lw          $t1, 0x0($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X0);
    // 0x80042028: nop

    // 0x8004202C: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x80042030: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x80042034: lhu         $t5, 0x0($t9)
    ctx->r13 = MEM_HU(ctx->r25, 0X0);
    // 0x80042038: nop

    // 0x8004203C: andi        $t6, $t5, 0x100
    ctx->r14 = ctx->r13 & 0X100;
    // 0x80042040: beq         $t6, $zero, L_80042050
    if (ctx->r14 == 0) {
        // 0x80042044: andi        $t7, $t5, 0x200
        ctx->r15 = ctx->r13 & 0X200;
            goto L_80042050;
    }
    // 0x80042044: andi        $t7, $t5, 0x200
    ctx->r15 = ctx->r13 & 0X200;
    // 0x80042048: jr          $ra
    // 0x8004204C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8004204C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80042050:
    // 0x80042050: beq         $t3, $zero, L_80042068
    if (ctx->r11 == 0) {
        // 0x80042054: nop
    
            goto L_80042068;
    }
    // 0x80042054: nop

    // 0x80042058: beq         $t7, $zero, L_80042068
    if (ctx->r15 == 0) {
        // 0x8004205C: nop
    
            goto L_80042068;
    }
    // 0x8004205C: nop

    // 0x80042060: jr          $ra
    // 0x80042064: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80042064: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80042068:
    // 0x80042068: bgez        $v0, L_80042078
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004206C: addu        $a2, $a2, $t1
        ctx->r6 = ADD32(ctx->r6, ctx->r9);
            goto L_80042078;
    }
    // 0x8004206C: addu        $a2, $a2, $t1
    ctx->r6 = ADD32(ctx->r6, ctx->r9);
    // 0x80042070: b           L_8004207C
    // 0x80042074: negu        $t1, $v0
    ctx->r9 = SUB32(0, ctx->r2);
        goto L_8004207C;
    // 0x80042074: negu        $t1, $v0
    ctx->r9 = SUB32(0, ctx->r2);
L_80042078:
    // 0x80042078: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
L_8004207C:
    // 0x8004207C: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80042080: bne         $at, $zero, L_80042000
    if (ctx->r1 != 0) {
        // 0x80042084: sll         $t7, $a2, 1
        ctx->r15 = S32(ctx->r6 << 1);
            goto L_80042000;
    }
    // 0x80042084: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
L_80042088:
    // 0x80042088: sw          $t4, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r12;
    // 0x8004208C: swc1        $f0, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f0.u32l;
    // 0x80042090: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80042094: jr          $ra
    // 0x80042098: nop

    return;
    // 0x80042098: nop

;}
RECOMP_FUNC void func_8004209C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004209C: sll         $t6, $s2, 1
    ctx->r14 = S32(ctx->r18 << 1);
    // 0x800420A0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800420A4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x800420A8: lhu         $v0, -0x75A8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X75A8);
    // 0x800420AC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800420B0: andi        $t7, $v0, 0x200
    ctx->r15 = ctx->r2 & 0X200;
    // 0x800420B4: bne         $t7, $zero, L_80042234
    if (ctx->r15 != 0) {
        // 0x800420B8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80042234;
    }
    // 0x800420B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800420BC: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
    // 0x800420C0: andi        $t9, $s2, 0x3F
    ctx->r25 = ctx->r18 & 0X3F;
    // 0x800420C4: bne         $s2, $v0, L_800420D4
    if (ctx->r18 != ctx->r2) {
        // 0x800420C8: andi        $t8, $v0, 0x3F
        ctx->r24 = ctx->r2 & 0X3F;
            goto L_800420D4;
    }
    // 0x800420C8: andi        $t8, $v0, 0x3F
    ctx->r24 = ctx->r2 & 0X3F;
    // 0x800420CC: b           L_80042238
    // 0x800420D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80042238;
    // 0x800420D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800420D4:
    // 0x800420D4: subu        $t6, $t8, $t9
    ctx->r14 = SUB32(ctx->r24, ctx->r25);
    // 0x800420D8: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x800420DC: lw          $t7, 0x18($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X18);
    // 0x800420E0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800420E4: sra         $t8, $t7, 6
    ctx->r24 = S32(SIGNED(ctx->r15) >> 6);
    // 0x800420E8: andi        $t9, $t8, 0x3F
    ctx->r25 = ctx->r24 & 0X3F;
    // 0x800420EC: sra         $t7, $s2, 6
    ctx->r15 = S32(SIGNED(ctx->r18) >> 6);
    // 0x800420F0: andi        $t8, $t7, 0x3F
    ctx->r24 = ctx->r15 & 0X3F;
    // 0x800420F4: subu        $t7, $t9, $t8
    ctx->r15 = SUB32(ctx->r25, ctx->r24);
    // 0x800420F8: bgez        $t6, L_80042108
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800420FC: sw          $t7, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r15;
            goto L_80042108;
    }
    // 0x800420FC: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x80042100: b           L_80042108
    // 0x80042104: negu        $a0, $t6
    ctx->r4 = SUB32(0, ctx->r14);
        goto L_80042108;
    // 0x80042104: negu        $a0, $t6
    ctx->r4 = SUB32(0, ctx->r14);
L_80042108:
    // 0x80042108: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x8004210C: addiu       $s4, $sp, 0x28
    ctx->r20 = ADD32(ctx->r29, 0X28);
    // 0x80042110: bgez        $v1, L_80042120
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80042114: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80042120;
    }
    // 0x80042114: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80042118: b           L_80042120
    // 0x8004211C: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
        goto L_80042120;
    // 0x8004211C: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
L_80042120:
    // 0x80042120: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80042124: beq         $at, $zero, L_800421B4
    if (ctx->r1 == 0) {
        // 0x80042128: or          $a3, $s3, $zero
        ctx->r7 = ctx->r19 | 0;
            goto L_800421B4;
    }
    // 0x80042128: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x8004212C: addiu       $s4, $sp, 0x28
    ctx->r20 = ADD32(ctx->r29, 0X28);
    // 0x80042130: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80042134: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x80042138: sw          $s2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r18;
    // 0x8004213C: jal         0x80041CBC
    // 0x80042140: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    func_80041CBC(rdram, ctx);
        goto after_0;
    // 0x80042140: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    after_0:
    // 0x80042144: beq         $v0, $zero, L_80042154
    if (ctx->r2 == 0) {
        // 0x80042148: or          $a3, $s3, $zero
        ctx->r7 = ctx->r19 | 0;
            goto L_80042154;
    }
    // 0x80042148: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x8004214C: b           L_80042238
    // 0x80042150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80042238;
    // 0x80042150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80042154:
    // 0x80042154: sw          $s2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r18;
    // 0x80042158: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8004215C: jal         0x80041EAC
    // 0x80042160: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    func_80041EAC(rdram, ctx);
        goto after_1;
    // 0x80042160: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    after_1:
    // 0x80042164: beq         $v0, $zero, L_80042174
    if (ctx->r2 == 0) {
        // 0x80042168: or          $a3, $s3, $zero
        ctx->r7 = ctx->r19 | 0;
            goto L_80042174;
    }
    // 0x80042168: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x8004216C: b           L_80042238
    // 0x80042170: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80042238;
    // 0x80042170: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80042174:
    // 0x80042174: sw          $s2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r18;
    // 0x80042178: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8004217C: jal         0x80041CBC
    // 0x80042180: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    func_80041CBC(rdram, ctx);
        goto after_2;
    // 0x80042180: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    after_2:
    // 0x80042184: beq         $v0, $zero, L_80042194
    if (ctx->r2 == 0) {
        // 0x80042188: or          $a3, $s3, $zero
        ctx->r7 = ctx->r19 | 0;
            goto L_80042194;
    }
    // 0x80042188: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x8004218C: b           L_80042238
    // 0x80042190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80042238;
    // 0x80042190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80042194:
    // 0x80042194: sw          $s2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r18;
    // 0x80042198: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8004219C: jal         0x80041EAC
    // 0x800421A0: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    func_80041EAC(rdram, ctx);
        goto after_3;
    // 0x800421A0: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    after_3:
    // 0x800421A4: beq         $v0, $zero, L_80042238
    if (ctx->r2 == 0) {
        // 0x800421A8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80042238;
    }
    // 0x800421A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800421AC: b           L_80042238
    // 0x800421B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80042238;
    // 0x800421B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800421B4:
    // 0x800421B4: sw          $s2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r18;
    // 0x800421B8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800421BC: jal         0x80041EAC
    // 0x800421C0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    func_80041EAC(rdram, ctx);
        goto after_4;
    // 0x800421C0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    after_4:
    // 0x800421C4: beq         $v0, $zero, L_800421D4
    if (ctx->r2 == 0) {
        // 0x800421C8: or          $a3, $s3, $zero
        ctx->r7 = ctx->r19 | 0;
            goto L_800421D4;
    }
    // 0x800421C8: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x800421CC: b           L_80042238
    // 0x800421D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80042238;
    // 0x800421D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800421D4:
    // 0x800421D4: sw          $s2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r18;
    // 0x800421D8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800421DC: jal         0x80041CBC
    // 0x800421E0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    func_80041CBC(rdram, ctx);
        goto after_5;
    // 0x800421E0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    after_5:
    // 0x800421E4: beq         $v0, $zero, L_800421F4
    if (ctx->r2 == 0) {
        // 0x800421E8: or          $a3, $s3, $zero
        ctx->r7 = ctx->r19 | 0;
            goto L_800421F4;
    }
    // 0x800421E8: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x800421EC: b           L_80042238
    // 0x800421F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80042238;
    // 0x800421F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800421F4:
    // 0x800421F4: sw          $s2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r18;
    // 0x800421F8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800421FC: jal         0x80041EAC
    // 0x80042200: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    func_80041EAC(rdram, ctx);
        goto after_6;
    // 0x80042200: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    after_6:
    // 0x80042204: beq         $v0, $zero, L_80042214
    if (ctx->r2 == 0) {
        // 0x80042208: or          $a3, $s3, $zero
        ctx->r7 = ctx->r19 | 0;
            goto L_80042214;
    }
    // 0x80042208: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x8004220C: b           L_80042238
    // 0x80042210: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80042238;
    // 0x80042210: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80042214:
    // 0x80042214: sw          $s2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r18;
    // 0x80042218: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8004221C: jal         0x80041CBC
    // 0x80042220: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    func_80041CBC(rdram, ctx);
        goto after_7;
    // 0x80042220: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    after_7:
    // 0x80042224: beq         $v0, $zero, L_80042238
    if (ctx->r2 == 0) {
        // 0x80042228: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80042238;
    }
    // 0x80042228: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004222C: b           L_80042238
    // 0x80042230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80042238;
    // 0x80042230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80042234:
    // 0x80042234: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80042238:
    // 0x80042238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004223C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80042240: jr          $ra
    // 0x80042244: nop

    return;
    // 0x80042244: nop

;}
RECOMP_FUNC void func_80042248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042248: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8004224C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80042250: jal         0x8002D000
    // 0x80042254: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x80042254: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80042258: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8004225C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80042260: jal         0x8004A0A0
    // 0x80042264: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x80042264: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x80042268: beq         $v0, $zero, L_80042278
    if (ctx->r2 == 0) {
        // 0x8004226C: nop
    
            goto L_80042278;
    }
    // 0x8004226C: nop

    // 0x80042270: b           L_800423E4
    // 0x80042274: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800423E4;
    // 0x80042274: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80042278:
    // 0x80042278: lw          $t6, 0x24($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X24);
    // 0x8004227C: nop

    // 0x80042280: bgez        $t6, L_80042298
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80042284: or          $s7, $zero, $zero
        ctx->r23 = 0 | 0;
            goto L_80042298;
    }
    // 0x80042284: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80042288: jal         0x80028AB8
    // 0x8004228C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80028AB8(rdram, ctx);
        goto after_2;
    // 0x8004228C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
    // 0x80042290: sw          $v0, 0x24($fp)
    MEM_W(0X24, ctx->r30) = ctx->r2;
    // 0x80042294: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_80042298:
    // 0x80042298: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
L_8004229C:
    // 0x8004229C: lw          $v1, 0x18($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X18);
    // 0x800422A0: bne         $s7, $zero, L_800422B0
    if (ctx->r23 != 0) {
        // 0x800422A4: nop
    
            goto L_800422B0;
    }
    // 0x800422A4: nop

    // 0x800422A8: b           L_800422DC
    // 0x800422AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800422DC;
    // 0x800422AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800422B0:
    // 0x800422B0: lw          $t7, 0x24($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X24);
    // 0x800422B4: sll         $t9, $s5, 2
    ctx->r25 = S32(ctx->r21 << 2);
    // 0x800422B8: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x800422BC: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x800422C0: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x800422C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800422C8: lw          $t7, 0x1920($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1920);
    // 0x800422CC: addiu       $t8, $s7, -0x1
    ctx->r24 = ADD32(ctx->r23, -0X1);
    // 0x800422D0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800422D4: addu        $v0, $t7, $t9
    ctx->r2 = ADD32(ctx->r15, ctx->r25);
    // 0x800422D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_800422DC:
    // 0x800422DC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x800422E0: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x800422E4: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x800422E8: lw          $t8, 0x187C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X187C);
    // 0x800422EC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x800422F0: addu        $s6, $t8, $v1
    ctx->r22 = ADD32(ctx->r24, ctx->r3);
    // 0x800422F4: bltz        $s6, L_800423A0
    if (SIGNED(ctx->r22) < 0) {
        // 0x800422F8: sll         $t7, $s6, 1
        ctx->r15 = S32(ctx->r22 << 1);
            goto L_800423A0;
    }
    // 0x800422F8: sll         $t7, $s6, 1
    ctx->r15 = S32(ctx->r22 << 1);
    // 0x800422FC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80042300: lhu         $t9, -0x75A8($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X75A8);
    // 0x80042304: addiu       $at, $zero, 0xF0
    ctx->r1 = ADD32(0, 0XF0);
    // 0x80042308: andi        $t6, $t9, 0xF0
    ctx->r14 = ctx->r25 & 0XF0;
    // 0x8004230C: beq         $t6, $at, L_800423A0
    if (ctx->r14 == ctx->r1) {
        // 0x80042310: addiu       $t8, $sp, 0x2C
        ctx->r24 = ADD32(ctx->r29, 0X2C);
            goto L_800423A0;
    }
    // 0x80042310: addiu       $t8, $sp, 0x2C
    ctx->r24 = ADD32(ctx->r29, 0X2C);
    // 0x80042314: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
    // 0x80042318: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8004231C: jal         0x8004209C
    // 0x80042320: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
    func_8004209C(rdram, ctx);
        goto after_3;
    // 0x80042320: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
    after_3:
    // 0x80042324: beq         $v0, $zero, L_80042398
    if (ctx->r2 == 0) {
        // 0x80042328: nop
    
            goto L_80042398;
    }
    // 0x80042328: nop

    // 0x8004232C: bne         $s7, $zero, L_80042390
    if (ctx->r23 != 0) {
        // 0x80042330: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80042390;
    }
    // 0x80042330: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80042334: lw          $v1, 0xC($fp)
    ctx->r3 = MEM_W(ctx->r30, 0XC);
    // 0x80042338: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8004233C: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80042340: beq         $at, $zero, L_8004236C
    if (ctx->r1 == 0) {
        // 0x80042344: sll         $t7, $v1, 2
        ctx->r15 = S32(ctx->r3 << 2);
            goto L_8004236C;
    }
    // 0x80042344: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x80042348: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8004234C: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x80042350: lw          $v0, -0x4284($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4284);
    // 0x80042354: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80042358: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x8004235C: mflo        $t9
    ctx->r25 = lo;
    // 0x80042360: addiu       $v0, $t9, 0x1
    ctx->r2 = ADD32(ctx->r25, 0X1);
    // 0x80042364: b           L_80042370
    // 0x80042368: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
        goto L_80042370;
    // 0x80042368: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
L_8004236C:
    // 0x8004236C: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
L_80042370:
    // 0x80042370: bne         $at, $zero, L_80042388
    if (ctx->r1 != 0) {
        // 0x80042374: addiu       $t6, $zero, -0x1
        ctx->r14 = ADD32(0, -0X1);
            goto L_80042388;
    }
    // 0x80042374: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80042378: sw          $t6, 0x24($fp)
    MEM_W(0X24, ctx->r30) = ctx->r14;
    // 0x8004237C: sw          $s6, 0x1C($fp)
    MEM_W(0X1C, ctx->r30) = ctx->r22;
    // 0x80042380: b           L_800423E4
    // 0x80042384: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800423E4;
    // 0x80042384: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80042388:
    // 0x80042388: b           L_800423B0
    // 0x8004238C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
        goto L_800423B0;
    // 0x8004238C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80042390:
    // 0x80042390: b           L_800423E4
    // 0x80042394: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800423E4;
    // 0x80042394: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80042398:
    // 0x80042398: beq         $s7, $zero, L_800423B0
    if (ctx->r23 == 0) {
        // 0x8004239C: nop
    
            goto L_800423B0;
    }
    // 0x8004239C: nop

L_800423A0:
    // 0x800423A0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x800423A4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800423A8: bne         $s5, $at, L_8004229C
    if (ctx->r21 != ctx->r1) {
        // 0x800423AC: nop
    
            goto L_8004229C;
    }
    // 0x800423AC: nop

L_800423B0:
    // 0x800423B0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x800423B4: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x800423B8: bne         $s7, $at, L_80042298
    if (ctx->r23 != ctx->r1) {
        // 0x800423BC: nop
    
            goto L_80042298;
    }
    // 0x800423BC: nop

    // 0x800423C0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800423C4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800423C8: beq         $t7, $zero, L_800423E4
    if (ctx->r15 == 0) {
        // 0x800423CC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800423E4;
    }
    // 0x800423CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800423D0: lw          $t9, 0x18($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X18);
    // 0x800423D4: sw          $t6, 0x24($fp)
    MEM_W(0X24, ctx->r30) = ctx->r14;
    // 0x800423D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800423DC: b           L_800423E4
    // 0x800423E0: sw          $t9, 0x1C($fp)
    MEM_W(0X1C, ctx->r30) = ctx->r25;
        goto L_800423E4;
    // 0x800423E0: sw          $t9, 0x1C($fp)
    MEM_W(0X1C, ctx->r30) = ctx->r25;
L_800423E4:
    // 0x800423E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800423E8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x800423EC: jr          $ra
    // 0x800423F0: nop

    return;
    // 0x800423F0: nop

;}
RECOMP_FUNC void func_800423F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800423F4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800423F8: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800423FC: nop

    // 0x80042400: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80042404: nop

    // 0x80042408: bc1f        L_80042418
    if (!c1cs) {
        // 0x8004240C: nop
    
            goto L_80042418;
    }
    // 0x8004240C: nop

    // 0x80042410: b           L_8004241C
    // 0x80042414: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_8004241C;
    // 0x80042414: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_80042418:
    // 0x80042418: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8004241C:
    // 0x8004241C: lwc1        $f12, 0x8($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80042420: nop

    // 0x80042424: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x80042428: nop

    // 0x8004242C: bc1f        L_8004243C
    if (!c1cs) {
        // 0x80042430: nop
    
            goto L_8004243C;
    }
    // 0x80042430: nop

    // 0x80042434: b           L_80042440
    // 0x80042438: neg.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = -ctx->f12.fl;
        goto L_80042440;
    // 0x80042438: neg.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = -ctx->f12.fl;
L_8004243C:
    // 0x8004243C: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
L_80042440:
    // 0x80042440: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x80042444: nop

    // 0x80042448: bc1f        L_80042470
    if (!c1cs) {
        // 0x8004244C: nop
    
            goto L_80042470;
    }
    // 0x8004244C: nop

    // 0x80042450: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80042454: nop

    // 0x80042458: bc1f        L_80042468
    if (!c1cs) {
        // 0x8004245C: nop
    
            goto L_80042468;
    }
    // 0x8004245C: nop

    // 0x80042460: b           L_8004248C
    // 0x80042464: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
        goto L_8004248C;
    // 0x80042464: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
L_80042468:
    // 0x80042468: b           L_8004248C
    // 0x8004246C: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
        goto L_8004248C;
    // 0x8004246C: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
L_80042470:
    // 0x80042470: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x80042474: nop

    // 0x80042478: bc1f        L_80042488
    if (!c1cs) {
        // 0x8004247C: nop
    
            goto L_80042488;
    }
    // 0x8004247C: nop

    // 0x80042480: b           L_8004248C
    // 0x80042484: neg.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = -ctx->f12.fl;
        goto L_8004248C;
    // 0x80042484: neg.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = -ctx->f12.fl;
L_80042488:
    // 0x80042488: mov.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.fl = ctx->f12.fl;
L_8004248C:
    // 0x8004248C: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80042490: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80042494: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80042498: nop

    // 0x8004249C: bc1f        L_800424AC
    if (!c1cs) {
        // 0x800424A0: nop
    
            goto L_800424AC;
    }
    // 0x800424A0: nop

    // 0x800424A4: b           L_800424B0
    // 0x800424A8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_800424B0;
    // 0x800424A8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_800424AC:
    // 0x800424AC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_800424B0:
    // 0x800424B0: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800424B4: nop

    // 0x800424B8: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x800424BC: nop

    // 0x800424C0: bc1f        L_800424D0
    if (!c1cs) {
        // 0x800424C4: nop
    
            goto L_800424D0;
    }
    // 0x800424C4: nop

    // 0x800424C8: b           L_800424D4
    // 0x800424CC: neg.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = -ctx->f12.fl;
        goto L_800424D4;
    // 0x800424CC: neg.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = -ctx->f12.fl;
L_800424D0:
    // 0x800424D0: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
L_800424D4:
    // 0x800424D4: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x800424D8: nop

    // 0x800424DC: bc1f        L_80042504
    if (!c1cs) {
        // 0x800424E0: nop
    
            goto L_80042504;
    }
    // 0x800424E0: nop

    // 0x800424E4: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x800424E8: nop

    // 0x800424EC: bc1f        L_800424FC
    if (!c1cs) {
        // 0x800424F0: nop
    
            goto L_800424FC;
    }
    // 0x800424F0: nop

    // 0x800424F4: b           L_80042520
    // 0x800424F8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_80042520;
    // 0x800424F8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_800424FC:
    // 0x800424FC: b           L_80042520
    // 0x80042500: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_80042520;
    // 0x80042500: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80042504:
    // 0x80042504: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x80042508: nop

    // 0x8004250C: bc1f        L_8004251C
    if (!c1cs) {
        // 0x80042510: nop
    
            goto L_8004251C;
    }
    // 0x80042510: nop

    // 0x80042514: b           L_80042520
    // 0x80042518: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
        goto L_80042520;
    // 0x80042518: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
L_8004251C:
    // 0x8004251C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_80042520:
    // 0x80042520: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x80042524: nop

    // 0x80042528: bc1f        L_80042538
    if (!c1cs) {
        // 0x8004252C: nop
    
            goto L_80042538;
    }
    // 0x8004252C: nop

    // 0x80042530: jr          $ra
    // 0x80042534: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80042534: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80042538:
    // 0x80042538: jr          $ra
    // 0x8004253C: nop

    return;
    // 0x8004253C: nop

;}
RECOMP_FUNC void func_80042540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042540: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80042544: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80042548: jal         0x8005AB1C
    // 0x8004254C: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    func_8005AB1C(rdram, ctx);
        goto after_0;
    // 0x8004254C: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    after_0:
    // 0x80042550: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80042554: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x80042558: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x8004255C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80042560: beq         $t7, $zero, L_80042570
    if (ctx->r15 == 0) {
        // 0x80042564: addiu       $s6, $zero, -0x1
        ctx->r22 = ADD32(0, -0X1);
            goto L_80042570;
    }
    // 0x80042564: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x80042568: b           L_800426A8
    // 0x8004256C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800426A8;
    // 0x8004256C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80042570:
    // 0x80042570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80042574: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80042578: jal         0x8004A0A0
    // 0x8004257C: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8004257C: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_1:
    // 0x80042580: beq         $v0, $zero, L_80042590
    if (ctx->r2 == 0) {
        // 0x80042584: nop
    
            goto L_80042590;
    }
    // 0x80042584: nop

    // 0x80042588: b           L_800426A8
    // 0x8004258C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800426A8;
    // 0x8004258C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80042590:
    // 0x80042590: blez        $s5, L_80042698
    if (SIGNED(ctx->r21) <= 0) {
        // 0x80042594: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80042698;
    }
    // 0x80042594: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80042598: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8004259C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x800425A0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x800425A4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800425A8: addiu       $s4, $sp, 0x3C
    ctx->r20 = ADD32(ctx->r29, 0X3C);
L_800425AC:
    // 0x800425AC: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x800425B0: nop

    // 0x800425B4: addu        $t9, $t8, $s2
    ctx->r25 = ADD32(ctx->r24, ctx->r18);
    // 0x800425B8: lw          $s0, 0x0($t9)
    ctx->r16 = MEM_W(ctx->r25, 0X0);
    // 0x800425BC: nop

    // 0x800425C0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x800425C4: jal         0x8005AE1C
    // 0x800425C8: nop

    func_8005AE1C(rdram, ctx);
        goto after_2;
    // 0x800425C8: nop

    after_2:
    // 0x800425CC: bne         $v0, $zero, L_8004268C
    if (ctx->r2 != 0) {
        // 0x800425D0: nop
    
            goto L_8004268C;
    }
    // 0x800425D0: nop

    // 0x800425D4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x800425D8: jal         0x8005AEA0
    // 0x800425DC: nop

    func_8005AEA0(rdram, ctx);
        goto after_3;
    // 0x800425DC: nop

    after_3:
    // 0x800425E0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x800425E4: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x800425E8: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800425EC: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x800425F0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800425F4: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x800425F8: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x800425FC: add.s       $f2, $f0, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f24.fl;
    // 0x80042600: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80042604: c.lt.s      $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f8.fl < ctx->f22.fl;
    // 0x80042608: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8004260C: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80042610: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
    // 0x80042614: bc1f        L_80042624
    if (!c1cs) {
        // 0x80042618: swc1        $f6, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
            goto L_80042624;
    }
    // 0x80042618: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x8004261C: b           L_80042624
    // 0x80042620: neg.s       $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = -ctx->f8.fl;
        goto L_80042624;
    // 0x80042620: neg.s       $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = -ctx->f8.fl;
L_80042624:
    // 0x80042624: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80042628: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8004262C: bc1f        L_8004268C
    if (!c1cs) {
        // 0x80042630: nop
    
            goto L_8004268C;
    }
    // 0x80042630: nop

    // 0x80042634: c.lt.s      $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f12.fl < ctx->f22.fl;
    // 0x80042638: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8004263C: bc1f        L_8004264C
    if (!c1cs) {
        // 0x80042640: nop
    
            goto L_8004264C;
    }
    // 0x80042640: nop

    // 0x80042644: b           L_80042650
    // 0x80042648: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
        goto L_80042650;
    // 0x80042648: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
L_8004264C:
    // 0x8004264C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_80042650:
    // 0x80042650: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80042654: nop

    // 0x80042658: bc1f        L_8004268C
    if (!c1cs) {
        // 0x8004265C: nop
    
            goto L_8004268C;
    }
    // 0x8004265C: nop

    // 0x80042660: jal         0x800423F4
    // 0x80042664: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800423F4(rdram, ctx);
        goto after_4;
    // 0x80042664: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_4:
    // 0x80042668: beq         $v0, $zero, L_8004268C
    if (ctx->r2 == 0) {
        // 0x8004266C: nop
    
            goto L_8004268C;
    }
    // 0x8004266C: nop

    // 0x80042670: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80042674: or          $s6, $s1, $zero
    ctx->r22 = ctx->r17 | 0;
    // 0x80042678: swc1        $f10, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f10.u32l;
    // 0x8004267C: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80042680: nop

    // 0x80042684: swc1        $f4, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->f4.u32l;
    // 0x80042688: swc1        $f20, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->f20.u32l;
L_8004268C:
    // 0x8004268C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80042690: bne         $s1, $s5, L_800425AC
    if (ctx->r17 != ctx->r21) {
        // 0x80042694: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_800425AC;
    }
    // 0x80042694: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_80042698:
    // 0x80042698: bgez        $s6, L_800426A8
    if (SIGNED(ctx->r22) >= 0) {
        // 0x8004269C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800426A8;
    }
    // 0x8004269C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800426A0: b           L_800426A8
    // 0x800426A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800426A8;
    // 0x800426A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800426A8:
    // 0x800426A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800426AC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x800426B0: jr          $ra
    // 0x800426B4: nop

    return;
    // 0x800426B4: nop

;}
RECOMP_FUNC void func_800426B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800426B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800426BC: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x800426C0: addiu       $s0, $s0, -0x3C8C
    ctx->r16 = ADD32(ctx->r16, -0X3C8C);
    // 0x800426C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800426C8: jal         0x8005BCB4
    // 0x800426CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8005BCB4(rdram, ctx);
        goto after_0;
    // 0x800426CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x800426D0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x800426D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800426D8: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x800426DC: beq         $t6, $zero, L_800426EC
    if (ctx->r14 == 0) {
        // 0x800426E0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800426EC;
    }
    // 0x800426E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800426E4: b           L_800426EC
    // 0x800426E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800426EC;
    // 0x800426E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800426EC:
    // 0x800426EC: beq         $v0, $zero, L_800426FC
    if (ctx->r2 == 0) {
        // 0x800426F0: andi        $t7, $v1, 0x1000
        ctx->r15 = ctx->r3 & 0X1000;
            goto L_800426FC;
    }
    // 0x800426F0: andi        $t7, $v1, 0x1000
    ctx->r15 = ctx->r3 & 0X1000;
    // 0x800426F4: b           L_80042738
    // 0x800426F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80042738;
    // 0x800426F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800426FC:
    // 0x800426FC: beq         $t7, $zero, L_8004270C
    if (ctx->r15 == 0) {
        // 0x80042700: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004270C;
    }
    // 0x80042700: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80042704: b           L_8004270C
    // 0x80042708: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004270C;
    // 0x80042708: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004270C:
    // 0x8004270C: bne         $v0, $zero, L_80042734
    if (ctx->r2 != 0) {
        // 0x80042710: andi        $t8, $v1, 0x2000
        ctx->r24 = ctx->r3 & 0X2000;
            goto L_80042734;
    }
    // 0x80042710: andi        $t8, $v1, 0x2000
    ctx->r24 = ctx->r3 & 0X2000;
    // 0x80042714: beq         $t8, $zero, L_80042724
    if (ctx->r24 == 0) {
        // 0x80042718: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80042724;
    }
    // 0x80042718: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004271C: b           L_80042724
    // 0x80042720: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80042724;
    // 0x80042720: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80042724:
    // 0x80042724: beq         $v0, $zero, L_80042738
    if (ctx->r2 == 0) {
        // 0x80042728: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80042738;
    }
    // 0x80042728: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004272C: b           L_80042738
    // 0x80042730: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80042738;
    // 0x80042730: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80042734:
    // 0x80042734: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80042738:
    // 0x80042738: jr          $ra
    // 0x8004273C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8004273C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80042740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042740: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80042744: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80042748: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004274C: addiu       $t6, $t6, 0x1A48
    ctx->r14 = ADD32(ctx->r14, 0X1A48);
    // 0x80042750: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80042754: addiu       $s3, $sp, 0x84
    ctx->r19 = ADD32(ctx->r29, 0X84);
    // 0x80042758: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x8004275C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80042760: sll         $t8, $s1, 3
    ctx->r24 = S32(ctx->r17 << 3);
    // 0x80042764: subu        $t8, $t8, $s1
    ctx->r24 = SUB32(ctx->r24, ctx->r17);
    // 0x80042768: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8004276C: addiu       $t7, $t7, -0x7688
    ctx->r15 = ADD32(ctx->r15, -0X7688);
    // 0x80042770: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80042774: sw          $t9, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r25;
    // 0x80042778: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8004277C: addu        $fp, $t8, $t7
    ctx->r30 = ADD32(ctx->r24, ctx->r15);
    // 0x80042780: lw          $a0, 0xC($fp)
    ctx->r4 = MEM_W(ctx->r30, 0XC);
    // 0x80042784: jal         0x800426B8
    // 0x80042788: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    func_800426B8(rdram, ctx);
        goto after_0;
    // 0x80042788: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    after_0:
    // 0x8004278C: bne         $v0, $zero, L_800427A8
    if (ctx->r2 != 0) {
        // 0x80042790: nop
    
            goto L_800427A8;
    }
    // 0x80042790: nop

    // 0x80042794: lw          $a0, 0xC($fp)
    ctx->r4 = MEM_W(ctx->r30, 0XC);
    // 0x80042798: jal         0x800416F8
    // 0x8004279C: nop

    func_800416F8(rdram, ctx);
        goto after_1;
    // 0x8004279C: nop

    after_1:
    // 0x800427A0: beq         $v0, $zero, L_800427D0
    if (ctx->r2 == 0) {
        // 0x800427A4: lui         $a1, 0x800B
        ctx->r5 = S32(0X800B << 16);
            goto L_800427D0;
    }
    // 0x800427A4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
L_800427A8:
    // 0x800427A8: lw          $t6, 0x0($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X0);
    // 0x800427AC: lw          $t9, 0x10($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X10);
    // 0x800427B0: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x800427B4: addiu       $t8, $t8, 0x348C
    ctx->r24 = ADD32(ctx->r24, 0X348C);
    // 0x800427B8: sw          $t8, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r24;
    // 0x800427BC: sw          $zero, 0x20($fp)
    MEM_W(0X20, ctx->r30) = 0;
    // 0x800427C0: sw          $zero, 0x30($fp)
    MEM_W(0X30, ctx->r30) = 0;
    // 0x800427C4: sw          $t6, 0x4($fp)
    MEM_W(0X4, ctx->r30) = ctx->r14;
    // 0x800427C8: b           L_80042C90
    // 0x800427CC: sw          $t9, 0x14($fp)
    MEM_W(0X14, ctx->r30) = ctx->r25;
        goto L_80042C90;
    // 0x800427CC: sw          $t9, 0x14($fp)
    MEM_W(0X14, ctx->r30) = ctx->r25;
L_800427D0:
    // 0x800427D0: lw          $a0, 0xC($fp)
    ctx->r4 = MEM_W(ctx->r30, 0XC);
    // 0x800427D4: jal         0x8005BCB4
    // 0x800427D8: addiu       $a1, $a1, -0x3C8C
    ctx->r5 = ADD32(ctx->r5, -0X3C8C);
    func_8005BCB4(rdram, ctx);
        goto after_2;
    // 0x800427D8: addiu       $a1, $a1, -0x3C8C
    ctx->r5 = ADD32(ctx->r5, -0X3C8C);
    after_2:
    // 0x800427DC: lw          $a0, 0xC($fp)
    ctx->r4 = MEM_W(ctx->r30, 0XC);
    // 0x800427E0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800427E4: jal         0x8005BB84
    // 0x800427E8: addiu       $a1, $a1, -0x3C90
    ctx->r5 = ADD32(ctx->r5, -0X3C90);
    func_8005BB84(rdram, ctx);
        goto after_3;
    // 0x800427E8: addiu       $a1, $a1, -0x3C90
    ctx->r5 = ADD32(ctx->r5, -0X3C90);
    after_3:
    // 0x800427EC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800427F0: lw          $v0, -0x3C7C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C7C);
    // 0x800427F4: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x800427F8: beq         $v0, $at, L_8004283C
    if (ctx->r2 == ctx->r1) {
        // 0x800427FC: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_8004283C;
    }
    // 0x800427FC: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80042800: beq         $v0, $at, L_8004283C
    if (ctx->r2 == ctx->r1) {
        // 0x80042804: lui         $t7, 0x800B
        ctx->r15 = S32(0X800B << 16);
            goto L_8004283C;
    }
    // 0x80042804: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80042808: lw          $t7, -0x3C8C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3C8C);
    // 0x8004280C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80042810: andi        $t6, $t7, 0x400
    ctx->r14 = ctx->r15 & 0X400;
    // 0x80042814: beq         $t6, $zero, L_80042824
    if (ctx->r14 == 0) {
        // 0x80042818: lui         $t9, 0x800B
        ctx->r25 = S32(0X800B << 16);
            goto L_80042824;
    }
    // 0x80042818: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8004281C: b           L_80042824
    // 0x80042820: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80042824;
    // 0x80042820: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80042824:
    // 0x80042824: beq         $v1, $zero, L_8004283C
    if (ctx->r3 == 0) {
        // 0x80042828: nop
    
            goto L_8004283C;
    }
    // 0x80042828: nop

    // 0x8004282C: lw          $t9, -0x3C90($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3C90);
    // 0x80042830: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80042834: beq         $t9, $at, L_80042868
    if (ctx->r25 == ctx->r1) {
        // 0x80042838: nop
    
            goto L_80042868;
    }
    // 0x80042838: nop

L_8004283C:
    // 0x8004283C: lw          $a0, 0xC($fp)
    ctx->r4 = MEM_W(ctx->r30, 0XC);
    // 0x80042840: jal         0x8004081C
    // 0x80042844: nop

    func_8004081C(rdram, ctx);
        goto after_4;
    // 0x80042844: nop

    after_4:
    // 0x80042848: bne         $v0, $zero, L_80042868
    if (ctx->r2 != 0) {
        // 0x8004284C: lui         $t8, 0x8004
        ctx->r24 = S32(0X8004 << 16);
            goto L_80042868;
    }
    // 0x8004284C: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x80042850: lw          $v0, 0x0($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X0);
    // 0x80042854: addiu       $t8, $t8, 0x373C
    ctx->r24 = ADD32(ctx->r24, 0X373C);
    // 0x80042858: beq         $t8, $v0, L_80042868
    if (ctx->r24 == ctx->r2) {
        // 0x8004285C: lui         $t7, 0x8004
        ctx->r15 = S32(0X8004 << 16);
            goto L_80042868;
    }
    // 0x8004285C: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x80042860: addiu       $t7, $t7, 0x3A30
    ctx->r15 = ADD32(ctx->r15, 0X3A30);
    // 0x80042864: bne         $t7, $v0, L_80042874
    if (ctx->r15 != ctx->r2) {
        // 0x80042868: lui         $s4, 0x800B
        ctx->r20 = S32(0X800B << 16);
            goto L_80042874;
    }
L_80042868:
    // 0x80042868: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8004286C: b           L_80042A28
    // 0x80042870: addiu       $s4, $s4, -0x4298
    ctx->r20 = ADD32(ctx->r20, -0X4298);
        goto L_80042A28;
    // 0x80042870: addiu       $s4, $s4, -0x4298
    ctx->r20 = ADD32(ctx->r20, -0X4298);
L_80042874:
    // 0x80042874: lw          $t6, 0x18($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X18);
    // 0x80042878: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8004287C: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x80042880: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x80042884: lhu         $t8, -0x75A8($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X75A8);
    // 0x80042888: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8004288C: andi        $t7, $t8, 0x200
    ctx->r15 = ctx->r24 & 0X200;
    // 0x80042890: bne         $t7, $zero, L_80042934
    if (ctx->r15 != 0) {
        // 0x80042894: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_80042934;
    }
    // 0x80042894: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80042898: lw          $t6, -0x3CA0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3CA0);
    // 0x8004289C: nop

    // 0x800428A0: slti        $at, $t6, 0x384
    ctx->r1 = SIGNED(ctx->r14) < 0X384 ? 1 : 0;
    // 0x800428A4: bne         $at, $zero, L_80042908
    if (ctx->r1 != 0) {
        // 0x800428A8: nop
    
            goto L_80042908;
    }
    // 0x800428A8: nop

    // 0x800428AC: jal         0x80028AB8
    // 0x800428B0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80028AB8(rdram, ctx);
        goto after_5;
    // 0x800428B0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_5:
    // 0x800428B4: lw          $a0, 0xC($fp)
    ctx->r4 = MEM_W(ctx->r30, 0XC);
    // 0x800428B8: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x800428BC: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x800428C0: beq         $at, $zero, L_800428EC
    if (ctx->r1 == 0) {
        // 0x800428C4: addiu       $s4, $s4, -0x4298
        ctx->r20 = ADD32(ctx->r20, -0X4298);
            goto L_800428EC;
    }
    // 0x800428C4: addiu       $s4, $s4, -0x4298
    ctx->r20 = ADD32(ctx->r20, -0X4298);
    // 0x800428C8: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x800428CC: addu        $t8, $s4, $t9
    ctx->r24 = ADD32(ctx->r20, ctx->r25);
    // 0x800428D0: lw          $v1, 0x14($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X14);
    // 0x800428D4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800428D8: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x800428DC: mflo        $t7
    ctx->r15 = lo;
    // 0x800428E0: addiu       $v1, $t7, 0x1
    ctx->r3 = ADD32(ctx->r15, 0X1);
    // 0x800428E4: b           L_800428FC
    // 0x800428E8: addiu       $t6, $v1, 0x3
    ctx->r14 = ADD32(ctx->r3, 0X3);
        goto L_800428FC;
    // 0x800428E8: addiu       $t6, $v1, 0x3
    ctx->r14 = ADD32(ctx->r3, 0X3);
L_800428EC:
    // 0x800428EC: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x800428F0: addiu       $s4, $s4, -0x4298
    ctx->r20 = ADD32(ctx->r20, -0X4298);
    // 0x800428F4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x800428F8: addiu       $t6, $v1, 0x3
    ctx->r14 = ADD32(ctx->r3, 0X3);
L_800428FC:
    // 0x800428FC: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80042900: beq         $at, $zero, L_80042A28
    if (ctx->r1 == 0) {
        // 0x80042904: nop
    
            goto L_80042A28;
    }
    // 0x80042904: nop

L_80042908:
    // 0x80042908: jal         0x8002D000
    // 0x8004290C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8002D000(rdram, ctx);
        goto after_6;
    // 0x8004290C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x80042910: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80042914: addiu       $s7, $sp, 0x90
    ctx->r23 = ADD32(ctx->r29, 0X90);
    // 0x80042918: jal         0x80042540
    // 0x8004291C: sw          $s1, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r17;
    func_80042540(rdram, ctx);
        goto after_7;
    // 0x8004291C: sw          $s1, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r17;
    after_7:
    // 0x80042920: lw          $s1, 0x98($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X98);
    // 0x80042924: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x80042928: beq         $v0, $zero, L_80042A28
    if (ctx->r2 == 0) {
        // 0x8004292C: addiu       $s4, $s4, -0x4298
        ctx->r20 = ADD32(ctx->r20, -0X4298);
            goto L_80042A28;
    }
    // 0x8004292C: addiu       $s4, $s4, -0x4298
    ctx->r20 = ADD32(ctx->r20, -0X4298);
    // 0x80042930: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
L_80042934:
    // 0x80042934: sw          $zero, 0x20($fp)
    MEM_W(0X20, ctx->r30) = 0;
    // 0x80042938: sw          $t9, 0x28($fp)
    MEM_W(0X28, ctx->r30) = ctx->r25;
    // 0x8004293C: sw          $zero, 0x30($fp)
    MEM_W(0X30, ctx->r30) = 0;
    // 0x80042940: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80042944: jal         0x80042248
    // 0x80042948: sw          $fp, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r30;
    func_80042248(rdram, ctx);
        goto after_8;
    // 0x80042948: sw          $fp, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r30;
    after_8:
    // 0x8004294C: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x80042950: lw          $fp, 0x24($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X24);
    // 0x80042954: beq         $v0, $zero, L_80042A28
    if (ctx->r2 == 0) {
        // 0x80042958: addiu       $s4, $s4, -0x4298
        ctx->r20 = ADD32(ctx->r20, -0X4298);
            goto L_80042A28;
    }
    // 0x80042958: addiu       $s4, $s4, -0x4298
    ctx->r20 = ADD32(ctx->r20, -0X4298);
    // 0x8004295C: lw          $t8, 0x0($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X0);
    // 0x80042960: lw          $t7, 0x10($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X10);
    // 0x80042964: lw          $a0, 0xC($fp)
    ctx->r4 = MEM_W(ctx->r30, 0XC);
    // 0x80042968: sw          $t8, 0x4($fp)
    MEM_W(0X4, ctx->r30) = ctx->r24;
    // 0x8004296C: jal         0x8002D000
    // 0x80042970: sw          $t7, 0x14($fp)
    MEM_W(0X14, ctx->r30) = ctx->r15;
    func_8002D000(rdram, ctx);
        goto after_9;
    // 0x80042970: sw          $t7, 0x14($fp)
    MEM_W(0X14, ctx->r30) = ctx->r15;
    after_9:
    // 0x80042974: addiu       $s0, $sp, 0x58
    ctx->r16 = ADD32(ctx->r29, 0X58);
    // 0x80042978: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8004297C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80042980: jal         0x8004A0A0
    // 0x80042984: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004A0A0(rdram, ctx);
        goto after_10;
    // 0x80042984: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_10:
    // 0x80042988: bne         $v0, $zero, L_80042A10
    if (ctx->r2 != 0) {
        // 0x8004298C: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_80042A10;
    }
    // 0x8004298C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80042990: lw          $t6, 0x1C($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X1C);
    // 0x80042994: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80042998: andi        $t9, $t6, 0x3F
    ctx->r25 = ctx->r14 & 0X3F;
    // 0x8004299C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x800429A0: lw          $t8, 0x1C($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X1C);
    // 0x800429A4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800429A8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x800429AC: sra         $t7, $t8, 6
    ctx->r15 = S32(SIGNED(ctx->r24) >> 6);
    // 0x800429B0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800429B4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800429B8: andi        $t6, $t7, 0x3F
    ctx->r14 = ctx->r15 & 0X3F;
    // 0x800429BC: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x800429C0: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x800429C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800429C8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800429CC: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x800429D0: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x800429D4: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800429D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800429DC: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x800429E0: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x800429E4: add.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x800429E8: jal         0x80028850
    // 0x800429EC: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    func_80028850(rdram, ctx);
        goto after_11;
    // 0x800429EC: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    after_11:
    // 0x800429F0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800429F4: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800429F8: lwc1        $f11, 0x5C20($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X5C20);
    // 0x800429FC: lwc1        $f10, 0x5C24($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5C24);
    // 0x80042A00: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80042A04: mul.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80042A08: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80042A0C: swc1        $f6, 0x8($fp)
    MEM_W(0X8, ctx->r30) = ctx->f6.u32l;
L_80042A10:
    // 0x80042A10: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x80042A14: addiu       $t9, $t9, 0x3358
    ctx->r25 = ADD32(ctx->r25, 0X3358);
    // 0x80042A18: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80042A1C: sw          $t9, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r25;
    // 0x80042A20: b           L_80042C90
    // 0x80042A24: sw          $t8, 0x24($fp)
    MEM_W(0X24, ctx->r30) = ctx->r24;
        goto L_80042C90;
    // 0x80042A24: sw          $t8, 0x24($fp)
    MEM_W(0X24, ctx->r30) = ctx->r24;
L_80042A28:
    // 0x80042A28: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80042A2C: lw          $v0, -0x3C7C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C7C);
    // 0x80042A30: lw          $a0, 0xC($fp)
    ctx->r4 = MEM_W(ctx->r30, 0XC);
    // 0x80042A34: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80042A38: beq         $v0, $at, L_80042A7C
    if (ctx->r2 == ctx->r1) {
        // 0x80042A3C: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_80042A7C;
    }
    // 0x80042A3C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80042A40: beq         $v0, $at, L_80042A7C
    if (ctx->r2 == ctx->r1) {
        // 0x80042A44: lui         $t7, 0x800B
        ctx->r15 = S32(0X800B << 16);
            goto L_80042A7C;
    }
    // 0x80042A44: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80042A48: lw          $t7, -0x3C8C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3C8C);
    // 0x80042A4C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80042A50: andi        $t6, $t7, 0x400
    ctx->r14 = ctx->r15 & 0X400;
    // 0x80042A54: beq         $t6, $zero, L_80042A64
    if (ctx->r14 == 0) {
        // 0x80042A58: lui         $t9, 0x800B
        ctx->r25 = S32(0X800B << 16);
            goto L_80042A64;
    }
    // 0x80042A58: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80042A5C: b           L_80042A64
    // 0x80042A60: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80042A64;
    // 0x80042A60: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80042A64:
    // 0x80042A64: beq         $v1, $zero, L_80042A7C
    if (ctx->r3 == 0) {
        // 0x80042A68: nop
    
            goto L_80042A7C;
    }
    // 0x80042A68: nop

    // 0x80042A6C: lw          $t9, -0x3C90($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3C90);
    // 0x80042A70: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80042A74: beq         $t9, $at, L_80042A94
    if (ctx->r25 == ctx->r1) {
        // 0x80042A78: nop
    
            goto L_80042A94;
    }
    // 0x80042A78: nop

L_80042A7C:
    // 0x80042A7C: jal         0x8004081C
    // 0x80042A80: nop

    func_8004081C(rdram, ctx);
        goto after_12;
    // 0x80042A80: nop

    after_12:
    // 0x80042A84: blez        $v0, L_80042B10
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80042A88: nop
    
            goto L_80042B10;
    }
    // 0x80042A88: nop

    // 0x80042A8C: lw          $a0, 0xC($fp)
    ctx->r4 = MEM_W(ctx->r30, 0XC);
    // 0x80042A90: nop

L_80042A94:
    // 0x80042A94: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x80042A98: addiu       $t8, $t8, 0x3F44
    ctx->r24 = ADD32(ctx->r24, 0X3F44);
    // 0x80042A9C: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x80042AA0: sw          $zero, 0x28($fp)
    MEM_W(0X28, ctx->r30) = 0;
    // 0x80042AA4: sw          $zero, 0x20($fp)
    MEM_W(0X20, ctx->r30) = 0;
    // 0x80042AA8: beq         $at, $zero, L_80042AD4
    if (ctx->r1 == 0) {
        // 0x80042AAC: sw          $t8, 0x0($fp)
        MEM_W(0X0, ctx->r30) = ctx->r24;
            goto L_80042AD4;
    }
    // 0x80042AAC: sw          $t8, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r24;
    // 0x80042AB0: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80042AB4: addu        $t6, $s4, $t7
    ctx->r14 = ADD32(ctx->r20, ctx->r15);
    // 0x80042AB8: lw          $v1, 0x14($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X14);
    // 0x80042ABC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80042AC0: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x80042AC4: mflo        $t9
    ctx->r25 = lo;
    // 0x80042AC8: addiu       $v1, $t9, 0x1
    ctx->r3 = ADD32(ctx->r25, 0X1);
    // 0x80042ACC: b           L_80042ADC
    // 0x80042AD0: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
        goto L_80042ADC;
    // 0x80042AD0: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
L_80042AD4:
    // 0x80042AD4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80042AD8: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
L_80042ADC:
    // 0x80042ADC: bne         $at, $zero, L_80042AFC
    if (ctx->r1 != 0) {
        // 0x80042AE0: or          $s0, $fp, $zero
        ctx->r16 = ctx->r30 | 0;
            goto L_80042AFC;
    }
    // 0x80042AE0: or          $s0, $fp, $zero
    ctx->r16 = ctx->r30 | 0;
    // 0x80042AE4: or          $s0, $fp, $zero
    ctx->r16 = ctx->r30 | 0;
    // 0x80042AE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80042AEC: jal         0x80041AEC
    // 0x80042AF0: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    func_80041AEC(rdram, ctx);
        goto after_13;
    // 0x80042AF0: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    after_13:
    // 0x80042AF4: b           L_80042B08
    // 0x80042AF8: nop

        goto L_80042B08;
    // 0x80042AF8: nop

L_80042AFC:
    // 0x80042AFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80042B00: jal         0x80041AEC
    // 0x80042B04: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    func_80041AEC(rdram, ctx);
        goto after_14;
    // 0x80042B04: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_14:
L_80042B08:
    // 0x80042B08: b           L_80042C90
    // 0x80042B0C: sw          $zero, 0x2C($fp)
    MEM_W(0X2C, ctx->r30) = 0;
        goto L_80042C90;
    // 0x80042B0C: sw          $zero, 0x2C($fp)
    MEM_W(0X2C, ctx->r30) = 0;
L_80042B10:
    // 0x80042B10: lw          $a0, 0xC($fp)
    ctx->r4 = MEM_W(ctx->r30, 0XC);
    // 0x80042B14: jal         0x8004081C
    // 0x80042B18: nop

    func_8004081C(rdram, ctx);
        goto after_15;
    // 0x80042B18: nop

    after_15:
    // 0x80042B1C: beq         $v0, $zero, L_80042B44
    if (ctx->r2 == 0) {
        // 0x80042B20: lui         $t8, 0x8004
        ctx->r24 = S32(0X8004 << 16);
            goto L_80042B44;
    }
    // 0x80042B20: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x80042B24: addiu       $t8, $t8, 0x3F44
    ctx->r24 = ADD32(ctx->r24, 0X3F44);
    // 0x80042B28: sw          $zero, 0x28($fp)
    MEM_W(0X28, ctx->r30) = 0;
    // 0x80042B2C: sw          $zero, 0x20($fp)
    MEM_W(0X20, ctx->r30) = 0;
    // 0x80042B30: sw          $t8, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r24;
    // 0x80042B34: jal         0x8004181C
    // 0x80042B38: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_8004181C(rdram, ctx);
        goto after_16;
    // 0x80042B38: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_16:
    // 0x80042B3C: b           L_80042C90
    // 0x80042B40: sw          $zero, 0x2C($fp)
    MEM_W(0X2C, ctx->r30) = 0;
        goto L_80042C90;
    // 0x80042B40: sw          $zero, 0x2C($fp)
    MEM_W(0X2C, ctx->r30) = 0;
L_80042B44:
    // 0x80042B44: lw          $t7, 0x28($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X28);
    // 0x80042B48: nop

    // 0x80042B4C: beq         $t7, $zero, L_80042C94
    if (ctx->r15 == 0) {
        // 0x80042B50: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80042C94;
    }
    // 0x80042B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80042B54: lw          $t6, 0xC($fp)
    ctx->r14 = MEM_W(ctx->r30, 0XC);
    // 0x80042B58: addiu       $s2, $zero, 0x28
    ctx->r18 = ADD32(0, 0X28);
    // 0x80042B5C: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80042B60: addu        $t8, $s4, $t9
    ctx->r24 = ADD32(ctx->r20, ctx->r25);
    // 0x80042B64: lw          $t7, 0x14($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X14);
    // 0x80042B68: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x80042B6C: multu       $t7, $s2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042B70: sll         $t8, $t9, 3
    ctx->r24 = S32(ctx->r25 << 3);
    // 0x80042B74: lw          $t9, 0x30($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X30);
    // 0x80042B78: sw          $zero, 0x28($fp)
    MEM_W(0X28, ctx->r30) = 0;
    // 0x80042B7C: sw          $zero, 0x20($fp)
    MEM_W(0X20, ctx->r30) = 0;
    // 0x80042B80: mflo        $t6
    ctx->r14 = lo;
    // 0x80042B84: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x80042B88: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80042B8C: addu        $s1, $t7, $t9
    ctx->r17 = ADD32(ctx->r15, ctx->r25);
    // 0x80042B90: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x80042B94: addiu       $t8, $t8, 0xDBC
    ctx->r24 = ADD32(ctx->r24, 0XDBC);
    // 0x80042B98: addu        $s0, $t6, $t8
    ctx->r16 = ADD32(ctx->r14, ctx->r24);
    // 0x80042B9C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80042BA0: nop

    // 0x80042BA4: beq         $v0, $zero, L_80042C80
    if (ctx->r2 == 0) {
        // 0x80042BA8: nop
    
            goto L_80042C80;
    }
    // 0x80042BA8: nop

L_80042BAC:
    // 0x80042BAC: lw          $t7, 0xC($fp)
    ctx->r15 = MEM_W(ctx->r30, 0XC);
    // 0x80042BB0: nop

    // 0x80042BB4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80042BB8: addu        $t6, $s4, $t9
    ctx->r14 = ADD32(ctx->r20, ctx->r25);
    // 0x80042BBC: lw          $t8, 0x14($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X14);
    // 0x80042BC0: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x80042BC4: multu       $t8, $s2
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042BC8: sll         $t6, $t9, 3
    ctx->r14 = S32(ctx->r25 << 3);
    // 0x80042BCC: mflo        $t7
    ctx->r15 = lo;
    // 0x80042BD0: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x80042BD4: addiu       $t9, $t8, 0x7
    ctx->r25 = ADD32(ctx->r24, 0X7);
    // 0x80042BD8: slt         $at, $t9, $s1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80042BDC: bne         $at, $zero, L_80042C80
    if (ctx->r1 != 0) {
        // 0x80042BE0: nop
    
            goto L_80042C80;
    }
    // 0x80042BE0: nop

    // 0x80042BE4: jalr        $v0
    // 0x80042BE8: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_17;
    // 0x80042BE8: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_17:
    // 0x80042BEC: beq         $v0, $zero, L_80042C70
    if (ctx->r2 == 0) {
        // 0x80042BF0: nop
    
            goto L_80042C70;
    }
    // 0x80042BF0: nop

    // 0x80042BF4: lw          $t7, 0x0($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X0);
    // 0x80042BF8: lw          $t6, 0x4($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X4);
    // 0x80042BFC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80042C00: bne         $t7, $t6, L_80042C1C
    if (ctx->r15 != ctx->r14) {
        // 0x80042C04: nop
    
            goto L_80042C1C;
    }
    // 0x80042C04: nop

    // 0x80042C08: lw          $t8, 0x2C($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X2C);
    // 0x80042C0C: nop

    // 0x80042C10: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80042C14: b           L_80042C20
    // 0x80042C18: sw          $t9, 0x2C($fp)
    MEM_W(0X2C, ctx->r30) = ctx->r25;
        goto L_80042C20;
    // 0x80042C18: sw          $t9, 0x2C($fp)
    MEM_W(0X2C, ctx->r30) = ctx->r25;
L_80042C1C:
    // 0x80042C1C: sw          $zero, 0x2C($fp)
    MEM_W(0X2C, ctx->r30) = 0;
L_80042C20:
    // 0x80042C20: lw          $t7, 0x0($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X0);
    // 0x80042C24: lw          $t6, 0x10($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X10);
    // 0x80042C28: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x80042C2C: sw          $t7, 0x4($fp)
    MEM_W(0X4, ctx->r30) = ctx->r15;
    // 0x80042C30: bne         $v0, $at, L_80042C40
    if (ctx->r2 != ctx->r1) {
        // 0x80042C34: sw          $t6, 0x14($fp)
        MEM_W(0X14, ctx->r30) = ctx->r14;
            goto L_80042C40;
    }
    // 0x80042C34: sw          $t6, 0x14($fp)
    MEM_W(0X14, ctx->r30) = ctx->r14;
    // 0x80042C38: b           L_80042C90
    // 0x80042C3C: sw          $zero, 0x30($fp)
    MEM_W(0X30, ctx->r30) = 0;
        goto L_80042C90;
    // 0x80042C3C: sw          $zero, 0x30($fp)
    MEM_W(0X30, ctx->r30) = 0;
L_80042C40:
    // 0x80042C40: lw          $t8, 0xC($fp)
    ctx->r24 = MEM_W(ctx->r30, 0XC);
    // 0x80042C44: nop

    // 0x80042C48: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80042C4C: addu        $t7, $s4, $t9
    ctx->r15 = ADD32(ctx->r20, ctx->r25);
    // 0x80042C50: lw          $t6, 0x14($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X14);
    // 0x80042C54: sll         $t7, $v0, 3
    ctx->r15 = S32(ctx->r2 << 3);
    // 0x80042C58: multu       $t6, $s2
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042C5C: mflo        $t8
    ctx->r24 = lo;
    // 0x80042C60: subu        $t9, $s1, $t8
    ctx->r25 = SUB32(ctx->r17, ctx->r24);
    // 0x80042C64: subu        $t6, $t9, $t7
    ctx->r14 = SUB32(ctx->r25, ctx->r15);
    // 0x80042C68: b           L_80042C90
    // 0x80042C6C: sw          $t6, 0x30($fp)
    MEM_W(0X30, ctx->r30) = ctx->r14;
        goto L_80042C90;
    // 0x80042C6C: sw          $t6, 0x30($fp)
    MEM_W(0X30, ctx->r30) = ctx->r14;
L_80042C70:
    // 0x80042C70: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80042C74: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80042C78: bne         $v0, $zero, L_80042BAC
    if (ctx->r2 != 0) {
        // 0x80042C7C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80042BAC;
    }
    // 0x80042C7C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_80042C80:
    // 0x80042C80: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x80042C84: addiu       $t8, $t8, 0x3F44
    ctx->r24 = ADD32(ctx->r24, 0X3F44);
    // 0x80042C88: sw          $t8, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r24;
    // 0x80042C8C: sw          $zero, 0x30($fp)
    MEM_W(0X30, ctx->r30) = 0;
L_80042C90:
    // 0x80042C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80042C94:
    // 0x80042C94: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x80042C98: jr          $ra
    // 0x80042C9C: nop

    return;
    // 0x80042C9C: nop

    // 0x80042CA0: jr          $ra
    // 0x80042CA4: nop

    return;
    // 0x80042CA4: nop

    // 0x80042CA8: jr          $ra
    // 0x80042CAC: nop

    return;
    // 0x80042CAC: nop

    // 0x80042CB0: jr          $ra
    // 0x80042CB4: nop

    return;
    // 0x80042CB4: nop

    // 0x80042CB8: jr          $ra
    // 0x80042CBC: nop

    return;
    // 0x80042CBC: nop

    // 0x80042CC0: jr          $ra
    // 0x80042CC4: nop

    return;
    // 0x80042CC4: nop

;}
