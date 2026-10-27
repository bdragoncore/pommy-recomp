#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_actor_main_10538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010538: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001053C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40010540: jal         0x400063F0
    // 0x40010544: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_63F0(rdram, ctx);
        goto after_0;
    // 0x40010544: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x40010548: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4001054C: beq         $v0, $zero, L_40010578
    if (ctx->r2 == 0) {
        // 0x40010550: nop
    
            goto L_40010578;
    }
    // 0x40010550: nop

    // 0x40010554: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x40010558: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x4001055C: bne         $t6, $at, L_40010578
    if (ctx->r14 != ctx->r1) {
        // 0x40010560: nop
    
            goto L_40010578;
    }
    // 0x40010560: nop

    // 0x40010564: lw          $t7, 0x90($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X90);
    // 0x40010568: addiu       $at, $zero, -0x1001
    ctx->r1 = ADD32(0, -0X1001);
    // 0x4001056C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x40010570: b           L_40010588
    // 0x40010574: sw          $t8, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r24;
        goto L_40010588;
    // 0x40010574: sw          $t8, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r24;
L_40010578:
    // 0x40010578: lw          $t9, 0x90($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X90);
    // 0x4001057C: addiu       $at, $zero, -0x1011
    ctx->r1 = ADD32(0, -0X1011);
    // 0x40010580: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x40010584: sw          $t0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r8;
L_40010588:
    // 0x40010588: jal         0x4000946C
    // 0x4001058C: nop

    ovl_actor_main_946C(rdram, ctx);
        goto after_1;
    // 0x4001058C: nop

    after_1:
    // 0x40010590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40010594: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40010598: jr          $ra
    // 0x4001059C: nop

    return;
    // 0x4001059C: nop

;}
RECOMP_FUNC void ovl_actor_main_105A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400105A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x400105A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400105A8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x400105AC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x400105B0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x400105B4: bne         $v0, $at, L_400105C4
    if (ctx->r2 != ctx->r1) {
        // 0x400105B8: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_400105C4;
    }
    // 0x400105B8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x400105BC: b           L_400105F0
    // 0x400105C0: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
        goto L_400105F0;
    // 0x400105C0: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
L_400105C4:
    // 0x400105C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x400105C8: bne         $v0, $at, L_400105F0
    if (ctx->r2 != ctx->r1) {
        // 0x400105CC: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_400105F0;
    }
    // 0x400105CC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x400105D0: jal         0x4000034C
    // 0x400105D4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    ovl_actor_main_34C(rdram, ctx);
        goto after_0;
    // 0x400105D4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x400105D8: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x400105DC: lui         $a1, 0x4002
    ctx->r5 = S32(0X4002 << 16);
    // 0x400105E0: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x400105E4: lw          $a1, -0x25C8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X25C8);
    // 0x400105E8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x400105EC: nop

L_400105F0:
    // 0x400105F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x400105F4: beq         $a1, $at, L_40010604
    if (ctx->r5 == ctx->r1) {
        // 0x400105F8: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_40010604;
    }
    // 0x400105F8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x400105FC: jal         0x4000115C
    // 0x40010600: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_1;
    // 0x40010600: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_40010604:
    // 0x40010604: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40010608: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001060C: jr          $ra
    // 0x40010610: nop

    return;
    // 0x40010610: nop

;}
RECOMP_FUNC void ovl_actor_main_10614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010614: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40010618: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4001061C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x40010620: jal         0x400102BC
    // 0x40010624: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_actor_main_102BC(rdram, ctx);
        goto after_0;
    // 0x40010624: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x40010628: jal         0x400092D4
    // 0x4001062C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_92D4(rdram, ctx);
        goto after_1;
    // 0x4001062C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x40010630: jal         0x40010310
    // 0x40010634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_10310(rdram, ctx);
        goto after_2;
    // 0x40010634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x40010638: jal         0x40009B20
    // 0x4001063C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9B20(rdram, ctx);
        goto after_3;
    // 0x4001063C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x40010640: jal         0x40009A54
    // 0x40010644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9A54(rdram, ctx);
        goto after_4;
    // 0x40010644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x40010648: jal         0x4000947C
    // 0x4001064C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_947C(rdram, ctx);
        goto after_5;
    // 0x4001064C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x40010650: lw          $t6, 0x90($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X90);
    // 0x40010654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40010658: ori         $t7, $t6, 0x90
    ctx->r15 = ctx->r14 | 0X90;
    // 0x4001065C: jal         0x400105A0
    // 0x40010660: sw          $t7, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r15;
    ovl_actor_main_105A0(rdram, ctx);
        goto after_6;
    // 0x40010660: sw          $t7, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r15;
    after_6:
    // 0x40010664: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40010668: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4001066C: jr          $ra
    // 0x40010670: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x40010670: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_actor_main_10674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010674: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40010678: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001067C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40010680: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x40010684: beq         $a1, $at, L_400106A0
    if (ctx->r5 == ctx->r1) {
        // 0x40010688: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_400106A0;
    }
    // 0x40010688: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x4001068C: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x40010690: beq         $a1, $at, L_400106BC
    if (ctx->r5 == ctx->r1) {
        // 0x40010694: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_400106BC;
    }
    // 0x40010694: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40010698: b           L_400106BC
    // 0x4001069C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_400106BC;
    // 0x4001069C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_400106A0:
    // 0x400106A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x400106A4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x400106A8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400106AC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400106B0: jal         0x40008D20
    // 0x400106B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x400106B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x400106B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_400106BC:
    // 0x400106BC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x400106C0: lui         $a2, 0x4189
    ctx->r6 = S32(0X4189 << 16);
    // 0x400106C4: ori         $a2, $a2, 0x2492
    ctx->r6 = ctx->r6 | 0X2492;
    // 0x400106C8: jal         0x40008EC0
    // 0x400106CC: addiu       $a3, $zero, 0x15
    ctx->r7 = ADD32(0, 0X15);
    ovl_actor_main_8EC0(rdram, ctx);
        goto after_1;
    // 0x400106CC: addiu       $a3, $zero, 0x15
    ctx->r7 = ADD32(0, 0X15);
    after_1:
    // 0x400106D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400106D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x400106D8: jr          $ra
    // 0x400106DC: nop

    return;
    // 0x400106DC: nop

;}
RECOMP_FUNC void ovl_actor_main_106E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400106E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x400106E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400106E8: jal         0x40010614
    // 0x400106EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_10614(rdram, ctx);
        goto after_0;
    // 0x400106EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x400106F0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x400106F4: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    // 0x400106F8: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    // 0x400106FC: jal         0x40000CA0
    // 0x40010700: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_1;
    // 0x40010700: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x40010704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40010708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001070C: jr          $ra
    // 0x40010710: nop

    return;
    // 0x40010710: nop

;}
RECOMP_FUNC void ovl_actor_main_10714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010714: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40010718: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001071C: jal         0x4000946C
    // 0x40010720: nop

    ovl_actor_main_946C(rdram, ctx);
        goto after_0;
    // 0x40010720: nop

    after_0:
    // 0x40010724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40010728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001072C: jr          $ra
    // 0x40010730: nop

    return;
    // 0x40010730: nop

;}
RECOMP_FUNC void ovl_actor_main_10734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010734: jr          $ra
    // 0x40010738: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x40010738: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ovl_actor_main_1073C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001073C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x40010740: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x40010744: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x40010748: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x4001074C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40010750: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x40010754: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x40010758: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x4001075C: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x40010760: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x40010764: jal         0x400006C4
    // 0x40010768: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40010768: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_0:
    // 0x4001076C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40010770: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x40010774: jr          $ra
    // 0x40010778: nop

    return;
    // 0x40010778: nop

;}
RECOMP_FUNC void ovl_actor_main_1077C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001077C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40010780: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x40010784: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x40010788: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001078C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x40010790: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x40010794: beq         $a1, $at, L_400107BC
    if (ctx->r5 == ctx->r1) {
        // 0x40010798: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_400107BC;
    }
    // 0x40010798: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001079C: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x400107A0: beq         $a1, $at, L_400107E8
    if (ctx->r5 == ctx->r1) {
        // 0x400107A4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_400107E8;
    }
    // 0x400107A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400107A8: addiu       $at, $zero, 0x99
    ctx->r1 = ADD32(0, 0X99);
    // 0x400107AC: beq         $a1, $at, L_40010804
    if (ctx->r5 == ctx->r1) {
        // 0x400107B0: nop
    
            goto L_40010804;
    }
    // 0x400107B0: nop

    // 0x400107B4: b           L_40010810
    // 0x400107B8: slti        $at, $s0, 0x65
    ctx->r1 = SIGNED(ctx->r16) < 0X65 ? 1 : 0;
        goto L_40010810;
    // 0x400107B8: slti        $at, $s0, 0x65
    ctx->r1 = SIGNED(ctx->r16) < 0X65 ? 1 : 0;
L_400107BC:
    // 0x400107BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400107C0: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x400107C4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400107C8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400107CC: jal         0x40008D20
    // 0x400107D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x400107D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x400107D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400107D8: jal         0x4000B364
    // 0x400107DC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_actor_main_B364(rdram, ctx);
        goto after_1;
    // 0x400107DC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_1:
    // 0x400107E0: b           L_40010810
    // 0x400107E4: slti        $at, $s0, 0x65
    ctx->r1 = SIGNED(ctx->r16) < 0X65 ? 1 : 0;
        goto L_40010810;
    // 0x400107E4: slti        $at, $s0, 0x65
    ctx->r1 = SIGNED(ctx->r16) < 0X65 ? 1 : 0;
L_400107E8:
    // 0x400107E8: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x400107EC: jal         0x4001073C
    // 0x400107F0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_actor_main_1073C(rdram, ctx);
        goto after_2;
    // 0x400107F0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_2:
    // 0x400107F4: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x400107F8: sw          $t6, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = ctx->r14;
    // 0x400107FC: b           L_4001080C
    // 0x40010800: addiu       $s0, $zero, 0x64
    ctx->r16 = ADD32(0, 0X64);
        goto L_4001080C;
    // 0x40010800: addiu       $s0, $zero, 0x64
    ctx->r16 = ADD32(0, 0X64);
L_40010804:
    // 0x40010804: jal         0x40010734
    // 0x40010808: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_10734(rdram, ctx);
        goto after_3;
    // 0x40010808: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
L_4001080C:
    // 0x4001080C: slti        $at, $s0, 0x65
    ctx->r1 = SIGNED(ctx->r16) < 0X65 ? 1 : 0;
L_40010810:
    // 0x40010810: bne         $at, $zero, L_4001084C
    if (ctx->r1 != 0) {
        // 0x40010814: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4001084C;
    }
    // 0x40010814: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40010818: jal         0x4000B32C
    // 0x4001081C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_actor_main_B32C(rdram, ctx);
        goto after_4;
    // 0x4001081C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x40010820: beq         $v0, $zero, L_40010848
    if (ctx->r2 == 0) {
        // 0x40010824: addiu       $t7, $zero, 0x64
        ctx->r15 = ADD32(0, 0X64);
            goto L_40010848;
    }
    // 0x40010824: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x40010828: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x4001082C: bne         $s0, $at, L_4001084C
    if (ctx->r16 != ctx->r1) {
        // 0x40010830: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4001084C;
    }
    // 0x40010830: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40010834: lui         $a1, 0x421C
    ctx->r5 = S32(0X421C << 16);
    // 0x40010838: jal         0x4001073C
    // 0x4001083C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_actor_main_1073C(rdram, ctx);
        goto after_5;
    // 0x4001083C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_5:
    // 0x40010840: b           L_40010850
    // 0x40010844: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
        goto L_40010850;
    // 0x40010844: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
