#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_blast_dark_27E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420027E0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x420027E4: jr          $ra
    // 0x420027E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x420027E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_blast_dark_27EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420027EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420027F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420027F4: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x420027F8: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x420027FC: bne         $t6, $at, L_42002820
    if (ctx->r14 != ctx->r1) {
        // 0x42002800: nop
    
            goto L_42002820;
    }
    // 0x42002800: nop

    // 0x42002804: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x42002808: nop

    // 0x4200280C: slti        $at, $t7, 0xF5
    ctx->r1 = SIGNED(ctx->r15) < 0XF5 ? 1 : 0;
    // 0x42002810: bne         $at, $zero, L_42002820
    if (ctx->r1 != 0) {
        // 0x42002814: nop
    
            goto L_42002820;
    }
    // 0x42002814: nop

    // 0x42002818: b           L_42002828
    // 0x4200281C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_42002828;
    // 0x4200281C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_42002820:
    // 0x42002820: jal         0x420036F8
    // 0x42002824: nop

    ovl_blast_dark_36F8(rdram, ctx);
        goto after_0;
    // 0x42002824: nop

    after_0:
L_42002828:
    // 0x42002828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4200282C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002830: jr          $ra
    // 0x42002834: nop

    return;
    // 0x42002834: nop

;}
RECOMP_FUNC void ovl_blast_dark_2838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002838: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x4200283C: jr          $ra
    // 0x42002840: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x42002840: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_blast_dark_2844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002844: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x42002848: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4200284C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x42002850: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x42002854: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x42002858: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x4200285C: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x42002860: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x42002864: bne         $t6, $at, L_420028C4
    if (ctx->r14 != ctx->r1) {
        // 0x42002868: or          $s3, $a0, $zero
        ctx->r19 = ctx->r4 | 0;
            goto L_420028C4;
    }
    // 0x42002868: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x4200286C: jal         0x42000F50
    // 0x42002870: addiu       $a0, $a0, 0x7C
    ctx->r4 = ADD32(ctx->r4, 0X7C);
    ovl_blast_dark_F50(rdram, ctx);
        goto after_0;
    // 0x42002870: addiu       $a0, $a0, 0x7C
    ctx->r4 = ADD32(ctx->r4, 0X7C);
    after_0:
    // 0x42002874: jal         0x42000F50
    // 0x42002878: addiu       $a0, $s3, 0x84
    ctx->r4 = ADD32(ctx->r19, 0X84);
    ovl_blast_dark_F50(rdram, ctx);
        goto after_1;
    // 0x42002878: addiu       $a0, $s3, 0x84
    ctx->r4 = ADD32(ctx->r19, 0X84);
    after_1:
    // 0x4200287C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x42002880: addiu       $s1, $s3, 0x88
    ctx->r17 = ADD32(ctx->r19, 0X88);
L_42002884:
    // 0x42002884: jal         0x42000F50
    // 0x42002888: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_dark_F50(rdram, ctx);
        goto after_2;
    // 0x42002888: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x4200288C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x42002890: slti        $at, $s0, 0x20
    ctx->r1 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x42002894: bne         $at, $zero, L_42002884
    if (ctx->r1 != 0) {
        // 0x42002898: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_42002884;
    }
    // 0x42002898: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x4200289C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x420028A0: addiu       $s1, $s3, 0xA8
    ctx->r17 = ADD32(ctx->r19, 0XA8);
    // 0x420028A4: addiu       $s2, $zero, 0x48
    ctx->r18 = ADD32(0, 0X48);
L_420028A8:
    // 0x420028A8: jal         0x42000F50
    // 0x420028AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_dark_F50(rdram, ctx);
        goto after_3;
    // 0x420028AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x420028B0: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x420028B4: bne         $s0, $s2, L_420028A8
    if (ctx->r16 != ctx->r18) {
        // 0x420028B8: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_420028A8;
    }
    // 0x420028B8: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x420028BC: b           L_42002910
    // 0x420028C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_42002910;
    // 0x420028C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_420028C4:
    // 0x420028C4: jal         0x42000F50
    // 0x420028C8: addiu       $a0, $s3, 0x7C
    ctx->r4 = ADD32(ctx->r19, 0X7C);
    ovl_blast_dark_F50(rdram, ctx);
        goto after_4;
    // 0x420028C8: addiu       $a0, $s3, 0x7C
    ctx->r4 = ADD32(ctx->r19, 0X7C);
    after_4:
    // 0x420028CC: jal         0x42000F50
    // 0x420028D0: addiu       $a0, $s3, 0x88
    ctx->r4 = ADD32(ctx->r19, 0X88);
    ovl_blast_dark_F50(rdram, ctx);
        goto after_5;
    // 0x420028D0: addiu       $a0, $s3, 0x88
    ctx->r4 = ADD32(ctx->r19, 0X88);
    after_5:
    // 0x420028D4: jal         0x42000F50
    // 0x420028D8: addiu       $a0, $s3, 0x8C
    ctx->r4 = ADD32(ctx->r19, 0X8C);
    ovl_blast_dark_F50(rdram, ctx);
        goto after_6;
    // 0x420028D8: addiu       $a0, $s3, 0x8C
    ctx->r4 = ADD32(ctx->r19, 0X8C);
    after_6:
    // 0x420028DC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x420028E0: addiu       $s1, $s3, 0xA4
    ctx->r17 = ADD32(ctx->r19, 0XA4);
    // 0x420028E4: addiu       $s2, $zero, 0x3C
    ctx->r18 = ADD32(0, 0X3C);
L_420028E8:
    // 0x420028E8: jal         0x42000F50
    // 0x420028EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_dark_F50(rdram, ctx);
        goto after_7;
    // 0x420028EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x420028F0: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x420028F4: bne         $s0, $s2, L_420028E8
    if (ctx->r16 != ctx->r18) {
        // 0x420028F8: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_420028E8;
    }
    // 0x420028F8: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x420028FC: jal         0x42000F50
    // 0x42002900: addiu       $a0, $s3, 0x98
    ctx->r4 = ADD32(ctx->r19, 0X98);
    ovl_blast_dark_F50(rdram, ctx);
        goto after_8;
    // 0x42002900: addiu       $a0, $s3, 0x98
    ctx->r4 = ADD32(ctx->r19, 0X98);
    after_8:
    // 0x42002904: jal         0x42000F50
    // 0x42002908: addiu       $a0, $s3, 0x9C
    ctx->r4 = ADD32(ctx->r19, 0X9C);
    ovl_blast_dark_F50(rdram, ctx);
        goto after_9;
    // 0x42002908: addiu       $a0, $s3, 0x9C
    ctx->r4 = ADD32(ctx->r19, 0X9C);
    after_9:
    // 0x4200290C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_42002910:
    // 0x42002910: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x42002914: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x42002918: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x4200291C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x42002920: jr          $ra
    // 0x42002924: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x42002924: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_blast_dark_2928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002928: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4200292C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002930: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x42002934: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x42002938: bne         $t6, $at, L_4200295C
    if (ctx->r14 != ctx->r1) {
        // 0x4200293C: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_4200295C;
    }
    // 0x4200293C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x42002940: lw          $a0, 0x74($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X74);
    // 0x42002944: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x42002948: jal         0x420036D0
    // 0x4200294C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_blast_dark_36D0(rdram, ctx);
        goto after_0;
    // 0x4200294C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x42002950: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x42002954: b           L_42002964
    // 0x42002958: sw          $v0, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->r2;
        goto L_42002964;
    // 0x42002958: sw          $v0, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->r2;
L_4200295C:
    // 0x4200295C: addiu       $t7, $zero, 0x118
    ctx->r15 = ADD32(0, 0X118);
    // 0x42002960: sw          $t7, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->r15;
L_42002964:
    // 0x42002964: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42002968: nop

    // 0x4200296C: swc1        $f4, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f4.u32l;
    // 0x42002970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002978: jr          $ra
    // 0x4200297C: nop

    return;
    // 0x4200297C: nop

;}
RECOMP_FUNC void ovl_blast_dark_2980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002980: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x42002984: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x42002988: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4200298C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x42002990: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002994: jal         0x42001874
    // 0x42002998: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_blast_dark_1874(rdram, ctx);
        goto after_0;
    // 0x42002998: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x4200299C: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x420029A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x420029A4: ori         $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 | 0X1000;
    // 0x420029A8: sw          $t7, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r15;
    // 0x420029AC: ori         $t8, $zero, 0x8B00
    ctx->r24 = 0 | 0X8B00;
    // 0x420029B0: sw          $t8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r24;
    // 0x420029B4: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x420029B8: swc1        $f0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f0.u32l;
    // 0x420029BC: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x420029C0: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x420029C4: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x420029C8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x420029CC: jal         0x42001874
    // 0x420029D0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_blast_dark_1874(rdram, ctx);
        goto after_1;
    // 0x420029D0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
    // 0x420029D4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x420029D8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x420029DC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x420029E0: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x420029E4: swc1        $f0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f0.u32l;
    // 0x420029E8: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x420029EC: lw          $t0, 0x70($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X70);
    // 0x420029F0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x420029F4: bne         $t0, $at, L_42002A4C
    if (ctx->r8 != ctx->r1) {
        // 0x420029F8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_42002A4C;
    }
    // 0x420029F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x420029FC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x42002A00: jal         0x420006C4
    // 0x42002A04: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_blast_dark_6C4(rdram, ctx);
        goto after_2;
    // 0x42002A04: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x42002A08: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x42002A0C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x42002A10: ori         $t2, $t1, 0x10
    ctx->r10 = ctx->r9 | 0X10;
    // 0x42002A14: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x42002A18: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x42002A1C: jal         0x420006C4
    // 0x42002A20: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_blast_dark_6C4(rdram, ctx);
        goto after_3;
    // 0x42002A20: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x42002A24: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x42002A28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42002A2C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x42002A30: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x42002A34: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x42002A38: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x42002A3C: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x42002A40: jal         0x420006C4
    // 0x42002A44: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_blast_dark_6C4(rdram, ctx);
        goto after_4;
    // 0x42002A44: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_4:
    // 0x42002A48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_42002A4C:
    // 0x42002A4C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x42002A50: jr          $ra
    // 0x42002A54: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x42002A54: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_blast_dark_2A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002A58: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x42002A5C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x42002A60: bne         $t6, $at, L_42002B04
    if (ctx->r14 != ctx->r1) {
        // 0x42002A64: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_42002B04;
    }
    // 0x42002A64: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x42002A68: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002A6C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x42002A70: sw          $a1, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r5;
    // 0x42002A74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x42002A78: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x42002A7C: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
L_42002A80:
    // 0x42002A80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x42002A84: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x42002A88: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x42002A8C: sw          $a1, 0x78($v1)
    MEM_W(0X78, ctx->r3) = ctx->r5;
    // 0x42002A90: swc1        $f0, 0x7C($v1)
    MEM_W(0X7C, ctx->r3) = ctx->f0.u32l;
    // 0x42002A94: swc1        $f0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->f0.u32l;
    // 0x42002A98: bne         $at, $zero, L_42002A80
    if (ctx->r1 != 0) {
        // 0x42002A9C: swc1        $f0, 0x84($v1)
        MEM_W(0X84, ctx->r3) = ctx->f0.u32l;
            goto L_42002A80;
    }
    // 0x42002A9C: swc1        $f0, 0x84($v1)
    MEM_W(0X84, ctx->r3) = ctx->f0.u32l;
    // 0x42002AA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x42002AA4: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x42002AA8: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x42002AAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x42002AB0: sw          $a1, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r5;
    // 0x42002AB4: sw          $a1, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->r5;
    // 0x42002AB8: sw          $zero, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = 0;
    // 0x42002ABC: sw          $zero, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = 0;
    // 0x42002AC0: sw          $a1, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r5;
    // 0x42002AC4: sw          $zero, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = 0;
    // 0x42002AC8: sw          $zero, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = 0;
    // 0x42002ACC: addu        $v1, $a0, $t7
    ctx->r3 = ADD32(ctx->r4, ctx->r15);
    // 0x42002AD0: sw          $a1, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = ctx->r5;
    // 0x42002AD4: sw          $zero, 0xB8($v1)
    MEM_W(0XB8, ctx->r3) = 0;
    // 0x42002AD8: sw          $zero, 0xBC($v1)
    MEM_W(0XBC, ctx->r3) = 0;
    // 0x42002ADC: sw          $a1, 0xC0($v1)
    MEM_W(0XC0, ctx->r3) = ctx->r5;
    // 0x42002AE0: sw          $zero, 0xC4($v1)
    MEM_W(0XC4, ctx->r3) = 0;
    // 0x42002AE4: sw          $zero, 0xC8($v1)
    MEM_W(0XC8, ctx->r3) = 0;
    // 0x42002AE8: sw          $a1, 0xCC($v1)
    MEM_W(0XCC, ctx->r3) = ctx->r5;
    // 0x42002AEC: sw          $zero, 0xD0($v1)
    MEM_W(0XD0, ctx->r3) = 0;
    // 0x42002AF0: sw          $zero, 0xD4($v1)
    MEM_W(0XD4, ctx->r3) = 0;
    // 0x42002AF4: sw          $a1, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r5;
    // 0x42002AF8: sw          $zero, 0xAC($v1)
    MEM_W(0XAC, ctx->r3) = 0;
    // 0x42002AFC: jr          $ra
    // 0x42002B00: sw          $zero, 0xB0($v1)
    MEM_W(0XB0, ctx->r3) = 0;
    return;
    // 0x42002B00: sw          $zero, 0xB0($v1)
    MEM_W(0XB0, ctx->r3) = 0;
