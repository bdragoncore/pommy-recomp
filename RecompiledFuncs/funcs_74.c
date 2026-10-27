#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_blast_light_2640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002640: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002644: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002648: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x4200264C: nop

    // 0x42002650: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x42002654: sltiu       $at, $t7, 0x16
    ctx->r1 = ctx->r15 < 0X16 ? 1 : 0;
    // 0x42002658: beq         $at, $zero, L_42002700
    if (ctx->r1 == 0) {
        // 0x4200265C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_42002700;
    }
    // 0x4200265C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x42002660: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002664: addu        $at, $at, $t7
    gpr jr_addend_42002670 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x42002668: lw          $t7, 0x41E0($at)
    ctx->r15 = ADD32(ctx->r1, 0X41E0);
    // 0x4200266C: nop

    // 0x42002670: jr          $t7
    // 0x42002674: nop

    switch (jr_addend_42002670 >> 2) {
        case 0: goto L_42002678; break;
        case 1: goto L_42002700; break;
        case 2: goto L_42002700; break;
        case 3: goto L_420026D8; break;
        case 4: goto L_42002700; break;
        case 5: goto L_420026E8; break;
        case 6: goto L_42002688; break;
        case 7: goto L_42002698; break;
        case 8: goto L_42002700; break;
        case 9: goto L_42002700; break;
        case 10: goto L_420026C8; break;
        case 11: goto L_420026B8; break;
        case 12: goto L_42002700; break;
        case 13: goto L_42002700; break;
        case 14: goto L_42002700; break;
        case 15: goto L_42002700; break;
        case 16: goto L_42002700; break;
        case 17: goto L_42002700; break;
        case 18: goto L_42002700; break;
        case 19: goto L_420026F8; break;
        case 20: goto L_420026A8; break;
        case 21: goto L_42002700; break;
        default: switch_error(__func__, 0x42002670, 0x420041E0);
    }
    // 0x42002674: nop

L_42002678:
    // 0x42002678: jal         0x420020B4
    // 0x4200267C: nop

    ovl_blast_light_20B4(rdram, ctx);
        goto after_0;
    // 0x4200267C: nop

    after_0:
    // 0x42002680: b           L_42002704
    // 0x42002684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x42002684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002688:
    // 0x42002688: jal         0x42002014
    // 0x4200268C: nop

    ovl_blast_light_2014(rdram, ctx);
        goto after_1;
    // 0x4200268C: nop

    after_1:
    // 0x42002690: b           L_42002704
    // 0x42002694: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x42002694: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002698:
    // 0x42002698: jal         0x42001FEC
    // 0x4200269C: nop

    ovl_blast_light_1FEC(rdram, ctx);
        goto after_2;
    // 0x4200269C: nop

    after_2:
    // 0x420026A0: b           L_42002704
    // 0x420026A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x420026A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420026A8:
    // 0x420026A8: jal         0x42001FB0
    // 0x420026AC: nop

    ovl_blast_light_1FB0(rdram, ctx);
        goto after_3;
    // 0x420026AC: nop

    after_3:
    // 0x420026B0: b           L_42002704
    // 0x420026B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x420026B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420026B8:
    // 0x420026B8: jal         0x42001E64
    // 0x420026BC: nop

    ovl_blast_light_1E64(rdram, ctx);
        goto after_4;
    // 0x420026BC: nop

    after_4:
    // 0x420026C0: b           L_42002704
    // 0x420026C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x420026C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420026C8:
    // 0x420026C8: jal         0x42001C3C
    // 0x420026CC: nop

    ovl_blast_light_1C3C(rdram, ctx);
        goto after_5;
    // 0x420026CC: nop

    after_5:
    // 0x420026D0: b           L_42002704
    // 0x420026D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x420026D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420026D8:
    // 0x420026D8: jal         0x42001B64
    // 0x420026DC: nop

    ovl_blast_light_1B64(rdram, ctx);
        goto after_6;
    // 0x420026DC: nop

    after_6:
    // 0x420026E0: b           L_42002704
    // 0x420026E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x420026E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420026E8:
    // 0x420026E8: jal         0x42001B38
    // 0x420026EC: nop

    ovl_blast_light_1B38(rdram, ctx);
        goto after_7;
    // 0x420026EC: nop

    after_7:
    // 0x420026F0: b           L_42002704
    // 0x420026F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x420026F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420026F8:
    // 0x420026F8: jal         0x42001ADC
    // 0x420026FC: nop

    ovl_blast_light_1ADC(rdram, ctx);
        goto after_8;
    // 0x420026FC: nop

    after_8:
L_42002700:
    // 0x42002700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002704:
    // 0x42002704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002708: jr          $ra
    // 0x4200270C: nop

    return;
    // 0x4200270C: nop

;}
RECOMP_FUNC void ovl_blast_light_2710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002710: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002718: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x4200271C: nop

    // 0x42002720: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x42002724: sltiu       $at, $t6, 0xA
    ctx->r1 = ctx->r14 < 0XA ? 1 : 0;
    // 0x42002728: beq         $at, $zero, L_42002778
    if (ctx->r1 == 0) {
        // 0x4200272C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_42002778;
    }
    // 0x4200272C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x42002730: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002734: addu        $at, $at, $t6
    gpr jr_addend_42002740 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x42002738: lw          $t6, 0x4238($at)
    ctx->r14 = ADD32(ctx->r1, 0X4238);
    // 0x4200273C: nop

    // 0x42002740: jr          $t6
    // 0x42002744: nop

    switch (jr_addend_42002740 >> 2) {
        case 0: goto L_42002748; break;
        case 1: goto L_42002758; break;
        case 2: goto L_42002768; break;
        case 3: goto L_42002758; break;
        case 4: goto L_42002758; break;
        case 5: goto L_42002758; break;
        case 6: goto L_42002758; break;
        case 7: goto L_42002758; break;
        case 8: goto L_42002758; break;
        case 9: goto L_42002758; break;
        default: switch_error(__func__, 0x42002740, 0x42004238);
    }
    // 0x42002744: nop

L_42002748:
    // 0x42002748: jal         0x42002640
    // 0x4200274C: nop

    ovl_blast_light_2640(rdram, ctx);
        goto after_0;
    // 0x4200274C: nop

    after_0:
    // 0x42002750: b           L_42002788
    // 0x42002754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002788;
    // 0x42002754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002758:
    // 0x42002758: jal         0x42002640
    // 0x4200275C: nop

    ovl_blast_light_2640(rdram, ctx);
        goto after_1;
    // 0x4200275C: nop

    after_1:
    // 0x42002760: b           L_42002788
    // 0x42002764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002788;
    // 0x42002764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002768:
    // 0x42002768: jal         0x42002640
    // 0x4200276C: nop

    ovl_blast_light_2640(rdram, ctx);
        goto after_2;
    // 0x4200276C: nop

    after_2:
    // 0x42002770: b           L_42002788
    // 0x42002774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002788;
    // 0x42002774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002778:
    // 0x42002778: lui         $a0, 0x4200
    ctx->r4 = S32(0X4200 << 16);
    // 0x4200277C: jal         0x4200001C
    // 0x42002780: addiu       $a0, $a0, 0x4190
    ctx->r4 = ADD32(ctx->r4, 0X4190);
    ovl_blast_light_1C(rdram, ctx);
        goto after_3;
    // 0x42002780: addiu       $a0, $a0, 0x4190
    ctx->r4 = ADD32(ctx->r4, 0X4190);
    after_3:
    // 0x42002784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002788:
    // 0x42002788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4200278C: jr          $ra
    // 0x42002790: nop

    return;
    // 0x42002790: nop

    // 0x42002794: nop

    // 0x42002798: nop

    // 0x4200279C: nop

;}
RECOMP_FUNC void ovl_blast_light_27A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420027A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420027A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420027A8: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x420027AC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x420027B0: bne         $t6, $at, L_420027C8
    if (ctx->r14 != ctx->r1) {
        // 0x420027B4: nop
    
            goto L_420027C8;
    }
    // 0x420027B4: nop

    // 0x420027B8: jal         0x420037A0
    // 0x420027BC: nop

    ovl_blast_light_37A0(rdram, ctx);
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
    // 0x420027C8: jal         0x42003E9C
    // 0x420027CC: nop

    ovl_blast_light_3E9C(rdram, ctx);
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
RECOMP_FUNC void ovl_blast_light_27E0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_light_27EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420027EC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x420027F0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x420027F4: jr          $ra
    // 0x420027F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x420027F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void ovl_blast_light_27FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420027FC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x42002800: jr          $ra
    // 0x42002804: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x42002804: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_blast_light_2808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002808: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4200280C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x42002810: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x42002814: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x42002818: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4200281C: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x42002820: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x42002824: bne         $t6, $at, L_4200287C
    if (ctx->r14 != ctx->r1) {
        // 0x42002828: or          $s2, $a0, $zero
        ctx->r18 = ctx->r4 | 0;
            goto L_4200287C;
    }
    // 0x42002828: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x4200282C: jal         0x42000F50
    // 0x42002830: addiu       $a0, $a0, 0x7C
    ctx->r4 = ADD32(ctx->r4, 0X7C);
    ovl_blast_light_F50(rdram, ctx);
        goto after_0;
    // 0x42002830: addiu       $a0, $a0, 0x7C
    ctx->r4 = ADD32(ctx->r4, 0X7C);
    after_0:
    // 0x42002834: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x42002838: addiu       $s1, $s2, 0x90
    ctx->r17 = ADD32(ctx->r18, 0X90);
L_4200283C:
    // 0x4200283C: jal         0x42000F50
    // 0x42002840: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_light_F50(rdram, ctx);
        goto after_1;
    // 0x42002840: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x42002844: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x42002848: slti        $at, $s0, 0x24
    ctx->r1 = SIGNED(ctx->r16) < 0X24 ? 1 : 0;
    // 0x4200284C: bne         $at, $zero, L_4200283C
    if (ctx->r1 != 0) {
        // 0x42002850: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_4200283C;
    }
    // 0x42002850: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x42002854: addiu       $s1, $s2, 0xB4
    ctx->r17 = ADD32(ctx->r18, 0XB4);
    // 0x42002858: addiu       $s2, $zero, 0x1C
    ctx->r18 = ADD32(0, 0X1C);
    // 0x4200285C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_42002860:
    // 0x42002860: jal         0x42000F50
    // 0x42002864: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_light_F50(rdram, ctx);
        goto after_2;
    // 0x42002864: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x42002868: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    // 0x4200286C: bne         $s0, $s2, L_42002860
    if (ctx->r16 != ctx->r18) {
        // 0x42002870: addiu       $s1, $s1, 0x1C
        ctx->r17 = ADD32(ctx->r17, 0X1C);
            goto L_42002860;
    }
    // 0x42002870: addiu       $s1, $s1, 0x1C
    ctx->r17 = ADD32(ctx->r17, 0X1C);
    // 0x42002874: b           L_420028E8
    // 0x42002878: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
        goto L_420028E8;
    // 0x42002878: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
L_4200287C:
    // 0x4200287C: jal         0x42000F50
    // 0x42002880: addiu       $a0, $s2, 0x7C
    ctx->r4 = ADD32(ctx->r18, 0X7C);
    ovl_blast_light_F50(rdram, ctx);
        goto after_3;
    // 0x42002880: addiu       $a0, $s2, 0x7C
    ctx->r4 = ADD32(ctx->r18, 0X7C);
    after_3:
    // 0x42002884: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x42002888: addiu       $s1, $s2, 0x90
    ctx->r17 = ADD32(ctx->r18, 0X90);
L_4200288C:
    // 0x4200288C: jal         0x42000F50
    // 0x42002890: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_light_F50(rdram, ctx);
        goto after_4;
    // 0x42002890: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x42002894: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x42002898: slti        $at, $s0, 0x20
    ctx->r1 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x4200289C: bne         $at, $zero, L_4200288C
    if (ctx->r1 != 0) {
        // 0x420028A0: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_4200288C;
    }
    // 0x420028A0: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x420028A4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x420028A8: addiu       $s1, $s2, 0xB0
    ctx->r17 = ADD32(ctx->r18, 0XB0);
