#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_mobj_main_C3F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500C3F4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4500C3F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500C3FC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x4500C400: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x4500C404: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x4500C408: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x4500C40C: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x4500C410: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x4500C414: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x4500C418: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x4500C41C: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x4500C420: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x4500C424: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x4500C428: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x4500C42C: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x4500C430: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x4500C434: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x4500C438: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x4500C43C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x4500C440: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x4500C444: jal         0x450006C4
    // 0x4500C448: nop

    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4500C448: nop

    after_0:
    // 0x4500C44C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500C450: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4500C454: jr          $ra
    // 0x4500C458: nop

    return;
    // 0x4500C458: nop

;}
RECOMP_FUNC void ovl_mobj_main_C45C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500C45C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x4500C460: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4500C464: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4500C468: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4500C46C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x4500C470: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x4500C474: jal         0x4500265C
    // 0x4500C478: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_265C(rdram, ctx);
        goto after_0;
    // 0x4500C478: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x4500C47C: beq         $v0, $zero, L_4500C534
    if (ctx->r2 == 0) {
        // 0x4500C480: addiu       $a1, $zero, 0x29
        ctx->r5 = ADD32(0, 0X29);
            goto L_4500C534;
    }
    // 0x4500C480: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4500C484: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x4500C488: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x4500C48C: jal         0x450006C4
    // 0x4500C490: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x4500C490: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x4500C494: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x4500C498: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x4500C49C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4500C4A0: bne         $v1, $at, L_4500C4E8
    if (ctx->r3 != ctx->r1) {
        // 0x4500C4A4: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_4500C4E8;
    }
    // 0x4500C4A4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x4500C4A8: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x4500C4AC: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x4500C4B0: bne         $t6, $at, L_4500C4CC
    if (ctx->r14 != ctx->r1) {
        // 0x4500C4B4: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_4500C4CC;
    }
    // 0x4500C4B4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x4500C4B8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x4500C4BC: jal         0x4500C3F4
    // 0x4500C4C0: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    ovl_mobj_main_C3F4(rdram, ctx);
        goto after_2;
    // 0x4500C4C0: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_2:
    // 0x4500C4C4: b           L_4500C538
    // 0x4500C4C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4500C538;
    // 0x4500C4C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4500C4CC:
    // 0x4500C4CC: jal         0x4500C3F4
    // 0x4500C4D0: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    ovl_mobj_main_C3F4(rdram, ctx);
        goto after_3;
    // 0x4500C4D0: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_3:
    // 0x4500C4D4: jal         0x45008F50
    // 0x4500C4D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_8F50(rdram, ctx);
        goto after_4;
    // 0x4500C4D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4500C4DC: b           L_4500C538
    // 0x4500C4E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4500C538;
    // 0x4500C4E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4500C4E4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_4500C4E8:
    // 0x4500C4E8: bne         $v1, $at, L_4500C538
    if (ctx->r3 != ctx->r1) {
        // 0x4500C4EC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_4500C538;
    }
    // 0x4500C4EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4500C4F0: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x4500C4F4: addiu       $at, $zero, 0x116
    ctx->r1 = ADD32(0, 0X116);
    // 0x4500C4F8: bne         $t7, $at, L_4500C534
    if (ctx->r15 != ctx->r1) {
        // 0x4500C4FC: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_4500C534;
    }
    // 0x4500C4FC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x4500C500: jal         0x4500C3F4
    // 0x4500C504: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    ovl_mobj_main_C3F4(rdram, ctx);
        goto after_5;
    // 0x4500C504: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    after_5:
    // 0x4500C508: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4500C50C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500C510: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4500C514: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4500C518: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4500C51C: jal         0x45002294
    // 0x4500C520: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_mobj_main_2294(rdram, ctx);
        goto after_6;
    // 0x4500C520: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x4500C524: lw          $t8, 0x184($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X184);
    // 0x4500C528: nop

    // 0x4500C52C: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x4500C530: sw          $t9, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r25;
L_4500C534:
    // 0x4500C534: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4500C538:
    // 0x4500C538: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4500C53C: jr          $ra
    // 0x4500C540: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x4500C540: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_mobj_main_C544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500C544: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x4500C548: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x4500C54C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x4500C550: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x4500C554: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4500C558: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x4500C55C: bne         $t6, $zero, L_4500C638
    if (ctx->r14 != 0) {
        // 0x4500C560: addiu       $at, $zero, 0x30
        ctx->r1 = ADD32(0, 0X30);
            goto L_4500C638;
    }
    // 0x4500C560: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x4500C564: lw          $t7, 0x188($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X188);
    // 0x4500C568: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x4500C56C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x4500C570: bne         $t9, $at, L_4500C5F4
    if (ctx->r25 != ctx->r1) {
        // 0x4500C574: sw          $t8, 0x188($a0)
        MEM_W(0X188, ctx->r4) = ctx->r24;
            goto L_4500C5F4;
    }
    // 0x4500C574: sw          $t8, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r24;
    // 0x4500C578: slti        $at, $t8, 0x15
    ctx->r1 = SIGNED(ctx->r24) < 0X15 ? 1 : 0;
    // 0x4500C57C: beq         $at, $zero, L_4500C5CC
    if (ctx->r1 == 0) {
        // 0x4500C580: addiu       $a1, $zero, 0x255
        ctx->r5 = ADD32(0, 0X255);
            goto L_4500C5CC;
    }
    // 0x4500C580: addiu       $a1, $zero, 0x255
    ctx->r5 = ADD32(0, 0X255);
    // 0x4500C584: lwc1        $f4, 0x1DC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1DC);
    // 0x4500C588: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4500C58C: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x4500C590: lwc1        $f6, 0x1DC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1DC);
    // 0x4500C594: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4500C598: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x4500C59C: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x4500C5A0: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x4500C5A4: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    // 0x4500C5A8: jal         0x450006C4
    // 0x4500C5AC: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4500C5AC: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    after_0:
    // 0x4500C5B0: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500C5B4: lwc1        $f16, 0x2C80($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X2C80);
    // 0x4500C5B8: lwc1        $f10, 0x1DC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1DC);
    // 0x4500C5BC: nop

    // 0x4500C5C0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x4500C5C4: b           L_4500CC58
    // 0x4500C5C8: swc1        $f18, 0x1DC($s0)
    MEM_W(0X1DC, ctx->r16) = ctx->f18.u32l;
        goto L_4500CC58;
    // 0x4500C5C8: swc1        $f18, 0x1DC($s0)
    MEM_W(0X1DC, ctx->r16) = ctx->f18.u32l;
L_4500C5CC:
    // 0x4500C5CC: lw          $t1, 0x184($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X184);
    // 0x4500C5D0: sw          $zero, 0x188($s0)
    MEM_W(0X188, ctx->r16) = 0;
    // 0x4500C5D4: ori         $t2, $t1, 0x10
    ctx->r10 = ctx->r9 | 0X10;
    // 0x4500C5D8: sw          $t2, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r10;
    // 0x4500C5DC: jal         0x45000FA0
    // 0x4500C5E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_FA0(rdram, ctx);
        goto after_1;
    // 0x4500C5E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4500C5E4: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500C5E8: lwc1        $f4, 0x2C84($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2C84);
    // 0x4500C5EC: b           L_4500CC58
    // 0x4500C5F0: swc1        $f4, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f4.u32l;
        goto L_4500CC58;
    // 0x4500C5F0: swc1        $f4, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f4.u32l;
L_4500C5F4:
    // 0x4500C5F4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x4500C5F8: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x4500C5FC: nop

    // 0x4500C600: c.eq.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl == ctx->f6.fl;
    // 0x4500C604: nop

    // 0x4500C608: bc1f        L_4500C624
    if (!c1cs) {
        // 0x4500C60C: nop
    
            goto L_4500C624;
    }
    // 0x4500C60C: nop

    // 0x4500C610: lw          $t3, 0x188($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X188);
    // 0x4500C614: nop

    // 0x4500C618: slti        $at, $t3, 0xB
    ctx->r1 = SIGNED(ctx->r11) < 0XB ? 1 : 0;
    // 0x4500C61C: bne         $at, $zero, L_4500CC5C
    if (ctx->r1 != 0) {
        // 0x4500C620: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_4500CC5C;
    }
    // 0x4500C620: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_4500C624:
    // 0x4500C624: lw          $t4, 0x184($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X184);
    // 0x4500C628: sw          $zero, 0x188($s0)
    MEM_W(0X188, ctx->r16) = 0;
    // 0x4500C62C: ori         $t5, $t4, 0x10
    ctx->r13 = ctx->r12 | 0X10;
    // 0x4500C630: b           L_4500CC58
    // 0x4500C634: sw          $t5, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r13;
        goto L_4500CC58;
    // 0x4500C634: sw          $t5, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r13;
L_4500C638:
    // 0x4500C638: andi        $t6, $v0, 0x20
    ctx->r14 = ctx->r2 & 0X20;
    // 0x4500C63C: bne         $t6, $zero, L_4500CA98
    if (ctx->r14 != 0) {
        // 0x4500C640: addiu       $at, $zero, 0x30
        ctx->r1 = ADD32(0, 0X30);
            goto L_4500CA98;
    }
    // 0x4500C640: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x4500C644: jal         0x4500C45C
    // 0x4500C648: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_C45C(rdram, ctx);
        goto after_2;
    // 0x4500C648: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x4500C64C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x4500C650: addiu       $at, $zero, 0xD4
    ctx->r1 = ADD32(0, 0XD4);
    // 0x4500C654: beq         $v0, $at, L_4500C6C0
    if (ctx->r2 == ctx->r1) {
        // 0x4500C658: addiu       $at, $zero, 0xD6
        ctx->r1 = ADD32(0, 0XD6);
            goto L_4500C6C0;
    }
    // 0x4500C658: addiu       $at, $zero, 0xD6
    ctx->r1 = ADD32(0, 0XD6);
    // 0x4500C65C: beq         $v0, $at, L_4500C678
    if (ctx->r2 == ctx->r1) {
        // 0x4500C660: addiu       $at, $zero, 0x116
        ctx->r1 = ADD32(0, 0X116);
            goto L_4500C678;
    }
    // 0x4500C660: addiu       $at, $zero, 0x116
    ctx->r1 = ADD32(0, 0X116);
    // 0x4500C664: beq         $v0, $at, L_4500C678
    if (ctx->r2 == ctx->r1) {
        // 0x4500C668: nop
    
            goto L_4500C678;
    }
    // 0x4500C668: nop

    // 0x4500C66C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x4500C670: b           L_4500C798
    // 0x4500C674: lwc1        $f18, 0x28($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X28);
        goto L_4500C798;
    // 0x4500C674: lwc1        $f18, 0x28($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X28);
L_4500C678:
    // 0x4500C678: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x4500C67C: lwc1        $f0, 0x1E8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1E8);
    // 0x4500C680: nop

    // 0x4500C684: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x4500C688: nop

    // 0x4500C68C: bc1t        L_4500C794
    if (c1cs) {
        // 0x4500C690: nop
    
            goto L_4500C794;
    }
    // 0x4500C690: nop

    // 0x4500C694: lwc1        $f8, 0x1E4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1E4);
    // 0x4500C698: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x4500C69C: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x4500C6A0: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x4500C6A4: swc1        $f10, 0x1E4($s0)
    MEM_W(0X1E4, ctx->r16) = ctx->f10.u32l;
    // 0x4500C6A8: lw          $a3, 0x1E4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X1E4);
    // 0x4500C6AC: jal         0x45005680
    // 0x4500C6B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_5680(rdram, ctx);
        goto after_3;
    // 0x4500C6B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x4500C6B4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x4500C6B8: b           L_4500C798
    // 0x4500C6BC: lwc1        $f18, 0x28($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X28);
        goto L_4500C798;
    // 0x4500C6BC: lwc1        $f18, 0x28($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X28);
L_4500C6C0:
    // 0x4500C6C0: lw          $t7, 0x1E4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1E4);
    // 0x4500C6C4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x4500C6C8: bgtz        $t7, L_4500C748
    if (SIGNED(ctx->r15) > 0) {
        // 0x4500C6CC: nop
    
            goto L_4500C748;
    }
    // 0x4500C6CC: nop

    // 0x4500C6D0: lwc1        $f16, 0x28($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X28);
    // 0x4500C6D4: lwc1        $f18, 0x30($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X30);
    // 0x4500C6D8: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x4500C6DC: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x4500C6E0: sw          $t8, 0x1E4($s0)
    MEM_W(0X1E4, ctx->r16) = ctx->r24;
    // 0x4500C6E4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x4500C6E8: jal         0x45005780
    // 0x4500C6EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_5780(rdram, ctx);
        goto after_4;
    // 0x4500C6EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4500C6F0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x4500C6F4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x4500C6F8: lwc1        $f6, 0x1DC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1DC);
    // 0x4500C6FC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x4500C700: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4500C704: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x4500C708: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x4500C70C: div.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x4500C710: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x4500C714: swc1        $f2, 0x1E0($s0)
    MEM_W(0X1E0, ctx->r16) = ctx->f2.u32l;
    // 0x4500C718: bc1f        L_4500C728
    if (!c1cs) {
        // 0x4500C71C: nop
    
            goto L_4500C728;
    }
    // 0x4500C71C: nop

    // 0x4500C720: b           L_4500C748
    // 0x4500C724: swc1        $f12, 0x1E0($s0)
    MEM_W(0X1E0, ctx->r16) = ctx->f12.u32l;
        goto L_4500C748;
    // 0x4500C724: swc1        $f12, 0x1E0($s0)
    MEM_W(0X1E0, ctx->r16) = ctx->f12.u32l;
L_4500C728:
    // 0x4500C728: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4500C72C: lwc1        $f16, 0x1E0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1E0);
    // 0x4500C730: nop

    // 0x4500C734: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x4500C738: nop

    // 0x4500C73C: bc1f        L_4500C748
    if (!c1cs) {
        // 0x4500C740: nop
    
            goto L_4500C748;
    }
    // 0x4500C740: nop

    // 0x4500C744: swc1        $f0, 0x1E0($s0)
    MEM_W(0X1E0, ctx->r16) = ctx->f0.u32l;
L_4500C748:
    // 0x4500C748: lwc1        $f18, 0x1DC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1DC);
    // 0x4500C74C: lwc1        $f4, 0x1E0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1E0);
    // 0x4500C750: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x4500C754: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x4500C758: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4500C75C: swc1        $f6, 0x1DC($s0)
    MEM_W(0X1DC, ctx->r16) = ctx->f6.u32l;
    // 0x4500C760: lwc1        $f10, 0x1DC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1DC);
    // 0x4500C764: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x4500C768: lw          $t9, 0x1E4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1E4);
    // 0x4500C76C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x4500C770: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x4500C774: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x4500C778: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x4500C77C: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x4500C780: sw          $t0, 0x1E4($s0)
    MEM_W(0X1E4, ctx->r16) = ctx->r8;
    // 0x4500C784: jal         0x45005680
    // 0x4500C788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_5680(rdram, ctx);
        goto after_5;
    // 0x4500C788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x4500C78C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x4500C790: nop

L_4500C794:
    // 0x4500C794: lwc1        $f18, 0x28($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X28);