L_42002B04:
    // 0x42002B04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x42002B08: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002B0C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x42002B10: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x42002B14: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42002B18: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x42002B1C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x42002B20: sw          $a1, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r5;
    // 0x42002B24: sw          $zero, 0x80($a0)
    MEM_W(0X80, ctx->r4) = 0;
    // 0x42002B28: sw          $a1, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->r5;
    // 0x42002B2C: sw          $a1, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->r5;
    // 0x42002B30: sw          $zero, 0x90($a0)
    MEM_W(0X90, ctx->r4) = 0;
    // 0x42002B34: sw          $a1, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r5;
    // 0x42002B38: sw          $zero, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = 0;
    // 0x42002B3C: sw          $zero, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = 0;
    // 0x42002B40: addu        $v1, $a0, $t8
    ctx->r3 = ADD32(ctx->r4, ctx->r24);
    // 0x42002B44: swc1        $f0, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f0.u32l;
    // 0x42002B48: swc1        $f0, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f0.u32l;
    // 0x42002B4C: swc1        $f4, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f4.u32l;
    // 0x42002B50: sw          $zero, 0xD0($v1)
    MEM_W(0XD0, ctx->r3) = 0;
    // 0x42002B54: sw          $zero, 0xCC($v1)
    MEM_W(0XCC, ctx->r3) = 0;
    // 0x42002B58: sw          $a1, 0xC8($v1)
    MEM_W(0XC8, ctx->r3) = ctx->r5;
    // 0x42002B5C: sw          $zero, 0xC4($v1)
    MEM_W(0XC4, ctx->r3) = 0;
    // 0x42002B60: sw          $zero, 0xC0($v1)
    MEM_W(0XC0, ctx->r3) = 0;
    // 0x42002B64: sw          $a1, 0xBC($v1)
    MEM_W(0XBC, ctx->r3) = ctx->r5;
    // 0x42002B68: sw          $zero, 0xB8($v1)
    MEM_W(0XB8, ctx->r3) = 0;
    // 0x42002B6C: sw          $zero, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = 0;
    // 0x42002B70: sw          $a1, 0xB0($v1)
    MEM_W(0XB0, ctx->r3) = ctx->r5;
    // 0x42002B74: sw          $a1, 0xA4($v1)
    MEM_W(0XA4, ctx->r3) = ctx->r5;
    // 0x42002B78: sw          $zero, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = 0;
    // 0x42002B7C: sw          $zero, 0xAC($v1)
    MEM_W(0XAC, ctx->r3) = 0;
    // 0x42002B80: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x42002B84: sw          $a1, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r5;
    // 0x42002B88: sw          $a1, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r5;
    // 0x42002B8C: sw          $t9, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r25;
    // 0x42002B90: jr          $ra
    // 0x42002B94: nop

    return;
    // 0x42002B94: nop

;}
RECOMP_FUNC void ovl_blast_dark_2B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002B98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002B9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002BA0: jal         0x42002710
    // 0x42002BA4: nop

    ovl_blast_dark_2710(rdram, ctx);
        goto after_0;
    // 0x42002BA4: nop

    after_0:
    // 0x42002BA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002BAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002BB0: jr          $ra
    // 0x42002BB4: nop

    return;
    // 0x42002BB4: nop

;}
RECOMP_FUNC void ovl_blast_dark_2BB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002BB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002BBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002BC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x42002BC4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x42002BC8: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x42002BCC: jal         0x42001874
    // 0x42002BD0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_blast_dark_1874(rdram, ctx);
        goto after_0;
    // 0x42002BD0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x42002BD4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x42002BD8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42002BDC: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x42002BE0: nop

    // 0x42002BE4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x42002BE8: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
    // 0x42002BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002BF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002BF4: jr          $ra
    // 0x42002BF8: nop

    return;
    // 0x42002BF8: nop

;}
RECOMP_FUNC void ovl_blast_dark_2BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002BFC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x42002C00: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x42002C04: slti        $at, $a2, 0x1E
    ctx->r1 = SIGNED(ctx->r6) < 0X1E ? 1 : 0;
    // 0x42002C08: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x42002C0C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x42002C10: bne         $at, $zero, L_42002D28
    if (ctx->r1 != 0) {
        // 0x42002C14: sw          $a0, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r4;
            goto L_42002D28;
    }
    // 0x42002C14: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x42002C18: lw          $a0, 0x74($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X74);
    // 0x42002C1C: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x42002C20: jal         0x420036D0
    // 0x42002C24: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_blast_dark_36D0(rdram, ctx);
        goto after_0;
    // 0x42002C24: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x42002C28: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x42002C2C: addiu       $t7, $v0, 0xA
    ctx->r15 = ADD32(ctx->r2, 0XA);
    // 0x42002C30: slt         $at, $a2, $t7
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x42002C34: beq         $at, $zero, L_42002D28
    if (ctx->r1 == 0) {
        // 0x42002C38: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_42002D28;
    }
    // 0x42002C38: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x42002C3C: bne         $a2, $at, L_42002CD8
    if (ctx->r6 != ctx->r1) {
        // 0x42002C40: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_42002CD8;
    }
    // 0x42002C40: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x42002C44: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x42002C48: addiu       $a2, $zero, 0x1E3
    ctx->r6 = ADD32(0, 0X1E3);
    // 0x42002C4C: jal         0x42001104
    // 0x42002C50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_dark_1104(rdram, ctx);
        goto after_1;
    // 0x42002C50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x42002C54: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x42002C58: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42002C5C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x42002C60: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x42002C64: jal         0x42000F34
    // 0x42002C68: addiu       $a3, $zero, 0x1E3
    ctx->r7 = ADD32(0, 0X1E3);
    ovl_blast_dark_F34(rdram, ctx);
        goto after_2;
    // 0x42002C68: addiu       $a3, $zero, 0x1E3
    ctx->r7 = ADD32(0, 0X1E3);
    after_2:
    // 0x42002C6C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002C70: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42002C74: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x42002C78: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42002C7C: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x42002C80: addiu       $t9, $zero, 0x1B
    ctx->r25 = ADD32(0, 0X1B);
    // 0x42002C84: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x42002C88: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x42002C8C: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x42002C90: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x42002C94: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x42002C98: swc1        $f9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x42002C9C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x42002CA0: swc1        $f5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x42002CA4: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x42002CA8: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x42002CAC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x42002CB0: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x42002CB4: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x42002CB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x42002CBC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x42002CC0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x42002CC4: jal         0x42000F34
    // 0x42002CC8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_3;
    // 0x42002CC8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_3:
    // 0x42002CCC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x42002CD0: b           L_42002CF8
    // 0x42002CD4: swc1        $f2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f2.u32l;
        goto L_42002CF8;
    // 0x42002CD4: swc1        $f2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f2.u32l;
L_42002CD8:
    // 0x42002CD8: slti        $at, $a2, 0x29
    ctx->r1 = SIGNED(ctx->r6) < 0X29 ? 1 : 0;
    // 0x42002CDC: beq         $at, $zero, L_42002CF8
    if (ctx->r1 == 0) {
        // 0x42002CE0: lui         $at, 0x4200
        ctx->r1 = S32(0X4200 << 16);
            goto L_42002CF8;
    }
    // 0x42002CE0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002CE4: lwc1        $f16, 0x46B0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X46B0);
    // 0x42002CE8: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42002CEC: nop

    // 0x42002CF0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x42002CF4: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
L_42002CF8:
    // 0x42002CF8: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42002CFC: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x42002D00: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x42002D04: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x42002D08: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x42002D0C: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x42002D10: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x42002D14: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002D18: jal         0x42000F34
    // 0x42002D1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_4;
    // 0x42002D1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x42002D20: b           L_42002DC4
    // 0x42002D24: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_42002DC4;
    // 0x42002D24: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_42002D28:
    // 0x42002D28: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x42002D2C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x42002D30: lw          $a0, 0x74($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X74);
    // 0x42002D34: jal         0x420036D0
    // 0x42002D38: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    ovl_blast_dark_36D0(rdram, ctx);
        goto after_5;
    // 0x42002D38: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    after_5:
    // 0x42002D3C: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x42002D40: addiu       $t3, $v0, 0xA
    ctx->r11 = ADD32(ctx->r2, 0XA);
    // 0x42002D44: slt         $at, $a2, $t3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x42002D48: bne         $at, $zero, L_42002DC4
    if (ctx->r1 != 0) {
        // 0x42002D4C: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_42002DC4;
    }
    // 0x42002D4C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x42002D50: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x42002D54: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42002D58: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002D5C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x42002D60: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x42002D64: bc1f        L_42002DC4
    if (!c1cs) {
        // 0x42002D68: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_42002DC4;
    }
    // 0x42002D68: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x42002D6C: lwc1        $f8, 0x46B4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X46B4);
    // 0x42002D70: nop

    // 0x42002D74: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x42002D78: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x42002D7C: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42002D80: nop

    // 0x42002D84: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x42002D88: nop

    // 0x42002D8C: bc1f        L_42002DA0
    if (!c1cs) {
        // 0x42002D90: nop
    
            goto L_42002DA0;
    }
    // 0x42002D90: nop

    // 0x42002D94: swc1        $f2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f2.u32l;
    // 0x42002D98: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42002D9C: nop

L_42002DA0:
    // 0x42002DA0: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x42002DA4: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x42002DA8: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x42002DAC: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x42002DB0: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x42002DB4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002DB8: jal         0x42000F34
    // 0x42002DBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_6;
    // 0x42002DBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x42002DC0: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_42002DC4:
    // 0x42002DC4: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x42002DC8: jr          $ra
    // 0x42002DCC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x42002DCC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_blast_dark_2DD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002DD0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x42002DD4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x42002DD8: slti        $at, $a2, 0xA
    ctx->r1 = SIGNED(ctx->r6) < 0XA ? 1 : 0;
    // 0x42002DDC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x42002DE0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x42002DE4: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x42002DE8: bne         $at, $zero, L_42002FB8
    if (ctx->r1 != 0) {
        // 0x42002DEC: sw          $a2, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r6;
            goto L_42002FB8;
    }
    // 0x42002DEC: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x42002DF0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x42002DF4: bne         $a2, $at, L_42002E24
    if (ctx->r6 != ctx->r1) {
        // 0x42002DF8: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_42002E24;
    }
    // 0x42002DF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42002DFC: jal         0x42001104
    // 0x42002E00: addiu       $a2, $zero, 0x1E1
    ctx->r6 = ADD32(0, 0X1E1);
    ovl_blast_dark_1104(rdram, ctx);
        goto after_0;
    // 0x42002E00: addiu       $a2, $zero, 0x1E1
    ctx->r6 = ADD32(0, 0X1E1);
    after_0:
    // 0x42002E04: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x42002E08: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x42002E0C: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
    // 0x42002E10: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x42002E14: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x42002E18: swc1        $f18, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f18.u32l;
    // 0x42002E1C: swc1        $f18, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f18.u32l;
    // 0x42002E20: swc1        $f18, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f18.u32l;
