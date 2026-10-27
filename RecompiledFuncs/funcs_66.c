#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_item_main_5608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41005608: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4100560C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41005610: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x41005614: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x41005618: jal         0x41004E04
    // 0x4100561C: nop

    ovl_item_main_4E04(rdram, ctx);
        goto after_0;
    // 0x4100561C: nop

    after_0:
    // 0x41005620: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x41005624: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41005628: lw          $v1, 0xC($t7)
    ctx->r3 = MEM_W(ctx->r15, 0XC);
    // 0x4100562C: beq         $v0, $at, L_4100564C
    if (ctx->r2 == ctx->r1) {
        // 0x41005630: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_4100564C;
    }
    // 0x41005630: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x41005634: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x41005638: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x4100563C: bne         $t8, $at, L_41005650
    if (ctx->r24 != ctx->r1) {
        // 0x41005640: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41005650;
    }
    // 0x41005640: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41005644: jal         0x41004C50
    // 0x41005648: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    ovl_item_main_4C50(rdram, ctx);
        goto after_1;
    // 0x41005648: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_1:
L_4100564C:
    // 0x4100564C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41005650:
    // 0x41005650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x41005654: jr          $ra
    // 0x41005658: nop

    return;
    // 0x41005658: nop

;}
RECOMP_FUNC void ovl_item_main_565C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100565C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x41005660: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x41005664: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x41005668: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x4100566C: jal         0x41004E04
    // 0x41005670: nop

    ovl_item_main_4E04(rdram, ctx);
        goto after_0;
    // 0x41005670: nop

    after_0:
    // 0x41005674: lw          $v1, 0x74($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X74);
    // 0x41005678: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x4100567C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x41005680: jal         0x4100539C
    // 0x41005684: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    ovl_item_main_539C(rdram, ctx);
        goto after_1;
    // 0x41005684: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_1:
    // 0x41005688: jal         0x41004BDC
    // 0x4100568C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_4BDC(rdram, ctx);
        goto after_2;
    // 0x4100568C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x41005690: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x41005694: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x41005698: addiu       $at, $zero, 0x6F
    ctx->r1 = ADD32(0, 0X6F);
    // 0x4100569C: beq         $t6, $at, L_410056C0
    if (ctx->r14 == ctx->r1) {
        // 0x410056A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_410056C0;
    }
    // 0x410056A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x410056A4: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x410056A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x410056AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x410056B0: jal         0x410012C0
    // 0x410056B4: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    ovl_item_main_12C0(rdram, ctx);
        goto after_3;
    // 0x410056B4: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_3:
    // 0x410056B8: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x410056BC: nop

L_410056C0:
    // 0x410056C0: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x410056C4: beq         $v1, $at, L_410056EC
    if (ctx->r3 == ctx->r1) {
        // 0x410056C8: slti        $at, $v1, 0x29
        ctx->r1 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
            goto L_410056EC;
    }
    // 0x410056C8: slti        $at, $v1, 0x29
    ctx->r1 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
    // 0x410056CC: bne         $at, $zero, L_410056D8
    if (ctx->r1 != 0) {
        // 0x410056D0: slti        $at, $v1, 0x69
        ctx->r1 = SIGNED(ctx->r3) < 0X69 ? 1 : 0;
            goto L_410056D8;
    }
    // 0x410056D0: slti        $at, $v1, 0x69
    ctx->r1 = SIGNED(ctx->r3) < 0X69 ? 1 : 0;
    // 0x410056D4: bne         $at, $zero, L_410056EC
    if (ctx->r1 != 0) {
        // 0x410056D8: slti        $at, $v1, 0x6C
        ctx->r1 = SIGNED(ctx->r3) < 0X6C ? 1 : 0;
            goto L_410056EC;
    }
L_410056D8:
    // 0x410056D8: slti        $at, $v1, 0x6C
    ctx->r1 = SIGNED(ctx->r3) < 0X6C ? 1 : 0;
    // 0x410056DC: bne         $at, $zero, L_410056FC
    if (ctx->r1 != 0) {
        // 0x410056E0: slti        $at, $v1, 0x70
        ctx->r1 = SIGNED(ctx->r3) < 0X70 ? 1 : 0;
            goto L_410056FC;
    }
    // 0x410056E0: slti        $at, $v1, 0x70
    ctx->r1 = SIGNED(ctx->r3) < 0X70 ? 1 : 0;
    // 0x410056E4: beq         $at, $zero, L_41005700
    if (ctx->r1 == 0) {
        // 0x410056E8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_41005700;
    }
    // 0x410056E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_410056EC:
    // 0x410056EC: lw          $t7, 0x60($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X60);
    // 0x410056F0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x410056F4: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x410056F8: sw          $t8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r24;
L_410056FC:
    // 0x410056FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_41005700:
    // 0x41005700: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x41005704: jr          $ra
    // 0x41005708: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x41005708: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_item_main_570C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100570C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41005710: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41005714: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x41005718: jal         0x41004E04
    // 0x4100571C: nop

    ovl_item_main_4E04(rdram, ctx);
        goto after_0;
    // 0x4100571C: nop

    after_0:
    // 0x41005720: lui         $v1, 0x4100
    ctx->r3 = S32(0X4100 << 16);
    // 0x41005724: addiu       $v1, $v1, 0x71F0
    ctx->r3 = ADD32(ctx->r3, 0X71F0);
    // 0x41005728: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x4100572C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x41005730: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x41005734: jal         0x41004C88
    // 0x41005738: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    ovl_item_main_4C88(rdram, ctx);
        goto after_1;
    // 0x41005738: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    after_1:
    // 0x4100573C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41005740: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x41005744: jr          $ra
    // 0x41005748: nop

    return;
    // 0x41005748: nop

;}
RECOMP_FUNC void ovl_item_main_574C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100574C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x41005750: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x41005754: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41005758: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4100575C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x41005760: beq         $a0, $at, L_410057FC
    if (ctx->r4 == ctx->r1) {
        // 0x41005764: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_410057FC;
    }
    // 0x41005764: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x41005768: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x4100576C: nop

    // 0x41005770: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x41005774: beq         $t7, $zero, L_4100578C
    if (ctx->r15 == 0) {
        // 0x41005778: nop
    
            goto L_4100578C;
    }
    // 0x41005778: nop

    // 0x4100577C: jal         0x41001338
    // 0x41005780: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_item_main_1338(rdram, ctx);
        goto after_0;
    // 0x41005780: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x41005784: jal         0x41001094
    // 0x41005788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_1094(rdram, ctx);
        goto after_1;
    // 0x41005788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_4100578C:
    // 0x4100578C: jal         0x410010A8
    // 0x41005790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_10A8(rdram, ctx);
        goto after_2;
    // 0x41005790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x41005794: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x41005798: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4100579C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x410057A0: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x410057A4: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x410057A8: lw          $t9, 0x60($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X60);
    // 0x410057AC: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x410057B0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x410057B4: ori         $t0, $t9, 0x20
    ctx->r8 = ctx->r25 | 0X20;
    // 0x410057B8: sw          $t8, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r24;
    // 0x410057BC: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x410057C0: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
    // 0x410057C4: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x410057C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x410057CC: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x410057D0: nop

    // 0x410057D4: bc1t        L_410057EC
    if (c1cs) {
        // 0x410057D8: nop
    
            goto L_410057EC;
    }
    // 0x410057D8: nop

    // 0x410057DC: jal         0x41004C50
    // 0x410057E0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    ovl_item_main_4C50(rdram, ctx);
        goto after_3;
    // 0x410057E0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_3:
    // 0x410057E4: b           L_41005800
    // 0x410057E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_41005800;
    // 0x410057E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_410057EC:
    // 0x410057EC: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
    // 0x410057F0: nop

    // 0x410057F4: ori         $t2, $t1, 0x100
    ctx->r10 = ctx->r9 | 0X100;
    // 0x410057F8: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
