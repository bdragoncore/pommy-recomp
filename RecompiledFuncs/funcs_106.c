#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_blast_ground_2840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002840: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x42002844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002848: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x4200284C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x42002850: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    // 0x42002854: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x42002858: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x4200285C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x42002860: jal         0x420006C4
    // 0x42002864: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_0;
    // 0x42002864: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x42002868: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x4200286C: bne         $v0, $zero, L_420028B8
    if (ctx->r2 != 0) {
        // 0x42002870: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_420028B8;
    }
    // 0x42002870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002874: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x42002878: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x4200287C: bne         $v0, $zero, L_420028A8
    if (ctx->r2 != 0) {
        // 0x42002880: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_420028A8;
    }
    // 0x42002880: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x42002884: lw          $v0, 0x4($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X4);
    // 0x42002888: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x4200288C: beq         $v0, $at, L_420028A0
    if (ctx->r2 == ctx->r1) {
        // 0x42002890: andi        $t8, $v0, 0xFF
        ctx->r24 = ctx->r2 & 0XFF;
            goto L_420028A0;
    }
    // 0x42002890: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x42002894: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x42002898: bne         $at, $zero, L_420028B8
    if (ctx->r1 != 0) {
        // 0x4200289C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_420028B8;
    }
    // 0x4200289C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420028A0:
    // 0x420028A0: b           L_420028B4
    // 0x420028A4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_420028B4;
    // 0x420028A4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_420028A8:
    // 0x420028A8: bne         $v0, $at, L_420028B8
    if (ctx->r2 != ctx->r1) {
        // 0x420028AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_420028B8;
    }
    // 0x420028AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420028B0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_420028B4:
    // 0x420028B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420028B8:
    // 0x420028B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x420028BC: jr          $ra
    // 0x420028C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x420028C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_blast_ground_28C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420028C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420028C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420028CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x420028D0: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x420028D4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x420028D8: bne         $t6, $at, L_420028F4
    if (ctx->r14 != ctx->r1) {
        // 0x420028DC: nop
    
            goto L_420028F4;
    }
    // 0x420028DC: nop

    // 0x420028E0: lw          $a1, 0x18($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X18);
    // 0x420028E4: jal         0x42003938
    // 0x420028E8: nop

    ovl_blast_ground_3938(rdram, ctx);
        goto after_0;
    // 0x420028E8: nop

    after_0:
    // 0x420028EC: b           L_4200291C
    // 0x420028F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4200291C;
    // 0x420028F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420028F4:
    // 0x420028F4: lw          $t8, 0x68($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X68);
    // 0x420028F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x420028FC: bne         $t8, $at, L_4200291C
    if (ctx->r24 != ctx->r1) {
        // 0x42002900: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4200291C;
    }
    // 0x42002900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002904: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x42002908: addiu       $a1, $a0, 0x7C
    ctx->r5 = ADD32(ctx->r4, 0X7C);
    // 0x4200290C: lw          $a2, 0x18($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X18);
    // 0x42002910: jal         0x42002ED8
    // 0x42002914: lui         $a3, 0x4090
    ctx->r7 = S32(0X4090 << 16);
    ovl_blast_ground_2ED8(rdram, ctx);
        goto after_1;
    // 0x42002914: lui         $a3, 0x4090
    ctx->r7 = S32(0X4090 << 16);
    after_1:
    // 0x42002918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4200291C:
    // 0x4200291C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002920: jr          $ra
    // 0x42002924: nop

    return;
    // 0x42002924: nop

;}
RECOMP_FUNC void ovl_blast_ground_2928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002928: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4200292C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x42002930: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x42002934: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x42002938: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x4200293C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x42002940: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x42002944: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x42002948: bne         $t6, $at, L_42002980
    if (ctx->r14 != ctx->r1) {
        // 0x4200294C: or          $s3, $a0, $zero
        ctx->r19 = ctx->r4 | 0;
            goto L_42002980;
    }
    // 0x4200294C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x42002950: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x42002954: addiu       $s1, $a0, 0x7C
    ctx->r17 = ADD32(ctx->r4, 0X7C);
    // 0x42002958: addiu       $s2, $zero, 0x50
    ctx->r18 = ADD32(0, 0X50);
L_4200295C:
    // 0x4200295C: jal         0x42000F50
    // 0x42002960: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_ground_F50(rdram, ctx);
        goto after_0;
    // 0x42002960: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x42002964: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x42002968: bne         $s0, $s2, L_4200295C
    if (ctx->r16 != ctx->r18) {
        // 0x4200296C: addiu       $s1, $s1, 0x28
        ctx->r17 = ADD32(ctx->r17, 0X28);
            goto L_4200295C;
    }
    // 0x4200296C: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
    // 0x42002970: jal         0x42000F50
    // 0x42002974: addiu       $a0, $s3, 0xF4
    ctx->r4 = ADD32(ctx->r19, 0XF4);
    ovl_blast_ground_F50(rdram, ctx);
        goto after_1;
    // 0x42002974: addiu       $a0, $s3, 0xF4
    ctx->r4 = ADD32(ctx->r19, 0XF4);
    after_1:
    // 0x42002978: b           L_420029B4
    // 0x4200297C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_420029B4;
    // 0x4200297C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_42002980:
    // 0x42002980: jal         0x42000F50
    // 0x42002984: addiu       $a0, $s3, 0x7C
    ctx->r4 = ADD32(ctx->r19, 0X7C);
    ovl_blast_ground_F50(rdram, ctx);
        goto after_2;
    // 0x42002984: addiu       $a0, $s3, 0x7C
    ctx->r4 = ADD32(ctx->r19, 0X7C);
    after_2:
    // 0x42002988: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x4200298C: addiu       $s1, $s3, 0xA4
    ctx->r17 = ADD32(ctx->r19, 0XA4);
    // 0x42002990: addiu       $s2, $zero, 0x70
    ctx->r18 = ADD32(0, 0X70);
L_42002994:
    // 0x42002994: jal         0x42000F50
    // 0x42002998: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_ground_F50(rdram, ctx);
        goto after_3;
    // 0x42002998: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x4200299C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x420029A0: bne         $s0, $s2, L_42002994
    if (ctx->r16 != ctx->r18) {
        // 0x420029A4: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_42002994;
    }
    // 0x420029A4: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x420029A8: jal         0x42000F50
    // 0x420029AC: addiu       $a0, $s3, 0x114
    ctx->r4 = ADD32(ctx->r19, 0X114);
    ovl_blast_ground_F50(rdram, ctx);
        goto after_4;
    // 0x420029AC: addiu       $a0, $s3, 0x114
    ctx->r4 = ADD32(ctx->r19, 0X114);
    after_4:
    // 0x420029B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_420029B4:
    // 0x420029B4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x420029B8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x420029BC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x420029C0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x420029C4: jr          $ra
    // 0x420029C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x420029C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_blast_ground_29CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420029CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420029D0: lui         $at, 0x422C
    ctx->r1 = S32(0X422C << 16);
    // 0x420029D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x420029D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420029DC: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x420029E0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x420029E4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x420029E8: bne         $t6, $at, L_42002A20
    if (ctx->r14 != ctx->r1) {
        // 0x420029EC: swc1        $f4, 0x24($a0)
        MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
            goto L_42002A20;
    }
    // 0x420029EC: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x420029F0: lw          $a0, 0x74($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X74);
    // 0x420029F4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x420029F8: jal         0x42002E08
    // 0x420029FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_blast_ground_2E08(rdram, ctx);
        goto after_0;
    // 0x420029FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x42002A00: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x42002A04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x42002A08: lw          $a0, 0x74($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X74);
    // 0x42002A0C: jal         0x42002E08
    // 0x42002A10: sw          $v0, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->r2;
    ovl_blast_ground_2E08(rdram, ctx);
        goto after_1;
    // 0x42002A10: sw          $v0, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->r2;
    after_1:
    // 0x42002A14: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x42002A18: b           L_42002A28
    // 0x42002A1C: sw          $v0, 0x108($a2)
    MEM_W(0X108, ctx->r6) = ctx->r2;
        goto L_42002A28;
    // 0x42002A1C: sw          $v0, 0x108($a2)
    MEM_W(0X108, ctx->r6) = ctx->r2;
L_42002A20:
    // 0x42002A20: addiu       $t7, $zero, 0xEE
    ctx->r15 = ADD32(0, 0XEE);
    // 0x42002A24: sw          $t7, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->r15;
L_42002A28:
    // 0x42002A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002A2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002A30: jr          $ra
    // 0x42002A34: nop

    return;
    // 0x42002A34: nop

;}
RECOMP_FUNC void ovl_blast_ground_2A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002A38: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x42002A3C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x42002A40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x42002A44: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x42002A48: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002A4C: jal         0x42001874
    // 0x42002A50: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_blast_ground_1874(rdram, ctx);
        goto after_0;
    // 0x42002A50: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x42002A54: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x42002A58: lui         $a3, 0x4200
    ctx->r7 = S32(0X4200 << 16);
    // 0x42002A5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x42002A60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x42002A64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x42002A68: addu        $a3, $a3, $t7
    ctx->r7 = ADD32(ctx->r7, ctx->r15);
    // 0x42002A6C: lw          $a3, 0x447C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X447C);
    // 0x42002A70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x42002A74: blez        $a3, L_42002B58
    if (SIGNED(ctx->r7) <= 0) {
        // 0x42002A78: andi        $t0, $a3, 0x3
        ctx->r8 = ctx->r7 & 0X3;
            goto L_42002B58;
    }
    // 0x42002A78: andi        $t0, $a3, 0x3
    ctx->r8 = ctx->r7 & 0X3;
    // 0x42002A7C: beq         $t0, $zero, L_42002ABC
    if (ctx->r8 == 0) {
        // 0x42002A80: or          $a2, $t0, $zero
        ctx->r6 = ctx->r8 | 0;
            goto L_42002ABC;
    }
    // 0x42002A80: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x42002A84: sll         $t8, $zero, 4
    ctx->r24 = S32(0 << 4);
    // 0x42002A88: addu        $v1, $v0, $t8
    ctx->r3 = ADD32(ctx->r2, ctx->r24);
    // 0x42002A8C: sll         $a0, $zero, 4
    ctx->r4 = S32(0 << 4);
L_42002A90:
    // 0x42002A90: lw          $t9, 0x10($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10);
    // 0x42002A94: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x42002A98: addu        $t1, $t9, $a0
    ctx->r9 = ADD32(ctx->r25, ctx->r4);
    // 0x42002A9C: addiu       $t2, $t1, 0x10
    ctx->r10 = ADD32(ctx->r9, 0X10);
    // 0x42002AA0: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x42002AA4: ori         $t4, $t3, 0x8200
    ctx->r12 = ctx->r11 | 0X8200;
    // 0x42002AA8: sw          $t4, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r12;
    // 0x42002AAC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x42002AB0: bne         $a2, $a1, L_42002A90
    if (ctx->r6 != ctx->r5) {
        // 0x42002AB4: addiu       $v1, $v1, 0x14
        ctx->r3 = ADD32(ctx->r3, 0X14);
            goto L_42002A90;
    }
    // 0x42002AB4: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x42002AB8: beq         $a1, $a3, L_42002B58
    if (ctx->r5 == ctx->r7) {
        // 0x42002ABC: sll         $t5, $a3, 2
        ctx->r13 = S32(ctx->r7 << 2);
            goto L_42002B58;
    }
L_42002ABC:
    // 0x42002ABC: sll         $t5, $a3, 2
    ctx->r13 = S32(ctx->r7 << 2);
    // 0x42002AC0: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x42002AC4: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x42002AC8: addu        $t5, $t5, $a3
    ctx->r13 = ADD32(ctx->r13, ctx->r7);
    // 0x42002ACC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x42002AD0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x42002AD4: addu        $v1, $v0, $t6
    ctx->r3 = ADD32(ctx->r2, ctx->r14);
    // 0x42002AD8: addu        $a2, $t5, $v0
    ctx->r6 = ADD32(ctx->r13, ctx->r2);
    // 0x42002ADC: sll         $a0, $a1, 4
    ctx->r4 = S32(ctx->r5 << 4);