L_42002E24:
    // 0x42002E24: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x42002E28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x42002E2C: lw          $a0, 0x74($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X74);
    // 0x42002E30: jal         0x420036D0
    // 0x42002E34: nop

    ovl_blast_dark_36D0(rdram, ctx);
        goto after_1;
    // 0x42002E34: nop

    after_1:
    // 0x42002E38: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x42002E3C: addiu       $t9, $v0, 0xA
    ctx->r25 = ADD32(ctx->r2, 0XA);
    // 0x42002E40: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x42002E44: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x42002E48: beq         $at, $zero, L_42002EBC
    if (ctx->r1 == 0) {
        // 0x42002E4C: addiu       $a0, $zero, 0x12
        ctx->r4 = ADD32(0, 0X12);
            goto L_42002EBC;
    }
    // 0x42002E4C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x42002E50: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002E54: lwc1        $f16, 0x46B8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X46B8);
    // 0x42002E58: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42002E5C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002E60: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x42002E64: nop

    // 0x42002E68: bc1f        L_42002EA0
    if (!c1cs) {
        // 0x42002E6C: nop
    
            goto L_42002EA0;
    }
    // 0x42002E6C: nop

    // 0x42002E70: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x42002E74: nop

    // 0x42002E78: add.s       $f14, $f0, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x42002E7C: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x42002E80: nop

    // 0x42002E84: bc1f        L_42002E94
    if (!c1cs) {
        // 0x42002E88: nop
    
            goto L_42002E94;
    }
    // 0x42002E88: nop

    // 0x42002E8C: b           L_42002E98
    // 0x42002E90: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
        goto L_42002E98;
    // 0x42002E90: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
L_42002E94:
    // 0x42002E94: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
L_42002E98:
    // 0x42002E98: b           L_42002EA4
    // 0x42002E9C: swc1        $f2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f2.u32l;
        goto L_42002EA4;
    // 0x42002E9C: swc1        $f2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f2.u32l;
L_42002EA0:
    // 0x42002EA0: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
L_42002EA4:
    // 0x42002EA4: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x42002EA8: lwc1        $f8, 0x46BC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X46BC);
    // 0x42002EAC: nop

    // 0x42002EB0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x42002EB4: b           L_42002F04
    // 0x42002EB8: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
        goto L_42002F04;
    // 0x42002EB8: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
L_42002EBC:
    // 0x42002EBC: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42002EC0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002EC4: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x42002EC8: nop

    // 0x42002ECC: bc1f        L_42002F00
    if (!c1cs) {
        // 0x42002ED0: nop
    
            goto L_42002F00;
    }
    // 0x42002ED0: nop

    // 0x42002ED4: lwc1        $f14, 0x46C0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X46C0);
    // 0x42002ED8: nop

    // 0x42002EDC: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x42002EE0: nop

    // 0x42002EE4: bc1f        L_42002EF4
    if (!c1cs) {
        // 0x42002EE8: nop
    
            goto L_42002EF4;
    }
    // 0x42002EE8: nop

    // 0x42002EEC: b           L_42002EF8
    // 0x42002EF0: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_42002EF8;
    // 0x42002EF0: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_42002EF4:
    // 0x42002EF4: sub.s       $f2, $f0, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f14.fl;
L_42002EF8:
    // 0x42002EF8: b           L_42002F04
    // 0x42002EFC: swc1        $f2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f2.u32l;
        goto L_42002F04;
    // 0x42002EFC: swc1        $f2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f2.u32l;
L_42002F00:
    // 0x42002F00: swc1        $f12, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f12.u32l;
L_42002F04:
    // 0x42002F04: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    // 0x42002F08: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x42002F0C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002F10: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42002F14: lwc1        $f7, 0x46C8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X46C8);
    // 0x42002F18: lwc1        $f6, 0x46CC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X46CC);
    // 0x42002F1C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x42002F20: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x42002F24: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x42002F28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42002F2C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x42002F30: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x42002F34: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x42002F38: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42002F3C: nop

    // 0x42002F40: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x42002F44: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x42002F48: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42002F4C: nop

    // 0x42002F50: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x42002F54: nop

    // 0x42002F58: bc1f        L_42002F70
    if (!c1cs) {
        // 0x42002F5C: nop
    
            goto L_42002F70;
    }
    // 0x42002F5C: nop

    // 0x42002F60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42002F64: nop

    // 0x42002F68: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x42002F6C: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
L_42002F70:
    // 0x42002F70: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42002F74: addiu       $t0, $sp, 0x4C
    ctx->r8 = ADD32(ctx->r29, 0X4C);
    // 0x42002F78: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x42002F7C: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42002F80: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x42002F84: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x42002F88: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42002F8C: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x42002F90: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x42002F94: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002F98: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x42002F9C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x42002FA0: jal         0x42000F34
    // 0x42002FA4: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_2;
    // 0x42002FA4: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    after_2:
    // 0x42002FA8: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x42002FAC: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x42002FB0: jal         0x42002BB8
    // 0x42002FB4: nop

    ovl_blast_dark_2BB8(rdram, ctx);
        goto after_3;
    // 0x42002FB4: nop

    after_3:
L_42002FB8:
    // 0x42002FB8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x42002FBC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x42002FC0: jr          $ra
    // 0x42002FC4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x42002FC4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_blast_dark_2FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002FC8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x42002FCC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x42002FD0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x42002FD4: slti        $at, $a1, 0xA
    ctx->r1 = SIGNED(ctx->r5) < 0XA ? 1 : 0;
    // 0x42002FD8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x42002FDC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x42002FE0: beq         $at, $zero, L_4200303C
    if (ctx->r1 == 0) {
        // 0x42002FE4: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_4200303C;
    }
    // 0x42002FE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x42002FE8: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x42002FEC: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x42002FF0: jal         0x420006C4
    // 0x42002FF4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_blast_dark_6C4(rdram, ctx);
        goto after_0;
    // 0x42002FF4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x42002FF8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002FFC: lwc1        $f0, 0x46D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X46D0);
    // 0x42003000: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x42003004: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x42003008: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4200300C: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x42003010: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x42003014: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x42003018: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x4200301C: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x42003020: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x42003024: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x42003028: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x4200302C: jal         0x420006C4
    // 0x42003030: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_blast_dark_6C4(rdram, ctx);
        goto after_1;
    // 0x42003030: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x42003034: b           L_42003084
    // 0x42003038: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
        goto L_42003084;
    // 0x42003038: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
L_4200303C:
    // 0x4200303C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x42003040: bne         $s1, $at, L_42003080
    if (ctx->r17 != ctx->r1) {
        // 0x42003044: addiu       $t6, $zero, 0x1E2
        ctx->r14 = ADD32(0, 0X1E2);
            goto L_42003080;
    }
    // 0x42003044: addiu       $t6, $zero, 0x1E2
    ctx->r14 = ADD32(0, 0X1E2);
    // 0x42003048: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x4200304C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x42003050: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x42003054: jal         0x420006C4
    // 0x42003058: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_blast_dark_6C4(rdram, ctx);
        goto after_2;
    // 0x42003058: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x4200305C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42003060: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x42003064: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x42003068: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x4200306C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x42003070: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x42003074: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x42003078: jal         0x420006C4
    // 0x4200307C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_blast_dark_6C4(rdram, ctx);
        goto after_3;
    // 0x4200307C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_3:
L_42003080:
    // 0x42003080: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
L_42003084:
    // 0x42003084: bne         $at, $zero, L_420030E4
    if (ctx->r1 != 0) {
        // 0x42003088: slti        $at, $s1, 0x19
        ctx->r1 = SIGNED(ctx->r17) < 0X19 ? 1 : 0;
            goto L_420030E4;
    }
    // 0x42003088: slti        $at, $s1, 0x19
    ctx->r1 = SIGNED(ctx->r17) < 0X19 ? 1 : 0;
    // 0x4200308C: beq         $at, $zero, L_420030E4
    if (ctx->r1 == 0) {
        // 0x42003090: addiu       $a1, $zero, 0x15
        ctx->r5 = ADD32(0, 0X15);
            goto L_420030E4;
    }
    // 0x42003090: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x42003094: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x42003098: jal         0x420006C4
    // 0x4200309C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_blast_dark_6C4(rdram, ctx);
        goto after_4;
    // 0x4200309C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x420030A0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x420030A4: lwc1        $f0, 0x46D4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X46D4);
    // 0x420030A8: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x420030AC: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x420030B0: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x420030B4: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x420030B8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x420030BC: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x420030C0: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x420030C4: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x420030C8: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x420030CC: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x420030D0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x420030D4: jal         0x420006C4
    // 0x420030D8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_blast_dark_6C4(rdram, ctx);
        goto after_5;
    // 0x420030D8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_5:
    // 0x420030DC: b           L_4200321C
    // 0x420030E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4200321C;
    // 0x420030E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_420030E4:
    // 0x420030E4: slti        $at, $s1, 0x37
    ctx->r1 = SIGNED(ctx->r17) < 0X37 ? 1 : 0;
    // 0x420030E8: bne         $at, $zero, L_42003158
    if (ctx->r1 != 0) {
        // 0x420030EC: nop
    
            goto L_42003158;
    }
    // 0x420030EC: nop

    // 0x420030F0: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    // 0x420030F4: jal         0x420036D0
    // 0x420030F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_blast_dark_36D0(rdram, ctx);
        goto after_6;
    // 0x420030F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x420030FC: addiu       $t7, $v0, 0xF
    ctx->r15 = ADD32(ctx->r2, 0XF);
    // 0x42003100: slt         $at, $s1, $t7
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x42003104: beq         $at, $zero, L_42003158
    if (ctx->r1 == 0) {
        // 0x42003108: nop
    
            goto L_42003158;
    }
    // 0x42003108: nop

    // 0x4200310C: jal         0x42000340
    // 0x42003110: nop

    ovl_blast_dark_340(rdram, ctx);
        goto after_7;
    // 0x42003110: nop

    after_7:
    // 0x42003114: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x42003118: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4200311C: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x42003120: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x42003124: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x42003128: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4200312C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x42003130: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x42003134: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x42003138: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x4200313C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x42003140: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x42003144: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x42003148: jal         0x420006C4
    // 0x4200314C: nop

    ovl_blast_dark_6C4(rdram, ctx);
        goto after_8;
    // 0x4200314C: nop

    after_8:
    // 0x42003150: b           L_4200321C
    // 0x42003154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4200321C;
    // 0x42003154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_42003158:
    // 0x42003158: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    // 0x4200315C: jal         0x420036D0
    // 0x42003160: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_blast_dark_36D0(rdram, ctx);
        goto after_9;
    // 0x42003160: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_9:
    // 0x42003164: addiu       $t8, $v0, 0xF
    ctx->r24 = ADD32(ctx->r2, 0XF);
    // 0x42003168: slt         $at, $s1, $t8
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x4200316C: bne         $at, $zero, L_420031E0
    if (ctx->r1 != 0) {
        // 0x42003170: nop
    
            goto L_420031E0;
    }
    // 0x42003170: nop

    // 0x42003174: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    // 0x42003178: jal         0x420036D0
    // 0x4200317C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_blast_dark_36D0(rdram, ctx);
        goto after_10;
    // 0x4200317C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
    // 0x42003180: addiu       $t9, $v0, 0x14
    ctx->r25 = ADD32(ctx->r2, 0X14);
    // 0x42003184: slt         $at, $s1, $t9
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x42003188: beq         $at, $zero, L_420031E0
    if (ctx->r1 == 0) {
        // 0x4200318C: addiu       $a1, $zero, 0x15
        ctx->r5 = ADD32(0, 0X15);
            goto L_420031E0;
    }
    // 0x4200318C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x42003190: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x42003194: jal         0x420006C4
    // 0x42003198: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_blast_dark_6C4(rdram, ctx);
        goto after_11;
    // 0x42003198: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_11:
    // 0x4200319C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x420031A0: lwc1        $f0, 0x46D8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X46D8);
    // 0x420031A4: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x420031A8: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x420031AC: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x420031B0: sub.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x420031B4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x420031B8: sub.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x420031BC: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x420031C0: sub.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x420031C4: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x420031C8: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x420031CC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x420031D0: jal         0x420006C4
    // 0x420031D4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_blast_dark_6C4(rdram, ctx);
        goto after_12;
    // 0x420031D4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_12:
    // 0x420031D8: b           L_4200321C
    // 0x420031DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4200321C;
    // 0x420031DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_420031E0:
    // 0x420031E0: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    // 0x420031E4: jal         0x420036D0
    // 0x420031E8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_blast_dark_36D0(rdram, ctx);
        goto after_13;
    // 0x420031E8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_13:
    // 0x420031EC: addiu       $t0, $v0, 0x14
    ctx->r8 = ADD32(ctx->r2, 0X14);
    // 0x420031F0: bne         $t0, $s1, L_4200321C
    if (ctx->r8 != ctx->r17) {
        // 0x420031F4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4200321C;
    }
    // 0x420031F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x420031F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x420031FC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x42003200: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x42003204: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x42003208: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x4200320C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x42003210: jal         0x420006C4
    // 0x42003214: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_blast_dark_6C4(rdram, ctx);
        goto after_14;
    // 0x42003214: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_14:
    // 0x42003218: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4200321C:
    // 0x4200321C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x42003220: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x42003224: jr          $ra
    // 0x42003228: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x42003228: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_blast_dark_322C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200322C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x42003230: slti        $at, $a2, 0x19
    ctx->r1 = SIGNED(ctx->r6) < 0X19 ? 1 : 0;
    // 0x42003234: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x42003238: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x4200323C: bne         $at, $zero, L_42003318
    if (ctx->r1 != 0) {
        // 0x42003240: sw          $a1, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r5;
            goto L_42003318;
    }
    // 0x42003240: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x42003244: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x42003248: bne         $a2, $at, L_420032E0
    if (ctx->r6 != ctx->r1) {
        // 0x4200324C: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_420032E0;
    }
    // 0x4200324C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42003250: jal         0x42001104
    // 0x42003254: addiu       $a2, $zero, 0x20E
    ctx->r6 = ADD32(0, 0X20E);
    ovl_blast_dark_1104(rdram, ctx);
        goto after_0;
    // 0x42003254: addiu       $a2, $zero, 0x20E
    ctx->r6 = ADD32(0, 0X20E);
    after_0:
    // 0x42003258: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x4200325C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x42003260: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x42003264: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42003268: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x4200326C: jal         0x42000F34
    // 0x42003270: addiu       $a3, $zero, 0x20E
    ctx->r7 = ADD32(0, 0X20E);
    ovl_blast_dark_F34(rdram, ctx);
        goto after_1;
    // 0x42003270: addiu       $a3, $zero, 0x20E
    ctx->r7 = ADD32(0, 0X20E);
    after_1:
    // 0x42003274: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x42003278: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4200327C: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x42003280: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42003284: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x42003288: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4200328C: addiu       $t9, $zero, 0x1B
    ctx->r25 = ADD32(0, 0X1B);
    // 0x42003290: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x42003294: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x42003298: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x4200329C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x420032A0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x420032A4: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x420032A8: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x420032AC: swc1        $f11, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x420032B0: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x420032B4: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x420032B8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x420032BC: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x420032C0: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x420032C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x420032C8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x420032CC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x420032D0: jal         0x42000F34
    // 0x420032D4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_2;
    // 0x420032D4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_2:
    // 0x420032D8: b           L_4200331C
    // 0x420032DC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_4200331C;
    // 0x420032DC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_420032E0:
    // 0x420032E0: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x420032E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x420032E8: lw          $a0, 0x74($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X74);
    // 0x420032EC: jal         0x420036D0
    // 0x420032F0: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    ovl_blast_dark_36D0(rdram, ctx);
        goto after_3;
    // 0x420032F0: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    after_3:
    // 0x420032F4: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x420032F8: addiu       $t3, $v0, 0xA
    ctx->r11 = ADD32(ctx->r2, 0XA);
    // 0x420032FC: bne         $t3, $a2, L_42003318
    if (ctx->r11 != ctx->r6) {
        // 0x42003300: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_42003318;
    }
    // 0x42003300: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42003304: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x42003308: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4200330C: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x42003310: jal         0x42000F34
    // 0x42003314: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_4;
    // 0x42003314: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