L_40010848:
    // 0x40010848: sw          $t7, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = ctx->r15;
L_4001084C:
    // 0x4001084C: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
L_40010850:
    // 0x40010850: beq         $at, $zero, L_40010874
    if (ctx->r1 == 0) {
        // 0x40010854: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_40010874;
    }
    // 0x40010854: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40010858: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4001085C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x40010860: lui         $a2, 0x4218
    ctx->r6 = S32(0X4218 << 16);
    // 0x40010864: jal         0x40008EC0
    // 0x40010868: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    ovl_actor_main_8EC0(rdram, ctx);
        goto after_6;
    // 0x40010868: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    after_6:
    // 0x4001086C: b           L_4001088C
    // 0x40010870: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001088C;
    // 0x40010870: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40010874:
    // 0x40010874: lui         $a2, 0x415D
    ctx->r6 = S32(0X415D << 16);
    // 0x40010878: ori         $a2, $a2, 0x89D9
    ctx->r6 = ctx->r6 | 0X89D9;
    // 0x4001087C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x40010880: jal         0x40008EC0
    // 0x40010884: addiu       $a3, $zero, 0x1C
    ctx->r7 = ADD32(0, 0X1C);
    ovl_actor_main_8EC0(rdram, ctx);
        goto after_7;
    // 0x40010884: addiu       $a3, $zero, 0x1C
    ctx->r7 = ADD32(0, 0X1C);
    after_7:
    // 0x40010888: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001088C:
    // 0x4001088C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x40010890: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x40010894: jr          $ra
    // 0x40010898: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x40010898: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_1089C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001089C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x400108A0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x400108A4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x400108A8: bne         $a1, $at, L_400108B4
    if (ctx->r5 != ctx->r1) {
        // 0x400108AC: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_400108B4;
    }
    // 0x400108AC: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x400108B0: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_400108B4:
    // 0x400108B4: jr          $ra
    // 0x400108B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x400108B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_108BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400108BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x400108C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400108C4: jal         0x40010614
    // 0x400108C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_10614(rdram, ctx);
        goto after_0;
    // 0x400108C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x400108CC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x400108D0: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400108D4: lwc1        $f4, -0x1474($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1474);
    // 0x400108D8: lw          $a0, 0x1C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1C);
    // 0x400108DC: addiu       $a1, $zero, 0x47
    ctx->r5 = ADD32(0, 0X47);
    // 0x400108E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x400108E4: sw          $zero, 0x314($a3)
    MEM_W(0X314, ctx->r7) = 0;
    // 0x400108E8: jal         0x40000CA0
    // 0x400108EC: swc1        $f4, 0x4C($a3)
    MEM_W(0X4C, ctx->r7) = ctx->f4.u32l;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_1;
    // 0x400108EC: swc1        $f4, 0x4C($a3)
    MEM_W(0X4C, ctx->r7) = ctx->f4.u32l;
    after_1:
    // 0x400108F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400108F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x400108F8: jr          $ra
    // 0x400108FC: nop

    return;
    // 0x400108FC: nop

;}
RECOMP_FUNC void ovl_actor_main_10900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010900: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40010904: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40010908: jal         0x4000946C
    // 0x4001090C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_946C(rdram, ctx);
        goto after_0;
    // 0x4001090C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x40010910: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40010914: lwc1        $f4, -0x1470($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1470);
    // 0x40010918: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x4001091C: nop

    // 0x40010920: swc1        $f4, 0x4C($t6)
    MEM_W(0X4C, ctx->r14) = ctx->f4.u32l;
    // 0x40010924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40010928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001092C: jr          $ra
    // 0x40010930: nop

    return;
    // 0x40010930: nop

;}
RECOMP_FUNC void ovl_actor_main_10934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010934: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x40010938: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x4001093C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40010940: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x40010944: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x40010948: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x4001094C: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x40010950: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x40010954: jal         0x400006C4
    // 0x40010958: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40010958: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_0:
    // 0x4001095C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40010960: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x40010964: jr          $ra
    // 0x40010968: nop

    return;
    // 0x40010968: nop

;}
RECOMP_FUNC void ovl_actor_main_1096C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001096C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40010970: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x40010974: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x40010978: lbu         $t9, 0x23($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X23);
    // 0x4001097C: lbu         $t7, 0x1F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1F);
    // 0x40010980: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x40010984: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x40010988: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x4001098C: lbu         $t4, 0x2B($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X2B);
    // 0x40010990: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x40010994: sll         $t2, $t6, 8
    ctx->r10 = S32(ctx->r14 << 8);
    // 0x40010998: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001099C: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x400109A0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x400109A4: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x400109A8: jal         0x40010934
    // 0x400109AC: or          $a2, $t3, $t4
    ctx->r6 = ctx->r11 | ctx->r12;
    ovl_actor_main_10934(rdram, ctx);
        goto after_0;
    // 0x400109AC: or          $a2, $t3, $t4
    ctx->r6 = ctx->r11 | ctx->r12;
    after_0:
    // 0x400109B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400109B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x400109B8: jr          $ra
    // 0x400109BC: nop

    return;
    // 0x400109BC: nop

;}
RECOMP_FUNC void ovl_actor_main_109C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400109C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x400109C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400109C8: jal         0x400108BC
    // 0x400109CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_108BC(rdram, ctx);
        goto after_0;
    // 0x400109CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x400109D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x400109D4: addiu       $t6, $zero, 0xB2
    ctx->r14 = ADD32(0, 0XB2);
    // 0x400109D8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x400109DC: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x400109E0: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x400109E4: jal         0x4001096C
    // 0x400109E8: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_actor_main_1096C(rdram, ctx);
        goto after_1;
    // 0x400109E8: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_1:
    // 0x400109EC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x400109F0: addiu       $a1, $zero, 0x47
    ctx->r5 = ADD32(0, 0X47);
    // 0x400109F4: lw          $a0, 0x1C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1C);
    // 0x400109F8: jal         0x40000CA0
    // 0x400109FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_2;
    // 0x400109FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x40010A00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40010A04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40010A08: jr          $ra
    // 0x40010A0C: nop

    return;
    // 0x40010A0C: nop

;}
RECOMP_FUNC void ovl_actor_main_10A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010A10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40010A14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40010A18: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x40010A1C: jal         0x40011944
    // 0x40010A20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_11944(rdram, ctx);
        goto after_0;
    // 0x40010A20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x40010A24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40010A28: nop

    // 0x40010A2C: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
    // 0x40010A30: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    // 0x40010A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40010A38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40010A3C: jr          $ra
    // 0x40010A40: nop

    return;
    // 0x40010A40: nop

;}
RECOMP_FUNC void ovl_actor_main_10A44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010A44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40010A48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40010A4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x40010A50: ori         $a1, $zero, 0xC000
    ctx->r5 = 0 | 0XC000;
    // 0x40010A54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x40010A58: ori         $a2, $zero, 0xC000
    ctx->r6 = 0 | 0XC000;
    // 0x40010A5C: jal         0x400090EC
    // 0x40010A60: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    ovl_actor_main_90EC(rdram, ctx);
        goto after_0;
    // 0x40010A60: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    after_0:
    // 0x40010A64: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x40010A68: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40010A6C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x40010A70: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x40010A74: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x40010A78: lwc1        $f4, 0x300($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X300);
    // 0x40010A7C: lw          $t6, 0x314($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X314);
    // 0x40010A80: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x40010A84: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x40010A88: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x40010A8C: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x40010A90: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x40010A94: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x40010A98: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x40010A9C: sw          $t9, 0x314($a0)
    MEM_W(0X314, ctx->r4) = ctx->r25;
    // 0x40010AA0: bne         $v1, $t0, L_40010AC4
    if (ctx->r3 != ctx->r8) {
        // 0x40010AA4: swc1        $f8, 0x300($a0)
        MEM_W(0X300, ctx->r4) = ctx->f8.u32l;
            goto L_40010AC4;
    }
    // 0x40010AA4: swc1        $f8, 0x300($a0)
    MEM_W(0X300, ctx->r4) = ctx->f8.u32l;
    // 0x40010AA8: lw          $t1, 0x4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X4);
    // 0x40010AAC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40010AB0: lw          $t2, 0x18($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X18);
    // 0x40010AB4: addiu       $t4, $t9, 0x1
    ctx->r12 = ADD32(ctx->r25, 0X1);
    // 0x40010AB8: beq         $t2, $at, L_40010AC8
    if (ctx->r10 == ctx->r1) {
        // 0x40010ABC: lw          $t5, 0x1C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X1C);
            goto L_40010AC8;
    }
    // 0x40010ABC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x40010AC0: sw          $t4, 0x314($a0)
    MEM_W(0X314, ctx->r4) = ctx->r12;
L_40010AC4:
    // 0x40010AC4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
L_40010AC8:
    // 0x40010AC8: lw          $v0, 0x314($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X314);
    // 0x40010ACC: addiu       $t7, $t5, 0xF
    ctx->r15 = ADD32(ctx->r13, 0XF);
    // 0x40010AD0: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x40010AD4: bne         $at, $zero, L_40010B10
    if (ctx->r1 != 0) {
        // 0x40010AD8: addiu       $t8, $v0, 0x1
        ctx->r24 = ADD32(ctx->r2, 0X1);
            goto L_40010B10;
    }
    // 0x40010AD8: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x40010ADC: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x40010AE0: sw          $zero, 0x314($a0)
    MEM_W(0X314, ctx->r4) = 0;
    // 0x40010AE4: bne         $v1, $t6, L_40010B00
    if (ctx->r3 != ctx->r14) {
        // 0x40010AE8: addiu       $a1, $zero, 0x64
        ctx->r5 = ADD32(0, 0X64);
            goto L_40010B00;
    }
    // 0x40010AE8: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x40010AEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x40010AF0: jal         0x4000115C
    // 0x40010AF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_115C(rdram, ctx);
        goto after_1;
    // 0x40010AF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x40010AF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40010AFC: nop

L_40010B00:
    // 0x40010B00: jal         0x40010A10
    // 0x40010B04: nop

    ovl_actor_main_10A10(rdram, ctx);
        goto after_2;
    // 0x40010B04: nop

    after_2:
    // 0x40010B08: b           L_40010B18
    // 0x40010B0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40010B18;
    // 0x40010B0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40010B10:
    // 0x40010B10: sw          $t8, 0x314($a0)
    MEM_W(0X314, ctx->r4) = ctx->r24;
    // 0x40010B14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40010B18:
    // 0x40010B18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40010B1C: jr          $ra
    // 0x40010B20: nop

    return;
    // 0x40010B20: nop

;}
RECOMP_FUNC void ovl_actor_main_10B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010B24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40010B28: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x40010B2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40010B30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40010B34: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40010B38: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x40010B3C: beq         $a1, $at, L_40010B64
    if (ctx->r5 == ctx->r1) {
        // 0x40010B40: sw          $a2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r6;
            goto L_40010B64;
    }
    // 0x40010B40: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x40010B44: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x40010B48: beq         $a1, $at, L_40010BB8
    if (ctx->r5 == ctx->r1) {
        // 0x40010B4C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_40010BB8;
    }
    // 0x40010B4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x40010B50: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x40010B54: beq         $a1, $at, L_40010BCC
    if (ctx->r5 == ctx->r1) {
        // 0x40010B58: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40010BCC;
    }
    // 0x40010B58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40010B5C: b           L_40010BE8
    // 0x40010B60: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
        goto L_40010BE8;
    // 0x40010B60: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_40010B64:
    // 0x40010B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40010B68: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x40010B6C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40010B70: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40010B74: jal         0x40008D20
    // 0x40010B78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x40010B78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40010B7C: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x40010B80: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40010B84: bne         $t7, $at, L_40010BA8
    if (ctx->r15 != ctx->r1) {
        // 0x40010B88: nop
    
            goto L_40010BA8;
    }
    // 0x40010B88: nop

    // 0x40010B8C: lw          $t8, 0x31C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X31C);
    // 0x40010B90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40010B94: bne         $t8, $at, L_40010BA8
    if (ctx->r24 != ctx->r1) {
        // 0x40010B98: nop
    
            goto L_40010BA8;
    }
    // 0x40010B98: nop

    // 0x40010B9C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x40010BA0: jal         0x40000CAC
    // 0x40010BA4: nop

    ovl_actor_main_CAC(rdram, ctx);
        goto after_1;
    // 0x40010BA4: nop

    after_1:
L_40010BA8:
    // 0x40010BA8: jal         0x40010C90
    // 0x40010BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_10C90(rdram, ctx);
        goto after_2;
    // 0x40010BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x40010BB0: b           L_40010BE8
    // 0x40010BB4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
        goto L_40010BE8;
    // 0x40010BB4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_40010BB8:
    // 0x40010BB8: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x40010BBC: jal         0x40000CA0
    // 0x40010BC0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    ovl_actor_main_CA0(rdram, ctx);
        goto after_3;
    // 0x40010BC0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_3:
    // 0x40010BC4: b           L_40010BE8
    // 0x40010BC8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
        goto L_40010BE8;
    // 0x40010BC8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_40010BCC:
    // 0x40010BCC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x40010BD0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x40010BD4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x40010BD8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40010BDC: jal         0x40008D20
    // 0x40010BE0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D20(rdram, ctx);
        goto after_4;
    // 0x40010BE0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_4:
    // 0x40010BE4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_40010BE8:
    // 0x40010BE8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x40010BEC: slti        $at, $t0, 0xF
    ctx->r1 = SIGNED(ctx->r8) < 0XF ? 1 : 0;
    // 0x40010BF0: bne         $at, $zero, L_40010C04
    if (ctx->r1 != 0) {
        // 0x40010BF4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_40010C04;
    }
    // 0x40010BF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40010BF8: jal         0x40010A44
    // 0x40010BFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_10A44(rdram, ctx);
        goto after_5;
    // 0x40010BFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x40010C00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40010C04:
    // 0x40010C04: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x40010C08: jr          $ra
    // 0x40010C0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x40010C0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_10C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010C10: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x40010C14: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x40010C18: bne         $a1, $at, L_40010C24
    if (ctx->r5 != ctx->r1) {
        // 0x40010C1C: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_40010C24;
    }
    // 0x40010C1C: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x40010C20: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_40010C24:
    // 0x40010C24: jr          $ra
    // 0x40010C28: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x40010C28: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_10C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010C2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40010C30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40010C34: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x40010C38: lw          $t6, 0x314($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X314);
    // 0x40010C3C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40010C40: bne         $t6, $zero, L_40010C4C
    if (ctx->r14 != 0) {
        // 0x40010C44: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_40010C4C;
    }
    // 0x40010C44: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x40010C48: sw          $t7, 0x314($a0)
    MEM_W(0X314, ctx->r4) = ctx->r15;
L_40010C4C:
    // 0x40010C4C: jal         0x400092D4
    // 0x40010C50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_92D4(rdram, ctx);
        goto after_0;
    // 0x40010C50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x40010C54: jal         0x40004120
    // 0x40010C58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_4120(rdram, ctx);
        goto after_1;
    // 0x40010C58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x40010C5C: jal         0x40010310
    // 0x40010C60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_10310(rdram, ctx);
        goto after_2;
    // 0x40010C60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x40010C64: lw          $t8, 0x90($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X90);
    // 0x40010C68: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x40010C6C: ori         $t9, $t8, 0x20
    ctx->r25 = ctx->r24 | 0X20;
    // 0x40010C70: sw          $t9, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r25;
    // 0x40010C74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40010C78: jal         0x4000947C
    // 0x40010C7C: swc1        $f4, 0x300($s0)
    MEM_W(0X300, ctx->r16) = ctx->f4.u32l;
    ovl_actor_main_947C(rdram, ctx);
        goto after_3;
    // 0x40010C7C: swc1        $f4, 0x300($s0)
    MEM_W(0X300, ctx->r16) = ctx->f4.u32l;
    after_3:
    // 0x40010C80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40010C84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x40010C88: jr          $ra
    // 0x40010C8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x40010C8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_actor_main_10C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010C90: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x40010C94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x40010C98: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40010C9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40010CA0: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x40010CA4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x40010CA8: jal         0x400006C4
    // 0x40010CAC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40010CAC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x40010CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40010CB4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x40010CB8: jal         0x40001258
    // 0x40010CBC: addiu       $a2, $s0, 0x304
    ctx->r6 = ADD32(ctx->r16, 0X304);
    ovl_actor_main_1258(rdram, ctx);
        goto after_1;
    // 0x40010CBC: addiu       $a2, $s0, 0x304
    ctx->r6 = ADD32(ctx->r16, 0X304);
    after_1:
    // 0x40010CC0: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40010CC4: lwc1        $f4, -0x146C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X146C);
    // 0x40010CC8: lwc1        $f0, 0x308($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X308);
    // 0x40010CCC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x40010CD0: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x40010CD4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x40010CD8: bc1f        L_40010CF4
    if (!c1cs) {
        // 0x40010CDC: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_40010CF4;
    }
    // 0x40010CDC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x40010CE0: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x40010CE4: nop

    // 0x40010CE8: swc1        $f6, 0x308($s0)
    MEM_W(0X308, ctx->r16) = ctx->f6.u32l;
    // 0x40010CEC: lwc1        $f0, 0x308($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X308);
    // 0x40010CF0: nop

L_40010CF4:
    // 0x40010CF4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x40010CF8: swc1        $f0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f0.u32l;
    // 0x40010CFC: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
    // 0x40010D00: jal         0x40001DD4
    // 0x40010D04: add.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f10.fl;
    ovl_actor_main_1DD4(rdram, ctx);
        goto after_2;
    // 0x40010D04: add.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f10.fl;
    after_2:
    // 0x40010D08: swc1        $f0, 0x308($s0)
    MEM_W(0X308, ctx->r16) = ctx->f0.u32l;
    // 0x40010D0C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x40010D10: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x40010D14: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x40010D18: jal         0x400006C4
    // 0x40010D1C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_3;
    // 0x40010D1C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x40010D20: lwc1        $f12, 0x308($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X308);
    // 0x40010D24: jal         0x40001E0C
    // 0x40010D28: nop

    ovl_actor_main_1E0C(rdram, ctx);
        goto after_4;
    // 0x40010D28: nop

    after_4:
    // 0x40010D2C: jal         0x40001DD4
    // 0x40010D30: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_actor_main_1DD4(rdram, ctx);
        goto after_5;
    // 0x40010D30: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_5:
    // 0x40010D34: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
    // 0x40010D38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40010D3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x40010D40: jr          $ra
    // 0x40010D44: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x40010D44: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_actor_main_10D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010D48: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40010D4C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40010D50: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x40010D54: addiu       $t6, $zero, 0x83
    ctx->r14 = ADD32(0, 0X83);
    // 0x40010D58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40010D5C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x40010D60: jal         0x400063F0
    // 0x40010D64: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    ovl_actor_main_63F0(rdram, ctx);
        goto after_0;
    // 0x40010D64: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x40010D68: beq         $v0, $zero, L_40010E04
    if (ctx->r2 == 0) {
        // 0x40010D6C: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_40010E04;
    }
    // 0x40010D6C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x40010D70: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x40010D74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x40010D78: beq         $a0, $v1, L_40010D88
    if (ctx->r4 == ctx->r3) {
        // 0x40010D7C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_40010D88;
    }
    // 0x40010D7C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x40010D80: bne         $v1, $at, L_40010E04
    if (ctx->r3 != ctx->r1) {
        // 0x40010D84: nop
    
            goto L_40010E04;
    }
    // 0x40010D84: nop

L_40010D88:
    // 0x40010D88: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x40010D8C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x40010D90: bne         $a0, $v1, L_40010DB8
    if (ctx->r4 != ctx->r3) {
        // 0x40010D94: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_40010DB8;
    }
    // 0x40010D94: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x40010D98: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40010D9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40010DA0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40010DA4: lui         $a3, 0x4391
    ctx->r7 = S32(0X4391 << 16);
    // 0x40010DA8: jal         0x40009044
    // 0x40010DAC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_9044(rdram, ctx);
        goto after_1;
    // 0x40010DAC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x40010DB0: b           L_40010E20
    // 0x40010DB4: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
        goto L_40010E20;
    // 0x40010DB4: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
L_40010DB8:
    // 0x40010DB8: bne         $v1, $at, L_40010DE4
    if (ctx->r3 != ctx->r1) {
        // 0x40010DBC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40010DE4;
    }
    // 0x40010DBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40010DC0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40010DC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40010DC8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40010DCC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x40010DD0: lui         $a3, 0x42AA
    ctx->r7 = S32(0X42AA << 16);
    // 0x40010DD4: jal         0x40009044
    // 0x40010DD8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_9044(rdram, ctx);
        goto after_2;
    // 0x40010DD8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x40010DDC: b           L_40010E20
    // 0x40010DE0: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
        goto L_40010E20;
    // 0x40010DE0: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
L_40010DE4:
    // 0x40010DE4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40010DE8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x40010DEC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40010DF0: lui         $a3, 0x432A
    ctx->r7 = S32(0X432A << 16);
    // 0x40010DF4: jal         0x40009044
    // 0x40010DF8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_9044(rdram, ctx);
        goto after_3;
    // 0x40010DF8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x40010DFC: b           L_40010E20
    // 0x40010E00: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
        goto L_40010E20;
    // 0x40010E00: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
L_40010E04:
    // 0x40010E04: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40010E08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40010E0C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40010E10: lui         $a3, 0x432A
    ctx->r7 = S32(0X432A << 16);
    // 0x40010E14: jal         0x40009044
    // 0x40010E18: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_9044(rdram, ctx);
        goto after_4;
    // 0x40010E18: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x40010E1C: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
L_40010E20:
    // 0x40010E20: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x40010E24: bne         $t7, $at, L_40010E38
    if (ctx->r15 != ctx->r1) {
        // 0x40010E28: addiu       $t8, $zero, 0x239
        ctx->r24 = ADD32(0, 0X239);
            goto L_40010E38;
    }
    // 0x40010E28: addiu       $t8, $zero, 0x239
    ctx->r24 = ADD32(0, 0X239);
    // 0x40010E2C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x40010E30: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x40010E34: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
L_40010E38:
    // 0x40010E38: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x40010E3C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x40010E40: jal         0x4000115C
    // 0x40010E44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_5;
    // 0x40010E44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x40010E48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40010E4C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x40010E50: jal         0x40000F8C
    // 0x40010E54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_F8C(rdram, ctx);
        goto after_6;
    // 0x40010E54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x40010E58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40010E5C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x40010E60: jr          $ra
    // 0x40010E64: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x40010E64: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_actor_main_10E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010E68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40010E6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40010E70: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x40010E74: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x40010E78: bne         $t6, $at, L_40010EBC
    if (ctx->r14 != ctx->r1) {
        // 0x40010E7C: addiu       $at, $zero, 0x7000
        ctx->r1 = ADD32(0, 0X7000);
            goto L_40010EBC;
    }
    // 0x40010E7C: addiu       $at, $zero, 0x7000
    ctx->r1 = ADD32(0, 0X7000);
    // 0x40010E80: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x40010E84: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x40010E88: beq         $v0, $at, L_40010EA0
    if (ctx->r2 == ctx->r1) {
        // 0x40010E8C: addiu       $at, $zero, 0x2F
        ctx->r1 = ADD32(0, 0X2F);
            goto L_40010EA0;
    }
    // 0x40010E8C: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x40010E90: beq         $v0, $at, L_40010EA0
    if (ctx->r2 == ctx->r1) {
        // 0x40010E94: addiu       $at, $zero, 0x25
        ctx->r1 = ADD32(0, 0X25);
            goto L_40010EA0;
    }
    // 0x40010E94: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x40010E98: bne         $v0, $at, L_40010EBC
    if (ctx->r2 != ctx->r1) {
        // 0x40010E9C: addiu       $at, $zero, 0x7000
        ctx->r1 = ADD32(0, 0X7000);
            goto L_40010EBC;
    }
    // 0x40010E9C: addiu       $at, $zero, 0x7000
    ctx->r1 = ADD32(0, 0X7000);
