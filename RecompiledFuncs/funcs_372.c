#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world3_53F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600053F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x600053F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x600053FC: jal         0x60000C1C
    // 0x60005400: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world3_C1C(rdram, ctx);
        goto after_0;
    // 0x60005400: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60005404: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60005408: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x6000540C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x60005410: beq         $t7, $zero, L_60005420
    if (ctx->r15 == 0) {
        // 0x60005414: nop
    
            goto L_60005420;
    }
    // 0x60005414: nop

    // 0x60005418: jal         0x600009AC
    // 0x6000541C: nop

    ovl_stage_world3_9AC(rdram, ctx);
        goto after_1;
    // 0x6000541C: nop

    after_1:
L_60005420:
    // 0x60005420: jal         0x60000FA8
    // 0x60005424: nop

    ovl_stage_world3_FA8(rdram, ctx);
        goto after_2;
    // 0x60005424: nop

    after_2:
    // 0x60005428: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x6000542C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60005430: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x60005434: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x60005438: jal         0x60000A60
    // 0x6000543C: addiu       $a0, $zero, 0xAC4
    ctx->r4 = ADD32(0, 0XAC4);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_3;
    // 0x6000543C: addiu       $a0, $zero, 0xAC4
    ctx->r4 = ADD32(0, 0XAC4);
    after_3:
    // 0x60005440: jal         0x6000109C
    // 0x60005444: nop

    ovl_stage_world3_109C(rdram, ctx);
        goto after_4;
    // 0x60005444: nop

    after_4:
    // 0x60005448: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x6000544C: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60005450: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60005454: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x60005458: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x6000545C: jal         0x60002E94
    // 0x60005460: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world3_2E94(rdram, ctx);
        goto after_5;
    // 0x60005460: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x60005464: jal         0x60001104
    // 0x60005468: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world3_1104(rdram, ctx);
        goto after_6;
    // 0x60005468: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x6000546C: jal         0x60000BB0
    // 0x60005470: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_7;
    // 0x60005470: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    after_7:
    // 0x60005474: beq         $v0, $zero, L_6000548C
    if (ctx->r2 == 0) {
        // 0x60005478: nop
    
            goto L_6000548C;
    }
    // 0x60005478: nop

    // 0x6000547C: jal         0x60000C7C
    // 0x60005480: nop

    ovl_stage_world3_C7C(rdram, ctx);
        goto after_8;
    // 0x60005480: nop

    after_8:
    // 0x60005484: b           L_600054A4
    // 0x60005488: nop

        goto L_600054A4;
    // 0x60005488: nop

L_6000548C:
    // 0x6000548C: jal         0x60000B98
    // 0x60005490: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_9;
    // 0x60005490: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    after_9:
    // 0x60005494: addiu       $a0, $zero, 0x8B9
    ctx->r4 = ADD32(0, 0X8B9);
    // 0x60005498: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x6000549C: jal         0x60000C10
    // 0x600054A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world3_C10(rdram, ctx);
        goto after_10;
    // 0x600054A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
L_600054A4:
    // 0x600054A4: jal         0x600009AC
    // 0x600054A8: nop

    ovl_stage_world3_9AC(rdram, ctx);
        goto after_11;
    // 0x600054A8: nop

    after_11:
    // 0x600054AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x600054B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x600054B4: jr          $ra
    // 0x600054B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x600054B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world3_54BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600054BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600054C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600054C4: jal         0x60000C1C
    // 0x600054C8: nop

    ovl_stage_world3_C1C(rdram, ctx);
        goto after_0;
    // 0x600054C8: nop

    after_0:
    // 0x600054CC: jal         0x60000B98
    // 0x600054D0: addiu       $a0, $zero, 0xAE
    ctx->r4 = ADD32(0, 0XAE);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_1;
    // 0x600054D0: addiu       $a0, $zero, 0xAE
    ctx->r4 = ADD32(0, 0XAE);
    after_1:
    // 0x600054D4: jal         0x60000A60
    // 0x600054D8: addiu       $a0, $zero, 0xAC3
    ctx->r4 = ADD32(0, 0XAC3);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_2;
    // 0x600054D8: addiu       $a0, $zero, 0xAC3
    ctx->r4 = ADD32(0, 0XAC3);
    after_2:
    // 0x600054DC: jal         0x6000109C
    // 0x600054E0: nop

    ovl_stage_world3_109C(rdram, ctx);
        goto after_3;
    // 0x600054E0: nop

    after_3:
    // 0x600054E4: jal         0x60002E94
    // 0x600054E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world3_2E94(rdram, ctx);
        goto after_4;
    // 0x600054E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x600054EC: jal         0x600009AC
    // 0x600054F0: nop

    ovl_stage_world3_9AC(rdram, ctx);
        goto after_5;
    // 0x600054F0: nop

    after_5:
    // 0x600054F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600054F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600054FC: jr          $ra
    // 0x60005500: nop

    return;
    // 0x60005500: nop

;}
RECOMP_FUNC void ovl_stage_world3_5504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005504: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60005508: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000550C: jal         0x6000025C
    // 0x60005510: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    ovl_stage_world3_25C(rdram, ctx);
        goto after_0;
    // 0x60005510: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_0:
    // 0x60005514: jal         0x60000244
    // 0x60005518: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world3_244(rdram, ctx);
        goto after_1;
    // 0x60005518: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_1:
    // 0x6000551C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x60005520: addiu       $t6, $zero, 0x8E
    ctx->r14 = ADD32(0, 0X8E);
    // 0x60005524: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x60005528: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x6000552C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x60005530: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x60005534: jal         0x60000E74
    // 0x60005538: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    ovl_stage_world3_E74(rdram, ctx);
        goto after_2;
    // 0x60005538: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x6000553C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005540: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x60005544: jal         0x600006C4
    // 0x60005548: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_3;
    // 0x60005548: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x6000554C: jal         0x60000EEC
    // 0x60005550: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world3_EEC(rdram, ctx);
        goto after_4;
    // 0x60005550: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_4:
    // 0x60005554: jal         0x60000EEC
    // 0x60005558: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_stage_world3_EEC(rdram, ctx);
        goto after_5;
    // 0x60005558: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_5:
    // 0x6000555C: jal         0x60000EEC
    // 0x60005560: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    ovl_stage_world3_EEC(rdram, ctx);
        goto after_6;
    // 0x60005560: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_6:
    // 0x60005564: jal         0x60000EEC
    // 0x60005568: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    ovl_stage_world3_EEC(rdram, ctx);
        goto after_7;
    // 0x60005568: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_7:
    // 0x6000556C: jal         0x600009AC
    // 0x60005570: nop

    ovl_stage_world3_9AC(rdram, ctx);
        goto after_8;
    // 0x60005570: nop

    after_8:
    // 0x60005574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005578: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x6000557C: jr          $ra
    // 0x60005580: nop

    return;
    // 0x60005580: nop

;}
RECOMP_FUNC void ovl_stage_world3_5584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005584: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x60005588: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x6000558C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60005590: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x60005594: jal         0x60001104
    // 0x60005598: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world3_1104(rdram, ctx);
        goto after_0;
    // 0x60005598: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x6000559C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600055A0: lwc1        $f4, 0x69BC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X69BC);
    // 0x600055A4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600055A8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x600055AC: lwc1        $f8, 0x69C0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X69C0);
    // 0x600055B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600055B4: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x600055B8: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x600055BC: jal         0x60000DE4
    // 0x600055C0: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world3_DE4(rdram, ctx);
        goto after_1;
    // 0x600055C0: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x600055C4: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x600055C8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x600055CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600055D0: jal         0x600006C4
    // 0x600055D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_2;
    // 0x600055D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x600055D8: addiu       $t6, $zero, 0x31
    ctx->r14 = ADD32(0, 0X31);
    // 0x600055DC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x600055E0: jal         0x60000DE4
    // 0x600055E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world3_DE4(rdram, ctx);
        goto after_3;
    // 0x600055E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x600055E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600055EC: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x600055F0: jal         0x600006C4
    // 0x600055F4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_4;
    // 0x600055F4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
    // 0x600055F8: jal         0x60000DE4
    // 0x600055FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world3_DE4(rdram, ctx);
        goto after_5;
    // 0x600055FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x60005600: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005604: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60005608: jal         0x600006C4
    // 0x6000560C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_6;
    // 0x6000560C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_6:
    // 0x60005610: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x60005614: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60005618: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x6000561C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60005620: addiu       $s1, $zero, 0x1E
    ctx->r17 = ADD32(0, 0X1E);
    // 0x60005624: swc1        $f10, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f10.u32l;
L_60005628:
    // 0x60005628: jal         0x60002E94
    // 0x6000562C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world3_2E94(rdram, ctx);
        goto after_7;
    // 0x6000562C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x60005630: jal         0x600009D0
    // 0x60005634: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_8;
    // 0x60005634: nop

    after_8:
    // 0x60005638: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x6000563C: bne         $s0, $s1, L_60005628
    if (ctx->r16 != ctx->r17) {
        // 0x60005640: nop
    
            goto L_60005628;
    }
    // 0x60005640: nop

    // 0x60005644: jal         0x600009AC
    // 0x60005648: nop

    ovl_stage_world3_9AC(rdram, ctx);
        goto after_9;
    // 0x60005648: nop

    after_9:
    // 0x6000564C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60005650: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x60005654: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60005658: jr          $ra
    // 0x6000565C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x6000565C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_stage_world3_5660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005660: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005668: jal         0x60000BB0
    // 0x6000566C: addiu       $a0, $zero, 0xAE
    ctx->r4 = ADD32(0, 0XAE);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x6000566C: addiu       $a0, $zero, 0xAE
    ctx->r4 = ADD32(0, 0XAE);
    after_0:
    // 0x60005670: bne         $v0, $zero, L_60005694
    if (ctx->r2 != 0) {
        // 0x60005674: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60005694;
    }
    // 0x60005674: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005678: addiu       $a0, $a0, 0x54BC
    ctx->r4 = ADD32(ctx->r4, 0X54BC);
    // 0x6000567C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005680: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005684: jal         0x60000994
    // 0x60005688: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_994(rdram, ctx);
        goto after_1;
    // 0x60005688: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x6000568C: b           L_600056BC
    // 0x60005690: nop

        goto L_600056BC;
    // 0x60005690: nop