L_42003318:
    // 0x42003318: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_4200331C:
    // 0x4200331C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x42003320: jr          $ra
    // 0x42003324: nop

    return;
    // 0x42003324: nop

;}
RECOMP_FUNC void ovl_blast_dark_3328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003328: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x4200332C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x42003330: slt         $at, $a2, $a3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x42003334: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x42003338: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x4200333C: bne         $at, $zero, L_420035A4
    if (ctx->r1 != 0) {
        // 0x42003340: sw          $a2, 0x80($sp)
        MEM_W(0X80, ctx->r29) = ctx->r6;
            goto L_420035A4;
    }
    // 0x42003340: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x42003344: bne         $a2, $a3, L_420034AC
    if (ctx->r6 != ctx->r7) {
        // 0x42003348: lw          $t1, 0x88($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X88);
            goto L_420034AC;
    }
    // 0x42003348: lw          $t1, 0x88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X88);
    // 0x4200334C: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x42003350: addiu       $a2, $zero, 0x217
    ctx->r6 = ADD32(0, 0X217);
    // 0x42003354: bne         $t7, $zero, L_42003388
    if (ctx->r15 != 0) {
        // 0x42003358: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_42003388;
    }
    // 0x42003358: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4200335C: addiu       $a2, $zero, 0x216
    ctx->r6 = ADD32(0, 0X216);
    // 0x42003360: jal         0x42001104
    // 0x42003364: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_dark_1104(rdram, ctx);
        goto after_0;
    // 0x42003364: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x42003368: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x4200336C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42003370: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x42003374: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    // 0x42003378: jal         0x42000F34
    // 0x4200337C: addiu       $a3, $zero, 0x216
    ctx->r7 = ADD32(0, 0X216);
    ovl_blast_dark_F34(rdram, ctx);
        goto after_1;
    // 0x4200337C: addiu       $a3, $zero, 0x216
    ctx->r7 = ADD32(0, 0X216);
    after_1:
    // 0x42003380: b           L_420033AC
    // 0x42003384: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
        goto L_420033AC;
    // 0x42003384: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
L_42003388:
    // 0x42003388: jal         0x42001104
    // 0x4200338C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_blast_dark_1104(rdram, ctx);
        goto after_2;
    // 0x4200338C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x42003390: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x42003394: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42003398: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x4200339C: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    // 0x420033A0: jal         0x42000F34
    // 0x420033A4: addiu       $a3, $zero, 0x217
    ctx->r7 = ADD32(0, 0X217);
    ovl_blast_dark_F34(rdram, ctx);
        goto after_3;
    // 0x420033A4: addiu       $a3, $zero, 0x217
    ctx->r7 = ADD32(0, 0X217);
    after_3:
    // 0x420033A8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
L_420033AC:
    // 0x420033AC: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x420033B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x420033B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x420033B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x420033BC: addiu       $t8, $zero, 0x1B
    ctx->r24 = ADD32(0, 0X1B);
    // 0x420033C0: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
    // 0x420033C4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x420033C8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x420033CC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x420033D0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x420033D4: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x420033D8: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x420033DC: swc1        $f11, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x420033E0: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x420033E4: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x420033E8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x420033EC: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x420033F0: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x420033F4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x420033F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x420033FC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x42003400: jal         0x42000F34
    // 0x42003404: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_4;
    // 0x42003404: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_4:
    // 0x42003408: jal         0x42000340
    // 0x4200340C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    ovl_blast_dark_340(rdram, ctx);
        goto after_5;
    // 0x4200340C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    after_5:
    // 0x42003410: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x42003414: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42003418: cvt.s.d     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f16.fl = CVT_S_D(ctx->f0.d);
    // 0x4200341C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x42003420: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x42003424: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42003428: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x4200342C: lwc1        $f17, 0x46E0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X46E0);
    // 0x42003430: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x42003434: lwc1        $f16, 0x46E4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X46E4);
    // 0x42003438: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x4200343C: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x42003440: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42003444: nop

    // 0x42003448: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x4200344C: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x42003450: jal         0x42000340
    // 0x42003454: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    ovl_blast_dark_340(rdram, ctx);
        goto after_6;
    // 0x42003454: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x42003458: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x4200345C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x42003460: cvt.s.d     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f8.fl = CVT_S_D(ctx->f0.d);
    // 0x42003464: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x42003468: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x4200346C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42003470: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003474: lwc1        $f9, 0x46E8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X46E8);
    // 0x42003478: sub.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x4200347C: lwc1        $f8, 0x46EC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X46EC);
    // 0x42003480: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x42003484: mul.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x42003488: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x4200348C: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x42003490: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42003494: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x42003498: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    // 0x4200349C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x420034A0: jal         0x42000F34
    // 0x420034A4: nop

    ovl_blast_dark_F34(rdram, ctx);
        goto after_7;
    // 0x420034A4: nop

    after_7:
    // 0x420034A8: lw          $t1, 0x88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X88);
L_420034AC:
    // 0x420034AC: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    // 0x420034B0: bne         $t1, $zero, L_420034C0
    if (ctx->r9 != 0) {
        // 0x420034B4: nop
    
            goto L_420034C0;
    }
    // 0x420034B4: nop

    // 0x420034B8: b           L_420034C0
    // 0x420034BC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
        goto L_420034C0;
    // 0x420034BC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
L_420034C0:
    // 0x420034C0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x420034C4: nop

    // 0x420034C8: slt         $v1, $v0, $a0
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x420034CC: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x420034D0: bne         $v1, $zero, L_420035A4
    if (ctx->r3 != 0) {
        // 0x420034D4: sw          $t2, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r10;
            goto L_420035A4;
    }
    // 0x420034D4: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x420034D8: lw          $t3, 0x80($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X80);
    // 0x420034DC: lw          $t4, 0x8C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8C);
    // 0x420034E0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x420034E4: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x420034E8: beq         $at, $zero, L_42003598
    if (ctx->r1 == 0) {
        // 0x420034EC: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_42003598;
    }
    // 0x420034EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x420034F0: jal         0x42000340
    // 0x420034F4: nop

    ovl_blast_dark_340(rdram, ctx);
        goto after_8;
    // 0x420034F4: nop

    after_8:
    // 0x420034F8: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x420034FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42003500: cvt.s.d     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f16.fl = CVT_S_D(ctx->f0.d);
    // 0x42003504: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x42003508: mul.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x4200350C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42003510: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003514: lwc1        $f17, 0x46F0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X46F0);
    // 0x42003518: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x4200351C: lwc1        $f16, 0x46F4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X46F4);
    // 0x42003520: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x42003524: mul.d       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f16.d);
    // 0x42003528: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4200352C: nop

    // 0x42003530: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x42003534: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x42003538: jal         0x42000340
    // 0x4200353C: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    ovl_blast_dark_340(rdram, ctx);
        goto after_9;
    // 0x4200353C: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x42003540: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x42003544: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42003548: cvt.s.d     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f10.fl = CVT_S_D(ctx->f0.d);
    // 0x4200354C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x42003550: mul.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x42003554: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42003558: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x4200355C: lwc1        $f11, 0x46F8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X46F8);
    // 0x42003560: sub.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x42003564: lwc1        $f10, 0x46FC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X46FC);
    // 0x42003568: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x4200356C: mul.d       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f4.d, ctx->f10.d);
    // 0x42003570: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x42003574: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x42003578: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4200357C: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x42003580: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x42003584: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003588: jal         0x42000F34
    // 0x4200358C: nop

    ovl_blast_dark_F34(rdram, ctx);
        goto after_10;
    // 0x4200358C: nop

    after_10:
    // 0x42003590: b           L_420035A4
    // 0x42003594: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
        goto L_420035A4;
    // 0x42003594: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_42003598:
    // 0x42003598: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x4200359C: jal         0x42000F34
    // 0x420035A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_11;
    // 0x420035A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
L_420035A4:
    // 0x420035A4: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x420035A8: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x420035AC: jr          $ra
    // 0x420035B0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x420035B0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void ovl_blast_dark_35B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420035B4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x420035B8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x420035BC: slt         $at, $a2, $a3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x420035C0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x420035C4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x420035C8: bne         $at, $zero, L_420036C0
    if (ctx->r1 != 0) {
        // 0x420035CC: sw          $a0, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r4;
            goto L_420036C0;
    }
    // 0x420035CC: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x420035D0: bne         $a2, $a3, L_420035F4
    if (ctx->r6 != ctx->r7) {
        // 0x420035D4: slti        $at, $a2, 0xA
        ctx->r1 = SIGNED(ctx->r6) < 0XA ? 1 : 0;
            goto L_420035F4;
    }
    // 0x420035D4: slti        $at, $a2, 0xA
    ctx->r1 = SIGNED(ctx->r6) < 0XA ? 1 : 0;
    // 0x420035D8: addiu       $a2, $zero, 0x1E9
    ctx->r6 = ADD32(0, 0X1E9);
    // 0x420035DC: jal         0x42001104
    // 0x420035E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_dark_1104(rdram, ctx);
        goto after_0;
    // 0x420035E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x420035E4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x420035E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x420035EC: b           L_420036C0
    // 0x420035F0: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
        goto L_420036C0;
    // 0x420035F0: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
