#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_enemy_world7_53BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430053BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430053C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430053C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430053C8: jal         0x430019C0
    // 0x430053CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_enemy_world7_19C0(rdram, ctx);
        goto after_0;
    // 0x430053CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x430053D0: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430053D4: lw          $a0, -0x5D68($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5D68);
    // 0x430053D8: jal         0x4300082C
    // 0x430053DC: nop

    ovl_enemy_world7_82C(rdram, ctx);
        goto after_1;
    // 0x430053DC: nop

    after_1:
    // 0x430053E0: jal         0x43000124
    // 0x430053E4: addiu       $a0, $zero, 0xBAE
    ctx->r4 = ADD32(0, 0XBAE);
    ovl_enemy_world7_124(rdram, ctx);
        goto after_2;
    // 0x430053E4: addiu       $a0, $zero, 0xBAE
    ctx->r4 = ADD32(0, 0XBAE);
    after_2:
    // 0x430053E8: jal         0x43000124
    // 0x430053EC: addiu       $a0, $zero, 0xBAD
    ctx->r4 = ADD32(0, 0XBAD);
    ovl_enemy_world7_124(rdram, ctx);
        goto after_3;
    // 0x430053EC: addiu       $a0, $zero, 0xBAD
    ctx->r4 = ADD32(0, 0XBAD);
    after_3:
    // 0x430053F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430053F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430053F8: jr          $ra
    // 0x430053FC: nop

    return;
    // 0x430053FC: nop

;}
RECOMP_FUNC void ovl_enemy_world7_5400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005400: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43005404: addiu       $v1, $v1, -0x5D6C
    ctx->r3 = ADD32(ctx->r3, -0X5D6C);
    // 0x43005408: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x4300540C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43005410: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x43005414: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x43005418: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x4300541C: jr          $ra
    // 0x43005420: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    return;
    // 0x43005420: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void ovl_enemy_world7_5424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005424: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43005428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300542C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43005430: jal         0x43003B98
    // 0x43005434: nop

    ovl_enemy_world7_3B98(rdram, ctx);
        goto after_0;
    // 0x43005434: nop

    after_0:
    // 0x43005438: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x4300543C: jal         0x43003DF0
    // 0x43005440: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_enemy_world7_3DF0(rdram, ctx);
        goto after_1;
    // 0x43005440: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x43005444: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x43005448: jal         0x43003CD8
    // 0x4300544C: nop

    ovl_enemy_world7_3CD8(rdram, ctx);
        goto after_2;
    // 0x4300544C: nop

    after_2:
    // 0x43005450: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x43005454: jal         0x43003CCC
    // 0x43005458: nop

    ovl_enemy_world7_3CCC(rdram, ctx);
        goto after_3;
    // 0x43005458: nop

    after_3:
    // 0x4300545C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x43005460: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x43005464: jal         0x43009954
    // 0x43005468: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world7_9954(rdram, ctx);
        goto after_4;
    // 0x43005468: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_4:
    // 0x4300546C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005470: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43005474: jr          $ra
    // 0x43005478: nop

    return;
    // 0x43005478: nop

;}
RECOMP_FUNC void ovl_enemy_world7_547C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300547C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43005480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005484: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43005488: jal         0x43003B98
    // 0x4300548C: nop

    ovl_enemy_world7_3B98(rdram, ctx);
        goto after_0;
    // 0x4300548C: nop

    after_0:
    // 0x43005490: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x43005494: lw          $t6, 0x1F8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1F8);
    // 0x43005498: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4300549C: beq         $t6, $at, L_430054B0
    if (ctx->r14 == ctx->r1) {
        // 0x430054A0: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_430054B0;
    }
    // 0x430054A0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x430054A4: lw          $a1, 0x1F8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1F8);
    // 0x430054A8: jal         0x43000F34
    // 0x430054AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_enemy_world7_F34(rdram, ctx);
        goto after_1;
    // 0x430054AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_430054B0:
    // 0x430054B0: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x430054B4: addiu       $v0, $v0, -0x5D70
    ctx->r2 = ADD32(ctx->r2, -0X5D70);
    // 0x430054B8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x430054BC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x430054C0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x430054C4: jal         0x43002CD8
    // 0x430054C8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    ovl_enemy_world7_2CD8(rdram, ctx);
        goto after_2;
    // 0x430054C8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_2:
    // 0x430054CC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x430054D0: jal         0x43004430
    // 0x430054D4: nop

    ovl_enemy_world7_4430(rdram, ctx);
        goto after_3;
    // 0x430054D4: nop

    after_3:
    // 0x430054D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430054DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430054E0: jr          $ra
    // 0x430054E4: nop

    return;
    // 0x430054E4: nop

;}
RECOMP_FUNC void ovl_enemy_world7_54E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430054E8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x430054EC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x430054F0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x430054F4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x430054F8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x430054FC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43005500: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43005504: lw          $t6, 0x22C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X22C);
    // 0x43005508: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x4300550C: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x43005510: blez        $t6, L_43005564
    if (SIGNED(ctx->r14) <= 0) {
        // 0x43005514: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_43005564;
    }
    // 0x43005514: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x43005518: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300551C: addiu       $s2, $sp, 0x38
    ctx->r18 = ADD32(ctx->r29, 0X38);
L_43005520:
    // 0x43005520: lw          $a0, 0x234($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X234);
    // 0x43005524: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x43005528: jal         0x430006C4
    // 0x4300552C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_0;
    // 0x4300552C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_0:
    // 0x43005530: bne         $v0, $zero, L_43005550
    if (ctx->r2 != 0) {
        // 0x43005534: nop
    
            goto L_43005550;
    }
    // 0x43005534: nop

    // 0x43005538: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x4300553C: nop

    // 0x43005540: bne         $t7, $s4, L_43005550
    if (ctx->r15 != ctx->r20) {
        // 0x43005544: nop
    
            goto L_43005550;
    }
    // 0x43005544: nop

    // 0x43005548: b           L_43005568
    // 0x4300554C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_43005568;
    // 0x4300554C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_43005550:
    // 0x43005550: lw          $t8, 0x22C($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X22C);
    // 0x43005554: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43005558: slt         $at, $s1, $t8
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x4300555C: bne         $at, $zero, L_43005520
    if (ctx->r1 != 0) {
        // 0x43005560: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_43005520;
    }
    // 0x43005560: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_43005564:
    // 0x43005564: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_43005568:
    // 0x43005568: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x4300556C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43005570: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43005574: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43005578: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x4300557C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x43005580: jr          $ra
    // 0x43005584: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x43005584: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_enemy_world7_5588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005588: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300558C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005590: jal         0x430054E8
    // 0x43005594: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world7_54E8(rdram, ctx);
        goto after_0;
    // 0x43005594: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43005598: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4300559C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430055A0: beq         $v0, $at, L_430055C0
    if (ctx->r2 == ctx->r1) {
        // 0x430055A4: nop
    
            goto L_430055C0;
    }
    // 0x430055A4: nop

    // 0x430055A8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x430055AC: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x430055B0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x430055B4: lw          $v0, 0x234($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X234);
    // 0x430055B8: b           L_430055C4
    // 0x430055BC: nop

        goto L_430055C4;
    // 0x430055BC: nop

L_430055C0:
    // 0x430055C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_430055C4:
    // 0x430055C4: jr          $ra
    // 0x430055C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x430055C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_enemy_world7_55CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430055CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430055D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430055D4: jal         0x430054E8
    // 0x430055D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world7_54E8(rdram, ctx);
        goto after_0;
    // 0x430055D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x430055DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x430055E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430055E4: bne         $v0, $at, L_43005608
    if (ctx->r2 != ctx->r1) {
        // 0x430055E8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_43005608;
    }
    // 0x430055E8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x430055EC: lw          $t6, 0x230($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X230);
    // 0x430055F0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x430055F4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x430055F8: sllv        $t9, $t8, $t7
    ctx->r25 = S32(ctx->r24 << (ctx->r15 & 31));
    // 0x430055FC: and         $t0, $t6, $t9
    ctx->r8 = ctx->r14 & ctx->r25;
    // 0x43005600: beq         $t0, $zero, L_4300561C
    if (ctx->r8 == 0) {
        // 0x43005604: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_4300561C;
    }
    // 0x43005604: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_43005608:
    // 0x43005608: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x4300560C: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x43005610: lw          $v0, 0x234($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X234);
    // 0x43005614: b           L_43005620
    // 0x43005618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43005620;
    // 0x43005618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4300561C:
    // 0x4300561C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005620:
    // 0x43005620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005624: jr          $ra
    // 0x43005628: nop

    return;
    // 0x43005628: nop

;}
RECOMP_FUNC void ovl_enemy_world7_562C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300562C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005630: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005634: jal         0x430054E8
    // 0x43005638: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world7_54E8(rdram, ctx);
        goto after_0;
    // 0x43005638: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4300563C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43005640: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43005644: bne         $v0, $at, L_43005668
    if (ctx->r2 != ctx->r1) {
        // 0x43005648: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_43005668;
    }
    // 0x43005648: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x4300564C: lw          $t6, 0x230($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X230);
    // 0x43005650: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x43005654: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x43005658: sllv        $t9, $t8, $t7
    ctx->r25 = S32(ctx->r24 << (ctx->r15 & 31));
    // 0x4300565C: and         $t0, $t6, $t9
    ctx->r8 = ctx->r14 & ctx->r25;
    // 0x43005660: beq         $t0, $zero, L_4300567C
    if (ctx->r8 == 0) {
        // 0x43005664: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_4300567C;
    }
    // 0x43005664: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_43005668:
    // 0x43005668: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x4300566C: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x43005670: lw          $v0, 0x234($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X234);
    // 0x43005674: b           L_43005680
    // 0x43005678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43005680;
    // 0x43005678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4300567C:
    // 0x4300567C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005680:
    // 0x43005680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005684: jr          $ra
    // 0x43005688: nop

    return;
    // 0x43005688: nop

;}
RECOMP_FUNC void ovl_enemy_world7_568C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300568C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43005690: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005694: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x43005698: lw          $t6, 0x230($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X230);
    // 0x4300569C: nop

    // 0x430056A0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x430056A4: beq         $t7, $zero, L_43005720
    if (ctx->r15 == 0) {
        // 0x430056A8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_43005720;
    }
    // 0x430056A8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x430056AC: jal         0x430055CC
    // 0x430056B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_55CC(rdram, ctx);
        goto after_0;
    // 0x430056B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x430056B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430056B8: beq         $v0, $at, L_4300571C
    if (ctx->r2 == ctx->r1) {
        // 0x430056BC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_4300571C;
    }
    // 0x430056BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x430056C0: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x430056C4: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x430056C8: jal         0x430006C4
    // 0x430056CC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_1;
    // 0x430056CC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_1:
    // 0x430056D0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x430056D4: bne         $v0, $zero, L_43005720
    if (ctx->r2 != 0) {
        // 0x430056D8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_43005720;
    }
    // 0x430056D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x430056DC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x430056E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430056E4: lwc1        $f4, 0x14($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X14);
    // 0x430056E8: nop

    // 0x430056EC: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x430056F0: nop

    // 0x430056F4: bc1f        L_43005720
    if (!c1cs) {
        // 0x430056F8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_43005720;
    }
    // 0x430056F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x430056FC: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x43005700: nop

    // 0x43005704: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x43005708: nop

    // 0x4300570C: bc1f        L_43005720
    if (!c1cs) {
        // 0x43005710: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_43005720;
    }
    // 0x43005710: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x43005714: b           L_43005720
    // 0x43005718: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_43005720;
    // 0x43005718: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_4300571C:
    // 0x4300571C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_43005720:
    // 0x43005720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005724: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x43005728: jr          $ra
    // 0x4300572C: nop

    return;
    // 0x4300572C: nop

;}
RECOMP_FUNC void ovl_enemy_world7_5730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005730: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43005734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005738: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x4300573C: lw          $t6, 0x10($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X10);
    // 0x43005740: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43005744: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x43005748: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x4300574C: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x43005750: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x43005754: lw          $t7, 0x10($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X10);
    // 0x43005758: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x4300575C: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x43005760: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x43005764: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x43005768: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x4300576C: bc1f        L_43005788
    if (!c1cs) {
        // 0x43005770: swc1        $f0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
            goto L_43005788;
    }
    // 0x43005770: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x43005774: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43005778: nop

    // 0x4300577C: c.eq.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl == ctx->f0.fl;
    // 0x43005780: nop

    // 0x43005784: bc1t        L_430057B8
    if (c1cs) {
        // 0x43005788: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_430057B8;
    }
L_43005788:
    // 0x43005788: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x4300578C: jal         0x43005218
    // 0x43005790: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_enemy_world7_5218(rdram, ctx);
        goto after_0;
    // 0x43005790: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x43005794: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43005798: jal         0x43006E98
    // 0x4300579C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world7_6E98(rdram, ctx);
        goto after_1;
    // 0x4300579C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x430057A0: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x430057A4: nop

    // 0x430057A8: lw          $t8, 0x248($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X248);
    // 0x430057AC: nop

    // 0x430057B0: or          $t9, $t8, $v0
    ctx->r25 = ctx->r24 | ctx->r2;
    // 0x430057B4: sw          $t9, 0x248($v1)
    MEM_W(0X248, ctx->r3) = ctx->r25;
L_430057B8:
    // 0x430057B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430057BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x430057C0: jr          $ra
    // 0x430057C4: nop

    return;
    // 0x430057C4: nop

;}
RECOMP_FUNC void ovl_enemy_world7_57C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430057C8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x430057CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430057D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430057D4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x430057D8: lw          $t6, 0x230($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X230);
    // 0x430057DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430057E0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x430057E4: beq         $t7, $zero, L_430057F8
    if (ctx->r15 == 0) {
        // 0x430057E8: lw          $t8, 0x54($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X54);
            goto L_430057F8;
    }
    // 0x430057E8: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x430057EC: jal         0x4300438C
    // 0x430057F0: addiu       $a0, $a0, 0x22C
    ctx->r4 = ADD32(ctx->r4, 0X22C);
    ovl_enemy_world7_438C(rdram, ctx);
        goto after_0;
    // 0x430057F0: addiu       $a0, $a0, 0x22C
    ctx->r4 = ADD32(ctx->r4, 0X22C);
    after_0:
    // 0x430057F4: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
L_430057F8:
    // 0x430057F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430057FC: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x43005800: nop

    // 0x43005804: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x43005808: bne         $t0, $zero, L_43005830
    if (ctx->r8 != 0) {
        // 0x4300580C: nop
    
            goto L_43005830;
    }
    // 0x4300580C: nop

    // 0x43005810: jal         0x43005730
    // 0x43005814: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    ovl_enemy_world7_5730(rdram, ctx);
        goto after_1;
    // 0x43005814: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_1:
    // 0x43005818: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x4300581C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43005820: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x43005824: nop

    // 0x43005828: beq         $t2, $at, L_43005918
    if (ctx->r10 == ctx->r1) {
        // 0x4300582C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43005918;
    }
    // 0x4300582C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43005830:
    // 0x43005830: lw          $a0, 0x22C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X22C);
    // 0x43005834: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x43005838: slti        $at, $a0, 0x5
    ctx->r1 = SIGNED(ctx->r4) < 0X5 ? 1 : 0;
    // 0x4300583C: beq         $at, $zero, L_43005918
    if (ctx->r1 == 0) {
        // 0x43005840: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43005918;
    }
    // 0x43005840: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005844: lw          $a3, 0x8($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X8);
    // 0x43005848: blez        $a0, L_4300586C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x4300584C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_4300586C;
    }
    // 0x4300584C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43005850: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_43005854:
    // 0x43005854: lw          $t4, 0x234($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X234);
    // 0x43005858: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x4300585C: beq         $a3, $t4, L_43005914
    if (ctx->r7 == ctx->r12) {
        // 0x43005860: slt         $at, $v0, $a0
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_43005914;
    }
    // 0x43005860: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x43005864: bne         $at, $zero, L_43005854
    if (ctx->r1 != 0) {
        // 0x43005868: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_43005854;
    }
    // 0x43005868: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_4300586C:
    // 0x4300586C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43005870: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x43005874: jal         0x430006C4
    // 0x43005878: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_2;
    // 0x43005878: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_2:
    // 0x4300587C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x43005880: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43005884: beq         $v0, $zero, L_430058A4
    if (ctx->r2 == 0) {
        // 0x43005888: nop
    
            goto L_430058A4;
    }
    // 0x43005888: nop

    // 0x4300588C: bne         $v0, $at, L_43005918
    if (ctx->r2 != ctx->r1) {
        // 0x43005890: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43005918;
    }
    // 0x43005890: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005894: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x43005898: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4300589C: bne         $t5, $at, L_43005918
    if (ctx->r13 != ctx->r1) {
        // 0x430058A0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43005918;
    }
    // 0x430058A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430058A4:
    // 0x430058A4: lw          $a0, 0x22C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X22C);
    // 0x430058A8: addiu       $at, $zero, 0xA00
    ctx->r1 = ADD32(0, 0XA00);
    // 0x430058AC: addiu       $t6, $a0, 0x1
    ctx->r14 = ADD32(ctx->r4, 0X1);
    // 0x430058B0: sw          $t6, 0x22C($s0)
    MEM_W(0X22C, ctx->r16) = ctx->r14;
    // 0x430058B4: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x430058B8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x430058BC: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x430058C0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x430058C4: andi        $t0, $t9, 0xF00
    ctx->r8 = ctx->r25 & 0XF00;
    // 0x430058C8: bne         $t0, $at, L_430058F0
    if (ctx->r8 != ctx->r1) {
        // 0x430058CC: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_430058F0;
    }
    // 0x430058CC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x430058D0: addiu       $t1, $a0, 0x8
    ctx->r9 = ADD32(ctx->r4, 0X8);
    // 0x430058D4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x430058D8: lw          $t8, 0x230($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X230);
    // 0x430058DC: sllv        $t3, $t2, $t1
    ctx->r11 = S32(ctx->r10 << (ctx->r9 & 31));
    // 0x430058E0: nor         $t4, $t3, $zero
    ctx->r12 = ~(ctx->r11 | 0);
    // 0x430058E4: and         $t5, $t8, $t4
    ctx->r13 = ctx->r24 & ctx->r12;
    // 0x430058E8: b           L_43005900
    // 0x430058EC: sw          $t5, 0x230($s0)
    MEM_W(0X230, ctx->r16) = ctx->r13;
        goto L_43005900;
    // 0x430058EC: sw          $t5, 0x230($s0)
    MEM_W(0X230, ctx->r16) = ctx->r13;
L_430058F0:
    // 0x430058F0: lw          $t6, 0x230($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X230);
    // 0x430058F4: sllv        $t0, $t9, $t7
    ctx->r8 = S32(ctx->r25 << (ctx->r15 & 31));
    // 0x430058F8: or          $t2, $t6, $t0
    ctx->r10 = ctx->r14 | ctx->r8;
    // 0x430058FC: sw          $t2, 0x230($s0)
    MEM_W(0X230, ctx->r16) = ctx->r10;
L_43005900:
    // 0x43005900: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x43005904: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x43005908: lw          $t3, 0x8($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X8);
    // 0x4300590C: addu        $t4, $s0, $t8
    ctx->r12 = ADD32(ctx->r16, ctx->r24);
    // 0x43005910: sw          $t3, 0x234($t4)
    MEM_W(0X234, ctx->r12) = ctx->r11;
L_43005914:
    // 0x43005914: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43005918:
    // 0x43005918: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4300591C: jr          $ra
    // 0x43005920: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x43005920: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_enemy_world7_5924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005924: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x43005928: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4300592C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43005930: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x43005934: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x43005938: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x4300593C: nop

    // 0x43005940: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x43005944: jal         0x43003B98
    // 0x43005948: nop

    ovl_enemy_world7_3B98(rdram, ctx);
        goto after_0;
    // 0x43005948: nop

    after_0:
    // 0x4300594C: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x43005950: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43005954: lw          $s1, 0xC($t7)
    ctx->r17 = MEM_W(ctx->r15, 0XC);
    // 0x43005958: beq         $v0, $at, L_43005974
    if (ctx->r2 == ctx->r1) {
        // 0x4300595C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_43005974;
    }
    // 0x4300595C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x43005960: lw          $v1, 0x54($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X54);
    // 0x43005964: nop

    // 0x43005968: andi        $t8, $v1, 0x2
    ctx->r24 = ctx->r3 & 0X2;
    // 0x4300596C: beq         $t8, $zero, L_43005980
    if (ctx->r24 == 0) {
        // 0x43005970: nop
    
            goto L_43005980;
    }
    // 0x43005970: nop

L_43005974:
    // 0x43005974: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x43005978: b           L_43005BFC
    // 0x4300597C: sw          $zero, 0xC($t9)
    MEM_W(0XC, ctx->r25) = 0;
        goto L_43005BFC;
    // 0x4300597C: sw          $zero, 0xC($t9)
    MEM_W(0XC, ctx->r25) = 0;
L_43005980:
    // 0x43005980: lw          $t0, 0xC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XC);
    // 0x43005984: nop

    // 0x43005988: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x4300598C: bne         $t1, $zero, L_43005A78
    if (ctx->r9 != 0) {
        // 0x43005990: nop
    
            goto L_43005A78;
    }
    // 0x43005990: nop

    // 0x43005994: lw          $t2, 0x10($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X10);
    // 0x43005998: addiu       $t5, $s0, 0x14
    ctx->r13 = ADD32(ctx->r16, 0X14);
    // 0x4300599C: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x430059A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430059A4: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
    // 0x430059A8: lw          $t3, 0x10($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X10);
    // 0x430059AC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x430059B0: lwc1        $f6, 0x4($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X4);
    // 0x430059B4: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x430059B8: swc1        $f6, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f6.u32l;
    // 0x430059BC: lw          $t4, 0x10($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X10);
    // 0x430059C0: nop

    // 0x430059C4: lwc1        $f8, 0x8($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X8);
    // 0x430059C8: nop

    // 0x430059CC: swc1        $f8, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f8.u32l;
    // 0x430059D0: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x430059D4: lw          $t6, 0xC($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XC);
    // 0x430059D8: nop

    // 0x430059DC: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x430059E0: lw          $t7, 0x10($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X10);
    // 0x430059E4: nop

    // 0x430059E8: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x430059EC: nop

    // 0x430059F0: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x430059F4: lw          $t8, 0x10($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X10);
    // 0x430059F8: nop

    // 0x430059FC: lwc1        $f16, 0x4($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X4);
    // 0x43005A00: nop

    // 0x43005A04: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x43005A08: lw          $t9, 0x10($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X10);
    // 0x43005A0C: nop

    // 0x43005A10: lwc1        $f18, 0x8($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X8);
    // 0x43005A14: jal         0x43005218
    // 0x43005A18: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    ovl_enemy_world7_5218(rdram, ctx);
        goto after_1;
    // 0x43005A18: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x43005A1C: lw          $t0, 0xC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XC);
    // 0x43005A20: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x43005A24: bne         $t0, $at, L_43005A40
    if (ctx->r8 != ctx->r1) {
        // 0x43005A28: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43005A40;
    }
    // 0x43005A28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005A2C: lw          $t1, 0x54($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X54);
    // 0x43005A30: nop

    // 0x43005A34: andi        $t2, $t1, 0x2000
    ctx->r10 = ctx->r9 & 0X2000;
    // 0x43005A38: bne         $t2, $zero, L_43005A54
    if (ctx->r10 != 0) {
        // 0x43005A3C: nop
    
            goto L_43005A54;
    }
    // 0x43005A3C: nop