L_410057FC:
    // 0x410057FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_41005800:
    // 0x41005800: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x41005804: jr          $ra
    // 0x41005808: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x41005808: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_item_main_580C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100580C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41005810: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41005814: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41005818: beq         $a0, $at, L_41005878
    if (ctx->r4 == ctx->r1) {
        // 0x4100581C: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_41005878;
    }
    // 0x4100581C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x41005820: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x41005824: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x41005828: jal         0x41001338
    // 0x4100582C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    ovl_item_main_1338(rdram, ctx);
        goto after_0;
    // 0x4100582C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x41005830: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x41005834: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x41005838: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x4100583C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x41005840: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x41005844: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x41005848: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x4100584C: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x41005850: lw          $t9, 0x10($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X10);
    // 0x41005854: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x41005858: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x4100585C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x41005860: sw          $zero, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = 0;
    // 0x41005864: sw          $zero, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = 0;
    // 0x41005868: jal         0x410063AC
    // 0x4100586C: sw          $zero, 0x70($a0)
    MEM_W(0X70, ctx->r4) = 0;
    ovl_item_main_63AC(rdram, ctx);
        goto after_1;
    // 0x4100586C: sw          $zero, 0x70($a0)
    MEM_W(0X70, ctx->r4) = 0;
    after_1:
    // 0x41005870: b           L_41005884
    // 0x41005874: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_41005884;
    // 0x41005874: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41005878:
    // 0x41005878: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x4100587C: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x41005880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41005884:
    // 0x41005884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x41005888: jr          $ra
    // 0x4100588C: nop

    return;
    // 0x4100588C: nop

;}
RECOMP_FUNC void ovl_item_main_5890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41005890: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x41005894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41005898: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x4100589C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x410058A0: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    // 0x410058A4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x410058A8: beq         $a1, $at, L_410058CC
    if (ctx->r5 == ctx->r1) {
        // 0x410058AC: addiu       $a2, $zero, -0x1
        ctx->r6 = ADD32(0, -0X1);
            goto L_410058CC;
    }
    // 0x410058AC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x410058B0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x410058B4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x410058B8: jal         0x41004E04
    // 0x410058BC: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    ovl_item_main_4E04(rdram, ctx);
        goto after_0;
    // 0x410058BC: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x410058C0: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x410058C4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x410058C8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_410058CC:
    // 0x410058CC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x410058D0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x410058D4: beq         $v0, $zero, L_410058EC
    if (ctx->r2 == 0) {
        // 0x410058D8: nop
    
            goto L_410058EC;
    }
    // 0x410058D8: nop

    // 0x410058DC: beq         $v0, $at, L_41005960
    if (ctx->r2 == ctx->r1) {
        // 0x410058E0: nop
    
            goto L_41005960;
    }
    // 0x410058E0: nop

    // 0x410058E4: b           L_41005980
    // 0x410058E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_41005980;
    // 0x410058E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_410058EC:
    // 0x410058EC: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x410058F0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x410058F4: beq         $v0, $zero, L_4100590C
    if (ctx->r2 == 0) {
        // 0x410058F8: nop
    
            goto L_4100590C;
    }
    // 0x410058F8: nop

    // 0x410058FC: beq         $v0, $at, L_41005920
    if (ctx->r2 == ctx->r1) {
        // 0x41005900: nop
    
            goto L_41005920;
    }
    // 0x41005900: nop

    // 0x41005904: b           L_41005980
    // 0x41005908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_41005980;
    // 0x41005908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4100590C:
    // 0x4100590C: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x41005910: jal         0x4100574C
    // 0x41005914: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_item_main_574C(rdram, ctx);
        goto after_1;
    // 0x41005914: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x41005918: b           L_41005980
    // 0x4100591C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_41005980;
    // 0x4100591C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41005920:
    // 0x41005920: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x41005924: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x41005928: bne         $t6, $at, L_4100594C
    if (ctx->r14 != ctx->r1) {
        // 0x4100592C: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_4100594C;
    }
    // 0x4100592C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41005930: beq         $a2, $at, L_41005980
    if (ctx->r6 == ctx->r1) {
        // 0x41005934: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41005980;
    }
    // 0x41005934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41005938: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x4100593C: jal         0x4100580C
    // 0x41005940: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_item_main_580C(rdram, ctx);
        goto after_2;
    // 0x41005940: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x41005944: b           L_41005980
    // 0x41005948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_41005980;
    // 0x41005948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4100594C:
    // 0x4100594C: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x41005950: jal         0x4100580C
    // 0x41005954: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_item_main_580C(rdram, ctx);
        goto after_3;
    // 0x41005954: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_3:
    // 0x41005958: b           L_41005980
    // 0x4100595C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_41005980;
    // 0x4100595C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41005960:
    // 0x41005960: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x41005964: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x41005968: bne         $t7, $at, L_41005980
    if (ctx->r15 != ctx->r1) {
        // 0x4100596C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41005980;
    }
    // 0x4100596C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41005970: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x41005974: jal         0x4100574C
    // 0x41005978: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_item_main_574C(rdram, ctx);
        goto after_4;
    // 0x41005978: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_4:
    // 0x4100597C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41005980:
    // 0x41005980: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x41005984: jr          $ra
    // 0x41005988: nop

    return;
    // 0x41005988: nop

;}
RECOMP_FUNC void ovl_item_main_598C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100598C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41005990: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41005994: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x41005998: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x4100599C: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x410059A0: bne         $t7, $zero, L_41005B54
    if (ctx->r15 != 0) {
        // 0x410059A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41005B54;
    }
    // 0x410059A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410059A8: lw          $t8, 0xC($a1)
    ctx->r24 = MEM_W(ctx->r5, 0XC);
    // 0x410059AC: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x410059B0: andi        $t9, $t8, 0xF00
    ctx->r25 = ctx->r24 & 0XF00;
    // 0x410059B4: bne         $t9, $at, L_41005B54
    if (ctx->r25 != ctx->r1) {
        // 0x410059B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41005B54;
    }
    // 0x410059B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410059BC: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    // 0x410059C0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x410059C4: jal         0x41004E04
    // 0x410059C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_item_main_4E04(rdram, ctx);
        goto after_0;
    // 0x410059C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x410059CC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x410059D0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x410059D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x410059D8: beq         $v0, $at, L_41005B54
    if (ctx->r2 == ctx->r1) {
        // 0x410059DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41005B54;
    }
    // 0x410059DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410059E0: lw          $t0, 0x60($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X60);
    // 0x410059E4: nop

    // 0x410059E8: andi        $t1, $t0, 0x4
    ctx->r9 = ctx->r8 & 0X4;
    // 0x410059EC: bne         $t1, $zero, L_41005B54
    if (ctx->r9 != 0) {
        // 0x410059F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41005B54;
    }
    // 0x410059F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410059F4: lw          $t2, 0x60($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X60);
    // 0x410059F8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x410059FC: andi        $t3, $t2, 0x4
    ctx->r11 = ctx->r10 & 0X4;
    // 0x41005A00: bne         $t3, $zero, L_41005B54
    if (ctx->r11 != 0) {
        // 0x41005A04: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41005B54;
    }
    // 0x41005A04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41005A08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x41005A0C: lwc1        $f6, 0x14($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X14);
    // 0x41005A10: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x41005A14: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x41005A18: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x41005A1C: bc1f        L_41005A30
    if (!c1cs) {
        // 0x41005A20: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_41005A30;
    }
    // 0x41005A20: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x41005A24: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x41005A28: b           L_41005A30
    // 0x41005A2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_41005A30;
    // 0x41005A2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_41005A30:
    // 0x41005A30: lwc1        $f8, 0x28($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X28);
    // 0x41005A34: nop

    // 0x41005A38: c.eq.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl == ctx->f8.fl;
    // 0x41005A3C: nop

    // 0x41005A40: bc1f        L_41005B54
    if (!c1cs) {
        // 0x41005A44: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41005B54;
    }
    // 0x41005A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41005A48: lwc1        $f10, 0x28($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X28);
    // 0x41005A4C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x41005A50: c.eq.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl == ctx->f10.fl;
    // 0x41005A54: nop

    // 0x41005A58: bc1f        L_41005B54
    if (!c1cs) {
        // 0x41005A5C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41005B54;
    }
    // 0x41005A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41005A60: lw          $t4, 0x10($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X10);
    // 0x41005A64: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x41005A68: lwc1        $f0, 0x0($t4)
    ctx->f0.u32l = MEM_W(ctx->r12, 0X0);
    // 0x41005A6C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x41005A70: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x41005A74: nop

    // 0x41005A78: bc1f        L_41005A88
    if (!c1cs) {
        // 0x41005A7C: nop
    
            goto L_41005A88;
    }
    // 0x41005A7C: nop

    // 0x41005A80: b           L_41005A8C
    // 0x41005A84: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_41005A8C;
    // 0x41005A84: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_41005A88:
    // 0x41005A88: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_41005A8C:
    // 0x41005A8C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x41005A90: nop

    // 0x41005A94: bc1f        L_41005AA4
    if (!c1cs) {
        // 0x41005A98: nop
    
            goto L_41005AA4;
    }
    // 0x41005A98: nop

    // 0x41005A9C: b           L_41005AC8
    // 0x41005AA0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_41005AC8;
    // 0x41005AA0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_41005AA4:
    // 0x41005AA4: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x41005AA8: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x41005AAC: bc1f        L_41005ABC
    if (!c1cs) {
        // 0x41005AB0: nop
    
            goto L_41005ABC;
    }
    // 0x41005AB0: nop

    // 0x41005AB4: b           L_41005AC4
    // 0x41005AB8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_41005AC4;
    // 0x41005AB8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_41005ABC:
    // 0x41005ABC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x41005AC0: nop

