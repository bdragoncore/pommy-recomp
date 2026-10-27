#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_actor_main_A108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000A108: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x4000A10C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000A110: bne         $a1, $zero, L_4000A134
    if (ctx->r5 != 0) {
        // 0x4000A114: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_4000A134;
    }
    // 0x4000A114: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x4000A118: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x4000A11C: nop

    // 0x4000A120: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x4000A124: nop

    // 0x4000A128: sll         $t8, $t7, 11
    ctx->r24 = S32(ctx->r15 << 11);
    // 0x4000A12C: bgez        $t8, L_4000A19C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x4000A130: nop
    
            goto L_4000A19C;
    }
    // 0x4000A130: nop

L_4000A134:
    // 0x4000A134: lw          $a0, 0x10($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X10);
    // 0x4000A138: sw          $a3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r7;
    // 0x4000A13C: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x4000A140: jal         0x400006C4
    // 0x4000A144: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4000A144: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x4000A148: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x4000A14C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4000A150: lw          $a0, 0x10($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X10);
    // 0x4000A154: jal         0x400006C4
    // 0x4000A158: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x4000A158: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x4000A15C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x4000A160: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4000A164: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x4000A168: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4000A16C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x4000A170: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x4000A174: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x4000A178: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x4000A17C: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x4000A180: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x4000A184: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x4000A188: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x4000A18C: jal         0x40001258
    // 0x4000A190: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    ovl_actor_main_1258(rdram, ctx);
        goto after_2;
    // 0x4000A190: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x4000A194: b           L_4000A1AC
    // 0x4000A198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4000A1AC;
    // 0x4000A198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000A19C:
    // 0x4000A19C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x4000A1A0: nop

    // 0x4000A1A4: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x4000A1A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000A1AC:
    // 0x4000A1AC: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x4000A1B0: jr          $ra
    // 0x4000A1B4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x4000A1B4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_actor_main_A1B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000A1B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000A1BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000A1C0: lwc1        $f2, 0x40($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X40);
    // 0x4000A1C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4000A1C8: nop

    // 0x4000A1CC: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x4000A1D0: nop

    // 0x4000A1D4: bc1f        L_4000A1EC
    if (!c1cs) {
        // 0x4000A1D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000A1EC;
    }
    // 0x4000A1D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000A1DC: jal         0x4000A108
    // 0x4000A1E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_A108(rdram, ctx);
        goto after_0;
    // 0x4000A1E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x4000A1E4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x4000A1E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000A1EC:
    // 0x4000A1EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000A1F0: jr          $ra
    // 0x4000A1F4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x4000A1F4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void ovl_actor_main_A1F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000A1F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000A1FC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x4000A200: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000A204: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4000A208: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x4000A20C: jal         0x4000A1B8
    // 0x4000A210: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    ovl_actor_main_A1B8(rdram, ctx);
        goto after_0;
    // 0x4000A210: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x4000A214: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4000A218: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x4000A21C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x4000A220: nop

    // 0x4000A224: bc1f        L_4000A234
    if (!c1cs) {
        // 0x4000A228: nop
    
            goto L_4000A234;
    }
    // 0x4000A228: nop

    // 0x4000A22C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x4000A230: nop

L_4000A234:
    // 0x4000A234: div.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
    // 0x4000A238: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000A23C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x4000A240: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x4000A244: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x4000A248: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    // 0x4000A24C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x4000A250: jal         0x40008D20
    // 0x4000A254: nop

    ovl_actor_main_8D20(rdram, ctx);
        goto after_1;
    // 0x4000A254: nop

    after_1:
    // 0x4000A258: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000A25C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000A260: jr          $ra
    // 0x4000A264: nop

    return;
    // 0x4000A264: nop

;}
RECOMP_FUNC void ovl_actor_main_A268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000A268: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000A26C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000A270: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4000A274: jal         0x40009E78
    // 0x4000A278: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_9E78(rdram, ctx);
        goto after_0;
    // 0x4000A278: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000A27C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000A280: jal         0x4000A1B8
    // 0x4000A284: nop

    ovl_actor_main_A1B8(rdram, ctx);
        goto after_1;
    // 0x4000A284: nop

    after_1:
    // 0x4000A288: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4000A28C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000A290: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x4000A294: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x4000A298: bc1t        L_4000A2D8
    if (c1cs) {
        // 0x4000A29C: nop
    
            goto L_4000A2D8;
    }
    // 0x4000A29C: nop

    // 0x4000A2A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4000A2A4: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    // 0x4000A2A8: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x4000A2AC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x4000A2B0: bc1f        L_4000A2C8
    if (!c1cs) {
        // 0x4000A2B4: nop
    
            goto L_4000A2C8;
    }
    // 0x4000A2B4: nop

    // 0x4000A2B8: jal         0x4000A1F8
    // 0x4000A2BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_A1F8(rdram, ctx);
        goto after_2;
    // 0x4000A2BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x4000A2C0: b           L_4000A2E4
    // 0x4000A2C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4000A2E4;
    // 0x4000A2C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000A2C8:
    // 0x4000A2C8: jal         0x4000A1F8
    // 0x4000A2CC: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    ovl_actor_main_A1F8(rdram, ctx);
        goto after_3;
    // 0x4000A2CC: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_3:
    // 0x4000A2D0: b           L_4000A2E4
    // 0x4000A2D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4000A2E4;
    // 0x4000A2D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000A2D8:
    // 0x4000A2D8: jal         0x40001A8C
    // 0x4000A2DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_4;
    // 0x4000A2DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x4000A2E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000A2E4:
    // 0x4000A2E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000A2E8: jr          $ra
    // 0x4000A2EC: nop

    return;
    // 0x4000A2EC: nop

;}
RECOMP_FUNC void ovl_actor_main_A2F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000A2F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000A2F4: addiu       $t7, $a1, -0x1
    ctx->r15 = ADD32(ctx->r5, -0X1);
    // 0x4000A2F8: sltiu       $at, $t7, 0x10
    ctx->r1 = ctx->r15 < 0X10 ? 1 : 0;
    // 0x4000A2FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000A300: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4000A304: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x4000A308: beq         $at, $zero, L_4000A390
    if (ctx->r1 == 0) {
        // 0x4000A30C: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_4000A390;
    }
    // 0x4000A30C: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x4000A310: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x4000A314: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000A318: addu        $at, $at, $t7
    gpr jr_addend_4000A324 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x4000A31C: lw          $t7, -0x16F0($at)
    ctx->r15 = ADD32(ctx->r1, -0X16F0);
    // 0x4000A320: nop

    // 0x4000A324: jr          $t7
    // 0x4000A328: nop

    switch (jr_addend_4000A324 >> 2) {
        case 0: goto L_4000A32C; break;
        case 1: goto L_4000A390; break;
        case 2: goto L_4000A390; break;
        case 3: goto L_4000A388; break;
        case 4: goto L_4000A390; break;
        case 5: goto L_4000A388; break;
        case 6: goto L_4000A388; break;
        case 7: goto L_4000A388; break;
        case 8: goto L_4000A388; break;
        case 9: goto L_4000A388; break;
        case 10: goto L_4000A390; break;
        case 11: goto L_4000A378; break;
        case 12: goto L_4000A390; break;
        case 13: goto L_4000A388; break;
        case 14: goto L_4000A388; break;
        case 15: goto L_4000A388; break;
        default: switch_error(__func__, 0x4000A324, 0x4001E910);
    }
    // 0x4000A328: nop

L_4000A32C:
    // 0x4000A32C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000A330: lwc1        $f4, 0x30($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X30);
    // 0x4000A334: nop

    // 0x4000A338: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x4000A33C: nop

    // 0x4000A340: bc1f        L_4000A394
    if (!c1cs) {
        // 0x4000A344: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000A394;
    }
    // 0x4000A344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000A348: lwc1        $f6, 0x320($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X320);
    // 0x4000A34C: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x4000A350: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x4000A354: nop

    // 0x4000A358: bc1t        L_4000A370
    if (c1cs) {
        // 0x4000A35C: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_4000A370;
    }
    // 0x4000A35C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x4000A360: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4000A364: jal         0x400018BC
    // 0x4000A368: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_actor_main_18BC(rdram, ctx);
        goto after_0;
    // 0x4000A368: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x4000A36C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_4000A370:
    // 0x4000A370: b           L_4000A394
    // 0x4000A374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4000A394;
    // 0x4000A374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000A378:
    // 0x4000A378: jal         0x40009AA8
    // 0x4000A37C: nop

    ovl_actor_main_9AA8(rdram, ctx);
        goto after_1;
    // 0x4000A37C: nop

    after_1:
    // 0x4000A380: b           L_4000A390
    // 0x4000A384: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_4000A390;
    // 0x4000A384: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_4000A388:
    // 0x4000A388: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x4000A38C: nop

L_4000A390:
    // 0x4000A390: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000A394:
    // 0x4000A394: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000A398: jr          $ra
    // 0x4000A39C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4000A39C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_A3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000A3A0: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x4000A3A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000A3A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000A3AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000A3B0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4000A3B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4000A3B8: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x4000A3BC: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    // 0x4000A3C0: jal         0x40006EB8
    // 0x4000A3C4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_0;
    // 0x4000A3C4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x4000A3C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000A3CC: jal         0x40008DB4
    // 0x4000A3D0: nop

    ovl_actor_main_8DB4(rdram, ctx);
        goto after_1;
    // 0x4000A3D0: nop

    after_1:
    // 0x4000A3D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000A3D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000A3DC: jr          $ra
    // 0x4000A3E0: nop

    return;
    // 0x4000A3E0: nop

;}
RECOMP_FUNC void ovl_actor_main_A3E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000A3E4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4000A3E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000A3EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000A3F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000A3F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4000A3F8: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4000A3FC: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4000A400: jal         0x40006EB8
    // 0x4000A404: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_0;
    // 0x4000A404: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x4000A408: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000A40C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000A410: jr          $ra
    // 0x4000A414: nop

    return;
    // 0x4000A414: nop

;}
RECOMP_FUNC void ovl_actor_main_A418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000A418: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000A41C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000A420: jal         0x40008DB4
    // 0x4000A424: nop

    ovl_actor_main_8DB4(rdram, ctx);
        goto after_0;
    // 0x4000A424: nop

    after_0:
    // 0x4000A428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000A42C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000A430: jr          $ra
    // 0x4000A434: nop

    return;
    // 0x4000A434: nop

;}
RECOMP_FUNC void ovl_actor_main_A438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000A438: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x4000A43C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4000A440: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000A444: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000A448: lw          $a2, 0x5C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X5C);
    // 0x4000A44C: lw          $a1, 0x54($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X54);
    // 0x4000A450: jal         0x40007924
    // 0x4000A454: nop

    ovl_actor_main_7924(rdram, ctx);
        goto after_0;
    // 0x4000A454: nop

    after_0:
    // 0x4000A458: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x4000A45C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000A460: jal         0x40001DD4
    // 0x4000A464: add.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f4.fl;
    ovl_actor_main_1DD4(rdram, ctx);
        goto after_1;
    // 0x4000A464: add.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f4.fl;
    after_1:
    // 0x4000A468: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x4000A46C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x4000A470: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4000A474: jal         0x400006C4
    // 0x4000A478: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_2;
    // 0x4000A478: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x4000A47C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x4000A480: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x4000A484: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x4000A488: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x4000A48C: jal         0x400006C4
    // 0x4000A490: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_3;
    // 0x4000A490: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x4000A494: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000A498: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x4000A49C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4000A4A0: jr          $ra
    // 0x4000A4A4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x4000A4A4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_actor_main_A4A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000A4A8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4000A4AC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x4000A4B0: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x4000A4B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4000A4B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4000A4BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000A4C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000A4C4: beq         $a2, $at, L_4000A5D8
    if (ctx->r6 == ctx->r1) {
        // 0x4000A4C8: swc1        $f21, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
            goto L_4000A5D8;
    }
    // 0x4000A4C8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x4000A4CC: lwc1        $f2, 0x38($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X38);
    // 0x4000A4D0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x4000A4D4: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x4000A4D8: nop

    // 0x4000A4DC: bc1f        L_4000A4F4
    if (!c1cs) {
        // 0x4000A4E0: nop
    
            goto L_4000A4F4;
    }
    // 0x4000A4E0: nop

    // 0x4000A4E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4000A4E8: sub.s       $f4, $f2, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f20.fl;
    // 0x4000A4EC: b           L_4000A4F8
    // 0x4000A4F0: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
        goto L_4000A4F8;
    // 0x4000A4F0: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
