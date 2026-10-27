#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_enemy_world4_744C(uint8_t* rdram, recomp_context* ctx) {
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
    ovl_enemy_world4_1F1C(rdram, ctx);
        goto after_0;
    // 0x430074A4: sw          $zero, 0x1CC($a0)
    MEM_W(0X1CC, ctx->r4) = 0;
    after_0:
    // 0x430074A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430074AC: jal         0x43005078
    // 0x430074B0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_enemy_world4_5078(rdram, ctx);
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
    ovl_enemy_world4_14D8(rdram, ctx);
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
    ovl_enemy_world4_6B78(rdram, ctx);
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
RECOMP_FUNC void ovl_enemy_world4_7520(uint8_t* rdram, recomp_context* ctx) {
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
    ovl_enemy_world4_716C(rdram, ctx);
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
    ovl_enemy_world4_15C0(rdram, ctx);
        goto after_1;
    // 0x43007548: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x4300754C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007550: jal         0x430014E4
    // 0x43007554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world4_14E4(rdram, ctx);
        goto after_2;
    // 0x43007554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x43007558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300755C: jal         0x43001554
    // 0x43007560: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_1554(rdram, ctx);
        goto after_3;
    // 0x43007560: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x43007564: jal         0x430014D8
    // 0x43007568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_14D8(rdram, ctx);
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
    ovl_enemy_world4_6B78(rdram, ctx);
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
    ovl_enemy_world4_6B78(rdram, ctx);
        goto after_6;
    // 0x43007594: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    after_6:
    // 0x43007598: jal         0x43001F1C
    // 0x4300759C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_1F1C(rdram, ctx);
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
    ovl_enemy_world4_14E4(rdram, ctx);
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
    ovl_enemy_world4_14E4(rdram, ctx);
        goto after_9;
    // 0x430075C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x430075CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430075D0: jal         0x43001554
    // 0x430075D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world4_1554(rdram, ctx);
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
RECOMP_FUNC void ovl_enemy_world4_75E8(uint8_t* rdram, recomp_context* ctx) {
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
    ovl_enemy_world4_49B0(rdram, ctx);
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
RECOMP_FUNC void ovl_enemy_world4_7644(uint8_t* rdram, recomp_context* ctx) {
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
    ovl_enemy_world4_75E8(rdram, ctx);
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
    ovl_enemy_world4_6B78(rdram, ctx);
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
RECOMP_FUNC void ovl_enemy_world4_7690(uint8_t* rdram, recomp_context* ctx) {
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

    ovl_enemy_world4_4880(rdram, ctx);
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
    // 0x430076CC: lw          $t7, -0x63BC($at)
    ctx->r15 = ADD32(ctx->r1, -0X63BC);
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
        default: switch_error(__func__, 0x430076D4, 0x43009C44);
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
    ovl_enemy_world4_75E8(rdram, ctx);
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
    ovl_enemy_world4_75E8(rdram, ctx);
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
    ovl_enemy_world4_75E8(rdram, ctx);
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
    ovl_enemy_world4_75E8(rdram, ctx);
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
    ovl_enemy_world4_75E8(rdram, ctx);
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
RECOMP_FUNC void ovl_enemy_world4_7770(uint8_t* rdram, recomp_context* ctx) {
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
    ovl_enemy_world4_49B0(rdram, ctx);
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
    ovl_enemy_world4_6B78(rdram, ctx);
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
RECOMP_FUNC void ovl_enemy_world4_77E4(uint8_t* rdram, recomp_context* ctx) {
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

    ovl_enemy_world4_4880(rdram, ctx);
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
    // 0x4300781C: lw          $t6, -0x63A0($at)
    ctx->r14 = ADD32(ctx->r1, -0X63A0);
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
        default: switch_error(__func__, 0x43007824, 0x43009C60);
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
    ovl_enemy_world4_6B78(rdram, ctx);
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
    ovl_enemy_world4_6B78(rdram, ctx);
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
    ovl_enemy_world4_6B78(rdram, ctx);
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
    ovl_enemy_world4_6B78(rdram, ctx);
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
    ovl_enemy_world4_6B78(rdram, ctx);
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
    ovl_enemy_world4_6B78(rdram, ctx);
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
    ovl_enemy_world4_6B78(rdram, ctx);
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
    ovl_enemy_world4_6B78(rdram, ctx);
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
    ovl_enemy_world4_6B78(rdram, ctx);
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
    ovl_enemy_world4_729C(rdram, ctx);
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
    ovl_enemy_world4_729C(rdram, ctx);
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
    ovl_enemy_world4_744C(rdram, ctx);
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
    ovl_enemy_world4_744C(rdram, ctx);
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
    ovl_enemy_world4_744C(rdram, ctx);
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
    ovl_enemy_world4_34C(rdram, ctx);
        goto after_15;
    // 0x430079CC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_15:
    // 0x430079D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430079D4: jal         0x43007520
    // 0x430079D8: addiu       $a1, $v0, 0x1E
    ctx->r5 = ADD32(ctx->r2, 0X1E);
    ovl_enemy_world4_7520(rdram, ctx);
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
    ovl_enemy_world4_34C(rdram, ctx);
        goto after_17;
    // 0x430079F4: sw          $t6, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r14;
    after_17:
    // 0x430079F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430079FC: jal         0x43007520
    // 0x43007A00: addiu       $a1, $v0, 0x1E
    ctx->r5 = ADD32(ctx->r2, 0X1E);
    ovl_enemy_world4_7520(rdram, ctx);
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
    ovl_enemy_world4_7644(rdram, ctx);
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
    ovl_enemy_world4_7644(rdram, ctx);
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
    ovl_enemy_world4_7644(rdram, ctx);
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
    ovl_enemy_world4_7644(rdram, ctx);
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
    ovl_enemy_world4_7644(rdram, ctx);
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
    ovl_enemy_world4_7770(rdram, ctx);
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
    ovl_enemy_world4_7770(rdram, ctx);
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
RECOMP_FUNC void ovl_enemy_world4_7B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007B10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43007B14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007B18: jal         0x43006928
    // 0x43007B1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world4_6928(rdram, ctx);
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

    ovl_enemy_world4_77E4(rdram, ctx);
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
RECOMP_FUNC void ovl_enemy_world4_7B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007B60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43007B64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007B68: jal         0x43006D84
    // 0x43007B6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world4_6D84(rdram, ctx);
        goto after_0;
    // 0x43007B6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43007B70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43007B74: jal         0x430077E4
    // 0x43007B78: nop

    ovl_enemy_world4_77E4(rdram, ctx);
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
RECOMP_FUNC void ovl_enemy_world4_7B8C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world4_7C80(uint8_t* rdram, recomp_context* ctx) {
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

    ovl_enemy_world4_4880(rdram, ctx);
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
    // 0x43007CB8: lw          $t6, -0x6340($at)
    ctx->r14 = ADD32(ctx->r1, -0X6340);
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
        default: switch_error(__func__, 0x43007CC0, 0x43009CC0);
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
    ovl_enemy_world4_7B10(rdram, ctx);
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
    ovl_enemy_world4_7B10(rdram, ctx);
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
    ovl_enemy_world4_7B10(rdram, ctx);
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
    ovl_enemy_world4_7B10(rdram, ctx);
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
    ovl_enemy_world4_7108(rdram, ctx);
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
    ovl_enemy_world4_7108(rdram, ctx);
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
    ovl_enemy_world4_7B60(rdram, ctx);
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
    ovl_enemy_world4_7B60(rdram, ctx);
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
    ovl_enemy_world4_7B60(rdram, ctx);
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
    ovl_enemy_world4_7B60(rdram, ctx);
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
    ovl_enemy_world4_7B60(rdram, ctx);
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
    ovl_enemy_world4_7B60(rdram, ctx);
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
    ovl_enemy_world4_7B60(rdram, ctx);
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
    ovl_enemy_world4_7010(rdram, ctx);
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
    ovl_enemy_world4_7010(rdram, ctx);
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
    ovl_enemy_world4_7010(rdram, ctx);
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
    ovl_enemy_world4_7108(rdram, ctx);
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
    ovl_enemy_world4_7108(rdram, ctx);
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
    ovl_enemy_world4_7108(rdram, ctx);
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
    ovl_enemy_world4_7B8C(rdram, ctx);
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
    ovl_enemy_world4_7108(rdram, ctx);
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
    ovl_enemy_world4_7B8C(rdram, ctx);
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
    ovl_enemy_world4_7108(rdram, ctx);
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
    // 0x43007F34: jal         0x430096A4
    // 0x43007F38: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world4_96A4(rdram, ctx);
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
RECOMP_FUNC void ovl_enemy_world4_7F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007F4C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x43007F50: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x43007F54: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x43007F58: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x43007F5C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x43007F60: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x43007F64: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43007F68: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x43007F6C: lw          $t6, 0x22C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X22C);
    // 0x43007F70: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x43007F74: blez        $t6, L_43007FD0
    if (SIGNED(ctx->r14) <= 0) {
        // 0x43007F78: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_43007FD0;
    }
    // 0x43007F78: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x43007F7C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43007F80: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x43007F84: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x43007F88: addiu       $s2, $sp, 0x38
    ctx->r18 = ADD32(ctx->r29, 0X38);
L_43007F8C:
    // 0x43007F8C: lw          $a0, 0x234($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X234);
    // 0x43007F90: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x43007F94: jal         0x430006C4
    // 0x43007F98: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_enemy_world4_6C4(rdram, ctx);
        goto after_0;
    // 0x43007F98: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_0:
    // 0x43007F9C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x43007FA0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x43007FA4: bne         $t7, $s3, L_43007FBC
    if (ctx->r15 != ctx->r19) {
        // 0x43007FA8: nop
    
            goto L_43007FBC;
    }
    // 0x43007FA8: nop

    // 0x43007FAC: bne         $t8, $s4, L_43007FBC
    if (ctx->r24 != ctx->r20) {
        // 0x43007FB0: nop
    
            goto L_43007FBC;
    }
    // 0x43007FB0: nop

    // 0x43007FB4: b           L_43007FD4
    // 0x43007FB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_43007FD4;
    // 0x43007FB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43007FBC:
    // 0x43007FBC: lw          $t9, 0x22C($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X22C);
    // 0x43007FC0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43007FC4: slt         $at, $s1, $t9
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x43007FC8: bne         $at, $zero, L_43007F8C
    if (ctx->r1 != 0) {
        // 0x43007FCC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_43007F8C;
    }
    // 0x43007FCC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_43007FD0:
    // 0x43007FD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_43007FD4:
    // 0x43007FD4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43007FD8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43007FDC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x43007FE0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x43007FE4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x43007FE8: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x43007FEC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x43007FF0: jr          $ra
    // 0x43007FF4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x43007FF4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_enemy_world4_7FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007FF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007FFC: sltiu       $at, $a1, 0xC
    ctx->r1 = ctx->r5 < 0XC ? 1 : 0;
    // 0x43008000: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008004: beq         $at, $zero, L_43008120
    if (ctx->r1 == 0) {
        // 0x43008008: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_43008120;
    }
    // 0x43008008: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x4300800C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x43008010: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008014: addu        $at, $at, $t6
    gpr jr_addend_43008020 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43008018: lw          $t6, -0x62E8($at)
    ctx->r14 = ADD32(ctx->r1, -0X62E8);
    // 0x4300801C: nop

    // 0x43008020: jr          $t6
    // 0x43008024: nop

    switch (jr_addend_43008020 >> 2) {
        case 0: goto L_43008120; break;
        case 1: goto L_43008028; break;
        case 2: goto L_4300804C; break;
        case 3: goto L_43008070; break;
        case 4: goto L_43008094; break;
        case 5: goto L_430080B8; break;
        case 6: goto L_430080DC; break;
        case 7: goto L_430080DC; break;
        case 8: goto L_430080DC; break;
        case 9: goto L_430080F8; break;
        case 10: goto L_43008120; break;
        case 11: goto L_43008100; break;
        default: switch_error(__func__, 0x43008020, 0x43009D18);
    }
    // 0x43008024: nop

L_43008028:
    // 0x43008028: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4300802C: jal         0x430068E8
    // 0x43008030: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_world4_68E8(rdram, ctx);
        goto after_0;
    // 0x43008030: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x43008034: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x43008038: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4300803C: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x43008040: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x43008040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008044: b           L_43008120
    // 0x43008048: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x43008048: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_4300804C:
    // 0x4300804C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43008050: jal         0x430068E8
    // 0x43008054: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_world4_68E8(rdram, ctx);
        goto after_1;
    // 0x43008054: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x43008058: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x4300805C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43008060: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x43008064: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x43008064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008068: b           L_43008120
    // 0x4300806C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x4300806C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43008070:
    // 0x43008070: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43008074: jal         0x430068E8
    // 0x43008078: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_world4_68E8(rdram, ctx);
        goto after_2;
    // 0x43008078: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x4300807C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x43008080: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43008084: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x43008088: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x43008088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300808C: b           L_43008120
    // 0x43008090: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x43008090: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43008094:
    // 0x43008094: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43008098: jal         0x430068E8
    // 0x4300809C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_world4_68E8(rdram, ctx);
        goto after_3;
    // 0x4300809C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_3:
    // 0x430080A0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x430080A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430080A8: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x430080AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x430080AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430080B0: b           L_43008120
    // 0x430080B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x430080B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_430080B8:
    // 0x430080B8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x430080BC: jal         0x430068E8
    // 0x430080C0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_world4_68E8(rdram, ctx);
        goto after_4;
    // 0x430080C0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_4:
    // 0x430080C4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x430080C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430080CC: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x430080D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x430080D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430080D4: b           L_43008120
    // 0x430080D8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x430080D8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_430080DC:
    // 0x430080DC: jal         0x43007F4C
    // 0x430080E0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_world4_7F4C(rdram, ctx);
        goto after_5;
    // 0x430080E0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_5:
    // 0x430080E4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x430080E8: beq         $v0, $zero, L_43008124
    if (ctx->r2 == 0) {
        // 0x430080EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x430080EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430080F0: b           L_43008120
    // 0x430080F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x430080F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_430080F8:
    // 0x430080F8: b           L_43008120
    // 0x430080FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x430080FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43008100:
    // 0x43008100: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43008104: jal         0x43006908
    // 0x43008108: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_world4_6908(rdram, ctx);
        goto after_6;
    // 0x43008108: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_6:
    // 0x4300810C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x43008110: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43008114: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x43008118: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x43008118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300811C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43008120:
    // 0x43008120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008124:
    // 0x43008124: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43008128: jr          $ra
    // 0x4300812C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4300812C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world4_8130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008138: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4300813C: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x43008140: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43008144: bne         $v0, $at, L_43008168
    if (ctx->r2 != ctx->r1) {
        // 0x43008148: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_43008168;
    }
    // 0x43008148: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x4300814C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x43008150: jal         0x43005078
    // 0x43008154: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    ovl_enemy_world4_5078(rdram, ctx);
        goto after_0;
    // 0x43008154: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x43008158: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x4300815C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x43008160: b           L_43008190
    // 0x43008164: sw          $a2, 0x1DC($t6)
    MEM_W(0X1DC, ctx->r14) = ctx->r6;
        goto L_43008190;
    // 0x43008164: sw          $a2, 0x1DC($t6)
    MEM_W(0X1DC, ctx->r14) = ctx->r6;
L_43008168:
    // 0x43008168: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4300816C: bne         $v0, $at, L_43008190
    if (ctx->r2 != ctx->r1) {
        // 0x43008170: addiu       $a1, $zero, 0x18
        ctx->r5 = ADD32(0, 0X18);
            goto L_43008190;
    }
    // 0x43008170: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x43008174: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43008178: jal         0x43005078
    // 0x4300817C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    ovl_enemy_world4_5078(rdram, ctx);
        goto after_1;
    // 0x4300817C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x43008180: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x43008184: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x43008188: nop

    // 0x4300818C: sw          $a2, 0x1DC($t7)
    MEM_W(0X1DC, ctx->r15) = ctx->r6;
L_43008190:
    // 0x43008190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008198: jr          $ra
    // 0x4300819C: nop

    return;
    // 0x4300819C: nop

;}
RECOMP_FUNC void ovl_enemy_world4_81A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430081A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430081A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430081A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430081AC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x430081B0: beq         $a1, $at, L_4300820C
    if (ctx->r5 == ctx->r1) {
        // 0x430081B4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_4300820C;
    }
    // 0x430081B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x430081B8: lw          $t6, 0x1D4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1D4);
    // 0x430081BC: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x430081C0: nop

    // 0x430081C4: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x430081C8: bne         $at, $zero, L_43008210
    if (ctx->r1 != 0) {
        // 0x430081CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008210;
    }
    // 0x430081CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430081D0: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x430081D4: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x430081D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x430081DC: jal         0x43007FF8
    // 0x430081E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    ovl_enemy_world4_7FF8(rdram, ctx);
        goto after_0;
    // 0x430081E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x430081E4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x430081E8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x430081EC: beq         $v0, $zero, L_43008210
    if (ctx->r2 == 0) {
        // 0x430081F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008210;
    }
    // 0x430081F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430081F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x430081F8: jal         0x43008130
    // 0x430081FC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    ovl_enemy_world4_8130(rdram, ctx);
        goto after_1;
    // 0x430081FC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_1:
    // 0x43008200: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x43008204: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x43008208: sw          $zero, 0x1D4($t8)
    MEM_W(0X1D4, ctx->r24) = 0;
L_4300820C:
    // 0x4300820C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008210:
    // 0x43008210: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43008214: jr          $ra
    // 0x43008218: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x43008218: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world4_821C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300821C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43008220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008224: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43008228: jal         0x430047A0
    // 0x4300822C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world4_47A0(rdram, ctx);
        goto after_0;
    // 0x4300822C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x43008230: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43008234: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43008238: jal         0x430047A0
    // 0x4300823C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_enemy_world4_47A0(rdram, ctx);
        goto after_1;
    // 0x4300823C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x43008240: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x43008244: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43008248: beq         $v1, $a1, L_43008268
    if (ctx->r3 == ctx->r5) {
        // 0x4300824C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_43008268;
    }
    // 0x4300824C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x43008250: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x43008254: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x43008258: bne         $t6, $at, L_43008268
    if (ctx->r14 != ctx->r1) {
        // 0x4300825C: nop
    
            goto L_43008268;
    }
    // 0x4300825C: nop

    // 0x43008260: b           L_43008284
    // 0x43008264: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
        goto L_43008284;
    // 0x43008264: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_43008268:
    // 0x43008268: beq         $v0, $a1, L_43008288
    if (ctx->r2 == ctx->r5) {
        // 0x4300826C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008288;
    }
    // 0x4300826C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008270: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x43008274: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x43008278: bne         $t7, $at, L_43008288
    if (ctx->r15 != ctx->r1) {
        // 0x4300827C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008288;
    }
    // 0x4300827C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008280: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_43008284:
    // 0x43008284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008288:
    // 0x43008288: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4300828C: jr          $ra
    // 0x43008290: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x43008290: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void ovl_enemy_world4_8294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008294: beq         $a1, $zero, L_430082B0
    if (ctx->r5 == 0) {
        // 0x43008298: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_430082B0;
    }
    // 0x43008298: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x4300829C: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x430082A0: nop

    // 0x430082A4: sll         $t7, $t6, 13
    ctx->r15 = S32(ctx->r14 << 13);
    // 0x430082A8: bltz        $t7, L_430082D4
    if (SIGNED(ctx->r15) < 0) {
        // 0x430082AC: nop
    
            goto L_430082D4;
    }
    // 0x430082AC: nop

L_430082B0:
    // 0x430082B0: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x430082B4: nop

    // 0x430082B8: andi        $t8, $v0, 0x8000
    ctx->r24 = ctx->r2 & 0X8000;
    // 0x430082BC: bne         $t8, $zero, L_430082D4
    if (ctx->r24 != 0) {
        // 0x430082C0: andi        $t9, $v0, 0x2000
        ctx->r25 = ctx->r2 & 0X2000;
            goto L_430082D4;
    }
    // 0x430082C0: andi        $t9, $v0, 0x2000
    ctx->r25 = ctx->r2 & 0X2000;
    // 0x430082C4: bne         $t9, $zero, L_430082D4
    if (ctx->r25 != 0) {
        // 0x430082C8: sll         $t0, $v0, 9
        ctx->r8 = S32(ctx->r2 << 9);
            goto L_430082D4;
    }
    // 0x430082C8: sll         $t0, $v0, 9
    ctx->r8 = S32(ctx->r2 << 9);
    // 0x430082CC: bgez        $t0, L_430082D8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x430082D0: nop
    
            goto L_430082D8;
    }
    // 0x430082D0: nop

L_430082D4:
    // 0x430082D4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_430082D8:
    // 0x430082D8: jr          $ra
    // 0x430082DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x430082DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world4_82E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430082E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430082E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430082E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430082EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430082F0: jal         0x43008294
    // 0x430082F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_8294(rdram, ctx);
        goto after_0;
    // 0x430082F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x430082F8: beq         $v0, $zero, L_4300833C
    if (ctx->r2 == 0) {
        // 0x430082FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300833C;
    }
    // 0x430082FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008300: lw          $t6, 0x1D4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1D4);
    // 0x43008304: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43008308: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x4300830C: jal         0x430047A0
    // 0x43008310: sw          $t7, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = ctx->r15;
    ovl_enemy_world4_47A0(rdram, ctx);
        goto after_1;
    // 0x43008310: sw          $t7, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = ctx->r15;
    after_1:
    // 0x43008314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008318: jal         0x430081A0
    // 0x4300831C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    ovl_enemy_world4_81A0(rdram, ctx);
        goto after_2;
    // 0x4300831C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x43008320: bne         $v0, $zero, L_4300833C
    if (ctx->r2 != 0) {
        // 0x43008324: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300833C;
    }
    // 0x43008324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008328: jal         0x430047A0
    // 0x4300832C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world4_47A0(rdram, ctx);
        goto after_3;
    // 0x4300832C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x43008330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008334: jal         0x430081A0
    // 0x43008338: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    ovl_enemy_world4_81A0(rdram, ctx);
        goto after_4;
    // 0x43008338: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_4:
L_4300833C:
    // 0x4300833C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43008340: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43008344: jr          $ra
    // 0x43008348: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43008348: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world4_834C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300834C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x43008350: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x43008354: beq         $v0, $at, L_4300837C
    if (ctx->r2 == ctx->r1) {
        // 0x43008358: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_4300837C;
    }
    // 0x43008358: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x4300835C: beq         $v0, $at, L_4300837C
    if (ctx->r2 == ctx->r1) {
        // 0x43008360: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_4300837C;
    }
    // 0x43008360: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x43008364: beq         $v0, $at, L_4300837C
    if (ctx->r2 == ctx->r1) {
        // 0x43008368: addiu       $at, $zero, 0x33
        ctx->r1 = ADD32(0, 0X33);
            goto L_4300837C;
    }
    // 0x43008368: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x4300836C: beq         $v0, $at, L_4300837C
    if (ctx->r2 == ctx->r1) {
        // 0x43008370: addiu       $at, $zero, 0x35
        ctx->r1 = ADD32(0, 0X35);
            goto L_4300837C;
    }
    // 0x43008370: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
    // 0x43008374: bne         $v0, $at, L_43008388
    if (ctx->r2 != ctx->r1) {
        // 0x43008378: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_43008388;
    }
    // 0x43008378: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4300837C:
    // 0x4300837C: jr          $ra
    // 0x43008380: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x43008380: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43008384: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43008388:
    // 0x43008388: jr          $ra
    // 0x4300838C: nop

    return;
    // 0x4300838C: nop

;}
RECOMP_FUNC void ovl_enemy_world4_8390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008390: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x43008394: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43008398: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300839C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430083A0: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x430083A4: jal         0x43004880
    // 0x430083A8: nop

    ovl_enemy_world4_4880(rdram, ctx);
        goto after_0;
    // 0x430083A8: nop

    after_0:
    // 0x430083AC: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x430083B0: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x430083B4: bne         $v1, $at, L_4300840C
    if (ctx->r3 != ctx->r1) {
        // 0x430083B8: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_4300840C;
    }
    // 0x430083B8: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x430083BC: lw          $t6, 0x64($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X64);
    // 0x430083C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430083C4: beq         $t6, $at, L_430083E4
    if (ctx->r14 == ctx->r1) {
        // 0x430083C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430083E4;
    }
    // 0x430083C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430083CC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x430083D0: lw          $a1, 0x64($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X64);
    // 0x430083D4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x430083D8: jal         0x43004FFC
    // 0x430083DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_4FFC(rdram, ctx);
        goto after_1;
    // 0x430083DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x430083E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_430083E4:
    // 0x430083E4: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x430083E8: jal         0x430096A4
    // 0x430083EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_enemy_world4_96A4(rdram, ctx);
        goto after_2;
    // 0x430083EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x430083F0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x430083F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x430083F8: jal         0x430006C4
    // 0x430083FC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_enemy_world4_6C4(rdram, ctx);
        goto after_3;
    // 0x430083FC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_3:
    // 0x43008400: b           L_4300855C
    // 0x43008404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_4300855C;
    // 0x43008404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43008408: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
L_4300840C:
    // 0x4300840C: bne         $v1, $at, L_43008514
    if (ctx->r3 != ctx->r1) {
        // 0x43008410: addiu       $at, $zero, 0x2A
        ctx->r1 = ADD32(0, 0X2A);
            goto L_43008514;
    }
    // 0x43008410: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x43008414: lw          $t7, 0x54($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X54);
    // 0x43008418: nop

    // 0x4300841C: sll         $t8, $t7, 14
    ctx->r24 = S32(ctx->r15 << 14);
    // 0x43008420: bltz        $t8, L_430084FC
    if (SIGNED(ctx->r24) < 0) {
        // 0x43008424: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430084FC;
    }
    // 0x43008424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008428: jal         0x4300834C
    // 0x4300842C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_834C(rdram, ctx);
        goto after_4;
    // 0x4300842C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x43008430: beq         $v0, $zero, L_430084F8
    if (ctx->r2 == 0) {
        // 0x43008434: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_430084F8;
    }
    // 0x43008434: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43008438: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x4300843C: lw          $t1, 0x1E4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1E4);
    // 0x43008440: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x43008444: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x43008448: addiu       $t2, $t1, -0x6
    ctx->r10 = ADD32(ctx->r9, -0X6);
    // 0x4300844C: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x43008450: beq         $at, $zero, L_430084A0
    if (ctx->r1 == 0) {
        // 0x43008454: sw          $t0, 0x54($s0)
        MEM_W(0X54, ctx->r16) = ctx->r8;
            goto L_430084A0;
    }
    // 0x43008454: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
    // 0x43008458: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x4300845C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008460: addu        $at, $at, $t2
    gpr jr_addend_4300846C = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x43008464: lw          $t2, -0x62B8($at)
    ctx->r10 = ADD32(ctx->r1, -0X62B8);
    // 0x43008468: nop

    // 0x4300846C: jr          $t2
    // 0x43008470: nop

    switch (jr_addend_4300846C >> 2) {
        case 0: goto L_43008474; break;
        case 1: goto L_4300847C; break;
        case 2: goto L_43008484; break;
        case 3: goto L_4300848C; break;
        case 4: goto L_43008494; break;
        case 5: goto L_4300849C; break;
        default: switch_error(__func__, 0x4300846C, 0x43009D48);
    }
    // 0x43008470: nop

L_43008474:
    // 0x43008474: b           L_430084A0
    // 0x43008478: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
        goto L_430084A0;
    // 0x43008478: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
L_4300847C:
    // 0x4300847C: b           L_430084A0
    // 0x43008480: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
        goto L_430084A0;
    // 0x43008480: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
L_43008484:
    // 0x43008484: b           L_430084A0
    // 0x43008488: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
        goto L_430084A0;
    // 0x43008488: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
L_4300848C:
    // 0x4300848C: b           L_430084A0
    // 0x43008490: addiu       $a1, $zero, 0x9D
    ctx->r5 = ADD32(0, 0X9D);
        goto L_430084A0;
    // 0x43008490: addiu       $a1, $zero, 0x9D
    ctx->r5 = ADD32(0, 0X9D);
L_43008494:
    // 0x43008494: b           L_430084A0
    // 0x43008498: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
        goto L_430084A0;
    // 0x43008498: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
L_4300849C:
    // 0x4300849C: addiu       $a1, $zero, 0x88
    ctx->r5 = ADD32(0, 0X88);
L_430084A0:
    // 0x430084A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430084A4: beq         $a1, $at, L_430084F8
    if (ctx->r5 == ctx->r1) {
        // 0x430084A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430084F8;
    }
    // 0x430084A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430084AC: lw          $v0, 0x54($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X54);
    // 0x430084B0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x430084B4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x430084B8: sll         $t3, $v0, 11
    ctx->r11 = S32(ctx->r2 << 11);
    // 0x430084BC: bgez        $t3, L_430084D4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x430084C0: sll         $t4, $v0, 10
        ctx->r12 = S32(ctx->r2 << 10);
            goto L_430084D4;
    }
    // 0x430084C0: sll         $t4, $v0, 10
    ctx->r12 = S32(ctx->r2 << 10);
    // 0x430084C4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x430084C8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x430084CC: b           L_430084E4
    // 0x430084D0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
        goto L_430084E4;
    // 0x430084D0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_430084D4:
    // 0x430084D4: bgez        $t4, L_430084E4
    if (SIGNED(ctx->r12) >= 0) {
        // 0x430084D8: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_430084E4;
    }
    // 0x430084D8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x430084DC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x430084E0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_430084E4:
    // 0x430084E4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x430084E8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x430084EC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x430084F0: jal         0x43001F48
    // 0x430084F4: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    ovl_enemy_world4_1F48(rdram, ctx);
        goto after_5;
    // 0x430084F4: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_5:
L_430084F8:
    // 0x430084F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_430084FC:
    // 0x430084FC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x43008500: jal         0x430096A4
    // 0x43008504: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world4_96A4(rdram, ctx);
        goto after_6;
    // 0x43008504: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_6:
    // 0x43008508: b           L_4300855C
    // 0x4300850C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_4300855C;
    // 0x4300850C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43008510: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
L_43008514:
    // 0x43008514: beq         $v1, $at, L_4300853C
    if (ctx->r3 == ctx->r1) {
        // 0x43008518: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300853C;
    }
    // 0x43008518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300851C: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x43008520: beq         $v1, $at, L_4300853C
    if (ctx->r3 == ctx->r1) {
        // 0x43008524: addiu       $at, $zero, 0x2C
        ctx->r1 = ADD32(0, 0X2C);
            goto L_4300853C;
    }
    // 0x43008524: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x43008528: beq         $v1, $at, L_4300853C
    if (ctx->r3 == ctx->r1) {
        // 0x4300852C: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_4300853C;
    }
    // 0x4300852C: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x43008530: beq         $v1, $at, L_4300853C
    if (ctx->r3 == ctx->r1) {
        // 0x43008534: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_4300853C;
    }
    // 0x43008534: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x43008538: bne         $v1, $at, L_43008550
    if (ctx->r3 != ctx->r1) {
        // 0x4300853C: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_43008550;
    }
L_4300853C:
    // 0x4300853C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43008540: jal         0x430096A4
    // 0x43008544: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world4_96A4(rdram, ctx);
        goto after_7;
    // 0x43008544: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_7:
    // 0x43008548: b           L_4300855C
    // 0x4300854C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_4300855C;
    // 0x4300854C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43008550:
    // 0x43008550: b           L_4300855C
    // 0x43008554: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_4300855C;
    // 0x43008554: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43008558: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4300855C:
    // 0x4300855C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43008560: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43008564: jr          $ra
    // 0x43008568: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x43008568: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_enemy_world4_856C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300856C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43008570: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008574: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43008578: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4300857C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43008580: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x43008584: jal         0x430006C4
    // 0x43008588: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    ovl_enemy_world4_6C4(rdram, ctx);
        goto after_0;
    // 0x43008588: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_0:
    // 0x4300858C: bne         $v0, $zero, L_430085F0
    if (ctx->r2 != 0) {
        // 0x43008590: lui         $at, 0x4301
        ctx->r1 = S32(0X4301 << 16);
            goto L_430085F0;
    }
    // 0x43008590: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008594: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43008598: lwc1        $f4, -0x62A0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X62A0);
    // 0x4300859C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x430085A0: sub.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x430085A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430085A8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x430085AC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x430085B0: bc1f        L_430085C4
    if (!c1cs) {
        // 0x430085B4: addiu       $a1, $zero, 0x25
        ctx->r5 = ADD32(0, 0X25);
            goto L_430085C4;
    }
    // 0x430085B4: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x430085B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430085BC: jal         0x43005078
    // 0x430085C0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    ovl_enemy_world4_5078(rdram, ctx);
        goto after_1;
    // 0x430085C0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_1:
L_430085C4:
    // 0x430085C4: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x430085C8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x430085CC: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x430085D0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x430085D4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x430085D8: jal         0x430006C4
    // 0x430085DC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_enemy_world4_6C4(rdram, ctx);
        goto after_2;
    // 0x430085DC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x430085E0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x430085E4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x430085E8: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x430085EC: swc1        $f16, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f16.u32l;
L_430085F0:
    // 0x430085F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430085F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430085F8: jr          $ra
    // 0x430085FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x430085FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_enemy_world4_8600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008600: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43008604: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008608: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300860C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43008610: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x43008614: jal         0x43004880
    // 0x43008618: nop

    ovl_enemy_world4_4880(rdram, ctx);
        goto after_0;
    // 0x43008618: nop

    after_0:
    // 0x4300861C: lhu         $t6, 0x262($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X262);
    // 0x43008620: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x43008624: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x43008628: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x4300862C: bgez        $t8, L_43008644
    if (SIGNED(ctx->r24) >= 0) {
        // 0x43008630: sh          $t7, 0x262($s0)
        MEM_H(0X262, ctx->r16) = ctx->r15;
            goto L_43008644;
    }
    // 0x43008630: sh          $t7, 0x262($s0)
    MEM_H(0X262, ctx->r16) = ctx->r15;
    // 0x43008634: jal         0x4300856C
    // 0x43008638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_856C(rdram, ctx);
        goto after_1;
    // 0x43008638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4300863C: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x43008640: nop

L_43008644:
    // 0x43008644: andi        $t9, $v1, 0x8000
    ctx->r25 = ctx->r3 & 0X8000;
    // 0x43008648: beq         $t9, $zero, L_43008664
    if (ctx->r25 == 0) {
        // 0x4300864C: andi        $t0, $v1, 0x4
        ctx->r8 = ctx->r3 & 0X4;
            goto L_43008664;
    }
    // 0x4300864C: andi        $t0, $v1, 0x4
    ctx->r8 = ctx->r3 & 0X4;
    // 0x43008650: jal         0x43004B88
    // 0x43008654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_4B88(rdram, ctx);
        goto after_2;
    // 0x43008654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x43008658: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x4300865C: nop

    // 0x43008660: andi        $t0, $v1, 0x4
    ctx->r8 = ctx->r3 & 0X4;
L_43008664:
    // 0x43008664: beq         $t0, $zero, L_43008690
    if (ctx->r8 == 0) {
        // 0x43008668: andi        $t3, $v1, 0x8
        ctx->r11 = ctx->r3 & 0X8;
            goto L_43008690;
    }
    // 0x43008668: andi        $t3, $v1, 0x8
    ctx->r11 = ctx->r3 & 0X8;
    // 0x4300866C: jal         0x43008390
    // 0x43008670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_8390(rdram, ctx);
        goto after_3;
    // 0x43008670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43008674: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
    // 0x43008678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300867C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x43008680: jal         0x43005064
    // 0x43008684: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    ovl_enemy_world4_5064(rdram, ctx);
        goto after_4;
    // 0x43008684: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    after_4:
    // 0x43008688: b           L_430087F8
    // 0x4300868C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430087F8;
    // 0x4300868C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008690:
    // 0x43008690: beq         $t3, $zero, L_430086AC
    if (ctx->r11 == 0) {
        // 0x43008694: andi        $t4, $v1, 0x4000
        ctx->r12 = ctx->r3 & 0X4000;
            goto L_430086AC;
    }
    // 0x43008694: andi        $t4, $v1, 0x4000
    ctx->r12 = ctx->r3 & 0X4000;
    // 0x43008698: jal         0x430035F8
    // 0x4300869C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_35F8(rdram, ctx);
        goto after_5;
    // 0x4300869C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x430086A0: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x430086A4: nop

    // 0x430086A8: andi        $t4, $v1, 0x4000
    ctx->r12 = ctx->r3 & 0X4000;
L_430086AC:
    // 0x430086AC: beq         $t4, $zero, L_430086BC
    if (ctx->r12 == 0) {
        // 0x430086B0: nop
    
            goto L_430086BC;
    }
    // 0x430086B0: nop

    // 0x430086B4: jal         0x43004B08
    // 0x430086B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_4B08(rdram, ctx);
        goto after_6;
    // 0x430086B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_430086BC:
    // 0x430086BC: jal         0x430082E0
    // 0x430086C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_82E0(rdram, ctx);
        goto after_7;
    // 0x430086C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x430086C4: jal         0x43008390
    // 0x430086C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_8390(rdram, ctx);
        goto after_8;
    // 0x430086C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x430086CC: bne         $v0, $zero, L_430087F8
    if (ctx->r2 != 0) {
        // 0x430086D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430087F8;
    }
    // 0x430086D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430086D4: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x430086D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430086DC: beq         $v0, $zero, L_43008708
    if (ctx->r2 == 0) {
        // 0x430086E0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_43008708;
    }
    // 0x430086E0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x430086E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430086E8: beq         $v0, $at, L_43008718
    if (ctx->r2 == ctx->r1) {
        // 0x430086EC: addiu       $a0, $zero, 0x17
        ctx->r4 = ADD32(0, 0X17);
            goto L_43008718;
    }
    // 0x430086EC: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x430086F0: beq         $v0, $a0, L_430087CC
    if (ctx->r2 == ctx->r4) {
        // 0x430086F4: addiu       $at, $zero, 0x18
        ctx->r1 = ADD32(0, 0X18);
            goto L_430087CC;
    }
    // 0x430086F4: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x430086F8: beq         $v1, $at, L_430087CC
    if (ctx->r3 == ctx->r1) {
        // 0x430086FC: nop
    
            goto L_430087CC;
    }
    // 0x430086FC: nop

    // 0x43008700: b           L_430087F8
    // 0x43008704: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430087F8;
    // 0x43008704: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008708:
    // 0x43008708: jal         0x43005078
    // 0x4300870C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_5078(rdram, ctx);
        goto after_9;
    // 0x4300870C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x43008710: b           L_430087F8
    // 0x43008714: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430087F8;
    // 0x43008714: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008718:
    // 0x43008718: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x4300871C: nop

    // 0x43008720: andi        $t5, $v1, 0x1000
    ctx->r13 = ctx->r3 & 0X1000;
    // 0x43008724: bne         $t5, $zero, L_430087F4
    if (ctx->r13 != 0) {
        // 0x43008728: andi        $t6, $v1, 0x8
        ctx->r14 = ctx->r3 & 0X8;
            goto L_430087F4;
    }
    // 0x43008728: andi        $t6, $v1, 0x8
    ctx->r14 = ctx->r3 & 0X8;
    // 0x4300872C: bne         $t6, $zero, L_430087F8
    if (ctx->r14 != 0) {
        // 0x43008730: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430087F8;
    }
    // 0x43008730: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43008734: jal         0x43007C80
    // 0x43008738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_7C80(rdram, ctx);
        goto after_10;
    // 0x43008738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x4300873C: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x43008740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008744: jal         0x430048A4
    // 0x43008748: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    ovl_enemy_world4_48A4(rdram, ctx);
        goto after_11;
    // 0x43008748: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_11:
    // 0x4300874C: bne         $v0, $zero, L_430087F4
    if (ctx->r2 != 0) {
        // 0x43008750: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_430087F4;
    }
    // 0x43008750: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x43008754: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x43008758: nop

    // 0x4300875C: sra         $t7, $v0, 5
    ctx->r15 = S32(SIGNED(ctx->r2) >> 5);
    // 0x43008760: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x43008764: slti        $at, $t8, 0x8
    ctx->r1 = SIGNED(ctx->r24) < 0X8 ? 1 : 0;
    // 0x43008768: bne         $at, $zero, L_43008778
    if (ctx->r1 != 0) {
        // 0x4300876C: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_43008778;
    }
    // 0x4300876C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x43008770: b           L_4300878C
    // 0x43008774: addiu       $v1, $t8, -0x8
    ctx->r3 = ADD32(ctx->r24, -0X8);
        goto L_4300878C;
    // 0x43008774: addiu       $v1, $t8, -0x8
    ctx->r3 = ADD32(ctx->r24, -0X8);
L_43008778:
    // 0x43008778: bgez        $v0, L_43008788
    if (SIGNED(ctx->r2) >= 0) {
        // 0x4300877C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_43008788;
    }
    // 0x4300877C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43008780: b           L_43008788
    // 0x43008784: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
        goto L_43008788;
    // 0x43008784: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
L_43008788:
    // 0x43008788: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_4300878C:
    // 0x4300878C: lw          $t3, 0x54($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X54);
    // 0x43008790: sllv        $t0, $t9, $v1
    ctx->r8 = S32(ctx->r25 << (ctx->r3 & 31));
    // 0x43008794: nor         $t1, $t0, $zero
    ctx->r9 = ~(ctx->r8 | 0);
    // 0x43008798: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x4300879C: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x430087A0: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x430087A4: sw          $t2, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r10;
    // 0x430087A8: sw          $t4, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r12;
    // 0x430087AC: jal         0x430077E4
    // 0x430087B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_77E4(rdram, ctx);
        goto after_12;
    // 0x430087B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x430087B4: lw          $t5, 0x54($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X54);
    // 0x430087B8: lui         $at, 0xFFF7
    ctx->r1 = S32(0XFFF7 << 16);
    // 0x430087BC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x430087C0: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x430087C4: b           L_430087F4
    // 0x430087C8: sw          $t6, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r14;
        goto L_430087F4;
    // 0x430087C8: sw          $t6, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r14;
L_430087CC:
    // 0x430087CC: bne         $a0, $v0, L_430087E0
    if (ctx->r4 != ctx->r2) {
        // 0x430087D0: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_430087E0;
    }
    // 0x430087D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x430087D4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x430087D8: b           L_430087E8
    // 0x430087DC: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
        goto L_430087E8;
    // 0x430087DC: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
L_430087E0:
    // 0x430087E0: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x430087E4: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_430087E8:
    // 0x430087E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430087EC: jal         0x430096A4
    // 0x430087F0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_enemy_world4_96A4(rdram, ctx);
        goto after_13;
    // 0x430087F0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_13:
L_430087F4:
    // 0x430087F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430087F8:
    // 0x430087F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430087FC: jr          $ra
    // 0x43008800: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x43008800: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_enemy_world4_8804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008804: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43008808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300880C: lw          $t6, 0x180($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X180);
    // 0x43008810: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x43008814: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x43008818: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x4300881C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x43008820: lwc1        $f4, 0x220($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X220);
    // 0x43008824: addiu       $t8, $t7, 0x14
    ctx->r24 = ADD32(ctx->r15, 0X14);
    // 0x43008828: addiu       $t9, $t9, -0x6050
    ctx->r25 = ADD32(ctx->r25, -0X6050);
    // 0x4300882C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x43008830: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x43008834: lwc1        $f8, 0x220($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X220);
    // 0x43008838: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x4300883C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43008840: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x43008844: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x43008848: bc1t        L_430088A0
    if (c1cs) {
        // 0x4300884C: lui         $at, 0x4301
        ctx->r1 = S32(0X4301 << 16);
            goto L_430088A0;
    }
    // 0x4300884C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008850: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43008854: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x43008858: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x4300885C: jal         0x430006C4
    // 0x43008860: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    ovl_enemy_world4_6C4(rdram, ctx);
        goto after_0;
    // 0x43008860: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x43008864: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43008868: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x4300886C: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x43008870: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x43008874: lwc1        $f16, 0x228($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X228);
    // 0x43008878: addiu       $t0, $v0, 0x4
    ctx->r8 = ADD32(ctx->r2, 0X4);
    // 0x4300887C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x43008880: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x43008884: lwc1        $f18, 0x224($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X224);
    // 0x43008888: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x4300888C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43008890: jal         0x43005218
    // 0x43008894: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    ovl_enemy_world4_5218(rdram, ctx);
        goto after_1;
    // 0x43008894: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    after_1:
    // 0x43008898: b           L_430088B0
    // 0x4300889C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_430088B0;
    // 0x4300889C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430088A0:
    // 0x430088A0: lwc1        $f4, -0x629C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X629C);
    // 0x430088A4: nop

    // 0x430088A8: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x430088AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430088B0:
    // 0x430088B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x430088B4: jr          $ra
    // 0x430088B8: nop

    return;
    // 0x430088B8: nop

;}
RECOMP_FUNC void ovl_enemy_world4_88BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430088BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430088C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430088C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430088C8: lw          $t6, 0x180($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X180);
    // 0x430088CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x430088D0: beq         $v0, $t6, L_43008974
    if (ctx->r2 == ctx->r14) {
        // 0x430088D4: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_43008974;
    }
    // 0x430088D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430088D8: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x430088DC: nop

    // 0x430088E0: beq         $v0, $t7, L_43008978
    if (ctx->r2 == ctx->r15) {
        // 0x430088E4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43008978;
    }
    // 0x430088E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430088E8: jal         0x43008804
    // 0x430088EC: nop

    ovl_enemy_world4_8804(rdram, ctx);
        goto after_0;
    // 0x430088EC: nop

    after_0:
    // 0x430088F0: jal         0x43003A60
    // 0x430088F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_3A60(rdram, ctx);
        goto after_1;
    // 0x430088F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x430088F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430088FC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x43008900: jal         0x430096A4
    // 0x43008904: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world4_96A4(rdram, ctx);
        goto after_2;
    // 0x43008904: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_2:
    // 0x43008908: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x4300890C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43008910: beq         $v0, $at, L_4300892C
    if (ctx->r2 == ctx->r1) {
        // 0x43008914: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_4300892C;
    }
    // 0x43008914: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43008918: jal         0x43003880
    // 0x4300891C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_3880(rdram, ctx);
        goto after_3;
    // 0x4300891C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43008920: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x43008924: nop

    // 0x43008928: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_4300892C:
    // 0x4300892C: beq         $v0, $at, L_43008948
    if (ctx->r2 == ctx->r1) {
        // 0x43008930: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_43008948;
    }
    // 0x43008930: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43008934: jal         0x43008600
    // 0x43008938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_8600(rdram, ctx);
        goto after_4;
    // 0x43008938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4300893C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x43008940: nop

    // 0x43008944: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43008948:
    // 0x43008948: beq         $v0, $at, L_43008958
    if (ctx->r2 == ctx->r1) {
        // 0x4300894C: nop
    
            goto L_43008958;
    }
    // 0x4300894C: nop

    // 0x43008950: jal         0x43002E4C
    // 0x43008954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_2E4C(rdram, ctx);
        goto after_5;
    // 0x43008954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_43008958:
    // 0x43008958: lw          $t8, 0x54($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X54);
    // 0x4300895C: nop

    // 0x43008960: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x43008964: beq         $t9, $zero, L_43008978
    if (ctx->r25 == 0) {
        // 0x43008968: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43008978;
    }
    // 0x43008968: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300896C: jal         0x43002D7C
    // 0x43008970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_2D7C(rdram, ctx);
        goto after_6;
    // 0x43008970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_43008974:
    // 0x43008974: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008978:
    // 0x43008978: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4300897C: jr          $ra
    // 0x43008980: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43008980: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world4_8984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008984: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43008988: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x4300898C: lw          $v1, -0x605C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X605C);
    // 0x43008990: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43008994: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x43008998: beq         $at, $zero, L_430089DC
    if (ctx->r1 == 0) {
        // 0x4300899C: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_430089DC;
    }
    // 0x4300899C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_430089A0:
    // 0x430089A0: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x430089A4: nop

    // 0x430089A8: beq         $a1, $t6, L_430089C8
    if (ctx->r5 == ctx->r14) {
        // 0x430089AC: nop
    
            goto L_430089C8;
    }
    // 0x430089AC: nop

    // 0x430089B0: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x430089B4: nop

    // 0x430089B8: beq         $a1, $t7, L_430089C8
    if (ctx->r5 == ctx->r15) {
        // 0x430089BC: nop
    
            goto L_430089C8;
    }
    // 0x430089BC: nop

    // 0x430089C0: jr          $ra
    // 0x430089C4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x430089C4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_430089C8:
    // 0x430089C8: addiu       $v0, $v0, 0x268
    ctx->r2 = ADD32(ctx->r2, 0X268);
    // 0x430089CC: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x430089D0: bne         $at, $zero, L_430089A0
    if (ctx->r1 != 0) {
        // 0x430089D4: nop
    
            goto L_430089A0;
    }
    // 0x430089D4: nop

    // 0x430089D8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_430089DC:
    // 0x430089DC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x430089E0: jr          $ra
    // 0x430089E4: nop

    return;
    // 0x430089E4: nop

;}
RECOMP_FUNC void ovl_enemy_world4_89E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430089E8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x430089EC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x430089F0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x430089F4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x430089F8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x430089FC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43008A00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008A04: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x43008A08: jal         0x43005250
    // 0x43008A0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world4_5250(rdram, ctx);
        goto after_0;
    // 0x43008A0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x43008A10: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x43008A14: lw          $s4, -0x6070($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X6070);
    // 0x43008A18: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x43008A1C: blez        $s4, L_43008AE0
    if (SIGNED(ctx->r20) <= 0) {
        // 0x43008A20: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_43008AE0;
    }
    // 0x43008A20: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43008A24: addiu       $s3, $sp, 0x38
    ctx->r19 = ADD32(ctx->r29, 0X38);
    // 0x43008A28: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x43008A2C: addiu       $s1, $sp, 0x40
    ctx->r17 = ADD32(ctx->r29, 0X40);
L_43008A30:
    // 0x43008A30: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x43008A34: jal         0x43008984
    // 0x43008A38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_enemy_world4_8984(rdram, ctx);
        goto after_1;
    // 0x43008A38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x43008A3C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x43008A40: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x43008A44: beq         $t6, $s2, L_43008AE0
    if (ctx->r14 == ctx->r18) {
        // 0x43008A48: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_43008AE0;
    }
    // 0x43008A48: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x43008A4C: jal         0x43005218
    // 0x43008A50: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_enemy_world4_5218(rdram, ctx);
        goto after_2;
    // 0x43008A50: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_2:
    // 0x43008A54: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x43008A58: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x43008A5C: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x43008A60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43008A64: andi        $t8, $v0, 0x4
    ctx->r24 = ctx->r2 & 0X4;
    // 0x43008A68: beq         $t8, $zero, L_43008A80
    if (ctx->r24 == 0) {
        // 0x43008A6C: andi        $t9, $v0, 0x1
        ctx->r25 = ctx->r2 & 0X1;
            goto L_43008A80;
    }
    // 0x43008A6C: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x43008A70: jal         0x43005218
    // 0x43008A74: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    ovl_enemy_world4_5218(rdram, ctx);
        goto after_3;
    // 0x43008A74: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_3:
    // 0x43008A78: b           L_43008AD8
    // 0x43008A7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_43008AD8;
    // 0x43008A7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_43008A80:
    // 0x43008A80: beq         $t9, $zero, L_43008AC8
    if (ctx->r25 == 0) {
        // 0x43008A84: lw          $t6, 0x40($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X40);
            goto L_43008AC8;
    }
    // 0x43008A84: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x43008A88: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x43008A8C: nop

    // 0x43008A90: lw          $t1, 0x60($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X60);
    // 0x43008A94: nop

    // 0x43008A98: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x43008A9C: sw          $t2, 0x60($t0)
    MEM_W(0X60, ctx->r8) = ctx->r10;
    // 0x43008AA0: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x43008AA4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x43008AA8: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x43008AAC: nop

    // 0x43008AB0: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x43008AB4: bne         $t5, $zero, L_43008AC8
    if (ctx->r13 != 0) {
        // 0x43008AB8: lw          $t6, 0x40($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X40);
            goto L_43008AC8;
    }
    // 0x43008AB8: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x43008ABC: jal         0x430088BC
    // 0x43008AC0: nop

    ovl_enemy_world4_88BC(rdram, ctx);
        goto after_4;
    // 0x43008AC0: nop

    after_4:
    // 0x43008AC4: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
L_43008AC8:
    // 0x43008AC8: nop

    // 0x43008ACC: addiu       $t7, $t6, 0x268
    ctx->r15 = ADD32(ctx->r14, 0X268);
    // 0x43008AD0: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x43008AD4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_43008AD8:
    // 0x43008AD8: bne         $s0, $s4, L_43008A30
    if (ctx->r16 != ctx->r20) {
        // 0x43008ADC: nop
    
            goto L_43008A30;
    }
    // 0x43008ADC: nop

L_43008AE0:
    // 0x43008AE0: bne         $s4, $zero, L_43008AF4
    if (ctx->r20 != 0) {
        // 0x43008AE4: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_43008AF4;
    }
    // 0x43008AE4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43008AE8: jal         0x43002C70
    // 0x43008AEC: nop

    ovl_enemy_world4_2C70(rdram, ctx);
        goto after_5;
    // 0x43008AEC: nop

    after_5:
    // 0x43008AF0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_43008AF4:
    // 0x43008AF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43008AF8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43008AFC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43008B00: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x43008B04: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x43008B08: jr          $ra
    // 0x43008B0C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x43008B0C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_enemy_world4_8B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008B10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008B14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_43008B18:
    // 0x43008B18: jal         0x430089E8
    // 0x43008B1C: nop

    ovl_enemy_world4_89E8(rdram, ctx);
        goto after_0;
    // 0x43008B1C: nop

    after_0:
    // 0x43008B20: jal         0x4300085C
    // 0x43008B24: nop

    ovl_enemy_world4_85C(rdram, ctx);
        goto after_1;
    // 0x43008B24: nop

    after_1:
    // 0x43008B28: b           L_43008B18
    // 0x43008B2C: nop

        goto L_43008B18;
    // 0x43008B2C: nop

    // 0x43008B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008B34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008B38: jr          $ra
    // 0x43008B3C: nop

    return;
    // 0x43008B3C: nop

;}
RECOMP_FUNC void ovl_enemy_world4_8B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008B40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008B44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008B48: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x43008B4C: nop

    // 0x43008B50: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x43008B54: sltiu       $at, $t7, 0x18
    ctx->r1 = ctx->r15 < 0X18 ? 1 : 0;
    // 0x43008B58: beq         $at, $zero, L_43008C50
    if (ctx->r1 == 0) {
        // 0x43008B5C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_43008C50;
    }
    // 0x43008B5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x43008B60: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008B64: addu        $at, $at, $t7
    gpr jr_addend_43008B70 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x43008B68: lw          $t7, -0x6298($at)
    ctx->r15 = ADD32(ctx->r1, -0X6298);
    // 0x43008B6C: nop

    // 0x43008B70: jr          $t7
    // 0x43008B74: nop

    switch (jr_addend_43008B70 >> 2) {
        case 0: goto L_43008B78; break;
        case 1: goto L_43008C50; break;
        case 2: goto L_43008C50; break;
        case 3: goto L_43008BC8; break;
        case 4: goto L_43008C50; break;
        case 5: goto L_43008B98; break;
        case 6: goto L_43008B88; break;
        case 7: goto L_43008BA8; break;
        case 8: goto L_43008C50; break;
        case 9: goto L_43008C50; break;
        case 10: goto L_43008BD8; break;
        case 11: goto L_43008C48; break;
        case 12: goto L_43008C50; break;
        case 13: goto L_43008C50; break;
        case 14: goto L_43008C50; break;
        case 15: goto L_43008C50; break;
        case 16: goto L_43008C18; break;
        case 17: goto L_43008C08; break;
        case 18: goto L_43008C50; break;
        case 19: goto L_43008C38; break;
        case 20: goto L_43008BB8; break;
        case 21: goto L_43008C28; break;
        case 22: goto L_43008BF8; break;
        case 23: goto L_43008BE8; break;
        default: switch_error(__func__, 0x43008B70, 0x43009D68);
    }
    // 0x43008B74: nop