L_420035F4:
    // 0x420035F4: beq         $at, $zero, L_420036A8
    if (ctx->r1 == 0) {
        // 0x420035F8: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_420036A8;
    }
    // 0x420035F8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x420035FC: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x42003600: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x42003604: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    // 0x42003608: jal         0x420006C4
    // 0x4200360C: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    ovl_blast_dark_6C4(rdram, ctx);
        goto after_1;
    // 0x4200360C: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_1:
    // 0x42003610: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003614: addiu       $t7, $sp, 0x3C
    ctx->r15 = ADD32(ctx->r29, 0X3C);
    // 0x42003618: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x4200361C: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003620: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x42003624: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x42003628: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x4200362C: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x42003630: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x42003634: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003638: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x4200363C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x42003640: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x42003644: jal         0x42000F34
    // 0x42003648: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_2;
    // 0x42003648: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    after_2:
    // 0x4200364C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003650: lwc1        $f12, 0x4700($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4700);
    // 0x42003654: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003658: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x4200365C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x42003660: nop

    // 0x42003664: bc1f        L_4200369C
    if (!c1cs) {
        // 0x42003668: nop
    
            goto L_4200369C;
    }
    // 0x42003668: nop

    // 0x4200366C: lwc1        $f16, 0x4704($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4704);
    // 0x42003670: nop

    // 0x42003674: sub.s       $f2, $f0, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x42003678: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x4200367C: nop

    // 0x42003680: bc1f        L_42003690
    if (!c1cs) {
        // 0x42003684: nop
    
            goto L_42003690;
    }
    // 0x42003684: nop

    // 0x42003688: b           L_42003694
    // 0x4200368C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_42003694;
    // 0x4200368C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_42003690:
    // 0x42003690: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_42003694:
    // 0x42003694: b           L_420036C0
    // 0x42003698: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
        goto L_420036C0;
    // 0x42003698: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
L_4200369C:
    // 0x4200369C: b           L_420036C0
    // 0x420036A0: swc1        $f12, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f12.u32l;
        goto L_420036C0;
    // 0x420036A0: swc1        $f12, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f12.u32l;
    // 0x420036A4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_420036A8:
    // 0x420036A8: bne         $a2, $at, L_420036C0
    if (ctx->r6 != ctx->r1) {
        // 0x420036AC: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_420036C0;
    }
    // 0x420036AC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x420036B0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x420036B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x420036B8: jal         0x42000F34
    // 0x420036BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_3;
    // 0x420036BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
L_420036C0:
    // 0x420036C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x420036C4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x420036C8: jr          $ra
    // 0x420036CC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x420036CC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_blast_dark_36D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420036D0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x420036D4: lui         $t7, 0x4200
    ctx->r15 = S32(0X4200 << 16);
    // 0x420036D8: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x420036DC: lui         $t9, 0x4200
    ctx->r25 = S32(0X4200 << 16);
    // 0x420036E0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x420036E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x420036E8: lw          $t7, 0x4588($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4588);
    // 0x420036EC: lw          $t9, 0x4570($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4570);
    // 0x420036F0: jr          $ra
    // 0x420036F4: addu        $v0, $t7, $t9
    ctx->r2 = ADD32(ctx->r15, ctx->r25);
    return;
    // 0x420036F4: addu        $v0, $t7, $t9
    ctx->r2 = ADD32(ctx->r15, ctx->r25);
;}
RECOMP_FUNC void ovl_blast_dark_36F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420036F8: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x420036FC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x42003700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42003704: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x42003708: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
    // 0x4200370C: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x42003710: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x42003714: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x42003718: beq         $t7, $at, L_42003740
    if (ctx->r15 == ctx->r1) {
        // 0x4200371C: sw          $t7, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r15;
            goto L_42003740;
    }
    // 0x4200371C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x42003720: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x42003724: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x42003728: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x4200372C: jal         0x420006C4
    // 0x42003730: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    ovl_blast_dark_6C4(rdram, ctx);
        goto after_0;
    // 0x42003730: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    after_0:
    // 0x42003734: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    // 0x42003738: beq         $v0, $zero, L_4200374C
    if (ctx->r2 == 0) {
        // 0x4200373C: lw          $t9, 0x58($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X58);
            goto L_4200374C;
    }
    // 0x4200373C: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
L_42003740:
    // 0x42003740: b           L_42003924
    // 0x42003744: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_42003924;
    // 0x42003744: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x42003748: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
L_4200374C:
    // 0x4200374C: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x42003750: bne         $t9, $zero, L_42003770
    if (ctx->r25 != 0) {
        // 0x42003754: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_42003770;
    }
    // 0x42003754: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x42003758: bne         $t0, $at, L_42003770
    if (ctx->r8 != ctx->r1) {
        // 0x4200375C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_42003770;
    }
    // 0x4200375C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x42003760: jal         0x420007E4
    // 0x42003764: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    ovl_blast_dark_7E4(rdram, ctx);
        goto after_1;
    // 0x42003764: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    after_1:
    // 0x42003768: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    // 0x4200376C: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
L_42003770:
    // 0x42003770: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x42003774: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x42003778: bne         $t1, $zero, L_420037C8
    if (ctx->r9 != 0) {
        // 0x4200377C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_420037C8;
    }
    // 0x4200377C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x42003780: beq         $t2, $at, L_420037C0
    if (ctx->r10 == ctx->r1) {
        // 0x42003784: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_420037C0;
    }
    // 0x42003784: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x42003788: bne         $t2, $at, L_420037CC
    if (ctx->r10 != ctx->r1) {
        // 0x4200378C: lw          $t7, 0x58($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X58);
            goto L_420037CC;
    }
    // 0x4200378C: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x42003790: lw          $t3, 0xC($a3)
    ctx->r11 = MEM_W(ctx->r7, 0XC);
    // 0x42003794: ori         $at, $zero, 0x8040
    ctx->r1 = 0 | 0X8040;
    // 0x42003798: slt         $at, $t3, $at
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x4200379C: beq         $at, $zero, L_420037C0
    if (ctx->r1 == 0) {
        // 0x420037A0: nop
    
            goto L_420037C0;
    }
    // 0x420037A0: nop

    // 0x420037A4: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x420037A8: nop

    // 0x420037AC: lw          $t5, 0x10($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X10);
    // 0x420037B0: nop

    // 0x420037B4: andi        $t6, $t5, 0x400
    ctx->r14 = ctx->r13 & 0X400;
    // 0x420037B8: beq         $t6, $zero, L_420037CC
    if (ctx->r14 == 0) {
        // 0x420037BC: lw          $t7, 0x58($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X58);
            goto L_420037CC;
    }
    // 0x420037BC: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
L_420037C0:
    // 0x420037C0: b           L_42003924
    // 0x420037C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_42003924;
    // 0x420037C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_420037C8:
    // 0x420037C8: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
L_420037CC:
    // 0x420037CC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x420037D0: beq         $t7, $at, L_420038E8
    if (ctx->r15 == ctx->r1) {
        // 0x420037D4: nop
    
            goto L_420038E8;
    }
    // 0x420037D4: nop

    // 0x420037D8: lw          $t8, 0x10($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X10);
    // 0x420037DC: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x420037E0: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x420037E4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x420037E8: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x420037EC: lw          $t9, 0x10($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X10);
    // 0x420037F0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x420037F4: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x420037F8: nop

    // 0x420037FC: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x42003800: lw          $t0, 0x10($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X10);
    // 0x42003804: nop

    // 0x42003808: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x4200380C: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x42003810: jal         0x420017CC
    // 0x42003814: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    ovl_blast_dark_17CC(rdram, ctx);
        goto after_2;
    // 0x42003814: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x42003818: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4200381C: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x42003820: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    // 0x42003824: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x42003828: addiu       $t4, $sp, 0x2C
    ctx->r12 = ADD32(ctx->r29, 0X2C);
    // 0x4200382C: bc1t        L_4200388C
    if (c1cs) {
        // 0x42003830: addiu       $a1, $zero, 0x18
        ctx->r5 = ADD32(0, 0X18);
            goto L_4200388C;
    }
    // 0x42003830: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x42003834: lw          $t1, 0x10($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X10);
    // 0x42003838: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x4200383C: lwc1        $f16, 0x0($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X0);
    // 0x42003840: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x42003844: div.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f10.fl);
    // 0x42003848: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x4200384C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x42003850: lw          $t2, 0x10($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X10);
    // 0x42003854: nop

    // 0x42003858: lwc1        $f6, 0x4($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X4);
    // 0x4200385C: nop

    // 0x42003860: div.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x42003864: mul.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x42003868: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x4200386C: lw          $t3, 0x10($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X10);
    // 0x42003870: nop

    // 0x42003874: lwc1        $f18, 0x8($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X8);
    // 0x42003878: nop

    // 0x4200387C: div.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f10.fl);
    // 0x42003880: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x42003884: b           L_42003898
    // 0x42003888: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
        goto L_42003898;
    // 0x42003888: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
L_4200388C:
    // 0x4200388C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x42003890: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x42003894: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
L_42003898:
    // 0x42003898: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x4200389C: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x420038A0: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x420038A4: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x420038A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x420038AC: sra         $t5, $v0, 8
    ctx->r13 = S32(SIGNED(ctx->r2) >> 8);
    // 0x420038B0: andi        $t6, $t5, 0xF
    ctx->r14 = ctx->r13 & 0XF;
    // 0x420038B4: beq         $t6, $zero, L_420038D4
    if (ctx->r14 == 0) {
        // 0x420038B8: addiu       $a2, $sp, 0x38
        ctx->r6 = ADD32(ctx->r29, 0X38);
            goto L_420038D4;
    }
    // 0x420038B8: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x420038BC: beq         $t6, $at, L_420038D4
    if (ctx->r14 == ctx->r1) {
        // 0x420038C0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_420038D4;
    }
    // 0x420038C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x420038C4: beq         $t6, $at, L_420038D4
    if (ctx->r14 == ctx->r1) {
        // 0x420038C8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_420038D4;
    }
    // 0x420038C8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x420038CC: bne         $t6, $at, L_420038E8
    if (ctx->r14 != ctx->r1) {
        // 0x420038D0: nop
    
            goto L_420038E8;
    }
    // 0x420038D0: nop

L_420038D4:
    // 0x420038D4: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x420038D8: jal         0x420006C4
    // 0x420038DC: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    ovl_blast_dark_6C4(rdram, ctx);
        goto after_3;
    // 0x420038DC: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    after_3:
    // 0x420038E0: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    // 0x420038E4: nop

L_420038E8:
    // 0x420038E8: lw          $t7, 0x4($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X4);
    // 0x420038EC: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x420038F0: sra         $t8, $t7, 12
    ctx->r24 = S32(SIGNED(ctx->r15) >> 12);
    // 0x420038F4: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x420038F8: bne         $t9, $zero, L_42003920
    if (ctx->r25 != 0) {
        // 0x420038FC: lw          $v0, 0x50($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X50);
            goto L_42003920;
    }
    // 0x420038FC: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x42003900: bne         $t0, $zero, L_42003918
    if (ctx->r8 != 0) {
        // 0x42003904: nop
    
            goto L_42003918;
    }
    // 0x42003904: nop

    // 0x42003908: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x4200390C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x42003910: beq         $t1, $at, L_42003920
    if (ctx->r9 == ctx->r1) {
        // 0x42003914: lw          $v0, 0x50($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X50);
            goto L_42003920;
    }
    // 0x42003914: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
L_42003918:
    // 0x42003918: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x4200391C: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
L_42003920:
    // 0x42003920: nop

L_42003924:
    // 0x42003924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42003928: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x4200392C: jr          $ra
    // 0x42003930: nop

    return;
    // 0x42003930: nop