L_4000A4F4:
    // 0x4000A4F4: sub.s       $f12, $f2, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f20.fl;
L_4000A4F8:
    // 0x4000A4F8: jal         0x40000310
    // 0x4000A4FC: nop

    ovl_actor_main_310(rdram, ctx);
        goto after_0;
    // 0x4000A4FC: nop

    after_0:
    // 0x4000A500: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x4000A504: jal         0x40000310
    // 0x4000A508: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_310(rdram, ctx);
        goto after_1;
    // 0x4000A508: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x4000A50C: lwc1        $f8, 0x40($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X40);
    // 0x4000A510: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x4000A514: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x4000A518: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4000A51C: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4000A520: lwc1        $f2, 0x38($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X38);
    // 0x4000A524: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x4000A528: lwc1        $f6, 0x68($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X68);
    // 0x4000A52C: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x4000A530: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x4000A534: mul.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x4000A538: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x4000A53C: bc1f        L_4000A554
    if (!c1cs) {
        // 0x4000A540: swc1        $f8, 0x68($s0)
        MEM_W(0X68, ctx->r16) = ctx->f8.u32l;
            goto L_4000A554;
    }
    // 0x4000A540: swc1        $f8, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f8.u32l;
    // 0x4000A544: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4000A548: sub.s       $f10, $f2, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f20.fl;
    // 0x4000A54C: b           L_4000A558
    // 0x4000A550: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
        goto L_4000A558;
    // 0x4000A550: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
L_4000A554:
    // 0x4000A554: sub.s       $f12, $f2, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f20.fl;
L_4000A558:
    // 0x4000A558: jal         0x40000310
    // 0x4000A55C: nop

    ovl_actor_main_310(rdram, ctx);
        goto after_2;
    // 0x4000A55C: nop

    after_2:
    // 0x4000A560: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x4000A564: jal         0x4000031C
    // 0x4000A568: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_31C(rdram, ctx);
        goto after_3;
    // 0x4000A568: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x4000A56C: lwc1        $f18, 0x40($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X40);
    // 0x4000A570: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x4000A574: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x4000A578: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000A57C: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4000A580: lwc1        $f2, 0x38($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X38);
    // 0x4000A584: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x4000A588: lwc1        $f16, 0x60($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X60);
    // 0x4000A58C: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x4000A590: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x4000A594: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x4000A598: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x4000A59C: bc1f        L_4000A5B4
    if (!c1cs) {
        // 0x4000A5A0: swc1        $f18, 0x60($s0)
        MEM_W(0X60, ctx->r16) = ctx->f18.u32l;
            goto L_4000A5B4;
    }
    // 0x4000A5A0: swc1        $f18, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f18.u32l;
    // 0x4000A5A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000A5A8: sub.s       $f6, $f2, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f20.fl;
    // 0x4000A5AC: b           L_4000A5B8
    // 0x4000A5B0: add.s       $f14, $f6, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f4.fl;
        goto L_4000A5B8;
    // 0x4000A5B0: add.s       $f14, $f6, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f4.fl;
L_4000A5B4:
    // 0x4000A5B4: sub.s       $f14, $f2, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f20.fl;
L_4000A5B8:
    // 0x4000A5B8: jal         0x4000031C
    // 0x4000A5BC: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    ovl_actor_main_31C(rdram, ctx);
        goto after_4;
    // 0x4000A5BC: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    after_4:
    // 0x4000A5C0: lwc1        $f16, 0x40($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X40);
    // 0x4000A5C4: lwc1        $f8, 0x64($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X64);
    // 0x4000A5C8: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x4000A5CC: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x4000A5D0: b           L_4000A618
    // 0x4000A5D4: swc1        $f18, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f18.u32l;
        goto L_4000A618;
    // 0x4000A5D4: swc1        $f18, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f18.u32l;
L_4000A5D8:
    // 0x4000A5D8: jal         0x40000310
    // 0x4000A5DC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_actor_main_310(rdram, ctx);
        goto after_5;
    // 0x4000A5DC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_5:
    // 0x4000A5E0: lwc1        $f4, 0xD4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XD4);
    // 0x4000A5E4: lwc1        $f6, 0x60($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X60);
    // 0x4000A5E8: neg.s       $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = -ctx->f4.fl;
    // 0x4000A5EC: mul.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x4000A5F0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x4000A5F4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x4000A5F8: jal         0x4000031C
    // 0x4000A5FC: swc1        $f10, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f10.u32l;
    ovl_actor_main_31C(rdram, ctx);
        goto after_6;
    // 0x4000A5FC: swc1        $f10, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f10.u32l;
    after_6:
    // 0x4000A600: lwc1        $f4, 0xD4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XD4);
    // 0x4000A604: lwc1        $f18, 0x68($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X68);
    // 0x4000A608: neg.s       $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = -ctx->f4.fl;
    // 0x4000A60C: mul.s       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x4000A610: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x4000A614: swc1        $f8, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f8.u32l;
L_4000A618:
    // 0x4000A618: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x4000A61C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4000A620: swc1        $f20, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f20.u32l;
    // 0x4000A624: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
    // 0x4000A628: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4000A62C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4000A630: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x4000A634: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x4000A638: jr          $ra
    // 0x4000A63C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x4000A63C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_actor_main_A640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000A640: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000A644: beq         $a2, $zero, L_4000A6B4
    if (ctx->r6 == 0) {
        // 0x4000A648: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4000A6B4;
    }
    // 0x4000A648: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000A64C: slti        $at, $a1, 0x3
    ctx->r1 = SIGNED(ctx->r5) < 0X3 ? 1 : 0;
    // 0x4000A650: bne         $at, $zero, L_4000A6A4
    if (ctx->r1 != 0) {
        // 0x4000A654: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_4000A6A4;
    }
    // 0x4000A654: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000A658: bne         $a2, $at, L_4000A688
    if (ctx->r6 != ctx->r1) {
        // 0x4000A65C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_4000A688;
    }
    // 0x4000A65C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4000A660: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x4000A664: jal         0x40001A8C
    // 0x4000A668: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_0;
    // 0x4000A668: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000A66C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000A670: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x4000A674: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000A678: nop

    // 0x4000A67C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x4000A680: b           L_4000A6B4
    // 0x4000A684: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
        goto L_4000A6B4;
    // 0x4000A684: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
L_4000A688:
    // 0x4000A688: lw          $t8, 0x90($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X90);
    // 0x4000A68C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x4000A690: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x4000A694: jal         0x40001A8C
    // 0x4000A698: sw          $t9, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r25;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x4000A698: sw          $t9, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r25;
    after_1:
    // 0x4000A69C: b           L_4000A6B8
    // 0x4000A6A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4000A6B8;
    // 0x4000A6A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000A6A4:
    // 0x4000A6A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000A6A8: nop

    // 0x4000A6AC: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x4000A6B0: swc1        $f0, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f0.u32l;
L_4000A6B4:
    // 0x4000A6B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000A6B8:
    // 0x4000A6B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000A6BC: jr          $ra
    // 0x4000A6C0: nop

    return;
    // 0x4000A6C0: nop

;}
RECOMP_FUNC void ovl_actor_main_A6C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000A6C4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x4000A6C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000A6CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4000A6D0: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x4000A6D4: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x4000A6D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000A6DC: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x4000A6E0: nop

    // 0x4000A6E4: sll         $t8, $t7, 9
    ctx->r24 = S32(ctx->r15 << 9);
    // 0x4000A6E8: bltz        $t8, L_4000A6F8
    if (SIGNED(ctx->r24) < 0) {
        // 0x4000A6EC: nop
    
            goto L_4000A6F8;
    }
    // 0x4000A6EC: nop

    // 0x4000A6F0: jal         0x40009E78
    // 0x4000A6F4: nop

    ovl_actor_main_9E78(rdram, ctx);
        goto after_0;
    // 0x4000A6F4: nop

    after_0:
L_4000A6F8:
    // 0x4000A6F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000A6FC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4000A700: jal         0x4000A1F8
    // 0x4000A704: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    ovl_actor_main_A1F8(rdram, ctx);
        goto after_1;
    // 0x4000A704: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_1:
    // 0x4000A708: lw          $t9, 0x90($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X90);
    // 0x4000A70C: lui         $at, 0xFDFF
    ctx->r1 = S32(0XFDFF << 16);
    // 0x4000A710: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x4000A714: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4000A718: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x4000A71C: andi        $t2, $t0, 0x1
    ctx->r10 = ctx->r8 & 0X1;
    // 0x4000A720: sw          $t0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r8;
    // 0x4000A724: bne         $t2, $zero, L_4000A740
    if (ctx->r10 != 0) {
        // 0x4000A728: swc1        $f4, 0x50($s0)
        MEM_W(0X50, ctx->r16) = ctx->f4.u32l;
            goto L_4000A740;
    }
    // 0x4000A728: swc1        $f4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f4.u32l;
    // 0x4000A72C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000A730: jal         0x40001A8C
    // 0x4000A734: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_2;
    // 0x4000A734: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x4000A738: b           L_4000A81C
    // 0x4000A73C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000A81C;
    // 0x4000A73C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000A740:
    // 0x4000A740: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x4000A744: addiu       $a0, $s0, 0xDC
    ctx->r4 = ADD32(ctx->r16, 0XDC);
    // 0x4000A748: jal         0x40009220
    // 0x4000A74C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_actor_main_9220(rdram, ctx);
        goto after_3;
    // 0x4000A74C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_3:
    // 0x4000A750: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000A754: bne         $v0, $at, L_4000A764
    if (ctx->r2 != ctx->r1) {
        // 0x4000A758: addiu       $a0, $s0, 0x18C
        ctx->r4 = ADD32(ctx->r16, 0X18C);
            goto L_4000A764;
    }
    // 0x4000A758: addiu       $a0, $s0, 0x18C
    ctx->r4 = ADD32(ctx->r16, 0X18C);
    // 0x4000A75C: b           L_4000A768
    // 0x4000A760: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_4000A768;
    // 0x4000A760: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_4000A764:
    // 0x4000A764: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_4000A768:
    // 0x4000A768: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x4000A76C: jal         0x40009220
    // 0x4000A770: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    ovl_actor_main_9220(rdram, ctx);
        goto after_4;
    // 0x4000A770: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    after_4:
    // 0x4000A774: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x4000A778: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000A77C: bne         $v0, $at, L_4000A790
    if (ctx->r2 != ctx->r1) {
        // 0x4000A780: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_4000A790;
    }
    // 0x4000A780: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x4000A784: b           L_4000A790
    // 0x4000A788: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_4000A790;
    // 0x4000A788: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x4000A78C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4000A790:
    // 0x4000A790: bne         $v1, $zero, L_4000A7A8
    if (ctx->r3 != 0) {
        // 0x4000A794: nop
    
            goto L_4000A7A8;
    }
    // 0x4000A794: nop

    // 0x4000A798: beq         $v0, $zero, L_4000A7A8
    if (ctx->r2 == 0) {
        // 0x4000A79C: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_4000A7A8;
    }
    // 0x4000A79C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x4000A7A0: b           L_4000A7BC
    // 0x4000A7A4: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
        goto L_4000A7BC;
    // 0x4000A7A4: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
L_4000A7A8:
    // 0x4000A7A8: bne         $v1, $zero, L_4000A7BC
    if (ctx->r3 != 0) {
        // 0x4000A7AC: nop
    
            goto L_4000A7BC;
    }
    // 0x4000A7AC: nop

    // 0x4000A7B0: bne         $v0, $zero, L_4000A7BC
    if (ctx->r2 != 0) {
        // 0x4000A7B4: addiu       $t4, $zero, 0x2
        ctx->r12 = ADD32(0, 0X2);
            goto L_4000A7BC;
    }
    // 0x4000A7B4: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x4000A7B8: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