L_41005AC4:
    // 0x41005AC4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_41005AC8:
    // 0x41005AC8: lwc1        $f18, 0x48($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X48);
    // 0x41005ACC: nop

    // 0x41005AD0: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x41005AD4: swc1        $f4, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f4.u32l;
    // 0x41005AD8: lw          $t5, 0x10($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X10);
    // 0x41005ADC: nop

    // 0x41005AE0: lwc1        $f0, 0x8($t5)
    ctx->f0.u32l = MEM_W(ctx->r13, 0X8);
    // 0x41005AE4: nop

    // 0x41005AE8: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x41005AEC: nop

    // 0x41005AF0: bc1f        L_41005B00
    if (!c1cs) {
        // 0x41005AF4: nop
    
            goto L_41005B00;
    }
    // 0x41005AF4: nop

    // 0x41005AF8: b           L_41005B04
    // 0x41005AFC: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_41005B04;
    // 0x41005AFC: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_41005B00:
    // 0x41005B00: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_41005B04:
    // 0x41005B04: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x41005B08: nop

    // 0x41005B0C: bc1f        L_41005B1C
    if (!c1cs) {
        // 0x41005B10: nop
    
            goto L_41005B1C;
    }
    // 0x41005B10: nop

    // 0x41005B14: b           L_41005B40
    // 0x41005B18: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_41005B40;
    // 0x41005B18: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_41005B1C:
    // 0x41005B1C: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x41005B20: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x41005B24: bc1f        L_41005B34
    if (!c1cs) {
        // 0x41005B28: nop
    
            goto L_41005B34;
    }
    // 0x41005B28: nop

    // 0x41005B2C: b           L_41005B3C
    // 0x41005B30: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_41005B3C;
    // 0x41005B30: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_41005B34:
    // 0x41005B34: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x41005B38: nop

L_41005B3C:
    // 0x41005B3C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_41005B40:
    // 0x41005B40: lwc1        $f6, 0x50($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X50);
    // 0x41005B44: nop

    // 0x41005B48: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x41005B4C: swc1        $f8, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f8.u32l;
    // 0x41005B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41005B54:
    // 0x41005B54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x41005B58: jr          $ra
    // 0x41005B5C: nop

    return;
    // 0x41005B5C: nop

;}
RECOMP_FUNC void ovl_item_main_5B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41005B60: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x41005B64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41005B68: lw          $t6, 0x10($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X10);
    // 0x41005B6C: addiu       $t9, $a0, 0x1C
    ctx->r25 = ADD32(ctx->r4, 0X1C);
    // 0x41005B70: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x41005B74: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x41005B78: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x41005B7C: lw          $t7, 0x10($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X10);
    // 0x41005B80: nop

    // 0x41005B84: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x41005B88: nop

    // 0x41005B8C: swc1        $f6, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f6.u32l;
    // 0x41005B90: lw          $t8, 0x10($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X10);
    // 0x41005B94: nop

    // 0x41005B98: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x41005B9C: nop

    // 0x41005BA0: swc1        $f8, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f8.u32l;
    // 0x41005BA4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x41005BA8: lw          $t0, 0xC($a1)
    ctx->r8 = MEM_W(ctx->r5, 0XC);
    // 0x41005BAC: nop

    // 0x41005BB0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x41005BB4: lw          $t1, 0x10($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X10);
    // 0x41005BB8: nop

    // 0x41005BBC: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x41005BC0: nop

    // 0x41005BC4: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x41005BC8: lw          $t2, 0x10($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X10);
    // 0x41005BCC: nop

    // 0x41005BD0: lwc1        $f16, 0x4($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X4);
    // 0x41005BD4: nop

    // 0x41005BD8: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x41005BDC: lw          $t3, 0x10($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X10);
    // 0x41005BE0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x41005BE4: lwc1        $f18, 0x8($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X8);
    // 0x41005BE8: jal         0x410010E4
    // 0x41005BEC: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    ovl_item_main_10E4(rdram, ctx);
        goto after_0;
    // 0x41005BEC: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x41005BF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41005BF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x41005BF8: jr          $ra
    // 0x41005BFC: nop

    return;
    // 0x41005BFC: nop

;}
RECOMP_FUNC void ovl_item_main_5C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41005C00: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x41005C04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x41005C08: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x41005C0C: lw          $t6, 0x74($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X74);
    // 0x41005C10: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x41005C14: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x41005C18: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x41005C1C: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x41005C20: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x41005C24: addiu       $t1, $sp, 0x24
    ctx->r9 = ADD32(ctx->r29, 0X24);
    // 0x41005C28: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x41005C2C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x41005C30: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x41005C34: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x41005C38: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x41005C3C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x41005C40: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x41005C44: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x41005C48: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x41005C4C: jal         0x410010E4
    // 0x41005C50: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    ovl_item_main_10E4(rdram, ctx);
        goto after_0;
    // 0x41005C50: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    after_0:
    // 0x41005C54: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x41005C58: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x41005C5C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x41005C60: bne         $t2, $zero, L_41005C98
    if (ctx->r10 != 0) {
        // 0x41005C64: addiu       $a1, $zero, 0x35
        ctx->r5 = ADD32(0, 0X35);
            goto L_41005C98;
    }
    // 0x41005C64: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    // 0x41005C68: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x41005C6C: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    // 0x41005C70: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x41005C74: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x41005C78: jal         0x41001240
    // 0x41005C7C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_item_main_1240(rdram, ctx);
        goto after_1;
    // 0x41005C7C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x41005C80: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x41005C84: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x41005C88: lw          $t3, 0x60($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X60);
    // 0x41005C8C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x41005C90: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x41005C94: sw          $t4, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r12;
L_41005C98:
    // 0x41005C98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x41005C9C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x41005CA0: jr          $ra
    // 0x41005CA4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x41005CA4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_item_main_5CA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41005CA8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x41005CAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41005CB0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x41005CB4: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x41005CB8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x41005CBC: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
    // 0x41005CC0: beq         $t6, $zero, L_41005CD0
    if (ctx->r14 == 0) {
        // 0x41005CC4: addiu       $a1, $zero, 0x29
        ctx->r5 = ADD32(0, 0X29);
            goto L_41005CD0;
    }
    // 0x41005CC4: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x41005CC8: ori         $t7, $v0, 0x4
    ctx->r15 = ctx->r2 | 0X4;
    // 0x41005CCC: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