;}
RECOMP_FUNC void ovl_blast_dark_3934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003934: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x42003938: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x4200393C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x42003940: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x42003944: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x42003948: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x4200394C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x42003950: lw          $s3, 0x68($a0)
    ctx->r19 = MEM_W(ctx->r4, 0X68);
    // 0x42003954: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x42003958: jal         0x42002FC8
    // 0x4200395C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    ovl_blast_dark_2FC8(rdram, ctx);
        goto after_0;
    // 0x4200395C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_0:
    // 0x42003960: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x42003964: addiu       $a1, $s2, 0x98
    ctx->r5 = ADD32(ctx->r18, 0X98);
    // 0x42003968: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x4200396C: jal         0x420035B4
    // 0x42003970: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_blast_dark_35B4(rdram, ctx);
        goto after_1;
    // 0x42003970: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x42003974: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x42003978: addiu       $a1, $s2, 0x7C
    ctx->r5 = ADD32(ctx->r18, 0X7C);
    // 0x4200397C: jal         0x42002BFC
    // 0x42003980: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_blast_dark_2BFC(rdram, ctx);
        goto after_2;
    // 0x42003980: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_2:
    // 0x42003984: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x42003988: addiu       $a1, $s2, 0x88
    ctx->r5 = ADD32(ctx->r18, 0X88);
    // 0x4200398C: jal         0x42002DD0
    // 0x42003990: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_blast_dark_2DD0(rdram, ctx);
        goto after_3;
    // 0x42003990: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_3:
    // 0x42003994: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x42003998: addiu       $a1, $s2, 0x84
    ctx->r5 = ADD32(ctx->r18, 0X84);
    // 0x4200399C: jal         0x4200322C
    // 0x420039A0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_blast_dark_322C(rdram, ctx);
        goto after_4;
    // 0x420039A0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_4:
    // 0x420039A4: lui         $s0, 0x4200
    ctx->r16 = S32(0X4200 << 16);
    // 0x420039A8: lui         $s4, 0x4200
    ctx->r20 = S32(0X4200 << 16);
    // 0x420039AC: addiu       $s4, $s4, 0x45B0
    ctx->r20 = ADD32(ctx->r20, 0X45B0);
    // 0x420039B0: addiu       $s0, $s0, 0x4598
    ctx->r16 = ADD32(ctx->r16, 0X4598);
    // 0x420039B4: addiu       $s1, $s2, 0xA8
    ctx->r17 = ADD32(ctx->r18, 0XA8);
L_420039B8:
    // 0x420039B8: lw          $a0, 0x74($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X74);
    // 0x420039BC: jal         0x420036D0
    // 0x420039C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_blast_dark_36D0(rdram, ctx);
        goto after_5;
    // 0x420039C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x420039C4: lw          $a3, 0x0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X0);
    // 0x420039C8: addiu       $t6, $v0, 0xA
    ctx->r14 = ADD32(ctx->r2, 0XA);
    // 0x420039CC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x420039D0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x420039D4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x420039D8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x420039DC: jal         0x42003328
    // 0x420039E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_blast_dark_3328(rdram, ctx);
        goto after_6;
    // 0x420039E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x420039E4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x420039E8: bne         $s0, $s4, L_420039B8
    if (ctx->r16 != ctx->r20) {
        // 0x420039EC: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_420039B8;
    }
    // 0x420039EC: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x420039F0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x420039F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x420039F8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x420039FC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x42003A00: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x42003A04: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x42003A08: jr          $ra
    // 0x42003A0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x42003A0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_blast_dark_3A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003A10: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x42003A14: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x42003A18: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x42003A1C: slt         $at, $a2, $a3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x42003A20: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x42003A24: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x42003A28: bne         $at, $zero, L_42003AF4
    if (ctx->r1 != 0) {
        // 0x42003A2C: sw          $ra, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r31;
            goto L_42003AF4;
    }
    // 0x42003A2C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x42003A30: bne         $a2, $a3, L_42003AF4
    if (ctx->r6 != ctx->r7) {
        // 0x42003A34: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_42003AF4;
    }
    // 0x42003A34: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x42003A38: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x42003A3C: jal         0x420006C4
    // 0x42003A40: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    ovl_blast_dark_6C4(rdram, ctx);
        goto after_0;
    // 0x42003A40: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_0:
    // 0x42003A44: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x42003A48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42003A4C: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x42003A50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003A54: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x42003A58: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x42003A5C: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x42003A60: addiu       $a2, $zero, 0x209
    ctx->r6 = ADD32(0, 0X209);
    // 0x42003A64: jal         0x42001104
    // 0x42003A68: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    ovl_blast_dark_1104(rdram, ctx);
        goto after_1;
    // 0x42003A68: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    after_1:
    // 0x42003A6C: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x42003A70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42003A74: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x42003A78: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x42003A7C: jal         0x42000F34
    // 0x42003A80: addiu       $a3, $zero, 0x209
    ctx->r7 = ADD32(0, 0X209);
    ovl_blast_dark_F34(rdram, ctx);
        goto after_2;
    // 0x42003A80: addiu       $a3, $zero, 0x209
    ctx->r7 = ADD32(0, 0X209);
    after_2:
    // 0x42003A84: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x42003A88: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x42003A8C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42003A90: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42003A94: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x42003A98: addiu       $t6, $zero, 0x1B
    ctx->r14 = ADD32(0, 0X1B);
    // 0x42003A9C: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x42003AA0: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x42003AA4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x42003AA8: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x42003AAC: swc1        $f19, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(19 - 1) * 2];
    // 0x42003AB0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x42003AB4: swc1        $f11, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x42003AB8: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x42003ABC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x42003AC0: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x42003AC4: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x42003AC8: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x42003ACC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x42003AD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x42003AD4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x42003AD8: jal         0x42000F34
    // 0x42003ADC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_3;
    // 0x42003ADC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_3:
    // 0x42003AE0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42003AE4: nop

    // 0x42003AE8: swc1        $f0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f0.u32l;
    // 0x42003AEC: swc1        $f0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f0.u32l;
    // 0x42003AF0: swc1        $f0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f0.u32l;
L_42003AF4:
    // 0x42003AF4: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x42003AF8: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x42003AFC: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x42003B00: jr          $ra
    // 0x42003B04: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x42003B04: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_blast_dark_3B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003B08: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x42003B0C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x42003B10: slt         $at, $a2, $a3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x42003B14: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x42003B18: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x42003B1C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x42003B20: bne         $at, $zero, L_42003D24
    if (ctx->r1 != 0) {
        // 0x42003B24: sw          $a2, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r6;
            goto L_42003D24;
    }
    // 0x42003B24: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x42003B28: bne         $a2, $a3, L_42003B70
    if (ctx->r6 != ctx->r7) {
        // 0x42003B2C: addiu       $a2, $zero, 0x1E1
        ctx->r6 = ADD32(0, 0X1E1);
            goto L_42003B70;
    }
    // 0x42003B2C: addiu       $a2, $zero, 0x1E1
    ctx->r6 = ADD32(0, 0X1E1);
    // 0x42003B30: jal         0x42001104
    // 0x42003B34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_dark_1104(rdram, ctx);
        goto after_0;
    // 0x42003B34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x42003B38: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x42003B3C: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x42003B40: addiu       $a2, $zero, 0x20A
    ctx->r6 = ADD32(0, 0X20A);
    // 0x42003B44: jal         0x42001104
    // 0x42003B48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_dark_1104(rdram, ctx);
        goto after_1;
    // 0x42003B48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x42003B4C: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x42003B50: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42003B54: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x42003B58: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    // 0x42003B5C: jal         0x42000F34
    // 0x42003B60: addiu       $a3, $zero, 0x20C
    ctx->r7 = ADD32(0, 0X20C);
    ovl_blast_dark_F34(rdram, ctx);
        goto after_2;
    // 0x42003B60: addiu       $a3, $zero, 0x20C
    ctx->r7 = ADD32(0, 0X20C);
    after_2:
    // 0x42003B64: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x42003B68: nop

    // 0x42003B6C: swc1        $f2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f2.u32l;
L_42003B70:
    // 0x42003B70: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x42003B74: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x42003B78: slti        $at, $t7, 0xD2
    ctx->r1 = SIGNED(ctx->r15) < 0XD2 ? 1 : 0;
    // 0x42003B7C: beq         $at, $zero, L_42003BDC
    if (ctx->r1 == 0) {
        // 0x42003B80: addiu       $a0, $zero, 0x13
        ctx->r4 = ADD32(0, 0X13);
            goto L_42003BDC;
    }
    // 0x42003B80: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x42003B84: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x42003B88: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x42003B8C: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x42003B90: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003B94: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x42003B98: nop

    // 0x42003B9C: bc1f        L_42003C28
    if (!c1cs) {
        // 0x42003BA0: nop
    
            goto L_42003C28;
    }
    // 0x42003BA0: nop

    // 0x42003BA4: lwc1        $f4, 0x4708($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4708);
    // 0x42003BA8: nop

    // 0x42003BAC: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x42003BB0: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x42003BB4: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x42003BB8: nop

    // 0x42003BBC: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x42003BC0: nop

    // 0x42003BC4: bc1f        L_42003C28
    if (!c1cs) {
        // 0x42003BC8: nop
    
            goto L_42003C28;
    }
    // 0x42003BC8: nop

    // 0x42003BCC: swc1        $f12, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f12.u32l;
    // 0x42003BD0: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x42003BD4: b           L_42003C2C
    // 0x42003BD8: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
        goto L_42003C2C;
    // 0x42003BD8: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
L_42003BDC:
    // 0x42003BDC: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x42003BE0: lui         $at, 0x3E00
    ctx->r1 = S32(0X3E00 << 16);
    // 0x42003BE4: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x42003BE8: nop

    // 0x42003BEC: bc1t        L_42003C28
    if (c1cs) {
        // 0x42003BF0: nop
    
            goto L_42003C28;
    }
    // 0x42003BF0: nop

    // 0x42003BF4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42003BF8: nop

    // 0x42003BFC: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x42003C00: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x42003C04: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x42003C08: nop

    // 0x42003C0C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x42003C10: nop

    // 0x42003C14: bc1f        L_42003C28
    if (!c1cs) {
        // 0x42003C18: nop
    
            goto L_42003C28;
    }
    // 0x42003C18: nop

    // 0x42003C1C: swc1        $f2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f2.u32l;
    // 0x42003C20: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x42003C24: nop

L_42003C28:
    // 0x42003C28: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
L_42003C2C:
    // 0x42003C2C: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x42003C30: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x42003C34: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x42003C38: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x42003C3C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003C40: jal         0x42000F34
    // 0x42003C44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_3;
    // 0x42003C44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x42003C48: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x42003C4C: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x42003C50: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x42003C54: jal         0x42000F34
    // 0x42003C58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_4;
    // 0x42003C58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x42003C5C: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x42003C60: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x42003C64: slti        $at, $t8, 0xF5
    ctx->r1 = SIGNED(ctx->r24) < 0XF5 ? 1 : 0;
    // 0x42003C68: beq         $at, $zero, L_42003C8C
    if (ctx->r1 == 0) {
        // 0x42003C6C: addiu       $at, $zero, 0xF5
        ctx->r1 = ADD32(0, 0XF5);
            goto L_42003C8C;
    }
    // 0x42003C6C: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x42003C70: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x42003C74: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x42003C78: jal         0x42002BB8
    // 0x42003C7C: nop

    ovl_blast_dark_2BB8(rdram, ctx);
        goto after_5;
    // 0x42003C7C: nop

    after_5:
    // 0x42003C80: b           L_42003CE0
    // 0x42003C84: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
        goto L_42003CE0;
    // 0x42003C84: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003C88: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
L_42003C8C:
    // 0x42003C8C: bne         $t9, $at, L_42003CDC
    if (ctx->r25 != ctx->r1) {
        // 0x42003C90: nop
    
            goto L_42003CDC;
    }
    // 0x42003C90: nop

    // 0x42003C94: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x42003C98: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x42003C9C: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x42003CA0: jal         0x42001874
    // 0x42003CA4: nop

    ovl_blast_dark_1874(rdram, ctx);
        goto after_6;
    // 0x42003CA4: nop

    after_6:
    // 0x42003CA8: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x42003CAC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x42003CB0: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x42003CB4: jal         0x42001874
    // 0x42003CB8: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    ovl_blast_dark_1874(rdram, ctx);
        goto after_7;
    // 0x42003CB8: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_7:
    // 0x42003CBC: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x42003CC0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x42003CC4: ori         $a0, $zero, 0x8B00
    ctx->r4 = 0 | 0X8B00;
    // 0x42003CC8: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x42003CCC: sw          $a0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r4;
    // 0x42003CD0: sw          $a0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r4;
    // 0x42003CD4: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
    // 0x42003CD8: swc1        $f2, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f2.u32l;
L_42003CDC:
    // 0x42003CDC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