L_60005694:
    // 0x60005694: jal         0x60000BB0
    // 0x60005698: addiu       $a0, $zero, 0xAE
    ctx->r4 = ADD32(0, 0XAE);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_2;
    // 0x60005698: addiu       $a0, $zero, 0xAE
    ctx->r4 = ADD32(0, 0XAE);
    after_2:
    // 0x6000569C: beq         $v0, $zero, L_600056BC
    if (ctx->r2 == 0) {
        // 0x600056A0: nop
    
            goto L_600056BC;
    }
    // 0x600056A0: nop

    // 0x600056A4: jal         0x60000BB0
    // 0x600056A8: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_3;
    // 0x600056A8: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    after_3:
    // 0x600056AC: bne         $v0, $zero, L_600056BC
    if (ctx->r2 != 0) {
        // 0x600056B0: nop
    
            goto L_600056BC;
    }
    // 0x600056B0: nop

    // 0x600056B4: jal         0x6000025C
    // 0x600056B8: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    ovl_stage_world3_25C(rdram, ctx);
        goto after_4;
    // 0x600056B8: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_4:
L_600056BC:
    // 0x600056BC: jal         0x60000BB0
    // 0x600056C0: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_5;
    // 0x600056C0: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    after_5:
    // 0x600056C4: beq         $v0, $zero, L_600056EC
    if (ctx->r2 == 0) {
        // 0x600056C8: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_600056EC;
    }
    // 0x600056C8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600056CC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600056D0: addiu       $a0, $a0, 0x5504
    ctx->r4 = ADD32(ctx->r4, 0X5504);
    // 0x600056D4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600056D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600056DC: jal         0x60000994
    // 0x600056E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_994(rdram, ctx);
        goto after_6;
    // 0x600056E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x600056E4: b           L_60005704
    // 0x600056E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005704;
    // 0x600056E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600056EC:
    // 0x600056EC: addiu       $a0, $a0, 0x5584
    ctx->r4 = ADD32(ctx->r4, 0X5584);
    // 0x600056F0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600056F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600056F8: jal         0x60000994
    // 0x600056FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_994(rdram, ctx);
        goto after_7;
    // 0x600056FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x60005700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005704:
    // 0x60005704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005708: jr          $ra
    // 0x6000570C: nop

    return;
    // 0x6000570C: nop

;}
RECOMP_FUNC void ovl_stage_world3_5710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005710: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005718: jal         0x60000BB0
    // 0x6000571C: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x6000571C: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_0:
    // 0x60005720: beq         $v0, $zero, L_60005784
    if (ctx->r2 == 0) {
        // 0x60005724: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005784;
    }
    // 0x60005724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005728: jal         0x60000BB0
    // 0x6000572C: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_1;
    // 0x6000572C: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_1:
    // 0x60005730: beq         $v0, $zero, L_60005784
    if (ctx->r2 == 0) {
        // 0x60005734: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005784;
    }
    // 0x60005734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005738: jal         0x60000BB0
    // 0x6000573C: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_2;
    // 0x6000573C: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_2:
    // 0x60005740: beq         $v0, $zero, L_60005784
    if (ctx->r2 == 0) {
        // 0x60005744: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005784;
    }
    // 0x60005744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005748: jal         0x60000BB0
    // 0x6000574C: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_3;
    // 0x6000574C: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_3:
    // 0x60005750: beq         $v0, $zero, L_60005784
    if (ctx->r2 == 0) {
        // 0x60005754: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005784;
    }
    // 0x60005754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005758: jal         0x60000BB0
    // 0x6000575C: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_4;
    // 0x6000575C: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_4:
    // 0x60005760: bne         $v0, $zero, L_60005784
    if (ctx->r2 != 0) {
        // 0x60005764: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005784;
    }
    // 0x60005764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005768: jal         0x60000B98
    // 0x6000576C: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_5;
    // 0x6000576C: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_5:
    // 0x60005770: jal         0x60000244
    // 0x60005774: addiu       $a0, $zero, 0x397
    ctx->r4 = ADD32(0, 0X397);
    ovl_stage_world3_244(rdram, ctx);
        goto after_6;
    // 0x60005774: addiu       $a0, $zero, 0x397
    ctx->r4 = ADD32(0, 0X397);
    after_6:
    // 0x60005778: jal         0x600011BC
    // 0x6000577C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world3_11BC(rdram, ctx);
        goto after_7;
    // 0x6000577C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_7:
    // 0x60005780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005784:
    // 0x60005784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005788: jr          $ra
    // 0x6000578C: nop

    return;
    // 0x6000578C: nop

;}
RECOMP_FUNC void ovl_stage_world3_5790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005798: jal         0x600009C4
    // 0x6000579C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_0;
    // 0x6000579C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x600057A0: jal         0x60000BA4
    // 0x600057A4: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    ovl_stage_world3_BA4(rdram, ctx);
        goto after_1;
    // 0x600057A4: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    after_1:
    // 0x600057A8: jal         0x600009AC
    // 0x600057AC: nop

    ovl_stage_world3_9AC(rdram, ctx);
        goto after_2;
    // 0x600057AC: nop

    after_2:
    // 0x600057B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600057B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600057B8: jr          $ra
    // 0x600057BC: nop

    return;
    // 0x600057BC: nop

;}
RECOMP_FUNC void ovl_stage_world3_57C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600057C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600057C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600057C8: jal         0x60000BB0
    // 0x600057CC: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x600057CC: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    after_0:
    // 0x600057D0: bne         $v0, $zero, L_60005888
    if (ctx->r2 != 0) {
        // 0x600057D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005888;
    }
    // 0x600057D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600057D8: jal         0x60000BB0
    // 0x600057DC: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_1;
    // 0x600057DC: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_1:
    // 0x600057E0: beq         $v0, $zero, L_60005888
    if (ctx->r2 == 0) {
        // 0x600057E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005888;
    }
    // 0x600057E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600057E8: jal         0x60000BB0
    // 0x600057EC: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_2;
    // 0x600057EC: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_2:
    // 0x600057F0: bne         $v0, $zero, L_60005888
    if (ctx->r2 != 0) {
        // 0x600057F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005888;
    }
    // 0x600057F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600057F8: jal         0x60000BB0
    // 0x600057FC: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_3;
    // 0x600057FC: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    after_3:
    // 0x60005800: bne         $v0, $zero, L_60005844
    if (ctx->r2 != 0) {
        // 0x60005804: nop
    
            goto L_60005844;
    }
    // 0x60005804: nop

    // 0x60005808: jal         0x60000B98
    // 0x6000580C: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_4;
    // 0x6000580C: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    after_4:
    // 0x60005810: jal         0x60000B98
    // 0x60005814: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_5;
    // 0x60005814: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    after_5:
    // 0x60005818: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x6000581C: jal         0x60000E68
    // 0x60005820: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world3_E68(rdram, ctx);
        goto after_6;
    // 0x60005820: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x60005824: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005828: addiu       $a0, $a0, 0x5790
    ctx->r4 = ADD32(ctx->r4, 0X5790);
    // 0x6000582C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005830: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005834: jal         0x60000994
    // 0x60005838: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_994(rdram, ctx);
        goto after_7;
    // 0x60005838: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x6000583C: b           L_60005888
    // 0x60005840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005888;
    // 0x60005840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005844:
    // 0x60005844: jal         0x60000DE4
    // 0x60005848: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world3_DE4(rdram, ctx);
        goto after_8;
    // 0x60005848: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x6000584C: jal         0x60000CC4
    // 0x60005850: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world3_CC4(rdram, ctx);
        goto after_9;
    // 0x60005850: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
    // 0x60005854: jal         0x60000A6C
    // 0x60005858: nop

    ovl_stage_world3_A6C(rdram, ctx);
        goto after_10;
    // 0x60005858: nop

    after_10:
    // 0x6000585C: jal         0x60000B98
    // 0x60005860: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_11;
    // 0x60005860: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_11:
    // 0x60005864: jal         0x600011BC
    // 0x60005868: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world3_11BC(rdram, ctx);
        goto after_12;
    // 0x60005868: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_12:
    // 0x6000586C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005870: addiu       $a0, $a0, 0x53F4
    ctx->r4 = ADD32(ctx->r4, 0X53F4);
    // 0x60005874: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005878: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000587C: jal         0x60000994
    // 0x60005880: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_994(rdram, ctx);
        goto after_13;
    // 0x60005880: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x60005884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005888:
    // 0x60005888: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000588C: jr          $ra
    // 0x60005890: nop

    return;
    // 0x60005890: nop

;}
RECOMP_FUNC void ovl_stage_world3_5894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005894: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000589C: jal         0x60000A60
    // 0x600058A0: addiu       $a0, $zero, 0xA5D
    ctx->r4 = ADD32(0, 0XA5D);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_0;
    // 0x600058A0: addiu       $a0, $zero, 0xA5D
    ctx->r4 = ADD32(0, 0XA5D);
    after_0:
    // 0x600058A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600058A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600058AC: jr          $ra
    // 0x600058B0: nop

    return;
    // 0x600058B0: nop

;}
RECOMP_FUNC void ovl_stage_world3_58B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600058B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600058B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600058BC: jal         0x60000A60
    // 0x600058C0: addiu       $a0, $zero, 0xA5E
    ctx->r4 = ADD32(0, 0XA5E);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_0;
    // 0x600058C0: addiu       $a0, $zero, 0xA5E
    ctx->r4 = ADD32(0, 0XA5E);
    after_0:
    // 0x600058C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600058C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600058CC: jr          $ra
    // 0x600058D0: nop

    return;
    // 0x600058D0: nop

;}
RECOMP_FUNC void ovl_stage_world3_58D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600058D4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x600058D8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x600058DC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x600058E0: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x600058E4: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x600058E8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x600058EC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x600058F0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x600058F4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x600058F8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600058FC: addiu       $s1, $sp, 0x4C
    ctx->r17 = ADD32(ctx->r29, 0X4C);
    // 0x60005900: addiu       $s2, $sp, 0x34
    ctx->r18 = ADD32(ctx->r29, 0X34);
    // 0x60005904: addiu       $s3, $zero, 0x3C
    ctx->r19 = ADD32(0, 0X3C);
L_60005908:
    // 0x60005908: jal         0x600009C4
    // 0x6000590C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_0;
    // 0x6000590C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_0:
    // 0x60005910: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60005914:
    // 0x60005914: jal         0x60000E74
    // 0x60005918: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    ovl_stage_world3_E74(rdram, ctx);
        goto after_1;
    // 0x60005918: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_1:
    // 0x6000591C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005920: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60005924: jal         0x600006C4
    // 0x60005928: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_2;
    // 0x60005928: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x6000592C: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x60005930: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x60005934: lwc1        $f4, 0x30($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X30);
    // 0x60005938: nop

    // 0x6000593C: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x60005940: jal         0x60000E74
    // 0x60005944: swc1        $f6, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f6.u32l;
    ovl_stage_world3_E74(rdram, ctx);
        goto after_3;
    // 0x60005944: swc1        $f6, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f6.u32l;
    after_3:
    // 0x60005948: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000594C: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60005950: jal         0x600006C4
    // 0x60005954: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_4;
    // 0x60005954: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_4:
    // 0x60005958: bne         $v0, $zero, L_60005978
    if (ctx->r2 != 0) {
        // 0x6000595C: nop
    
            goto L_60005978;
    }
    // 0x6000595C: nop

    // 0x60005960: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x60005964: nop

    // 0x60005968: lwc1        $f8, 0x30($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X30);
    // 0x6000596C: nop

    // 0x60005970: add.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x60005974: swc1        $f10, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->f10.u32l;