L_43005A40:
    // 0x43005A40: lw          $t3, 0x54($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X54);
    // 0x43005A44: nop

    // 0x43005A48: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x43005A4C: bgez        $t4, L_43005A68
    if (SIGNED(ctx->r12) >= 0) {
        // 0x43005A50: nop
    
            goto L_43005A68;
    }
    // 0x43005A50: nop

L_43005A54:
    // 0x43005A54: lw          $t5, 0x4C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4C);
    // 0x43005A58: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43005A5C: bne         $t5, $at, L_43005A68
    if (ctx->r13 != ctx->r1) {
        // 0x43005A60: addiu       $t6, $zero, 0x2
        ctx->r14 = ADD32(0, 0X2);
            goto L_43005A68;
    }
    // 0x43005A60: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x43005A64: sw          $t6, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r14;
L_43005A68:
    // 0x43005A68: jal         0x430057C8
    // 0x43005A6C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_enemy_world7_57C8(rdram, ctx);
        goto after_2;
    // 0x43005A6C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x43005A70: b           L_43005AE8
    // 0x43005A74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43005AE8;
    // 0x43005A74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43005A78:
    // 0x43005A78: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x43005A7C: lw          $t8, 0x21C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X21C);
    // 0x43005A80: ori         $t9, $v1, 0x80
    ctx->r25 = ctx->r3 | 0X80;
    // 0x43005A84: bne         $t7, $t8, L_43005A90
    if (ctx->r15 != ctx->r24) {
        // 0x43005A88: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43005A90;
    }
    // 0x43005A88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005A8C: sw          $t9, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->r25;
L_43005A90:
    // 0x43005A90: lw          $t0, 0x4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X4);
    // 0x43005A94: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x43005A98: bne         $t0, $at, L_43005AD0
    if (ctx->r8 != ctx->r1) {
        // 0x43005A9C: nop
    
            goto L_43005AD0;
    }
    // 0x43005A9C: nop

    // 0x43005AA0: lw          $t1, 0x1C8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X1C8);
    // 0x43005AA4: nop

    // 0x43005AA8: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x43005AAC: bne         $t2, $zero, L_43005AD8
    if (ctx->r10 != 0) {
        // 0x43005AB0: nop
    
            goto L_43005AD8;
    }
    // 0x43005AB0: nop

    // 0x43005AB4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43005AB8: lwc1        $f6, 0x220($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X220);
    // 0x43005ABC: nop

    // 0x43005AC0: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x43005AC4: nop

    // 0x43005AC8: bc1t        L_43005AD8
    if (c1cs) {
        // 0x43005ACC: nop
    
            goto L_43005AD8;
    }
    // 0x43005ACC: nop

L_43005AD0:
    // 0x43005AD0: jal         0x43002B50
    // 0x43005AD4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_enemy_world7_2B50(rdram, ctx);
        goto after_3;
    // 0x43005AD4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
L_43005AD8:
    // 0x43005AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005ADC: jal         0x430057C8
    // 0x43005AE0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_enemy_world7_57C8(rdram, ctx);
        goto after_4;
    // 0x43005AE0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x43005AE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43005AE8:
    // 0x43005AE8: jal         0x43002540
    // 0x43005AEC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_enemy_world7_2540(rdram, ctx);
        goto after_5;
    // 0x43005AEC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x43005AF0: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x43005AF4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43005AF8: lwc1        $f10, 0x14($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X14);
    // 0x43005AFC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x43005B00: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x43005B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005B08: bc1f        L_43005B5C
    if (!c1cs) {
        // 0x43005B0C: nop
    
            goto L_43005B5C;
    }
    // 0x43005B0C: nop

    // 0x43005B10: jal         0x430024D4
    // 0x43005B14: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    ovl_enemy_world7_24D4(rdram, ctx);
        goto after_6;
    // 0x43005B14: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_6:
    // 0x43005B18: lw          $v0, 0x54($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X54);
    // 0x43005B1C: lwc1        $f16, 0x18($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X18);
    // 0x43005B20: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x43005B24: andi        $t3, $v0, 0x100
    ctx->r11 = ctx->r2 & 0X100;
    // 0x43005B28: beq         $t3, $zero, L_43005B50
    if (ctx->r11 == 0) {
        // 0x43005B2C: swc1        $f16, 0x1BC($s0)
        MEM_W(0X1BC, ctx->r16) = ctx->f16.u32l;
            goto L_43005B50;
    }
    // 0x43005B2C: swc1        $f16, 0x1BC($s0)
    MEM_W(0X1BC, ctx->r16) = ctx->f16.u32l;
    // 0x43005B30: andi        $t4, $v0, 0x80
    ctx->r12 = ctx->r2 & 0X80;
    // 0x43005B34: bne         $t4, $zero, L_43005B50
    if (ctx->r12 != 0) {
        // 0x43005B38: addiu       $at, $zero, -0x101
        ctx->r1 = ADD32(0, -0X101);
            goto L_43005B50;
    }
    // 0x43005B38: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x43005B3C: and         $t5, $v0, $at
    ctx->r13 = ctx->r2 & ctx->r1;
    // 0x43005B40: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x43005B44: sw          $t5, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r13;
    // 0x43005B48: sw          $t6, 0x21C($s0)
    MEM_W(0X21C, ctx->r16) = ctx->r14;
    // 0x43005B4C: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_43005B50:
    // 0x43005B50: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x43005B54: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x43005B58: sw          $t7, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r15;
L_43005B5C:
    // 0x43005B5C: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
    // 0x43005B60: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x43005B64: beq         $t8, $at, L_43005B9C
    if (ctx->r24 == ctx->r1) {
        // 0x43005B68: nop
    
            goto L_43005B9C;
    }
    // 0x43005B68: nop

    // 0x43005B6C: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x43005B70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005B74: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x43005B78: bltz        $t0, L_43005B9C
    if (SIGNED(ctx->r8) < 0) {
        // 0x43005B7C: or          $a1, $s1, $zero
        ctx->r5 = ctx->r17 | 0;
            goto L_43005B9C;
    }
    // 0x43005B7C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x43005B80: jal         0x430022F0
    // 0x43005B84: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    ovl_enemy_world7_22F0(rdram, ctx);
        goto after_7;
    // 0x43005B84: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_7:
    // 0x43005B88: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x43005B8C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x43005B90: beq         $v0, $at, L_43005B9C
    if (ctx->r2 == ctx->r1) {
        // 0x43005B94: nop
    
            goto L_43005B9C;
    }
    // 0x43005B94: nop

    // 0x43005B98: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43005B9C:
    // 0x43005B9C: lw          $t1, 0x54($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X54);
    // 0x43005BA0: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x43005BA4: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x43005BA8: bltz        $t2, L_43005BE0
    if (SIGNED(ctx->r10) < 0) {
        // 0x43005BAC: nop
    
            goto L_43005BE0;
    }
    // 0x43005BAC: nop

    // 0x43005BB0: lw          $t3, 0x4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X4);
    // 0x43005BB4: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x43005BB8: bne         $t3, $at, L_43005BD8
    if (ctx->r11 != ctx->r1) {
        // 0x43005BBC: lw          $t6, 0x50($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X50);
            goto L_43005BD8;
    }
    // 0x43005BBC: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x43005BC0: lw          $t4, 0x1C8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X1C8);
    // 0x43005BC4: nop

    // 0x43005BC8: andi        $t5, $t4, 0x8
    ctx->r13 = ctx->r12 & 0X8;
    // 0x43005BCC: beq         $t5, $zero, L_43005BE0
    if (ctx->r13 == 0) {
        // 0x43005BD0: nop
    
            goto L_43005BE0;
    }
    // 0x43005BD0: nop

    // 0x43005BD4: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
L_43005BD8:
    // 0x43005BD8: b           L_43005BE4
    // 0x43005BDC: sw          $v1, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r3;
        goto L_43005BE4;
    // 0x43005BDC: sw          $v1, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r3;
L_43005BE0:
    // 0x43005BE0: sw          $zero, 0xC($t7)
    MEM_W(0XC, ctx->r15) = 0;
L_43005BE4:
    // 0x43005BE4: lw          $t8, 0x54($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X54);
    // 0x43005BE8: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x43005BEC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x43005BF0: bgez        $t9, L_43005C00
    if (SIGNED(ctx->r25) >= 0) {
        // 0x43005BF4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43005C00;
    }
    // 0x43005BF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005BF8: sw          $zero, 0xC($t0)
    MEM_W(0XC, ctx->r8) = 0;
L_43005BFC:
    // 0x43005BFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43005C00:
    // 0x43005C00: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43005C04: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x43005C08: jr          $ra
    // 0x43005C0C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x43005C0C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_enemy_world7_5C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005C10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005C18: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43005C1C: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x43005C20: jal         0x43004880
    // 0x43005C24: nop

    ovl_enemy_world7_4880(rdram, ctx);
        goto after_0;
    // 0x43005C24: nop

    after_0:
    // 0x43005C28: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x43005C2C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43005C30: addiu       $t7, $t6, -0x5
    ctx->r15 = ADD32(ctx->r14, -0X5);
    // 0x43005C34: sltiu       $at, $t7, 0x7
    ctx->r1 = ctx->r15 < 0X7 ? 1 : 0;
    // 0x43005C38: beq         $at, $zero, L_43005CA8
    if (ctx->r1 == 0) {
        // 0x43005C3C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_43005CA8;
    }
    // 0x43005C3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x43005C40: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43005C44: addu        $at, $at, $t7
    gpr jr_addend_43005C50 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x43005C48: lw          $t7, -0x61F0($at)
    ctx->r15 = ADD32(ctx->r1, -0X61F0);
    // 0x43005C4C: nop

    // 0x43005C50: jr          $t7
    // 0x43005C54: nop

    switch (jr_addend_43005C50 >> 2) {
        case 0: goto L_43005C58; break;
        case 1: goto L_43005C64; break;
        case 2: goto L_43005C70; break;
        case 3: goto L_43005C7C; break;
        case 4: goto L_43005C88; break;
        case 5: goto L_43005C94; break;
        case 6: goto L_43005CA0; break;
        default: switch_error(__func__, 0x43005C50, 0x43009E10);
    }
    // 0x43005C54: nop

L_43005C58:
    // 0x43005C58: lw          $v1, 0x2C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X2C);
    // 0x43005C5C: b           L_43005CAC
    // 0x43005C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43005CAC;
    // 0x43005C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005C64:
    // 0x43005C64: lw          $v1, 0x34($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X34);
    // 0x43005C68: b           L_43005CAC
    // 0x43005C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43005CAC;
    // 0x43005C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005C70:
    // 0x43005C70: lw          $v1, 0x3C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X3C);
    // 0x43005C74: b           L_43005CAC
    // 0x43005C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43005CAC;
    // 0x43005C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005C7C:
    // 0x43005C7C: lw          $v1, 0x44($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X44);
    // 0x43005C80: b           L_43005CAC
    // 0x43005C84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43005CAC;
    // 0x43005C84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005C88:
    // 0x43005C88: lw          $v1, 0x4C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4C);
    // 0x43005C8C: b           L_43005CAC
    // 0x43005C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43005CAC;
    // 0x43005C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005C94:
    // 0x43005C94: lw          $v1, 0x54($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X54);
    // 0x43005C98: b           L_43005CAC
    // 0x43005C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43005CAC;
    // 0x43005C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005CA0:
    // 0x43005CA0: lw          $v1, 0x5C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X5C);
    // 0x43005CA4: nop

L_43005CA8:
    // 0x43005CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005CAC:
    // 0x43005CAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005CB0: jr          $ra
    // 0x43005CB4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x43005CB4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world7_5CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005CB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005CBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005CC0: lw          $t6, 0x1E4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1E4);
    // 0x43005CC4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43005CC8: sltiu       $at, $t6, 0x17
    ctx->r1 = ctx->r14 < 0X17 ? 1 : 0;
    // 0x43005CCC: beq         $at, $zero, L_43005D90
    if (ctx->r1 == 0) {
        // 0x43005CD0: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_43005D90;
    }
    // 0x43005CD0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43005CD4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43005CD8: addu        $at, $at, $t6
    gpr jr_addend_43005CE4 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43005CDC: lw          $t6, -0x61D4($at)
    ctx->r14 = ADD32(ctx->r1, -0X61D4);
    // 0x43005CE0: nop

    // 0x43005CE4: jr          $t6
    // 0x43005CE8: nop

    switch (jr_addend_43005CE4 >> 2) {
        case 0: goto L_43005D90; break;
        case 1: goto L_43005D5C; break;
        case 2: goto L_43005D64; break;
        case 3: goto L_43005D6C; break;
        case 4: goto L_43005D6C; break;
        case 5: goto L_43005D6C; break;
        case 6: goto L_43005CEC; break;
        case 7: goto L_43005CFC; break;
        case 8: goto L_43005D0C; break;
        case 9: goto L_43005D1C; break;
        case 10: goto L_43005D2C; break;
        case 11: goto L_43005D3C; break;
        case 12: goto L_43005D4C; break;
        case 13: goto L_43005D64; break;
        case 14: goto L_43005D64; break;
        case 15: goto L_43005D5C; break;
        case 16: goto L_43005D5C; break;
        case 17: goto L_43005D5C; break;
        case 18: goto L_43005D5C; break;
        case 19: goto L_43005D74; break;
        case 20: goto L_43005D7C; break;
        case 21: goto L_43005D84; break;
        case 22: goto L_43005D8C; break;
        default: switch_error(__func__, 0x43005CE4, 0x43009E2C);
    }
    // 0x43005CE8: nop

L_43005CEC:
    // 0x43005CEC: jal         0x43005C10
    // 0x43005CF0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    ovl_enemy_world7_5C10(rdram, ctx);
        goto after_0;
    // 0x43005CF0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x43005CF4: b           L_43005D90
    // 0x43005CF8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_43005D90;
    // 0x43005CF8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43005CFC:
    // 0x43005CFC: jal         0x43005C10
    // 0x43005D00: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_enemy_world7_5C10(rdram, ctx);
        goto after_1;
    // 0x43005D00: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
    // 0x43005D04: b           L_43005D90
    // 0x43005D08: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_43005D90;
    // 0x43005D08: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43005D0C:
    // 0x43005D0C: jal         0x43005C10
    // 0x43005D10: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    ovl_enemy_world7_5C10(rdram, ctx);
        goto after_2;
    // 0x43005D10: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_2:
    // 0x43005D14: b           L_43005D90
    // 0x43005D18: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_43005D90;
    // 0x43005D18: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43005D1C:
    // 0x43005D1C: jal         0x43005C10
    // 0x43005D20: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    ovl_enemy_world7_5C10(rdram, ctx);
        goto after_3;
    // 0x43005D20: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x43005D24: b           L_43005D90
    // 0x43005D28: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_43005D90;
    // 0x43005D28: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43005D2C:
    // 0x43005D2C: jal         0x43005C10
    // 0x43005D30: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    ovl_enemy_world7_5C10(rdram, ctx);
        goto after_4;
    // 0x43005D30: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_4:
    // 0x43005D34: b           L_43005D90
    // 0x43005D38: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_43005D90;
    // 0x43005D38: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43005D3C:
    // 0x43005D3C: jal         0x43005C10
    // 0x43005D40: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_enemy_world7_5C10(rdram, ctx);
        goto after_5;
    // 0x43005D40: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_5:
    // 0x43005D44: b           L_43005D90
    // 0x43005D48: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_43005D90;
    // 0x43005D48: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43005D4C:
    // 0x43005D4C: jal         0x43005C10
    // 0x43005D50: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    ovl_enemy_world7_5C10(rdram, ctx);
        goto after_6;
    // 0x43005D50: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_6:
    // 0x43005D54: b           L_43005D90
    // 0x43005D58: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_43005D90;
    // 0x43005D58: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43005D5C:
    // 0x43005D5C: b           L_43005D90
    // 0x43005D60: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43005D90;
    // 0x43005D60: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43005D64:
    // 0x43005D64: b           L_43005D90
    // 0x43005D68: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_43005D90;
    // 0x43005D68: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_43005D6C:
    // 0x43005D6C: b           L_43005D90
    // 0x43005D70: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
        goto L_43005D90;
    // 0x43005D70: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_43005D74:
    // 0x43005D74: b           L_43005D90
    // 0x43005D78: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
        goto L_43005D90;
    // 0x43005D78: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
L_43005D7C:
    // 0x43005D7C: b           L_43005D90
    // 0x43005D80: addiu       $v1, $zero, 0xD
    ctx->r3 = ADD32(0, 0XD);
        goto L_43005D90;
    // 0x43005D80: addiu       $v1, $zero, 0xD
    ctx->r3 = ADD32(0, 0XD);
L_43005D84:
    // 0x43005D84: b           L_43005D90
    // 0x43005D88: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
        goto L_43005D90;
    // 0x43005D88: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
L_43005D8C:
    // 0x43005D8C: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
L_43005D90:
    // 0x43005D90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005D94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005D98: jr          $ra
    // 0x43005D9C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x43005D9C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world7_5DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005DA0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43005DA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43005DA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43005DAC: lw          $t6, 0x1E4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1E4);
    // 0x43005DB0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43005DB4: addiu       $t7, $t6, -0x6
    ctx->r15 = ADD32(ctx->r14, -0X6);
    // 0x43005DB8: sltiu       $at, $t7, 0x7
    ctx->r1 = ctx->r15 < 0X7 ? 1 : 0;
    // 0x43005DBC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43005DC0: beq         $at, $zero, L_43005E18
    if (ctx->r1 == 0) {
        // 0x43005DC4: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_43005E18;
    }
    // 0x43005DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43005DC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x43005DCC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43005DD0: addu        $at, $at, $t7
    gpr jr_addend_43005DDC = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x43005DD4: lw          $t7, -0x6178($at)
    ctx->r15 = ADD32(ctx->r1, -0X6178);
    // 0x43005DD8: nop

    // 0x43005DDC: jr          $t7
    // 0x43005DE0: nop

    switch (jr_addend_43005DDC >> 2) {
        case 0: goto L_43005DE4; break;
        case 1: goto L_43005DEC; break;
        case 2: goto L_43005DF4; break;
        case 3: goto L_43005DFC; break;
        case 4: goto L_43005E04; break;
        case 5: goto L_43005E0C; break;
        case 6: goto L_43005E14; break;
        default: switch_error(__func__, 0x43005DDC, 0x43009E88);
    }
    // 0x43005DE0: nop

L_43005DE4:
    // 0x43005DE4: b           L_43005E18
    // 0x43005DE8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
        goto L_43005E18;
    // 0x43005DE8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
L_43005DEC:
    // 0x43005DEC: b           L_43005E18
    // 0x43005DF0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
        goto L_43005E18;
    // 0x43005DF0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
L_43005DF4:
    // 0x43005DF4: b           L_43005E18
    // 0x43005DF8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
        goto L_43005E18;
    // 0x43005DF8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
L_43005DFC:
    // 0x43005DFC: b           L_43005E18
    // 0x43005E00: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_43005E18;
    // 0x43005E00: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_43005E04:
    // 0x43005E04: b           L_43005E18
    // 0x43005E08: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
        goto L_43005E18;
    // 0x43005E08: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
L_43005E0C:
    // 0x43005E0C: b           L_43005E18
    // 0x43005E10: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
        goto L_43005E18;
    // 0x43005E10: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
L_43005E14:
    // 0x43005E14: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
L_43005E18:
    // 0x43005E18: beq         $a1, $zero, L_43005EA0
    if (ctx->r5 == 0) {
        // 0x43005E1C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43005EA0;
    }
    // 0x43005E1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005E20: jal         0x430047A0
    // 0x43005E24: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    ovl_enemy_world7_47A0(rdram, ctx);
        goto after_0;
    // 0x43005E24: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_0:
    // 0x43005E28: lw          $a1, 0x54($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X54);
    // 0x43005E2C: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x43005E30: and         $t8, $a1, $at
    ctx->r24 = ctx->r5 & ctx->r1;
    // 0x43005E34: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x43005E38: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43005E3C: beq         $v0, $at, L_43005EA0
    if (ctx->r2 == ctx->r1) {
        // 0x43005E40: or          $a1, $t8, $zero
        ctx->r5 = ctx->r24 | 0;
            goto L_43005EA0;
    }
    // 0x43005E40: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x43005E44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005E48: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x43005E4C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x43005E50: jal         0x43008294
    // 0x43005E54: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    ovl_enemy_world7_8294(rdram, ctx);
        goto after_1;
    // 0x43005E54: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x43005E58: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x43005E5C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x43005E60: beq         $v0, $zero, L_43005EA0
    if (ctx->r2 == 0) {
        // 0x43005E64: lui         $at, 0x200
        ctx->r1 = S32(0X200 << 16);
            goto L_43005EA0;
    }
    // 0x43005E64: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x43005E68: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x43005E6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005E70: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x43005E74: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
    // 0x43005E78: jal         0x43008130
    // 0x43005E7C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    ovl_enemy_world7_8130(rdram, ctx);
        goto after_2;
    // 0x43005E7C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_2:
    // 0x43005E80: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x43005E84: lui         $at, 0xFDFF
    ctx->r1 = S32(0XFDFF << 16);
    // 0x43005E88: bne         $t1, $zero, L_43005EA0
    if (ctx->r9 != 0) {
        // 0x43005E8C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_43005EA0;
    }
    // 0x43005E8C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x43005E90: lw          $t2, 0x54($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X54);
    // 0x43005E94: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x43005E98: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x43005E9C: sw          $t3, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r11;