L_42002AE0:
    // 0x42002AE0: lw          $t7, 0x10($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X10);
    // 0x42002AE4: addiu       $v1, $v1, 0x50
    ctx->r3 = ADD32(ctx->r3, 0X50);
    // 0x42002AE8: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x42002AEC: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x42002AF0: andi        $t1, $t9, 0xFF
    ctx->r9 = ctx->r25 & 0XFF;
    // 0x42002AF4: ori         $t2, $t1, 0x8200
    ctx->r10 = ctx->r9 | 0X8200;
    // 0x42002AF8: sw          $t2, -0x40($v1)
    MEM_W(-0X40, ctx->r3) = ctx->r10;
    // 0x42002AFC: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
    // 0x42002B00: nop

    // 0x42002B04: addu        $t4, $t3, $a0
    ctx->r12 = ADD32(ctx->r11, ctx->r4);
    // 0x42002B08: addiu       $t5, $t4, 0x20
    ctx->r13 = ADD32(ctx->r12, 0X20);
    // 0x42002B0C: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x42002B10: ori         $t7, $t6, 0x8200
    ctx->r15 = ctx->r14 | 0X8200;
    // 0x42002B14: sw          $t7, -0x2C($v1)
    MEM_W(-0X2C, ctx->r3) = ctx->r15;
    // 0x42002B18: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x42002B1C: nop

    // 0x42002B20: addu        $t9, $t8, $a0
    ctx->r25 = ADD32(ctx->r24, ctx->r4);
    // 0x42002B24: addiu       $t1, $t9, 0x30
    ctx->r9 = ADD32(ctx->r25, 0X30);
    // 0x42002B28: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x42002B2C: ori         $t3, $t2, 0x8200
    ctx->r11 = ctx->r10 | 0X8200;
    // 0x42002B30: sw          $t3, -0x18($v1)
    MEM_W(-0X18, ctx->r3) = ctx->r11;
    // 0x42002B34: lw          $t4, 0x10($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X10);
    // 0x42002B38: nop

    // 0x42002B3C: addu        $t5, $t4, $a0
    ctx->r13 = ADD32(ctx->r12, ctx->r4);
    // 0x42002B40: addiu       $t6, $t5, 0x40
    ctx->r14 = ADD32(ctx->r13, 0X40);
    // 0x42002B44: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x42002B48: ori         $t8, $t7, 0x8200
    ctx->r24 = ctx->r15 | 0X8200;
    // 0x42002B4C: sw          $t8, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r24;
    // 0x42002B50: bne         $v1, $a2, L_42002AE0
    if (ctx->r3 != ctx->r6) {
        // 0x42002B54: addiu       $a0, $a0, 0x40
        ctx->r4 = ADD32(ctx->r4, 0X40);
            goto L_42002AE0;
    }
    // 0x42002B54: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
L_42002B58:
    // 0x42002B58: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x42002B5C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x42002B60: jal         0x420006C4
    // 0x42002B64: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_1;
    // 0x42002B64: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_1:
    // 0x42002B68: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x42002B6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42002B70: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x42002B74: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x42002B78: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x42002B7C: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x42002B80: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x42002B84: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x42002B88: jal         0x420006C4
    // 0x42002B8C: nop

    ovl_blast_ground_6C4(rdram, ctx);
        goto after_2;
    // 0x42002B8C: nop

    after_2:
    // 0x42002B90: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002B94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42002B98: swc1        $f0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f0.u32l;
    // 0x42002B9C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x42002BA0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x42002BA4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x42002BA8: jal         0x42001190
    // 0x42002BAC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_blast_ground_1190(rdram, ctx);
        goto after_3;
    // 0x42002BAC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x42002BB0: lw          $t9, 0x70($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X70);
    // 0x42002BB4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x42002BB8: bne         $t9, $at, L_42002BD0
    if (ctx->r25 != ctx->r1) {
        // 0x42002BBC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_42002BD0;
    }
    // 0x42002BBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42002BC0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x42002BC4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x42002BC8: b           L_42002C64
    // 0x42002BCC: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
        goto L_42002C64;
    // 0x42002BCC: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
L_42002BD0:
    // 0x42002BD0: jal         0x42001208
    // 0x42002BD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_blast_ground_1208(rdram, ctx);
        goto after_4;
    // 0x42002BD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x42002BD8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42002BDC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x42002BE0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x42002BE4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x42002BE8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x42002BEC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x42002BF0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x42002BF4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x42002BF8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x42002BFC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42002C00: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x42002C04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42002C08: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x42002C0C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42002C10: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x42002C14: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42002C18: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x42002C1C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002C20: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x42002C24: swc1        $f2, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f2.u32l;
    // 0x42002C28: swc1        $f2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f2.u32l;
    // 0x42002C2C: swc1        $f2, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f2.u32l;
    // 0x42002C30: swc1        $f12, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f12.u32l;
    // 0x42002C34: swc1        $f12, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f12.u32l;
    // 0x42002C38: swc1        $f12, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->f12.u32l;
    // 0x42002C3C: swc1        $f14, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->f14.u32l;
    // 0x42002C40: swc1        $f14, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f14.u32l;
    // 0x42002C44: swc1        $f16, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->f16.u32l;
    // 0x42002C48: swc1        $f16, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f16.u32l;
    // 0x42002C4C: swc1        $f18, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->f18.u32l;
    // 0x42002C50: swc1        $f4, 0xFC($s0)
    MEM_W(0XFC, ctx->r16) = ctx->f4.u32l;
    // 0x42002C54: swc1        $f6, 0x108($s0)
    MEM_W(0X108, ctx->r16) = ctx->f6.u32l;
    // 0x42002C58: swc1        $f8, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f8.u32l;
    // 0x42002C5C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x42002C60: swc1        $f10, 0x110($s0)
    MEM_W(0X110, ctx->r16) = ctx->f10.u32l;
L_42002C64:
    // 0x42002C64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x42002C68: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x42002C6C: jr          $ra
    // 0x42002C70: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x42002C70: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_blast_ground_2C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002C74: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002C78: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x42002C7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42002C80: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x42002C84: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x42002C88: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x42002C8C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x42002C90: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x42002C94: sw          $t7, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r15;
    // 0x42002C98: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x42002C9C: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x42002CA0: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x42002CA4: jr          $ra
    // 0x42002CA8: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x42002CA8: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void ovl_blast_ground_2CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002CAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x42002CB0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x42002CB4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x42002CB8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x42002CBC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x42002CC0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x42002CC4: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x42002CC8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x42002CCC: bne         $t6, $at, L_42002D20
    if (ctx->r14 != ctx->r1) {
        // 0x42002CD0: or          $s2, $a0, $zero
        ctx->r18 = ctx->r4 | 0;
            goto L_42002D20;
    }
    // 0x42002CD0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x42002CD4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x42002CD8: addiu       $s1, $s2, 0x7C
    ctx->r17 = ADD32(ctx->r18, 0X7C);
    // 0x42002CDC: addiu       $s3, $zero, 0x50
    ctx->r19 = ADD32(0, 0X50);
L_42002CE0:
    // 0x42002CE0: jal         0x42002C74
    // 0x42002CE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_ground_2C74(rdram, ctx);
        goto after_0;
    // 0x42002CE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x42002CE8: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x42002CEC: bne         $s0, $s3, L_42002CE0
    if (ctx->r16 != ctx->r19) {
        // 0x42002CF0: addiu       $s1, $s1, 0x28
        ctx->r17 = ADD32(ctx->r17, 0X28);
            goto L_42002CE0;
    }
    // 0x42002CF0: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
    // 0x42002CF4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002CF8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42002CFC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42002D00: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x42002D04: sw          $v1, 0xF4($s2)
    MEM_W(0XF4, ctx->r18) = ctx->r3;
    // 0x42002D08: sw          $zero, 0x108($s2)
    MEM_W(0X108, ctx->r18) = 0;
    // 0x42002D0C: swc1        $f0, 0xF8($s2)
    MEM_W(0XF8, ctx->r18) = ctx->f0.u32l;
    // 0x42002D10: swc1        $f0, 0xFC($s2)
    MEM_W(0XFC, ctx->r18) = ctx->f0.u32l;
    // 0x42002D14: swc1        $f0, 0x100($s2)
    MEM_W(0X100, ctx->r18) = ctx->f0.u32l;
    // 0x42002D18: b           L_42002DCC
    // 0x42002D1C: swc1        $f4, 0x104($s2)
    MEM_W(0X104, ctx->r18) = ctx->f4.u32l;
        goto L_42002DCC;
    // 0x42002D1C: swc1        $f4, 0x104($s2)
    MEM_W(0X104, ctx->r18) = ctx->f4.u32l;
L_42002D20:
    // 0x42002D20: jal         0x42002C74
    // 0x42002D24: addiu       $a0, $s2, 0x7C
    ctx->r4 = ADD32(ctx->r18, 0X7C);
    ovl_blast_ground_2C74(rdram, ctx);
        goto after_1;
    // 0x42002D24: addiu       $a0, $s2, 0x7C
    ctx->r4 = ADD32(ctx->r18, 0X7C);
    after_1:
    // 0x42002D28: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002D2C: lui         $at, 0x4326
    ctx->r1 = S32(0X4326 << 16);
    // 0x42002D30: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x42002D34: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x42002D38: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x42002D3C: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x42002D40: sw          $v1, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = ctx->r3;
    // 0x42002D44: sw          $v1, 0xB4($s2)
    MEM_W(0XB4, ctx->r18) = ctx->r3;
    // 0x42002D48: sw          $v1, 0xC4($s2)
    MEM_W(0XC4, ctx->r18) = ctx->r3;
    // 0x42002D4C: addu        $v0, $s2, $t7
    ctx->r2 = ADD32(ctx->r18, ctx->r15);
    // 0x42002D50: swc1        $f0, 0xA8($s2)
    MEM_W(0XA8, ctx->r18) = ctx->f0.u32l;
    // 0x42002D54: swc1        $f0, 0xAC($s2)
    MEM_W(0XAC, ctx->r18) = ctx->f0.u32l;
    // 0x42002D58: swc1        $f0, 0xB8($s2)
    MEM_W(0XB8, ctx->r18) = ctx->f0.u32l;
    // 0x42002D5C: swc1        $f0, 0xBC($s2)
    MEM_W(0XBC, ctx->r18) = ctx->f0.u32l;
    // 0x42002D60: swc1        $f0, 0xC8($s2)
    MEM_W(0XC8, ctx->r18) = ctx->f0.u32l;
    // 0x42002D64: swc1        $f0, 0xCC($s2)
    MEM_W(0XCC, ctx->r18) = ctx->f0.u32l;
    // 0x42002D68: swc1        $f2, 0xB0($s2)
    MEM_W(0XB0, ctx->r18) = ctx->f2.u32l;
    // 0x42002D6C: swc1        $f2, 0xC0($s2)
    MEM_W(0XC0, ctx->r18) = ctx->f2.u32l;
    // 0x42002D70: swc1        $f2, 0xD0($s2)
    MEM_W(0XD0, ctx->r18) = ctx->f2.u32l;
    // 0x42002D74: sw          $v1, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r3;
    // 0x42002D78: sw          $v1, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = ctx->r3;
    // 0x42002D7C: sw          $v1, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r3;
    // 0x42002D80: sw          $v1, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r3;
    // 0x42002D84: swc1        $f0, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->f0.u32l;
    // 0x42002D88: swc1        $f0, 0xD8($v0)
    MEM_W(0XD8, ctx->r2) = ctx->f0.u32l;
    // 0x42002D8C: swc1        $f0, 0xCC($v0)
    MEM_W(0XCC, ctx->r2) = ctx->f0.u32l;
    // 0x42002D90: swc1        $f0, 0xC8($v0)
    MEM_W(0XC8, ctx->r2) = ctx->f0.u32l;
    // 0x42002D94: swc1        $f0, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = ctx->f0.u32l;
    // 0x42002D98: swc1        $f0, 0xB8($v0)
    MEM_W(0XB8, ctx->r2) = ctx->f0.u32l;
    // 0x42002D9C: swc1        $f0, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->f0.u32l;
    // 0x42002DA0: swc1        $f0, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->f0.u32l;
    // 0x42002DA4: swc1        $f2, 0xE0($v0)
    MEM_W(0XE0, ctx->r2) = ctx->f2.u32l;
    // 0x42002DA8: swc1        $f2, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = ctx->f2.u32l;
    // 0x42002DAC: swc1        $f2, 0xC0($v0)
    MEM_W(0XC0, ctx->r2) = ctx->f2.u32l;
    // 0x42002DB0: swc1        $f2, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->f2.u32l;
    // 0x42002DB4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x42002DB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42002DBC: sw          $v1, 0x114($s2)
    MEM_W(0X114, ctx->r18) = ctx->r3;
    // 0x42002DC0: swc1        $f0, 0x118($s2)
    MEM_W(0X118, ctx->r18) = ctx->f0.u32l;
    // 0x42002DC4: swc1        $f0, 0x11C($s2)
    MEM_W(0X11C, ctx->r18) = ctx->f0.u32l;
    // 0x42002DC8: swc1        $f6, 0x120($s2)
    MEM_W(0X120, ctx->r18) = ctx->f6.u32l;