L_60005978:
    // 0x60005978: jal         0x600009D0
    // 0x6000597C: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_5;
    // 0x6000597C: nop

    after_5:
    // 0x60005980: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60005984: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
    // 0x60005988: bne         $at, $zero, L_60005914
    if (ctx->r1 != 0) {
        // 0x6000598C: nop
    
            goto L_60005914;
    }
    // 0x6000598C: nop

    // 0x60005990: jal         0x600009C4
    // 0x60005994: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_6;
    // 0x60005994: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_6:
    // 0x60005998: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_6000599C:
    // 0x6000599C: jal         0x60000E74
    // 0x600059A0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    ovl_stage_world3_E74(rdram, ctx);
        goto after_7;
    // 0x600059A0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_7:
    // 0x600059A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600059A8: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x600059AC: jal         0x600006C4
    // 0x600059B0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_8;
    // 0x600059B0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x600059B4: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x600059B8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x600059BC: lwc1        $f16, 0x30($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X30);
    // 0x600059C0: nop

    // 0x600059C4: sub.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f20.fl;
    // 0x600059C8: jal         0x60000E74
    // 0x600059CC: swc1        $f18, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->f18.u32l;
    ovl_stage_world3_E74(rdram, ctx);
        goto after_9;
    // 0x600059CC: swc1        $f18, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->f18.u32l;
    after_9:
    // 0x600059D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600059D4: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x600059D8: jal         0x600006C4
    // 0x600059DC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_10;
    // 0x600059DC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_10:
    // 0x600059E0: bne         $v0, $zero, L_60005A00
    if (ctx->r2 != 0) {
        // 0x600059E4: nop
    
            goto L_60005A00;
    }
    // 0x600059E4: nop

    // 0x600059E8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x600059EC: nop

    // 0x600059F0: lwc1        $f4, 0x30($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X30);
    // 0x600059F4: nop

    // 0x600059F8: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x600059FC: swc1        $f6, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->f6.u32l;
L_60005A00:
    // 0x60005A00: jal         0x600009D0
    // 0x60005A04: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_11;
    // 0x60005A04: nop

    after_11:
    // 0x60005A08: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60005A0C: bne         $s0, $s3, L_6000599C
    if (ctx->r16 != ctx->r19) {
        // 0x60005A10: nop
    
            goto L_6000599C;
    }
    // 0x60005A10: nop

    // 0x60005A14: b           L_60005908
    // 0x60005A18: nop

        goto L_60005908;
    // 0x60005A18: nop

    // 0x60005A1C: nop

    // 0x60005A20: nop

    // 0x60005A24: nop

    // 0x60005A28: nop

    // 0x60005A2C: nop

    // 0x60005A30: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60005A34: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60005A38: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60005A3C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60005A40: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60005A44: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x60005A48: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x60005A4C: jr          $ra
    // 0x60005A50: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x60005A50: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_stage_world3_5A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005A54: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x60005A58: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60005A5C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x60005A60: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x60005A64: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x60005A68: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x60005A6C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60005A70: jal         0x600009DC
    // 0x60005A74: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world3_9DC(rdram, ctx);
        goto after_0;
    // 0x60005A74: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x60005A78: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x60005A7C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x60005A80: lw          $t6, 0xC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC);
    // 0x60005A84: jal         0x600009C4
    // 0x60005A88: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_1;
    // 0x60005A88: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
    after_1:
    // 0x60005A8C: jal         0x60000BB0
    // 0x60005A90: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_2;
    // 0x60005A90: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_2:
    // 0x60005A94: beq         $v0, $zero, L_60005AD8
    if (ctx->r2 == 0) {
        // 0x60005A98: lw          $s3, 0x78($sp)
        ctx->r19 = MEM_W(ctx->r29, 0X78);
            goto L_60005AD8;
    }
    // 0x60005A98: lw          $s3, 0x78($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X78);
    // 0x60005A9C: jal         0x60000BB0
    // 0x60005AA0: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_3;
    // 0x60005AA0: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    after_3:
    // 0x60005AA4: beq         $v0, $zero, L_60005AD8
    if (ctx->r2 == 0) {
        // 0x60005AA8: lw          $s3, 0x78($sp)
        ctx->r19 = MEM_W(ctx->r29, 0X78);
            goto L_60005AD8;
    }
    // 0x60005AA8: lw          $s3, 0x78($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X78);
    // 0x60005AAC: jal         0x60000BB0
    // 0x60005AB0: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_4;
    // 0x60005AB0: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_4:
    // 0x60005AB4: beq         $v0, $zero, L_60005AD8
    if (ctx->r2 == 0) {
        // 0x60005AB8: lw          $s3, 0x78($sp)
        ctx->r19 = MEM_W(ctx->r29, 0X78);
            goto L_60005AD8;
    }
    // 0x60005AB8: lw          $s3, 0x78($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X78);
    // 0x60005ABC: jal         0x60000BB0
    // 0x60005AC0: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_5;
    // 0x60005AC0: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_5:
    // 0x60005AC4: beq         $v0, $zero, L_60005AD8
    if (ctx->r2 == 0) {
        // 0x60005AC8: lw          $s3, 0x78($sp)
        ctx->r19 = MEM_W(ctx->r29, 0X78);
            goto L_60005AD8;
    }
    // 0x60005AC8: lw          $s3, 0x78($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X78);
    // 0x60005ACC: jal         0x60000244
    // 0x60005AD0: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    ovl_stage_world3_244(rdram, ctx);
        goto after_6;
    // 0x60005AD0: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    after_6:
    // 0x60005AD4: lw          $s3, 0x78($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X78);
L_60005AD8:
    // 0x60005AD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60005ADC: addiu       $s3, $s3, 0x3
    ctx->r19 = ADD32(ctx->r19, 0X3);
    // 0x60005AE0: jal         0x60000E68
    // 0x60005AE4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_stage_world3_E68(rdram, ctx);
        goto after_7;
    // 0x60005AE4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_7:
    // 0x60005AE8: jal         0x600009C4
    // 0x60005AEC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_8;
    // 0x60005AEC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_8:
    // 0x60005AF0: jal         0x60000E74
    // 0x60005AF4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_stage_world3_E74(rdram, ctx);
        goto after_9;
    // 0x60005AF4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_9:
    // 0x60005AF8: addiu       $s1, $sp, 0x5C
    ctx->r17 = ADD32(ctx->r29, 0X5C);
    // 0x60005AFC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60005B00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005B04: jal         0x600006C4
    // 0x60005B08: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_10;
    // 0x60005B08: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_10:
    // 0x60005B0C: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x60005B10: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x60005B14: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x60005B18: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x60005B1C: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x60005B20: subu        $s2, $t8, $t7
    ctx->r18 = SUB32(ctx->r24, ctx->r15);
    // 0x60005B24: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60005B28: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x60005B2C: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x60005B30: jal         0x60000E74
    // 0x60005B34: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world3_E74(rdram, ctx);
        goto after_11;
    // 0x60005B34: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    after_11:
    // 0x60005B38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005B3C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60005B40: jal         0x600006C4
    // 0x60005B44: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_12;
    // 0x60005B44: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_12:
    // 0x60005B48: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x60005B4C: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x60005B50: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x60005B54: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x60005B58: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x60005B5C: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x60005B60: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x60005B64: jal         0x60000418
    // 0x60005B68: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    ovl_stage_world3_418(rdram, ctx);
        goto after_13;
    // 0x60005B68: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    after_13:
    // 0x60005B6C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60005B70: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60005B74: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x60005B78: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x60005B7C: bc1t        L_60005C90
    if (c1cs) {
        // 0x60005B80: addiu       $a0, $zero, 0x159
        ctx->r4 = ADD32(0, 0X159);
            goto L_60005C90;
    }
    // 0x60005B80: addiu       $a0, $zero, 0x159
    ctx->r4 = ADD32(0, 0X159);
    // 0x60005B84: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x60005B88: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x60005B8C: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x60005B90: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x60005B94: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x60005B98: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x60005B9C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60005BA0: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x60005BA4: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x60005BA8: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x60005BAC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x60005BB0: nop

    // 0x60005BB4: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x60005BB8: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x60005BBC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x60005BC0: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x60005BC4: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x60005BC8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60005BCC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60005BD0: nop

    // 0x60005BD4: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x60005BD8: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x60005BDC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x60005BE0: blez        $t0, L_60005C90
    if (SIGNED(ctx->r8) <= 0) {
        // 0x60005BE4: addiu       $a0, $zero, 0x159
        ctx->r4 = ADD32(0, 0X159);
            goto L_60005C90;
    }
    // 0x60005BE4: addiu       $a0, $zero, 0x159
    ctx->r4 = ADD32(0, 0X159);
    // 0x60005BE8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x60005BEC: nop

    // 0x60005BF0: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x60005BF4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60005BF8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60005BFC: nop

    // 0x60005C00: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x60005C04: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x60005C08: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x60005C0C: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x60005C10: nop

L_60005C14:
    // 0x60005C14: jal         0x60000E74
    // 0x60005C18: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_stage_world3_E74(rdram, ctx);
        goto after_14;
    // 0x60005C18: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_14:
    // 0x60005C1C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005C20: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60005C24: jal         0x600006C4
    // 0x60005C28: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_15;
    // 0x60005C28: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_15:
    // 0x60005C2C: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x60005C30: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60005C34: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x60005C38: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x60005C3C: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x60005C40: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x60005C44: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x60005C48: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x60005C4C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x60005C50: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60005C54: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x60005C58: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x60005C5C: jal         0x60000E74
    // 0x60005C60: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    ovl_stage_world3_E74(rdram, ctx);
        goto after_16;
    // 0x60005C60: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    after_16:
    // 0x60005C64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005C68: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60005C6C: jal         0x600006C4
    // 0x60005C70: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_17;
    // 0x60005C70: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_17:
    // 0x60005C74: jal         0x600009D0
    // 0x60005C78: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_18;
    // 0x60005C78: nop

    after_18:
    // 0x60005C7C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x60005C80: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60005C84: bne         $s0, $t3, L_60005C14
    if (ctx->r16 != ctx->r11) {
        // 0x60005C88: nop
    
            goto L_60005C14;
    }
    // 0x60005C88: nop

    // 0x60005C8C: addiu       $a0, $zero, 0x159
    ctx->r4 = ADD32(0, 0X159);
