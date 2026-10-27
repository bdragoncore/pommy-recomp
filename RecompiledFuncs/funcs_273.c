#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_mobj_main_E740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E740: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E744: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E748: jal         0x4500E06C
    // 0x4500E74C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    ovl_mobj_main_E06C(rdram, ctx);
        goto after_0;
    // 0x4500E74C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x4500E750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E758: jr          $ra
    // 0x4500E75C: nop

    return;
    // 0x4500E75C: nop

;}
RECOMP_FUNC void ovl_mobj_main_E760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E760: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E764: beq         $a1, $zero, L_4500E790
    if (ctx->r5 == 0) {
        // 0x4500E768: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500E790;
    }
    // 0x4500E768: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E76C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500E770: beq         $a1, $at, L_4500E7A0
    if (ctx->r5 == ctx->r1) {
        // 0x4500E774: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_4500E7A0;
    }
    // 0x4500E774: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4500E778: beq         $a1, $at, L_4500E7B0
    if (ctx->r5 == ctx->r1) {
        // 0x4500E77C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_4500E7B0;
    }
    // 0x4500E77C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4500E780: beq         $a1, $at, L_4500E7C0
    if (ctx->r5 == ctx->r1) {
        // 0x4500E784: nop
    
            goto L_4500E7C0;
    }
    // 0x4500E784: nop

    // 0x4500E788: b           L_4500E7CC
    // 0x4500E78C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E7CC;
    // 0x4500E78C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E790:
    // 0x4500E790: jal         0x45009E7C
    // 0x4500E794: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_9E7C(rdram, ctx);
        goto after_0;
    // 0x4500E794: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x4500E798: b           L_4500E7CC
    // 0x4500E79C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E7CC;
    // 0x4500E79C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E7A0:
    // 0x4500E7A0: jal         0x45009EBC
    // 0x4500E7A4: nop

    ovl_mobj_main_9EBC(rdram, ctx);
        goto after_1;
    // 0x4500E7A4: nop

    after_1:
    // 0x4500E7A8: b           L_4500E7CC
    // 0x4500E7AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E7CC;
    // 0x4500E7AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E7B0:
    // 0x4500E7B0: jal         0x45009EFC
    // 0x4500E7B4: nop

    ovl_mobj_main_9EFC(rdram, ctx);
        goto after_2;
    // 0x4500E7B4: nop

    after_2:
    // 0x4500E7B8: b           L_4500E7CC
    // 0x4500E7BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E7CC;
    // 0x4500E7BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E7C0:
    // 0x4500E7C0: jal         0x45009E7C
    // 0x4500E7C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_9E7C(rdram, ctx);
        goto after_3;
    // 0x4500E7C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x4500E7C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E7CC:
    // 0x4500E7CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E7D0: jr          $ra
    // 0x4500E7D4: nop

    return;
    // 0x4500E7D4: nop

;}
RECOMP_FUNC void ovl_mobj_main_E7D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E7D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E7DC: beq         $a1, $zero, L_4500E808
    if (ctx->r5 == 0) {
        // 0x4500E7E0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500E808;
    }
    // 0x4500E7E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E7E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500E7E8: beq         $a1, $at, L_4500E818
    if (ctx->r5 == ctx->r1) {
        // 0x4500E7EC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_4500E818;
    }
    // 0x4500E7EC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4500E7F0: beq         $a1, $at, L_4500E828
    if (ctx->r5 == ctx->r1) {
        // 0x4500E7F4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_4500E828;
    }
    // 0x4500E7F4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4500E7F8: beq         $a1, $at, L_4500E838
    if (ctx->r5 == ctx->r1) {
        // 0x4500E7FC: nop
    
            goto L_4500E838;
    }
    // 0x4500E7FC: nop

    // 0x4500E800: b           L_4500E844
    // 0x4500E804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E844;
    // 0x4500E804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E808:
    // 0x4500E808: jal         0x45009D48
    // 0x4500E80C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_9D48(rdram, ctx);
        goto after_0;
    // 0x4500E80C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x4500E810: b           L_4500E844
    // 0x4500E814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E844;
    // 0x4500E814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E818:
    // 0x4500E818: jal         0x45009DCC
    // 0x4500E81C: nop

    ovl_mobj_main_9DCC(rdram, ctx);
        goto after_1;
    // 0x4500E81C: nop

    after_1:
    // 0x4500E820: b           L_4500E844
    // 0x4500E824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E844;
    // 0x4500E824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E828:
    // 0x4500E828: jal         0x45009E24
    // 0x4500E82C: nop

    ovl_mobj_main_9E24(rdram, ctx);
        goto after_2;
    // 0x4500E82C: nop

    after_2:
    // 0x4500E830: b           L_4500E844
    // 0x4500E834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E844;
    // 0x4500E834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E838:
    // 0x4500E838: jal         0x45009D48
    // 0x4500E83C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_9D48(rdram, ctx);
        goto after_3;
    // 0x4500E83C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x4500E840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E844:
    // 0x4500E844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E848: jr          $ra
    // 0x4500E84C: nop

    return;
    // 0x4500E84C: nop

;}
RECOMP_FUNC void ovl_mobj_main_E850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E858: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    // 0x4500E85C: jal         0x4500E0D0
    // 0x4500E860: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    ovl_mobj_main_E0D0(rdram, ctx);
        goto after_0;
    // 0x4500E860: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_0:
    // 0x4500E864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E86C: jr          $ra
    // 0x4500E870: nop

    return;
    // 0x4500E870: nop

;}
RECOMP_FUNC void ovl_mobj_main_E874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E874: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E878: bltz        $a1, L_4500E8A0
    if (SIGNED(ctx->r5) < 0) {
        // 0x4500E87C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500E8A0;
    }
    // 0x4500E87C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E880: slti        $at, $a1, 0x4
    ctx->r1 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x4500E884: beq         $at, $zero, L_4500E8A0
    if (ctx->r1 == 0) {
        // 0x4500E888: sll         $t6, $a1, 2
        ctx->r14 = S32(ctx->r5 << 2);
            goto L_4500E8A0;
    }
    // 0x4500E888: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x4500E88C: lui         $a1, 0x4501
    ctx->r5 = S32(0X4501 << 16);
    // 0x4500E890: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x4500E894: lw          $a1, 0x170C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X170C);
    // 0x4500E898: jal         0x45008478
    // 0x4500E89C: nop

    ovl_mobj_main_8478(rdram, ctx);
        goto after_0;
    // 0x4500E89C: nop

    after_0:
L_4500E8A0:
    // 0x4500E8A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E8A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E8A8: jr          $ra
    // 0x4500E8AC: nop

    return;
    // 0x4500E8AC: nop

;}
RECOMP_FUNC void ovl_mobj_main_E8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E8B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E8B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E8B8: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x4500E8BC: jal         0x4500E0D0
    // 0x4500E8C0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    ovl_mobj_main_E0D0(rdram, ctx);
        goto after_0;
    // 0x4500E8C0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x4500E8C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E8C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E8CC: jr          $ra
    // 0x4500E8D0: nop

    return;
    // 0x4500E8D0: nop