L_420028AC:
    // 0x420028AC: jal         0x42000F50
    // 0x420028B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_light_F50(rdram, ctx);
        goto after_5;
    // 0x420028B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x420028B4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x420028B8: slti        $at, $s0, 0x18
    ctx->r1 = SIGNED(ctx->r16) < 0X18 ? 1 : 0;
    // 0x420028BC: bne         $at, $zero, L_420028AC
    if (ctx->r1 != 0) {
        // 0x420028C0: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_420028AC;
    }
    // 0x420028C0: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x420028C4: addiu       $s1, $s2, 0xC8
    ctx->r17 = ADD32(ctx->r18, 0XC8);
    // 0x420028C8: addiu       $s2, $zero, 0x50
    ctx->r18 = ADD32(0, 0X50);
    // 0x420028CC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_420028D0:
    // 0x420028D0: jal         0x42000F50
    // 0x420028D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_light_F50(rdram, ctx);
        goto after_6;
    // 0x420028D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x420028D8: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x420028DC: bne         $s0, $s2, L_420028D0
    if (ctx->r16 != ctx->r18) {
        // 0x420028E0: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_420028D0;
    }
    // 0x420028E0: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x420028E4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
L_420028E8:
    // 0x420028E8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x420028EC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x420028F0: jal         0x42000214
    // 0x420028F4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_blast_light_214(rdram, ctx);
        goto after_7;
    // 0x420028F4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_7:
    // 0x420028F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x420028FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x42002900: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x42002904: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x42002908: jr          $ra
    // 0x4200290C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4200290C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_blast_light_2910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002910: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002914: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002918: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x4200291C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x42002920: bne         $t6, $at, L_4200294C
    if (ctx->r14 != ctx->r1) {
        // 0x42002924: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_4200294C;
    }
    // 0x42002924: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x42002928: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4200292C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x42002930: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x42002934: lw          $a0, 0x74($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X74);
    // 0x42002938: jal         0x42002B68
    // 0x4200293C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_blast_light_2B68(rdram, ctx);
        goto after_0;
    // 0x4200293C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x42002940: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x42002944: b           L_42002954
    // 0x42002948: sw          $v0, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->r2;
        goto L_42002954;
    // 0x42002948: sw          $v0, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->r2;
L_4200294C:
    // 0x4200294C: addiu       $t7, $zero, 0xE6
    ctx->r15 = ADD32(0, 0XE6);
    // 0x42002950: sw          $t7, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->r15;
L_42002954:
    // 0x42002954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4200295C: jr          $ra
    // 0x42002960: nop

    return;
    // 0x42002960: nop

;}
RECOMP_FUNC void ovl_blast_light_2964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002964: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x42002968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4200296C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x42002970: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x42002974: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x42002978: jal         0x42001874
    // 0x4200297C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_blast_light_1874(rdram, ctx);
        goto after_0;
    // 0x4200297C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x42002980: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x42002984: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x42002988: lw          $t6, 0x5C($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X5C);
    // 0x4200298C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42002990: ori         $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 | 0X1000;
    // 0x42002994: sw          $t7, 0x5C($a3)
    MEM_W(0X5C, ctx->r7) = ctx->r15;
    // 0x42002998: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4200299C: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x420029A0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x420029A4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x420029A8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x420029AC: lw          $a0, 0xC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XC);
    // 0x420029B0: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x420029B4: jal         0x420006C4
    // 0x420029B8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_blast_light_6C4(rdram, ctx);
        goto after_1;
    // 0x420029B8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x420029BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420029C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x420029C4: jr          $ra
    // 0x420029C8: nop

    return;
    // 0x420029C8: nop

;}
RECOMP_FUNC void ovl_blast_light_29CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420029CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x420029D0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x420029D4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x420029D8: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x420029DC: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x420029E0: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x420029E4: jr          $ra
    // 0x420029E8: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x420029E8: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void ovl_blast_light_29EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420029EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420029F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420029F4: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x420029F8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x420029FC: bne         $t6, $at, L_42002A7C
    if (ctx->r14 != ctx->r1) {
        // 0x42002A00: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_42002A7C;
    }
    // 0x42002A00: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x42002A04: addiu       $a0, $a0, 0x7C
    ctx->r4 = ADD32(ctx->r4, 0X7C);
    // 0x42002A08: jal         0x420029CC
    // 0x42002A0C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    ovl_blast_light_29CC(rdram, ctx);
        goto after_0;
    // 0x42002A0C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x42002A10: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x42002A14: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002A18: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x42002A1C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x42002A20: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_42002A24:
    // 0x42002A24: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x42002A28: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x42002A2C: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x42002A30: sw          $a0, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r4;
    // 0x42002A34: swc1        $f0, 0x88($v0)
    MEM_W(0X88, ctx->r2) = ctx->f0.u32l;
    // 0x42002A38: bne         $at, $zero, L_42002A24
    if (ctx->r1 != 0) {
        // 0x42002A3C: swc1        $f0, 0x8C($v0)
        MEM_W(0X8C, ctx->r2) = ctx->f0.u32l;
            goto L_42002A24;
    }
    // 0x42002A3C: swc1        $f0, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->f0.u32l;
    // 0x42002A40: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x42002A44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x42002A48: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_42002A4C:
    // 0x42002A4C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x42002A50: addiu       $v0, $v0, 0x1C
    ctx->r2 = ADD32(ctx->r2, 0X1C);
    // 0x42002A54: sw          $a0, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->r4;
    // 0x42002A58: swc1        $f0, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->f0.u32l;
    // 0x42002A5C: swc1        $f0, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->f0.u32l;
    // 0x42002A60: swc1        $f0, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->f0.u32l;
    // 0x42002A64: swc1        $f0, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->f0.u32l;
    // 0x42002A68: swc1        $f0, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->f0.u32l;
    // 0x42002A6C: bne         $v1, $a1, L_42002A4C
    if (ctx->r3 != ctx->r5) {
        // 0x42002A70: swc1        $f0, 0xB0($v0)
        MEM_W(0XB0, ctx->r2) = ctx->f0.u32l;
            goto L_42002A4C;
    }
    // 0x42002A70: swc1        $f0, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->f0.u32l;
    // 0x42002A74: b           L_42002B3C
    // 0x42002A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002B3C;
    // 0x42002A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002A7C:
    // 0x42002A7C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002A80: addiu       $a0, $a1, 0x7C
    ctx->r4 = ADD32(ctx->r5, 0X7C);
    // 0x42002A84: swc1        $f0, 0x118($a1)
    MEM_W(0X118, ctx->r5) = ctx->f0.u32l;
    // 0x42002A88: jal         0x420029CC
    // 0x42002A8C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    ovl_blast_light_29CC(rdram, ctx);
        goto after_1;
    // 0x42002A8C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x42002A90: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x42002A94: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002A98: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x42002A9C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x42002AA0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_42002AA4:
    // 0x42002AA4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x42002AA8: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x42002AAC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x42002AB0: sw          $a0, 0x88($v0)
    MEM_W(0X88, ctx->r2) = ctx->r4;
    // 0x42002AB4: bne         $at, $zero, L_42002AA4
    if (ctx->r1 != 0) {
        // 0x42002AB8: swc1        $f0, 0x8C($v0)
        MEM_W(0X8C, ctx->r2) = ctx->f0.u32l;
            goto L_42002AA4;
    }
    // 0x42002AB8: swc1        $f0, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->f0.u32l;
    // 0x42002ABC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x42002AC0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_42002AC4:
    // 0x42002AC4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x42002AC8: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x42002ACC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x42002AD0: sw          $a0, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r4;
    // 0x42002AD4: bne         $at, $zero, L_42002AC4
    if (ctx->r1 != 0) {
        // 0x42002AD8: swc1        $f0, 0xAC($v0)
        MEM_W(0XAC, ctx->r2) = ctx->f0.u32l;
            goto L_42002AC4;
    }
    // 0x42002AD8: swc1        $f0, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->f0.u32l;
    // 0x42002ADC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x42002AE0: sll         $t7, $v1, 4
    ctx->r15 = S32(ctx->r3 << 4);
    // 0x42002AE4: sw          $a0, 0xC8($a1)
    MEM_W(0XC8, ctx->r5) = ctx->r4;
    // 0x42002AE8: swc1        $f0, 0xCC($a1)
    MEM_W(0XCC, ctx->r5) = ctx->f0.u32l;
    // 0x42002AEC: swc1        $f0, 0xD0($a1)
    MEM_W(0XD0, ctx->r5) = ctx->f0.u32l;
    // 0x42002AF0: swc1        $f0, 0xD4($a1)
    MEM_W(0XD4, ctx->r5) = ctx->f0.u32l;
    // 0x42002AF4: addu        $v0, $a1, $t7
    ctx->r2 = ADD32(ctx->r5, ctx->r15);
    // 0x42002AF8: sw          $a0, 0xD8($v0)
    MEM_W(0XD8, ctx->r2) = ctx->r4;
    // 0x42002AFC: swc1        $f0, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->f0.u32l;
    // 0x42002B00: swc1        $f0, 0xE0($v0)
    MEM_W(0XE0, ctx->r2) = ctx->f0.u32l;
    // 0x42002B04: swc1        $f0, 0xE4($v0)
    MEM_W(0XE4, ctx->r2) = ctx->f0.u32l;
    // 0x42002B08: sw          $a0, 0xE8($v0)
    MEM_W(0XE8, ctx->r2) = ctx->r4;
    // 0x42002B0C: swc1        $f0, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->f0.u32l;
    // 0x42002B10: swc1        $f0, 0xF0($v0)
    MEM_W(0XF0, ctx->r2) = ctx->f0.u32l;
    // 0x42002B14: swc1        $f0, 0xF4($v0)
    MEM_W(0XF4, ctx->r2) = ctx->f0.u32l;
    // 0x42002B18: sw          $a0, 0xF8($v0)
    MEM_W(0XF8, ctx->r2) = ctx->r4;
    // 0x42002B1C: swc1        $f0, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = ctx->f0.u32l;
    // 0x42002B20: swc1        $f0, 0x100($v0)
    MEM_W(0X100, ctx->r2) = ctx->f0.u32l;
    // 0x42002B24: swc1        $f0, 0x104($v0)
    MEM_W(0X104, ctx->r2) = ctx->f0.u32l;
    // 0x42002B28: sw          $a0, 0xC8($v0)
    MEM_W(0XC8, ctx->r2) = ctx->r4;
    // 0x42002B2C: swc1        $f0, 0xCC($v0)
    MEM_W(0XCC, ctx->r2) = ctx->f0.u32l;
    // 0x42002B30: swc1        $f0, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = ctx->f0.u32l;
    // 0x42002B34: swc1        $f0, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->f0.u32l;
    // 0x42002B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002B3C:
    // 0x42002B3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002B40: jr          $ra
    // 0x42002B44: nop

    return;
    // 0x42002B44: nop

;}
RECOMP_FUNC void ovl_blast_light_2B48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002B48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002B4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002B50: jal         0x42002710
    // 0x42002B54: nop

    ovl_blast_light_2710(rdram, ctx);
        goto after_0;
    // 0x42002B54: nop

    after_0:
    // 0x42002B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002B5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002B60: jr          $ra
    // 0x42002B64: nop

    return;
    // 0x42002B64: nop

;}
RECOMP_FUNC void ovl_blast_light_2B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002B68: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x42002B6C: lui         $v1, 0x4200
    ctx->r3 = S32(0X4200 << 16);
    // 0x42002B70: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x42002B74: lw          $v1, 0x4180($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4180);
    // 0x42002B78: beq         $a0, $zero, L_42002BA0
    if (ctx->r4 == 0) {
        // 0x42002B7C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_42002BA0;
    }
    // 0x42002B7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x42002B80: beq         $a0, $at, L_42002BA8
    if (ctx->r4 == ctx->r1) {
        // 0x42002B84: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_42002BA8;
    }
    // 0x42002B84: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x42002B88: beq         $a0, $at, L_42002BB0
    if (ctx->r4 == ctx->r1) {
        // 0x42002B8C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_42002BB0;
    }
    // 0x42002B8C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x42002B90: beq         $a0, $at, L_42002BB8
    if (ctx->r4 == ctx->r1) {
        // 0x42002B94: nop
    
            goto L_42002BB8;
    }
    // 0x42002B94: nop

    // 0x42002B98: jr          $ra
    // 0x42002B9C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x42002B9C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_42002BA0:
    // 0x42002BA0: jr          $ra
    // 0x42002BA4: addiu       $v0, $v1, 0x14
    ctx->r2 = ADD32(ctx->r3, 0X14);
    return;
    // 0x42002BA4: addiu       $v0, $v1, 0x14
    ctx->r2 = ADD32(ctx->r3, 0X14);