L_60005C90:
    // 0x60005C90: jal         0x60000244
    // 0x60005C94: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    ovl_stage_world3_244(rdram, ctx);
        goto after_19;
    // 0x60005C94: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_19:
    // 0x60005C98: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x60005C9C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60005CA0: nop

L_60005CA4:
    // 0x60005CA4: jal         0x60000E74
    // 0x60005CA8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_stage_world3_E74(rdram, ctx);
        goto after_20;
    // 0x60005CA8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_20:
    // 0x60005CAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005CB0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60005CB4: jal         0x600006C4
    // 0x60005CB8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_21;
    // 0x60005CB8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_21:
    // 0x60005CBC: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x60005CC0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60005CC4: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x60005CC8: jal         0x60000E74
    // 0x60005CCC: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    ovl_stage_world3_E74(rdram, ctx);
        goto after_22;
    // 0x60005CCC: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    after_22:
    // 0x60005CD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005CD4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60005CD8: jal         0x600006C4
    // 0x60005CDC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_23;
    // 0x60005CDC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_23:
    // 0x60005CE0: jal         0x60000E74
    // 0x60005CE4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_stage_world3_E74(rdram, ctx);
        goto after_24;
    // 0x60005CE4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_24:
    // 0x60005CE8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005CEC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60005CF0: jal         0x600006C4
    // 0x60005CF4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_25;
    // 0x60005CF4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_25:
    // 0x60005CF8: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x60005CFC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60005D00: sub.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x60005D04: jal         0x60000E74
    // 0x60005D08: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    ovl_stage_world3_E74(rdram, ctx);
        goto after_26;
    // 0x60005D08: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    after_26:
    // 0x60005D0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005D10: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60005D14: jal         0x600006C4
    // 0x60005D18: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_27;
    // 0x60005D18: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_27:
    // 0x60005D1C: jal         0x600009D0
    // 0x60005D20: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_28;
    // 0x60005D20: nop

    after_28:
    // 0x60005D24: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60005D28: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x60005D2C: bne         $s0, $at, L_60005CA4
    if (ctx->r16 != ctx->r1) {
        // 0x60005D30: nop
    
            goto L_60005CA4;
    }
    // 0x60005D30: nop

    // 0x60005D34: jal         0x60000EEC
    // 0x60005D38: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_stage_world3_EEC(rdram, ctx);
        goto after_29;
    // 0x60005D38: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_29:
    // 0x60005D3C: jal         0x60000EEC
    // 0x60005D40: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_stage_world3_EEC(rdram, ctx);
        goto after_30;
    // 0x60005D40: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_30:
    // 0x60005D44: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x60005D48: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x60005D4C: bne         $t4, $zero, L_60005D84
    if (ctx->r12 != 0) {
        // 0x60005D50: nop
    
            goto L_60005D84;
    }
    // 0x60005D50: nop

    // 0x60005D54: jal         0x60000E44
    // 0x60005D58: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    ovl_stage_world3_E44(rdram, ctx);
        goto after_31;
    // 0x60005D58: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_31:
    // 0x60005D5C: jal         0x60000E44
    // 0x60005D60: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    ovl_stage_world3_E44(rdram, ctx);
        goto after_32;
    // 0x60005D60: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_32:
    // 0x60005D64: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005D68: addiu       $a0, $a0, 0x58D4
    ctx->r4 = ADD32(ctx->r4, 0X58D4);
    // 0x60005D6C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005D70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005D74: jal         0x60000994
    // 0x60005D78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_994(rdram, ctx);
        goto after_33;
    // 0x60005D78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_33:
    // 0x60005D7C: b           L_60005D90
    // 0x60005D80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_60005D90;
    // 0x60005D80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60005D84:
    // 0x60005D84: jal         0x60000E44
    // 0x60005D88: addiu       $a0, $a0, 0xE
    ctx->r4 = ADD32(ctx->r4, 0XE);
    ovl_stage_world3_E44(rdram, ctx);
        goto after_34;
    // 0x60005D88: addiu       $a0, $a0, 0xE
    ctx->r4 = ADD32(ctx->r4, 0XE);
    after_34:
    // 0x60005D8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60005D90:
    // 0x60005D90: jal         0x600012A8
    // 0x60005D94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world3_12A8(rdram, ctx);
        goto after_35;
    // 0x60005D94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_35:
    // 0x60005D98: jal         0x600009D0
    // 0x60005D9C: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_36;
    // 0x60005D9C: nop

    after_36:
    // 0x60005DA0: jal         0x600009AC
    // 0x60005DA4: nop

    ovl_stage_world3_9AC(rdram, ctx);
        goto after_37;
    // 0x60005DA4: nop

    after_37:
    // 0x60005DA8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60005DAC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60005DB0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60005DB4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60005DB8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60005DBC: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x60005DC0: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x60005DC4: jr          $ra
    // 0x60005DC8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x60005DC8: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void ovl_stage_world3_5DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005DCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60005DD0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x60005DD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005DD8: addiu       $a0, $a0, 0x108
    ctx->r4 = ADD32(ctx->r4, 0X108);
    // 0x60005DDC: jal         0x60000BB0
    // 0x60005DE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x60005DE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x60005DE4: bne         $v0, $zero, L_60005E58
    if (ctx->r2 != 0) {
        // 0x60005DE8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005E58;
    }
    // 0x60005DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005DEC: jal         0x60000EBC
    // 0x60005DF0: nop

    ovl_stage_world3_EBC(rdram, ctx);
        goto after_1;
    // 0x60005DF0: nop

    after_1:
    // 0x60005DF4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x60005DF8: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x60005DFC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x60005E00: jal         0x60000E74
    // 0x60005E04: subu        $a0, $t7, $t6
    ctx->r4 = SUB32(ctx->r15, ctx->r14);
    ovl_stage_world3_E74(rdram, ctx);
        goto after_2;
    // 0x60005E04: subu        $a0, $t7, $t6
    ctx->r4 = SUB32(ctx->r15, ctx->r14);
    after_2:
    // 0x60005E08: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x60005E0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60005E10: bne         $v0, $t8, L_60005E58
    if (ctx->r2 != ctx->r24) {
        // 0x60005E14: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005E58;
    }
    // 0x60005E14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005E18: jal         0x600012A8
    // 0x60005E1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world3_12A8(rdram, ctx);
        goto after_3;
    // 0x60005E1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x60005E20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x60005E24: jal         0x60000B98
    // 0x60005E28: nop

    ovl_stage_world3_B98(rdram, ctx);
        goto after_4;
    // 0x60005E28: nop

    after_4:
    // 0x60005E2C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005E30: addiu       $a0, $a0, 0x5A54
    ctx->r4 = ADD32(ctx->r4, 0X5A54);
    // 0x60005E34: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005E38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005E3C: jal         0x60000994
    // 0x60005E40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_994(rdram, ctx);
        goto after_5;
    // 0x60005E40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x60005E44: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x60005E48: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x60005E4C: nop

    // 0x60005E50: sw          $t9, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r25;
    // 0x60005E54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005E58:
    // 0x60005E58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x60005E5C: jr          $ra
    // 0x60005E60: nop

    return;
    // 0x60005E60: nop

;}
RECOMP_FUNC void ovl_stage_world3_5E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005E64: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60005E68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005E6C: jal         0x60000BB0
    // 0x60005E70: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x60005E70: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    after_0:
    // 0x60005E74: bne         $v0, $zero, L_60005E84
    if (ctx->r2 != 0) {
        // 0x60005E78: addiu       $t6, $zero, 0x6E
        ctx->r14 = ADD32(0, 0X6E);
            goto L_60005E84;
    }
    // 0x60005E78: addiu       $t6, $zero, 0x6E
    ctx->r14 = ADD32(0, 0X6E);
    // 0x60005E7C: b           L_60005EC8
    // 0x60005E80: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
        goto L_60005EC8;
    // 0x60005E80: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
L_60005E84:
    // 0x60005E84: jal         0x60000BB0
    // 0x60005E88: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_1;
    // 0x60005E88: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    after_1:
    // 0x60005E8C: bne         $v0, $zero, L_60005E9C
    if (ctx->r2 != 0) {
        // 0x60005E90: addiu       $t7, $zero, 0x6D
        ctx->r15 = ADD32(0, 0X6D);
            goto L_60005E9C;
    }
    // 0x60005E90: addiu       $t7, $zero, 0x6D
    ctx->r15 = ADD32(0, 0X6D);
    // 0x60005E94: b           L_60005EC8
    // 0x60005E98: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
        goto L_60005EC8;
    // 0x60005E98: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
L_60005E9C:
    // 0x60005E9C: jal         0x60000BB0
    // 0x60005EA0: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_2;
    // 0x60005EA0: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    after_2:
    // 0x60005EA4: bne         $v0, $zero, L_60005EB4
    if (ctx->r2 != 0) {
        // 0x60005EA8: addiu       $t8, $zero, 0x6C
        ctx->r24 = ADD32(0, 0X6C);
            goto L_60005EB4;
    }
    // 0x60005EA8: addiu       $t8, $zero, 0x6C
    ctx->r24 = ADD32(0, 0X6C);
    // 0x60005EAC: b           L_60005EC8
    // 0x60005EB0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
        goto L_60005EC8;
    // 0x60005EB0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
L_60005EB4:
    // 0x60005EB4: jal         0x60000BB0
    // 0x60005EB8: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_3;
    // 0x60005EB8: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    after_3:
    // 0x60005EBC: bne         $v0, $zero, L_60005EC8
    if (ctx->r2 != 0) {
        // 0x60005EC0: addiu       $t9, $zero, 0x6B
        ctx->r25 = ADD32(0, 0X6B);
            goto L_60005EC8;
    }
    // 0x60005EC0: addiu       $t9, $zero, 0x6B
    ctx->r25 = ADD32(0, 0X6B);
    // 0x60005EC4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
L_60005EC8:
    // 0x60005EC8: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x60005ECC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60005ED0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x60005ED4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60005ED8: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x60005EDC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60005EE0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x60005EE4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x60005EE8: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x60005EEC: addiu       $t3, $sp, 0x1C
    ctx->r11 = ADD32(ctx->r29, 0X1C);
    // 0x60005EF0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x60005EF4: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x60005EF8: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x60005EFC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x60005F00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60005F04: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x60005F08: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x60005F0C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x60005F10: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x60005F14: jal         0x600006C4
    // 0x60005F18: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_4;
    // 0x60005F18: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    after_4:
    // 0x60005F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005F20: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x60005F24: jr          $ra
    // 0x60005F28: nop

    return;
    // 0x60005F28: nop