L_43005EA0:
    // 0x43005EA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005EA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43005EA8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43005EAC: jr          $ra
    // 0x43005EB0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x43005EB0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world7_5EB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005EB4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43005EB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43005EBC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43005EC0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43005EC4: jal         0x43005CB8
    // 0x43005EC8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    ovl_enemy_world7_5CB8(rdram, ctx);
        goto after_0;
    // 0x43005EC8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x43005ECC: lw          $t6, 0x54($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X54);
    // 0x43005ED0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x43005ED4: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x43005ED8: beq         $t7, $zero, L_43005F0C
    if (ctx->r15 == 0) {
        // 0x43005EDC: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_43005F0C;
    }
    // 0x43005EDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43005EE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005EE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43005EE8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x43005EEC: jal         0x43001760
    // 0x43005EF0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    ovl_enemy_world7_1760(rdram, ctx);
        goto after_1;
    // 0x43005EF0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    after_1:
    // 0x43005EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005EF8: jal         0x43005078
    // 0x43005EFC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_2;
    // 0x43005EFC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_2:
    // 0x43005F00: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x43005F04: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x43005F08: nop

L_43005F0C:
    // 0x43005F0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005F10: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x43005F14: jal         0x43005DA0
    // 0x43005F18: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    ovl_enemy_world7_5DA0(rdram, ctx);
        goto after_3;
    // 0x43005F18: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_3:
    // 0x43005F1C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x43005F20: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x43005F24: beq         $v0, $zero, L_43005F3C
    if (ctx->r2 == 0) {
        // 0x43005F28: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_43005F3C;
    }
    // 0x43005F28: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x43005F2C: lw          $t8, 0x54($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X54);
    // 0x43005F30: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x43005F34: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x43005F38: sw          $t9, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r25;
L_43005F3C:
    // 0x43005F3C: sltiu       $at, $v1, 0x7
    ctx->r1 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x43005F40: beq         $at, $zero, L_43006000
    if (ctx->r1 == 0) {
        // 0x43005F44: sll         $t0, $v1, 2
        ctx->r8 = S32(ctx->r3 << 2);
            goto L_43006000;
    }
    // 0x43005F44: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x43005F48: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43005F4C: addu        $at, $at, $t0
    gpr jr_addend_43005F58 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x43005F50: lw          $t0, -0x615C($at)
    ctx->r8 = ADD32(ctx->r1, -0X615C);
    // 0x43005F54: nop

    // 0x43005F58: jr          $t0
    // 0x43005F5C: nop

    switch (jr_addend_43005F58 >> 2) {
        case 0: goto L_430060FC; break;
        case 1: goto L_43005F60; break;
        case 2: goto L_43005F8C; break;
        case 3: goto L_43005FA0; break;
        case 4: goto L_43005FB4; break;
        case 5: goto L_43005FC8; break;
        case 6: goto L_43005FD0; break;
        default: switch_error(__func__, 0x43005F58, 0x43009EA4);
    }
    // 0x43005F5C: nop

L_43005F60:
    // 0x43005F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005F64: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x43005F68: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x43005F6C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x43005F70: jal         0x43005078
    // 0x43005F74: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_4;
    // 0x43005F74: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_4:
    // 0x43005F78: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x43005F7C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x43005F80: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x43005F84: b           L_43006004
    // 0x43005F88: slti        $at, $v1, 0x7
    ctx->r1 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
        goto L_43006004;
    // 0x43005F88: slti        $at, $v1, 0x7
    ctx->r1 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
L_43005F8C:
    // 0x43005F8C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x43005F90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43005F94: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x43005F98: b           L_43006000
    // 0x43005F9C: swc1        $f4, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->f4.u32l;
        goto L_43006000;
    // 0x43005F9C: swc1        $f4, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->f4.u32l;
L_43005FA0:
    // 0x43005FA0: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x43005FA4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43005FA8: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x43005FAC: b           L_43006000
    // 0x43005FB0: swc1        $f6, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->f6.u32l;
        goto L_43006000;
    // 0x43005FB0: swc1        $f6, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->f6.u32l;
L_43005FB4:
    // 0x43005FB4: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x43005FB8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43005FBC: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x43005FC0: b           L_43006000
    // 0x43005FC4: swc1        $f8, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->f8.u32l;
        goto L_43006000;
    // 0x43005FC4: swc1        $f8, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->f8.u32l;
L_43005FC8:
    // 0x43005FC8: b           L_43006000
    // 0x43005FCC: addiu       $a2, $zero, 0x2B
    ctx->r6 = ADD32(0, 0X2B);
        goto L_43006000;
    // 0x43005FCC: addiu       $a2, $zero, 0x2B
    ctx->r6 = ADD32(0, 0X2B);
L_43005FD0:
    // 0x43005FD0: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x43005FD4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x43005FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005FDC: swc1        $f10, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->f10.u32l;
    // 0x43005FE0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x43005FE4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x43005FE8: jal         0x43001D64
    // 0x43005FEC: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    ovl_enemy_world7_1D64(rdram, ctx);
        goto after_5;
    // 0x43005FEC: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_5:
    // 0x43005FF0: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x43005FF4: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x43005FF8: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x43005FFC: nop

L_43006000:
    // 0x43006000: slti        $at, $v1, 0x7
    ctx->r1 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
L_43006004:
    // 0x43006004: bne         $at, $zero, L_43006040
    if (ctx->r1 != 0) {
        // 0x43006008: slti        $at, $v1, 0xC
        ctx->r1 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
            goto L_43006040;
    }
    // 0x43006008: slti        $at, $v1, 0xC
    ctx->r1 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
    // 0x4300600C: beq         $at, $zero, L_43006040
    if (ctx->r1 == 0) {
        // 0x43006010: addiu       $t1, $v1, -0x7
        ctx->r9 = ADD32(ctx->r3, -0X7);
            goto L_43006040;
    }
    // 0x43006010: addiu       $t1, $v1, -0x7
    ctx->r9 = ADD32(ctx->r3, -0X7);
    // 0x43006014: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x43006018: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x4300601C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x43006020: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43006024: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x43006028: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x4300602C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43006030: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x43006034: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x43006038: b           L_43006088
    // 0x4300603C: swc1        $f10, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->f10.u32l;
        goto L_43006088;
    // 0x4300603C: swc1        $f10, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->f10.u32l;
L_43006040:
    // 0x43006040: slti        $at, $v1, 0xC
    ctx->r1 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
    // 0x43006044: bne         $at, $zero, L_43006088
    if (ctx->r1 != 0) {
        // 0x43006048: slti        $at, $v1, 0x10
        ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
            goto L_43006088;
    }
    // 0x43006048: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x4300604C: beq         $at, $zero, L_43006088
    if (ctx->r1 == 0) {
        // 0x43006050: nop
    
            goto L_43006088;
    }
    // 0x43006050: nop

    // 0x43006054: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x43006058: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4300605C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x43006060: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43006064: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x43006068: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4300606C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x43006070: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x43006074: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x43006078: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x4300607C: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x43006080: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x43006084: swc1        $f18, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->f18.u32l;
L_43006088:
    // 0x43006088: bne         $a3, $zero, L_430060A8
    if (ctx->r7 != 0) {
        // 0x4300608C: nop
    
            goto L_430060A8;
    }
    // 0x4300608C: nop

    // 0x43006090: beq         $a2, $zero, L_430060A8
    if (ctx->r6 == 0) {
        // 0x43006094: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430060A8;
    }
    // 0x43006094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43006098: jal         0x43005078
    // 0x4300609C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_6;
    // 0x4300609C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_6:
    // 0x430060A0: b           L_43006100
    // 0x430060A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43006100;
    // 0x430060A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430060A8:
    // 0x430060A8: beq         $a3, $zero, L_43006100
    if (ctx->r7 == 0) {
        // 0x430060AC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43006100;
    }
    // 0x430060AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430060B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x430060B4: lwc1        $f6, 0x188($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X188);
    // 0x430060B8: nop

    // 0x430060BC: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x430060C0: nop

    // 0x430060C4: bc1t        L_43006100
    if (c1cs) {
        // 0x430060C8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43006100;
    }
    // 0x430060C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430060CC: lw          $t2, 0x54($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X54);
    // 0x430060D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430060D4: sll         $t3, $t2, 5
    ctx->r11 = S32(ctx->r10 << 5);
    // 0x430060D8: bltz        $t3, L_430060FC
    if (SIGNED(ctx->r11) < 0) {
        // 0x430060DC: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_430060FC;
    }
    // 0x430060DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x430060E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x430060E4: jal         0x43001DE0
    // 0x430060E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_enemy_world7_1DE0(rdram, ctx);
        goto after_7;
    // 0x430060E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x430060EC: lw          $t4, 0x54($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X54);
    // 0x430060F0: lui         $at, 0x400
    ctx->r1 = S32(0X400 << 16);
    // 0x430060F4: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x430060F8: sw          $t5, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r13;
L_430060FC:
    // 0x430060FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43006100:
    // 0x43006100: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43006104: jr          $ra
    // 0x43006108: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x43006108: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_enemy_world7_610C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300610C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x43006110: lw          $v0, 0xC($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC);
    // 0x43006114: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x43006118: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x4300611C: bne         $v0, $a3, L_43006130
    if (ctx->r2 != ctx->r7) {
        // 0x43006120: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_43006130;
    }
    // 0x43006120: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43006124: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x43006128: b           L_430061A4
    // 0x4300612C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_430061A4;
    // 0x4300612C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_43006130:
    // 0x43006130: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x43006134: bne         $v0, $a2, L_43006144
    if (ctx->r2 != ctx->r6) {
        // 0x43006138: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_43006144;
    }
    // 0x43006138: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4300613C: b           L_430061A4
    // 0x43006140: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
        goto L_430061A4;
    // 0x43006140: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_43006144:
    // 0x43006144: bne         $v0, $at, L_430061A4
    if (ctx->r2 != ctx->r1) {
        // 0x43006148: slti        $at, $a0, 0x16
        ctx->r1 = SIGNED(ctx->r4) < 0X16 ? 1 : 0;
            goto L_430061A4;
    }
    // 0x43006148: slti        $at, $a0, 0x16
    ctx->r1 = SIGNED(ctx->r4) < 0X16 ? 1 : 0;
    // 0x4300614C: bne         $at, $zero, L_43006164
    if (ctx->r1 != 0) {
        // 0x43006150: slti        $at, $a0, 0x1C
        ctx->r1 = SIGNED(ctx->r4) < 0X1C ? 1 : 0;
            goto L_43006164;
    }
    // 0x43006150: slti        $at, $a0, 0x1C
    ctx->r1 = SIGNED(ctx->r4) < 0X1C ? 1 : 0;
    // 0x43006154: beq         $at, $zero, L_43006168
    if (ctx->r1 == 0) {
        // 0x43006158: slti        $at, $a0, 0x1C
        ctx->r1 = SIGNED(ctx->r4) < 0X1C ? 1 : 0;
            goto L_43006168;
    }
    // 0x43006158: slti        $at, $a0, 0x1C
    ctx->r1 = SIGNED(ctx->r4) < 0X1C ? 1 : 0;
    // 0x4300615C: b           L_430061A4
    // 0x43006160: addiu       $v1, $zero, 0x13
    ctx->r3 = ADD32(0, 0X13);
        goto L_430061A4;
    // 0x43006160: addiu       $v1, $zero, 0x13
    ctx->r3 = ADD32(0, 0X13);
L_43006164:
    // 0x43006164: slti        $at, $a0, 0x1C
    ctx->r1 = SIGNED(ctx->r4) < 0X1C ? 1 : 0;
L_43006168:
    // 0x43006168: bne         $at, $zero, L_43006180
    if (ctx->r1 != 0) {
        // 0x4300616C: slti        $at, $a0, 0x22
        ctx->r1 = SIGNED(ctx->r4) < 0X22 ? 1 : 0;
            goto L_43006180;
    }
    // 0x4300616C: slti        $at, $a0, 0x22
    ctx->r1 = SIGNED(ctx->r4) < 0X22 ? 1 : 0;
    // 0x43006170: beq         $at, $zero, L_43006184
    if (ctx->r1 == 0) {
        // 0x43006174: addiu       $at, $zero, 0x22
        ctx->r1 = ADD32(0, 0X22);
            goto L_43006184;
    }
    // 0x43006174: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x43006178: b           L_430061A4
    // 0x4300617C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
        goto L_430061A4;
    // 0x4300617C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
L_43006180:
    // 0x43006180: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
L_43006184:
    // 0x43006184: bne         $a0, $at, L_43006198
    if (ctx->r4 != ctx->r1) {
        // 0x43006188: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_43006198;
    }
    // 0x43006188: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x4300618C: b           L_430061A4
    // 0x43006190: addiu       $v1, $zero, 0x15
    ctx->r3 = ADD32(0, 0X15);
        goto L_430061A4;
    // 0x43006190: addiu       $v1, $zero, 0x15
    ctx->r3 = ADD32(0, 0X15);
    // 0x43006194: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
L_43006198:
    // 0x43006198: bne         $a0, $at, L_430061A4
    if (ctx->r4 != ctx->r1) {
        // 0x4300619C: nop
    
            goto L_430061A4;
    }
    // 0x4300619C: nop

    // 0x430061A0: addiu       $v1, $zero, 0x16
    ctx->r3 = ADD32(0, 0X16);
L_430061A4:
    // 0x430061A4: bne         $v1, $zero, L_430062D0
    if (ctx->r3 != 0) {
        // 0x430061A8: nop
    
            goto L_430062D0;
    }
    // 0x430061A8: nop

    // 0x430061AC: bne         $a0, $a3, L_430061BC
    if (ctx->r4 != ctx->r7) {
        // 0x430061B0: nop
    
            goto L_430061BC;
    }
    // 0x430061B0: nop

    // 0x430061B4: jr          $ra
    // 0x430061B8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    return;
    // 0x430061B8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_430061BC:
    // 0x430061BC: bne         $a0, $a2, L_430061CC
    if (ctx->r4 != ctx->r6) {
        // 0x430061C0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_430061CC;
    }
    // 0x430061C0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x430061C4: jr          $ra
    // 0x430061C8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    return;
    // 0x430061C8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_430061CC:
    // 0x430061CC: bne         $a0, $at, L_430061E0
    if (ctx->r4 != ctx->r1) {
        // 0x430061D0: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_430061E0;
    }
    // 0x430061D0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x430061D4: jr          $ra
    // 0x430061D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    // 0x430061D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x430061DC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_430061E0:
    // 0x430061E0: bne         $a0, $at, L_430061F4
    if (ctx->r4 != ctx->r1) {
        // 0x430061E4: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_430061F4;
    }
    // 0x430061E4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x430061E8: jr          $ra
    // 0x430061EC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    return;
    // 0x430061EC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x430061F0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_430061F4:
    // 0x430061F4: bne         $a0, $at, L_43006208
    if (ctx->r4 != ctx->r1) {
        // 0x430061F8: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_43006208;
    }
    // 0x430061F8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x430061FC: jr          $ra
    // 0x43006200: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    return;
    // 0x43006200: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x43006204: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
L_43006208:
    // 0x43006208: bne         $a0, $at, L_4300621C
    if (ctx->r4 != ctx->r1) {
        // 0x4300620C: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_4300621C;
    }
    // 0x4300620C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x43006210: jr          $ra
    // 0x43006214: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    return;
    // 0x43006214: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x43006218: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
L_4300621C:
    // 0x4300621C: bne         $a0, $at, L_43006230
    if (ctx->r4 != ctx->r1) {
        // 0x43006220: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_43006230;
    }
    // 0x43006220: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x43006224: jr          $ra
    // 0x43006228: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    return;
    // 0x43006228: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x4300622C: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
L_43006230:
    // 0x43006230: bne         $a0, $at, L_43006244
    if (ctx->r4 != ctx->r1) {
        // 0x43006234: addiu       $at, $zero, 0x11
        ctx->r1 = ADD32(0, 0X11);
            goto L_43006244;
    }
    // 0x43006234: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x43006238: jr          $ra
    // 0x4300623C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    return;
    // 0x4300623C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x43006240: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
L_43006244:
    // 0x43006244: bne         $a0, $at, L_43006258
    if (ctx->r4 != ctx->r1) {
        // 0x43006248: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_43006258;
    }
    // 0x43006248: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x4300624C: jr          $ra
    // 0x43006250: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    return;
    // 0x43006250: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x43006254: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
L_43006258:
    // 0x43006258: bne         $a0, $at, L_4300626C
    if (ctx->r4 != ctx->r1) {
        // 0x4300625C: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_4300626C;
    }
    // 0x4300625C: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x43006260: jr          $ra
    // 0x43006264: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    return;
    // 0x43006264: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x43006268: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
L_4300626C:
    // 0x4300626C: bne         $a0, $at, L_43006280
    if (ctx->r4 != ctx->r1) {
        // 0x43006270: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_43006280;
    }
    // 0x43006270: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x43006274: jr          $ra
    // 0x43006278: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    return;
    // 0x43006278: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x4300627C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
L_43006280:
    // 0x43006280: bne         $a0, $at, L_43006294
    if (ctx->r4 != ctx->r1) {
        // 0x43006284: addiu       $at, $zero, 0x15
        ctx->r1 = ADD32(0, 0X15);
            goto L_43006294;
    }
    // 0x43006284: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x43006288: jr          $ra
    // 0x4300628C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    return;
    // 0x4300628C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x43006290: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
L_43006294:
    // 0x43006294: bne         $a0, $at, L_430062A4
    if (ctx->r4 != ctx->r1) {
        // 0x43006298: nop
    
            goto L_430062A4;
    }
    // 0x43006298: nop

    // 0x4300629C: jr          $ra
    // 0x430062A0: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    return;
    // 0x430062A0: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
L_430062A4:
    // 0x430062A4: bne         $a1, $zero, L_430062B4
    if (ctx->r5 != 0) {
        // 0x430062A8: nop
    
            goto L_430062B4;
    }
    // 0x430062A8: nop

    // 0x430062AC: jr          $ra
    // 0x430062B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x430062B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_430062B4:
    // 0x430062B4: bne         $a1, $a3, L_430062C4
    if (ctx->r5 != ctx->r7) {
        // 0x430062B8: nop
    
            goto L_430062C4;
    }
    // 0x430062B8: nop

    // 0x430062BC: jr          $ra
    // 0x430062C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x430062C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_430062C4:
    // 0x430062C4: bne         $a1, $a2, L_430062D0
    if (ctx->r5 != ctx->r6) {
        // 0x430062C8: nop
    
            goto L_430062D0;
    }
    // 0x430062C8: nop

    // 0x430062CC: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_430062D0:
    // 0x430062D0: jr          $ra
    // 0x430062D4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x430062D4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world7_62D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430062D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430062DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430062E0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x430062E4: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x430062E8: jal         0x43003B98
    // 0x430062EC: nop

    ovl_enemy_world7_3B98(rdram, ctx);
        goto after_0;
    // 0x430062EC: nop

    after_0:
    // 0x430062F0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x430062F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430062F8: lw          $v1, 0xC($t7)
    ctx->r3 = MEM_W(ctx->r15, 0XC);
    // 0x430062FC: beq         $v0, $at, L_43006358
    if (ctx->r2 == ctx->r1) {
        // 0x43006300: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_43006358;
    }
    // 0x43006300: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43006304: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x43006308: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4300630C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x43006310: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x43006314: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43006318: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x4300631C: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x43006320: nop

    // 0x43006324: swc1        $f4, 0x1EC($v0)
    MEM_W(0X1EC, ctx->r2) = ctx->f4.u32l;
    // 0x43006328: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x4300632C: nop

    // 0x43006330: swc1        $f6, 0x1F0($v0)
    MEM_W(0X1F0, ctx->r2) = ctx->f6.u32l;
    // 0x43006334: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x43006338: nop

    // 0x4300633C: swc1        $f8, 0x1F4($v0)
    MEM_W(0X1F4, ctx->r2) = ctx->f8.u32l;
    // 0x43006340: jal         0x4300610C
    // 0x43006344: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    ovl_enemy_world7_610C(rdram, ctx);
        goto after_1;
    // 0x43006344: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_1:
    // 0x43006348: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x4300634C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43006350: jal         0x43005EB4
    // 0x43006354: sw          $v0, 0x1E4($a0)
    MEM_W(0X1E4, ctx->r4) = ctx->r2;
    ovl_enemy_world7_5EB4(rdram, ctx);
        goto after_2;
    // 0x43006354: sw          $v0, 0x1E4($a0)
    MEM_W(0X1E4, ctx->r4) = ctx->r2;
    after_2:
L_43006358:
    // 0x43006358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300635C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43006360: jr          $ra
    // 0x43006364: nop

    return;
    // 0x43006364: nop

;}
RECOMP_FUNC void ovl_enemy_world7_6368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006368: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300636C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006370: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43006374: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43006378: jal         0x43003B98
    // 0x4300637C: nop

    ovl_enemy_world7_3B98(rdram, ctx);
        goto after_0;
    // 0x4300637C: nop

    after_0:
    // 0x43006380: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x43006384: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43006388: lw          $a2, 0xC($t7)
    ctx->r6 = MEM_W(ctx->r15, 0XC);
    // 0x4300638C: beq         $v0, $at, L_430063BC
    if (ctx->r2 == ctx->r1) {
        // 0x43006390: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_430063BC;
    }
    // 0x43006390: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43006394: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43006398: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x4300639C: jal         0x4300610C
    // 0x430063A0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_enemy_world7_610C(rdram, ctx);
        goto after_1;
    // 0x430063A0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x430063A4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x430063A8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x430063AC: sw          $v0, 0x1E4($a0)
    MEM_W(0X1E4, ctx->r4) = ctx->r2;
    // 0x430063B0: lw          $a1, 0x4($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X4);
    // 0x430063B4: jal         0x43005EB4
    // 0x430063B8: nop

    ovl_enemy_world7_5EB4(rdram, ctx);
        goto after_2;
    // 0x430063B8: nop

    after_2:
L_430063BC:
    // 0x430063BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430063C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430063C4: jr          $ra
    // 0x430063C8: nop

    return;
    // 0x430063C8: nop