L_4500C798:
    // 0x4500C798: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x4500C79C: c.eq.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl == ctx->f18.fl;
    // 0x4500C7A0: nop

    // 0x4500C7A4: bc1f        L_4500CC5C
    if (!c1cs) {
        // 0x4500C7A8: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_4500CC5C;
    }
    // 0x4500C7A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x4500C7AC: lw          $t1, 0x184($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X184);
    // 0x4500C7B0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x4500C7B4: ori         $t2, $t1, 0x20
    ctx->r10 = ctx->r9 | 0X20;
    // 0x4500C7B8: sw          $t2, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r10;
    // 0x4500C7BC: beq         $v1, $at, L_4500C808
    if (ctx->r3 == ctx->r1) {
        // 0x4500C7C0: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_4500C808;
    }
    // 0x4500C7C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x4500C7C4: addiu       $at, $zero, 0xD4
    ctx->r1 = ADD32(0, 0XD4);
    // 0x4500C7C8: beq         $v1, $at, L_4500C874
    if (ctx->r3 == ctx->r1) {
        // 0x4500C7CC: addiu       $at, $zero, 0xD6
        ctx->r1 = ADD32(0, 0XD6);
            goto L_4500C874;
    }
    // 0x4500C7CC: addiu       $at, $zero, 0xD6
    ctx->r1 = ADD32(0, 0XD6);
    // 0x4500C7D0: beq         $v1, $at, L_4500C884
    if (ctx->r3 == ctx->r1) {
        // 0x4500C7D4: addiu       $at, $zero, 0x111
        ctx->r1 = ADD32(0, 0X111);
            goto L_4500C884;
    }
    // 0x4500C7D4: addiu       $at, $zero, 0x111
    ctx->r1 = ADD32(0, 0X111);
    // 0x4500C7D8: beq         $v0, $at, L_4500C854
    if (ctx->r2 == ctx->r1) {
        // 0x4500C7DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4500C854;
    }
    // 0x4500C7DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500C7E0: addiu       $at, $zero, 0x112
    ctx->r1 = ADD32(0, 0X112);
    // 0x4500C7E4: beq         $v0, $at, L_4500C854
    if (ctx->r2 == ctx->r1) {
        // 0x4500C7E8: addiu       $at, $zero, 0x113
        ctx->r1 = ADD32(0, 0X113);
            goto L_4500C854;
    }
    // 0x4500C7E8: addiu       $at, $zero, 0x113
    ctx->r1 = ADD32(0, 0X113);
    // 0x4500C7EC: beq         $v0, $at, L_4500C864
    if (ctx->r2 == ctx->r1) {
        // 0x4500C7F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4500C864;
    }
    // 0x4500C7F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500C7F4: addiu       $at, $zero, 0x116
    ctx->r1 = ADD32(0, 0X116);
    // 0x4500C7F8: beq         $v0, $at, L_4500C884
    if (ctx->r2 == ctx->r1) {
        // 0x4500C7FC: nop
    
            goto L_4500C884;
    }
    // 0x4500C7FC: nop

    // 0x4500C800: b           L_4500CC5C
    // 0x4500C804: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_4500CC5C;
    // 0x4500C804: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_4500C808:
    // 0x4500C808: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4500C80C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4500C810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500C814: addiu       $a1, $zero, 0x27D
    ctx->r5 = ADD32(0, 0X27D);
    // 0x4500C818: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x4500C81C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x4500C820: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x4500C824: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x4500C828: jal         0x450075DC
    // 0x4500C82C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_6;
    // 0x4500C82C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x4500C830: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500C834: jal         0x45005D34
    // 0x4500C838: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_7;
    // 0x4500C838: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x4500C83C: sw          $zero, 0x188($s0)
    MEM_W(0X188, ctx->r16) = 0;
    // 0x4500C840: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500C844: jal         0x45000FA0
    // 0x4500C848: addiu       $a1, $zero, 0x256
    ctx->r5 = ADD32(0, 0X256);
    ovl_mobj_main_FA0(rdram, ctx);
        goto after_8;
    // 0x4500C848: addiu       $a1, $zero, 0x256
    ctx->r5 = ADD32(0, 0X256);
    after_8:
    // 0x4500C84C: b           L_4500CC5C
    // 0x4500C850: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_4500CC5C;
    // 0x4500C850: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_4500C854:
    // 0x4500C854: jal         0x45000FA0
    // 0x4500C858: addiu       $a1, $zero, 0x2F7
    ctx->r5 = ADD32(0, 0X2F7);
    ovl_mobj_main_FA0(rdram, ctx);
        goto after_9;
    // 0x4500C858: addiu       $a1, $zero, 0x2F7
    ctx->r5 = ADD32(0, 0X2F7);
    after_9:
    // 0x4500C85C: b           L_4500CC5C
    // 0x4500C860: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_4500CC5C;
    // 0x4500C860: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_4500C864:
    // 0x4500C864: jal         0x45000FA0
    // 0x4500C868: addiu       $a1, $zero, 0x2FE
    ctx->r5 = ADD32(0, 0X2FE);
    ovl_mobj_main_FA0(rdram, ctx);
        goto after_10;
    // 0x4500C868: addiu       $a1, $zero, 0x2FE
    ctx->r5 = ADD32(0, 0X2FE);
    after_10:
    // 0x4500C86C: b           L_4500CC5C
    // 0x4500C870: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_4500CC5C;
    // 0x4500C870: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_4500C874:
    // 0x4500C874: jal         0x45009954
    // 0x4500C878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_9954(rdram, ctx);
        goto after_11;
    // 0x4500C878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x4500C87C: b           L_4500CC5C
    // 0x4500C880: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_4500CC5C;
    // 0x4500C880: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_4500C884:
    // 0x4500C884: lw          $t3, 0x1DC($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1DC);
    // 0x4500C888: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4500C88C: bltz        $t3, L_4500C8B0
    if (SIGNED(ctx->r11) < 0) {
        // 0x4500C890: nop
    
            goto L_4500C8B0;
    }
    // 0x4500C890: nop

    // 0x4500C894: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4500C898: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x4500C89C: addiu       $at, $zero, 0xD6
    ctx->r1 = ADD32(0, 0XD6);
    // 0x4500C8A0: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x4500C8A4: nop

    // 0x4500C8A8: bc1f        L_4500C938
    if (!c1cs) {
        // 0x4500C8AC: nop
    
            goto L_4500C938;
    }
    // 0x4500C8AC: nop

L_4500C8B0:
    // 0x4500C8B0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x4500C8B4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4500C8B8: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x4500C8BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4500C8C0: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x4500C8C4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4500C8C8: lwc1        $f0, 0x1E0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1E0);
    // 0x4500C8CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500C8D0: swc1        $f16, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f16.u32l;
    // 0x4500C8D4: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x4500C8D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4500C8DC: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x4500C8E0: swc1        $f0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f0.u32l;
    // 0x4500C8E4: bc1f        L_4500C910
    if (!c1cs) {
        // 0x4500C8E8: nop
    
            goto L_4500C910;
    }
    // 0x4500C8E8: nop

    // 0x4500C8EC: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x4500C8F0: lw          $t4, 0x184($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X184);
    // 0x4500C8F4: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x4500C8F8: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x4500C8FC: swc1        $f6, 0x1E0($s0)
    MEM_W(0X1E0, ctx->r16) = ctx->f6.u32l;
    // 0x4500C900: lwc1        $f8, 0x1E0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1E0);
    // 0x4500C904: sw          $t5, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r13;
    // 0x4500C908: b           L_4500CC58
    // 0x4500C90C: swc1        $f8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f8.u32l;
        goto L_4500CC58;
    // 0x4500C90C: swc1        $f8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f8.u32l;
L_4500C910:
    // 0x4500C910: jal         0x450024BC
    // 0x4500C914: swc1        $f12, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f12.u32l;
    ovl_mobj_main_24BC(rdram, ctx);
        goto after_12;
    // 0x4500C914: swc1        $f12, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f12.u32l;
    after_12:
    // 0x4500C918: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x4500C91C: addiu       $at, $zero, 0xD6
    ctx->r1 = ADD32(0, 0XD6);
    // 0x4500C920: bne         $t6, $at, L_4500CC58
    if (ctx->r14 != ctx->r1) {
        // 0x4500C924: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4500CC58;
    }
    // 0x4500C924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500C928: jal         0x45000FA0
    // 0x4500C92C: addiu       $a1, $zero, 0x36E
    ctx->r5 = ADD32(0, 0X36E);
    ovl_mobj_main_FA0(rdram, ctx);
        goto after_13;
    // 0x4500C92C: addiu       $a1, $zero, 0x36E
    ctx->r5 = ADD32(0, 0X36E);
    after_13:
    // 0x4500C930: b           L_4500CC5C
    // 0x4500C934: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_4500CC5C;
    // 0x4500C934: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_4500C938:
    // 0x4500C938: bne         $v1, $at, L_4500C950
    if (ctx->r3 != ctx->r1) {
        // 0x4500C93C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4500C950;
    }
    // 0x4500C93C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500C940: jal         0x45000FA0
    // 0x4500C944: addiu       $a1, $zero, 0x36D
    ctx->r5 = ADD32(0, 0X36D);
    ovl_mobj_main_FA0(rdram, ctx);
        goto after_14;
    // 0x4500C944: addiu       $a1, $zero, 0x36D
    ctx->r5 = ADD32(0, 0X36D);
    after_14:
    // 0x4500C948: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x4500C94C: nop

L_4500C950:
    // 0x4500C950: lwc1        $f0, 0x34($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X34);
    // 0x4500C954: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x4500C958: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x4500C95C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x4500C960: bc1f        L_4500C9B0
    if (!c1cs) {
        // 0x4500C964: nop
    
            goto L_4500C9B0;
    }
    // 0x4500C964: nop

    // 0x4500C968: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4500C96C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x4500C970: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4500C974: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x4500C978: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x4500C97C: bc1f        L_4500C998
    if (!c1cs) {
        // 0x4500C980: swc1        $f10, 0x18($s0)
        MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
            goto L_4500C998;
    }
    // 0x4500C980: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
    // 0x4500C984: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x4500C988: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4500C98C: nop

    // 0x4500C990: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x4500C994: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
L_4500C998:
    // 0x4500C998: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x4500C99C: nop

    // 0x4500C9A0: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x4500C9A4: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x4500C9A8: b           L_4500CA0C
    // 0x4500C9AC: swc1        $f10, 0x1E8($s0)
    MEM_W(0X1E8, ctx->r16) = ctx->f10.u32l;
        goto L_4500CA0C;
    // 0x4500C9AC: swc1        $f10, 0x1E8($s0)
    MEM_W(0X1E8, ctx->r16) = ctx->f10.u32l;
L_4500C9B0:
    // 0x4500C9B0: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x4500C9B4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x4500C9B8: bc1f        L_4500CA0C
    if (!c1cs) {
        // 0x4500C9BC: nop
    
            goto L_4500CA0C;
    }
    // 0x4500C9BC: nop

    // 0x4500C9C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4500C9C4: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x4500C9C8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4500C9CC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x4500C9D0: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x4500C9D4: swc1        $f16, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f16.u32l;
    // 0x4500C9D8: bc1f        L_4500C9F4
    if (!c1cs) {
        // 0x4500C9DC: nop
    
            goto L_4500C9F4;
    }
    // 0x4500C9DC: nop

    // 0x4500C9E0: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x4500C9E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4500C9E8: nop

    // 0x4500C9EC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4500C9F0: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
L_4500C9F4:
    // 0x4500C9F4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x4500C9F8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4500C9FC: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x4500CA00: nop

    // 0x4500CA04: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x4500CA08: swc1        $f16, 0x1E8($s0)
    MEM_W(0X1E8, ctx->r16) = ctx->f16.u32l;
L_4500CA0C:
    // 0x4500CA0C: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500CA10: lwc1        $f2, 0x2C88($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X2C88);
    // 0x4500CA14: lwc1        $f0, 0x1E0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1E0);
    // 0x4500CA18: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x4500CA1C: mul.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x4500CA20: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x4500CA24: swc1        $f0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f0.u32l;
    // 0x4500CA28: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x4500CA2C: swc1        $f18, 0x1E0($s0)
    MEM_W(0X1E0, ctx->r16) = ctx->f18.u32l;
    // 0x4500CA30: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x4500CA34: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x4500CA38: nop

    // 0x4500CA3C: c.eq.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl == ctx->f8.fl;
    // 0x4500CA40: nop

    // 0x4500CA44: bc1f        L_4500CA58
    if (!c1cs) {
        // 0x4500CA48: nop
    
            goto L_4500CA58;
    }
    // 0x4500CA48: nop

    // 0x4500CA4C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4500CA50: nop

    // 0x4500CA54: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
L_4500CA58:
    // 0x4500CA58: lw          $t7, 0x184($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X184);
    // 0x4500CA5C: lw          $t9, 0x1DC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1DC);
    // 0x4500CA60: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x4500CA64: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x4500CA68: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x4500CA6C: sw          $t8, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r24;
    // 0x4500CA70: jal         0x4500034C
    // 0x4500CA74: sw          $t0, 0x1DC($s0)
    MEM_W(0X1DC, ctx->r16) = ctx->r8;
    ovl_mobj_main_34C(rdram, ctx);
        goto after_15;
    // 0x4500CA74: sw          $t0, 0x1DC($s0)
    MEM_W(0X1DC, ctx->r16) = ctx->r8;
    after_15:
    // 0x4500CA78: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x4500CA7C: bne         $at, $zero, L_4500CC5C
    if (ctx->r1 != 0) {
        // 0x4500CA80: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_4500CC5C;
    }
    // 0x4500CA80: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x4500CA84: lw          $t1, 0x1DC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1DC);
    // 0x4500CA88: nop

    // 0x4500CA8C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x4500CA90: b           L_4500CC58
    // 0x4500CA94: sw          $t2, 0x1DC($s0)
    MEM_W(0X1DC, ctx->r16) = ctx->r10;
        goto L_4500CC58;
    // 0x4500CA94: sw          $t2, 0x1DC($s0)
    MEM_W(0X1DC, ctx->r16) = ctx->r10;
L_4500CA98:
    // 0x4500CA98: lw          $t3, 0x188($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X188);
    // 0x4500CA9C: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x4500CAA0: addiu       $v1, $t3, 0x1
    ctx->r3 = ADD32(ctx->r11, 0X1);
    // 0x4500CAA4: beq         $v0, $at, L_4500CAC0
    if (ctx->r2 == ctx->r1) {
        // 0x4500CAA8: sw          $v1, 0x188($s0)
        MEM_W(0X188, ctx->r16) = ctx->r3;
            goto L_4500CAC0;
    }
    // 0x4500CAA8: sw          $v1, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->r3;
    // 0x4500CAAC: addiu       $at, $zero, 0xD4
    ctx->r1 = ADD32(0, 0XD4);
    // 0x4500CAB0: beq         $v0, $at, L_4500CAE4
    if (ctx->r2 == ctx->r1) {
        // 0x4500CAB4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_4500CAE4;
    }
    // 0x4500CAB4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500CAB8: b           L_4500CC5C
    // 0x4500CABC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_4500CC5C;
    // 0x4500CABC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_4500CAC0:
    // 0x4500CAC0: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x4500CAC4: bne         $v1, $at, L_4500CC58
    if (ctx->r3 != ctx->r1) {
        // 0x4500CAC8: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_4500CC58;
    }
    // 0x4500CAC8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4500CACC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x4500CAD0: jal         0x450006C4
    // 0x4500CAD4: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_16;
    // 0x4500CAD4: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    after_16:
    // 0x4500CAD8: b           L_4500CC5C
    // 0x4500CADC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_4500CC5C;
    // 0x4500CADC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x4500CAE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_4500CAE4:
    // 0x4500CAE4: bne         $v1, $at, L_4500CBB4
    if (ctx->r3 != ctx->r1) {
        // 0x4500CAE8: addiu       $a3, $zero, -0x1
        ctx->r7 = ADD32(0, -0X1);
            goto L_4500CBB4;
    }
    // 0x4500CAE8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x4500CAEC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x4500CAF0: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x4500CAF4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4500CAF8: jal         0x450006C4
    // 0x4500CAFC: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_17;
    // 0x4500CAFC: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_17:
    // 0x4500CB00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500CB04: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    // 0x4500CB08: jal         0x4500224C
    // 0x4500CB0C: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    ovl_mobj_main_224C(rdram, ctx);
        goto after_18;
    // 0x4500CB0C: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_18:
    // 0x4500CB10: lwc1        $f0, 0x1E8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1E8);
    // 0x4500CB14: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x4500CB18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500CB1C: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x4500CB20: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x4500CB24: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x4500CB28: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x4500CB2C: jal         0x4500109C
    // 0x4500CB30: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_19;
    // 0x4500CB30: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    after_19:
    // 0x4500CB34: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x4500CB38: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4500CB3C: lwc1        $f0, 0x1E8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1E8);
    // 0x4500CB40: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x4500CB44: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x4500CB48: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x4500CB4C: bc1f        L_4500CB5C
    if (!c1cs) {
        // 0x4500CB50: addiu       $a0, $zero, -0x1
        ctx->r4 = ADD32(0, -0X1);
            goto L_4500CB5C;
    }
    // 0x4500CB50: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x4500CB54: b           L_4500CB98
    // 0x4500CB58: addiu       $a3, $zero, 0x2E
    ctx->r7 = ADD32(0, 0X2E);
        goto L_4500CB98;
    // 0x4500CB58: addiu       $a3, $zero, 0x2E
    ctx->r7 = ADD32(0, 0X2E);
L_4500CB5C:
    // 0x4500CB5C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4500CB60: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x4500CB64: c.eq.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl == ctx->f0.fl;
    // 0x4500CB68: nop

    // 0x4500CB6C: bc1f        L_4500CB7C
    if (!c1cs) {
        // 0x4500CB70: nop
    
            goto L_4500CB7C;
    }
    // 0x4500CB70: nop

    // 0x4500CB74: b           L_4500CB98
    // 0x4500CB78: addiu       $a3, $zero, 0x2F
    ctx->r7 = ADD32(0, 0X2F);
        goto L_4500CB98;
    // 0x4500CB78: addiu       $a3, $zero, 0x2F
    ctx->r7 = ADD32(0, 0X2F);
L_4500CB7C:
    // 0x4500CB7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4500CB80: nop

    // 0x4500CB84: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x4500CB88: nop

    // 0x4500CB8C: bc1f        L_4500CB9C
    if (!c1cs) {
        // 0x4500CB90: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_4500CB9C;
    }
    // 0x4500CB90: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4500CB94: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
L_4500CB98:
    // 0x4500CB98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_4500CB9C:
    // 0x4500CB9C: beq         $a3, $at, L_4500CC58
    if (ctx->r7 == ctx->r1) {
        // 0x4500CBA0: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_4500CC58;
    }
    // 0x4500CBA0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x4500CBA4: jal         0x45000CA0
    // 0x4500CBA8: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    ovl_mobj_main_CA0(rdram, ctx);
        goto after_20;
    // 0x4500CBA8: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_20:
    // 0x4500CBAC: b           L_4500CC5C
    // 0x4500CBB0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_4500CC5C;
    // 0x4500CBB0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_4500CBB4:
    // 0x4500CBB4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x4500CBB8: bne         $v1, $at, L_4500CC44
    if (ctx->r3 != ctx->r1) {
        // 0x4500CBBC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4500CC44;
    }
    // 0x4500CBBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500CBC0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x4500CBC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4500CBC8: lwc1        $f0, 0x1E8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1E8);
    // 0x4500CBCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x4500CBD0: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x4500CBD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4500CBD8: bc1f        L_4500CBE8
    if (!c1cs) {
        // 0x4500CBDC: lui         $t6, 0x4501
        ctx->r14 = S32(0X4501 << 16);
            goto L_4500CBE8;
    }
    // 0x4500CBDC: lui         $t6, 0x4501
    ctx->r14 = S32(0X4501 << 16);
    // 0x4500CBE0: b           L_4500CC28
    // 0x4500CBE4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_4500CC28;
    // 0x4500CBE4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_4500CBE8:
    // 0x4500CBE8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x4500CBEC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4500CBF0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x4500CBF4: c.eq.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl == ctx->f0.fl;
    // 0x4500CBF8: nop

    // 0x4500CBFC: bc1f        L_4500CC0C
    if (!c1cs) {
        // 0x4500CC00: nop
    
            goto L_4500CC0C;
    }
    // 0x4500CC00: nop

    // 0x4500CC04: b           L_4500CC28
    // 0x4500CC08: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_4500CC28;
    // 0x4500CC08: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_4500CC0C:
    // 0x4500CC0C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4500CC10: nop

    // 0x4500CC14: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x4500CC18: nop

    // 0x4500CC1C: bc1f        L_4500CC2C
    if (!c1cs) {
        // 0x4500CC20: sll         $t5, $v0, 3
        ctx->r13 = S32(ctx->r2 << 3);
            goto L_4500CC2C;
    }
    // 0x4500CC20: sll         $t5, $v0, 3
    ctx->r13 = S32(ctx->r2 << 3);
    // 0x4500CC24: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_4500CC28:
    // 0x4500CC28: sll         $t5, $v0, 3
    ctx->r13 = S32(ctx->r2 << 3);