L_40010EA0:
    // 0x40010EA0: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
    // 0x40010EA4: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    // 0x40010EA8: jal         0x40001A8C
    // 0x40010EAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_0;
    // 0x40010EAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x40010EB0: b           L_40010EEC
    // 0x40010EB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40010EEC;
    // 0x40010EB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40010EB8: addiu       $at, $zero, 0x7000
    ctx->r1 = ADD32(0, 0X7000);
L_40010EBC:
    // 0x40010EBC: beq         $a1, $at, L_40010ED4
    if (ctx->r5 == ctx->r1) {
        // 0x40010EC0: nop
    
            goto L_40010ED4;
    }
    // 0x40010EC0: nop

    // 0x40010EC4: jal         0x40010D48
    // 0x40010EC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_10D48(rdram, ctx);
        goto after_1;
    // 0x40010EC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x40010ECC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40010ED0: nop

L_40010ED4:
    // 0x40010ED4: jal         0x40010C2C
    // 0x40010ED8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_10C2C(rdram, ctx);
        goto after_2;
    // 0x40010ED8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x40010EDC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40010EE0: jal         0x40001A8C
    // 0x40010EE4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_3;
    // 0x40010EE4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_3:
    // 0x40010EE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40010EEC:
    // 0x40010EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40010EF0: jr          $ra
    // 0x40010EF4: nop

    return;
    // 0x40010EF4: nop

;}
RECOMP_FUNC void ovl_actor_main_10EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010EF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40010EFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40010F00: jal         0x400090A0
    // 0x40010F04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_90A0(rdram, ctx);
        goto after_0;
    // 0x40010F04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x40010F08: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40010F0C: jal         0x40000F50
    // 0x40010F10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_F50(rdram, ctx);
        goto after_1;
    // 0x40010F10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x40010F14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40010F18: jal         0x40001074
    // 0x40010F1C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    ovl_actor_main_1074(rdram, ctx);
        goto after_2;
    // 0x40010F1C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x40010F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40010F24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40010F28: jr          $ra
    // 0x40010F2C: nop

    return;
    // 0x40010F2C: nop

;}
RECOMP_FUNC void ovl_actor_main_10F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010F30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40010F34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40010F38: jal         0x40010EF8
    // 0x40010F3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_10EF8(rdram, ctx);
        goto after_0;
    // 0x40010F3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x40010F40: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40010F44: jal         0x4000946C
    // 0x40010F48: nop

    ovl_actor_main_946C(rdram, ctx);
        goto after_1;
    // 0x40010F48: nop

    after_1:
    // 0x40010F4C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x40010F50: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x40010F54: lw          $t6, 0x90($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X90);
    // 0x40010F58: lw          $a0, 0x1C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1C);
    // 0x40010F5C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x40010F60: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x40010F64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x40010F68: jal         0x40000CA0
    // 0x40010F6C: sw          $t7, 0x90($a3)
    MEM_W(0X90, ctx->r7) = ctx->r15;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_2;
    // 0x40010F6C: sw          $t7, 0x90($a3)
    MEM_W(0X90, ctx->r7) = ctx->r15;
    after_2:
    // 0x40010F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40010F74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40010F78: jr          $ra
    // 0x40010F7C: nop

    return;
    // 0x40010F7C: nop

;}
RECOMP_FUNC void ovl_actor_main_10F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010F80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40010F84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40010F88: jal         0x40010C10
    // 0x40010F8C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    ovl_actor_main_10C10(rdram, ctx);
        goto after_0;
    // 0x40010F8C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x40010F90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40010F94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40010F98: jr          $ra
    // 0x40010F9C: nop

    return;
    // 0x40010F9C: nop

;}
RECOMP_FUNC void ovl_actor_main_10FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010FA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40010FA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40010FA8: jal         0x40010B24
    // 0x40010FAC: addiu       $a2, $zero, 0xF0
    ctx->r6 = ADD32(0, 0XF0);
    ovl_actor_main_10B24(rdram, ctx);
        goto after_0;
    // 0x40010FAC: addiu       $a2, $zero, 0xF0
    ctx->r6 = ADD32(0, 0XF0);
    after_0:
    // 0x40010FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40010FB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40010FB8: jr          $ra
    // 0x40010FBC: nop

    return;
    // 0x40010FBC: nop

;}
RECOMP_FUNC void ovl_actor_main_10FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010FC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40010FC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40010FC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x40010FCC: jal         0x40010E68
    // 0x40010FD0: addiu       $a1, $zero, 0x3000
    ctx->r5 = ADD32(0, 0X3000);
    ovl_actor_main_10E68(rdram, ctx);
        goto after_0;
    // 0x40010FD0: addiu       $a1, $zero, 0x3000
    ctx->r5 = ADD32(0, 0X3000);
    after_0:
    // 0x40010FD4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x40010FD8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x40010FDC: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    // 0x40010FE0: jal         0x40000CA0
    // 0x40010FE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_1;
    // 0x40010FE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x40010FE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40010FEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40010FF0: jr          $ra
    // 0x40010FF4: nop

    return;
    // 0x40010FF4: nop

;}
RECOMP_FUNC void ovl_actor_main_10FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010FF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40010FFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40011000: jal         0x40010F30
    // 0x40011004: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_10F30(rdram, ctx);
        goto after_0;
    // 0x40011004: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x40011008: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4001100C: jal         0x40001A8C
    // 0x40011010: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x40011010: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_1:
    // 0x40011014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40011018: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001101C: jr          $ra
    // 0x40011020: nop

    return;
    // 0x40011020: nop

;}
RECOMP_FUNC void ovl_actor_main_11024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40011024: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40011028: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001102C: jal         0x40010B24
    // 0x40011030: addiu       $a2, $zero, 0xB4
    ctx->r6 = ADD32(0, 0XB4);
    ovl_actor_main_10B24(rdram, ctx);
        goto after_0;
    // 0x40011030: addiu       $a2, $zero, 0xB4
    ctx->r6 = ADD32(0, 0XB4);
    after_0:
    // 0x40011034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40011038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001103C: jr          $ra
    // 0x40011040: nop

    return;
    // 0x40011040: nop

;}
RECOMP_FUNC void ovl_actor_main_11044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40011044: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40011048: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001104C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x40011050: jal         0x40010E68
    // 0x40011054: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    ovl_actor_main_10E68(rdram, ctx);
        goto after_0;
    // 0x40011054: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    after_0:
    // 0x40011058: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x4001105C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x40011060: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    // 0x40011064: jal         0x40000CA0
    // 0x40011068: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_1;
    // 0x40011068: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x4001106C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40011070: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40011074: jr          $ra
    // 0x40011078: nop

    return;
    // 0x40011078: nop

;}
RECOMP_FUNC void ovl_actor_main_1107C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001107C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40011080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40011084: jal         0x40010F30
    // 0x40011088: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_10F30(rdram, ctx);
        goto after_0;
    // 0x40011088: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4001108C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40011090: jal         0x40001A8C
    // 0x40011094: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x40011094: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_1:
    // 0x40011098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001109C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x400110A0: jr          $ra
    // 0x400110A4: nop

    return;
    // 0x400110A4: nop

;}
RECOMP_FUNC void ovl_actor_main_110A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400110A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x400110AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400110B0: jal         0x40010B24
    // 0x400110B4: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    ovl_actor_main_10B24(rdram, ctx);
        goto after_0;
    // 0x400110B4: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_0:
    // 0x400110B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400110BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x400110C0: jr          $ra
    // 0x400110C4: nop

    return;
    // 0x400110C4: nop

;}
RECOMP_FUNC void ovl_actor_main_110C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400110C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x400110CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400110D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x400110D4: jal         0x40010E68
    // 0x400110D8: addiu       $a1, $zero, 0x5000
    ctx->r5 = ADD32(0, 0X5000);
    ovl_actor_main_10E68(rdram, ctx);
        goto after_0;
    // 0x400110D8: addiu       $a1, $zero, 0x5000
    ctx->r5 = ADD32(0, 0X5000);
    after_0:
    // 0x400110DC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x400110E0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x400110E4: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    // 0x400110E8: jal         0x40000CA0
    // 0x400110EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_1;
    // 0x400110EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x400110F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400110F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x400110F8: jr          $ra
    // 0x400110FC: nop

    return;
    // 0x400110FC: nop

;}
RECOMP_FUNC void ovl_actor_main_11100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40011100: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40011104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40011108: jal         0x40010F30
    // 0x4001110C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_10F30(rdram, ctx);
        goto after_0;
    // 0x4001110C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x40011110: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40011114: jal         0x40001A8C
    // 0x40011118: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x40011118: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_1:
    // 0x4001111C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40011120: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40011124: jr          $ra
    // 0x40011128: nop

    return;
    // 0x40011128: nop

;}
RECOMP_FUNC void ovl_actor_main_1112C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001112C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40011130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40011134: jal         0x40010B24
    // 0x40011138: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    ovl_actor_main_10B24(rdram, ctx);
        goto after_0;
    // 0x40011138: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_0:
    // 0x4001113C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40011140: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40011144: jr          $ra
    // 0x40011148: nop

    return;
    // 0x40011148: nop

;}
RECOMP_FUNC void ovl_actor_main_1114C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001114C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40011150: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40011154: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x40011158: jal         0x40010E68
    // 0x4001115C: addiu       $a1, $zero, 0x6000
    ctx->r5 = ADD32(0, 0X6000);
    ovl_actor_main_10E68(rdram, ctx);
        goto after_0;
    // 0x4001115C: addiu       $a1, $zero, 0x6000
    ctx->r5 = ADD32(0, 0X6000);
    after_0:
    // 0x40011160: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x40011164: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x40011168: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    // 0x4001116C: jal         0x40000CA0
    // 0x40011170: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_1;
    // 0x40011170: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x40011174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40011178: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001117C: jr          $ra
    // 0x40011180: nop

    return;
    // 0x40011180: nop

;}
RECOMP_FUNC void ovl_actor_main_11184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40011184: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40011188: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001118C: jal         0x40010F30
    // 0x40011190: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_10F30(rdram, ctx);
        goto after_0;
    // 0x40011190: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x40011194: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40011198: jal         0x40001A8C
    // 0x4001119C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x4001119C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_1:
    // 0x400111A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400111A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x400111A8: jr          $ra
    // 0x400111AC: nop

    return;
    // 0x400111AC: nop

