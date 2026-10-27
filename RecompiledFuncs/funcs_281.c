#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_demo_guide_1628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001628: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000162C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001630: jal         0x600011B4
    // 0x60001634: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_demo_guide_11B4(rdram, ctx);
        goto after_0;
    // 0x60001634: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x60001638: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x6000163C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001640: slti        $at, $t6, 0x5
    ctx->r1 = SIGNED(ctx->r14) < 0X5 ? 1 : 0;
    // 0x60001644: bne         $at, $zero, L_6000168C
    if (ctx->r1 != 0) {
        // 0x60001648: nop
    
            goto L_6000168C;
    }
    // 0x60001648: nop

    // 0x6000164C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001650: lw          $a0, 0x1CC4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CC4);
    // 0x60001654: nop

    // 0x60001658: beq         $a0, $zero, L_60001668
    if (ctx->r4 == 0) {
        // 0x6000165C: nop
    
            goto L_60001668;
    }
    // 0x6000165C: nop

    // 0x60001660: jal         0x6000082C
    // 0x60001664: nop

    ovl_demo_guide_82C(rdram, ctx);
        goto after_1;
    // 0x60001664: nop

    after_1:
L_60001668:
    // 0x60001668: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000166C: addiu       $a0, $a0, 0x1534
    ctx->r4 = ADD32(ctx->r4, 0X1534);
    // 0x60001670: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60001674: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60001678: jal         0x60000820
    // 0x6000167C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_guide_820(rdram, ctx);
        goto after_2;
    // 0x6000167C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x60001680: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001684: b           L_600016C4
    // 0x60001688: sw          $v0, 0x1CC4($at)
    MEM_W(0X1CC4, ctx->r1) = ctx->r2;
        goto L_600016C4;
    // 0x60001688: sw          $v0, 0x1CC4($at)
    MEM_W(0X1CC4, ctx->r1) = ctx->r2;
L_6000168C:
    // 0x6000168C: lw          $a0, 0x1CC8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CC8);
    // 0x60001690: nop

    // 0x60001694: beq         $a0, $zero, L_600016A4
    if (ctx->r4 == 0) {
        // 0x60001698: nop
    
            goto L_600016A4;
    }
    // 0x60001698: nop

    // 0x6000169C: jal         0x6000082C
    // 0x600016A0: nop

    ovl_demo_guide_82C(rdram, ctx);
        goto after_3;
    // 0x600016A0: nop

    after_3:
L_600016A4:
    // 0x600016A4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600016A8: addiu       $a0, $a0, 0x15A0
    ctx->r4 = ADD32(ctx->r4, 0X15A0);
    // 0x600016AC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600016B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600016B4: jal         0x60000820
    // 0x600016B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_guide_820(rdram, ctx);
        goto after_4;
    // 0x600016B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x600016BC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600016C0: sw          $v0, 0x1CC8($at)
    MEM_W(0X1CC8, ctx->r1) = ctx->r2;
L_600016C4:
    // 0x600016C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600016C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600016CC: jr          $ra
    // 0x600016D0: nop

    return;
    // 0x600016D0: nop

;}
RECOMP_FUNC void ovl_demo_guide_16D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600016D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x600016D8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x600016DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x600016E0: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x600016E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x600016E8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x600016EC: addiu       $s1, $s1, 0x1CB8
    ctx->r17 = ADD32(ctx->r17, 0X1CB8);
    // 0x600016F0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_600016F4:
    // 0x600016F4: jal         0x60000850
    // 0x600016F8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_demo_guide_850(rdram, ctx);
        goto after_0;
    // 0x600016F8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x600016FC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x60001700: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x60001704: jal         0x60000634
    // 0x60001708: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_demo_guide_634(rdram, ctx);
        goto after_1;
    // 0x60001708: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x6000170C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60001710: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x60001714: bne         $at, $zero, L_600016F4
    if (ctx->r1 != 0) {
        // 0x60001718: nop
    
            goto L_600016F4;
    }
    // 0x60001718: nop

    // 0x6000171C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60001720: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