L_4500CC2C:
    // 0x4500CC2C: addiu       $t6, $t6, -0x400
    ctx->r14 = ADD32(ctx->r14, -0X400);
    // 0x4500CC30: addu        $a2, $t5, $t6
    ctx->r6 = ADD32(ctx->r13, ctx->r14);
    // 0x4500CC34: jal         0x45005A5C
    // 0x4500CC38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_5A5C(rdram, ctx);
        goto after_21;
    // 0x4500CC38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_21:
    // 0x4500CC3C: b           L_4500CC5C
    // 0x4500CC40: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_4500CC5C;
    // 0x4500CC40: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_4500CC44:
    // 0x4500CC44: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x4500CC48: bne         $v1, $at, L_4500CC58
    if (ctx->r3 != ctx->r1) {
        // 0x4500CC4C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4500CC58;
    }
    // 0x4500CC4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500CC50: jal         0x450024BC
    // 0x4500CC54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_24BC(rdram, ctx);
        goto after_22;
    // 0x4500CC54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_22:
L_4500CC58:
    // 0x4500CC58: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_4500CC5C:
    // 0x4500CC5C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x4500CC60: jr          $ra
    // 0x4500CC64: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x4500CC64: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void ovl_mobj_main_CC68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500CC68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500CC6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500CC70: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500CC74: nop

    // 0x4500CC78: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x4500CC7C: beq         $t7, $zero, L_4500CC90
    if (ctx->r15 == 0) {
        // 0x4500CC80: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4500CC90;
    }
    // 0x4500CC80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500CC84: jal         0x4500A128
    // 0x4500CC88: nop

    ovl_mobj_main_A128(rdram, ctx);
        goto after_0;
    // 0x4500CC88: nop

    after_0:
    // 0x4500CC8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500CC90:
    // 0x4500CC90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500CC94: jr          $ra
    // 0x4500CC98: nop

    return;
    // 0x4500CC98: nop