L_43008B78:
    // 0x43008B78: jal         0x4300528C
    // 0x43008B7C: nop

    ovl_enemy_world4_528C(rdram, ctx);
        goto after_0;
    // 0x43008B7C: nop

    after_0:
    // 0x43008B80: b           L_43008C54
    // 0x43008B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008B88:
    // 0x43008B88: jal         0x43005348
    // 0x43008B8C: nop

    ovl_enemy_world4_5348(rdram, ctx);
        goto after_1;
    // 0x43008B8C: nop

    after_1:
    // 0x43008B90: b           L_43008C54
    // 0x43008B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008B98:
    // 0x43008B98: jal         0x430053BC
    // 0x43008B9C: nop

    ovl_enemy_world4_53BC(rdram, ctx);
        goto after_2;
    // 0x43008B9C: nop

    after_2:
    // 0x43008BA0: b           L_43008C54
    // 0x43008BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BA8:
    // 0x43008BA8: jal         0x43005400
    // 0x43008BAC: nop

    ovl_enemy_world4_5400(rdram, ctx);
        goto after_3;
    // 0x43008BAC: nop

    after_3:
    // 0x43008BB0: b           L_43008C54
    // 0x43008BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BB8:
    // 0x43008BB8: jal         0x43005424
    // 0x43008BBC: nop

    ovl_enemy_world4_5424(rdram, ctx);
        goto after_4;
    // 0x43008BBC: nop

    after_4:
    // 0x43008BC0: b           L_43008C54
    // 0x43008BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BC8:
    // 0x43008BC8: jal         0x4300547C
    // 0x43008BCC: nop

    ovl_enemy_world4_547C(rdram, ctx);
        goto after_5;
    // 0x43008BCC: nop

    after_5:
    // 0x43008BD0: b           L_43008C54
    // 0x43008BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BD8:
    // 0x43008BD8: jal         0x43005924
    // 0x43008BDC: nop

    ovl_enemy_world4_5924(rdram, ctx);
        goto after_6;
    // 0x43008BDC: nop

    after_6:
    // 0x43008BE0: b           L_43008C54
    // 0x43008BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BE8:
    // 0x43008BE8: jal         0x430062D8
    // 0x43008BEC: nop

    ovl_enemy_world4_62D8(rdram, ctx);
        goto after_7;
    // 0x43008BEC: nop

    after_7:
    // 0x43008BF0: b           L_43008C54
    // 0x43008BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BF8:
    // 0x43008BF8: jal         0x43006368
    // 0x43008BFC: nop

    ovl_enemy_world4_6368(rdram, ctx);
        goto after_8;
    // 0x43008BFC: nop

    after_8:
    // 0x43008C00: b           L_43008C54
    // 0x43008C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C08:
    // 0x43008C08: jal         0x430063CC
    // 0x43008C0C: nop

    ovl_enemy_world4_63CC(rdram, ctx);
        goto after_9;
    // 0x43008C0C: nop

    after_9:
    // 0x43008C10: b           L_43008C54
    // 0x43008C14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C18:
    // 0x43008C18: jal         0x43006448
    // 0x43008C1C: nop

    ovl_enemy_world4_6448(rdram, ctx);
        goto after_10;
    // 0x43008C1C: nop

    after_10:
    // 0x43008C20: b           L_43008C54
    // 0x43008C24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C28:
    // 0x43008C28: jal         0x43006488
    // 0x43008C2C: nop

    ovl_enemy_world4_6488(rdram, ctx);
        goto after_11;
    // 0x43008C2C: nop

    after_11:
    // 0x43008C30: b           L_43008C54
    // 0x43008C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C38:
    // 0x43008C38: jal         0x430064EC
    // 0x43008C3C: nop

    ovl_enemy_world4_64EC(rdram, ctx);
        goto after_12;
    // 0x43008C3C: nop

    after_12:
    // 0x43008C40: b           L_43008C54
    // 0x43008C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C48:
    // 0x43008C48: jal         0x430066D0
    // 0x43008C4C: nop

    ovl_enemy_world4_66D0(rdram, ctx);
        goto after_13;
    // 0x43008C4C: nop

    after_13:
L_43008C50:
    // 0x43008C50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C54:
    // 0x43008C54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008C58: jr          $ra
    // 0x43008C5C: nop

    return;
    // 0x43008C5C: nop

;}
RECOMP_FUNC void ovl_enemy_world4_8C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008C60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43008C64: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x43008C68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008C6C: sltiu       $at, $t6, 0x13
    ctx->r1 = ctx->r14 < 0X13 ? 1 : 0;
    // 0x43008C70: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43008C74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43008C78: beq         $at, $zero, L_43008DB8
    if (ctx->r1 == 0) {
        // 0x43008C7C: sw          $a2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r6;
            goto L_43008DB8;
    }
    // 0x43008C7C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x43008C80: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43008C84: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008C88: addu        $at, $at, $t6
    gpr jr_addend_43008C94 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43008C8C: lw          $t6, -0x6230($at)
    ctx->r14 = ADD32(ctx->r1, -0X6230);
    // 0x43008C90: nop

    // 0x43008C94: jr          $t6
    // 0x43008C98: nop

    switch (jr_addend_43008C94 >> 2) {
        case 0: goto L_43008CE0; break;
        case 1: goto L_43008DB8; break;
        case 2: goto L_43008DB8; break;
        case 3: goto L_43008CF4; break;
        case 4: goto L_43008D08; break;
        case 5: goto L_43008D30; break;
        case 6: goto L_43008DB8; break;
        case 7: goto L_43008DB8; break;
        case 8: goto L_43008DB8; break;
        case 9: goto L_43008DB8; break;
        case 10: goto L_43008DB8; break;
        case 11: goto L_43008DB8; break;
        case 12: goto L_43008DB8; break;
        case 13: goto L_43008C9C; break;
        case 14: goto L_43008D4C; break;
        case 15: goto L_43008DB8; break;
        case 16: goto L_43008DB8; break;
        case 17: goto L_43008DB8; break;
        case 18: goto L_43008CC4; break;
        default: switch_error(__func__, 0x43008C94, 0x43009DD0);
    }
    // 0x43008C98: nop

