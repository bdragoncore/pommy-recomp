#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_blast_elec_27A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420027A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420027A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420027A8: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x420027AC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x420027B0: bne         $t6, $at, L_420027C8
    if (ctx->r14 != ctx->r1) {
        // 0x420027B4: nop
    
            goto L_420027C8;
    }
    // 0x420027B4: nop

    // 0x420027B8: jal         0x42003918
    // 0x420027BC: nop

    ovl_blast_elec_3918(rdram, ctx);
        goto after_0;
    // 0x420027BC: nop

    after_0:
    // 0x420027C0: b           L_420027D4
    // 0x420027C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_420027D4;
    // 0x420027C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420027C8:
    // 0x420027C8: jal         0x420040EC
    // 0x420027CC: nop

    ovl_blast_elec_40EC(rdram, ctx);
        goto after_1;
    // 0x420027CC: nop

    after_1:
    // 0x420027D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420027D4:
    // 0x420027D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x420027D8: jr          $ra
    // 0x420027DC: nop

    return;
    // 0x420027DC: nop

;}
RECOMP_FUNC void ovl_blast_elec_27E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420027E0: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x420027E4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x420027E8: bne         $t6, $at, L_42002860
    if (ctx->r14 != ctx->r1) {
        // 0x420027EC: nop
    
            goto L_42002860;
    }
    // 0x420027EC: nop

    // 0x420027F0: lw          $t7, 0xC($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XC);
    // 0x420027F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x420027F8: beq         $t7, $zero, L_42002860
    if (ctx->r15 == 0) {
        // 0x420027FC: nop
    
            goto L_42002860;
    }
    // 0x420027FC: nop

    // 0x42002800: lw          $t8, 0x10($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X10);
    // 0x42002804: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42002808: lwc1        $f6, 0x4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4);
    // 0x4200280C: nop

    // 0x42002810: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x42002814: nop

    // 0x42002818: bc1t        L_42002860
    if (c1cs) {
        // 0x4200281C: nop
    
            goto L_42002860;
    }
    // 0x4200281C: nop

    // 0x42002820: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x42002824: nop

    // 0x42002828: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x4200282C: sra         $t0, $t9, 4
    ctx->r8 = S32(SIGNED(ctx->r25) >> 4);
    // 0x42002830: beq         $t0, $zero, L_42002860
    if (ctx->r8 == 0) {
        // 0x42002834: addiu       $v0, $t0, -0x1
        ctx->r2 = ADD32(ctx->r8, -0X1);
            goto L_42002860;
    }
    // 0x42002834: addiu       $v0, $t0, -0x1
    ctx->r2 = ADD32(ctx->r8, -0X1);
    // 0x42002838: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x4200283C: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x42002840: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x42002844: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x42002848: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x4200284C: addu        $v1, $a0, $t1
    ctx->r3 = ADD32(ctx->r4, ctx->r9);
    // 0x42002850: lw          $t2, 0xD8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XD8);
    // 0x42002854: nop

    // 0x42002858: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x4200285C: sw          $t3, 0xD8($v1)
    MEM_W(0XD8, ctx->r3) = ctx->r11;
L_42002860:
    // 0x42002860: jr          $ra
    // 0x42002864: nop

    return;
    // 0x42002864: nop

;}
RECOMP_FUNC void ovl_blast_elec_2868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002868: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x4200286C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x42002870: jr          $ra
    // 0x42002874: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x42002874: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void ovl_blast_elec_2878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002878: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x4200287C: jr          $ra
    // 0x42002880: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x42002880: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_blast_elec_2884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002884: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x42002888: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x4200288C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x42002890: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x42002894: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x42002898: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x4200289C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x420028A0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x420028A4: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x420028A8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x420028AC: bne         $t6, $at, L_42002924
    if (ctx->r14 != ctx->r1) {
        // 0x420028B0: or          $s5, $a0, $zero
        ctx->r21 = ctx->r4 | 0;
            goto L_42002924;
    }
    // 0x420028B0: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x420028B4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x420028B8: addiu       $s1, $a0, 0x7C
    ctx->r17 = ADD32(ctx->r4, 0X7C);
L_420028BC:
    // 0x420028BC: jal         0x42000F50
    // 0x420028C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_elec_F50(rdram, ctx);
        goto after_0;
    // 0x420028C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x420028C4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x420028C8: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x420028CC: bne         $at, $zero, L_420028BC
    if (ctx->r1 != 0) {
        // 0x420028D0: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_420028BC;
    }
    // 0x420028D0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x420028D4: jal         0x42000F50
    // 0x420028D8: addiu       $a0, $s5, 0x88
    ctx->r4 = ADD32(ctx->r21, 0X88);
    ovl_blast_elec_F50(rdram, ctx);
        goto after_1;
    // 0x420028D8: addiu       $a0, $s5, 0x88
    ctx->r4 = ADD32(ctx->r21, 0X88);
    after_1:
    // 0x420028DC: jal         0x42000F50
    // 0x420028E0: addiu       $a0, $s5, 0x8C
    ctx->r4 = ADD32(ctx->r21, 0X8C);
    ovl_blast_elec_F50(rdram, ctx);
        goto after_2;
    // 0x420028E0: addiu       $a0, $s5, 0x8C
    ctx->r4 = ADD32(ctx->r21, 0X8C);
    after_2:
    // 0x420028E4: or          $s4, $s5, $zero
    ctx->r20 = ctx->r21 | 0;
    // 0x420028E8: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x420028EC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x420028F0: addiu       $s2, $zero, 0x40
    ctx->r18 = ADD32(0, 0X40);
L_420028F4:
    // 0x420028F4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x420028F8: addiu       $s1, $s4, 0x90
    ctx->r17 = ADD32(ctx->r20, 0X90);
L_420028FC:
    // 0x420028FC: jal         0x42000F50
    // 0x42002900: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_elec_F50(rdram, ctx);
        goto after_3;
    // 0x42002900: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x42002904: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x42002908: bne         $s0, $s2, L_420028FC
    if (ctx->r16 != ctx->r18) {
        // 0x4200290C: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_420028FC;
    }
    // 0x4200290C: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x42002910: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x42002914: bne         $s3, $s5, L_420028F4
    if (ctx->r19 != ctx->r21) {
        // 0x42002918: addiu       $s4, $s4, 0x4C
        ctx->r20 = ADD32(ctx->r20, 0X4C);
            goto L_420028F4;
    }
    // 0x42002918: addiu       $s4, $s4, 0x4C
    ctx->r20 = ADD32(ctx->r20, 0X4C);
    // 0x4200291C: b           L_42002994
    // 0x42002920: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_42002994;
    // 0x42002920: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_42002924:
    // 0x42002924: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x42002928: addiu       $s1, $s5, 0x7C
    ctx->r17 = ADD32(ctx->r21, 0X7C);
L_4200292C:
    // 0x4200292C: jal         0x42000F50
    // 0x42002930: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_elec_F50(rdram, ctx);
        goto after_4;
    // 0x42002930: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x42002934: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x42002938: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x4200293C: bne         $at, $zero, L_4200292C
    if (ctx->r1 != 0) {
        // 0x42002940: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_4200292C;
    }
    // 0x42002940: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x42002944: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x42002948: addiu       $s1, $s5, 0x9C
    ctx->r17 = ADD32(ctx->r21, 0X9C);
    // 0x4200294C: addiu       $s2, $zero, 0x30
    ctx->r18 = ADD32(0, 0X30);
L_42002950:
    // 0x42002950: jal         0x42000F50
    // 0x42002954: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_elec_F50(rdram, ctx);
        goto after_5;
    // 0x42002954: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x42002958: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x4200295C: bne         $s0, $s2, L_42002950
    if (ctx->r16 != ctx->r18) {
        // 0x42002960: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_42002950;
    }
    // 0x42002960: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x42002964: jal         0x42000F50
    // 0x42002968: addiu       $a0, $s5, 0x88
    ctx->r4 = ADD32(ctx->r21, 0X88);
    ovl_blast_elec_F50(rdram, ctx);
        goto after_6;
    // 0x42002968: addiu       $a0, $s5, 0x88
    ctx->r4 = ADD32(ctx->r21, 0X88);
    after_6:
    // 0x4200296C: jal         0x42000F50
    // 0x42002970: addiu       $a0, $s5, 0x8C
    ctx->r4 = ADD32(ctx->r21, 0X8C);
    ovl_blast_elec_F50(rdram, ctx);
        goto after_7;
    // 0x42002970: addiu       $a0, $s5, 0x8C
    ctx->r4 = ADD32(ctx->r21, 0X8C);
    after_7:
    // 0x42002974: jal         0x42000F50
    // 0x42002978: addiu       $a0, $s5, 0x94
    ctx->r4 = ADD32(ctx->r21, 0X94);
    ovl_blast_elec_F50(rdram, ctx);
        goto after_8;
    // 0x42002978: addiu       $a0, $s5, 0x94
    ctx->r4 = ADD32(ctx->r21, 0X94);
    after_8:
    // 0x4200297C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x42002980: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x42002984: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x42002988: jal         0x42000214
    // 0x4200298C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_blast_elec_214(rdram, ctx);
        goto after_9;
    // 0x4200298C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_9:
    // 0x42002990: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_42002994:
    // 0x42002994: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x42002998: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x4200299C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x420029A0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x420029A4: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x420029A8: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x420029AC: jr          $ra
    // 0x420029B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x420029B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_blast_elec_29B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420029B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420029B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420029BC: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x420029C0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x420029C4: bne         $t6, $at, L_420029F4
    if (ctx->r14 != ctx->r1) {
        // 0x420029C8: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_420029F4;
    }
    // 0x420029C8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x420029CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x420029D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x420029D4: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x420029D8: lw          $a0, 0x74($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X74);
    // 0x420029DC: jal         0x42002C40
    // 0x420029E0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_blast_elec_2C40(rdram, ctx);
        goto after_0;
    // 0x420029E0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x420029E4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x420029E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x420029EC: b           L_42002A00
    // 0x420029F0: sw          $v0, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->r2;
        goto L_42002A00;
    // 0x420029F0: sw          $v0, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->r2;
L_420029F4:
    // 0x420029F4: addiu       $t7, $zero, 0x82
    ctx->r15 = ADD32(0, 0X82);
    // 0x420029F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x420029FC: sw          $t7, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->r15;
L_42002A00:
    // 0x42002A00: swc1        $f0, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->f0.u32l;
    // 0x42002A04: swc1        $f0, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->f0.u32l;
    // 0x42002A08: swc1        $f0, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->f0.u32l;
    // 0x42002A0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002A10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002A14: jr          $ra
    // 0x42002A18: nop

    return;
    // 0x42002A18: nop

;}
RECOMP_FUNC void ovl_blast_elec_2A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002A1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002A20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002A24: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x42002A28: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x42002A2C: bne         $t6, $at, L_42002A74
    if (ctx->r14 != ctx->r1) {
        // 0x42002A30: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_42002A74;
    }
    // 0x42002A30: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x42002A34: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x42002A38: jal         0x42001874
    // 0x42002A3C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_blast_elec_1874(rdram, ctx);
        goto after_0;
    // 0x42002A3C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x42002A40: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x42002A44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x42002A48: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x42002A4C: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x42002A50: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x42002A54: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x42002A58: addu        $v1, $v0, $t7
    ctx->r3 = ADD32(ctx->r2, ctx->r15);
    // 0x42002A5C: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x42002A60: swc1        $f0, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->f0.u32l;
    // 0x42002A64: swc1        $f0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f0.u32l;
    // 0x42002A68: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x42002A6C: b           L_42002A84
    // 0x42002A70: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
        goto L_42002A84;
    // 0x42002A70: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
L_42002A74:
    // 0x42002A74: lw          $t8, 0x5C($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X5C);
    // 0x42002A78: nop

    // 0x42002A7C: ori         $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 | 0X1000;
    // 0x42002A80: sw          $t9, 0x5C($a2)
    MEM_W(0X5C, ctx->r6) = ctx->r25;