;}
RECOMP_FUNC void ovl_enemy_world7_63CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430063CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x430063D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430063D4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x430063D8: lw          $t6, 0xC($a1)
    ctx->r14 = MEM_W(ctx->r5, 0XC);
    // 0x430063DC: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x430063E0: jal         0x43003B98
    // 0x430063E4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    ovl_enemy_world7_3B98(rdram, ctx);
        goto after_0;
    // 0x430063E4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    after_0:
    // 0x430063E8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x430063EC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x430063F0: sw          $t7, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r15;
    // 0x430063F4: lw          $t8, 0x64($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X64);
    // 0x430063F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x430063FC: slti        $at, $t8, 0xA
    ctx->r1 = SIGNED(ctx->r24) < 0XA ? 1 : 0;
    // 0x43006400: beq         $at, $zero, L_4300643C
    if (ctx->r1 == 0) {
        // 0x43006404: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4300643C;
    }
    // 0x43006404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006408: lw          $a2, 0x64($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X64);
    // 0x4300640C: jal         0x43001A78
    // 0x43006410: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_enemy_world7_1A78(rdram, ctx);
        goto after_1;
    // 0x43006410: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x43006414: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x43006418: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x4300641C: lw          $t9, 0x64($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X64);
    // 0x43006420: nop

    // 0x43006424: sw          $t9, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r25;
    // 0x43006428: lw          $t1, 0x64($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X64);
    // 0x4300642C: nop

    // 0x43006430: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x43006434: sw          $t2, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r10;
    // 0x43006438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4300643C:
    // 0x4300643C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43006440: jr          $ra
    // 0x43006444: nop

    return;
    // 0x43006444: nop

;}
RECOMP_FUNC void ovl_enemy_world7_6448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006448: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300644C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006450: lw          $a2, 0xC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC);
    // 0x43006454: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43006458: jal         0x43003B98
    // 0x4300645C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_enemy_world7_3B98(rdram, ctx);
        goto after_0;
    // 0x4300645C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x43006460: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x43006464: addiu       $t6, $v0, 0x14
    ctx->r14 = ADD32(ctx->r2, 0X14);
    // 0x43006468: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x4300646C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x43006470: jal         0x43005218
    // 0x43006474: sw          $t6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r14;
    ovl_enemy_world7_5218(rdram, ctx);
        goto after_1;
    // 0x43006474: sw          $t6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r14;
    after_1:
    // 0x43006478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300647C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43006480: jr          $ra
    // 0x43006484: nop

    return;
    // 0x43006484: nop

;}
RECOMP_FUNC void ovl_enemy_world7_6488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006488: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300648C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006490: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43006494: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43006498: jal         0x43003B98
    // 0x4300649C: nop

    ovl_enemy_world7_3B98(rdram, ctx);
        goto after_0;
    // 0x4300649C: nop

    after_0:
    // 0x430064A0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x430064A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430064A8: lw          $a2, 0xC($t7)
    ctx->r6 = MEM_W(ctx->r15, 0XC);
    // 0x430064AC: beq         $v0, $at, L_430064DC
    if (ctx->r2 == ctx->r1) {
        // 0x430064B0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_430064DC;
    }
    // 0x430064B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x430064B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x430064B8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x430064BC: jal         0x4300610C
    // 0x430064C0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_enemy_world7_610C(rdram, ctx);
        goto after_1;
    // 0x430064C0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x430064C4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x430064C8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x430064CC: sw          $v0, 0x1E4($a0)
    MEM_W(0X1E4, ctx->r4) = ctx->r2;
    // 0x430064D0: lw          $a1, 0x4($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X4);
    // 0x430064D4: jal         0x43005EB4
    // 0x430064D8: nop

    ovl_enemy_world7_5EB4(rdram, ctx);
        goto after_2;
    // 0x430064D8: nop

    after_2:
L_430064DC:
    // 0x430064DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430064E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430064E4: jr          $ra
    // 0x430064E8: nop

    return;
    // 0x430064E8: nop

;}
RECOMP_FUNC void ovl_enemy_world7_64EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430064EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430064F0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x430064F4: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x430064F8: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x430064FC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x43006500: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x43006504: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43006508: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x4300650C: lw          $s1, 0xC($a0)
    ctx->r17 = MEM_W(ctx->r4, 0XC);
    // 0x43006510: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x43006514: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x43006518: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300651C: bne         $v0, $at, L_43006540
    if (ctx->r2 != ctx->r1) {
        // 0x43006520: addiu       $at, $zero, 0x1A
        ctx->r1 = ADD32(0, 0X1A);
            goto L_43006540;
    }
    // 0x43006520: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x43006524: lw          $s2, 0x4($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X4);
    // 0x43006528: jal         0x430019B0
    // 0x4300652C: nop

    ovl_enemy_world7_19B0(rdram, ctx);
        goto after_0;
    // 0x4300652C: nop

    after_0:
    // 0x43006530: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x43006534: b           L_430066AC
    // 0x43006538: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
        goto L_430066AC;
    // 0x43006538: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x4300653C: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
L_43006540:
    // 0x43006540: bne         $v0, $at, L_43006570
    if (ctx->r2 != ctx->r1) {
        // 0x43006544: addiu       $at, $zero, 0x20
        ctx->r1 = ADD32(0, 0X20);
            goto L_43006570;
    }
    // 0x43006544: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x43006548: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x4300654C: jal         0x43003B98
    // 0x43006550: nop

    ovl_enemy_world7_3B98(rdram, ctx);
        goto after_1;
    // 0x43006550: nop

    after_1:
    // 0x43006554: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x43006558: beq         $v0, $s5, L_430066AC
    if (ctx->r2 == ctx->r21) {
        // 0x4300655C: addiu       $t6, $v0, 0x14
        ctx->r14 = ADD32(ctx->r2, 0X14);
            goto L_430066AC;
    }
    // 0x4300655C: addiu       $t6, $v0, 0x14
    ctx->r14 = ADD32(ctx->r2, 0X14);
    // 0x43006560: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x43006564: b           L_430066AC
    // 0x43006568: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
        goto L_430066AC;
    // 0x43006568: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x4300656C: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
L_43006570:
    // 0x43006570: bne         $v0, $at, L_430065FC
    if (ctx->r2 != ctx->r1) {
        // 0x43006574: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_430065FC;
    }
    // 0x43006574: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x43006578: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x4300657C: jal         0x43003B98
    // 0x43006580: nop

    ovl_enemy_world7_3B98(rdram, ctx);
        goto after_2;
    // 0x43006580: nop

    after_2:
    // 0x43006584: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x43006588: beq         $v0, $s5, L_430066AC
    if (ctx->r2 == ctx->r21) {
        // 0x4300658C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_430066AC;
    }
    // 0x4300658C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43006590: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x43006594: nop

    // 0x43006598: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x4300659C: nop

    // 0x430065A0: beq         $t7, $zero, L_430065CC
    if (ctx->r15 == 0) {
        // 0x430065A4: nop
    
            goto L_430065CC;
    }
    // 0x430065A4: nop

    // 0x430065A8: lw          $t8, 0x54($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X54);
    // 0x430065AC: lui         $at, 0x40
    ctx->r1 = S32(0X40 << 16);
    // 0x430065B0: ori         $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 | 0X1000;
    // 0x430065B4: sw          $t9, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r25;
    // 0x430065B8: or          $t1, $t9, $at
    ctx->r9 = ctx->r25 | ctx->r1;
    // 0x430065BC: jal         0x430014D8
    // 0x430065C0: sw          $t1, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r9;
    ovl_enemy_world7_14D8(rdram, ctx);
        goto after_3;
    // 0x430065C0: sw          $t1, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r9;
    after_3:
    // 0x430065C4: b           L_430066B0
    // 0x430065C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_430066B0;
    // 0x430065C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_430065CC:
    // 0x430065CC: lw          $t2, 0x54($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X54);
    // 0x430065D0: addiu       $at, $zero, -0x1001
    ctx->r1 = ADD32(0, -0X1001);
    // 0x430065D4: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x430065D8: lui         $at, 0xFFBF
    ctx->r1 = S32(0XFFBF << 16);
    // 0x430065DC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x430065E0: sw          $t3, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r11;
    // 0x430065E4: and         $t5, $t3, $at
    ctx->r13 = ctx->r11 & ctx->r1;
    // 0x430065E8: jal         0x43001F1C
    // 0x430065EC: sw          $t5, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r13;
    ovl_enemy_world7_1F1C(rdram, ctx);
        goto after_4;
    // 0x430065EC: sw          $t5, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r13;
    after_4:
    // 0x430065F0: b           L_430066B0
    // 0x430065F4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_430066B0;
    // 0x430065F4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x430065F8: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
L_430065FC:
    // 0x430065FC: bne         $v0, $at, L_430066AC
    if (ctx->r2 != ctx->r1) {
        // 0x43006600: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_430066AC;
    }
    // 0x43006600: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x43006604: jal         0x43005250
    // 0x43006608: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world7_5250(rdram, ctx);
        goto after_5;
    // 0x43006608: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x4300660C: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x43006610: lw          $s4, -0x5D70($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X5D70);
    // 0x43006614: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x43006618: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x4300661C: blez        $s4, L_430066AC
    if (SIGNED(ctx->r20) <= 0) {
        // 0x43006620: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_430066AC;
    }
    // 0x43006620: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x43006624: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x43006628: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x4300662C: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
L_43006630:
    // 0x43006630: beq         $at, $zero, L_430066A0
    if (ctx->r1 == 0) {
        // 0x43006634: nop
    
            goto L_430066A0;
    }
    // 0x43006634: nop

L_43006638:
    // 0x43006638: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x4300663C: nop

    // 0x43006640: beq         $s2, $t6, L_43006690
    if (ctx->r18 == ctx->r14) {
        // 0x43006644: nop
    
            goto L_43006690;
    }
    // 0x43006644: nop

    // 0x43006648: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x4300664C: nop

    // 0x43006650: beq         $s2, $t7, L_43006690
    if (ctx->r18 == ctx->r15) {
        // 0x43006654: nop
    
            goto L_43006690;
    }
    // 0x43006654: nop

    // 0x43006658: lw          $t8, 0x54($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X54);
    // 0x4300665C: nop

    // 0x43006660: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x43006664: beq         $t9, $zero, L_43006688
    if (ctx->r25 == 0) {
        // 0x43006668: nop
    
            goto L_43006688;
    }
    // 0x43006668: nop

    // 0x4300666C: lw          $t0, 0x190($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X190);
    // 0x43006670: nop

    // 0x43006674: beq         $s5, $t0, L_43006684
    if (ctx->r21 == ctx->r8) {
        // 0x43006678: nop
    
            goto L_43006684;
    }
    // 0x43006678: nop

    // 0x4300667C: jal         0x43002CD8
    // 0x43006680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_2CD8(rdram, ctx);
        goto after_6;
    // 0x43006680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_43006684:
    // 0x43006684: sw          $zero, 0x194($s0)
    MEM_W(0X194, ctx->r16) = 0;
L_43006688:
    // 0x43006688: b           L_430066A0
    // 0x4300668C: addiu       $s0, $s0, 0x268
    ctx->r16 = ADD32(ctx->r16, 0X268);
        goto L_430066A0;
    // 0x4300668C: addiu       $s0, $s0, 0x268
    ctx->r16 = ADD32(ctx->r16, 0X268);
L_43006690:
    // 0x43006690: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43006694: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x43006698: bne         $at, $zero, L_43006638
    if (ctx->r1 != 0) {
        // 0x4300669C: addiu       $s0, $s0, 0x268
        ctx->r16 = ADD32(ctx->r16, 0X268);
            goto L_43006638;
    }
    // 0x4300669C: addiu       $s0, $s0, 0x268
    ctx->r16 = ADD32(ctx->r16, 0X268);
L_430066A0:
    // 0x430066A0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x430066A4: bne         $s3, $s4, L_43006630
    if (ctx->r19 != ctx->r20) {
        // 0x430066A8: slti        $at, $s1, 0xA
        ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
            goto L_43006630;
    }
    // 0x430066A8: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
L_430066AC:
    // 0x430066AC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_430066B0:
    // 0x430066B0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x430066B4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x430066B8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x430066BC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x430066C0: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x430066C4: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x430066C8: jr          $ra
    // 0x430066CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x430066CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_enemy_world7_66D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430066D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430066D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430066D8: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x430066DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430066E0: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    // 0x430066E4: nop

    // 0x430066E8: beq         $a1, $at, L_430067A8
    if (ctx->r5 == ctx->r1) {
        // 0x430066EC: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_430067A8;
    }
    // 0x430066EC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x430066F0: jal         0x43003B98
    // 0x430066F4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    ovl_enemy_world7_3B98(rdram, ctx);
        goto after_0;
    // 0x430066F4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x430066F8: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x430066FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43006700: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x43006704: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x43006708: bne         $v0, $zero, L_43006754
    if (ctx->r2 != 0) {
        // 0x4300670C: nop
    
            goto L_43006754;
    }
    // 0x4300670C: nop

    // 0x43006710: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x43006714: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x43006718: bne         $v0, $at, L_43006738
    if (ctx->r2 != ctx->r1) {
        // 0x4300671C: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_43006738;
    }
    // 0x4300671C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x43006720: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x43006724: jal         0x430018CC
    // 0x43006728: nop

    ovl_enemy_world7_18CC(rdram, ctx);
        goto after_1;
    // 0x43006728: nop

    after_1:
    // 0x4300672C: b           L_430067AC
    // 0x43006730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_430067AC;
    // 0x43006730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006734: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_43006738:
    // 0x43006738: bne         $v0, $at, L_430067AC
    if (ctx->r2 != ctx->r1) {
        // 0x4300673C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430067AC;
    }
    // 0x4300673C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006740: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x43006744: jal         0x43001818
    // 0x43006748: nop

    ovl_enemy_world7_1818(rdram, ctx);
        goto after_2;
    // 0x43006748: nop

    after_2:
    // 0x4300674C: b           L_430067AC
    // 0x43006750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_430067AC;
    // 0x43006750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43006754:
    // 0x43006754: bne         $v0, $at, L_43006784
    if (ctx->r2 != ctx->r1) {
        // 0x43006758: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_43006784;
    }
    // 0x43006758: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4300675C: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    // 0x43006760: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x43006764: bne         $t6, $at, L_43006784
    if (ctx->r14 != ctx->r1) {
        // 0x43006768: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_43006784;
    }
    // 0x43006768: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4300676C: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x43006770: jal         0x430018CC
    // 0x43006774: nop

    ovl_enemy_world7_18CC(rdram, ctx);
        goto after_3;
    // 0x43006774: nop

    after_3:
    // 0x43006778: b           L_430067AC
    // 0x4300677C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_430067AC;
    // 0x4300677C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006780: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_43006784:
    // 0x43006784: bne         $v0, $at, L_430067AC
    if (ctx->r2 != ctx->r1) {
        // 0x43006788: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430067AC;
    }
    // 0x43006788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300678C: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x43006790: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x43006794: bne         $t7, $at, L_430067AC
    if (ctx->r15 != ctx->r1) {
        // 0x43006798: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430067AC;
    }
    // 0x43006798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300679C: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x430067A0: jal         0x43001964
    // 0x430067A4: nop

    ovl_enemy_world7_1964(rdram, ctx);
        goto after_4;
    // 0x430067A4: nop

    after_4:
L_430067A8:
    // 0x430067A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430067AC:
    // 0x430067AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430067B0: jr          $ra
    // 0x430067B4: nop

    return;
    // 0x430067B4: nop

;}
RECOMP_FUNC void ovl_enemy_world7_67B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430067B8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x430067BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430067C0: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x430067C4: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x430067C8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x430067CC: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x430067D0: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x430067D4: jal         0x430006C4
    // 0x430067D8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_0;
    // 0x430067D8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x430067DC: jal         0x43000DE4
    // 0x430067E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_enemy_world7_DE4(rdram, ctx);
        goto after_1;
    // 0x430067E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x430067E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x430067E8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x430067EC: jal         0x430006C4
    // 0x430067F0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_2;
    // 0x430067F0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x430067F4: beq         $v0, $zero, L_43006808
    if (ctx->r2 == 0) {
        // 0x430067F8: lw          $t6, 0x5C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X5C);
            goto L_43006808;
    }
    // 0x430067F8: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x430067FC: b           L_430068D8
    // 0x43006800: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_430068D8;
    // 0x43006800: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43006804: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
L_43006808:
    // 0x43006808: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x4300680C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x43006810: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43006814: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43006818: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x4300681C: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43006820: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x43006824: sub.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x43006828: c.le.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl <= ctx->f2.fl;
    // 0x4300682C: nop

    // 0x43006830: bc1f        L_430068D4
    if (!c1cs) {
        // 0x43006834: lw          $v0, 0x24($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X24);
            goto L_430068D4;
    }
    // 0x43006834: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x43006838: add.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x4300683C: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x43006840: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    // 0x43006844: nop

    // 0x43006848: bc1f        L_430068D4
    if (!c1cs) {
        // 0x4300684C: lw          $v0, 0x24($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X24);
            goto L_430068D4;
    }
    // 0x4300684C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x43006850: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x43006854: sub.s       $f18, $f12, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x43006858: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x4300685C: nop

    // 0x43006860: bc1f        L_430068D4
    if (!c1cs) {
        // 0x43006864: lw          $v0, 0x24($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X24);
            goto L_430068D4;
    }
    // 0x43006864: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x43006868: add.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x4300686C: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x43006870: c.le.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl <= ctx->f4.fl;
    // 0x43006874: nop

    // 0x43006878: bc1f        L_430068D4
    if (!c1cs) {
        // 0x4300687C: lw          $v0, 0x24($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X24);
            goto L_430068D4;
    }
    // 0x4300687C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x43006880: beq         $t7, $zero, L_430068CC
    if (ctx->r15 == 0) {
        // 0x43006884: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_430068CC;
    }
    // 0x43006884: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x43006888: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x4300688C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x43006890: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x43006894: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43006898: sub.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x4300689C: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x430068A0: nop

    // 0x430068A4: bc1f        L_430068D4
    if (!c1cs) {
        // 0x430068A8: lw          $v0, 0x24($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X24);
            goto L_430068D4;
    }
    // 0x430068A8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x430068AC: add.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x430068B0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x430068B4: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x430068B8: nop

    // 0x430068BC: bc1f        L_430068D4
    if (!c1cs) {
        // 0x430068C0: lw          $v0, 0x24($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X24);
            goto L_430068D4;
    }
    // 0x430068C0: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x430068C4: b           L_430068D0
    // 0x430068C8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
        goto L_430068D0;
    // 0x430068C8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_430068CC:
    // 0x430068CC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_430068D0:
    // 0x430068D0: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_430068D4:
    // 0x430068D4: nop

L_430068D8:
    // 0x430068D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430068DC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x430068E0: jr          $ra
    // 0x430068E4: nop

    return;
    // 0x430068E4: nop

;}
RECOMP_FUNC void ovl_enemy_world7_68E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430068E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430068EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430068F0: jal         0x430067B8
    // 0x430068F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world7_67B8(rdram, ctx);
        goto after_0;
    // 0x430068F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x430068F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430068FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006900: jr          $ra
    // 0x43006904: nop

    return;
    // 0x43006904: nop

;}
RECOMP_FUNC void ovl_enemy_world7_6908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006908: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300690C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006910: jal         0x430067B8
    // 0x43006914: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_enemy_world7_67B8(rdram, ctx);
        goto after_0;
    // 0x43006914: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x43006918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300691C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006920: jr          $ra
    // 0x43006924: nop

    return;
    // 0x43006924: nop

;}
RECOMP_FUNC void ovl_enemy_world7_6928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006928: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300692C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43006930: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43006934: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x43006938: lw          $v0, 0x1C0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C0);
    // 0x4300693C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43006940: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x43006944: bgtz        $v0, L_4300699C
    if (SIGNED(ctx->r2) > 0) {
        // 0x43006948: sw          $t6, 0x1C0($a0)
        MEM_W(0X1C0, ctx->r4) = ctx->r14;
            goto L_4300699C;
    }
    // 0x43006948: sw          $t6, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = ctx->r14;
    // 0x4300694C: jal         0x430068E8
    // 0x43006950: nop

    ovl_enemy_world7_68E8(rdram, ctx);
        goto after_0;
    // 0x43006950: nop

    after_0:
    // 0x43006954: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43006958: bne         $v0, $at, L_4300697C
    if (ctx->r2 != ctx->r1) {
        // 0x4300695C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300697C;
    }
    // 0x4300695C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43006960: lw          $t7, 0x1C8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1C8);
    // 0x43006964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43006968: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x4300696C: jal         0x43001F1C
    // 0x43006970: sw          $t8, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r24;
    ovl_enemy_world7_1F1C(rdram, ctx);
        goto after_1;
    // 0x43006970: sw          $t8, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r24;
    after_1:
    // 0x43006974: b           L_43006994
    // 0x43006978: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
        goto L_43006994;
    // 0x43006978: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
L_4300697C:
    // 0x4300697C: lw          $t9, 0x1C8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1C8);
    // 0x43006980: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x43006984: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x43006988: jal         0x430014D8
    // 0x4300698C: sw          $t0, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r8;
    ovl_enemy_world7_14D8(rdram, ctx);
        goto after_2;
    // 0x4300698C: sw          $t0, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r8;
    after_2:
    // 0x43006990: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
L_43006994:
    // 0x43006994: nop

    // 0x43006998: sw          $t1, 0x1C0($s0)
    MEM_W(0X1C0, ctx->r16) = ctx->r9;
L_4300699C:
    // 0x4300699C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430069A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430069A4: jr          $ra
    // 0x430069A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x430069A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world7_69AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430069AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430069B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430069B4: lw          $t7, 0x248($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X248);
    // 0x430069B8: lw          $t6, 0x1A4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1A4);
    // 0x430069BC: slti        $at, $a1, 0x8
    ctx->r1 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x430069C0: nor         $t8, $t7, $zero
    ctx->r24 = ~(ctx->r15 | 0);
    // 0x430069C4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x430069C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430069CC: bne         $at, $zero, L_430069DC
    if (ctx->r1 != 0) {
        // 0x430069D0: and         $t0, $t6, $t8
        ctx->r8 = ctx->r14 & ctx->r24;
            goto L_430069DC;
    }
    // 0x430069D0: and         $t0, $t6, $t8
    ctx->r8 = ctx->r14 & ctx->r24;
    // 0x430069D4: b           L_430069F0
    // 0x430069D8: addiu       $v0, $a1, -0x8
    ctx->r2 = ADD32(ctx->r5, -0X8);
        goto L_430069F0;
    // 0x430069D8: addiu       $v0, $a1, -0x8
    ctx->r2 = ADD32(ctx->r5, -0X8);