L_4000A7BC:
    // 0x4000A7BC: jal         0x4000A438
    // 0x4000A7C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_A438(rdram, ctx);
        goto after_5;
    // 0x4000A7C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x4000A7C4: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x4000A7C8: lwc1        $f14, 0x38($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X38);
    // 0x4000A7CC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x4000A7D0: jal         0x40009134
    // 0x4000A7D4: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    ovl_actor_main_9134(rdram, ctx);
        goto after_6;
    // 0x4000A7D4: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    after_6:
    // 0x4000A7D8: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x4000A7DC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x4000A7E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000A7E4: jal         0x4000A4A8
    // 0x4000A7E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_A4A8(rdram, ctx);
        goto after_7;
    // 0x4000A7E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x4000A7EC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x4000A7F0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4000A7F4: jal         0x400006C4
    // 0x4000A7F8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_8;
    // 0x4000A7F8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_8:
    // 0x4000A7FC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x4000A800: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x4000A804: beq         $t5, $zero, L_4000A81C
    if (ctx->r13 == 0) {
        // 0x4000A808: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4000A81C;
    }
    // 0x4000A808: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000A80C: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x4000A810: jal         0x4000A640
    // 0x4000A814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_A640(rdram, ctx);
        goto after_9;
    // 0x4000A814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x4000A818: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000A81C:
    // 0x4000A81C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4000A820: jr          $ra
    // 0x4000A824: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x4000A824: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_actor_main_A828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000A828: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x4000A82C: sltiu       $at, $t6, 0xF
    ctx->r1 = ctx->r14 < 0XF ? 1 : 0;
    // 0x4000A830: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x4000A834: beq         $at, $zero, L_4000A888
    if (ctx->r1 == 0) {
        // 0x4000A838: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_4000A888;
    }
    // 0x4000A838: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x4000A83C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x4000A840: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000A844: addu        $at, $at, $t6
    gpr jr_addend_4000A850 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x4000A848: lw          $t6, -0x16B0($at)
    ctx->r14 = ADD32(ctx->r1, -0X16B0);
    // 0x4000A84C: nop

    // 0x4000A850: jr          $t6
    // 0x4000A854: nop

    switch (jr_addend_4000A850 >> 2) {
        case 0: goto L_4000A858; break;
        case 1: goto L_4000A888; break;
        case 2: goto L_4000A888; break;
        case 3: goto L_4000A888; break;
        case 4: goto L_4000A888; break;
        case 5: goto L_4000A888; break;
        case 6: goto L_4000A86C; break;
        case 7: goto L_4000A888; break;
        case 8: goto L_4000A888; break;
        case 9: goto L_4000A888; break;
        case 10: goto L_4000A87C; break;
        case 11: goto L_4000A888; break;
        case 12: goto L_4000A888; break;
        case 13: goto L_4000A874; break;
        case 14: goto L_4000A884; break;
        default: switch_error(__func__, 0x4000A850, 0x4001E950);
    }
    // 0x4000A854: nop

L_4000A858:
    // 0x4000A858: slti        $at, $a2, 0x3
    ctx->r1 = SIGNED(ctx->r6) < 0X3 ? 1 : 0;
    // 0x4000A85C: bne         $at, $zero, L_4000A888
    if (ctx->r1 != 0) {
        // 0x4000A860: nop
    
            goto L_4000A888;
    }
    // 0x4000A860: nop

    // 0x4000A864: jr          $ra
    // 0x4000A868: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x4000A868: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_4000A86C:
    // 0x4000A86C: jr          $ra
    // 0x4000A870: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x4000A870: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_4000A874:
    // 0x4000A874: jr          $ra
    // 0x4000A878: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x4000A878: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4000A87C:
    // 0x4000A87C: jr          $ra
    // 0x4000A880: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x4000A880: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_4000A884:
    // 0x4000A884: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_4000A888:
    // 0x4000A888: jr          $ra
    // 0x4000A88C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4000A88C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_A890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000A890: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4000A894: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000A898: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4000A89C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000A8A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4000A8A4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4000A8A8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000A8AC: jal         0x40008D20
    // 0x4000A8B0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4000A8B0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_0:
    // 0x4000A8B4: jal         0x40008DB4
    // 0x4000A8B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_8DB4(rdram, ctx);
        goto after_1;
    // 0x4000A8B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4000A8BC: jal         0x4000947C
    // 0x4000A8C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_947C(rdram, ctx);
        goto after_2;
    // 0x4000A8C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x4000A8C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000A8C8: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x4000A8CC: jal         0x40009354
    // 0x4000A8D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_9354(rdram, ctx);
        goto after_3;
    // 0x4000A8D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x4000A8D4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x4000A8D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4000A8DC: lwc1        $f4, 0x64($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X64);
    // 0x4000A8E0: lw          $t6, 0x90($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X90);
    // 0x4000A8E4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4000A8E8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x4000A8EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4000A8F0: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x4000A8F4: sw          $t7, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r15;
    // 0x4000A8F8: swc1        $f8, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f8.u32l;
    // 0x4000A8FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000A900: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4000A904: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x4000A908: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x4000A90C: jal         0x40006EB8
    // 0x4000A910: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_4;
    // 0x4000A910: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x4000A914: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x4000A918: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4000A91C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x4000A920: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4000A924: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4000A928: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4000A92C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000A930: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4000A934: jal         0x40006EB8
    // 0x4000A938: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_5;
    // 0x4000A938: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x4000A93C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4000A940: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4000A944: jr          $ra
    // 0x4000A948: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4000A948: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_A94C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000A94C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000A950: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000A954: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000A958: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x4000A95C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x4000A960: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
    // 0x4000A964: jal         0x4000946C
    // 0x4000A968: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_946C(rdram, ctx);
        goto after_0;
    // 0x4000A968: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000A96C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4000A970: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000A974: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000A978: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4000A97C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4000A980: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4000A984: jal         0x40006EB8
    // 0x4000A988: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_1;
    // 0x4000A988: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x4000A98C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4000A990: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4000A994: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000A998: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4000A99C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4000A9A0: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4000A9A4: jal         0x40006EB8
    // 0x4000A9A8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_2;
    // 0x4000A9A8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x4000A9AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000A9B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000A9B4: jr          $ra
    // 0x4000A9B8: nop

    return;
    // 0x4000A9B8: nop

;}
RECOMP_FUNC void ovl_actor_main_A9BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000A9BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4000A9C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000A9C4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x4000A9C8: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x4000A9CC: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x4000A9D0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x4000A9D4: lw          $a2, 0x2EC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X2EC);
    // 0x4000A9D8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x4000A9DC: jal         0x400060EC
    // 0x4000A9E0: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    ovl_actor_main_60EC(rdram, ctx);
        goto after_0;
    // 0x4000A9E0: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x4000A9E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000A9E8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x4000A9EC: jr          $ra
    // 0x4000A9F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4000A9F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_A9F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000A9F4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x4000A9F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000A9FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4000AA00: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x4000AA04: lhu         $t6, 0x20($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X20);
    // 0x4000AA08: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000AA0C: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x4000AA10: beq         $t7, $zero, L_4000AB58
    if (ctx->r15 == 0) {
        // 0x4000AA14: addiu       $a1, $zero, 0x29
        ctx->r5 = ADD32(0, 0X29);
            goto L_4000AB58;
    }
    // 0x4000AA14: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4000AA18: lw          $a0, 0x2EC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EC);
    // 0x4000AA1C: jal         0x400006C4
    // 0x4000AA20: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4000AA20: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x4000AA24: bne         $v0, $zero, L_4000AB58
    if (ctx->r2 != 0) {
        // 0x4000AA28: nop
    
            goto L_4000AB58;
    }
    // 0x4000AA28: nop

    // 0x4000AA2C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x4000AA30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000AA34: bne         $t8, $at, L_4000AB58
    if (ctx->r24 != ctx->r1) {
        // 0x4000AA38: nop
    
            goto L_4000AB58;
    }
    // 0x4000AA38: nop

    // 0x4000AA3C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x4000AA40: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4000AA44: bne         $t9, $at, L_4000AB58
    if (ctx->r25 != ctx->r1) {
        // 0x4000AA48: nop
    
            goto L_4000AB58;
    }
    // 0x4000AA48: nop

    // 0x4000AA4C: lhu         $t0, 0x22($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X22);
    // 0x4000AA50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4000AA54: andi        $t1, $t0, 0xF00
    ctx->r9 = ctx->r8 & 0XF00;
    // 0x4000AA58: beq         $t1, $zero, L_4000AA64
    if (ctx->r9 == 0) {
        // 0x4000AA5C: nop
    
            goto L_4000AA64;
    }
    // 0x4000AA5C: nop

    // 0x4000AA60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_4000AA64:
    // 0x4000AA64: jal         0x4000A9BC
    // 0x4000AA68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_A9BC(rdram, ctx);
        goto after_1;
    // 0x4000AA68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4000AA6C: bne         $v0, $zero, L_4000AAAC
    if (ctx->r2 != 0) {
        // 0x4000AA70: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_4000AAAC;
    }
    // 0x4000AA70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000AA74: lw          $t2, 0x90($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X90);
    // 0x4000AA78: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x4000AA7C: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x4000AA80: bgez        $t3, L_4000AB2C
    if (SIGNED(ctx->r11) >= 0) {
        // 0x4000AA84: lw          $t4, 0x44($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X44);
            goto L_4000AB2C;
    }
    // 0x4000AA84: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x4000AA88: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4000AA8C: jal         0x40000CA0
    // 0x4000AA90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_2;
    // 0x4000AA90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x4000AA94: lw          $t4, 0x90($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X90);
    // 0x4000AA98: lui         $at, 0xFF7F
    ctx->r1 = S32(0XFF7F << 16);
    // 0x4000AA9C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x4000AAA0: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x4000AAA4: b           L_4000AB28
    // 0x4000AAA8: sw          $t5, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r13;
        goto L_4000AB28;
    // 0x4000AAA8: sw          $t5, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r13;
L_4000AAAC:
    // 0x4000AAAC: bne         $v0, $at, L_4000AAEC
    if (ctx->r2 != ctx->r1) {
        // 0x4000AAB0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_4000AAEC;
    }
    // 0x4000AAB0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4000AAB4: lw          $t6, 0x90($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X90);
    // 0x4000AAB8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x4000AABC: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x4000AAC0: bltz        $t7, L_4000AAEC
    if (SIGNED(ctx->r15) < 0) {
        // 0x4000AAC4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_4000AAEC;
    }
    // 0x4000AAC4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4000AAC8: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4000AACC: jal         0x40000CA0
    // 0x4000AAD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_3;
    // 0x4000AAD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x4000AAD4: lw          $t8, 0x90($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X90);
    // 0x4000AAD8: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x4000AADC: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x4000AAE0: b           L_4000AB28
    // 0x4000AAE4: sw          $t9, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r25;
        goto L_4000AB28;
    // 0x4000AAE4: sw          $t9, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r25;
    // 0x4000AAE8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_4000AAEC:
    // 0x4000AAEC: bne         $v0, $at, L_4000AB2C
    if (ctx->r2 != ctx->r1) {
        // 0x4000AAF0: lw          $t4, 0x44($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X44);
            goto L_4000AB2C;
    }
    // 0x4000AAF0: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x4000AAF4: lw          $t0, 0x90($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X90);
    // 0x4000AAF8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x4000AAFC: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x4000AB00: bgez        $t1, L_4000AB2C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x4000AB04: lw          $t4, 0x44($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X44);
            goto L_4000AB2C;
    }
    // 0x4000AB04: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x4000AB08: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4000AB0C: jal         0x40000CA0
    // 0x4000AB10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_4;
    // 0x4000AB10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x4000AB14: lw          $t2, 0x90($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X90);
    // 0x4000AB18: lui         $at, 0xFF7F
    ctx->r1 = S32(0XFF7F << 16);
    // 0x4000AB1C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x4000AB20: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x4000AB24: sw          $t3, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r11;
L_4000AB28:
    // 0x4000AB28: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