L_60001724:
    // 0x60001724: jal         0x60000850
    // 0x60001728: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_demo_guide_850(rdram, ctx);
        goto after_2;
    // 0x60001728: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x6000172C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x60001730: addiu       $a1, $zero, -0x28
    ctx->r5 = ADD32(0, -0X28);
    // 0x60001734: jal         0x60000634
    // 0x60001738: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_demo_guide_634(rdram, ctx);
        goto after_3;
    // 0x60001738: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x6000173C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60001740: bne         $s0, $s2, L_60001724
    if (ctx->r16 != ctx->r18) {
        // 0x60001744: nop
    
            goto L_60001724;
    }
    // 0x60001744: nop

    // 0x60001748: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000174C: jal         0x60000838
    // 0x60001750: sw          $zero, 0x1CC4($at)
    MEM_W(0X1CC4, ctx->r1) = 0;
    ovl_demo_guide_838(rdram, ctx);
        goto after_4;
    // 0x60001750: sw          $zero, 0x1CC4($at)
    MEM_W(0X1CC4, ctx->r1) = 0;
    after_4:
    // 0x60001754: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60001758: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x6000175C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60001760: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60001764: jr          $ra
    // 0x60001768: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x60001768: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_demo_guide_176C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000176C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60001770: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x60001774: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60001778: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x6000177C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60001780: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x60001784: addiu       $s1, $s1, 0x1CB0
    ctx->r17 = ADD32(ctx->r17, 0X1CB0);
    // 0x60001788: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_6000178C:
    // 0x6000178C: jal         0x60000850
    // 0x60001790: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_demo_guide_850(rdram, ctx);
        goto after_0;
    // 0x60001790: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x60001794: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x60001798: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x6000179C: jal         0x60000634
    // 0x600017A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_demo_guide_634(rdram, ctx);
        goto after_1;
    // 0x600017A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x600017A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600017A8: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x600017AC: bne         $at, $zero, L_6000178C
    if (ctx->r1 != 0) {
        // 0x600017B0: nop
    
            goto L_6000178C;
    }
    // 0x600017B0: nop

    // 0x600017B4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600017B8: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
L_600017BC:
    // 0x600017BC: jal         0x60000850
    // 0x600017C0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_demo_guide_850(rdram, ctx);
        goto after_2;
    // 0x600017C0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x600017C4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x600017C8: addiu       $a1, $zero, -0x29
    ctx->r5 = ADD32(0, -0X29);
    // 0x600017CC: jal         0x60000634
    // 0x600017D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_demo_guide_634(rdram, ctx);
        goto after_3;
    // 0x600017D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x600017D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600017D8: bne         $s0, $s2, L_600017BC
    if (ctx->r16 != ctx->r18) {
        // 0x600017DC: nop
    
            goto L_600017BC;
    }
    // 0x600017DC: nop

    // 0x600017E0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600017E4: jal         0x60000838
    // 0x600017E8: sw          $zero, 0x1CC8($at)
    MEM_W(0X1CC8, ctx->r1) = 0;
    ovl_demo_guide_838(rdram, ctx);
        goto after_4;
    // 0x600017E8: sw          $zero, 0x1CC8($at)
    MEM_W(0X1CC8, ctx->r1) = 0;
    after_4:
    // 0x600017EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x600017F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x600017F4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x600017F8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x600017FC: jr          $ra
    // 0x60001800: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x60001800: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_demo_guide_1804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001804: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000180C: jal         0x600011B4
    // 0x60001810: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_demo_guide_11B4(rdram, ctx);
        goto after_0;
    // 0x60001810: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x60001814: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x60001818: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000181C: slti        $at, $t6, 0x5
    ctx->r1 = SIGNED(ctx->r14) < 0X5 ? 1 : 0;
    // 0x60001820: bne         $at, $zero, L_60001868
    if (ctx->r1 != 0) {
        // 0x60001824: nop
    
            goto L_60001868;
    }
    // 0x60001824: nop

    // 0x60001828: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000182C: lw          $a0, 0x1CC4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CC4);
    // 0x60001830: nop

    // 0x60001834: beq         $a0, $zero, L_60001844
    if (ctx->r4 == 0) {
        // 0x60001838: nop
    
            goto L_60001844;
    }
    // 0x60001838: nop

    // 0x6000183C: jal         0x6000082C
    // 0x60001840: nop

    ovl_demo_guide_82C(rdram, ctx);
        goto after_1;
    // 0x60001840: nop

    after_1:
L_60001844:
    // 0x60001844: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001848: addiu       $a0, $a0, 0x16D4
    ctx->r4 = ADD32(ctx->r4, 0X16D4);
    // 0x6000184C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60001850: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60001854: jal         0x60000820
    // 0x60001858: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_guide_820(rdram, ctx);
        goto after_2;
    // 0x60001858: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x6000185C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001860: b           L_600018A0
    // 0x60001864: sw          $v0, 0x1CC4($at)
    MEM_W(0X1CC4, ctx->r1) = ctx->r2;
        goto L_600018A0;
    // 0x60001864: sw          $v0, 0x1CC4($at)
    MEM_W(0X1CC4, ctx->r1) = ctx->r2;
L_60001868:
    // 0x60001868: lw          $a0, 0x1CC8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CC8);
    // 0x6000186C: nop

    // 0x60001870: beq         $a0, $zero, L_60001880
    if (ctx->r4 == 0) {
        // 0x60001874: nop
    
            goto L_60001880;
    }
    // 0x60001874: nop

    // 0x60001878: jal         0x6000082C
    // 0x6000187C: nop

    ovl_demo_guide_82C(rdram, ctx);
        goto after_3;
    // 0x6000187C: nop

    after_3:
L_60001880:
    // 0x60001880: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001884: addiu       $a0, $a0, 0x176C
    ctx->r4 = ADD32(ctx->r4, 0X176C);
    // 0x60001888: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000188C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60001890: jal         0x60000820
    // 0x60001894: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_guide_820(rdram, ctx);
        goto after_4;
    // 0x60001894: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x60001898: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000189C: sw          $v0, 0x1CC8($at)
    MEM_W(0X1CC8, ctx->r1) = ctx->r2;
L_600018A0:
    // 0x600018A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600018A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600018A8: jr          $ra
    // 0x600018AC: nop

    return;
    // 0x600018AC: nop

;}
RECOMP_FUNC void ovl_demo_guide_18B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600018B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600018B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600018B8: beq         $a0, $zero, L_600018E8
    if (ctx->r4 == 0) {
        // 0x600018BC: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_600018E8;
    }
    // 0x600018BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x600018C0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600018C4: lw          $a0, 0x1CC4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CC4);
    // 0x600018C8: nop

    // 0x600018CC: beq         $a0, $zero, L_6000190C
    if (ctx->r4 == 0) {
        // 0x600018D0: nop
    
            goto L_6000190C;
    }
    // 0x600018D0: nop

    // 0x600018D4: jal         0x6000082C
    // 0x600018D8: nop

    ovl_demo_guide_82C(rdram, ctx);
        goto after_0;
    // 0x600018D8: nop

    after_0:
    // 0x600018DC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600018E0: b           L_6000190C
    // 0x600018E4: sw          $zero, 0x1CC4($at)
    MEM_W(0X1CC4, ctx->r1) = 0;
        goto L_6000190C;
    // 0x600018E4: sw          $zero, 0x1CC4($at)
    MEM_W(0X1CC4, ctx->r1) = 0;
L_600018E8:
    // 0x600018E8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600018EC: lw          $a0, 0x1CC8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CC8);
    // 0x600018F0: nop

    // 0x600018F4: beq         $a0, $zero, L_6000190C
    if (ctx->r4 == 0) {
        // 0x600018F8: nop
    
            goto L_6000190C;
    }
    // 0x600018F8: nop

    // 0x600018FC: jal         0x6000082C
    // 0x60001900: nop

    ovl_demo_guide_82C(rdram, ctx);
        goto after_1;
    // 0x60001900: nop

    after_1:
    // 0x60001904: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001908: sw          $zero, 0x1CC8($at)
    MEM_W(0X1CC8, ctx->r1) = 0;
L_6000190C:
    // 0x6000190C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x60001910: jal         0x600013FC
    // 0x60001914: nop

    ovl_demo_guide_13FC(rdram, ctx);
        goto after_2;
    // 0x60001914: nop

    after_2:
    // 0x60001918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000191C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001920: jr          $ra
    // 0x60001924: nop

    return;
    // 0x60001924: nop

;}
RECOMP_FUNC void ovl_demo_guide_1928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001928: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x6000192C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60001930: jal         0x60000868
    // 0x60001934: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_demo_guide_868(rdram, ctx);
        goto after_0;
    // 0x60001934: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60001938: jal         0x60000C1C
    // 0x6000193C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    ovl_demo_guide_C1C(rdram, ctx);
        goto after_1;
    // 0x6000193C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_1:
    // 0x60001940: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x60001944: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60001948: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x6000194C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60001950: jal         0x60000850
    // 0x60001954: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    ovl_demo_guide_850(rdram, ctx);
        goto after_2;
    // 0x60001954: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_2:
    // 0x60001958: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x6000195C: jal         0x60000A60
    // 0x60001960: addiu       $a0, $a0, 0xB0D
    ctx->r4 = ADD32(ctx->r4, 0XB0D);
    ovl_demo_guide_A60(rdram, ctx);
        goto after_3;
    // 0x60001960: addiu       $a0, $a0, 0xB0D
    ctx->r4 = ADD32(ctx->r4, 0XB0D);
    after_3:
    // 0x60001964: jal         0x60000850
    // 0x60001968: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_demo_guide_850(rdram, ctx);
        goto after_4;
    // 0x60001968: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_4:
    // 0x6000196C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x60001970: nop

    // 0x60001974: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60001978: beq         $t9, $zero, L_600019F0
    if (ctx->r25 == 0) {
        // 0x6000197C: nop
    
            goto L_600019F0;
    }
    // 0x6000197C: nop