L_42002BA8:
    // 0x42002BA8: jr          $ra
    // 0x42002BAC: addiu       $v0, $v1, 0x2D
    ctx->r2 = ADD32(ctx->r3, 0X2D);
    return;
    // 0x42002BAC: addiu       $v0, $v1, 0x2D
    ctx->r2 = ADD32(ctx->r3, 0X2D);
L_42002BB0:
    // 0x42002BB0: jr          $ra
    // 0x42002BB4: addiu       $v0, $v1, 0x4B
    ctx->r2 = ADD32(ctx->r3, 0X4B);
    return;
    // 0x42002BB4: addiu       $v0, $v1, 0x4B
    ctx->r2 = ADD32(ctx->r3, 0X4B);
L_42002BB8:
    // 0x42002BB8: addiu       $v1, $v1, 0x64
    ctx->r3 = ADD32(ctx->r3, 0X64);
    // 0x42002BBC: jr          $ra
    // 0x42002BC0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x42002BC0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_blast_light_2BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002BC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002BC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002BCC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x42002BD0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x42002BD4: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x42002BD8: jal         0x42001874
    // 0x42002BDC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_blast_light_1874(rdram, ctx);
        goto after_0;
    // 0x42002BDC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x42002BE0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002BE4: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x42002BE8: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x42002BEC: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x42002BF0: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x42002BF4: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x42002BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002BFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002C00: jr          $ra
    // 0x42002C04: nop

    return;
    // 0x42002C04: nop

;}
RECOMP_FUNC void ovl_blast_light_2C08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002C08: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x42002C0C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x42002C10: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x42002C14: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x42002C18: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x42002C1C: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x42002C20: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    // 0x42002C24: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x42002C28: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x42002C2C: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x42002C30: jal         0x420006C4
    // 0x42002C34: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_blast_light_6C4(rdram, ctx);
        goto after_0;
    // 0x42002C34: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x42002C38: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x42002C3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x42002C40: beq         $v1, $at, L_42002C74
    if (ctx->r3 == ctx->r1) {
        // 0x42002C44: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_42002C74;
    }
    // 0x42002C44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x42002C48: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x42002C4C: beq         $v1, $at, L_42002CA0
    if (ctx->r3 == ctx->r1) {
        // 0x42002C50: addiu       $a1, $zero, 0x16
        ctx->r5 = ADD32(0, 0X16);
            goto L_42002CA0;
    }
    // 0x42002C50: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x42002C54: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x42002C58: beq         $v1, $at, L_42002D40
    if (ctx->r3 == ctx->r1) {
        // 0x42002C5C: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_42002D40;
    }
    // 0x42002C5C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x42002C60: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x42002C64: beq         $v1, $at, L_42002DF8
    if (ctx->r3 == ctx->r1) {
        // 0x42002C68: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_42002DF8;
    }
    // 0x42002C68: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x42002C6C: b           L_42002E10
    // 0x42002C70: nop

        goto L_42002E10;
    // 0x42002C70: nop

L_42002C74:
    // 0x42002C74: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x42002C78: addiu       $a2, $zero, 0x201
    ctx->r6 = ADD32(0, 0X201);
    // 0x42002C7C: jal         0x42001104
    // 0x42002C80: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    ovl_blast_light_1104(rdram, ctx);
        goto after_1;
    // 0x42002C80: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    after_1:
    // 0x42002C84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42002C88: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42002C8C: nop

    // 0x42002C90: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x42002C94: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x42002C98: b           L_42002E10
    // 0x42002C9C: nop

        goto L_42002E10;
    // 0x42002C9C: nop

L_42002CA0:
    // 0x42002CA0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42002CA4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x42002CA8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42002CAC: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    // 0x42002CB0: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    // 0x42002CB4: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x42002CB8: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x42002CBC: jal         0x420006C4
    // 0x42002CC0: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    ovl_blast_light_6C4(rdram, ctx);
        goto after_2;
    // 0x42002CC0: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    after_2:
    // 0x42002CC4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002CC8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x42002CCC: jal         0x42000F34
    // 0x42002CD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_3;
    // 0x42002CD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x42002CD4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x42002CD8: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x42002CDC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x42002CE0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x42002CE4: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x42002CE8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x42002CEC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x42002CF0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x42002CF4: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x42002CF8: addiu       $a2, $zero, 0x1FE
    ctx->r6 = ADD32(0, 0X1FE);
    // 0x42002CFC: jal         0x42001104
    // 0x42002D00: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    ovl_blast_light_1104(rdram, ctx);
        goto after_4;
    // 0x42002D00: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    after_4:
    // 0x42002D04: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002D08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42002D0C: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x42002D10: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x42002D14: jal         0x42000F34
    // 0x42002D18: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    ovl_blast_light_F34(rdram, ctx);
        goto after_5;
    // 0x42002D18: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_5:
    // 0x42002D1C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42002D20: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x42002D24: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x42002D28: swc1        $f4, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f4.u32l;
    // 0x42002D2C: swc1        $f6, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f6.u32l;
    // 0x42002D30: swc1        $f8, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f8.u32l;
    // 0x42002D34: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x42002D38: b           L_42002E10
    // 0x42002D3C: nop

        goto L_42002E10;
    // 0x42002D3C: nop

L_42002D40:
    // 0x42002D40: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002D44: jal         0x42000F34
    // 0x42002D48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_6;
    // 0x42002D48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x42002D4C: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x42002D50: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x42002D54: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x42002D58: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x42002D5C: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x42002D60: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    // 0x42002D64: addiu       $t9, $zero, 0x1FA
    ctx->r25 = ADD32(0, 0X1FA);
    // 0x42002D68: beq         $t8, $zero, L_42002DEC
    if (ctx->r24 == 0) {
        // 0x42002D6C: addiu       $a1, $zero, 0x17
        ctx->r5 = ADD32(0, 0X17);
            goto L_42002DEC;
    }
    // 0x42002D6C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x42002D70: sw          $t9, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r25;
    // 0x42002D74: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x42002D78: jal         0x420006C4
    // 0x42002D7C: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    ovl_blast_light_6C4(rdram, ctx);
        goto after_7;
    // 0x42002D7C: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    after_7:
    // 0x42002D80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42002D84: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x42002D88: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42002D8C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x42002D90: sw          $t0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r8;
    // 0x42002D94: swc1        $f16, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f16.u32l;
    // 0x42002D98: swc1        $f18, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
    // 0x42002D9C: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x42002DA0: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x42002DA4: jal         0x420006C4
    // 0x42002DA8: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    ovl_blast_light_6C4(rdram, ctx);
        goto after_8;
    // 0x42002DA8: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    after_8:
    // 0x42002DAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x42002DB0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x42002DB4: addiu       $a2, $zero, 0x1FC
    ctx->r6 = ADD32(0, 0X1FC);
    // 0x42002DB8: jal         0x42001104
    // 0x42002DBC: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    ovl_blast_light_1104(rdram, ctx);
        goto after_9;
    // 0x42002DBC: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    after_9:
    // 0x42002DC0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x42002DC4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42002DC8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42002DCC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42002DD0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x42002DD4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x42002DD8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x42002DDC: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    // 0x42002DE0: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x42002DE4: jal         0x42002BC4
    // 0x42002DE8: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    ovl_blast_light_2BC4(rdram, ctx);
        goto after_10;
    // 0x42002DE8: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    after_10:
L_42002DEC:
    // 0x42002DEC: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x42002DF0: b           L_42002E10
    // 0x42002DF4: nop

        goto L_42002E10;
    // 0x42002DF4: nop

L_42002DF8:
    // 0x42002DF8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x42002DFC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x42002E00: jal         0x42000214
    // 0x42002E04: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_blast_light_214(rdram, ctx);
        goto after_11;
    // 0x42002E04: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_11:
    // 0x42002E08: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x42002E0C: nop

L_42002E10:
    // 0x42002E10: blez        $v1, L_42002E88
    if (SIGNED(ctx->r3) <= 0) {
        // 0x42002E14: slti        $at, $v1, 0xA
        ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
            goto L_42002E88;
    }
    // 0x42002E14: slti        $at, $v1, 0xA
    ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x42002E18: beq         $at, $zero, L_42002E88
    if (ctx->r1 == 0) {
        // 0x42002E1C: addiu       $a0, $zero, 0x11
        ctx->r4 = ADD32(0, 0X11);
            goto L_42002E88;
    }
    // 0x42002E1C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x42002E20: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42002E24: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x42002E28: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x42002E2C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42002E30: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x42002E34: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x42002E38: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42002E3C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x42002E40: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x42002E44: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x42002E48: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x42002E4C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002E50: addiu       $t1, $sp, 0x5C
    ctx->r9 = ADD32(ctx->r29, 0X5C);
    // 0x42002E54: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x42002E58: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x42002E5C: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x42002E60: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x42002E64: jal         0x42000F34
    // 0x42002E68: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    ovl_blast_light_F34(rdram, ctx);
        goto after_12;
    // 0x42002E68: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    after_12:
    // 0x42002E6C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002E70: lwc1        $f8, 0x4260($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4260);
    // 0x42002E74: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42002E78: nop

    // 0x42002E7C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x42002E80: b           L_4200331C
    // 0x42002E84: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
        goto L_4200331C;
    // 0x42002E84: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
L_42002E88:
    // 0x42002E88: slti        $at, $v1, 0xA
    ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x42002E8C: bne         $at, $zero, L_42002F14
    if (ctx->r1 != 0) {
        // 0x42002E90: slti        $at, $v1, 0xC
        ctx->r1 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
            goto L_42002F14;
    }
    // 0x42002E90: slti        $at, $v1, 0xC
    ctx->r1 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
    // 0x42002E94: beq         $at, $zero, L_42002F18
    if (ctx->r1 == 0) {
        // 0x42002E98: slti        $at, $v1, 0xC
        ctx->r1 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
            goto L_42002F18;
    }
    // 0x42002E98: slti        $at, $v1, 0xC
    ctx->r1 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
    // 0x42002E9C: jal         0x42000340
    // 0x42002EA0: nop

    ovl_blast_light_340(rdram, ctx);
        goto after_13;
    // 0x42002EA0: nop

    after_13:
    // 0x42002EA4: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002EA8: lwc1        $f18, 0x4264($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4264);
    // 0x42002EAC: cvt.s.d     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f16.fl = CVT_S_D(ctx->f0.d);
    // 0x42002EB0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002EB4: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x42002EB8: lwc1        $f6, 0x4268($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4268);
    // 0x42002EBC: nop

    // 0x42002EC0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x42002EC4: jal         0x42000340
    // 0x42002EC8: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    ovl_blast_light_340(rdram, ctx);
        goto after_14;
    // 0x42002EC8: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    after_14:
    // 0x42002ECC: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002ED0: lwc1        $f16, 0x426C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X426C);
    // 0x42002ED4: cvt.s.d     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f10.fl = CVT_S_D(ctx->f0.d);
    // 0x42002ED8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002EDC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x42002EE0: lwc1        $f4, 0x4270($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4270);
    // 0x42002EE4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42002EE8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42002EEC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x42002EF0: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x42002EF4: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x42002EF8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002EFC: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x42002F00: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x42002F04: jal         0x42000F34
    // 0x42002F08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_15;
    // 0x42002F08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_15:
    // 0x42002F0C: b           L_42003320
    // 0x42002F10: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_42003320;
    // 0x42002F10: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_42002F14:
    // 0x42002F14: slti        $at, $v1, 0xC
    ctx->r1 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