L_41005CD0:
    // 0x41005CD0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x41005CD4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x41005CD8: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    // 0x41005CDC: jal         0x410006C4
    // 0x41005CE0: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    ovl_item_main_6C4(rdram, ctx);
        goto after_0;
    // 0x41005CE0: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_0:
    // 0x41005CE4: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x41005CE8: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x41005CEC: bne         $v0, $zero, L_41005D58
    if (ctx->r2 != 0) {
        // 0x41005CF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41005D58;
    }
    // 0x41005CF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41005CF4: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x41005CF8: nop

    // 0x41005CFC: bne         $t9, $zero, L_41005D58
    if (ctx->r25 != 0) {
        // 0x41005D00: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41005D58;
    }
    // 0x41005D00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41005D04: lw          $v0, 0x60($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X60);
    // 0x41005D08: nop

    // 0x41005D0C: andi        $t0, $v0, 0x4
    ctx->r8 = ctx->r2 & 0X4;
    // 0x41005D10: bne         $t0, $zero, L_41005D54
    if (ctx->r8 != 0) {
        // 0x41005D14: andi        $t1, $v0, 0x8000
        ctx->r9 = ctx->r2 & 0X8000;
            goto L_41005D54;
    }
    // 0x41005D14: andi        $t1, $v0, 0x8000
    ctx->r9 = ctx->r2 & 0X8000;
    // 0x41005D18: bne         $t1, $zero, L_41005D54
    if (ctx->r9 != 0) {
        // 0x41005D1C: andi        $t2, $v0, 0x20
        ctx->r10 = ctx->r2 & 0X20;
            goto L_41005D54;
    }
    // 0x41005D1C: andi        $t2, $v0, 0x20
    ctx->r10 = ctx->r2 & 0X20;
    // 0x41005D20: bne         $t2, $zero, L_41005D54
    if (ctx->r10 != 0) {
        // 0x41005D24: sll         $t3, $v0, 15
        ctx->r11 = S32(ctx->r2 << 15);
            goto L_41005D54;
    }
    // 0x41005D24: sll         $t3, $v0, 15
    ctx->r11 = S32(ctx->r2 << 15);
    // 0x41005D28: bltz        $t3, L_41005D54
    if (SIGNED(ctx->r11) < 0) {
        // 0x41005D2C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_41005D54;
    }
    // 0x41005D2C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x41005D30: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x41005D34: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    // 0x41005D38: jal         0x41005C00
    // 0x41005D3C: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    ovl_item_main_5C00(rdram, ctx);
        goto after_1;
    // 0x41005D3C: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_1:
    // 0x41005D40: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x41005D44: beq         $v0, $zero, L_41005D54
    if (ctx->r2 == 0) {
        // 0x41005D48: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_41005D54;
    }
    // 0x41005D48: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x41005D4C: jal         0x41004C50
    // 0x41005D50: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    ovl_item_main_4C50(rdram, ctx);
        goto after_2;
    // 0x41005D50: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_2:
L_41005D54:
    // 0x41005D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41005D58:
    // 0x41005D58: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x41005D5C: jr          $ra
    // 0x41005D60: nop

    return;
    // 0x41005D60: nop

;}
RECOMP_FUNC void ovl_item_main_5D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41005D64: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x41005D68: nop

    // 0x41005D6C: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
    // 0x41005D70: beq         $t6, $zero, L_41005DA0
    if (ctx->r14 == 0) {
        // 0x41005D74: nop
    
            goto L_41005DA0;
    }
    // 0x41005D74: nop

    // 0x41005D78: lw          $t7, 0x70($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X70);
    // 0x41005D7C: andi        $t8, $v0, 0x4
    ctx->r24 = ctx->r2 & 0X4;
    // 0x41005D80: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x41005D84: bne         $at, $zero, L_41005DA0
    if (ctx->r1 != 0) {
        // 0x41005D88: nop
    
            goto L_41005DA0;
    }
    // 0x41005D88: nop

    // 0x41005D8C: bne         $t8, $zero, L_41005DA0
    if (ctx->r24 != 0) {
        // 0x41005D90: lui         $at, 0xFFFF
        ctx->r1 = S32(0XFFFF << 16);
            goto L_41005DA0;
    }
    // 0x41005D90: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x41005D94: ori         $at, $at, 0x7FFF
    ctx->r1 = ctx->r1 | 0X7FFF;
    // 0x41005D98: and         $t9, $v0, $at
    ctx->r25 = ctx->r2 & ctx->r1;
    // 0x41005D9C: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
L_41005DA0:
    // 0x41005DA0: jr          $ra
    // 0x41005DA4: nop

    return;
    // 0x41005DA4: nop

;}
RECOMP_FUNC void ovl_item_main_5DA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41005DA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x41005DAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41005DB0: lw          $a2, 0xC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC);
    // 0x41005DB4: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x41005DB8: jal         0x41004E04
    // 0x41005DBC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    ovl_item_main_4E04(rdram, ctx);
        goto after_0;
    // 0x41005DBC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x41005DC0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x41005DC4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x41005DC8: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x41005DCC: nop

    // 0x41005DD0: beq         $v1, $at, L_41005DF0
    if (ctx->r3 == ctx->r1) {
        // 0x41005DD4: addiu       $at, $zero, 0x19
        ctx->r1 = ADD32(0, 0X19);
            goto L_41005DF0;
    }
    // 0x41005DD4: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x41005DD8: beq         $v1, $at, L_41005E44
    if (ctx->r3 == ctx->r1) {
        // 0x41005DDC: addiu       $at, $zero, 0x2C
        ctx->r1 = ADD32(0, 0X2C);
            goto L_41005E44;
    }
    // 0x41005DDC: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x41005DE0: beq         $v1, $at, L_41005E18
    if (ctx->r3 == ctx->r1) {
        // 0x41005DE4: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_41005E18;
    }
    // 0x41005DE4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41005DE8: b           L_41005E60
    // 0x41005DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_41005E60;
    // 0x41005DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41005DF0:
    // 0x41005DF0: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x41005DF4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41005DF8: beq         $v0, $at, L_41005E0C
    if (ctx->r2 == ctx->r1) {
        // 0x41005DFC: nop
    
            goto L_41005E0C;
    }
    // 0x41005DFC: nop

    // 0x41005E00: lw          $t6, 0x74($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X74);
    // 0x41005E04: b           L_41005E5C
    // 0x41005E08: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
        goto L_41005E5C;
    // 0x41005E08: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_41005E0C:
    // 0x41005E0C: b           L_41005E5C
    // 0x41005E10: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
        goto L_41005E5C;
    // 0x41005E10: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x41005E14: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_41005E18:
    // 0x41005E18: beq         $v0, $at, L_41005E60
    if (ctx->r2 == ctx->r1) {
        // 0x41005E1C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41005E60;
    }
    // 0x41005E1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41005E20: lw          $t7, 0x60($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X60);
    // 0x41005E24: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x41005E28: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x41005E2C: beq         $t8, $zero, L_41005E3C
    if (ctx->r24 == 0) {
        // 0x41005E30: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_41005E3C;
    }
    // 0x41005E30: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x41005E34: b           L_41005E5C
    // 0x41005E38: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
        goto L_41005E5C;
    // 0x41005E38: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
L_41005E3C:
    // 0x41005E3C: b           L_41005E5C
    // 0x41005E40: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
        goto L_41005E5C;
    // 0x41005E40: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_41005E44:
    // 0x41005E44: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41005E48: beq         $v0, $at, L_41005E60
    if (ctx->r2 == ctx->r1) {
        // 0x41005E4C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41005E60;
    }
    // 0x41005E4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41005E50: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x41005E54: addiu       $t0, $v0, 0x1C
    ctx->r8 = ADD32(ctx->r2, 0X1C);
    // 0x41005E58: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_41005E5C:
    // 0x41005E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41005E60:
    // 0x41005E60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x41005E64: jr          $ra
    // 0x41005E68: nop

    return;
    // 0x41005E68: nop

;}
RECOMP_FUNC void ovl_item_main_5E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41005E6C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x41005E70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x41005E74: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x41005E78: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x41005E7C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x41005E80: nop

    // 0x41005E84: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x41005E88: jal         0x41004E04
    // 0x41005E8C: nop

    ovl_item_main_4E04(rdram, ctx);
        goto after_0;
    // 0x41005E8C: nop

    after_0:
    // 0x41005E90: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x41005E94: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x41005E98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41005E9C: lw          $a1, 0xC($t7)
    ctx->r5 = MEM_W(ctx->r15, 0XC);
    // 0x41005EA0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x41005EA4: bne         $v0, $at, L_41005EB4
    if (ctx->r2 != ctx->r1) {
        // 0x41005EA8: sw          $t8, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r24;
            goto L_41005EB4;
    }
    // 0x41005EA8: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x41005EAC: b           L_41006034
    // 0x41005EB0: sw          $zero, 0xC($t7)
    MEM_W(0XC, ctx->r15) = 0;
        goto L_41006034;
    // 0x41005EB0: sw          $zero, 0xC($t7)
    MEM_W(0XC, ctx->r15) = 0;
L_41005EB4:
    // 0x41005EB4: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x41005EB8: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x41005EBC: andi        $t9, $v0, 0x8000
    ctx->r25 = ctx->r2 & 0X8000;
    // 0x41005EC0: bne         $t9, $zero, L_41005EE0
    if (ctx->r25 != 0) {
        // 0x41005EC4: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_41005EE0;
    }
    // 0x41005EC4: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x41005EC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41005ECC: jal         0x41005B60
    // 0x41005ED0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    ovl_item_main_5B60(rdram, ctx);
        goto after_1;
    // 0x41005ED0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_1:
    // 0x41005ED4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x41005ED8: b           L_41005F38
    // 0x41005EDC: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
        goto L_41005F38;
    // 0x41005EDC: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