;}
RECOMP_FUNC void ovl_mobj_main_E8D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E8D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E8D8: sltiu       $at, $a1, 0x6
    ctx->r1 = ctx->r5 < 0X6 ? 1 : 0;
    // 0x4500E8DC: beq         $at, $zero, L_4500E958
    if (ctx->r1 == 0) {
        // 0x4500E8E0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500E958;
    }
    // 0x4500E8E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E8E4: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x4500E8E8: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500E8EC: addu        $at, $at, $t6
    gpr jr_addend_4500E8F8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x4500E8F0: lw          $t6, 0x2CCC($at)
    ctx->r14 = ADD32(ctx->r1, 0X2CCC);
    // 0x4500E8F4: nop

    // 0x4500E8F8: jr          $t6
    // 0x4500E8FC: nop

    switch (jr_addend_4500E8F8 >> 2) {
        case 0: goto L_4500E900; break;
        case 1: goto L_4500E910; break;
        case 2: goto L_4500E920; break;
        case 3: goto L_4500E930; break;
        case 4: goto L_4500E940; break;
        case 5: goto L_4500E950; break;
        default: switch_error(__func__, 0x4500E8F8, 0x45012CCC);
    }
    // 0x4500E8FC: nop

L_4500E900:
    // 0x4500E900: jal         0x450086E8
    // 0x4500E904: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_86E8(rdram, ctx);
        goto after_0;
    // 0x4500E904: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x4500E908: b           L_4500E95C
    // 0x4500E90C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E95C;
    // 0x4500E90C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E910:
    // 0x4500E910: jal         0x45008720
    // 0x4500E914: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_8720(rdram, ctx);
        goto after_1;
    // 0x4500E914: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x4500E918: b           L_4500E95C
    // 0x4500E91C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E95C;
    // 0x4500E91C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E920:
    // 0x4500E920: jal         0x45008758
    // 0x4500E924: nop

    ovl_mobj_main_8758(rdram, ctx);
        goto after_2;
    // 0x4500E924: nop

    after_2:
    // 0x4500E928: b           L_4500E95C
    // 0x4500E92C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E95C;
    // 0x4500E92C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E930:
    // 0x4500E930: jal         0x45008788
    // 0x4500E934: nop

    ovl_mobj_main_8788(rdram, ctx);
        goto after_3;
    // 0x4500E934: nop

    after_3:
    // 0x4500E938: b           L_4500E95C
    // 0x4500E93C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E95C;
    // 0x4500E93C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E940:
    // 0x4500E940: jal         0x450087B4
    // 0x4500E944: nop

    ovl_mobj_main_87B4(rdram, ctx);
        goto after_4;
    // 0x4500E944: nop

    after_4:
    // 0x4500E948: b           L_4500E95C
    // 0x4500E94C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E95C;
    // 0x4500E94C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E950:
    // 0x4500E950: jal         0x450087D4
    // 0x4500E954: nop

    ovl_mobj_main_87D4(rdram, ctx);
        goto after_5;
    // 0x4500E954: nop

    after_5:
L_4500E958:
    // 0x4500E958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E95C:
    // 0x4500E95C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E960: jr          $ra
    // 0x4500E964: nop

    return;
    // 0x4500E964: nop

;}
RECOMP_FUNC void ovl_mobj_main_E968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E968: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E96C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E970: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x4500E974: jal         0x4500E0D0
    // 0x4500E978: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_E0D0(rdram, ctx);
        goto after_0;
    // 0x4500E978: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x4500E97C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E980: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E984: jr          $ra
    // 0x4500E988: nop

    return;
    // 0x4500E988: nop

;}
RECOMP_FUNC void ovl_mobj_main_E98C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E98C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E990: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E994: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x4500E998: jal         0x4500E0D0
    // 0x4500E99C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    ovl_mobj_main_E0D0(rdram, ctx);
        goto after_0;
    // 0x4500E99C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x4500E9A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E9A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E9A8: jr          $ra
    // 0x4500E9AC: nop

    return;
    // 0x4500E9AC: nop

;}
RECOMP_FUNC void ovl_mobj_main_E9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E9B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E9B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E9B8: jal         0x4500E020
    // 0x4500E9BC: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    ovl_mobj_main_E020(rdram, ctx);
        goto after_0;
    // 0x4500E9BC: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_0:
    // 0x4500E9C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E9C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E9C8: jr          $ra
    // 0x4500E9CC: nop

    return;
    // 0x4500E9CC: nop

;}
RECOMP_FUNC void ovl_mobj_main_E9D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E9D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E9D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500E9D8: bne         $a1, $at, L_4500E9E8
    if (ctx->r5 != ctx->r1) {
        // 0x4500E9DC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500E9E8;
    }
    // 0x4500E9DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E9E0: jal         0x45008BD8
    // 0x4500E9E4: nop

    ovl_mobj_main_8BD8(rdram, ctx);
        goto after_0;
    // 0x4500E9E4: nop

    after_0:
L_4500E9E8:
    // 0x4500E9E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E9EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E9F0: jr          $ra
    // 0x4500E9F4: nop

    return;
    // 0x4500E9F4: nop

;}
RECOMP_FUNC void ovl_mobj_main_E9F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E9F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E9FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500EA00: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    // 0x4500EA04: jal         0x4500E0D0
    // 0x4500EA08: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    ovl_mobj_main_E0D0(rdram, ctx);
        goto after_0;
    // 0x4500EA08: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x4500EA0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500EA10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500EA14: jr          $ra
    // 0x4500EA18: nop

    return;
    // 0x4500EA18: nop

;}
RECOMP_FUNC void ovl_mobj_main_EA1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500EA1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500EA20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500EA24: addiu       $a2, $zero, 0x27
    ctx->r6 = ADD32(0, 0X27);
    // 0x4500EA28: jal         0x4500E0D0
    // 0x4500EA2C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_E0D0(rdram, ctx);
        goto after_0;
    // 0x4500EA2C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x4500EA30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500EA34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500EA38: jr          $ra
    // 0x4500EA3C: nop

    return;
    // 0x4500EA3C: nop

;}
RECOMP_FUNC void ovl_mobj_main_EA40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500EA40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500EA44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500EA48: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x4500EA4C: jal         0x4500E0D0
    // 0x4500EA50: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    ovl_mobj_main_E0D0(rdram, ctx);
        goto after_0;
    // 0x4500EA50: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x4500EA54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500EA58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500EA5C: jr          $ra
    // 0x4500EA60: nop

    return;
    // 0x4500EA60: nop

;}
RECOMP_FUNC void ovl_mobj_main_EA64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500EA64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500EA68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500EA6C: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    // 0x4500EA70: jal         0x4500E0D0
    // 0x4500EA74: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_E0D0(rdram, ctx);
        goto after_0;
    // 0x4500EA74: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x4500EA78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500EA7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500EA80: jr          $ra
    // 0x4500EA84: nop

    return;
    // 0x4500EA84: nop

;}
RECOMP_FUNC void ovl_mobj_main_EA88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500EA88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500EA8C: beq         $a1, $zero, L_4500EAB8
    if (ctx->r5 == 0) {
        // 0x4500EA90: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500EAB8;
    }
    // 0x4500EA90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500EA94: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500EA98: beq         $a1, $at, L_4500EAC8
    if (ctx->r5 == ctx->r1) {
        // 0x4500EA9C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_4500EAC8;
    }
    // 0x4500EA9C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4500EAA0: beq         $a1, $at, L_4500EAD8
    if (ctx->r5 == ctx->r1) {
        // 0x4500EAA4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_4500EAD8;
    }
    // 0x4500EAA4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4500EAA8: beq         $a1, $at, L_4500EAE8
    if (ctx->r5 == ctx->r1) {
        // 0x4500EAAC: nop
    
            goto L_4500EAE8;
    }
    // 0x4500EAAC: nop

    // 0x4500EAB0: b           L_4500EAF4
    // 0x4500EAB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500EAF4;
    // 0x4500EAB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500EAB8:
    // 0x4500EAB8: jal         0x45009160
    // 0x4500EABC: nop

    ovl_mobj_main_9160(rdram, ctx);
        goto after_0;
    // 0x4500EABC: nop

    after_0:
    // 0x4500EAC0: b           L_4500EAF4
    // 0x4500EAC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500EAF4;
    // 0x4500EAC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500EAC8:
    // 0x4500EAC8: jal         0x450090B8
    // 0x4500EACC: nop

    ovl_mobj_main_90B8(rdram, ctx);
        goto after_1;
    // 0x4500EACC: nop

    after_1:
    // 0x4500EAD0: b           L_4500EAF4
    // 0x4500EAD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500EAF4;
    // 0x4500EAD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500EAD8:
    // 0x4500EAD8: jal         0x45009050
    // 0x4500EADC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_9050(rdram, ctx);
        goto after_2;
    // 0x4500EADC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x4500EAE0: b           L_4500EAF4
    // 0x4500EAE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500EAF4;
    // 0x4500EAE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500EAE8:
    // 0x4500EAE8: jal         0x4500910C
    // 0x4500EAEC: nop

    ovl_mobj_main_910C(rdram, ctx);
        goto after_3;
    // 0x4500EAEC: nop

    after_3:
    // 0x4500EAF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500EAF4:
    // 0x4500EAF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500EAF8: jr          $ra
    // 0x4500EAFC: nop

    return;
    // 0x4500EAFC: nop