L_42002A84:
    // 0x42002A84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002A88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002A8C: jr          $ra
    // 0x42002A90: nop

    return;
    // 0x42002A90: nop

;}
RECOMP_FUNC void ovl_blast_elec_2A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002A94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x42002A98: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x42002A9C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x42002AA0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_42002AA4:
    // 0x42002AA4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x42002AA8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x42002AAC: bne         $v0, $a2, L_42002AA4
    if (ctx->r2 != ctx->r6) {
        // 0x42002AB0: sw          $a1, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r5;
            goto L_42002AA4;
    }
    // 0x42002AB0: sw          $a1, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r5;
    // 0x42002AB4: jr          $ra
    // 0x42002AB8: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    return;
    // 0x42002AB8: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_blast_elec_2ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002ABC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002AC0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x42002AC4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x42002AC8: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x42002ACC: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x42002AD0: jr          $ra
    // 0x42002AD4: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x42002AD4: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void ovl_blast_elec_2AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002AD8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x42002ADC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x42002AE0: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x42002AE4: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x42002AE8: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x42002AEC: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x42002AF0: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x42002AF4: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x42002AF8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x42002AFC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x42002B00: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x42002B04: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x42002B08: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x42002B0C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x42002B10: bne         $t6, $at, L_42002B84
    if (ctx->r14 != ctx->r1) {
        // 0x42002B14: or          $s7, $a0, $zero
        ctx->r23 = ctx->r4 | 0;
            goto L_42002B84;
    }
    // 0x42002B14: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x42002B18: jal         0x42002A94
    // 0x42002B1C: addiu       $a0, $a0, 0x7C
    ctx->r4 = ADD32(ctx->r4, 0X7C);
    ovl_blast_elec_2A94(rdram, ctx);
        goto after_0;
    // 0x42002B1C: addiu       $a0, $a0, 0x7C
    ctx->r4 = ADD32(ctx->r4, 0X7C);
    after_0:
    // 0x42002B20: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x42002B24: sw          $s3, 0x88($s7)
    MEM_W(0X88, ctx->r23) = ctx->r19;
    // 0x42002B28: sw          $s3, 0x8C($s7)
    MEM_W(0X8C, ctx->r23) = ctx->r19;
    // 0x42002B2C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x42002B30: addiu       $s3, $zero, 0x40
    ctx->r19 = ADD32(0, 0X40);
    // 0x42002B34: or          $s4, $s7, $zero
    ctx->r20 = ctx->r23 | 0;
    // 0x42002B38: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x42002B3C: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x42002B40: addiu       $s6, $zero, 0x130
    ctx->r22 = ADD32(0, 0X130);
L_42002B44:
    // 0x42002B44: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x42002B48: addiu       $s1, $s4, 0x90
    ctx->r17 = ADD32(ctx->r20, 0X90);
L_42002B4C:
    // 0x42002B4C: jal         0x42002ABC
    // 0x42002B50: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_elec_2ABC(rdram, ctx);
        goto after_1;
    // 0x42002B50: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x42002B54: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x42002B58: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x42002B5C: swc1        $f20, 0xD0($s2)
    MEM_W(0XD0, ctx->r18) = ctx->f20.u32l;
    // 0x42002B60: swc1        $f20, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->f20.u32l;
    // 0x42002B64: bne         $s0, $s3, L_42002B4C
    if (ctx->r16 != ctx->r19) {
        // 0x42002B68: sw          $zero, 0xD8($s2)
        MEM_W(0XD8, ctx->r18) = 0;
            goto L_42002B4C;
    }
    // 0x42002B68: sw          $zero, 0xD8($s2)
    MEM_W(0XD8, ctx->r18) = 0;
    // 0x42002B6C: addiu       $s5, $s5, 0x4C
    ctx->r21 = ADD32(ctx->r21, 0X4C);
    // 0x42002B70: addiu       $s4, $s4, 0x4C
    ctx->r20 = ADD32(ctx->r20, 0X4C);
    // 0x42002B74: bne         $s5, $s6, L_42002B44
    if (ctx->r21 != ctx->r22) {
        // 0x42002B78: addiu       $s2, $s2, 0x4C
        ctx->r18 = ADD32(ctx->r18, 0X4C);
            goto L_42002B44;
    }
    // 0x42002B78: addiu       $s2, $s2, 0x4C
    ctx->r18 = ADD32(ctx->r18, 0X4C);
    // 0x42002B7C: b           L_42002BEC
    // 0x42002B80: swc1        $f20, 0x1C0($s7)
    MEM_W(0X1C0, ctx->r23) = ctx->f20.u32l;
        goto L_42002BEC;
    // 0x42002B80: swc1        $f20, 0x1C0($s7)
    MEM_W(0X1C0, ctx->r23) = ctx->f20.u32l;
L_42002B84:
    // 0x42002B84: jal         0x42002A94
    // 0x42002B88: addiu       $a0, $s7, 0x7C
    ctx->r4 = ADD32(ctx->r23, 0X7C);
    ovl_blast_elec_2A94(rdram, ctx);
        goto after_2;
    // 0x42002B88: addiu       $a0, $s7, 0x7C
    ctx->r4 = ADD32(ctx->r23, 0X7C);
    after_2:
    // 0x42002B8C: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x42002B90: sw          $s3, 0x88($s7)
    MEM_W(0X88, ctx->r23) = ctx->r19;
    // 0x42002B94: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x42002B98: addiu       $s1, $s7, 0x9C
    ctx->r17 = ADD32(ctx->r23, 0X9C);
    // 0x42002B9C: addiu       $s2, $zero, 0x30
    ctx->r18 = ADD32(0, 0X30);
L_42002BA0:
    // 0x42002BA0: jal         0x42002ABC
    // 0x42002BA4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_elec_2ABC(rdram, ctx);
        goto after_3;
    // 0x42002BA4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x42002BA8: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x42002BAC: bne         $s0, $s2, L_42002BA0
    if (ctx->r16 != ctx->r18) {
        // 0x42002BB0: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_42002BA0;
    }
    // 0x42002BB0: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x42002BB4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x42002BB8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42002BBC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x42002BC0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42002BC4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x42002BC8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x42002BCC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42002BD0: sw          $s3, 0x8C($s7)
    MEM_W(0X8C, ctx->r23) = ctx->r19;
    // 0x42002BD4: sw          $s3, 0x94($s7)
    MEM_W(0X94, ctx->r23) = ctx->r19;
    // 0x42002BD8: sw          $zero, 0x98($s7)
    MEM_W(0X98, ctx->r23) = 0;
    // 0x42002BDC: swc1        $f4, 0xCC($s7)
    MEM_W(0XCC, ctx->r23) = ctx->f4.u32l;
    // 0x42002BE0: swc1        $f6, 0xD0($s7)
    MEM_W(0XD0, ctx->r23) = ctx->f6.u32l;
    // 0x42002BE4: swc1        $f20, 0x90($s7)
    MEM_W(0X90, ctx->r23) = ctx->f20.u32l;
    // 0x42002BE8: swc1        $f8, 0xD4($s7)
    MEM_W(0XD4, ctx->r23) = ctx->f8.u32l;
L_42002BEC:
    // 0x42002BEC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x42002BF0: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x42002BF4: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x42002BF8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x42002BFC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x42002C00: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x42002C04: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x42002C08: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x42002C0C: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x42002C10: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x42002C14: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x42002C18: jr          $ra
    // 0x42002C1C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x42002C1C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_blast_elec_2C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002C20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002C24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002C28: jal         0x42002710
    // 0x42002C2C: nop

    ovl_blast_elec_2710(rdram, ctx);
        goto after_0;
    // 0x42002C2C: nop

    after_0:
    // 0x42002C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002C34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002C38: jr          $ra
    // 0x42002C3C: nop

    return;
    // 0x42002C3C: nop

;}
RECOMP_FUNC void ovl_blast_elec_2C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002C40: beq         $a0, $zero, L_42002C80
    if (ctx->r4 == 0) {
        // 0x42002C44: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_42002C80;
    }
    // 0x42002C44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42002C48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x42002C4C: beq         $a0, $at, L_42002C6C
    if (ctx->r4 == ctx->r1) {
        // 0x42002C50: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_42002C6C;
    }
    // 0x42002C50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x42002C54: beq         $a0, $at, L_42002C74
    if (ctx->r4 == ctx->r1) {
        // 0x42002C58: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_42002C74;
    }
    // 0x42002C58: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x42002C5C: beq         $a0, $at, L_42002C7C
    if (ctx->r4 == ctx->r1) {
        // 0x42002C60: nop
    
            goto L_42002C7C;
    }
    // 0x42002C60: nop

    // 0x42002C64: b           L_42002C84
    // 0x42002C68: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
        goto L_42002C84;
    // 0x42002C68: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
L_42002C6C:
    // 0x42002C6C: b           L_42002C80
    // 0x42002C70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_42002C80;
    // 0x42002C70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_42002C74:
    // 0x42002C74: b           L_42002C80
    // 0x42002C78: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_42002C80;
    // 0x42002C78: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_42002C7C:
    // 0x42002C7C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
L_42002C80:
    // 0x42002C80: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
L_42002C84:
    // 0x42002C84: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x42002C88: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x42002C8C: lui         $v1, 0x4200
    ctx->r3 = S32(0X4200 << 16);
    // 0x42002C90: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x42002C94: lw          $v0, 0x4300($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4300);
    // 0x42002C98: jr          $ra
    // 0x42002C9C: nop

    return;
    // 0x42002C9C: nop

;}
RECOMP_FUNC void ovl_blast_elec_2CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002CA0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x42002CA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x42002CA8: slti        $at, $a1, 0x8
    ctx->r1 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x42002CAC: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x42002CB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x42002CB4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x42002CB8: beq         $at, $zero, L_42002DF8
    if (ctx->r1 == 0) {
        // 0x42002CBC: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_42002DF8;
    }
    // 0x42002CBC: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x42002CC0: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x42002CC4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x42002CC8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x42002CCC: jal         0x420006C4
    // 0x42002CD0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_blast_elec_6C4(rdram, ctx);
        goto after_0;
    // 0x42002CD0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x42002CD4: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x42002CD8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x42002CDC: bne         $a3, $at, L_42002D10
    if (ctx->r7 != ctx->r1) {
        // 0x42002CE0: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_42002D10;
    }
    // 0x42002CE0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x42002CE4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x42002CE8: addiu       $a2, $zero, 0x1EB
    ctx->r6 = ADD32(0, 0X1EB);
    // 0x42002CEC: jal         0x42001104
    // 0x42002CF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_1104(rdram, ctx);
        goto after_1;
    // 0x42002CF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x42002CF4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x42002CF8: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x42002CFC: addiu       $a2, $zero, 0x1EC
    ctx->r6 = ADD32(0, 0X1EC);
    // 0x42002D00: jal         0x42001104
    // 0x42002D04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_1104(rdram, ctx);
        goto after_2;
    // 0x42002D04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x42002D08: b           L_42002D4C
    // 0x42002D0C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
        goto L_42002D4C;
    // 0x42002D0C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
L_42002D10:
    // 0x42002D10: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x42002D14: bne         $a3, $at, L_42002D48
    if (ctx->r7 != ctx->r1) {
        // 0x42002D18: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_42002D48;
    }
    // 0x42002D18: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42002D1C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002D20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42002D24: jal         0x42000F34
    // 0x42002D28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_3;
    // 0x42002D28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x42002D2C: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x42002D30: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42002D34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42002D38: jal         0x42000F34
    // 0x42002D3C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_4;
    // 0x42002D3C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x42002D40: b           L_42002DFC
    // 0x42002D44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42002DFC;
    // 0x42002D44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_42002D48:
    // 0x42002D48: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