;}
RECOMP_FUNC void ovl_actor_main_111B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400111B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x400111B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400111B8: beq         $a1, $at, L_400111D4
    if (ctx->r5 == ctx->r1) {
        // 0x400111BC: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_400111D4;
    }
    // 0x400111BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400111C0: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x400111C4: beq         $a1, $at, L_40011200
    if (ctx->r5 == ctx->r1) {
        // 0x400111C8: nop
    
            goto L_40011200;
    }
    // 0x400111C8: nop

    // 0x400111CC: b           L_4001120C
    // 0x400111D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4001120C;
    // 0x400111D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400111D4:
    // 0x400111D4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x400111D8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400111DC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400111E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x400111E4: jal         0x40008D20
    // 0x400111E8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x400111E8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x400111EC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x400111F0: jal         0x40001A8C
    // 0x400111F4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x400111F4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_1:
    // 0x400111F8: b           L_4001120C
    // 0x400111FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4001120C;
    // 0x400111FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40011200:
    // 0x40011200: jal         0x40010A10
    // 0x40011204: nop

    ovl_actor_main_10A10(rdram, ctx);
        goto after_2;
    // 0x40011204: nop

    after_2:
    // 0x40011208: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4001120C:
    // 0x4001120C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40011210: jr          $ra
    // 0x40011214: nop

    return;
    // 0x40011214: nop

;}
RECOMP_FUNC void ovl_actor_main_11218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40011218: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001121C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40011220: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x40011224: jal         0x40010E68
    // 0x40011228: addiu       $a1, $zero, 0x7000
    ctx->r5 = ADD32(0, 0X7000);
    ovl_actor_main_10E68(rdram, ctx);
        goto after_0;
    // 0x40011228: addiu       $a1, $zero, 0x7000
    ctx->r5 = ADD32(0, 0X7000);
    after_0:
    // 0x4001122C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x40011230: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x40011234: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    // 0x40011238: jal         0x40000CA0
    // 0x4001123C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_1;
    // 0x4001123C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x40011240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40011244: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40011248: jr          $ra
    // 0x4001124C: nop

    return;
    // 0x4001124C: nop

;}
RECOMP_FUNC void ovl_actor_main_11250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40011250: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40011254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40011258: jal         0x40010F30
    // 0x4001125C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_10F30(rdram, ctx);
        goto after_0;
    // 0x4001125C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x40011260: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x40011264: nop

    // 0x40011268: sw          $zero, 0x314($t6)
    MEM_W(0X314, ctx->r14) = 0;
    // 0x4001126C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40011270: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40011274: jr          $ra
    // 0x40011278: nop

    return;
    // 0x40011278: nop

;}
RECOMP_FUNC void ovl_actor_main_1127C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001127C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40011280: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40011284: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x40011288: lw          $a3, 0xC8($a0)
    ctx->r7 = MEM_W(ctx->r4, 0XC8);
    // 0x4001128C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x40011290: addiu       $t6, $a3, -0x15
    ctx->r14 = ADD32(ctx->r7, -0X15);
    // 0x40011294: sltiu       $at, $t6, 0xA
    ctx->r1 = ctx->r14 < 0XA ? 1 : 0;
    // 0x40011298: beq         $at, $zero, L_400113C8
    if (ctx->r1 == 0) {
        // 0x4001129C: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_400113C8;
    }
    // 0x4001129C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x400112A0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x400112A4: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400112A8: addu        $at, $at, $t6
    gpr jr_addend_400112B4 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x400112AC: lw          $t6, -0x1468($at)
    ctx->r14 = ADD32(ctx->r1, -0X1468);
    // 0x400112B0: nop

    // 0x400112B4: jr          $t6
    // 0x400112B8: nop

    switch (jr_addend_400112B4 >> 2) {
        case 0: goto L_400112C4; break;
        case 1: goto L_400112BC; break;
        case 2: goto L_400113C8; break;
        case 3: goto L_400113C8; break;
        case 4: goto L_400113C8; break;
        case 5: goto L_40011384; break;
        case 6: goto L_40011384; break;
        case 7: goto L_40011384; break;
        case 8: goto L_40011384; break;
        case 9: goto L_40011384; break;
        default: switch_error(__func__, 0x400112B4, 0x4001EB98);
    }
    // 0x400112B8: nop

L_400112BC:
    // 0x400112BC: b           L_400113C8
    // 0x400112C0: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
        goto L_400113C8;
    // 0x400112C0: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
L_400112C4:
    // 0x400112C4: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x400112C8: bne         $a1, $at, L_400112DC
    if (ctx->r5 != ctx->r1) {
        // 0x400112CC: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_400112DC;
    }
    // 0x400112CC: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x400112D0: b           L_40011338
    // 0x400112D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_40011338;
    // 0x400112D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x400112D8: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
L_400112DC:
    // 0x400112DC: bne         $a1, $at, L_400112F0
    if (ctx->r5 != ctx->r1) {
        // 0x400112E0: addiu       $at, $zero, 0x1C
        ctx->r1 = ADD32(0, 0X1C);
            goto L_400112F0;
    }
    // 0x400112E0: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x400112E4: b           L_40011334
    // 0x400112E8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_40011334;
    // 0x400112E8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x400112EC: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
L_400112F0:
    // 0x400112F0: bne         $a1, $at, L_40011304
    if (ctx->r5 != ctx->r1) {
        // 0x400112F4: addiu       $at, $zero, 0x1D
        ctx->r1 = ADD32(0, 0X1D);
            goto L_40011304;
    }
    // 0x400112F4: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x400112F8: b           L_40011330
    // 0x400112FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_40011330;
    // 0x400112FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x40011300: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
L_40011304:
    // 0x40011304: bne         $a1, $at, L_40011318
    if (ctx->r5 != ctx->r1) {
        // 0x40011308: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_40011318;
    }
    // 0x40011308: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x4001130C: b           L_4001132C
    // 0x40011310: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_4001132C;
    // 0x40011310: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x40011314: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
L_40011318:
    // 0x40011318: bne         $a1, $at, L_40011328
    if (ctx->r5 != ctx->r1) {
        // 0x4001131C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_40011328;
    }
    // 0x4001131C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x40011320: b           L_40011328
    // 0x40011324: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_40011328;
    // 0x40011324: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_40011328:
    // 0x40011328: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_4001132C:
    // 0x4001132C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_40011330:
    // 0x40011330: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_40011334:
    // 0x40011334: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_40011338:
    // 0x40011338: beq         $v0, $zero, L_400113C8
    if (ctx->r2 == 0) {
        // 0x4001133C: nop
    
            goto L_400113C8;
    }
    // 0x4001133C: nop

    // 0x40011340: lw          $v1, 0xCC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XCC);
    // 0x40011344: nop

    // 0x40011348: bne         $v1, $zero, L_4001136C
    if (ctx->r3 != 0) {
        // 0x4001134C: slti        $at, $v1, 0x1F4
        ctx->r1 = SIGNED(ctx->r3) < 0X1F4 ? 1 : 0;
            goto L_4001136C;
    }
    // 0x4001134C: slti        $at, $v1, 0x1F4
    ctx->r1 = SIGNED(ctx->r3) < 0X1F4 ? 1 : 0;
    // 0x40011350: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x40011354: nop

    // 0x40011358: andi        $t7, $v0, 0x10
    ctx->r15 = ctx->r2 & 0X10;
    // 0x4001135C: beq         $t7, $zero, L_4001136C
    if (ctx->r15 == 0) {
        // 0x40011360: andi        $t8, $v0, 0x40
        ctx->r24 = ctx->r2 & 0X40;
            goto L_4001136C;
    }
    // 0x40011360: andi        $t8, $v0, 0x40
    ctx->r24 = ctx->r2 & 0X40;
    // 0x40011364: bne         $t8, $zero, L_40011374
    if (ctx->r24 != 0) {
        // 0x40011368: nop
    
            goto L_40011374;
    }
    // 0x40011368: nop

L_4001136C:
    // 0x4001136C: bne         $at, $zero, L_4001137C
    if (ctx->r1 != 0) {
        // 0x40011370: nop
    
            goto L_4001137C;
    }
    // 0x40011370: nop

L_40011374:
    // 0x40011374: b           L_400113C8
    // 0x40011378: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
        goto L_400113C8;
    // 0x40011378: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_4001137C:
    // 0x4001137C: b           L_400113C8
    // 0x40011380: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
        goto L_400113C8;
    // 0x40011380: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
L_40011384:
    // 0x40011384: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x40011388: beq         $a1, $at, L_400113B0
    if (ctx->r5 == ctx->r1) {
        // 0x4001138C: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_400113B0;
    }
    // 0x4001138C: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x40011390: beq         $a1, $at, L_400113B0
    if (ctx->r5 == ctx->r1) {
        // 0x40011394: addiu       $at, $zero, 0x1C
        ctx->r1 = ADD32(0, 0X1C);
            goto L_400113B0;
    }
    // 0x40011394: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x40011398: beq         $a1, $at, L_400113B0
    if (ctx->r5 == ctx->r1) {
        // 0x4001139C: addiu       $at, $zero, 0x1D
        ctx->r1 = ADD32(0, 0X1D);
            goto L_400113B0;
    }
    // 0x4001139C: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x400113A0: beq         $a1, $at, L_400113B0
    if (ctx->r5 == ctx->r1) {
        // 0x400113A4: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_400113B0;
    }
    // 0x400113A4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x400113A8: bne         $a1, $at, L_400113C8
    if (ctx->r5 != ctx->r1) {
        // 0x400113AC: nop
    
            goto L_400113C8;
    }
    // 0x400113AC: nop

L_400113B0:
    // 0x400113B0: lw          $t9, 0xCC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XCC);
    // 0x400113B4: nop

    // 0x400113B8: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x400113BC: beq         $at, $zero, L_400113C8
    if (ctx->r1 == 0) {
        // 0x400113C0: nop
    
            goto L_400113C8;
    }
    // 0x400113C0: nop

    // 0x400113C4: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
L_400113C8:
    // 0x400113C8: lw          $t1, 0x4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X4);
    // 0x400113CC: addiu       $t4, $a1, -0x13
    ctx->r12 = ADD32(ctx->r5, -0X13);
    // 0x400113D0: lw          $t2, 0x10($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X10);
    // 0x400113D4: sltiu       $at, $t4, 0xC
    ctx->r1 = ctx->r12 < 0XC ? 1 : 0;
    // 0x400113D8: andi        $t3, $t2, 0x400
    ctx->r11 = ctx->r10 & 0X400;
    // 0x400113DC: bne         $t3, $zero, L_40011494
    if (ctx->r11 != 0) {
        // 0x400113E0: sll         $t4, $t4, 2
        ctx->r12 = S32(ctx->r12 << 2);
            goto L_40011494;
    }
    // 0x400113E0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x400113E4: beq         $at, $zero, L_40011498
    if (ctx->r1 == 0) {
        // 0x400113E8: lui         $at, 0x4002
        ctx->r1 = S32(0X4002 << 16);
            goto L_40011498;
    }
    // 0x400113E8: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400113EC: addu        $at, $at, $t4
    gpr jr_addend_400113F8 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x400113F0: lw          $t4, -0x1440($at)
    ctx->r12 = ADD32(ctx->r1, -0X1440);
    // 0x400113F4: nop

    // 0x400113F8: jr          $t4
    // 0x400113FC: nop

    switch (jr_addend_400113F8 >> 2) {
        case 0: goto L_40011498; break;
        case 1: goto L_40011478; break;
        case 2: goto L_4001144C; break;
        case 3: goto L_40011498; break;
        case 4: goto L_40011498; break;
        case 5: goto L_40011498; break;
        case 6: goto L_40011498; break;
        case 7: goto L_40011400; break;
        case 8: goto L_40011400; break;
        case 9: goto L_40011400; break;
        case 10: goto L_40011400; break;
        case 11: goto L_40011400; break;
        default: switch_error(__func__, 0x400113F8, 0x4001EBC0);
    }
    // 0x400113FC: nop