L_60001980:
    // 0x60001980: jal         0x60001128
    // 0x60001984: nop

    ovl_demo_guide_1128(rdram, ctx);
        goto after_5;
    // 0x60001984: nop

    after_5:
    // 0x60001988: beq         $v0, $zero, L_600019D4
    if (ctx->r2 == 0) {
        // 0x6000198C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_600019D4;
    }
    // 0x6000198C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60001990: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60001994: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60001998: jal         0x60000238
    // 0x6000199C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_demo_guide_238(rdram, ctx);
        goto after_6;
    // 0x6000199C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_6:
    // 0x600019A0: jal         0x60000208
    // 0x600019A4: nop

    ovl_demo_guide_208(rdram, ctx);
        goto after_7;
    // 0x600019A4: nop

    after_7:
    // 0x600019A8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x600019AC: jal         0x60000F50
    // 0x600019B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_demo_guide_F50(rdram, ctx);
        goto after_8;
    // 0x600019B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x600019B4: jal         0x60000A84
    // 0x600019B8: nop

    ovl_demo_guide_A84(rdram, ctx);
        goto after_9;
    // 0x600019B8: nop

    after_9:
    // 0x600019BC: jal         0x600018B0
    // 0x600019C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_guide_18B0(rdram, ctx);
        goto after_10;
    // 0x600019C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x600019C4: jal         0x600018B0
    // 0x600019C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_demo_guide_18B0(rdram, ctx);
        goto after_11;
    // 0x600019C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_11:
    // 0x600019CC: b           L_600019F0
    // 0x600019D0: nop

        goto L_600019F0;
    // 0x600019D0: nop

L_600019D4:
    // 0x600019D4: jal         0x6000085C
    // 0x600019D8: nop

    ovl_demo_guide_85C(rdram, ctx);
        goto after_12;
    // 0x600019D8: nop

    after_12:
    // 0x600019DC: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x600019E0: nop

    // 0x600019E4: andi        $t1, $t0, 0x800
    ctx->r9 = ctx->r8 & 0X800;
    // 0x600019E8: bne         $t1, $zero, L_60001980
    if (ctx->r9 != 0) {
        // 0x600019EC: nop
    
            goto L_60001980;
    }
    // 0x600019EC: nop

L_600019F0:
    // 0x600019F0: jal         0x60000268
    // 0x600019F4: nop

    ovl_demo_guide_268(rdram, ctx);
        goto after_13;
    // 0x600019F4: nop

    after_13:
    // 0x600019F8: addiu       $a0, $zero, 0x808
    ctx->r4 = ADD32(0, 0X808);
    // 0x600019FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60001A00: jal         0x60000C10
    // 0x60001A04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_demo_guide_C10(rdram, ctx);
        goto after_14;
    // 0x60001A04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_14:
    // 0x60001A08: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x60001A0C: nop

    // 0x60001A10: ori         $t3, $t2, 0x4000
    ctx->r11 = ctx->r10 | 0X4000;
    // 0x60001A14: jal         0x60000838
    // 0x60001A18: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    ovl_demo_guide_838(rdram, ctx);
        goto after_15;
    // 0x60001A18: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    after_15:
    // 0x60001A1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60001A20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60001A24: jr          $ra
    // 0x60001A28: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x60001A28: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_demo_guide_1A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001A2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001A30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001A34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60001A38: jal         0x6000025C
    // 0x60001A3C: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    ovl_demo_guide_25C(rdram, ctx);
        goto after_0;
    // 0x60001A3C: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    after_0:
    // 0x60001A40: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001A44: addiu       $a0, $a0, 0x1928
    ctx->r4 = ADD32(ctx->r4, 0X1928);
    // 0x60001A48: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60001A4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60001A50: jal         0x60000820
    // 0x60001A54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_demo_guide_820(rdram, ctx);
        goto after_1;
    // 0x60001A54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x60001A58: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x60001A5C: nop

    // 0x60001A60: sw          $t6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r14;
    // 0x60001A64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001A68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001A6C: jr          $ra
    // 0x60001A70: nop

    return;
    // 0x60001A70: nop

;}
RECOMP_FUNC void ovl_demo_guide_1A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001A74: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x60001A78: sll         $t6, $a0, 0
    ctx->r14 = S32(ctx->r4 << 0);
    // 0x60001A7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001A80: bgez        $t6, L_60001AA0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x60001A84: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_60001AA0;
    }
    // 0x60001A84: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x60001A88: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x60001A8C: andi        $t7, $a0, 0x7FFF
    ctx->r15 = ctx->r4 & 0X7FFF;
    // 0x60001A90: jal         0x60001A2C
    // 0x60001A94: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    ovl_demo_guide_1A2C(rdram, ctx);
        goto after_0;
    // 0x60001A94: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x60001A98: b           L_60001C9C
    // 0x60001A9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001C9C;
    // 0x60001A9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001AA0:
    // 0x60001AA0: andi        $a2, $a1, 0xFFFF
    ctx->r6 = ctx->r5 & 0XFFFF;
    // 0x60001AA4: slti        $at, $a2, 0x14
    ctx->r1 = SIGNED(ctx->r6) < 0X14 ? 1 : 0;
    // 0x60001AA8: beq         $at, $zero, L_60001AC4
    if (ctx->r1 == 0) {
        // 0x60001AAC: slti        $at, $a2, 0x1E
        ctx->r1 = SIGNED(ctx->r6) < 0X1E ? 1 : 0;
            goto L_60001AC4;
    }
    // 0x60001AAC: slti        $at, $a2, 0x1E
    ctx->r1 = SIGNED(ctx->r6) < 0X1E ? 1 : 0;
    // 0x60001AB0: jal         0x600011B4
    // 0x60001AB4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_demo_guide_11B4(rdram, ctx);
        goto after_1;
    // 0x60001AB4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x60001AB8: b           L_60001C9C
    // 0x60001ABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001C9C;
    // 0x60001ABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001AC0: slti        $at, $a2, 0x1E
    ctx->r1 = SIGNED(ctx->r6) < 0X1E ? 1 : 0;