;}
RECOMP_FUNC void ovl_stage_world3_5F2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005F2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005F30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005F34: jal         0x60000BB0
    // 0x60005F38: addiu       $a0, $zero, 0xF8
    ctx->r4 = ADD32(0, 0XF8);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x60005F38: addiu       $a0, $zero, 0xF8
    ctx->r4 = ADD32(0, 0XF8);
    after_0:
    // 0x60005F3C: bne         $v0, $zero, L_60005FC0
    if (ctx->r2 != 0) {
        // 0x60005F40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005FC0;
    }
    // 0x60005F40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005F44: jal         0x60000BB0
    // 0x60005F48: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_1;
    // 0x60005F48: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    after_1:
    // 0x60005F4C: bne         $v0, $zero, L_60005F64
    if (ctx->r2 != 0) {
        // 0x60005F50: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_60005F64;
    }
    // 0x60005F50: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60005F54: jal         0x60000E80
    // 0x60005F58: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world3_E80(rdram, ctx);
        goto after_2;
    // 0x60005F58: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x60005F5C: b           L_60005FC0
    // 0x60005F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005FC0;
    // 0x60005F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005F64:
    // 0x60005F64: jal         0x60000BB0
    // 0x60005F68: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_3;
    // 0x60005F68: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    after_3:
    // 0x60005F6C: bne         $v0, $zero, L_60005F84
    if (ctx->r2 != 0) {
        // 0x60005F70: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_60005F84;
    }
    // 0x60005F70: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60005F74: jal         0x60000E80
    // 0x60005F78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world3_E80(rdram, ctx);
        goto after_4;
    // 0x60005F78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x60005F7C: b           L_60005FC0
    // 0x60005F80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005FC0;
    // 0x60005F80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005F84:
    // 0x60005F84: jal         0x60000BB0
    // 0x60005F88: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_5;
    // 0x60005F88: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    after_5:
    // 0x60005F8C: bne         $v0, $zero, L_60005FA4
    if (ctx->r2 != 0) {
        // 0x60005F90: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_60005FA4;
    }
    // 0x60005F90: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60005F94: jal         0x60000E80
    // 0x60005F98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world3_E80(rdram, ctx);
        goto after_6;
    // 0x60005F98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x60005F9C: b           L_60005FC0
    // 0x60005FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005FC0;
    // 0x60005FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005FA4:
    // 0x60005FA4: jal         0x60000BB0
    // 0x60005FA8: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_7;
    // 0x60005FA8: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    after_7:
    // 0x60005FAC: bne         $v0, $zero, L_60005FBC
    if (ctx->r2 != 0) {
        // 0x60005FB0: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_60005FBC;
    }
    // 0x60005FB0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60005FB4: jal         0x60000E80
    // 0x60005FB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world3_E80(rdram, ctx);
        goto after_8;
    // 0x60005FB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
L_60005FBC:
    // 0x60005FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005FC0:
    // 0x60005FC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005FC4: jr          $ra
    // 0x60005FC8: nop

    return;
    // 0x60005FC8: nop

;}
RECOMP_FUNC void ovl_stage_world3_5FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005FCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005FD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005FD4: jal         0x60000BB0
    // 0x60005FD8: addiu       $a0, $zero, 0x8A
    ctx->r4 = ADD32(0, 0X8A);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x60005FD8: addiu       $a0, $zero, 0x8A
    ctx->r4 = ADD32(0, 0X8A);
    after_0:
    // 0x60005FDC: beq         $v0, $zero, L_60006000
    if (ctx->r2 == 0) {
        // 0x60005FE0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006000;
    }
    // 0x60005FE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005FE4: jal         0x60000BB0
    // 0x60005FE8: addiu       $a0, $zero, 0xD7
    ctx->r4 = ADD32(0, 0XD7);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_1;
    // 0x60005FE8: addiu       $a0, $zero, 0xD7
    ctx->r4 = ADD32(0, 0XD7);
    after_1:
    // 0x60005FEC: beq         $v0, $zero, L_60006000
    if (ctx->r2 == 0) {
        // 0x60005FF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006000;
    }
    // 0x60005FF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005FF4: jal         0x60000EEC
    // 0x60005FF8: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_stage_world3_EEC(rdram, ctx);
        goto after_2;
    // 0x60005FF8: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_2:
    // 0x60005FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006000:
    // 0x60006000: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006004: jr          $ra
    // 0x60006008: nop

    return;
    // 0x60006008: nop

;}
RECOMP_FUNC void ovl_stage_world3_600C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000600C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006014: jal         0x60000BB0
    // 0x60006018: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x60006018: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    after_0:
    // 0x6000601C: beq         $v0, $zero, L_60006050
    if (ctx->r2 == 0) {
        // 0x60006020: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006050;
    }
    // 0x60006020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006024: jal         0x60000BB0
    // 0x60006028: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_1;
    // 0x60006028: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    after_1:
    // 0x6000602C: beq         $v0, $zero, L_60006050
    if (ctx->r2 == 0) {
        // 0x60006030: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006050;
    }
    // 0x60006030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006034: jal         0x60000BB0
    // 0x60006038: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_2;
    // 0x60006038: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    after_2:
    // 0x6000603C: beq         $v0, $zero, L_60006050
    if (ctx->r2 == 0) {
        // 0x60006040: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006050;
    }
    // 0x60006040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006044: jal         0x60000B98
    // 0x60006048: addiu       $a0, $zero, 0x19C
    ctx->r4 = ADD32(0, 0X19C);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_3;
    // 0x60006048: addiu       $a0, $zero, 0x19C
    ctx->r4 = ADD32(0, 0X19C);
    after_3:
    // 0x6000604C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006050:
    // 0x60006050: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006054: jr          $ra
    // 0x60006058: nop

    return;
    // 0x60006058: nop

;}
RECOMP_FUNC void ovl_stage_world3_605C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000605C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60006060: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60006064: jal         0x60000C1C
    // 0x60006068: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world3_C1C(rdram, ctx);
        goto after_0;
    // 0x60006068: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x6000606C: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x60006070: addiu       $at, $zero, 0x85A
    ctx->r1 = ADD32(0, 0X85A);
    // 0x60006074: bne         $t6, $at, L_6000608C
    if (ctx->r14 != ctx->r1) {
        // 0x60006078: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_6000608C;
    }
    // 0x60006078: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x6000607C: jal         0x60000A60
    // 0x60006080: addiu       $a0, $zero, 0xB19
    ctx->r4 = ADD32(0, 0XB19);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_1;
    // 0x60006080: addiu       $a0, $zero, 0xB19
    ctx->r4 = ADD32(0, 0XB19);
    after_1:
    // 0x60006084: b           L_60006094
    // 0x60006088: nop

        goto L_60006094;
    // 0x60006088: nop

L_6000608C:
    // 0x6000608C: jal         0x60000A60
    // 0x60006090: addiu       $a0, $zero, 0xB24
    ctx->r4 = ADD32(0, 0XB24);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_2;
    // 0x60006090: addiu       $a0, $zero, 0xB24
    ctx->r4 = ADD32(0, 0XB24);
    after_2:
L_60006094:
    // 0x60006094: jal         0x600009D0
    // 0x60006098: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_3;
    // 0x60006098: nop

    after_3:
    // 0x6000609C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x600060A0: nop

    // 0x600060A4: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x600060A8: beq         $t8, $zero, L_600060CC
    if (ctx->r24 == 0) {
        // 0x600060AC: nop
    
            goto L_600060CC;
    }
    // 0x600060AC: nop

L_600060B0:
    // 0x600060B0: jal         0x600009D0
    // 0x600060B4: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_4;
    // 0x600060B4: nop

    after_4:
    // 0x600060B8: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x600060BC: nop

    // 0x600060C0: andi        $t0, $t9, 0x800
    ctx->r8 = ctx->r25 & 0X800;
    // 0x600060C4: bne         $t0, $zero, L_600060B0
    if (ctx->r8 != 0) {
        // 0x600060C8: nop
    
            goto L_600060B0;
    }
    // 0x600060C8: nop

L_600060CC:
    // 0x600060CC: jal         0x600009C4
    // 0x600060D0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_5;
    // 0x600060D0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_5:
    // 0x600060D4: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x600060D8: nop

    // 0x600060DC: ori         $t2, $t1, 0x200
    ctx->r10 = ctx->r9 | 0X200;
    // 0x600060E0: jal         0x600009AC
    // 0x600060E4: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    ovl_stage_world3_9AC(rdram, ctx);
        goto after_6;
    // 0x600060E4: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    after_6:
    // 0x600060E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x600060EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x600060F0: jr          $ra
    // 0x600060F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x600060F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world3_60F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600060F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600060FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006100: jal         0x60000C1C
    // 0x60006104: nop

    ovl_stage_world3_C1C(rdram, ctx);
        goto after_0;
    // 0x60006104: nop

    after_0:
    // 0x60006108: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x6000610C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x60006110: bne         $t6, $at, L_60006134
    if (ctx->r14 != ctx->r1) {
        // 0x60006114: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60006134;
    }
    // 0x60006114: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006118: addiu       $a0, $a0, 0x605C
    ctx->r4 = ADD32(ctx->r4, 0X605C);
    // 0x6000611C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60006120: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006124: jal         0x60000994
    // 0x60006128: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_994(rdram, ctx);
        goto after_1;
    // 0x60006128: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x6000612C: b           L_60006150
    // 0x60006130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006150;
    // 0x60006130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006134:
    // 0x60006134: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x60006138: addiu       $at, $zero, 0x85A
    ctx->r1 = ADD32(0, 0X85A);
    // 0x6000613C: bne         $t7, $at, L_60006150
    if (ctx->r15 != ctx->r1) {
        // 0x60006140: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006150;
    }
    // 0x60006140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006144: jal         0x60000B98
    // 0x60006148: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_2;
    // 0x60006148: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    after_2:
    // 0x6000614C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006150:
    // 0x60006150: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006154: jr          $ra
    // 0x60006158: nop

    return;
    // 0x60006158: nop

;}
RECOMP_FUNC void ovl_stage_world3_615C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000615C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60006160: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60006164: jal         0x60000C1C
    // 0x60006168: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world3_C1C(rdram, ctx);
        goto after_0;
    // 0x60006168: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x6000616C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60006170: jal         0x60000A60
    // 0x60006174: addiu       $a0, $zero, 0xBF6
    ctx->r4 = ADD32(0, 0XBF6);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_1;
    // 0x60006174: addiu       $a0, $zero, 0xBF6
    ctx->r4 = ADD32(0, 0XBF6);
    after_1:
    // 0x60006178: jal         0x600009D0
    // 0x6000617C: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_2;
    // 0x6000617C: nop

    after_2:
    // 0x60006180: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x60006184: nop

    // 0x60006188: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x6000618C: beq         $t7, $zero, L_600061B0
    if (ctx->r15 == 0) {
        // 0x60006190: nop
    
            goto L_600061B0;
    }
    // 0x60006190: nop