L_4000AB2C:
    // 0x4000AB2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000AB30: bne         $t4, $at, L_4000AB8C
    if (ctx->r12 != ctx->r1) {
        // 0x4000AB34: addiu       $a1, $zero, 0xA
        ctx->r5 = ADD32(0, 0XA);
            goto L_4000AB8C;
    }
    // 0x4000AB34: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x4000AB38: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4000AB3C: jal         0x40000CA0
    // 0x4000AB40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_5;
    // 0x4000AB40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x4000AB44: lw          $t5, 0x90($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X90);
    // 0x4000AB48: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x4000AB4C: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x4000AB50: b           L_4000AB8C
    // 0x4000AB54: sw          $t6, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r14;
        goto L_4000AB8C;
    // 0x4000AB54: sw          $t6, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r14;
L_4000AB58:
    // 0x4000AB58: lw          $t7, 0x90($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X90);
    // 0x4000AB5C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x4000AB60: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x4000AB64: bgez        $t8, L_4000AB90
    if (SIGNED(ctx->r24) >= 0) {
        // 0x4000AB68: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4000AB90;
    }
    // 0x4000AB68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000AB6C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4000AB70: jal         0x40000CA0
    // 0x4000AB74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_6;
    // 0x4000AB74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x4000AB78: lw          $t9, 0x90($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X90);
    // 0x4000AB7C: lui         $at, 0xFF7F
    ctx->r1 = S32(0XFF7F << 16);
    // 0x4000AB80: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x4000AB84: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x4000AB88: sw          $t0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r8;
L_4000AB8C:
    // 0x4000AB8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000AB90:
    // 0x4000AB90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4000AB94: jr          $ra
    // 0x4000AB98: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x4000AB98: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_actor_main_AB9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000AB9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000ABA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000ABA4: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000ABA8: nop

    // 0x4000ABAC: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x4000ABB0: bne         $t7, $zero, L_4000ABC8
    if (ctx->r15 != 0) {
        // 0x4000ABB4: nop
    
            goto L_4000ABC8;
    }
    // 0x4000ABB4: nop

    // 0x4000ABB8: jal         0x40001A8C
    // 0x4000ABBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_0;
    // 0x4000ABBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x4000ABC0: b           L_4000AC1C
    // 0x4000ABC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4000AC1C;
    // 0x4000ABC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000ABC8:
    // 0x4000ABC8: jal         0x4000A9F4
    // 0x4000ABCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_A9F4(rdram, ctx);
        goto after_1;
    // 0x4000ABCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x4000ABD0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000ABD4: jal         0x40009E78
    // 0x4000ABD8: nop

    ovl_actor_main_9E78(rdram, ctx);
        goto after_2;
    // 0x4000ABD8: nop

    after_2:
    // 0x4000ABDC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000ABE0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x4000ABE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4000ABE8: lwc1        $f4, 0x40($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X40);
    // 0x4000ABEC: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    // 0x4000ABF0: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x4000ABF4: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x4000ABF8: bc1f        L_4000AC10
    if (!c1cs) {
        // 0x4000ABFC: nop
    
            goto L_4000AC10;
    }
    // 0x4000ABFC: nop

    // 0x4000AC00: jal         0x4000A1F8
    // 0x4000AC04: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_actor_main_A1F8(rdram, ctx);
        goto after_3;
    // 0x4000AC04: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_3:
    // 0x4000AC08: b           L_4000AC1C
    // 0x4000AC0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4000AC1C;
    // 0x4000AC0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000AC10:
    // 0x4000AC10: jal         0x4000A1F8
    // 0x4000AC14: lui         $a2, 0x40C0
    ctx->r6 = S32(0X40C0 << 16);
    ovl_actor_main_A1F8(rdram, ctx);
        goto after_4;
    // 0x4000AC14: lui         $a2, 0x40C0
    ctx->r6 = S32(0X40C0 << 16);
    after_4:
    // 0x4000AC18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000AC1C:
    // 0x4000AC1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000AC20: jr          $ra
    // 0x4000AC24: nop

    return;
    // 0x4000AC24: nop

;}
RECOMP_FUNC void ovl_actor_main_AC28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000AC28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000AC2C: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x4000AC30: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x4000AC34: sltiu       $at, $t6, 0x12
    ctx->r1 = ctx->r14 < 0X12 ? 1 : 0;
    // 0x4000AC38: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x4000AC3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000AC40: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x4000AC44: beq         $at, $zero, L_4000ACAC
    if (ctx->r1 == 0) {
        // 0x4000AC48: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_4000ACAC;
    }
    // 0x4000AC48: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x4000AC4C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x4000AC50: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000AC54: addu        $at, $at, $t6
    gpr jr_addend_4000AC60 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x4000AC58: lw          $t6, -0x1674($at)
    ctx->r14 = ADD32(ctx->r1, -0X1674);
    // 0x4000AC5C: nop

    // 0x4000AC60: jr          $t6
    // 0x4000AC64: nop

    switch (jr_addend_4000AC60 >> 2) {
        case 0: goto L_4000AC84; break;
        case 1: goto L_4000ACAC; break;
        case 2: goto L_4000ACAC; break;
        case 3: goto L_4000ACAC; break;
        case 4: goto L_4000ACAC; break;
        case 5: goto L_4000ACAC; break;
        case 6: goto L_4000ACAC; break;
        case 7: goto L_4000AC68; break;
        case 8: goto L_4000AC70; break;
        case 9: goto L_4000AC68; break;
        case 10: goto L_4000ACAC; break;
        case 11: goto L_4000ACAC; break;
        case 12: goto L_4000ACAC; break;
        case 13: goto L_4000ACAC; break;
        case 14: goto L_4000AC68; break;
        case 15: goto L_4000AC68; break;
        case 16: goto L_4000AC68; break;
        case 17: goto L_4000AC68; break;
        default: switch_error(__func__, 0x4000AC60, 0x4001E98C);
    }
    // 0x4000AC64: nop

L_4000AC68:
    // 0x4000AC68: b           L_4000ACAC
    // 0x4000AC6C: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
        goto L_4000ACAC;
    // 0x4000AC6C: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
L_4000AC70:
    // 0x4000AC70: jal         0x400092D4
    // 0x4000AC74: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    ovl_actor_main_92D4(rdram, ctx);
        goto after_0;
    // 0x4000AC74: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_0:
    // 0x4000AC78: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x4000AC7C: b           L_4000ACB0
    // 0x4000AC80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4000ACB0;
    // 0x4000AC80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000AC84:
    // 0x4000AC84: lw          $t7, 0x90($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X90);
    // 0x4000AC88: nop

    // 0x4000AC8C: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x4000AC90: bne         $t8, $zero, L_4000ACB0
    if (ctx->r24 != 0) {
        // 0x4000AC94: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000ACB0;
    }
    // 0x4000AC94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000AC98: lw          $a1, 0xC0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC0);
    // 0x4000AC9C: jal         0x40011944
    // 0x4000ACA0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    ovl_actor_main_11944(rdram, ctx);
        goto after_1;
    // 0x4000ACA0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x4000ACA4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x4000ACA8: nop

L_4000ACAC:
    // 0x4000ACAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000ACB0:
    // 0x4000ACB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000ACB4: jr          $ra
    // 0x4000ACB8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4000ACB8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_ACBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000ACBC: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x4000ACC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000ACC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000ACC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000ACCC: jal         0x40008DB4
    // 0x4000ACD0: swc1        $f4, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f4.u32l;
    ovl_actor_main_8DB4(rdram, ctx);
        goto after_0;
    // 0x4000ACD0: swc1        $f4, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f4.u32l;
    after_0:
    // 0x4000ACD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000ACD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000ACDC: jr          $ra
    // 0x4000ACE0: nop

    return;
    // 0x4000ACE0: nop

;}
RECOMP_FUNC void ovl_actor_main_ACE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000ACE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000ACE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000ACEC: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000ACF0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x4000ACF4: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x4000ACF8: bgez        $t7, L_4000AD28
    if (SIGNED(ctx->r15) >= 0) {
        // 0x4000ACFC: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_4000AD28;
    }
    // 0x4000ACFC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x4000AD00: lw          $a0, 0x1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1C);
    // 0x4000AD04: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x4000AD08: jal         0x40000CA0
    // 0x4000AD0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_0;
    // 0x4000AD0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x4000AD10: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x4000AD14: lui         $at, 0xFF7F
    ctx->r1 = S32(0XFF7F << 16);
    // 0x4000AD18: lw          $t8, 0x90($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X90);
    // 0x4000AD1C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x4000AD20: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x4000AD24: sw          $t9, 0x90($a3)
    MEM_W(0X90, ctx->r7) = ctx->r25;
L_4000AD28:
    // 0x4000AD28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000AD2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000AD30: jr          $ra
    // 0x4000AD34: nop

    return;
    // 0x4000AD34: nop

;}
RECOMP_FUNC void ovl_actor_main_AD38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000AD38: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x4000AD3C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4000AD40: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x4000AD44: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x4000AD48: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000AD4C: bc1f        L_4000AD68
    if (!c1cs) {
        // 0x4000AD50: lui         $at, 0x4307
        ctx->r1 = S32(0X4307 << 16);
            goto L_4000AD68;
    }
    // 0x4000AD50: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
L_4000AD54:
    // 0x4000AD54: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x4000AD58: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x4000AD5C: nop

    // 0x4000AD60: bc1t        L_4000AD54
    if (c1cs) {
        // 0x4000AD64: nop
    
            goto L_4000AD54;
    }
    // 0x4000AD64: nop

L_4000AD68:
    // 0x4000AD68: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000AD6C: nop

    // 0x4000AD70: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x4000AD74: nop

    // 0x4000AD78: bc1f        L_4000AD90
    if (!c1cs) {
        // 0x4000AD7C: nop
    
            goto L_4000AD90;
    }
    // 0x4000AD7C: nop

L_4000AD80:
    // 0x4000AD80: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x4000AD84: nop

    // 0x4000AD88: bc1t        L_4000AD80
    if (c1cs) {
        // 0x4000AD8C: nop
    
            goto L_4000AD80;
    }
    // 0x4000AD8C: nop

L_4000AD90:
    // 0x4000AD90: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x4000AD94: nop

    // 0x4000AD98: bc1f        L_4000ADA8
    if (!c1cs) {
        // 0x4000AD9C: nop
    
            goto L_4000ADA8;
    }
    // 0x4000AD9C: nop

    // 0x4000ADA0: jr          $ra
    // 0x4000ADA4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    return;
    // 0x4000ADA4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_4000ADA8:
    // 0x4000ADA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4000ADAC: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x4000ADB0: c.le.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl <= ctx->f6.fl;
    // 0x4000ADB4: nop

    // 0x4000ADB8: bc1f        L_4000ADD0
    if (!c1cs) {
        // 0x4000ADBC: nop
    
            goto L_4000ADD0;
    }
    // 0x4000ADBC: nop

    // 0x4000ADC0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x4000ADC4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4000ADC8: jr          $ra
    // 0x4000ADCC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x4000ADCC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_4000ADD0:
    // 0x4000ADD0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4000ADD4: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000ADD8: c.le.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl <= ctx->f8.fl;
    // 0x4000ADDC: nop

    // 0x4000ADE0: bc1f        L_4000ADF8
    if (!c1cs) {
        // 0x4000ADE4: nop
    
            goto L_4000ADF8;
    }
    // 0x4000ADE4: nop

    // 0x4000ADE8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x4000ADEC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4000ADF0: jr          $ra
    // 0x4000ADF4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x4000ADF4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_4000ADF8:
    // 0x4000ADF8: lwc1        $f10, -0x162C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X162C);
    // 0x4000ADFC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x4000AE00: c.le.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl <= ctx->f10.fl;
    // 0x4000AE04: nop

    // 0x4000AE08: bc1f        L_4000AE1C
    if (!c1cs) {
        // 0x4000AE0C: nop
    
            goto L_4000AE1C;
    }
    // 0x4000AE0C: nop

    // 0x4000AE10: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4000AE14: jr          $ra
    // 0x4000AE18: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x4000AE18: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_4000AE1C:
    // 0x4000AE1C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x4000AE20: jr          $ra
    // 0x4000AE24: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x4000AE24: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void ovl_actor_main_AE28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000AE28: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x4000AE2C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x4000AE30: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x4000AE34: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x4000AE38: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x4000AE3C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x4000AE40: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x4000AE44: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x4000AE48: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x4000AE4C: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x4000AE50: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x4000AE54: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x4000AE58: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x4000AE5C: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x4000AE60: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x4000AE64: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x4000AE68: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x4000AE6C: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x4000AE70: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x4000AE74: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x4000AE78: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x4000AE7C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x4000AE80: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x4000AE84: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x4000AE88: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x4000AE8C: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x4000AE90: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
    // 0x4000AE94: lw          $t9, 0xDC($t7)
    ctx->r25 = MEM_W(ctx->r15, 0XDC);
    // 0x4000AE98: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x4000AE9C: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x4000AEA0: blez        $t9, L_4000AFD8
    if (SIGNED(ctx->r25) <= 0) {
        // 0x4000AEA4: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_4000AFD8;
    }
    // 0x4000AEA4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x4000AEA8: sll         $t0, $a1, 2
    ctx->r8 = S32(ctx->r5 << 2);
    // 0x4000AEAC: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x4000AEB0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x4000AEB4: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x4000AEB8: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x4000AEBC: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x4000AEC0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x4000AEC4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x4000AEC8: addu        $s4, $a0, $t0
    ctx->r20 = ADD32(ctx->r4, ctx->r8);
    // 0x4000AECC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x4000AED0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x4000AED4: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x4000AED8: addiu       $fp, $zero, 0x5
    ctx->r30 = ADD32(0, 0X5);
    // 0x4000AEDC: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    // 0x4000AEE0: addiu       $s5, $sp, 0x90
    ctx->r21 = ADD32(ctx->r29, 0X90);