;}
RECOMP_FUNC void ovl_mobj_main_EB00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500EB00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500EB04: bne         $a1, $zero, L_4500EB40
    if (ctx->r5 != 0) {
        // 0x4500EB08: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500EB40;
    }
    // 0x4500EB08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500EB0C: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x4500EB10: addiu       $at, $zero, 0xE6
    ctx->r1 = ADD32(0, 0XE6);
    // 0x4500EB14: bne         $t6, $at, L_4500EB2C
    if (ctx->r14 != ctx->r1) {
        // 0x4500EB18: nop
    
            goto L_4500EB2C;
    }
    // 0x4500EB18: nop

    // 0x4500EB1C: lw          $t7, 0x218($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X218);
    // 0x4500EB20: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4500EB24: bne         $t7, $at, L_4500EB44
    if (ctx->r15 != ctx->r1) {
        // 0x4500EB28: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4500EB44;
    }
    // 0x4500EB28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500EB2C:
    // 0x4500EB2C: lw          $t8, 0x184($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X184);
    // 0x4500EB30: nop

    // 0x4500EB34: ori         $t9, $t8, 0x80
    ctx->r25 = ctx->r24 | 0X80;
    // 0x4500EB38: jal         0x45002508
    // 0x4500EB3C: sw          $t9, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r25;
    ovl_mobj_main_2508(rdram, ctx);
        goto after_0;
    // 0x4500EB3C: sw          $t9, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r25;
    after_0:
L_4500EB40:
    // 0x4500EB40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500EB44:
    // 0x4500EB44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500EB48: jr          $ra
    // 0x4500EB4C: nop

    return;
    // 0x4500EB4C: nop

;}
RECOMP_FUNC void ovl_mobj_main_EB50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500EB50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500EB54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500EB58: jal         0x4500E06C
    // 0x4500EB5C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    ovl_mobj_main_E06C(rdram, ctx);
        goto after_0;
    // 0x4500EB5C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_0:
    // 0x4500EB60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500EB64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500EB68: jr          $ra
    // 0x4500EB6C: nop

    return;
    // 0x4500EB6C: nop

;}
RECOMP_FUNC void ovl_mobj_main_EB70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500EB70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500EB74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500EB78: addiu       $a2, $zero, 0x2E
    ctx->r6 = ADD32(0, 0X2E);
    // 0x4500EB7C: jal         0x4500E0D0
    // 0x4500EB80: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_E0D0(rdram, ctx);
        goto after_0;
    // 0x4500EB80: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x4500EB84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500EB88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500EB8C: jr          $ra
    // 0x4500EB90: nop

    return;
    // 0x4500EB90: nop

;}
RECOMP_FUNC void ovl_mobj_main_EB94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500EB94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500EB98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500EB9C: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x4500EBA0: jal         0x4500E0D0
    // 0x4500EBA4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_E0D0(rdram, ctx);
        goto after_0;
    // 0x4500EBA4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x4500EBA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500EBAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500EBB0: jr          $ra
    // 0x4500EBB4: nop

    return;
    // 0x4500EBB4: nop

;}
RECOMP_FUNC void ovl_mobj_main_EBB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500EBB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500EBBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500EBC0: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x4500EBC4: jal         0x4500E0D0
    // 0x4500EBC8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_E0D0(rdram, ctx);
        goto after_0;
    // 0x4500EBC8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x4500EBCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500EBD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500EBD4: jr          $ra
    // 0x4500EBD8: nop

    return;
    // 0x4500EBD8: nop

;}
RECOMP_FUNC void ovl_mobj_main_EBDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500EBDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500EBE0: beq         $a1, $zero, L_4500EBFC
    if (ctx->r5 == 0) {
        // 0x4500EBE4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500EBFC;
    }
    // 0x4500EBE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500EBE8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500EBEC: beq         $a1, $at, L_4500EC0C
    if (ctx->r5 == ctx->r1) {
        // 0x4500EBF0: nop
    
            goto L_4500EC0C;
    }
    // 0x4500EBF0: nop

    // 0x4500EBF4: b           L_4500EC18
    // 0x4500EBF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500EC18;
    // 0x4500EBF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500EBFC:
    // 0x4500EBFC: jal         0x45009614
    // 0x4500EC00: nop

    ovl_mobj_main_9614(rdram, ctx);
        goto after_0;
    // 0x4500EC00: nop

    after_0:
    // 0x4500EC04: b           L_4500EC18
    // 0x4500EC08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500EC18;
    // 0x4500EC08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500EC0C:
    // 0x4500EC0C: jal         0x450067A0
    // 0x4500EC10: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_67A0(rdram, ctx);
        goto after_1;
    // 0x4500EC10: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x4500EC14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500EC18:
    // 0x4500EC18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500EC1C: jr          $ra
    // 0x4500EC20: nop

    return;
    // 0x4500EC20: nop

;}
RECOMP_FUNC void ovl_mobj_main_EC24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500EC24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500EC28: beq         $a1, $zero, L_4500EC54
    if (ctx->r5 == 0) {
        // 0x4500EC2C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500EC54;
    }
    // 0x4500EC2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500EC30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500EC34: beq         $a1, $at, L_4500EC64
    if (ctx->r5 == ctx->r1) {
        // 0x4500EC38: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_4500EC64;
    }
    // 0x4500EC38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4500EC3C: beq         $a1, $at, L_4500EC74
    if (ctx->r5 == ctx->r1) {
        // 0x4500EC40: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_4500EC74;
    }
    // 0x4500EC40: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4500EC44: beq         $a1, $at, L_4500EC84
    if (ctx->r5 == ctx->r1) {
        // 0x4500EC48: nop
    
            goto L_4500EC84;
    }
    // 0x4500EC48: nop

    // 0x4500EC4C: b           L_4500EC90
    // 0x4500EC50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500EC90;
    // 0x4500EC50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500EC54:
    // 0x4500EC54: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x4500EC58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4500EC5C: b           L_4500EC8C
    // 0x4500EC60: swc1        $f4, 0x1E8($a0)
    MEM_W(0X1E8, ctx->r4) = ctx->f4.u32l;
        goto L_4500EC8C;
    // 0x4500EC60: swc1        $f4, 0x1E8($a0)
    MEM_W(0X1E8, ctx->r4) = ctx->f4.u32l;
L_4500EC64:
    // 0x4500EC64: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x4500EC68: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4500EC6C: b           L_4500EC8C
    // 0x4500EC70: swc1        $f6, 0x1E8($a0)
    MEM_W(0X1E8, ctx->r4) = ctx->f6.u32l;
        goto L_4500EC8C;
    // 0x4500EC70: swc1        $f6, 0x1E8($a0)
    MEM_W(0X1E8, ctx->r4) = ctx->f6.u32l;