L_42002F18:
    // 0x42002F18: bne         $at, $zero, L_420031C4
    if (ctx->r1 != 0) {
        // 0x42002F1C: lw          $t7, 0xA4($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XA4);
            goto L_420031C4;
    }
    // 0x42002F1C: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x42002F20: lw          $a0, 0x74($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X74);
    // 0x42002F24: jal         0x42002B68
    // 0x42002F28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_blast_light_2B68(rdram, ctx);
        goto after_16;
    // 0x42002F28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
    // 0x42002F2C: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x42002F30: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x42002F34: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x42002F38: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x42002F3C: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x42002F40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42002F44: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x42002F48: slti        $at, $t2, 0x16
    ctx->r1 = SIGNED(ctx->r10) < 0X16 ? 1 : 0;
    // 0x42002F4C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x42002F50: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x42002F54: nop

    // 0x42002F58: bc1f        L_420031C4
    if (!c1cs) {
        // 0x42002F5C: lw          $t7, 0xA4($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XA4);
            goto L_420031C4;
    }
    // 0x42002F5C: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x42002F60: beq         $at, $zero, L_42002F90
    if (ctx->r1 == 0) {
        // 0x42002F64: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_42002F90;
    }
    // 0x42002F64: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x42002F68: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x42002F6C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x42002F70: jal         0x42000214
    // 0x42002F74: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    ovl_blast_light_214(rdram, ctx);
        goto after_17;
    // 0x42002F74: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_17:
    // 0x42002F78: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x42002F7C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42002F80: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42002F84: nop

    // 0x42002F88: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x42002F8C: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
L_42002F90:
    // 0x42002F90: lw          $t3, 0xA4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA4);
    // 0x42002F94: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002F98: beq         $t3, $zero, L_42003098
    if (ctx->r11 == 0) {
        // 0x42002F9C: lw          $t5, 0xA4($sp)
        ctx->r13 = MEM_W(ctx->r29, 0XA4);
            goto L_42003098;
    }
    // 0x42002F9C: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
    // 0x42002FA0: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42002FA4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002FA8: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x42002FAC: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42002FB0: lwc1        $f5, 0x4278($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X4278);
    // 0x42002FB4: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x42002FB8: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42002FBC: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x42002FC0: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x42002FC4: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x42002FC8: lwc1        $f4, 0x427C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X427C);
    // 0x42002FCC: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x42002FD0: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x42002FD4: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x42002FD8: addiu       $t4, $sp, 0x44
    ctx->r12 = ADD32(ctx->r29, 0X44);
    // 0x42002FDC: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x42002FE0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x42002FE4: cvt.s.d     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f16.fl = CVT_S_D(ctx->f6.d);
    // 0x42002FE8: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x42002FEC: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x42002FF0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002FF4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x42002FF8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x42002FFC: jal         0x42000F34
    // 0x42003000: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    ovl_blast_light_F34(rdram, ctx);
        goto after_18;
    // 0x42003000: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    after_18:
    // 0x42003004: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x42003008: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4200300C: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003010: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x42003014: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x42003018: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x4200301C: jal         0x42002BC4
    // 0x42003020: nop

    ovl_blast_light_2BC4(rdram, ctx);
        goto after_19;
    // 0x42003020: nop

    after_19:
    // 0x42003024: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003028: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x4200302C: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x42003030: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003034: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    // 0x42003038: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x4200303C: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003040: nop

    // 0x42003044: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    // 0x42003048: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x4200304C: jal         0x420006C4
    // 0x42003050: nop

    ovl_blast_light_6C4(rdram, ctx);
        goto after_20;
    // 0x42003050: nop

    after_20:
    // 0x42003054: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x42003058: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4200305C: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003060: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x42003064: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x42003068: nop

    // 0x4200306C: bc1f        L_42003084
    if (!c1cs) {
        // 0x42003070: nop
    
            goto L_42003084;
    }
    // 0x42003070: nop

    // 0x42003074: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42003078: nop

    // 0x4200307C: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x42003080: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
L_42003084:
    // 0x42003084: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x42003088: nop

    // 0x4200308C: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x42003090: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x42003094: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
L_42003098:
    // 0x42003098: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x4200309C: beq         $t5, $zero, L_42003320
    if (ctx->r13 == 0) {
        // 0x420030A0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_42003320;
    }
    // 0x420030A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x420030A4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x420030A8: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x420030AC: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x420030B0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x420030B4: cvt.w.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.u32l = CVT_W_S(ctx->f6.fl);
    // 0x420030B8: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x420030BC: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x420030C0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x420030C4: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x420030C8: beq         $a3, $zero, L_42003114
    if (ctx->r7 == 0) {
        // 0x420030CC: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_42003114;
    }
    // 0x420030CC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x420030D0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x420030D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x420030D8: sub.s       $f16, $f6, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x420030DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x420030E0: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x420030E4: nop

    // 0x420030E8: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x420030EC: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x420030F0: nop

    // 0x420030F4: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x420030F8: bne         $a3, $zero, L_4200310C
    if (ctx->r7 != 0) {
        // 0x420030FC: nop
    
            goto L_4200310C;
    }
    // 0x420030FC: nop

    // 0x42003100: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x42003104: b           L_42003124
    // 0x42003108: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_42003124;
    // 0x42003108: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_4200310C:
    // 0x4200310C: b           L_42003124
    // 0x42003110: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_42003124;
    // 0x42003110: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_42003114:
    // 0x42003114: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x42003118: nop

    // 0x4200311C: bltz        $a3, L_4200310C
    if (SIGNED(ctx->r7) < 0) {
        // 0x42003120: nop
    
            goto L_4200310C;
    }
    // 0x42003120: nop

L_42003124:
    // 0x42003124: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x42003128: jal         0x42000F34
    // 0x4200312C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_21;
    // 0x4200312C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_21:
    // 0x42003130: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x42003134: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x42003138: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x4200313C: nop

    // 0x42003140: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x42003144: nop

    // 0x42003148: bc1f        L_42003320
    if (!c1cs) {
        // 0x4200314C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_42003320;
    }
    // 0x4200314C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x42003150: lw          $a0, 0x74($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X74);
    // 0x42003154: jal         0x42002B68
    // 0x42003158: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_blast_light_2B68(rdram, ctx);
        goto after_22;
    // 0x42003158: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_22:
    // 0x4200315C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x42003160: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x42003164: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x42003168: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x4200316C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x42003170: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x42003174: lui         $at, 0x432F
    ctx->r1 = S32(0X432F << 16);
    // 0x42003178: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4200317C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x42003180: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x42003184: div.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f16.fl, ctx->f6.fl);
    // 0x42003188: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4200318C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x42003190: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x42003194: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
    // 0x42003198: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x4200319C: nop

    // 0x420031A0: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x420031A4: nop

    // 0x420031A8: bc1f        L_42003320
    if (!c1cs) {
        // 0x420031AC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_42003320;
    }
    // 0x420031AC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x420031B0: jal         0x42001208
    // 0x420031B4: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    ovl_blast_light_1208(rdram, ctx);
        goto after_23;
    // 0x420031B4: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    after_23:
    // 0x420031B8: b           L_42003320
    // 0x420031BC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_42003320;
    // 0x420031BC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x420031C0: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
L_420031C4:
    // 0x420031C4: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x420031C8: beq         $t7, $zero, L_42003320
    if (ctx->r15 == 0) {
        // 0x420031CC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_42003320;
    }
    // 0x420031CC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x420031D0: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x420031D4: lw          $a0, 0x74($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X74);
    // 0x420031D8: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x420031DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x420031E0: jal         0x42002B68
    // 0x420031E4: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    ovl_blast_light_2B68(rdram, ctx);
        goto after_24;
    // 0x420031E4: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    after_24:
    // 0x420031E8: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x420031EC: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x420031F0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x420031F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x420031F8: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x420031FC: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x42003200: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x42003204: nop

    // 0x42003208: bc1f        L_42003320
    if (!c1cs) {
        // 0x4200320C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_42003320;
    }
    // 0x4200320C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x42003210: lw          $a0, 0x74($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X74);
    // 0x42003214: jal         0x42002B68
    // 0x42003218: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_blast_light_2B68(rdram, ctx);
        goto after_25;
    // 0x42003218: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_25:
    // 0x4200321C: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x42003220: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x42003224: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x42003228: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4200322C: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x42003230: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x42003234: addiu       $t8, $zero, 0x1FF
    ctx->r24 = ADD32(0, 0X1FF);
    // 0x42003238: c.eq.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl == ctx->f18.fl;
    // 0x4200323C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x42003240: bc1f        L_420032E0
    if (!c1cs) {
        // 0x42003244: nop
    
            goto L_420032E0;
    }
    // 0x42003244: nop

    // 0x42003248: sw          $t8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r24;
    // 0x4200324C: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x42003250: jal         0x420006C4
    // 0x42003254: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    ovl_blast_light_6C4(rdram, ctx);
        goto after_26;
    // 0x42003254: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    after_26:
    // 0x42003258: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4200325C: jal         0x42001208
    // 0x42003260: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_blast_light_1208(rdram, ctx);
        goto after_27;
    // 0x42003260: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_27:
    // 0x42003264: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003268: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x4200326C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42003270: jal         0x42000F34
    // 0x42003274: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_28;
    // 0x42003274: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_28:
    // 0x42003278: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4200327C: jal         0x42002BC4
    // 0x42003280: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_blast_light_2BC4(rdram, ctx);
        goto after_29;
    // 0x42003280: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_29:
    // 0x42003284: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x42003288: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4200328C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x42003290: swc1        $f2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f2.u32l;
    // 0x42003294: swc1        $f2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f2.u32l;
    // 0x42003298: swc1        $f2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f2.u32l;
    // 0x4200329C: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x420032A0: jal         0x420006C4
    // 0x420032A4: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    ovl_blast_light_6C4(rdram, ctx);
        goto after_30;
    // 0x420032A4: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    after_30:
    // 0x420032A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x420032AC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x420032B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x420032B4: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    // 0x420032B8: swc1        $f16, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f16.u32l;
    // 0x420032BC: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x420032C0: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x420032C4: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x420032C8: jal         0x420006C4
    // 0x420032CC: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    ovl_blast_light_6C4(rdram, ctx);
        goto after_31;
    // 0x420032CC: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    after_31:
    // 0x420032D0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x420032D4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x420032D8: nop

    // 0x420032DC: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
L_420032E0:
    // 0x420032E0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x420032E4: lwc1        $f4, 0x4280($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4280);
    // 0x420032E8: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x420032EC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x420032F0: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x420032F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x420032F8: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x420032FC: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42003300: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x42003304: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x42003308: nop

    // 0x4200330C: bc1f        L_42003320
    if (!c1cs) {
        // 0x42003310: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_42003320;
    }
    // 0x42003310: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x42003314: jal         0x42001208
    // 0x42003318: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    ovl_blast_light_1208(rdram, ctx);
        goto after_32;
    // 0x42003318: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    after_32:
L_4200331C:
    // 0x4200331C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_42003320:
    // 0x42003320: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x42003324: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x42003328: jr          $ra
    // 0x4200332C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x4200332C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void ovl_blast_light_3330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003330: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x42003334: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x42003338: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4200333C: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x42003340: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x42003344: slt         $at, $v0, $a2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x42003348: bne         $at, $zero, L_42003518
    if (ctx->r1 != 0) {
        // 0x4200334C: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_42003518;
    }
    // 0x4200334C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x42003350: addiu       $t6, $a2, 0x14
    ctx->r14 = ADD32(ctx->r6, 0X14);
    // 0x42003354: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x42003358: beq         $at, $zero, L_4200351C
    if (ctx->r1 == 0) {
        // 0x4200335C: addiu       $t8, $a2, 0x14
        ctx->r24 = ADD32(ctx->r6, 0X14);
            goto L_4200351C;
    }
    // 0x4200335C: addiu       $t8, $a2, 0x14
    ctx->r24 = ADD32(ctx->r6, 0X14);
    // 0x42003360: bne         $v0, $a2, L_420033DC
    if (ctx->r2 != ctx->r6) {
        // 0x42003364: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_420033DC;
    }
    // 0x42003364: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x42003368: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x4200336C: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    // 0x42003370: jal         0x420006C4
    // 0x42003374: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_blast_light_6C4(rdram, ctx);
        goto after_0;
    // 0x42003374: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x42003378: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x4200337C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42003380: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x42003384: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x42003388: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4200338C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x42003390: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x42003394: addiu       $a2, $zero, 0x1FB
    ctx->r6 = ADD32(0, 0X1FB);
    // 0x42003398: jal         0x42001104
    // 0x4200339C: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    ovl_blast_light_1104(rdram, ctx);
        goto after_1;
    // 0x4200339C: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x420033A0: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x420033A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x420033A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x420033AC: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x420033B0: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x420033B4: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x420033B8: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x420033BC: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x420033C0: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x420033C4: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x420033C8: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x420033CC: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x420033D0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x420033D4: jal         0x42000F34
    // 0x420033D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_2;
    // 0x420033D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