L_4000AEE4:
    // 0x4000AEE4: lw          $s0, 0xE0($s4)
    ctx->r16 = MEM_W(ctx->r20, 0XE0);
    // 0x4000AEE8: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4000AEEC: beq         $s0, $s7, L_4000AFBC
    if (ctx->r16 == ctx->r23) {
        // 0x4000AEF0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000AFBC;
    }
    // 0x4000AEF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000AEF4: jal         0x400006C4
    // 0x4000AEF8: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4000AEF8: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_0:
    // 0x4000AEFC: lw          $t2, 0x90($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X90);
    // 0x4000AF00: lw          $t3, 0x94($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X94);
    // 0x4000AF04: bne         $t2, $fp, L_4000AFBC
    if (ctx->r10 != ctx->r30) {
        // 0x4000AF08: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_4000AFBC;
    }
    // 0x4000AF08: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x4000AF0C: bne         $t3, $at, L_4000AFBC
    if (ctx->r11 != ctx->r1) {
        // 0x4000AF10: sll         $t5, $s2, 2
        ctx->r13 = S32(ctx->r18 << 2);
            goto L_4000AFBC;
    }
    // 0x4000AF10: sll         $t5, $s2, 2
    ctx->r13 = S32(ctx->r18 << 2);
    // 0x4000AF14: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x4000AF18: subu        $t5, $t5, $s2
    ctx->r13 = SUB32(ctx->r13, ctx->r18);
    // 0x4000AF1C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x4000AF20: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x4000AF24: lwc1        $f4, 0x120($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X120);
    // 0x4000AF28: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4000AF2C: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x4000AF30: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x4000AF34: lwc1        $f8, 0x128($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X128);
    // 0x4000AF38: swc1        $f22, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f22.u32l;
    // 0x4000AF3C: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x4000AF40: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x4000AF44: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x4000AF48: jal         0x40001258
    // 0x4000AF4C: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    ovl_actor_main_1258(rdram, ctx);
        goto after_1;
    // 0x4000AF4C: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    after_1:
    // 0x4000AF50: lwc1        $f12, 0x88($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X88);
    // 0x4000AF54: lwc1        $f14, 0x38($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X38);
    // 0x4000AF58: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x4000AF5C: jal         0x40009134
    // 0x4000AF60: nop

    ovl_actor_main_9134(rdram, ctx);
        goto after_2;
    // 0x4000AF60: nop

    after_2:
    // 0x4000AF64: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x4000AF68: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x4000AF6C: beq         $t6, $zero, L_4000AFB8
    if (ctx->r14 == 0) {
        // 0x4000AF70: nop
    
            goto L_4000AFB8;
    }
    // 0x4000AF70: nop

    // 0x4000AF74: beq         $v0, $zero, L_4000AFB8
    if (ctx->r2 == 0) {
        // 0x4000AF78: nop
    
            goto L_4000AFB8;
    }
    // 0x4000AF78: nop

    // 0x4000AF7C: lwc1        $f12, 0x38($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X38);
    // 0x4000AF80: jal         0x4000AD38
    // 0x4000AF84: nop

    ovl_actor_main_AD38(rdram, ctx);
        goto after_3;
    // 0x4000AF84: nop

    after_3:
    // 0x4000AF88: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x4000AF8C: swc1        $f0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f0.u32l;
    // 0x4000AF90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000AF94: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x4000AF98: jal         0x400006C4
    // 0x4000AF9C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_4;
    // 0x4000AF9C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_4:
    // 0x4000AFA0: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x4000AFA4: nop

    // 0x4000AFA8: swc1        $f20, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f20.u32l;
    // 0x4000AFAC: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x4000AFB0: nop

    // 0x4000AFB4: swc1        $f26, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f26.u32l;
L_4000AFB8:
    // 0x4000AFB8: or          $s6, $s6, $s3
    ctx->r22 = ctx->r22 | ctx->r19;
L_4000AFBC:
    // 0x4000AFBC: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x4000AFC0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x4000AFC4: lw          $t0, 0xDC($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XDC);
    // 0x4000AFC8: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x4000AFCC: slt         $at, $s2, $t0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x4000AFD0: bne         $at, $zero, L_4000AEE4
    if (ctx->r1 != 0) {
        // 0x4000AFD4: nop
    
            goto L_4000AEE4;
    }
    // 0x4000AFD4: nop

L_4000AFD8:
    // 0x4000AFD8: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x4000AFDC: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
    // 0x4000AFE0: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x4000AFE4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x4000AFE8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x4000AFEC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x4000AFF0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x4000AFF4: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x4000AFF8: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x4000AFFC: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x4000B000: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x4000B004: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x4000B008: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x4000B00C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x4000B010: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x4000B014: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x4000B018: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x4000B01C: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x4000B020: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x4000B024: jr          $ra
    // 0x4000B028: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x4000B028: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void ovl_actor_main_B02C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B02C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000B030: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4000B034: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000B038: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x4000B03C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4000B040: jal         0x4000AE28
    // 0x4000B044: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_AE28(rdram, ctx);
        goto after_0;
    // 0x4000B044: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x4000B048: bne         $v0, $zero, L_4000B064
    if (ctx->r2 != 0) {
        // 0x4000B04C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_4000B064;
    }
    // 0x4000B04C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x4000B050: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000B054: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x4000B058: jal         0x4000AE28
    // 0x4000B05C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_AE28(rdram, ctx);
        goto after_1;
    // 0x4000B05C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x4000B060: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_4000B064:
    // 0x4000B064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000B068: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000B06C: jr          $ra
    // 0x4000B070: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4000B070: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_B074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B074: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4000B078: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4000B07C: slti        $at, $a1, 0x32
    ctx->r1 = SIGNED(ctx->r5) < 0X32 ? 1 : 0;
    // 0x4000B080: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000B084: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000B088: beq         $at, $zero, L_4000B1A4
    if (ctx->r1 == 0) {
        // 0x4000B08C: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_4000B1A4;
    }
    // 0x4000B08C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x4000B090: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x4000B094: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4000B098: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000B09C: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x4000B0A0: lwc1        $f5, -0x1628($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1628);
    // 0x4000B0A4: lwc1        $f4, -0x1624($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1624);
    // 0x4000B0A8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x4000B0AC: mul.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x4000B0B0: lwc1        $f16, 0x2C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x4000B0B4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4000B0B8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x4000B0BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4000B0C0: add.d       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f18.d + ctx->f10.d;
    // 0x4000B0C4: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000B0C8: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    // 0x4000B0CC: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x4000B0D0: nop

    // 0x4000B0D4: bc1f        L_4000B0E4
    if (!c1cs) {
        // 0x4000B0D8: nop
    
            goto L_4000B0E4;
    }
    // 0x4000B0D8: nop

    // 0x4000B0DC: b           L_4000B100
    // 0x4000B0E0: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
        goto L_4000B100;
    // 0x4000B0E0: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
L_4000B0E4:
    // 0x4000B0E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4000B0E8: nop

    // 0x4000B0EC: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x4000B0F0: nop

    // 0x4000B0F4: bc1f        L_4000B100
    if (!c1cs) {
        // 0x4000B0F8: nop
    
            goto L_4000B100;
    }
    // 0x4000B0F8: nop

    // 0x4000B0FC: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
L_4000B100:
    // 0x4000B100: lwc1        $f16, 0x30($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X30);
    // 0x4000B104: nop

    // 0x4000B108: c.eq.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl == ctx->f16.fl;
    // 0x4000B10C: nop

    // 0x4000B110: bc1t        L_4000B150
    if (c1cs) {
        // 0x4000B114: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000B150;
    }
    // 0x4000B114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000B118: lwc1        $f14, 0x38($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X38);
    // 0x4000B11C: lwc1        $f18, -0x1620($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1620);
    // 0x4000B120: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4000B124: c.eq.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl == ctx->f14.fl;
    // 0x4000B128: nop

    // 0x4000B12C: bc1t        L_4000B164
    if (c1cs) {
        // 0x4000B130: slti        $at, $a3, 0xA
        ctx->r1 = SIGNED(ctx->r7) < 0XA ? 1 : 0;
            goto L_4000B164;
    }
    // 0x4000B130: slti        $at, $a3, 0xA
    ctx->r1 = SIGNED(ctx->r7) < 0XA ? 1 : 0;
    // 0x4000B134: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x4000B138: jal         0x40009134
    // 0x4000B13C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    ovl_actor_main_9134(rdram, ctx);
        goto after_0;
    // 0x4000B13C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x4000B140: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x4000B144: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x4000B148: bne         $v0, $zero, L_4000B160
    if (ctx->r2 != 0) {
        // 0x4000B14C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000B160;
    }
    // 0x4000B14C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_4000B150:
    // 0x4000B150: jal         0x40001A8C
    // 0x4000B154: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x4000B154: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x4000B158: b           L_4000B230
    // 0x4000B15C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000B230;
    // 0x4000B15C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000B160:
    // 0x4000B160: slti        $at, $a3, 0xA
    ctx->r1 = SIGNED(ctx->r7) < 0XA ? 1 : 0;
L_4000B164:
    // 0x4000B164: bne         $at, $zero, L_4000B170
    if (ctx->r1 != 0) {
        // 0x4000B168: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000B170;
    }
    // 0x4000B168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000B16C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_4000B170:
    // 0x4000B170: jal         0x4000B02C
    // 0x4000B174: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    ovl_actor_main_B02C(rdram, ctx);
        goto after_2;
    // 0x4000B174: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_2:
    // 0x4000B178: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x4000B17C: bne         $v0, $zero, L_4000B194
    if (ctx->r2 != 0) {
        // 0x4000B180: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000B194;
    }
    // 0x4000B180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000B184: jal         0x40001A8C
    // 0x4000B188: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_3;
    // 0x4000B188: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x4000B18C: b           L_4000B230
    // 0x4000B190: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000B230;
    // 0x4000B190: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000B194:
    // 0x4000B194: beq         $a1, $zero, L_4000B22C
    if (ctx->r5 == 0) {
        // 0x4000B198: addiu       $t6, $zero, 0x32
        ctx->r14 = ADD32(0, 0X32);
            goto L_4000B22C;
    }
    // 0x4000B198: addiu       $t6, $zero, 0x32
    ctx->r14 = ADD32(0, 0X32);
    // 0x4000B19C: b           L_4000B22C
    // 0x4000B1A0: sw          $t6, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r14;
        goto L_4000B22C;
    // 0x4000B1A0: sw          $t6, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r14;