L_43008C9C:
    // 0x43008C9C: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x43008CA0: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43008CA4: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x43008CA8: addiu       $t8, $t8, -0x66D0
    ctx->r24 = ADD32(ctx->r24, -0X66D0);
    // 0x43008CAC: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x43008CB0: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x43008CB4: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x43008CB8: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
    // 0x43008CBC: b           L_43008DB8
    // 0x43008CC0: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
        goto L_43008DB8;
    // 0x43008CC0: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
L_43008CC4:
    // 0x43008CC4: jal         0x43001F1C
    // 0x43008CC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_1F1C(rdram, ctx);
        goto after_0;
    // 0x43008CC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x43008CCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008CD0: jal         0x43002238
    // 0x43008CD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world4_2238(rdram, ctx);
        goto after_1;
    // 0x43008CD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x43008CD8: b           L_43008DBC
    // 0x43008CDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43008DBC;
    // 0x43008CDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008CE0:
    // 0x43008CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008CE4: jal         0x43005078
    // 0x43008CE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_5078(rdram, ctx);
        goto after_2;
    // 0x43008CE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x43008CEC: b           L_43008DBC
    // 0x43008CF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43008DBC;
    // 0x43008CF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008CF4:
    // 0x43008CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008CF8: jal         0x43004CE0
    // 0x43008CFC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    ovl_enemy_world4_4CE0(rdram, ctx);
        goto after_3;
    // 0x43008CFC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    after_3:
    // 0x43008D00: b           L_43008DBC
    // 0x43008D04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43008DBC;
    // 0x43008D04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008D08:
    // 0x43008D08: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
    // 0x43008D0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008D10: bne         $t1, $zero, L_43008D20
    if (ctx->r9 != 0) {
        // 0x43008D14: nop
    
            goto L_43008D20;
    }
    // 0x43008D14: nop

    // 0x43008D18: jal         0x43002238
    // 0x43008D1C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_enemy_world4_2238(rdram, ctx);
        goto after_4;
    // 0x43008D1C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