L_41005EE0:
    // 0x41005EE0: bne         $v0, $at, L_41005F34
    if (ctx->r2 != ctx->r1) {
        // 0x41005EE4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_41005F34;
    }
    // 0x41005EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41005EE8: jal         0x41005CA8
    // 0x41005EEC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    ovl_item_main_5CA8(rdram, ctx);
        goto after_2;
    // 0x41005EEC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_2:
    // 0x41005EF0: jal         0x410010A8
    // 0x41005EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_10A8(rdram, ctx);
        goto after_3;
    // 0x41005EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x41005EF8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x41005EFC: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x41005F00: lw          $t0, 0x8($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X8);
    // 0x41005F04: nop

    // 0x41005F08: bne         $t0, $t1, L_41005F38
    if (ctx->r8 != ctx->r9) {
        // 0x41005F0C: lui         $at, 0xC040
        ctx->r1 = S32(0XC040 << 16);
            goto L_41005F38;
    }
    // 0x41005F0C: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x41005F10: lw          $t2, 0xC($a1)
    ctx->r10 = MEM_W(ctx->r5, 0XC);
    // 0x41005F14: ori         $at, $zero, 0x8040
    ctx->r1 = 0 | 0X8040;
    // 0x41005F18: slt         $at, $t2, $at
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x41005F1C: beq         $at, $zero, L_41005F38
    if (ctx->r1 == 0) {
        // 0x41005F20: lui         $at, 0xC040
        ctx->r1 = S32(0XC040 << 16);
            goto L_41005F38;
    }
    // 0x41005F20: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x41005F24: lw          $t3, 0x60($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X60);
    // 0x41005F28: nop

    // 0x41005F2C: ori         $t4, $t3, 0x10
    ctx->r12 = ctx->r11 | 0X10;
    // 0x41005F30: sw          $t4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r12;
L_41005F34:
    // 0x41005F34: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
L_41005F38:
    // 0x41005F38: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x41005F3C: lwc1        $f6, 0x14($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X14);
    // 0x41005F40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41005F44: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x41005F48: nop

    // 0x41005F4C: bc1f        L_41005F98
    if (!c1cs) {
        // 0x41005F50: nop
    
            goto L_41005F98;
    }
    // 0x41005F50: nop

    // 0x41005F54: jal         0x41005D64
    // 0x41005F58: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    ovl_item_main_5D64(rdram, ctx);
        goto after_4;
    // 0x41005F58: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_4:
    // 0x41005F5C: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x41005F60: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x41005F64: andi        $t5, $v0, 0x20
    ctx->r13 = ctx->r2 & 0X20;
    // 0x41005F68: beq         $t5, $zero, L_41005F8C
    if (ctx->r13 == 0) {
        // 0x41005F6C: andi        $t6, $v0, 0x4
        ctx->r14 = ctx->r2 & 0X4;
            goto L_41005F8C;
    }
    // 0x41005F6C: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x41005F70: bne         $t6, $zero, L_41005F8C
    if (ctx->r14 != 0) {
        // 0x41005F74: andi        $t8, $v0, 0x10
        ctx->r24 = ctx->r2 & 0X10;
            goto L_41005F8C;
    }
    // 0x41005F74: andi        $t8, $v0, 0x10
    ctx->r24 = ctx->r2 & 0X10;
    // 0x41005F78: bne         $t8, $zero, L_41005F8C
    if (ctx->r24 != 0) {
        // 0x41005F7C: addiu       $at, $zero, -0x21
        ctx->r1 = ADD32(0, -0X21);
            goto L_41005F8C;
    }
    // 0x41005F7C: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x41005F80: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x41005F84: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x41005F88: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_41005F8C:
    // 0x41005F8C: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x41005F90: and         $t9, $v0, $at
    ctx->r25 = ctx->r2 & ctx->r1;
    // 0x41005F94: sw          $t9, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r25;
L_41005F98:
    // 0x41005F98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41005F9C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x41005FA0: jal         0x410011A4
    // 0x41005FA4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    ovl_item_main_11A4(rdram, ctx);
        goto after_5;
    // 0x41005FA4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_5:
    // 0x41005FA8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x41005FAC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x41005FB0: beq         $v0, $at, L_41005FBC
    if (ctx->r2 == ctx->r1) {
        // 0x41005FB4: addiu       $t0, $zero, 0x2
        ctx->r8 = ADD32(0, 0X2);
            goto L_41005FBC;
    }
    // 0x41005FB4: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x41005FB8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_41005FBC:
    // 0x41005FBC: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x41005FC0: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x41005FC4: beq         $v1, $at, L_41005FFC
    if (ctx->r3 == ctx->r1) {
        // 0x41005FC8: addiu       $at, $zero, 0x1C
        ctx->r1 = ADD32(0, 0X1C);
            goto L_41005FFC;
    }
    // 0x41005FC8: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x41005FCC: beq         $v1, $at, L_41005FE4
    if (ctx->r3 == ctx->r1) {
        // 0x41005FD0: addiu       $at, $zero, 0x1202
        ctx->r1 = ADD32(0, 0X1202);
            goto L_41005FE4;
    }
    // 0x41005FD0: addiu       $at, $zero, 0x1202
    ctx->r1 = ADD32(0, 0X1202);
    // 0x41005FD4: beq         $v1, $at, L_4100600C
    if (ctx->r3 == ctx->r1) {
        // 0x41005FD8: andi        $t1, $v1, 0x8000
        ctx->r9 = ctx->r3 & 0X8000;
            goto L_4100600C;
    }
    // 0x41005FD8: andi        $t1, $v1, 0x8000
    ctx->r9 = ctx->r3 & 0X8000;
    // 0x41005FDC: b           L_4100600C
    // 0x41005FE0: andi        $t1, $v1, 0x8000
    ctx->r9 = ctx->r3 & 0X8000;
        goto L_4100600C;
    // 0x41005FE0: andi        $t1, $v1, 0x8000
    ctx->r9 = ctx->r3 & 0X8000;
L_41005FE4:
    // 0x41005FE4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x41005FE8: nop

    // 0x41005FEC: swc1        $f8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f8.u32l;
    // 0x41005FF0: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x41005FF4: b           L_4100600C
    // 0x41005FF8: andi        $t1, $v1, 0x8000
    ctx->r9 = ctx->r3 & 0X8000;
        goto L_4100600C;
    // 0x41005FF8: andi        $t1, $v1, 0x8000
    ctx->r9 = ctx->r3 & 0X8000;
L_41005FFC:
    // 0x41005FFC: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
    // 0x41006000: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x41006004: nop

    // 0x41006008: andi        $t1, $v1, 0x8000
    ctx->r9 = ctx->r3 & 0X8000;
L_4100600C:
    // 0x4100600C: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x41006010: bne         $t1, $at, L_41006028
    if (ctx->r9 != ctx->r1) {
        // 0x41006014: lw          $t2, 0x20($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X20);
            goto L_41006028;
    }
    // 0x41006014: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x41006018: jal         0x4100598C
    // 0x4100601C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_598C(rdram, ctx);
        goto after_6;
    // 0x4100601C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x41006020: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x41006024: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
L_41006028:
    // 0x41006028: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x4100602C: nop

    // 0x41006030: sw          $t2, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r10;
L_41006034:
    // 0x41006034: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x41006038: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4100603C: jr          $ra
    // 0x41006040: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x41006040: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_item_main_6044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41006044: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x41006048: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4100604C: lw          $a2, 0xC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC);
    // 0x41006050: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x41006054: jal         0x41004E04
    // 0x41006058: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_item_main_4E04(rdram, ctx);
        goto after_0;
    // 0x41006058: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x4100605C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x41006060: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41006064: beq         $v0, $at, L_4100607C
    if (ctx->r2 == ctx->r1) {
        // 0x41006068: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_4100607C;
    }
    // 0x41006068: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x4100606C: addiu       $t6, $v0, 0x1C
    ctx->r14 = ADD32(ctx->r2, 0X1C);
    // 0x41006070: sw          $t6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r14;
    // 0x41006074: jal         0x410010E4
    // 0x41006078: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    ovl_item_main_10E4(rdram, ctx);
        goto after_1;
    // 0x41006078: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_1:
L_4100607C:
    // 0x4100607C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41006080: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x41006084: jr          $ra
    // 0x41006088: nop

    return;
    // 0x41006088: nop

    // 0x4100608C: jr          $ra
    // 0x41006090: nop

    return;
    // 0x41006090: nop