;}
RECOMP_FUNC void ovl_mobj_main_CC9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500CC9C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4500CCA0: lw          $t6, 0x204($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X204);
    // 0x4500CCA4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x4500CCA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4500CCAC: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x4500CCB0: sw          $t7, 0x204($a0)
    MEM_W(0X204, ctx->r4) = ctx->r15;
    // 0x4500CCB4: sw          $zero, 0x188($a0)
    MEM_W(0X188, ctx->r4) = 0;
    // 0x4500CCB8: swc1        $f0, 0x1F0($a0)
    MEM_W(0X1F0, ctx->r4) = ctx->f0.u32l;
    // 0x4500CCBC: swc1        $f0, 0x1F4($a0)
    MEM_W(0X1F4, ctx->r4) = ctx->f0.u32l;
    // 0x4500CCC0: swc1        $f0, 0x1FC($a0)
    MEM_W(0X1FC, ctx->r4) = ctx->f0.u32l;
    // 0x4500CCC4: jr          $ra
    // 0x4500CCC8: swc1        $f4, 0x214($a0)
    MEM_W(0X214, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x4500CCC8: swc1        $f4, 0x214($a0)
    MEM_W(0X214, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void ovl_mobj_main_CCCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500CCCC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x4500CCD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500CCD4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x4500CCD8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x4500CCDC: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x4500CCE0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x4500CCE4: jal         0x450006C4
    // 0x4500CCE8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4500CCE8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x4500CCEC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x4500CCF0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x4500CCF4: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4500CCF8: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4500CCFC: div.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x4500CD00: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x4500CD04: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x4500CD08: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x4500CD0C: nop

    // 0x4500CD10: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x4500CD14: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x4500CD18: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x4500CD1C: nop

    // 0x4500CD20: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x4500CD24: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x4500CD28: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x4500CD2C: div.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f14.fl);
    // 0x4500CD30: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x4500CD34: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x4500CD38: nop

    // 0x4500CD3C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x4500CD40: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x4500CD44: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x4500CD48: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x4500CD4C: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x4500CD50: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x4500CD54: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x4500CD58: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x4500CD5C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x4500CD60: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x4500CD64: bc1f        L_4500CD70
    if (!c1cs) {
        // 0x4500CD68: nop
    
            goto L_4500CD70;
    }
    // 0x4500CD68: nop

    // 0x4500CD6C: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
L_4500CD70:
    // 0x4500CD70: lwc1        $f0, 0x18($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X18);
    // 0x4500CD74: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4500CD78: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x4500CD7C: swc1        $f12, 0x1F8($a3)
    MEM_W(0X1F8, ctx->r7) = ctx->f12.u32l;
    // 0x4500CD80: bc1f        L_4500CD98
    if (!c1cs) {
        // 0x4500CD84: swc1        $f18, 0x1F0($a3)
        MEM_W(0X1F0, ctx->r7) = ctx->f18.u32l;
            goto L_4500CD98;
    }
    // 0x4500CD84: swc1        $f18, 0x1F0($a3)
    MEM_W(0X1F0, ctx->r7) = ctx->f18.u32l;
    // 0x4500CD88: swc1        $f2, 0x1F4($a3)
    MEM_W(0X1F4, ctx->r7) = ctx->f2.u32l;
    // 0x4500CD8C: swc1        $f12, 0x1FC($a3)
    MEM_W(0X1FC, ctx->r7) = ctx->f12.u32l;
    // 0x4500CD90: b           L_4500CE38
    // 0x4500CD94: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
        goto L_4500CE38;
    // 0x4500CD94: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_4500CD98:
    // 0x4500CD98: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x4500CD9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4500CDA0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x4500CDA4: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x4500CDA8: nop

    // 0x4500CDAC: bc1f        L_4500CDC4
    if (!c1cs) {
        // 0x4500CDB0: nop
    
            goto L_4500CDC4;
    }
    // 0x4500CDB0: nop

    // 0x4500CDB4: swc1        $f12, 0x1F4($a3)
    MEM_W(0X1F4, ctx->r7) = ctx->f12.u32l;
    // 0x4500CDB8: swc1        $f2, 0x1FC($a3)
    MEM_W(0X1FC, ctx->r7) = ctx->f2.u32l;
    // 0x4500CDBC: b           L_4500CE38
    // 0x4500CDC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_4500CE38;
    // 0x4500CDC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_4500CDC4:
    // 0x4500CDC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4500CDC8: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x4500CDCC: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x4500CDD0: nop

    // 0x4500CDD4: bc1f        L_4500CE10
    if (!c1cs) {
        // 0x4500CDD8: nop
    
            goto L_4500CE10;
    }
    // 0x4500CDD8: nop

    // 0x4500CDDC: lw          $t8, 0x204($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X204);
    // 0x4500CDE0: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x4500CDE4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4500CDE8: andi        $t9, $t8, 0x100
    ctx->r25 = ctx->r24 & 0X100;
    // 0x4500CDEC: swc1        $f2, 0x1F4($a3)
    MEM_W(0X1F4, ctx->r7) = ctx->f2.u32l;
    // 0x4500CDF0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x4500CDF4: beq         $t9, $zero, L_4500CE38
    if (ctx->r25 == 0) {
        // 0x4500CDF8: swc1        $f8, 0x1FC($a3)
        MEM_W(0X1FC, ctx->r7) = ctx->f8.u32l;
            goto L_4500CE38;
    }
    // 0x4500CDF8: swc1        $f8, 0x1FC($a3)
    MEM_W(0X1FC, ctx->r7) = ctx->f8.u32l;
    // 0x4500CDFC: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x4500CE00: beq         $at, $zero, L_4500CE38
    if (ctx->r1 == 0) {
        // 0x4500CE04: nop
    
            goto L_4500CE38;
    }
    // 0x4500CE04: nop

    // 0x4500CE08: b           L_4500CEB8
    // 0x4500CE0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_4500CEB8;
    // 0x4500CE0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_4500CE10:
    // 0x4500CE10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4500CE14: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x4500CE18: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x4500CE1C: nop

    // 0x4500CE20: bc1f        L_4500CE38
    if (!c1cs) {
        // 0x4500CE24: nop
    
            goto L_4500CE38;
    }
    // 0x4500CE24: nop

    // 0x4500CE28: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4500CE2C: swc1        $f2, 0x1FC($a3)
    MEM_W(0X1FC, ctx->r7) = ctx->f2.u32l;
    // 0x4500CE30: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x4500CE34: swc1        $f16, 0x1F4($a3)
    MEM_W(0X1F4, ctx->r7) = ctx->f16.u32l;
L_4500CE38:
    // 0x4500CE38: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x4500CE3C: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x4500CE40: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x4500CE44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x4500CE48: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x4500CE4C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x4500CE50: mul.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x4500CE54: add.s       $f0, $f6, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x4500CE58: swc1        $f0, 0x208($a3)
    MEM_W(0X208, ctx->r7) = ctx->f0.u32l;
    // 0x4500CE5C: add.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x4500CE60: swc1        $f18, 0x20C($a3)
    MEM_W(0X20C, ctx->r7) = ctx->f18.u32l;
    // 0x4500CE64: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4500CE68: nop

    // 0x4500CE6C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x4500CE70: nop

    // 0x4500CE74: bc1f        L_4500CE8C
    if (!c1cs) {
        // 0x4500CE78: nop
    
            goto L_4500CE8C;
    }
    // 0x4500CE78: nop

    // 0x4500CE7C: lw          $t0, 0x204($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X204);
    // 0x4500CE80: nop

    // 0x4500CE84: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x4500CE88: sw          $t1, 0x204($a3)
    MEM_W(0X204, ctx->r7) = ctx->r9;
L_4500CE8C:
    // 0x4500CE8C: lwc1        $f6, 0x20C($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X20C);
    // 0x4500CE90: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4500CE94: nop

    // 0x4500CE98: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x4500CE9C: nop

    // 0x4500CEA0: bc1f        L_4500CEB8
    if (!c1cs) {
        // 0x4500CEA4: nop
    
            goto L_4500CEB8;
    }
    // 0x4500CEA4: nop

    // 0x4500CEA8: lw          $t2, 0x204($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X204);
    // 0x4500CEAC: nop

    // 0x4500CEB0: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x4500CEB4: sw          $t3, 0x204($a3)
    MEM_W(0X204, ctx->r7) = ctx->r11;
L_4500CEB8:
    // 0x4500CEB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500CEBC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x4500CEC0: jr          $ra
    // 0x4500CEC4: nop

    return;
    // 0x4500CEC4: nop

;}
RECOMP_FUNC void ovl_mobj_main_CEC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500CEC8: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x4500CECC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4500CED0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4500CED4: lw          $v0, 0x204($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X204);
    // 0x4500CED8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4500CEDC: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x4500CEE0: bne         $t6, $zero, L_4500CF54
    if (ctx->r14 != 0) {
        // 0x4500CEE4: andi        $t3, $v0, 0x8
        ctx->r11 = ctx->r2 & 0X8;
            goto L_4500CF54;
    }
    // 0x4500CEE4: andi        $t3, $v0, 0x8
    ctx->r11 = ctx->r2 & 0X8;
    // 0x4500CEE8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4500CEEC: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x4500CEF0: nop

    // 0x4500CEF4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x4500CEF8: nop

    // 0x4500CEFC: bc1t        L_4500D294
    if (c1cs) {
        // 0x4500CF00: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4500D294;
    }
    // 0x4500CF00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4500CF04: jal         0x4500CCCC
    // 0x4500CF08: nop

    ovl_mobj_main_CCCC(rdram, ctx);
        goto after_0;
    // 0x4500CF08: nop

    after_0:
    // 0x4500CF0C: beq         $v0, $zero, L_4500CF40
    if (ctx->r2 == 0) {
        // 0x4500CF10: lui         $at, 0xFFFF
        ctx->r1 = S32(0XFFFF << 16);
            goto L_4500CF40;
    }
    // 0x4500CF10: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x4500CF14: lw          $t7, 0x204($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X204);
    // 0x4500CF18: lw          $t9, 0x184($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X184);
    // 0x4500CF1C: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x4500CF20: ori         $at, $at, 0x7FFF
    ctx->r1 = ctx->r1 | 0X7FFF;
    // 0x4500CF24: sw          $t8, 0x204($s0)
    MEM_W(0X204, ctx->r16) = ctx->r24;
    // 0x4500CF28: ori         $t2, $t8, 0x8
    ctx->r10 = ctx->r24 | 0X8;
    // 0x4500CF2C: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x4500CF30: sw          $t0, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r8;
    // 0x4500CF34: sw          $t2, 0x204($s0)
    MEM_W(0X204, ctx->r16) = ctx->r10;
    // 0x4500CF38: b           L_4500CF48
    // 0x4500CF3C: sw          $zero, 0x188($s0)
    MEM_W(0X188, ctx->r16) = 0;
        goto L_4500CF48;
    // 0x4500CF3C: sw          $zero, 0x188($s0)
    MEM_W(0X188, ctx->r16) = 0;
L_4500CF40:
    // 0x4500CF40: jal         0x4500CC9C
    // 0x4500CF44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_CC9C(rdram, ctx);
        goto after_1;
    // 0x4500CF44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_4500CF48:
    // 0x4500CF48: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4500CF4C: b           L_4500D290
    // 0x4500CF50: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
        goto L_4500D290;
    // 0x4500CF50: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
L_4500CF54:
    // 0x4500CF54: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x4500CF58: beq         $t3, $zero, L_4500CFB8
    if (ctx->r11 == 0) {
        // 0x4500CF5C: swc1        $f10, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
            goto L_4500CFB8;
    }
    // 0x4500CF5C: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    // 0x4500CF60: lw          $v0, 0x184($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X184);
    // 0x4500CF64: nop

    // 0x4500CF68: andi        $t4, $v0, 0x800
    ctx->r12 = ctx->r2 & 0X800;
    // 0x4500CF6C: beq         $t4, $zero, L_4500D290
    if (ctx->r12 == 0) {
        // 0x4500CF70: andi        $t5, $v0, 0x1000
        ctx->r13 = ctx->r2 & 0X1000;
            goto L_4500D290;
    }
    // 0x4500CF70: andi        $t5, $v0, 0x1000
    ctx->r13 = ctx->r2 & 0X1000;
    // 0x4500CF74: beq         $t5, $zero, L_4500CF8C
    if (ctx->r13 == 0) {
        // 0x4500CF78: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_4500CF8C;
    }
    // 0x4500CF78: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x4500CF7C: jal         0x4500CC9C
    // 0x4500CF80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_CC9C(rdram, ctx);
        goto after_2;
    // 0x4500CF80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x4500CF84: b           L_4500D294
    // 0x4500CF88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4500D294;
    // 0x4500CF88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4500CF8C:
    // 0x4500CF8C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4500CF90: sw          $zero, 0x188($s0)
    MEM_W(0X188, ctx->r16) = 0;
    // 0x4500CF94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500CF98: addiu       $a1, $zero, 0x14A
    ctx->r5 = ADD32(0, 0X14A);
    // 0x4500CF9C: jal         0x45000F80
    // 0x4500CFA0: swc1        $f4, 0x214($s0)
    MEM_W(0X214, ctx->r16) = ctx->f4.u32l;
    ovl_mobj_main_F80(rdram, ctx);
        goto after_3;
    // 0x4500CFA0: swc1        $f4, 0x214($s0)
    MEM_W(0X214, ctx->r16) = ctx->f4.u32l;
    after_3:
    // 0x4500CFA4: lw          $t6, 0x204($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X204);
    // 0x4500CFA8: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x4500CFAC: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x4500CFB0: b           L_4500D290
    // 0x4500CFB4: sw          $t7, 0x204($s0)
    MEM_W(0X204, ctx->r16) = ctx->r15;
        goto L_4500D290;
    // 0x4500CFB4: sw          $t7, 0x204($s0)
    MEM_W(0X204, ctx->r16) = ctx->r15;
L_4500CFB8:
    // 0x4500CFB8: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x4500CFBC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4500CFC0: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x4500CFC4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x4500CFC8: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x4500CFCC: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x4500CFD0: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    // 0x4500CFD4: jal         0x450006C4
    // 0x4500CFD8: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_4;
    // 0x4500CFD8: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x4500CFDC: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x4500CFE0: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x4500CFE4: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x4500CFE8: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x4500CFEC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x4500CFF0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4500CFF4: jal         0x450006C4
    // 0x4500CFF8: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_5;
    // 0x4500CFF8: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_5:
    // 0x4500CFFC: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x4500D000: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x4500D004: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x4500D008: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x4500D00C: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x4500D010: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x4500D014: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x4500D018: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x4500D01C: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    // 0x4500D020: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x4500D024: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x4500D028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500D02C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x4500D030: jal         0x4500109C
    // 0x4500D034: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_6;
    // 0x4500D034: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x4500D038: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x4500D03C: lwc1        $f10, 0x214($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X214);
    // 0x4500D040: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x4500D044: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x4500D048: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x4500D04C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4500D050: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x4500D054: bc1f        L_4500D060
    if (!c1cs) {
        // 0x4500D058: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_4500D060;
    }
    // 0x4500D058: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x4500D05C: sw          $t8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r24;
L_4500D060:
    // 0x4500D060: lw          $v0, 0x204($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X204);
    // 0x4500D064: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x4500D068: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
    // 0x4500D06C: beq         $t9, $zero, L_4500D084
    if (ctx->r25 == 0) {
        // 0x4500D070: andi        $t0, $v0, 0x4
        ctx->r8 = ctx->r2 & 0X4;
            goto L_4500D084;
    }
    // 0x4500D070: andi        $t0, $v0, 0x4
    ctx->r8 = ctx->r2 & 0X4;
    // 0x4500D074: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x4500D078: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4500D07C: nop

    // 0x4500D080: neg.s       $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = -ctx->f16.fl;
L_4500D084:
    // 0x4500D084: beq         $t0, $zero, L_4500D098
    if (ctx->r8 == 0) {
        // 0x4500D088: lui         $at, 0x4060
        ctx->r1 = S32(0X4060 << 16);
            goto L_4500D098;
    }
    // 0x4500D088: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x4500D08C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4500D090: nop

    // 0x4500D094: neg.s       $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = -ctx->f18.fl;
L_4500D098:
    // 0x4500D098: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x4500D09C: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x4500D0A0: bc1f        L_4500D0B0
    if (!c1cs) {
        // 0x4500D0A4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_4500D0B0;
    }
    // 0x4500D0A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4500D0A8: b           L_4500D0B4
    // 0x4500D0AC: neg.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = -ctx->f16.fl;
        goto L_4500D0B4;
    // 0x4500D0AC: neg.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = -ctx->f16.fl;
L_4500D0B0:
    // 0x4500D0B0: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
L_4500D0B4:
    // 0x4500D0B4: lwc1        $f2, 0x208($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X208);
    // 0x4500D0B8: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x4500D0BC: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x4500D0C0: nop

    // 0x4500D0C4: bc1f        L_4500D0D8
    if (!c1cs) {
        // 0x4500D0C8: nop
    
            goto L_4500D0D8;
    }
    // 0x4500D0C8: nop

    // 0x4500D0CC: sub.s       $f0, $f2, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x4500D0D0: b           L_4500D0E0
    // 0x4500D0D4: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
        goto L_4500D0E0;
    // 0x4500D0D4: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
L_4500D0D8:
    // 0x4500D0D8: sub.s       $f0, $f2, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x4500D0DC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_4500D0E0:
    // 0x4500D0E0: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x4500D0E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4500D0E8: bc1f        L_4500D0F4
    if (!c1cs) {
        // 0x4500D0EC: nop
    
            goto L_4500D0F4;
    }
    // 0x4500D0EC: nop

    // 0x4500D0F0: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
L_4500D0F4:
    // 0x4500D0F4: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x4500D0F8: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x4500D0FC: bc1f        L_4500D10C
    if (!c1cs) {
        // 0x4500D100: nop
    
            goto L_4500D10C;
    }
    // 0x4500D100: nop

    // 0x4500D104: b           L_4500D110
    // 0x4500D108: neg.s       $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = -ctx->f18.fl;
        goto L_4500D110;
    // 0x4500D108: neg.s       $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = -ctx->f18.fl;
L_4500D10C:
    // 0x4500D10C: mov.s       $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = ctx->f18.fl;
L_4500D110:
    // 0x4500D110: lwc1        $f2, 0x20C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20C);
    // 0x4500D114: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x4500D118: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x4500D11C: nop

    // 0x4500D120: bc1f        L_4500D134
    if (!c1cs) {
        // 0x4500D124: nop
    
            goto L_4500D134;
    }
    // 0x4500D124: nop

    // 0x4500D128: sub.s       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x4500D12C: b           L_4500D13C
    // 0x4500D130: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
        goto L_4500D13C;
    // 0x4500D130: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
L_4500D134:
    // 0x4500D134: sub.s       $f0, $f2, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x4500D138: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_4500D13C:
    // 0x4500D13C: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x4500D140: nop

    // 0x4500D144: bc1f        L_4500D150
    if (!c1cs) {
        // 0x4500D148: nop
    
            goto L_4500D150;
    }
    // 0x4500D148: nop

    // 0x4500D14C: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
L_4500D150:
    // 0x4500D150: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x4500D154: nop

    // 0x4500D158: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x4500D15C: nop

    // 0x4500D160: bc1t        L_4500D1A8
    if (c1cs) {
        // 0x4500D164: nop
    
            goto L_4500D1A8;
    }
    // 0x4500D164: nop

    // 0x4500D168: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4500D16C: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x4500D170: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    // 0x4500D174: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x4500D178: lwc1        $f6, 0x34($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X34);
    // 0x4500D17C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x4500D180: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x4500D184: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x4500D188: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x4500D18C: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x4500D190: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x4500D194: jal         0x450007C0
    // 0x4500D198: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    ovl_mobj_main_7C0(rdram, ctx);
        goto after_7;
    // 0x4500D198: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x4500D19C: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x4500D1A0: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x4500D1A4: nop

L_4500D1A8:
    // 0x4500D1A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4500D1AC: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x4500D1B0: swc1        $f16, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f16.u32l;
    // 0x4500D1B4: swc1        $f18, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
    // 0x4500D1B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500D1BC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x4500D1C0: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    // 0x4500D1C4: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x4500D1C8: jal         0x4500109C
    // 0x4500D1CC: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_8;
    // 0x4500D1CC: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x4500D1D0: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x4500D1D4: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x4500D1D8: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x4500D1DC: lwc1        $f8, 0x40($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X40);
    // 0x4500D1E0: lwc1        $f4, 0x48($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X48);
    // 0x4500D1E4: swc1        $f6, 0x214($s0)
    MEM_W(0X214, ctx->r16) = ctx->f6.u32l;
    // 0x4500D1E8: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x4500D1EC: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x4500D1F0: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
    // 0x4500D1F4: swc1        $f6, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f6.u32l;
    // 0x4500D1F8: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x4500D1FC: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x4500D200: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x4500D204: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x4500D208: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x4500D20C: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x4500D210: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x4500D214: lw          $t1, 0x184($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X184);
    // 0x4500D218: nop

    // 0x4500D21C: andi        $t2, $t1, 0x1000
    ctx->r10 = ctx->r9 & 0X1000;
    // 0x4500D220: beq         $t2, $zero, L_4500D240
    if (ctx->r10 == 0) {
        // 0x4500D224: nop
    
            goto L_4500D240;
    }
    // 0x4500D224: nop

    // 0x4500D228: beq         $t3, $zero, L_4500D240
    if (ctx->r11 == 0) {
        // 0x4500D22C: nop
    
            goto L_4500D240;
    }
    // 0x4500D22C: nop

    // 0x4500D230: lw          $t4, 0x188($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X188);
    // 0x4500D234: nop

    // 0x4500D238: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x4500D23C: sw          $t5, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->r13;
L_4500D240:
    // 0x4500D240: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x4500D244: lwc1        $f10, 0x208($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X208);
    // 0x4500D248: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x4500D24C: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x4500D250: nop

    // 0x4500D254: bc1f        L_4500D274
    if (!c1cs) {
        // 0x4500D258: nop
    
            goto L_4500D274;
    }
    // 0x4500D258: nop

    // 0x4500D25C: lwc1        $f6, 0x20C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20C);
    // 0x4500D260: nop

    // 0x4500D264: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x4500D268: nop

    // 0x4500D26C: bc1t        L_4500D288
    if (c1cs) {
        // 0x4500D270: nop
    
            goto L_4500D288;
    }
    // 0x4500D270: nop

L_4500D274:
    // 0x4500D274: lw          $t6, 0x188($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X188);
    // 0x4500D278: nop

    // 0x4500D27C: slti        $at, $t6, 0xF
    ctx->r1 = SIGNED(ctx->r14) < 0XF ? 1 : 0;
    // 0x4500D280: bne         $at, $zero, L_4500D294
    if (ctx->r1 != 0) {
        // 0x4500D284: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4500D294;
    }
    // 0x4500D284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4500D288:
    // 0x4500D288: jal         0x4500CC9C
    // 0x4500D28C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_CC9C(rdram, ctx);
        goto after_9;
    // 0x4500D28C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
L_4500D290:
    // 0x4500D290: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4500D294:
    // 0x4500D294: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4500D298: jr          $ra
    // 0x4500D29C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x4500D29C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void ovl_mobj_main_D2A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500D2A0: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x4500D2A4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x4500D2A8: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x4500D2AC: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x4500D2B0: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x4500D2B4: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x4500D2B8: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x4500D2BC: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x4500D2C0: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x4500D2C4: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x4500D2C8: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x4500D2CC: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x4500D2D0: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x4500D2D4: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x4500D2D8: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x4500D2DC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x4500D2E0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x4500D2E4: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500D2E8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x4500D2EC: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x4500D2F0: beq         $t7, $zero, L_4500D308
    if (ctx->r15 == 0) {
        // 0x4500D2F4: addiu       $s2, $zero, -0x1
        ctx->r18 = ADD32(0, -0X1);
            goto L_4500D308;
    }
    // 0x4500D2F4: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x4500D2F8: jal         0x4500A5BC
    // 0x4500D2FC: nop

    ovl_mobj_main_A5BC(rdram, ctx);
        goto after_0;
    // 0x4500D2FC: nop

    after_0:
    // 0x4500D300: b           L_4500D544
    // 0x4500D304: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_4500D544;
    // 0x4500D304: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_4500D308:
    // 0x4500D308: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x4500D30C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500D310: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x4500D314: jal         0x4500265C
    // 0x4500D318: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    ovl_mobj_main_265C(rdram, ctx);
        goto after_1;
    // 0x4500D318: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    after_1:
    // 0x4500D31C: beq         $v0, $zero, L_4500D540
    if (ctx->r2 == 0) {
        // 0x4500D320: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_4500D540;
    }
    // 0x4500D320: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x4500D324: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x4500D328: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x4500D32C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x4500D330: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x4500D334: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x4500D338: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x4500D33C: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x4500D340: nop

L_4500D344:
    // 0x4500D344: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x4500D348: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    // 0x4500D34C: jal         0x45005780
    // 0x4500D350: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_mobj_main_5780(rdram, ctx);
        goto after_2;
    // 0x4500D350: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x4500D354: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x4500D358: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x4500D35C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4500D360: jal         0x450006C4
    // 0x4500D364: addiu       $a2, $sp, 0x8C
    ctx->r6 = ADD32(ctx->r29, 0X8C);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_3;
    // 0x4500D364: addiu       $a2, $sp, 0x8C
    ctx->r6 = ADD32(ctx->r29, 0X8C);
    after_3:
    // 0x4500D368: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x4500D36C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4500D370: jal         0x450006C4
    // 0x4500D374: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_4;
    // 0x4500D374: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    after_4:
    // 0x4500D378: bne         $v0, $zero, L_4500D544
    if (ctx->r2 != 0) {
        // 0x4500D37C: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_4500D544;
    }
    // 0x4500D37C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x4500D380: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x4500D384: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x4500D388: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x4500D38C: lwc1        $f16, 0x94($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X94);
    // 0x4500D390: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x4500D394: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500D398: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x4500D39C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x4500D3A0: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x4500D3A4: jal         0x45005780
    // 0x4500D3A8: nop

    ovl_mobj_main_5780(rdram, ctx);
        goto after_5;
    // 0x4500D3A8: nop

    after_5:
    // 0x4500D3AC: c.le.s      $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f28.fl <= ctx->f0.fl;
    // 0x4500D3B0: mfc1        $a2, $f30
    ctx->r6 = (int32_t)ctx->f30.u32l;
    // 0x4500D3B4: bc1f        L_4500D3D4
    if (!c1cs) {
        // 0x4500D3B8: mov.s       $f14, $f22
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
            goto L_4500D3D4;
    }
    // 0x4500D3B8: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    // 0x4500D3BC: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x4500D3C0: nop

    // 0x4500D3C4: bc1f        L_4500D3D4
    if (!c1cs) {
        // 0x4500D3C8: nop
    
            goto L_4500D3D4;
    }
    // 0x4500D3C8: nop

    // 0x4500D3CC: b           L_4500D438
    // 0x4500D3D0: mov.s       $f20, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    ctx->f20.fl = ctx->f28.fl;
        goto L_4500D438;
    // 0x4500D3D0: mov.s       $f20, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    ctx->f20.fl = ctx->f28.fl;
L_4500D3D4:
    // 0x4500D3D4: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
    // 0x4500D3D8: nop

    // 0x4500D3DC: bc1f        L_4500D3FC
    if (!c1cs) {
        // 0x4500D3E0: nop
    
            goto L_4500D3FC;
    }
    // 0x4500D3E0: nop

    // 0x4500D3E4: c.lt.s      $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f0.fl < ctx->f26.fl;
    // 0x4500D3E8: nop

    // 0x4500D3EC: bc1f        L_4500D3FC
    if (!c1cs) {
        // 0x4500D3F0: nop
    
            goto L_4500D3FC;
    }
    // 0x4500D3F0: nop

    // 0x4500D3F4: b           L_4500D438
    // 0x4500D3F8: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
        goto L_4500D438;
    // 0x4500D3F8: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
L_4500D3FC:
    // 0x4500D3FC: c.le.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl <= ctx->f0.fl;
    // 0x4500D400: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x4500D404: bc1f        L_4500D42C
    if (!c1cs) {
        // 0x4500D408: nop
    
            goto L_4500D42C;
    }
    // 0x4500D408: nop

    // 0x4500D40C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4500D410: nop

    // 0x4500D414: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x4500D418: nop

    // 0x4500D41C: bc1f        L_4500D430
    if (!c1cs) {
        // 0x4500D420: lui         $at, 0x4387
        ctx->r1 = S32(0X4387 << 16);
            goto L_4500D430;
    }
    // 0x4500D420: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x4500D424: b           L_4500D438
    // 0x4500D428: mov.s       $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    ctx->f20.fl = ctx->f26.fl;
        goto L_4500D438;
    // 0x4500D428: mov.s       $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    ctx->f20.fl = ctx->f26.fl;
L_4500D42C:
    // 0x4500D42C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
L_4500D430:
    // 0x4500D430: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x4500D434: nop

L_4500D438:
    // 0x4500D438: jal         0x450058D8
    // 0x4500D43C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_mobj_main_58D8(rdram, ctx);
        goto after_6;
    // 0x4500D43C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_6:
    // 0x4500D440: beq         $v0, $zero, L_4500D450
    if (ctx->r2 == 0) {
        // 0x4500D444: nop
    
            goto L_4500D450;
    }
    // 0x4500D444: nop

    // 0x4500D448: b           L_4500D46C
    // 0x4500D44C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_4500D46C;
    // 0x4500D44C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_4500D450:
    // 0x4500D450: mfc1        $a2, $f30
    ctx->r6 = (int32_t)ctx->f30.u32l;
    // 0x4500D454: add.s       $f12, $f20, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f24.fl;
    // 0x4500D458: jal         0x450058D8
    // 0x4500D45C: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    ovl_mobj_main_58D8(rdram, ctx);
        goto after_7;
    // 0x4500D45C: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    after_7:
    // 0x4500D460: beq         $v0, $zero, L_4500D470
    if (ctx->r2 == 0) {
        // 0x4500D464: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_4500D470;
    }
    // 0x4500D464: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4500D468: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_4500D46C:
    // 0x4500D46C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_4500D470:
    // 0x4500D470: beq         $s2, $at, L_4500D52C
    if (ctx->r18 == ctx->r1) {
        // 0x4500D474: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4500D52C;
    }
    // 0x4500D474: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500D478: lw          $t8, 0xC($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XC);
    // 0x4500D47C: lui         $s0, 0x4501
    ctx->r16 = S32(0X4501 << 16);
    // 0x4500D480: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x4500D484: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x4500D488: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x4500D48C: addu        $s0, $s0, $t9
    ctx->r16 = ADD32(ctx->r16, ctx->r25);
    // 0x4500D490: lbu         $s0, 0x786($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X786);
    // 0x4500D494: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x4500D498: bne         $s0, $at, L_4500D4A8
    if (ctx->r16 != ctx->r1) {
        // 0x4500D49C: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_4500D4A8;
    }
    // 0x4500D49C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x4500D4A0: b           L_4500D4AC
    // 0x4500D4A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_4500D4AC;
    // 0x4500D4A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_4500D4A8:
    // 0x4500D4A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4500D4AC:
    // 0x4500D4AC: beq         $v0, $zero, L_4500D4F0
    if (ctx->r2 == 0) {
        // 0x4500D4B0: sll         $t0, $s0, 3
        ctx->r8 = S32(ctx->r16 << 3);
            goto L_4500D4F0;
    }
    // 0x4500D4B0: sll         $t0, $s0, 3
    ctx->r8 = S32(ctx->r16 << 3);
    // 0x4500D4B4: lui         $t9, 0x4501
    ctx->r25 = S32(0X4501 << 16);
    // 0x4500D4B8: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x4500D4BC: lw          $t9, 0x47C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X47C);
    // 0x4500D4C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500D4C4: jalr        $t9
    // 0x4500D4C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x4500D4C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_8:
    // 0x4500D4CC: lw          $t1, 0xC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC);
    // 0x4500D4D0: lui         $s0, 0x4501
    ctx->r16 = S32(0X4501 << 16);
    // 0x4500D4D4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x4500D4D8: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x4500D4DC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x4500D4E0: addu        $s0, $s0, $t2
    ctx->r16 = ADD32(ctx->r16, ctx->r10);
    // 0x4500D4E4: lbu         $s0, 0x786($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X786);
    // 0x4500D4E8: nop

    // 0x4500D4EC: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_4500D4F0:
    // 0x4500D4F0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x4500D4F4: bne         $v1, $at, L_4500D504
    if (ctx->r3 != ctx->r1) {
        // 0x4500D4F8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_4500D504;
    }
    // 0x4500D4F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x4500D4FC: b           L_4500D504
    // 0x4500D500: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_4500D504;
    // 0x4500D500: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_4500D504:
    // 0x4500D504: beq         $v0, $zero, L_4500D540
    if (ctx->r2 == 0) {
        // 0x4500D508: sll         $t3, $s0, 3
        ctx->r11 = S32(ctx->r16 << 3);
            goto L_4500D540;
    }
    // 0x4500D508: sll         $t3, $s0, 3
    ctx->r11 = S32(ctx->r16 << 3);
    // 0x4500D50C: lui         $t9, 0x4501
    ctx->r25 = S32(0X4501 << 16);
    // 0x4500D510: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x4500D514: lw          $t9, 0x480($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X480);
    // 0x4500D518: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500D51C: jalr        $t9
    // 0x4500D520: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x4500D520: nop

    after_9:
    // 0x4500D524: b           L_4500D544
    // 0x4500D528: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_4500D544;
    // 0x4500D528: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_4500D52C:
    // 0x4500D52C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x4500D530: jal         0x4500265C
    // 0x4500D534: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    ovl_mobj_main_265C(rdram, ctx);
        goto after_10;
    // 0x4500D534: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    after_10:
    // 0x4500D538: bne         $v0, $zero, L_4500D344
    if (ctx->r2 != 0) {
        // 0x4500D53C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_4500D344;
    }
    // 0x4500D53C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_4500D540:
    // 0x4500D540: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_4500D544:
    // 0x4500D544: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x4500D548: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x4500D54C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x4500D550: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x4500D554: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x4500D558: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x4500D55C: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x4500D560: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x4500D564: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x4500D568: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x4500D56C: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x4500D570: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x4500D574: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x4500D578: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x4500D57C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x4500D580: jr          $ra
    // 0x4500D584: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x4500D584: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void ovl_mobj_main_D588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500D588: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4500D58C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4500D590: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4500D594: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x4500D598: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4500D59C: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x4500D5A0: beq         $t6, $zero, L_4500D63C
    if (ctx->r14 == 0) {
        // 0x4500D5A4: andi        $t7, $v0, 0x20
        ctx->r15 = ctx->r2 & 0X20;
            goto L_4500D63C;
    }
    // 0x4500D5A4: andi        $t7, $v0, 0x20
    ctx->r15 = ctx->r2 & 0X20;
    // 0x4500D5A8: bne         $t7, $zero, L_4500D614
    if (ctx->r15 != 0) {
        // 0x4500D5AC: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_4500D614;
    }
    // 0x4500D5AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4500D5B0: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    // 0x4500D5B4: jal         0x45007894
    // 0x4500D5B8: lui         $a3, 0x3E80
    ctx->r7 = S32(0X3E80 << 16);
    ovl_mobj_main_7894(rdram, ctx);
        goto after_0;
    // 0x4500D5B8: lui         $a3, 0x3E80
    ctx->r7 = S32(0X3E80 << 16);
    after_0:
    // 0x4500D5BC: beq         $v0, $zero, L_4500D63C
    if (ctx->r2 == 0) {
        // 0x4500D5C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4500D63C;
    }
    // 0x4500D5C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500D5C4: jal         0x45000F80
    // 0x4500D5C8: addiu       $a1, $zero, 0x18E
    ctx->r5 = ADD32(0, 0X18E);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_1;
    // 0x4500D5C8: addiu       $a1, $zero, 0x18E
    ctx->r5 = ADD32(0, 0X18E);
    after_1:
    // 0x4500D5CC: lw          $t8, 0x184($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X184);
    // 0x4500D5D0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x4500D5D4: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x4500D5D8: bne         $t9, $zero, L_4500D5FC
    if (ctx->r25 != 0) {
        // 0x4500D5DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4500D5FC;
    }
    // 0x4500D5DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500D5E0: jal         0x45007AD4
    // 0x4500D5E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_7AD4(rdram, ctx);
        goto after_2;
    // 0x4500D5E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x4500D5E8: lw          $t0, 0x184($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X184);
    // 0x4500D5EC: nop

    // 0x4500D5F0: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x4500D5F4: b           L_4500D63C
    // 0x4500D5F8: sw          $t1, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r9;
        goto L_4500D63C;
    // 0x4500D5F8: sw          $t1, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r9;
L_4500D5FC:
    // 0x4500D5FC: jal         0x45007AD4
    // 0x4500D600: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    ovl_mobj_main_7AD4(rdram, ctx);
        goto after_3;
    // 0x4500D600: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_3:
    // 0x4500D604: jal         0x45005C10
    // 0x4500D608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_5C10(rdram, ctx);
        goto after_4;
    // 0x4500D608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4500D60C: b           L_4500D640
    // 0x4500D610: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4500D640;
    // 0x4500D610: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4500D614:
    // 0x4500D614: lw          $t2, 0x188($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X188);
    // 0x4500D618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500D61C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x4500D620: slti        $at, $t3, 0x1E
    ctx->r1 = SIGNED(ctx->r11) < 0X1E ? 1 : 0;
    // 0x4500D624: bne         $at, $zero, L_4500D63C
    if (ctx->r1 != 0) {
        // 0x4500D628: sw          $t3, 0x188($s0)
        MEM_W(0X188, ctx->r16) = ctx->r11;
            goto L_4500D63C;
    }
    // 0x4500D628: sw          $t3, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->r11;
    // 0x4500D62C: jal         0x45000F80
    // 0x4500D630: addiu       $a1, $zero, 0x19E
    ctx->r5 = ADD32(0, 0X19E);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_5;
    // 0x4500D630: addiu       $a1, $zero, 0x19E
    ctx->r5 = ADD32(0, 0X19E);
    after_5:
    // 0x4500D634: jal         0x45005C10
    // 0x4500D638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_5C10(rdram, ctx);
        goto after_6;
    // 0x4500D638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_4500D63C:
    // 0x4500D63C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4500D640:
    // 0x4500D640: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4500D644: jr          $ra
    // 0x4500D648: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x4500D648: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_mobj_main_D64C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500D64C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4500D650: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4500D654: lw          $t6, 0x1E4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1E4);
    // 0x4500D658: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x4500D65C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x4500D660: beq         $t7, $zero, L_4500D6B0
    if (ctx->r15 == 0) {
        // 0x4500D664: addiu       $v0, $a0, 0x1DC
        ctx->r2 = ADD32(ctx->r4, 0X1DC);
            goto L_4500D6B0;
    }
    // 0x4500D664: addiu       $v0, $a0, 0x1DC
    ctx->r2 = ADD32(ctx->r4, 0X1DC);
    // 0x4500D668: addiu       $v0, $a0, 0x1DC
    ctx->r2 = ADD32(ctx->r4, 0X1DC);
    // 0x4500D66C: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x4500D670: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x4500D674: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x4500D678: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x4500D67C: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x4500D680: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x4500D684: nop

    // 0x4500D688: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x4500D68C: nop

    // 0x4500D690: bc1f        L_4500D708
    if (!c1cs) {
        // 0x4500D694: nop
    
            goto L_4500D708;
    }
    // 0x4500D694: nop

    // 0x4500D698: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x4500D69C: swc1        $f2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f2.u32l;
    // 0x4500D6A0: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x4500D6A4: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x4500D6A8: b           L_4500D708
    // 0x4500D6AC: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
        goto L_4500D708;
    // 0x4500D6AC: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
L_4500D6B0:
    // 0x4500D6B0: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x4500D6B4: lui         $at, 0x4332
    ctx->r1 = S32(0X4332 << 16);
    // 0x4500D6B8: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x4500D6BC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4500D6C0: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x4500D6C4: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x4500D6C8: addiu       $a1, $zero, 0x37D
    ctx->r5 = ADD32(0, 0X37D);
    // 0x4500D6CC: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x4500D6D0: nop

    // 0x4500D6D4: bc1f        L_4500D708
    if (!c1cs) {
        // 0x4500D6D8: nop
    
            goto L_4500D708;
    }
    // 0x4500D6D8: nop

    // 0x4500D6DC: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x4500D6E0: swc1        $f2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f2.u32l;
    // 0x4500D6E4: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x4500D6E8: sw          $t1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r9;
    // 0x4500D6EC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x4500D6F0: jal         0x45000F80
    // 0x4500D6F4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    ovl_mobj_main_F80(rdram, ctx);
        goto after_0;
    // 0x4500D6F4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_0:
    // 0x4500D6F8: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x4500D6FC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x4500D700: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x4500D704: nop

L_4500D708:
    // 0x4500D708: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x4500D70C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x4500D710: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x4500D714: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x4500D718: cvt.w.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = CVT_W_S(ctx->f0.fl);
    // 0x4500D71C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4500D720: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x4500D724: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4500D728: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x4500D72C: beq         $t3, $zero, L_4500D778
    if (ctx->r11 == 0) {
        // 0x4500D730: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_4500D778;
    }
    // 0x4500D730: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x4500D734: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4500D738: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x4500D73C: sub.s       $f16, $f0, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x4500D740: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x4500D744: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x4500D748: nop

    // 0x4500D74C: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x4500D750: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x4500D754: nop

    // 0x4500D758: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x4500D75C: bne         $t3, $zero, L_4500D770
    if (ctx->r11 != 0) {
        // 0x4500D760: nop
    
            goto L_4500D770;
    }
    // 0x4500D760: nop

    // 0x4500D764: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x4500D768: b           L_4500D788
    // 0x4500D76C: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_4500D788;
    // 0x4500D76C: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_4500D770:
    // 0x4500D770: b           L_4500D788
    // 0x4500D774: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_4500D788;
    // 0x4500D774: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
L_4500D778:
    // 0x4500D778: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x4500D77C: nop

    // 0x4500D780: bltz        $t3, L_4500D770
    if (SIGNED(ctx->r11) < 0) {
        // 0x4500D784: nop
    
            goto L_4500D770;
    }
    // 0x4500D784: nop

L_4500D788:
    // 0x4500D788: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x4500D78C: jal         0x45008C48
    // 0x4500D790: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    ovl_mobj_main_8C48(rdram, ctx);
        goto after_1;
    // 0x4500D790: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_1:
    // 0x4500D794: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4500D798: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x4500D79C: jr          $ra
    // 0x4500D7A0: nop

    return;
    // 0x4500D7A0: nop

;}
RECOMP_FUNC void ovl_mobj_main_D7A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500D7A4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x4500D7A8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x4500D7AC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x4500D7B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4500D7B4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x4500D7B8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x4500D7BC: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x4500D7C0: jal         0x450006C4
    // 0x4500D7C4: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4500D7C4: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_0:
    // 0x4500D7C8: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x4500D7CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4500D7D0: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x4500D7D4: jal         0x450006C4
    // 0x4500D7D8: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x4500D7D8: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    after_1:
    // 0x4500D7DC: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x4500D7E0: beq         $v0, $zero, L_4500D7F8
    if (ctx->r2 == 0) {
        // 0x4500D7E4: addiu       $s0, $s1, 0x1DC
        ctx->r16 = ADD32(ctx->r17, 0X1DC);
            goto L_4500D7F8;
    }
    // 0x4500D7E4: addiu       $s0, $s1, 0x1DC
    ctx->r16 = ADD32(ctx->r17, 0X1DC);
    // 0x4500D7E8: jal         0x4500073C
    // 0x4500D7EC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    ovl_mobj_main_73C(rdram, ctx);
        goto after_2;
    // 0x4500D7EC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_2:
    // 0x4500D7F0: b           L_4500D9F8
    // 0x4500D7F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4500D9F8;
    // 0x4500D7F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4500D7F8:
    // 0x4500D7F8: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x4500D7FC: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x4500D800: beq         $a3, $t6, L_4500D81C
    if (ctx->r7 == ctx->r14) {
        // 0x4500D804: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_4500D81C;
    }
    // 0x4500D804: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4500D808: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x4500D80C: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x4500D810: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x4500D814: sw          $t8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r24;
    // 0x4500D818: sw          $a3, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r7;