L_4000B1A4:
    // 0x4000B1A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000B1A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4000B1AC: jal         0x4000B02C
    // 0x4000B1B0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    ovl_actor_main_B02C(rdram, ctx);
        goto after_4;
    // 0x4000B1B0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_4:
    // 0x4000B1B4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x4000B1B8: bne         $v0, $zero, L_4000B1D4
    if (ctx->r2 != 0) {
        // 0x4000B1BC: addiu       $at, $zero, 0x33
        ctx->r1 = ADD32(0, 0X33);
            goto L_4000B1D4;
    }
    // 0x4000B1BC: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x4000B1C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000B1C4: jal         0x40001A8C
    // 0x4000B1C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_5;
    // 0x4000B1C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x4000B1CC: b           L_4000B230
    // 0x4000B1D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000B230;
    // 0x4000B1D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000B1D4:
    // 0x4000B1D4: bne         $a3, $at, L_4000B20C
    if (ctx->r7 != ctx->r1) {
        // 0x4000B1D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000B20C;
    }
    // 0x4000B1D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000B1DC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x4000B1E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x4000B1E4: addiu       $a1, $zero, 0x1AB
    ctx->r5 = ADD32(0, 0X1AB);
    // 0x4000B1E8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000B1EC: jal         0x40008D64
    // 0x4000B1F0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_6;
    // 0x4000B1F0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_6:
    // 0x4000B1F4: lwc1        $f12, 0x38($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X38);
    // 0x4000B1F8: jal         0x4000AD38
    // 0x4000B1FC: nop

    ovl_actor_main_AD38(rdram, ctx);
        goto after_7;
    // 0x4000B1FC: nop

    after_7:
    // 0x4000B200: swc1        $f0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f0.u32l;
    // 0x4000B204: b           L_4000B21C
    // 0x4000B208: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
        goto L_4000B21C;
    // 0x4000B208: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
L_4000B20C:
    // 0x4000B20C: slti        $at, $a3, 0x53
    ctx->r1 = SIGNED(ctx->r7) < 0X53 ? 1 : 0;
    // 0x4000B210: bne         $at, $zero, L_4000B21C
    if (ctx->r1 != 0) {
        // 0x4000B214: addiu       $t8, $zero, 0xA
        ctx->r24 = ADD32(0, 0XA);
            goto L_4000B21C;
    }
    // 0x4000B214: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x4000B218: sw          $t8, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r24;
L_4000B21C:
    // 0x4000B21C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x4000B220: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4000B224: nop

    // 0x4000B228: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
L_4000B22C:
    // 0x4000B22C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000B230:
    // 0x4000B230: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4000B234: jr          $ra
    // 0x4000B238: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x4000B238: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_actor_main_B23C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B23C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000B240: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x4000B244: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x4000B248: beq         $a1, $at, L_4000B264
    if (ctx->r5 == ctx->r1) {
        // 0x4000B24C: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_4000B264;
    }
    // 0x4000B24C: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x4000B250: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4000B254: beq         $a1, $at, L_4000B264
    if (ctx->r5 == ctx->r1) {
        // 0x4000B258: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_4000B264;
    }
    // 0x4000B258: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x4000B25C: bne         $a1, $at, L_4000B268
    if (ctx->r5 != ctx->r1) {
        // 0x4000B260: nop
    
            goto L_4000B268;
    }
    // 0x4000B260: nop

L_4000B264:
    // 0x4000B264: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_4000B268:
    // 0x4000B268: jr          $ra
    // 0x4000B26C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4000B26C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_B270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B270: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x4000B274: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000B278: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000B27C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000B280: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4000B284: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4000B288: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4000B28C: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4000B290: jal         0x40006EB8
    // 0x4000B294: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_0;
    // 0x4000B294: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x4000B298: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x4000B29C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4000B2A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000B2A4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4000B2A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4000B2AC: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    // 0x4000B2B0: jal         0x40006EB8
    // 0x4000B2B4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_1;
    // 0x4000B2B4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x4000B2B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000B2BC: jal         0x40008DB4
    // 0x4000B2C0: nop

    ovl_actor_main_8DB4(rdram, ctx);
        goto after_2;
    // 0x4000B2C0: nop

    after_2:
    // 0x4000B2C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000B2C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000B2CC: jr          $ra
    // 0x4000B2D0: nop

    return;
    // 0x4000B2D0: nop

;}
RECOMP_FUNC void ovl_actor_main_B2D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B2D4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4000B2D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000B2DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000B2E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000B2E4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4000B2E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4000B2EC: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4000B2F0: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4000B2F4: jal         0x40006EB8
    // 0x4000B2F8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_0;
    // 0x4000B2F8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x4000B2FC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4000B300: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4000B304: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000B308: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4000B30C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4000B310: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4000B314: jal         0x40006EB8
    // 0x4000B318: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_1;
    // 0x4000B318: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x4000B31C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000B320: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000B324: jr          $ra
    // 0x4000B328: nop

    return;
    // 0x4000B328: nop

;}
RECOMP_FUNC void ovl_actor_main_B32C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B32C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000B330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000B334: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x4000B338: jal         0x40009428
    // 0x4000B33C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    ovl_actor_main_9428(rdram, ctx);
        goto after_0;
    // 0x4000B33C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x4000B340: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x4000B344: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000B348: bne         $v0, $at, L_4000B358
    if (ctx->r2 != ctx->r1) {
        // 0x4000B34C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000B358;
    }
    // 0x4000B34C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000B350: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x4000B354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000B358:
    // 0x4000B358: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000B35C: jr          $ra
    // 0x4000B360: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4000B360: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_B364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B364: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x4000B368: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4000B36C: swc1        $f12, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f12.u32l;
    // 0x4000B370: jr          $ra
    // 0x4000B374: swc1        $f4, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x4000B374: swc1        $f4, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void ovl_actor_main_B378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B378: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000B37C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000B380: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4000B384: jal         0x4000B32C
    // 0x4000B388: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_actor_main_B32C(rdram, ctx);
        goto after_0;
    // 0x4000B388: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x4000B38C: beq         $v0, $zero, L_4000B3A4
    if (ctx->r2 == 0) {
        // 0x4000B390: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_4000B3A4;
    }
    // 0x4000B390: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000B394: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000B398: jal         0x40009A74
    // 0x4000B39C: nop

    ovl_actor_main_9A74(rdram, ctx);
        goto after_1;
    // 0x4000B39C: nop

    after_1:
    // 0x4000B3A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_4000B3A4:
    // 0x4000B3A4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x4000B3A8: jal         0x4000A268
    // 0x4000B3AC: nop

    ovl_actor_main_A268(rdram, ctx);
        goto after_2;
    // 0x4000B3AC: nop

    after_2:
    // 0x4000B3B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000B3B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000B3B8: jr          $ra
    // 0x4000B3BC: nop

    return;
    // 0x4000B3BC: nop

;}
RECOMP_FUNC void ovl_actor_main_B3C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B3C0: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x4000B3C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000B3C8: sltiu       $at, $t6, 0xF
    ctx->r1 = ctx->r14 < 0XF ? 1 : 0;
    // 0x4000B3CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000B3D0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x4000B3D4: beq         $at, $zero, L_4000B42C
    if (ctx->r1 == 0) {
        // 0x4000B3D8: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_4000B42C;
    }
    // 0x4000B3D8: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x4000B3DC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x4000B3E0: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000B3E4: addu        $at, $at, $t6
    gpr jr_addend_4000B3F0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x4000B3E8: lw          $t6, -0x161C($at)
    ctx->r14 = ADD32(ctx->r1, -0X161C);
    // 0x4000B3EC: nop

    // 0x4000B3F0: jr          $t6
    // 0x4000B3F4: nop

    switch (jr_addend_4000B3F0 >> 2) {
        case 0: goto L_4000B3F8; break;
        case 1: goto L_4000B42C; break;
        case 2: goto L_4000B42C; break;
        case 3: goto L_4000B428; break;
        case 4: goto L_4000B42C; break;
        case 5: goto L_4000B42C; break;
        case 6: goto L_4000B42C; break;
        case 7: goto L_4000B428; break;
        case 8: goto L_4000B428; break;
        case 9: goto L_4000B420; break;
        case 10: goto L_4000B42C; break;
        case 11: goto L_4000B42C; break;
        case 12: goto L_4000B42C; break;
        case 13: goto L_4000B42C; break;
        case 14: goto L_4000B428; break;
        default: switch_error(__func__, 0x4000B3F0, 0x4001E9E4);
    }
    // 0x4000B3F4: nop

L_4000B3F8:
    // 0x4000B3F8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x4000B3FC: jal         0x40009428
    // 0x4000B400: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    ovl_actor_main_9428(rdram, ctx);
        goto after_0;
    // 0x4000B400: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x4000B404: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x4000B408: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x4000B40C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000B410: bne         $v0, $at, L_4000B430
    if (ctx->r2 != ctx->r1) {
        // 0x4000B414: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000B430;
    }
    // 0x4000B414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000B418: b           L_4000B42C
    // 0x4000B41C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
        goto L_4000B42C;
    // 0x4000B41C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_4000B420:
    // 0x4000B420: b           L_4000B42C
    // 0x4000B424: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
        goto L_4000B42C;
    // 0x4000B424: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_4000B428:
    // 0x4000B428: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_4000B42C:
    // 0x4000B42C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000B430:
    // 0x4000B430: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000B434: jr          $ra
    // 0x4000B438: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4000B438: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_B43C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B43C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000B440: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000B444: jal         0x4000B364
    // 0x4000B448: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    ovl_actor_main_B364(rdram, ctx);
        goto after_0;
    // 0x4000B448: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_0:
    // 0x4000B44C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000B450: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000B454: jr          $ra
    // 0x4000B458: nop

    return;
    // 0x4000B458: nop

;}
RECOMP_FUNC void ovl_actor_main_B45C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B45C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000B460: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000B464: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4000B468: jal         0x4000B32C
    // 0x4000B46C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_B32C(rdram, ctx);
        goto after_0;
    // 0x4000B46C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000B470: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000B474: beq         $v0, $zero, L_4000B4B4
    if (ctx->r2 == 0) {
        // 0x4000B478: lw          $t8, 0x1C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X1C);
            goto L_4000B4B4;
    }
    // 0x4000B478: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x4000B47C: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000B480: nop

    // 0x4000B484: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x4000B488: beq         $t7, $zero, L_4000B4A0
    if (ctx->r15 == 0) {
        // 0x4000B48C: nop
    
            goto L_4000B4A0;
    }
    // 0x4000B48C: nop

    // 0x4000B490: jal         0x40001A8C
    // 0x4000B494: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x4000B494: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x4000B498: b           L_4000B4F4
    // 0x4000B49C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4000B4F4;
    // 0x4000B49C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000B4A0:
    // 0x4000B4A0: jal         0x40009A74
    // 0x4000B4A4: nop

    ovl_actor_main_9A74(rdram, ctx);
        goto after_2;
    // 0x4000B4A4: nop

    after_2:
    // 0x4000B4A8: b           L_4000B4F4
    // 0x4000B4AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4000B4F4;
    // 0x4000B4AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000B4B0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
L_4000B4B4:
    // 0x4000B4B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4000B4B8: slti        $at, $t8, 0xB
    ctx->r1 = SIGNED(ctx->r24) < 0XB ? 1 : 0;
    // 0x4000B4BC: bne         $at, $zero, L_4000B4F4
    if (ctx->r1 != 0) {
        // 0x4000B4C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000B4F4;
    }
    // 0x4000B4C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000B4C4: jal         0x4000A108
    // 0x4000B4C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_A108(rdram, ctx);
        goto after_3;
    // 0x4000B4C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_3:
    // 0x4000B4CC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x4000B4D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000B4D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000B4D8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x4000B4DC: nop

    // 0x4000B4E0: bc1f        L_4000B4F4
    if (!c1cs) {
        // 0x4000B4E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000B4F4;
    }
    // 0x4000B4E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000B4E8: jal         0x40009E78
    // 0x4000B4EC: nop

    ovl_actor_main_9E78(rdram, ctx);
        goto after_4;
    // 0x4000B4EC: nop

    after_4:
    // 0x4000B4F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000B4F4:
    // 0x4000B4F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000B4F8: jr          $ra
    // 0x4000B4FC: nop

    return;
    // 0x4000B4FC: nop