L_60006194:
    // 0x60006194: jal         0x600009D0
    // 0x60006198: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_3;
    // 0x60006198: nop

    after_3:
    // 0x6000619C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x600061A0: nop

    // 0x600061A4: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x600061A8: bne         $t9, $zero, L_60006194
    if (ctx->r25 != 0) {
        // 0x600061AC: nop
    
            goto L_60006194;
    }
    // 0x600061AC: nop

L_600061B0:
    // 0x600061B0: jal         0x600009C4
    // 0x600061B4: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_4;
    // 0x600061B4: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_4:
    // 0x600061B8: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x600061BC: nop

    // 0x600061C0: ori         $t1, $t0, 0x200
    ctx->r9 = ctx->r8 | 0X200;
    // 0x600061C4: jal         0x600009AC
    // 0x600061C8: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    ovl_stage_world3_9AC(rdram, ctx);
        goto after_5;
    // 0x600061C8: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    after_5:
    // 0x600061CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x600061D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x600061D4: jr          $ra
    // 0x600061D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x600061D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world3_61DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600061DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600061E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600061E4: jal         0x60000C1C
    // 0x600061E8: nop

    ovl_stage_world3_C1C(rdram, ctx);
        goto after_0;
    // 0x600061E8: nop

    after_0:
    // 0x600061EC: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x600061F0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x600061F4: bne         $t6, $at, L_60006210
    if (ctx->r14 != ctx->r1) {
        // 0x600061F8: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60006210;
    }
    // 0x600061F8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600061FC: addiu       $a0, $a0, 0x615C
    ctx->r4 = ADD32(ctx->r4, 0X615C);
    // 0x60006200: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60006204: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006208: jal         0x60000994
    // 0x6000620C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_994(rdram, ctx);
        goto after_1;
    // 0x6000620C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_60006210:
    // 0x60006210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006214: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006218: jr          $ra
    // 0x6000621C: nop

    return;
    // 0x6000621C: nop

;}
RECOMP_FUNC void ovl_stage_world3_6220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006220: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60006224: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60006228: jal         0x60000C1C
    // 0x6000622C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world3_C1C(rdram, ctx);
        goto after_0;
    // 0x6000622C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60006230: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60006234: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60006238: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x6000623C: beq         $t7, $zero, L_60006260
    if (ctx->r15 == 0) {
        // 0x60006240: nop
    
            goto L_60006260;
    }
    // 0x60006240: nop

L_60006244:
    // 0x60006244: jal         0x600009D0
    // 0x60006248: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_1;
    // 0x60006248: nop

    after_1:
    // 0x6000624C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x60006250: nop

    // 0x60006254: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60006258: bne         $t9, $zero, L_60006244
    if (ctx->r25 != 0) {
        // 0x6000625C: nop
    
            goto L_60006244;
    }
    // 0x6000625C: nop

L_60006260:
    // 0x60006260: jal         0x600009C4
    // 0x60006264: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_2;
    // 0x60006264: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_2:
    // 0x60006268: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x6000626C: nop

    // 0x60006270: ori         $t1, $t0, 0x200
    ctx->r9 = ctx->r8 | 0X200;
    // 0x60006274: jal         0x600009AC
    // 0x60006278: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    ovl_stage_world3_9AC(rdram, ctx);
        goto after_3;
    // 0x60006278: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    after_3:
    // 0x6000627C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60006280: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60006284: jr          $ra
    // 0x60006288: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60006288: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world3_628C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000628C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006290: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006294: jal         0x60000C1C
    // 0x60006298: nop

    ovl_stage_world3_C1C(rdram, ctx);
        goto after_0;
    // 0x60006298: nop

    after_0:
    // 0x6000629C: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x600062A0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x600062A4: bne         $t6, $at, L_600062C0
    if (ctx->r14 != ctx->r1) {
        // 0x600062A8: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_600062C0;
    }
    // 0x600062A8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600062AC: addiu       $a0, $a0, 0x6220
    ctx->r4 = ADD32(ctx->r4, 0X6220);
    // 0x600062B0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600062B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600062B8: jal         0x60000994
    // 0x600062BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_994(rdram, ctx);
        goto after_1;
    // 0x600062BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_600062C0:
    // 0x600062C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600062C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600062C8: jr          $ra
    // 0x600062CC: nop

    return;
    // 0x600062CC: nop

;}
RECOMP_FUNC void ovl_stage_world3_62D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600062D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600062D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600062D8: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x600062DC: jal         0x60000F04
    // 0x600062E0: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    ovl_stage_world3_F04(rdram, ctx);
        goto after_0;
    // 0x600062E0: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    after_0:
    // 0x600062E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600062E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600062EC: jr          $ra
    // 0x600062F0: nop

    return;
    // 0x600062F0: nop

;}
RECOMP_FUNC void ovl_stage_world3_62F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600062F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x600062F8: slti        $at, $a0, 0x62
    ctx->r1 = SIGNED(ctx->r4) < 0X62 ? 1 : 0;
    // 0x600062FC: bne         $at, $zero, L_60006328
    if (ctx->r1 != 0) {
        // 0x60006300: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_60006328;
    }
    // 0x60006300: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006304: addiu       $at, $zero, 0x62
    ctx->r1 = ADD32(0, 0X62);
    // 0x60006308: beq         $a0, $at, L_600066E4
    if (ctx->r4 == ctx->r1) {
        // 0x6000630C: addiu       $at, $zero, 0x63
        ctx->r1 = ADD32(0, 0X63);
            goto L_600066E4;
    }
    // 0x6000630C: addiu       $at, $zero, 0x63
    ctx->r1 = ADD32(0, 0X63);
    // 0x60006310: beq         $a0, $at, L_600066F4
    if (ctx->r4 == ctx->r1) {
        // 0x60006314: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_600066F4;
    }
    // 0x60006314: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x60006318: beq         $a0, $at, L_60006810
    if (ctx->r4 == ctx->r1) {
        // 0x6000631C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006810;
    }
    // 0x6000631C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006320: b           L_60006708
    // 0x60006324: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
        goto L_60006708;
    // 0x60006324: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
L_60006328:
    // 0x60006328: slti        $at, $a0, 0x61
    ctx->r1 = SIGNED(ctx->r4) < 0X61 ? 1 : 0;
    // 0x6000632C: bne         $at, $zero, L_60006344
    if (ctx->r1 != 0) {
        // 0x60006330: addiu       $at, $zero, 0x61
        ctx->r1 = ADD32(0, 0X61);
            goto L_60006344;
    }
    // 0x60006330: addiu       $at, $zero, 0x61
    ctx->r1 = ADD32(0, 0X61);
    // 0x60006334: beq         $a0, $at, L_600066D4
    if (ctx->r4 == ctx->r1) {
        // 0x60006338: nop
    
            goto L_600066D4;
    }
    // 0x60006338: nop

    // 0x6000633C: b           L_60006708
    // 0x60006340: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
        goto L_60006708;
    // 0x60006340: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
L_60006344:
    // 0x60006344: slti        $at, $a0, 0x31
    ctx->r1 = SIGNED(ctx->r4) < 0X31 ? 1 : 0;
    // 0x60006348: bne         $at, $zero, L_60006360
    if (ctx->r1 != 0) {
        // 0x6000634C: addiu       $at, $zero, 0x60
        ctx->r1 = ADD32(0, 0X60);
            goto L_60006360;
    }
    // 0x6000634C: addiu       $at, $zero, 0x60
    ctx->r1 = ADD32(0, 0X60);
    // 0x60006350: beq         $a0, $at, L_600066C4
    if (ctx->r4 == ctx->r1) {
        // 0x60006354: nop
    
            goto L_600066C4;
    }
    // 0x60006354: nop

    // 0x60006358: b           L_60006708
    // 0x6000635C: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
        goto L_60006708;
    // 0x6000635C: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
L_60006360:
    // 0x60006360: sltiu       $at, $a0, 0x31
    ctx->r1 = ctx->r4 < 0X31 ? 1 : 0;
    // 0x60006364: beq         $at, $zero, L_60006704
    if (ctx->r1 == 0) {
        // 0x60006368: sll         $t6, $a0, 2
        ctx->r14 = S32(ctx->r4 << 2);
            goto L_60006704;
    }
    // 0x60006368: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x6000636C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60006370: addu        $at, $at, $t6
    gpr jr_addend_6000637C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x60006374: lw          $t6, 0x69C4($at)
    ctx->r14 = ADD32(ctx->r1, 0X69C4);
    // 0x60006378: nop

    // 0x6000637C: jr          $t6
    // 0x60006380: nop

    switch (jr_addend_6000637C >> 2) {
        case 0: goto L_60006384; break;
        case 1: goto L_60006394; break;
        case 2: goto L_600063A4; break;
        case 3: goto L_600063B4; break;
        case 4: goto L_600063C4; break;
        case 5: goto L_600063D4; break;
        case 6: goto L_600063E4; break;
        case 7: goto L_600063F4; break;
        case 8: goto L_60006404; break;
        case 9: goto L_60006414; break;
        case 10: goto L_60006424; break;
        case 11: goto L_60006434; break;
        case 12: goto L_60006444; break;
        case 13: goto L_60006454; break;
        case 14: goto L_60006464; break;
        case 15: goto L_60006474; break;
        case 16: goto L_60006484; break;
        case 17: goto L_60006494; break;
        case 18: goto L_600064A4; break;
        case 19: goto L_600064B4; break;
        case 20: goto L_600064C4; break;
        case 21: goto L_600064D4; break;
        case 22: goto L_600064E4; break;
        case 23: goto L_600064F4; break;
        case 24: goto L_60006504; break;
        case 25: goto L_60006514; break;
        case 26: goto L_60006524; break;
        case 27: goto L_60006534; break;
        case 28: goto L_60006544; break;
        case 29: goto L_60006554; break;
        case 30: goto L_60006564; break;
        case 31: goto L_60006574; break;
        case 32: goto L_60006584; break;
        case 33: goto L_60006594; break;
        case 34: goto L_600065A4; break;
        case 35: goto L_600065B4; break;
        case 36: goto L_600065C4; break;
        case 37: goto L_600065D4; break;
        case 38: goto L_600065E4; break;
        case 39: goto L_600065F4; break;
        case 40: goto L_60006604; break;
        case 41: goto L_60006614; break;
        case 42: goto L_6000663C; break;
        case 43: goto L_60006664; break;
        case 44: goto L_60006674; break;
        case 45: goto L_60006684; break;
        case 46: goto L_60006694; break;
        case 47: goto L_600066A4; break;
        case 48: goto L_600066B4; break;
        default: switch_error(__func__, 0x6000637C, 0x600069C4);
    }
    // 0x60006380: nop