L_42003CE0:
    // 0x42003CE0: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x42003CE4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x42003CE8: jal         0x42000F34
    // 0x42003CEC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_8;
    // 0x42003CEC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x42003CF0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003CF4: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x42003CF8: lwc1        $f7, 0x4710($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X4710);
    // 0x42003CFC: lwc1        $f6, 0x4714($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4714);
    // 0x42003D00: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x42003D04: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x42003D08: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x42003D0C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x42003D10: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x42003D14: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x42003D18: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003D1C: jal         0x42000F34
    // 0x42003D20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_9;
    // 0x42003D20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
L_42003D24:
    // 0x42003D24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x42003D28: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x42003D2C: jr          $ra
    // 0x42003D30: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x42003D30: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_blast_dark_3D34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003D34: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x42003D38: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x42003D3C: slt         $at, $a2, $a3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x42003D40: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x42003D44: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x42003D48: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x42003D4C: bne         $at, $zero, L_42004030
    if (ctx->r1 != 0) {
        // 0x42003D50: sw          $a2, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r6;
            goto L_42004030;
    }
    // 0x42003D50: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x42003D54: bne         $a2, $a3, L_42003E0C
    if (ctx->r6 != ctx->r7) {
        // 0x42003D58: nop
    
            goto L_42003E0C;
    }
    // 0x42003D58: nop

    // 0x42003D5C: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x42003D60: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x42003D64: beq         $t7, $at, L_42003D78
    if (ctx->r15 == ctx->r1) {
        // 0x42003D68: lw          $a0, 0x68($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X68);
            goto L_42003D78;
    }
    // 0x42003D68: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x42003D6C: jal         0x42000F50
    // 0x42003D70: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    ovl_blast_dark_F50(rdram, ctx);
        goto after_0;
    // 0x42003D70: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x42003D74: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
L_42003D78:
    // 0x42003D78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x42003D7C: addiu       $a2, $zero, 0x208
    ctx->r6 = ADD32(0, 0X208);
    // 0x42003D80: jal         0x42001104
    // 0x42003D84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_dark_1104(rdram, ctx);
        goto after_1;
    // 0x42003D84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x42003D88: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x42003D8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42003D90: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x42003D94: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x42003D98: jal         0x42000F34
    // 0x42003D9C: addiu       $a3, $zero, 0x208
    ctx->r7 = ADD32(0, 0X208);
    ovl_blast_dark_F34(rdram, ctx);
        goto after_2;
    // 0x42003D9C: addiu       $a3, $zero, 0x208
    ctx->r7 = ADD32(0, 0X208);
    after_2:
    // 0x42003DA0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003DA4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42003DA8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x42003DAC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42003DB0: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x42003DB4: addiu       $t9, $zero, 0x1B
    ctx->r25 = ADD32(0, 0X1B);
    // 0x42003DB8: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x42003DBC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x42003DC0: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x42003DC4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x42003DC8: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x42003DCC: swc1        $f9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x42003DD0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x42003DD4: swc1        $f5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x42003DD8: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x42003DDC: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x42003DE0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x42003DE4: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x42003DE8: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x42003DEC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x42003DF0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x42003DF4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x42003DF8: jal         0x42000F34
    // 0x42003DFC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_3;
    // 0x42003DFC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_3:
    // 0x42003E00: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x42003E04: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x42003E08: swc1        $f2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f2.u32l;
L_42003E0C:
    // 0x42003E0C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x42003E10: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x42003E14: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x42003E18: beq         $at, $zero, L_42003FF4
    if (ctx->r1 == 0) {
        // 0x42003E1C: slti        $at, $v0, 0xF
        ctx->r1 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
            goto L_42003FF4;
    }
    // 0x42003E1C: slti        $at, $v0, 0xF
    ctx->r1 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
    // 0x42003E20: beq         $at, $zero, L_42003F0C
    if (ctx->r1 == 0) {
        // 0x42003E24: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_42003F0C;
    }
    // 0x42003E24: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x42003E28: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x42003E2C: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42003E30: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003E34: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x42003E38: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x42003E3C: bc1f        L_42003FEC
    if (!c1cs) {
        // 0x42003E40: addiu       $t4, $v0, 0x1
        ctx->r12 = ADD32(ctx->r2, 0X1);
            goto L_42003FEC;
    }
    // 0x42003E40: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x42003E44: lwc1        $f10, 0x4718($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4718);
    // 0x42003E48: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x42003E4C: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x42003E50: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x42003E54: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42003E58: nop

    // 0x42003E5C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x42003E60: nop

    // 0x42003E64: bc1f        L_42003E78
    if (!c1cs) {
        // 0x42003E68: nop
    
            goto L_42003E78;
    }
    // 0x42003E68: nop

    // 0x42003E6C: swc1        $f2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f2.u32l;
    // 0x42003E70: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42003E74: nop

L_42003E78:
    // 0x42003E78: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x42003E7C: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x42003E80: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003E84: cvt.w.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = CVT_W_S(ctx->f0.fl);
    // 0x42003E88: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x42003E8C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x42003E90: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x42003E94: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x42003E98: beq         $a3, $zero, L_42003EE4
    if (ctx->r7 == 0) {
        // 0x42003E9C: nop
    
            goto L_42003EE4;
    }
    // 0x42003E9C: nop

    // 0x42003EA0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42003EA4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x42003EA8: sub.s       $f18, $f0, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x42003EAC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x42003EB0: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x42003EB4: nop

    // 0x42003EB8: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x42003EBC: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x42003EC0: nop

    // 0x42003EC4: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x42003EC8: bne         $a3, $zero, L_42003EDC
    if (ctx->r7 != 0) {
        // 0x42003ECC: nop
    
            goto L_42003EDC;
    }
    // 0x42003ECC: nop

    // 0x42003ED0: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x42003ED4: b           L_42003EF4
    // 0x42003ED8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_42003EF4;
    // 0x42003ED8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_42003EDC:
    // 0x42003EDC: b           L_42003EF4
    // 0x42003EE0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_42003EF4;
    // 0x42003EE0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_42003EE4:
    // 0x42003EE4: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x42003EE8: nop

    // 0x42003EEC: bltz        $a3, L_42003EDC
    if (SIGNED(ctx->r7) < 0) {
        // 0x42003EF0: nop
    
            goto L_42003EDC;
    }
    // 0x42003EF0: nop

L_42003EF4:
    // 0x42003EF4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x42003EF8: jal         0x42000F34
    // 0x42003EFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_4;
    // 0x42003EFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x42003F00: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x42003F04: b           L_42003FEC
    // 0x42003F08: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
        goto L_42003FEC;
    // 0x42003F08: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
L_42003F0C:
    // 0x42003F0C: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42003F10: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003F14: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x42003F18: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x42003F1C: bc1f        L_42003FEC
    if (!c1cs) {
        // 0x42003F20: addiu       $t4, $v0, 0x1
        ctx->r12 = ADD32(ctx->r2, 0X1);
            goto L_42003FEC;
    }
    // 0x42003F20: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x42003F24: lwc1        $f4, 0x471C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X471C);
    // 0x42003F28: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x42003F2C: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x42003F30: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x42003F34: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42003F38: nop

    // 0x42003F3C: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x42003F40: nop

    // 0x42003F44: bc1f        L_42003F58
    if (!c1cs) {
        // 0x42003F48: nop
    
            goto L_42003F58;
    }
    // 0x42003F48: nop

    // 0x42003F4C: swc1        $f2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f2.u32l;
    // 0x42003F50: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42003F54: nop

L_42003F58:
    // 0x42003F58: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x42003F5C: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x42003F60: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003F64: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x42003F68: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x42003F6C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x42003F70: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x42003F74: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x42003F78: beq         $a3, $zero, L_42003FC4
    if (ctx->r7 == 0) {
        // 0x42003F7C: nop
    
            goto L_42003FC4;
    }
    // 0x42003F7C: nop

    // 0x42003F80: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42003F84: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x42003F88: sub.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x42003F8C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x42003F90: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x42003F94: nop

    // 0x42003F98: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x42003F9C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x42003FA0: nop

    // 0x42003FA4: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x42003FA8: bne         $a3, $zero, L_42003FBC
    if (ctx->r7 != 0) {
        // 0x42003FAC: nop
    
            goto L_42003FBC;
    }
    // 0x42003FAC: nop

    // 0x42003FB0: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x42003FB4: b           L_42003FD4
    // 0x42003FB8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_42003FD4;
    // 0x42003FB8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_42003FBC:
    // 0x42003FBC: b           L_42003FD4
    // 0x42003FC0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_42003FD4;
    // 0x42003FC0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_42003FC4:
    // 0x42003FC4: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x42003FC8: nop

    // 0x42003FCC: bltz        $a3, L_42003FBC
    if (SIGNED(ctx->r7) < 0) {
        // 0x42003FD0: nop
    
            goto L_42003FBC;
    }
    // 0x42003FD0: nop

L_42003FD4:
    // 0x42003FD4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x42003FD8: jal         0x42000F34
    // 0x42003FDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_5;
    // 0x42003FDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x42003FE0: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x42003FE4: nop

    // 0x42003FE8: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
L_42003FEC:
    // 0x42003FEC: b           L_42004030
    // 0x42003FF0: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
        goto L_42004030;
    // 0x42003FF0: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
L_42003FF4:
    // 0x42003FF4: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x42003FF8: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x42003FFC: slti        $at, $t5, 0xE6
    ctx->r1 = SIGNED(ctx->r13) < 0XE6 ? 1 : 0;
    // 0x42004000: beq         $at, $zero, L_42004018
    if (ctx->r1 == 0) {
        // 0x42004004: slti        $at, $t6, 0xE6
        ctx->r1 = SIGNED(ctx->r14) < 0XE6 ? 1 : 0;
            goto L_42004018;
    }
    // 0x42004004: slti        $at, $t6, 0xE6
    ctx->r1 = SIGNED(ctx->r14) < 0XE6 ? 1 : 0;
    // 0x42004008: swc1        $f2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f2.u32l;
    // 0x4200400C: b           L_42004030
    // 0x42004010: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
        goto L_42004030;
    // 0x42004010: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x42004014: slti        $at, $t6, 0xE6
    ctx->r1 = SIGNED(ctx->r14) < 0XE6 ? 1 : 0;
L_42004018:
    // 0x42004018: bne         $at, $zero, L_42004030
    if (ctx->r1 != 0) {
        // 0x4200401C: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_42004030;
    }
    // 0x4200401C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42004020: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42004024: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42004028: jal         0x42000F34
    // 0x4200402C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_6;
    // 0x4200402C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
L_42004030:
    // 0x42004030: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x42004034: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x42004038: jr          $ra
    // 0x4200403C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x4200403C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_blast_dark_4040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42004040: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x42004044: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x42004048: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x4200404C: addiu       $a2, $zero, 0x214
    ctx->r6 = ADD32(0, 0X214);
    // 0x42004050: jal         0x42001104
    // 0x42004054: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_dark_1104(rdram, ctx);
        goto after_0;
    // 0x42004054: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x42004058: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x4200405C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x42004060: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x42004064: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42004068: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x4200406C: jal         0x42000F34
    // 0x42004070: addiu       $a3, $zero, 0x214
    ctx->r7 = ADD32(0, 0X214);
    ovl_blast_dark_F34(rdram, ctx);
        goto after_1;
    // 0x42004070: addiu       $a3, $zero, 0x214
    ctx->r7 = ADD32(0, 0X214);
    after_1:
    // 0x42004074: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x42004078: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x4200407C: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x42004080: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42004084: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x42004088: jal         0x42000F34
    // 0x4200408C: addiu       $a3, $zero, 0x215
    ctx->r7 = ADD32(0, 0X215);
    ovl_blast_dark_F34(rdram, ctx);
        goto after_2;
    // 0x4200408C: addiu       $a3, $zero, 0x215
    ctx->r7 = ADD32(0, 0X215);
    after_2:
    // 0x42004090: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x42004094: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42004098: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x4200409C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x420040A0: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x420040A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x420040A8: addiu       $t0, $zero, 0x1B
    ctx->r8 = ADD32(0, 0X1B);
    // 0x420040AC: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
    // 0x420040B0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x420040B4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x420040B8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x420040BC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x420040C0: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x420040C4: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x420040C8: swc1        $f11, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x420040CC: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x420040D0: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x420040D4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x420040D8: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x420040DC: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x420040E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x420040E4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x420040E8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x420040EC: jal         0x42000F34
    // 0x420040F0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_3;
    // 0x420040F0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_3:
    // 0x420040F4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x420040F8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x420040FC: jr          $ra
    // 0x42004100: nop

    return;
    // 0x42004100: nop