L_4500D81C:
    // 0x4500D81C: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x4500D820: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x4500D824: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x4500D828: bne         $t1, $zero, L_4500D874
    if (ctx->r9 != 0) {
        // 0x4500D82C: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_4500D874;
    }
    // 0x4500D82C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x4500D830: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4500D834: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4500D838: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4500D83C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x4500D840: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x4500D844: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x4500D848: jal         0x450006C4
    // 0x4500D84C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_3;
    // 0x4500D84C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    after_3:
    // 0x4500D850: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x4500D854: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x4500D858: jal         0x450006C4
    // 0x4500D85C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_4;
    // 0x4500D85C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_4:
    // 0x4500D860: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x4500D864: nop

    // 0x4500D868: lwc1        $f10, 0x10($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X10);
    // 0x4500D86C: b           L_4500D968
    // 0x4500D870: swc1        $f10, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f10.u32l;
        goto L_4500D968;
    // 0x4500D870: swc1        $f10, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f10.u32l;
L_4500D874:
    // 0x4500D874: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x4500D878: jal         0x450006C4
    // 0x4500D87C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_5;
    // 0x4500D87C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_5:
    // 0x4500D880: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x4500D884: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x4500D888: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x4500D88C: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x4500D890: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x4500D894: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500D898: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x4500D89C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x4500D8A0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x4500D8A4: jal         0x45005780
    // 0x4500D8A8: nop

    ovl_mobj_main_5780(rdram, ctx);
        goto after_6;
    // 0x4500D8A8: nop

    after_6:
    // 0x4500D8AC: swc1        $f0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f0.u32l;
    // 0x4500D8B0: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x4500D8B4: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x4500D8B8: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x4500D8BC: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x4500D8C0: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x4500D8C4: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x4500D8C8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x4500D8CC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x4500D8D0: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x4500D8D4: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x4500D8D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500D8DC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x4500D8E0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x4500D8E4: jal         0x4500109C
    // 0x4500D8E8: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_7;
    // 0x4500D8E8: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x4500D8EC: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x4500D8F0: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4500D8F4: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x4500D8F8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x4500D8FC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x4500D900: nop

    // 0x4500D904: div.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x4500D908: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4500D90C: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x4500D910: swc1        $f8, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f8.u32l;
    // 0x4500D914: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x4500D918: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x4500D91C: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x4500D920: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x4500D924: sub.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x4500D928: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x4500D92C: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x4500D930: lwc1        $f4, 0x44($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X44);
    // 0x4500D934: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x4500D938: add.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x4500D93C: swc1        $f18, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f18.u32l;
    // 0x4500D940: lw          $t5, 0x4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4);
    // 0x4500D944: nop

    // 0x4500D948: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x4500D94C: bne         $t6, $zero, L_4500D968
    if (ctx->r14 != 0) {
        // 0x4500D950: sw          $t6, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r14;
            goto L_4500D968;
    }
    // 0x4500D950: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x4500D954: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x4500D958: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4500D95C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x4500D960: sw          $t9, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r25;
    // 0x4500D964: swc1        $f8, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f8.u32l;
L_4500D968:
    // 0x4500D968: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x4500D96C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x4500D970: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x4500D974: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x4500D978: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x4500D97C: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x4500D980: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x4500D984: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x4500D988: jal         0x450006C4
    // 0x4500D98C: nop

    ovl_mobj_main_6C4(rdram, ctx);
        goto after_8;
    // 0x4500D98C: nop

    after_8:
    // 0x4500D990: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500D994: lwc1        $f16, 0x2C8C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X2C8C);
    // 0x4500D998: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x4500D99C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x4500D9A0: add.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x4500D9A4: addiu       $v1, $t0, -0x1
    ctx->r3 = ADD32(ctx->r8, -0X1);
    // 0x4500D9A8: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x4500D9AC: bgez        $v1, L_4500D9C4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x4500D9B0: sw          $v1, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r3;
            goto L_4500D9C4;
    }
    // 0x4500D9B0: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x4500D9B4: jal         0x4500073C
    // 0x4500D9B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_mobj_main_73C(rdram, ctx);
        goto after_9;
    // 0x4500D9B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_9:
    // 0x4500D9BC: b           L_4500D9F8
    // 0x4500D9C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4500D9F8;
    // 0x4500D9C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4500D9C4:
    // 0x4500D9C4: slti        $at, $v1, 0x5B
    ctx->r1 = SIGNED(ctx->r3) < 0X5B ? 1 : 0;
    // 0x4500D9C8: beq         $at, $zero, L_4500D9E0
    if (ctx->r1 == 0) {
        // 0x4500D9CC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4500D9E0;
    }
    // 0x4500D9CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500D9D0: jal         0x4500D64C
    // 0x4500D9D4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_mobj_main_D64C(rdram, ctx);
        goto after_10;
    // 0x4500D9D4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_10:
    // 0x4500D9D8: b           L_4500D9F8
    // 0x4500D9DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4500D9F8;
    // 0x4500D9DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4500D9E0:
    // 0x4500D9E0: slti        $at, $v1, 0xF1
    ctx->r1 = SIGNED(ctx->r3) < 0XF1 ? 1 : 0;
    // 0x4500D9E4: beq         $at, $zero, L_4500D9F4
    if (ctx->r1 == 0) {
        // 0x4500D9E8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4500D9F4;
    }
    // 0x4500D9E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500D9EC: jal         0x4500D64C
    // 0x4500D9F0: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    ovl_mobj_main_D64C(rdram, ctx);
        goto after_11;
    // 0x4500D9F0: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_11:
L_4500D9F4:
    // 0x4500D9F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4500D9F8:
    // 0x4500D9F8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x4500D9FC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x4500DA00: jr          $ra
    // 0x4500DA04: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x4500DA04: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_mobj_main_DA08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500DA08: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x4500DA0C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x4500DA10: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x4500DA14: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x4500DA18: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x4500DA1C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x4500DA20: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x4500DA24: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x4500DA28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4500DA2C: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500DA30: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x4500DA34: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x4500DA38: bne         $t7, $zero, L_4500DE0C
    if (ctx->r15 != 0) {
        // 0x4500DA3C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_4500DE0C;
    }
    // 0x4500DA3C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x4500DA40: lw          $v0, 0x188($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X188);
    // 0x4500DA44: nop

    // 0x4500DA48: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x4500DA4C: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x4500DA50: beq         $v1, $zero, L_4500DA68
    if (ctx->r3 == 0) {
        // 0x4500DA54: sw          $t8, 0x188($a0)
        MEM_W(0X188, ctx->r4) = ctx->r24;
            goto L_4500DA68;
    }
    // 0x4500DA54: sw          $t8, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r24;
    // 0x4500DA58: jal         0x450024BC
    // 0x4500DA5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_24BC(rdram, ctx);
        goto after_0;
    // 0x4500DA5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x4500DA60: b           L_4500DE0C
    // 0x4500DA64: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_4500DE0C;
    // 0x4500DA64: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_4500DA68:
    // 0x4500DA68: lw          $t9, 0x188($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X188);
    // 0x4500DA6C: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x4500DA70: bne         $t9, $at, L_4500DA80
    if (ctx->r25 != ctx->r1) {
        // 0x4500DA74: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_4500DA80;
    }
    // 0x4500DA74: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x4500DA78: jal         0x45005AB4
    // 0x4500DA7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_5AB4(rdram, ctx);
        goto after_1;
    // 0x4500DA7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_4500DA80:
    // 0x4500DA80: lw          $t0, 0x228($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X228);
    // 0x4500DA84: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x4500DA88: blez        $t0, L_4500DBC4
    if (SIGNED(ctx->r8) <= 0) {
        // 0x4500DA8C: or          $s4, $s5, $zero
        ctx->r20 = ctx->r21 | 0;
            goto L_4500DBC4;
    }
    // 0x4500DA8C: or          $s4, $s5, $zero
    ctx->r20 = ctx->r21 | 0;