L_42002DCC:
    // 0x42002DCC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x42002DD0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x42002DD4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x42002DD8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x42002DDC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x42002DE0: jr          $ra
    // 0x42002DE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x42002DE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_blast_ground_2DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002DE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002DEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002DF0: jal         0x42002710
    // 0x42002DF4: nop

    ovl_blast_ground_2710(rdram, ctx);
        goto after_0;
    // 0x42002DF4: nop

    after_0:
    // 0x42002DF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002DFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002E00: jr          $ra
    // 0x42002E04: nop

    return;
    // 0x42002E04: nop

;}
RECOMP_FUNC void ovl_blast_ground_2E08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002E08: beq         $a0, $zero, L_42002E48
    if (ctx->r4 == 0) {
        // 0x42002E0C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_42002E48;
    }
    // 0x42002E0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42002E10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x42002E14: beq         $a0, $at, L_42002E34
    if (ctx->r4 == ctx->r1) {
        // 0x42002E18: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_42002E34;
    }
    // 0x42002E18: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x42002E1C: beq         $a0, $at, L_42002E3C
    if (ctx->r4 == ctx->r1) {
        // 0x42002E20: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_42002E3C;
    }
    // 0x42002E20: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x42002E24: beq         $a0, $at, L_42002E44
    if (ctx->r4 == ctx->r1) {
        // 0x42002E28: nop
    
            goto L_42002E44;
    }
    // 0x42002E28: nop

    // 0x42002E2C: b           L_42002E4C
    // 0x42002E30: sll         $t6, $a2, 4
    ctx->r14 = S32(ctx->r6 << 4);
        goto L_42002E4C;
    // 0x42002E30: sll         $t6, $a2, 4
    ctx->r14 = S32(ctx->r6 << 4);
L_42002E34:
    // 0x42002E34: b           L_42002E48
    // 0x42002E38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_42002E48;
    // 0x42002E38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_42002E3C:
    // 0x42002E3C: b           L_42002E48
    // 0x42002E40: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_42002E48;
    // 0x42002E40: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_42002E44:
    // 0x42002E44: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
L_42002E48:
    // 0x42002E48: sll         $t6, $a2, 4
    ctx->r14 = S32(ctx->r6 << 4);
L_42002E4C:
    // 0x42002E4C: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x42002E50: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x42002E54: lui         $v1, 0x4200
    ctx->r3 = S32(0X4200 << 16);
    // 0x42002E58: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x42002E5C: lw          $v0, 0x4590($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4590);
    // 0x42002E60: jr          $ra
    // 0x42002E64: nop

    return;
    // 0x42002E64: nop

;}
RECOMP_FUNC void ovl_blast_ground_2E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002E68: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x42002E6C: beq         $a0, $zero, L_42002E98
    if (ctx->r4 == 0) {
        // 0x42002E70: lui         $at, 0x4200
        ctx->r1 = S32(0X4200 << 16);
            goto L_42002E98;
    }
    // 0x42002E70: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002E74: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x42002E78: beq         $a0, $at, L_42002EA4
    if (ctx->r4 == ctx->r1) {
        // 0x42002E7C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_42002EA4;
    }
    // 0x42002E7C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x42002E80: beq         $a0, $at, L_42002EB4
    if (ctx->r4 == ctx->r1) {
        // 0x42002E84: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_42002EB4;
    }
    // 0x42002E84: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x42002E88: beq         $a0, $at, L_42002EC4
    if (ctx->r4 == ctx->r1) {
        // 0x42002E8C: nop
    
            goto L_42002EC4;
    }
    // 0x42002E8C: nop

    // 0x42002E90: jr          $ra
    // 0x42002E94: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x42002E94: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_42002E98:
    // 0x42002E98: lwc1        $f2, 0x46A0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X46A0);
    // 0x42002E9C: jr          $ra
    // 0x42002EA0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x42002EA0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_42002EA4:
    // 0x42002EA4: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002EA8: lwc1        $f2, 0x46A4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X46A4);
    // 0x42002EAC: jr          $ra
    // 0x42002EB0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x42002EB0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_42002EB4:
    // 0x42002EB4: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002EB8: lwc1        $f2, 0x46A8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X46A8);
    // 0x42002EBC: jr          $ra
    // 0x42002EC0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x42002EC0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_42002EC4:
    // 0x42002EC4: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002EC8: lwc1        $f2, 0x46AC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X46AC);
    // 0x42002ECC: nop

    // 0x42002ED0: jr          $ra
    // 0x42002ED4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x42002ED4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void ovl_blast_ground_2ED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002ED8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x42002EDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x42002EE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x42002EE4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x42002EE8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x42002EEC: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x42002EF0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x42002EF4: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x42002EF8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x42002EFC: jal         0x420006C4
    // 0x42002F00: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_0;
    // 0x42002F00: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x42002F04: jal         0x42000340
    // 0x42002F08: nop

    ovl_blast_ground_340(rdram, ctx);
        goto after_1;
    // 0x42002F08: nop

    after_1:
    // 0x42002F0C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x42002F10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42002F14: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x42002F18: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x42002F1C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x42002F20: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x42002F24: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x42002F28: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x42002F2C: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x42002F30: jal         0x42000340
    // 0x42002F34: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    ovl_blast_ground_340(rdram, ctx);
        goto after_2;
    // 0x42002F34: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x42002F38: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x42002F3C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x42002F40: cvt.s.d     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f6.fl = CVT_S_D(ctx->f0.d);
    // 0x42002F44: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x42002F48: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42002F4C: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x42002F50: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x42002F54: mul.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x42002F58: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x42002F5C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42002F60: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x42002F64: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x42002F68: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x42002F6C: add.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x42002F70: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x42002F74: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x42002F78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x42002F7C: addiu       $a2, $zero, 0x1D8
    ctx->r6 = ADD32(0, 0X1D8);
    // 0x42002F80: jal         0x42001104
    // 0x42002F84: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    ovl_blast_ground_1104(rdram, ctx);
        goto after_3;
    // 0x42002F84: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x42002F88: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002F8C: lwc1        $f0, 0x46B0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X46B0);
    // 0x42002F90: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x42002F94: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x42002F98: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x42002F9C: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x42002FA0: swc1        $f2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f2.u32l;
    // 0x42002FA4: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x42002FA8: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x42002FAC: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x42002FB0: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x42002FB4: swc1        $f2, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f2.u32l;
    // 0x42002FB8: swc1        $f16, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f16.u32l;
    // 0x42002FBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42002FC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x42002FC4: jr          $ra
    // 0x42002FC8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x42002FC8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_blast_ground_2FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002FCC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x42002FD0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x42002FD4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x42002FD8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x42002FDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x42002FE0: addiu       $s1, $s0, 0xF4
    ctx->r17 = ADD32(ctx->r16, 0XF4);
    // 0x42002FE4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x42002FE8: addiu       $a2, $zero, 0x1DA
    ctx->r6 = ADD32(0, 0X1DA);
    // 0x42002FEC: jal         0x42001104
    // 0x42002FF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ground_1104(rdram, ctx);
        goto after_0;
    // 0x42002FF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x42002FF4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x42002FF8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x42002FFC: jal         0x420006C4
    // 0x42003000: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_1;
    // 0x42003000: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x42003004: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x42003008: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x4200300C: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x42003010: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x42003014: jal         0x420006C4
    // 0x42003018: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_2;
    // 0x42003018: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_2:
    // 0x4200301C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42003020: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003024: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x42003028: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x4200302C: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x42003030: lwc1        $f11, 0x46B8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X46B8);
    // 0x42003034: lwc1        $f10, 0x46BC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X46BC);
    // 0x42003038: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x4200303C: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x42003040: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x42003044: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x42003048: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4200304C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x42003050: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x42003054: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x42003058: jal         0x42000F34
    // 0x4200305C: nop

    ovl_blast_ground_F34(rdram, ctx);
        goto after_3;
    // 0x4200305C: nop

    after_3:
    // 0x42003060: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42003064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003068: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x4200306C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x42003070: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x42003074: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x42003078: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x4200307C: jal         0x420017CC
    // 0x42003080: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    ovl_blast_ground_17CC(rdram, ctx);
        goto after_4;
    // 0x42003080: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x42003084: lui         $at, 0x4208
    ctx->r1 = S32(0X4208 << 16);
    // 0x42003088: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4200308C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x42003090: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42003094: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x42003098: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4200309C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x420030A0: swc1        $f8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f8.u32l;
    // 0x420030A4: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x420030A8: swc1        $f18, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f18.u32l;
    // 0x420030AC: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x420030B0: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    // 0x420030B4: swc1        $f16, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f16.u32l;
    // 0x420030B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x420030BC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x420030C0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x420030C4: jr          $ra
    // 0x420030C8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x420030C8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_blast_ground_30CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420030CC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x420030D0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x420030D4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x420030D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x420030DC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x420030E0: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x420030E4: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x420030E8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x420030EC: jal         0x420006C4
    // 0x420030F0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_0;
    // 0x420030F0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x420030F4: addiu       $s0, $s1, 0xF4
    ctx->r16 = ADD32(ctx->r17, 0XF4);
    // 0x420030F8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x420030FC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x42003100: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x42003104: jal         0x42000F34
    // 0x42003108: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_1;
    // 0x42003108: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x4200310C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x42003110: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42003114: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x42003118: lwc1        $f6, 0x24($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X24);
    // 0x4200311C: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x42003120: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x42003124: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x42003128: bc1t        L_42003150
    if (c1cs) {
        // 0x4200312C: addiu       $a2, $sp, 0x2C
        ctx->r6 = ADD32(ctx->r29, 0X2C);
            goto L_42003150;
    }
    // 0x4200312C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x42003130: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003134: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x42003138: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x4200313C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x42003140: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42003144: nop

    // 0x42003148: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x4200314C: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
L_42003150:
    // 0x42003150: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003154: jal         0x42000F34
    // 0x42003158: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_2;
    // 0x42003158: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x4200315C: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x42003160: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x42003164: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x42003168: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x4200316C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x42003170: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x42003174: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x42003178: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4200317C: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x42003180: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003184: jal         0x42000F34
    // 0x42003188: nop

    ovl_blast_ground_F34(rdram, ctx);
        goto after_3;
    // 0x42003188: nop

    after_3:
    // 0x4200318C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42003190: lwc1        $f18, 0x24($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X24);
    // 0x42003194: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003198: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x4200319C: nop

    // 0x420031A0: bc1t        L_420031C4
    if (c1cs) {
        // 0x420031A4: nop
    
            goto L_420031C4;
    }
    // 0x420031A4: nop

    // 0x420031A8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x420031AC: lwc1        $f6, 0x46C0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X46C0);
    // 0x420031B0: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x420031B4: nop

    // 0x420031B8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x420031BC: b           L_420031F4
    // 0x420031C0: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
        goto L_420031F4;
    // 0x420031C0: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
L_420031C4:
    // 0x420031C4: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x420031C8: lwc1        $f16, 0x46C4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X46C4);
    // 0x420031CC: nop

    // 0x420031D0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x420031D4: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x420031D8: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x420031DC: nop

    // 0x420031E0: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x420031E4: nop

    // 0x420031E8: bc1f        L_420031F8
    if (!c1cs) {
        // 0x420031EC: lw          $t6, 0x54($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X54);
            goto L_420031F8;
    }
    // 0x420031EC: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x420031F0: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
L_420031F4:
    // 0x420031F4: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