L_60001AC4:
    // 0x60001AC4: beq         $at, $zero, L_60001AE0
    if (ctx->r1 == 0) {
        // 0x60001AC8: slti        $at, $a2, 0x28
        ctx->r1 = SIGNED(ctx->r6) < 0X28 ? 1 : 0;
            goto L_60001AE0;
    }
    // 0x60001AC8: slti        $at, $a2, 0x28
    ctx->r1 = SIGNED(ctx->r6) < 0X28 ? 1 : 0;
    // 0x60001ACC: jal         0x60001628
    // 0x60001AD0: addiu       $a0, $a2, -0x14
    ctx->r4 = ADD32(ctx->r6, -0X14);
    ovl_demo_guide_1628(rdram, ctx);
        goto after_2;
    // 0x60001AD0: addiu       $a0, $a2, -0x14
    ctx->r4 = ADD32(ctx->r6, -0X14);
    after_2:
    // 0x60001AD4: b           L_60001C9C
    // 0x60001AD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001C9C;
    // 0x60001AD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001ADC: slti        $at, $a2, 0x28
    ctx->r1 = SIGNED(ctx->r6) < 0X28 ? 1 : 0;
L_60001AE0:
    // 0x60001AE0: beq         $at, $zero, L_60001AFC
    if (ctx->r1 == 0) {
        // 0x60001AE4: slti        $at, $a2, 0x32
        ctx->r1 = SIGNED(ctx->r6) < 0X32 ? 1 : 0;
            goto L_60001AFC;
    }
    // 0x60001AE4: slti        $at, $a2, 0x32
    ctx->r1 = SIGNED(ctx->r6) < 0X32 ? 1 : 0;
    // 0x60001AE8: jal         0x60001804
    // 0x60001AEC: addiu       $a0, $a2, -0x1E
    ctx->r4 = ADD32(ctx->r6, -0X1E);
    ovl_demo_guide_1804(rdram, ctx);
        goto after_3;
    // 0x60001AEC: addiu       $a0, $a2, -0x1E
    ctx->r4 = ADD32(ctx->r6, -0X1E);
    after_3:
    // 0x60001AF0: b           L_60001C9C
    // 0x60001AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001C9C;
    // 0x60001AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001AF8: slti        $at, $a2, 0x32
    ctx->r1 = SIGNED(ctx->r6) < 0X32 ? 1 : 0;
L_60001AFC:
    // 0x60001AFC: beq         $at, $zero, L_60001B18
    if (ctx->r1 == 0) {
        // 0x60001B00: slti        $at, $a2, 0x3C
        ctx->r1 = SIGNED(ctx->r6) < 0X3C ? 1 : 0;
            goto L_60001B18;
    }
    // 0x60001B00: slti        $at, $a2, 0x3C
    ctx->r1 = SIGNED(ctx->r6) < 0X3C ? 1 : 0;
    // 0x60001B04: jal         0x600018B0
    // 0x60001B08: addiu       $a0, $a2, -0x28
    ctx->r4 = ADD32(ctx->r6, -0X28);
    ovl_demo_guide_18B0(rdram, ctx);
        goto after_4;
    // 0x60001B08: addiu       $a0, $a2, -0x28
    ctx->r4 = ADD32(ctx->r6, -0X28);
    after_4:
    // 0x60001B0C: b           L_60001C9C
    // 0x60001B10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001C9C;
    // 0x60001B10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001B14: slti        $at, $a2, 0x3C
    ctx->r1 = SIGNED(ctx->r6) < 0X3C ? 1 : 0;
L_60001B18:
    // 0x60001B18: beq         $at, $zero, L_60001B3C
    if (ctx->r1 == 0) {
        // 0x60001B1C: sll         $t8, $a2, 2
        ctx->r24 = S32(ctx->r6 << 2);
            goto L_60001B3C;
    }
    // 0x60001B1C: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x60001B20: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001B24: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x60001B28: lw          $a0, 0x1C04($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1C04);
    // 0x60001B2C: jal         0x60000CDC
    // 0x60001B30: nop

    ovl_demo_guide_CDC(rdram, ctx);
        goto after_5;
    // 0x60001B30: nop

    after_5:
    // 0x60001B34: b           L_60001C9C
    // 0x60001B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001C9C;
    // 0x60001B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001B3C:
    // 0x60001B3C: slti        $at, $a2, 0x46
    ctx->r1 = SIGNED(ctx->r6) < 0X46 ? 1 : 0;
    // 0x60001B40: beq         $at, $zero, L_60001B5C
    if (ctx->r1 == 0) {
        // 0x60001B44: slti        $at, $a2, 0x50
        ctx->r1 = SIGNED(ctx->r6) < 0X50 ? 1 : 0;
            goto L_60001B5C;
    }
    // 0x60001B44: slti        $at, $a2, 0x50
    ctx->r1 = SIGNED(ctx->r6) < 0X50 ? 1 : 0;
    // 0x60001B48: jal         0x60000B98
    // 0x60001B4C: addiu       $a0, $a2, 0x4D
    ctx->r4 = ADD32(ctx->r6, 0X4D);
    ovl_demo_guide_B98(rdram, ctx);
        goto after_6;
    // 0x60001B4C: addiu       $a0, $a2, 0x4D
    ctx->r4 = ADD32(ctx->r6, 0X4D);
    after_6:
    // 0x60001B50: b           L_60001C9C
    // 0x60001B54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001C9C;
    // 0x60001B54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001B58: slti        $at, $a2, 0x50
    ctx->r1 = SIGNED(ctx->r6) < 0X50 ? 1 : 0;