L_4500EC74:
    // 0x4500EC74: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x4500EC78: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4500EC7C: b           L_4500EC8C
    // 0x4500EC80: swc1        $f8, 0x1E8($a0)
    MEM_W(0X1E8, ctx->r4) = ctx->f8.u32l;
        goto L_4500EC8C;
    // 0x4500EC80: swc1        $f8, 0x1E8($a0)
    MEM_W(0X1E8, ctx->r4) = ctx->f8.u32l;
L_4500EC84:
    // 0x4500EC84: jal         0x45009954
    // 0x4500EC88: nop

    ovl_mobj_main_9954(rdram, ctx);
        goto after_0;
    // 0x4500EC88: nop

    after_0:
L_4500EC8C:
    // 0x4500EC8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500EC90:
    // 0x4500EC90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500EC94: jr          $ra
    // 0x4500EC98: nop

    return;
    // 0x4500EC98: nop

;}
RECOMP_FUNC void ovl_mobj_main_EC9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500EC9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500ECA0: bne         $a1, $zero, L_4500ECB0
    if (ctx->r5 != 0) {
        // 0x4500ECA4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500ECB0;
    }
    // 0x4500ECA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500ECA8: jal         0x45009648
    // 0x4500ECAC: nop

    ovl_mobj_main_9648(rdram, ctx);
        goto after_0;
    // 0x4500ECAC: nop

    after_0:
L_4500ECB0:
    // 0x4500ECB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500ECB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500ECB8: jr          $ra
    // 0x4500ECBC: nop

    return;
    // 0x4500ECBC: nop

;}
RECOMP_FUNC void ovl_mobj_main_ECC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500ECC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4500ECC4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4500ECC8: bltz        $a1, L_4500ED0C
    if (SIGNED(ctx->r5) < 0) {
        // 0x4500ECCC: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_4500ED0C;
    }
    // 0x4500ECCC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x4500ECD0: slti        $at, $a1, 0x3
    ctx->r1 = SIGNED(ctx->r5) < 0X3 ? 1 : 0;
    // 0x4500ECD4: beq         $at, $zero, L_4500ED0C
    if (ctx->r1 == 0) {
        // 0x4500ECD8: sll         $t7, $a1, 2
        ctx->r15 = S32(ctx->r5 << 2);
            goto L_4500ED0C;
    }
    // 0x4500ECD8: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x4500ECDC: lui         $a1, 0x4501
    ctx->r5 = S32(0X4501 << 16);
    // 0x4500ECE0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4500ECE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4500ECE8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4500ECEC: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x4500ECF0: lw          $a1, 0x171C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X171C);
    // 0x4500ECF4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x4500ECF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4500ECFC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x4500ED00: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x4500ED04: jal         0x450075DC
    // 0x4500ED08: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_0;
    // 0x4500ED08: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
L_4500ED0C:
    // 0x4500ED0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4500ED10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x4500ED14: jr          $ra
    // 0x4500ED18: nop

    return;
    // 0x4500ED18: nop

;}
RECOMP_FUNC void ovl_mobj_main_ED1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500ED1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500ED20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500ED24: jal         0x4500E020
    // 0x4500ED28: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    ovl_mobj_main_E020(rdram, ctx);
        goto after_0;
    // 0x4500ED28: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_0:
    // 0x4500ED2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500ED30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500ED34: jr          $ra
    // 0x4500ED38: nop

    return;
    // 0x4500ED38: nop

;}
RECOMP_FUNC void ovl_mobj_main_ED3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500ED3C: bltz        $a1, L_4500ED54
    if (SIGNED(ctx->r5) < 0) {
        // 0x4500ED40: slti        $at, $a1, 0x5
        ctx->r1 = SIGNED(ctx->r5) < 0X5 ? 1 : 0;
            goto L_4500ED54;
    }
    // 0x4500ED40: slti        $at, $a1, 0x5
    ctx->r1 = SIGNED(ctx->r5) < 0X5 ? 1 : 0;
    // 0x4500ED44: beq         $at, $zero, L_4500ED54
    if (ctx->r1 == 0) {
        // 0x4500ED48: addiu       $t6, $a1, 0x2
        ctx->r14 = ADD32(ctx->r5, 0X2);
            goto L_4500ED54;
    }
    // 0x4500ED48: addiu       $t6, $a1, 0x2
    ctx->r14 = ADD32(ctx->r5, 0X2);
    // 0x4500ED4C: jr          $ra
    // 0x4500ED50: sw          $t6, 0x218($a0)
    MEM_W(0X218, ctx->r4) = ctx->r14;
    return;
    // 0x4500ED50: sw          $t6, 0x218($a0)
    MEM_W(0X218, ctx->r4) = ctx->r14;
L_4500ED54:
    // 0x4500ED54: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x4500ED58: bne         $a1, $at, L_4500ED70
    if (ctx->r5 != ctx->r1) {
        // 0x4500ED5C: nop
    
            goto L_4500ED70;
    }
    // 0x4500ED5C: nop

    // 0x4500ED60: lw          $t7, 0x184($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X184);
    // 0x4500ED64: addiu       $at, $zero, -0xC1
    ctx->r1 = ADD32(0, -0XC1);
    // 0x4500ED68: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x4500ED6C: sw          $t8, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r24;
L_4500ED70:
    // 0x4500ED70: jr          $ra
    // 0x4500ED74: nop

    return;
    // 0x4500ED74: nop

;}
RECOMP_FUNC void ovl_mobj_main_ED78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500ED78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4500ED7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4500ED80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4500ED84: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x4500ED88: addiu       $at, $zero, 0x121
    ctx->r1 = ADD32(0, 0X121);
    // 0x4500ED8C: bne         $v0, $at, L_4500EDE0
    if (ctx->r2 != ctx->r1) {
        // 0x4500ED90: or          $s0, $a1, $zero
        ctx->r16 = ctx->r5 | 0;
            goto L_4500EDE0;
    }
    // 0x4500ED90: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x4500ED94: bltz        $a1, L_4500EE74
    if (SIGNED(ctx->r5) < 0) {
        // 0x4500ED98: slti        $at, $a1, 0x5
        ctx->r1 = SIGNED(ctx->r5) < 0X5 ? 1 : 0;
            goto L_4500EE74;
    }
    // 0x4500ED98: slti        $at, $a1, 0x5
    ctx->r1 = SIGNED(ctx->r5) < 0X5 ? 1 : 0;
    // 0x4500ED9C: beq         $at, $zero, L_4500EE74
    if (ctx->r1 == 0) {
        // 0x4500EDA0: sll         $t6, $s0, 3
        ctx->r14 = S32(ctx->r16 << 3);
            goto L_4500EE74;
    }
    // 0x4500EDA0: sll         $t6, $s0, 3
    ctx->r14 = S32(ctx->r16 << 3);
    // 0x4500EDA4: beq         $a1, $zero, L_4500EDB8
    if (ctx->r5 == 0) {
        // 0x4500EDA8: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_4500EDB8;
    }
    // 0x4500EDA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4500EDAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500EDB0: bne         $a1, $at, L_4500EDBC
    if (ctx->r5 != ctx->r1) {
        // 0x4500EDB4: nop
    
            goto L_4500EDBC;
    }
    // 0x4500EDB4: nop