L_43008D20:
    // 0x43008D20: jal         0x43004BF0
    // 0x43008D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_4BF0(rdram, ctx);
        goto after_5;
    // 0x43008D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x43008D28: b           L_43008DBC
    // 0x43008D2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43008DBC;
    // 0x43008D2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008D30:
    // 0x43008D30: jal         0x43004C74
    // 0x43008D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_4C74(rdram, ctx);
        goto after_6;
    // 0x43008D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x43008D38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008D3C: jal         0x43005078
    // 0x43008D40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_5078(rdram, ctx);
        goto after_7;
    // 0x43008D40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x43008D44: b           L_43008DBC
    // 0x43008D48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43008DBC;
    // 0x43008D48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008D4C:
    // 0x43008D4C: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43008D50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43008D54: bne         $v0, $at, L_43008DA8
    if (ctx->r2 != ctx->r1) {
        // 0x43008D58: slti        $at, $v0, 0x32
        ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
            goto L_43008DA8;
    }
    // 0x43008D58: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x43008D5C: lw          $t2, 0x1E4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X1E4);
    // 0x43008D60: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x43008D64: bne         $t2, $at, L_43008D80
    if (ctx->r10 != ctx->r1) {
        // 0x43008D68: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008D80;
    }
    // 0x43008D68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008D6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008D70: jal         0x43002238
    // 0x43008D74: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world4_2238(rdram, ctx);
        goto after_8;
    // 0x43008D74: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
    // 0x43008D78: b           L_43008D8C
    // 0x43008D7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43008D8C;
    // 0x43008D7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43008D80:
    // 0x43008D80: jal         0x43002238
    // 0x43008D84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_2238(rdram, ctx);
        goto after_9;
    // 0x43008D84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x43008D88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43008D8C:
    // 0x43008D8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43008D90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43008D94: jal         0x43001DE0
    // 0x43008D98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world4_1DE0(rdram, ctx);
        goto after_10;
    // 0x43008D98: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x43008D9C: b           L_43008DBC
    // 0x43008DA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43008DBC;
    // 0x43008DA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43008DA4: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
L_43008DA8:
    // 0x43008DA8: bne         $at, $zero, L_43008DB8
    if (ctx->r1 != 0) {
        // 0x43008DAC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008DB8;
    }
    // 0x43008DAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008DB0: jal         0x43005078
    // 0x43008DB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_5078(rdram, ctx);
        goto after_11;
    // 0x43008DB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
L_43008DB8:
    // 0x43008DB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008DBC:
    // 0x43008DBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43008DC0: jr          $ra
    // 0x43008DC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43008DC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world4_8DC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008DC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43008DCC: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x43008DD0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43008DD4: sltiu       $at, $t6, 0x13
    ctx->r1 = ctx->r14 < 0X13 ? 1 : 0;
    // 0x43008DD8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43008DDC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43008DE0: beq         $at, $zero, L_43008FA8
    if (ctx->r1 == 0) {
        // 0x43008DE4: sw          $a2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r6;
            goto L_43008FA8;
    }
    // 0x43008DE4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x43008DE8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43008DEC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008DF0: addu        $at, $at, $t6
    gpr jr_addend_43008DFC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43008DF4: lw          $t6, -0x61E4($at)
    ctx->r14 = ADD32(ctx->r1, -0X61E4);
    // 0x43008DF8: nop

    // 0x43008DFC: jr          $t6
    // 0x43008E00: nop

    switch (jr_addend_43008DFC >> 2) {
        case 0: goto L_43008E38; break;
        case 1: goto L_43008E50; break;
        case 2: goto L_43008FA8; break;
        case 3: goto L_43008EE4; break;
        case 4: goto L_43008EF8; break;
        case 5: goto L_43008F20; break;
        case 6: goto L_43008FA8; break;
        case 7: goto L_43008FA8; break;
        case 8: goto L_43008FA8; break;
        case 9: goto L_43008FA8; break;
        case 10: goto L_43008FA8; break;
        case 11: goto L_43008FA8; break;
        case 12: goto L_43008FA8; break;
        case 13: goto L_43008E04; break;
        case 14: goto L_43008F3C; break;
        case 15: goto L_43008FA8; break;
        case 16: goto L_43008FA8; break;
        case 17: goto L_43008FA8; break;
        case 18: goto L_43008E1C; break;
        default: switch_error(__func__, 0x43008DFC, 0x43009E1C);
    }
    // 0x43008E00: nop

L_43008E04:
    // 0x43008E04: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43008E08: addiu       $t8, $t8, -0x66C8
    ctx->r24 = ADD32(ctx->r24, -0X66C8);
    // 0x43008E0C: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x43008E10: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x43008E14: b           L_43008FA8
    // 0x43008E18: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
        goto L_43008FA8;
    // 0x43008E18: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
L_43008E1C:
    // 0x43008E1C: jal         0x43001F1C
    // 0x43008E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_1F1C(rdram, ctx);
        goto after_0;
    // 0x43008E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x43008E24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008E28: jal         0x43002238
    // 0x43008E2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world4_2238(rdram, ctx);
        goto after_1;
    // 0x43008E2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x43008E30: b           L_43008FAC
    // 0x43008E34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43008FAC;
    // 0x43008E34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43008E38:
    // 0x43008E38: jal         0x430014D8
    // 0x43008E3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_14D8(rdram, ctx);
        goto after_2;
    // 0x43008E3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x43008E40: jal         0x43004E48
    // 0x43008E44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_4E48(rdram, ctx);
        goto after_3;
    // 0x43008E44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43008E48: b           L_43008FAC
    // 0x43008E4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43008FAC;
    // 0x43008E4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43008E50:
    // 0x43008E50: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43008E54: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x43008E58: beq         $v0, $zero, L_43008E70
    if (ctx->r2 == 0) {
        // 0x43008E5C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008E70;
    }
    // 0x43008E5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008E60: beq         $v0, $at, L_43008E84
    if (ctx->r2 == ctx->r1) {
        // 0x43008E64: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008E84;
    }
    // 0x43008E64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008E68: b           L_43008EC0
    // 0x43008E6C: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
        goto L_43008EC0;
    // 0x43008E6C: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
L_43008E70:
    // 0x43008E70: jal         0x43002238
    // 0x43008E74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_2238(rdram, ctx);
        goto after_4;
    // 0x43008E74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x43008E78: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43008E7C: b           L_43008EC0
    // 0x43008E80: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
        goto L_43008EC0;
    // 0x43008E80: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