L_4500DA90:
    // 0x4500DA90: lw          $a0, 0x22C($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X22C);
    // 0x4500DA94: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4500DA98: beq         $a0, $at, L_4500DBB0
    if (ctx->r4 == ctx->r1) {
        // 0x4500DA9C: addiu       $s1, $zero, 0x2F
        ctx->r17 = ADD32(0, 0X2F);
            goto L_4500DBB0;
    }
    // 0x4500DA9C: addiu       $s1, $zero, 0x2F
    ctx->r17 = ADD32(0, 0X2F);
    // 0x4500DAA0: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4500DAA4: jal         0x450006C4
    // 0x4500DAA8: addiu       $a2, $sp, 0xB4
    ctx->r6 = ADD32(ctx->r29, 0XB4);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_2;
    // 0x4500DAA8: addiu       $a2, $sp, 0xB4
    ctx->r6 = ADD32(ctx->r29, 0XB4);
    after_2:
    // 0x4500DAAC: bne         $v0, $zero, L_4500DB24
    if (ctx->r2 != 0) {
        // 0x4500DAB0: addiu       $at, $zero, 0x2F
        ctx->r1 = ADD32(0, 0X2F);
            goto L_4500DB24;
    }
    // 0x4500DAB0: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x4500DAB4: lw          $v0, 0xB4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB4);
    // 0x4500DAB8: lw          $t1, 0xB8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB8);
    // 0x4500DABC: beq         $v0, $zero, L_4500DAE0
    if (ctx->r2 == 0) {
        // 0x4500DAC0: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_4500DAE0;
    }
    // 0x4500DAC0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x4500DAC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500DAC8: beq         $v0, $at, L_4500DAFC
    if (ctx->r2 == ctx->r1) {
        // 0x4500DACC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_4500DAFC;
    }
    // 0x4500DACC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4500DAD0: beq         $v0, $at, L_4500DB1C
    if (ctx->r2 == ctx->r1) {
        // 0x4500DAD4: nop
    
            goto L_4500DB1C;
    }
    // 0x4500DAD4: nop

    // 0x4500DAD8: b           L_4500DB24
    // 0x4500DADC: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
        goto L_4500DB24;
    // 0x4500DADC: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
L_4500DAE0:
    // 0x4500DAE0: bne         $t1, $at, L_4500DB20
    if (ctx->r9 != ctx->r1) {
        // 0x4500DAE4: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_4500DB20;
    }
    // 0x4500DAE4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x4500DAE8: addiu       $s1, $zero, 0x1C
    ctx->r17 = ADD32(0, 0X1C);
    // 0x4500DAEC: jal         0x45000FA0
    // 0x4500DAF0: addiu       $a1, $zero, 0x36A
    ctx->r5 = ADD32(0, 0X36A);
    ovl_mobj_main_FA0(rdram, ctx);
        goto after_3;
    // 0x4500DAF0: addiu       $a1, $zero, 0x36A
    ctx->r5 = ADD32(0, 0X36A);
    after_3:
    // 0x4500DAF4: b           L_4500DB24
    // 0x4500DAF8: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
        goto L_4500DB24;
    // 0x4500DAF8: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
L_4500DAFC:
    // 0x4500DAFC: lw          $t2, 0xB8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB8);
    // 0x4500DB00: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4500DB04: bne         $t2, $at, L_4500DB14
    if (ctx->r10 != ctx->r1) {
        // 0x4500DB08: nop
    
            goto L_4500DB14;
    }
    // 0x4500DB08: nop

    // 0x4500DB0C: b           L_4500DB20
    // 0x4500DB10: addiu       $s1, $zero, 0x1D
    ctx->r17 = ADD32(0, 0X1D);
        goto L_4500DB20;
    // 0x4500DB10: addiu       $s1, $zero, 0x1D
    ctx->r17 = ADD32(0, 0X1D);
L_4500DB14:
    // 0x4500DB14: b           L_4500DB20
    // 0x4500DB18: addiu       $s1, $zero, 0x1E
    ctx->r17 = ADD32(0, 0X1E);
        goto L_4500DB20;
    // 0x4500DB18: addiu       $s1, $zero, 0x1E
    ctx->r17 = ADD32(0, 0X1E);
L_4500DB1C:
    // 0x4500DB1C: addiu       $s1, $zero, 0x1F
    ctx->r17 = ADD32(0, 0X1F);
L_4500DB20:
    // 0x4500DB20: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
L_4500DB24:
    // 0x4500DB24: beq         $s1, $at, L_4500DBB0
    if (ctx->r17 == ctx->r1) {
        // 0x4500DB28: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_4500DBB0;
    }
    // 0x4500DB28: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x4500DB2C: addiu       $s0, $s4, 0x22C
    ctx->r16 = ADD32(ctx->r20, 0X22C);
    // 0x4500DB30: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x4500DB34: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x4500DB38: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x4500DB3C: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x4500DB40: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x4500DB44: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x4500DB48: addiu       $s2, $sp, 0x84
    ctx->r18 = ADD32(ctx->r29, 0X84);
    // 0x4500DB4C: jal         0x45005780
    // 0x4500DB50: addiu       $s3, $sp, 0x94
    ctx->r19 = ADD32(ctx->r29, 0X94);
    ovl_mobj_main_5780(rdram, ctx);
        goto after_4;
    // 0x4500DB50: addiu       $s3, $sp, 0x94
    ctx->r19 = ADD32(ctx->r29, 0X94);
    after_4:
    // 0x4500DB54: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4500DB58: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4500DB5C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x4500DB60: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4500DB64: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4500DB68: lw          $t4, 0xB4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB4);
    // 0x4500DB6C: lw          $t5, 0xB8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB8);
    // 0x4500DB70: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x4500DB74: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x4500DB78: sw          $t3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r11;
    // 0x4500DB7C: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    // 0x4500DB80: swc1        $f18, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f18.u32l;
    // 0x4500DB84: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    // 0x4500DB88: sw          $t4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r12;
    // 0x4500DB8C: sw          $t5, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r13;
    // 0x4500DB90: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x4500DB94: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x4500DB98: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x4500DB9C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x4500DBA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4500DBA4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x4500DBA8: jal         0x4500109C
    // 0x4500DBAC: sw          $t6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r14;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_5;
    // 0x4500DBAC: sw          $t6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r14;
    after_5:
L_4500DBB0:
    // 0x4500DBB0: lw          $t7, 0x228($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X228);
    // 0x4500DBB4: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x4500DBB8: slt         $at, $s6, $t7
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x4500DBBC: bne         $at, $zero, L_4500DA90
    if (ctx->r1 != 0) {
        // 0x4500DBC0: addiu       $s4, $s4, 0x18
        ctx->r20 = ADD32(ctx->r20, 0X18);
            goto L_4500DA90;
    }
    // 0x4500DBC0: addiu       $s4, $s4, 0x18
    ctx->r20 = ADD32(ctx->r20, 0X18);
L_4500DBC4:
    // 0x4500DBC4: lw          $t8, 0x1E8($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X1E8);
    // 0x4500DBC8: nop

    // 0x4500DBCC: bne         $t8, $zero, L_4500DCAC
    if (ctx->r24 != 0) {
        // 0x4500DBD0: nop
    
            goto L_4500DCAC;
    }
    // 0x4500DBD0: nop

    // 0x4500DBD4: jal         0x4500034C
    // 0x4500DBD8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_mobj_main_34C(rdram, ctx);
        goto after_6;
    // 0x4500DBD8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_6:
    // 0x4500DBDC: jal         0x45000DE4
    // 0x4500DBE0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_mobj_main_DE4(rdram, ctx);
        goto after_7;
    // 0x4500DBE0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_7:
    // 0x4500DBE4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4500DBE8: beq         $v0, $at, L_4500DC04
    if (ctx->r2 == ctx->r1) {
        // 0x4500DBEC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_4500DC04;
    }
    // 0x4500DBEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x4500DBF0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4500DBF4: jal         0x450006C4
    // 0x4500DBF8: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_8;
    // 0x4500DBF8: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    after_8:
    // 0x4500DBFC: beq         $v0, $zero, L_4500DC80
    if (ctx->r2 == 0) {
        // 0x4500DC00: nop
    
            goto L_4500DC80;
    }
    // 0x4500DC00: nop

L_4500DC04:
    // 0x4500DC04: jal         0x45000340
    // 0x4500DC08: nop

    ovl_mobj_main_340(rdram, ctx);
        goto after_9;
    // 0x4500DC08: nop

    after_9:
    // 0x4500DC0C: cvt.s.d     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f6.fl = CVT_S_D(ctx->f0.d);
    // 0x4500DC10: jal         0x45000340
    // 0x4500DC14: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    ovl_mobj_main_340(rdram, ctx);
        goto after_10;
    // 0x4500DC14: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    after_10:
    // 0x4500DC18: cvt.s.d     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f8.fl = CVT_S_D(ctx->f0.d);
    // 0x4500DC1C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4500DC20: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x4500DC24: lw          $a0, 0x8($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X8);
    // 0x4500DC28: jal         0x450006C4
    // 0x4500DC2C: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_11;
    // 0x4500DC2C: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    after_11:
    // 0x4500DC30: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x4500DC34: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4500DC38: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x4500DC3C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x4500DC40: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4500DC44: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x4500DC48: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x4500DC4C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x4500DC50: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4500DC54: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4500DC58: swc1        $f8, 0x1DC($s5)
    MEM_W(0X1DC, ctx->r21) = ctx->f8.u32l;
    // 0x4500DC5C: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x4500DC60: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x4500DC64: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x4500DC68: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x4500DC6C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4500DC70: swc1        $f8, 0x1E4($s5)
    MEM_W(0X1E4, ctx->r21) = ctx->f8.u32l;
    // 0x4500DC74: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x4500DC78: b           L_4500DCA4
    // 0x4500DC7C: swc1        $f10, 0x1E0($s5)
    MEM_W(0X1E0, ctx->r21) = ctx->f10.u32l;
        goto L_4500DCA4;
    // 0x4500DC7C: swc1        $f10, 0x1E0($s5)
    MEM_W(0X1E0, ctx->r21) = ctx->f10.u32l;
L_4500DC80:
    // 0x4500DC80: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x4500DC84: nop

    // 0x4500DC88: swc1        $f16, 0x1DC($s5)
    MEM_W(0X1DC, ctx->r21) = ctx->f16.u32l;
    // 0x4500DC8C: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x4500DC90: nop

    // 0x4500DC94: swc1        $f18, 0x1E0($s5)
    MEM_W(0X1E0, ctx->r21) = ctx->f18.u32l;
    // 0x4500DC98: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x4500DC9C: nop

    // 0x4500DCA0: swc1        $f4, 0x1E4($s5)
    MEM_W(0X1E4, ctx->r21) = ctx->f4.u32l;
L_4500DCA4:
    // 0x4500DCA4: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x4500DCA8: sw          $t9, 0x1E8($s5)
    MEM_W(0X1E8, ctx->r21) = ctx->r25;
L_4500DCAC:
    // 0x4500DCAC: lw          $a0, 0x8($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X8);
    // 0x4500DCB0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4500DCB4: jal         0x450006C4
    // 0x4500DCB8: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_12;
    // 0x4500DCB8: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    after_12:
    // 0x4500DCBC: lwc1        $f6, 0x1DC($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X1DC);
    // 0x4500DCC0: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x4500DCC4: lwc1        $f18, 0x74($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X74);
    // 0x4500DCC8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x4500DCCC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x4500DCD0: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x4500DCD4: lwc1        $f16, 0x1E4($s5)
    ctx->f16.u32l = MEM_W(ctx->r21, 0X1E4);
    // 0x4500DCD8: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x4500DCDC: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x4500DCE0: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x4500DCE4: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x4500DCE8: jal         0x45005780
    // 0x4500DCEC: nop

    ovl_mobj_main_5780(rdram, ctx);
        goto after_13;
    // 0x4500DCEC: nop

    after_13:
    // 0x4500DCF0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x4500DCF4: swc1        $f0, 0x18($s5)
    MEM_W(0X18, ctx->r21) = ctx->f0.u32l;
    // 0x4500DCF8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x4500DCFC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x4500DD00: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    // 0x4500DD04: jal         0x4500109C
    // 0x4500DD08: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_14;
    // 0x4500DD08: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    after_14:
    // 0x4500DD0C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x4500DD10: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x4500DD14: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4500DD18: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x4500DD1C: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x4500DD20: nop

    // 0x4500DD24: bc1f        L_4500DD44
    if (!c1cs) {
        // 0x4500DD28: nop
    
            goto L_4500DD44;
    }
    // 0x4500DD28: nop

    // 0x4500DD2C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x4500DD30: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4500DD34: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x4500DD38: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4500DD3C: b           L_4500DD80
    // 0x4500DD40: swc1        $f10, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->f10.u32l;
        goto L_4500DD80;
    // 0x4500DD40: swc1        $f10, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->f10.u32l;
L_4500DD44:
    // 0x4500DD44: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4500DD48: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x4500DD4C: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x4500DD50: nop

    // 0x4500DD54: bc1f        L_4500DD74
    if (!c1cs) {
        // 0x4500DD58: nop
    
            goto L_4500DD74;
    }
    // 0x4500DD58: nop

    // 0x4500DD5C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x4500DD60: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4500DD64: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x4500DD68: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4500DD6C: b           L_4500DD80
    // 0x4500DD70: swc1        $f18, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->f18.u32l;
        goto L_4500DD80;
    // 0x4500DD70: swc1        $f18, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->f18.u32l;
L_4500DD74:
    // 0x4500DD74: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4500DD78: nop

    // 0x4500DD7C: swc1        $f2, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->f2.u32l;
L_4500DD80:
    // 0x4500DD80: lwc1        $f0, 0x1E0($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X1E0);
    // 0x4500DD84: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x4500DD88: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x4500DD8C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x4500DD90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4500DD94: bc1f        L_4500DDB0
    if (!c1cs) {
        // 0x4500DD98: nop
    
            goto L_4500DDB0;
    }
    // 0x4500DD98: nop

    // 0x4500DD9C: lwc1        $f6, 0x44($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X44);
    // 0x4500DDA0: nop

    // 0x4500DDA4: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x4500DDA8: b           L_4500DDD8
    // 0x4500DDAC: swc1        $f8, 0x44($s5)
    MEM_W(0X44, ctx->r21) = ctx->f8.u32l;
        goto L_4500DDD8;
    // 0x4500DDAC: swc1        $f8, 0x44($s5)
    MEM_W(0X44, ctx->r21) = ctx->f8.u32l;
L_4500DDB0:
    // 0x4500DDB0: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x4500DDB4: nop

    // 0x4500DDB8: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x4500DDBC: nop

    // 0x4500DDC0: bc1f        L_4500DDD8
    if (!c1cs) {
        // 0x4500DDC4: nop
    
            goto L_4500DDD8;
    }
    // 0x4500DDC4: nop

    // 0x4500DDC8: lwc1        $f16, 0x44($s5)
    ctx->f16.u32l = MEM_W(ctx->r21, 0X44);
    // 0x4500DDCC: nop

    // 0x4500DDD0: sub.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x4500DDD4: swc1        $f18, 0x44($s5)
    MEM_W(0X44, ctx->r21) = ctx->f18.u32l;
L_4500DDD8:
    // 0x4500DDD8: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x4500DDDC: nop

    // 0x4500DDE0: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x4500DDE4: nop

    // 0x4500DDE8: bc1f        L_4500DE04
    if (!c1cs) {
        // 0x4500DDEC: nop
    
            goto L_4500DE04;
    }
    // 0x4500DDEC: nop

    // 0x4500DDF0: lw          $t0, 0x1E8($s5)
    ctx->r8 = MEM_W(ctx->r21, 0X1E8);
    // 0x4500DDF4: nop

    // 0x4500DDF8: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x4500DDFC: b           L_4500DE08
    // 0x4500DE00: sw          $t1, 0x1E8($s5)
    MEM_W(0X1E8, ctx->r21) = ctx->r9;
        goto L_4500DE08;
    // 0x4500DE00: sw          $t1, 0x1E8($s5)
    MEM_W(0X1E8, ctx->r21) = ctx->r9;
L_4500DE04:
    // 0x4500DE04: sw          $zero, 0x1E8($s5)
    MEM_W(0X1E8, ctx->r21) = 0;
L_4500DE08:
    // 0x4500DE08: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_4500DE0C:
    // 0x4500DE0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4500DE10: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x4500DE14: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x4500DE18: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x4500DE1C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x4500DE20: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x4500DE24: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x4500DE28: jr          $ra
    // 0x4500DE2C: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x4500DE2C: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void ovl_mobj_main_DE30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500DE30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500DE34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500DE38: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500DE3C: nop

    // 0x4500DE40: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x4500DE44: beq         $t7, $zero, L_4500DE5C
    if (ctx->r15 == 0) {
        // 0x4500DE48: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4500DE5C;
    }
    // 0x4500DE48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500DE4C: lw          $a1, 0x1DC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X1DC);
    // 0x4500DE50: jal         0x450018D8
    // 0x4500DE54: nop

    ovl_mobj_main_18D8(rdram, ctx);
        goto after_0;
    // 0x4500DE54: nop

    after_0:
    // 0x4500DE58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500DE5C:
    // 0x4500DE5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500DE60: jr          $ra
    // 0x4500DE64: nop

    return;
    // 0x4500DE64: nop

;}
RECOMP_FUNC void ovl_mobj_main_DE68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500DE68: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x4500DE6C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x4500DE70: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x4500DE74: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x4500DE78: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x4500DE7C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x4500DE80: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4500DE84: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x4500DE88: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x4500DE8C: lw          $t6, 0x228($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X228);
    // 0x4500DE90: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x4500DE94: blez        $t6, L_4500DF14
    if (SIGNED(ctx->r14) <= 0) {
        // 0x4500DE98: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_4500DF14;
    }
    // 0x4500DE98: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x4500DE9C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x4500DEA0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x4500DEA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4500DEA8: addiu       $s4, $sp, 0x44
    ctx->r20 = ADD32(ctx->r29, 0X44);
    // 0x4500DEAC: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