L_420031F8:
    // 0x420031F8: nop

    // 0x420031FC: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x42003200: bne         $at, $zero, L_4200323C
    if (ctx->r1 != 0) {
        // 0x42003204: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4200323C;
    }
    // 0x42003204: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42003208: lw          $a0, 0x74($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X74);
    // 0x4200320C: jal         0x42002E08
    // 0x42003210: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_blast_ground_2E08(rdram, ctx);
        goto after_4;
    // 0x42003210: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x42003214: addiu       $t7, $v0, -0x4
    ctx->r15 = ADD32(ctx->r2, -0X4);
    // 0x42003218: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x4200321C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003220: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x42003224: lwc1        $f6, 0x46C8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X46C8);
    // 0x42003228: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x4200322C: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x42003230: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x42003234: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    // 0x42003238: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4200323C:
    // 0x4200323C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x42003240: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x42003244: jr          $ra
    // 0x42003248: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x42003248: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_blast_ground_324C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200324C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x42003250: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x42003254: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x42003258: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4200325C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x42003260: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003264: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x42003268: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x4200326C: jal         0x42000F34
    // 0x42003270: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_0;
    // 0x42003270: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x42003274: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x42003278: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x4200327C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003280: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x42003284: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x42003288: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x4200328C: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42003290: nop

    // 0x42003294: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x42003298: nop

    // 0x4200329C: bc1f        L_420032B4
    if (!c1cs) {
        // 0x420032A0: nop
    
            goto L_420032B4;
    }
    // 0x420032A0: nop

    // 0x420032A4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x420032A8: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x420032AC: b           L_420032C8
    // 0x420032B0: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
        goto L_420032C8;
    // 0x420032B0: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
L_420032B4:
    // 0x420032B4: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x420032B8: lwc1        $f18, 0x46CC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X46CC);
    // 0x420032BC: nop

    // 0x420032C0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x420032C4: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
L_420032C8:
    // 0x420032C8: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x420032CC: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x420032D0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x420032D4: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x420032D8: nop

    // 0x420032DC: bc1f        L_42003310
    if (!c1cs) {
        // 0x420032E0: nop
    
            goto L_42003310;
    }
    // 0x420032E0: nop

    // 0x420032E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x420032E8: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x420032EC: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x420032F0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x420032F4: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x420032F8: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x420032FC: jal         0x42000F34
    // 0x42003300: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_1;
    // 0x42003300: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x42003304: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x42003308: sw          $t6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r14;
    // 0x4200330C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_42003310:
    // 0x42003310: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003314: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x42003318: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x4200331C: jal         0x42000F34
    // 0x42003320: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_2;
    // 0x42003320: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x42003324: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x42003328: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4200332C: jr          $ra
    // 0x42003330: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x42003330: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_blast_ground_3334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003334: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x42003338: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4200333C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x42003340: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x42003344: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x42003348: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4200334C: bne         $v0, $at, L_42003428
    if (ctx->r2 != ctx->r1) {
        // 0x42003350: or          $s0, $a1, $zero
        ctx->r16 = ctx->r5 | 0;
            goto L_42003428;
    }
    // 0x42003350: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x42003354: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x42003358: nop

    // 0x4200335C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x42003360: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x42003364: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x42003368: slti        $at, $t7, 0x8
    ctx->r1 = SIGNED(ctx->r15) < 0X8 ? 1 : 0;
    // 0x4200336C: lw          $v0, 0x74($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X74);
    // 0x42003370: nop

    // 0x42003374: bne         $v0, $zero, L_42003384
    if (ctx->r2 != 0) {
        // 0x42003378: nop
    
            goto L_42003384;
    }
    // 0x42003378: nop

    // 0x4200337C: beq         $at, $zero, L_420033A0
    if (ctx->r1 == 0) {
        // 0x42003380: nop
    
            goto L_420033A0;
    }
    // 0x42003380: nop

L_42003384:
    // 0x42003384: beq         $v0, $zero, L_42003458
    if (ctx->r2 == 0) {
        // 0x42003388: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_42003458;
    }
    // 0x42003388: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4200338C: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x42003390: nop

    // 0x42003394: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x42003398: bne         $at, $zero, L_42003458
    if (ctx->r1 != 0) {
        // 0x4200339C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_42003458;
    }
    // 0x4200339C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_420033A0:
    // 0x420033A0: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x420033A4: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x420033A8: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x420033AC: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x420033B0: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x420033B4: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x420033B8: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x420033BC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x420033C0: jal         0x42000F34
    // 0x420033C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_0;
    // 0x420033C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x420033C8: jal         0x42000F50
    // 0x420033CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_blast_ground_F50(rdram, ctx);
        goto after_1;
    // 0x420033CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x420033D0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x420033D4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x420033D8: addiu       $a2, $zero, 0x1DB
    ctx->r6 = ADD32(0, 0X1DB);
    // 0x420033DC: jal         0x42001104
    // 0x420033E0: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    ovl_blast_ground_1104(rdram, ctx);
        goto after_2;
    // 0x420033E0: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    after_2:
    // 0x420033E4: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x420033E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x420033EC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x420033F0: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    // 0x420033F4: jal         0x42000F34
    // 0x420033F8: addiu       $a3, $zero, 0x1DC
    ctx->r7 = ADD32(0, 0X1DC);
    ovl_blast_ground_F34(rdram, ctx);
        goto after_3;
    // 0x420033F8: addiu       $a3, $zero, 0x1DC
    ctx->r7 = ADD32(0, 0X1DC);
    after_3:
    // 0x420033FC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x42003400: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x42003404: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x42003408: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x4200340C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x42003410: jal         0x42000F34
    // 0x42003414: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_4;
    // 0x42003414: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x42003418: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x4200341C: sw          $t1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r9;
    // 0x42003420: b           L_42003454
    // 0x42003424: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
        goto L_42003454;
    // 0x42003424: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_42003428:
    // 0x42003428: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4200342C: bne         $v0, $at, L_42003458
    if (ctx->r2 != ctx->r1) {
        // 0x42003430: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_42003458;
    }
    // 0x42003430: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x42003434: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x42003438: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x4200343C: slti        $v1, $v0, 0xA
    ctx->r3 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x42003440: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x42003444: bne         $v1, $zero, L_42003454
    if (ctx->r3 != 0) {
        // 0x42003448: sw          $t2, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r10;
            goto L_42003454;
    }
    // 0x42003448: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x4200344C: sw          $t3, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r11;
    // 0x42003450: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_42003454:
    // 0x42003454: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_42003458:
    // 0x42003458: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4200345C: jr          $ra
    // 0x42003460: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x42003460: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_blast_ground_3464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003464: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x42003468: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4200346C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x42003470: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x42003474: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x42003478: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x4200347C: bne         $at, $zero, L_42003518
    if (ctx->r1 != 0) {
        // 0x42003480: addiu       $a0, $zero, 0x15
        ctx->r4 = ADD32(0, 0X15);
            goto L_42003518;
    }
    // 0x42003480: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x42003484: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003488: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x4200348C: jal         0x42000F34
    // 0x42003490: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_0;
    // 0x42003490: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x42003494: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003498: lwc1        $f6, 0x46D0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X46D0);
    // 0x4200349C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x420034A0: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x420034A4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x420034A8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x420034AC: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x420034B0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x420034B4: jal         0x42000F34
    // 0x420034B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_1;
    // 0x420034B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x420034BC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x420034C0: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x420034C4: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x420034C8: jal         0x42000F34
    // 0x420034CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_2;
    // 0x420034CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x420034D0: jal         0x42000340
    // 0x420034D4: nop

    ovl_blast_ground_340(rdram, ctx);
        goto after_3;
    // 0x420034D4: nop

    after_3:
    // 0x420034D8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x420034DC: lwc1        $f16, 0x46D4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X46D4);
    // 0x420034E0: cvt.s.d     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f10.fl = CVT_S_D(ctx->f0.d);
    // 0x420034E4: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x420034E8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x420034EC: lwc1        $f4, 0x46D8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X46D8);
    // 0x420034F0: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x420034F4: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x420034F8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x420034FC: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x42003500: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x42003504: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42003508: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x4200350C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003510: jal         0x42000F34
    // 0x42003514: nop

    ovl_blast_ground_F34(rdram, ctx);
        goto after_4;
    // 0x42003514: nop

    after_4:
L_42003518:
    // 0x42003518: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4200351C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x42003520: jr          $ra
    // 0x42003524: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x42003524: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_blast_ground_3528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003528: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4200352C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42003530: lw          $t6, 0x10($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X10);
    // 0x42003534: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x42003538: beq         $t6, $at, L_4200358C
    if (ctx->r14 == ctx->r1) {
        // 0x4200353C: nop
    
            goto L_4200358C;
    }
    // 0x4200353C: nop

    // 0x42003540: lw          $a0, 0x74($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X74);
    // 0x42003544: jal         0x42002E68
    // 0x42003548: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_blast_ground_2E68(rdram, ctx);
        goto after_0;
    // 0x42003548: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x4200354C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x42003550: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x42003554: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x42003558: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4200355C: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x42003560: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x42003564: swc1        $f6, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f6.u32l;
    // 0x42003568: lwc1        $f8, 0x14($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X14);
    // 0x4200356C: nop

    // 0x42003570: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x42003574: nop

    // 0x42003578: bc1f        L_420035C0
    if (!c1cs) {
        // 0x4200357C: nop
    
            goto L_420035C0;
    }
    // 0x4200357C: nop

    // 0x42003580: swc1        $f2, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f2.u32l;
    // 0x42003584: b           L_420035C0
    // 0x42003588: sw          $t7, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r15;
        goto L_420035C0;
    // 0x42003588: sw          $t7, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r15;
L_4200358C:
    // 0x4200358C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003590: lwc1        $f16, 0x46DC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X46DC);
    // 0x42003594: lwc1        $f10, 0x14($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X14);
    // 0x42003598: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4200359C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x420035A0: swc1        $f18, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f18.u32l;
    // 0x420035A4: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x420035A8: nop

    // 0x420035AC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x420035B0: nop

    // 0x420035B4: bc1f        L_420035C0
    if (!c1cs) {
        // 0x420035B8: nop
    
            goto L_420035C0;
    }
    // 0x420035B8: nop

    // 0x420035BC: swc1        $f0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f0.u32l;
L_420035C0:
    // 0x420035C0: jal         0x42003464
    // 0x420035C4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    ovl_blast_ground_3464(rdram, ctx);
        goto after_1;
    // 0x420035C4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x420035C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420035CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x420035D0: jr          $ra
    // 0x420035D4: nop

    return;
    // 0x420035D4: nop

;}
RECOMP_FUNC void ovl_blast_ground_35D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420035D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x420035DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x420035E0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x420035E4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x420035E8: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x420035EC: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x420035F0: lui         $t8, 0x4200
    ctx->r24 = S32(0X4200 << 16);
    // 0x420035F4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x420035F8: addiu       $t8, $t8, 0x4720
    ctx->r24 = ADD32(ctx->r24, 0X4720);
    // 0x420035FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x42003600: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x42003604: bne         $a2, $at, L_42003618
    if (ctx->r6 != ctx->r1) {
        // 0x42003608: addu        $v1, $t7, $t8
        ctx->r3 = ADD32(ctx->r15, ctx->r24);
            goto L_42003618;
    }
    // 0x42003608: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x4200360C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x42003610: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x42003614: nop

L_42003618:
    // 0x42003618: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x4200361C: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x42003620: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42003624: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x42003628: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x4200362C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x42003630: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x42003634: bc1f        L_42003670
    if (!c1cs) {
        // 0x42003638: sll         $t0, $t9, 2
        ctx->r8 = S32(ctx->r25 << 2);
            goto L_42003670;
    }
    // 0x42003638: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x4200363C: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x42003640: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x42003644: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x42003648: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x4200364C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x42003650: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x42003654: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x42003658: swc1        $f8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f8.u32l;
    // 0x4200365C: lw          $t5, 0x4($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X4);
    // 0x42003660: ori         $t4, $zero, 0x8000
    ctx->r12 = 0 | 0X8000;
    // 0x42003664: addu        $t6, $t5, $t1
    ctx->r14 = ADD32(ctx->r13, ctx->r9);
    // 0x42003668: b           L_42003694
    // 0x4200366C: sw          $t4, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r12;
        goto L_42003694;
    // 0x4200366C: sw          $t4, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r12;
L_42003670:
    // 0x42003670: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x42003674: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x42003678: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x4200367C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x42003680: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x42003684: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x42003688: addu        $a2, $t8, $t0
    ctx->r6 = ADD32(ctx->r24, ctx->r8);
    // 0x4200368C: jal         0x42001038
    // 0x42003690: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    ovl_blast_ground_1038(rdram, ctx);
        goto after_0;
    // 0x42003690: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_0:
L_42003694:
    // 0x42003694: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42003698: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4200369C: jr          $ra
    // 0x420036A0: nop

    return;
    // 0x420036A0: nop