L_43008E84:
    // 0x43008E84: addiu       $a1, $zero, 0x225
    ctx->r5 = ADD32(0, 0X225);
    // 0x43008E88: jal         0x43001630
    // 0x43008E8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world4_1630(rdram, ctx);
        goto after_5;
    // 0x43008E8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x43008E90: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008E94: lwc1        $f4, -0x6198($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6198);
    // 0x43008E98: lui         $a2, 0x4284
    ctx->r6 = S32(0X4284 << 16);
    // 0x43008E9C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x43008EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008EA4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43008EA8: lui         $a3, 0x42A2
    ctx->r7 = S32(0X42A2 << 16);
    // 0x43008EAC: jal         0x43004610
    // 0x43008EB0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_enemy_world4_4610(rdram, ctx);
        goto after_6;
    // 0x43008EB0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x43008EB4: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43008EB8: nop

    // 0x43008EBC: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
L_43008EC0:
    // 0x43008EC0: bne         $at, $zero, L_43008FAC
    if (ctx->r1 != 0) {
        // 0x43008EC4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43008FAC;
    }
    // 0x43008EC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43008EC8: jal         0x43004D80
    // 0x43008ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_4D80(rdram, ctx);
        goto after_7;
    // 0x43008ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x43008ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008ED4: jal         0x43005078
    // 0x43008ED8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_5078(rdram, ctx);
        goto after_8;
    // 0x43008ED8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x43008EDC: b           L_43008FAC
    // 0x43008EE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43008FAC;
    // 0x43008EE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43008EE4:
    // 0x43008EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008EE8: jal         0x43004CE0
    // 0x43008EEC: addiu       $a1, $zero, 0xD2
    ctx->r5 = ADD32(0, 0XD2);
    ovl_enemy_world4_4CE0(rdram, ctx);
        goto after_9;
    // 0x43008EEC: addiu       $a1, $zero, 0xD2
    ctx->r5 = ADD32(0, 0XD2);
    after_9:
    // 0x43008EF0: b           L_43008FAC
    // 0x43008EF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43008FAC;
    // 0x43008EF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43008EF8:
    // 0x43008EF8: lw          $t9, 0x60($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X60);
    // 0x43008EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008F00: bne         $t9, $zero, L_43008F10
    if (ctx->r25 != 0) {
        // 0x43008F04: nop
    
            goto L_43008F10;
    }
    // 0x43008F04: nop

    // 0x43008F08: jal         0x43002238
    // 0x43008F0C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world4_2238(rdram, ctx);
        goto after_10;
    // 0x43008F0C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
L_43008F10:
    // 0x43008F10: jal         0x43004BF0
    // 0x43008F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_4BF0(rdram, ctx);
        goto after_11;
    // 0x43008F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x43008F18: b           L_43008FAC
    // 0x43008F1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43008FAC;
    // 0x43008F1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43008F20:
    // 0x43008F20: jal         0x43004C74
    // 0x43008F24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_4C74(rdram, ctx);
        goto after_12;
    // 0x43008F24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x43008F28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008F2C: jal         0x43005078
    // 0x43008F30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_5078(rdram, ctx);
        goto after_13;
    // 0x43008F30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x43008F34: b           L_43008FAC
    // 0x43008F38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43008FAC;
    // 0x43008F38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43008F3C:
    // 0x43008F3C: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43008F40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43008F44: bne         $v0, $at, L_43008F98
    if (ctx->r2 != ctx->r1) {
        // 0x43008F48: slti        $at, $v0, 0x32
        ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
            goto L_43008F98;
    }
    // 0x43008F48: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x43008F4C: lw          $t0, 0x1E4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1E4);
    // 0x43008F50: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x43008F54: bne         $t0, $at, L_43008F70
    if (ctx->r8 != ctx->r1) {
        // 0x43008F58: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008F70;
    }
    // 0x43008F58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008F60: jal         0x43002238
    // 0x43008F64: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world4_2238(rdram, ctx);
        goto after_14;
    // 0x43008F64: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_14:
    // 0x43008F68: b           L_43008F7C
    // 0x43008F6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43008F7C;
    // 0x43008F6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43008F70:
    // 0x43008F70: jal         0x43002238
    // 0x43008F74: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_enemy_world4_2238(rdram, ctx);
        goto after_15;
    // 0x43008F74: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_15:
    // 0x43008F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43008F7C:
    // 0x43008F7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43008F80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43008F84: jal         0x43001DE0
    // 0x43008F88: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world4_1DE0(rdram, ctx);
        goto after_16;
    // 0x43008F88: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_16:
    // 0x43008F8C: b           L_43008FAC
    // 0x43008F90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43008FAC;
    // 0x43008F90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43008F94: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
L_43008F98:
    // 0x43008F98: bne         $at, $zero, L_43008FA8
    if (ctx->r1 != 0) {
        // 0x43008F9C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008FA8;
    }
    // 0x43008F9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008FA0: jal         0x43005078
    // 0x43008FA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_5078(rdram, ctx);
        goto after_17;
    // 0x43008FA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
L_43008FA8:
    // 0x43008FA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43008FAC:
    // 0x43008FAC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43008FB0: jr          $ra
    // 0x43008FB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43008FB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_enemy_world4_8FB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008FB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008FBC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43008FC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008FC4: beq         $a1, $at, L_43008FF4
    if (ctx->r5 == ctx->r1) {
        // 0x43008FC8: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_43008FF4;
    }
    // 0x43008FC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43008FCC: jal         0x43004AD8
    // 0x43008FD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_enemy_world4_4AD8(rdram, ctx);
        goto after_0;
    // 0x43008FD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x43008FD4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x43008FD8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43008FDC: jal         0x43004AD8
    // 0x43008FE0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    ovl_enemy_world4_4AD8(rdram, ctx);
        goto after_1;
    // 0x43008FE0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_1:
    // 0x43008FE4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x43008FE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43008FEC: jal         0x43004AD8
    // 0x43008FF0: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    ovl_enemy_world4_4AD8(rdram, ctx);
        goto after_2;
    // 0x43008FF0: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    after_2:
L_43008FF4:
    // 0x43008FF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008FF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008FFC: jr          $ra
    // 0x43009000: nop

    return;
    // 0x43009000: nop

;}
RECOMP_FUNC void ovl_enemy_world4_9004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009004: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43009008: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x4300900C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43009010: sltiu       $at, $t6, 0x18
    ctx->r1 = ctx->r14 < 0X18 ? 1 : 0;
    // 0x43009014: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43009018: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4300901C: beq         $at, $zero, L_430092BC
    if (ctx->r1 == 0) {
        // 0x43009020: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_430092BC;
    }
    // 0x43009020: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x43009024: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43009028: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300902C: addu        $at, $at, $t6
    gpr jr_addend_43009038 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43009030: lw          $t6, -0x6194($at)
    ctx->r14 = ADD32(ctx->r1, -0X6194);
    // 0x43009034: nop

    // 0x43009038: jr          $t6
    // 0x4300903C: nop

    switch (jr_addend_43009038 >> 2) {
        case 0: goto L_430090B0; break;
        case 1: goto L_430090C8; break;
        case 2: goto L_430092BC; break;
        case 3: goto L_430091E0; break;
        case 4: goto L_430091F4; break;
        case 5: goto L_43009230; break;
        case 6: goto L_430092BC; break;
        case 7: goto L_430092BC; break;
        case 8: goto L_430092BC; break;
        case 9: goto L_430092BC; break;
        case 10: goto L_430092BC; break;
        case 11: goto L_430092BC; break;
        case 12: goto L_430092BC; break;
        case 13: goto L_43009040; break;
        case 14: goto L_4300924C; break;
        case 15: goto L_430092BC; break;
        case 16: goto L_430092BC; break;
        case 17: goto L_430092BC; break;
        case 18: goto L_43009064; break;
        case 19: goto L_430092BC; break;
        case 20: goto L_430092BC; break;
        case 21: goto L_430092BC; break;
        case 22: goto L_430092BC; break;
        case 23: goto L_43009194; break;
        default: switch_error(__func__, 0x43009038, 0x43009E6C);
    }
    // 0x4300903C: nop

L_43009040:
    // 0x43009040: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x43009044: jal         0x43008FB8
    // 0x43009048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_8FB8(rdram, ctx);
        goto after_0;
    // 0x43009048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x4300904C: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43009050: addiu       $t8, $t8, -0x66BC
    ctx->r24 = ADD32(ctx->r24, -0X66BC);
    // 0x43009054: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x43009058: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x4300905C: b           L_430092BC
    // 0x43009060: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
        goto L_430092BC;
    // 0x43009060: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
L_43009064:
    // 0x43009064: jal         0x43001F1C
    // 0x43009068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_1F1C(rdram, ctx);
        goto after_1;
    // 0x43009068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4300906C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009070: jal         0x43002238
    // 0x43009074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world4_2238(rdram, ctx);
        goto after_2;
    // 0x43009074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x43009078: beq         $v0, $zero, L_4300908C
    if (ctx->r2 == 0) {
        // 0x4300907C: nop
    
            goto L_4300908C;
    }
    // 0x4300907C: nop

    // 0x43009080: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x43009084: jal         0x43008FB8
    // 0x43009088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_8FB8(rdram, ctx);
        goto after_3;
    // 0x43009088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_4300908C:
    // 0x4300908C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009094: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43009098: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4300909C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x430090A0: jal         0x430010F0
    // 0x430090A4: nop

    ovl_enemy_world4_10F0(rdram, ctx);
        goto after_4;
    // 0x430090A4: nop

    after_4:
    // 0x430090A8: b           L_430092C0
    // 0x430090AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430092C0;
    // 0x430090AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430090B0:
    // 0x430090B0: jal         0x430014D8
    // 0x430090B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_14D8(rdram, ctx);
        goto after_5;
    // 0x430090B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x430090B8: jal         0x43004E48
    // 0x430090BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_4E48(rdram, ctx);
        goto after_6;
    // 0x430090BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x430090C0: b           L_430092C0
    // 0x430090C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430092C0;
    // 0x430090C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430090C8:
    // 0x430090C8: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x430090CC: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x430090D0: beq         $v0, $zero, L_430090F4
    if (ctx->r2 == 0) {
        // 0x430090D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430090F4;
    }
    // 0x430090D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430090D8: beq         $v0, $at, L_4300911C
    if (ctx->r2 == ctx->r1) {
        // 0x430090DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300911C;
    }
    // 0x430090DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430090E0: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x430090E4: beq         $v0, $at, L_43009148
    if (ctx->r2 == ctx->r1) {
        // 0x430090E8: nop
    
            goto L_43009148;
    }
    // 0x430090E8: nop

    // 0x430090EC: b           L_43009170
    // 0x430090F0: slti        $at, $v0, 0x2D
    ctx->r1 = SIGNED(ctx->r2) < 0X2D ? 1 : 0;
        goto L_43009170;
    // 0x430090F0: slti        $at, $v0, 0x2D
    ctx->r1 = SIGNED(ctx->r2) < 0X2D ? 1 : 0;
L_430090F4:
    // 0x430090F4: jal         0x43002238
    // 0x430090F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_2238(rdram, ctx);
        goto after_7;
    // 0x430090F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x430090FC: beq         $v0, $zero, L_43009110
    if (ctx->r2 == 0) {
        // 0x43009100: nop
    
            goto L_43009110;
    }
    // 0x43009100: nop

    // 0x43009104: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x43009108: jal         0x43008FB8
    // 0x4300910C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_8FB8(rdram, ctx);
        goto after_8;
    // 0x4300910C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_43009110:
    // 0x43009110: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009114: b           L_43009170
    // 0x43009118: slti        $at, $v0, 0x2D
    ctx->r1 = SIGNED(ctx->r2) < 0X2D ? 1 : 0;
        goto L_43009170;
    // 0x43009118: slti        $at, $v0, 0x2D
    ctx->r1 = SIGNED(ctx->r2) < 0X2D ? 1 : 0;
L_4300911C:
    // 0x4300911C: addiu       $a1, $zero, 0x20D
    ctx->r5 = ADD32(0, 0X20D);
    // 0x43009120: jal         0x43001630
    // 0x43009124: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world4_1630(rdram, ctx);
        goto after_9;
    // 0x43009124: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x43009128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300912C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x43009130: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x43009134: jal         0x430010F0
    // 0x43009138: lui         $a3, 0x430C
    ctx->r7 = S32(0X430C << 16);
    ovl_enemy_world4_10F0(rdram, ctx);
        goto after_10;
    // 0x43009138: lui         $a3, 0x430C
    ctx->r7 = S32(0X430C << 16);
    after_10:
    // 0x4300913C: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009140: b           L_43009170
    // 0x43009144: slti        $at, $v0, 0x2D
    ctx->r1 = SIGNED(ctx->r2) < 0X2D ? 1 : 0;
        goto L_43009170;
    // 0x43009144: slti        $at, $v0, 0x2D
    ctx->r1 = SIGNED(ctx->r2) < 0X2D ? 1 : 0;
L_43009148:
    // 0x43009148: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4300914C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009150: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43009154: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43009158: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4300915C: jal         0x430010F0
    // 0x43009160: nop

    ovl_enemy_world4_10F0(rdram, ctx);
        goto after_11;
    // 0x43009160: nop

    after_11:
    // 0x43009164: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009168: nop

    // 0x4300916C: slti        $at, $v0, 0x2D
    ctx->r1 = SIGNED(ctx->r2) < 0X2D ? 1 : 0;
L_43009170:
    // 0x43009170: bne         $at, $zero, L_430092C0
    if (ctx->r1 != 0) {
        // 0x43009174: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430092C0;
    }
    // 0x43009174: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43009178: jal         0x43004D80
    // 0x4300917C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_4D80(rdram, ctx);
        goto after_12;
    // 0x4300917C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x43009180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009184: jal         0x43005078
    // 0x43009188: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_5078(rdram, ctx);
        goto after_13;
    // 0x43009188: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x4300918C: b           L_430092C0
    // 0x43009190: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430092C0;
    // 0x43009190: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009194:
    // 0x43009194: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x43009198: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4300919C: bne         $t9, $at, L_430092C0
    if (ctx->r25 != ctx->r1) {
        // 0x430091A0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430092C0;
    }
    // 0x430091A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430091A4: lw          $t0, 0x4($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X4);
    // 0x430091A8: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x430091AC: beq         $t0, $at, L_430091BC
    if (ctx->r8 == ctx->r1) {
        // 0x430091B0: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_430091BC;
    }
    // 0x430091B0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x430091B4: b           L_430092BC
    // 0x430091B8: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
        goto L_430092BC;
    // 0x430091B8: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