L_420033DC:
    // 0x420033DC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x420033E0: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x420033E4: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x420033E8: jal         0x42000F34
    // 0x420033EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_3;
    // 0x420033EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x420033F0: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x420033F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x420033F8: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x420033FC: nop

    // 0x42003400: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x42003404: nop

    // 0x42003408: bc1f        L_4200346C
    if (!c1cs) {
        // 0x4200340C: nop
    
            goto L_4200346C;
    }
    // 0x4200340C: nop

    // 0x42003410: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003414: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x42003418: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x4200341C: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x42003420: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x42003424: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003428: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x4200342C: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x42003430: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x42003434: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x42003438: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x4200343C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42003440: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x42003444: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x42003448: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x4200344C: jal         0x42000F34
    // 0x42003450: nop

    ovl_blast_light_F34(rdram, ctx);
        goto after_4;
    // 0x42003450: nop

    after_4:
    // 0x42003454: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003458: lwc1        $f18, 0x4284($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4284);
    // 0x4200345C: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003460: nop

    // 0x42003464: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x42003468: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
L_4200346C:
    // 0x4200346C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x42003470: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x42003474: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x42003478: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x4200347C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003480: cvt.w.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_S(ctx->f4.fl);
    // 0x42003484: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x42003488: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x4200348C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x42003490: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x42003494: beq         $a3, $zero, L_420034E0
    if (ctx->r7 == 0) {
        // 0x42003498: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_420034E0;
    }
    // 0x42003498: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x4200349C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x420034A0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x420034A4: sub.s       $f8, $f4, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x420034A8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x420034AC: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x420034B0: nop

    // 0x420034B4: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x420034B8: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x420034BC: nop

    // 0x420034C0: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x420034C4: bne         $a3, $zero, L_420034D8
    if (ctx->r7 != 0) {
        // 0x420034C8: nop
    
            goto L_420034D8;
    }
    // 0x420034C8: nop

    // 0x420034CC: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x420034D0: b           L_420034F0
    // 0x420034D4: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_420034F0;
    // 0x420034D4: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_420034D8:
    // 0x420034D8: b           L_420034F0
    // 0x420034DC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_420034F0;
    // 0x420034DC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_420034E0:
    // 0x420034E0: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x420034E4: nop

    // 0x420034E8: bltz        $a3, L_420034D8
    if (SIGNED(ctx->r7) < 0) {
        // 0x420034EC: nop
    
            goto L_420034D8;
    }
    // 0x420034EC: nop

L_420034F0:
    // 0x420034F0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x420034F4: jal         0x42000F34
    // 0x420034F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_5;
    // 0x420034F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x420034FC: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003500: lwc1        $f16, 0x4288($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4288);
    // 0x42003504: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42003508: nop

    // 0x4200350C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x42003510: b           L_42003538
    // 0x42003514: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
        goto L_42003538;
    // 0x42003514: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
L_42003518:
    // 0x42003518: addiu       $t8, $a2, 0x14
    ctx->r24 = ADD32(ctx->r6, 0X14);
L_4200351C:
    // 0x4200351C: bne         $t8, $v0, L_42003538
    if (ctx->r24 != ctx->r2) {
        // 0x42003520: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_42003538;
    }
    // 0x42003520: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x42003524: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003528: jal         0x42000F34
    // 0x4200352C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_6;
    // 0x4200352C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x42003530: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x42003534: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
L_42003538:
    // 0x42003538: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4200353C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x42003540: jr          $ra
    // 0x42003544: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x42003544: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_blast_light_3548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003548: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x4200354C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x42003550: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x42003554: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x42003558: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x4200355C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x42003560: slt         $at, $v0, $a2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x42003564: bne         $at, $zero, L_42003790
    if (ctx->r1 != 0) {
        // 0x42003568: addiu       $t0, $a2, 0x27
        ctx->r8 = ADD32(ctx->r6, 0X27);
            goto L_42003790;
    }
    // 0x42003568: addiu       $t0, $a2, 0x27
    ctx->r8 = ADD32(ctx->r6, 0X27);
    // 0x4200356C: slt         $at, $t0, $v0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x42003570: bne         $at, $zero, L_42003790
    if (ctx->r1 != 0) {
        // 0x42003574: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_42003790;
    }
    // 0x42003574: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x42003578: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x4200357C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x42003580: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    // 0x42003584: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x42003588: jal         0x420006C4
    // 0x4200358C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_blast_light_6C4(rdram, ctx);
        goto after_0;
    // 0x4200358C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x42003590: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x42003594: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x42003598: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x4200359C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x420035A0: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x420035A4: bne         $at, $zero, L_4200361C
    if (ctx->r1 != 0) {
        // 0x420035A8: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_4200361C;
    }
    // 0x420035A8: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x420035AC: addiu       $t8, $a3, 0xA
    ctx->r24 = ADD32(ctx->r7, 0XA);
    // 0x420035B0: slt         $at, $t8, $v0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x420035B4: bne         $at, $zero, L_42003620
    if (ctx->r1 != 0) {
        // 0x420035B8: addiu       $t1, $a3, 0xC
        ctx->r9 = ADD32(ctx->r7, 0XC);
            goto L_42003620;
    }
    // 0x420035B8: addiu       $t1, $a3, 0xC
    ctx->r9 = ADD32(ctx->r7, 0XC);
    // 0x420035BC: bne         $a3, $v0, L_420035FC
    if (ctx->r7 != ctx->r2) {
        // 0x420035C0: addiu       $t9, $a3, 0xA
        ctx->r25 = ADD32(ctx->r7, 0XA);
            goto L_420035FC;
    }
    // 0x420035C0: addiu       $t9, $a3, 0xA
    ctx->r25 = ADD32(ctx->r7, 0XA);
    // 0x420035C4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x420035C8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x420035CC: addiu       $a2, $zero, 0x1FD
    ctx->r6 = ADD32(0, 0X1FD);
    // 0x420035D0: jal         0x42001104
    // 0x420035D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_light_1104(rdram, ctx);
        goto after_1;
    // 0x420035D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x420035D8: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x420035DC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x420035E0: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x420035E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x420035E8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x420035EC: jal         0x42000F34
    // 0x420035F0: addiu       $a3, $zero, 0x21F
    ctx->r7 = ADD32(0, 0X21F);
    ovl_blast_light_F34(rdram, ctx);
        goto after_2;
    // 0x420035F0: addiu       $a3, $zero, 0x21F
    ctx->r7 = ADD32(0, 0X21F);
    after_2:
    // 0x420035F4: b           L_42003794
    // 0x420035F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42003794;
    // 0x420035F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_420035FC:
    // 0x420035FC: bne         $t9, $v0, L_42003790
    if (ctx->r25 != ctx->r2) {
        // 0x42003600: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_42003790;
    }
    // 0x42003600: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42003604: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x42003608: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4200360C: jal         0x42000F34
    // 0x42003610: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_3;
    // 0x42003610: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x42003614: b           L_42003794
    // 0x42003618: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42003794;
    // 0x42003618: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4200361C:
    // 0x4200361C: addiu       $t1, $a3, 0xC
    ctx->r9 = ADD32(ctx->r7, 0XC);
L_42003620:
    // 0x42003620: slt         $at, $v0, $t1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x42003624: bne         $at, $zero, L_4200367C
    if (ctx->r1 != 0) {
        // 0x42003628: addiu       $t2, $a3, 0x16
        ctx->r10 = ADD32(ctx->r7, 0X16);
            goto L_4200367C;
    }
    // 0x42003628: addiu       $t2, $a3, 0x16
    ctx->r10 = ADD32(ctx->r7, 0X16);
    // 0x4200362C: slt         $at, $t2, $v0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x42003630: bne         $at, $zero, L_4200367C
    if (ctx->r1 != 0) {
        // 0x42003634: addiu       $t3, $a3, 0xC
        ctx->r11 = ADD32(ctx->r7, 0XC);
            goto L_4200367C;
    }
    // 0x42003634: addiu       $t3, $a3, 0xC
    ctx->r11 = ADD32(ctx->r7, 0XC);
    // 0x42003638: bne         $t3, $v0, L_4200365C
    if (ctx->r11 != ctx->r2) {
        // 0x4200363C: addiu       $t4, $a3, 0x16
        ctx->r12 = ADD32(ctx->r7, 0X16);
            goto L_4200365C;
    }
    // 0x4200363C: addiu       $t4, $a3, 0x16
    ctx->r12 = ADD32(ctx->r7, 0X16);
    // 0x42003640: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x42003644: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42003648: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x4200364C: jal         0x42000F34
    // 0x42003650: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_4;
    // 0x42003650: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x42003654: b           L_42003794
    // 0x42003658: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42003794;
    // 0x42003658: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4200365C:
    // 0x4200365C: bne         $t4, $v0, L_42003790
    if (ctx->r12 != ctx->r2) {
        // 0x42003660: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_42003790;
    }
    // 0x42003660: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42003664: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x42003668: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4200366C: jal         0x42000F34
    // 0x42003670: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_5;
    // 0x42003670: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x42003674: b           L_42003794
    // 0x42003678: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42003794;
    // 0x42003678: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4200367C:
    // 0x4200367C: addiu       $t5, $a3, 0x18
    ctx->r13 = ADD32(ctx->r7, 0X18);
    // 0x42003680: slt         $at, $v0, $t5
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x42003684: bne         $at, $zero, L_420036DC
    if (ctx->r1 != 0) {
        // 0x42003688: addiu       $t6, $a3, 0x1D
        ctx->r14 = ADD32(ctx->r7, 0X1D);
            goto L_420036DC;
    }
    // 0x42003688: addiu       $t6, $a3, 0x1D
    ctx->r14 = ADD32(ctx->r7, 0X1D);
    // 0x4200368C: slt         $at, $t6, $v0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x42003690: bne         $at, $zero, L_420036DC
    if (ctx->r1 != 0) {
        // 0x42003694: addiu       $t8, $a3, 0x18
        ctx->r24 = ADD32(ctx->r7, 0X18);
            goto L_420036DC;
    }
    // 0x42003694: addiu       $t8, $a3, 0x18
    ctx->r24 = ADD32(ctx->r7, 0X18);
    // 0x42003698: bne         $t8, $v0, L_420036BC
    if (ctx->r24 != ctx->r2) {
        // 0x4200369C: addiu       $t7, $a3, 0x1D
        ctx->r15 = ADD32(ctx->r7, 0X1D);
            goto L_420036BC;
    }
    // 0x4200369C: addiu       $t7, $a3, 0x1D
    ctx->r15 = ADD32(ctx->r7, 0X1D);
    // 0x420036A0: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x420036A4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x420036A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x420036AC: jal         0x42000F34
    // 0x420036B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_6;
    // 0x420036B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x420036B4: b           L_42003794
    // 0x420036B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42003794;
    // 0x420036B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_420036BC:
    // 0x420036BC: bne         $t7, $v0, L_42003790
    if (ctx->r15 != ctx->r2) {
        // 0x420036C0: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_42003790;
    }
    // 0x420036C0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x420036C4: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x420036C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x420036CC: jal         0x42000F34
    // 0x420036D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_7;
    // 0x420036D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x420036D4: b           L_42003794
    // 0x420036D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42003794;
    // 0x420036D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_420036DC:
    // 0x420036DC: addiu       $t9, $a3, 0x1F
    ctx->r25 = ADD32(ctx->r7, 0X1F);
    // 0x420036E0: slt         $at, $v0, $t9
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x420036E4: bne         $at, $zero, L_4200373C
    if (ctx->r1 != 0) {
        // 0x420036E8: addiu       $t1, $a3, 0x22
        ctx->r9 = ADD32(ctx->r7, 0X22);
            goto L_4200373C;
    }
    // 0x420036E8: addiu       $t1, $a3, 0x22
    ctx->r9 = ADD32(ctx->r7, 0X22);
    // 0x420036EC: slt         $at, $t1, $v0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x420036F0: bne         $at, $zero, L_4200373C
    if (ctx->r1 != 0) {
        // 0x420036F4: addiu       $t2, $a3, 0x1F
        ctx->r10 = ADD32(ctx->r7, 0X1F);
            goto L_4200373C;
    }
    // 0x420036F4: addiu       $t2, $a3, 0x1F
    ctx->r10 = ADD32(ctx->r7, 0X1F);
    // 0x420036F8: bne         $t2, $v0, L_4200371C
    if (ctx->r10 != ctx->r2) {
        // 0x420036FC: addiu       $t3, $a3, 0x22
        ctx->r11 = ADD32(ctx->r7, 0X22);
            goto L_4200371C;
    }
    // 0x420036FC: addiu       $t3, $a3, 0x22
    ctx->r11 = ADD32(ctx->r7, 0X22);
    // 0x42003700: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x42003704: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42003708: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x4200370C: jal         0x42000F34
    // 0x42003710: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_8;
    // 0x42003710: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x42003714: b           L_42003794
    // 0x42003718: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42003794;
    // 0x42003718: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4200371C:
    // 0x4200371C: bne         $t3, $v0, L_42003790
    if (ctx->r11 != ctx->r2) {
        // 0x42003720: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_42003790;
    }
    // 0x42003720: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42003724: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x42003728: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4200372C: jal         0x42000F34
    // 0x42003730: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_9;
    // 0x42003730: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x42003734: b           L_42003794
    // 0x42003738: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42003794;
    // 0x42003738: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4200373C:
    // 0x4200373C: addiu       $t4, $a3, 0x24
    ctx->r12 = ADD32(ctx->r7, 0X24);
    // 0x42003740: slt         $at, $v0, $t4
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x42003744: bne         $at, $zero, L_42003790
    if (ctx->r1 != 0) {
        // 0x42003748: slt         $at, $t0, $v0
        ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_42003790;
    }
    // 0x42003748: slt         $at, $t0, $v0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x4200374C: bne         $at, $zero, L_42003790
    if (ctx->r1 != 0) {
        // 0x42003750: addiu       $t5, $a3, 0x24
        ctx->r13 = ADD32(ctx->r7, 0X24);
            goto L_42003790;
    }
    // 0x42003750: addiu       $t5, $a3, 0x24
    ctx->r13 = ADD32(ctx->r7, 0X24);
    // 0x42003754: bne         $t5, $v0, L_42003778
    if (ctx->r13 != ctx->r2) {
        // 0x42003758: addiu       $t6, $a3, 0x27
        ctx->r14 = ADD32(ctx->r7, 0X27);
            goto L_42003778;
    }
    // 0x42003758: addiu       $t6, $a3, 0x27
    ctx->r14 = ADD32(ctx->r7, 0X27);
    // 0x4200375C: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x42003760: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42003764: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x42003768: jal         0x42000F34
    // 0x4200376C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_10;
    // 0x4200376C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x42003770: b           L_42003794
    // 0x42003774: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42003794;
    // 0x42003774: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_42003778:
    // 0x42003778: bne         $t6, $v0, L_42003790
    if (ctx->r14 != ctx->r2) {
        // 0x4200377C: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_42003790;
    }
    // 0x4200377C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42003780: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x42003784: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42003788: jal         0x42000F34
    // 0x4200378C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_11;
    // 0x4200378C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