L_40011400:
    // 0x40011400: lw          $a1, 0x318($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X318);
    // 0x40011404: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x40011408: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x4001140C: jal         0x4000587C
    // 0x40011410: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_587C(rdram, ctx);
        goto after_0;
    // 0x40011410: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x40011414: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40011418: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x4001141C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x40011420: bne         $v0, $zero, L_40011444
    if (ctx->r2 != 0) {
        // 0x40011424: nop
    
            goto L_40011444;
    }
    // 0x40011424: nop

    // 0x40011428: bne         $t0, $zero, L_4001149C
    if (ctx->r8 != 0) {
        // 0x4001142C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4001149C;
    }
    // 0x4001142C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40011430: lw          $t5, 0x90($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X90);
    // 0x40011434: nop

    // 0x40011438: andi        $t6, $t5, 0x50
    ctx->r14 = ctx->r13 & 0X50;
    // 0x4001143C: beq         $t6, $zero, L_4001149C
    if (ctx->r14 == 0) {
        // 0x40011440: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4001149C;
    }
    // 0x40011440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40011444:
    // 0x40011444: b           L_40011498
    // 0x40011448: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
        goto L_40011498;
    // 0x40011448: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
L_4001144C:
    // 0x4001144C: beq         $a1, $a3, L_40011470
    if (ctx->r5 == ctx->r7) {
        // 0x40011450: nop
    
            goto L_40011470;
    }
    // 0x40011450: nop

    // 0x40011454: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x40011458: nop

    // 0x4001145C: sll         $t7, $v0, 7
    ctx->r15 = S32(ctx->r2 << 7);
    // 0x40011460: bltz        $t7, L_40011498
    if (SIGNED(ctx->r15) < 0) {
        // 0x40011464: andi        $t8, $v0, 0x40
        ctx->r24 = ctx->r2 & 0X40;
            goto L_40011498;
    }
    // 0x40011464: andi        $t8, $v0, 0x40
    ctx->r24 = ctx->r2 & 0X40;
    // 0x40011468: beq         $t8, $zero, L_4001149C
    if (ctx->r24 == 0) {
        // 0x4001146C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4001149C;
    }
    // 0x4001146C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40011470:
    // 0x40011470: b           L_40011498
    // 0x40011474: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
        goto L_40011498;
    // 0x40011474: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
L_40011478:
    // 0x40011478: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x4001147C: beq         $a3, $at, L_4001148C
    if (ctx->r7 == ctx->r1) {
        // 0x40011480: addiu       $at, $zero, 0x16
        ctx->r1 = ADD32(0, 0X16);
            goto L_4001148C;
    }
    // 0x40011480: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x40011484: bne         $a3, $at, L_4001149C
    if (ctx->r7 != ctx->r1) {
        // 0x40011488: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4001149C;
    }
    // 0x40011488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001148C:
    // 0x4001148C: b           L_40011498
    // 0x40011490: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
        goto L_40011498;
    // 0x40011490: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
L_40011494:
    // 0x40011494: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
L_40011498:
    // 0x40011498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001149C:
    // 0x4001149C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x400114A0: jr          $ra
    // 0x400114A4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    return;
    // 0x400114A4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
;}
RECOMP_FUNC void ovl_actor_main_114A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400114A8: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x400114AC: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x400114B0: addiu       $t7, $t6, -0x2
    ctx->r15 = ADD32(ctx->r14, -0X2);
    // 0x400114B4: sltiu       $at, $t7, 0xC
    ctx->r1 = ctx->r15 < 0XC ? 1 : 0;
    // 0x400114B8: beq         $at, $zero, L_400114D8
    if (ctx->r1 == 0) {
        // 0x400114BC: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_400114D8;
    }
    // 0x400114BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x400114C0: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400114C4: addu        $at, $at, $t7
    gpr jr_addend_400114D0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x400114C8: lw          $t7, -0x1410($at)
    ctx->r15 = ADD32(ctx->r1, -0X1410);
    // 0x400114CC: nop

    // 0x400114D0: jr          $t7
    // 0x400114D4: nop

    switch (jr_addend_400114D0 >> 2) {
        case 0: goto L_400114D8; break;
        case 1: goto L_400114D8; break;
        case 2: goto L_400114D8; break;
        case 3: goto L_400114D8; break;
        case 4: goto L_400114D8; break;
        case 5: goto L_400114D8; break;
        case 6: goto L_400114D8; break;
        case 7: goto L_400114D8; break;
        case 8: goto L_400114D8; break;
        case 9: goto L_400114D8; break;
        case 10: goto L_400114D8; break;
        case 11: goto L_400114D8; break;
        default: switch_error(__func__, 0x400114D0, 0x4001EBF0);
    }
    // 0x400114D4: nop

L_400114D8:
    // 0x400114D8: addiu       $t8, $a1, -0x1
    ctx->r24 = ADD32(ctx->r5, -0X1);
    // 0x400114DC: sltiu       $at, $t8, 0x52
    ctx->r1 = ctx->r24 < 0X52 ? 1 : 0;
    // 0x400114E0: beq         $at, $zero, L_4001170C
    if (ctx->r1 == 0) {
        // 0x400114E4: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_4001170C;
    }
    // 0x400114E4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x400114E8: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400114EC: addu        $at, $at, $t8
    gpr jr_addend_400114F8 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x400114F0: lw          $t8, -0x13E0($at)
    ctx->r24 = ADD32(ctx->r1, -0X13E0);
    // 0x400114F4: nop

    // 0x400114F8: jr          $t8
    // 0x400114FC: nop

    switch (jr_addend_400114F8 >> 2) {
        case 0: goto L_40011500; break;
        case 1: goto L_40011508; break;
        case 2: goto L_40011510; break;
        case 3: goto L_40011518; break;
        case 4: goto L_40011520; break;
        case 5: goto L_40011528; break;
        case 6: goto L_4001170C; break;
        case 7: goto L_4001170C; break;
        case 8: goto L_4001170C; break;
        case 9: goto L_40011530; break;
        case 10: goto L_40011538; break;
        case 11: goto L_40011540; break;
        case 12: goto L_4001170C; break;
        case 13: goto L_4001170C; break;
        case 14: goto L_4001170C; break;
        case 15: goto L_4001170C; break;
        case 16: goto L_4001170C; break;
        case 17: goto L_400115A8; break;
        case 18: goto L_400115B0; break;
        case 19: goto L_400115B8; break;
        case 20: goto L_400115C0; break;
        case 21: goto L_4001170C; break;
        case 22: goto L_40011570; break;
        case 23: goto L_40011578; break;
        case 24: goto L_40011580; break;
        case 25: goto L_40011588; break;
        case 26: goto L_4001170C; break;
        case 27: goto L_40011548; break;
        case 28: goto L_40011568; break;
        case 29: goto L_40011550; break;
        case 30: goto L_40011558; break;
        case 31: goto L_40011560; break;
        case 32: goto L_4001170C; break;
        case 33: goto L_4001170C; break;
        case 34: goto L_4001170C; break;
        case 35: goto L_4001170C; break;
        case 36: goto L_40011590; break;
        case 37: goto L_40011598; break;
        case 38: goto L_400115A0; break;
        case 39: goto L_4001170C; break;
        case 40: goto L_4001170C; break;
        case 41: goto L_400115C8; break;
        case 42: goto L_400115D0; break;
        case 43: goto L_400115D8; break;
        case 44: goto L_400115E0; break;
        case 45: goto L_400115E8; break;
        case 46: goto L_400115F0; break;
        case 47: goto L_400115F8; break;
        case 48: goto L_40011600; break;
        case 49: goto L_40011608; break;
        case 50: goto L_40011610; break;
        case 51: goto L_40011618; break;
        case 52: goto L_40011620; break;
        case 53: goto L_40011628; break;
        case 54: goto L_40011630; break;
        case 55: goto L_40011638; break;
        case 56: goto L_40011640; break;
        case 57: goto L_40011648; break;
        case 58: goto L_40011650; break;
        case 59: goto L_40011658; break;
        case 60: goto L_40011660; break;
        case 61: goto L_40011668; break;
        case 62: goto L_40011670; break;
        case 63: goto L_40011678; break;
        case 64: goto L_40011680; break;
        case 65: goto L_40011688; break;
        case 66: goto L_40011690; break;
        case 67: goto L_40011698; break;
        case 68: goto L_400116A0; break;
        case 69: goto L_400116A8; break;
        case 70: goto L_400116B0; break;
        case 71: goto L_400116B8; break;
        case 72: goto L_400116C0; break;
        case 73: goto L_400116C8; break;
        case 74: goto L_400116D0; break;
        case 75: goto L_400116D8; break;
        case 76: goto L_400116E0; break;
        case 77: goto L_400116E8; break;
        case 78: goto L_400116F0; break;
        case 79: goto L_400116F8; break;
        case 80: goto L_40011700; break;
        case 81: goto L_40011708; break;
        default: switch_error(__func__, 0x400114F8, 0x4001EC20);
    }
    // 0x400114FC: nop

L_40011500:
    // 0x40011500: jr          $ra
    // 0x40011504: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x40011504: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_40011508:
    // 0x40011508: jr          $ra
    // 0x4001150C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x4001150C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_40011510:
    // 0x40011510: jr          $ra
    // 0x40011514: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x40011514: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_40011518:
    // 0x40011518: jr          $ra
    // 0x4001151C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x4001151C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_40011520:
    // 0x40011520: jr          $ra
    // 0x40011524: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x40011524: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_40011528:
    // 0x40011528: jr          $ra
    // 0x4001152C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    return;
    // 0x4001152C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_40011530:
    // 0x40011530: jr          $ra
    // 0x40011534: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    return;
    // 0x40011534: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_40011538:
    // 0x40011538: jr          $ra
    // 0x4001153C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    // 0x4001153C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_40011540:
    // 0x40011540: jr          $ra
    // 0x40011544: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    return;
    // 0x40011544: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_40011548:
    // 0x40011548: jr          $ra
    // 0x4001154C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    return;
    // 0x4001154C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_40011550:
    // 0x40011550: jr          $ra
    // 0x40011554: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    return;
    // 0x40011554: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_40011558:
    // 0x40011558: jr          $ra
    // 0x4001155C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    return;
    // 0x4001155C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_40011560:
    // 0x40011560: jr          $ra
    // 0x40011564: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    return;
    // 0x40011564: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_40011568:
    // 0x40011568: jr          $ra
    // 0x4001156C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    return;
    // 0x4001156C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
L_40011570:
    // 0x40011570: jr          $ra
    // 0x40011574: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    return;
    // 0x40011574: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
L_40011578:
    // 0x40011578: jr          $ra
    // 0x4001157C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    return;
    // 0x4001157C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_40011580:
    // 0x40011580: jr          $ra
    // 0x40011584: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    return;
    // 0x40011584: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
L_40011588:
    // 0x40011588: jr          $ra
    // 0x4001158C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    return;
    // 0x4001158C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
L_40011590:
    // 0x40011590: jr          $ra
    // 0x40011594: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    return;
    // 0x40011594: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
L_40011598:
    // 0x40011598: jr          $ra
    // 0x4001159C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    return;
    // 0x4001159C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_400115A0:
    // 0x400115A0: jr          $ra
    // 0x400115A4: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    return;
    // 0x400115A4: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
L_400115A8:
    // 0x400115A8: jr          $ra
    // 0x400115AC: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    return;
    // 0x400115AC: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
L_400115B0:
    // 0x400115B0: jr          $ra
    // 0x400115B4: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    return;
    // 0x400115B4: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
L_400115B8:
    // 0x400115B8: jr          $ra
    // 0x400115BC: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    return;
    // 0x400115BC: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
L_400115C0:
    // 0x400115C0: jr          $ra
    // 0x400115C4: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    return;
    // 0x400115C4: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
L_400115C8:
    // 0x400115C8: jr          $ra
    // 0x400115CC: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    return;
    // 0x400115CC: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
L_400115D0:
    // 0x400115D0: jr          $ra
    // 0x400115D4: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    return;
    // 0x400115D4: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