L_60001B5C:
    // 0x60001B5C: beq         $at, $zero, L_60001C2C
    if (ctx->r1 == 0) {
        // 0x60001B60: addiu       $at, $zero, 0x46
        ctx->r1 = ADD32(0, 0X46);
            goto L_60001C2C;
    }
    // 0x60001B60: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
    // 0x60001B64: bne         $a2, $at, L_60001B7C
    if (ctx->r6 != ctx->r1) {
        // 0x60001B68: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_60001B7C;
    }
    // 0x60001B68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60001B6C: jal         0x60000EE0
    // 0x60001B70: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_demo_guide_EE0(rdram, ctx);
        goto after_7;
    // 0x60001B70: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x60001B74: b           L_60001C9C
    // 0x60001B78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001C9C;
    // 0x60001B78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001B7C:
    // 0x60001B7C: jal         0x600007E4
    // 0x60001B80: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_demo_guide_7E4(rdram, ctx);
        goto after_8;
    // 0x60001B80: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_8:
    // 0x60001B84: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x60001B88: nop

    // 0x60001B8C: addiu       $t9, $a2, -0x47
    ctx->r25 = ADD32(ctx->r6, -0X47);
    // 0x60001B90: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x60001B94: beq         $at, $zero, L_60001C98
    if (ctx->r1 == 0) {
        // 0x60001B98: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_60001C98;
    }
    // 0x60001B98: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x60001B9C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001BA0: addu        $at, $at, $t9
    gpr jr_addend_60001BAC = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x60001BA4: lw          $t9, 0x1CE8($at)
    ctx->r25 = ADD32(ctx->r1, 0X1CE8);
    // 0x60001BA8: nop

    // 0x60001BAC: jr          $t9
    // 0x60001BB0: nop

    switch (jr_addend_60001BAC >> 2) {
        case 0: goto L_60001BB4; break;
        case 1: goto L_60001BDC; break;
        case 2: goto L_60001BF0; break;
        case 3: goto L_60001C04; break;
        case 4: goto L_60001C18; break;
        default: switch_error(__func__, 0x60001BAC, 0x60001CE8);
    }
    // 0x60001BB0: nop

L_60001BB4:
    // 0x60001BB4: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x60001BB8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x60001BBC: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x60001BC0: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x60001BC4: sw          $t1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r9;
    // 0x60001BC8: and         $t3, $t1, $at
    ctx->r11 = ctx->r9 & ctx->r1;
    // 0x60001BCC: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x60001BD0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x60001BD4: b           L_60001C98
    // 0x60001BD8: sw          $t3, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r11;
        goto L_60001C98;
    // 0x60001BD8: sw          $t3, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r11;
L_60001BDC:
    // 0x60001BDC: lw          $t4, 0x10($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X10);
    // 0x60001BE0: nop

    // 0x60001BE4: ori         $t5, $t4, 0x1
    ctx->r13 = ctx->r12 | 0X1;
    // 0x60001BE8: b           L_60001C98
    // 0x60001BEC: sw          $t5, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r13;
        goto L_60001C98;
    // 0x60001BEC: sw          $t5, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r13;
L_60001BF0:
    // 0x60001BF0: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x60001BF4: nop

    // 0x60001BF8: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x60001BFC: b           L_60001C98
    // 0x60001C00: sw          $t7, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r15;
        goto L_60001C98;
    // 0x60001C00: sw          $t7, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r15;
L_60001C04:
    // 0x60001C04: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x60001C08: nop

    // 0x60001C0C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x60001C10: b           L_60001C98
    // 0x60001C14: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
        goto L_60001C98;
    // 0x60001C14: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
L_60001C18:
    // 0x60001C18: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x60001C1C: nop

    // 0x60001C20: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x60001C24: b           L_60001C98
    // 0x60001C28: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
        goto L_60001C98;
    // 0x60001C28: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