;}
RECOMP_FUNC void ovl_blast_dark_4104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42004104: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x42004108: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x4200410C: slt         $at, $a2, $a3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x42004110: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x42004114: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x42004118: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x4200411C: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x42004120: bne         $at, $zero, L_42004250
    if (ctx->r1 != 0) {
        // 0x42004124: sw          $a3, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r7;
            goto L_42004250;
    }
    // 0x42004124: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x42004128: bne         $a2, $a3, L_42004218
    if (ctx->r6 != ctx->r7) {
        // 0x4200412C: addiu       $a1, $zero, 0xE
        ctx->r5 = ADD32(0, 0XE);
            goto L_42004218;
    }
    // 0x4200412C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x42004130: jal         0x420017CC
    // 0x42004134: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    ovl_blast_dark_17CC(rdram, ctx);
        goto after_0;
    // 0x42004134: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_0:
    // 0x42004138: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x4200413C: jal         0x42004040
    // 0x42004140: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_blast_dark_4040(rdram, ctx);
        goto after_1;
    // 0x42004140: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x42004144: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x42004148: jal         0x42004040
    // 0x4200414C: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    ovl_blast_dark_4040(rdram, ctx);
        goto after_2;
    // 0x4200414C: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    after_2:
    // 0x42004150: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x42004154: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x42004158: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x4200415C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42004160: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x42004164: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42004168: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4200416C: lwc1        $f17, 0x4720($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X4720);
    // 0x42004170: lwc1        $f16, 0x4724($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4724);
    // 0x42004174: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x42004178: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x4200417C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x42004180: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x42004184: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x42004188: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x4200418C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x42004190: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    // 0x42004194: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x42004198: swc1        $f2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f2.u32l;
    // 0x4200419C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x420041A0: addiu       $t8, $sp, 0x34
    ctx->r24 = ADD32(ctx->r29, 0X34);
    // 0x420041A4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x420041A8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x420041AC: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x420041B0: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x420041B4: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x420041B8: jal         0x42000F34
    // 0x420041BC: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_3;
    // 0x420041BC: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    after_3:
    // 0x420041C0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x420041C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x420041C8: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x420041CC: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x420041D0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x420041D4: lwc1        $f19, 0x4728($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X4728);
    // 0x420041D8: lwc1        $f18, 0x472C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X472C);
    // 0x420041DC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x420041E0: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x420041E4: addiu       $t9, $sp, 0x34
    ctx->r25 = ADD32(ctx->r29, 0X34);
    // 0x420041E8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x420041EC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x420041F0: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x420041F4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x420041F8: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x420041FC: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x42004200: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x42004204: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x42004208: jal         0x42000F34
    // 0x4200420C: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_4;
    // 0x4200420C: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    after_4:
    // 0x42004210: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x42004214: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
L_42004218:
    // 0x42004218: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x4200421C: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x42004220: addiu       $t2, $t1, 0x4B
    ctx->r10 = ADD32(ctx->r9, 0X4B);
    // 0x42004224: bne         $t2, $t3, L_42004250
    if (ctx->r10 != ctx->r11) {
        // 0x42004228: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_42004250;
    }
    // 0x42004228: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x4200422C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42004230: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42004234: jal         0x42000F34
    // 0x42004238: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_5;
    // 0x42004238: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x4200423C: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x42004240: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42004244: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42004248: jal         0x42000F34
    // 0x4200424C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_dark_F34(rdram, ctx);
        goto after_6;
    // 0x4200424C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
L_42004250:
    // 0x42004250: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x42004254: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x42004258: jr          $ra
    // 0x4200425C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x4200425C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_blast_dark_4260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42004260: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x42004264: slti        $at, $a1, 0x104
    ctx->r1 = SIGNED(ctx->r5) < 0X104 ? 1 : 0;
    // 0x42004268: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4200426C: bne         $at, $zero, L_420042C8
    if (ctx->r1 != 0) {
        // 0x42004270: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_420042C8;
    }
    // 0x42004270: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x42004274: lui         $at, 0x414C
    ctx->r1 = S32(0X414C << 16);
    // 0x42004278: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4200427C: lwc1        $f4, 0xE0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x42004280: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x42004284: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x42004288: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x4200428C: swc1        $f8, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f8.u32l;
    // 0x42004290: lwc1        $f0, 0xE0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x42004294: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x42004298: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x4200429C: nop

    // 0x420042A0: bc1f        L_420042B4
    if (!c1cs) {
        // 0x420042A4: nop
    
            goto L_420042B4;
    }
    // 0x420042A4: nop

    // 0x420042A8: swc1        $f2, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f2.u32l;
    // 0x420042AC: lwc1        $f0, 0xE0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x420042B0: nop

L_420042B4:
    // 0x420042B4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x420042B8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x420042BC: lw          $a0, 0xC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XC);
    // 0x420042C0: jal         0x420006C4
    // 0x420042C4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_blast_dark_6C4(rdram, ctx);
        goto after_0;
    // 0x420042C4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
L_420042C8:
    // 0x420042C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420042CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x420042D0: jr          $ra
    // 0x420042D4: nop

    return;
    // 0x420042D4: nop

;}
RECOMP_FUNC void ovl_blast_dark_42D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420042D8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x420042DC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x420042E0: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x420042E4: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x420042E8: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x420042EC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x420042F0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x420042F4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x420042F8: lw          $s2, 0x68($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X68);
    // 0x420042FC: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x42004300: jal         0x42002FC8
    // 0x42004304: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    ovl_blast_dark_2FC8(rdram, ctx);
        goto after_0;
    // 0x42004304: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x42004308: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x4200430C: jal         0x42004260
    // 0x42004310: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    ovl_blast_dark_4260(rdram, ctx);
        goto after_1;
    // 0x42004310: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x42004314: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x42004318: addiu       $a1, $s3, 0x7C
    ctx->r5 = ADD32(ctx->r19, 0X7C);
    // 0x4200431C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x42004320: jal         0x42003A10
    // 0x42004324: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    ovl_blast_dark_3A10(rdram, ctx);
        goto after_2;
    // 0x42004324: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_2:
    // 0x42004328: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x4200432C: addiu       $a1, $s3, 0x88
    ctx->r5 = ADD32(ctx->r19, 0X88);
    // 0x42004330: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x42004334: jal         0x42003B08
    // 0x42004338: addiu       $a3, $zero, 0x46
    ctx->r7 = ADD32(0, 0X46);
    ovl_blast_dark_3B08(rdram, ctx);
        goto after_3;
    // 0x42004338: addiu       $a3, $zero, 0x46
    ctx->r7 = ADD32(0, 0X46);
    after_3:
    // 0x4200433C: slti        $at, $s2, 0x82
    ctx->r1 = SIGNED(ctx->r18) < 0X82 ? 1 : 0;
    // 0x42004340: beq         $at, $zero, L_42004394
    if (ctx->r1 == 0) {
        // 0x42004344: addiu       $s4, $sp, 0x40
        ctx->r20 = ADD32(ctx->r29, 0X40);
            goto L_42004394;
    }
    // 0x42004344: addiu       $s4, $sp, 0x40
    ctx->r20 = ADD32(ctx->r29, 0X40);
    // 0x42004348: lui         $s1, 0x4200
    ctx->r17 = S32(0X4200 << 16);
    // 0x4200434C: lui         $s4, 0x4200
    ctx->r20 = S32(0X4200 << 16);
    // 0x42004350: addiu       $s4, $s4, 0x45C4
    ctx->r20 = ADD32(ctx->r20, 0X45C4);
    // 0x42004354: addiu       $s1, $s1, 0x45B0
    ctx->r17 = ADD32(ctx->r17, 0X45B0);
    // 0x42004358: addiu       $s0, $s3, 0xA4
    ctx->r16 = ADD32(ctx->r19, 0XA4);
L_4200435C:
    // 0x4200435C: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x42004360: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x42004364: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x42004368: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x4200436C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x42004370: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x42004374: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x42004378: jal         0x42003328
    // 0x4200437C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_blast_dark_3328(rdram, ctx);
        goto after_4;
    // 0x4200437C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_4:
    // 0x42004380: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x42004384: bne         $s1, $s4, L_4200435C
    if (ctx->r17 != ctx->r20) {
        // 0x42004388: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_4200435C;
    }
    // 0x42004388: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x4200438C: b           L_420043E0
    // 0x42004390: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
        goto L_420043E0;
    // 0x42004390: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_42004394:
    // 0x42004394: lw          $a0, 0xC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XC);
    // 0x42004398: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4200439C: jal         0x420006C4
    // 0x420043A0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    ovl_blast_dark_6C4(rdram, ctx);
        goto after_5;
    // 0x420043A0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_5:
    // 0x420043A4: lui         $s1, 0x4200
    ctx->r17 = S32(0X4200 << 16);
    // 0x420043A8: lui         $s5, 0x4200
    ctx->r21 = S32(0X4200 << 16);
    // 0x420043AC: addiu       $s5, $s5, 0x45D8
    ctx->r21 = ADD32(ctx->r21, 0X45D8);
    // 0x420043B0: addiu       $s1, $s1, 0x45C4
    ctx->r17 = ADD32(ctx->r17, 0X45C4);
    // 0x420043B4: addiu       $s0, $s3, 0xA4
    ctx->r16 = ADD32(ctx->r19, 0XA4);
L_420043B8:
    // 0x420043B8: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x420043BC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x420043C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x420043C4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x420043C8: jal         0x42003D34
    // 0x420043CC: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    ovl_blast_dark_3D34(rdram, ctx);
        goto after_6;
    // 0x420043CC: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    after_6:
    // 0x420043D0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x420043D4: bne         $s1, $s5, L_420043B8
    if (ctx->r17 != ctx->r21) {
        // 0x420043D8: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_420043B8;
    }
    // 0x420043D8: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x420043DC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_420043E0:
    // 0x420043E0: addiu       $a1, $s3, 0x98
    ctx->r5 = ADD32(ctx->r19, 0X98);
    // 0x420043E4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x420043E8: jal         0x42004104
    // 0x420043EC: addiu       $a3, $zero, 0x96
    ctx->r7 = ADD32(0, 0X96);
    ovl_blast_dark_4104(rdram, ctx);
        goto after_7;
    // 0x420043EC: addiu       $a3, $zero, 0x96
    ctx->r7 = ADD32(0, 0X96);
    after_7:
    // 0x420043F0: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x420043F4: bne         $s2, $at, L_42004404
    if (ctx->r18 != ctx->r1) {
        // 0x420043F8: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_42004404;
    }
    // 0x420043F8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x420043FC: jal         0x4200148C
    // 0x42004400: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    ovl_blast_dark_148C(rdram, ctx);
        goto after_8;
    // 0x42004400: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_8:
L_42004404:
    // 0x42004404: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x42004408: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x4200440C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x42004410: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x42004414: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x42004418: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x4200441C: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x42004420: jr          $ra
    // 0x42004424: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x42004424: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_blast_elec_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000000: lui         $v0, 0x4200
    ctx->r2 = S32(0X4200 << 16);
    // 0x42000004: jr          $ra
    // 0x42000008: addiu       $v0, $v0, 0x2C20
    ctx->r2 = ADD32(ctx->r2, 0X2C20);
    return;
    // 0x42000008: addiu       $v0, $v0, 0x2C20
    ctx->r2 = ADD32(ctx->r2, 0X2C20);
    // 0x4200000C: nop

;}
RECOMP_FUNC void ovl_blast_elec_10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_elec_1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_elec_28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_elec_34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_elec_40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_elec_4C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_elec_58(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_elec_64(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_elec_70(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_elec_7C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_elec_88(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_elec_94(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_elec_A0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_elec_AC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_elec_B8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_elec_C4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_elec_D0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_elec_DC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_elec_E8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_elec_F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420000F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420000F8: jr          $t1
    // 0x420000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
;}
RECOMP_FUNC void ovl_blast_elec_100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000100: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000104: jr          $t1
    // 0x42000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
;}
RECOMP_FUNC void ovl_blast_elec_10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200010C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000110: jr          $t1
    // 0x42000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
;}
RECOMP_FUNC void ovl_blast_elec_118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000118: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200011C: jr          $t1
    // 0x42000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
;}
RECOMP_FUNC void ovl_blast_elec_124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000124: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000128: jr          $t1
    // 0x4200012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
;}