L_430091BC:
    // 0x430091BC: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x430091C0: nop

    // 0x430091C4: slti        $at, $v0, 0x1A
    ctx->r1 = SIGNED(ctx->r2) < 0X1A ? 1 : 0;
    // 0x430091C8: bne         $at, $zero, L_430091D8
    if (ctx->r1 != 0) {
        // 0x430091CC: slti        $at, $v0, 0x24
        ctx->r1 = SIGNED(ctx->r2) < 0X24 ? 1 : 0;
            goto L_430091D8;
    }
    // 0x430091CC: slti        $at, $v0, 0x24
    ctx->r1 = SIGNED(ctx->r2) < 0X24 ? 1 : 0;
    // 0x430091D0: bne         $at, $zero, L_430092C0
    if (ctx->r1 != 0) {
        // 0x430091D4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430092C0;
    }
    // 0x430091D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430091D8:
    // 0x430091D8: b           L_430092BC
    // 0x430091DC: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
        goto L_430092BC;
    // 0x430091DC: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
L_430091E0:
    // 0x430091E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430091E4: jal         0x43004CE0
    // 0x430091E8: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    ovl_enemy_world4_4CE0(rdram, ctx);
        goto after_14;
    // 0x430091E8: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    after_14:
    // 0x430091EC: b           L_430092C0
    // 0x430091F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430092C0;
    // 0x430091F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430091F4:
    // 0x430091F4: lw          $t2, 0x60($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X60);
    // 0x430091F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430091FC: bne         $t2, $zero, L_43009220
    if (ctx->r10 != 0) {
        // 0x43009200: nop
    
            goto L_43009220;
    }
    // 0x43009200: nop

    // 0x43009204: jal         0x43002238
    // 0x43009208: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world4_2238(rdram, ctx);
        goto after_15;
    // 0x43009208: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_15:
    // 0x4300920C: beq         $v0, $zero, L_43009220
    if (ctx->r2 == 0) {
        // 0x43009210: nop
    
            goto L_43009220;
    }
    // 0x43009210: nop

    // 0x43009214: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x43009218: jal         0x43008FB8
    // 0x4300921C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_8FB8(rdram, ctx);
        goto after_16;
    // 0x4300921C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
L_43009220:
    // 0x43009220: jal         0x43004BF0
    // 0x43009224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_4BF0(rdram, ctx);
        goto after_17;
    // 0x43009224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x43009228: b           L_430092C0
    // 0x4300922C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430092C0;
    // 0x4300922C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009230:
    // 0x43009230: jal         0x43004C74
    // 0x43009234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_4C74(rdram, ctx);
        goto after_18;
    // 0x43009234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x43009238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300923C: jal         0x43005078
    // 0x43009240: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_5078(rdram, ctx);
        goto after_19;
    // 0x43009240: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x43009244: b           L_430092C0
    // 0x43009248: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430092C0;
    // 0x43009248: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4300924C:
    // 0x4300924C: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009250: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43009254: bne         $v0, $at, L_430092A8
    if (ctx->r2 != ctx->r1) {
        // 0x43009258: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430092A8;
    }
    // 0x43009258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300925C: lw          $t3, 0x1E4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1E4);
    // 0x43009260: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x43009264: bne         $t3, $at, L_43009270
    if (ctx->r11 != ctx->r1) {
        // 0x43009268: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_43009270;
    }
    // 0x43009268: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x4300926C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_43009270:
    // 0x43009270: jal         0x43002238
    // 0x43009274: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    ovl_enemy_world4_2238(rdram, ctx);
        goto after_20;
    // 0x43009274: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_20:
    // 0x43009278: beq         $v0, $zero, L_43009290
    if (ctx->r2 == 0) {
        // 0x4300927C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009290;
    }
    // 0x4300927C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009280: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x43009284: jal         0x43008FB8
    // 0x43009288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_8FB8(rdram, ctx);
        goto after_21;
    // 0x43009288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x4300928C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43009290:
    // 0x43009290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43009294: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43009298: jal         0x43001DE0
    // 0x4300929C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world4_1DE0(rdram, ctx);
        goto after_22;
    // 0x4300929C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_22:
    // 0x430092A0: b           L_430092C0
    // 0x430092A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430092C0;
    // 0x430092A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430092A8:
    // 0x430092A8: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x430092AC: bne         $at, $zero, L_430092BC
    if (ctx->r1 != 0) {
        // 0x430092B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430092BC;
    }
    // 0x430092B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430092B4: jal         0x43005078
    // 0x430092B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_5078(rdram, ctx);
        goto after_23;
    // 0x430092B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_23:
L_430092BC:
    // 0x430092BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430092C0:
    // 0x430092C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430092C4: jr          $ra
    // 0x430092C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x430092C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world4_92CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430092CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430092D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430092D4: jal         0x43009004
    // 0x430092D8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    ovl_enemy_world4_9004(rdram, ctx);
        goto after_0;
    // 0x430092D8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_0:
    // 0x430092DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430092E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430092E4: jr          $ra
    // 0x430092E8: nop

    return;
    // 0x430092E8: nop

;}
RECOMP_FUNC void ovl_enemy_world4_92EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430092EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430092F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430092F4: jal         0x43009004
    // 0x430092F8: addiu       $a3, $zero, 0x4C3
    ctx->r7 = ADD32(0, 0X4C3);
    ovl_enemy_world4_9004(rdram, ctx);
        goto after_0;
    // 0x430092F8: addiu       $a3, $zero, 0x4C3
    ctx->r7 = ADD32(0, 0X4C3);
    after_0:
    // 0x430092FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43009300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43009304: jr          $ra
    // 0x43009308: nop

    return;
    // 0x43009308: nop

;}
RECOMP_FUNC void ovl_enemy_world4_930C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300930C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43009310: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43009314: jal         0x43009004
    // 0x43009318: addiu       $a3, $zero, 0x4C0
    ctx->r7 = ADD32(0, 0X4C0);
    ovl_enemy_world4_9004(rdram, ctx);
        goto after_0;
    // 0x43009318: addiu       $a3, $zero, 0x4C0
    ctx->r7 = ADD32(0, 0X4C0);
    after_0:
    // 0x4300931C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43009320: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43009324: jr          $ra
    // 0x43009328: nop

    return;
    // 0x43009328: nop

;}
RECOMP_FUNC void ovl_enemy_world4_932C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300932C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43009330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43009334: jal         0x43009004
    // 0x43009338: addiu       $a3, $zero, 0x4C6
    ctx->r7 = ADD32(0, 0X4C6);
    ovl_enemy_world4_9004(rdram, ctx);
        goto after_0;
    // 0x43009338: addiu       $a3, $zero, 0x4C6
    ctx->r7 = ADD32(0, 0X4C6);
    after_0:
    // 0x4300933C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43009340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43009344: jr          $ra
    // 0x43009348: nop

    return;
    // 0x43009348: nop

;}
RECOMP_FUNC void ovl_enemy_world4_934C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300934C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43009350: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x43009354: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43009358: sltiu       $at, $t6, 0x13
    ctx->r1 = ctx->r14 < 0X13 ? 1 : 0;
    // 0x4300935C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43009360: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43009364: beq         $at, $zero, L_43009504
    if (ctx->r1 == 0) {
        // 0x43009368: sw          $a2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r6;
            goto L_43009504;
    }
    // 0x43009368: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x4300936C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43009370: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009374: addu        $at, $at, $t6
    gpr jr_addend_43009380 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43009378: lw          $t6, -0x6134($at)
    ctx->r14 = ADD32(ctx->r1, -0X6134);
    // 0x4300937C: nop

    // 0x43009380: jr          $t6
    // 0x43009384: nop

    switch (jr_addend_43009380 >> 2) {
        case 0: goto L_430093BC; break;
        case 1: goto L_430093D4; break;
        case 2: goto L_43009504; break;
        case 3: goto L_43009464; break;
        case 4: goto L_43009478; break;
        case 5: goto L_430094A0; break;
        case 6: goto L_43009504; break;
        case 7: goto L_43009504; break;
        case 8: goto L_43009504; break;
        case 9: goto L_43009504; break;
        case 10: goto L_43009504; break;
        case 11: goto L_43009504; break;
        case 12: goto L_43009504; break;
        case 13: goto L_43009388; break;
        case 14: goto L_430094BC; break;
        case 15: goto L_43009504; break;
        case 16: goto L_43009504; break;
        case 17: goto L_43009504; break;
        case 18: goto L_430093A0; break;
        default: switch_error(__func__, 0x43009380, 0x43009ECC);
    }
    // 0x43009384: nop

L_43009388:
    // 0x43009388: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x4300938C: addiu       $t8, $t8, -0x66B0
    ctx->r24 = ADD32(ctx->r24, -0X66B0);
    // 0x43009390: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x43009394: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x43009398: b           L_43009504
    // 0x4300939C: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
        goto L_43009504;
    // 0x4300939C: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
L_430093A0:
    // 0x430093A0: jal         0x43001F1C
    // 0x430093A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_1F1C(rdram, ctx);
        goto after_0;
    // 0x430093A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x430093A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430093AC: jal         0x43002238
    // 0x430093B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world4_2238(rdram, ctx);
        goto after_1;
    // 0x430093B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x430093B4: b           L_43009508
    // 0x430093B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009508;
    // 0x430093B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430093BC:
    // 0x430093BC: jal         0x430014D8
    // 0x430093C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_14D8(rdram, ctx);
        goto after_2;
    // 0x430093C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x430093C4: jal         0x43004E48
    // 0x430093C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_4E48(rdram, ctx);
        goto after_3;
    // 0x430093C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x430093CC: b           L_43009508
    // 0x430093D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009508;
    // 0x430093D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430093D4:
    // 0x430093D4: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x430093D8: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x430093DC: beq         $v0, $zero, L_430093F4
    if (ctx->r2 == 0) {
        // 0x430093E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430093F4;
    }
    // 0x430093E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430093E4: beq         $v0, $at, L_43009408
    if (ctx->r2 == ctx->r1) {
        // 0x430093E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009408;
    }
    // 0x430093E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430093EC: b           L_43009440
    // 0x430093F0: slti        $at, $v0, 0x2D
    ctx->r1 = SIGNED(ctx->r2) < 0X2D ? 1 : 0;
        goto L_43009440;
    // 0x430093F0: slti        $at, $v0, 0x2D
    ctx->r1 = SIGNED(ctx->r2) < 0X2D ? 1 : 0;
L_430093F4:
    // 0x430093F4: jal         0x43002238
    // 0x430093F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_2238(rdram, ctx);
        goto after_4;
    // 0x430093F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x430093FC: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009400: b           L_43009440
    // 0x43009404: slti        $at, $v0, 0x2D
    ctx->r1 = SIGNED(ctx->r2) < 0X2D ? 1 : 0;
        goto L_43009440;
    // 0x43009404: slti        $at, $v0, 0x2D
    ctx->r1 = SIGNED(ctx->r2) < 0X2D ? 1 : 0;
L_43009408:
    // 0x43009408: addiu       $a1, $zero, 0x20E
    ctx->r5 = ADD32(0, 0X20E);
    // 0x4300940C: jal         0x43001630
    // 0x43009410: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world4_1630(rdram, ctx);
        goto after_5;
    // 0x43009410: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x43009414: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43009418: lui         $a2, 0x415C
    ctx->r6 = S32(0X415C << 16);
    // 0x4300941C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x43009420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009424: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43009428: lui         $a3, 0x42DB
    ctx->r7 = S32(0X42DB << 16);
    // 0x4300942C: jal         0x43004610
    // 0x43009430: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_enemy_world4_4610(rdram, ctx);
        goto after_6;
    // 0x43009430: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x43009434: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009438: nop

    // 0x4300943C: slti        $at, $v0, 0x2D
    ctx->r1 = SIGNED(ctx->r2) < 0X2D ? 1 : 0;
L_43009440:
    // 0x43009440: bne         $at, $zero, L_43009508
    if (ctx->r1 != 0) {
        // 0x43009444: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43009508;
    }
    // 0x43009444: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43009448: jal         0x43004D80
    // 0x4300944C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_4D80(rdram, ctx);
        goto after_7;
    // 0x4300944C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x43009450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009454: jal         0x43005078
    // 0x43009458: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_5078(rdram, ctx);
        goto after_8;
    // 0x43009458: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x4300945C: b           L_43009508
    // 0x43009460: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009508;
    // 0x43009460: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009464:
    // 0x43009464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009468: jal         0x43004CE0
    // 0x4300946C: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    ovl_enemy_world4_4CE0(rdram, ctx);
        goto after_9;
    // 0x4300946C: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    after_9:
    // 0x43009470: b           L_43009508
    // 0x43009474: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009508;
    // 0x43009474: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009478:
    // 0x43009478: lw          $t9, 0x60($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X60);
    // 0x4300947C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009480: bne         $t9, $zero, L_43009490
    if (ctx->r25 != 0) {
        // 0x43009484: nop
    
            goto L_43009490;
    }
    // 0x43009484: nop

    // 0x43009488: jal         0x43002238
    // 0x4300948C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_enemy_world4_2238(rdram, ctx);
        goto after_10;
    // 0x4300948C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
L_43009490:
    // 0x43009490: jal         0x43004BF0
    // 0x43009494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_4BF0(rdram, ctx);
        goto after_11;
    // 0x43009494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x43009498: b           L_43009508
    // 0x4300949C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009508;
    // 0x4300949C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430094A0:
    // 0x430094A0: jal         0x43004C74
    // 0x430094A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_4C74(rdram, ctx);
        goto after_12;
    // 0x430094A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x430094A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430094AC: jal         0x43005078
    // 0x430094B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_5078(rdram, ctx);
        goto after_13;
    // 0x430094B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x430094B4: b           L_43009508
    // 0x430094B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009508;
    // 0x430094B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430094BC:
    // 0x430094BC: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x430094C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430094C4: bne         $v0, $at, L_430094F0
    if (ctx->r2 != ctx->r1) {
        // 0x430094C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430094F0;
    }
    // 0x430094C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430094CC: jal         0x43002238
    // 0x430094D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world4_2238(rdram, ctx);
        goto after_14;
    // 0x430094D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_14:
    // 0x430094D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430094D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x430094DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x430094E0: jal         0x43001DE0
    // 0x430094E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world4_1DE0(rdram, ctx);
        goto after_15;
    // 0x430094E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_15:
    // 0x430094E8: b           L_43009508
    // 0x430094EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009508;
    // 0x430094EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430094F0:
    // 0x430094F0: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x430094F4: bne         $at, $zero, L_43009504
    if (ctx->r1 != 0) {
        // 0x430094F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009504;
    }
    // 0x430094F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430094FC: jal         0x43005078
    // 0x43009500: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_5078(rdram, ctx);
        goto after_16;
    // 0x43009500: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