;}
RECOMP_FUNC void ovl_blast_ground_36A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420036A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x420036A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x420036AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x420036B0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x420036B4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x420036B8: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x420036BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x420036C0: beq         $t6, $at, L_4200380C
    if (ctx->r14 == ctx->r1) {
        // 0x420036C4: or          $s0, $a1, $zero
        ctx->r16 = ctx->r5 | 0;
            goto L_4200380C;
    }
    // 0x420036C4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x420036C8: lw          $t8, 0x70($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X70);
    // 0x420036CC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x420036D0: bne         $t8, $at, L_420037A4
    if (ctx->r24 != ctx->r1) {
        // 0x420036D4: nop
    
            goto L_420037A4;
    }
    // 0x420036D4: nop

    // 0x420036D8: lw          $t9, 0x10($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X10);
    // 0x420036DC: nop

    // 0x420036E0: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x420036E4: beq         $at, $zero, L_420037FC
    if (ctx->r1 == 0) {
        // 0x420036E8: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_420037FC;
    }
    // 0x420036E8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x420036EC: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x420036F0: addu        $at, $at, $t9
    gpr jr_addend_420036FC = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x420036F4: lw          $t9, 0x46E0($at)
    ctx->r25 = ADD32(ctx->r1, 0X46E0);
    // 0x420036F8: nop

    // 0x420036FC: jr          $t9
    // 0x42003700: nop

    switch (jr_addend_420036FC >> 2) {
        case 0: goto L_42003704; break;
        case 1: goto L_4200373C; break;
        case 2: goto L_42003750; break;
        case 3: goto L_42003770; break;
        case 4: goto L_42003790; break;
        default: switch_error(__func__, 0x420036FC, 0x420046E0);
    }
    // 0x42003700: nop

L_42003704:
    // 0x42003704: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x42003708: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4200370C: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x42003710: addiu       $a1, $zero, 0x21D
    ctx->r5 = ADD32(0, 0X21D);
    // 0x42003714: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x42003718: nop

    // 0x4200371C: bc1f        L_4200372C
    if (!c1cs) {
        // 0x42003720: nop
    
            goto L_4200372C;
    }
    // 0x42003720: nop

    // 0x42003724: b           L_4200372C
    // 0x42003728: addiu       $a1, $zero, 0x532
    ctx->r5 = ADD32(0, 0X532);
        goto L_4200372C;
    // 0x42003728: addiu       $a1, $zero, 0x532
    ctx->r5 = ADD32(0, 0X532);
L_4200372C:
    // 0x4200372C: jal         0x4200324C
    // 0x42003730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_blast_ground_324C(rdram, ctx);
        goto after_0;
    // 0x42003730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x42003734: b           L_42003800
    // 0x42003738: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_42003800;
    // 0x42003738: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_4200373C:
    // 0x4200373C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x42003740: jal         0x42003334
    // 0x42003744: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_blast_ground_3334(rdram, ctx);
        goto after_1;
    // 0x42003744: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x42003748: b           L_42003800
    // 0x4200374C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_42003800;
    // 0x4200374C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_42003750:
    // 0x42003750: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x42003754: jal         0x42003334
    // 0x42003758: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_blast_ground_3334(rdram, ctx);
        goto after_2;
    // 0x42003758: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x4200375C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x42003760: jal         0x42003528
    // 0x42003764: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_blast_ground_3528(rdram, ctx);
        goto after_3;
    // 0x42003764: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x42003768: b           L_42003800
    // 0x4200376C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_42003800;
    // 0x4200376C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_42003770:
    // 0x42003770: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x42003774: jal         0x42003334
    // 0x42003778: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_blast_ground_3334(rdram, ctx);
        goto after_4;
    // 0x42003778: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x4200377C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x42003780: jal         0x42003528
    // 0x42003784: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_blast_ground_3528(rdram, ctx);
        goto after_5;
    // 0x42003784: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x42003788: b           L_42003800
    // 0x4200378C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_42003800;
    // 0x4200378C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_42003790:
    // 0x42003790: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x42003794: jal         0x42003528
    // 0x42003798: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_blast_ground_3528(rdram, ctx);
        goto after_6;
    // 0x42003798: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x4200379C: b           L_42003800
    // 0x420037A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_42003800;
    // 0x420037A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_420037A4:
    // 0x420037A4: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x420037A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x420037AC: beq         $v1, $zero, L_420037C4
    if (ctx->r3 == 0) {
        // 0x420037B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_420037C4;
    }
    // 0x420037B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x420037B4: beq         $v1, $at, L_420037D4
    if (ctx->r3 == ctx->r1) {
        // 0x420037B8: nop
    
            goto L_420037D4;
    }
    // 0x420037B8: nop

    // 0x420037BC: b           L_42003800
    // 0x420037C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_42003800;
    // 0x420037C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_420037C4:
    // 0x420037C4: jal         0x4200324C
    // 0x420037C8: addiu       $a1, $zero, 0x21C
    ctx->r5 = ADD32(0, 0X21C);
    ovl_blast_ground_324C(rdram, ctx);
        goto after_7;
    // 0x420037C8: addiu       $a1, $zero, 0x21C
    ctx->r5 = ADD32(0, 0X21C);
    after_7:
    // 0x420037CC: b           L_42003800
    // 0x420037D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_42003800;
    // 0x420037D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_420037D4:
    // 0x420037D4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x420037D8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x420037DC: xori        $v1, $v0, 0x6E
    ctx->r3 = ctx->r2 ^ 0X6E;
    // 0x420037E0: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x420037E4: bne         $v1, $zero, L_420037FC
    if (ctx->r3 != 0) {
        // 0x420037E8: sw          $t0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r8;
            goto L_420037FC;
    }
    // 0x420037E8: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x420037EC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x420037F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x420037F4: jal         0x42000F34
    // 0x420037F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_8;
    // 0x420037F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
L_420037FC:
    // 0x420037FC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_42003800:
    // 0x42003800: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x42003804: jal         0x420035D8
    // 0x42003808: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_blast_ground_35D8(rdram, ctx);
        goto after_9;
    // 0x42003808: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
L_4200380C:
    // 0x4200380C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42003810: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x42003814: jr          $ra
    // 0x42003818: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x42003818: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_blast_ground_381C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200381C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x42003820: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x42003824: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x42003828: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x4200382C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x42003830: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x42003834: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x42003838: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x4200383C: addiu       $s1, $a0, 0x7C
    ctx->r17 = ADD32(ctx->r4, 0X7C);
    // 0x42003840: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
L_42003844:
    // 0x42003844: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x42003848: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x4200384C: jal         0x420036A4
    // 0x42003850: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_blast_ground_36A4(rdram, ctx);
        goto after_0;
    // 0x42003850: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_0:
    // 0x42003854: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x42003858: bne         $s0, $s3, L_42003844
    if (ctx->r16 != ctx->r19) {
        // 0x4200385C: addiu       $s1, $s1, 0x28
        ctx->r17 = ADD32(ctx->r17, 0X28);
            goto L_42003844;
    }
    // 0x4200385C: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
    // 0x42003860: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x42003864: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x42003868: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x4200386C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x42003870: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x42003874: jr          $ra
    // 0x42003878: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x42003878: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_blast_ground_387C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200387C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x42003880: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x42003884: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x42003888: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x4200388C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x42003890: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x42003894: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x42003898: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x4200389C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x420038A0: addiu       $s0, $a0, 0x7C
    ctx->r16 = ADD32(ctx->r4, 0X7C);
    // 0x420038A4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x420038A8: addiu       $s4, $zero, 0x50
    ctx->r20 = ADD32(0, 0X50);
L_420038AC:
    // 0x420038AC: lw          $t6, 0x108($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X108);
    // 0x420038B0: nop

    // 0x420038B4: bne         $s3, $t6, L_420038E0
    if (ctx->r19 != ctx->r14) {
        // 0x420038B8: nop
    
            goto L_420038E0;
    }
    // 0x420038B8: nop

    // 0x420038BC: lw          $a0, 0x74($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X74);
    // 0x420038C0: jal         0x42002E08
    // 0x420038C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_blast_ground_2E08(rdram, ctx);
        goto after_0;
    // 0x420038C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x420038C8: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x420038CC: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x420038D0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x420038D4: nop

    // 0x420038D8: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x420038DC: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
L_420038E0:
    // 0x420038E0: lw          $t7, 0x10($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X10);
    // 0x420038E4: nop

    // 0x420038E8: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x420038EC: bne         $at, $zero, L_4200390C
    if (ctx->r1 != 0) {
        // 0x420038F0: nop
    
            goto L_4200390C;
    }
    // 0x420038F0: nop

    // 0x420038F4: lwc1        $f16, 0x14($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X14);
    // 0x420038F8: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x420038FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003900: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x42003904: jal         0x42003464
    // 0x42003908: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
    ovl_blast_ground_3464(rdram, ctx);
        goto after_1;
    // 0x42003908: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
    after_1:
L_4200390C:
    // 0x4200390C: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
    // 0x42003910: bne         $s1, $s4, L_420038AC
    if (ctx->r17 != ctx->r20) {
        // 0x42003914: addiu       $s0, $s0, 0x28
        ctx->r16 = ADD32(ctx->r16, 0X28);
            goto L_420038AC;
    }
    // 0x42003914: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x42003918: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x4200391C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x42003920: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x42003924: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x42003928: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x4200392C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x42003930: jr          $ra
    // 0x42003934: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x42003934: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_blast_ground_3938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003938: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4200393C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42003940: lw          $v1, 0x68($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X68);
    // 0x42003944: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x42003948: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4200394C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x42003950: beq         $v1, $at, L_4200396C
    if (ctx->r3 == ctx->r1) {
        // 0x42003954: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_4200396C;
    }
    // 0x42003954: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x42003958: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x4200395C: beq         $v1, $at, L_42003980
    if (ctx->r3 == ctx->r1) {
        // 0x42003960: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_42003980;
    }
    // 0x42003960: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42003964: b           L_4200398C
    // 0x42003968: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4200398C;
    // 0x42003968: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_4200396C:
    // 0x4200396C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x42003970: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x42003974: b           L_42003988
    // 0x42003978: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_42003988;
    // 0x42003978: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x4200397C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_42003980:
    // 0x42003980: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x42003984: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_42003988:
    // 0x42003988: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_4200398C:
    // 0x4200398C: beq         $v0, $at, L_420039B0
    if (ctx->r2 == ctx->r1) {
        // 0x42003990: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_420039B0;
    }
    // 0x42003990: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x42003994: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x42003998: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x4200399C: addu        $a1, $a0, $t6
    ctx->r5 = ADD32(ctx->r4, ctx->r14);
    // 0x420039A0: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x420039A4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x420039A8: jal         0x42002ED8
    // 0x420039AC: addiu       $a1, $a1, 0x7C
    ctx->r5 = ADD32(ctx->r5, 0X7C);
    ovl_blast_ground_2ED8(rdram, ctx);
        goto after_0;
    // 0x420039AC: addiu       $a1, $a1, 0x7C
    ctx->r5 = ADD32(ctx->r5, 0X7C);
    after_0:
L_420039B0:
    // 0x420039B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420039B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x420039B8: jr          $ra
    // 0x420039BC: nop

    return;
    // 0x420039BC: nop

;}
RECOMP_FUNC void ovl_blast_ground_39C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420039C0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x420039C4: addiu       $t6, $zero, 0x1DE
    ctx->r14 = ADD32(0, 0X1DE);
    // 0x420039C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420039CC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x420039D0: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x420039D4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x420039D8: jal         0x420006C4
    // 0x420039DC: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_0;
    // 0x420039DC: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_0:
    // 0x420039E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420039E4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x420039E8: jr          $ra
    // 0x420039EC: nop

    return;
    // 0x420039EC: nop

;}
RECOMP_FUNC void ovl_blast_ground_39F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420039F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420039F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420039F8: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x420039FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42003A00: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x42003A04: beq         $at, $zero, L_42003A14
    if (ctx->r1 == 0) {
        // 0x42003A08: swc1        $f4, 0x24($a0)
        MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
            goto L_42003A14;
    }
    // 0x42003A08: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x42003A0C: jal         0x420039C0
    // 0x42003A10: nop

    ovl_blast_ground_39C0(rdram, ctx);
        goto after_0;
    // 0x42003A10: nop

    after_0:
L_42003A14:
    // 0x42003A14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42003A18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42003A1C: jr          $ra
    // 0x42003A20: nop

    return;
    // 0x42003A20: nop