L_430069DC:
    // 0x430069DC: bgez        $a3, L_430069EC
    if (SIGNED(ctx->r7) >= 0) {
        // 0x430069E0: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_430069EC;
    }
    // 0x430069E0: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x430069E4: b           L_430069EC
    // 0x430069E8: addiu       $v1, $a3, 0x8
    ctx->r3 = ADD32(ctx->r7, 0X8);
        goto L_430069EC;
    // 0x430069E8: addiu       $v1, $a3, 0x8
    ctx->r3 = ADD32(ctx->r7, 0X8);
L_430069EC:
    // 0x430069EC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_430069F0:
    // 0x430069F0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x430069F4: sllv        $t1, $t9, $v0
    ctx->r9 = S32(ctx->r25 << (ctx->r2 & 31));
    // 0x430069F8: and         $t2, $t1, $t0
    ctx->r10 = ctx->r9 & ctx->r8;
    // 0x430069FC: beq         $t2, $zero, L_43006AFC
    if (ctx->r10 == 0) {
        // 0x43006A00: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43006AFC;
    }
    // 0x43006A00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006A04: lw          $t3, 0x54($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X54);
    // 0x43006A08: slti        $at, $a3, 0x8
    ctx->r1 = SIGNED(ctx->r7) < 0X8 ? 1 : 0;
    // 0x43006A0C: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x43006A10: bgez        $t4, L_43006A78
    if (SIGNED(ctx->r12) >= 0) {
        // 0x43006A14: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_43006A78;
    }
    // 0x43006A14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43006A18: bne         $at, $zero, L_43006A28
    if (ctx->r1 != 0) {
        // 0x43006A1C: nop
    
            goto L_43006A28;
    }
    // 0x43006A1C: nop

    // 0x43006A20: b           L_43006A3C
    // 0x43006A24: addiu       $v0, $a3, -0x8
    ctx->r2 = ADD32(ctx->r7, -0X8);
        goto L_43006A3C;
    // 0x43006A24: addiu       $v0, $a3, -0x8
    ctx->r2 = ADD32(ctx->r7, -0X8);
L_43006A28:
    // 0x43006A28: bgez        $a3, L_43006A38
    if (SIGNED(ctx->r7) >= 0) {
        // 0x43006A2C: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_43006A38;
    }
    // 0x43006A2C: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x43006A30: b           L_43006A38
    // 0x43006A34: addiu       $v1, $a3, 0x8
    ctx->r3 = ADD32(ctx->r7, 0X8);
        goto L_43006A38;
    // 0x43006A34: addiu       $v1, $a3, 0x8
    ctx->r3 = ADD32(ctx->r7, 0X8);
L_43006A38:
    // 0x43006A38: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43006A3C:
    // 0x43006A3C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x43006A40: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x43006A44: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43006A48: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43006A4C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x43006A50: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x43006A54: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43006A58: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x43006A5C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x43006A60: jal         0x430048A4
    // 0x43006A64: nop

    ovl_enemy_world7_48A4(rdram, ctx);
        goto after_0;
    // 0x43006A64: nop

    after_0:
    // 0x43006A68: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43006A6C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x43006A70: b           L_43006A78
    // 0x43006A74: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
        goto L_43006A78;
    // 0x43006A74: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_43006A78:
    // 0x43006A78: beq         $a2, $zero, L_43006AF8
    if (ctx->r6 == 0) {
        // 0x43006A7C: slti        $at, $a3, 0x8
        ctx->r1 = SIGNED(ctx->r7) < 0X8 ? 1 : 0;
            goto L_43006AF8;
    }
    // 0x43006A7C: slti        $at, $a3, 0x8
    ctx->r1 = SIGNED(ctx->r7) < 0X8 ? 1 : 0;
    // 0x43006A80: bne         $at, $zero, L_43006A90
    if (ctx->r1 != 0) {
        // 0x43006A84: nop
    
            goto L_43006A90;
    }
    // 0x43006A84: nop

    // 0x43006A88: b           L_43006AA4
    // 0x43006A8C: addiu       $v0, $a3, -0x8
    ctx->r2 = ADD32(ctx->r7, -0X8);
        goto L_43006AA4;
    // 0x43006A8C: addiu       $v0, $a3, -0x8
    ctx->r2 = ADD32(ctx->r7, -0X8);
L_43006A90:
    // 0x43006A90: bgez        $a3, L_43006AA0
    if (SIGNED(ctx->r7) >= 0) {
        // 0x43006A94: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_43006AA0;
    }
    // 0x43006A94: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x43006A98: b           L_43006AA0
    // 0x43006A9C: addiu       $v1, $a3, 0x8
    ctx->r3 = ADD32(ctx->r7, 0X8);
        goto L_43006AA0;
    // 0x43006A9C: addiu       $v1, $a3, 0x8
    ctx->r3 = ADD32(ctx->r7, 0X8);
L_43006AA0:
    // 0x43006AA0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43006AA4:
    // 0x43006AA4: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x43006AA8: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x43006AAC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x43006AB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43006AB4: slti        $at, $a3, 0x8
    ctx->r1 = SIGNED(ctx->r7) < 0X8 ? 1 : 0;
    // 0x43006AB8: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x43006ABC: bne         $at, $zero, L_43006ACC
    if (ctx->r1 != 0) {
        // 0x43006AC0: swc1        $f6, 0x18($a0)
        MEM_W(0X18, ctx->r4) = ctx->f6.u32l;
            goto L_43006ACC;
    }
    // 0x43006AC0: swc1        $f6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f6.u32l;
    // 0x43006AC4: b           L_43006AE0
    // 0x43006AC8: addiu       $v0, $a3, -0x8
    ctx->r2 = ADD32(ctx->r7, -0X8);
        goto L_43006AE0;
    // 0x43006AC8: addiu       $v0, $a3, -0x8
    ctx->r2 = ADD32(ctx->r7, -0X8);
L_43006ACC:
    // 0x43006ACC: bgez        $a3, L_43006ADC
    if (SIGNED(ctx->r7) >= 0) {
        // 0x43006AD0: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_43006ADC;
    }
    // 0x43006AD0: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x43006AD4: b           L_43006ADC
    // 0x43006AD8: addiu       $v1, $a3, 0x8
    ctx->r3 = ADD32(ctx->r7, 0X8);
        goto L_43006ADC;
    // 0x43006AD8: addiu       $v1, $a3, 0x8
    ctx->r3 = ADD32(ctx->r7, 0X8);
L_43006ADC:
    // 0x43006ADC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43006AE0:
    // 0x43006AE0: sll         $t5, $v0, 5
    ctx->r13 = S32(ctx->r2 << 5);
    // 0x43006AE4: sw          $t5, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r13;
    // 0x43006AE8: jal         0x43001F1C
    // 0x43006AEC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    ovl_enemy_world7_1F1C(rdram, ctx);
        goto after_1;
    // 0x43006AEC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x43006AF0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x43006AF4: nop

L_43006AF8:
    // 0x43006AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43006AFC:
    // 0x43006AFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43006B00: jr          $ra
    // 0x43006B04: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    return;
    // 0x43006B04: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
;}
RECOMP_FUNC void ovl_enemy_world7_6B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006B08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006B0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006B10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43006B14: jal         0x43000340
    // 0x43006B18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world7_340(rdram, ctx);
        goto after_0;
    // 0x43006B18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43006B1C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43006B20: lwc1        $f6, -0x6140($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6140);
    // 0x43006B24: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x43006B28: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43006B2C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x43006B30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43006B34: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x43006B38: nop

    // 0x43006B3C: bc1f        L_43006B6C
    if (!c1cs) {
        // 0x43006B40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43006B6C;
    }
    // 0x43006B40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006B44: lw          $v0, 0x1C8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C8);
    // 0x43006B48: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x43006B4C: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x43006B50: beq         $t6, $zero, L_43006B64
    if (ctx->r14 == 0) {
        // 0x43006B54: ori         $t8, $v0, 0x2
        ctx->r24 = ctx->r2 | 0X2;
            goto L_43006B64;
    }
    // 0x43006B54: ori         $t8, $v0, 0x2
    ctx->r24 = ctx->r2 | 0X2;
    // 0x43006B58: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x43006B5C: b           L_43006B68
    // 0x43006B60: sw          $t7, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r15;
        goto L_43006B68;
    // 0x43006B60: sw          $t7, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r15;
L_43006B64:
    // 0x43006B64: sw          $t8, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r24;
L_43006B68:
    // 0x43006B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43006B6C:
    // 0x43006B6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006B70: jr          $ra
    // 0x43006B74: nop

    return;
    // 0x43006B74: nop

;}
RECOMP_FUNC void ovl_enemy_world7_6B78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006B78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43006B7C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43006B80: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x43006B84: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x43006B88: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43006B8C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x43006B90: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x43006B94: lw          $v0, 0x1CC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1CC);
    // 0x43006B98: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x43006B9C: slt         $v1, $v0, $a1
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x43006BA0: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x43006BA4: beq         $v1, $zero, L_43006C48
    if (ctx->r3 == 0) {
        // 0x43006BA8: sw          $t6, 0x1CC($a0)
        MEM_W(0X1CC, ctx->r4) = ctx->r14;
            goto L_43006C48;
    }
    // 0x43006BA8: sw          $t6, 0x1CC($a0)
    MEM_W(0X1CC, ctx->r4) = ctx->r14;
    // 0x43006BAC: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x43006BB0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x43006BB4: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x43006BB8: bltz        $t8, L_43006C48
    if (SIGNED(ctx->r24) < 0) {
        // 0x43006BBC: nop
    
            goto L_43006C48;
    }
    // 0x43006BBC: nop

    // 0x43006BC0: lw          $v0, 0x1A0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A0);
    // 0x43006BC4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x43006BC8: sra         $t9, $v0, 5
    ctx->r25 = S32(SIGNED(ctx->r2) >> 5);
    // 0x43006BCC: andi        $t0, $t9, 0xF
    ctx->r8 = ctx->r25 & 0XF;
    // 0x43006BD0: slti        $at, $t0, 0x8
    ctx->r1 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x43006BD4: bne         $at, $zero, L_43006BE4
    if (ctx->r1 != 0) {
        // 0x43006BD8: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_43006BE4;
    }
    // 0x43006BD8: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x43006BDC: b           L_43006BF8
    // 0x43006BE0: addiu       $v1, $t0, -0x8
    ctx->r3 = ADD32(ctx->r8, -0X8);
        goto L_43006BF8;
    // 0x43006BE0: addiu       $v1, $t0, -0x8
    ctx->r3 = ADD32(ctx->r8, -0X8);
L_43006BE4:
    // 0x43006BE4: bgez        $v0, L_43006BF4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x43006BE8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_43006BF4;
    }
    // 0x43006BE8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43006BEC: b           L_43006BF4
    // 0x43006BF0: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
        goto L_43006BF4;
    // 0x43006BF0: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
L_43006BF4:
    // 0x43006BF4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_43006BF8:
    // 0x43006BF8: lw          $t3, 0x1A4($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X1A4);
    // 0x43006BFC: sllv        $t2, $t1, $v1
    ctx->r10 = S32(ctx->r9 << (ctx->r3 & 31));
    // 0x43006C00: and         $t4, $t2, $t3
    ctx->r12 = ctx->r10 & ctx->r11;
    // 0x43006C04: beq         $t4, $zero, L_43006C48
    if (ctx->r12 == 0) {
        // 0x43006C08: slti        $at, $v0, 0x8
        ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
            goto L_43006C48;
    }
    // 0x43006C08: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x43006C0C: bne         $at, $zero, L_43006C1C
    if (ctx->r1 != 0) {
        // 0x43006C10: nop
    
            goto L_43006C1C;
    }
    // 0x43006C10: nop

    // 0x43006C14: b           L_43006C30
    // 0x43006C18: addiu       $v1, $v0, -0x8
    ctx->r3 = ADD32(ctx->r2, -0X8);
        goto L_43006C30;
    // 0x43006C18: addiu       $v1, $v0, -0x8
    ctx->r3 = ADD32(ctx->r2, -0X8);
L_43006C1C:
    // 0x43006C1C: bgez        $v0, L_43006C2C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x43006C20: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_43006C2C;
    }
    // 0x43006C20: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43006C24: b           L_43006C2C
    // 0x43006C28: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
        goto L_43006C2C;
    // 0x43006C28: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
L_43006C2C:
    // 0x43006C2C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_43006C30:
    // 0x43006C30: lw          $t7, 0x248($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X248);
    // 0x43006C34: sllv        $t6, $t5, $v1
    ctx->r14 = S32(ctx->r13 << (ctx->r3 & 31));
    // 0x43006C38: nor         $t8, $t7, $zero
    ctx->r24 = ~(ctx->r15 | 0);
    // 0x43006C3C: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x43006C40: bne         $t9, $zero, L_43006D6C
    if (ctx->r25 != 0) {
        // 0x43006C44: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43006D6C;
    }
    // 0x43006C44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43006C48:
    // 0x43006C48: beq         $a2, $zero, L_43006C78
    if (ctx->r6 == 0) {
        // 0x43006C4C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_43006C78;
    }
    // 0x43006C4C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43006C50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43006C54: beq         $a2, $at, L_43006C94
    if (ctx->r6 == ctx->r1) {
        // 0x43006C58: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_43006C94;
    }
    // 0x43006C58: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x43006C5C: beq         $a2, $at, L_43006CC4
    if (ctx->r6 == ctx->r1) {
        // 0x43006C60: nop
    
            goto L_43006CC4;
    }
    // 0x43006C60: nop

    // 0x43006C64: lw          $v1, 0x1C8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C8);
    // 0x43006C68: nop

    // 0x43006C6C: andi        $t0, $v1, 0x2
    ctx->r8 = ctx->r3 & 0X2;
    // 0x43006C70: b           L_43006CDC
    // 0x43006C74: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
        goto L_43006CDC;
    // 0x43006C74: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_43006C78:
    // 0x43006C78: lw          $s0, 0x1A0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X1A0);
    // 0x43006C7C: lw          $v1, 0x1C8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C8);
    // 0x43006C80: sra         $t1, $s0, 5
    ctx->r9 = S32(SIGNED(ctx->r16) >> 5);
    // 0x43006C84: andi        $t3, $v1, 0x2
    ctx->r11 = ctx->r3 & 0X2;
    // 0x43006C88: andi        $s0, $t1, 0xF
    ctx->r16 = ctx->r9 & 0XF;
    // 0x43006C8C: b           L_43006CDC
    // 0x43006C90: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
        goto L_43006CDC;
    // 0x43006C90: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
L_43006C94:
    // 0x43006C94: lw          $s0, 0x1A0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X1A0);
    // 0x43006C98: lw          $v1, 0x1C8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C8);
    // 0x43006C9C: sra         $t4, $s0, 5
    ctx->r12 = S32(SIGNED(ctx->r16) >> 5);
    // 0x43006CA0: andi        $t5, $t4, 0xF
    ctx->r13 = ctx->r12 & 0XF;
    // 0x43006CA4: andi        $t7, $v1, 0x2
    ctx->r15 = ctx->r3 & 0X2;
    // 0x43006CA8: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x43006CAC: bne         $t7, $zero, L_43006CBC
    if (ctx->r15 != 0) {
        // 0x43006CB0: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_43006CBC;
    }
    // 0x43006CB0: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x43006CB4: b           L_43006CDC
    // 0x43006CB8: addiu       $s0, $t5, 0x1
    ctx->r16 = ADD32(ctx->r13, 0X1);
        goto L_43006CDC;
    // 0x43006CB8: addiu       $s0, $t5, 0x1
    ctx->r16 = ADD32(ctx->r13, 0X1);
L_43006CBC:
    // 0x43006CBC: b           L_43006CDC
    // 0x43006CC0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
        goto L_43006CDC;
    // 0x43006CC0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_43006CC4:
    // 0x43006CC4: jal         0x4300034C
    // 0x43006CC8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_enemy_world7_34C(rdram, ctx);
        goto after_0;
    // 0x43006CC8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x43006CCC: lw          $v1, 0x1C8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C8);
    // 0x43006CD0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x43006CD4: andi        $t6, $v1, 0x2
    ctx->r14 = ctx->r3 & 0X2;
    // 0x43006CD8: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_43006CDC:
    // 0x43006CDC: bne         $v1, $zero, L_43006D20
    if (ctx->r3 != 0) {
        // 0x43006CE0: slti        $at, $s0, 0x8
        ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
            goto L_43006D20;
    }
    // 0x43006CE0: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x43006CE4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x43006CE8: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
L_43006CEC:
    // 0x43006CEC: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x43006CF0: bne         $at, $zero, L_43006D00
    if (ctx->r1 != 0) {
        // 0x43006CF4: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_43006D00;
    }
    // 0x43006CF4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x43006CF8: b           L_43006D00
    // 0x43006CFC: addiu       $a1, $s0, -0x8
    ctx->r5 = ADD32(ctx->r16, -0X8);
        goto L_43006D00;
    // 0x43006CFC: addiu       $a1, $s0, -0x8
    ctx->r5 = ADD32(ctx->r16, -0X8);
L_43006D00:
    // 0x43006D00: jal         0x430069AC
    // 0x43006D04: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_enemy_world7_69AC(rdram, ctx);
        goto after_1;
    // 0x43006D04: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x43006D08: bne         $v0, $zero, L_43006D58
    if (ctx->r2 != 0) {
        // 0x43006D0C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_43006D58;
    }
    // 0x43006D0C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43006D10: bne         $s1, $s2, L_43006CEC
    if (ctx->r17 != ctx->r18) {
        // 0x43006D14: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_43006CEC;
    }
    // 0x43006D14: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43006D18: b           L_43006D5C
    // 0x43006D1C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
        goto L_43006D5C;
    // 0x43006D1C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
L_43006D20:
    // 0x43006D20: bne         $at, $zero, L_43006D2C
    if (ctx->r1 != 0) {
        // 0x43006D24: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_43006D2C;
    }
    // 0x43006D24: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x43006D28: addiu       $s0, $s0, -0x8
    ctx->r16 = ADD32(ctx->r16, -0X8);
L_43006D2C:
    // 0x43006D2C: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
L_43006D30:
    // 0x43006D30: bgez        $s0, L_43006D40
    if (SIGNED(ctx->r16) >= 0) {
        // 0x43006D34: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_43006D40;
    }
    // 0x43006D34: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x43006D38: b           L_43006D40
    // 0x43006D3C: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
        goto L_43006D40;
    // 0x43006D3C: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
L_43006D40:
    // 0x43006D40: jal         0x430069AC
    // 0x43006D44: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_enemy_world7_69AC(rdram, ctx);
        goto after_2;
    // 0x43006D44: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_2:
    // 0x43006D48: bne         $v0, $zero, L_43006D58
    if (ctx->r2 != 0) {
        // 0x43006D4C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_43006D58;
    }
    // 0x43006D4C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43006D50: bne         $s1, $s2, L_43006D30
    if (ctx->r17 != ctx->r18) {
        // 0x43006D54: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_43006D30;
    }
    // 0x43006D54: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_43006D58:
    // 0x43006D58: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
L_43006D5C:
    // 0x43006D5C: jal         0x43006B08
    // 0x43006D60: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_enemy_world7_6B08(rdram, ctx);
        goto after_3;
    // 0x43006D60: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x43006D64: sw          $zero, 0x1CC($s3)
    MEM_W(0X1CC, ctx->r19) = 0;
    // 0x43006D68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43006D6C:
    // 0x43006D6C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43006D70: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x43006D74: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x43006D78: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x43006D7C: jr          $ra
    // 0x43006D80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43006D80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_enemy_world7_6D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006D84: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43006D88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006D8C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x43006D90: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x43006D94: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43006D98: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43006D9C: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x43006DA0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x43006DA4: jal         0x430006C4
    // 0x43006DA8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_0;
    // 0x43006DA8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x43006DAC: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x43006DB0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x43006DB4: sw          $t6, 0x1A4($a3)
    MEM_W(0X1A4, ctx->r7) = ctx->r14;
    // 0x43006DB8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x43006DBC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x43006DC0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x43006DC4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x43006DC8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43006DCC: lwc1        $f0, 0x1B0($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X1B0);
    // 0x43006DD0: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43006DD4: mul.s       $f2, $f12, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x43006DD8: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43006DDC: andi        $t9, $t6, 0x1F
    ctx->r25 = ctx->r14 & 0X1F;
    // 0x43006DE0: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x43006DE4: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x43006DE8: nop

    // 0x43006DEC: bc1f        L_43006DFC
    if (!c1cs) {
        // 0x43006DF0: nop
    
            goto L_43006DFC;
    }
    // 0x43006DF0: nop

    // 0x43006DF4: b           L_43006E20
    // 0x43006DF8: sw          $t9, 0x1A4($a3)
    MEM_W(0X1A4, ctx->r7) = ctx->r25;
        goto L_43006E20;
    // 0x43006DF8: sw          $t9, 0x1A4($a3)
    MEM_W(0X1A4, ctx->r7) = ctx->r25;
L_43006DFC:
    // 0x43006DFC: add.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x43006E00: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x43006E04: nop

    // 0x43006E08: bc1f        L_43006E24
    if (!c1cs) {
        // 0x43006E0C: lw          $t2, 0x40($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X40);
            goto L_43006E24;
    }
    // 0x43006E0C: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x43006E10: lw          $t0, 0x1A4($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X1A4);
    // 0x43006E14: nop

    // 0x43006E18: andi        $t1, $t0, 0xF1
    ctx->r9 = ctx->r8 & 0XF1;
    // 0x43006E1C: sw          $t1, 0x1A4($a3)
    MEM_W(0X1A4, ctx->r7) = ctx->r9;
L_43006E20:
    // 0x43006E20: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