L_42002D4C:
    // 0x42002D4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42002D50: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x42002D54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42002D58: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x42002D5C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42002D60: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x42002D64: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x42002D68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x42002D6C: bne         $t7, $zero, L_42002DB4
    if (ctx->r15 != 0) {
        // 0x42002D70: nop
    
            goto L_42002DB4;
    }
    // 0x42002D70: nop

    // 0x42002D74: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002D78: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42002D7C: jal         0x42000F34
    // 0x42002D80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_blast_elec_F34(rdram, ctx);
        goto after_5;
    // 0x42002D80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x42002D84: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002D88: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x42002D8C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x42002D90: jal         0x42000F34
    // 0x42002D94: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_6;
    // 0x42002D94: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x42002D98: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x42002D9C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42002DA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42002DA4: jal         0x42000F34
    // 0x42002DA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_7;
    // 0x42002DA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x42002DAC: b           L_42002DEC
    // 0x42002DB0: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
        goto L_42002DEC;
    // 0x42002DB0: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
L_42002DB4:
    // 0x42002DB4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x42002DB8: jal         0x42000F34
    // 0x42002DBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_8;
    // 0x42002DBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x42002DC0: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x42002DC4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x42002DC8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x42002DCC: jal         0x42000F34
    // 0x42002DD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_9;
    // 0x42002DD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x42002DD4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002DD8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42002DDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42002DE0: jal         0x42000F34
    // 0x42002DE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_10;
    // 0x42002DE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x42002DE8: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
L_42002DEC:
    // 0x42002DEC: nop

    // 0x42002DF0: xori        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 ^ 0X1;
    // 0x42002DF4: sw          $t9, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r25;
L_42002DF8:
    // 0x42002DF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_42002DFC:
    // 0x42002DFC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x42002E00: jr          $ra
    // 0x42002E04: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x42002E04: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_blast_elec_2E08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002E08: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x42002E0C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x42002E10: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x42002E14: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x42002E18: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x42002E1C: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x42002E20: bne         $at, $zero, L_42002F2C
    if (ctx->r1 != 0) {
        // 0x42002E24: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_42002F2C;
    }
    // 0x42002E24: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x42002E28: slti        $at, $a1, 0x8
    ctx->r1 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x42002E2C: beq         $at, $zero, L_42002F2C
    if (ctx->r1 == 0) {
        // 0x42002E30: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_42002F2C;
    }
    // 0x42002E30: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x42002E34: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x42002E38: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x42002E3C: jal         0x420006C4
    // 0x42002E40: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    ovl_blast_elec_6C4(rdram, ctx);
        goto after_0;
    // 0x42002E40: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_0:
    // 0x42002E44: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x42002E48: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x42002E4C: bne         $a3, $at, L_42002EE0
    if (ctx->r7 != ctx->r1) {
        // 0x42002E50: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_42002EE0;
    }
    // 0x42002E50: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x42002E54: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x42002E58: addiu       $a2, $zero, 0x1EA
    ctx->r6 = ADD32(0, 0X1EA);
    // 0x42002E5C: jal         0x42001104
    // 0x42002E60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_1104(rdram, ctx);
        goto after_1;
    // 0x42002E60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x42002E64: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x42002E68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42002E6C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x42002E70: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x42002E74: jal         0x42000F34
    // 0x42002E78: addiu       $a3, $zero, 0x1EA
    ctx->r7 = ADD32(0, 0X1EA);
    ovl_blast_elec_F34(rdram, ctx);
        goto after_2;
    // 0x42002E78: addiu       $a3, $zero, 0x1EA
    ctx->r7 = ADD32(0, 0X1EA);
    after_2:
    // 0x42002E7C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002E80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42002E84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42002E88: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x42002E8C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42002E90: addiu       $t8, $zero, 0x1B
    ctx->r24 = ADD32(0, 0X1B);
    // 0x42002E94: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
    // 0x42002E98: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x42002E9C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x42002EA0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x42002EA4: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x42002EA8: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x42002EAC: swc1        $f11, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x42002EB0: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x42002EB4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x42002EB8: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x42002EBC: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x42002EC0: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x42002EC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x42002EC8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x42002ECC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x42002ED0: jal         0x42000F34
    // 0x42002ED4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_3;
    // 0x42002ED4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_3:
    // 0x42002ED8: b           L_42002F08
    // 0x42002EDC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
        goto L_42002F08;
    // 0x42002EDC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
L_42002EE0:
    // 0x42002EE0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x42002EE4: bne         $a3, $at, L_42002F04
    if (ctx->r7 != ctx->r1) {
        // 0x42002EE8: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_42002F04;
    }
    // 0x42002EE8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42002EEC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002EF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42002EF4: jal         0x42000F34
    // 0x42002EF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_4;
    // 0x42002EF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x42002EFC: b           L_42002F30
    // 0x42002F00: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_42002F30;
    // 0x42002F00: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_42002F04:
    // 0x42002F04: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
L_42002F08:
    // 0x42002F08: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42002F0C: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x42002F10: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x42002F14: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x42002F18: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    // 0x42002F1C: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x42002F20: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002F24: jal         0x42000F34
    // 0x42002F28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_5;
    // 0x42002F28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
L_42002F2C:
    // 0x42002F2C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_42002F30:
    // 0x42002F30: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x42002F34: jr          $ra
    // 0x42002F38: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x42002F38: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void ovl_blast_elec_2F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002F3C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x42002F40: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x42002F44: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x42002F48: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x42002F4C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x42002F50: slt         $at, $v0, $a2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x42002F54: bne         $at, $zero, L_42003024
    if (ctx->r1 != 0) {
        // 0x42002F58: slt         $at, $a3, $v0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_42003024;
    }
    // 0x42002F58: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x42002F5C: bne         $at, $zero, L_42003028
    if (ctx->r1 != 0) {
        // 0x42002F60: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_42003028;
    }
    // 0x42002F60: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x42002F64: bne         $v0, $a2, L_4200300C
    if (ctx->r2 != ctx->r6) {
        // 0x42002F68: addiu       $a2, $zero, 0x219
        ctx->r6 = ADD32(0, 0X219);
            goto L_4200300C;
    }
    // 0x42002F68: addiu       $a2, $zero, 0x219
    ctx->r6 = ADD32(0, 0X219);
    // 0x42002F6C: jal         0x42001104
    // 0x42002F70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_1104(rdram, ctx);
        goto after_0;
    // 0x42002F70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x42002F74: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x42002F78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42002F7C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x42002F80: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x42002F84: jal         0x42000F34
    // 0x42002F88: addiu       $a3, $zero, 0x219
    ctx->r7 = ADD32(0, 0X219);
    ovl_blast_elec_F34(rdram, ctx);
        goto after_1;
    // 0x42002F88: addiu       $a3, $zero, 0x219
    ctx->r7 = ADD32(0, 0X219);
    after_1:
    // 0x42002F8C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002F90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42002F94: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x42002F98: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x42002F9C: jal         0x42000F34
    // 0x42002FA0: addiu       $a3, $zero, 0x1F3
    ctx->r7 = ADD32(0, 0X1F3);
    ovl_blast_elec_F34(rdram, ctx);
        goto after_2;
    // 0x42002FA0: addiu       $a3, $zero, 0x1F3
    ctx->r7 = ADD32(0, 0X1F3);
    after_2:
    // 0x42002FA4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002FA8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42002FAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42002FB0: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x42002FB4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42002FB8: addiu       $t7, $zero, 0x1B
    ctx->r15 = ADD32(0, 0X1B);
    // 0x42002FBC: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x42002FC0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x42002FC4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x42002FC8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x42002FCC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x42002FD0: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x42002FD4: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x42002FD8: swc1        $f11, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x42002FDC: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x42002FE0: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x42002FE4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x42002FE8: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x42002FEC: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x42002FF0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x42002FF4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x42002FF8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x42002FFC: jal         0x42000F34
    // 0x42003000: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_3;
    // 0x42003000: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_3:
    // 0x42003004: b           L_42003028
    // 0x42003008: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_42003028;
    // 0x42003008: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_4200300C:
    // 0x4200300C: bne         $v0, $a3, L_42003024
    if (ctx->r2 != ctx->r7) {
        // 0x42003010: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_42003024;
    }
    // 0x42003010: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42003014: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003018: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4200301C: jal         0x42000F34
    // 0x42003020: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_4;
    // 0x42003020: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
L_42003024:
    // 0x42003024: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_42003028:
    // 0x42003028: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x4200302C: jr          $ra
    // 0x42003030: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x42003030: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_blast_elec_3034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003034: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x42003038: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x4200303C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x42003040: slti        $at, $a1, 0x7
    ctx->r1 = SIGNED(ctx->r5) < 0X7 ? 1 : 0;
    // 0x42003044: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x42003048: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x4200304C: bne         $at, $zero, L_42003230
    if (ctx->r1 != 0) {
        // 0x42003050: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_42003230;
    }
    // 0x42003050: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x42003054: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x42003058: bne         $a1, $at, L_420030F0
    if (ctx->r5 != ctx->r1) {
        // 0x4200305C: slti        $at, $a1, 0x8
        ctx->r1 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
            goto L_420030F0;
    }
    // 0x4200305C: slti        $at, $a1, 0x8
    ctx->r1 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x42003060: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x42003064: jal         0x42001874
    // 0x42003068: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_blast_elec_1874(rdram, ctx);
        goto after_0;
    // 0x42003068: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x4200306C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x42003070: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x42003074: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x42003078: jal         0x420006C4
    // 0x4200307C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_blast_elec_6C4(rdram, ctx);
        goto after_1;
    // 0x4200307C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x42003080: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x42003084: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x42003088: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x4200308C: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x42003090: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x42003094: jal         0x420006C4
    // 0x42003098: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_blast_elec_6C4(rdram, ctx);
        goto after_2;
    // 0x42003098: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x4200309C: addiu       $t8, $zero, 0x1ED
    ctx->r24 = ADD32(0, 0X1ED);
    // 0x420030A0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x420030A4: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x420030A8: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x420030AC: jal         0x420006C4
    // 0x420030B0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_blast_elec_6C4(rdram, ctx);
        goto after_3;
    // 0x420030B0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x420030B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x420030B8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x420030BC: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x420030C0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x420030C4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x420030C8: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x420030CC: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x420030D0: jal         0x420006C4
    // 0x420030D4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_blast_elec_6C4(rdram, ctx);
        goto after_4;
    // 0x420030D4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x420030D8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x420030DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x420030E0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x420030E4: b           L_42003230
    // 0x420030E8: swc1        $f4, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f4.u32l;
        goto L_42003230;
    // 0x420030E8: swc1        $f4, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f4.u32l;
    // 0x420030EC: slti        $at, $a1, 0x8
    ctx->r1 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
L_420030F0:
    // 0x420030F0: bne         $at, $zero, L_42003178
    if (ctx->r1 != 0) {
        // 0x420030F4: slti        $at, $a1, 0xA
        ctx->r1 = SIGNED(ctx->r5) < 0XA ? 1 : 0;
            goto L_42003178;
    }
    // 0x420030F4: slti        $at, $a1, 0xA
    ctx->r1 = SIGNED(ctx->r5) < 0XA ? 1 : 0;
    // 0x420030F8: beq         $at, $zero, L_42003178
    if (ctx->r1 == 0) {
        // 0x420030FC: addiu       $a2, $sp, 0x28
        ctx->r6 = ADD32(ctx->r29, 0X28);
            goto L_42003178;
    }
    // 0x420030FC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x42003100: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x42003104: jal         0x420006C4
    // 0x42003108: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    ovl_blast_elec_6C4(rdram, ctx);
        goto after_5;
    // 0x42003108: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_5:
    // 0x4200310C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003110: lwc1        $f8, 0x4410($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4410);
    // 0x42003114: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x42003118: nop

    // 0x4200311C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x42003120: nop

    // 0x42003124: bc1f        L_42003234
    if (!c1cs) {
        // 0x42003128: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_42003234;
    }
    // 0x42003128: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4200312C: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x42003130: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x42003134: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x42003138: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    // 0x4200313C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x42003140: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x42003144: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x42003148: nop

    // 0x4200314C: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x42003150: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x42003154: jal         0x420006C4
    // 0x42003158: nop

    ovl_blast_elec_6C4(rdram, ctx);
        goto after_6;
    // 0x42003158: nop

    after_6:
    // 0x4200315C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003160: lwc1        $f6, 0x4414($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4414);
    // 0x42003164: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x42003168: nop

    // 0x4200316C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x42003170: b           L_42003230
    // 0x42003174: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
        goto L_42003230;
    // 0x42003174: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