L_42003790:
    // 0x42003790: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_42003794:
    // 0x42003794: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x42003798: jr          $ra
    // 0x4200379C: nop

    return;
    // 0x4200379C: nop

;}
RECOMP_FUNC void ovl_blast_light_37A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420037A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x420037A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x420037A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x420037AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x420037B0: lw          $a1, 0x68($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X68);
    // 0x420037B4: addiu       $a2, $s0, 0x7C
    ctx->r6 = ADD32(ctx->r16, 0X7C);
    // 0x420037B8: jal         0x42002C08
    // 0x420037BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_blast_light_2C08(rdram, ctx);
        goto after_0;
    // 0x420037BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x420037C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x420037C4: addiu       $a1, $s0, 0x90
    ctx->r5 = ADD32(ctx->r16, 0X90);
    // 0x420037C8: jal         0x42003330
    // 0x420037CC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    ovl_blast_light_3330(rdram, ctx);
        goto after_1;
    // 0x420037CC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_1:
    // 0x420037D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x420037D4: addiu       $a1, $s0, 0x9C
    ctx->r5 = ADD32(ctx->r16, 0X9C);
    // 0x420037D8: jal         0x42003330
    // 0x420037DC: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    ovl_blast_light_3330(rdram, ctx);
        goto after_2;
    // 0x420037DC: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_2:
    // 0x420037E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x420037E4: addiu       $a1, $s0, 0xA8
    ctx->r5 = ADD32(ctx->r16, 0XA8);
    // 0x420037E8: jal         0x42003330
    // 0x420037EC: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    ovl_blast_light_3330(rdram, ctx);
        goto after_3;
    // 0x420037EC: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    after_3:
    // 0x420037F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x420037F4: addiu       $a1, $s0, 0xB4
    ctx->r5 = ADD32(ctx->r16, 0XB4);
    // 0x420037F8: jal         0x42003548
    // 0x420037FC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    ovl_blast_light_3548(rdram, ctx);
        goto after_4;
    // 0x420037FC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_4:
    // 0x42003800: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42003804: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x42003808: jr          $ra
    // 0x4200380C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x4200380C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_blast_light_3810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003810: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x42003814: slti        $at, $a1, 0xC
    ctx->r1 = SIGNED(ctx->r5) < 0XC ? 1 : 0;
    // 0x42003818: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4200381C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x42003820: bne         $at, $zero, L_420038CC
    if (ctx->r1 != 0) {
        // 0x42003824: or          $a3, $a2, $zero
        ctx->r7 = ctx->r6 | 0;
            goto L_420038CC;
    }
    // 0x42003824: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x42003828: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x4200382C: bne         $a1, $at, L_42003860
    if (ctx->r5 != ctx->r1) {
        // 0x42003830: addiu       $t6, $zero, 0x20F
        ctx->r14 = ADD32(0, 0X20F);
            goto L_42003860;
    }
    // 0x42003830: addiu       $t6, $zero, 0x20F
    ctx->r14 = ADD32(0, 0X20F);
    // 0x42003834: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x42003838: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x4200383C: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x42003840: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x42003844: jal         0x420006C4
    // 0x42003848: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_blast_light_6C4(rdram, ctx);
        goto after_0;
    // 0x42003848: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x4200384C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42003850: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x42003854: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42003858: nop

    // 0x4200385C: swc1        $f4, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f4.u32l;
L_42003860:
    // 0x42003860: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x42003864: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x42003868: lwc1        $f0, 0x4($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X4);
    // 0x4200386C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003870: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x42003874: nop

    // 0x42003878: bc1f        L_420038D0
    if (!c1cs) {
        // 0x4200387C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_420038D0;
    }
    // 0x4200387C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42003880: lwc1        $f6, 0x428C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X428C);
    // 0x42003884: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x42003888: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x4200388C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x42003890: swc1        $f8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f8.u32l;
    // 0x42003894: lwc1        $f0, 0x4($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X4);
    // 0x42003898: nop

    // 0x4200389C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x420038A0: nop

    // 0x420038A4: bc1f        L_420038B8
    if (!c1cs) {
        // 0x420038A8: nop
    
            goto L_420038B8;
    }
    // 0x420038A8: nop

    // 0x420038AC: swc1        $f2, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f2.u32l;
    // 0x420038B0: lwc1        $f0, 0x4($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X4);
    // 0x420038B4: nop

L_420038B8:
    // 0x420038B8: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x420038BC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x420038C0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x420038C4: jal         0x42002BC4
    // 0x420038C8: nop

    ovl_blast_light_2BC4(rdram, ctx);
        goto after_1;
    // 0x420038C8: nop

    after_1:
L_420038CC:
    // 0x420038CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420038D0:
    // 0x420038D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x420038D4: jr          $ra
    // 0x420038D8: nop

    return;
    // 0x420038D8: nop

;}
RECOMP_FUNC void ovl_blast_light_38DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420038DC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x420038E0: slt         $at, $a1, $a3
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x420038E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x420038E8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x420038EC: bne         $at, $zero, L_42003958
    if (ctx->r1 != 0) {
        // 0x420038F0: sw          $a2, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r6;
            goto L_42003958;
    }
    // 0x420038F0: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x420038F4: bne         $a1, $a3, L_42003958
    if (ctx->r5 != ctx->r7) {
        // 0x420038F8: addiu       $a2, $sp, 0x28
        ctx->r6 = ADD32(ctx->r29, 0X28);
            goto L_42003958;
    }
    // 0x420038F8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x420038FC: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x42003900: jal         0x420006C4
    // 0x42003904: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_blast_light_6C4(rdram, ctx);
        goto after_0;
    // 0x42003904: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x42003908: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x4200390C: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x42003910: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x42003914: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x42003918: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x4200391C: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x42003920: addiu       $a2, $zero, 0x210
    ctx->r6 = ADD32(0, 0X210);
    // 0x42003924: jal         0x42001104
    // 0x42003928: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    ovl_blast_light_1104(rdram, ctx);
        goto after_1;
    // 0x42003928: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x4200392C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x42003930: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x42003934: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x42003938: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4200393C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x42003940: jal         0x42000F34
    // 0x42003944: addiu       $a3, $zero, 0x210
    ctx->r7 = ADD32(0, 0X210);
    ovl_blast_light_F34(rdram, ctx);
        goto after_2;
    // 0x42003944: addiu       $a3, $zero, 0x210
    ctx->r7 = ADD32(0, 0X210);
    after_2:
    // 0x42003948: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x4200394C: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x42003950: nop

    // 0x42003954: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
L_42003958:
    // 0x42003958: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4200395C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x42003960: jr          $ra
    // 0x42003964: nop

    return;
    // 0x42003964: nop

;}
RECOMP_FUNC void ovl_blast_light_3968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003968: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4200396C: slti        $at, $a1, 0x8E
    ctx->r1 = SIGNED(ctx->r5) < 0X8E ? 1 : 0;
    // 0x42003970: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x42003974: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x42003978: bne         $at, $zero, L_42003A10
    if (ctx->r1 != 0) {
        // 0x4200397C: sw          $a3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r7;
            goto L_42003A10;
    }
    // 0x4200397C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x42003980: addiu       $at, $zero, 0x8E
    ctx->r1 = ADD32(0, 0X8E);
    // 0x42003984: bne         $a1, $at, L_42003A10
    if (ctx->r5 != ctx->r1) {
        // 0x42003988: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_42003A10;
    }
    // 0x42003988: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4200398C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x42003990: jal         0x42001104
    // 0x42003994: addiu       $a2, $zero, 0x1FD
    ctx->r6 = ADD32(0, 0X1FD);
    ovl_blast_light_1104(rdram, ctx);
        goto after_0;
    // 0x42003994: addiu       $a2, $zero, 0x1FD
    ctx->r6 = ADD32(0, 0X1FD);
    after_0:
    // 0x42003998: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x4200399C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x420039A0: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x420039A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x420039A8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x420039AC: jal         0x42000F34
    // 0x420039B0: addiu       $a3, $zero, 0x21A
    ctx->r7 = ADD32(0, 0X21A);
    ovl_blast_light_F34(rdram, ctx);
        goto after_1;
    // 0x420039B0: addiu       $a3, $zero, 0x21A
    ctx->r7 = ADD32(0, 0X21A);
    after_1:
    // 0x420039B4: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x420039B8: lwc1        $f4, 0x4290($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4290);
    // 0x420039BC: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x420039C0: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x420039C4: lwc1        $f11, 0x4298($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X4298);
    // 0x420039C8: lwc1        $f10, 0x429C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X429C);
    // 0x420039CC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x420039D0: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x420039D4: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x420039D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x420039DC: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x420039E0: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x420039E4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x420039E8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x420039EC: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x420039F0: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x420039F4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x420039F8: jal         0x42000F34
    // 0x420039FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_2;
    // 0x420039FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x42003A00: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x42003A04: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x42003A08: nop

    // 0x42003A0C: swc1        $f6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f6.u32l;