L_43006E24:
    // 0x43006E24: lwc1        $f0, 0x1B8($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X1B8);
    // 0x43006E28: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x43006E2C: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43006E30: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43006E34: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43006E38: mul.s       $f2, $f12, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x43006E3C: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x43006E40: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x43006E44: nop

    // 0x43006E48: bc1f        L_43006E64
    if (!c1cs) {
        // 0x43006E4C: nop
    
            goto L_43006E64;
    }
    // 0x43006E4C: nop

    // 0x43006E50: lw          $t3, 0x1A4($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X1A4);
    // 0x43006E54: nop

    // 0x43006E58: andi        $t4, $t3, 0xC7
    ctx->r12 = ctx->r11 & 0XC7;
    // 0x43006E5C: b           L_43006E88
    // 0x43006E60: sw          $t4, 0x1A4($a3)
    MEM_W(0X1A4, ctx->r7) = ctx->r12;
        goto L_43006E88;
    // 0x43006E60: sw          $t4, 0x1A4($a3)
    MEM_W(0X1A4, ctx->r7) = ctx->r12;
L_43006E64:
    // 0x43006E64: add.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x43006E68: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x43006E6C: nop

    // 0x43006E70: bc1f        L_43006E8C
    if (!c1cs) {
        // 0x43006E74: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43006E8C;
    }
    // 0x43006E74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006E78: lw          $t5, 0x1A4($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X1A4);
    // 0x43006E7C: nop

    // 0x43006E80: andi        $t6, $t5, 0x7C
    ctx->r14 = ctx->r13 & 0X7C;
    // 0x43006E84: sw          $t6, 0x1A4($a3)
    MEM_W(0X1A4, ctx->r7) = ctx->r14;
L_43006E88:
    // 0x43006E88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43006E8C:
    // 0x43006E8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x43006E90: jr          $ra
    // 0x43006E94: nop

    return;
    // 0x43006E94: nop

;}
RECOMP_FUNC void ovl_enemy_world7_6E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006E98: lui         $at, 0x41B4
    ctx->r1 = S32(0X41B4 << 16);
    // 0x43006E9C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x43006EA0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43006EA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43006EA8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x43006EAC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_43006EB0:
    // 0x43006EB0: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x43006EB4: nop

    // 0x43006EB8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43006EBC: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x43006EC0: c.le.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl <= ctx->f8.fl;
    // 0x43006EC4: nop

    // 0x43006EC8: bc1f        L_43006F5C
    if (!c1cs) {
        // 0x43006ECC: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_43006F5C;
    }
    // 0x43006ECC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x43006ED0: bne         $v0, $at, L_43006EE0
    if (ctx->r2 != ctx->r1) {
        // 0x43006ED4: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_43006EE0;
    }
    // 0x43006ED4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x43006ED8: b           L_43006EE4
    // 0x43006EDC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43006EE4;
    // 0x43006EDC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43006EE0:
    // 0x43006EE0: sllv        $v1, $t6, $v0
    ctx->r3 = S32(ctx->r14 << (ctx->r2 & 31));
L_43006EE4:
    // 0x43006EE4: beq         $a1, $zero, L_43006F68
    if (ctx->r5 == 0) {
        // 0x43006EE8: addiu       $a0, $v0, -0x1
        ctx->r4 = ADD32(ctx->r2, -0X1);
            goto L_43006F68;
    }
    // 0x43006EE8: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x43006EEC: bgez        $a0, L_43006F18
    if (SIGNED(ctx->r4) >= 0) {
        // 0x43006EF0: addiu       $a1, $v0, 0x1
        ctx->r5 = ADD32(ctx->r2, 0X1);
            goto L_43006F18;
    }
    // 0x43006EF0: addiu       $a1, $v0, 0x1
    ctx->r5 = ADD32(ctx->r2, 0X1);
    // 0x43006EF4: addiu       $t7, $v0, 0x7
    ctx->r15 = ADD32(ctx->r2, 0X7);
    // 0x43006EF8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x43006EFC: sllv        $t9, $t8, $t7
    ctx->r25 = S32(ctx->r24 << (ctx->r15 & 31));
    // 0x43006F00: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x43006F04: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x43006F08: sllv        $t3, $t2, $t1
    ctx->r11 = S32(ctx->r10 << (ctx->r9 & 31));
    // 0x43006F0C: or          $t0, $v1, $t9
    ctx->r8 = ctx->r3 | ctx->r25;
    // 0x43006F10: jr          $ra
    // 0x43006F14: or          $v0, $t0, $t3
    ctx->r2 = ctx->r8 | ctx->r11;
    return;
    // 0x43006F14: or          $v0, $t0, $t3
    ctx->r2 = ctx->r8 | ctx->r11;
L_43006F18:
    // 0x43006F18: slti        $at, $a1, 0x8
    ctx->r1 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x43006F1C: bne         $at, $zero, L_43006F44
    if (ctx->r1 != 0) {
        // 0x43006F20: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_43006F44;
    }
    // 0x43006F20: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x43006F24: addiu       $t4, $v0, 0x19
    ctx->r12 = ADD32(ctx->r2, 0X19);
    // 0x43006F28: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x43006F2C: sllv        $t6, $t5, $t4
    ctx->r14 = S32(ctx->r13 << (ctx->r12 & 31));
    // 0x43006F30: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x43006F34: sllv        $t9, $t7, $a0
    ctx->r25 = S32(ctx->r15 << (ctx->r4 & 31));
    // 0x43006F38: or          $t8, $v1, $t6
    ctx->r24 = ctx->r3 | ctx->r14;
    // 0x43006F3C: jr          $ra
    // 0x43006F40: or          $v0, $t8, $t9
    ctx->r2 = ctx->r24 | ctx->r25;
    return;
    // 0x43006F40: or          $v0, $t8, $t9
    ctx->r2 = ctx->r24 | ctx->r25;
L_43006F44:
    // 0x43006F44: sllv        $t1, $t2, $a1
    ctx->r9 = S32(ctx->r10 << (ctx->r5 & 31));
    // 0x43006F48: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x43006F4C: sllv        $t5, $t3, $a0
    ctx->r13 = S32(ctx->r11 << (ctx->r4 & 31));
    // 0x43006F50: or          $t0, $v1, $t1
    ctx->r8 = ctx->r3 | ctx->r9;
    // 0x43006F54: jr          $ra
    // 0x43006F58: or          $v0, $t0, $t5
    ctx->r2 = ctx->r8 | ctx->r13;
    return;
    // 0x43006F58: or          $v0, $t0, $t5
    ctx->r2 = ctx->r8 | ctx->r13;
L_43006F5C:
    // 0x43006F5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x43006F60: bne         $v0, $a2, L_43006EB0
    if (ctx->r2 != ctx->r6) {
        // 0x43006F64: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_43006EB0;
    }
    // 0x43006F64: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_43006F68:
    // 0x43006F68: jr          $ra
    // 0x43006F6C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x43006F6C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world7_6F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006F70: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x43006F74: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43006F78: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43006F7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43006F80: jal         0x43000DE4
    // 0x43006F84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_enemy_world7_DE4(rdram, ctx);
        goto after_0;
    // 0x43006F84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x43006F88: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x43006F8C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x43006F90: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43006F94: jal         0x430006C4
    // 0x43006F98: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_1;
    // 0x43006F98: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_1:
    // 0x43006F9C: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x43006FA0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43006FA4: jal         0x430006C4
    // 0x43006FA8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_2;
    // 0x43006FA8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x43006FAC: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43006FB0: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x43006FB4: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x43006FB8: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x43006FBC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x43006FC0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43006FC4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x43006FC8: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x43006FCC: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x43006FD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43006FD4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x43006FD8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x43006FDC: jal         0x43005218
    // 0x43006FE0: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    ovl_enemy_world7_5218(rdram, ctx);
        goto after_3;
    // 0x43006FE0: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x43006FE4: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43006FE8: jal         0x43006E98
    // 0x43006FEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_6E98(rdram, ctx);
        goto after_4;
    // 0x43006FEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x43006FF0: lw          $t6, 0x1A4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1A4);
    // 0x43006FF4: sw          $v0, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->r2;
    // 0x43006FF8: and         $t7, $t6, $v0
    ctx->r15 = ctx->r14 & ctx->r2;
    // 0x43006FFC: sw          $t7, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r15;
    // 0x43007000: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43007004: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43007008: jr          $ra
    // 0x4300700C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x4300700C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_enemy_world7_7010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43007014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007018: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4300701C: lw          $v0, 0x1C0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C0);
    // 0x43007020: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x43007024: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x43007028: bgtz        $v0, L_4300704C
    if (SIGNED(ctx->r2) > 0) {
        // 0x4300702C: sw          $t6, 0x1C0($a0)
        MEM_W(0X1C0, ctx->r4) = ctx->r14;
            goto L_4300704C;
    }
    // 0x4300702C: sw          $t6, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = ctx->r14;
    // 0x43007030: sw          $t7, 0x1A4($a0)
    MEM_W(0X1A4, ctx->r4) = ctx->r15;
    // 0x43007034: jal         0x43006F70
    // 0x43007038: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world7_6F70(rdram, ctx);
        goto after_0;
    // 0x43007038: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4300703C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43007040: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x43007044: b           L_4300705C
    // 0x43007048: sw          $t8, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = ctx->r24;
        goto L_4300705C;
    // 0x43007048: sw          $t8, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = ctx->r24;
L_4300704C:
    // 0x4300704C: lw          $t9, 0x1A8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X1A8);
    // 0x43007050: nop

    // 0x43007054: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x43007058: sw          $t0, 0x1A4($a0)
    MEM_W(0X1A4, ctx->r4) = ctx->r8;
L_4300705C:
    // 0x4300705C: jal         0x430077E4
    // 0x43007060: nop

    ovl_enemy_world7_77E4(rdram, ctx);
        goto after_1;
    // 0x43007060: nop

    after_1:
    // 0x43007064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007068: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300706C: jr          $ra
    // 0x43007070: nop

    return;
    // 0x43007070: nop

;}
RECOMP_FUNC void ovl_enemy_world7_7074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007074: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007078: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300707C: lw          $t6, 0x1C8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1C8);
    // 0x43007080: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x43007084: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x43007088: beq         $t7, $zero, L_430070C4
    if (ctx->r15 == 0) {
        // 0x4300708C: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_430070C4;
    }
    // 0x4300708C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43007090: beq         $a3, $at, L_430070FC
    if (ctx->r7 == ctx->r1) {
        // 0x43007094: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430070FC;
    }
    // 0x43007094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007098: lw          $v0, 0x1C0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C0);
    // 0x4300709C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x430070A0: slt         $v1, $v0, $a3
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x430070A4: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x430070A8: bne         $v1, $zero, L_430070F8
    if (ctx->r3 != 0) {
        // 0x430070AC: sw          $t8, 0x1C0($a0)
        MEM_W(0X1C0, ctx->r4) = ctx->r24;
            goto L_430070F8;
    }
    // 0x430070AC: sw          $t8, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = ctx->r24;
    // 0x430070B0: lw          $t9, 0x1C8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X1C8);
    // 0x430070B4: sw          $a2, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = ctx->r6;
    // 0x430070B8: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x430070BC: b           L_430070F8
    // 0x430070C0: sw          $t1, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r9;
        goto L_430070F8;
    // 0x430070C0: sw          $t1, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r9;
L_430070C4:
    // 0x430070C4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x430070C8: jal         0x43006928
    // 0x430070CC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    ovl_enemy_world7_6928(rdram, ctx);
        goto after_0;
    // 0x430070CC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_0:
    // 0x430070D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x430070D4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x430070D8: lw          $t2, 0x1C8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X1C8);
    // 0x430070DC: nop

    // 0x430070E0: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x430070E4: beq         $t3, $zero, L_430070F4
    if (ctx->r11 == 0) {
        // 0x430070E8: nop
    
            goto L_430070F4;
    }
    // 0x430070E8: nop

    // 0x430070EC: b           L_430070F8
    // 0x430070F0: sw          $zero, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = 0;
        goto L_430070F8;
    // 0x430070F0: sw          $zero, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = 0;
L_430070F4:
    // 0x430070F4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_430070F8:
    // 0x430070F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430070FC:
    // 0x430070FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43007100: jr          $ra
    // 0x43007104: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    return;
    // 0x43007104: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
;}
RECOMP_FUNC void ovl_enemy_world7_7108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007108: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300710C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43007110: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43007114: jal         0x43007074
    // 0x43007118: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_enemy_world7_7074(rdram, ctx);
        goto after_0;
    // 0x43007118: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x4300711C: beq         $v0, $zero, L_43007138
    if (ctx->r2 == 0) {
        // 0x43007120: addiu       $t6, $zero, 0xFF
        ctx->r14 = ADD32(0, 0XFF);
            goto L_43007138;
    }
    // 0x43007120: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x43007124: sw          $t6, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r14;
    // 0x43007128: jal         0x43006F70
    // 0x4300712C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_6F70(rdram, ctx);
        goto after_1;
    // 0x4300712C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x43007130: b           L_43007154
    // 0x43007134: nop

        goto L_43007154;
    // 0x43007134: nop

L_43007138:
    // 0x43007138: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x4300713C: nop

    // 0x43007140: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x43007144: beq         $v0, $zero, L_43007154
    if (ctx->r2 == 0) {
        // 0x43007148: sw          $t7, 0x1A4($s0)
        MEM_W(0X1A4, ctx->r16) = ctx->r15;
            goto L_43007154;
    }
    // 0x43007148: sw          $t7, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r15;
    // 0x4300714C: jal         0x43001F1C
    // 0x43007150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_1F1C(rdram, ctx);
        goto after_2;
    // 0x43007150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_43007154:
    // 0x43007154: jal         0x430077E4
    // 0x43007158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_77E4(rdram, ctx);
        goto after_3;
    // 0x43007158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x4300715C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43007160: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43007164: jr          $ra
    // 0x43007168: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43007168: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world7_716C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300716C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x43007170: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007174: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43007178: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x4300717C: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    // 0x43007180: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x43007184: jal         0x430006C4
    // 0x43007188: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_0;
    // 0x43007188: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x4300718C: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x43007190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007194: lw          $v0, 0x1A0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X1A0);
    // 0x43007198: nop

    // 0x4300719C: sra         $t6, $v0, 5
    ctx->r14 = S32(SIGNED(ctx->r2) >> 5);
    // 0x430071A0: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x430071A4: slti        $at, $t7, 0x8
    ctx->r1 = SIGNED(ctx->r15) < 0X8 ? 1 : 0;
    // 0x430071A8: bne         $at, $zero, L_430071B8
    if (ctx->r1 != 0) {
        // 0x430071AC: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_430071B8;
    }
    // 0x430071AC: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x430071B0: b           L_430071CC
    // 0x430071B4: addiu       $v1, $t7, -0x8
    ctx->r3 = ADD32(ctx->r15, -0X8);
        goto L_430071CC;
    // 0x430071B4: addiu       $v1, $t7, -0x8
    ctx->r3 = ADD32(ctx->r15, -0X8);
L_430071B8:
    // 0x430071B8: bgez        $v0, L_430071C8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x430071BC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_430071C8;
    }
    // 0x430071BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x430071C0: b           L_430071C8
    // 0x430071C4: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
        goto L_430071C8;
    // 0x430071C4: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
L_430071C8:
    // 0x430071C8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_430071CC:
    // 0x430071CC: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x430071D0: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x430071D4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x430071D8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x430071DC: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x430071E0: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x430071E4: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x430071E8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x430071EC: nop

    // 0x430071F0: bc1f        L_4300723C
    if (!c1cs) {
        // 0x430071F4: nop
    
            goto L_4300723C;
    }
    // 0x430071F4: nop

    // 0x430071F8: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x430071FC: bne         $at, $zero, L_4300720C
    if (ctx->r1 != 0) {
        // 0x43007200: nop
    
            goto L_4300720C;
    }
    // 0x43007200: nop

    // 0x43007204: b           L_43007220
    // 0x43007208: addiu       $v1, $v0, -0x8
    ctx->r3 = ADD32(ctx->r2, -0X8);
        goto L_43007220;
    // 0x43007208: addiu       $v1, $v0, -0x8
    ctx->r3 = ADD32(ctx->r2, -0X8);
L_4300720C:
    // 0x4300720C: bgez        $v0, L_4300721C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x43007210: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_4300721C;
    }
    // 0x43007210: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43007214: b           L_4300721C
    // 0x43007218: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
        goto L_4300721C;
    // 0x43007218: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
L_4300721C:
    // 0x4300721C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_43007220:
    // 0x43007220: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x43007224: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x43007228: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x4300722C: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x43007230: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x43007234: b           L_43007274
    // 0x43007238: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_43007274;
    // 0x43007238: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_4300723C:
    // 0x4300723C: bne         $at, $zero, L_4300724C
    if (ctx->r1 != 0) {
        // 0x43007240: nop
    
            goto L_4300724C;
    }
    // 0x43007240: nop

    // 0x43007244: b           L_43007260
    // 0x43007248: addiu       $v1, $v0, -0x8
    ctx->r3 = ADD32(ctx->r2, -0X8);
        goto L_43007260;
    // 0x43007248: addiu       $v1, $v0, -0x8
    ctx->r3 = ADD32(ctx->r2, -0X8);
L_4300724C:
    // 0x4300724C: bgez        $v0, L_4300725C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x43007250: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_4300725C;
    }
    // 0x43007250: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43007254: b           L_4300725C
    // 0x43007258: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
        goto L_4300725C;
    // 0x43007258: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
L_4300725C:
    // 0x4300725C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_43007260:
    // 0x43007260: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x43007264: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x43007268: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x4300726C: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x43007270: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
L_43007274:
    // 0x43007274: lwc1        $f4, 0x14($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X14);
    // 0x43007278: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x4300727C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x43007280: nop

    // 0x43007284: bc1f        L_43007294
    if (!c1cs) {
        // 0x43007288: nop
    
            goto L_43007294;
    }
    // 0x43007288: nop

    // 0x4300728C: b           L_43007294
    // 0x43007290: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_43007294;
    // 0x43007290: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43007294:
    // 0x43007294: jr          $ra
    // 0x43007298: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x43007298: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_enemy_world7_729C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300729C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x430072A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430072A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430072A8: lw          $t6, 0x1A4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1A4);
    // 0x430072AC: lw          $t8, 0x1C8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X1C8);
    // 0x430072B0: andi        $t7, $t6, 0x55
    ctx->r15 = ctx->r14 & 0X55;
    // 0x430072B4: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x430072B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430072BC: bne         $t9, $zero, L_430073D8
    if (ctx->r25 != 0) {
        // 0x430072C0: sw          $t7, 0x1A4($a0)
        MEM_W(0X1A4, ctx->r4) = ctx->r15;
            goto L_430073D8;
    }
    // 0x430072C0: sw          $t7, 0x1A4($a0)
    MEM_W(0X1A4, ctx->r4) = ctx->r15;
    // 0x430072C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x430072C8: jal         0x43006B78
    // 0x430072CC: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_enemy_world7_6B78(rdram, ctx);
        goto after_0;
    // 0x430072CC: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_0:
    // 0x430072D0: lw          $t0, 0x1CC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1CC);
    // 0x430072D4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x430072D8: bne         $t0, $zero, L_43007440
    if (ctx->r8 != 0) {
        // 0x430072DC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43007440;
    }
    // 0x430072DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430072E0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x430072E4: jal         0x430006C4
    // 0x430072E8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_1;
    // 0x430072E8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x430072EC: lw          $v1, 0x1A0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1A0);
    // 0x430072F0: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x430072F4: beq         $v1, $zero, L_4300731C
    if (ctx->r3 == 0) {
        // 0x430072F8: nop
    
            goto L_4300731C;
    }
    // 0x430072F8: nop

    // 0x430072FC: beq         $v1, $at, L_4300743C
    if (ctx->r3 == ctx->r1) {
        // 0x43007300: addiu       $at, $zero, 0x80
        ctx->r1 = ADD32(0, 0X80);
            goto L_4300743C;
    }
    // 0x43007300: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x43007304: beq         $v1, $at, L_43007378
    if (ctx->r3 == ctx->r1) {
        // 0x43007308: addiu       $at, $zero, 0xC0
        ctx->r1 = ADD32(0, 0XC0);
            goto L_43007378;
    }
    // 0x43007308: addiu       $at, $zero, 0xC0
    ctx->r1 = ADD32(0, 0XC0);
    // 0x4300730C: beq         $v1, $at, L_43007440
    if (ctx->r3 == ctx->r1) {
        // 0x43007310: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43007440;
    }
    // 0x43007310: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43007314: b           L_43007440
    // 0x43007318: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43007440;
    // 0x43007318: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4300731C:
    // 0x4300731C: lw          $t1, 0x1C8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C8);
    // 0x43007320: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43007324: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x43007328: sw          $t2, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r10;
    // 0x4300732C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43007330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007334: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x43007338: nop

    // 0x4300733C: bc1f        L_4300735C
    if (!c1cs) {
        // 0x43007340: nop
    
            goto L_4300735C;
    }
    // 0x43007340: nop

    // 0x43007344: jal         0x43005078
    // 0x43007348: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_2;
    // 0x43007348: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_2:
    // 0x4300734C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x43007350: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43007354: b           L_4300743C
    // 0x43007358: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
        goto L_4300743C;
    // 0x43007358: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
L_4300735C:
    // 0x4300735C: jal         0x430014D8
    // 0x43007360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_14D8(rdram, ctx);
        goto after_3;
    // 0x43007360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43007364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007368: jal         0x430015C0
    // 0x4300736C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_15C0(rdram, ctx);
        goto after_4;
    // 0x4300736C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x43007370: b           L_43007440
    // 0x43007374: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43007440;
    // 0x43007374: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43007378:
    // 0x43007378: lw          $t3, 0x1C8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1C8);
    // 0x4300737C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x43007380: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x43007384: sw          $t4, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r12;
    // 0x43007388: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4300738C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x43007390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007394: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x43007398: nop

    // 0x4300739C: bc1f        L_430073BC
    if (!c1cs) {
        // 0x430073A0: nop
    
            goto L_430073BC;
    }
    // 0x430073A0: nop

    // 0x430073A4: jal         0x43005078
    // 0x430073A8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_5;
    // 0x430073A8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_5:
    // 0x430073AC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x430073B0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x430073B4: b           L_4300743C
    // 0x430073B8: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
        goto L_4300743C;
    // 0x430073B8: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