L_42003178:
    // 0x42003178: beq         $a3, $zero, L_42003230
    if (ctx->r7 == 0) {
        // 0x4200317C: slti        $at, $a1, 0xA
        ctx->r1 = SIGNED(ctx->r5) < 0XA ? 1 : 0;
            goto L_42003230;
    }
    // 0x4200317C: slti        $at, $a1, 0xA
    ctx->r1 = SIGNED(ctx->r5) < 0XA ? 1 : 0;
    // 0x42003180: bne         $at, $zero, L_42003230
    if (ctx->r1 != 0) {
        // 0x42003184: addiu       $a1, $zero, 0x15
        ctx->r5 = ADD32(0, 0X15);
            goto L_42003230;
    }
    // 0x42003184: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x42003188: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x4200318C: jal         0x420006C4
    // 0x42003190: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_blast_elec_6C4(rdram, ctx);
        goto after_7;
    // 0x42003190: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_7:
    // 0x42003194: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x42003198: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4200319C: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x420031A0: nop

    // 0x420031A4: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x420031A8: nop

    // 0x420031AC: bc1f        L_42003200
    if (!c1cs) {
        // 0x420031B0: nop
    
            goto L_42003200;
    }
    // 0x420031B0: nop

    // 0x420031B4: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x420031B8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x420031BC: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x420031C0: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x420031C4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x420031C8: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x420031CC: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x420031D0: nop

    // 0x420031D4: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x420031D8: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x420031DC: jal         0x420006C4
    // 0x420031E0: nop

    ovl_blast_elec_6C4(rdram, ctx);
        goto after_8;
    // 0x420031E0: nop

    after_8:
    // 0x420031E4: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x420031E8: lwc1        $f10, 0x4418($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4418);
    // 0x420031EC: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x420031F0: nop

    // 0x420031F4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x420031F8: b           L_42003230
    // 0x420031FC: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
        goto L_42003230;
    // 0x420031FC: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
L_42003200:
    // 0x42003200: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42003204: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x42003208: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4200320C: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x42003210: nop

    // 0x42003214: bc1t        L_42003234
    if (c1cs) {
        // 0x42003218: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_42003234;
    }
    // 0x42003218: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4200321C: jal         0x42001208
    // 0x42003220: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_blast_elec_1208(rdram, ctx);
        goto after_9;
    // 0x42003220: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x42003224: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42003228: nop

    // 0x4200322C: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
L_42003230:
    // 0x42003230: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_42003234:
    // 0x42003234: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x42003238: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x4200323C: jr          $ra
    // 0x42003240: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x42003240: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_blast_elec_3244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003244: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x42003248: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4200324C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x42003250: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x42003254: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x42003258: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x4200325C: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x42003260: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x42003264: jal         0x420006C4
    // 0x42003268: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_blast_elec_6C4(rdram, ctx);
        goto after_0;
    // 0x42003268: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x4200326C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42003270: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x42003274: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x42003278: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x4200327C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x42003280: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x42003284: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x42003288: jal         0x420017CC
    // 0x4200328C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    ovl_blast_elec_17CC(rdram, ctx);
        goto after_1;
    // 0x4200328C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x42003290: lwc1        $f0, 0x4C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x42003294: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x42003298: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4200329C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x420032A0: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x420032A4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x420032A8: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x420032AC: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x420032B0: nop

    // 0x420032B4: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x420032B8: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x420032BC: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x420032C0: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x420032C4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x420032C8: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x420032CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420032D0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x420032D4: jr          $ra
    // 0x420032D8: nop

    return;
    // 0x420032D8: nop

;}
RECOMP_FUNC void ovl_blast_elec_32DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420032DC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x420032E0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x420032E4: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x420032E8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x420032EC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x420032F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420032F4: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x420032F8: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x420032FC: lw          $a3, 0xC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XC);
    // 0x42003300: lw          $a2, 0x44($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X44);
    // 0x42003304: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x42003308: jal         0x42003244
    // 0x4200330C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    ovl_blast_elec_3244(rdram, ctx);
        goto after_0;
    // 0x4200330C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x42003310: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x42003314: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x42003318: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x4200331C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x42003320: jal         0x42000F34
    // 0x42003324: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_1;
    // 0x42003324: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x42003328: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x4200332C: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x42003330: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x42003334: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x42003338: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x4200333C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x42003340: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42003344: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x42003348: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x4200334C: nop

    // 0x42003350: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x42003354: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x42003358: jal         0x42000F34
    // 0x4200335C: nop

    ovl_blast_elec_F34(rdram, ctx);
        goto after_2;
    // 0x4200335C: nop

    after_2:
    // 0x42003360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42003364: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x42003368: jr          $ra
    // 0x4200336C: nop

    return;
    // 0x4200336C: nop

;}
RECOMP_FUNC void ovl_blast_elec_3370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003370: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x42003374: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x42003378: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x4200337C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x42003380: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x42003384: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x42003388: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x4200338C: jal         0x42000F34
    // 0x42003390: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_0;
    // 0x42003390: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x42003394: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x42003398: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x4200339C: jal         0x42000F34
    // 0x420033A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_1;
    // 0x420033A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x420033A4: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x420033A8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x420033AC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x420033B0: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    // 0x420033B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x420033B8: jal         0x42000F34
    // 0x420033BC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_2;
    // 0x420033BC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x420033C0: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x420033C4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x420033C8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x420033CC: jal         0x42000F34
    // 0x420033D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_3;
    // 0x420033D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x420033D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x420033D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x420033DC: jr          $ra
    // 0x420033E0: nop

    return;
    // 0x420033E0: nop

;}
RECOMP_FUNC void ovl_blast_elec_33E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420033E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x420033E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x420033EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x420033F0: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x420033F4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x420033F8: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x420033FC: sltiu       $at, $v0, 0xB
    ctx->r1 = ctx->r2 < 0XB ? 1 : 0;
    // 0x42003400: beq         $at, $zero, L_42003510
    if (ctx->r1 == 0) {
        // 0x42003404: sw          $t6, 0x8($a1)
        MEM_W(0X8, ctx->r5) = ctx->r14;
            goto L_42003510;
    }
    // 0x42003404: sw          $t6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r14;
    // 0x42003408: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x4200340C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003410: addu        $at, $at, $t7
    gpr jr_addend_4200341C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x42003414: lw          $t7, 0x441C($at)
    ctx->r15 = ADD32(ctx->r1, 0X441C);
    // 0x42003418: nop

    // 0x4200341C: jr          $t7
    // 0x42003420: nop

    switch (jr_addend_4200341C >> 2) {
        case 0: goto L_42003424; break;
        case 1: goto L_4200343C; break;
        case 2: goto L_42003450; break;
        case 3: goto L_42003464; break;
        case 4: goto L_42003478; break;
        case 5: goto L_4200348C; break;
        case 6: goto L_420034A0; break;
        case 7: goto L_420034B4; break;
        case 8: goto L_420034C8; break;
        case 9: goto L_420034DC; break;
        case 10: goto L_42003508; break;
        default: switch_error(__func__, 0x4200341C, 0x4200441C);
    }
    // 0x42003420: nop

L_42003424:
    // 0x42003424: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x42003428: addiu       $a2, $zero, 0x1EE
    ctx->r6 = ADD32(0, 0X1EE);
    // 0x4200342C: jal         0x42001104
    // 0x42003430: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_1104(rdram, ctx);
        goto after_0;
    // 0x42003430: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x42003434: b           L_42003514
    // 0x42003438: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42003514;
    // 0x42003438: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4200343C:
    // 0x4200343C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x42003440: jal         0x42003370
    // 0x42003444: addiu       $a1, $zero, 0x1EF
    ctx->r5 = ADD32(0, 0X1EF);
    ovl_blast_elec_3370(rdram, ctx);
        goto after_1;
    // 0x42003444: addiu       $a1, $zero, 0x1EF
    ctx->r5 = ADD32(0, 0X1EF);
    after_1:
    // 0x42003448: b           L_42003514
    // 0x4200344C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42003514;
    // 0x4200344C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_42003450:
    // 0x42003450: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x42003454: jal         0x42003370
    // 0x42003458: addiu       $a1, $zero, 0x1F0
    ctx->r5 = ADD32(0, 0X1F0);
    ovl_blast_elec_3370(rdram, ctx);
        goto after_2;
    // 0x42003458: addiu       $a1, $zero, 0x1F0
    ctx->r5 = ADD32(0, 0X1F0);
    after_2:
    // 0x4200345C: b           L_42003514
    // 0x42003460: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42003514;
    // 0x42003460: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_42003464:
    // 0x42003464: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x42003468: jal         0x42003370
    // 0x4200346C: addiu       $a1, $zero, 0x1EF
    ctx->r5 = ADD32(0, 0X1EF);
    ovl_blast_elec_3370(rdram, ctx);
        goto after_3;
    // 0x4200346C: addiu       $a1, $zero, 0x1EF
    ctx->r5 = ADD32(0, 0X1EF);
    after_3:
    // 0x42003470: b           L_42003514
    // 0x42003474: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42003514;
    // 0x42003474: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_42003478:
    // 0x42003478: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x4200347C: jal         0x42003370
    // 0x42003480: addiu       $a1, $zero, 0x1F1
    ctx->r5 = ADD32(0, 0X1F1);
    ovl_blast_elec_3370(rdram, ctx);
        goto after_4;
    // 0x42003480: addiu       $a1, $zero, 0x1F1
    ctx->r5 = ADD32(0, 0X1F1);
    after_4:
    // 0x42003484: b           L_42003514
    // 0x42003488: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42003514;
    // 0x42003488: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4200348C:
    // 0x4200348C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x42003490: jal         0x42003370
    // 0x42003494: addiu       $a1, $zero, 0x1EF
    ctx->r5 = ADD32(0, 0X1EF);
    ovl_blast_elec_3370(rdram, ctx);
        goto after_5;
    // 0x42003494: addiu       $a1, $zero, 0x1EF
    ctx->r5 = ADD32(0, 0X1EF);
    after_5:
    // 0x42003498: b           L_42003514
    // 0x4200349C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42003514;
    // 0x4200349C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_420034A0:
    // 0x420034A0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x420034A4: jal         0x42003370
    // 0x420034A8: addiu       $a1, $zero, 0x1F0
    ctx->r5 = ADD32(0, 0X1F0);
    ovl_blast_elec_3370(rdram, ctx);
        goto after_6;
    // 0x420034A8: addiu       $a1, $zero, 0x1F0
    ctx->r5 = ADD32(0, 0X1F0);
    after_6:
    // 0x420034AC: b           L_42003514
    // 0x420034B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42003514;
    // 0x420034B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_420034B4:
    // 0x420034B4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x420034B8: jal         0x42003370
    // 0x420034BC: addiu       $a1, $zero, 0x1EF
    ctx->r5 = ADD32(0, 0X1EF);
    ovl_blast_elec_3370(rdram, ctx);
        goto after_7;
    // 0x420034BC: addiu       $a1, $zero, 0x1EF
    ctx->r5 = ADD32(0, 0X1EF);
    after_7:
    // 0x420034C0: b           L_42003514
    // 0x420034C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42003514;
    // 0x420034C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_420034C8:
    // 0x420034C8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x420034CC: jal         0x42003370
    // 0x420034D0: addiu       $a1, $zero, 0x1F1
    ctx->r5 = ADD32(0, 0X1F1);
    ovl_blast_elec_3370(rdram, ctx);
        goto after_8;
    // 0x420034D0: addiu       $a1, $zero, 0x1F1
    ctx->r5 = ADD32(0, 0X1F1);
    after_8:
    // 0x420034D4: b           L_42003514
    // 0x420034D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42003514;
    // 0x420034D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_420034DC:
    // 0x420034DC: beq         $a2, $zero, L_420034F0
    if (ctx->r6 == 0) {
        // 0x420034E0: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_420034F0;
    }
    // 0x420034E0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x420034E4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x420034E8: b           L_42003510
    // 0x420034EC: sw          $t8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r24;
        goto L_42003510;
    // 0x420034EC: sw          $t8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r24;