L_400115D8:
    // 0x400115D8: jr          $ra
    // 0x400115DC: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    return;
    // 0x400115DC: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
L_400115E0:
    // 0x400115E0: jr          $ra
    // 0x400115E4: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    return;
    // 0x400115E4: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
L_400115E8:
    // 0x400115E8: jr          $ra
    // 0x400115EC: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    return;
    // 0x400115EC: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
L_400115F0:
    // 0x400115F0: jr          $ra
    // 0x400115F4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    return;
    // 0x400115F4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_400115F8:
    // 0x400115F8: jr          $ra
    // 0x400115FC: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    return;
    // 0x400115FC: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
L_40011600:
    // 0x40011600: jr          $ra
    // 0x40011604: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    return;
    // 0x40011604: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
L_40011608:
    // 0x40011608: jr          $ra
    // 0x4001160C: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    return;
    // 0x4001160C: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
L_40011610:
    // 0x40011610: jr          $ra
    // 0x40011614: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
    return;
    // 0x40011614: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
L_40011618:
    // 0x40011618: jr          $ra
    // 0x4001161C: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
    return;
    // 0x4001161C: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
L_40011620:
    // 0x40011620: jr          $ra
    // 0x40011624: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    return;
    // 0x40011624: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
L_40011628:
    // 0x40011628: jr          $ra
    // 0x4001162C: addiu       $v0, $zero, 0x27
    ctx->r2 = ADD32(0, 0X27);
    return;
    // 0x4001162C: addiu       $v0, $zero, 0x27
    ctx->r2 = ADD32(0, 0X27);
L_40011630:
    // 0x40011630: jr          $ra
    // 0x40011634: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    return;
    // 0x40011634: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
L_40011638:
    // 0x40011638: jr          $ra
    // 0x4001163C: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
    return;
    // 0x4001163C: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
L_40011640:
    // 0x40011640: jr          $ra
    // 0x40011644: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    return;
    // 0x40011644: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
L_40011648:
    // 0x40011648: jr          $ra
    // 0x4001164C: addiu       $v0, $zero, 0x2B
    ctx->r2 = ADD32(0, 0X2B);
    return;
    // 0x4001164C: addiu       $v0, $zero, 0x2B
    ctx->r2 = ADD32(0, 0X2B);
L_40011650:
    // 0x40011650: jr          $ra
    // 0x40011654: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    return;
    // 0x40011654: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
L_40011658:
    // 0x40011658: jr          $ra
    // 0x4001165C: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    return;
    // 0x4001165C: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
L_40011660:
    // 0x40011660: jr          $ra
    // 0x40011664: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    return;
    // 0x40011664: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
L_40011668:
    // 0x40011668: jr          $ra
    // 0x4001166C: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
    return;
    // 0x4001166C: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
L_40011670:
    // 0x40011670: jr          $ra
    // 0x40011674: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    return;
    // 0x40011674: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
L_40011678:
    // 0x40011678: jr          $ra
    // 0x4001167C: addiu       $v0, $zero, 0x31
    ctx->r2 = ADD32(0, 0X31);
    return;
    // 0x4001167C: addiu       $v0, $zero, 0x31
    ctx->r2 = ADD32(0, 0X31);
L_40011680:
    // 0x40011680: jr          $ra
    // 0x40011684: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    return;
    // 0x40011684: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
L_40011688:
    // 0x40011688: jr          $ra
    // 0x4001168C: addiu       $v0, $zero, 0x33
    ctx->r2 = ADD32(0, 0X33);
    return;
    // 0x4001168C: addiu       $v0, $zero, 0x33
    ctx->r2 = ADD32(0, 0X33);
L_40011690:
    // 0x40011690: jr          $ra
    // 0x40011694: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    return;
    // 0x40011694: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
L_40011698:
    // 0x40011698: jr          $ra
    // 0x4001169C: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    return;
    // 0x4001169C: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
L_400116A0:
    // 0x400116A0: jr          $ra
    // 0x400116A4: addiu       $v0, $zero, 0x36
    ctx->r2 = ADD32(0, 0X36);
    return;
    // 0x400116A4: addiu       $v0, $zero, 0x36
    ctx->r2 = ADD32(0, 0X36);
L_400116A8:
    // 0x400116A8: jr          $ra
    // 0x400116AC: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
    return;
    // 0x400116AC: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
L_400116B0:
    // 0x400116B0: jr          $ra
    // 0x400116B4: addiu       $v0, $zero, 0x38
    ctx->r2 = ADD32(0, 0X38);
    return;
    // 0x400116B4: addiu       $v0, $zero, 0x38
    ctx->r2 = ADD32(0, 0X38);
L_400116B8:
    // 0x400116B8: jr          $ra
    // 0x400116BC: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    return;
    // 0x400116BC: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
L_400116C0:
    // 0x400116C0: jr          $ra
    // 0x400116C4: addiu       $v0, $zero, 0x3A
    ctx->r2 = ADD32(0, 0X3A);
    return;
    // 0x400116C4: addiu       $v0, $zero, 0x3A
    ctx->r2 = ADD32(0, 0X3A);
L_400116C8:
    // 0x400116C8: jr          $ra
    // 0x400116CC: addiu       $v0, $zero, 0x3B
    ctx->r2 = ADD32(0, 0X3B);
    return;
    // 0x400116CC: addiu       $v0, $zero, 0x3B
    ctx->r2 = ADD32(0, 0X3B);
L_400116D0:
    // 0x400116D0: jr          $ra
    // 0x400116D4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    return;
    // 0x400116D4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
L_400116D8:
    // 0x400116D8: jr          $ra
    // 0x400116DC: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
    return;
    // 0x400116DC: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
L_400116E0:
    // 0x400116E0: jr          $ra
    // 0x400116E4: addiu       $v0, $zero, 0x3E
    ctx->r2 = ADD32(0, 0X3E);
    return;
    // 0x400116E4: addiu       $v0, $zero, 0x3E
    ctx->r2 = ADD32(0, 0X3E);
L_400116E8:
    // 0x400116E8: jr          $ra
    // 0x400116EC: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    return;
    // 0x400116EC: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
L_400116F0:
    // 0x400116F0: jr          $ra
    // 0x400116F4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    return;
    // 0x400116F4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_400116F8:
    // 0x400116F8: jr          $ra
    // 0x400116FC: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    return;
    // 0x400116FC: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
L_40011700:
    // 0x40011700: jr          $ra
    // 0x40011704: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    return;
    // 0x40011704: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
L_40011708:
    // 0x40011708: addiu       $v1, $zero, 0x43
    ctx->r3 = ADD32(0, 0X43);
L_4001170C:
    // 0x4001170C: jr          $ra
    // 0x40011710: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x40011710: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_11714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40011714: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x40011718: lui         $t8, 0x4002
    ctx->r24 = S32(0X4002 << 16);
    // 0x4001171C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x40011720: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x40011724: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x40011728: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x4001172C: lw          $t8, -0x20C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X20C0);
    // 0x40011730: sll         $t9, $a1, 1
    ctx->r25 = S32(ctx->r5 << 1);
    // 0x40011734: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x40011738: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x4001173C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40011740: beq         $v0, $at, L_4001176C
    if (ctx->r2 == ctx->r1) {
        // 0x40011744: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_4001176C;
    }
    // 0x40011744: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x40011748: beq         $v0, $at, L_40011774
    if (ctx->r2 == ctx->r1) {
        // 0x4001174C: addiu       $v1, $a0, 0xC8
        ctx->r3 = ADD32(ctx->r4, 0XC8);
            goto L_40011774;
    }
    // 0x4001174C: addiu       $v1, $a0, 0xC8
    ctx->r3 = ADD32(ctx->r4, 0XC8);
    // 0x40011750: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x40011754: beq         $v0, $at, L_40011774
    if (ctx->r2 == ctx->r1) {
        // 0x40011758: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_40011774;
    }
    // 0x40011758: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x4001175C: beq         $v0, $at, L_40011774
    if (ctx->r2 == ctx->r1) {
        // 0x40011760: nop
    
            goto L_40011774;
    }
    // 0x40011760: nop

    // 0x40011764: jr          $ra
    // 0x40011768: addiu       $v0, $a0, 0xC8
    ctx->r2 = ADD32(ctx->r4, 0XC8);
    return;
    // 0x40011768: addiu       $v0, $a0, 0xC8
    ctx->r2 = ADD32(ctx->r4, 0XC8);
L_4001176C:
    // 0x4001176C: jr          $ra
    // 0x40011770: addiu       $v0, $a0, 0xC0
    ctx->r2 = ADD32(ctx->r4, 0XC0);
    return;
    // 0x40011770: addiu       $v0, $a0, 0xC0
    ctx->r2 = ADD32(ctx->r4, 0XC0);
L_40011774:
    // 0x40011774: jr          $ra
    // 0x40011778: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x40011778: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_1177C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001177C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40011780: sw          $t6, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r14;
    // 0x40011784: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
    // 0x40011788: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
    // 0x4001178C: jr          $ra
    // 0x40011790: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    return;
    // 0x40011790: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_actor_main_11794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40011794: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40011798: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001179C: jal         0x400114A8
    // 0x400117A0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    ovl_actor_main_114A8(rdram, ctx);
        goto after_0;
    // 0x400117A0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x400117A4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x400117A8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x400117AC: jal         0x40011714
    // 0x400117B0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    ovl_actor_main_11714(rdram, ctx);
        goto after_1;
    // 0x400117B0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x400117B4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x400117B8: lui         $t0, 0x4002
    ctx->r8 = S32(0X4002 << 16);
    // 0x400117BC: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x400117C0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x400117C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x400117C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x400117CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x400117D0: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x400117D4: lw          $t0, -0x20C0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X20C0);
    // 0x400117D8: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x400117DC: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x400117E0: lbu         $v1, 0x0($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X0);
    // 0x400117E4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x400117E8: bne         $a2, $v1, L_40011804
    if (ctx->r6 != ctx->r3) {
        // 0x400117EC: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_40011804;
    }
    // 0x400117EC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x400117F0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x400117F4: jal         0x4001127C
    // 0x400117F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_1127C(rdram, ctx);
        goto after_2;
    // 0x400117F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x400117FC: b           L_40011934
    // 0x40011800: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_40011934;
    // 0x40011800: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_40011804:
    // 0x40011804: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x40011808: bne         $a1, $v1, L_400118A0
    if (ctx->r5 != ctx->r3) {
        // 0x4001180C: nop
    
            goto L_400118A0;
    }
    // 0x4001180C: nop

    // 0x40011810: lw          $t2, 0x8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X8);
    // 0x40011814: nop

    // 0x40011818: bne         $a1, $t2, L_40011898
    if (ctx->r5 != ctx->r10) {
        // 0x4001181C: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_40011898;
    }
    // 0x4001181C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x40011820: jal         0x40015CE4
    // 0x40011824: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    ovl_actor_main_15CE4(rdram, ctx);
        goto after_3;
    // 0x40011824: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_3:
    // 0x40011828: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x4001182C: beq         $v0, $zero, L_40011894
    if (ctx->r2 == 0) {
        // 0x40011830: lui         $t5, 0x4002
        ctx->r13 = S32(0X4002 << 16);
            goto L_40011894;
    }
    // 0x40011830: lui         $t5, 0x4002
    ctx->r13 = S32(0X4002 << 16);
    // 0x40011834: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x40011838: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x4001183C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x40011840: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x40011844: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x40011848: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x4001184C: lw          $t5, -0x20C0($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X20C0);
    // 0x40011850: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x40011854: addu        $t9, $t5, $t7
    ctx->r25 = ADD32(ctx->r13, ctx->r15);
    // 0x40011858: lbu         $t1, 0x1($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0X1);
    // 0x4001185C: lui         $t2, 0x4002
    ctx->r10 = S32(0X4002 << 16);
    // 0x40011860: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x40011864: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x40011868: lbu         $t2, -0x2DBF($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X2DBF);
    // 0x4001186C: lui         $t9, 0x4002
    ctx->r25 = S32(0X4002 << 16);
    // 0x40011870: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x40011874: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x40011878: lw          $t9, -0x2F78($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2F78);
    // 0x4001187C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x40011880: lw          $a2, 0xCC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XCC);
    // 0x40011884: jalr        $t9
    // 0x40011888: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x40011888: nop

    after_4:
    // 0x4001188C: b           L_40011934
    // 0x40011890: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_40011934;
    // 0x40011890: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_40011894:
    // 0x40011894: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_40011898:
    // 0x40011898: b           L_40011938
    // 0x4001189C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40011938;
    // 0x4001189C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400118A0:
    // 0x400118A0: lw          $t4, 0xC8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XC8);
    // 0x400118A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x400118A8: sll         $t6, $t4, 1
    ctx->r14 = S32(ctx->r12 << 1);
    // 0x400118AC: addu        $t5, $t0, $t6
    ctx->r13 = ADD32(ctx->r8, ctx->r14);
    // 0x400118B0: lbu         $v0, 0x0($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X0);
    // 0x400118B4: nop

    // 0x400118B8: beq         $v0, $zero, L_400118E0
    if (ctx->r2 == 0) {
        // 0x400118BC: nop
    
            goto L_400118E0;
    }
    // 0x400118BC: nop

    // 0x400118C0: beq         $v0, $at, L_400118E8
    if (ctx->r2 == ctx->r1) {
        // 0x400118C4: nop
    
            goto L_400118E8;
    }
    // 0x400118C4: nop

    // 0x400118C8: beq         $v0, $a1, L_400118E8
    if (ctx->r2 == ctx->r5) {
        // 0x400118CC: nop
    
            goto L_400118E8;
    }
    // 0x400118CC: nop

    // 0x400118D0: beq         $v0, $a2, L_400118E8
    if (ctx->r2 == ctx->r6) {
        // 0x400118D4: nop
    
            goto L_400118E8;
    }
    // 0x400118D4: nop

    // 0x400118D8: b           L_400118F0
    // 0x400118DC: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
        goto L_400118F0;
    // 0x400118DC: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