;}
RECOMP_FUNC void ovl_blast_ground_3A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003A24: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x42003A28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x42003A2C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x42003A30: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42003A34: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x42003A38: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x42003A3C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x42003A40: nop

    // 0x42003A44: bc1f        L_42003BA0
    if (!c1cs) {
        // 0x42003A48: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_42003BA0;
    }
    // 0x42003A48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42003A4C: lwc1        $f6, 0x100($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X100);
    // 0x42003A50: addiu       $v0, $a0, 0xF4
    ctx->r2 = ADD32(ctx->r4, 0XF4);
    // 0x42003A54: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x42003A58: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003A5C: bc1t        L_42003B2C
    if (c1cs) {
        // 0x42003A60: nop
    
            goto L_42003B2C;
    }
    // 0x42003A60: nop

    // 0x42003A64: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x42003A68: lwc1        $f10, 0x46F4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X46F4);
    // 0x42003A6C: nop

    // 0x42003A70: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x42003A74: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x42003A78: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x42003A7C: nop

    // 0x42003A80: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x42003A84: nop

    // 0x42003A88: bc1f        L_42003A94
    if (!c1cs) {
        // 0x42003A8C: nop
    
            goto L_42003A94;
    }
    // 0x42003A8C: nop

    // 0x42003A90: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
L_42003A94:
    // 0x42003A94: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x42003A98: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x42003A9C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x42003AA0: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x42003AA4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x42003AA8: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x42003AAC: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x42003AB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42003AB4: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x42003AB8: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x42003ABC: jal         0x42000F34
    // 0x42003AC0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_0;
    // 0x42003AC0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_0:
    // 0x42003AC4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x42003AC8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x42003ACC: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x42003AD0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x42003AD4: jal         0x42000F34
    // 0x42003AD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_1;
    // 0x42003AD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x42003ADC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x42003AE0: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x42003AE4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x42003AE8: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x42003AEC: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x42003AF0: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x42003AF4: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x42003AF8: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x42003AFC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x42003B00: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x42003B04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42003B08: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x42003B0C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x42003B10: nop

    // 0x42003B14: mul.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x42003B18: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x42003B1C: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x42003B20: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x42003B24: jal         0x42000F34
    // 0x42003B28: nop

    ovl_blast_ground_F34(rdram, ctx);
        goto after_2;
    // 0x42003B28: nop

    after_2:
L_42003B2C:
    // 0x42003B2C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x42003B30: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x42003B34: jal         0x420006C4
    // 0x42003B38: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_3;
    // 0x42003B38: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x42003B3C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42003B40: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x42003B44: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003B48: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x42003B4C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x42003B50: bc1t        L_42003BA0
    if (c1cs) {
        // 0x42003B54: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_42003BA0;
    }
    // 0x42003B54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42003B58: lwc1        $f12, 0x46F8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X46F8);
    // 0x42003B5C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003B60: lwc1        $f16, 0x46FC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X46FC);
    // 0x42003B64: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x42003B68: sub.s       $f2, $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x42003B6C: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x42003B70: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x42003B74: add.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x42003B78: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    // 0x42003B7C: add.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x42003B80: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x42003B84: bc1f        L_42003B90
    if (!c1cs) {
        // 0x42003B88: swc1        $f6, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
            goto L_42003B90;
    }
    // 0x42003B88: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x42003B8C: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
L_42003B90:
    // 0x42003B90: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x42003B94: jal         0x420006C4
    // 0x42003B98: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    ovl_blast_ground_6C4(rdram, ctx);
        goto after_4;
    // 0x42003B98: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_4:
    // 0x42003B9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_42003BA0:
    // 0x42003BA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x42003BA4: jr          $ra
    // 0x42003BA8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x42003BA8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_blast_ground_3BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003BAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x42003BB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x42003BB4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x42003BB8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x42003BBC: lw          $s1, 0x68($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X68);
    // 0x42003BC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x42003BC4: beq         $s1, $at, L_42003BE0
    if (ctx->r17 == ctx->r1) {
        // 0x42003BC8: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_42003BE0;
    }
    // 0x42003BC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x42003BCC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x42003BD0: beq         $s1, $at, L_42003BF0
    if (ctx->r17 == ctx->r1) {
        // 0x42003BD4: nop
    
            goto L_42003BF0;
    }
    // 0x42003BD4: nop

    // 0x42003BD8: b           L_42003C14
    // 0x42003BDC: nop

        goto L_42003C14;
    // 0x42003BDC: nop

L_42003BE0:
    // 0x42003BE0: jal         0x42002FCC
    // 0x42003BE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_blast_ground_2FCC(rdram, ctx);
        goto after_0;
    // 0x42003BE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x42003BE8: b           L_42003C14
    // 0x42003BEC: nop

        goto L_42003C14;
    // 0x42003BEC: nop

L_42003BF0:
    // 0x42003BF0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42003BF4: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x42003BF8: nop

    // 0x42003BFC: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x42003C00: nop

    // 0x42003C04: bc1t        L_42003C14
    if (c1cs) {
        // 0x42003C08: nop
    
            goto L_42003C14;
    }
    // 0x42003C08: nop

    // 0x42003C0C: jal         0x420039C0
    // 0x42003C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_blast_ground_39C0(rdram, ctx);
        goto after_1;
    // 0x42003C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_42003C14:
    // 0x42003C14: blez        $s1, L_42003C98
    if (SIGNED(ctx->r17) <= 0) {
        // 0x42003C18: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_42003C98;
    }
    // 0x42003C18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42003C1C: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    // 0x42003C20: jal         0x42002E08
    // 0x42003C24: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_blast_ground_2E08(rdram, ctx);
        goto after_2;
    // 0x42003C24: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x42003C28: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x42003C2C: beq         $at, $zero, L_42003C44
    if (ctx->r1 == 0) {
        // 0x42003C30: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_42003C44;
    }
    // 0x42003C30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003C34: jal         0x420030CC
    // 0x42003C38: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_blast_ground_30CC(rdram, ctx);
        goto after_3;
    // 0x42003C38: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x42003C3C: b           L_42003C64
    // 0x42003C40: lw          $t6, 0x108($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X108);
        goto L_42003C64;
    // 0x42003C40: lw          $t6, 0x108($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X108);
L_42003C44:
    // 0x42003C44: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    // 0x42003C48: jal         0x42002E08
    // 0x42003C4C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_blast_ground_2E08(rdram, ctx);
        goto after_4;
    // 0x42003C4C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x42003C50: bne         $v0, $s1, L_42003C60
    if (ctx->r2 != ctx->r17) {
        // 0x42003C54: nop
    
            goto L_42003C60;
    }
    // 0x42003C54: nop

    // 0x42003C58: jal         0x420039F0
    // 0x42003C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_blast_ground_39F0(rdram, ctx);
        goto after_5;
    // 0x42003C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_42003C60:
    // 0x42003C60: lw          $t6, 0x108($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X108);
L_42003C64:
    // 0x42003C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003C68: slt         $at, $s1, $t6
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x42003C6C: beq         $at, $zero, L_42003C8C
    if (ctx->r1 == 0) {
        // 0x42003C70: nop
    
            goto L_42003C8C;
    }
    // 0x42003C70: nop

    // 0x42003C74: jal         0x42003A24
    // 0x42003C78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_blast_ground_3A24(rdram, ctx);
        goto after_6;
    // 0x42003C78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x42003C7C: jal         0x4200381C
    // 0x42003C80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_blast_ground_381C(rdram, ctx);
        goto after_7;
    // 0x42003C80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x42003C84: b           L_42003C98
    // 0x42003C88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42003C98;
    // 0x42003C88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_42003C8C:
    // 0x42003C8C: jal         0x4200387C
    // 0x42003C90: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_blast_ground_387C(rdram, ctx);
        goto after_8;
    // 0x42003C90: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_8:
    // 0x42003C94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_42003C98:
    // 0x42003C98: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x42003C9C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x42003CA0: jr          $ra
    // 0x42003CA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x42003CA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_blast_ground_3CA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003CA8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x42003CAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x42003CB0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x42003CB4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x42003CB8: lw          $t6, 0x10($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X10);
    // 0x42003CBC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x42003CC0: beq         $t6, $zero, L_42003DBC
    if (ctx->r14 == 0) {
        // 0x42003CC4: slti        $at, $a2, 0xA
        ctx->r1 = SIGNED(ctx->r6) < 0XA ? 1 : 0;
            goto L_42003DBC;
    }
    // 0x42003CC4: slti        $at, $a2, 0xA
    ctx->r1 = SIGNED(ctx->r6) < 0XA ? 1 : 0;
    // 0x42003CC8: bne         $at, $zero, L_42003D80
    if (ctx->r1 != 0) {
        // 0x42003CCC: slti        $at, $a2, 0xDC
        ctx->r1 = SIGNED(ctx->r6) < 0XDC ? 1 : 0;
            goto L_42003D80;
    }
    // 0x42003CCC: slti        $at, $a2, 0xDC
    ctx->r1 = SIGNED(ctx->r6) < 0XDC ? 1 : 0;
    // 0x42003CD0: beq         $at, $zero, L_42003D84
    if (ctx->r1 == 0) {
        // 0x42003CD4: addiu       $at, $zero, 0xDC
        ctx->r1 = ADD32(0, 0XDC);
            goto L_42003D84;
    }
    // 0x42003CD4: addiu       $at, $zero, 0xDC
    ctx->r1 = ADD32(0, 0XDC);
    // 0x42003CD8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x42003CDC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x42003CE0: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x42003CE4: jal         0x42001874
    // 0x42003CE8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_blast_ground_1874(rdram, ctx);
        goto after_0;
    // 0x42003CE8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_0:
    // 0x42003CEC: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x42003CF0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x42003CF4: slti        $at, $a2, 0x32
    ctx->r1 = SIGNED(ctx->r6) < 0X32 ? 1 : 0;
    // 0x42003CF8: beq         $at, $zero, L_42003D48
    if (ctx->r1 == 0) {
        // 0x42003CFC: lui         $at, 0x4090
        ctx->r1 = S32(0X4090 << 16);
            goto L_42003D48;
    }
    // 0x42003CFC: lui         $at, 0x4090
    ctx->r1 = S32(0X4090 << 16);
    // 0x42003D00: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x42003D04: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x42003D08: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003D0C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x42003D10: nop

    // 0x42003D14: bc1f        L_42003D48
    if (!c1cs) {
        // 0x42003D18: nop
    
            goto L_42003D48;
    }
    // 0x42003D18: nop

    // 0x42003D1C: lwc1        $f4, 0x4700($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4700);
    // 0x42003D20: nop

    // 0x42003D24: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x42003D28: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x42003D2C: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x42003D30: nop

    // 0x42003D34: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x42003D38: nop

    // 0x42003D3C: bc1f        L_42003D4C
    if (!c1cs) {
        // 0x42003D40: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_42003D4C;
    }
    // 0x42003D40: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x42003D44: swc1        $f2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f2.u32l;
L_42003D48:
    // 0x42003D48: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
L_42003D4C:
    // 0x42003D4C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x42003D50: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x42003D54: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x42003D58: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x42003D5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42003D60: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x42003D64: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003D68: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x42003D6C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x42003D70: jal         0x42001038
    // 0x42003D74: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_blast_ground_1038(rdram, ctx);
        goto after_1;
    // 0x42003D74: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x42003D78: b           L_42003DC0
    // 0x42003D7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_42003DC0;
    // 0x42003D7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_42003D80:
    // 0x42003D80: addiu       $at, $zero, 0xDC
    ctx->r1 = ADD32(0, 0XDC);
L_42003D84:
    // 0x42003D84: bne         $a2, $at, L_42003DC0
    if (ctx->r6 != ctx->r1) {
        // 0x42003D88: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_42003DC0;
    }
    // 0x42003D88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x42003D8C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x42003D90: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x42003D94: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x42003D98: jal         0x42001874
    // 0x42003D9C: nop

    ovl_blast_ground_1874(rdram, ctx);
        goto after_2;
    // 0x42003D9C: nop

    after_2:
    // 0x42003DA0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42003DA4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x42003DA8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003DAC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x42003DB0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x42003DB4: jal         0x42001038
    // 0x42003DB8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_blast_ground_1038(rdram, ctx);
        goto after_3;
    // 0x42003DB8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_3:
L_42003DBC:
    // 0x42003DBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_42003DC0:
    // 0x42003DC0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x42003DC4: jr          $ra
    // 0x42003DC8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x42003DC8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_blast_ground_3DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003DCC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x42003DD0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x42003DD4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x42003DD8: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x42003DDC: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x42003DE0: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x42003DE4: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x42003DE8: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x42003DEC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x42003DF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42003DF4: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x42003DF8: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x42003DFC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x42003E00: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x42003E04: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x42003E08: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x42003E0C: lw          $a1, 0x7C($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X7C);
    // 0x42003E10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42003E14: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x42003E18: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x42003E1C: jal         0x42000F34
    // 0x42003E20: sub.s       $f20, $f10, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f8.fl;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_0;
    // 0x42003E20: sub.s       $f20, $f10, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f8.fl;
    after_0:
    // 0x42003E24: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x42003E28: nop

    // 0x42003E2C: beq         $t7, $zero, L_42003E98
    if (ctx->r15 == 0) {
        // 0x42003E30: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_42003E98;
    }
    // 0x42003E30: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x42003E34: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42003E38: nop

    // 0x42003E3C: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x42003E40: nop

    // 0x42003E44: bc1f        L_42003E50
    if (!c1cs) {
        // 0x42003E48: nop
    
            goto L_42003E50;
    }
    // 0x42003E48: nop

    // 0x42003E4C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_42003E50:
    // 0x42003E50: jal         0x42000340
    // 0x42003E54: nop

    ovl_blast_ground_340(rdram, ctx);
        goto after_1;
    // 0x42003E54: nop

    after_1:
    // 0x42003E58: cvt.s.d     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f16.fl = CVT_S_D(ctx->f0.d);
    // 0x42003E5C: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x42003E60: mul.s       $f2, $f16, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x42003E64: add.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x42003E68: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x42003E6C: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x42003E70: jal         0x42000340
    // 0x42003E74: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    ovl_blast_ground_340(rdram, ctx);
        goto after_2;
    // 0x42003E74: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x42003E78: cvt.s.d     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f8.fl = CVT_S_D(ctx->f0.d);
    // 0x42003E7C: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x42003E80: mul.s       $f2, $f8, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x42003E84: add.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x42003E88: sub.s       $f18, $f4, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x42003E8C: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x42003E90: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x42003E94: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_42003E98:
    // 0x42003E98: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42003E9C: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x42003EA0: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x42003EA4: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x42003EA8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x42003EAC: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x42003EB0: addiu       $a2, $zero, 0x1DF
    ctx->r6 = ADD32(0, 0X1DF);
    // 0x42003EB4: jal         0x42001104
    // 0x42003EB8: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    ovl_blast_ground_1104(rdram, ctx);
        goto after_3;
    // 0x42003EB8: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    after_3:
    // 0x42003EBC: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x42003EC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42003EC4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x42003EC8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x42003ECC: jal         0x42000F34
    // 0x42003ED0: addiu       $a3, $zero, 0x1E0
    ctx->r7 = ADD32(0, 0X1E0);
    ovl_blast_ground_F34(rdram, ctx);
        goto after_4;
    // 0x42003ED0: addiu       $a3, $zero, 0x1E0
    ctx->r7 = ADD32(0, 0X1E0);
    after_4:
    // 0x42003ED4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003ED8: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x42003EDC: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x42003EE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42003EE4: jal         0x42000F34
    // 0x42003EE8: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    ovl_blast_ground_F34(rdram, ctx);
        goto after_5;
    // 0x42003EE8: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_5:
    // 0x42003EEC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x42003EF0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x42003EF4: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x42003EF8: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x42003EFC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003F00: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x42003F04: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x42003F08: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x42003F0C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x42003F10: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x42003F14: beq         $a3, $zero, L_42003F60
    if (ctx->r7 == 0) {
        // 0x42003F18: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_42003F60;
    }
    // 0x42003F18: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x42003F1C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42003F20: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x42003F24: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x42003F28: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x42003F2C: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x42003F30: nop

    // 0x42003F34: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x42003F38: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x42003F3C: nop

    // 0x42003F40: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x42003F44: bne         $a3, $zero, L_42003F58
    if (ctx->r7 != 0) {
        // 0x42003F48: nop
    
            goto L_42003F58;
    }
    // 0x42003F48: nop

    // 0x42003F4C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x42003F50: b           L_42003F70
    // 0x42003F54: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_42003F70;
    // 0x42003F54: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_42003F58:
    // 0x42003F58: b           L_42003F70
    // 0x42003F5C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_42003F70;
    // 0x42003F5C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_42003F60:
    // 0x42003F60: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x42003F64: nop

    // 0x42003F68: bltz        $a3, L_42003F58
    if (SIGNED(ctx->r7) < 0) {
        // 0x42003F6C: nop
    
            goto L_42003F58;
    }
    // 0x42003F6C: nop

L_42003F70:
    // 0x42003F70: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x42003F74: jal         0x42000F34
    // 0x42003F78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_6;
    // 0x42003F78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x42003F7C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x42003F80: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x42003F84: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x42003F88: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x42003F8C: jr          $ra
    // 0x42003F90: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x42003F90: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_blast_ground_3F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003F94: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x42003F98: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x42003F9C: slt         $at, $a2, $a3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x42003FA0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x42003FA4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x42003FA8: bne         $at, $zero, L_42004210
    if (ctx->r1 != 0) {
        // 0x42003FAC: sw          $a2, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r6;
            goto L_42004210;
    }
    // 0x42003FAC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x42003FB0: bne         $a2, $a3, L_42004014
    if (ctx->r6 != ctx->r7) {
        // 0x42003FB4: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_42004014;
    }
    // 0x42003FB4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x42003FB8: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x42003FBC: beq         $a3, $at, L_42003FEC
    if (ctx->r7 == ctx->r1) {
        // 0x42003FC0: sw          $t7, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r15;
            goto L_42003FEC;
    }
    // 0x42003FC0: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x42003FC4: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x42003FC8: beq         $a3, $at, L_42003FF8
    if (ctx->r7 == ctx->r1) {
        // 0x42003FCC: addiu       $t9, $zero, 0x1E5
        ctx->r25 = ADD32(0, 0X1E5);
            goto L_42003FF8;
    }
    // 0x42003FCC: addiu       $t9, $zero, 0x1E5
    ctx->r25 = ADD32(0, 0X1E5);
    // 0x42003FD0: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x42003FD4: beq         $a3, $at, L_42003FF8
    if (ctx->r7 == ctx->r1) {
        // 0x42003FD8: addiu       $at, $zero, 0x2C
        ctx->r1 = ADD32(0, 0X2C);
            goto L_42003FF8;
    }
    // 0x42003FD8: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x42003FDC: beq         $a3, $at, L_42004000
    if (ctx->r7 == ctx->r1) {
        // 0x42003FE0: addiu       $t0, $zero, 0x1E4
        ctx->r8 = ADD32(0, 0X1E4);
            goto L_42004000;
    }
    // 0x42003FE0: addiu       $t0, $zero, 0x1E4
    ctx->r8 = ADD32(0, 0X1E4);
    // 0x42003FE4: b           L_42004008
    // 0x42003FE8: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
        goto L_42004008;
    // 0x42003FE8: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
L_42003FEC:
    // 0x42003FEC: addiu       $t8, $zero, 0x21B
    ctx->r24 = ADD32(0, 0X21B);
    // 0x42003FF0: b           L_42004004
    // 0x42003FF4: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
        goto L_42004004;
    // 0x42003FF4: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_42003FF8:
    // 0x42003FF8: b           L_42004004
    // 0x42003FFC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
        goto L_42004004;
    // 0x42003FFC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
L_42004000:
    // 0x42004000: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_42004004:
    // 0x42004004: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
L_42004008:
    // 0x42004008: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x4200400C: jal         0x42003DCC
    // 0x42004010: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_blast_ground_3DCC(rdram, ctx);
        goto after_0;
    // 0x42004010: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
L_42004014:
    // 0x42004014: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x42004018: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x4200401C: beq         $t1, $zero, L_4200411C
    if (ctx->r9 == 0) {
        // 0x42004020: slti        $at, $t2, 0x59
        ctx->r1 = SIGNED(ctx->r10) < 0X59 ? 1 : 0;
            goto L_4200411C;
    }
    // 0x42004020: slti        $at, $t2, 0x59
    ctx->r1 = SIGNED(ctx->r10) < 0X59 ? 1 : 0;
    // 0x42004024: bne         $at, $zero, L_42004120
    if (ctx->r1 != 0) {
        // 0x42004028: lw          $t4, 0x40($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X40);
            goto L_42004120;
    }
    // 0x42004028: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x4200402C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x42004030: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x42004034: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x42004038: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x4200403C: nop

    // 0x42004040: bc1f        L_42004120
    if (!c1cs) {
        // 0x42004044: lw          $t4, 0x40($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X40);
            goto L_42004120;
    }
    // 0x42004044: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x42004048: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4200404C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42004050: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x42004054: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42004058: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x4200405C: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x42004060: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x42004064: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x42004068: nop

    // 0x4200406C: bc1f        L_4200408C
    if (!c1cs) {
        // 0x42004070: nop
    
            goto L_4200408C;
    }
    // 0x42004070: nop

    // 0x42004074: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42004078: swc1        $f2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f2.u32l;
    // 0x4200407C: jal         0x42000F34
    // 0x42004080: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_1;
    // 0x42004080: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x42004084: b           L_42004214
    // 0x42004088: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_42004214;
    // 0x42004088: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4200408C:
    // 0x4200408C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x42004090: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x42004094: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42004098: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x4200409C: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x420040A0: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x420040A4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x420040A8: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x420040AC: beq         $a3, $zero, L_420040F8
    if (ctx->r7 == 0) {
        // 0x420040B0: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_420040F8;
    }
    // 0x420040B0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x420040B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x420040B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x420040BC: sub.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x420040C0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x420040C4: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x420040C8: nop

    // 0x420040CC: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x420040D0: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x420040D4: nop

    // 0x420040D8: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x420040DC: bne         $a3, $zero, L_420040F0
    if (ctx->r7 != 0) {
        // 0x420040E0: nop
    
            goto L_420040F0;
    }
    // 0x420040E0: nop

    // 0x420040E4: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x420040E8: b           L_42004108
    // 0x420040EC: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_42004108;
    // 0x420040EC: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_420040F0:
    // 0x420040F0: b           L_42004108
    // 0x420040F4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_42004108;
    // 0x420040F4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_420040F8:
    // 0x420040F8: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x420040FC: nop

    // 0x42004100: bltz        $a3, L_420040F0
    if (SIGNED(ctx->r7) < 0) {
        // 0x42004104: nop
    
            goto L_420040F0;
    }
    // 0x42004104: nop

L_42004108:
    // 0x42004108: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x4200410C: jal         0x42000F34
    // 0x42004110: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_2;
    // 0x42004110: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x42004114: b           L_42004214
    // 0x42004118: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_42004214;
    // 0x42004118: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4200411C:
    // 0x4200411C: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
L_42004120:
    // 0x42004120: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x42004124: bne         $t4, $zero, L_42004214
    if (ctx->r12 != 0) {
        // 0x42004128: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_42004214;
    }
    // 0x42004128: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4200412C: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x42004130: nop

    // 0x42004134: slti        $at, $t5, 0xD8
    ctx->r1 = SIGNED(ctx->r13) < 0XD8 ? 1 : 0;
    // 0x42004138: bne         $at, $zero, L_42004210
    if (ctx->r1 != 0) {
        // 0x4200413C: lui         $at, 0x4170
        ctx->r1 = S32(0X4170 << 16);
            goto L_42004210;
    }
    // 0x4200413C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x42004140: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x42004144: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x42004148: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x4200414C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x42004150: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42004154: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x42004158: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x4200415C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x42004160: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x42004164: nop

    // 0x42004168: bc1f        L_42004188
    if (!c1cs) {
        // 0x4200416C: nop
    
            goto L_42004188;
    }
    // 0x4200416C: nop

    // 0x42004170: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42004174: swc1        $f2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f2.u32l;
    // 0x42004178: jal         0x42000F34
    // 0x4200417C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_3;
    // 0x4200417C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x42004180: b           L_42004214
    // 0x42004184: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_42004214;
    // 0x42004184: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_42004188:
    // 0x42004188: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x4200418C: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x42004190: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42004194: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x42004198: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x4200419C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x420041A0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x420041A4: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x420041A8: beq         $a3, $zero, L_420041F4
    if (ctx->r7 == 0) {
        // 0x420041AC: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_420041F4;
    }
    // 0x420041AC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x420041B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x420041B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x420041B8: sub.s       $f4, $f0, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x420041BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x420041C0: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x420041C4: nop

    // 0x420041C8: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x420041CC: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x420041D0: nop

    // 0x420041D4: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x420041D8: bne         $a3, $zero, L_420041EC
    if (ctx->r7 != 0) {
        // 0x420041DC: nop
    
            goto L_420041EC;
    }
    // 0x420041DC: nop

    // 0x420041E0: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x420041E4: b           L_42004204
    // 0x420041E8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_42004204;
    // 0x420041E8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_420041EC:
    // 0x420041EC: b           L_42004204
    // 0x420041F0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_42004204;
    // 0x420041F0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_420041F4:
    // 0x420041F4: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x420041F8: nop

    // 0x420041FC: bltz        $a3, L_420041EC
    if (SIGNED(ctx->r7) < 0) {
        // 0x42004200: nop
    
            goto L_420041EC;
    }
    // 0x42004200: nop