;}
RECOMP_FUNC void ovl_item_main_6094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41006094: jr          $ra
    // 0x41006098: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x41006098: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ovl_item_main_609C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100609C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x410060A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x410060A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x410060A8: jal         0x410010E4
    // 0x410060AC: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    ovl_item_main_10E4(rdram, ctx);
        goto after_0;
    // 0x410060AC: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_0:
    // 0x410060B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410060B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x410060B8: jr          $ra
    // 0x410060BC: nop

    return;
    // 0x410060BC: nop

;}
RECOMP_FUNC void ovl_item_main_60C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410060C0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x410060C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x410060C8: swc1        $f12, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f12.u32l;
    // 0x410060CC: jr          $ra
    // 0x410060D0: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x410060D0: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void ovl_item_main_60D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410060D4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x410060D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x410060DC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x410060E0: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
    // 0x410060E4: jr          $ra
    // 0x410060E8: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x410060E8: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void ovl_item_main_60EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410060EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x410060F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x410060F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x410060F8: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x410060FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x41006100: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x41006104: beq         $t7, $zero, L_410061F8
    if (ctx->r15 == 0) {
        // 0x41006108: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_410061F8;
    }
    // 0x41006108: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x4100610C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x41006110: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
    // 0x41006114: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x41006118: beq         $v0, $at, L_41006150
    if (ctx->r2 == ctx->r1) {
        // 0x4100611C: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_41006150;
    }
    // 0x4100611C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x41006120: beq         $v0, $at, L_410061C4
    if (ctx->r2 == ctx->r1) {
        // 0x41006124: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_410061C4;
    }
    // 0x41006124: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x41006128: beq         $v0, $at, L_41006140
    if (ctx->r2 == ctx->r1) {
        // 0x4100612C: addiu       $at, $zero, 0x17
        ctx->r1 = ADD32(0, 0X17);
            goto L_41006140;
    }
    // 0x4100612C: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x41006130: beq         $v0, $at, L_410061D0
    if (ctx->r2 == ctx->r1) {
        // 0x41006134: lw          $t1, 0x24($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X24);
            goto L_410061D0;
    }
    // 0x41006134: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x41006138: b           L_410061D0
    // 0x4100613C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
        goto L_410061D0;
    // 0x4100613C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
L_41006140:
    // 0x41006140: jal         0x4100609C
    // 0x41006144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_609C(rdram, ctx);
        goto after_0;
    // 0x41006144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x41006148: b           L_410061D0
    // 0x4100614C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
        goto L_410061D0;
    // 0x4100614C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
L_41006150:
    // 0x41006150: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x41006154: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x41006158: nop

    // 0x4100615C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x41006160: nop

    // 0x41006164: bc1f        L_410061BC
    if (!c1cs) {
        // 0x41006168: nop
    
            goto L_410061BC;
    }
    // 0x41006168: nop

    // 0x4100616C: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x41006170: nop

    // 0x41006174: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x41006178: nop

    // 0x4100617C: bc1t        L_410061BC
    if (c1cs) {
        // 0x41006180: nop
    
            goto L_410061BC;
    }
    // 0x41006180: nop

    // 0x41006184: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x41006188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4100618C: sra         $t0, $t9, 12
    ctx->r8 = S32(SIGNED(ctx->r25) >> 12);
    // 0x41006190: beq         $t0, $zero, L_410061AC
    if (ctx->r8 == 0) {
        // 0x41006194: nop
    
            goto L_410061AC;
    }
    // 0x41006194: nop

    // 0x41006198: lw          $a1, 0x78($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X78);
    // 0x4100619C: jal         0x410060C0
    // 0x410061A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_60C0(rdram, ctx);
        goto after_1;
    // 0x410061A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x410061A4: b           L_410061D0
    // 0x410061A8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
        goto L_410061D0;
    // 0x410061A8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
L_410061AC:
    // 0x410061AC: jal         0x410060C0
    // 0x410061B0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_item_main_60C0(rdram, ctx);
        goto after_2;
    // 0x410061B0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_2:
    // 0x410061B4: b           L_410061D0
    // 0x410061B8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
        goto L_410061D0;
    // 0x410061B8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
L_410061BC:
    // 0x410061BC: b           L_410061CC
    // 0x410061C0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
        goto L_410061CC;
    // 0x410061C0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_410061C4:
    // 0x410061C4: jal         0x410060D4
    // 0x410061C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_60D4(rdram, ctx);
        goto after_3;
    // 0x410061C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_410061CC:
    // 0x410061CC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
L_410061D0:
    // 0x410061D0: nop

    // 0x410061D4: beq         $t1, $zero, L_410061E8
    if (ctx->r9 == 0) {
        // 0x410061D8: nop
    
            goto L_410061E8;
    }
    // 0x410061D8: nop

    // 0x410061DC: lw          $t2, 0x64($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X64);
    // 0x410061E0: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
    // 0x410061E4: sw          $t2, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r10;
L_410061E8:
    // 0x410061E8: lw          $t3, 0x60($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X60);
    // 0x410061EC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x410061F0: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x410061F4: sw          $t4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r12;
L_410061F8:
    // 0x410061F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x410061FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x41006200: jr          $ra
    // 0x41006204: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x41006204: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_item_main_6208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41006208: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4100620C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41006210: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x41006214: lwc1        $f0, 0x78($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X78);
    // 0x41006218: nop

    // 0x4100621C: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x41006220: nop

    // 0x41006224: bc1t        L_41006290
    if (c1cs) {
        // 0x41006228: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41006290;
    }
    // 0x41006228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4100622C: lwc1        $f4, 0x38($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X38);
    // 0x41006230: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x41006234: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x41006238: nop

    // 0x4100623C: bc1f        L_41006290
    if (!c1cs) {
        // 0x41006240: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41006290;
    }
    // 0x41006240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41006244: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x41006248: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4100624C: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x41006250: swc1        $f8, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f8.u32l;
    // 0x41006254: lwc1        $f0, 0x78($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X78);
    // 0x41006258: nop

    // 0x4100625C: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x41006260: nop

    // 0x41006264: bc1f        L_41006280
    if (!c1cs) {
        // 0x41006268: nop
    
            goto L_41006280;
    }
    // 0x41006268: nop

    // 0x4100626C: swc1        $f2, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f2.u32l;
    // 0x41006270: jal         0x41004C50
    // 0x41006274: swc1        $f2, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f2.u32l;
    ovl_item_main_4C50(rdram, ctx);
        goto after_0;
    // 0x41006274: swc1        $f2, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f2.u32l;
    after_0:
    // 0x41006278: b           L_41006290
    // 0x4100627C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_41006290;
    // 0x4100627C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41006280:
    // 0x41006280: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x41006284: jal         0x410060C0
    // 0x41006288: nop

    ovl_item_main_60C0(rdram, ctx);
        goto after_1;
    // 0x41006288: nop

    after_1:
    // 0x4100628C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41006290:
    // 0x41006290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x41006294: jr          $ra
    // 0x41006298: nop

    return;
    // 0x41006298: nop

;}
RECOMP_FUNC void ovl_item_main_629C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100629C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x410062A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x410062A4: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x410062A8: nop

    // 0x410062AC: sltiu       $at, $t6, 0x18
    ctx->r1 = ctx->r14 < 0X18 ? 1 : 0;
    // 0x410062B0: beq         $at, $zero, L_4100639C
    if (ctx->r1 == 0) {
        // 0x410062B4: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_4100639C;
    }
    // 0x410062B4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x410062B8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x410062BC: addu        $at, $at, $t6
    gpr jr_addend_410062C8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x410062C0: lw          $t6, 0x7180($at)
    ctx->r14 = ADD32(ctx->r1, 0X7180);
    // 0x410062C4: nop

    // 0x410062C8: jr          $t6
    // 0x410062CC: nop

    switch (jr_addend_410062C8 >> 2) {
        case 0: goto L_4100639C; break;
        case 1: goto L_4100639C; break;
        case 2: goto L_4100639C; break;
        case 3: goto L_4100639C; break;
        case 4: goto L_4100639C; break;
        case 5: goto L_4100639C; break;
        case 6: goto L_4100639C; break;
        case 7: goto L_4100639C; break;
        case 8: goto L_4100639C; break;
        case 9: goto L_4100639C; break;
        case 10: goto L_410062E0; break;
        case 11: goto L_41006350; break;
        case 12: goto L_4100639C; break;
        case 13: goto L_4100639C; break;
        case 14: goto L_4100639C; break;
        case 15: goto L_4100639C; break;
        case 16: goto L_4100639C; break;
        case 17: goto L_4100639C; break;
        case 18: goto L_4100639C; break;
        case 19: goto L_4100639C; break;
        case 20: goto L_4100639C; break;
        case 21: goto L_4100639C; break;
        case 22: goto L_4100639C; break;
        case 23: goto L_410062D0; break;
        default: switch_error(__func__, 0x410062C8, 0x41007180);
    }
    // 0x410062CC: nop