L_4500DEB0:
    // 0x4500DEB0: lw          $a0, 0x22C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X22C);
    // 0x4500DEB4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4500DEB8: beq         $s3, $a0, L_4500DF00
    if (ctx->r19 == ctx->r4) {
        // 0x4500DEBC: nop
    
            goto L_4500DF00;
    }
    // 0x4500DEBC: nop

    // 0x4500DEC0: jal         0x450006C4
    // 0x4500DEC4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4500DEC4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_0:
    // 0x4500DEC8: bne         $v0, $zero, L_4500DF00
    if (ctx->r2 != 0) {
        // 0x4500DECC: nop
    
            goto L_4500DF00;
    }
    // 0x4500DECC: nop

    // 0x4500DED0: lwc1        $f6, 0x208($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X208);
    // 0x4500DED4: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x4500DED8: add.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x4500DEDC: addiu       $v0, $s0, 0x22C
    ctx->r2 = ADD32(ctx->r16, 0X22C);
    // 0x4500DEE0: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x4500DEE4: nop

    // 0x4500DEE8: bc1f        L_4500DF00
    if (!c1cs) {
        // 0x4500DEEC: nop
    
            goto L_4500DF00;
    }
    // 0x4500DEEC: nop

    // 0x4500DEF0: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x4500DEF4: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x4500DEF8: jal         0x45008FE0
    // 0x4500DEFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_mobj_main_8FE0(rdram, ctx);
        goto after_1;
    // 0x4500DEFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
L_4500DF00:
    // 0x4500DF00: lw          $t7, 0x228($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X228);
    // 0x4500DF04: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x4500DF08: slt         $at, $s2, $t7
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x4500DF0C: bne         $at, $zero, L_4500DEB0
    if (ctx->r1 != 0) {
        // 0x4500DF10: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_4500DEB0;
    }
    // 0x4500DF10: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
L_4500DF14:
    // 0x4500DF14: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x4500DF18: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x4500DF1C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x4500DF20: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4500DF24: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x4500DF28: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x4500DF2C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x4500DF30: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x4500DF34: jr          $ra
    // 0x4500DF38: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x4500DF38: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_mobj_main_DF3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500DF3C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x4500DF40: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4500DF44: jal         0x450013B8
    // 0x4500DF48: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    ovl_mobj_main_13B8(rdram, ctx);
        goto after_0;
    // 0x4500DF48: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    after_0:
    // 0x4500DF4C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x4500DF50: lw          $t6, 0x218($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X218);
    // 0x4500DF54: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x4500DF58: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x4500DF5C: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x4500DF60: sw          $t7, 0x218($v0)
    MEM_W(0X218, ctx->r2) = ctx->r15;
    // 0x4500DF64: beq         $a2, $t7, L_4500DF74
    if (ctx->r6 == ctx->r15) {
        // 0x4500DF68: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_4500DF74;
    }
    // 0x4500DF68: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x4500DF6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500DF70: bne         $t7, $at, L_4500E010
    if (ctx->r15 != ctx->r1) {
        // 0x4500DF74: addiu       $a1, $zero, 0x5B
        ctx->r5 = ADD32(0, 0X5B);
            goto L_4500E010;
    }
L_4500DF74:
    // 0x4500DF74: addiu       $a1, $zero, 0x5B
    ctx->r5 = ADD32(0, 0X5B);
    // 0x4500DF78: beq         $a0, $a1, L_4500DF84
    if (ctx->r4 == ctx->r5) {
        // 0x4500DF7C: addiu       $at, $zero, 0x5C
        ctx->r1 = ADD32(0, 0X5C);
            goto L_4500DF84;
    }
    // 0x4500DF7C: addiu       $at, $zero, 0x5C
    ctx->r1 = ADD32(0, 0X5C);
    // 0x4500DF80: bne         $a0, $at, L_4500E010
    if (ctx->r4 != ctx->r1) {
        // 0x4500DF84: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_4500E010;
    }
L_4500DF84:
    // 0x4500DF84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500DF88: bne         $v1, $at, L_4500DF94
    if (ctx->r3 != ctx->r1) {
        // 0x4500DF8C: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_4500DF94;
    }
    // 0x4500DF8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4500DF90: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_4500DF94:
    // 0x4500DF94: bne         $a2, $v1, L_4500DFB8
    if (ctx->r6 != ctx->r3) {
        // 0x4500DF98: nop
    
            goto L_4500DFB8;
    }
    // 0x4500DF98: nop

    // 0x4500DF9C: bne         $a0, $a1, L_4500DFB0
    if (ctx->r4 != ctx->r5) {
        // 0x4500DFA0: addiu       $t9, $zero, 0x2CD
        ctx->r25 = ADD32(0, 0X2CD);
            goto L_4500DFB0;
    }
    // 0x4500DFA0: addiu       $t9, $zero, 0x2CD
    ctx->r25 = ADD32(0, 0X2CD);
    // 0x4500DFA4: addiu       $t8, $zero, 0x2C0
    ctx->r24 = ADD32(0, 0X2C0);
    // 0x4500DFA8: b           L_4500DFE8
    // 0x4500DFAC: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
        goto L_4500DFE8;
    // 0x4500DFAC: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
L_4500DFB0:
    // 0x4500DFB0: b           L_4500DFE8
    // 0x4500DFB4: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
        goto L_4500DFE8;
    // 0x4500DFB4: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
L_4500DFB8:
    // 0x4500DFB8: bne         $a0, $a1, L_4500DFCC
    if (ctx->r4 != ctx->r5) {
        // 0x4500DFBC: addiu       $t1, $zero, 0x2CE
        ctx->r9 = ADD32(0, 0X2CE);
            goto L_4500DFCC;
    }
    // 0x4500DFBC: addiu       $t1, $zero, 0x2CE
    ctx->r9 = ADD32(0, 0X2CE);
    // 0x4500DFC0: addiu       $t0, $zero, 0x2C1
    ctx->r8 = ADD32(0, 0X2C1);
    // 0x4500DFC4: b           L_4500DFD0
    // 0x4500DFC8: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
        goto L_4500DFD0;
    // 0x4500DFC8: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
L_4500DFCC:
    // 0x4500DFCC: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
L_4500DFD0:
    // 0x4500DFD0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x4500DFD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4500DFD8: jal         0x45005D34
    // 0x4500DFDC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_1;
    // 0x4500DFDC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_1:
    // 0x4500DFE0: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x4500DFE4: nop

L_4500DFE8:
    // 0x4500DFE8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4500DFEC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4500DFF0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4500DFF4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x4500DFF8: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x4500DFFC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x4500E000: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x4500E004: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x4500E008: jal         0x450075DC
    // 0x4500E00C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_2;
    // 0x4500E00C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
L_4500E010:
    // 0x4500E010: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4500E014: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x4500E018: jr          $ra
    // 0x4500E01C: nop

    return;
    // 0x4500E01C: nop

;}
RECOMP_FUNC void ovl_mobj_main_E020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E020: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E028: beq         $a1, $zero, L_4500E038
    if (ctx->r5 == 0) {
        // 0x4500E02C: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_4500E038;
    }
    // 0x4500E02C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x4500E030: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500E034: bne         $a1, $at, L_4500E05C
    if (ctx->r5 != ctx->r1) {
        // 0x4500E038: sll         $t6, $a2, 2
        ctx->r14 = S32(ctx->r6 << 2);
            goto L_4500E05C;
    }
L_4500E038:
    // 0x4500E038: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x4500E03C: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x4500E040: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x4500E044: lui         $t9, 0x4501
    ctx->r25 = S32(0X4501 << 16);
    // 0x4500E048: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x4500E04C: lw          $t9, 0x1580($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1580);
    // 0x4500E050: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x4500E054: jalr        $t9
    // 0x4500E058: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x4500E058: nop

    after_0:
L_4500E05C:
    // 0x4500E05C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E060: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E064: jr          $ra
    // 0x4500E068: nop

    return;
    // 0x4500E068: nop

;}
RECOMP_FUNC void ovl_mobj_main_E06C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E06C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E070: bne         $a1, $zero, L_4500E09C
    if (ctx->r5 != 0) {
        // 0x4500E074: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500E09C;
    }
    // 0x4500E074: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E078: sll         $t6, $a2, 3
    ctx->r14 = S32(ctx->r6 << 3);
    // 0x4500E07C: lui         $t9, 0x4501
    ctx->r25 = S32(0X4501 << 16);
    // 0x4500E080: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x4500E084: lw          $t9, 0x15E0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X15E0);
    // 0x4500E088: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x4500E08C: jalr        $t9
    // 0x4500E090: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x4500E090: nop

    after_0:
    // 0x4500E094: b           L_4500E0C4
    // 0x4500E098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E0C4;
    // 0x4500E098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E09C:
    // 0x4500E09C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500E0A0: bne         $a1, $at, L_4500E0C0
    if (ctx->r5 != ctx->r1) {
        // 0x4500E0A4: sll         $t7, $a2, 3
        ctx->r15 = S32(ctx->r6 << 3);
            goto L_4500E0C0;
    }
    // 0x4500E0A4: sll         $t7, $a2, 3
    ctx->r15 = S32(ctx->r6 << 3);
    // 0x4500E0A8: lui         $t9, 0x4501
    ctx->r25 = S32(0X4501 << 16);
    // 0x4500E0AC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x4500E0B0: lw          $t9, 0x15E4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X15E4);
    // 0x4500E0B4: nop

    // 0x4500E0B8: jalr        $t9
    // 0x4500E0BC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x4500E0BC: nop

    after_1:
L_4500E0C0:
    // 0x4500E0C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E0C4:
    // 0x4500E0C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E0C8: jr          $ra
    // 0x4500E0CC: nop

    return;
    // 0x4500E0CC: nop

;}
RECOMP_FUNC void ovl_mobj_main_E0D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E0D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E0D4: bltz        $a1, L_4500E108
    if (SIGNED(ctx->r5) < 0) {
        // 0x4500E0D8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500E108;
    }
    // 0x4500E0D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E0DC: slt         $at, $a3, $a1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x4500E0E0: bne         $at, $zero, L_4500E108
    if (ctx->r1 != 0) {
        // 0x4500E0E4: sll         $t6, $a2, 2
        ctx->r14 = S32(ctx->r6 << 2);
            goto L_4500E108;
    }
    // 0x4500E0E4: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x4500E0E8: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x4500E0EC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x4500E0F0: lui         $t9, 0x4501
    ctx->r25 = S32(0X4501 << 16);
    // 0x4500E0F4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x4500E0F8: lw          $t9, 0x1620($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1620);
    // 0x4500E0FC: nop

    // 0x4500E100: jalr        $t9
    // 0x4500E104: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x4500E104: nop

    after_0:
L_4500E108:
    // 0x4500E108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E10C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E110: jr          $ra
    // 0x4500E114: nop

    return;
    // 0x4500E114: nop

;}
RECOMP_FUNC void ovl_mobj_main_E118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E118: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E11C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E120: jal         0x4500E020
    // 0x4500E124: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_mobj_main_E020(rdram, ctx);
        goto after_0;
    // 0x4500E124: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x4500E128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E12C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E130: jr          $ra
    // 0x4500E134: nop

    return;
    // 0x4500E134: nop

;}
RECOMP_FUNC void ovl_mobj_main_E138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E138: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E13C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E140: jal         0x4500E020
    // 0x4500E144: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    ovl_mobj_main_E020(rdram, ctx);
        goto after_0;
    // 0x4500E144: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x4500E148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E14C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E150: jr          $ra
    // 0x4500E154: nop

    return;
    // 0x4500E154: nop

;}
RECOMP_FUNC void ovl_mobj_main_E158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E158: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E15C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E160: jal         0x4500E020
    // 0x4500E164: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    ovl_mobj_main_E020(rdram, ctx);
        goto after_0;
    // 0x4500E164: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x4500E168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E16C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E170: jr          $ra
    // 0x4500E174: nop

    return;
    // 0x4500E174: nop

;}
RECOMP_FUNC void ovl_mobj_main_E178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E178: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E17C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E180: jal         0x4500E020
    // 0x4500E184: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    ovl_mobj_main_E020(rdram, ctx);
        goto after_0;
    // 0x4500E184: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x4500E188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E18C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E190: jr          $ra
    // 0x4500E194: nop

    return;
    // 0x4500E194: nop

;}
RECOMP_FUNC void ovl_mobj_main_E198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E198: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E19C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E1A0: jal         0x4500E06C
    // 0x4500E1A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_mobj_main_E06C(rdram, ctx);
        goto after_0;
    // 0x4500E1A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x4500E1A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E1AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E1B0: jr          $ra
    // 0x4500E1B4: nop

    return;
    // 0x4500E1B4: nop

;}
RECOMP_FUNC void ovl_mobj_main_E1B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E1B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E1BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E1C0: jal         0x4500E020
    // 0x4500E1C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    ovl_mobj_main_E020(rdram, ctx);
        goto after_0;
    // 0x4500E1C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x4500E1C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E1CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E1D0: jr          $ra
    // 0x4500E1D4: nop

    return;
    // 0x4500E1D4: nop

;}
RECOMP_FUNC void ovl_mobj_main_E1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E1D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E1DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E1E0: jal         0x4500E020
    // 0x4500E1E4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    ovl_mobj_main_E020(rdram, ctx);
        goto after_0;
    // 0x4500E1E4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
    // 0x4500E1E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E1EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E1F0: jr          $ra
    // 0x4500E1F4: nop

    return;
    // 0x4500E1F4: nop

;}
RECOMP_FUNC void ovl_mobj_main_E1F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E1F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E1FC: beq         $a1, $zero, L_4500E220
    if (ctx->r5 == 0) {
        // 0x4500E200: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500E220;
    }
    // 0x4500E200: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E204: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500E208: beq         $a1, $at, L_4500E230
    if (ctx->r5 == ctx->r1) {
        // 0x4500E20C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_4500E230;
    }
    // 0x4500E20C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4500E210: beq         $a1, $at, L_4500E240
    if (ctx->r5 == ctx->r1) {
        // 0x4500E214: nop
    
            goto L_4500E240;
    }
    // 0x4500E214: nop

    // 0x4500E218: b           L_4500E24C
    // 0x4500E21C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E24C;
    // 0x4500E21C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E220:
    // 0x4500E220: jal         0x45006BB0
    // 0x4500E224: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_mobj_main_6BB0(rdram, ctx);
        goto after_0;
    // 0x4500E224: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x4500E228: b           L_4500E24C
    // 0x4500E22C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E24C;
    // 0x4500E22C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E230:
    // 0x4500E230: jal         0x45006BE4
    // 0x4500E234: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_mobj_main_6BE4(rdram, ctx);
        goto after_1;
    // 0x4500E234: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x4500E238: b           L_4500E24C
    // 0x4500E23C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E24C;
    // 0x4500E23C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E240:
    // 0x4500E240: jal         0x45006C14
    // 0x4500E244: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_6C14(rdram, ctx);
        goto after_2;
    // 0x4500E244: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x4500E248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E24C:
    // 0x4500E24C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E250: jr          $ra
    // 0x4500E254: nop

    return;
    // 0x4500E254: nop

;}
RECOMP_FUNC void ovl_mobj_main_E258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E258: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E25C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E260: jal         0x4500E06C
    // 0x4500E264: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_mobj_main_E06C(rdram, ctx);
        goto after_0;
    // 0x4500E264: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x4500E268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E26C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E270: jr          $ra
    // 0x4500E274: nop

    return;
    // 0x4500E274: nop

;}
RECOMP_FUNC void ovl_mobj_main_E278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E278: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E27C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E280: jal         0x4500E06C
    // 0x4500E284: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    ovl_mobj_main_E06C(rdram, ctx);
        goto after_0;
    // 0x4500E284: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x4500E288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E28C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E290: jr          $ra
    // 0x4500E294: nop

    return;
    // 0x4500E294: nop

;}
RECOMP_FUNC void ovl_mobj_main_E298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E298: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E29C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E2A0: jal         0x4500E06C
    // 0x4500E2A4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    ovl_mobj_main_E06C(rdram, ctx);
        goto after_0;
    // 0x4500E2A4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x4500E2A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E2AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E2B0: jr          $ra
    // 0x4500E2B4: nop

    return;
    // 0x4500E2B4: nop

;}
RECOMP_FUNC void ovl_mobj_main_E2B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E2B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E2BC: sltiu       $at, $a1, 0x5
    ctx->r1 = ctx->r5 < 0X5 ? 1 : 0;
    // 0x4500E2C0: beq         $at, $zero, L_4500E32C
    if (ctx->r1 == 0) {
        // 0x4500E2C4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500E32C;
    }
    // 0x4500E2C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E2C8: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x4500E2CC: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500E2D0: addu        $at, $at, $t6
    gpr jr_addend_4500E2DC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x4500E2D4: lw          $t6, 0x2C90($at)
    ctx->r14 = ADD32(ctx->r1, 0X2C90);
    // 0x4500E2D8: nop

    // 0x4500E2DC: jr          $t6
    // 0x4500E2E0: nop

    switch (jr_addend_4500E2DC >> 2) {
        case 0: goto L_4500E2E4; break;
        case 1: goto L_4500E2F4; break;
        case 2: goto L_4500E304; break;
        case 3: goto L_4500E314; break;
        case 4: goto L_4500E324; break;
        default: switch_error(__func__, 0x4500E2DC, 0x45012C90);
    }
    // 0x4500E2E0: nop