L_60006384:
    // 0x60006384: jal         0x60001318
    // 0x60006388: nop

    ovl_stage_world3_1318(rdram, ctx);
        goto after_0;
    // 0x60006388: nop

    after_0:
    // 0x6000638C: b           L_60006810
    // 0x60006390: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006390: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006394:
    // 0x60006394: jal         0x6000144C
    // 0x60006398: nop

    ovl_stage_world3_144C(rdram, ctx);
        goto after_1;
    // 0x60006398: nop

    after_1:
    // 0x6000639C: b           L_60006810
    // 0x600063A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600063A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600063A4:
    // 0x600063A4: jal         0x60001560
    // 0x600063A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world3_1560(rdram, ctx);
        goto after_2;
    // 0x600063A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x600063AC: b           L_60006810
    // 0x600063B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600063B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600063B4:
    // 0x600063B4: jal         0x60001560
    // 0x600063B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world3_1560(rdram, ctx);
        goto after_3;
    // 0x600063B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x600063BC: b           L_60006810
    // 0x600063C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600063C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600063C4:
    // 0x600063C4: jal         0x60003230
    // 0x600063C8: nop

    ovl_stage_world3_3230(rdram, ctx);
        goto after_4;
    // 0x600063C8: nop

    after_4:
    // 0x600063CC: b           L_60006810
    // 0x600063D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600063D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600063D4:
    // 0x600063D4: jal         0x6000339C
    // 0x600063D8: nop

    ovl_stage_world3_339C(rdram, ctx);
        goto after_5;
    // 0x600063D8: nop

    after_5:
    // 0x600063DC: b           L_60006810
    // 0x600063E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600063E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600063E4:
    // 0x600063E4: jal         0x60003528
    // 0x600063E8: nop

    ovl_stage_world3_3528(rdram, ctx);
        goto after_6;
    // 0x600063E8: nop

    after_6:
    // 0x600063EC: b           L_60006810
    // 0x600063F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600063F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600063F4:
    // 0x600063F4: jal         0x60003294
    // 0x600063F8: nop

    ovl_stage_world3_3294(rdram, ctx);
        goto after_7;
    // 0x600063F8: nop

    after_7:
    // 0x600063FC: b           L_60006810
    // 0x60006400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006404:
    // 0x60006404: jal         0x60003838
    // 0x60006408: nop

    ovl_stage_world3_3838(rdram, ctx);
        goto after_8;
    // 0x60006408: nop

    after_8:
    // 0x6000640C: b           L_60006810
    // 0x60006410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006414:
    // 0x60006414: jal         0x60003788
    // 0x60006418: nop

    ovl_stage_world3_3788(rdram, ctx);
        goto after_9;
    // 0x60006418: nop

    after_9:
    // 0x6000641C: b           L_60006810
    // 0x60006420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006424:
    // 0x60006424: jal         0x600037D8
    // 0x60006428: nop

    ovl_stage_world3_37D8(rdram, ctx);
        goto after_10;
    // 0x60006428: nop

    after_10:
    // 0x6000642C: b           L_60006810
    // 0x60006430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006434:
    // 0x60006434: jal         0x60003B50
    // 0x60006438: nop

    ovl_stage_world3_3B50(rdram, ctx);
        goto after_11;
    // 0x60006438: nop

    after_11:
    // 0x6000643C: b           L_60006810
    // 0x60006440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006444:
    // 0x60006444: jal         0x60003C10
    // 0x60006448: nop

    ovl_stage_world3_3C10(rdram, ctx);
        goto after_12;
    // 0x60006448: nop

    after_12:
    // 0x6000644C: b           L_60006810
    // 0x60006450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006454:
    // 0x60006454: jal         0x60003CD0
    // 0x60006458: nop

    ovl_stage_world3_3CD0(rdram, ctx);
        goto after_13;
    // 0x60006458: nop

    after_13:
    // 0x6000645C: b           L_60006810
    // 0x60006460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006464:
    // 0x60006464: jal         0x60004094
    // 0x60006468: nop

    ovl_stage_world3_4094(rdram, ctx);
        goto after_14;
    // 0x60006468: nop

    after_14:
    // 0x6000646C: b           L_60006810
    // 0x60006470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006474:
    // 0x60006474: jal         0x600050FC
    // 0x60006478: nop

    ovl_stage_world3_50FC(rdram, ctx);
        goto after_15;
    // 0x60006478: nop

    after_15:
    // 0x6000647C: b           L_60006810
    // 0x60006480: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006480: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006484:
    // 0x60006484: jal         0x60004EC4
    // 0x60006488: nop

    ovl_stage_world3_4EC4(rdram, ctx);
        goto after_16;
    // 0x60006488: nop

    after_16:
    // 0x6000648C: b           L_60006810
    // 0x60006490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006494:
    // 0x60006494: jal         0x60004FDC
    // 0x60006498: nop

    ovl_stage_world3_4FDC(rdram, ctx);
        goto after_17;
    // 0x60006498: nop

    after_17:
    // 0x6000649C: b           L_60006810
    // 0x600064A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600064A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600064A4:
    // 0x600064A4: jal         0x60005034
    // 0x600064A8: nop

    ovl_stage_world3_5034(rdram, ctx);
        goto after_18;
    // 0x600064A8: nop

    after_18:
    // 0x600064AC: b           L_60006810
    // 0x600064B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600064B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600064B4:
    // 0x600064B4: jal         0x600040E4
    // 0x600064B8: nop

    ovl_stage_world3_40E4(rdram, ctx);
        goto after_19;
    // 0x600064B8: nop

    after_19:
    // 0x600064BC: b           L_60006810
    // 0x600064C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600064C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600064C4:
    // 0x600064C4: jal         0x60004834
    // 0x600064C8: nop

    ovl_stage_world3_4834(rdram, ctx);
        goto after_20;
    // 0x600064C8: nop

    after_20:
    // 0x600064CC: b           L_60006810
    // 0x600064D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600064D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600064D4:
    // 0x600064D4: jal         0x60004D14
    // 0x600064D8: nop

    ovl_stage_world3_4D14(rdram, ctx);
        goto after_21;
    // 0x600064D8: nop

    after_21:
    // 0x600064DC: b           L_60006810
    // 0x600064E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600064E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600064E4:
    // 0x600064E4: jal         0x60004E50
    // 0x600064E8: nop

    ovl_stage_world3_4E50(rdram, ctx);
        goto after_22;
    // 0x600064E8: nop

    after_22:
    // 0x600064EC: b           L_60006810
    // 0x600064F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600064F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600064F4:
    // 0x600064F4: jal         0x60005078
    // 0x600064F8: nop

    ovl_stage_world3_5078(rdram, ctx);
        goto after_23;
    // 0x600064F8: nop

    after_23:
    // 0x600064FC: b           L_60006810
    // 0x60006500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006504:
    // 0x60006504: jal         0x60005134
    // 0x60006508: nop

    ovl_stage_world3_5134(rdram, ctx);
        goto after_24;
    // 0x60006508: nop

    after_24:
    // 0x6000650C: b           L_60006810
    // 0x60006510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006514:
    // 0x60006514: jal         0x60005174
    // 0x60006518: nop

    ovl_stage_world3_5174(rdram, ctx);
        goto after_25;
    // 0x60006518: nop

    after_25:
    // 0x6000651C: b           L_60006810
    // 0x60006520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006524:
    // 0x60006524: jal         0x600051F0
    // 0x60006528: nop

    ovl_stage_world3_51F0(rdram, ctx);
        goto after_26;
    // 0x60006528: nop

    after_26:
    // 0x6000652C: b           L_60006810
    // 0x60006530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006534:
    // 0x60006534: jal         0x6000538C
    // 0x60006538: nop

    ovl_stage_world3_538C(rdram, ctx);
        goto after_27;
    // 0x60006538: nop

    after_27:
    // 0x6000653C: b           L_60006810
    // 0x60006540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006544:
    // 0x60006544: jal         0x60005660
    // 0x60006548: nop

    ovl_stage_world3_5660(rdram, ctx);
        goto after_28;
    // 0x60006548: nop

    after_28:
    // 0x6000654C: b           L_60006810
    // 0x60006550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006554:
    // 0x60006554: jal         0x60005710
    // 0x60006558: nop

    ovl_stage_world3_5710(rdram, ctx);
        goto after_29;
    // 0x60006558: nop

    after_29:
    // 0x6000655C: b           L_60006810
    // 0x60006560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006564:
    // 0x60006564: jal         0x600057C0
    // 0x60006568: nop

    ovl_stage_world3_57C0(rdram, ctx);
        goto after_30;
    // 0x60006568: nop

    after_30:
    // 0x6000656C: b           L_60006810
    // 0x60006570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006574:
    // 0x60006574: jal         0x60005894
    // 0x60006578: nop

    ovl_stage_world3_5894(rdram, ctx);
        goto after_31;
    // 0x60006578: nop

    after_31:
    // 0x6000657C: b           L_60006810
    // 0x60006580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006584:
    // 0x60006584: jal         0x600058B4
    // 0x60006588: nop

    ovl_stage_world3_58B4(rdram, ctx);
        goto after_32;
    // 0x60006588: nop

    after_32:
    // 0x6000658C: b           L_60006810
    // 0x60006590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006594:
    // 0x60006594: jal         0x60005DCC
    // 0x60006598: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world3_5DCC(rdram, ctx);
        goto after_33;
    // 0x60006598: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_33:
    // 0x6000659C: b           L_60006810
    // 0x600065A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600065A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600065A4:
    // 0x600065A4: jal         0x60005DCC
    // 0x600065A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world3_5DCC(rdram, ctx);
        goto after_34;
    // 0x600065A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_34:
    // 0x600065AC: b           L_60006810
    // 0x600065B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600065B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600065B4:
    // 0x600065B4: jal         0x60005DCC
    // 0x600065B8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world3_5DCC(rdram, ctx);
        goto after_35;
    // 0x600065B8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_35:
    // 0x600065BC: b           L_60006810
    // 0x600065C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600065C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600065C4:
    // 0x600065C4: jal         0x60005DCC
    // 0x600065C8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world3_5DCC(rdram, ctx);
        goto after_36;
    // 0x600065C8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_36:
    // 0x600065CC: b           L_60006810
    // 0x600065D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600065D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600065D4:
    // 0x600065D4: jal         0x60005E64
    // 0x600065D8: nop

    ovl_stage_world3_5E64(rdram, ctx);
        goto after_37;
    // 0x600065D8: nop

    after_37:
    // 0x600065DC: b           L_60006810
    // 0x600065E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600065E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600065E4:
    // 0x600065E4: jal         0x60005F2C
    // 0x600065E8: nop

    ovl_stage_world3_5F2C(rdram, ctx);
        goto after_38;
    // 0x600065E8: nop

    after_38:
    // 0x600065EC: b           L_60006810
    // 0x600065F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600065F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600065F4:
    // 0x600065F4: jal         0x60005FCC
    // 0x600065F8: nop

    ovl_stage_world3_5FCC(rdram, ctx);
        goto after_39;
    // 0x600065F8: nop

    after_39:
    // 0x600065FC: b           L_60006810
    // 0x60006600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006604:
    // 0x60006604: jal         0x6000600C
    // 0x60006608: nop

    ovl_stage_world3_600C(rdram, ctx);
        goto after_40;
    // 0x60006608: nop

    after_40:
    // 0x6000660C: b           L_60006810
    // 0x60006610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006614:
    // 0x60006614: jal         0x60000BB0
    // 0x60006618: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_41;
    // 0x60006618: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    after_41:
    // 0x6000661C: bne         $v0, $zero, L_6000662C
    if (ctx->r2 != 0) {
        // 0x60006620: nop
    
            goto L_6000662C;
    }
    // 0x60006620: nop

    // 0x60006624: jal         0x60001104
    // 0x60006628: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world3_1104(rdram, ctx);
        goto after_42;
    // 0x60006628: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_42:
L_6000662C:
    // 0x6000662C: jal         0x60000268
    // 0x60006630: nop

    ovl_stage_world3_268(rdram, ctx);
        goto after_43;
    // 0x60006630: nop

    after_43:
    // 0x60006634: b           L_60006810
    // 0x60006638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000663C:
    // 0x6000663C: jal         0x60000DE4
    // 0x60006640: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world3_DE4(rdram, ctx);
        goto after_44;
    // 0x60006640: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_44:
    // 0x60006644: jal         0x60000CC4
    // 0x60006648: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world3_CC4(rdram, ctx);
        goto after_45;
    // 0x60006648: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_45:
    // 0x6000664C: jal         0x60000A6C
    // 0x60006650: nop

    ovl_stage_world3_A6C(rdram, ctx);
        goto after_46;
    // 0x60006650: nop

    after_46:
    // 0x60006654: jal         0x60000C7C
    // 0x60006658: nop

    ovl_stage_world3_C7C(rdram, ctx);
        goto after_47;
    // 0x60006658: nop

    after_47:
    // 0x6000665C: b           L_60006810
    // 0x60006660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006664:
    // 0x60006664: jal         0x60003310
    // 0x60006668: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world3_3310(rdram, ctx);
        goto after_48;
    // 0x60006668: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_48:
    // 0x6000666C: b           L_60006810
    // 0x60006670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006674:
    // 0x60006674: jal         0x60003310
    // 0x60006678: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world3_3310(rdram, ctx);
        goto after_49;
    // 0x60006678: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_49:
    // 0x6000667C: b           L_60006810
    // 0x60006680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006684:
    // 0x60006684: jal         0x60003310
    // 0x60006688: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world3_3310(rdram, ctx);
        goto after_50;
    // 0x60006688: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_50:
    // 0x6000668C: b           L_60006810
    // 0x60006690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006694:
    // 0x60006694: jal         0x60003310
    // 0x60006698: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world3_3310(rdram, ctx);
        goto after_51;
    // 0x60006698: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_51:
    // 0x6000669C: b           L_60006810
    // 0x600066A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600066A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600066A4:
    // 0x600066A4: jal         0x60000268
    // 0x600066A8: nop

    ovl_stage_world3_268(rdram, ctx);
        goto after_52;
    // 0x600066A8: nop

    after_52:
    // 0x600066AC: b           L_60006810
    // 0x600066B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600066B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600066B4:
    // 0x600066B4: jal         0x600062D0
    // 0x600066B8: nop

    ovl_stage_world3_62D0(rdram, ctx);
        goto after_53;
    // 0x600066B8: nop

    after_53:
    // 0x600066BC: b           L_60006810
    // 0x600066C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600066C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600066C4:
    // 0x600066C4: jal         0x6000628C
    // 0x600066C8: nop

    ovl_stage_world3_628C(rdram, ctx);
        goto after_54;
    // 0x600066C8: nop

    after_54:
    // 0x600066CC: b           L_60006810
    // 0x600066D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600066D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600066D4:
    // 0x600066D4: jal         0x600061DC
    // 0x600066D8: nop

    ovl_stage_world3_61DC(rdram, ctx);
        goto after_55;
    // 0x600066D8: nop

    after_55:
    // 0x600066DC: b           L_60006810
    // 0x600066E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600066E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600066E4:
    // 0x600066E4: jal         0x600060F8
    // 0x600066E8: nop

    ovl_stage_world3_60F8(rdram, ctx);
        goto after_56;
    // 0x600066E8: nop

    after_56:
    // 0x600066EC: b           L_60006810
    // 0x600066F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600066F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600066F4:
    // 0x600066F4: jal         0x60000EE0
    // 0x600066F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world3_EE0(rdram, ctx);
        goto after_57;
    // 0x600066F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_57:
    // 0x600066FC: b           L_60006810
    // 0x60006700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006704:
    // 0x60006704: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
L_60006708:
    // 0x60006708: slti        $at, $v1, 0x32
    ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
    // 0x6000670C: bne         $at, $zero, L_6000680C
    if (ctx->r1 != 0) {
        // 0x60006710: slti        $at, $v1, 0x3C
        ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
            goto L_6000680C;
    }
    // 0x60006710: slti        $at, $v1, 0x3C
    ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
    // 0x60006714: beq         $at, $zero, L_60006738
    if (ctx->r1 == 0) {
        // 0x60006718: sll         $t7, $v1, 2
        ctx->r15 = S32(ctx->r3 << 2);
            goto L_60006738;
    }
    // 0x60006718: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x6000671C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006720: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x60006724: lw          $a0, 0x6828($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6828);
    // 0x60006728: jal         0x60000CDC
    // 0x6000672C: nop

    ovl_stage_world3_CDC(rdram, ctx);
        goto after_58;
    // 0x6000672C: nop

    after_58:
    // 0x60006730: b           L_60006810
    // 0x60006734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006738:
    // 0x60006738: slti        $at, $v1, 0x46
    ctx->r1 = SIGNED(ctx->r3) < 0X46 ? 1 : 0;
    // 0x6000673C: beq         $at, $zero, L_60006758
    if (ctx->r1 == 0) {
        // 0x60006740: slti        $at, $v1, 0x50
        ctx->r1 = SIGNED(ctx->r3) < 0X50 ? 1 : 0;
            goto L_60006758;
    }
    // 0x60006740: slti        $at, $v1, 0x50
    ctx->r1 = SIGNED(ctx->r3) < 0X50 ? 1 : 0;
    // 0x60006744: jal         0x60000B98
    // 0x60006748: addiu       $a0, $v1, 0x4D
    ctx->r4 = ADD32(ctx->r3, 0X4D);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_59;
    // 0x60006748: addiu       $a0, $v1, 0x4D
    ctx->r4 = ADD32(ctx->r3, 0X4D);
    after_59:
    // 0x6000674C: b           L_60006810
    // 0x60006750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006754: slti        $at, $v1, 0x50
    ctx->r1 = SIGNED(ctx->r3) < 0X50 ? 1 : 0;
L_60006758:
    // 0x60006758: beq         $at, $zero, L_6000680C
    if (ctx->r1 == 0) {
        // 0x6000675C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_6000680C;
    }
    // 0x6000675C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60006760: jal         0x600007E4
    // 0x60006764: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    ovl_stage_world3_7E4(rdram, ctx);
        goto after_60;
    // 0x60006764: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_60:
    // 0x60006768: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x6000676C: nop

    // 0x60006770: addiu       $t8, $v1, -0x47
    ctx->r24 = ADD32(ctx->r3, -0X47);
    // 0x60006774: sltiu       $at, $t8, 0x5
    ctx->r1 = ctx->r24 < 0X5 ? 1 : 0;
    // 0x60006778: beq         $at, $zero, L_6000680C
    if (ctx->r1 == 0) {
        // 0x6000677C: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_6000680C;
    }
    // 0x6000677C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60006780: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60006784: addu        $at, $at, $t8
    gpr jr_addend_60006790 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x60006788: lw          $t8, 0x6A88($at)
    ctx->r24 = ADD32(ctx->r1, 0X6A88);
    // 0x6000678C: nop

    // 0x60006790: jr          $t8
    // 0x60006794: nop

    switch (jr_addend_60006790 >> 2) {
        case 0: goto L_60006798; break;
        case 1: goto L_600067C0; break;
        case 2: goto L_600067D4; break;
        case 3: goto L_600067E8; break;
        case 4: goto L_600067FC; break;
        default: switch_error(__func__, 0x60006790, 0x60006A88);
    }
    // 0x60006794: nop

L_60006798:
    // 0x60006798: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x6000679C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x600067A0: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x600067A4: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x600067A8: sw          $t0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r8;
    // 0x600067AC: and         $t2, $t0, $at
    ctx->r10 = ctx->r8 & ctx->r1;
    // 0x600067B0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x600067B4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x600067B8: b           L_6000680C
    // 0x600067BC: sw          $t2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r10;
        goto L_6000680C;
    // 0x600067BC: sw          $t2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r10;
L_600067C0:
    // 0x600067C0: lw          $t3, 0x10($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X10);
    // 0x600067C4: nop

    // 0x600067C8: ori         $t4, $t3, 0x1
    ctx->r12 = ctx->r11 | 0X1;
    // 0x600067CC: b           L_6000680C
    // 0x600067D0: sw          $t4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r12;
        goto L_6000680C;
    // 0x600067D0: sw          $t4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r12;
L_600067D4:
    // 0x600067D4: lw          $t5, 0x10($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X10);
    // 0x600067D8: nop

    // 0x600067DC: ori         $t6, $t5, 0x2
    ctx->r14 = ctx->r13 | 0X2;
    // 0x600067E0: b           L_6000680C
    // 0x600067E4: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
        goto L_6000680C;
    // 0x600067E4: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
L_600067E8:
    // 0x600067E8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x600067EC: nop

    // 0x600067F0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x600067F4: b           L_6000680C
    // 0x600067F8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
        goto L_6000680C;
    // 0x600067F8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_600067FC:
    // 0x600067FC: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x60006800: nop

    // 0x60006804: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x60006808: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
L_6000680C:
    // 0x6000680C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006810:
    // 0x60006810: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x60006814: jr          $ra
    // 0x60006818: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x60006818: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_demo_story_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000000: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60000004: jr          $ra
    // 0x60000008: addiu       $v0, $v0, 0x681C
    ctx->r2 = ADD32(ctx->r2, 0X681C);
    return;
    // 0x60000008: addiu       $v0, $v0, 0x681C
    ctx->r2 = ADD32(ctx->r2, 0X681C);
    // 0x6000000C: nop

;}
RECOMP_FUNC void ovl_demo_story_10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_4C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_58(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_64(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_70(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_7C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_88(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_94(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_A0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_AC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_B8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_C4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_D0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_DC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_E8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_F4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_100(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_10C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_118(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_demo_story_124(uint8_t* rdram, recomp_context* ctx) {
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