L_410062D0:
    // 0x410062D0: jal         0x41004C50
    // 0x410062D4: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    ovl_item_main_4C50(rdram, ctx);
        goto after_0;
    // 0x410062D4: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_0:
    // 0x410062D8: b           L_410063A0
    // 0x410062DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_410063A0;
    // 0x410062DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_410062E0:
    // 0x410062E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x410062E4: lwc1        $f4, 0x30($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X30);
    // 0x410062E8: nop

    // 0x410062EC: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x410062F0: nop

    // 0x410062F4: bc1f        L_410063A0
    if (!c1cs) {
        // 0x410062F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_410063A0;
    }
    // 0x410062F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410062FC: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x41006300: nop

    // 0x41006304: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x41006308: nop

    // 0x4100630C: bc1f        L_410063A0
    if (!c1cs) {
        // 0x41006310: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_410063A0;
    }
    // 0x41006310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41006314: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x41006318: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4100631C: sra         $t8, $t7, 12
    ctx->r24 = S32(SIGNED(ctx->r15) >> 12);
    // 0x41006320: beq         $t8, $zero, L_41006338
    if (ctx->r24 == 0) {
        // 0x41006324: nop
    
            goto L_41006338;
    }
    // 0x41006324: nop

    // 0x41006328: jal         0x41006208
    // 0x4100632C: nop

    ovl_item_main_6208(rdram, ctx);
        goto after_1;
    // 0x4100632C: nop

    after_1:
    // 0x41006330: b           L_410063A0
    // 0x41006334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_410063A0;
    // 0x41006334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41006338:
    // 0x41006338: jal         0x41004C50
    // 0x4100633C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_item_main_4C50(rdram, ctx);
        goto after_2;
    // 0x4100633C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x41006340: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x41006344: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x41006348: b           L_4100639C
    // 0x4100634C: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
        goto L_4100639C;
    // 0x4100634C: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
L_41006350:
    // 0x41006350: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x41006354: lwc1        $f8, 0x30($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X30);
    // 0x41006358: nop

    // 0x4100635C: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x41006360: nop

    // 0x41006364: bc1f        L_410063A0
    if (!c1cs) {
        // 0x41006368: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_410063A0;
    }
    // 0x41006368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4100636C: lwc1        $f10, 0x38($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X38);
    // 0x41006370: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x41006374: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x41006378: nop

    // 0x4100637C: bc1f        L_410063A0
    if (!c1cs) {
        // 0x41006380: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_410063A0;
    }
    // 0x41006380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41006384: jal         0x41004C50
    // 0x41006388: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_item_main_4C50(rdram, ctx);
        goto after_3;
    // 0x41006388: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_3:
    // 0x4100638C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x41006390: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x41006394: nop

    // 0x41006398: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
L_4100639C:
    // 0x4100639C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_410063A0:
    // 0x410063A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x410063A4: jr          $ra
    // 0x410063A8: nop

    return;
    // 0x410063A8: nop

;}
RECOMP_FUNC void ovl_item_main_63AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410063AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x410063B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x410063B4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x410063B8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x410063BC: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x410063C0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x410063C4: jal         0x410006C4
    // 0x410063C8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_item_main_6C4(rdram, ctx);
        goto after_0;
    // 0x410063C8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x410063CC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x410063D0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x410063D4: beq         $t7, $zero, L_410063F0
    if (ctx->r15 == 0) {
        // 0x410063D8: addiu       $at, $zero, -0x9
        ctx->r1 = ADD32(0, -0X9);
            goto L_410063F0;
    }
    // 0x410063D8: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x410063DC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x410063E0: nop

    // 0x410063E4: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x410063E8: b           L_410063F8
    // 0x410063EC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_410063F8;
    // 0x410063EC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_410063F0:
    // 0x410063F0: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x410063F4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_410063F8:
    // 0x410063F8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x410063FC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x41006400: lw          $a0, 0x10($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X10);
    // 0x41006404: jal         0x410006C4
    // 0x41006408: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_item_main_6C4(rdram, ctx);
        goto after_1;
    // 0x41006408: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x4100640C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41006410: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x41006414: jr          $ra
    // 0x41006418: nop

    return;
    // 0x41006418: nop

;}
RECOMP_FUNC void ovl_item_main_641C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100641C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x41006420: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x41006424: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x41006428: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x4100642C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x41006430: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x41006434: beq         $t6, $zero, L_41006454
    if (ctx->r14 == 0) {
        // 0x41006438: nop
    
            goto L_41006454;
    }
    // 0x41006438: nop

    // 0x4100643C: jal         0x41001080
    // 0x41006440: nop

    ovl_item_main_1080(rdram, ctx);
        goto after_0;
    // 0x41006440: nop

    after_0:
    // 0x41006444: jal         0x4100629C
    // 0x41006448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_629C(rdram, ctx);
        goto after_1;
    // 0x41006448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4100644C: b           L_410064D4
    // 0x41006450: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_410064D4;
    // 0x41006450: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_41006454:
    // 0x41006454: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x41006458: sll         $t9, $v0, 14
    ctx->r25 = S32(ctx->r2 << 14);
    // 0x4100645C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x41006460: bltz        $t9, L_4100647C
    if (SIGNED(ctx->r25) < 0) {
        // 0x41006464: sw          $t8, 0x5C($s0)
        MEM_W(0X5C, ctx->r16) = ctx->r24;
            goto L_4100647C;
    }
    // 0x41006464: sw          $t8, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r24;
    // 0x41006468: lw          $t0, 0x6C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X6C);
    // 0x4100646C: nop

    // 0x41006470: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x41006474: b           L_41006480
    // 0x41006478: sw          $t1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r9;
        goto L_41006480;
    // 0x41006478: sw          $t1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r9;
L_4100647C:
    // 0x4100647C: sw          $zero, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = 0;
L_41006480:
    // 0x41006480: lw          $v0, 0x70($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X70);
    // 0x41006484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41006488: beq         $v0, $zero, L_41006494
    if (ctx->r2 == 0) {
        // 0x4100648C: addiu       $t2, $v0, 0x1
        ctx->r10 = ADD32(ctx->r2, 0X1);
            goto L_41006494;
    }
    // 0x4100648C: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x41006490: sw          $t2, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r10;
L_41006494:
    // 0x41006494: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x41006498: addiu       $at, $zero, 0xFA
    ctx->r1 = ADD32(0, 0XFA);
    // 0x4100649C: bne         $v0, $at, L_410064B8
    if (ctx->r2 != ctx->r1) {
        // 0x410064A0: slti        $at, $v0, 0x12C
        ctx->r1 = SIGNED(ctx->r2) < 0X12C ? 1 : 0;
            goto L_410064B8;
    }
    // 0x410064A0: slti        $at, $v0, 0x12C
    ctx->r1 = SIGNED(ctx->r2) < 0X12C ? 1 : 0;
    // 0x410064A4: jal         0x410063AC
    // 0x410064A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_item_main_63AC(rdram, ctx);
        goto after_2;
    // 0x410064A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x410064AC: b           L_410064C8
    // 0x410064B0: nop

        goto L_410064C8;
    // 0x410064B0: nop

    // 0x410064B4: slti        $at, $v0, 0x12C
    ctx->r1 = SIGNED(ctx->r2) < 0X12C ? 1 : 0;
L_410064B8:
    // 0x410064B8: bne         $at, $zero, L_410064C8
    if (ctx->r1 != 0) {
        // 0x410064BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_410064C8;
    }
    // 0x410064BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x410064C0: jal         0x41004C50
    // 0x410064C4: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_item_main_4C50(rdram, ctx);
        goto after_3;
    // 0x410064C4: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_3:
L_410064C8:
    // 0x410064C8: jal         0x4100629C
    // 0x410064CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_629C(rdram, ctx);
        goto after_4;
    // 0x410064CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x410064D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_410064D4:
    // 0x410064D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x410064D8: jr          $ra
    // 0x410064DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x410064DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_item_main_64E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410064E0: lui         $v1, 0x4100
    ctx->r3 = S32(0X4100 << 16);
    // 0x410064E4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x410064E8: lw          $v1, 0x71FC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X71FC);
    // 0x410064EC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x410064F0: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x410064F4: beq         $at, $zero, L_41006538
    if (ctx->r1 == 0) {
        // 0x410064F8: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_41006538;
    }
    // 0x410064F8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_410064FC:
    // 0x410064FC: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x41006500: nop

    // 0x41006504: beq         $a1, $t6, L_41006524
    if (ctx->r5 == ctx->r14) {
        // 0x41006508: nop
    
            goto L_41006524;
    }
    // 0x41006508: nop

    // 0x4100650C: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x41006510: nop

    // 0x41006514: beq         $a1, $t7, L_41006524
    if (ctx->r5 == ctx->r15) {
        // 0x41006518: nop
    
            goto L_41006524;
    }
    // 0x41006518: nop

    // 0x4100651C: jr          $ra
    // 0x41006520: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x41006520: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_41006524:
    // 0x41006524: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x41006528: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x4100652C: bne         $at, $zero, L_410064FC
    if (ctx->r1 != 0) {
        // 0x41006530: nop
    
            goto L_410064FC;
    }
    // 0x41006530: nop

    // 0x41006534: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_41006538:
    // 0x41006538: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x4100653C: jr          $ra
    // 0x41006540: nop

    return;
    // 0x41006540: nop

;}
RECOMP_FUNC void ovl_item_main_6544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41006544: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x41006548: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x4100654C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x41006550: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x41006554: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x41006558: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x4100655C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x41006560: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x41006564: jal         0x41004AC0
    // 0x41006568: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_item_main_4AC0(rdram, ctx);
        goto after_0;
    // 0x41006568: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x4100656C: lui         $s2, 0x4100
    ctx->r18 = S32(0X4100 << 16);
    // 0x41006570: lw          $s2, 0x71F0($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X71F0);
    // 0x41006574: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x41006578: blez        $s2, L_41006678
    if (SIGNED(ctx->r18) <= 0) {
        // 0x4100657C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_41006678;
    }
    // 0x4100657C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x41006580: addiu       $s5, $sp, 0x38
    ctx->r21 = ADD32(ctx->r29, 0X38);
    // 0x41006584: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x41006588: addiu       $s3, $sp, 0x40
    ctx->r19 = ADD32(ctx->r29, 0X40);
    // 0x4100658C: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
L_41006590:
    // 0x41006590: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x41006594: jal         0x410064E0
    // 0x41006598: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_item_main_64E0(rdram, ctx);
        goto after_1;
    // 0x41006598: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x4100659C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x410065A0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x410065A4: beq         $t6, $s4, L_41006678
    if (ctx->r14 == ctx->r20) {
        // 0x410065A8: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_41006678;
    }
    // 0x410065A8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x410065AC: jal         0x410010E4
    // 0x410065B0: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    ovl_item_main_10E4(rdram, ctx);
        goto after_2;
    // 0x410065B0: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_2:
    // 0x410065B4: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x410065B8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x410065BC: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x410065C0: nop

    // 0x410065C4: andi        $t8, $v0, 0x4
    ctx->r24 = ctx->r2 & 0X4;
    // 0x410065C8: beq         $t8, $zero, L_410065EC
    if (ctx->r24 == 0) {
        // 0x410065CC: andi        $t1, $v0, 0x1
        ctx->r9 = ctx->r2 & 0X1;
            goto L_410065EC;
    }
    // 0x410065CC: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x410065D0: jal         0x4100609C
    // 0x410065D4: nop

    ovl_item_main_609C(rdram, ctx);
        goto after_3;
    // 0x410065D4: nop

    after_3:
    // 0x410065D8: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x410065DC: nop

    // 0x410065E0: addiu       $t0, $t9, 0xA0
    ctx->r8 = ADD32(ctx->r25, 0XA0);
    // 0x410065E4: b           L_4100666C
    // 0x410065E8: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
        goto L_4100666C;
    // 0x410065E8: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
L_410065EC:
    // 0x410065EC: beq         $t1, $zero, L_41006660
    if (ctx->r9 == 0) {
        // 0x410065F0: lw          $t5, 0x40($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X40);
            goto L_41006660;
    }
    // 0x410065F0: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x410065F4: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x410065F8: nop

    // 0x410065FC: lw          $v0, 0x10($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X10);
    // 0x41006600: nop

    // 0x41006604: beq         $s1, $v0, L_41006624
    if (ctx->r17 == ctx->r2) {
        // 0x41006608: nop
    
            goto L_41006624;
    }
    // 0x41006608: nop

    // 0x4100660C: jal         0x410060EC
    // 0x41006610: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    ovl_item_main_60EC(rdram, ctx);
        goto after_4;
    // 0x41006610: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_4:
    // 0x41006614: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x41006618: nop

    // 0x4100661C: lw          $v0, 0x10($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X10);
    // 0x41006620: nop

L_41006624:
    // 0x41006624: beq         $s1, $v0, L_41006648
    if (ctx->r17 == ctx->r2) {
        // 0x41006628: nop
    
            goto L_41006648;
    }
    // 0x41006628: nop

    // 0x4100662C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x41006630: jal         0x41004F48
    // 0x41006634: nop

    ovl_item_main_4F48(rdram, ctx);
        goto after_5;
    // 0x41006634: nop

    after_5:
    // 0x41006638: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x4100663C: nop

    // 0x41006640: lw          $v0, 0x10($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X10);
    // 0x41006644: nop

L_41006648:
    // 0x41006648: beq         $s1, $v0, L_41006660
    if (ctx->r17 == ctx->r2) {
        // 0x4100664C: lw          $t5, 0x40($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X40);
            goto L_41006660;
    }
    // 0x4100664C: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x41006650: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x41006654: jal         0x4100641C
    // 0x41006658: nop

    ovl_item_main_641C(rdram, ctx);
        goto after_6;
    // 0x41006658: nop

    after_6:
    // 0x4100665C: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
L_41006660:
    // 0x41006660: nop

    // 0x41006664: addiu       $t6, $t5, 0xA0
    ctx->r14 = ADD32(ctx->r13, 0XA0);
    // 0x41006668: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
L_4100666C:
    // 0x4100666C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x41006670: bne         $s0, $s2, L_41006590
    if (ctx->r16 != ctx->r18) {
        // 0x41006674: nop
    
            goto L_41006590;
    }
    // 0x41006674: nop

L_41006678:
    // 0x41006678: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x4100667C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x41006680: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x41006684: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x41006688: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x4100668C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x41006690: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x41006694: jr          $ra
    // 0x41006698: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x41006698: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_item_main_669C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100669C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x410066A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_410066A4:
    // 0x410066A4: jal         0x41006544
    // 0x410066A8: nop

    ovl_item_main_6544(rdram, ctx);
        goto after_0;
    // 0x410066A8: nop

    after_0:
    // 0x410066AC: jal         0x4100085C
    // 0x410066B0: nop

    ovl_item_main_85C(rdram, ctx);
        goto after_1;
    // 0x410066B0: nop

    after_1:
    // 0x410066B4: b           L_410066A4
    // 0x410066B8: nop

        goto L_410066A4;
    // 0x410066B8: nop

    // 0x410066BC: nop

;}
RECOMP_FUNC void ovl_item_main_66C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410066C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410066C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x410066C8: jr          $ra
    // 0x410066CC: nop

    return;
    // 0x410066CC: nop

;}
RECOMP_FUNC void ovl_blast_light_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000000: lui         $v0, 0x4200
    ctx->r2 = S32(0X4200 << 16);
    // 0x42000004: jr          $ra
    // 0x42000008: addiu       $v0, $v0, 0x2B48
    ctx->r2 = ADD32(ctx->r2, 0X2B48);
    return;
    // 0x42000008: addiu       $v0, $v0, 0x2B48
    ctx->r2 = ADD32(ctx->r2, 0X2B48);
    // 0x4200000C: nop

;}
RECOMP_FUNC void ovl_blast_light_10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_light_1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_light_28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_light_34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_light_40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_light_4C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_light_58(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_light_64(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_light_70(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_light_7C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_light_88(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_light_94(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_light_A0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_light_AC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_light_B8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_light_C4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_light_D0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_light_DC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_light_E8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_light_F4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_light_100(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_light_10C(uint8_t* rdram, recomp_context* ctx) {
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