L_42003A10:
    // 0x42003A10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42003A14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x42003A18: jr          $ra
    // 0x42003A1C: nop

    return;
    // 0x42003A1C: nop

;}
RECOMP_FUNC void ovl_blast_light_3A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003A20: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x42003A24: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x42003A28: slt         $at, $a1, $a3
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x42003A2C: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x42003A30: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x42003A34: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x42003A38: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x42003A3C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x42003A40: bne         $at, $zero, L_42003CF4
    if (ctx->r1 != 0) {
        // 0x42003A44: sw          $a3, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r7;
            goto L_42003CF4;
    }
    // 0x42003A44: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x42003A48: bne         $a1, $a3, L_42003AF8
    if (ctx->r5 != ctx->r7) {
        // 0x42003A4C: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_42003AF8;
    }
    // 0x42003A4C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x42003A50: addiu       $a2, $zero, 0x1FB
    ctx->r6 = ADD32(0, 0X1FB);
    // 0x42003A54: jal         0x42001104
    // 0x42003A58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_light_1104(rdram, ctx);
        goto after_0;
    // 0x42003A58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x42003A5C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x42003A60: nop

    // 0x42003A64: swc1        $f20, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f20.u32l;
    // 0x42003A68: jal         0x42000340
    // 0x42003A6C: swc1        $f20, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f20.u32l;
    ovl_blast_light_340(rdram, ctx);
        goto after_1;
    // 0x42003A6C: swc1        $f20, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f20.u32l;
    after_1:
    // 0x42003A70: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x42003A74: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42003A78: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x42003A7C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x42003A80: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x42003A84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x42003A88: add.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x42003A8C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003A90: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x42003A94: lwc1        $f5, 0x42A0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X42A0);
    // 0x42003A98: lwc1        $f4, 0x42A4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X42A4);
    // 0x42003A9C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x42003AA0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x42003AA4: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x42003AA8: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x42003AAC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42003AB0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x42003AB4: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x42003AB8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003ABC: jal         0x42000F34
    // 0x42003AC0: nop

    ovl_blast_light_F34(rdram, ctx);
        goto after_2;
    // 0x42003AC0: nop

    after_2:
    // 0x42003AC4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003AC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42003ACC: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x42003AD0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x42003AD4: jal         0x42000F34
    // 0x42003AD8: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_blast_light_F34(rdram, ctx);
        goto after_3;
    // 0x42003AD8: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_3:
    // 0x42003ADC: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x42003AE0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x42003AE4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x42003AE8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x42003AEC: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
    // 0x42003AF0: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x42003AF4: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
L_42003AF8:
    // 0x42003AF8: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x42003AFC: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x42003B00: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x42003B04: addu        $v0, $t8, $v1
    ctx->r2 = ADD32(ctx->r24, ctx->r3);
    // 0x42003B08: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x42003B0C: slt         $at, $v0, $t9
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x42003B10: bne         $at, $zero, L_42003BA4
    if (ctx->r1 != 0) {
        // 0x42003B14: nop
    
            goto L_42003BA4;
    }
    // 0x42003B14: nop

    // 0x42003B18: bne         $t9, $v0, L_42003B30
    if (ctx->r25 != ctx->r2) {
        // 0x42003B1C: nop
    
            goto L_42003B30;
    }
    // 0x42003B1C: nop

    // 0x42003B20: swc1        $f20, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
    // 0x42003B24: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42003B28: b           L_42003B8C
    // 0x42003B2C: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
        goto L_42003B8C;
    // 0x42003B2C: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
L_42003B30:
    // 0x42003B30: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x42003B34: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x42003B38: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x42003B3C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42003B40: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42003B44: div.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x42003B48: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x42003B4C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x42003B50: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x42003B54: sub.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x42003B58: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x42003B5C: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42003B60: nop

    // 0x42003B64: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x42003B68: nop

    // 0x42003B6C: bc1f        L_42003B88
    if (!c1cs) {
        // 0x42003B70: nop
    
            goto L_42003B88;
    }
    // 0x42003B70: nop

    // 0x42003B74: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x42003B78: jal         0x42000214
    // 0x42003B7C: swc1        $f20, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
    ovl_blast_light_214(rdram, ctx);
        goto after_4;
    // 0x42003B7C: swc1        $f20, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
    after_4:
    // 0x42003B80: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42003B84: nop

L_42003B88:
    // 0x42003B88: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
L_42003B8C:
    // 0x42003B8C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x42003B90: bc1t        L_42003BA4
    if (c1cs) {
        // 0x42003B94: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_42003BA4;
    }
    // 0x42003B94: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x42003B98: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x42003B9C: jal         0x42000214
    // 0x42003BA0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    ovl_blast_light_214(rdram, ctx);
        goto after_5;
    // 0x42003BA0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_5:
L_42003BA4:
    // 0x42003BA4: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003BA8: lwc1        $f18, 0x42A8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X42A8);
    // 0x42003BAC: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003BB0: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x42003BB4: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x42003BB8: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x42003BBC: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x42003BC0: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003BC4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42003BC8: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x42003BCC: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003BD0: nop

    // 0x42003BD4: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x42003BD8: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003BDC: nop

    // 0x42003BE0: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x42003BE4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003BE8: jal         0x42000F34
    // 0x42003BEC: nop

    ovl_blast_light_F34(rdram, ctx);
        goto after_6;
    // 0x42003BEC: nop

    after_6:
    // 0x42003BF0: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x42003BF4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42003BF8: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003BFC: nop

    // 0x42003C00: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x42003C04: nop

    // 0x42003C08: bc1f        L_42003CF8
    if (!c1cs) {
        // 0x42003C0C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_42003CF8;
    }
    // 0x42003C0C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x42003C10: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x42003C14: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x42003C18: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x42003C1C: nop

    // 0x42003C20: bc1f        L_42003CF8
    if (!c1cs) {
        // 0x42003C24: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_42003CF8;
    }
    // 0x42003C24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x42003C28: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42003C2C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42003C30: sub.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x42003C34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42003C38: swc1        $f10, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f10.u32l;
    // 0x42003C3C: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x42003C40: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x42003C44: c.le.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl <= ctx->f20.fl;
    // 0x42003C48: nop

    // 0x42003C4C: bc1f        L_42003C6C
    if (!c1cs) {
        // 0x42003C50: nop
    
            goto L_42003C6C;
    }
    // 0x42003C50: nop

    // 0x42003C54: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003C58: swc1        $f20, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f20.u32l;
    // 0x42003C5C: jal         0x42000F34
    // 0x42003C60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_7;
    // 0x42003C60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x42003C64: b           L_42003CF8
    // 0x42003C68: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_42003CF8;
    // 0x42003C68: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_42003C6C:
    // 0x42003C6C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x42003C70: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x42003C74: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003C78: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x42003C7C: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x42003C80: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x42003C84: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x42003C88: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x42003C8C: beq         $a3, $zero, L_42003CD8
    if (ctx->r7 == 0) {
        // 0x42003C90: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_42003CD8;
    }
    // 0x42003C90: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x42003C94: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42003C98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x42003C9C: sub.s       $f8, $f0, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x42003CA0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x42003CA4: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x42003CA8: nop

    // 0x42003CAC: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x42003CB0: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x42003CB4: nop

    // 0x42003CB8: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x42003CBC: bne         $a3, $zero, L_42003CD0
    if (ctx->r7 != 0) {
        // 0x42003CC0: nop
    
            goto L_42003CD0;
    }
    // 0x42003CC0: nop

    // 0x42003CC4: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x42003CC8: b           L_42003CE8
    // 0x42003CCC: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_42003CE8;
    // 0x42003CCC: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_42003CD0:
    // 0x42003CD0: b           L_42003CE8
    // 0x42003CD4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_42003CE8;
    // 0x42003CD4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_42003CD8:
    // 0x42003CD8: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x42003CDC: nop

    // 0x42003CE0: bltz        $a3, L_42003CD0
    if (SIGNED(ctx->r7) < 0) {
        // 0x42003CE4: nop
    
            goto L_42003CD0;
    }
    // 0x42003CE4: nop

L_42003CE8:
    // 0x42003CE8: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x42003CEC: jal         0x42000F34
    // 0x42003CF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_8;
    // 0x42003CF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
L_42003CF4:
    // 0x42003CF4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_42003CF8:
    // 0x42003CF8: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x42003CFC: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x42003D00: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x42003D04: jr          $ra
    // 0x42003D08: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x42003D08: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_blast_light_3D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003D0C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x42003D10: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x42003D14: slti        $at, $a1, 0xBE
    ctx->r1 = SIGNED(ctx->r5) < 0XBE ? 1 : 0;
    // 0x42003D18: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x42003D1C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x42003D20: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x42003D24: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x42003D28: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x42003D2C: bne         $at, $zero, L_42003E7C
    if (ctx->r1 != 0) {
        // 0x42003D30: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_42003E7C;
    }
    // 0x42003D30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x42003D34: addiu       $at, $zero, 0xBE
    ctx->r1 = ADD32(0, 0XBE);
    // 0x42003D38: bne         $a1, $at, L_42003D50
    if (ctx->r5 != ctx->r1) {
        // 0x42003D3C: slti        $at, $a1, 0xD2
        ctx->r1 = SIGNED(ctx->r5) < 0XD2 ? 1 : 0;
            goto L_42003D50;
    }
    // 0x42003D3C: slti        $at, $a1, 0xD2
    ctx->r1 = SIGNED(ctx->r5) < 0XD2 ? 1 : 0;
    // 0x42003D40: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42003D44: b           L_42003E68
    // 0x42003D48: swc1        $f4, 0x118($a0)
    MEM_W(0X118, ctx->r4) = ctx->f4.u32l;
        goto L_42003E68;
    // 0x42003D48: swc1        $f4, 0x118($a0)
    MEM_W(0X118, ctx->r4) = ctx->f4.u32l;
    // 0x42003D4C: slti        $at, $a1, 0xD2
    ctx->r1 = SIGNED(ctx->r5) < 0XD2 ? 1 : 0;
L_42003D50:
    // 0x42003D50: beq         $at, $zero, L_42003D70
    if (ctx->r1 == 0) {
        // 0x42003D54: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_42003D70;
    }
    // 0x42003D54: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x42003D58: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42003D5C: lwc1        $f6, 0x118($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X118);
    // 0x42003D60: nop

    // 0x42003D64: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x42003D68: b           L_42003E68
    // 0x42003D6C: swc1        $f10, 0x118($s4)
    MEM_W(0X118, ctx->r20) = ctx->f10.u32l;
        goto L_42003E68;
    // 0x42003D6C: swc1        $f10, 0x118($s4)
    MEM_W(0X118, ctx->r20) = ctx->f10.u32l;