L_400118E0:
    // 0x400118E0: b           L_400118EC
    // 0x400118E4: addiu       $a3, $a0, 0xC0
    ctx->r7 = ADD32(ctx->r4, 0XC0);
        goto L_400118EC;
    // 0x400118E4: addiu       $a3, $a0, 0xC0
    ctx->r7 = ADD32(ctx->r4, 0XC0);
L_400118E8:
    // 0x400118E8: addiu       $a3, $a0, 0xC8
    ctx->r7 = ADD32(ctx->r4, 0XC8);
L_400118EC:
    // 0x400118EC: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
L_400118F0:
    // 0x400118F0: lui         $t9, 0x4002
    ctx->r25 = S32(0X4002 << 16);
    // 0x400118F4: sll         $t1, $t7, 1
    ctx->r9 = S32(ctx->r15 << 1);
    // 0x400118F8: addu        $t8, $t0, $t1
    ctx->r24 = ADD32(ctx->r8, ctx->r9);
    // 0x400118FC: lbu         $t2, 0x1($t8)
    ctx->r10 = MEM_BU(ctx->r24, 0X1);
    // 0x40011900: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x40011904: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x40011908: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x4001190C: lbu         $t9, -0x2DBF($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X2DBF);
    // 0x40011910: lw          $a2, 0x4($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X4);
    // 0x40011914: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x40011918: lui         $t9, 0x4002
    ctx->r25 = S32(0X4002 << 16);
    // 0x4001191C: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x40011920: lw          $t9, -0x2F78($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2F78);
    // 0x40011924: nop

    // 0x40011928: jalr        $t9
    // 0x4001192C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x4001192C: nop

    after_5:
    // 0x40011930: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_40011934:
    // 0x40011934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40011938:
    // 0x40011938: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x4001193C: jr          $ra
    // 0x40011940: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x40011940: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_11944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40011944: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40011948: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001194C: jal         0x40011714
    // 0x40011950: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_11714(rdram, ctx);
        goto after_0;
    // 0x40011950: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x40011954: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40011958: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x4001195C: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x40011960: lui         $t8, 0x4002
    ctx->r24 = S32(0X4002 << 16);
    // 0x40011964: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x40011968: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x4001196C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x40011970: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x40011974: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x40011978: lw          $t8, -0x20C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X20C0);
    // 0x4001197C: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x40011980: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x40011984: lbu         $t2, 0x1($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X1);
    // 0x40011988: lui         $t4, 0x4002
    ctx->r12 = S32(0X4002 << 16);
    // 0x4001198C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x40011990: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x40011994: lbu         $t4, -0x2DBD($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X2DBD);
    // 0x40011998: lui         $t9, 0x4002
    ctx->r25 = S32(0X4002 << 16);
    // 0x4001199C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x400119A0: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x400119A4: lw          $t9, -0x2E48($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2E48);
    // 0x400119A8: nop

    // 0x400119AC: jalr        $t9
    // 0x400119B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x400119B0: nop

    after_1:
    // 0x400119B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400119B8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x400119BC: jr          $ra
    // 0x400119C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x400119C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_actor_main_119C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400119C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x400119C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400119CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x400119D0: jal         0x40011944
    // 0x400119D4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    ovl_actor_main_11944(rdram, ctx);
        goto after_0;
    // 0x400119D4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x400119D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x400119DC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x400119E0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x400119E4: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x400119E8: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x400119EC: lui         $t8, 0x4002
    ctx->r24 = S32(0X4002 << 16);
    // 0x400119F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x400119F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x400119F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x400119FC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x40011A00: lw          $t8, -0x20C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X20C0);
    // 0x40011A04: sll         $t9, $a1, 1
    ctx->r25 = S32(ctx->r5 << 1);
    // 0x40011A08: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x40011A0C: lbu         $t1, 0x1($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X1);
    // 0x40011A10: lui         $t3, 0x4002
    ctx->r11 = S32(0X4002 << 16);
    // 0x40011A14: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x40011A18: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x40011A1C: lbu         $t3, -0x2DBE($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X2DBE);
    // 0x40011A20: lui         $t9, 0x4002
    ctx->r25 = S32(0X4002 << 16);
    // 0x40011A24: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x40011A28: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x40011A2C: lw          $t9, -0x2F0C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2F0C);
    // 0x40011A30: nop

    // 0x40011A34: jalr        $t9
    // 0x40011A38: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x40011A38: nop

    after_1:
    // 0x40011A3C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x40011A40: nop

    // 0x40011A44: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x40011A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40011A4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40011A50: jr          $ra
    // 0x40011A54: nop

    return;
    // 0x40011A54: nop

;}
RECOMP_FUNC void ovl_actor_main_11A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40011A58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40011A5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40011A60: lw          $t6, 0xC4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC4);
    // 0x40011A64: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x40011A68: addiu       $a1, $t6, 0x1
    ctx->r5 = ADD32(ctx->r14, 0X1);
    // 0x40011A6C: sw          $a1, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->r5;
    // 0x40011A70: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x40011A74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x40011A78: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x40011A7C: lui         $t0, 0x4002
    ctx->r8 = S32(0X4002 << 16);
    // 0x40011A80: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x40011A84: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x40011A88: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x40011A8C: lw          $t1, 0xC0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC0);
    // 0x40011A90: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x40011A94: lw          $t0, -0x20C0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X20C0);
    // 0x40011A98: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x40011A9C: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x40011AA0: lbu         $t4, 0x1($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1);
    // 0x40011AA4: lui         $t6, 0x4002
    ctx->r14 = S32(0X4002 << 16);
    // 0x40011AA8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x40011AAC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x40011AB0: lbu         $t6, -0x2DC0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X2DC0);
    // 0x40011AB4: lui         $t9, 0x4002
    ctx->r25 = S32(0X4002 << 16);
    // 0x40011AB8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x40011ABC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x40011AC0: lw          $t9, -0x3130($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3130);
    // 0x40011AC4: nop

    // 0x40011AC8: jalr        $t9
    // 0x40011ACC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x40011ACC: nop

    after_0:
    // 0x40011AD0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40011AD4: lui         $t3, 0x4002
    ctx->r11 = S32(0X4002 << 16);
    // 0x40011AD8: lw          $t0, 0x14($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X14);
    // 0x40011ADC: lw          $t8, 0xCC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XCC);
    // 0x40011AE0: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x40011AE4: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x40011AE8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x40011AEC: addiu       $a1, $t8, 0x1
    ctx->r5 = ADD32(ctx->r24, 0X1);
    // 0x40011AF0: lw          $t4, 0xC8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XC8);
    // 0x40011AF4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x40011AF8: sw          $a1, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r5;
    // 0x40011AFC: lw          $t3, -0x20C0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X20C0);
    // 0x40011B00: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x40011B04: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x40011B08: lbu         $t7, 0x1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1);
    // 0x40011B0C: lui         $t8, 0x4002
    ctx->r24 = S32(0X4002 << 16);
    // 0x40011B10: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x40011B14: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x40011B18: lbu         $t8, -0x2DC0($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X2DC0);
    // 0x40011B1C: lui         $t9, 0x4002
    ctx->r25 = S32(0X4002 << 16);
    // 0x40011B20: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x40011B24: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x40011B28: lw          $t9, -0x3130($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3130);
    // 0x40011B2C: nop

    // 0x40011B30: jalr        $t9
    // 0x40011B34: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x40011B34: nop

    after_1:
    // 0x40011B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40011B3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40011B40: jr          $ra
    // 0x40011B44: nop

    return;
    // 0x40011B44: nop

    // 0x40011B48: nop

    // 0x40011B4C: nop

;}
RECOMP_FUNC void ovl_actor_main_11B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40011B50: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40011B54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40011B58: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x40011B5C: jal         0x40000DE4
    // 0x40011B60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_actor_main_DE4(rdram, ctx);
        goto after_0;
    // 0x40011B60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x40011B64: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x40011B68: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x40011B6C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x40011B70: jal         0x400006C4
    // 0x40011B74: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40011B74: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x40011B78: bne         $v0, $zero, L_40011BAC
    if (ctx->r2 != 0) {
        // 0x40011B7C: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_40011BAC;
    }
    // 0x40011B7C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x40011B80: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x40011B84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x40011B88: lwc1        $f4, 0x44($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X44);
    // 0x40011B8C: jal         0x40001DD4
    // 0x40011B90: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    ovl_actor_main_1DD4(rdram, ctx);
        goto after_2;
    // 0x40011B90: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_2:
    // 0x40011B94: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x40011B98: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x40011B9C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x40011BA0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x40011BA4: jal         0x400006C4
    // 0x40011BA8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_3;
    // 0x40011BA8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_3:
L_40011BAC:
    // 0x40011BAC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x40011BB0: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x40011BB4: jal         0x400006C4
    // 0x40011BB8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_4;
    // 0x40011BB8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_4:
    // 0x40011BBC: bne         $v0, $zero, L_40011BD8
    if (ctx->r2 != 0) {
        // 0x40011BC0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40011BD8;
    }
    // 0x40011BC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40011BC4: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x40011BC8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x40011BCC: nop

    // 0x40011BD0: swc1        $f8, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f8.u32l;
    // 0x40011BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40011BD8:
    // 0x40011BD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x40011BDC: jr          $ra
    // 0x40011BE0: nop

    return;
    // 0x40011BE0: nop

;}