;}
RECOMP_FUNC void ovl_actor_main_B500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B500: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x4000B504: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x4000B508: beq         $a1, $at, L_4000B52C
    if (ctx->r5 == ctx->r1) {
        // 0x4000B50C: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_4000B52C;
    }
    // 0x4000B50C: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x4000B510: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x4000B514: beq         $a1, $at, L_4000B548
    if (ctx->r5 == ctx->r1) {
        // 0x4000B518: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_4000B548;
    }
    // 0x4000B518: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x4000B51C: beq         $a1, $at, L_4000B548
    if (ctx->r5 == ctx->r1) {
        // 0x4000B520: nop
    
            goto L_4000B548;
    }
    // 0x4000B520: nop

    // 0x4000B524: jr          $ra
    // 0x4000B528: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4000B528: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_4000B52C:
    // 0x4000B52C: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000B530: nop

    // 0x4000B534: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x4000B538: beq         $t7, $zero, L_4000B54C
    if (ctx->r15 == 0) {
        // 0x4000B53C: nop
    
            goto L_4000B54C;
    }
    // 0x4000B53C: nop

    // 0x4000B540: jr          $ra
    // 0x4000B544: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x4000B544: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_4000B548:
    // 0x4000B548: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_4000B54C:
    // 0x4000B54C: jr          $ra
    // 0x4000B550: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4000B550: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_B554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B554: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000B558: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000B55C: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000B560: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x4000B564: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x4000B568: beq         $t7, $zero, L_4000B588
    if (ctx->r15 == 0) {
        // 0x4000B56C: nop
    
            goto L_4000B588;
    }
    // 0x4000B56C: nop

    // 0x4000B570: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x4000B574: jal         0x4000B364
    // 0x4000B578: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_B364(rdram, ctx);
        goto after_0;
    // 0x4000B578: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000B57C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000B580: b           L_4000B59C
    // 0x4000B584: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
        goto L_4000B59C;
    // 0x4000B584: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
L_4000B588:
    // 0x4000B588: jal         0x4000B364
    // 0x4000B58C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_B364(rdram, ctx);
        goto after_1;
    // 0x4000B58C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x4000B590: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000B594: nop

    // 0x4000B598: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
L_4000B59C:
    // 0x4000B59C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x4000B5A0: andi        $t8, $v0, 0x8
    ctx->r24 = ctx->r2 & 0X8;
    // 0x4000B5A4: beq         $t8, $zero, L_4000B5C4
    if (ctx->r24 == 0) {
        // 0x4000B5A8: andi        $t9, $v0, 0x20
        ctx->r25 = ctx->r2 & 0X20;
            goto L_4000B5C4;
    }
    // 0x4000B5A8: andi        $t9, $v0, 0x20
    ctx->r25 = ctx->r2 & 0X20;
    // 0x4000B5AC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000B5B0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000B5B4: jal         0x40008D20
    // 0x4000B5B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_2;
    // 0x4000B5B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x4000B5BC: b           L_4000B5E0
    // 0x4000B5C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000B5E0;
    // 0x4000B5C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000B5C4:
    // 0x4000B5C4: bne         $t9, $zero, L_4000B5DC
    if (ctx->r25 != 0) {
        // 0x4000B5C8: addiu       $a1, $zero, 0xE
        ctx->r5 = ADD32(0, 0XE);
            goto L_4000B5DC;
    }
    // 0x4000B5C8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x4000B5CC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000B5D0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000B5D4: jal         0x40008D20
    // 0x4000B5D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_3;
    // 0x4000B5D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
L_4000B5DC:
    // 0x4000B5DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000B5E0:
    // 0x4000B5E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000B5E4: jr          $ra
    // 0x4000B5E8: nop

    return;
    // 0x4000B5E8: nop

;}
RECOMP_FUNC void ovl_actor_main_B5EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B5EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000B5F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000B5F4: jal         0x40009428
    // 0x4000B5F8: nop

    ovl_actor_main_9428(rdram, ctx);
        goto after_0;
    // 0x4000B5F8: nop

    after_0:
    // 0x4000B5FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000B600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000B604: jr          $ra
    // 0x4000B608: nop

    return;
    // 0x4000B608: nop

;}
RECOMP_FUNC void ovl_actor_main_B60C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B60C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000B610: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000B614: bne         $a1, $at, L_4000B654
    if (ctx->r5 != ctx->r1) {
        // 0x4000B618: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_4000B654;
    }
    // 0x4000B618: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000B61C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x4000B620: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x4000B624: addiu       $a1, $zero, 0x1B2
    ctx->r5 = ADD32(0, 0X1B2);
    // 0x4000B628: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000B62C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000B630: jal         0x40008D64
    // 0x4000B634: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x4000B634: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000B638: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000B63C: jal         0x40008EF8
    // 0x4000B640: addiu       $a1, $zero, 0x5E2
    ctx->r5 = ADD32(0, 0X5E2);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x4000B640: addiu       $a1, $zero, 0x5E2
    ctx->r5 = ADD32(0, 0X5E2);
    after_1:
    // 0x4000B644: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000B648: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4000B64C: nop

    // 0x4000B650: swc1        $f4, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f4.u32l;
L_4000B654:
    // 0x4000B654: lw          $t7, 0x90($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X90);
    // 0x4000B658: nop

    // 0x4000B65C: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x4000B660: bne         $t8, $zero, L_4000B674
    if (ctx->r24 != 0) {
        // 0x4000B664: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4000B674;
    }
    // 0x4000B664: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000B668: jal         0x40001A8C
    // 0x4000B66C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_2;
    // 0x4000B66C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x4000B670: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000B674:
    // 0x4000B674: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000B678: jr          $ra
    // 0x4000B67C: nop

    return;
    // 0x4000B67C: nop

;}
RECOMP_FUNC void ovl_actor_main_B680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B680: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000B684: bne         $a1, $at, L_4000B6A8
    if (ctx->r5 != ctx->r1) {
        // 0x4000B688: sw          $a2, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r6;
            goto L_4000B6A8;
    }
    // 0x4000B688: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x4000B68C: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000B690: nop

    // 0x4000B694: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x4000B698: bne         $t7, $zero, L_4000B6AC
    if (ctx->r15 != 0) {
        // 0x4000B69C: addiu       $v0, $zero, 0x1F
        ctx->r2 = ADD32(0, 0X1F);
            goto L_4000B6AC;
    }
    // 0x4000B69C: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x4000B6A0: jr          $ra
    // 0x4000B6A4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x4000B6A4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_4000B6A8:
    // 0x4000B6A8: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
L_4000B6AC:
    // 0x4000B6AC: jr          $ra
    // 0x4000B6B0: nop

    return;
    // 0x4000B6B0: nop

;}
RECOMP_FUNC void ovl_actor_main_B6B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B6B4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4000B6B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000B6BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000B6C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000B6C4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4000B6C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4000B6CC: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4000B6D0: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4000B6D4: jal         0x40006EB8
    // 0x4000B6D8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_0;
    // 0x4000B6D8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x4000B6DC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4000B6E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4000B6E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000B6E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4000B6EC: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4000B6F0: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4000B6F4: jal         0x40006EB8
    // 0x4000B6F8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_1;
    // 0x4000B6F8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x4000B6FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000B700: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000B704: jr          $ra
    // 0x4000B708: nop

    return;
    // 0x4000B708: nop

;}
RECOMP_FUNC void ovl_actor_main_B70C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B70C: jr          $ra
    // 0x4000B710: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x4000B710: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ovl_actor_main_B714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B714: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4000B718: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4000B71C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000B720: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000B724: beq         $a1, $at, L_4000B740
    if (ctx->r5 == ctx->r1) {
        // 0x4000B728: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4000B740;
    }
    // 0x4000B728: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000B72C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x4000B730: beq         $a1, $at, L_4000B7AC
    if (ctx->r5 == ctx->r1) {
        // 0x4000B734: nop
    
            goto L_4000B7AC;
    }
    // 0x4000B734: nop

    // 0x4000B738: b           L_4000B7EC
    // 0x4000B73C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000B7EC;
    // 0x4000B73C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000B740:
    // 0x4000B740: lw          $t6, 0x90($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X90);
    // 0x4000B744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000B748: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x4000B74C: beq         $t7, $zero, L_4000B774
    if (ctx->r15 == 0) {
        // 0x4000B750: addiu       $a1, $zero, 0xC
        ctx->r5 = ADD32(0, 0XC);
            goto L_4000B774;
    }
    // 0x4000B750: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x4000B754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000B758: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x4000B75C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000B760: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000B764: jal         0x40008D20
    // 0x4000B768: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4000B768: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4000B76C: b           L_4000B788
    // 0x4000B770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_4000B788;
    // 0x4000B770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_4000B774:
    // 0x4000B774: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000B778: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000B77C: jal         0x40008D20
    // 0x4000B780: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_1;
    // 0x4000B780: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x4000B784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_4000B788:
    // 0x4000B788: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
    // 0x4000B78C: jal         0x4000115C
    // 0x4000B790: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_2;
    // 0x4000B790: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x4000B794: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4000B798: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x4000B79C: jal         0x40000CA0
    // 0x4000B7A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_3;
    // 0x4000B7A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x4000B7A4: b           L_4000B7EC
    // 0x4000B7A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000B7EC;
    // 0x4000B7A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000B7AC:
    // 0x4000B7AC: lw          $t8, 0x90($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X90);
    // 0x4000B7B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000B7B4: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x4000B7B8: beq         $t9, $zero, L_4000B7D0
    if (ctx->r25 == 0) {
        // 0x4000B7BC: nop
    
            goto L_4000B7D0;
    }
    // 0x4000B7BC: nop

    // 0x4000B7C0: jal         0x40001A8C
    // 0x4000B7C4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_4;
    // 0x4000B7C4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_4:
    // 0x4000B7C8: b           L_4000B7EC
    // 0x4000B7CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000B7EC;
    // 0x4000B7CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000B7D0:
    // 0x4000B7D0: lw          $a1, 0xC0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC0);
    // 0x4000B7D4: jal         0x40011944
    // 0x4000B7D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11944(rdram, ctx);
        goto after_5;
    // 0x4000B7D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x4000B7DC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x4000B7E0: sw          $t0, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r8;
    // 0x4000B7E4: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    // 0x4000B7E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000B7EC:
    // 0x4000B7EC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4000B7F0: jr          $ra
    // 0x4000B7F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4000B7F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_B7F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B7F8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x4000B7FC: bne         $a1, $at, L_4000B814
    if (ctx->r5 != ctx->r1) {
        // 0x4000B800: sw          $a2, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r6;
            goto L_4000B814;
    }
    // 0x4000B800: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x4000B804: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000B808: nop

    // 0x4000B80C: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x4000B810: bne         $t7, $zero, L_4000B820
    if (ctx->r15 != 0) {
        // 0x4000B814: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_4000B820;
    }
L_4000B814:
    // 0x4000B814: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x4000B818: bne         $a1, $at, L_4000B828
    if (ctx->r5 != ctx->r1) {
        // 0x4000B81C: addiu       $v0, $zero, 0x1F
        ctx->r2 = ADD32(0, 0X1F);
            goto L_4000B828;
    }
    // 0x4000B81C: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
L_4000B820:
    // 0x4000B820: jr          $ra
    // 0x4000B824: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x4000B824: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_4000B828:
    // 0x4000B828: jr          $ra
    // 0x4000B82C: nop

    return;
    // 0x4000B82C: nop

;}
RECOMP_FUNC void ovl_actor_main_B830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B830: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000B834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000B838: jal         0x400093E4
    // 0x4000B83C: nop

    ovl_actor_main_93E4(rdram, ctx);
        goto after_0;
    // 0x4000B83C: nop

    after_0:
    // 0x4000B840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000B844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000B848: jr          $ra
    // 0x4000B84C: nop

    return;
    // 0x4000B84C: nop