L_43009504:
    // 0x43009504: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009508:
    // 0x43009508: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4300950C: jr          $ra
    // 0x43009510: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43009510: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_enemy_world4_9514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009514: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43009518: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x4300951C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43009520: sltiu       $at, $t6, 0x13
    ctx->r1 = ctx->r14 < 0X13 ? 1 : 0;
    // 0x43009524: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43009528: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4300952C: beq         $at, $zero, L_43009694
    if (ctx->r1 == 0) {
        // 0x43009530: sw          $a2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r6;
            goto L_43009694;
    }
    // 0x43009530: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x43009534: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43009538: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300953C: addu        $at, $at, $t6
    gpr jr_addend_43009548 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43009540: lw          $t6, -0x60E8($at)
    ctx->r14 = ADD32(ctx->r1, -0X60E8);
    // 0x43009544: nop

    // 0x43009548: jr          $t6
    // 0x4300954C: nop

    switch (jr_addend_43009548 >> 2) {
        case 0: goto L_430095BC; break;
        case 1: goto L_43009694; break;
        case 2: goto L_43009694; break;
        case 3: goto L_430095D0; break;
        case 4: goto L_430095E4; break;
        case 5: goto L_4300960C; break;
        case 6: goto L_43009694; break;
        case 7: goto L_43009694; break;
        case 8: goto L_43009694; break;
        case 9: goto L_43009694; break;
        case 10: goto L_43009694; break;
        case 11: goto L_43009694; break;
        case 12: goto L_43009694; break;
        case 13: goto L_43009550; break;
        case 14: goto L_43009628; break;
        case 15: goto L_43009694; break;
        case 16: goto L_43009694; break;
        case 17: goto L_43009694; break;
        case 18: goto L_43009584; break;
        default: switch_error(__func__, 0x43009548, 0x43009F18);
    }
    // 0x4300954C: nop

L_43009550:
    // 0x43009550: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43009554: addiu       $t8, $t8, -0x66A4
    ctx->r24 = ADD32(ctx->r24, -0X66A4);
    // 0x43009558: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x4300955C: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x43009560: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
    // 0x43009564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009568: jal         0x43004AD8
    // 0x4300956C: addiu       $a1, $zero, 0x4AF
    ctx->r5 = ADD32(0, 0X4AF);
    ovl_enemy_world4_4AD8(rdram, ctx);
        goto after_0;
    // 0x4300956C: addiu       $a1, $zero, 0x4AF
    ctx->r5 = ADD32(0, 0X4AF);
    after_0:
    // 0x43009570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009574: jal         0x43004AD8
    // 0x43009578: addiu       $a1, $zero, 0x4B1
    ctx->r5 = ADD32(0, 0X4B1);
    ovl_enemy_world4_4AD8(rdram, ctx);
        goto after_1;
    // 0x43009578: addiu       $a1, $zero, 0x4B1
    ctx->r5 = ADD32(0, 0X4B1);
    after_1:
    // 0x4300957C: b           L_43009698
    // 0x43009580: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009698;
    // 0x43009580: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009584:
    // 0x43009584: jal         0x43001F1C
    // 0x43009588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_1F1C(rdram, ctx);
        goto after_2;
    // 0x43009588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x4300958C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009590: jal         0x43002238
    // 0x43009594: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world4_2238(rdram, ctx);
        goto after_3;
    // 0x43009594: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x43009598: beq         $v0, $zero, L_43009694
    if (ctx->r2 == 0) {
        // 0x4300959C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009694;
    }
    // 0x4300959C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430095A0: jal         0x43004AD8
    // 0x430095A4: addiu       $a1, $zero, 0x4AF
    ctx->r5 = ADD32(0, 0X4AF);
    ovl_enemy_world4_4AD8(rdram, ctx);
        goto after_4;
    // 0x430095A4: addiu       $a1, $zero, 0x4AF
    ctx->r5 = ADD32(0, 0X4AF);
    after_4:
    // 0x430095A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430095AC: jal         0x43004AD8
    // 0x430095B0: addiu       $a1, $zero, 0x4B1
    ctx->r5 = ADD32(0, 0X4B1);
    ovl_enemy_world4_4AD8(rdram, ctx);
        goto after_5;
    // 0x430095B0: addiu       $a1, $zero, 0x4B1
    ctx->r5 = ADD32(0, 0X4B1);
    after_5:
    // 0x430095B4: b           L_43009698
    // 0x430095B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009698;
    // 0x430095B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430095BC:
    // 0x430095BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430095C0: jal         0x43005078
    // 0x430095C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_5078(rdram, ctx);
        goto after_6;
    // 0x430095C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x430095C8: b           L_43009698
    // 0x430095CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009698;
    // 0x430095CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430095D0:
    // 0x430095D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430095D4: jal         0x43004CE0
    // 0x430095D8: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    ovl_enemy_world4_4CE0(rdram, ctx);
        goto after_7;
    // 0x430095D8: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    after_7:
    // 0x430095DC: b           L_43009698
    // 0x430095E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009698;
    // 0x430095E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430095E4:
    // 0x430095E4: lw          $t9, 0x60($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X60);
    // 0x430095E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430095EC: bne         $t9, $zero, L_430095FC
    if (ctx->r25 != 0) {
        // 0x430095F0: nop
    
            goto L_430095FC;
    }
    // 0x430095F0: nop

    // 0x430095F4: jal         0x43002238
    // 0x430095F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_2238(rdram, ctx);
        goto after_8;
    // 0x430095F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
L_430095FC:
    // 0x430095FC: jal         0x43004BF0
    // 0x43009600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_4BF0(rdram, ctx);
        goto after_9;
    // 0x43009600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x43009604: b           L_43009698
    // 0x43009608: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009698;
    // 0x43009608: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4300960C:
    // 0x4300960C: jal         0x43004C74
    // 0x43009610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_4C74(rdram, ctx);
        goto after_10;
    // 0x43009610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x43009614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009618: jal         0x43005078
    // 0x4300961C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_5078(rdram, ctx);
        goto after_11;
    // 0x4300961C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x43009620: b           L_43009698
    // 0x43009624: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009698;
    // 0x43009624: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009628:
    // 0x43009628: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x4300962C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43009630: bne         $v0, $at, L_43009684
    if (ctx->r2 != ctx->r1) {
        // 0x43009634: slti        $at, $v0, 0x32
        ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
            goto L_43009684;
    }
    // 0x43009634: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x43009638: lw          $t0, 0x1E4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1E4);
    // 0x4300963C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x43009640: bne         $t0, $at, L_4300965C
    if (ctx->r8 != ctx->r1) {
        // 0x43009644: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300965C;
    }
    // 0x43009644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009648: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300964C: jal         0x43002238
    // 0x43009650: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world4_2238(rdram, ctx);
        goto after_12;
    // 0x43009650: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_12:
    // 0x43009654: b           L_43009668
    // 0x43009658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43009668;
    // 0x43009658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_4300965C:
    // 0x4300965C: jal         0x43002238
    // 0x43009660: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_enemy_world4_2238(rdram, ctx);
        goto after_13;
    // 0x43009660: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_13:
    // 0x43009664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43009668:
    // 0x43009668: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4300966C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43009670: jal         0x43001DE0
    // 0x43009674: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world4_1DE0(rdram, ctx);
        goto after_14;
    // 0x43009674: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_14:
    // 0x43009678: b           L_43009698
    // 0x4300967C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009698;
    // 0x4300967C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43009680: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
L_43009684:
    // 0x43009684: bne         $at, $zero, L_43009694
    if (ctx->r1 != 0) {
        // 0x43009688: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009694;
    }
    // 0x43009688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300968C: jal         0x43005078
    // 0x43009690: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_5078(rdram, ctx);
        goto after_15;
    // 0x43009690: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
L_43009694:
    // 0x43009694: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009698:
    // 0x43009698: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4300969C: jr          $ra
    // 0x430096A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x430096A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world4_96A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430096A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430096A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430096AC: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x430096B0: nop

    // 0x430096B4: addiu       $t7, $t6, -0x1A
    ctx->r15 = ADD32(ctx->r14, -0X1A);
    // 0x430096B8: sltiu       $at, $t7, 0x9
    ctx->r1 = ctx->r15 < 0X9 ? 1 : 0;
    // 0x430096BC: beq         $at, $zero, L_43009740
    if (ctx->r1 == 0) {
        // 0x430096C0: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_43009740;
    }
    // 0x430096C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x430096C4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430096C8: addu        $at, $at, $t7
    gpr jr_addend_430096D4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x430096CC: lw          $t7, -0x609C($at)
    ctx->r15 = ADD32(ctx->r1, -0X609C);
    // 0x430096D0: nop

    // 0x430096D4: jr          $t7
    // 0x430096D8: nop

    switch (jr_addend_430096D4 >> 2) {
        case 0: goto L_43009730; break;
        case 1: goto L_43009740; break;
        case 2: goto L_430096F4; break;
        case 3: goto L_43009700; break;
        case 4: goto L_4300970C; break;
        case 5: goto L_43009718; break;
        case 6: goto L_43009724; break;
        case 7: goto L_430096DC; break;
        case 8: goto L_430096E8; break;
        default: switch_error(__func__, 0x430096D4, 0x43009F64);
    }
    // 0x430096D8: nop

L_430096DC:
    // 0x430096DC: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x430096E0: b           L_43009738
    // 0x430096E4: addiu       $v0, $v0, -0x6AEC
    ctx->r2 = ADD32(ctx->r2, -0X6AEC);
        goto L_43009738;
    // 0x430096E4: addiu       $v0, $v0, -0x6AEC
    ctx->r2 = ADD32(ctx->r2, -0X6AEC);
L_430096E8:
    // 0x430096E8: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x430096EC: b           L_43009738
    // 0x430096F0: addiu       $v0, $v0, -0x6CB4
    ctx->r2 = ADD32(ctx->r2, -0X6CB4);
        goto L_43009738;
    // 0x430096F0: addiu       $v0, $v0, -0x6CB4
    ctx->r2 = ADD32(ctx->r2, -0X6CB4);
L_430096F4:
    // 0x430096F4: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x430096F8: b           L_43009738
    // 0x430096FC: addiu       $v0, $v0, -0x6D34
    ctx->r2 = ADD32(ctx->r2, -0X6D34);
        goto L_43009738;
    // 0x430096FC: addiu       $v0, $v0, -0x6D34
    ctx->r2 = ADD32(ctx->r2, -0X6D34);
L_43009700:
    // 0x43009700: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009704: b           L_43009738
    // 0x43009708: addiu       $v0, $v0, -0x6D14
    ctx->r2 = ADD32(ctx->r2, -0X6D14);
        goto L_43009738;
    // 0x43009708: addiu       $v0, $v0, -0x6D14
    ctx->r2 = ADD32(ctx->r2, -0X6D14);
L_4300970C:
    // 0x4300970C: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009710: b           L_43009738
    // 0x43009714: addiu       $v0, $v0, -0x6CF4
    ctx->r2 = ADD32(ctx->r2, -0X6CF4);
        goto L_43009738;
    // 0x43009714: addiu       $v0, $v0, -0x6CF4
    ctx->r2 = ADD32(ctx->r2, -0X6CF4);
L_43009718:
    // 0x43009718: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x4300971C: b           L_43009738
    // 0x43009720: addiu       $v0, $v0, -0x6CD4
    ctx->r2 = ADD32(ctx->r2, -0X6CD4);
        goto L_43009738;
    // 0x43009720: addiu       $v0, $v0, -0x6CD4
    ctx->r2 = ADD32(ctx->r2, -0X6CD4);
L_43009724:
    // 0x43009724: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009728: b           L_43009738
    // 0x4300972C: addiu       $v0, $v0, -0x7238
    ctx->r2 = ADD32(ctx->r2, -0X7238);
        goto L_43009738;
    // 0x4300972C: addiu       $v0, $v0, -0x7238
    ctx->r2 = ADD32(ctx->r2, -0X7238);
L_43009730:
    // 0x43009730: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009734: addiu       $v0, $v0, -0x73A0
    ctx->r2 = ADD32(ctx->r2, -0X73A0);
L_43009738:
    // 0x43009738: jalr        $v0
    // 0x4300973C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x4300973C: nop

    after_0:
L_43009740:
    // 0x43009740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43009744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43009748: jr          $ra
    // 0x4300974C: nop

    return;
    // 0x4300974C: nop

;}
RECOMP_FUNC void ovl_enemy_world5_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000000: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43000004: jr          $ra
    // 0x43000008: addiu       $v0, $v0, -0x74C0
    ctx->r2 = ADD32(ctx->r2, -0X74C0);
    return;
    // 0x43000008: addiu       $v0, $v0, -0x74C0
    ctx->r2 = ADD32(ctx->r2, -0X74C0);
    // 0x4300000C: nop

;}
RECOMP_FUNC void ovl_enemy_world5_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000010: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000014: jr          $t1
    // 0x43000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
;}
RECOMP_FUNC void ovl_enemy_world5_1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300001C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000020: jr          $t1
    // 0x43000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
;}
RECOMP_FUNC void ovl_enemy_world5_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000028: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300002C: jr          $t1
    // 0x43000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
;}
RECOMP_FUNC void ovl_enemy_world5_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000034: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000038: jr          $t1
    // 0x4300003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
;}
RECOMP_FUNC void ovl_enemy_world5_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000040: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000044: jr          $t1
    // 0x43000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
;}
RECOMP_FUNC void ovl_enemy_world5_4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300004C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000050: jr          $t1
    // 0x43000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
;}
RECOMP_FUNC void ovl_enemy_world5_58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000058: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300005C: jr          $t1
    // 0x43000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
;}
RECOMP_FUNC void ovl_enemy_world5_64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000064: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000068: jr          $t1
    // 0x4300006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
;}
RECOMP_FUNC void ovl_enemy_world5_70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000070: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000074: jr          $t1
    // 0x43000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
;}
RECOMP_FUNC void ovl_enemy_world5_7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300007C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000080: jr          $t1
    // 0x43000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
;}