L_4500EDB8:
    // 0x4500EDB8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_4500EDBC:
    // 0x4500EDBC: lui         $t7, 0x4501
    ctx->r15 = S32(0X4501 << 16);
    // 0x4500EDC0: addiu       $t7, $t7, 0x1728
    ctx->r15 = ADD32(ctx->r15, 0X1728);
    // 0x4500EDC4: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x4500EDC8: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x4500EDCC: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x4500EDD0: jal         0x45009684
    // 0x4500EDD4: nop

    ovl_mobj_main_9684(rdram, ctx);
        goto after_0;
    // 0x4500EDD4: nop

    after_0:
    // 0x4500EDD8: b           L_4500EE78
    // 0x4500EDDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4500EE78;
    // 0x4500EDDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4500EDE0:
    // 0x4500EDE0: addiu       $at, $zero, 0x122
    ctx->r1 = ADD32(0, 0X122);
    // 0x4500EDE4: bne         $v0, $at, L_4500EE3C
    if (ctx->r2 != ctx->r1) {
        // 0x4500EDE8: addiu       $at, $zero, 0x123
        ctx->r1 = ADD32(0, 0X123);
            goto L_4500EE3C;
    }
    // 0x4500EDE8: addiu       $at, $zero, 0x123
    ctx->r1 = ADD32(0, 0X123);
    // 0x4500EDEC: bltz        $s0, L_4500EE74
    if (SIGNED(ctx->r16) < 0) {
        // 0x4500EDF0: slti        $at, $s0, 0x6
        ctx->r1 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
            goto L_4500EE74;
    }
    // 0x4500EDF0: slti        $at, $s0, 0x6
    ctx->r1 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
    // 0x4500EDF4: beq         $at, $zero, L_4500EE74
    if (ctx->r1 == 0) {
        // 0x4500EDF8: sll         $t8, $s0, 3
        ctx->r24 = S32(ctx->r16 << 3);
            goto L_4500EE74;
    }
    // 0x4500EDF8: sll         $t8, $s0, 3
    ctx->r24 = S32(ctx->r16 << 3);
    // 0x4500EDFC: beq         $s0, $zero, L_4500EE10
    if (ctx->r16 == 0) {
        // 0x4500EE00: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_4500EE10;
    }
    // 0x4500EE00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4500EE04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500EE08: bne         $s0, $at, L_4500EE14
    if (ctx->r16 != ctx->r1) {
        // 0x4500EE0C: nop
    
            goto L_4500EE14;
    }
    // 0x4500EE0C: nop

L_4500EE10:
    // 0x4500EE10: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_4500EE14:
    // 0x4500EE14: lui         $t9, 0x4501
    ctx->r25 = S32(0X4501 << 16);
    // 0x4500EE18: addiu       $t9, $t9, 0x1750
    ctx->r25 = ADD32(ctx->r25, 0X1750);
    // 0x4500EE1C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x4500EE20: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x4500EE24: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x4500EE28: jal         0x45009684
    // 0x4500EE2C: nop

    ovl_mobj_main_9684(rdram, ctx);
        goto after_1;
    // 0x4500EE2C: nop

    after_1:
    // 0x4500EE30: b           L_4500EE78
    // 0x4500EE34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4500EE78;
    // 0x4500EE34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4500EE38: addiu       $at, $zero, 0x123
    ctx->r1 = ADD32(0, 0X123);
L_4500EE3C:
    // 0x4500EE3C: bne         $v0, $at, L_4500EE78
    if (ctx->r2 != ctx->r1) {
        // 0x4500EE40: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4500EE78;
    }
    // 0x4500EE40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4500EE44: bltz        $s0, L_4500EE74
    if (SIGNED(ctx->r16) < 0) {
        // 0x4500EE48: slti        $at, $s0, 0x5
        ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
            goto L_4500EE74;
    }
    // 0x4500EE48: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x4500EE4C: beq         $at, $zero, L_4500EE74
    if (ctx->r1 == 0) {
        // 0x4500EE50: sll         $t0, $s0, 2
        ctx->r8 = S32(ctx->r16 << 2);
            goto L_4500EE74;
    }
    // 0x4500EE50: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x4500EE54: bne         $s0, $zero, L_4500EE60
    if (ctx->r16 != 0) {
        // 0x4500EE58: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_4500EE60;
    }
    // 0x4500EE58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4500EE5C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_4500EE60:
    // 0x4500EE60: lui         $a1, 0x4501
    ctx->r5 = S32(0X4501 << 16);
    // 0x4500EE64: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x4500EE68: lw          $a1, 0x1780($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1780);
    // 0x4500EE6C: jal         0x45009684
    // 0x4500EE70: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_mobj_main_9684(rdram, ctx);
        goto after_2;
    // 0x4500EE70: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_2:
L_4500EE74:
    // 0x4500EE74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4500EE78:
    // 0x4500EE78: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4500EE7C: jr          $ra
    // 0x4500EE80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x4500EE80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_mobj_main_EE84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500EE84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500EE88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500EE8C: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x4500EE90: jal         0x4500E0D0
    // 0x4500EE94: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    ovl_mobj_main_E0D0(rdram, ctx);
        goto after_0;
    // 0x4500EE94: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x4500EE98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500EE9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500EEA0: jr          $ra
    // 0x4500EEA4: nop

    return;
    // 0x4500EEA4: nop

;}
RECOMP_FUNC void ovl_mobj_main_EEA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500EEA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500EEAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500EEB0: bne         $a1, $at, L_4500EEC0
    if (ctx->r5 != ctx->r1) {
        // 0x4500EEB4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500EEC0;
    }
    // 0x4500EEB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500EEB8: jal         0x45009818
    // 0x4500EEBC: nop

    ovl_mobj_main_9818(rdram, ctx);
        goto after_0;
    // 0x4500EEBC: nop

    after_0:
L_4500EEC0:
    // 0x4500EEC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500EEC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500EEC8: jr          $ra
    // 0x4500EECC: nop

    return;
    // 0x4500EECC: nop

;}
RECOMP_FUNC void ovl_mobj_main_EED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500EED0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500EED4: bne         $a1, $zero, L_4500EEF8
    if (ctx->r5 != 0) {
        // 0x4500EED8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500EEF8;
    }
    // 0x4500EED8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500EEDC: lui         $a2, 0x4501
    ctx->r6 = S32(0X4501 << 16);
    // 0x4500EEE0: addiu       $a2, $a2, -0x23C
    ctx->r6 = ADD32(ctx->r6, -0X23C);
    // 0x4500EEE4: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    // 0x4500EEE8: jal         0x45005A5C
    // 0x4500EEEC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_5A5C(rdram, ctx);
        goto after_0;
    // 0x4500EEEC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x4500EEF0: b           L_4500EF18
    // 0x4500EEF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500EF18;
    // 0x4500EEF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500EEF8:
    // 0x4500EEF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500EEFC: bne         $a1, $at, L_4500EF14
    if (ctx->r5 != ctx->r1) {
        // 0x4500EF00: lui         $a2, 0x4501
        ctx->r6 = S32(0X4501 << 16);
            goto L_4500EF14;
    }
    // 0x4500EF00: lui         $a2, 0x4501
    ctx->r6 = S32(0X4501 << 16);
    // 0x4500EF04: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    // 0x4500EF08: addiu       $a2, $a2, -0x23C
    ctx->r6 = ADD32(ctx->r6, -0X23C);
    // 0x4500EF0C: jal         0x45005A5C
    // 0x4500EF10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_5A5C(rdram, ctx);
        goto after_1;
    // 0x4500EF10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_4500EF14:
    // 0x4500EF14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500EF18:
    // 0x4500EF18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500EF1C: jr          $ra
    // 0x4500EF20: nop

    return;
    // 0x4500EF20: nop