L_60001C2C:
    // 0x60001C2C: slti        $at, $a2, 0x64
    ctx->r1 = SIGNED(ctx->r6) < 0X64 ? 1 : 0;
    // 0x60001C30: beq         $at, $zero, L_60001C98
    if (ctx->r1 == 0) {
        // 0x60001C34: addiu       $at, $zero, 0x50
        ctx->r1 = ADD32(0, 0X50);
            goto L_60001C98;
    }
    // 0x60001C34: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x60001C38: bne         $a2, $at, L_60001C5C
    if (ctx->r6 != ctx->r1) {
        // 0x60001C3C: nop
    
            goto L_60001C5C;
    }
    // 0x60001C3C: nop

    // 0x60001C40: jal         0x600007E4
    // 0x60001C44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_demo_guide_7E4(rdram, ctx);
        goto after_9;
    // 0x60001C44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x60001C48: lw          $t2, 0x2C($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X2C);
    // 0x60001C4C: nop

    // 0x60001C50: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x60001C54: b           L_60001C98
    // 0x60001C58: sw          $t3, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r11;
        goto L_60001C98;
    // 0x60001C58: sw          $t3, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r11;
L_60001C5C:
    // 0x60001C5C: jal         0x60000C1C
    // 0x60001C60: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_demo_guide_C1C(rdram, ctx);
        goto after_10;
    // 0x60001C60: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_10:
    // 0x60001C64: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x60001C68: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x60001C6C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60001C70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001C74: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_60001C78:
    // 0x60001C78: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x60001C7C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x60001C80: bne         $v1, $a1, L_60001C78
    if (ctx->r3 != ctx->r5) {
        // 0x60001C84: sb          $zero, 0x20($a0)
        MEM_B(0X20, ctx->r4) = 0;
            goto L_60001C78;
    }
    // 0x60001C84: sb          $zero, 0x20($a0)
    MEM_B(0X20, ctx->r4) = 0;
    // 0x60001C88: addiu       $t4, $a2, -0x51
    ctx->r12 = ADD32(ctx->r6, -0X51);
    // 0x60001C8C: sb          $t4, 0x20($a3)
    MEM_B(0X20, ctx->r7) = ctx->r12;
    // 0x60001C90: jal         0x60000EE0
    // 0x60001C94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_demo_guide_EE0(rdram, ctx);
        goto after_11;
    // 0x60001C94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_11:
L_60001C98:
    // 0x60001C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001C9C:
    // 0x60001C9C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x60001CA0: jr          $ra
    // 0x60001CA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x60001CA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_menu_file_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000000: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60000004: jr          $ra
    // 0x60000008: addiu       $v0, $v0, 0x1CDC
    ctx->r2 = ADD32(ctx->r2, 0X1CDC);
    return;
    // 0x60000008: addiu       $v0, $v0, 0x1CDC
    ctx->r2 = ADD32(ctx->r2, 0X1CDC);
    // 0x6000000C: nop

;}
RECOMP_FUNC void ovl_menu_file_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000010: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000014: jr          $t1
    // 0x60000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
;}
RECOMP_FUNC void ovl_menu_file_1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000001C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000020: jr          $t1
    // 0x60000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
;}
RECOMP_FUNC void ovl_menu_file_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000028: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000002C: jr          $t1
    // 0x60000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
;}
RECOMP_FUNC void ovl_menu_file_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000034: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000038: jr          $t1
    // 0x6000003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
;}
RECOMP_FUNC void ovl_menu_file_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000040: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000044: jr          $t1
    // 0x60000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
;}
RECOMP_FUNC void ovl_menu_file_4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000004C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000050: jr          $t1
    // 0x60000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
;}
RECOMP_FUNC void ovl_menu_file_58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000058: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000005C: jr          $t1
    // 0x60000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
;}
RECOMP_FUNC void ovl_menu_file_64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000064: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000068: jr          $t1
    // 0x6000006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
;}
RECOMP_FUNC void ovl_menu_file_70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000070: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000074: jr          $t1
    // 0x60000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
;}
RECOMP_FUNC void ovl_menu_file_7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000007C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000080: jr          $t1
    // 0x60000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
;}
RECOMP_FUNC void ovl_menu_file_88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000088: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000008C: jr          $t1
    // 0x60000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
;}
RECOMP_FUNC void ovl_menu_file_94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000094: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000098: jr          $t1
    // 0x6000009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
;}
RECOMP_FUNC void ovl_menu_file_A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000A4: jr          $t1
    // 0x600000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
;}
RECOMP_FUNC void ovl_menu_file_AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000B0: jr          $t1
    // 0x600000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
;}
RECOMP_FUNC void ovl_menu_file_B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000BC: jr          $t1
    // 0x600000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
;}
RECOMP_FUNC void ovl_menu_file_C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000C8: jr          $t1
    // 0x600000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
;}
RECOMP_FUNC void ovl_menu_file_D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000D4: jr          $t1
    // 0x600000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
;}
RECOMP_FUNC void ovl_menu_file_DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000E0: jr          $t1
    // 0x600000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