L_430073BC:
    // 0x430073BC: jal         0x430014D8
    // 0x430073C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_14D8(rdram, ctx);
        goto after_6;
    // 0x430073C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x430073C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430073C8: jal         0x430015C0
    // 0x430073CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_15C0(rdram, ctx);
        goto after_7;
    // 0x430073CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x430073D0: b           L_43007440
    // 0x430073D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43007440;
    // 0x430073D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430073D8:
    // 0x430073D8: jal         0x4300716C
    // 0x430073DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_716C(rdram, ctx);
        goto after_8;
    // 0x430073DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x430073E0: beq         $v0, $zero, L_43007440
    if (ctx->r2 == 0) {
        // 0x430073E4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43007440;
    }
    // 0x430073E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430073E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x430073EC: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x430073F0: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x430073F4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x430073F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430073FC: bc1f        L_43007440
    if (!c1cs) {
        // 0x43007400: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43007440;
    }
    // 0x43007400: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43007404: lw          $t5, 0x1C8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X1C8);
    // 0x43007408: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4300740C: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x43007410: jal         0x430015C0
    // 0x43007414: sw          $t6, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r14;
    ovl_enemy_world7_15C0(rdram, ctx);
        goto after_9;
    // 0x43007414: sw          $t6, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r14;
    after_9:
    // 0x43007418: jal         0x43001F1C
    // 0x4300741C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_1F1C(rdram, ctx);
        goto after_10;
    // 0x4300741C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x43007420: addiu       $t7, $zero, 0x44
    ctx->r15 = ADD32(0, 0X44);
    // 0x43007424: sw          $t7, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r15;
    // 0x43007428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300742C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43007430: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x43007434: jal         0x43006B78
    // 0x43007438: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_enemy_world7_6B78(rdram, ctx);
        goto after_11;
    // 0x43007438: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_11:
L_4300743C:
    // 0x4300743C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43007440:
    // 0x43007440: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43007444: jr          $ra
    // 0x43007448: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x43007448: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_enemy_world7_744C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300744C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007450: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43007454: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43007458: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4300745C: lwc1        $f4, 0x30($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X30);
    // 0x43007460: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43007464: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x43007468: nop

    // 0x4300746C: bc1f        L_43007514
    if (!c1cs) {
        // 0x43007470: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43007514;
    }
    // 0x43007470: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43007474: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x43007478: nop

    // 0x4300747C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x43007480: nop

    // 0x43007484: bc1f        L_43007514
    if (!c1cs) {
        // 0x43007488: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43007514;
    }
    // 0x43007488: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300748C: lw          $t6, 0x1CC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1CC);
    // 0x43007490: nop

    // 0x43007494: slt         $at, $t6, $a1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x43007498: bne         $at, $zero, L_430074C0
    if (ctx->r1 != 0) {
        // 0x4300749C: nop
    
            goto L_430074C0;
    }
    // 0x4300749C: nop

    // 0x430074A0: jal         0x43001F1C
    // 0x430074A4: sw          $zero, 0x1CC($a0)
    MEM_W(0X1CC, ctx->r4) = 0;
    ovl_enemy_world7_1F1C(rdram, ctx);
        goto after_0;
    // 0x430074A4: sw          $zero, 0x1CC($a0)
    MEM_W(0X1CC, ctx->r4) = 0;
    after_0:
    // 0x430074A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430074AC: jal         0x43005078
    // 0x430074B0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_1;
    // 0x430074B0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_1:
    // 0x430074B4: lw          $v0, 0x1CC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1CC);
    // 0x430074B8: b           L_4300750C
    // 0x430074BC: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
        goto L_4300750C;
    // 0x430074BC: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
L_430074C0:
    // 0x430074C0: jal         0x430014D8
    // 0x430074C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_14D8(rdram, ctx);
        goto after_2;
    // 0x430074C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x430074C8: lw          $v0, 0x1CC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1CC);
    // 0x430074CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430074D0: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x430074D4: beq         $at, $zero, L_43007508
    if (ctx->r1 == 0) {
        // 0x430074D8: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_43007508;
    }
    // 0x430074D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x430074DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x430074E0: jal         0x43006B78
    // 0x430074E4: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    ovl_enemy_world7_6B78(rdram, ctx);
        goto after_3;
    // 0x430074E4: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    after_3:
    // 0x430074E8: lw          $t7, 0x1CC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1CC);
    // 0x430074EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x430074F0: beq         $t7, $zero, L_43007504
    if (ctx->r15 == 0) {
        // 0x430074F4: nop
    
            goto L_43007504;
    }
    // 0x430074F4: nop

    // 0x430074F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x430074FC: b           L_43007508
    // 0x43007500: sw          $v0, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->r2;
        goto L_43007508;
    // 0x43007500: sw          $v0, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->r2;
L_43007504:
    // 0x43007504: sw          $v0, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->r2;
L_43007508:
    // 0x43007508: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
L_4300750C:
    // 0x4300750C: sw          $t0, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->r8;
    // 0x43007510: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43007514:
    // 0x43007514: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43007518: jr          $ra
    // 0x4300751C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x4300751C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world7_7520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007520: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007524: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43007528: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4300752C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43007530: jal         0x4300716C
    // 0x43007534: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    ovl_enemy_world7_716C(rdram, ctx);
        goto after_0;
    // 0x43007534: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x43007538: bne         $v0, $zero, L_43007588
    if (ctx->r2 != 0) {
        // 0x4300753C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43007588;
    }
    // 0x4300753C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007540: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007544: jal         0x430015C0
    // 0x43007548: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_15C0(rdram, ctx);
        goto after_1;
    // 0x43007548: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x4300754C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007550: jal         0x430014E4
    // 0x43007554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world7_14E4(rdram, ctx);
        goto after_2;
    // 0x43007554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x43007558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300755C: jal         0x43001554
    // 0x43007560: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_1554(rdram, ctx);
        goto after_3;
    // 0x43007560: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x43007564: jal         0x430014D8
    // 0x43007568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_14D8(rdram, ctx);
        goto after_4;
    // 0x43007568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4300756C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x43007570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007574: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x43007578: jal         0x43006B78
    // 0x4300757C: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    ovl_enemy_world7_6B78(rdram, ctx);
        goto after_5;
    // 0x4300757C: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    after_5:
    // 0x43007580: b           L_430075DC
    // 0x43007584: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430075DC;
    // 0x43007584: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43007588:
    // 0x43007588: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x4300758C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x43007590: jal         0x43006B78
    // 0x43007594: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    ovl_enemy_world7_6B78(rdram, ctx);
        goto after_6;
    // 0x43007594: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    after_6:
    // 0x43007598: jal         0x43001F1C
    // 0x4300759C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_1F1C(rdram, ctx);
        goto after_7;
    // 0x4300759C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x430075A0: lw          $t6, 0x1CC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1CC);
    // 0x430075A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x430075A8: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x430075AC: beq         $at, $zero, L_430075C4
    if (ctx->r1 == 0) {
        // 0x430075B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430075C4;
    }
    // 0x430075B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430075B4: jal         0x430014E4
    // 0x430075B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_14E4(rdram, ctx);
        goto after_8;
    // 0x430075B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x430075BC: b           L_430075DC
    // 0x430075C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430075DC;
    // 0x430075C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430075C4:
    // 0x430075C4: jal         0x430014E4
    // 0x430075C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world7_14E4(rdram, ctx);
        goto after_9;
    // 0x430075C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x430075CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430075D0: jal         0x43001554
    // 0x430075D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world7_1554(rdram, ctx);
        goto after_10;
    // 0x430075D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x430075D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430075DC:
    // 0x430075DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430075E0: jr          $ra
    // 0x430075E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x430075E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world7_75E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430075E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430075EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430075F0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x430075F4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x430075F8: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x430075FC: lui         $at, 0x4128
    ctx->r1 = S32(0X4128 << 16);
    // 0x43007600: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x43007604: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43007608: c.le.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl <= ctx->f6.fl;
    // 0x4300760C: swc1        $f12, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f12.u32l;
    // 0x43007610: bc1f        L_43007624
    if (!c1cs) {
        // 0x43007614: swc1        $f4, 0x30($a0)
        MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
            goto L_43007624;
    }
    // 0x43007614: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
    // 0x43007618: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4300761C: nop

    // 0x43007620: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
L_43007624:
    // 0x43007624: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x43007628: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4300762C: jal         0x430049B0
    // 0x43007630: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    ovl_enemy_world7_49B0(rdram, ctx);
        goto after_0;
    // 0x43007630: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    after_0:
    // 0x43007634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007638: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300763C: jr          $ra
    // 0x43007640: nop

    return;
    // 0x43007640: nop

;}
RECOMP_FUNC void ovl_enemy_world7_7644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007644: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43007648: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x4300764C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x43007650: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43007654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007658: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x4300765C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x43007660: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x43007664: jal         0x430075E8
    // 0x43007668: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world7_75E8(rdram, ctx);
        goto after_0;
    // 0x43007668: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4300766C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43007670: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x43007674: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43007678: jal         0x43006B78
    // 0x4300767C: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    ovl_enemy_world7_6B78(rdram, ctx);
        goto after_1;
    // 0x4300767C: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    after_1:
    // 0x43007680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43007688: jr          $ra
    // 0x4300768C: nop

    return;
    // 0x4300768C: nop

;}
RECOMP_FUNC void ovl_enemy_world7_7690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007690: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007694: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43007698: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300769C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430076A0: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x430076A4: jal         0x43004880
    // 0x430076A8: nop

    ovl_enemy_world7_4880(rdram, ctx);
        goto after_0;
    // 0x430076A8: nop

    after_0:
    // 0x430076AC: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x430076B0: nop

    // 0x430076B4: addiu       $t7, $t6, -0x11
    ctx->r15 = ADD32(ctx->r14, -0X11);
    // 0x430076B8: sltiu       $at, $t7, 0x7
    ctx->r1 = ctx->r15 < 0X7 ? 1 : 0;
    // 0x430076BC: beq         $at, $zero, L_43007760
    if (ctx->r1 == 0) {
        // 0x430076C0: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_43007760;
    }
    // 0x430076C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x430076C4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430076C8: addu        $at, $at, $t7
    gpr jr_addend_430076D4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x430076CC: lw          $t7, -0x613C($at)
    ctx->r15 = ADD32(ctx->r1, -0X613C);
    // 0x430076D0: nop

    // 0x430076D4: jr          $t7
    // 0x430076D8: nop

    switch (jr_addend_430076D4 >> 2) {
        case 0: goto L_430076DC; break;
        case 1: goto L_430076F8; break;
        case 2: goto L_43007714; break;
        case 3: goto L_43007730; break;
        case 4: goto L_43007760; break;
        case 5: goto L_43007760; break;
        case 6: goto L_4300774C; break;
        default: switch_error(__func__, 0x430076D4, 0x43009EC4);
    }
    // 0x430076D8: nop

L_430076DC:
    // 0x430076DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430076E0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x430076E4: lui         $a2, 0x4188
    ctx->r6 = S32(0X4188 << 16);
    // 0x430076E8: jal         0x430075E8
    // 0x430076EC: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    ovl_enemy_world7_75E8(rdram, ctx);
        goto after_1;
    // 0x430076EC: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    after_1:
    // 0x430076F0: b           L_43007764
    // 0x430076F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43007764;
    // 0x430076F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430076F8:
    // 0x430076F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430076FC: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x43007700: lui         $a2, 0x4198
    ctx->r6 = S32(0X4198 << 16);
    // 0x43007704: jal         0x430075E8
    // 0x43007708: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    ovl_enemy_world7_75E8(rdram, ctx);
        goto after_2;
    // 0x43007708: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    after_2:
    // 0x4300770C: b           L_43007764
    // 0x43007710: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43007764;
    // 0x43007710: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43007714:
    // 0x43007714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007718: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x4300771C: lui         $a2, 0x4188
    ctx->r6 = S32(0X4188 << 16);
    // 0x43007720: jal         0x430075E8
    // 0x43007724: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    ovl_enemy_world7_75E8(rdram, ctx);
        goto after_3;
    // 0x43007724: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    after_3:
    // 0x43007728: b           L_43007764
    // 0x4300772C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43007764;
    // 0x4300772C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43007730:
    // 0x43007730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007734: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x43007738: lui         $a2, 0x4198
    ctx->r6 = S32(0X4198 << 16);
    // 0x4300773C: jal         0x430075E8
    // 0x43007740: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    ovl_enemy_world7_75E8(rdram, ctx);
        goto after_4;
    // 0x43007740: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    after_4:
    // 0x43007744: b           L_43007764
    // 0x43007748: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43007764;
    // 0x43007748: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4300774C:
    // 0x4300774C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007750: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x43007754: lui         $a2, 0x4188
    ctx->r6 = S32(0X4188 << 16);
    // 0x43007758: jal         0x430075E8
    // 0x4300775C: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    ovl_enemy_world7_75E8(rdram, ctx);
        goto after_5;
    // 0x4300775C: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    after_5:
L_43007760:
    // 0x43007760: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43007764:
    // 0x43007764: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43007768: jr          $ra
    // 0x4300776C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x4300776C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world7_7770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007770: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43007774: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007778: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4300777C: lw          $t6, 0x1A4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1A4);
    // 0x43007780: lui         $a1, 0x428C
    ctx->r5 = S32(0X428C << 16);
    // 0x43007784: beq         $t6, $zero, L_430077C8
    if (ctx->r14 == 0) {
        // 0x43007788: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_430077C8;
    }
    // 0x43007788: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x4300778C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43007790: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x43007794: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x43007798: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x4300779C: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x430077A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430077A4: jal         0x430049B0
    // 0x430077A8: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    ovl_enemy_world7_49B0(rdram, ctx);
        goto after_0;
    // 0x430077A8: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    after_0:
    // 0x430077AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x430077B0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x430077B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x430077B8: jal         0x43006B78
    // 0x430077BC: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    ovl_enemy_world7_6B78(rdram, ctx);
        goto after_1;
    // 0x430077BC: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    after_1:
    // 0x430077C0: b           L_430077D8
    // 0x430077C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_430077D8;
    // 0x430077C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430077C8:
    // 0x430077C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x430077CC: nop

    // 0x430077D0: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x430077D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430077D8:
    // 0x430077D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430077DC: jr          $ra
    // 0x430077E0: nop

    return;
    // 0x430077E0: nop

;}
RECOMP_FUNC void ovl_enemy_world7_77E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430077E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x430077E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x430077EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430077F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430077F4: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x430077F8: jal         0x43004880
    // 0x430077FC: nop

    ovl_enemy_world7_4880(rdram, ctx);
        goto after_0;
    // 0x430077FC: nop

    after_0:
    // 0x43007800: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x43007804: nop

    // 0x43007808: sltiu       $at, $t6, 0x18
    ctx->r1 = ctx->r14 < 0X18 ? 1 : 0;
    // 0x4300780C: beq         $at, $zero, L_43007B00
    if (ctx->r1 == 0) {
        // 0x43007810: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_43007B00;
    }
    // 0x43007810: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43007814: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43007818: addu        $at, $at, $t6
    gpr jr_addend_43007824 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x4300781C: lw          $t6, -0x6120($at)
    ctx->r14 = ADD32(ctx->r1, -0X6120);
    // 0x43007820: nop

    // 0x43007824: jr          $t6
    // 0x43007828: nop

    switch (jr_addend_43007824 >> 2) {
        case 0: goto L_4300782C; break;
        case 1: goto L_43007834; break;
        case 2: goto L_4300785C; break;
        case 3: goto L_43007884; break;
        case 4: goto L_430078AC; break;
        case 5: goto L_430078D4; break;
        case 6: goto L_430078F0; break;
        case 7: goto L_4300790C; break;
        case 8: goto L_43007928; break;
        case 9: goto L_43007944; break;
        case 10: goto L_43007960; break;
        case 11: goto L_43007974; break;
        case 12: goto L_43007988; break;
        case 13: goto L_4300799C; break;
        case 14: goto L_430079B0; break;
        case 15: goto L_430079C8; break;
        case 16: goto L_430079E4; break;
        case 17: goto L_43007A0C; break;
        case 18: goto L_43007A34; break;
        case 19: goto L_43007A5C; break;
        case 20: goto L_43007A84; break;
        case 21: goto L_43007AD4; break;
        case 22: goto L_43007AE8; break;
        case 23: goto L_43007AAC; break;
        default: switch_error(__func__, 0x43007824, 0x43009EE0);
    }
    // 0x43007828: nop

L_4300782C:
    // 0x4300782C: b           L_43007B00
    // 0x43007830: sw          $zero, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = 0;
        goto L_43007B00;
    // 0x43007830: sw          $zero, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = 0;
L_43007834:
    // 0x43007834: lw          $t7, 0x1A4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1A4);
    // 0x43007838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300783C: andi        $t8, $t7, 0x55
    ctx->r24 = ctx->r15 & 0X55;
    // 0x43007840: sw          $t8, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r24;
    // 0x43007844: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    // 0x43007848: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x4300784C: jal         0x43006B78
    // 0x43007850: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_enemy_world7_6B78(rdram, ctx);
        goto after_1;
    // 0x43007850: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_1:
    // 0x43007854: b           L_43007B04
    // 0x43007858: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007858: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4300785C:
    // 0x4300785C: lw          $t9, 0x1A4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1A4);
    // 0x43007860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007864: andi        $t0, $t9, 0x55
    ctx->r8 = ctx->r25 & 0X55;
    // 0x43007868: sw          $t0, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r8;
    // 0x4300786C: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x43007870: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43007874: jal         0x43006B78
    // 0x43007878: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_enemy_world7_6B78(rdram, ctx);
        goto after_2;
    // 0x43007878: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_2:
    // 0x4300787C: b           L_43007B04
    // 0x43007880: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007880: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007884:
    // 0x43007884: lw          $t1, 0x1A4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1A4);
    // 0x43007888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300788C: andi        $t2, $t1, 0x55
    ctx->r10 = ctx->r9 & 0X55;
    // 0x43007890: sw          $t2, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r10;
    // 0x43007894: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    // 0x43007898: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x4300789C: jal         0x43006B78
    // 0x430078A0: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_enemy_world7_6B78(rdram, ctx);
        goto after_3;
    // 0x430078A0: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_3:
    // 0x430078A4: b           L_43007B04
    // 0x430078A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x430078A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430078AC:
    // 0x430078AC: lw          $t3, 0x1A4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1A4);
    // 0x430078B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430078B4: andi        $t4, $t3, 0x55
    ctx->r12 = ctx->r11 & 0X55;
    // 0x430078B8: sw          $t4, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r12;
    // 0x430078BC: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x430078C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x430078C4: jal         0x43006B78
    // 0x430078C8: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_enemy_world7_6B78(rdram, ctx);
        goto after_4;
    // 0x430078C8: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_4:
    // 0x430078CC: b           L_43007B04
    // 0x430078D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x430078D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430078D4:
    // 0x430078D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430078D8: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    // 0x430078DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x430078E0: jal         0x43006B78
    // 0x430078E4: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_enemy_world7_6B78(rdram, ctx);
        goto after_5;
    // 0x430078E4: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_5:
    // 0x430078E8: b           L_43007B04
    // 0x430078EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x430078EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430078F0:
    // 0x430078F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430078F4: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x430078F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x430078FC: jal         0x43006B78
    // 0x43007900: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_enemy_world7_6B78(rdram, ctx);
        goto after_6;
    // 0x43007900: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_6:
    // 0x43007904: b           L_43007B04
    // 0x43007908: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007908: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4300790C:
    // 0x4300790C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007910: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    // 0x43007914: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43007918: jal         0x43006B78
    // 0x4300791C: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_enemy_world7_6B78(rdram, ctx);
        goto after_7;
    // 0x4300791C: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_7:
    // 0x43007920: b           L_43007B04
    // 0x43007924: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007924: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007928:
    // 0x43007928: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300792C: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x43007930: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43007934: jal         0x43006B78
    // 0x43007938: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_enemy_world7_6B78(rdram, ctx);
        goto after_8;
    // 0x43007938: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_8:
    // 0x4300793C: b           L_43007B04
    // 0x43007940: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007940: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007944:
    // 0x43007944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007948: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x4300794C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43007950: jal         0x43006B78
    // 0x43007954: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_enemy_world7_6B78(rdram, ctx);
        goto after_9;
    // 0x43007954: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_9:
    // 0x43007958: b           L_43007B04
    // 0x4300795C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x4300795C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007960:
    // 0x43007960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007964: jal         0x4300729C
    // 0x43007968: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    ovl_enemy_world7_729C(rdram, ctx);
        goto after_10;
    // 0x43007968: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_10:
    // 0x4300796C: b           L_43007B04
    // 0x43007970: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007970: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007974:
    // 0x43007974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007978: jal         0x4300729C
    // 0x4300797C: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    ovl_enemy_world7_729C(rdram, ctx);
        goto after_11;
    // 0x4300797C: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_11:
    // 0x43007980: b           L_43007B04
    // 0x43007984: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007984: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007988:
    // 0x43007988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300798C: jal         0x4300744C
    // 0x43007990: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    ovl_enemy_world7_744C(rdram, ctx);
        goto after_12;
    // 0x43007990: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_12:
    // 0x43007994: b           L_43007B04
    // 0x43007998: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007998: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4300799C:
    // 0x4300799C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430079A0: jal         0x4300744C
    // 0x430079A4: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    ovl_enemy_world7_744C(rdram, ctx);
        goto after_13;
    // 0x430079A4: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_13:
    // 0x430079A8: b           L_43007B04
    // 0x430079AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x430079AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430079B0:
    // 0x430079B0: sw          $zero, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = 0;
    // 0x430079B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430079B8: jal         0x4300744C
    // 0x430079BC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    ovl_enemy_world7_744C(rdram, ctx);
        goto after_14;
    // 0x430079BC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    after_14:
    // 0x430079C0: b           L_43007B04
    // 0x430079C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x430079C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430079C8:
    // 0x430079C8: jal         0x4300034C
    // 0x430079CC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_enemy_world7_34C(rdram, ctx);
        goto after_15;
    // 0x430079CC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_15:
    // 0x430079D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430079D4: jal         0x43007520
    // 0x430079D8: addiu       $a1, $v0, 0x1E
    ctx->r5 = ADD32(ctx->r2, 0X1E);
    ovl_enemy_world7_7520(rdram, ctx);
        goto after_16;
    // 0x430079D8: addiu       $a1, $v0, 0x1E
    ctx->r5 = ADD32(ctx->r2, 0X1E);
    after_16:
    // 0x430079DC: b           L_43007B04
    // 0x430079E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x430079E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430079E4:
    // 0x430079E4: lw          $t5, 0x1A4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X1A4);
    // 0x430079E8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x430079EC: andi        $t6, $t5, 0x55
    ctx->r14 = ctx->r13 & 0X55;
    // 0x430079F0: jal         0x4300034C
    // 0x430079F4: sw          $t6, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r14;
    ovl_enemy_world7_34C(rdram, ctx);
        goto after_17;
    // 0x430079F4: sw          $t6, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r14;
    after_17:
    // 0x430079F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430079FC: jal         0x43007520
    // 0x43007A00: addiu       $a1, $v0, 0x1E
    ctx->r5 = ADD32(ctx->r2, 0X1E);
    ovl_enemy_world7_7520(rdram, ctx);
        goto after_18;
    // 0x43007A00: addiu       $a1, $v0, 0x1E
    ctx->r5 = ADD32(ctx->r2, 0X1E);
    after_18:
    // 0x43007A04: b           L_43007B04
    // 0x43007A08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007A08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007A0C:
    // 0x43007A0C: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x43007A10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43007A14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007A18: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    // 0x43007A1C: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    // 0x43007A20: lui         $a3, 0x4188
    ctx->r7 = S32(0X4188 << 16);
    // 0x43007A24: jal         0x43007644
    // 0x43007A28: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_enemy_world7_7644(rdram, ctx);
        goto after_19;
    // 0x43007A28: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_19:
    // 0x43007A2C: b           L_43007B04
    // 0x43007A30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007A30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007A34:
    // 0x43007A34: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x43007A38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43007A3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007A40: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    // 0x43007A44: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x43007A48: lui         $a3, 0x4198
    ctx->r7 = S32(0X4198 << 16);
    // 0x43007A4C: jal         0x43007644
    // 0x43007A50: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_enemy_world7_7644(rdram, ctx);
        goto after_20;
    // 0x43007A50: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_20:
    // 0x43007A54: b           L_43007B04
    // 0x43007A58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007A58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007A5C:
    // 0x43007A5C: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x43007A60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43007A64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007A68: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x43007A6C: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    // 0x43007A70: lui         $a3, 0x4188
    ctx->r7 = S32(0X4188 << 16);
    // 0x43007A74: jal         0x43007644
    // 0x43007A78: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_enemy_world7_7644(rdram, ctx);
        goto after_21;
    // 0x43007A78: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_21:
    // 0x43007A7C: b           L_43007B04
    // 0x43007A80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007A80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007A84:
    // 0x43007A84: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x43007A88: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x43007A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007A90: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x43007A94: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x43007A98: lui         $a3, 0x4198
    ctx->r7 = S32(0X4198 << 16);
    // 0x43007A9C: jal         0x43007644
    // 0x43007AA0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    ovl_enemy_world7_7644(rdram, ctx);
        goto after_22;
    // 0x43007AA0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_22:
    // 0x43007AA4: b           L_43007B04
    // 0x43007AA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007AA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007AAC:
    // 0x43007AAC: lui         $at, 0x4391
    ctx->r1 = S32(0X4391 << 16);
    // 0x43007AB0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x43007AB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007AB8: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x43007ABC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x43007AC0: lui         $a3, 0x4188
    ctx->r7 = S32(0X4188 << 16);
    // 0x43007AC4: jal         0x43007644
    // 0x43007AC8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    ovl_enemy_world7_7644(rdram, ctx);
        goto after_23;
    // 0x43007AC8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_23:
    // 0x43007ACC: b           L_43007B04
    // 0x43007AD0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007AD0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007AD4:
    // 0x43007AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007AD8: jal         0x43007770
    // 0x43007ADC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_enemy_world7_7770(rdram, ctx);
        goto after_24;
    // 0x43007ADC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_24:
    // 0x43007AE0: b           L_43007B04
    // 0x43007AE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007AE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007AE8:
    // 0x43007AE8: lw          $t7, 0x1A4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1A4);
    // 0x43007AEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007AF0: andi        $t8, $t7, 0x55
    ctx->r24 = ctx->r15 & 0X55;
    // 0x43007AF4: sw          $t8, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r24;
    // 0x43007AF8: jal         0x43007770
    // 0x43007AFC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_enemy_world7_7770(rdram, ctx);
        goto after_25;
    // 0x43007AFC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_25:
L_43007B00:
    // 0x43007B00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007B04:
    // 0x43007B04: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43007B08: jr          $ra
    // 0x43007B0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43007B0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_enemy_world7_7B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007B10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43007B14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007B18: jal         0x43006928
    // 0x43007B1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world7_6928(rdram, ctx);
        goto after_0;
    // 0x43007B1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43007B20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43007B24: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x43007B28: lw          $t6, 0x1C8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1C8);
    // 0x43007B2C: nop

    // 0x43007B30: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x43007B34: beq         $t7, $zero, L_43007B44
    if (ctx->r15 == 0) {
        // 0x43007B38: nop
    
            goto L_43007B44;
    }
    // 0x43007B38: nop

    // 0x43007B3C: b           L_43007B48
    // 0x43007B40: sw          $t8, 0x1A4($a0)
    MEM_W(0X1A4, ctx->r4) = ctx->r24;
        goto L_43007B48;
    // 0x43007B40: sw          $t8, 0x1A4($a0)
    MEM_W(0X1A4, ctx->r4) = ctx->r24;
L_43007B44:
    // 0x43007B44: sw          $zero, 0x1A4($a0)
    MEM_W(0X1A4, ctx->r4) = 0;
L_43007B48:
    // 0x43007B48: jal         0x430077E4
    // 0x43007B4C: nop

    ovl_enemy_world7_77E4(rdram, ctx);
        goto after_1;
    // 0x43007B4C: nop

    after_1:
    // 0x43007B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007B54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43007B58: jr          $ra
    // 0x43007B5C: nop

    return;
    // 0x43007B5C: nop

;}
RECOMP_FUNC void ovl_enemy_world7_7B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007B60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43007B64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007B68: jal         0x43006D84
    // 0x43007B6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world7_6D84(rdram, ctx);
        goto after_0;
    // 0x43007B6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43007B70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43007B74: jal         0x430077E4
    // 0x43007B78: nop

    ovl_enemy_world7_77E4(rdram, ctx);
        goto after_1;
    // 0x43007B78: nop

    after_1:
    // 0x43007B7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007B80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43007B84: jr          $ra
    // 0x43007B88: nop

    return;
    // 0x43007B88: nop

;}
RECOMP_FUNC void ovl_enemy_world7_7B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007B8C: lw          $v0, 0x1A0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A0);
    // 0x43007B90: nop

    // 0x43007B94: sra         $t6, $v0, 5
    ctx->r14 = S32(SIGNED(ctx->r2) >> 5);
    // 0x43007B98: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x43007B9C: slti        $at, $t7, 0x8
    ctx->r1 = SIGNED(ctx->r15) < 0X8 ? 1 : 0;
    // 0x43007BA0: bne         $at, $zero, L_43007BB0
    if (ctx->r1 != 0) {
        // 0x43007BA4: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_43007BB0;
    }
    // 0x43007BA4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x43007BA8: b           L_43007BC4
    // 0x43007BAC: addiu       $a1, $t7, -0x8
    ctx->r5 = ADD32(ctx->r15, -0X8);
        goto L_43007BC4;
    // 0x43007BAC: addiu       $a1, $t7, -0x8
    ctx->r5 = ADD32(ctx->r15, -0X8);
L_43007BB0:
    // 0x43007BB0: bgez        $v0, L_43007BC0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x43007BB4: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_43007BC0;
    }
    // 0x43007BB4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x43007BB8: b           L_43007BC0
    // 0x43007BBC: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
        goto L_43007BC0;
    // 0x43007BBC: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
L_43007BC0:
    // 0x43007BC0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
L_43007BC4:
    // 0x43007BC4: lw          $t9, 0x1C8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X1C8);
    // 0x43007BC8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x43007BCC: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x43007BD0: beq         $t0, $zero, L_43007C2C
    if (ctx->r8 == 0) {
        // 0x43007BD4: sllv        $v1, $t8, $a1
        ctx->r3 = S32(ctx->r24 << (ctx->r5 & 31));
            goto L_43007C2C;
    }
    // 0x43007BD4: sllv        $v1, $t8, $a1
    ctx->r3 = S32(ctx->r24 << (ctx->r5 & 31));
    // 0x43007BD8: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x43007BDC: slti        $at, $a0, 0x8
    ctx->r1 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x43007BE0: bne         $at, $zero, L_43007BF0
    if (ctx->r1 != 0) {
        // 0x43007BE4: nop
    
            goto L_43007BF0;
    }
    // 0x43007BE4: nop

    // 0x43007BE8: b           L_43007C04
    // 0x43007BEC: addiu       $a1, $v0, -0x9
    ctx->r5 = ADD32(ctx->r2, -0X9);
        goto L_43007C04;
    // 0x43007BEC: addiu       $a1, $v0, -0x9
    ctx->r5 = ADD32(ctx->r2, -0X9);
L_43007BF0:
    // 0x43007BF0: bgez        $a0, L_43007C00
    if (SIGNED(ctx->r4) >= 0) {
        // 0x43007BF4: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_43007C00;
    }
    // 0x43007BF4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x43007BF8: b           L_43007C00
    // 0x43007BFC: addiu       $a2, $v0, 0x7
    ctx->r6 = ADD32(ctx->r2, 0X7);
        goto L_43007C00;
    // 0x43007BFC: addiu       $a2, $v0, 0x7
    ctx->r6 = ADD32(ctx->r2, 0X7);
L_43007C00:
    // 0x43007C00: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
L_43007C04:
    // 0x43007C04: addiu       $a0, $v0, -0x2
    ctx->r4 = ADD32(ctx->r2, -0X2);
    // 0x43007C08: slti        $at, $a0, 0x8
    ctx->r1 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x43007C0C: beq         $at, $zero, L_43007C78
    if (ctx->r1 == 0) {
        // 0x43007C10: nop
    
            goto L_43007C78;
    }
    // 0x43007C10: nop

    // 0x43007C14: bgez        $a0, L_43007C24
    if (SIGNED(ctx->r4) >= 0) {
        // 0x43007C18: nop
    
            goto L_43007C24;
    }
    // 0x43007C18: nop

    // 0x43007C1C: jr          $ra
    // 0x43007C20: nop

    return;
    // 0x43007C20: nop

L_43007C24:
    // 0x43007C24: jr          $ra
    // 0x43007C28: nop

    return;
    // 0x43007C28: nop

L_43007C2C:
    // 0x43007C2C: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    // 0x43007C30: slti        $at, $a0, 0x8
    ctx->r1 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x43007C34: bne         $at, $zero, L_43007C44
    if (ctx->r1 != 0) {
        // 0x43007C38: nop
    
            goto L_43007C44;
    }
    // 0x43007C38: nop

    // 0x43007C3C: b           L_43007C58
    // 0x43007C40: addiu       $a1, $v0, -0x7
    ctx->r5 = ADD32(ctx->r2, -0X7);
        goto L_43007C58;
    // 0x43007C40: addiu       $a1, $v0, -0x7
    ctx->r5 = ADD32(ctx->r2, -0X7);
L_43007C44:
    // 0x43007C44: bgez        $a0, L_43007C54
    if (SIGNED(ctx->r4) >= 0) {
        // 0x43007C48: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_43007C54;
    }
    // 0x43007C48: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x43007C4C: b           L_43007C54
    // 0x43007C50: addiu       $a2, $v0, 0x9
    ctx->r6 = ADD32(ctx->r2, 0X9);
        goto L_43007C54;
    // 0x43007C50: addiu       $a2, $v0, 0x9
    ctx->r6 = ADD32(ctx->r2, 0X9);
L_43007C54:
    // 0x43007C54: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
L_43007C58:
    // 0x43007C58: addiu       $a0, $v0, 0x2
    ctx->r4 = ADD32(ctx->r2, 0X2);
    // 0x43007C5C: slti        $at, $a0, 0x8
    ctx->r1 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x43007C60: beq         $at, $zero, L_43007C78
    if (ctx->r1 == 0) {
        // 0x43007C64: nop
    
            goto L_43007C78;
    }
    // 0x43007C64: nop

    // 0x43007C68: bgez        $a0, L_43007C78
    if (SIGNED(ctx->r4) >= 0) {
        // 0x43007C6C: nop
    
            goto L_43007C78;
    }
    // 0x43007C6C: nop

    // 0x43007C70: jr          $ra
    // 0x43007C74: nop

    return;
    // 0x43007C74: nop

L_43007C78:
    // 0x43007C78: jr          $ra
    // 0x43007C7C: nop

    return;
    // 0x43007C7C: nop

;}
RECOMP_FUNC void ovl_enemy_world7_7C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007C80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43007C84: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43007C88: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43007C8C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43007C90: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x43007C94: jal         0x43004880
    // 0x43007C98: nop

    ovl_enemy_world7_4880(rdram, ctx);
        goto after_0;
    // 0x43007C98: nop

    after_0:
    // 0x43007C9C: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x43007CA0: nop

    // 0x43007CA4: sltiu       $at, $t6, 0x16
    ctx->r1 = ctx->r14 < 0X16 ? 1 : 0;
    // 0x43007CA8: beq         $at, $zero, L_43007F2C
    if (ctx->r1 == 0) {
        // 0x43007CAC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_43007F2C;
    }
    // 0x43007CAC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43007CB0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43007CB4: addu        $at, $at, $t6
    gpr jr_addend_43007CC0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43007CB8: lw          $t6, -0x60C0($at)
    ctx->r14 = ADD32(ctx->r1, -0X60C0);
    // 0x43007CBC: nop

    // 0x43007CC0: jr          $t6
    // 0x43007CC4: nop

    switch (jr_addend_43007CC0 >> 2) {
        case 0: goto L_43007CC8; break;
        case 1: goto L_43007CD4; break;
        case 2: goto L_43007CEC; break;
        case 3: goto L_43007D04; break;
        case 4: goto L_43007D1C; break;
        case 5: goto L_43007D34; break;
        case 6: goto L_43007D54; break;
        case 7: goto L_43007D74; break;
        case 8: goto L_43007D8C; break;
        case 9: goto L_43007DA4; break;
        case 10: goto L_43007DBC; break;
        case 11: goto L_43007DD4; break;
        case 12: goto L_43007DEC; break;
        case 13: goto L_43007E04; break;
        case 14: goto L_43007E1C; break;
        case 15: goto L_43007E30; break;
        case 16: goto L_43007E44; break;
        case 17: goto L_43007E58; break;
        case 18: goto L_43007E78; break;
        case 19: goto L_43007E9C; break;
        case 20: goto L_43007EC0; break;
        case 21: goto L_43007EF8; break;
        default: switch_error(__func__, 0x43007CC0, 0x43009F40);
    }
    // 0x43007CC4: nop

L_43007CC8:
    // 0x43007CC8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43007CCC: b           L_43007F2C
    // 0x43007CD0: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
        goto L_43007F2C;
    // 0x43007CD0: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
L_43007CD4:
    // 0x43007CD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007CD8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43007CDC: jal         0x43007B10
    // 0x43007CE0: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    ovl_enemy_world7_7B10(rdram, ctx);
        goto after_1;
    // 0x43007CE0: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_1:
    // 0x43007CE4: b           L_43007F30
    // 0x43007CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007CEC:
    // 0x43007CEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007CF0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43007CF4: jal         0x43007B10
    // 0x43007CF8: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    ovl_enemy_world7_7B10(rdram, ctx);
        goto after_2;
    // 0x43007CF8: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    after_2:
    // 0x43007CFC: b           L_43007F30
    // 0x43007D00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007D00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007D04:
    // 0x43007D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007D08: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43007D0C: jal         0x43007B10
    // 0x43007D10: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    ovl_enemy_world7_7B10(rdram, ctx);
        goto after_3;
    // 0x43007D10: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_3:
    // 0x43007D14: b           L_43007F30
    // 0x43007D18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007D18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007D1C:
    // 0x43007D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007D20: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43007D24: jal         0x43007B10
    // 0x43007D28: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    ovl_enemy_world7_7B10(rdram, ctx);
        goto after_4;
    // 0x43007D28: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    after_4:
    // 0x43007D2C: b           L_43007F30
    // 0x43007D30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007D30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007D34:
    // 0x43007D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007D38: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43007D3C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x43007D40: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    // 0x43007D44: jal         0x43007108
    // 0x43007D48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_enemy_world7_7108(rdram, ctx);
        goto after_5;
    // 0x43007D48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x43007D4C: b           L_43007F30
    // 0x43007D50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007D50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007D54:
    // 0x43007D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007D58: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43007D5C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x43007D60: addiu       $a3, $zero, 0x78
    ctx->r7 = ADD32(0, 0X78);
    // 0x43007D64: jal         0x43007108
    // 0x43007D68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_enemy_world7_7108(rdram, ctx);
        goto after_6;
    // 0x43007D68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x43007D6C: b           L_43007F30
    // 0x43007D70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007D70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007D74:
    // 0x43007D74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007D78: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43007D7C: jal         0x43007B60
    // 0x43007D80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    ovl_enemy_world7_7B60(rdram, ctx);
        goto after_7;
    // 0x43007D80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_7:
    // 0x43007D84: b           L_43007F30
    // 0x43007D88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007D88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007D8C:
    // 0x43007D8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007D90: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43007D94: jal         0x43007B60
    // 0x43007D98: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    ovl_enemy_world7_7B60(rdram, ctx);
        goto after_8;
    // 0x43007D98: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_8:
    // 0x43007D9C: b           L_43007F30
    // 0x43007DA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007DA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007DA4:
    // 0x43007DA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007DA8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43007DAC: jal         0x43007B60
    // 0x43007DB0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    ovl_enemy_world7_7B60(rdram, ctx);
        goto after_9;
    // 0x43007DB0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_9:
    // 0x43007DB4: b           L_43007F30
    // 0x43007DB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007DB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007DBC:
    // 0x43007DBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007DC0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43007DC4: jal         0x43007B60
    // 0x43007DC8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    ovl_enemy_world7_7B60(rdram, ctx);
        goto after_10;
    // 0x43007DC8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_10:
    // 0x43007DCC: b           L_43007F30
    // 0x43007DD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007DD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007DD4:
    // 0x43007DD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007DD8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43007DDC: jal         0x43007B60
    // 0x43007DE0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    ovl_enemy_world7_7B60(rdram, ctx);
        goto after_11;
    // 0x43007DE0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_11:
    // 0x43007DE4: b           L_43007F30
    // 0x43007DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007DEC:
    // 0x43007DEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007DF0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43007DF4: jal         0x43007B60
    // 0x43007DF8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    ovl_enemy_world7_7B60(rdram, ctx);
        goto after_12;
    // 0x43007DF8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_12:
    // 0x43007DFC: b           L_43007F30
    // 0x43007E00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007E00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007E04:
    // 0x43007E04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007E08: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43007E0C: jal         0x43007B60
    // 0x43007E10: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    ovl_enemy_world7_7B60(rdram, ctx);
        goto after_13;
    // 0x43007E10: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_13:
    // 0x43007E14: b           L_43007F30
    // 0x43007E18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007E18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007E1C:
    // 0x43007E1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007E20: jal         0x43007010
    // 0x43007E24: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    ovl_enemy_world7_7010(rdram, ctx);
        goto after_14;
    // 0x43007E24: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_14:
    // 0x43007E28: b           L_43007F30
    // 0x43007E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007E30:
    // 0x43007E30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007E34: jal         0x43007010
    // 0x43007E38: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    ovl_enemy_world7_7010(rdram, ctx);
        goto after_15;
    // 0x43007E38: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_15:
    // 0x43007E3C: b           L_43007F30
    // 0x43007E40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007E40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007E44:
    // 0x43007E44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007E48: jal         0x43007010
    // 0x43007E4C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    ovl_enemy_world7_7010(rdram, ctx);
        goto after_16;
    // 0x43007E4C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_16:
    // 0x43007E50: b           L_43007F30
    // 0x43007E54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007E54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007E58:
    // 0x43007E58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007E5C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x43007E60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43007E64: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x43007E68: jal         0x43007108
    // 0x43007E6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_enemy_world7_7108(rdram, ctx);
        goto after_17;
    // 0x43007E6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_17:
    // 0x43007E70: b           L_43007F30
    // 0x43007E74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007E74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007E78:
    // 0x43007E78: addiu       $t7, $zero, 0x44
    ctx->r15 = ADD32(0, 0X44);
    // 0x43007E7C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x43007E80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007E84: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43007E88: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x43007E8C: jal         0x43007108
    // 0x43007E90: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    ovl_enemy_world7_7108(rdram, ctx);
        goto after_18;
    // 0x43007E90: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_18:
    // 0x43007E94: b           L_43007F30
    // 0x43007E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007E9C:
    // 0x43007E9C: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
    // 0x43007EA0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x43007EA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007EA8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43007EAC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x43007EB0: jal         0x43007108
    // 0x43007EB4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    ovl_enemy_world7_7108(rdram, ctx);
        goto after_19;
    // 0x43007EB4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_19:
    // 0x43007EB8: b           L_43007F30
    // 0x43007EBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007EBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007EC0:
    // 0x43007EC0: lw          $t9, 0x1C8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1C8);
    // 0x43007EC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007EC8: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x43007ECC: jal         0x43007B8C
    // 0x43007ED0: sw          $t0, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r8;
    ovl_enemy_world7_7B8C(rdram, ctx);
        goto after_20;
    // 0x43007ED0: sw          $t0, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r8;
    after_20:
    // 0x43007ED4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x43007ED8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x43007EDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007EE0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43007EE4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x43007EE8: jal         0x43007108
    // 0x43007EEC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    ovl_enemy_world7_7108(rdram, ctx);
        goto after_21;
    // 0x43007EEC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_21:
    // 0x43007EF0: b           L_43007F30
    // 0x43007EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007EF8:
    // 0x43007EF8: lw          $t2, 0x1C8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X1C8);
    // 0x43007EFC: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x43007F00: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x43007F04: sw          $t3, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r11;
    // 0x43007F08: jal         0x43007B8C
    // 0x43007F0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_7B8C(rdram, ctx);
        goto after_22;
    // 0x43007F0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x43007F10: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x43007F14: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x43007F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007F1C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43007F20: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x43007F24: jal         0x43007108
    // 0x43007F28: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    ovl_enemy_world7_7108(rdram, ctx);
        goto after_23;
    // 0x43007F28: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_23:
L_43007F2C:
    // 0x43007F2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007F30:
    // 0x43007F30: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x43007F34: jal         0x43009954
    // 0x43007F38: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world7_9954(rdram, ctx);
        goto after_24;
    // 0x43007F38: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_24:
    // 0x43007F3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43007F40: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43007F44: jr          $ra
    // 0x43007F48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43007F48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