;}
RECOMP_FUNC void ovl_mobj_main_EF24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500EF24: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x4500EF28: jr          $ra
    // 0x4500EF2C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x4500EF2C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_mobj_main_EF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500EF30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500EF34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500EF38: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500EF3C: nop

    // 0x4500EF40: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x4500EF44: andi        $t9, $t7, 0x20
    ctx->r25 = ctx->r15 & 0X20;
    // 0x4500EF48: beq         $t9, $zero, L_4500EF60
    if (ctx->r25 == 0) {
        // 0x4500EF4C: sw          $t7, 0x184($a0)
        MEM_W(0X184, ctx->r4) = ctx->r15;
            goto L_4500EF60;
    }
    // 0x4500EF4C: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500EF50: jal         0x4500644C
    // 0x4500EF54: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_644C(rdram, ctx);
        goto after_0;
    // 0x4500EF54: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x4500EF58: b           L_4500EF6C
    // 0x4500EF5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500EF6C;
    // 0x4500EF5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500EF60:
    // 0x4500EF60: jal         0x45006474
    // 0x4500EF64: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_6474(rdram, ctx);
        goto after_1;
    // 0x4500EF64: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x4500EF68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500EF6C:
    // 0x4500EF6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500EF70: jr          $ra
    // 0x4500EF74: nop

    return;
    // 0x4500EF74: nop

;}
RECOMP_FUNC void ovl_mobj_main_EF78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500EF78: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x4500EF7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500EF80: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x4500EF84: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x4500EF88: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x4500EF8C: bne         $t6, $zero, L_4500EFF0
    if (ctx->r14 != 0) {
        // 0x4500EF90: ori         $t7, $v0, 0x10
        ctx->r15 = ctx->r2 | 0X10;
            goto L_4500EFF0;
    }
    // 0x4500EF90: ori         $t7, $v0, 0x10
    ctx->r15 = ctx->r2 | 0X10;
    // 0x4500EF94: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500EF98: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x4500EF9C: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x4500EFA0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4500EFA4: jal         0x450006C4
    // 0x4500EFA8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4500EFA8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x4500EFAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x4500EFB0: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    // 0x4500EFB4: jal         0x45000CA0
    // 0x4500EFB8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_mobj_main_CA0(rdram, ctx);
        goto after_1;
    // 0x4500EFB8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x4500EFBC: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x4500EFC0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x4500EFC4: lw          $t8, 0x184($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X184);
    // 0x4500EFC8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x4500EFCC: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x4500EFD0: beq         $t9, $zero, L_4500EFE8
    if (ctx->r25 == 0) {
        // 0x4500EFD4: nop
    
            goto L_4500EFE8;
    }
    // 0x4500EFD4: nop

    // 0x4500EFD8: jal         0x45006320
    // 0x4500EFDC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_mobj_main_6320(rdram, ctx);
        goto after_2;
    // 0x4500EFDC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x4500EFE0: b           L_4500EFF4
    // 0x4500EFE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500EFF4;
    // 0x4500EFE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500EFE8:
    // 0x4500EFE8: jal         0x45006278
    // 0x4500EFEC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_6278(rdram, ctx);
        goto after_3;
    // 0x4500EFEC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_3:
L_4500EFF0:
    // 0x4500EFF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500EFF4:
    // 0x4500EFF4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x4500EFF8: jr          $ra
    // 0x4500EFFC: nop

    return;
    // 0x4500EFFC: nop

;}
RECOMP_FUNC void ovl_mobj_main_F000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F008: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x4500F00C: nop

    // 0x4500F010: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x4500F014: bne         $t6, $zero, L_4500F040
    if (ctx->r14 != 0) {
        // 0x4500F018: ori         $t7, $v0, 0x10
        ctx->r15 = ctx->r2 | 0X10;
            goto L_4500F040;
    }
    // 0x4500F018: ori         $t7, $v0, 0x10
    ctx->r15 = ctx->r2 | 0X10;
    // 0x4500F01C: andi        $t9, $t7, 0x20
    ctx->r25 = ctx->r15 & 0X20;
    // 0x4500F020: beq         $t9, $zero, L_4500F038
    if (ctx->r25 == 0) {
        // 0x4500F024: sw          $t7, 0x184($a0)
        MEM_W(0X184, ctx->r4) = ctx->r15;
            goto L_4500F038;
    }
    // 0x4500F024: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500F028: jal         0x45006540
    // 0x4500F02C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_6540(rdram, ctx);
        goto after_0;
    // 0x4500F02C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x4500F030: b           L_4500F044
    // 0x4500F034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500F044;
    // 0x4500F034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F038:
    // 0x4500F038: jal         0x45006568
    // 0x4500F03C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_6568(rdram, ctx);
        goto after_1;
    // 0x4500F03C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
L_4500F040:
    // 0x4500F040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F044:
    // 0x4500F044: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F048: jr          $ra
    // 0x4500F04C: nop

    return;
    // 0x4500F04C: nop

;}
RECOMP_FUNC void ovl_mobj_main_F050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F050: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F054: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F058: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500F05C: nop

    // 0x4500F060: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x4500F064: andi        $t9, $t7, 0x20
    ctx->r25 = ctx->r15 & 0X20;
    // 0x4500F068: beq         $t9, $zero, L_4500F080
    if (ctx->r25 == 0) {
        // 0x4500F06C: sw          $t7, 0x184($a0)
        MEM_W(0X184, ctx->r4) = ctx->r15;
            goto L_4500F080;
    }
    // 0x4500F06C: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500F070: jal         0x450067A0
    // 0x4500F074: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_67A0(rdram, ctx);
        goto after_0;
    // 0x4500F074: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x4500F078: b           L_4500F08C
    // 0x4500F07C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500F08C;
    // 0x4500F07C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F080:
    // 0x4500F080: jal         0x450067D8
    // 0x4500F084: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_67D8(rdram, ctx);
        goto after_1;
    // 0x4500F084: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x4500F088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F08C:
    // 0x4500F08C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F090: jr          $ra
    // 0x4500F094: nop

    return;
    // 0x4500F094: nop

;}
RECOMP_FUNC void ovl_mobj_main_F098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F098: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F09C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F0A0: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500F0A4: nop

    // 0x4500F0A8: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x4500F0AC: andi        $t9, $t7, 0x20
    ctx->r25 = ctx->r15 & 0X20;
    // 0x4500F0B0: beq         $t9, $zero, L_4500F0C8
    if (ctx->r25 == 0) {
        // 0x4500F0B4: sw          $t7, 0x184($a0)
        MEM_W(0X184, ctx->r4) = ctx->r15;
            goto L_4500F0C8;
    }
    // 0x4500F0B4: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500F0B8: jal         0x45006668
    // 0x4500F0BC: nop

    ovl_mobj_main_6668(rdram, ctx);
        goto after_0;
    // 0x4500F0BC: nop

    after_0:
    // 0x4500F0C0: b           L_4500F0D4
    // 0x4500F0C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500F0D4;
    // 0x4500F0C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F0C8:
    // 0x4500F0C8: jal         0x450066A4
    // 0x4500F0CC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_66A4(rdram, ctx);
        goto after_1;
    // 0x4500F0CC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x4500F0D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F0D4:
    // 0x4500F0D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F0D8: jr          $ra
    // 0x4500F0DC: nop

    return;
    // 0x4500F0DC: nop

;}
RECOMP_FUNC void ovl_mobj_main_F0E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F0E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F0E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F0E8: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x4500F0EC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x4500F0F0: andi        $t6, $v0, 0x20
    ctx->r14 = ctx->r2 & 0X20;
    // 0x4500F0F4: bne         $t6, $zero, L_4500F104
    if (ctx->r14 != 0) {
        // 0x4500F0F8: ori         $t7, $v0, 0x10
        ctx->r15 = ctx->r2 | 0X10;
            goto L_4500F104;
    }
    // 0x4500F0F8: ori         $t7, $v0, 0x10
    ctx->r15 = ctx->r2 | 0X10;
    // 0x4500F0FC: jal         0x45006A90
    // 0x4500F100: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    ovl_mobj_main_6A90(rdram, ctx);
        goto after_0;
    // 0x4500F100: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    after_0:
L_4500F104:
    // 0x4500F104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500F108: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F10C: jr          $ra
    // 0x4500F110: nop

    return;
    // 0x4500F110: nop

;}
RECOMP_FUNC void ovl_mobj_main_F114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F118: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F11C: lw          $t6, 0x188($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X188);
    // 0x4500F120: nop

    // 0x4500F124: beq         $t6, $zero, L_4500F14C
    if (ctx->r14 == 0) {
        // 0x4500F128: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4500F14C;
    }
    // 0x4500F128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500F12C: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x4500F130: addiu       $a1, $zero, 0x135
    ctx->r5 = ADD32(0, 0X135);
    // 0x4500F134: andi        $t7, $v0, 0x10
    ctx->r15 = ctx->r2 & 0X10;
    // 0x4500F138: bne         $t7, $zero, L_4500F148
    if (ctx->r15 != 0) {
        // 0x4500F13C: ori         $t8, $v0, 0x10
        ctx->r24 = ctx->r2 | 0X10;
            goto L_4500F148;
    }
    // 0x4500F13C: ori         $t8, $v0, 0x10
    ctx->r24 = ctx->r2 | 0X10;
    // 0x4500F140: jal         0x45000F80
    // 0x4500F144: sw          $t8, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r24;
    ovl_mobj_main_F80(rdram, ctx);
        goto after_0;
    // 0x4500F144: sw          $t8, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r24;
    after_0:
L_4500F148:
    // 0x4500F148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F14C:
    // 0x4500F14C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F150: jr          $ra
    // 0x4500F154: nop

    return;
    // 0x4500F154: nop

;}
RECOMP_FUNC void ovl_mobj_main_F158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F158: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F15C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F160: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x4500F164: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x4500F168: andi        $t6, $v0, 0x20
    ctx->r14 = ctx->r2 & 0X20;
    // 0x4500F16C: beq         $t6, $zero, L_4500F184
    if (ctx->r14 == 0) {
        // 0x4500F170: ori         $t7, $v0, 0x10
        ctx->r15 = ctx->r2 | 0X10;
            goto L_4500F184;
    }
    // 0x4500F170: ori         $t7, $v0, 0x10
    ctx->r15 = ctx->r2 | 0X10;
    // 0x4500F174: jal         0x45006D70
    // 0x4500F178: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_6D70(rdram, ctx);
        goto after_0;
    // 0x4500F178: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x4500F17C: b           L_4500F190
    // 0x4500F180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500F190;
    // 0x4500F180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F184:
    // 0x4500F184: jal         0x45006D70
    // 0x4500F188: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    ovl_mobj_main_6D70(rdram, ctx);
        goto after_1;
    // 0x4500F188: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    after_1:
    // 0x4500F18C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F190:
    // 0x4500F190: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F194: jr          $ra
    // 0x4500F198: nop

    return;
    // 0x4500F198: nop

;}
RECOMP_FUNC void ovl_mobj_main_F19C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F19C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F1A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F1A4: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x4500F1A8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x4500F1AC: andi        $t6, $v0, 0x20
    ctx->r14 = ctx->r2 & 0X20;
    // 0x4500F1B0: bne         $t6, $zero, L_4500F1E4
    if (ctx->r14 != 0) {
        // 0x4500F1B4: ori         $t7, $v0, 0x10
        ctx->r15 = ctx->r2 | 0X10;
            goto L_4500F1E4;
    }
    // 0x4500F1B4: ori         $t7, $v0, 0x10
    ctx->r15 = ctx->r2 | 0X10;
    // 0x4500F1B8: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500F1BC: jal         0x45006E64
    // 0x4500F1C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_6E64(rdram, ctx);
        goto after_0;
    // 0x4500F1C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4500F1C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500F1C8: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x4500F1CC: lw          $t8, 0xC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC);
    // 0x4500F1D0: nop

    // 0x4500F1D4: bne         $t8, $at, L_4500F1E8
    if (ctx->r24 != ctx->r1) {
        // 0x4500F1D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4500F1E8;
    }
    // 0x4500F1D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500F1DC: jal         0x45000F80
    // 0x4500F1E0: addiu       $a1, $zero, 0x13C
    ctx->r5 = ADD32(0, 0X13C);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_1;
    // 0x4500F1E0: addiu       $a1, $zero, 0x13C
    ctx->r5 = ADD32(0, 0X13C);
    after_1:
L_4500F1E4:
    // 0x4500F1E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F1E8:
    // 0x4500F1E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F1EC: jr          $ra
    // 0x4500F1F0: nop

    return;
    // 0x4500F1F0: nop

;}
RECOMP_FUNC void ovl_mobj_main_F1F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F1F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F1F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F1FC: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x4500F200: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x4500F204: andi        $t6, $v0, 0x20
    ctx->r14 = ctx->r2 & 0X20;
    // 0x4500F208: bne         $t6, $zero, L_4500F218
    if (ctx->r14 != 0) {
        // 0x4500F20C: ori         $t7, $v0, 0x10
        ctx->r15 = ctx->r2 | 0X10;
            goto L_4500F218;
    }
    // 0x4500F20C: ori         $t7, $v0, 0x10
    ctx->r15 = ctx->r2 | 0X10;
    // 0x4500F210: jal         0x45006F14
    // 0x4500F214: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    ovl_mobj_main_6F14(rdram, ctx);
        goto after_0;
    // 0x4500F214: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    after_0:
L_4500F218:
    // 0x4500F218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500F21C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F220: jr          $ra
    // 0x4500F224: nop

    return;
    // 0x4500F224: nop

;}
RECOMP_FUNC void ovl_mobj_main_F228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F228: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F22C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F230: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500F234: nop

    // 0x4500F238: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x4500F23C: bne         $t7, $zero, L_4500F260
    if (ctx->r15 != 0) {
        // 0x4500F240: nop
    
            goto L_4500F260;
    }
    // 0x4500F240: nop

    // 0x4500F244: jal         0x45009FFC
    // 0x4500F248: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_9FFC(rdram, ctx);
        goto after_0;
    // 0x4500F248: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4500F24C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500F250: jal         0x45000F80
    // 0x4500F254: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_1;
    // 0x4500F254: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    after_1:
    // 0x4500F258: b           L_4500F26C
    // 0x4500F25C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500F26C;
    // 0x4500F25C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F260:
    // 0x4500F260: jal         0x4500A038
    // 0x4500F264: nop

    ovl_mobj_main_A038(rdram, ctx);
        goto after_2;
    // 0x4500F264: nop

    after_2:
    // 0x4500F268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F26C:
    // 0x4500F26C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F270: jr          $ra
    // 0x4500F274: nop

    return;
    // 0x4500F274: nop

;}
RECOMP_FUNC void ovl_mobj_main_F278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F278: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F27C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F280: lw          $t6, 0x188($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X188);
    // 0x4500F284: nop

    // 0x4500F288: bne         $t6, $zero, L_4500F2F0
    if (ctx->r14 != 0) {
        // 0x4500F28C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4500F2F0;
    }
    // 0x4500F28C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500F290: lw          $t7, 0x184($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X184);
    // 0x4500F294: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x4500F298: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x4500F29C: bne         $t8, $zero, L_4500F2BC
    if (ctx->r24 != 0) {
        // 0x4500F2A0: nop
    
            goto L_4500F2BC;
    }
    // 0x4500F2A0: nop

    // 0x4500F2A4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x4500F2A8: jal         0x4500A078
    // 0x4500F2AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_A078(rdram, ctx);
        goto after_0;
    // 0x4500F2AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4500F2B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500F2B4: b           L_4500F2D0
    // 0x4500F2B8: lw          $t9, 0x184($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X184);
        goto L_4500F2D0;
    // 0x4500F2B8: lw          $t9, 0x184($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X184);