;}
RECOMP_FUNC void ovl_menu_file_E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000EC: jr          $t1
    // 0x600000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
;}
RECOMP_FUNC void ovl_menu_file_F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000F8: jr          $t1
    // 0x600000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
;}
RECOMP_FUNC void ovl_menu_file_100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000100: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000104: jr          $t1
    // 0x60000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
;}
RECOMP_FUNC void ovl_menu_file_10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000010C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000110: jr          $t1
    // 0x60000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
;}
RECOMP_FUNC void ovl_menu_file_118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000118: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000011C: jr          $t1
    // 0x60000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
;}
RECOMP_FUNC void ovl_menu_file_124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000124: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000128: jr          $t1
    // 0x6000012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
;}
RECOMP_FUNC void ovl_menu_file_130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000130: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000134: jr          $t1
    // 0x60000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
;}
RECOMP_FUNC void ovl_menu_file_13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000013C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000140: jr          $t1
    // 0x60000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
;}
RECOMP_FUNC void ovl_menu_file_148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000148: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000014C: jr          $t1
    // 0x60000150: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000150: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
;}
RECOMP_FUNC void ovl_menu_file_154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000154: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000158: jr          $t1
    // 0x6000015C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000015C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
;}
RECOMP_FUNC void ovl_menu_file_160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000160: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000164: jr          $t1
    // 0x60000168: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000168: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
;}
RECOMP_FUNC void ovl_menu_file_16C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000016C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000170: jr          $t1
    // 0x60000174: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000174: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
;}
RECOMP_FUNC void ovl_menu_file_178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000178: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000017C: jr          $t1
    // 0x60000180: addiu       $t0, $zero, 0x605
    ctx->r8 = ADD32(0, 0X605);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000180: addiu       $t0, $zero, 0x605
    ctx->r8 = ADD32(0, 0X605);
;}
RECOMP_FUNC void ovl_menu_file_184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000184: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000188: jr          $t1
    // 0x6000018C: addiu       $t0, $zero, 0x606
    ctx->r8 = ADD32(0, 0X606);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000018C: addiu       $t0, $zero, 0x606
    ctx->r8 = ADD32(0, 0X606);
;}
RECOMP_FUNC void ovl_menu_file_190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000190: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000194: jr          $t1
    // 0x60000198: addiu       $t0, $zero, 0x607
    ctx->r8 = ADD32(0, 0X607);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000198: addiu       $t0, $zero, 0x607
    ctx->r8 = ADD32(0, 0X607);
;}
RECOMP_FUNC void ovl_menu_file_19C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000019C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001A0: jr          $t1
    // 0x600001A4: addiu       $t0, $zero, 0x608
    ctx->r8 = ADD32(0, 0X608);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001A4: addiu       $t0, $zero, 0x608
    ctx->r8 = ADD32(0, 0X608);
;}
RECOMP_FUNC void ovl_menu_file_1A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001A8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001AC: jr          $t1
    // 0x600001B0: addiu       $t0, $zero, 0x609
    ctx->r8 = ADD32(0, 0X609);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001B0: addiu       $t0, $zero, 0x609
    ctx->r8 = ADD32(0, 0X609);
;}
RECOMP_FUNC void ovl_menu_file_1B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001B4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001B8: jr          $t1
    // 0x600001BC: addiu       $t0, $zero, 0x700
    ctx->r8 = ADD32(0, 0X700);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001BC: addiu       $t0, $zero, 0x700
    ctx->r8 = ADD32(0, 0X700);
;}
RECOMP_FUNC void ovl_menu_file_1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001C0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001C4: jr          $t1
    // 0x600001C8: addiu       $t0, $zero, 0x701
    ctx->r8 = ADD32(0, 0X701);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001C8: addiu       $t0, $zero, 0x701
    ctx->r8 = ADD32(0, 0X701);
;}
RECOMP_FUNC void ovl_menu_file_1CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001CC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001D0: jr          $t1
    // 0x600001D4: addiu       $t0, $zero, 0x702
    ctx->r8 = ADD32(0, 0X702);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001D4: addiu       $t0, $zero, 0x702
    ctx->r8 = ADD32(0, 0X702);
;}
RECOMP_FUNC void ovl_menu_file_1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001D8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001DC: jr          $t1
    // 0x600001E0: addiu       $t0, $zero, 0x703
    ctx->r8 = ADD32(0, 0X703);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001E0: addiu       $t0, $zero, 0x703
    ctx->r8 = ADD32(0, 0X703);
;}
RECOMP_FUNC void ovl_menu_file_1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001E4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001E8: jr          $t1
    // 0x600001EC: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001EC: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
;}
RECOMP_FUNC void ovl_menu_file_1F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001F0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001F4: jr          $t1
    // 0x600001F8: addiu       $t0, $zero, 0x801
    ctx->r8 = ADD32(0, 0X801);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001F8: addiu       $t0, $zero, 0x801
    ctx->r8 = ADD32(0, 0X801);
;}