L_420034F0:
    // 0x420034F0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x420034F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x420034F8: jal         0x42000F34
    // 0x420034FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_9;
    // 0x420034FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x42003500: b           L_42003514
    // 0x42003504: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42003514;
    // 0x42003504: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_42003508:
    // 0x42003508: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x4200350C: sw          $t9, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r25;
L_42003510:
    // 0x42003510: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_42003514:
    // 0x42003514: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x42003518: jr          $ra
    // 0x4200351C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x4200351C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_blast_elec_3520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003520: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x42003524: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x42003528: sll         $t8, $a2, 4
    ctx->r24 = S32(ctx->r6 << 4);
    // 0x4200352C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x42003530: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x42003534: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x42003538: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x4200353C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x42003540: addu        $s0, $a1, $t8
    ctx->r16 = ADD32(ctx->r5, ctx->r24);
    // 0x42003544: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x42003548: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x4200354C: bne         $t9, $at, L_4200357C
    if (ctx->r25 != ctx->r1) {
        // 0x42003550: lui         $t3, 0x4200
        ctx->r11 = S32(0X4200 << 16);
            goto L_4200357C;
    }
    // 0x42003550: lui         $t3, 0x4200
    ctx->r11 = S32(0X4200 << 16);
    // 0x42003554: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x42003558: sll         $t5, $a3, 2
    ctx->r13 = S32(ctx->r7 << 2);
    // 0x4200355C: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x42003560: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x42003564: lw          $t3, 0x4474($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4474);
    // 0x42003568: addu        $t5, $t5, $a3
    ctx->r13 = ADD32(ctx->r13, ctx->r7);
    // 0x4200356C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x42003570: addu        $a0, $t3, $t5
    ctx->r4 = ADD32(ctx->r11, ctx->r13);
    // 0x42003574: jal         0x4200112C
    // 0x42003578: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    ovl_blast_elec_112C(rdram, ctx);
        goto after_0;
    // 0x42003578: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_0:
L_4200357C:
    // 0x4200357C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x42003580: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x42003584: jal         0x420033E4
    // 0x42003588: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_blast_elec_33E4(rdram, ctx);
        goto after_1;
    // 0x42003588: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x4200358C: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x42003590: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x42003594: slti        $at, $t7, 0xA
    ctx->r1 = SIGNED(ctx->r15) < 0XA ? 1 : 0;
    // 0x42003598: beq         $at, $zero, L_420035B0
    if (ctx->r1 == 0) {
        // 0x4200359C: nop
    
            goto L_420035B0;
    }
    // 0x4200359C: nop

    // 0x420035A0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x420035A4: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x420035A8: jal         0x420032DC
    // 0x420035AC: nop

    ovl_blast_elec_32DC(rdram, ctx);
        goto after_2;
    // 0x420035AC: nop

    after_2:
L_420035B0:
    // 0x420035B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x420035B4: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x420035B8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x420035BC: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x420035C0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x420035C4: bc1f        L_420035F4
    if (!c1cs) {
        // 0x420035C8: lui         $t0, 0x4200
        ctx->r8 = S32(0X4200 << 16);
            goto L_420035F4;
    }
    // 0x420035C8: lui         $t0, 0x4200
    ctx->r8 = S32(0X4200 << 16);
    // 0x420035CC: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x420035D0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x420035D4: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x420035D8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x420035DC: lw          $t0, 0x4474($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X4474);
    // 0x420035E0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x420035E4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x420035E8: addu        $a0, $t0, $t2
    ctx->r4 = ADD32(ctx->r8, ctx->r10);
    // 0x420035EC: jal         0x4200112C
    // 0x420035F0: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    ovl_blast_elec_112C(rdram, ctx);
        goto after_3;
    // 0x420035F0: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_3:
L_420035F4:
    // 0x420035F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x420035F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x420035FC: jr          $ra
    // 0x42003600: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x42003600: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_blast_elec_3604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003604: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x42003608: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4200360C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x42003610: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x42003614: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x42003618: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x4200361C: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x42003620: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x42003624: addiu       $t7, $t6, -0x7
    ctx->r15 = ADD32(ctx->r14, -0X7);
    // 0x42003628: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x4200362C: lw          $a0, 0x74($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X74);
    // 0x42003630: jal         0x42002C40
    // 0x42003634: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_blast_elec_2C40(rdram, ctx);
        goto after_0;
    // 0x42003634: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x42003638: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x4200363C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x42003640: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x42003644: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x42003648: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x4200364C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x42003650: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x42003654: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x42003658: swc1        $f16, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f16.u32l;
    // 0x4200365C: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    // 0x42003660: jal         0x42002C40
    // 0x42003664: nop

    ovl_blast_elec_2C40(rdram, ctx);
        goto after_1;
    // 0x42003664: nop

    after_1:
    // 0x42003668: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x4200366C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x42003670: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x42003674: lwc1        $f0, 0x40($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X40);
    // 0x42003678: nop

    // 0x4200367C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x42003680: nop

    // 0x42003684: bc1f        L_420036B4
    if (!c1cs) {
        // 0x42003688: lw          $a2, 0x4C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X4C);
            goto L_420036B4;
    }
    // 0x42003688: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x4200368C: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    // 0x42003690: jal         0x42002C40
    // 0x42003694: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_blast_elec_2C40(rdram, ctx);
        goto after_2;
    // 0x42003694: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x42003698: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x4200369C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x420036A0: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x420036A4: swc1        $f6, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->f6.u32l;
    // 0x420036A8: lwc1        $f0, 0x40($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X40);
    // 0x420036AC: nop

    // 0x420036B0: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
L_420036B4:
    // 0x420036B4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x420036B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x420036BC: jal         0x42003244
    // 0x420036C0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    ovl_blast_elec_3244(rdram, ctx);
        goto after_3;
    // 0x420036C0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_3:
    // 0x420036C4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x420036C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x420036CC: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x420036D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x420036D4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x420036D8: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    // 0x420036DC: jal         0x42000F94
    // 0x420036E0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    ovl_blast_elec_F94(rdram, ctx);
        goto after_4;
    // 0x420036E0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x420036E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x420036E8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x420036EC: jr          $ra
    // 0x420036F0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x420036F0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_blast_elec_36F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420036F4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x420036F8: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x420036FC: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x42003700: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x42003704: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x42003708: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x4200370C: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x42003710: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x42003714: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x42003718: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x4200371C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x42003720: swc1        $f29, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x42003724: swc1        $f28, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f28.u32l;
    // 0x42003728: swc1        $f27, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x4200372C: swc1        $f26, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f26.u32l;
    // 0x42003730: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x42003734: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x42003738: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x4200373C: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x42003740: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x42003744: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x42003748: lw          $s5, 0x68($a0)
    ctx->r21 = MEM_W(ctx->r4, 0X68);
    // 0x4200374C: mtc1        $a2, $f28
    ctx->f28.u32l = ctx->r6;
    // 0x42003750: slti        $at, $s5, 0x7
    ctx->r1 = SIGNED(ctx->r21) < 0X7 ? 1 : 0;
    // 0x42003754: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x42003758: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x4200375C: bne         $at, $zero, L_420037A4
    if (ctx->r1 != 0) {
        // 0x42003760: or          $s6, $a3, $zero
        ctx->r22 = ctx->r7 | 0;
            goto L_420037A4;
    }
    // 0x42003760: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x42003764: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x42003768: jal         0x42001874
    // 0x4200376C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_blast_elec_1874(rdram, ctx);
        goto after_0;
    // 0x4200376C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x42003770: lw          $t6, 0x48($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X48);
    // 0x42003774: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x42003778: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x4200377C: bne         $t7, $zero, L_420037A4
    if (ctx->r15 != 0) {
        // 0x42003780: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_420037A4;
    }
    // 0x42003780: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x42003784: sll         $t8, $s6, 2
    ctx->r24 = S32(ctx->r22 << 2);
    // 0x42003788: addu        $t8, $t8, $s6
    ctx->r24 = ADD32(ctx->r24, ctx->r22);
    // 0x4200378C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x42003790: addu        $a2, $t8, $v0
    ctx->r6 = ADD32(ctx->r24, ctx->r2);
    // 0x42003794: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x42003798: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
    // 0x4200379C: jal         0x42003604
    // 0x420037A0: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    ovl_blast_elec_3604(rdram, ctx);
        goto after_1;
    // 0x420037A0: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    after_1:
L_420037A4:
    // 0x420037A4: slti        $at, $s5, 0xA
    ctx->r1 = SIGNED(ctx->r21) < 0XA ? 1 : 0;
    // 0x420037A8: bne         $at, $zero, L_420038C0
    if (ctx->r1 != 0) {
        // 0x420037AC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_420038C0;
    }
    // 0x420037AC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x420037B0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x420037B4: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x420037B8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x420037BC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x420037C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x420037C4: lui         $s7, 0x4200
    ctx->r23 = S32(0X4200 << 16);
    // 0x420037C8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x420037CC: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x420037D0: addiu       $s7, $s7, 0x4470
    ctx->r23 = ADD32(ctx->r23, 0X4470);
    // 0x420037D4: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
    // 0x420037D8: addiu       $fp, $zero, 0x4
    ctx->r30 = ADD32(0, 0X4);
L_420037DC:
    // 0x420037DC: slt         $at, $s5, $s2
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x420037E0: bne         $at, $zero, L_420038B4
    if (ctx->r1 != 0) {
        // 0x420037E4: nop
    
            goto L_420038B4;
    }
    // 0x420037E4: nop

    // 0x420037E8: bne         $s5, $s2, L_42003848
    if (ctx->r21 != ctx->r18) {
        // 0x420037EC: sll         $t9, $s1, 4
        ctx->r25 = S32(ctx->r17 << 4);
            goto L_42003848;
    }
    // 0x420037EC: sll         $t9, $s1, 4
    ctx->r25 = S32(ctx->r17 << 4);
    // 0x420037F0: swc1        $f28, 0x44($s3)
    MEM_W(0X44, ctx->r19) = ctx->f28.u32l;
    // 0x420037F4: addu        $s0, $s3, $t9
    ctx->r16 = ADD32(ctx->r19, ctx->r25);
    // 0x420037F8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x420037FC: lw          $a0, 0x74($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X74);
    // 0x42003800: jal         0x42002C40
    // 0x42003804: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_blast_elec_2C40(rdram, ctx);
        goto after_2;
    // 0x42003804: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x42003808: addiu       $t0, $s1, 0x1
    ctx->r8 = ADD32(ctx->r17, 0X1);
    // 0x4200380C: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x42003810: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x42003814: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x42003818: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x4200381C: mul.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x42003820: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x42003824: lwc1        $f16, 0x40($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X40);
    // 0x42003828: nop

    // 0x4200382C: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x42003830: nop

    // 0x42003834: bc1f        L_42003844
    if (!c1cs) {
        // 0x42003838: nop
    
            goto L_42003844;
    }
    // 0x42003838: nop

    // 0x4200383C: b           L_42003848
    // 0x42003840: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
        goto L_42003848;
    // 0x42003840: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
L_42003844:
    // 0x42003844: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