L_4500F2BC:
    // 0x4500F2BC: jal         0x4500A0D0
    // 0x4500F2C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_A0D0(rdram, ctx);
        goto after_1;
    // 0x4500F2C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x4500F2C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500F2C8: nop

    // 0x4500F2CC: lw          $t9, 0x184($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X184);
L_4500F2D0:
    // 0x4500F2D0: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x4500F2D4: addiu       $at, $zero, 0x56
    ctx->r1 = ADD32(0, 0X56);
    // 0x4500F2D8: ori         $t0, $t9, 0x10
    ctx->r8 = ctx->r25 | 0X10;
    // 0x4500F2DC: bne         $t1, $at, L_4500F2EC
    if (ctx->r9 != ctx->r1) {
        // 0x4500F2E0: sw          $t0, 0x184($a0)
        MEM_W(0X184, ctx->r4) = ctx->r8;
            goto L_4500F2EC;
    }
    // 0x4500F2E0: sw          $t0, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r8;
    // 0x4500F2E4: jal         0x45000FA0
    // 0x4500F2E8: addiu       $a1, $zero, 0x14D
    ctx->r5 = ADD32(0, 0X14D);
    ovl_mobj_main_FA0(rdram, ctx);
        goto after_2;
    // 0x4500F2E8: addiu       $a1, $zero, 0x14D
    ctx->r5 = ADD32(0, 0X14D);
    after_2:
L_4500F2EC:
    // 0x4500F2EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F2F0:
    // 0x4500F2F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F2F4: jr          $ra
    // 0x4500F2F8: nop

    return;
    // 0x4500F2F8: nop

;}
RECOMP_FUNC void ovl_mobj_main_F2FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F2FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4500F300: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4500F304: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4500F308: lw          $a1, 0x1CC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X1CC);
    // 0x4500F30C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4500F310: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x4500F314: jal         0x4500192C
    // 0x4500F318: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_mobj_main_192C(rdram, ctx);
        goto after_0;
    // 0x4500F318: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x4500F31C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4500F320: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4500F324: jr          $ra
    // 0x4500F328: nop

    return;
    // 0x4500F328: nop

;}
RECOMP_FUNC void ovl_mobj_main_F32C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F32C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F334: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500F338: addiu       $a1, $zero, 0x15E
    ctx->r5 = ADD32(0, 0X15E);
    // 0x4500F33C: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x4500F340: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500F344: jal         0x45000F80
    // 0x4500F348: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_F80(rdram, ctx);
        goto after_0;
    // 0x4500F348: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4500F34C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500F350: nop

    // 0x4500F354: lw          $t8, 0x184($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X184);
    // 0x4500F358: nop

    // 0x4500F35C: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x4500F360: beq         $t9, $zero, L_4500F378
    if (ctx->r25 == 0) {
        // 0x4500F364: nop
    
            goto L_4500F378;
    }
    // 0x4500F364: nop

    // 0x4500F368: jal         0x4500A584
    // 0x4500F36C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_A584(rdram, ctx);
        goto after_1;
    // 0x4500F36C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x4500F370: b           L_4500F384
    // 0x4500F374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500F384;
    // 0x4500F374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F378:
    // 0x4500F378: jal         0x4500A54C
    // 0x4500F37C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_A54C(rdram, ctx);
        goto after_2;
    // 0x4500F37C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x4500F380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F384:
    // 0x4500F384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F388: jr          $ra
    // 0x4500F38C: nop

    return;
    // 0x4500F38C: nop

;}
RECOMP_FUNC void ovl_mobj_main_F390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F390: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F398: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500F39C: nop

    // 0x4500F3A0: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x4500F3A4: andi        $t9, $t7, 0x20
    ctx->r25 = ctx->r15 & 0X20;
    // 0x4500F3A8: beq         $t9, $zero, L_4500F3C0
    if (ctx->r25 == 0) {
        // 0x4500F3AC: sw          $t7, 0x184($a0)
        MEM_W(0X184, ctx->r4) = ctx->r15;
            goto L_4500F3C0;
    }
    // 0x4500F3AC: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500F3B0: jal         0x45006618
    // 0x4500F3B4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_6618(rdram, ctx);
        goto after_0;
    // 0x4500F3B4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x4500F3B8: b           L_4500F3CC
    // 0x4500F3BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500F3CC;
    // 0x4500F3BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F3C0:
    // 0x4500F3C0: jal         0x45006640
    // 0x4500F3C4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_6640(rdram, ctx);
        goto after_1;
    // 0x4500F3C4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x4500F3C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F3CC:
    // 0x4500F3CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F3D0: jr          $ra
    // 0x4500F3D4: nop

    return;
    // 0x4500F3D4: nop

;}
RECOMP_FUNC void ovl_mobj_main_F3D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F3D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F3DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F3E0: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x4500F3E4: nop

    // 0x4500F3E8: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x4500F3EC: bne         $t6, $zero, L_4500F3FC
    if (ctx->r14 != 0) {
        // 0x4500F3F0: ori         $t7, $v0, 0x90
        ctx->r15 = ctx->r2 | 0X90;
            goto L_4500F3FC;
    }
    // 0x4500F3F0: ori         $t7, $v0, 0x90
    ctx->r15 = ctx->r2 | 0X90;
    // 0x4500F3F4: jal         0x45002508
    // 0x4500F3F8: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    ovl_mobj_main_2508(rdram, ctx);
        goto after_0;
    // 0x4500F3F8: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    after_0:
L_4500F3FC:
    // 0x4500F3FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500F400: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F404: jr          $ra
    // 0x4500F408: nop

    return;
    // 0x4500F408: nop

;}
RECOMP_FUNC void ovl_mobj_main_F40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F40C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F410: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F414: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500F418: nop

    // 0x4500F41C: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x4500F420: andi        $t9, $t7, 0x20
    ctx->r25 = ctx->r15 & 0X20;
    // 0x4500F424: beq         $t9, $zero, L_4500F43C
    if (ctx->r25 == 0) {
        // 0x4500F428: sw          $t7, 0x184($a0)
        MEM_W(0X184, ctx->r4) = ctx->r15;
            goto L_4500F43C;
    }
    // 0x4500F428: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500F42C: jal         0x45007030
    // 0x4500F430: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_7030(rdram, ctx);
        goto after_0;
    // 0x4500F430: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x4500F434: b           L_4500F448
    // 0x4500F438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500F448;
    // 0x4500F438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F43C:
    // 0x4500F43C: jal         0x45007030
    // 0x4500F440: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_7030(rdram, ctx);
        goto after_1;
    // 0x4500F440: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x4500F444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500F448:
    // 0x4500F448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F44C: jr          $ra
    // 0x4500F450: nop

    return;
    // 0x4500F450: nop

;}
RECOMP_FUNC void ovl_mobj_main_F454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500F454: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500F458: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500F45C: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500F460: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x4500F464: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x4500F468: jal         0x4500725C
    // 0x4500F46C: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    ovl_mobj_main_725C(rdram, ctx);
        goto after_0;
    // 0x4500F46C: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    after_0:
    // 0x4500F470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500F474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500F478: jr          $ra
    // 0x4500F47C: nop

    return;
    // 0x4500F47C: nop

;}