;}
RECOMP_FUNC void ovl_actor_main_B850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B850: jr          $ra
    // 0x4000B854: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x4000B854: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ovl_actor_main_B858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B858: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x4000B85C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000B860: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x4000B864: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x4000B868: lw          $t7, 0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X10);
    // 0x4000B86C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x4000B870: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4000B874: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x4000B878: jal         0x400006C4
    // 0x4000B87C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4000B87C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_0:
    // 0x4000B880: bne         $v0, $zero, L_4000B8D0
    if (ctx->r2 != 0) {
        // 0x4000B884: addiu       $t2, $zero, -0x1
        ctx->r10 = ADD32(0, -0X1);
            goto L_4000B8D0;
    }
    // 0x4000B884: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x4000B888: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x4000B88C: addiu       $t8, $zero, 0x15
    ctx->r24 = ADD32(0, 0X15);
    // 0x4000B890: bne         $v0, $zero, L_4000B8A0
    if (ctx->r2 != 0) {
        // 0x4000B894: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_4000B8A0;
    }
    // 0x4000B894: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000B898: b           L_4000B8D8
    // 0x4000B89C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
        goto L_4000B8D8;
    // 0x4000B89C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
L_4000B8A0:
    // 0x4000B8A0: bne         $v0, $at, L_4000B8B0
    if (ctx->r2 != ctx->r1) {
        // 0x4000B8A4: addiu       $t9, $zero, 0x5
        ctx->r25 = ADD32(0, 0X5);
            goto L_4000B8B0;
    }
    // 0x4000B8A4: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x4000B8A8: b           L_4000B8D8
    // 0x4000B8AC: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
        goto L_4000B8D8;
    // 0x4000B8AC: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
L_4000B8B0:
    // 0x4000B8B0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4000B8B4: bne         $v0, $at, L_4000B8C8
    if (ctx->r2 != ctx->r1) {
        // 0x4000B8B8: addiu       $t1, $zero, -0x1
        ctx->r9 = ADD32(0, -0X1);
            goto L_4000B8C8;
    }
    // 0x4000B8B8: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x4000B8BC: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x4000B8C0: b           L_4000B8D8
    // 0x4000B8C4: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
        goto L_4000B8D8;
    // 0x4000B8C4: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
L_4000B8C8:
    // 0x4000B8C8: b           L_4000B8D8
    // 0x4000B8CC: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
        goto L_4000B8D8;
    // 0x4000B8CC: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_4000B8D0:
    // 0x4000B8D0: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x4000B8D4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
L_4000B8D8:
    // 0x4000B8D8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x4000B8DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000B8E0: beq         $t3, $at, L_4000B914
    if (ctx->r11 == ctx->r1) {
        // 0x4000B8E4: addiu       $t5, $sp, 0x1C
        ctx->r13 = ADD32(ctx->r29, 0X1C);
            goto L_4000B914;
    }
    // 0x4000B8E4: addiu       $t5, $sp, 0x1C
    ctx->r13 = ADD32(ctx->r29, 0X1C);
    // 0x4000B8E8: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x4000B8EC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x4000B8F0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x4000B8F4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x4000B8F8: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x4000B8FC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x4000B900: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4000B904: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x4000B908: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x4000B90C: jal         0x40001258
    // 0x4000B910: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    ovl_actor_main_1258(rdram, ctx);
        goto after_1;
    // 0x4000B910: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    after_1:
L_4000B914:
    // 0x4000B914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000B918: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x4000B91C: jr          $ra
    // 0x4000B920: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x4000B920: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_actor_main_B924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B924: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4000B928: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000B92C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x4000B930: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4000B934: bne         $t6, $at, L_4000B998
    if (ctx->r14 != ctx->r1) {
        // 0x4000B938: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_4000B998;
    }
    // 0x4000B938: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x4000B93C: lui         $t8, 0x4002
    ctx->r24 = S32(0X4002 << 16);
    // 0x4000B940: addiu       $t8, $t8, -0x285C
    ctx->r24 = ADD32(ctx->r24, -0X285C);
    // 0x4000B944: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x4000B948: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x4000B94C: addiu       $t7, $sp, 0x20
    ctx->r15 = ADD32(ctx->r29, 0X20);
    // 0x4000B950: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x4000B954: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x4000B958: lw          $t0, 0xC($t8)
    ctx->r8 = MEM_W(ctx->r24, 0XC);
    // 0x4000B95C: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x4000B960: sw          $t0, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r8;
    // 0x4000B964: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x4000B968: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x4000B96C: jal         0x4000034C
    // 0x4000B970: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_actor_main_34C(rdram, ctx);
        goto after_0;
    // 0x4000B970: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x4000B974: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x4000B978: addu        $a1, $sp, $t1
    ctx->r5 = ADD32(ctx->r29, ctx->r9);
    // 0x4000B97C: lw          $a1, 0x20($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X20);
    // 0x4000B980: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x4000B984: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000B988: beq         $a1, $at, L_4000B998
    if (ctx->r5 == ctx->r1) {
        // 0x4000B98C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_4000B998;
    }
    // 0x4000B98C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x4000B990: jal         0x4000115C
    // 0x4000B994: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_1;
    // 0x4000B994: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_4000B998:
    // 0x4000B998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000B99C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4000B9A0: jr          $ra
    // 0x4000B9A4: nop

    return;
    // 0x4000B9A4: nop

;}
RECOMP_FUNC void ovl_actor_main_B9A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000B9A8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x4000B9AC: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000B9B0: lwc1        $f6, -0x15E0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X15E0);
    // 0x4000B9B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4000B9B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000B9BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4000B9C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000B9C4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x4000B9C8: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x4000B9CC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x4000B9D0: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x4000B9D4: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x4000B9D8: jal         0x40011C5C
    // 0x4000B9DC: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_11C5C(rdram, ctx);
        goto after_0;
    // 0x4000B9DC: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x4000B9E0: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000B9E4: lwc1        $f10, -0x15DC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X15DC);
    // 0x4000B9E8: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4000B9EC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x4000B9F0: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x4000B9F4: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x4000B9F8: bc1t        L_4000BA68
    if (c1cs) {
        // 0x4000B9FC: nop
    
            goto L_4000BA68;
    }
    // 0x4000B9FC: nop

    // 0x4000BA00: lwc1        $f0, 0x44($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
    // 0x4000BA04: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x4000BA08: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x4000BA0C: nop

    // 0x4000BA10: bc1f        L_4000BA30
    if (!c1cs) {
        // 0x4000BA14: nop
    
            goto L_4000BA30;
    }
    // 0x4000BA14: nop

    // 0x4000BA18: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4000BA1C: nop

    // 0x4000BA20: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x4000BA24: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x4000BA28: lwc1        $f0, 0x44($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
    // 0x4000BA2C: nop

L_4000BA30:
    // 0x4000BA30: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4000BA34: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x4000BA38: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4000BA3C: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x4000BA40: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x4000BA44: c.lt.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl < ctx->f6.fl;
    // 0x4000BA48: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x4000BA4C: bc1f        L_4000BA7C
    if (!c1cs) {
        // 0x4000BA50: nop
    
            goto L_4000BA7C;
    }
    // 0x4000BA50: nop

    // 0x4000BA54: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4000BA58: nop

    // 0x4000BA5C: sub.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x4000BA60: b           L_4000BA7C
    // 0x4000BA64: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
        goto L_4000BA7C;
    // 0x4000BA64: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
L_4000BA68:
    // 0x4000BA68: c.eq.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl == ctx->f2.fl;
    // 0x4000BA6C: nop

    // 0x4000BA70: bc1f        L_4000BA80
    if (!c1cs) {
        // 0x4000BA74: lui         $at, 0x42DC
        ctx->r1 = S32(0X42DC << 16);
            goto L_4000BA80;
    }
    // 0x4000BA74: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
    // 0x4000BA78: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
L_4000BA7C:
    // 0x4000BA7C: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
L_4000BA80:
    // 0x4000BA80: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000BA84: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x4000BA88: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4000BA8C: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x4000BA90: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x4000BA94: bc1t        L_4000BAB4
    if (c1cs) {
        // 0x4000BA98: nop
    
            goto L_4000BAB4;
    }
    // 0x4000BA98: nop

    // 0x4000BA9C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4000BAA0: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x4000BAA4: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x4000BAA8: nop

    // 0x4000BAAC: bc1f        L_4000BABC
    if (!c1cs) {
        // 0x4000BAB0: nop
    
            goto L_4000BABC;
    }
    // 0x4000BAB0: nop

L_4000BAB4:
    // 0x4000BAB4: b           L_4000BB2C
    // 0x4000BAB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_4000BB2C;
    // 0x4000BAB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_4000BABC:
    // 0x4000BABC: jal         0x4000B858
    // 0x4000BAC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_B858(rdram, ctx);
        goto after_1;
    // 0x4000BAC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4000BAC4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x4000BAC8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000BACC: beq         $v0, $at, L_4000BB24
    if (ctx->r2 == ctx->r1) {
        // 0x4000BAD0: addiu       $t6, $zero, 0x2
        ctx->r14 = ADD32(0, 0X2);
            goto L_4000BB24;
    }
    // 0x4000BAD0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x4000BAD4: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x4000BAD8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4000BADC: lui         $at, 0x42AA
    ctx->r1 = S32(0X42AA << 16);
    // 0x4000BAE0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4000BAE4: sw          $t6, 0x2F4($s0)
    MEM_W(0X2F4, ctx->r16) = ctx->r14;
    // 0x4000BAE8: sw          $v0, 0x2EC($s0)
    MEM_W(0X2EC, ctx->r16) = ctx->r2;
    // 0x4000BAEC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x4000BAF0: swc1        $f16, 0x2F8($s0)
    MEM_W(0X2F8, ctx->r16) = ctx->f16.u32l;
    // 0x4000BAF4: swc1        $f18, 0x2FC($s0)
    MEM_W(0X2FC, ctx->r16) = ctx->f18.u32l;
    // 0x4000BAF8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4000BAFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000BB00: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4000BB04: jal         0x40008D20
    // 0x4000BB08: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D20(rdram, ctx);
        goto after_2;
    // 0x4000BB08: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
    // 0x4000BB0C: jal         0x4000B924
    // 0x4000BB10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_B924(rdram, ctx);
        goto after_3;
    // 0x4000BB10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x4000BB14: jal         0x40009B20
    // 0x4000BB18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9B20(rdram, ctx);
        goto after_4;
    // 0x4000BB18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4000BB1C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x4000BB20: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
L_4000BB24:
    // 0x4000BB24: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x4000BB28: nop

L_4000BB2C:
    // 0x4000BB2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4000BB30: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4000BB34: jr          $ra
    // 0x4000BB38: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x4000BB38: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_actor_main_BB3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000BB3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000BB40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000BB44: jal         0x40009B58
    // 0x4000BB48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_9B58(rdram, ctx);
        goto after_0;
    // 0x4000BB48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000BB4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000BB50: jal         0x40001A8C
    // 0x4000BB54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x4000BB54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x4000BB58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000BB5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000BB60: jr          $ra
    // 0x4000BB64: nop

    return;
    // 0x4000BB64: nop

;}
RECOMP_FUNC void ovl_actor_main_BB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000BB68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000BB6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000BB70: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000BB74: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x4000BB78: ori         $t7, $t6, 0x8
    ctx->r15 = ctx->r14 | 0X8;
    // 0x4000BB7C: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
    // 0x4000BB80: sw          $t8, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r24;
    // 0x4000BB84: lw          $a1, 0x2EC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2EC);
    // 0x4000BB88: jal         0x4000974C
    // 0x4000BB8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_974C(rdram, ctx);
        goto after_0;
    // 0x4000BB8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000BB90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000BB94: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x4000BB98: lw          $t9, 0x2D4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X2D4);
    // 0x4000BB9C: lw          $t0, 0x2EC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X2EC);
    // 0x4000BBA0: nop

    // 0x4000BBA4: bne         $t9, $t0, L_4000BBB4
    if (ctx->r25 != ctx->r8) {
        // 0x4000BBA8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000BBB4;
    }
    // 0x4000BBA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000BBAC: sw          $t1, 0x2D4($a0)
    MEM_W(0X2D4, ctx->r4) = ctx->r9;
    // 0x4000BBB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000BBB4:
    // 0x4000BBB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000BBB8: jr          $ra
    // 0x4000BBBC: nop

    return;
    // 0x4000BBBC: nop

;}