L_42003848:
    // 0x42003848: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x4200384C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x42003850: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x42003854: jal         0x42003520
    // 0x42003858: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    ovl_blast_elec_3520(rdram, ctx);
        goto after_3;
    // 0x42003858: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    after_3:
    // 0x4200385C: bne         $s5, $s2, L_420038B4
    if (ctx->r21 != ctx->r18) {
        // 0x42003860: sll         $t1, $s1, 4
        ctx->r9 = S32(ctx->r17 << 4);
            goto L_420038B4;
    }
    // 0x42003860: sll         $t1, $s1, 4
    ctx->r9 = S32(ctx->r17 << 4);
    // 0x42003864: addu        $s0, $s3, $t1
    ctx->r16 = ADD32(ctx->r19, ctx->r9);
    // 0x42003868: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x4200386C: sll         $v0, $s6, 2
    ctx->r2 = S32(ctx->r22 << 2);
    // 0x42003870: c.eq.s      $f22, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f22.fl == ctx->f18.fl;
    // 0x42003874: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x42003878: mov.s       $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    ctx->f0.fl = ctx->f24.fl;
    // 0x4200387C: bc1f        L_42003888
    if (!c1cs) {
        // 0x42003880: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_42003888;
    }
    // 0x42003880: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x42003884: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
L_42003888:
    // 0x42003888: lw          $t2, 0x0($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X0);
    // 0x4200388C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003890: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x42003894: addu        $t4, $s7, $t3
    ctx->r12 = ADD32(ctx->r23, ctx->r11);
    // 0x42003898: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x4200389C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x420038A0: addu        $a2, $t5, $v0
    ctx->r6 = ADD32(ctx->r13, ctx->r2);
    // 0x420038A4: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
    // 0x420038A8: swc1        $f26, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f26.u32l;
    // 0x420038AC: jal         0x42001038
    // 0x420038B0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_blast_elec_1038(rdram, ctx);
        goto after_4;
    // 0x420038B0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_4:
L_420038B4:
    // 0x420038B4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x420038B8: bne         $s1, $fp, L_420037DC
    if (ctx->r17 != ctx->r30) {
        // 0x420038BC: addiu       $s2, $s2, 0x3
        ctx->r18 = ADD32(ctx->r18, 0X3);
            goto L_420037DC;
    }
    // 0x420038BC: addiu       $s2, $s2, 0x3
    ctx->r18 = ADD32(ctx->r18, 0X3);
L_420038C0:
    // 0x420038C0: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x420038C4: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x420038C8: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x420038CC: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x420038D0: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x420038D4: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x420038D8: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x420038DC: lwc1        $f27, 0x38($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x420038E0: lwc1        $f26, 0x3C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x420038E4: lwc1        $f29, 0x40($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x420038E8: lwc1        $f28, 0x44($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X44);
    // 0x420038EC: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x420038F0: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x420038F4: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x420038F8: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x420038FC: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x42003900: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x42003904: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x42003908: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x4200390C: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x42003910: jr          $ra
    // 0x42003914: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x42003914: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_blast_elec_3918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003918: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4200391C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x42003920: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x42003924: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x42003928: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x4200392C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x42003930: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x42003934: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x42003938: lw          $s0, 0x68($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X68);
    // 0x4200393C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x42003940: addiu       $a2, $s2, 0x7C
    ctx->r6 = ADD32(ctx->r18, 0X7C);
    // 0x42003944: jal         0x42002CA0
    // 0x42003948: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_blast_elec_2CA0(rdram, ctx);
        goto after_0;
    // 0x42003948: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x4200394C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x42003950: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x42003954: jal         0x42002E08
    // 0x42003958: addiu       $a2, $s2, 0x88
    ctx->r6 = ADD32(ctx->r18, 0X88);
    ovl_blast_elec_2E08(rdram, ctx);
        goto after_1;
    // 0x42003958: addiu       $a2, $s2, 0x88
    ctx->r6 = ADD32(ctx->r18, 0X88);
    after_1:
    // 0x4200395C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x42003960: addiu       $a1, $s2, 0x8C
    ctx->r5 = ADD32(ctx->r18, 0X8C);
    // 0x42003964: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x42003968: jal         0x42002F3C
    // 0x4200396C: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    ovl_blast_elec_2F3C(rdram, ctx);
        goto after_2;
    // 0x4200396C: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    after_2:
    // 0x42003970: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x42003974: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x42003978: addiu       $a2, $s2, 0x1C0
    ctx->r6 = ADD32(ctx->r18, 0X1C0);
    // 0x4200397C: jal         0x42003034
    // 0x42003980: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_blast_elec_3034(rdram, ctx);
        goto after_3;
    // 0x42003980: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x42003984: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x42003988: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x4200398C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x42003990: addiu       $s1, $s2, 0x90
    ctx->r17 = ADD32(ctx->r18, 0X90);
    // 0x42003994: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
L_42003998:
    // 0x42003998: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x4200399C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x420039A0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x420039A4: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x420039A8: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x420039AC: jal         0x4200113C
    // 0x420039B0: nop

    ovl_blast_elec_113C(rdram, ctx);
        goto after_4;
    // 0x420039B0: nop

    after_4:
    // 0x420039B4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x420039B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x420039BC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x420039C0: jal         0x420036F4
    // 0x420039C4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    ovl_blast_elec_36F4(rdram, ctx);
        goto after_5;
    // 0x420039C4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_5:
    // 0x420039C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x420039CC: bne         $s0, $s3, L_42003998
    if (ctx->r16 != ctx->r19) {
        // 0x420039D0: addiu       $s1, $s1, 0x4C
        ctx->r17 = ADD32(ctx->r17, 0X4C);
            goto L_42003998;
    }
    // 0x420039D0: addiu       $s1, $s1, 0x4C
    ctx->r17 = ADD32(ctx->r17, 0X4C);
    // 0x420039D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x420039D8: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x420039DC: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x420039E0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x420039E4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x420039E8: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x420039EC: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x420039F0: jr          $ra
    // 0x420039F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x420039F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_blast_elec_39F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420039F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x420039FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x42003A00: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x42003A04: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x42003A08: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x42003A0C: bne         $at, $zero, L_42003A94
    if (ctx->r1 != 0) {
        // 0x42003A10: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_42003A94;
    }
    // 0x42003A10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x42003A14: bne         $a1, $a2, L_42003A40
    if (ctx->r5 != ctx->r6) {
        // 0x42003A18: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_42003A40;
    }
    // 0x42003A18: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x42003A1C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x42003A20: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x42003A24: swc1        $f0, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->f0.u32l;
    // 0x42003A28: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x42003A2C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x42003A30: jal         0x42000214
    // 0x42003A34: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    ovl_blast_elec_214(rdram, ctx);
        goto after_0;
    // 0x42003A34: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_0:
    // 0x42003A38: b           L_42003A98
    // 0x42003A3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42003A98;
    // 0x42003A3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_42003A40:
    // 0x42003A40: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x42003A44: lwc1        $f0, 0xD0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x42003A48: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x42003A4C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x42003A50: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x42003A54: bc1f        L_42003A98
    if (!c1cs) {
        // 0x42003A58: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_42003A98;
    }
    // 0x42003A58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42003A5C: sub.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x42003A60: swc1        $f4, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->f4.u32l;
    // 0x42003A64: lwc1        $f0, 0xD0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x42003A68: nop

    // 0x42003A6C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x42003A70: nop

    // 0x42003A74: bc1f        L_42003A88
    if (!c1cs) {
        // 0x42003A78: nop
    
            goto L_42003A88;
    }
    // 0x42003A78: nop

    // 0x42003A7C: swc1        $f2, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->f2.u32l;
    // 0x42003A80: lwc1        $f0, 0xD0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x42003A84: nop

L_42003A88:
    // 0x42003A88: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x42003A8C: jal         0x42000214
    // 0x42003A90: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    ovl_blast_elec_214(rdram, ctx);
        goto after_1;
    // 0x42003A90: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_1:
L_42003A94:
    // 0x42003A94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_42003A98:
    // 0x42003A98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x42003A9C: jr          $ra
    // 0x42003AA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x42003AA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_blast_elec_3AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003AA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42003AA8: slti        $at, $a1, 0x14
    ctx->r1 = SIGNED(ctx->r5) < 0X14 ? 1 : 0;
    // 0x42003AAC: bne         $at, $zero, L_42003AD0
    if (ctx->r1 != 0) {
        // 0x42003AB0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_42003AD0;
    }
    // 0x42003AB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42003AB4: slti        $at, $a1, 0x23
    ctx->r1 = SIGNED(ctx->r5) < 0X23 ? 1 : 0;
    // 0x42003AB8: beq         $at, $zero, L_42003AD0
    if (ctx->r1 == 0) {
        // 0x42003ABC: addiu       $a2, $zero, 0x14
        ctx->r6 = ADD32(0, 0X14);
            goto L_42003AD0;
    }
    // 0x42003ABC: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x42003AC0: jal         0x420039F8
    // 0x42003AC4: lui         $a3, 0x42B4
    ctx->r7 = S32(0X42B4 << 16);
    ovl_blast_elec_39F8(rdram, ctx);
        goto after_0;
    // 0x42003AC4: lui         $a3, 0x42B4
    ctx->r7 = S32(0X42B4 << 16);
    after_0:
    // 0x42003AC8: b           L_42003B30
    // 0x42003ACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42003B30;
    // 0x42003ACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42003AD0:
    // 0x42003AD0: slti        $at, $a1, 0x23
    ctx->r1 = SIGNED(ctx->r5) < 0X23 ? 1 : 0;
    // 0x42003AD4: bne         $at, $zero, L_42003AF4
    if (ctx->r1 != 0) {
        // 0x42003AD8: slti        $at, $a1, 0x32
        ctx->r1 = SIGNED(ctx->r5) < 0X32 ? 1 : 0;
            goto L_42003AF4;
    }
    // 0x42003AD8: slti        $at, $a1, 0x32
    ctx->r1 = SIGNED(ctx->r5) < 0X32 ? 1 : 0;
    // 0x42003ADC: beq         $at, $zero, L_42003AF4
    if (ctx->r1 == 0) {
        // 0x42003AE0: addiu       $a2, $zero, 0x23
        ctx->r6 = ADD32(0, 0X23);
            goto L_42003AF4;
    }
    // 0x42003AE0: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x42003AE4: jal         0x420039F8
    // 0x42003AE8: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    ovl_blast_elec_39F8(rdram, ctx);
        goto after_1;
    // 0x42003AE8: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    after_1:
    // 0x42003AEC: b           L_42003B30
    // 0x42003AF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42003B30;
    // 0x42003AF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42003AF4:
    // 0x42003AF4: slti        $at, $a1, 0x32
    ctx->r1 = SIGNED(ctx->r5) < 0X32 ? 1 : 0;
    // 0x42003AF8: bne         $at, $zero, L_42003B18
    if (ctx->r1 != 0) {
        // 0x42003AFC: slti        $at, $a1, 0x46
        ctx->r1 = SIGNED(ctx->r5) < 0X46 ? 1 : 0;
            goto L_42003B18;
    }
    // 0x42003AFC: slti        $at, $a1, 0x46
    ctx->r1 = SIGNED(ctx->r5) < 0X46 ? 1 : 0;
    // 0x42003B00: beq         $at, $zero, L_42003B18
    if (ctx->r1 == 0) {
        // 0x42003B04: addiu       $a2, $zero, 0x32
        ctx->r6 = ADD32(0, 0X32);
            goto L_42003B18;
    }
    // 0x42003B04: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x42003B08: jal         0x420039F8
    // 0x42003B0C: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    ovl_blast_elec_39F8(rdram, ctx);
        goto after_2;
    // 0x42003B0C: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    after_2:
    // 0x42003B10: b           L_42003B30
    // 0x42003B14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42003B30;
    // 0x42003B14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42003B18:
    // 0x42003B18: slti        $at, $a1, 0x46
    ctx->r1 = SIGNED(ctx->r5) < 0X46 ? 1 : 0;
    // 0x42003B1C: bne         $at, $zero, L_42003B2C
    if (ctx->r1 != 0) {
        // 0x42003B20: addiu       $a2, $zero, 0x46
        ctx->r6 = ADD32(0, 0X46);
            goto L_42003B2C;
    }
    // 0x42003B20: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    // 0x42003B24: jal         0x420039F8
    // 0x42003B28: lui         $a3, 0x42B4
    ctx->r7 = S32(0X42B4 << 16);
    ovl_blast_elec_39F8(rdram, ctx);
        goto after_3;
    // 0x42003B28: lui         $a3, 0x42B4
    ctx->r7 = S32(0X42B4 << 16);
    after_3:
L_42003B2C:
    // 0x42003B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42003B30:
    // 0x42003B30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42003B34: jr          $ra
    // 0x42003B38: nop

    return;
    // 0x42003B38: nop

;}
RECOMP_FUNC void ovl_blast_elec_3B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003B3C: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x42003B40: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x42003B44: slti        $at, $a1, 0x7
    ctx->r1 = SIGNED(ctx->r5) < 0X7 ? 1 : 0;
    // 0x42003B48: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x42003B4C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x42003B50: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x42003B54: bne         $at, $zero, L_42003D94
    if (ctx->r1 != 0) {
        // 0x42003B58: sw          $a2, 0xB8($sp)
        MEM_W(0XB8, ctx->r29) = ctx->r6;
            goto L_42003D94;
    }
    // 0x42003B58: sw          $a2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r6;
    // 0x42003B5C: slti        $at, $a1, 0x46
    ctx->r1 = SIGNED(ctx->r5) < 0X46 ? 1 : 0;
    // 0x42003B60: beq         $at, $zero, L_42003D94
    if (ctx->r1 == 0) {
        // 0x42003B64: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_42003D94;
    }
    // 0x42003B64: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x42003B68: bne         $a1, $at, L_42003C0C
    if (ctx->r5 != ctx->r1) {
        // 0x42003B6C: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_42003C0C;
    }
    // 0x42003B6C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42003B70: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x42003B74: jal         0x42001104
    // 0x42003B78: addiu       $a2, $zero, 0x218
    ctx->r6 = ADD32(0, 0X218);
    ovl_blast_elec_1104(rdram, ctx);
        goto after_0;
    // 0x42003B78: addiu       $a2, $zero, 0x218
    ctx->r6 = ADD32(0, 0X218);
    after_0:
    // 0x42003B7C: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
    // 0x42003B80: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x42003B84: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x42003B88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42003B8C: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    // 0x42003B90: jal         0x42000F34
    // 0x42003B94: addiu       $a3, $zero, 0x218
    ctx->r7 = ADD32(0, 0X218);
    ovl_blast_elec_F34(rdram, ctx);
        goto after_1;
    // 0x42003B94: addiu       $a3, $zero, 0x218
    ctx->r7 = ADD32(0, 0X218);
    after_1:
    // 0x42003B98: lw          $t8, 0xB8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB8);
    // 0x42003B9C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42003BA0: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x42003BA4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42003BA8: lw          $a2, 0xAC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XAC);
    // 0x42003BAC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42003BB0: addiu       $t0, $zero, 0x1B
    ctx->r8 = ADD32(0, 0X1B);
    // 0x42003BB4: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
    // 0x42003BB8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x42003BBC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x42003BC0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x42003BC4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x42003BC8: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x42003BCC: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x42003BD0: swc1        $f11, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x42003BD4: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x42003BD8: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x42003BDC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x42003BE0: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x42003BE4: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x42003BE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x42003BEC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x42003BF0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x42003BF4: jal         0x42000F34
    // 0x42003BF8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_2;
    // 0x42003BF8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_2:
    // 0x42003BFC: lw          $t3, 0x5C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5C);
    // 0x42003C00: nop

    // 0x42003C04: ori         $t4, $t3, 0x2000
    ctx->r12 = ctx->r11 | 0X2000;
    // 0x42003C08: sw          $t4, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r12;
L_42003C0C:
    // 0x42003C0C: lw          $t5, 0xB8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB8);
    // 0x42003C10: lui         $at, 0x43A5
    ctx->r1 = S32(0X43A5 << 16);
    // 0x42003C14: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42003C18: lwc1        $f16, 0x4($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X4);
    // 0x42003C1C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x42003C20: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x42003C24: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    // 0x42003C28: bc1f        L_42003C74
    if (!c1cs) {
        // 0x42003C2C: nop
    
            goto L_42003C74;
    }
    // 0x42003C2C: nop

    // 0x42003C30: lw          $a1, 0x0($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X0);
    // 0x42003C34: jal         0x42000F34
    // 0x42003C38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_3;
    // 0x42003C38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x42003C3C: lui         $at, 0x4204
    ctx->r1 = S32(0X4204 << 16);
    // 0x42003C40: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x42003C44: lwc1        $f4, 0xA4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x42003C48: lw          $v0, 0xB8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB8);
    // 0x42003C4C: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x42003C50: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x42003C54: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    // 0x42003C58: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x42003C5C: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x42003C60: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x42003C64: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    // 0x42003C68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42003C6C: jal         0x42000F34
    // 0x42003C70: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_4;
    // 0x42003C70: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    after_4:
L_42003C74:
    // 0x42003C74: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003C78: jal         0x42001874
    // 0x42003C7C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_blast_elec_1874(rdram, ctx);
        goto after_5;
    // 0x42003C7C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_5:
    // 0x42003C80: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    // 0x42003C84: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003C88: jal         0x42001874
    // 0x42003C8C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_blast_elec_1874(rdram, ctx);
        goto after_6;
    // 0x42003C8C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_6:
    // 0x42003C90: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x42003C94: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x42003C98: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003C9C: lwc1        $f18, 0x4448($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4448);
    // 0x42003CA0: lwc1        $f16, 0xCC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XCC);
    // 0x42003CA4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x42003CA8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x42003CAC: swc1        $f4, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->f4.u32l;
    // 0x42003CB0: lwc1        $f6, 0xCC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XCC);
    // 0x42003CB4: nop

    // 0x42003CB8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x42003CBC: nop

    // 0x42003CC0: bc1f        L_42003CCC
    if (!c1cs) {
        // 0x42003CC4: nop
    
            goto L_42003CCC;
    }
    // 0x42003CC4: nop

    // 0x42003CC8: swc1        $f0, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->f0.u32l;
L_42003CCC:
    // 0x42003CCC: jal         0x42000340
    // 0x42003CD0: sw          $v1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r3;
    ovl_blast_elec_340(rdram, ctx);
        goto after_7;
    // 0x42003CD0: sw          $v1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r3;
    after_7:
    // 0x42003CD4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x42003CD8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x42003CDC: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003CE0: lwc1        $f10, 0x444C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X444C);
    // 0x42003CE4: cvt.s.d     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f8.fl = CVT_S_D(ctx->f0.d);
    // 0x42003CE8: lwc1        $f18, 0xCC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XCC);
    // 0x42003CEC: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x42003CF0: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x42003CF4: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x42003CF8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x42003CFC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x42003D00: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    // 0x42003D04: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    // 0x42003D08: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    // 0x42003D0C: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x42003D10: lwc1        $f6, 0xCC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XCC);
    // 0x42003D14: nop

    // 0x42003D18: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x42003D1C: swc1        $f8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f8.u32l;
    // 0x42003D20: lwc1        $f10, 0xCC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XCC);
    // 0x42003D24: nop

    // 0x42003D28: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x42003D2C: swc1        $f16, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f16.u32l;
    // 0x42003D30: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x42003D34: jal         0x420006C4
    // 0x42003D38: nop

    ovl_blast_elec_6C4(rdram, ctx);
        goto after_8;
    // 0x42003D38: nop

    after_8:
    // 0x42003D3C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x42003D40: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x42003D44: jal         0x420006C4
    // 0x42003D48: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    ovl_blast_elec_6C4(rdram, ctx);
        goto after_9;
    // 0x42003D48: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    after_9:
    // 0x42003D4C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x42003D50: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x42003D54: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x42003D58: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
    // 0x42003D5C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42003D60: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x42003D64: add.s       $f0, $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x42003D68: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x42003D6C: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x42003D70: bc1f        L_42003D80
    if (!c1cs) {
        // 0x42003D74: nop
    
            goto L_42003D80;
    }
    // 0x42003D74: nop

    // 0x42003D78: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x42003D7C: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
L_42003D80:
    // 0x42003D80: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x42003D84: jal         0x420006C4
    // 0x42003D88: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    ovl_blast_elec_6C4(rdram, ctx);
        goto after_10;
    // 0x42003D88: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    after_10:
    // 0x42003D8C: b           L_42003DBC
    // 0x42003D90: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
        goto L_42003DBC;
    // 0x42003D90: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
L_42003D94:
    // 0x42003D94: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x42003D98: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
    // 0x42003D9C: bne         $t7, $at, L_42003DB8
    if (ctx->r15 != ctx->r1) {
        // 0x42003DA0: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_42003DB8;
    }
    // 0x42003DA0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42003DA4: lw          $t8, 0xB8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB8);
    // 0x42003DA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42003DAC: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x42003DB0: jal         0x42000F34
    // 0x42003DB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_11;
    // 0x42003DB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
L_42003DB8:
    // 0x42003DB8: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
L_42003DBC:
    // 0x42003DBC: nop

    // 0x42003DC0: slti        $at, $t0, 0x48
    ctx->r1 = SIGNED(ctx->r8) < 0X48 ? 1 : 0;
    // 0x42003DC4: bne         $at, $zero, L_42003ED4
    if (ctx->r1 != 0) {
        // 0x42003DC8: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_42003ED4;
    }
    // 0x42003DC8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x42003DCC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003DD0: jal         0x42001874
    // 0x42003DD4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_blast_elec_1874(rdram, ctx);
        goto after_12;
    // 0x42003DD4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_12:
    // 0x42003DD8: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x42003DDC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003DE0: jal         0x42001874
    // 0x42003DE4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_blast_elec_1874(rdram, ctx);
        goto after_13;
    // 0x42003DE4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_13:
    // 0x42003DE8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x42003DEC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42003DF0: lwc1        $f4, 0xD4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XD4);
    // 0x42003DF4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x42003DF8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x42003DFC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x42003E00: swc1        $f8, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f8.u32l;
    // 0x42003E04: lwc1        $f0, 0xD4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XD4);
    // 0x42003E08: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x42003E0C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x42003E10: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x42003E14: bc1f        L_42003E28
    if (!c1cs) {
        // 0x42003E18: addiu       $a2, $sp, 0x68
        ctx->r6 = ADD32(ctx->r29, 0X68);
            goto L_42003E28;
    }
    // 0x42003E18: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x42003E1C: swc1        $f2, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->f2.u32l;
    // 0x42003E20: lwc1        $f0, 0xD4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XD4);
    // 0x42003E24: nop

L_42003E28:
    // 0x42003E28: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x42003E2C: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
    // 0x42003E30: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x42003E34: jal         0x420006C4
    // 0x42003E38: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    ovl_blast_elec_6C4(rdram, ctx);
        goto after_14;
    // 0x42003E38: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    after_14:
    // 0x42003E3C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003E40: lwc1        $f16, 0x4450($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4450);
    // 0x42003E44: lwc1        $f10, 0xCC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XCC);
    // 0x42003E48: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x42003E4C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x42003E50: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42003E54: swc1        $f18, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->f18.u32l;
    // 0x42003E58: lwc1        $f0, 0xCC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XCC);
    // 0x42003E5C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x42003E60: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x42003E64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42003E68: bc1f        L_42003E84
    if (!c1cs) {
        // 0x42003E6C: nop
    
            goto L_42003E84;
    }
    // 0x42003E6C: nop

    // 0x42003E70: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x42003E74: nop

    // 0x42003E78: swc1        $f6, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->f6.u32l;
    // 0x42003E7C: lwc1        $f0, 0xCC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XCC);
    // 0x42003E80: nop