L_42003D70:
    // 0x42003D70: addiu       $at, $zero, 0xD2
    ctx->r1 = ADD32(0, 0XD2);
    // 0x42003D74: bne         $a1, $at, L_42003E50
    if (ctx->r5 != ctx->r1) {
        // 0x42003D78: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_42003E50;
    }
    // 0x42003D78: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x42003D7C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x42003D80: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x42003D84: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x42003D88: jal         0x42002BC4
    // 0x42003D8C: swc1        $f16, 0x118($s4)
    MEM_W(0X118, ctx->r20) = ctx->f16.u32l;
    ovl_blast_light_2BC4(rdram, ctx);
        goto after_0;
    // 0x42003D8C: swc1        $f16, 0x118($s4)
    MEM_W(0X118, ctx->r20) = ctx->f16.u32l;
    after_0:
    // 0x42003D90: lw          $a1, 0x7C($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X7C);
    // 0x42003D94: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x42003D98: beq         $s2, $a1, L_42003DAC
    if (ctx->r18 == ctx->r5) {
        // 0x42003D9C: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_42003DAC;
    }
    // 0x42003D9C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42003DA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42003DA4: jal         0x42000F34
    // 0x42003DA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_1;
    // 0x42003DA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_42003DAC:
    // 0x42003DAC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x42003DB0: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
L_42003DB4:
    // 0x42003DB4: lw          $a1, 0x90($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X90);
    // 0x42003DB8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42003DBC: beq         $s2, $a1, L_42003DCC
    if (ctx->r18 == ctx->r5) {
        // 0x42003DC0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_42003DCC;
    }
    // 0x42003DC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42003DC4: jal         0x42000F34
    // 0x42003DC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_2;
    // 0x42003DC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
L_42003DCC:
    // 0x42003DCC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x42003DD0: slti        $at, $s0, 0x20
    ctx->r1 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x42003DD4: bne         $at, $zero, L_42003DB4
    if (ctx->r1 != 0) {
        // 0x42003DD8: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_42003DB4;
    }
    // 0x42003DD8: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x42003DDC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x42003DE0: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
L_42003DE4:
    // 0x42003DE4: lw          $a1, 0xB0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XB0);
    // 0x42003DE8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42003DEC: beq         $s2, $a1, L_42003DFC
    if (ctx->r18 == ctx->r5) {
        // 0x42003DF0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_42003DFC;
    }
    // 0x42003DF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42003DF4: jal         0x42000F34
    // 0x42003DF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_3;
    // 0x42003DF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
L_42003DFC:
    // 0x42003DFC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x42003E00: slti        $at, $s0, 0x18
    ctx->r1 = SIGNED(ctx->r16) < 0X18 ? 1 : 0;
    // 0x42003E04: bne         $at, $zero, L_42003DE4
    if (ctx->r1 != 0) {
        // 0x42003E08: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_42003DE4;
    }
    // 0x42003E08: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x42003E0C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x42003E10: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    // 0x42003E14: addiu       $s3, $zero, 0x50
    ctx->r19 = ADD32(0, 0X50);
L_42003E18:
    // 0x42003E18: lw          $a1, 0xC8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC8);
    // 0x42003E1C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42003E20: beq         $s2, $a1, L_42003E30
    if (ctx->r18 == ctx->r5) {
        // 0x42003E24: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_42003E30;
    }
    // 0x42003E24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42003E28: jal         0x42000F34
    // 0x42003E2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_light_F34(rdram, ctx);
        goto after_4;
    // 0x42003E2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
L_42003E30:
    // 0x42003E30: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x42003E34: bne         $s0, $s3, L_42003E18
    if (ctx->r16 != ctx->r19) {
        // 0x42003E38: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_42003E18;
    }
    // 0x42003E38: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x42003E3C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x42003E40: jal         0x42001208
    // 0x42003E44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_blast_light_1208(rdram, ctx);
        goto after_5;
    // 0x42003E44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x42003E48: b           L_42003E6C
    // 0x42003E4C: lw          $a3, 0x118($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X118);
        goto L_42003E6C;
    // 0x42003E4C: lw          $a3, 0x118($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X118);
L_42003E50:
    // 0x42003E50: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x42003E54: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42003E58: lwc1        $f18, 0x118($s4)
    ctx->f18.u32l = MEM_W(ctx->r20, 0X118);
    // 0x42003E5C: nop

    // 0x42003E60: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x42003E64: swc1        $f6, 0x118($s4)
    MEM_W(0X118, ctx->r20) = ctx->f6.u32l;
L_42003E68:
    // 0x42003E68: lw          $a3, 0x118($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X118);
L_42003E6C:
    // 0x42003E6C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x42003E70: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x42003E74: jal         0x42000214
    // 0x42003E78: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    ovl_blast_light_214(rdram, ctx);
        goto after_6;
    // 0x42003E78: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_6:
L_42003E7C:
    // 0x42003E7C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x42003E80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x42003E84: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x42003E88: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x42003E8C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x42003E90: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x42003E94: jr          $ra
    // 0x42003E98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x42003E98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_blast_light_3E9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003E9C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x42003EA0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x42003EA4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x42003EA8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x42003EAC: lw          $s1, 0x68($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X68);
    // 0x42003EB0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x42003EB4: addiu       $a2, $s0, 0x7C
    ctx->r6 = ADD32(ctx->r16, 0X7C);
    // 0x42003EB8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x42003EBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42003EC0: jal         0x42002C08
    // 0x42003EC4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_blast_light_2C08(rdram, ctx);
        goto after_0;
    // 0x42003EC4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x42003EC8: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x42003ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003ED0: jal         0x42003810
    // 0x42003ED4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_blast_light_3810(rdram, ctx);
        goto after_1;
    // 0x42003ED4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x42003ED8: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x42003EDC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42003EE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003EE4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x42003EE8: addiu       $a2, $s0, 0x90
    ctx->r6 = ADD32(ctx->r16, 0X90);
    // 0x42003EEC: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x42003EF0: jal         0x420038DC
    // 0x42003EF4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_blast_light_38DC(rdram, ctx);
        goto after_2;
    // 0x42003EF4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x42003EF8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x42003EFC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42003F00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003F04: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x42003F08: addiu       $a2, $s0, 0x98
    ctx->r6 = ADD32(ctx->r16, 0X98);
    // 0x42003F0C: addiu       $a3, $zero, 0x2A
    ctx->r7 = ADD32(0, 0X2A);
    // 0x42003F10: jal         0x420038DC
    // 0x42003F14: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_blast_light_38DC(rdram, ctx);
        goto after_3;
    // 0x42003F14: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x42003F18: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x42003F1C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42003F20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003F24: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x42003F28: addiu       $a2, $s0, 0xA0
    ctx->r6 = ADD32(ctx->r16, 0XA0);
    // 0x42003F2C: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    // 0x42003F30: jal         0x420038DC
    // 0x42003F34: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_blast_light_38DC(rdram, ctx);
        goto after_4;
    // 0x42003F34: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x42003F38: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x42003F3C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x42003F40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003F44: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x42003F48: addiu       $a2, $s0, 0xA8
    ctx->r6 = ADD32(ctx->r16, 0XA8);
    // 0x42003F4C: addiu       $a3, $zero, 0x66
    ctx->r7 = ADD32(0, 0X66);
    // 0x42003F50: jal         0x420038DC
    // 0x42003F54: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    ovl_blast_light_38DC(rdram, ctx);
        goto after_5;
    // 0x42003F54: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x42003F58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003F5C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x42003F60: addiu       $a2, $s0, 0xB0
    ctx->r6 = ADD32(ctx->r16, 0XB0);
    // 0x42003F64: jal         0x42003968
    // 0x42003F68: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    ovl_blast_light_3968(rdram, ctx);
        goto after_6;
    // 0x42003F68: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    after_6:
    // 0x42003F6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003F70: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x42003F74: addiu       $a2, $s0, 0xB8
    ctx->r6 = ADD32(ctx->r16, 0XB8);
    // 0x42003F78: jal         0x42003968
    // 0x42003F7C: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    ovl_blast_light_3968(rdram, ctx);
        goto after_7;
    // 0x42003F7C: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    after_7:
    // 0x42003F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003F84: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x42003F88: addiu       $a2, $s0, 0xC0
    ctx->r6 = ADD32(ctx->r16, 0XC0);
    // 0x42003F8C: jal         0x42003968
    // 0x42003F90: lui         $a3, 0x4396
    ctx->r7 = S32(0X4396 << 16);
    ovl_blast_light_3968(rdram, ctx);
        goto after_8;
    // 0x42003F90: lui         $a3, 0x4396
    ctx->r7 = S32(0X4396 << 16);
    after_8:
    // 0x42003F94: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x42003F98: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x42003F9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003FA0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x42003FA4: addiu       $a2, $s0, 0xC8
    ctx->r6 = ADD32(ctx->r16, 0XC8);
    // 0x42003FA8: jal         0x42003A20
    // 0x42003FAC: addiu       $a3, $zero, 0x8E
    ctx->r7 = ADD32(0, 0X8E);
    ovl_blast_light_3A20(rdram, ctx);
        goto after_9;
    // 0x42003FAC: addiu       $a3, $zero, 0x8E
    ctx->r7 = ADD32(0, 0X8E);
    after_9:
    // 0x42003FB0: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x42003FB4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x42003FB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003FBC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x42003FC0: addiu       $a2, $s0, 0xD8
    ctx->r6 = ADD32(ctx->r16, 0XD8);
    // 0x42003FC4: jal         0x42003A20
    // 0x42003FC8: addiu       $a3, $zero, 0x96
    ctx->r7 = ADD32(0, 0X96);
    ovl_blast_light_3A20(rdram, ctx);
        goto after_10;
    // 0x42003FC8: addiu       $a3, $zero, 0x96
    ctx->r7 = ADD32(0, 0X96);
    after_10:
    // 0x42003FCC: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x42003FD0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x42003FD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003FD8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x42003FDC: addiu       $a2, $s0, 0xE8
    ctx->r6 = ADD32(ctx->r16, 0XE8);
    // 0x42003FE0: jal         0x42003A20
    // 0x42003FE4: addiu       $a3, $zero, 0x9E
    ctx->r7 = ADD32(0, 0X9E);
    ovl_blast_light_3A20(rdram, ctx);
        goto after_11;
    // 0x42003FE4: addiu       $a3, $zero, 0x9E
    ctx->r7 = ADD32(0, 0X9E);
    after_11:
    // 0x42003FE8: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x42003FEC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x42003FF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003FF4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x42003FF8: addiu       $a2, $s0, 0xF8
    ctx->r6 = ADD32(ctx->r16, 0XF8);
    // 0x42003FFC: jal         0x42003A20
    // 0x42004000: addiu       $a3, $zero, 0xA6
    ctx->r7 = ADD32(0, 0XA6);
    ovl_blast_light_3A20(rdram, ctx);
        goto after_12;
    // 0x42004000: addiu       $a3, $zero, 0xA6
    ctx->r7 = ADD32(0, 0XA6);
    after_12:
    // 0x42004004: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
    // 0x42004008: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x4200400C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42004010: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x42004014: addiu       $a2, $s0, 0x108
    ctx->r6 = ADD32(ctx->r16, 0X108);
    // 0x42004018: jal         0x42003A20
    // 0x4200401C: addiu       $a3, $zero, 0xAE
    ctx->r7 = ADD32(0, 0XAE);
    ovl_blast_light_3A20(rdram, ctx);
        goto after_13;
    // 0x4200401C: addiu       $a3, $zero, 0xAE
    ctx->r7 = ADD32(0, 0XAE);
    after_13:
    // 0x42004020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42004024: jal         0x42003D0C
    // 0x42004028: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_blast_light_3D0C(rdram, ctx);
        goto after_14;
    // 0x42004028: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_14:
    // 0x4200402C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x42004030: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x42004034: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x42004038: jr          $ra
    // 0x4200403C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x4200403C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_blast_dark_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000000: lui         $v0, 0x4200
    ctx->r2 = S32(0X4200 << 16);
    // 0x42000004: jr          $ra
    // 0x42000008: addiu       $v0, $v0, 0x2B98
    ctx->r2 = ADD32(ctx->r2, 0X2B98);
    return;
    // 0x42000008: addiu       $v0, $v0, 0x2B98
    ctx->r2 = ADD32(ctx->r2, 0X2B98);
    // 0x4200000C: nop

;}
RECOMP_FUNC void ovl_blast_dark_10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_4C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_58(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_64(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_70(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_7C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_88(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_94(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_A0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_AC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_B8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_C4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_D0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_DC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_E8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_F4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_100(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_10C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_118(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_124(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_dark_130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000130: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000134: jr          $t1
    // 0x42000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
;}