L_4500E2E4:
    // 0x4500E2E4: jal         0x45009F3C
    // 0x4500E2E8: addiu       $a1, $zero, 0x12C0
    ctx->r5 = ADD32(0, 0X12C0);
    ovl_mobj_main_9F3C(rdram, ctx);
        goto after_0;
    // 0x4500E2E8: addiu       $a1, $zero, 0x12C0
    ctx->r5 = ADD32(0, 0X12C0);
    after_0:
    // 0x4500E2EC: b           L_4500E330
    // 0x4500E2F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E330;
    // 0x4500E2F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E2F4:
    // 0x4500E2F4: jal         0x45009F3C
    // 0x4500E2F8: addiu       $a1, $zero, 0x280
    ctx->r5 = ADD32(0, 0X280);
    ovl_mobj_main_9F3C(rdram, ctx);
        goto after_1;
    // 0x4500E2F8: addiu       $a1, $zero, 0x280
    ctx->r5 = ADD32(0, 0X280);
    after_1:
    // 0x4500E2FC: b           L_4500E330
    // 0x4500E300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E330;
    // 0x4500E300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E304:
    // 0x4500E304: jal         0x45009F3C
    // 0x4500E308: addiu       $a1, $zero, 0x240
    ctx->r5 = ADD32(0, 0X240);
    ovl_mobj_main_9F3C(rdram, ctx);
        goto after_2;
    // 0x4500E308: addiu       $a1, $zero, 0x240
    ctx->r5 = ADD32(0, 0X240);
    after_2:
    // 0x4500E30C: b           L_4500E330
    // 0x4500E310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E330;
    // 0x4500E310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E314:
    // 0x4500E314: jal         0x45009FCC
    // 0x4500E318: nop

    ovl_mobj_main_9FCC(rdram, ctx);
        goto after_3;
    // 0x4500E318: nop

    after_3:
    // 0x4500E31C: b           L_4500E330
    // 0x4500E320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E330;
    // 0x4500E320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E324:
    // 0x4500E324: jal         0x45009FE0
    // 0x4500E328: nop

    ovl_mobj_main_9FE0(rdram, ctx);
        goto after_4;
    // 0x4500E328: nop

    after_4:
L_4500E32C:
    // 0x4500E32C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E330:
    // 0x4500E330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E334: jr          $ra
    // 0x4500E338: nop

    return;
    // 0x4500E338: nop

;}
RECOMP_FUNC void ovl_mobj_main_E33C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E33C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E340: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    // 0x4500E344: bne         $a1, $at, L_4500E354
    if (ctx->r5 != ctx->r1) {
        // 0x4500E348: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500E354;
    }
    // 0x4500E348: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E34C: jal         0x450049F8
    // 0x4500E350: nop

    ovl_mobj_main_49F8(rdram, ctx);
        goto after_0;
    // 0x4500E350: nop

    after_0:
L_4500E354:
    // 0x4500E354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E35C: jr          $ra
    // 0x4500E360: nop

    return;
    // 0x4500E360: nop

;}
RECOMP_FUNC void ovl_mobj_main_E364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E364: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500E368: bne         $a1, $at, L_4500E380
    if (ctx->r5 != ctx->r1) {
        // 0x4500E36C: nop
    
            goto L_4500E380;
    }
    // 0x4500E36C: nop

    // 0x4500E370: lw          $t6, 0x204($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X204);
    // 0x4500E374: nop

    // 0x4500E378: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x4500E37C: sw          $t7, 0x204($a0)
    MEM_W(0X204, ctx->r4) = ctx->r15;
L_4500E380:
    // 0x4500E380: jr          $ra
    // 0x4500E384: nop

    return;
    // 0x4500E384: nop

;}
RECOMP_FUNC void ovl_mobj_main_E388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E388: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E38C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E390: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4500E394: jal         0x4500E0D0
    // 0x4500E398: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_E0D0(rdram, ctx);
        goto after_0;
    // 0x4500E398: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x4500E39C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E3A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E3A4: jr          $ra
    // 0x4500E3A8: nop

    return;
    // 0x4500E3A8: nop

;}
RECOMP_FUNC void ovl_mobj_main_E3AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E3AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E3B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E3B4: jal         0x4500E020
    // 0x4500E3B8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    ovl_mobj_main_E020(rdram, ctx);
        goto after_0;
    // 0x4500E3B8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_0:
    // 0x4500E3BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E3C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E3C4: jr          $ra
    // 0x4500E3C8: nop

    return;
    // 0x4500E3C8: nop

;}
RECOMP_FUNC void ovl_mobj_main_E3CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E3CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E3D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E3D4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x4500E3D8: jal         0x4500E0D0
    // 0x4500E3DC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    ovl_mobj_main_E0D0(rdram, ctx);
        goto after_0;
    // 0x4500E3DC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_0:
    // 0x4500E3E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E3E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E3E8: jr          $ra
    // 0x4500E3EC: nop

    return;
    // 0x4500E3EC: nop

;}
RECOMP_FUNC void ovl_mobj_main_E3F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E3F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E3F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E3F8: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x4500E3FC: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x4500E400: bne         $t6, $at, L_4500E41C
    if (ctx->r14 != ctx->r1) {
        // 0x4500E404: addiu       $a2, $zero, 0xA
        ctx->r6 = ADD32(0, 0XA);
            goto L_4500E41C;
    }
    // 0x4500E404: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x4500E408: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x4500E40C: jal         0x4500E0D0
    // 0x4500E410: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    ovl_mobj_main_E0D0(rdram, ctx);
        goto after_0;
    // 0x4500E410: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_0:
    // 0x4500E414: b           L_4500E428
    // 0x4500E418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E428;
    // 0x4500E418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E41C:
    // 0x4500E41C: jal         0x4500E0D0
    // 0x4500E420: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    ovl_mobj_main_E0D0(rdram, ctx);
        goto after_1;
    // 0x4500E420: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x4500E424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E428:
    // 0x4500E428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E42C: jr          $ra
    // 0x4500E430: nop

    return;
    // 0x4500E430: nop

;}
RECOMP_FUNC void ovl_mobj_main_E434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E434: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E438: beq         $a1, $zero, L_4500E454
    if (ctx->r5 == 0) {
        // 0x4500E43C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500E454;
    }
    // 0x4500E43C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E440: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500E444: beq         $a1, $at, L_4500E464
    if (ctx->r5 == ctx->r1) {
        // 0x4500E448: nop
    
            goto L_4500E464;
    }
    // 0x4500E448: nop

    // 0x4500E44C: b           L_4500E470
    // 0x4500E450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E470;
    // 0x4500E450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E454:
    // 0x4500E454: jal         0x4500A54C
    // 0x4500E458: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_A54C(rdram, ctx);
        goto after_0;
    // 0x4500E458: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x4500E45C: b           L_4500E470
    // 0x4500E460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E470;
    // 0x4500E460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E464:
    // 0x4500E464: jal         0x4500A584
    // 0x4500E468: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_A584(rdram, ctx);
        goto after_1;
    // 0x4500E468: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x4500E46C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E470:
    // 0x4500E470: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E474: jr          $ra
    // 0x4500E478: nop

    return;
    // 0x4500E478: nop

;}
RECOMP_FUNC void ovl_mobj_main_E47C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E47C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E480: sltiu       $at, $a1, 0x5
    ctx->r1 = ctx->r5 < 0X5 ? 1 : 0;
    // 0x4500E484: beq         $at, $zero, L_4500E4F0
    if (ctx->r1 == 0) {
        // 0x4500E488: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500E4F0;
    }
    // 0x4500E488: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E48C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x4500E490: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500E494: addu        $at, $at, $t6
    gpr jr_addend_4500E4A0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x4500E498: lw          $t6, 0x2CA4($at)
    ctx->r14 = ADD32(ctx->r1, 0X2CA4);
    // 0x4500E49C: nop

    // 0x4500E4A0: jr          $t6
    // 0x4500E4A4: nop

    switch (jr_addend_4500E4A0 >> 2) {
        case 0: goto L_4500E4A8; break;
        case 1: goto L_4500E4B8; break;
        case 2: goto L_4500E4C8; break;
        case 3: goto L_4500E4D8; break;
        case 4: goto L_4500E4E8; break;
        default: switch_error(__func__, 0x4500E4A0, 0x45012CA4);
    }
    // 0x4500E4A4: nop

L_4500E4A8:
    // 0x4500E4A8: jal         0x45009A58
    // 0x4500E4AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_9A58(rdram, ctx);
        goto after_0;
    // 0x4500E4AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x4500E4B0: b           L_4500E4F4
    // 0x4500E4B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E4F4;
    // 0x4500E4B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E4B8:
    // 0x4500E4B8: jal         0x45009A58
    // 0x4500E4BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_9A58(rdram, ctx);
        goto after_1;
    // 0x4500E4BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x4500E4C0: b           L_4500E4F4
    // 0x4500E4C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E4F4;
    // 0x4500E4C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E4C8:
    // 0x4500E4C8: jal         0x45009A58
    // 0x4500E4CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_mobj_main_9A58(rdram, ctx);
        goto after_2;
    // 0x4500E4CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x4500E4D0: b           L_4500E4F4
    // 0x4500E4D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E4F4;
    // 0x4500E4D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E4D8:
    // 0x4500E4D8: jal         0x45009A58
    // 0x4500E4DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_mobj_main_9A58(rdram, ctx);
        goto after_3;
    // 0x4500E4DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x4500E4E0: b           L_4500E4F4
    // 0x4500E4E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E4F4;
    // 0x4500E4E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E4E8:
    // 0x4500E4E8: jal         0x45009A58
    // 0x4500E4EC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_mobj_main_9A58(rdram, ctx);
        goto after_4;
    // 0x4500E4EC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
L_4500E4F0:
    // 0x4500E4F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E4F4:
    // 0x4500E4F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E4F8: jr          $ra
    // 0x4500E4FC: nop

    return;
    // 0x4500E4FC: nop

;}
RECOMP_FUNC void ovl_mobj_main_E500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E500: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E508: jal         0x4500E06C
    // 0x4500E50C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    ovl_mobj_main_E06C(rdram, ctx);
        goto after_0;
    // 0x4500E50C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x4500E510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E518: jr          $ra
    // 0x4500E51C: nop

    return;
    // 0x4500E51C: nop

;}
RECOMP_FUNC void ovl_mobj_main_E520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E520: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E524: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E528: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x4500E52C: jal         0x4500E0D0
    // 0x4500E530: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_E0D0(rdram, ctx);
        goto after_0;
    // 0x4500E530: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x4500E534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E53C: jr          $ra
    // 0x4500E540: nop

    return;
    // 0x4500E540: nop

;}
RECOMP_FUNC void ovl_mobj_main_E544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E544: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E548: bne         $a1, $zero, L_4500E558
    if (ctx->r5 != 0) {
        // 0x4500E54C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500E558;
    }
    // 0x4500E54C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E550: jal         0x4500725C
    // 0x4500E554: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_725C(rdram, ctx);
        goto after_0;
    // 0x4500E554: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
L_4500E558:
    // 0x4500E558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E55C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E560: jr          $ra
    // 0x4500E564: nop

    return;
    // 0x4500E564: nop

;}
RECOMP_FUNC void ovl_mobj_main_E568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E568: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E56C: sltiu       $at, $a1, 0x5
    ctx->r1 = ctx->r5 < 0X5 ? 1 : 0;
    // 0x4500E570: beq         $at, $zero, L_4500E5E8
    if (ctx->r1 == 0) {
        // 0x4500E574: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500E5E8;
    }
    // 0x4500E574: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E578: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x4500E57C: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500E580: addu        $at, $at, $t6
    gpr jr_addend_4500E58C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x4500E584: lw          $t6, 0x2CB8($at)
    ctx->r14 = ADD32(ctx->r1, 0X2CB8);
    // 0x4500E588: nop

    // 0x4500E58C: jr          $t6
    // 0x4500E590: nop

    switch (jr_addend_4500E58C >> 2) {
        case 0: goto L_4500E594; break;
        case 1: goto L_4500E5A4; break;
        case 2: goto L_4500E5B4; break;
        case 3: goto L_4500E5C8; break;
        case 4: goto L_4500E5DC; break;
        default: switch_error(__func__, 0x4500E58C, 0x45012CB8);
    }
    // 0x4500E590: nop

L_4500E594:
    // 0x4500E594: jal         0x45007348
    // 0x4500E598: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_7348(rdram, ctx);
        goto after_0;
    // 0x4500E598: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x4500E59C: b           L_4500E5EC
    // 0x4500E5A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E5EC;
    // 0x4500E5A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E5A4:
    // 0x4500E5A4: jal         0x45007370
    // 0x4500E5A8: nop

    ovl_mobj_main_7370(rdram, ctx);
        goto after_1;
    // 0x4500E5A8: nop

    after_1:
    // 0x4500E5AC: b           L_4500E5EC
    // 0x4500E5B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E5EC;
    // 0x4500E5B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E5B4:
    // 0x4500E5B4: addiu       $a1, $zero, 0x31E
    ctx->r5 = ADD32(0, 0X31E);
    // 0x4500E5B8: jal         0x450072F4
    // 0x4500E5BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_mobj_main_72F4(rdram, ctx);
        goto after_2;
    // 0x4500E5BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x4500E5C0: b           L_4500E5EC
    // 0x4500E5C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E5EC;
    // 0x4500E5C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E5C8:
    // 0x4500E5C8: addiu       $a1, $zero, 0x31F
    ctx->r5 = ADD32(0, 0X31F);
    // 0x4500E5CC: jal         0x450072F4
    // 0x4500E5D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_mobj_main_72F4(rdram, ctx);
        goto after_3;
    // 0x4500E5D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x4500E5D4: b           L_4500E5EC
    // 0x4500E5D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E5EC;
    // 0x4500E5D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E5DC:
    // 0x4500E5DC: addiu       $a1, $zero, 0x320
    ctx->r5 = ADD32(0, 0X320);
    // 0x4500E5E0: jal         0x450072F4
    // 0x4500E5E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_mobj_main_72F4(rdram, ctx);
        goto after_4;
    // 0x4500E5E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
L_4500E5E8:
    // 0x4500E5E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E5EC:
    // 0x4500E5EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E5F0: jr          $ra
    // 0x4500E5F4: nop

    return;
    // 0x4500E5F4: nop

;}
RECOMP_FUNC void ovl_mobj_main_E5F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E5F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E5FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E600: jal         0x4500E020
    // 0x4500E604: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    ovl_mobj_main_E020(rdram, ctx);
        goto after_0;
    // 0x4500E604: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_0:
    // 0x4500E608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E60C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E610: jr          $ra
    // 0x4500E614: nop

    return;
    // 0x4500E614: nop

;}
RECOMP_FUNC void ovl_mobj_main_E618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E618: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E61C: beq         $a1, $zero, L_4500E640
    if (ctx->r5 == 0) {
        // 0x4500E620: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500E640;
    }
    // 0x4500E620: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E624: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500E628: beq         $a1, $at, L_4500E650
    if (ctx->r5 == ctx->r1) {
        // 0x4500E62C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_4500E650;
    }
    // 0x4500E62C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4500E630: beq         $a1, $at, L_4500E660
    if (ctx->r5 == ctx->r1) {
        // 0x4500E634: nop
    
            goto L_4500E660;
    }
    // 0x4500E634: nop

    // 0x4500E638: b           L_4500E66C
    // 0x4500E63C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E66C;
    // 0x4500E63C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E640:
    // 0x4500E640: jal         0x45007704
    // 0x4500E644: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_7704(rdram, ctx);
        goto after_0;
    // 0x4500E644: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x4500E648: b           L_4500E66C
    // 0x4500E64C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E66C;
    // 0x4500E64C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E650:
    // 0x4500E650: jal         0x4500775C
    // 0x4500E654: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_775C(rdram, ctx);
        goto after_1;
    // 0x4500E654: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x4500E658: b           L_4500E66C
    // 0x4500E65C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500E66C;
    // 0x4500E65C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E660:
    // 0x4500E660: jal         0x450077B4
    // 0x4500E664: nop

    ovl_mobj_main_77B4(rdram, ctx);
        goto after_2;
    // 0x4500E664: nop

    after_2:
    // 0x4500E668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500E66C:
    // 0x4500E66C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E670: jr          $ra
    // 0x4500E674: nop

    return;
    // 0x4500E674: nop

;}
RECOMP_FUNC void ovl_mobj_main_E678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E67C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E680: jal         0x45007AD4
    // 0x4500E684: nop

    ovl_mobj_main_7AD4(rdram, ctx);
        goto after_0;
    // 0x4500E684: nop

    after_0:
    // 0x4500E688: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E68C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E690: jr          $ra
    // 0x4500E694: nop

    return;
    // 0x4500E694: nop

;}
RECOMP_FUNC void ovl_mobj_main_E698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E698: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E69C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E6A0: jal         0x4500E06C
    // 0x4500E6A4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    ovl_mobj_main_E06C(rdram, ctx);
        goto after_0;
    // 0x4500E6A4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_0:
    // 0x4500E6A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E6AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E6B0: jr          $ra
    // 0x4500E6B4: nop

    return;
    // 0x4500E6B4: nop

;}
RECOMP_FUNC void ovl_mobj_main_E6B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E6B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E6BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E6C0: jal         0x4500E020
    // 0x4500E6C4: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    ovl_mobj_main_E020(rdram, ctx);
        goto after_0;
    // 0x4500E6C4: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_0:
    // 0x4500E6C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E6CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E6D0: jr          $ra
    // 0x4500E6D4: nop

    return;
    // 0x4500E6D4: nop

;}
RECOMP_FUNC void ovl_mobj_main_E6D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E6D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E6DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E6E0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x4500E6E4: jal         0x4500E0D0
    // 0x4500E6E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_E0D0(rdram, ctx);
        goto after_0;
    // 0x4500E6E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x4500E6EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E6F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E6F4: jr          $ra
    // 0x4500E6F8: nop

    return;
    // 0x4500E6F8: nop

;}
RECOMP_FUNC void ovl_mobj_main_E6FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E6FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E704: jal         0x4500E020
    // 0x4500E708: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_mobj_main_E020(rdram, ctx);
        goto after_0;
    // 0x4500E708: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x4500E70C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E710: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E714: jr          $ra
    // 0x4500E718: nop

    return;
    // 0x4500E718: nop

;}
RECOMP_FUNC void ovl_mobj_main_E71C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500E71C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500E720: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500E724: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x4500E728: jal         0x4500E0D0
    // 0x4500E72C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    ovl_mobj_main_E0D0(rdram, ctx);
        goto after_0;
    // 0x4500E72C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x4500E730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500E734: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500E738: jr          $ra
    // 0x4500E73C: nop

    return;
    // 0x4500E73C: nop

;}