L_42003E84:
    // 0x42003E84: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x42003E88: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x42003E8C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42003E90: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x42003E94: swc1        $f10, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f10.u32l;
    // 0x42003E98: lwc1        $f16, 0xCC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XCC);
    // 0x42003E9C: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x42003EA0: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x42003EA4: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x42003EA8: lwc1        $f6, 0xCC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XCC);
    // 0x42003EAC: nop

    // 0x42003EB0: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x42003EB4: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x42003EB8: nop

    // 0x42003EBC: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x42003EC0: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x42003EC4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x42003EC8: jal         0x420006C4
    // 0x42003ECC: nop

    ovl_blast_elec_6C4(rdram, ctx);
        goto after_15;
    // 0x42003ECC: nop

    after_15:
    // 0x42003ED0: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_42003ED4:
    // 0x42003ED4: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x42003ED8: jr          $ra
    // 0x42003EDC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x42003EDC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void ovl_blast_elec_3EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003EE0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x42003EE4: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x42003EE8: slti        $at, $a1, 0x7
    ctx->r1 = SIGNED(ctx->r5) < 0X7 ? 1 : 0;
    // 0x42003EEC: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x42003EF0: bne         $at, $zero, L_42003FCC
    if (ctx->r1 != 0) {
        // 0x42003EF4: sw          $ra, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r31;
            goto L_42003FCC;
    }
    // 0x42003EF4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x42003EF8: slti        $at, $a1, 0x46
    ctx->r1 = SIGNED(ctx->r5) < 0X46 ? 1 : 0;
    // 0x42003EFC: beq         $at, $zero, L_42003FCC
    if (ctx->r1 == 0) {
        // 0x42003F00: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_42003FCC;
    }
    // 0x42003F00: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x42003F04: bne         $a1, $at, L_42003FFC
    if (ctx->r5 != ctx->r1) {
        // 0x42003F08: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_42003FFC;
    }
    // 0x42003F08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42003F0C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x42003F10: jal         0x42001104
    // 0x42003F14: addiu       $a2, $zero, 0x1F2
    ctx->r6 = ADD32(0, 0X1F2);
    ovl_blast_elec_1104(rdram, ctx);
        goto after_0;
    // 0x42003F14: addiu       $a2, $zero, 0x1F2
    ctx->r6 = ADD32(0, 0X1F2);
    after_0:
    // 0x42003F18: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x42003F1C: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x42003F20: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x42003F24: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42003F28: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x42003F2C: jal         0x42000F34
    // 0x42003F30: addiu       $a3, $zero, 0x1F2
    ctx->r7 = ADD32(0, 0X1F2);
    ovl_blast_elec_F34(rdram, ctx);
        goto after_1;
    // 0x42003F30: addiu       $a3, $zero, 0x1F2
    ctx->r7 = ADD32(0, 0X1F2);
    after_1:
    // 0x42003F34: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003F38: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x42003F3C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42003F40: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x42003F44: jal         0x42000F34
    // 0x42003F48: addiu       $a3, $zero, 0x1F3
    ctx->r7 = ADD32(0, 0X1F3);
    ovl_blast_elec_F34(rdram, ctx);
        goto after_2;
    // 0x42003F48: addiu       $a3, $zero, 0x1F3
    ctx->r7 = ADD32(0, 0X1F3);
    after_2:
    // 0x42003F4C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003F50: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x42003F54: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42003F58: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42003F5C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42003F60: addiu       $t6, $zero, 0x1B
    ctx->r14 = ADD32(0, 0X1B);
    // 0x42003F64: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x42003F68: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x42003F6C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x42003F70: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x42003F74: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x42003F78: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x42003F7C: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x42003F80: swc1        $f11, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x42003F84: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x42003F88: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x42003F8C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x42003F90: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x42003F94: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x42003F98: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x42003F9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x42003FA0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x42003FA4: jal         0x42000F34
    // 0x42003FA8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_3;
    // 0x42003FA8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_3:
    // 0x42003FAC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003FB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42003FB4: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x42003FB8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x42003FBC: jal         0x42000F34
    // 0x42003FC0: addiu       $a3, $zero, 0x96
    ctx->r7 = ADD32(0, 0X96);
    ovl_blast_elec_F34(rdram, ctx);
        goto after_4;
    // 0x42003FC0: addiu       $a3, $zero, 0x96
    ctx->r7 = ADD32(0, 0X96);
    after_4:
    // 0x42003FC4: b           L_42004000
    // 0x42003FC8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_42004000;
    // 0x42003FC8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_42003FCC:
    // 0x42003FCC: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
    // 0x42003FD0: bne         $a1, $at, L_42003FFC
    if (ctx->r5 != ctx->r1) {
        // 0x42003FD4: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_42003FFC;
    }
    // 0x42003FD4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x42003FD8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003FDC: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x42003FE0: jal         0x42000F34
    // 0x42003FE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_5;
    // 0x42003FE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x42003FE8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003FEC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42003FF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42003FF4: jal         0x42000F34
    // 0x42003FF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_6;
    // 0x42003FF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
L_42003FFC:
    // 0x42003FFC: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_42004000:
    // 0x42004000: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x42004004: jr          $ra
    // 0x42004008: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x42004008: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_blast_elec_400C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200400C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x42004010: slti        $at, $a1, 0x7
    ctx->r1 = SIGNED(ctx->r5) < 0X7 ? 1 : 0;
    // 0x42004014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42004018: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x4200401C: bne         $at, $zero, L_420040DC
    if (ctx->r1 != 0) {
        // 0x42004020: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_420040DC;
    }
    // 0x42004020: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x42004024: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x42004028: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x4200402C: jal         0x420033E4
    // 0x42004030: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    ovl_blast_elec_33E4(rdram, ctx);
        goto after_0;
    // 0x42004030: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_0:
    // 0x42004034: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x42004038: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x4200403C: bne         $a3, $at, L_420040DC
    if (ctx->r7 != ctx->r1) {
        // 0x42004040: addiu       $a0, $zero, 0x14
        ctx->r4 = ADD32(0, 0X14);
            goto L_420040DC;
    }
    // 0x42004040: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x42004044: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x42004048: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x4200404C: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x42004050: jal         0x42000F34
    // 0x42004054: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_F34(rdram, ctx);
        goto after_1;
    // 0x42004054: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x42004058: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x4200405C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42004060: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x42004064: nop

    // 0x42004068: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4200406C: jal         0x42000340
    // 0x42004070: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    ovl_blast_elec_340(rdram, ctx);
        goto after_2;
    // 0x42004070: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x42004074: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x42004078: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x4200407C: cvt.s.d     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f10.fl = CVT_S_D(ctx->f0.d);
    // 0x42004080: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x42004084: mul.s       $f2, $f10, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x42004088: add.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x4200408C: sub.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x42004090: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x42004094: jal         0x42000340
    // 0x42004098: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    ovl_blast_elec_340(rdram, ctx);
        goto after_3;
    // 0x42004098: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x4200409C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x420040A0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x420040A4: cvt.s.d     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f8.fl = CVT_S_D(ctx->f0.d);
    // 0x420040A8: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x420040AC: mul.s       $f2, $f8, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x420040B0: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x420040B4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x420040B8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x420040BC: add.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x420040C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x420040C4: sub.s       $f16, $f18, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x420040C8: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x420040CC: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x420040D0: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x420040D4: jal         0x42000F34
    // 0x420040D8: nop

    ovl_blast_elec_F34(rdram, ctx);
        goto after_4;
    // 0x420040D8: nop

    after_4:
L_420040DC:
    // 0x420040DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420040E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x420040E4: jr          $ra
    // 0x420040E8: nop

    return;
    // 0x420040E8: nop

;}
RECOMP_FUNC void ovl_blast_elec_40EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420040EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x420040F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x420040F4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x420040F8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x420040FC: lw          $s1, 0x68($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X68);
    // 0x42004100: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x42004104: addiu       $a2, $s0, 0x7C
    ctx->r6 = ADD32(ctx->r16, 0X7C);
    // 0x42004108: jal         0x42002CA0
    // 0x4200410C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_blast_elec_2CA0(rdram, ctx);
        goto after_0;
    // 0x4200410C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x42004110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42004114: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x42004118: jal         0x42002E08
    // 0x4200411C: addiu       $a2, $s0, 0x88
    ctx->r6 = ADD32(ctx->r16, 0X88);
    ovl_blast_elec_2E08(rdram, ctx);
        goto after_1;
    // 0x4200411C: addiu       $a2, $s0, 0x88
    ctx->r6 = ADD32(ctx->r16, 0X88);
    after_1:
    // 0x42004120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42004124: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x42004128: addiu       $a2, $s0, 0xCC
    ctx->r6 = ADD32(ctx->r16, 0XCC);
    // 0x4200412C: jal         0x42003034
    // 0x42004130: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_elec_3034(rdram, ctx);
        goto after_2;
    // 0x42004130: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x42004134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42004138: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x4200413C: jal         0x42003B3C
    // 0x42004140: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    ovl_blast_elec_3B3C(rdram, ctx);
        goto after_3;
    // 0x42004140: addiu       $a2, $s0, 0x8C
    ctx->r6 = ADD32(ctx->r16, 0X8C);
    after_3:
    // 0x42004144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42004148: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x4200414C: jal         0x42003EE0
    // 0x42004150: addiu       $a2, $s0, 0x94
    ctx->r6 = ADD32(ctx->r16, 0X94);
    ovl_blast_elec_3EE0(rdram, ctx);
        goto after_4;
    // 0x42004150: addiu       $a2, $s0, 0x94
    ctx->r6 = ADD32(ctx->r16, 0X94);
    after_4:
    // 0x42004154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42004158: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x4200415C: jal         0x4200400C
    // 0x42004160: addiu       $a2, $s0, 0x9C
    ctx->r6 = ADD32(ctx->r16, 0X9C);
    ovl_blast_elec_400C(rdram, ctx);
        goto after_5;
    // 0x42004160: addiu       $a2, $s0, 0x9C
    ctx->r6 = ADD32(ctx->r16, 0X9C);
    after_5:
    // 0x42004164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42004168: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x4200416C: jal         0x4200400C
    // 0x42004170: addiu       $a2, $s0, 0xAC
    ctx->r6 = ADD32(ctx->r16, 0XAC);
    ovl_blast_elec_400C(rdram, ctx);
        goto after_6;
    // 0x42004170: addiu       $a2, $s0, 0xAC
    ctx->r6 = ADD32(ctx->r16, 0XAC);
    after_6:
    // 0x42004174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42004178: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x4200417C: jal         0x4200400C
    // 0x42004180: addiu       $a2, $s0, 0xBC
    ctx->r6 = ADD32(ctx->r16, 0XBC);
    ovl_blast_elec_400C(rdram, ctx);
        goto after_7;
    // 0x42004180: addiu       $a2, $s0, 0xBC
    ctx->r6 = ADD32(ctx->r16, 0XBC);
    after_7:
    // 0x42004184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42004188: jal         0x42003AA4
    // 0x4200418C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_blast_elec_3AA4(rdram, ctx);
        goto after_8;
    // 0x4200418C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_8:
    // 0x42004190: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x42004194: bne         $s1, $at, L_420041A4
    if (ctx->r17 != ctx->r1) {
        // 0x42004198: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_420041A4;
    }
    // 0x42004198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4200419C: jal         0x4200148C
    // 0x420041A0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    ovl_blast_elec_148C(rdram, ctx);
        goto after_9;
    // 0x420041A0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_9:
L_420041A4:
    // 0x420041A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x420041A8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x420041AC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x420041B0: jr          $ra
    // 0x420041B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x420041B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_blast_flame_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000000: lui         $v0, 0x4200
    ctx->r2 = S32(0X4200 << 16);
    // 0x42000004: jr          $ra
    // 0x42000008: addiu       $v0, $v0, 0x2CFC
    ctx->r2 = ADD32(ctx->r2, 0X2CFC);
    return;
    // 0x42000008: addiu       $v0, $v0, 0x2CFC
    ctx->r2 = ADD32(ctx->r2, 0X2CFC);
    // 0x4200000C: nop

;}
RECOMP_FUNC void ovl_blast_flame_10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_flame_1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_flame_28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_flame_34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_flame_40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_flame_4C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_flame_58(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_flame_64(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_flame_70(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_flame_7C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_flame_88(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_flame_94(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_flame_A0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_flame_AC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_flame_B8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_flame_C4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_flame_D0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_flame_DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420000DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420000E0: jr          $t1
    // 0x420000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
;}
RECOMP_FUNC void ovl_blast_flame_E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420000E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420000EC: jr          $t1
    // 0x420000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
;}