L_42004204:
    // 0x42004204: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x42004208: jal         0x42000F34
    // 0x4200420C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_4;
    // 0x4200420C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
L_42004210:
    // 0x42004210: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_42004214:
    // 0x42004214: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x42004218: jr          $ra
    // 0x4200421C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x4200421C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_blast_ground_4220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42004220: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x42004224: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x42004228: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x4200422C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x42004230: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x42004234: lw          $a1, 0x7C($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X7C);
    // 0x42004238: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x4200423C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x42004240: jal         0x42000F34
    // 0x42004244: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_0;
    // 0x42004244: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x42004248: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x4200424C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x42004250: addiu       $a2, $zero, 0x1DB
    ctx->r6 = ADD32(0, 0X1DB);
    // 0x42004254: jal         0x42001104
    // 0x42004258: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    ovl_blast_ground_1104(rdram, ctx);
        goto after_1;
    // 0x42004258: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x4200425C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x42004260: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x42004264: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x42004268: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4200426C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x42004270: jal         0x42000F34
    // 0x42004274: addiu       $a3, $zero, 0x1DC
    ctx->r7 = ADD32(0, 0X1DC);
    ovl_blast_ground_F34(rdram, ctx);
        goto after_2;
    // 0x42004274: addiu       $a3, $zero, 0x1DC
    ctx->r7 = ADD32(0, 0X1DC);
    after_2:
    // 0x42004278: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x4200427C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x42004280: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x42004284: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42004288: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x4200428C: jal         0x42000F34
    // 0x42004290: addiu       $a3, $zero, 0x21E
    ctx->r7 = ADD32(0, 0X21E);
    ovl_blast_ground_F34(rdram, ctx);
        goto after_3;
    // 0x42004290: addiu       $a3, $zero, 0x21E
    ctx->r7 = ADD32(0, 0X21E);
    after_3:
    // 0x42004294: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42004298: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4200429C: jr          $ra
    // 0x420042A0: nop

    return;
    // 0x420042A0: nop

;}
RECOMP_FUNC void ovl_blast_ground_42A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420042A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420042A8: slti        $at, $a2, 0x28
    ctx->r1 = SIGNED(ctx->r6) < 0X28 ? 1 : 0;
    // 0x420042AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420042B0: bne         $at, $zero, L_420042FC
    if (ctx->r1 != 0) {
        // 0x420042B4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_420042FC;
    }
    // 0x420042B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x420042B8: slti        $at, $a2, 0xD3
    ctx->r1 = SIGNED(ctx->r6) < 0XD3 ? 1 : 0;
    // 0x420042BC: beq         $at, $zero, L_420042FC
    if (ctx->r1 == 0) {
        // 0x420042C0: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_420042FC;
    }
    // 0x420042C0: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x420042C4: bne         $a2, $at, L_420042E0
    if (ctx->r6 != ctx->r1) {
        // 0x420042C8: addiu       $at, $zero, 0xD2
        ctx->r1 = ADD32(0, 0XD2);
            goto L_420042E0;
    }
    // 0x420042C8: addiu       $at, $zero, 0xD2
    ctx->r1 = ADD32(0, 0XD2);
    // 0x420042CC: jal         0x42004220
    // 0x420042D0: nop

    ovl_blast_ground_4220(rdram, ctx);
        goto after_0;
    // 0x420042D0: nop

    after_0:
    // 0x420042D4: b           L_42004300
    // 0x420042D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42004300;
    // 0x420042D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420042DC: addiu       $at, $zero, 0xD2
    ctx->r1 = ADD32(0, 0XD2);
L_420042E0:
    // 0x420042E0: bne         $a2, $at, L_420042FC
    if (ctx->r6 != ctx->r1) {
        // 0x420042E4: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_420042FC;
    }
    // 0x420042E4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x420042E8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x420042EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x420042F0: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x420042F4: jal         0x42000F34
    // 0x420042F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ground_F34(rdram, ctx);
        goto after_1;
    // 0x420042F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_420042FC:
    // 0x420042FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42004300:
    // 0x42004300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42004304: jr          $ra
    // 0x42004308: nop

    return;
    // 0x42004308: nop

;}
RECOMP_FUNC void ovl_blast_ground_430C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200430C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x42004310: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x42004314: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x42004318: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x4200431C: lw          $s1, 0x68($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X68);
    // 0x42004320: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x42004324: bne         $s1, $at, L_4200433C
    if (ctx->r17 != ctx->r1) {
        // 0x42004328: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_4200433C;
    }
    // 0x42004328: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4200432C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42004330: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x42004334: jal         0x4200148C
    // 0x42004338: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    ovl_blast_ground_148C(rdram, ctx);
        goto after_0;
    // 0x42004338: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    after_0:
L_4200433C:
    // 0x4200433C: slti        $at, $s1, 0x2
    ctx->r1 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x42004340: bne         $at, $zero, L_42004368
    if (ctx->r1 != 0) {
        // 0x42004344: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_42004368;
    }
    // 0x42004344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42004348: addiu       $a1, $s0, 0x7C
    ctx->r5 = ADD32(ctx->r16, 0X7C);
    // 0x4200434C: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x42004350: jal         0x420036A4
    // 0x42004354: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_blast_ground_36A4(rdram, ctx);
        goto after_1;
    // 0x42004354: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x42004358: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x4200435C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42004360: jal         0x42003CA8
    // 0x42004364: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_blast_ground_3CA8(rdram, ctx);
        goto after_2;
    // 0x42004364: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
L_42004368:
    // 0x42004368: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x4200436C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x42004370: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42004374: addiu       $a1, $s0, 0xA4
    ctx->r5 = ADD32(ctx->r16, 0XA4);
    // 0x42004378: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x4200437C: jal         0x42003F94
    // 0x42004380: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    ovl_blast_ground_3F94(rdram, ctx);
        goto after_3;
    // 0x42004380: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    after_3:
    // 0x42004384: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x42004388: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x4200438C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42004390: addiu       $a1, $s0, 0xB4
    ctx->r5 = ADD32(ctx->r16, 0XB4);
    // 0x42004394: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x42004398: jal         0x42003F94
    // 0x4200439C: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    ovl_blast_ground_3F94(rdram, ctx);
        goto after_4;
    // 0x4200439C: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    after_4:
    // 0x420043A0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x420043A4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x420043A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x420043AC: addiu       $a1, $s0, 0xC4
    ctx->r5 = ADD32(ctx->r16, 0XC4);
    // 0x420043B0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x420043B4: jal         0x42003F94
    // 0x420043B8: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    ovl_blast_ground_3F94(rdram, ctx);
        goto after_5;
    // 0x420043B8: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    after_5:
    // 0x420043BC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x420043C0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x420043C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x420043C8: addiu       $a1, $s0, 0xD4
    ctx->r5 = ADD32(ctx->r16, 0XD4);
    // 0x420043CC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x420043D0: jal         0x42003F94
    // 0x420043D4: addiu       $a3, $zero, 0x1C
    ctx->r7 = ADD32(0, 0X1C);
    ovl_blast_ground_3F94(rdram, ctx);
        goto after_6;
    // 0x420043D4: addiu       $a3, $zero, 0x1C
    ctx->r7 = ADD32(0, 0X1C);
    after_6:
    // 0x420043D8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x420043DC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x420043E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x420043E4: addiu       $a1, $s0, 0xE4
    ctx->r5 = ADD32(ctx->r16, 0XE4);
    // 0x420043E8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x420043EC: jal         0x42003F94
    // 0x420043F0: addiu       $a3, $zero, 0x1C
    ctx->r7 = ADD32(0, 0X1C);
    ovl_blast_ground_3F94(rdram, ctx);
        goto after_7;
    // 0x420043F0: addiu       $a3, $zero, 0x1C
    ctx->r7 = ADD32(0, 0X1C);
    after_7:
    // 0x420043F4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x420043F8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x420043FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42004400: addiu       $a1, $s0, 0xF4
    ctx->r5 = ADD32(ctx->r16, 0XF4);
    // 0x42004404: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x42004408: jal         0x42003F94
    // 0x4200440C: addiu       $a3, $zero, 0x24
    ctx->r7 = ADD32(0, 0X24);
    ovl_blast_ground_3F94(rdram, ctx);
        goto after_8;
    // 0x4200440C: addiu       $a3, $zero, 0x24
    ctx->r7 = ADD32(0, 0X24);
    after_8:
    // 0x42004410: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42004414: addiu       $a1, $s0, 0x104
    ctx->r5 = ADD32(ctx->r16, 0X104);
    // 0x42004418: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x4200441C: addiu       $a3, $zero, 0x2C
    ctx->r7 = ADD32(0, 0X2C);
    // 0x42004420: jal         0x42003F94
    // 0x42004424: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_blast_ground_3F94(rdram, ctx);
        goto after_9;
    // 0x42004424: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x42004428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4200442C: addiu       $a1, $s0, 0x114
    ctx->r5 = ADD32(ctx->r16, 0X114);
    // 0x42004430: jal         0x420042A4
    // 0x42004434: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_blast_ground_42A4(rdram, ctx);
        goto after_10;
    // 0x42004434: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_10:
    // 0x42004438: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4200443C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x42004440: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x42004444: jr          $ra
    // 0x42004448: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x42004448: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_blast_ice_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000000: lui         $v0, 0x4200
    ctx->r2 = S32(0X4200 << 16);
    // 0x42000004: jr          $ra
    // 0x42000008: addiu       $v0, $v0, 0x2F3C
    ctx->r2 = ADD32(ctx->r2, 0X2F3C);
    return;
    // 0x42000008: addiu       $v0, $v0, 0x2F3C
    ctx->r2 = ADD32(ctx->r2, 0X2F3C);
    // 0x4200000C: nop

;}
RECOMP_FUNC void ovl_blast_ice_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000010: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000014: jr          $t1
    // 0x42000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
;}
RECOMP_FUNC void ovl_blast_ice_1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200001C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000020: jr          $t1
    // 0x42000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
;}
RECOMP_FUNC void ovl_blast_ice_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000028: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200002C: jr          $t1
    // 0x42000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
;}
RECOMP_FUNC void ovl_blast_ice_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000034: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000038: jr          $t1
    // 0x4200003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
;}
RECOMP_FUNC void ovl_blast_ice_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000040: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000044: jr          $t1
    // 0x42000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
;}
RECOMP_FUNC void ovl_blast_ice_4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200004C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000050: jr          $t1
    // 0x42000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
;}
RECOMP_FUNC void ovl_blast_ice_58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000058: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200005C: jr          $t1
    // 0x42000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
;}
RECOMP_FUNC void ovl_blast_ice_64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000064: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000068: jr          $t1
    // 0x4200006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
;}
RECOMP_FUNC void ovl_blast_ice_70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000070: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000074: jr          $t1
    // 0x42000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
;}
RECOMP_FUNC void ovl_blast_ice_7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200007C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000080: jr          $t1
    // 0x42000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
;}
RECOMP_FUNC void ovl_blast_ice_88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000088: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200008C: jr          $t1
    // 0x42000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
;}
RECOMP_FUNC void ovl_blast_ice_94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000094: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000098: jr          $t1
    // 0x4200009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
;}
RECOMP_FUNC void ovl_blast_ice_A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420000A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420000A4: jr          $t1
    // 0x420000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
;}
RECOMP_FUNC void ovl_blast_ice_AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420000AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420000B0: jr          $t1
    // 0x420000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
;}
RECOMP_FUNC void ovl_blast_ice_B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420000B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420000BC: jr          $t1
    // 0x420000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
;}
RECOMP_FUNC void ovl_blast_ice_C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420000C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420000C8: jr          $t1
    // 0x420000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
;}
RECOMP_FUNC void ovl_blast_ice_D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420000D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420000D4: jr          $t1
    // 0x420000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
;}
