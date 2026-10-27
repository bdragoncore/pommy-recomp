#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_actor_main_1658C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001658C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40016590: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x40016594: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40016598: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001659C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x400165A0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x400165A4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x400165A8: beq         $a1, $at, L_400165C4
    if (ctx->r5 == ctx->r1) {
        // 0x400165AC: sw          $a3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r7;
            goto L_400165C4;
    }
    // 0x400165AC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x400165B0: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x400165B4: beq         $a1, $at, L_400165F4
    if (ctx->r5 == ctx->r1) {
        // 0x400165B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400165F4;
    }
    // 0x400165B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400165BC: b           L_4001664C
    // 0x400165C0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
        goto L_4001664C;
    // 0x400165C0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_400165C4:
    // 0x400165C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400165C8: addiu       $a1, $zero, 0x56C
    ctx->r5 = ADD32(0, 0X56C);
    // 0x400165CC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400165D0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400165D4: jal         0x40008D64
    // 0x400165D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x400165D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x400165DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400165E0: addiu       $a1, $zero, 0x3C1
    ctx->r5 = ADD32(0, 0X3C1);
    // 0x400165E4: jal         0x4000115C
    // 0x400165E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_1;
    // 0x400165E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x400165EC: b           L_4001664C
    // 0x400165F0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
        goto L_4001664C;
    // 0x400165F0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_400165F4:
    // 0x400165F4: addiu       $a1, $zero, 0x26C
    ctx->r5 = ADD32(0, 0X26C);
    // 0x400165F8: jal         0x4000115C
    // 0x400165FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_2;
    // 0x400165FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x40016600: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40016604: lwc1        $f4, -0xFA8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0XFA8);
    // 0x40016608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001660C: addiu       $a1, $zero, 0x58
    ctx->r5 = ADD32(0, 0X58);
    // 0x40016610: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x40016614: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x40016618: jal         0x4000120C
    // 0x4001661C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_3;
    // 0x4001661C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x40016620: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x40016624: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016628: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x4001662C: jal         0x4001A598
    // 0x40016630: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    ovl_actor_main_1A598(rdram, ctx);
        goto after_4;
    // 0x40016630: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_4:
    // 0x40016634: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x40016638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001663C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x40016640: jal         0x40009000
    // 0x40016644: addiu       $a1, $a1, -0x21
    ctx->r5 = ADD32(ctx->r5, -0X21);
    ovl_actor_main_9000(rdram, ctx);
        goto after_5;
    // 0x40016644: addiu       $a1, $a1, -0x21
    ctx->r5 = ADD32(ctx->r5, -0X21);
    after_5:
    // 0x40016648: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_4001664C:
    // 0x4001664C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x40016650: nop

    // 0x40016654: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x40016658: bne         $at, $zero, L_4001666C
    if (ctx->r1 != 0) {
        // 0x4001665C: lw          $t9, 0x2C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X2C);
            goto L_4001666C;
    }
    // 0x4001665C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x40016660: jal         0x4000CB84
    // 0x40016664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_6;
    // 0x40016664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x40016668: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
L_4001666C:
    // 0x4001666C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016670: slti        $at, $t9, 0x21
    ctx->r1 = SIGNED(ctx->r25) < 0X21 ? 1 : 0;
    // 0x40016674: beq         $at, $zero, L_40016684
    if (ctx->r1 == 0) {
        // 0x40016678: addiu       $a1, $s0, 0x324
        ctx->r5 = ADD32(ctx->r16, 0X324);
            goto L_40016684;
    }
    // 0x40016678: addiu       $a1, $s0, 0x324
    ctx->r5 = ADD32(ctx->r16, 0X324);
    // 0x4001667C: jal         0x40011D40
    // 0x40016680: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    ovl_actor_main_11D40(rdram, ctx);
        goto after_7;
    // 0x40016680: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    after_7:
L_40016684:
    // 0x40016684: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40016688: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4001668C: jr          $ra
    // 0x40016690: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x40016690: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_16694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40016694: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40016698: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001669C: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x400166A0: jal         0x4001658C
    // 0x400166A4: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    ovl_actor_main_1658C(rdram, ctx);
        goto after_0;
    // 0x400166A4: addiu       $a3, $zero, 0x5A
    ctx->r7 = ADD32(0, 0X5A);
    after_0:
    // 0x400166A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400166AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x400166B0: jr          $ra
    // 0x400166B4: nop

    return;
    // 0x400166B4: nop

;}
RECOMP_FUNC void ovl_actor_main_166B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400166B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x400166BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400166C0: bne         $a1, $at, L_400166DC
    if (ctx->r5 != ctx->r1) {
        // 0x400166C4: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_400166DC;
    }
    // 0x400166C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400166C8: addiu       $a1, $zero, 0x56D
    ctx->r5 = ADD32(0, 0X56D);
    // 0x400166CC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400166D0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400166D4: jal         0x40008D64
    // 0x400166D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x400166D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_400166DC:
    // 0x400166DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400166E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x400166E4: jr          $ra
    // 0x400166E8: nop

    return;
    // 0x400166E8: nop

;}
RECOMP_FUNC void ovl_actor_main_166EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400166EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x400166F0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x400166F4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x400166F8: slti        $at, $a1, 0x4C
    ctx->r1 = SIGNED(ctx->r5) < 0X4C ? 1 : 0;
    // 0x400166FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40016700: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x40016704: bne         $at, $zero, L_40016744
    if (ctx->r1 != 0) {
        // 0x40016708: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_40016744;
    }
    // 0x40016708: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001670C: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    // 0x40016710: beq         $a1, $at, L_40016884
    if (ctx->r5 == ctx->r1) {
        // 0x40016714: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40016884;
    }
    // 0x40016714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016718: addiu       $at, $zero, 0xE6
    ctx->r1 = ADD32(0, 0XE6);
    // 0x4001671C: beq         $a1, $at, L_400168AC
    if (ctx->r5 == ctx->r1) {
        // 0x40016720: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400168AC;
    }
    // 0x40016720: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016724: addiu       $at, $zero, 0xE7
    ctx->r1 = ADD32(0, 0XE7);
    // 0x40016728: beq         $a1, $at, L_400168C4
    if (ctx->r5 == ctx->r1) {
        // 0x4001672C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400168C4;
    }
    // 0x4001672C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016730: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x40016734: beq         $a1, $at, L_40016908
    if (ctx->r5 == ctx->r1) {
        // 0x40016738: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40016908;
    }
    // 0x40016738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001673C: b           L_40016920
    // 0x40016740: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
        goto L_40016920;
    // 0x40016740: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
L_40016744:
    // 0x40016744: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40016748: beq         $s1, $at, L_40016788
    if (ctx->r17 == ctx->r1) {
        // 0x4001674C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40016788;
    }
    // 0x4001674C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016750: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x40016754: beq         $s1, $at, L_400167F0
    if (ctx->r17 == ctx->r1) {
        // 0x40016758: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400167F0;
    }
    // 0x40016758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001675C: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
    // 0x40016760: beq         $s1, $at, L_40016808
    if (ctx->r17 == ctx->r1) {
        // 0x40016764: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40016808;
    }
    // 0x40016764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016768: addiu       $at, $zero, 0x48
    ctx->r1 = ADD32(0, 0X48);
    // 0x4001676C: beq         $s1, $at, L_40016820
    if (ctx->r17 == ctx->r1) {
        // 0x40016770: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40016820;
    }
    // 0x40016770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016774: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
    // 0x40016778: beq         $s1, $at, L_40016838
    if (ctx->r17 == ctx->r1) {
        // 0x4001677C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40016838;
    }
    // 0x4001677C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016780: b           L_40016920
    // 0x40016784: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
        goto L_40016920;
    // 0x40016784: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
L_40016788:
    // 0x40016788: addiu       $a1, $zero, 0x56D
    ctx->r5 = ADD32(0, 0X56D);
    // 0x4001678C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40016790: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40016794: jal         0x40008D64
    // 0x40016798: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40016798: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4001679C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400167A0: lwc1        $f4, -0xFA4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0XFA4);
    // 0x400167A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400167A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x400167AC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400167B0: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x400167B4: jal         0x4000120C
    // 0x400167B8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_1;
    // 0x400167B8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x400167BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400167C0: addiu       $a1, $zero, 0x26E
    ctx->r5 = ADD32(0, 0X26E);
    // 0x400167C4: jal         0x4000115C
    // 0x400167C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_2;
    // 0x400167C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x400167CC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x400167D0: jal         0x40000E20
    // 0x400167D4: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    ovl_actor_main_E20(rdram, ctx);
        goto after_3;
    // 0x400167D4: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_3:
    // 0x400167D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400167DC: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x400167E0: jal         0x40009000
    // 0x400167E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_4;
    // 0x400167E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x400167E8: b           L_40016920
    // 0x400167EC: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
        goto L_40016920;
    // 0x400167EC: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
L_400167F0:
    // 0x400167F0: addiu       $a1, $s0, 0x324
    ctx->r5 = ADD32(ctx->r16, 0X324);
    // 0x400167F4: addiu       $a2, $zero, 0x56B
    ctx->r6 = ADD32(0, 0X56B);
    // 0x400167F8: jal         0x40011DA0
    // 0x400167FC: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_actor_main_11DA0(rdram, ctx);
        goto after_5;
    // 0x400167FC: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_5:
    // 0x40016800: b           L_40016920
    // 0x40016804: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
        goto L_40016920;
    // 0x40016804: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
L_40016808:
    // 0x40016808: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x4001680C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40016810: jal         0x400018BC
    // 0x40016814: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_6;
    // 0x40016814: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x40016818: b           L_40016920
    // 0x4001681C: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
        goto L_40016920;
    // 0x4001681C: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
L_40016820:
    // 0x40016820: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x40016824: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x40016828: jal         0x400018BC
    // 0x4001682C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_7;
    // 0x4001682C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x40016830: b           L_40016920
    // 0x40016834: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
        goto L_40016920;
    // 0x40016834: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
L_40016838:
    // 0x40016838: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x4001683C: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x40016840: jal         0x40011F94
    // 0x40016844: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    ovl_actor_main_11F94(rdram, ctx);
        goto after_8;
    // 0x40016844: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    after_8:
    // 0x40016848: beq         $v0, $zero, L_40016874
    if (ctx->r2 == 0) {
        // 0x4001684C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40016874;
    }
    // 0x4001684C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016850: addiu       $a1, $zero, 0x56E
    ctx->r5 = ADD32(0, 0X56E);
    // 0x40016854: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40016858: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001685C: jal         0x40008D64
    // 0x40016860: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_9;
    // 0x40016860: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x40016864: jal         0x40011B50
    // 0x40016868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11B50(rdram, ctx);
        goto after_10;
    // 0x40016868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x4001686C: b           L_40016920
    // 0x40016870: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
        goto L_40016920;
    // 0x40016870: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
L_40016874:
    // 0x40016874: jal         0x4000CB84
    // 0x40016878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_11;
    // 0x40016878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x4001687C: b           L_40016920
    // 0x40016880: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
        goto L_40016920;
    // 0x40016880: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
L_40016884:
    // 0x40016884: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x40016888: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001688C: jal         0x400018BC
    // 0x40016890: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_12;
    // 0x40016890: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x40016894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016898: addiu       $a1, $zero, 0x3C2
    ctx->r5 = ADD32(0, 0X3C2);
    // 0x4001689C: jal         0x4000115C
    // 0x400168A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_13;
    // 0x400168A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x400168A4: b           L_40016920
    // 0x400168A8: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
        goto L_40016920;
    // 0x400168A8: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
L_400168AC:
    // 0x400168AC: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x400168B0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x400168B4: jal         0x400018BC
    // 0x400168B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_14;
    // 0x400168B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x400168BC: b           L_40016920
    // 0x400168C0: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
        goto L_40016920;
    // 0x400168C0: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
L_400168C4:
    // 0x400168C4: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x400168C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x400168CC: lwc1        $f8, 0x324($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X324);
    // 0x400168D0: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400168D4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x400168D8: lwc1        $f18, -0xFA0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0XFA0);
    // 0x400168DC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x400168E0: addiu       $a1, $zero, 0x9F
    ctx->r5 = ADD32(0, 0X9F);
    // 0x400168E4: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x400168E8: jal         0x4000120C
    // 0x400168EC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_15;
    // 0x400168EC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_15:
    // 0x400168F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400168F4: addiu       $a1, $zero, 0x265
    ctx->r5 = ADD32(0, 0X265);
    // 0x400168F8: jal         0x4000115C
    // 0x400168FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_16;
    // 0x400168FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_16:
    // 0x40016900: b           L_40016920
    // 0x40016904: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
        goto L_40016920;
    // 0x40016904: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
L_40016908:
    // 0x40016908: addiu       $a1, $zero, 0x570
    ctx->r5 = ADD32(0, 0X570);
    // 0x4001690C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40016910: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40016914: jal         0x40008D64
    // 0x40016918: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_17;
    // 0x40016918: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_17:
    // 0x4001691C: slti        $at, $s1, 0x4B
    ctx->r1 = SIGNED(ctx->r17) < 0X4B ? 1 : 0;
L_40016920:
    // 0x40016920: beq         $at, $zero, L_40016934
    if (ctx->r1 == 0) {
        // 0x40016924: slti        $at, $s1, 0x3C
        ctx->r1 = SIGNED(ctx->r17) < 0X3C ? 1 : 0;
            goto L_40016934;
    }
    // 0x40016924: slti        $at, $s1, 0x3C
    ctx->r1 = SIGNED(ctx->r17) < 0X3C ? 1 : 0;
    // 0x40016928: jal         0x40011E8C
    // 0x4001692C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11E8C(rdram, ctx);
        goto after_18;
    // 0x4001692C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x40016930: slti        $at, $s1, 0x3C
    ctx->r1 = SIGNED(ctx->r17) < 0X3C ? 1 : 0;
L_40016934:
    // 0x40016934: bne         $at, $zero, L_40016954
    if (ctx->r1 != 0) {
        // 0x40016938: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40016954;
    }
    // 0x40016938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001693C: addiu       $t6, $s0, 0x324
    ctx->r14 = ADD32(ctx->r16, 0X324);
    // 0x40016940: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x40016944: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x40016948: addiu       $a2, $zero, 0x47
    ctx->r6 = ADD32(0, 0X47);
    // 0x4001694C: jal         0x40011BE4
    // 0x40016950: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_actor_main_11BE4(rdram, ctx);
        goto after_19;
    // 0x40016950: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_19:
L_40016954:
    // 0x40016954: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40016958: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x4001695C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x40016960: jr          $ra
    // 0x40016964: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x40016964: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_16968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40016968: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4001696C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40016970: bne         $a1, $at, L_40016994
    if (ctx->r5 != ctx->r1) {
        // 0x40016974: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40016994;
    }
    // 0x40016974: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40016978: addiu       $a1, $zero, 0x56F
    ctx->r5 = ADD32(0, 0X56F);
    // 0x4001697C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40016980: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40016984: jal         0x40008D64
    // 0x40016988: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40016988: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4001698C: b           L_400169EC
    // 0x40016990: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_400169EC;
    // 0x40016990: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40016994:
    // 0x40016994: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x40016998: bne         $a1, $at, L_400169EC
    if (ctx->r5 != ctx->r1) {
        // 0x4001699C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_400169EC;
    }
    // 0x4001699C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400169A0: lhu         $t6, 0x20($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X20);
    // 0x400169A4: addiu       $a1, $zero, 0x56F
    ctx->r5 = ADD32(0, 0X56F);
    // 0x400169A8: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x400169AC: bne         $t7, $zero, L_400169DC
    if (ctx->r15 != 0) {
        // 0x400169B0: lui         $a2, 0xBF80
        ctx->r6 = S32(0XBF80 << 16);
            goto L_400169DC;
    }
    // 0x400169B0: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    // 0x400169B4: lw          $t8, 0xCC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XCC);
    // 0x400169B8: addiu       $a1, $zero, 0x56F
    ctx->r5 = ADD32(0, 0X56F);
    // 0x400169BC: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x400169C0: sw          $t9, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r25;
    // 0x400169C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x400169C8: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    // 0x400169CC: jal         0x40008D64
    // 0x400169D0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_1;
    // 0x400169D0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_1:
    // 0x400169D4: b           L_400169EC
    // 0x400169D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_400169EC;
    // 0x400169D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400169DC:
    // 0x400169DC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400169E0: jal         0x40008D64
    // 0x400169E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_2;
    // 0x400169E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x400169E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400169EC:
    // 0x400169EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x400169F0: jr          $ra
    // 0x400169F4: nop

    return;
    // 0x400169F4: nop

;}
RECOMP_FUNC void ovl_actor_main_169F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400169F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x400169FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40016A00: bne         $a1, $at, L_40016A1C
    if (ctx->r5 != ctx->r1) {
        // 0x40016A04: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40016A1C;
    }
    // 0x40016A04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40016A08: addiu       $a1, $zero, 0x570
    ctx->r5 = ADD32(0, 0X570);
    // 0x40016A0C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40016A10: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40016A14: jal         0x40008D64
    // 0x40016A18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40016A18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_40016A1C:
    // 0x40016A1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40016A20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40016A24: jr          $ra
    // 0x40016A28: nop

    return;
    // 0x40016A28: nop

;}
RECOMP_FUNC void ovl_actor_main_16A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40016A2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40016A30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40016A34: bne         $a1, $at, L_40016A50
    if (ctx->r5 != ctx->r1) {
        // 0x40016A38: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40016A50;
    }
    // 0x40016A38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40016A3C: addiu       $a1, $zero, 0x571
    ctx->r5 = ADD32(0, 0X571);
    // 0x40016A40: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40016A44: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40016A48: jal         0x40008D64
    // 0x40016A4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40016A4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_40016A50:
    // 0x40016A50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40016A54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40016A58: jr          $ra
    // 0x40016A5C: nop

    return;
    // 0x40016A5C: nop

;}
RECOMP_FUNC void ovl_actor_main_16A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40016A60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40016A64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40016A68: bne         $a1, $at, L_40016A84
    if (ctx->r5 != ctx->r1) {
        // 0x40016A6C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40016A84;
    }
    // 0x40016A6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40016A70: addiu       $a1, $zero, 0x572
    ctx->r5 = ADD32(0, 0X572);
    // 0x40016A74: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40016A78: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40016A7C: jal         0x40008D64
    // 0x40016A80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40016A80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_40016A84:
    // 0x40016A84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40016A88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40016A8C: jr          $ra
    // 0x40016A90: nop

    return;
    // 0x40016A90: nop

;}
RECOMP_FUNC void ovl_actor_main_16A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40016A94: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x40016A98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40016A9C: lw          $v0, 0x340($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X340);
    // 0x40016AA0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x40016AA4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x40016AA8: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x40016AAC: sw          $t6, 0x340($a0)
    MEM_W(0X340, ctx->r4) = ctx->r14;
    // 0x40016AB0: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x40016AB4: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x40016AB8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x40016ABC: jal         0x400006C4
    // 0x40016AC0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40016AC0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x40016AC4: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x40016AC8: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x40016ACC: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x40016AD0: addiu       $v1, $a3, 0x324
    ctx->r3 = ADD32(ctx->r7, 0X324);
    // 0x40016AD4: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x40016AD8: addu        $v0, $v1, $t8
    ctx->r2 = ADD32(ctx->r3, ctx->r24);
    // 0x40016ADC: swc1        $f4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
    // 0x40016AE0: lw          $a0, 0x10($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X10);
    // 0x40016AE4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x40016AE8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x40016AEC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x40016AF0: jal         0x400006C4
    // 0x40016AF4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40016AF4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x40016AF8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x40016AFC: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x40016B00: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x40016B04: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    // 0x40016B08: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x40016B0C: nop

    // 0x40016B10: swc1        $f8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f8.u32l;
    // 0x40016B14: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x40016B18: nop

    // 0x40016B1C: swc1        $f10, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f10.u32l;
    // 0x40016B20: lw          $t9, 0x1C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X1C);
    // 0x40016B24: nop

    // 0x40016B28: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x40016B2C: bne         $at, $zero, L_40016B3C
    if (ctx->r1 != 0) {
        // 0x40016B30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40016B3C;
    }
    // 0x40016B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40016B34: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x40016B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40016B3C:
    // 0x40016B3C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x40016B40: jr          $ra
    // 0x40016B44: nop

    return;
    // 0x40016B44: nop

;}
RECOMP_FUNC void ovl_actor_main_16B48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40016B48: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x40016B4C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40016B50: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x40016B54: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x40016B58: lw          $t7, 0x340($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X340);
    // 0x40016B5C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40016B60: subu        $v1, $t7, $a2
    ctx->r3 = SUB32(ctx->r15, ctx->r6);
    // 0x40016B64: bgez        $v1, L_40016B70
    if (SIGNED(ctx->r3) >= 0) {
        // 0x40016B68: lui         $at, 0x4002
        ctx->r1 = S32(0X4002 << 16);
            goto L_40016B70;
    }
    // 0x40016B68: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40016B6C: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
L_40016B70:
    // 0x40016B70: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x40016B74: sll         $t9, $v1, 4
    ctx->r25 = S32(ctx->r3 << 4);
    // 0x40016B78: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x40016B7C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x40016B80: lwc1        $f4, 0x350($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X350);
    // 0x40016B84: lwc1        $f9, -0xF98($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0XF98);
    // 0x40016B88: lwc1        $f8, -0xF94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0XF94);
    // 0x40016B8C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x40016B90: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x40016B94: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x40016B98: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x40016B9C: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x40016BA0: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x40016BA4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x40016BA8: addiu       $t3, $sp, 0x34
    ctx->r11 = ADD32(ctx->r29, 0X34);
    // 0x40016BAC: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x40016BB0: lw          $a1, 0x330($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X330);
    // 0x40016BB4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x40016BB8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x40016BBC: addiu       $a2, $v0, 0x344
    ctx->r6 = ADD32(ctx->r2, 0X344);
    // 0x40016BC0: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x40016BC4: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    // 0x40016BC8: jal         0x40000F34
    // 0x40016BCC: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    ovl_actor_main_F34(rdram, ctx);
        goto after_0;
    // 0x40016BCC: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    after_0:
    // 0x40016BD0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40016BD4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x40016BD8: jr          $ra
    // 0x40016BDC: nop

    return;
    // 0x40016BDC: nop

;}
RECOMP_FUNC void ovl_actor_main_16BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40016BE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40016BE4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x40016BE8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40016BEC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40016BF0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40016BF4: bne         $a1, $at, L_40016C10
    if (ctx->r5 != ctx->r1) {
        // 0x40016BF8: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_40016C10;
    }
    // 0x40016BF8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x40016BFC: addiu       $a1, $zero, 0x572
    ctx->r5 = ADD32(0, 0X572);
    // 0x40016C00: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40016C04: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40016C08: jal         0x40008D64
    // 0x40016C0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40016C0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_40016C10:
    // 0x40016C10: jal         0x40009E78
    // 0x40016C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9E78(rdram, ctx);
        goto after_1;
    // 0x40016C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x40016C18: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x40016C1C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x40016C20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016C24: jal         0x40016A94
    // 0x40016C28: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    ovl_actor_main_16A94(rdram, ctx);
        goto after_2;
    // 0x40016C28: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    after_2:
    // 0x40016C2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016C30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x40016C34: jal         0x40016B48
    // 0x40016C38: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    ovl_actor_main_16B48(rdram, ctx);
        goto after_3;
    // 0x40016C38: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x40016C3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016C40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x40016C44: jal         0x40016B48
    // 0x40016C48: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    ovl_actor_main_16B48(rdram, ctx);
        goto after_4;
    // 0x40016C48: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_4:
    // 0x40016C4C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40016C50: lwc1        $f6, -0xF90($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0XF90);
    // 0x40016C54: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x40016C58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016C5C: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x40016C60: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x40016C64: bc1t        L_40016CA0
    if (c1cs) {
        // 0x40016C68: nop
    
            goto L_40016CA0;
    }
    // 0x40016C68: nop

    // 0x40016C6C: jal         0x40009000
    // 0x40016C70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_5;
    // 0x40016C70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x40016C74: jal         0x40011E8C
    // 0x40016C78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11E8C(rdram, ctx);
        goto after_6;
    // 0x40016C78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x40016C7C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x40016C80: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x40016C84: bne         $t7, $at, L_40016CB0
    if (ctx->r15 != ctx->r1) {
        // 0x40016C88: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40016CB0;
    }
    // 0x40016C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016C8C: addiu       $a1, $zero, 0x26F
    ctx->r5 = ADD32(0, 0X26F);
    // 0x40016C90: jal         0x4000115C
    // 0x40016C94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_7;
    // 0x40016C94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x40016C98: b           L_40016CB4
    // 0x40016C9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40016CB4;
    // 0x40016C9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40016CA0:
    // 0x40016CA0: jal         0x40008F98
    // 0x40016CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_8F98(rdram, ctx);
        goto after_8;
    // 0x40016CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x40016CA8: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x40016CAC: sw          $t8, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->r24;
L_40016CB0:
    // 0x40016CB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40016CB4:
    // 0x40016CB4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x40016CB8: jr          $ra
    // 0x40016CBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x40016CBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_16CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40016CC0: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x40016CC4: sw          $s6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r22;
    // 0x40016CC8: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
    // 0x40016CCC: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x40016CD0: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x40016CD4: sw          $s7, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r23;
    // 0x40016CD8: sw          $s5, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r21;
    // 0x40016CDC: sw          $s4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r20;
    // 0x40016CE0: sw          $s3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r19;
    // 0x40016CE4: sw          $s2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r18;
    // 0x40016CE8: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    // 0x40016CEC: swc1        $f25, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x40016CF0: swc1        $f24, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f24.u32l;
    // 0x40016CF4: swc1        $f23, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x40016CF8: swc1        $f22, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f22.u32l;
    // 0x40016CFC: swc1        $f21, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x40016D00: swc1        $f20, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f20.u32l;
    // 0x40016D04: addiu       $s0, $sp, 0xC0
    ctx->r16 = ADD32(ctx->r29, 0XC0);
    // 0x40016D08: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x40016D0C: addiu       $s1, $zero, 0xB4
    ctx->r17 = ADD32(0, 0XB4);
    // 0x40016D10: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x40016D14: jal         0x400006C4
    // 0x40016D18: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40016D18: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x40016D1C: lwc1        $f20, 0xC0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x40016D20: lw          $a0, 0x10($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X10);
    // 0x40016D24: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x40016D28: jal         0x400006C4
    // 0x40016D2C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40016D2C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_1:
    // 0x40016D30: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x40016D34: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x40016D38: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x40016D3C: addiu       $s7, $s6, 0x324
    ctx->r23 = ADD32(ctx->r22, 0X324);
    // 0x40016D40: addiu       $s0, $s7, 0xC
    ctx->r16 = ADD32(ctx->r23, 0XC);
    // 0x40016D44: lui         $s4, 0x4002
    ctx->r20 = S32(0X4002 << 16);
    // 0x40016D48: addiu       $s4, $s4, -0x20CC
    ctx->r20 = ADD32(ctx->r20, -0X20CC);
    // 0x40016D4C: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
    // 0x40016D50: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x40016D54: addiu       $s5, $zero, 0x14
    ctx->r21 = ADD32(0, 0X14);
    // 0x40016D58: cvt.d.s     $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f24.d = CVT_D_S(ctx->f6.fl);
    // 0x40016D5C: cvt.d.s     $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f22.d = CVT_D_S(ctx->f4.fl);
L_40016D60:
    // 0x40016D60: lw          $t6, 0x14($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X14);
    // 0x40016D64: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x40016D68: multu       $t6, $s5
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x40016D6C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x40016D70: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    // 0x40016D74: mflo        $t7
    ctx->r15 = lo;
    // 0x40016D78: addu        $t8, $s4, $t7
    ctx->r24 = ADD32(ctx->r20, ctx->r15);
    // 0x40016D7C: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x40016D80: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x40016D84: jal         0x40000F34
    // 0x40016D88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_F34(rdram, ctx);
        goto after_2;
    // 0x40016D88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x40016D8C: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x40016D90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x40016D94: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x40016D98: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x40016D9C: jal         0x40000F34
    // 0x40016DA0: addiu       $a3, $zero, 0x572
    ctx->r7 = ADD32(0, 0X572);
    ovl_actor_main_F34(rdram, ctx);
        goto after_3;
    // 0x40016DA0: addiu       $a3, $zero, 0x572
    ctx->r7 = ADD32(0, 0X572);
    after_3:
    // 0x40016DA4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x40016DA8: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x40016DAC: addiu       $t9, $zero, 0x1B
    ctx->r25 = ADD32(0, 0X1B);
    // 0x40016DB0: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x40016DB4: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x40016DB8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x40016DBC: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x40016DC0: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x40016DC4: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x40016DC8: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x40016DCC: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    // 0x40016DD0: swc1        $f23, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x40016DD4: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x40016DD8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x40016DDC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x40016DE0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x40016DE4: jal         0x40000F34
    // 0x40016DE8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_actor_main_F34(rdram, ctx);
        goto after_4;
    // 0x40016DE8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_4:
    // 0x40016DEC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x40016DF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x40016DF4: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x40016DF8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x40016DFC: jal         0x40000F34
    // 0x40016E00: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    ovl_actor_main_F34(rdram, ctx);
        goto after_5;
    // 0x40016E00: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_5:
    // 0x40016E04: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x40016E08: slti        $at, $s2, 0x10
    ctx->r1 = SIGNED(ctx->r18) < 0X10 ? 1 : 0;
    // 0x40016E0C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x40016E10: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x40016E14: bne         $at, $zero, L_40016D60
    if (ctx->r1 != 0) {
        // 0x40016E18: addiu       $s1, $s1, -0x32
        ctx->r17 = ADD32(ctx->r17, -0X32);
            goto L_40016D60;
    }
    // 0x40016E18: addiu       $s1, $s1, -0x32
    ctx->r17 = ADD32(ctx->r17, -0X32);
    // 0x40016E1C: sw          $zero, 0x1C($s7)
    MEM_W(0X1C, ctx->r23) = 0;
    // 0x40016E20: lwc1        $f8, 0xC0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x40016E24: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x40016E28: swc1        $f8, 0x20($s7)
    MEM_W(0X20, ctx->r23) = ctx->f8.u32l;
    // 0x40016E2C: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x40016E30: addiu       $v0, $s7, 0x20
    ctx->r2 = ADD32(ctx->r23, 0X20);
    // 0x40016E34: swc1        $f10, 0x24($s7)
    MEM_W(0X24, ctx->r23) = ctx->f10.u32l;
    // 0x40016E38: lwc1        $f16, 0xC8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x40016E3C: swc1        $f20, 0x2C($s7)
    MEM_W(0X2C, ctx->r23) = ctx->f20.u32l;
    // 0x40016E40: swc1        $f16, 0x28($s7)
    MEM_W(0X28, ctx->r23) = ctx->f16.u32l;
    // 0x40016E44: lwc1        $f18, 0xC0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x40016E48: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x40016E4C: swc1        $f18, 0x30($s7)
    MEM_W(0X30, ctx->r23) = ctx->f18.u32l;
    // 0x40016E50: lwc1        $f4, 0xC4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x40016E54: nop

    // 0x40016E58: swc1        $f4, 0x34($s7)
    MEM_W(0X34, ctx->r23) = ctx->f4.u32l;
    // 0x40016E5C: lwc1        $f6, 0xC8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x40016E60: swc1        $f20, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = ctx->f20.u32l;
    // 0x40016E64: swc1        $f6, 0x38($s7)
    MEM_W(0X38, ctx->r23) = ctx->f6.u32l;
    // 0x40016E68: lwc1        $f24, 0xC0($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x40016E6C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x40016E70: beq         $v1, $a0, L_40016F08
    if (ctx->r3 == ctx->r4) {
        // 0x40016E74: swc1        $f24, 0x20($v0)
        MEM_W(0X20, ctx->r2) = ctx->f24.u32l;
            goto L_40016F08;
    }
    // 0x40016E74: swc1        $f24, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f24.u32l;
L_40016E78:
    // 0x40016E78: lwc1        $f24, 0xC4($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x40016E7C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x40016E80: swc1        $f24, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f24.u32l;
    // 0x40016E84: lwc1        $f24, 0xC8($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x40016E88: swc1        $f20, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f20.u32l;
    // 0x40016E8C: swc1        $f24, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f24.u32l;
    // 0x40016E90: lwc1        $f24, 0xC0($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x40016E94: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x40016E98: swc1        $f24, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f24.u32l;
    // 0x40016E9C: lwc1        $f24, 0xC4($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x40016EA0: nop

    // 0x40016EA4: swc1        $f24, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f24.u32l;
    // 0x40016EA8: lwc1        $f24, 0xC8($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x40016EAC: swc1        $f20, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f20.u32l;
    // 0x40016EB0: swc1        $f24, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f24.u32l;
    // 0x40016EB4: lwc1        $f24, 0xC0($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x40016EB8: nop

    // 0x40016EBC: swc1        $f24, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f24.u32l;
    // 0x40016EC0: lwc1        $f24, 0xC4($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x40016EC4: nop

    // 0x40016EC8: swc1        $f24, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f24.u32l;
    // 0x40016ECC: lwc1        $f24, 0xC8($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x40016ED0: swc1        $f20, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f20.u32l;
    // 0x40016ED4: swc1        $f24, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f24.u32l;
    // 0x40016ED8: lwc1        $f24, 0xC0($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x40016EDC: nop

    // 0x40016EE0: swc1        $f24, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f24.u32l;
    // 0x40016EE4: lwc1        $f24, 0xC4($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x40016EE8: nop

    // 0x40016EEC: swc1        $f24, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f24.u32l;
    // 0x40016EF0: lwc1        $f24, 0xC8($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x40016EF4: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x40016EF8: swc1        $f24, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f24.u32l;
    // 0x40016EFC: lwc1        $f24, 0xC0($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x40016F00: bne         $v1, $a0, L_40016E78
    if (ctx->r3 != ctx->r4) {
        // 0x40016F04: swc1        $f24, 0x20($v0)
        MEM_W(0X20, ctx->r2) = ctx->f24.u32l;
            goto L_40016E78;
    }
    // 0x40016F04: swc1        $f24, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f24.u32l;
L_40016F08:
    // 0x40016F08: lwc1        $f24, 0xC4($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x40016F0C: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x40016F10: swc1        $f24, -0x1C($v0)
    MEM_W(-0X1C, ctx->r2) = ctx->f24.u32l;
    // 0x40016F14: lwc1        $f24, 0xC8($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x40016F18: swc1        $f20, -0x14($v0)
    MEM_W(-0X14, ctx->r2) = ctx->f20.u32l;
    // 0x40016F1C: swc1        $f24, -0x18($v0)
    MEM_W(-0X18, ctx->r2) = ctx->f24.u32l;
    // 0x40016F20: lwc1        $f24, 0xC0($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x40016F24: nop

    // 0x40016F28: swc1        $f24, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f24.u32l;
    // 0x40016F2C: lwc1        $f24, 0xC4($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x40016F30: nop

    // 0x40016F34: swc1        $f24, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f24.u32l;
    // 0x40016F38: lwc1        $f24, 0xC8($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x40016F3C: swc1        $f20, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f20.u32l;
    // 0x40016F40: swc1        $f24, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f24.u32l;
    // 0x40016F44: lwc1        $f24, 0xC0($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x40016F48: nop

    // 0x40016F4C: swc1        $f24, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f24.u32l;
    // 0x40016F50: lwc1        $f24, 0xC4($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x40016F54: nop

    // 0x40016F58: swc1        $f24, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f24.u32l;
    // 0x40016F5C: lwc1        $f24, 0xC8($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x40016F60: swc1        $f20, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f20.u32l;
    // 0x40016F64: swc1        $f24, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f24.u32l;
    // 0x40016F68: lwc1        $f24, 0xC0($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x40016F6C: nop

    // 0x40016F70: swc1        $f24, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f24.u32l;
    // 0x40016F74: lwc1        $f24, 0xC4($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x40016F78: nop

    // 0x40016F7C: swc1        $f24, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f24.u32l;
    // 0x40016F80: lwc1        $f24, 0xC8($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x40016F84: swc1        $f20, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f20.u32l;
    // 0x40016F88: swc1        $f24, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f24.u32l;
    // 0x40016F8C: lw          $a1, 0xC0($s6)
    ctx->r5 = MEM_W(ctx->r22, 0XC0);
    // 0x40016F90: jal         0x40011944
    // 0x40016F94: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    ovl_actor_main_11944(rdram, ctx);
        goto after_6;
    // 0x40016F94: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_6:
    // 0x40016F98: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x40016F9C: sw          $t1, 0xC0($s6)
    MEM_W(0XC0, ctx->r22) = ctx->r9;
    // 0x40016FA0: sw          $zero, 0xC4($s6)
    MEM_W(0XC4, ctx->r22) = 0;
    // 0x40016FA4: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x40016FA8: lw          $s7, 0x80($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X80);
    // 0x40016FAC: lw          $s6, 0x7C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X7C);
    // 0x40016FB0: lw          $s5, 0x78($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X78);
    // 0x40016FB4: lw          $s4, 0x74($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X74);
    // 0x40016FB8: lw          $s3, 0x70($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X70);
    // 0x40016FBC: lw          $s2, 0x6C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X6C);
    // 0x40016FC0: lw          $s1, 0x68($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X68);
    // 0x40016FC4: lw          $s0, 0x64($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X64);
    // 0x40016FC8: lwc1        $f24, 0x5C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x40016FCC: lwc1        $f25, 0x58($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x40016FD0: lwc1        $f22, 0x54($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X54);
    // 0x40016FD4: lwc1        $f23, 0x50($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x40016FD8: lwc1        $f20, 0x4C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x40016FDC: lwc1        $f21, 0x48($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x40016FE0: jr          $ra
    // 0x40016FE4: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x40016FE4: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void ovl_actor_main_16FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40016FE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40016FEC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x40016FF0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x40016FF4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x40016FF8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x40016FFC: addiu       $s0, $a0, 0x324
    ctx->r16 = ADD32(ctx->r4, 0X324);
    // 0x40017000: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40017004: addiu       $s2, $s0, 0xC
    ctx->r18 = ADD32(ctx->r16, 0XC);
    // 0x40017008: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x4001700C: addiu       $s3, $zero, 0x10
    ctx->r19 = ADD32(0, 0X10);
L_40017010:
    // 0x40017010: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x40017014: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x40017018: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x4001701C: jal         0x40000F34
    // 0x40017020: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_F34(rdram, ctx);
        goto after_0;
    // 0x40017020: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x40017024: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x40017028: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x4001702C: jal         0x40000F34
    // 0x40017030: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_F34(rdram, ctx);
        goto after_1;
    // 0x40017030: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x40017034: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x40017038: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x4001703C: bne         $s1, $s3, L_40017010
    if (ctx->r17 != ctx->r19) {
        // 0x40017040: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_40017010;
    }
    // 0x40017040: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x40017044: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40017048: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x4001704C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x40017050: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x40017054: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x40017058: jr          $ra
    // 0x4001705C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4001705C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_17060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40017060: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40017064: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40017068: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x4001706C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x40017070: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    // 0x40017074: jal         0x4001658C
    // 0x40017078: addiu       $a3, $zero, 0x69
    ctx->r7 = ADD32(0, 0X69);
    ovl_actor_main_1658C(rdram, ctx);
        goto after_0;
    // 0x40017078: addiu       $a3, $zero, 0x69
    ctx->r7 = ADD32(0, 0X69);
    after_0:
    // 0x4001707C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x40017080: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x40017084: bne         $t6, $at, L_400170E4
    if (ctx->r14 != ctx->r1) {
        // 0x40017088: addiu       $a1, $zero, 0x1F
        ctx->r5 = ADD32(0, 0X1F);
            goto L_400170E4;
    }
    // 0x40017088: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x4001708C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x40017090: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x40017094: addiu       $v0, $a0, 0x324
    ctx->r2 = ADD32(ctx->r4, 0X324);
    // 0x40017098: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x4001709C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x400170A0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x400170A4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x400170A8: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x400170AC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x400170B0: jal         0x4001A534
    // 0x400170B4: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    ovl_actor_main_1A534(rdram, ctx);
        goto after_1;
    // 0x400170B4: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_1:
    // 0x400170B8: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x400170BC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x400170C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x400170C4: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x400170C8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x400170CC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x400170D0: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x400170D4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x400170D8: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x400170DC: jal         0x4001A534
    // 0x400170E0: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    ovl_actor_main_1A534(rdram, ctx);
        goto after_2;
    // 0x400170E0: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_2:
L_400170E4:
    // 0x400170E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400170E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x400170EC: jr          $ra
    // 0x400170F0: nop

    return;
    // 0x400170F0: nop

;}
RECOMP_FUNC void ovl_actor_main_170F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400170F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x400170F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400170FC: bne         $a1, $at, L_40017120
    if (ctx->r5 != ctx->r1) {
        // 0x40017100: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40017120;
    }
    // 0x40017100: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40017104: addiu       $a1, $zero, 0x573
    ctx->r5 = ADD32(0, 0X573);
    // 0x40017108: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001710C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40017110: jal         0x40008D64
    // 0x40017114: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40017114: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40017118: b           L_40017138
    // 0x4001711C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40017138;
    // 0x4001711C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40017120:
    // 0x40017120: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    // 0x40017124: bne         $a1, $at, L_40017138
    if (ctx->r5 != ctx->r1) {
        // 0x40017128: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40017138;
    }
    // 0x40017128: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001712C: jal         0x4000CB84
    // 0x40017130: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_1;
    // 0x40017130: nop

    after_1:
    // 0x40017134: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40017138:
    // 0x40017138: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4001713C: jr          $ra
    // 0x40017140: nop

    return;
    // 0x40017140: nop

;}
RECOMP_FUNC void ovl_actor_main_17144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40017144: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40017148: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001714C: bne         $a1, $at, L_40017170
    if (ctx->r5 != ctx->r1) {
        // 0x40017150: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40017170;
    }
    // 0x40017150: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40017154: addiu       $a1, $zero, 0x574
    ctx->r5 = ADD32(0, 0X574);
    // 0x40017158: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001715C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40017160: jal         0x40008D64
    // 0x40017164: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40017164: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40017168: b           L_40017188
    // 0x4001716C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40017188;
    // 0x4001716C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40017170:
    // 0x40017170: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    // 0x40017174: bne         $a1, $at, L_40017188
    if (ctx->r5 != ctx->r1) {
        // 0x40017178: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40017188;
    }
    // 0x40017178: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001717C: jal         0x4000CB84
    // 0x40017180: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_1;
    // 0x40017180: nop

    after_1:
    // 0x40017184: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40017188:
    // 0x40017188: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4001718C: jr          $ra
    // 0x40017190: nop

    return;
    // 0x40017190: nop

;}
RECOMP_FUNC void ovl_actor_main_17194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40017194: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40017198: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001719C: bne         $a1, $at, L_400171C0
    if (ctx->r5 != ctx->r1) {
        // 0x400171A0: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_400171C0;
    }
    // 0x400171A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400171A4: addiu       $a1, $zero, 0x575
    ctx->r5 = ADD32(0, 0X575);
    // 0x400171A8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400171AC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400171B0: jal         0x40008D64
    // 0x400171B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x400171B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x400171B8: b           L_400171D8
    // 0x400171BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_400171D8;
    // 0x400171BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400171C0:
    // 0x400171C0: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x400171C4: bne         $a1, $at, L_400171D8
    if (ctx->r5 != ctx->r1) {
        // 0x400171C8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_400171D8;
    }
    // 0x400171C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400171CC: jal         0x4000CB84
    // 0x400171D0: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_1;
    // 0x400171D0: nop

    after_1:
    // 0x400171D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400171D8:
    // 0x400171D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x400171DC: jr          $ra
    // 0x400171E0: nop

    return;
    // 0x400171E0: nop

;}
RECOMP_FUNC void ovl_actor_main_171E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400171E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x400171E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400171EC: bne         $a1, $at, L_40017208
    if (ctx->r5 != ctx->r1) {
        // 0x400171F0: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40017208;
    }
    // 0x400171F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400171F4: addiu       $a1, $zero, 0x576
    ctx->r5 = ADD32(0, 0X576);
    // 0x400171F8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400171FC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40017200: jal         0x40008D64
    // 0x40017204: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40017204: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_40017208:
    // 0x40017208: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001720C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40017210: jr          $ra
    // 0x40017214: nop

    return;
    // 0x40017214: nop

;}
RECOMP_FUNC void ovl_actor_main_17218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40017218: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4001721C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x40017220: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40017224: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40017228: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001722C: beq         $a1, $at, L_40017278
    if (ctx->r5 == ctx->r1) {
        // 0x40017230: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_40017278;
    }
    // 0x40017230: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x40017234: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x40017238: beq         $a1, $at, L_400172E4
    if (ctx->r5 == ctx->r1) {
        // 0x4001723C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400172E4;
    }
    // 0x4001723C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017240: addiu       $at, $zero, 0x3E
    ctx->r1 = ADD32(0, 0X3E);
    // 0x40017244: beq         $a1, $at, L_400172FC
    if (ctx->r5 == ctx->r1) {
        // 0x40017248: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400172FC;
    }
    // 0x40017248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001724C: addiu       $at, $zero, 0x92
    ctx->r1 = ADD32(0, 0X92);
    // 0x40017250: beq         $a1, $at, L_40017348
    if (ctx->r5 == ctx->r1) {
        // 0x40017254: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40017348;
    }
    // 0x40017254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017258: addiu       $at, $zero, 0xAB
    ctx->r1 = ADD32(0, 0XAB);
    // 0x4001725C: beq         $a1, $at, L_40017370
    if (ctx->r5 == ctx->r1) {
        // 0x40017260: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40017370;
    }
    // 0x40017260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017264: addiu       $at, $zero, 0xD9
    ctx->r1 = ADD32(0, 0XD9);
    // 0x40017268: beq         $a1, $at, L_40017388
    if (ctx->r5 == ctx->r1) {
        // 0x4001726C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40017388;
    }
    // 0x4001726C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017270: b           L_400173A0
    // 0x40017274: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
        goto L_400173A0;
    // 0x40017274: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_40017278:
    // 0x40017278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001727C: addiu       $a1, $zero, 0x56D
    ctx->r5 = ADD32(0, 0X56D);
    // 0x40017280: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40017284: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40017288: jal         0x40008D64
    // 0x4001728C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x4001728C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40017290: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40017294: lwc1        $f4, -0xF8C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0XF8C);
    // 0x40017298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001729C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x400172A0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400172A4: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x400172A8: jal         0x4000120C
    // 0x400172AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_1;
    // 0x400172AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x400172B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400172B4: addiu       $a1, $zero, 0x282
    ctx->r5 = ADD32(0, 0X282);
    // 0x400172B8: jal         0x4000115C
    // 0x400172BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_2;
    // 0x400172BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x400172C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400172C4: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x400172C8: jal         0x40009000
    // 0x400172CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_3;
    // 0x400172CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x400172D0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x400172D4: jal         0x40000E20
    // 0x400172D8: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    ovl_actor_main_E20(rdram, ctx);
        goto after_4;
    // 0x400172D8: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_4:
    // 0x400172DC: b           L_400173A0
    // 0x400172E0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
        goto L_400173A0;
    // 0x400172E0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_400172E4:
    // 0x400172E4: addiu       $a1, $s0, 0x324
    ctx->r5 = ADD32(ctx->r16, 0X324);
    // 0x400172E8: addiu       $a2, $zero, 0x56B
    ctx->r6 = ADD32(0, 0X56B);
    // 0x400172EC: jal         0x40011DA0
    // 0x400172F0: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_actor_main_11DA0(rdram, ctx);
        goto after_5;
    // 0x400172F0: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_5:
    // 0x400172F4: b           L_400173A0
    // 0x400172F8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
        goto L_400173A0;
    // 0x400172F8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_400172FC:
    // 0x400172FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x40017300: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x40017304: jal         0x40011F94
    // 0x40017308: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    ovl_actor_main_11F94(rdram, ctx);
        goto after_6;
    // 0x40017308: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    after_6:
    // 0x4001730C: beq         $v0, $zero, L_40017338
    if (ctx->r2 == 0) {
        // 0x40017310: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40017338;
    }
    // 0x40017310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017314: addiu       $a1, $zero, 0x577
    ctx->r5 = ADD32(0, 0X577);
    // 0x40017318: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001731C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40017320: jal         0x40008D64
    // 0x40017324: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_7;
    // 0x40017324: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x40017328: jal         0x40011B50
    // 0x4001732C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11B50(rdram, ctx);
        goto after_8;
    // 0x4001732C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x40017330: b           L_400173A0
    // 0x40017334: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
        goto L_400173A0;
    // 0x40017334: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_40017338:
    // 0x40017338: jal         0x4000CB84
    // 0x4001733C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_9;
    // 0x4001733C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x40017340: b           L_400173A0
    // 0x40017344: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
        goto L_400173A0;
    // 0x40017344: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_40017348:
    // 0x40017348: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x4001734C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40017350: jal         0x400018BC
    // 0x40017354: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_10;
    // 0x40017354: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x40017358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001735C: addiu       $a1, $zero, 0x3AC
    ctx->r5 = ADD32(0, 0X3AC);
    // 0x40017360: jal         0x4000115C
    // 0x40017364: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_11;
    // 0x40017364: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x40017368: b           L_400173A0
    // 0x4001736C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
        goto L_400173A0;
    // 0x4001736C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_40017370:
    // 0x40017370: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x40017374: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x40017378: jal         0x400018BC
    // 0x4001737C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_12;
    // 0x4001737C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x40017380: b           L_400173A0
    // 0x40017384: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
        goto L_400173A0;
    // 0x40017384: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_40017388:
    // 0x40017388: addiu       $a1, $zero, 0x579
    ctx->r5 = ADD32(0, 0X579);
    // 0x4001738C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40017390: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40017394: jal         0x40008D64
    // 0x40017398: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_13;
    // 0x40017398: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_13:
    // 0x4001739C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_400173A0:
    // 0x400173A0: nop

    // 0x400173A4: slti        $at, $t7, 0x3E
    ctx->r1 = SIGNED(ctx->r15) < 0X3E ? 1 : 0;
    // 0x400173A8: beq         $at, $zero, L_400173BC
    if (ctx->r1 == 0) {
        // 0x400173AC: lw          $t8, 0x2C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X2C);
            goto L_400173BC;
    }
    // 0x400173AC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x400173B0: jal         0x40011E8C
    // 0x400173B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11E8C(rdram, ctx);
        goto after_14;
    // 0x400173B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x400173B8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_400173BC:
    // 0x400173BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400173C0: slti        $at, $t8, 0x3C
    ctx->r1 = SIGNED(ctx->r24) < 0X3C ? 1 : 0;
    // 0x400173C4: bne         $at, $zero, L_400173E0
    if (ctx->r1 != 0) {
        // 0x400173C8: or          $a1, $t8, $zero
        ctx->r5 = ctx->r24 | 0;
            goto L_400173E0;
    }
    // 0x400173C8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x400173CC: addiu       $t9, $s0, 0x324
    ctx->r25 = ADD32(ctx->r16, 0X324);
    // 0x400173D0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x400173D4: addiu       $a2, $zero, 0x3D
    ctx->r6 = ADD32(0, 0X3D);
    // 0x400173D8: jal         0x40011BE4
    // 0x400173DC: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_actor_main_11BE4(rdram, ctx);
        goto after_15;
    // 0x400173DC: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_15:
L_400173E0:
    // 0x400173E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x400173E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x400173E8: jr          $ra
    // 0x400173EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x400173EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_173F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400173F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x400173F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400173F8: bne         $a1, $at, L_4001741C
    if (ctx->r5 != ctx->r1) {
        // 0x400173FC: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_4001741C;
    }
    // 0x400173FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40017400: addiu       $a1, $zero, 0x578
    ctx->r5 = ADD32(0, 0X578);
    // 0x40017404: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40017408: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001740C: jal         0x40008D64
    // 0x40017410: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40017410: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40017414: b           L_40017474
    // 0x40017418: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40017474;
    // 0x40017418: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4001741C:
    // 0x4001741C: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x40017420: bne         $a1, $at, L_40017474
    if (ctx->r5 != ctx->r1) {
        // 0x40017424: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40017474;
    }
    // 0x40017424: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40017428: lhu         $t6, 0x20($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X20);
    // 0x4001742C: addiu       $a1, $zero, 0x578
    ctx->r5 = ADD32(0, 0X578);
    // 0x40017430: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x40017434: bne         $t7, $zero, L_40017464
    if (ctx->r15 != 0) {
        // 0x40017438: lui         $a2, 0xBF80
        ctx->r6 = S32(0XBF80 << 16);
            goto L_40017464;
    }
    // 0x40017438: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    // 0x4001743C: lw          $t8, 0xCC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XCC);
    // 0x40017440: addiu       $a1, $zero, 0x578
    ctx->r5 = ADD32(0, 0X578);
    // 0x40017444: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x40017448: sw          $t9, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r25;
    // 0x4001744C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x40017450: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    // 0x40017454: jal         0x40008D64
    // 0x40017458: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_1;
    // 0x40017458: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_1:
    // 0x4001745C: b           L_40017474
    // 0x40017460: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40017474;
    // 0x40017460: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40017464:
    // 0x40017464: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40017468: jal         0x40008D64
    // 0x4001746C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_2;
    // 0x4001746C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x40017470: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40017474:
    // 0x40017474: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40017478: jr          $ra
    // 0x4001747C: nop

    return;
    // 0x4001747C: nop

;}
RECOMP_FUNC void ovl_actor_main_17480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40017480: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40017484: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40017488: bne         $a1, $at, L_400174A4
    if (ctx->r5 != ctx->r1) {
        // 0x4001748C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_400174A4;
    }
    // 0x4001748C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40017490: addiu       $a1, $zero, 0x579
    ctx->r5 = ADD32(0, 0X579);
    // 0x40017494: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40017498: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001749C: jal         0x40008D64
    // 0x400174A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x400174A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_400174A4:
    // 0x400174A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400174A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x400174AC: jr          $ra
    // 0x400174B0: nop

    return;
    // 0x400174B0: nop

;}
RECOMP_FUNC void ovl_actor_main_174B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400174B4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x400174B8: addiu       $t7, $a1, -0x1
    ctx->r15 = ADD32(ctx->r5, -0X1);
    // 0x400174BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x400174C0: sltiu       $at, $t7, 0x3C
    ctx->r1 = ctx->r15 < 0X3C ? 1 : 0;
    // 0x400174C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x400174C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x400174CC: beq         $at, $zero, L_4001756C
    if (ctx->r1 == 0) {
        // 0x400174D0: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_4001756C;
    }
    // 0x400174D0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x400174D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x400174D8: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400174DC: addu        $at, $at, $t7
    gpr jr_addend_400174E8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x400174E0: lw          $t7, -0xF88($at)
    ctx->r15 = ADD32(ctx->r1, -0XF88);
    // 0x400174E4: nop

    // 0x400174E8: jr          $t7
    // 0x400174EC: nop

    switch (jr_addend_400174E8 >> 2) {
        case 0: goto L_400174F0; break;
        case 1: goto L_4001756C; break;
        case 2: goto L_4001756C; break;
        case 3: goto L_4001756C; break;
        case 4: goto L_4001756C; break;
        case 5: goto L_4001756C; break;
        case 6: goto L_4001756C; break;
        case 7: goto L_4001756C; break;
        case 8: goto L_4001756C; break;
        case 9: goto L_4001756C; break;
        case 10: goto L_40017520; break;
        case 11: goto L_4001756C; break;
        case 12: goto L_4001756C; break;
        case 13: goto L_4001756C; break;
        case 14: goto L_4001756C; break;
        case 15: goto L_4001756C; break;
        case 16: goto L_4001756C; break;
        case 17: goto L_4001756C; break;
        case 18: goto L_4001756C; break;
        case 19: goto L_4001756C; break;
        case 20: goto L_4001756C; break;
        case 21: goto L_4001756C; break;
        case 22: goto L_4001756C; break;
        case 23: goto L_4001756C; break;
        case 24: goto L_4001756C; break;
        case 25: goto L_4001756C; break;
        case 26: goto L_4001756C; break;
        case 27: goto L_4001756C; break;
        case 28: goto L_4001756C; break;
        case 29: goto L_4001756C; break;
        case 30: goto L_40017520; break;
        case 31: goto L_4001756C; break;
        case 32: goto L_4001756C; break;
        case 33: goto L_4001756C; break;
        case 34: goto L_4001756C; break;
        case 35: goto L_4001756C; break;
        case 36: goto L_4001756C; break;
        case 37: goto L_4001756C; break;
        case 38: goto L_4001756C; break;
        case 39: goto L_4001756C; break;
        case 40: goto L_4001756C; break;
        case 41: goto L_4001756C; break;
        case 42: goto L_4001756C; break;
        case 43: goto L_4001756C; break;
        case 44: goto L_4001756C; break;
        case 45: goto L_40017520; break;
        case 46: goto L_4001756C; break;
        case 47: goto L_4001756C; break;
        case 48: goto L_4001756C; break;
        case 49: goto L_4001756C; break;
        case 50: goto L_4001756C; break;
        case 51: goto L_4001756C; break;
        case 52: goto L_4001756C; break;
        case 53: goto L_4001756C; break;
        case 54: goto L_4001756C; break;
        case 55: goto L_4001756C; break;
        case 56: goto L_4001756C; break;
        case 57: goto L_4001756C; break;
        case 58: goto L_4001756C; break;
        case 59: goto L_40017564; break;
        default: switch_error(__func__, 0x400174E8, 0x4001F078);
    }
    // 0x400174EC: nop

L_400174F0:
    // 0x400174F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400174F4: addiu       $a1, $zero, 0x575
    ctx->r5 = ADD32(0, 0X575);
    // 0x400174F8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400174FC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40017500: jal         0x40008D64
    // 0x40017504: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40017504: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40017508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001750C: addiu       $a1, $zero, 0x3AA
    ctx->r5 = ADD32(0, 0X3AA);
    // 0x40017510: jal         0x4000115C
    // 0x40017514: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_1;
    // 0x40017514: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x40017518: b           L_40017570
    // 0x4001751C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
        goto L_40017570;
    // 0x4001751C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
L_40017520:
    // 0x40017520: addiu       $a1, $s0, 0x324
    ctx->r5 = ADD32(ctx->r16, 0X324);
    // 0x40017524: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    // 0x40017528: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x4001752C: jal         0x40011D40
    // 0x40017530: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11D40(rdram, ctx);
        goto after_2;
    // 0x40017530: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x40017534: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x40017538: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001753C: lw          $a3, 0x0($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X0);
    // 0x40017540: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x40017544: jal         0x4001A598
    // 0x40017548: lui         $a2, 0x43C8
    ctx->r6 = S32(0X43C8 << 16);
    ovl_actor_main_1A598(rdram, ctx);
        goto after_3;
    // 0x40017548: lui         $a2, 0x43C8
    ctx->r6 = S32(0X43C8 << 16);
    after_3:
    // 0x4001754C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017550: addiu       $a1, $zero, 0x27D
    ctx->r5 = ADD32(0, 0X27D);
    // 0x40017554: jal         0x4000115C
    // 0x40017558: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_4;
    // 0x40017558: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x4001755C: b           L_40017570
    // 0x40017560: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
        goto L_40017570;
    // 0x40017560: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
L_40017564:
    // 0x40017564: jal         0x4000CB84
    // 0x40017568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_5;
    // 0x40017568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_4001756C:
    // 0x4001756C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
L_40017570:
    // 0x40017570: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x40017574: bne         $t9, $at, L_40017588
    if (ctx->r25 != ctx->r1) {
        // 0x40017578: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40017588;
    }
    // 0x40017578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001757C: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x40017580: jal         0x40009000
    // 0x40017584: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_6;
    // 0x40017584: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
L_40017588:
    // 0x40017588: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4001758C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x40017590: jr          $ra
    // 0x40017594: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x40017594: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_actor_main_17598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40017598: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x4001759C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x400175A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400175A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x400175A8: beq         $a1, $at, L_400175DC
    if (ctx->r5 == ctx->r1) {
        // 0x400175AC: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_400175DC;
    }
    // 0x400175AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x400175B0: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x400175B4: beq         $a1, $at, L_4001760C
    if (ctx->r5 == ctx->r1) {
        // 0x400175B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001760C;
    }
    // 0x400175B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400175BC: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x400175C0: beq         $a1, $at, L_4001764C
    if (ctx->r5 == ctx->r1) {
        // 0x400175C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001764C;
    }
    // 0x400175C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400175C8: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    // 0x400175CC: beq         $a1, $at, L_40017660
    if (ctx->r5 == ctx->r1) {
        // 0x400175D0: nop
    
            goto L_40017660;
    }
    // 0x400175D0: nop

    // 0x400175D4: b           L_4001766C
    // 0x400175D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001766C;
    // 0x400175D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_400175DC:
    // 0x400175DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400175E0: addiu       $a1, $zero, 0x573
    ctx->r5 = ADD32(0, 0X573);
    // 0x400175E4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400175E8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400175EC: jal         0x40008D64
    // 0x400175F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x400175F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x400175F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400175F8: addiu       $a1, $zero, 0x3AA
    ctx->r5 = ADD32(0, 0X3AA);
    // 0x400175FC: jal         0x4000115C
    // 0x40017600: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_1;
    // 0x40017600: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x40017604: b           L_4001766C
    // 0x40017608: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001766C;
    // 0x40017608: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001760C:
    // 0x4001760C: addiu       $a1, $s0, 0x324
    ctx->r5 = ADD32(ctx->r16, 0X324);
    // 0x40017610: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    // 0x40017614: jal         0x40011D40
    // 0x40017618: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    ovl_actor_main_11D40(rdram, ctx);
        goto after_2;
    // 0x40017618: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_2:
    // 0x4001761C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x40017620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017624: lw          $a3, 0x0($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X0);
    // 0x40017628: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x4001762C: jal         0x4001A598
    // 0x40017630: lui         $a2, 0x43C8
    ctx->r6 = S32(0X43C8 << 16);
    ovl_actor_main_1A598(rdram, ctx);
        goto after_3;
    // 0x40017630: lui         $a2, 0x43C8
    ctx->r6 = S32(0X43C8 << 16);
    after_3:
    // 0x40017634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017638: addiu       $a1, $zero, 0x27D
    ctx->r5 = ADD32(0, 0X27D);
    // 0x4001763C: jal         0x4000115C
    // 0x40017640: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_4;
    // 0x40017640: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x40017644: b           L_4001766C
    // 0x40017648: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001766C;
    // 0x40017648: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001764C:
    // 0x4001764C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x40017650: jal         0x40009000
    // 0x40017654: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_5;
    // 0x40017654: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x40017658: b           L_4001766C
    // 0x4001765C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001766C;
    // 0x4001765C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40017660:
    // 0x40017660: jal         0x4000CB84
    // 0x40017664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_6;
    // 0x40017664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x40017668: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001766C:
    // 0x4001766C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x40017670: jr          $ra
    // 0x40017674: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x40017674: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_actor_main_17678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40017678: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4001767C: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x40017680: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x40017684: sltiu       $at, $t6, 0x37
    ctx->r1 = ctx->r14 < 0X37 ? 1 : 0;
    // 0x40017688: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001768C: beq         $at, $zero, L_40017784
    if (ctx->r1 == 0) {
        // 0x40017690: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_40017784;
    }
    // 0x40017690: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40017694: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x40017698: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001769C: addu        $at, $at, $t6
    gpr jr_addend_400176A8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x400176A0: lw          $t6, -0xE98($at)
    ctx->r14 = ADD32(ctx->r1, -0XE98);
    // 0x400176A4: nop

    // 0x400176A8: jr          $t6
    // 0x400176AC: nop

    switch (jr_addend_400176A8 >> 2) {
        case 0: goto L_400176B0; break;
        case 1: goto L_40017784; break;
        case 2: goto L_40017784; break;
        case 3: goto L_40017784; break;
        case 4: goto L_40017784; break;
        case 5: goto L_40017784; break;
        case 6: goto L_40017784; break;
        case 7: goto L_40017784; break;
        case 8: goto L_40017784; break;
        case 9: goto L_40017784; break;
        case 10: goto L_40017784; break;
        case 11: goto L_40017784; break;
        case 12: goto L_40017784; break;
        case 13: goto L_40017784; break;
        case 14: goto L_40017784; break;
        case 15: goto L_400176E4; break;
        case 16: goto L_40017784; break;
        case 17: goto L_40017784; break;
        case 18: goto L_40017784; break;
        case 19: goto L_40017784; break;
        case 20: goto L_40017784; break;
        case 21: goto L_40017784; break;
        case 22: goto L_40017784; break;
        case 23: goto L_40017784; break;
        case 24: goto L_40017784; break;
        case 25: goto L_40017784; break;
        case 26: goto L_40017784; break;
        case 27: goto L_40017784; break;
        case 28: goto L_40017784; break;
        case 29: goto L_40017708; break;
        case 30: goto L_40017764; break;
        case 31: goto L_40017784; break;
        case 32: goto L_40017784; break;
        case 33: goto L_40017784; break;
        case 34: goto L_40017784; break;
        case 35: goto L_40017784; break;
        case 36: goto L_40017784; break;
        case 37: goto L_40017784; break;
        case 38: goto L_40017784; break;
        case 39: goto L_40017784; break;
        case 40: goto L_40017784; break;
        case 41: goto L_40017784; break;
        case 42: goto L_40017784; break;
        case 43: goto L_40017784; break;
        case 44: goto L_40017784; break;
        case 45: goto L_40017784; break;
        case 46: goto L_40017784; break;
        case 47: goto L_40017784; break;
        case 48: goto L_40017784; break;
        case 49: goto L_40017784; break;
        case 50: goto L_40017784; break;
        case 51: goto L_40017784; break;
        case 52: goto L_40017784; break;
        case 53: goto L_40017784; break;
        case 54: goto L_4001777C; break;
        default: switch_error(__func__, 0x400176A8, 0x4001F168);
    }
    // 0x400176AC: nop

L_400176B0:
    // 0x400176B0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x400176B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400176B8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x400176BC: addiu       $a1, $zero, 0x574
    ctx->r5 = ADD32(0, 0X574);
    // 0x400176C0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400176C4: jal         0x40008D64
    // 0x400176C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x400176C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x400176CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400176D0: addiu       $a1, $zero, 0x3AB
    ctx->r5 = ADD32(0, 0X3AB);
    // 0x400176D4: jal         0x4000115C
    // 0x400176D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_1;
    // 0x400176D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x400176DC: b           L_40017788
    // 0x400176E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40017788;
    // 0x400176E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_400176E4:
    // 0x400176E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x400176E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400176EC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x400176F0: addiu       $a1, $zero, 0x7C
    ctx->r5 = ADD32(0, 0X7C);
    // 0x400176F4: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    // 0x400176F8: jal         0x4000118C
    // 0x400176FC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_2;
    // 0x400176FC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x40017700: b           L_40017784
    // 0x40017704: sw          $v0, 0x330($s0)
    MEM_W(0X330, ctx->r16) = ctx->r2;
        goto L_40017784;
    // 0x40017704: sw          $v0, 0x330($s0)
    MEM_W(0X330, ctx->r16) = ctx->r2;
L_40017708:
    // 0x40017708: addiu       $a3, $s0, 0x324
    ctx->r7 = ADD32(ctx->r16, 0X324);
    // 0x4001770C: addiu       $a2, $a3, 0xC
    ctx->r6 = ADD32(ctx->r7, 0XC);
    // 0x40017710: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x40017714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017718: jal         0x40001258
    // 0x4001771C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_actor_main_1258(rdram, ctx);
        goto after_3;
    // 0x4001771C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_3:
    // 0x40017720: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x40017724: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x40017728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001772C: sw          $t7, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r15;
    // 0x40017730: jal         0x40011D40
    // 0x40017734: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    ovl_actor_main_11D40(rdram, ctx);
        goto after_4;
    // 0x40017734: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    after_4:
    // 0x40017738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001773C: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x40017740: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x40017744: jal         0x4001A598
    // 0x40017748: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_actor_main_1A598(rdram, ctx);
        goto after_5;
    // 0x40017748: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_5:
    // 0x4001774C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017750: addiu       $a1, $zero, 0x27C
    ctx->r5 = ADD32(0, 0X27C);
    // 0x40017754: jal         0x4000115C
    // 0x40017758: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_6;
    // 0x40017758: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x4001775C: b           L_40017788
    // 0x40017760: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40017788;
    // 0x40017760: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40017764:
    // 0x40017764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017768: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x4001776C: jal         0x40009000
    // 0x40017770: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_7;
    // 0x40017770: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x40017774: b           L_40017788
    // 0x40017778: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40017788;
    // 0x40017778: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001777C:
    // 0x4001777C: jal         0x4000CB84
    // 0x40017780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_8;
    // 0x40017780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_40017784:
    // 0x40017784: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40017788:
    // 0x40017788: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4001778C: jr          $ra
    // 0x40017790: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x40017790: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_actor_main_17794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40017794: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x40017798: jr          $ra
    // 0x4001779C: sw          $t6, 0x330($a0)
    MEM_W(0X330, ctx->r4) = ctx->r14;
    return;
    // 0x4001779C: sw          $t6, 0x330($a0)
    MEM_W(0X330, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void ovl_actor_main_177A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400177A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x400177A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400177A8: lw          $t6, 0x330($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X330);
    // 0x400177AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x400177B0: beq         $t6, $at, L_400177D4
    if (ctx->r14 == ctx->r1) {
        // 0x400177B4: addiu       $a1, $zero, 0x17
        ctx->r5 = ADD32(0, 0X17);
            goto L_400177D4;
    }
    // 0x400177B4: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x400177B8: addiu       $v0, $a0, 0x324
    ctx->r2 = ADD32(ctx->r4, 0X324);
    // 0x400177BC: addiu       $a2, $v0, 0xC
    ctx->r6 = ADD32(ctx->r2, 0XC);
    // 0x400177C0: jal         0x40001258
    // 0x400177C4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    ovl_actor_main_1258(rdram, ctx);
        goto after_0;
    // 0x400177C4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x400177C8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x400177CC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x400177D0: sw          $t7, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r15;
L_400177D4:
    // 0x400177D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400177D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x400177DC: jr          $ra
    // 0x400177E0: nop

    return;
    // 0x400177E0: nop

;}
RECOMP_FUNC void ovl_actor_main_177E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400177E4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x400177E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x400177EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400177F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x400177F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x400177F8: beq         $a1, $at, L_40017814
    if (ctx->r5 == ctx->r1) {
        // 0x400177FC: sw          $a1, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r5;
            goto L_40017814;
    }
    // 0x400177FC: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x40017800: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x40017804: beq         $a1, $at, L_40017848
    if (ctx->r5 == ctx->r1) {
        // 0x40017808: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40017848;
    }
    // 0x40017808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001780C: b           L_4001785C
    // 0x40017810: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
        goto L_4001785C;
    // 0x40017810: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
L_40017814:
    // 0x40017814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017818: addiu       $a1, $zero, 0x58A
    ctx->r5 = ADD32(0, 0X58A);
    // 0x4001781C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40017820: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40017824: jal         0x40008D64
    // 0x40017828: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40017828: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4001782C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x40017830: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x40017834: jal         0x400006C4
    // 0x40017838: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40017838: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_1:
    // 0x4001783C: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x40017840: b           L_40017858
    // 0x40017844: swc1        $f4, 0x324($s0)
    MEM_W(0X324, ctx->r16) = ctx->f4.u32l;
        goto L_40017858;
    // 0x40017844: swc1        $f4, 0x324($s0)
    MEM_W(0X324, ctx->r16) = ctx->f4.u32l;
L_40017848:
    // 0x40017848: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x4001784C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40017850: jal         0x400018BC
    // 0x40017854: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_2;
    // 0x40017854: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
L_40017858:
    // 0x40017858: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
L_4001785C:
    // 0x4001785C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x40017860: slti        $at, $t7, 0x12
    ctx->r1 = SIGNED(ctx->r15) < 0X12 ? 1 : 0;
    // 0x40017864: bne         $at, $zero, L_40017924
    if (ctx->r1 != 0) {
        // 0x40017868: addiu       $a2, $sp, 0x3C
        ctx->r6 = ADD32(ctx->r29, 0X3C);
            goto L_40017924;
    }
    // 0x40017868: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x4001786C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x40017870: addiu       $t8, $s0, 0x324
    ctx->r24 = ADD32(ctx->r16, 0X324);
    // 0x40017874: jal         0x400006C4
    // 0x40017878: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_3;
    // 0x40017878: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    after_3:
    // 0x4001787C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x40017880: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x40017884: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x40017888: lwc1        $f0, 0x0($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0X0);
    // 0x4001788C: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x40017890: add.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x40017894: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x40017898: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x4001789C: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x400178A0: bc1f        L_400178C0
    if (!c1cs) {
        // 0x400178A4: nop
    
            goto L_400178C0;
    }
    // 0x400178A4: nop

    // 0x400178A8: lwc1        $f10, 0x64($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X64);
    // 0x400178AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x400178B0: nop

    // 0x400178B4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x400178B8: b           L_400178EC
    // 0x400178BC: swc1        $f18, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f18.u32l;
        goto L_400178EC;
    // 0x400178BC: swc1        $f18, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f18.u32l;
L_400178C0:
    // 0x400178C0: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x400178C4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x400178C8: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x400178CC: nop

    // 0x400178D0: bc1f        L_400178EC
    if (!c1cs) {
        // 0x400178D4: nop
    
            goto L_400178EC;
    }
    // 0x400178D4: nop

    // 0x400178D8: lwc1        $f8, 0x64($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X64);
    // 0x400178DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x400178E0: nop

    // 0x400178E4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x400178E8: swc1        $f16, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f16.u32l;
L_400178EC:
    // 0x400178EC: jal         0x40000340
    // 0x400178F0: nop

    ovl_actor_main_340(rdram, ctx);
        goto after_4;
    // 0x400178F0: nop

    after_4:
    // 0x400178F4: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x400178F8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x400178FC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x40017900: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x40017904: mul.d       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f18.d);
    // 0x40017908: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x4001790C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x40017910: lwc1        $f16, 0x64($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X64);
    // 0x40017914: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x40017918: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x4001791C: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x40017920: swc1        $f18, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f18.u32l;
L_40017924:
    // 0x40017924: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40017928: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4001792C: jr          $ra
    // 0x40017930: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x40017930: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_actor_main_17934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40017934: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x40017938: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x4001793C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x40017940: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40017944: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40017948: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x4001794C: beq         $a1, $at, L_40017988
    if (ctx->r5 == ctx->r1) {
        // 0x40017950: sw          $ra, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r31;
            goto L_40017988;
    }
    // 0x40017950: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x40017954: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x40017958: beq         $a1, $at, L_40017A3C
    if (ctx->r5 == ctx->r1) {
        // 0x4001795C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40017A3C;
    }
    // 0x4001795C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017960: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40017964: beq         $a1, $at, L_40017A54
    if (ctx->r5 == ctx->r1) {
        // 0x40017968: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40017A54;
    }
    // 0x40017968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001796C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x40017970: beq         $a1, $at, L_40017A94
    if (ctx->r5 == ctx->r1) {
        // 0x40017974: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_40017A94;
    }
    // 0x40017974: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x40017978: beq         $a1, $at, L_40017AEC
    if (ctx->r5 == ctx->r1) {
        // 0x4001797C: nop
    
            goto L_40017AEC;
    }
    // 0x4001797C: nop

    // 0x40017980: b           L_40017AF8
    // 0x40017984: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
        goto L_40017AF8;
    // 0x40017984: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
L_40017988:
    // 0x40017988: addiu       $v0, $s0, 0x324
    ctx->r2 = ADD32(ctx->r16, 0X324);
    // 0x4001798C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x40017990: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x40017994: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x40017998: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4001799C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400179A0: addiu       $a1, $zero, 0x58B
    ctx->r5 = ADD32(0, 0X58B);
    // 0x400179A4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400179A8: jal         0x40008D64
    // 0x400179AC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x400179AC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_0:
    // 0x400179B0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x400179B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400179B8: jal         0x40011D40
    // 0x400179BC: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    ovl_actor_main_11D40(rdram, ctx);
        goto after_1;
    // 0x400179BC: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    after_1:
    // 0x400179C0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x400179C4: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x400179C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x400179CC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x400179D0: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    // 0x400179D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x400179D8: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x400179DC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x400179E0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x400179E4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x400179E8: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x400179EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400179F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x400179F4: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x400179F8: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    // 0x400179FC: jal         0x40006EEC
    // 0x40017A00: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    ovl_actor_main_6EEC(rdram, ctx);
        goto after_2;
    // 0x40017A00: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x40017A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017A08: addiu       $a1, $zero, 0x233
    ctx->r5 = ADD32(0, 0X233);
    // 0x40017A0C: jal         0x4000115C
    // 0x40017A10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_3;
    // 0x40017A10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x40017A14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017A18: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x40017A1C: jal         0x40009000
    // 0x40017A20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_4;
    // 0x40017A20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x40017A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017A28: addiu       $a1, $zero, 0x3B2
    ctx->r5 = ADD32(0, 0X3B2);
    // 0x40017A2C: jal         0x4000115C
    // 0x40017A30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_5;
    // 0x40017A30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x40017A34: b           L_40017AF8
    // 0x40017A38: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
        goto L_40017AF8;
    // 0x40017A38: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
L_40017A3C:
    // 0x40017A3C: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x40017A40: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40017A44: jal         0x400018BC
    // 0x40017A48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_6;
    // 0x40017A48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x40017A4C: b           L_40017AF8
    // 0x40017A50: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
        goto L_40017AF8;
    // 0x40017A50: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
L_40017A54:
    // 0x40017A54: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x40017A58: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    // 0x40017A5C: jal         0x40011F94
    // 0x40017A60: swc1        $f18, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f18.u32l;
    ovl_actor_main_11F94(rdram, ctx);
        goto after_7;
    // 0x40017A60: swc1        $f18, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f18.u32l;
    after_7:
    // 0x40017A64: beq         $v0, $zero, L_40017A84
    if (ctx->r2 == 0) {
        // 0x40017A68: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40017A84;
    }
    // 0x40017A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017A6C: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x40017A70: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x40017A74: jal         0x400018BC
    // 0x40017A78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_8;
    // 0x40017A78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x40017A7C: b           L_40017AF8
    // 0x40017A80: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
        goto L_40017AF8;
    // 0x40017A80: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
L_40017A84:
    // 0x40017A84: jal         0x4000CB84
    // 0x40017A88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_9;
    // 0x40017A88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x40017A8C: b           L_40017AF8
    // 0x40017A90: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
        goto L_40017AF8;
    // 0x40017A90: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
L_40017A94:
    // 0x40017A94: jal         0x40000DE4
    // 0x40017A98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_actor_main_DE4(rdram, ctx);
        goto after_10;
    // 0x40017A98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x40017A9C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x40017AA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x40017AA4: addiu       $v1, $s0, 0x324
    ctx->r3 = ADD32(ctx->r16, 0X324);
    // 0x40017AA8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x40017AAC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x40017AB0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x40017AB4: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x40017AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017ABC: addiu       $a1, $zero, 0x3B1
    ctx->r5 = ADD32(0, 0X3B1);
    // 0x40017AC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x40017AC4: swc1        $f4, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f4.u32l;
    // 0x40017AC8: swc1        $f6, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f6.u32l;
    // 0x40017ACC: jal         0x4000115C
    // 0x40017AD0: swc1        $f8, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f8.u32l;
    ovl_actor_main_115C(rdram, ctx);
        goto after_11;
    // 0x40017AD0: swc1        $f8, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f8.u32l;
    after_11:
    // 0x40017AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017AD8: lui         $a1, 0x4448
    ctx->r5 = S32(0X4448 << 16);
    // 0x40017ADC: jal         0x40012990
    // 0x40017AE0: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    ovl_actor_main_12990(rdram, ctx);
        goto after_12;
    // 0x40017AE0: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    after_12:
    // 0x40017AE4: b           L_40017AF8
    // 0x40017AE8: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
        goto L_40017AF8;
    // 0x40017AE8: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
L_40017AEC:
    // 0x40017AEC: jal         0x4000CB84
    // 0x40017AF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_13;
    // 0x40017AF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x40017AF4: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
L_40017AF8:
    // 0x40017AF8: beq         $at, $zero, L_40017B0C
    if (ctx->r1 == 0) {
        // 0x40017AFC: slti        $at, $s1, 0x5
        ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
            goto L_40017B0C;
    }
    // 0x40017AFC: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
    // 0x40017B00: jal         0x40011E8C
    // 0x40017B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11E8C(rdram, ctx);
        goto after_14;
    // 0x40017B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x40017B08: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
L_40017B0C:
    // 0x40017B0C: beq         $at, $zero, L_40017B2C
    if (ctx->r1 == 0) {
        // 0x40017B10: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40017B2C;
    }
    // 0x40017B10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017B14: addiu       $t7, $s0, 0x324
    ctx->r15 = ADD32(ctx->r16, 0X324);
    // 0x40017B18: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x40017B1C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x40017B20: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x40017B24: jal         0x40011BE4
    // 0x40017B28: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    ovl_actor_main_11BE4(rdram, ctx);
        goto after_15;
    // 0x40017B28: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    after_15:
L_40017B2C:
    // 0x40017B2C: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
    // 0x40017B30: bne         $at, $zero, L_40017B84
    if (ctx->r1 != 0) {
        // 0x40017B34: slti        $at, $s1, 0x10
        ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
            goto L_40017B84;
    }
    // 0x40017B34: slti        $at, $s1, 0x10
    ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
    // 0x40017B38: beq         $at, $zero, L_40017B84
    if (ctx->r1 == 0) {
        // 0x40017B3C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40017B84;
    }
    // 0x40017B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017B40: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x40017B44: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x40017B48: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x40017B4C: addiu       $a2, $s0, 0x330
    ctx->r6 = ADD32(ctx->r16, 0X330);
    // 0x40017B50: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x40017B54: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x40017B58: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    // 0x40017B5C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x40017B60: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    // 0x40017B64: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x40017B68: jal         0x40012F08
    // 0x40017B6C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    ovl_actor_main_12F08(rdram, ctx);
        goto after_16;
    // 0x40017B6C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_16:
    // 0x40017B70: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x40017B74: jal         0x400128E4
    // 0x40017B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_128E4(rdram, ctx);
        goto after_17;
    // 0x40017B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x40017B7C: b           L_40017BD0
    // 0x40017B80: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_40017BD0;
    // 0x40017B80: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_40017B84:
    // 0x40017B84: slti        $at, $s1, 0x10
    ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
    // 0x40017B88: bne         $at, $zero, L_40017BCC
    if (ctx->r1 != 0) {
        // 0x40017B8C: slti        $at, $s1, 0x15
        ctx->r1 = SIGNED(ctx->r17) < 0X15 ? 1 : 0;
            goto L_40017BCC;
    }
    // 0x40017B8C: slti        $at, $s1, 0x15
    ctx->r1 = SIGNED(ctx->r17) < 0X15 ? 1 : 0;
    // 0x40017B90: beq         $at, $zero, L_40017BCC
    if (ctx->r1 == 0) {
        // 0x40017B94: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40017BCC;
    }
    // 0x40017B94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017B98: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40017B9C: addiu       $a2, $s0, 0x330
    ctx->r6 = ADD32(ctx->r16, 0X330);
    // 0x40017BA0: addiu       $t9, $zero, 0x15
    ctx->r25 = ADD32(0, 0X15);
    // 0x40017BA4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x40017BA8: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    // 0x40017BAC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x40017BB0: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    // 0x40017BB4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x40017BB8: jal         0x40012F08
    // 0x40017BBC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_12F08(rdram, ctx);
        goto after_18;
    // 0x40017BBC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_18:
    // 0x40017BC0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x40017BC4: jal         0x400128E4
    // 0x40017BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_128E4(rdram, ctx);
        goto after_19;
    // 0x40017BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
L_40017BCC:
    // 0x40017BCC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_40017BD0:
    // 0x40017BD0: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x40017BD4: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x40017BD8: jr          $ra
    // 0x40017BDC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x40017BDC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_actor_main_17BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40017BE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40017BE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40017BE8: jal         0x40012DCC
    // 0x40017BEC: addiu       $a1, $a0, 0x330
    ctx->r5 = ADD32(ctx->r4, 0X330);
    ovl_actor_main_12DCC(rdram, ctx);
        goto after_0;
    // 0x40017BEC: addiu       $a1, $a0, 0x330
    ctx->r5 = ADD32(ctx->r4, 0X330);
    after_0:
    // 0x40017BF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40017BF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40017BF8: jr          $ra
    // 0x40017BFC: nop

    return;
    // 0x40017BFC: nop

;}
RECOMP_FUNC void ovl_actor_main_17C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40017C00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40017C04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40017C08: bne         $a1, $at, L_40017C2C
    if (ctx->r5 != ctx->r1) {
        // 0x40017C0C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40017C2C;
    }
    // 0x40017C0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40017C10: addiu       $a1, $zero, 0x58C
    ctx->r5 = ADD32(0, 0X58C);
    // 0x40017C14: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40017C18: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40017C1C: jal         0x40008D64
    // 0x40017C20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40017C20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40017C24: b           L_40017C44
    // 0x40017C28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40017C44;
    // 0x40017C28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40017C2C:
    // 0x40017C2C: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x40017C30: bne         $a1, $at, L_40017C44
    if (ctx->r5 != ctx->r1) {
        // 0x40017C34: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40017C44;
    }
    // 0x40017C34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40017C38: jal         0x4000CB84
    // 0x40017C3C: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_1;
    // 0x40017C3C: nop

    after_1:
    // 0x40017C40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40017C44:
    // 0x40017C44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40017C48: jr          $ra
    // 0x40017C4C: nop

    return;
    // 0x40017C4C: nop

;}
RECOMP_FUNC void ovl_actor_main_17C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40017C50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40017C54: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40017C58: bne         $a1, $at, L_40017C74
    if (ctx->r5 != ctx->r1) {
        // 0x40017C5C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40017C74;
    }
    // 0x40017C5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40017C60: addiu       $a1, $zero, 0x58D
    ctx->r5 = ADD32(0, 0X58D);
    // 0x40017C64: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40017C68: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40017C6C: jal         0x40008D64
    // 0x40017C70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40017C70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_40017C74:
    // 0x40017C74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40017C78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40017C7C: jr          $ra
    // 0x40017C80: nop

    return;
    // 0x40017C80: nop

;}
RECOMP_FUNC void ovl_actor_main_17C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40017C84: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40017C88: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x40017C8C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x40017C90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40017C94: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40017C98: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x40017C9C: beq         $a1, $at, L_40017D00
    if (ctx->r5 == ctx->r1) {
        // 0x40017CA0: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_40017D00;
    }
    // 0x40017CA0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40017CA4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x40017CA8: beq         $a1, $at, L_40017D38
    if (ctx->r5 == ctx->r1) {
        // 0x40017CAC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40017D38;
    }
    // 0x40017CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017CB0: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x40017CB4: beq         $a1, $at, L_40017D7C
    if (ctx->r5 == ctx->r1) {
        // 0x40017CB8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40017D7C;
    }
    // 0x40017CB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017CBC: addiu       $at, $zero, 0x44
    ctx->r1 = ADD32(0, 0X44);
    // 0x40017CC0: beq         $a1, $at, L_40017DE8
    if (ctx->r5 == ctx->r1) {
        // 0x40017CC4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40017DE8;
    }
    // 0x40017CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017CC8: addiu       $at, $zero, 0x98
    ctx->r1 = ADD32(0, 0X98);
    // 0x40017CCC: beq         $a1, $at, L_40017E38
    if (ctx->r5 == ctx->r1) {
        // 0x40017CD0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40017E38;
    }
    // 0x40017CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017CD4: addiu       $at, $zero, 0xAC
    ctx->r1 = ADD32(0, 0XAC);
    // 0x40017CD8: beq         $a1, $at, L_40017E60
    if (ctx->r5 == ctx->r1) {
        // 0x40017CDC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40017E60;
    }
    // 0x40017CDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017CE0: addiu       $at, $zero, 0xDA
    ctx->r1 = ADD32(0, 0XDA);
    // 0x40017CE4: beq         $a1, $at, L_40017E78
    if (ctx->r5 == ctx->r1) {
        // 0x40017CE8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40017E78;
    }
    // 0x40017CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017CEC: addiu       $at, $zero, 0x102
    ctx->r1 = ADD32(0, 0X102);
    // 0x40017CF0: beq         $a1, $at, L_40017EAC
    if (ctx->r5 == ctx->r1) {
        // 0x40017CF4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40017EAC;
    }
    // 0x40017CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017CF8: b           L_40017EC4
    // 0x40017CFC: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
        goto L_40017EC4;
    // 0x40017CFC: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
L_40017D00:
    // 0x40017D00: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40017D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017D08: swc1        $f0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f0.u32l;
    // 0x40017D0C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40017D10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x40017D14: addiu       $a1, $zero, 0x58D
    ctx->r5 = ADD32(0, 0X58D);
    // 0x40017D18: jal         0x40008D64
    // 0x40017D1C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40017D1C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_0:
    // 0x40017D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017D24: addiu       $a1, $zero, 0x29C
    ctx->r5 = ADD32(0, 0X29C);
    // 0x40017D28: jal         0x4000115C
    // 0x40017D2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_1;
    // 0x40017D2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x40017D30: b           L_40017EC4
    // 0x40017D34: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
        goto L_40017EC4;
    // 0x40017D34: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
L_40017D38:
    // 0x40017D38: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x40017D3C: jal         0x40009000
    // 0x40017D40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_2;
    // 0x40017D40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x40017D44: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x40017D48: jal         0x40000E20
    // 0x40017D4C: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    ovl_actor_main_E20(rdram, ctx);
        goto after_3;
    // 0x40017D4C: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_3:
    // 0x40017D50: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40017D54: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40017D58: lwc1        $f4, -0xDBC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0XDBC);
    // 0x40017D5C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40017D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017D64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x40017D68: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    // 0x40017D6C: jal         0x4000120C
    // 0x40017D70: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_4;
    // 0x40017D70: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x40017D74: b           L_40017EC4
    // 0x40017D78: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
        goto L_40017EC4;
    // 0x40017D78: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
L_40017D7C:
    // 0x40017D7C: addiu       $a1, $s0, 0x324
    ctx->r5 = ADD32(ctx->r16, 0X324);
    // 0x40017D80: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    // 0x40017D84: jal         0x40011D40
    // 0x40017D88: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    ovl_actor_main_11D40(rdram, ctx);
        goto after_5;
    // 0x40017D88: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_5:
    // 0x40017D8C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x40017D90: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x40017D94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x40017D98: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x40017D9C: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    // 0x40017DA0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x40017DA4: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x40017DA8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x40017DAC: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x40017DB0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x40017DB4: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x40017DB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017DBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x40017DC0: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x40017DC4: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    // 0x40017DC8: jal         0x40006EEC
    // 0x40017DCC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    ovl_actor_main_6EEC(rdram, ctx);
        goto after_6;
    // 0x40017DCC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x40017DD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017DD4: addiu       $a1, $zero, 0x233
    ctx->r5 = ADD32(0, 0X233);
    // 0x40017DD8: jal         0x4000115C
    // 0x40017DDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_7;
    // 0x40017DDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x40017DE0: b           L_40017EC4
    // 0x40017DE4: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
        goto L_40017EC4;
    // 0x40017DE4: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
L_40017DE8:
    // 0x40017DE8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x40017DEC: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    // 0x40017DF0: jal         0x40011F94
    // 0x40017DF4: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    ovl_actor_main_11F94(rdram, ctx);
        goto after_8;
    // 0x40017DF4: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    after_8:
    // 0x40017DF8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40017DFC: beq         $v0, $zero, L_40017E28
    if (ctx->r2 == 0) {
        // 0x40017E00: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40017E28;
    }
    // 0x40017E00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017E04: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40017E08: addiu       $a1, $zero, 0x58E
    ctx->r5 = ADD32(0, 0X58E);
    // 0x40017E0C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40017E10: jal         0x40008D64
    // 0x40017E14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_9;
    // 0x40017E14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x40017E18: jal         0x40011B50
    // 0x40017E1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11B50(rdram, ctx);
        goto after_10;
    // 0x40017E1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x40017E20: b           L_40017EC4
    // 0x40017E24: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
        goto L_40017EC4;
    // 0x40017E24: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
L_40017E28:
    // 0x40017E28: jal         0x4000CB84
    // 0x40017E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_11;
    // 0x40017E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x40017E30: b           L_40017EC4
    // 0x40017E34: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
        goto L_40017EC4;
    // 0x40017E34: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
L_40017E38:
    // 0x40017E38: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x40017E3C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40017E40: jal         0x400018BC
    // 0x40017E44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_12;
    // 0x40017E44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x40017E48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017E4C: addiu       $a1, $zero, 0x3B3
    ctx->r5 = ADD32(0, 0X3B3);
    // 0x40017E50: jal         0x4000115C
    // 0x40017E54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_13;
    // 0x40017E54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x40017E58: b           L_40017EC4
    // 0x40017E5C: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
        goto L_40017EC4;
    // 0x40017E5C: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
L_40017E60:
    // 0x40017E60: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x40017E64: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x40017E68: jal         0x400018BC
    // 0x40017E6C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_14;
    // 0x40017E6C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x40017E70: b           L_40017EC4
    // 0x40017E74: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
        goto L_40017EC4;
    // 0x40017E74: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
L_40017E78:
    // 0x40017E78: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40017E7C: lwc1        $f6, -0xDB8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0XDB8);
    // 0x40017E80: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    // 0x40017E84: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x40017E88: lui         $a3, 0x432A
    ctx->r7 = S32(0X432A << 16);
    // 0x40017E8C: jal         0x4000120C
    // 0x40017E90: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_15;
    // 0x40017E90: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_15:
    // 0x40017E94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017E98: addiu       $a1, $zero, 0x293
    ctx->r5 = ADD32(0, 0X293);
    // 0x40017E9C: jal         0x4000115C
    // 0x40017EA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_16;
    // 0x40017EA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_16:
    // 0x40017EA4: b           L_40017EC4
    // 0x40017EA8: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
        goto L_40017EC4;
    // 0x40017EA8: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
L_40017EAC:
    // 0x40017EAC: addiu       $a1, $zero, 0x579
    ctx->r5 = ADD32(0, 0X579);
    // 0x40017EB0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40017EB4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40017EB8: jal         0x40008D64
    // 0x40017EBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_17;
    // 0x40017EBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_17:
    // 0x40017EC0: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
L_40017EC4:
    // 0x40017EC4: beq         $at, $zero, L_40017ED8
    if (ctx->r1 == 0) {
        // 0x40017EC8: slti        $at, $s1, 0x42
        ctx->r1 = SIGNED(ctx->r17) < 0X42 ? 1 : 0;
            goto L_40017ED8;
    }
    // 0x40017EC8: slti        $at, $s1, 0x42
    ctx->r1 = SIGNED(ctx->r17) < 0X42 ? 1 : 0;
    // 0x40017ECC: jal         0x40011E8C
    // 0x40017ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11E8C(rdram, ctx);
        goto after_18;
    // 0x40017ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x40017ED4: slti        $at, $s1, 0x42
    ctx->r1 = SIGNED(ctx->r17) < 0X42 ? 1 : 0;
L_40017ED8:
    // 0x40017ED8: bne         $at, $zero, L_40017F00
    if (ctx->r1 != 0) {
        // 0x40017EDC: slti        $at, $s1, 0x44
        ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
            goto L_40017F00;
    }
    // 0x40017EDC: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
    // 0x40017EE0: beq         $at, $zero, L_40017F00
    if (ctx->r1 == 0) {
        // 0x40017EE4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40017F00;
    }
    // 0x40017EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40017EE8: addiu       $t6, $s0, 0x324
    ctx->r14 = ADD32(ctx->r16, 0X324);
    // 0x40017EEC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x40017EF0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x40017EF4: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    // 0x40017EF8: jal         0x40011BE4
    // 0x40017EFC: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    ovl_actor_main_11BE4(rdram, ctx);
        goto after_19;
    // 0x40017EFC: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    after_19:
L_40017F00:
    // 0x40017F00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40017F04: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x40017F08: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x40017F0C: jr          $ra
    // 0x40017F10: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x40017F10: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_actor_main_17F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40017F14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40017F18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40017F1C: beq         $a1, $at, L_40017F38
    if (ctx->r5 == ctx->r1) {
        // 0x40017F20: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40017F38;
    }
    // 0x40017F20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40017F24: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x40017F28: beq         $a1, $at, L_40017F54
    if (ctx->r5 == ctx->r1) {
        // 0x40017F2C: nop
    
            goto L_40017F54;
    }
    // 0x40017F2C: nop

    // 0x40017F30: b           L_40017FA0
    // 0x40017F34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40017FA0;
    // 0x40017F34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40017F38:
    // 0x40017F38: addiu       $a1, $zero, 0x58F
    ctx->r5 = ADD32(0, 0X58F);
    // 0x40017F3C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40017F40: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40017F44: jal         0x40008D64
    // 0x40017F48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40017F48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40017F4C: b           L_40017FA0
    // 0x40017F50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40017FA0;
    // 0x40017F50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40017F54:
    // 0x40017F54: lhu         $t6, 0x20($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X20);
    // 0x40017F58: addiu       $a1, $zero, 0x58F
    ctx->r5 = ADD32(0, 0X58F);
    // 0x40017F5C: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x40017F60: bne         $t7, $zero, L_40017F90
    if (ctx->r15 != 0) {
        // 0x40017F64: lui         $a2, 0xBF80
        ctx->r6 = S32(0XBF80 << 16);
            goto L_40017F90;
    }
    // 0x40017F64: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    // 0x40017F68: lw          $t8, 0xCC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XCC);
    // 0x40017F6C: addiu       $a1, $zero, 0x58F
    ctx->r5 = ADD32(0, 0X58F);
    // 0x40017F70: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x40017F74: sw          $t9, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r25;
    // 0x40017F78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x40017F7C: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    // 0x40017F80: jal         0x40008D64
    // 0x40017F84: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_1;
    // 0x40017F84: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_1:
    // 0x40017F88: b           L_40017FA0
    // 0x40017F8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40017FA0;
    // 0x40017F8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40017F90:
    // 0x40017F90: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40017F94: jal         0x40008D64
    // 0x40017F98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_2;
    // 0x40017F98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x40017F9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40017FA0:
    // 0x40017FA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40017FA4: jr          $ra
    // 0x40017FA8: nop

    return;
    // 0x40017FA8: nop

;}
RECOMP_FUNC void ovl_actor_main_17FAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40017FAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40017FB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40017FB4: bne         $a1, $at, L_40017FD0
    if (ctx->r5 != ctx->r1) {
        // 0x40017FB8: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40017FD0;
    }
    // 0x40017FB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40017FBC: addiu       $a1, $zero, 0x590
    ctx->r5 = ADD32(0, 0X590);
    // 0x40017FC0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40017FC4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40017FC8: jal         0x40008D64
    // 0x40017FCC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40017FCC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_40017FD0:
    // 0x40017FD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40017FD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40017FD8: jr          $ra
    // 0x40017FDC: nop

    return;
    // 0x40017FDC: nop

;}
RECOMP_FUNC void ovl_actor_main_17FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40017FE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40017FE4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x40017FE8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40017FEC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40017FF0: beq         $a1, $at, L_40018024
    if (ctx->r5 == ctx->r1) {
        // 0x40017FF4: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_40018024;
    }
    // 0x40017FF4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40017FF8: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x40017FFC: beq         $a1, $at, L_4001805C
    if (ctx->r5 == ctx->r1) {
        // 0x40018000: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001805C;
    }
    // 0x40018000: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018004: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x40018008: beq         $a1, $at, L_40018070
    if (ctx->r5 == ctx->r1) {
        // 0x4001800C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40018070;
    }
    // 0x4001800C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018010: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x40018014: beq         $a1, $at, L_400180A8
    if (ctx->r5 == ctx->r1) {
        // 0x40018018: nop
    
            goto L_400180A8;
    }
    // 0x40018018: nop

    // 0x4001801C: b           L_400180B4
    // 0x40018020: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_400180B4;
    // 0x40018020: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40018024:
    // 0x40018024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018028: addiu       $a1, $zero, 0x58A
    ctx->r5 = ADD32(0, 0X58A);
    // 0x4001802C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40018030: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40018034: jal         0x40008D64
    // 0x40018038: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40018038: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4001803C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x40018040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018044: addiu       $a1, $zero, 0x3B1
    ctx->r5 = ADD32(0, 0X3B1);
    // 0x40018048: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x4001804C: jal         0x4000115C
    // 0x40018050: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    ovl_actor_main_115C(rdram, ctx);
        goto after_1;
    // 0x40018050: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x40018054: b           L_400180B4
    // 0x40018058: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_400180B4;
    // 0x40018058: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001805C:
    // 0x4001805C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x40018060: jal         0x40009000
    // 0x40018064: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_2;
    // 0x40018064: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x40018068: b           L_400180B4
    // 0x4001806C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_400180B4;
    // 0x4001806C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40018070:
    // 0x40018070: addiu       $a1, $s0, 0x324
    ctx->r5 = ADD32(ctx->r16, 0X324);
    // 0x40018074: jal         0x40011D40
    // 0x40018078: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    ovl_actor_main_11D40(rdram, ctx);
        goto after_3;
    // 0x40018078: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    after_3:
    // 0x4001807C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018080: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x40018084: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x40018088: jal         0x4001A598
    // 0x4001808C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_actor_main_1A598(rdram, ctx);
        goto after_4;
    // 0x4001808C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_4:
    // 0x40018090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018094: addiu       $a1, $zero, 0x297
    ctx->r5 = ADD32(0, 0X297);
    // 0x40018098: jal         0x4000115C
    // 0x4001809C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_5;
    // 0x4001809C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x400180A0: b           L_400180B4
    // 0x400180A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_400180B4;
    // 0x400180A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_400180A8:
    // 0x400180A8: jal         0x4000CB84
    // 0x400180AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_6;
    // 0x400180AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x400180B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_400180B4:
    // 0x400180B4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x400180B8: jr          $ra
    // 0x400180BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x400180BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_180C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400180C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x400180C4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x400180C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400180CC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x400180D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x400180D4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x400180D8: beq         $a1, $at, L_40018100
    if (ctx->r5 == ctx->r1) {
        // 0x400180DC: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_40018100;
    }
    // 0x400180DC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x400180E0: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x400180E4: beq         $a1, $at, L_40018190
    if (ctx->r5 == ctx->r1) {
        // 0x400180E8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_40018190;
    }
    // 0x400180E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400180EC: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x400180F0: beq         $a1, $at, L_400181EC
    if (ctx->r5 == ctx->r1) {
        // 0x400180F4: nop
    
            goto L_400181EC;
    }
    // 0x400180F4: nop

    // 0x400180F8: b           L_400181F8
    // 0x400180FC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_400181F8;
    // 0x400180FC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_40018100:
    // 0x40018100: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40018104: addiu       $s0, $s1, 0x324
    ctx->r16 = ADD32(ctx->r17, 0X324);
    // 0x40018108: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x4001810C: sw          $t7, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r15;
    // 0x40018110: swc1        $f0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f0.u32l;
    // 0x40018114: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40018118: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4001811C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40018120: addiu       $a1, $zero, 0x58C
    ctx->r5 = ADD32(0, 0X58C);
    // 0x40018124: jal         0x40008D64
    // 0x40018128: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40018128: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_0:
    // 0x4001812C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40018130: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x40018134: jal         0x40011D40
    // 0x40018138: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    ovl_actor_main_11D40(rdram, ctx);
        goto after_1;
    // 0x40018138: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    after_1:
    // 0x4001813C: lui         $at, 0x41B4
    ctx->r1 = S32(0X41B4 << 16);
    // 0x40018140: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x40018144: lwc1        $f4, 0x44($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X44);
    // 0x40018148: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x4001814C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x40018150: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x40018154: swc1        $f8, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f8.u32l;
    // 0x40018158: lwc1        $f0, 0x44($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X44);
    // 0x4001815C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40018160: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x40018164: addiu       $a1, $zero, 0x3B2
    ctx->r5 = ADD32(0, 0X3B2);
    // 0x40018168: bc1f        L_40018180
    if (!c1cs) {
        // 0x4001816C: nop
    
            goto L_40018180;
    }
    // 0x4001816C: nop

    // 0x40018170: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x40018174: nop

    // 0x40018178: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x4001817C: swc1        $f18, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f18.u32l;
L_40018180:
    // 0x40018180: jal         0x4000115C
    // 0x40018184: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_2;
    // 0x40018184: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x40018188: b           L_400181F8
    // 0x4001818C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_400181F8;
    // 0x4001818C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_40018190:
    // 0x40018190: lwc1        $f4, 0x44($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X44);
    // 0x40018194: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x40018198: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x4001819C: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    // 0x400181A0: jal         0x4001A534
    // 0x400181A4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_1A534(rdram, ctx);
        goto after_3;
    // 0x400181A4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x400181A8: addiu       $s0, $s1, 0x324
    ctx->r16 = ADD32(ctx->r17, 0X324);
    // 0x400181AC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x400181B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400181B4: addiu       $a1, $zero, 0x299
    ctx->r5 = ADD32(0, 0X299);
    // 0x400181B8: jal         0x4000115C
    // 0x400181BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_4;
    // 0x400181BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x400181C0: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x400181C4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x400181C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x400181CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400181D0: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x400181D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x400181D8: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x400181DC: jal         0x40009000
    // 0x400181E0: swc1        $f8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f8.u32l;
    ovl_actor_main_9000(rdram, ctx);
        goto after_5;
    // 0x400181E0: swc1        $f8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f8.u32l;
    after_5:
    // 0x400181E4: b           L_400181F8
    // 0x400181E8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_400181F8;
    // 0x400181E8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_400181EC:
    // 0x400181EC: jal         0x4000CB84
    // 0x400181F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_6;
    // 0x400181F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x400181F4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_400181F8:
    // 0x400181F8: nop

    // 0x400181FC: slti        $at, $t8, 0xD
    ctx->r1 = SIGNED(ctx->r24) < 0XD ? 1 : 0;
    // 0x40018200: bne         $at, $zero, L_40018248
    if (ctx->r1 != 0) {
        // 0x40018204: slti        $at, $t8, 0x24
        ctx->r1 = SIGNED(ctx->r24) < 0X24 ? 1 : 0;
            goto L_40018248;
    }
    // 0x40018204: slti        $at, $t8, 0x24
    ctx->r1 = SIGNED(ctx->r24) < 0X24 ? 1 : 0;
    // 0x40018208: beq         $at, $zero, L_40018248
    if (ctx->r1 == 0) {
        // 0x4001820C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_40018248;
    }
    // 0x4001820C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40018210: addiu       $s0, $s1, 0x340
    ctx->r16 = ADD32(ctx->r17, 0X340);
    // 0x40018214: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x40018218: jal         0x40014248
    // 0x4001821C: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    ovl_actor_main_14248(rdram, ctx);
        goto after_7;
    // 0x4001821C: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    after_7:
    // 0x40018220: bne         $v0, $zero, L_40018240
    if (ctx->r2 != 0) {
        // 0x40018224: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_40018240;
    }
    // 0x40018224: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40018228: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x4001822C: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x40018230: jal         0x400141DC
    // 0x40018234: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_actor_main_141DC(rdram, ctx);
        goto after_8;
    // 0x40018234: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_8:
    // 0x40018238: beq         $v0, $zero, L_4001824C
    if (ctx->r2 == 0) {
        // 0x4001823C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_4001824C;
    }
    // 0x4001823C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40018240:
    // 0x40018240: jal         0x4000CB84
    // 0x40018244: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_9;
    // 0x40018244: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
L_40018248:
    // 0x40018248: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001824C:
    // 0x4001824C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x40018250: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x40018254: jr          $ra
    // 0x40018258: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x40018258: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_1825C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001825C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40018260: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40018264: lw          $t6, 0x340($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X340);
    // 0x40018268: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4001826C: beq         $t6, $at, L_40018280
    if (ctx->r14 == ctx->r1) {
        // 0x40018270: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_40018280;
    }
    // 0x40018270: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x40018274: lw          $a0, 0x340($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X340);
    // 0x40018278: jal         0x400006C4
    // 0x4001827C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4001827C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
L_40018280:
    // 0x40018280: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40018284: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x40018288: jr          $ra
    // 0x4001828C: nop

    return;
    // 0x4001828C: nop

;}
RECOMP_FUNC void ovl_actor_main_18290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40018290: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40018294: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40018298: bne         $a1, $at, L_400182B4
    if (ctx->r5 != ctx->r1) {
        // 0x4001829C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_400182B4;
    }
    // 0x4001829C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400182A0: addiu       $a1, $zero, 0x58A
    ctx->r5 = ADD32(0, 0X58A);
    // 0x400182A4: lui         $a2, 0x4198
    ctx->r6 = S32(0X4198 << 16);
    // 0x400182A8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400182AC: jal         0x40008D64
    // 0x400182B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x400182B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_400182B4:
    // 0x400182B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400182B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x400182BC: jr          $ra
    // 0x400182C0: nop

    return;
    // 0x400182C0: nop

;}
RECOMP_FUNC void ovl_actor_main_182C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400182C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x400182C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400182CC: bne         $a1, $at, L_400182F0
    if (ctx->r5 != ctx->r1) {
        // 0x400182D0: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_400182F0;
    }
    // 0x400182D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400182D4: addiu       $a1, $zero, 0x592
    ctx->r5 = ADD32(0, 0X592);
    // 0x400182D8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400182DC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400182E0: jal         0x40008D64
    // 0x400182E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x400182E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x400182E8: b           L_40018308
    // 0x400182EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40018308;
    // 0x400182EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400182F0:
    // 0x400182F0: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x400182F4: bne         $a1, $at, L_40018308
    if (ctx->r5 != ctx->r1) {
        // 0x400182F8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40018308;
    }
    // 0x400182F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400182FC: jal         0x4000CB84
    // 0x40018300: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_1;
    // 0x40018300: nop

    after_1:
    // 0x40018304: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40018308:
    // 0x40018308: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4001830C: jr          $ra
    // 0x40018310: nop

    return;
    // 0x40018310: nop

;}
RECOMP_FUNC void ovl_actor_main_18314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40018314: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40018318: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001831C: bne         $a1, $at, L_40018338
    if (ctx->r5 != ctx->r1) {
        // 0x40018320: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40018338;
    }
    // 0x40018320: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40018324: addiu       $a1, $zero, 0x593
    ctx->r5 = ADD32(0, 0X593);
    // 0x40018328: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001832C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40018330: jal         0x40008D64
    // 0x40018334: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40018334: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_40018338:
    // 0x40018338: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001833C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40018340: jr          $ra
    // 0x40018344: nop

    return;
    // 0x40018344: nop

;}
RECOMP_FUNC void ovl_actor_main_18348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40018348: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4001834C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40018350: bne         $a1, $at, L_4001836C
    if (ctx->r5 != ctx->r1) {
        // 0x40018354: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_4001836C;
    }
    // 0x40018354: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40018358: addiu       $a1, $zero, 0x594
    ctx->r5 = ADD32(0, 0X594);
    // 0x4001835C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40018360: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40018364: jal         0x40008D64
    // 0x40018368: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40018368: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_4001836C:
    // 0x4001836C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40018370: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40018374: jr          $ra
    // 0x40018378: nop

    return;
    // 0x40018378: nop

;}
RECOMP_FUNC void ovl_actor_main_1837C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001837C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40018380: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40018384: bne         $a1, $at, L_400183A0
    if (ctx->r5 != ctx->r1) {
        // 0x40018388: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_400183A0;
    }
    // 0x40018388: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4001838C: addiu       $a1, $zero, 0x595
    ctx->r5 = ADD32(0, 0X595);
    // 0x40018390: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40018394: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40018398: jal         0x40008D64
    // 0x4001839C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x4001839C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_400183A0:
    // 0x400183A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400183A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x400183A8: jr          $ra
    // 0x400183AC: nop

    return;
    // 0x400183AC: nop

;}
RECOMP_FUNC void ovl_actor_main_183B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400183B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x400183B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400183B8: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x400183BC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x400183C0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x400183C4: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x400183C8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x400183CC: jal         0x4001A4A0
    // 0x400183D0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_1A4A0(rdram, ctx);
        goto after_0;
    // 0x400183D0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x400183D4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x400183D8: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x400183DC: lw          $a1, 0x334($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X334);
    // 0x400183E0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x400183E4: jal         0x40000F34
    // 0x400183E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_F34(rdram, ctx);
        goto after_1;
    // 0x400183E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x400183EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400183F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x400183F4: jr          $ra
    // 0x400183F8: nop

    return;
    // 0x400183F8: nop

;}
RECOMP_FUNC void ovl_actor_main_183FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400183FC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x40018400: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x40018404: slti        $at, $a1, 0x3D
    ctx->r1 = SIGNED(ctx->r5) < 0X3D ? 1 : 0;
    // 0x40018408: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001840C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40018410: bne         $at, $zero, L_40018460
    if (ctx->r1 != 0) {
        // 0x40018414: sw          $a1, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r5;
            goto L_40018460;
    }
    // 0x40018414: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x40018418: slti        $at, $a1, 0x3F
    ctx->r1 = SIGNED(ctx->r5) < 0X3F ? 1 : 0;
    // 0x4001841C: bne         $at, $zero, L_40018448
    if (ctx->r1 != 0) {
        // 0x40018420: addiu       $t7, $a1, -0xC1
        ctx->r15 = ADD32(ctx->r5, -0XC1);
            goto L_40018448;
    }
    // 0x40018420: addiu       $t7, $a1, -0xC1
    ctx->r15 = ADD32(ctx->r5, -0XC1);
    // 0x40018424: sltiu       $at, $t7, 0x55
    ctx->r1 = ctx->r15 < 0X55 ? 1 : 0;
    // 0x40018428: beq         $at, $zero, L_40018684
    if (ctx->r1 == 0) {
        // 0x4001842C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_40018684;
    }
    // 0x4001842C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x40018430: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40018434: addu        $at, $at, $t7
    gpr jr_addend_40018440 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x40018438: lw          $t7, -0xDB4($at)
    ctx->r15 = ADD32(ctx->r1, -0XDB4);
    // 0x4001843C: nop

    // 0x40018440: jr          $t7
    // 0x40018444: nop

    switch (jr_addend_40018440 >> 2) {
        case 0: goto L_40018558; break;
        case 1: goto L_40018684; break;
        case 2: goto L_40018684; break;
        case 3: goto L_40018684; break;
        case 4: goto L_40018684; break;
        case 5: goto L_40018684; break;
        case 6: goto L_40018684; break;
        case 7: goto L_40018684; break;
        case 8: goto L_40018684; break;
        case 9: goto L_40018684; break;
        case 10: goto L_40018684; break;
        case 11: goto L_40018684; break;
        case 12: goto L_40018684; break;
        case 13: goto L_40018684; break;
        case 14: goto L_40018684; break;
        case 15: goto L_40018684; break;
        case 16: goto L_40018684; break;
        case 17: goto L_40018684; break;
        case 18: goto L_40018684; break;
        case 19: goto L_40018684; break;
        case 20: goto L_40018684; break;
        case 21: goto L_40018684; break;
        case 22: goto L_40018684; break;
        case 23: goto L_40018684; break;
        case 24: goto L_40018684; break;
        case 25: goto L_40018584; break;
        case 26: goto L_40018684; break;
        case 27: goto L_40018684; break;
        case 28: goto L_40018684; break;
        case 29: goto L_40018684; break;
        case 30: goto L_40018684; break;
        case 31: goto L_40018684; break;
        case 32: goto L_40018684; break;
        case 33: goto L_40018684; break;
        case 34: goto L_40018684; break;
        case 35: goto L_40018684; break;
        case 36: goto L_40018684; break;
        case 37: goto L_40018684; break;
        case 38: goto L_40018684; break;
        case 39: goto L_40018684; break;
        case 40: goto L_40018684; break;
        case 41: goto L_40018684; break;
        case 42: goto L_40018684; break;
        case 43: goto L_40018684; break;
        case 44: goto L_40018684; break;
        case 45: goto L_40018684; break;
        case 46: goto L_40018684; break;
        case 47: goto L_40018684; break;
        case 48: goto L_40018684; break;
        case 49: goto L_40018684; break;
        case 50: goto L_400185A0; break;
        case 51: goto L_40018684; break;
        case 52: goto L_40018684; break;
        case 53: goto L_40018684; break;
        case 54: goto L_40018684; break;
        case 55: goto L_40018684; break;
        case 56: goto L_40018684; break;
        case 57: goto L_40018684; break;
        case 58: goto L_40018684; break;
        case 59: goto L_40018684; break;
        case 60: goto L_40018684; break;
        case 61: goto L_40018684; break;
        case 62: goto L_40018684; break;
        case 63: goto L_40018684; break;
        case 64: goto L_40018684; break;
        case 65: goto L_40018684; break;
        case 66: goto L_40018684; break;
        case 67: goto L_40018684; break;
        case 68: goto L_40018684; break;
        case 69: goto L_40018684; break;
        case 70: goto L_40018684; break;
        case 71: goto L_40018684; break;
        case 72: goto L_40018684; break;
        case 73: goto L_40018684; break;
        case 74: goto L_40018684; break;
        case 75: goto L_400185BC; break;
        case 76: goto L_40018684; break;
        case 77: goto L_40018684; break;
        case 78: goto L_40018684; break;
        case 79: goto L_400185E8; break;
        case 80: goto L_40018684; break;
        case 81: goto L_40018684; break;
        case 82: goto L_40018684; break;
        case 83: goto L_40018684; break;
        case 84: goto L_40018678; break;
        default: switch_error(__func__, 0x40018440, 0x4001F24C);
    }
    // 0x40018444: nop

L_40018448:
    // 0x40018448: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x4001844C: addiu       $at, $zero, 0x3E
    ctx->r1 = ADD32(0, 0X3E);
    // 0x40018450: beq         $t8, $at, L_4001850C
    if (ctx->r24 == ctx->r1) {
        // 0x40018454: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001850C;
    }
    // 0x40018454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018458: b           L_40018688
    // 0x4001845C: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
        goto L_40018688;
    // 0x4001845C: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
L_40018460:
    // 0x40018460: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x40018464: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40018468: beq         $t9, $at, L_40018484
    if (ctx->r25 == ctx->r1) {
        // 0x4001846C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40018484;
    }
    // 0x4001846C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018470: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x40018474: beq         $t9, $at, L_400184F4
    if (ctx->r25 == ctx->r1) {
        // 0x40018478: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400184F4;
    }
    // 0x40018478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001847C: b           L_40018688
    // 0x40018480: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
        goto L_40018688;
    // 0x40018480: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
L_40018484:
    // 0x40018484: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40018488: addiu       $a1, $zero, 0x595
    ctx->r5 = ADD32(0, 0X595);
    // 0x4001848C: swc1        $f0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f0.u32l;
    // 0x40018490: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40018494: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x40018498: jal         0x40008D64
    // 0x4001849C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x4001849C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_0:
    // 0x400184A0: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400184A4: lwc1        $f4, -0xC60($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0XC60);
    // 0x400184A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400184AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x400184B0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400184B4: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x400184B8: jal         0x4000120C
    // 0x400184BC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_1;
    // 0x400184BC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x400184C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400184C4: addiu       $a1, $zero, 0x2B1
    ctx->r5 = ADD32(0, 0X2B1);
    // 0x400184C8: jal         0x4000115C
    // 0x400184CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_2;
    // 0x400184CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x400184D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400184D4: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x400184D8: jal         0x40009000
    // 0x400184DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_3;
    // 0x400184DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x400184E0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x400184E4: jal         0x40000E20
    // 0x400184E8: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    ovl_actor_main_E20(rdram, ctx);
        goto after_4;
    // 0x400184E8: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_4:
    // 0x400184EC: b           L_40018688
    // 0x400184F0: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
        goto L_40018688;
    // 0x400184F0: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
L_400184F4:
    // 0x400184F4: addiu       $a1, $s0, 0x324
    ctx->r5 = ADD32(ctx->r16, 0X324);
    // 0x400184F8: addiu       $a2, $zero, 0x56B
    ctx->r6 = ADD32(0, 0X56B);
    // 0x400184FC: jal         0x40011DA0
    // 0x40018500: lui         $a3, 0x4216
    ctx->r7 = S32(0X4216 << 16);
    ovl_actor_main_11DA0(rdram, ctx);
        goto after_5;
    // 0x40018500: lui         $a3, 0x4216
    ctx->r7 = S32(0X4216 << 16);
    after_5:
    // 0x40018504: b           L_40018688
    // 0x40018508: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
        goto L_40018688;
    // 0x40018508: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
L_4001850C:
    // 0x4001850C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x40018510: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x40018514: jal         0x40011F94
    // 0x40018518: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    ovl_actor_main_11F94(rdram, ctx);
        goto after_6;
    // 0x40018518: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    after_6:
    // 0x4001851C: beq         $v0, $zero, L_40018548
    if (ctx->r2 == 0) {
        // 0x40018520: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40018548;
    }
    // 0x40018520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018524: addiu       $a1, $zero, 0x596
    ctx->r5 = ADD32(0, 0X596);
    // 0x40018528: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001852C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40018530: jal         0x40008D64
    // 0x40018534: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_7;
    // 0x40018534: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x40018538: jal         0x40011B50
    // 0x4001853C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11B50(rdram, ctx);
        goto after_8;
    // 0x4001853C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x40018540: b           L_40018688
    // 0x40018544: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
        goto L_40018688;
    // 0x40018544: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
L_40018548:
    // 0x40018548: jal         0x4000CB84
    // 0x4001854C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_9;
    // 0x4001854C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x40018550: b           L_40018688
    // 0x40018554: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
        goto L_40018688;
    // 0x40018554: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
L_40018558:
    // 0x40018558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001855C: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x40018560: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40018564: jal         0x400018BC
    // 0x40018568: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_10;
    // 0x40018568: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x4001856C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018570: addiu       $a1, $zero, 0x3CA
    ctx->r5 = ADD32(0, 0X3CA);
    // 0x40018574: jal         0x4000115C
    // 0x40018578: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_11;
    // 0x40018578: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x4001857C: b           L_40018688
    // 0x40018580: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
        goto L_40018688;
    // 0x40018580: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
L_40018584:
    // 0x40018584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018588: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x4001858C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x40018590: jal         0x400018BC
    // 0x40018594: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_12;
    // 0x40018594: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x40018598: b           L_40018688
    // 0x4001859C: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
        goto L_40018688;
    // 0x4001859C: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
L_400185A0:
    // 0x400185A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400185A4: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x400185A8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400185AC: jal         0x400018BC
    // 0x400185B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_13;
    // 0x400185B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x400185B4: b           L_40018688
    // 0x400185B8: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
        goto L_40018688;
    // 0x400185B8: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
L_400185BC:
    // 0x400185BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400185C0: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x400185C4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x400185C8: jal         0x400018BC
    // 0x400185CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_14;
    // 0x400185CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x400185D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400185D4: addiu       $a1, $zero, 0x2B5
    ctx->r5 = ADD32(0, 0X2B5);
    // 0x400185D8: jal         0x4000115C
    // 0x400185DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_15;
    // 0x400185DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x400185E0: b           L_40018688
    // 0x400185E4: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
        goto L_40018688;
    // 0x400185E4: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
L_400185E8:
    // 0x400185E8: addiu       $v0, $s0, 0x324
    ctx->r2 = ADD32(ctx->r16, 0X324);
    // 0x400185EC: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    // 0x400185F0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x400185F4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x400185F8: addiu       $a2, $zero, 0x778
    ctx->r6 = ADD32(0, 0X778);
    // 0x400185FC: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    // 0x40018600: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x40018604: jal         0x40000F34
    // 0x40018608: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_actor_main_F34(rdram, ctx);
        goto after_16;
    // 0x40018608: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_16:
    // 0x4001860C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x40018610: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x40018614: lw          $a2, 0x10($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X10);
    // 0x40018618: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4001861C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x40018620: jal         0x40000F34
    // 0x40018624: addiu       $a3, $zero, 0x778
    ctx->r7 = ADD32(0, 0X778);
    ovl_actor_main_F34(rdram, ctx);
        goto after_17;
    // 0x40018624: addiu       $a3, $zero, 0x778
    ctx->r7 = ADD32(0, 0X778);
    after_17:
    // 0x40018628: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4001862C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40018630: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x40018634: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x40018638: lwc1        $f8, 0x44($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X44);
    // 0x4001863C: lwc1        $f17, -0xC58($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0XC58);
    // 0x40018640: lwc1        $f16, -0xC54($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0XC54);
    // 0x40018644: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x40018648: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x4001864C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x40018650: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x40018654: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x40018658: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4001865C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x40018660: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x40018664: lw          $a1, 0x10($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X10);
    // 0x40018668: jal         0x40000F34
    // 0x4001866C: nop

    ovl_actor_main_F34(rdram, ctx);
        goto after_18;
    // 0x4001866C: nop

    after_18:
    // 0x40018670: b           L_40018688
    // 0x40018674: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
        goto L_40018688;
    // 0x40018674: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
L_40018678:
    // 0x40018678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001867C: jal         0x40006458
    // 0x40018680: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_6458(rdram, ctx);
        goto after_19;
    // 0x40018680: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_19:
L_40018684:
    // 0x40018684: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
L_40018688:
    // 0x40018688: nop

    // 0x4001868C: slti        $at, $t2, 0x3E
    ctx->r1 = SIGNED(ctx->r10) < 0X3E ? 1 : 0;
    // 0x40018690: beq         $at, $zero, L_400186A4
    if (ctx->r1 == 0) {
        // 0x40018694: lw          $t3, 0x4C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X4C);
            goto L_400186A4;
    }
    // 0x40018694: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x40018698: jal         0x40011E8C
    // 0x4001869C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11E8C(rdram, ctx);
        goto after_20;
    // 0x4001869C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x400186A0: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
L_400186A4:
    // 0x400186A4: nop

    // 0x400186A8: slti        $at, $t3, 0x3C
    ctx->r1 = SIGNED(ctx->r11) < 0X3C ? 1 : 0;
    // 0x400186AC: bne         $at, $zero, L_400186D4
    if (ctx->r1 != 0) {
        // 0x400186B0: slti        $at, $t3, 0x3E
        ctx->r1 = SIGNED(ctx->r11) < 0X3E ? 1 : 0;
            goto L_400186D4;
    }
    // 0x400186B0: slti        $at, $t3, 0x3E
    ctx->r1 = SIGNED(ctx->r11) < 0X3E ? 1 : 0;
    // 0x400186B4: beq         $at, $zero, L_400186D4
    if (ctx->r1 == 0) {
        // 0x400186B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400186D4;
    }
    // 0x400186B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400186BC: addiu       $t4, $s0, 0x324
    ctx->r12 = ADD32(ctx->r16, 0X324);
    // 0x400186C0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x400186C4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x400186C8: addiu       $a2, $zero, 0x3D
    ctx->r6 = ADD32(0, 0X3D);
    // 0x400186CC: jal         0x40011BE4
    // 0x400186D0: lui         $a3, 0x4216
    ctx->r7 = S32(0X4216 << 16);
    ovl_actor_main_11BE4(rdram, ctx);
        goto after_21;
    // 0x400186D0: lui         $a3, 0x4216
    ctx->r7 = S32(0X4216 << 16);
    after_21:
L_400186D4:
    // 0x400186D4: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x400186D8: nop

    // 0x400186DC: slti        $at, $t5, 0x110
    ctx->r1 = SIGNED(ctx->r13) < 0X110 ? 1 : 0;
    // 0x400186E0: bne         $at, $zero, L_400186F4
    if (ctx->r1 != 0) {
        // 0x400186E4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_400186F4;
    }
    // 0x400186E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x400186E8: jal         0x400183B0
    // 0x400186EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_183B0(rdram, ctx);
        goto after_22;
    // 0x400186EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x400186F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_400186F4:
    // 0x400186F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x400186F8: jr          $ra
    // 0x400186FC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x400186FC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_actor_main_18700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40018700: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40018704: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40018708: jal         0x40016030
    // 0x4001870C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_16030(rdram, ctx);
        goto after_0;
    // 0x4001870C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x40018710: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x40018714: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x40018718: sw          $t6, 0x334($t7)
    MEM_W(0X334, ctx->r15) = ctx->r14;
    // 0x4001871C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40018720: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40018724: jr          $ra
    // 0x40018728: nop

    return;
    // 0x40018728: nop

;}
RECOMP_FUNC void ovl_actor_main_1872C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001872C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40018730: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40018734: jal         0x40016050
    // 0x40018738: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_16050(rdram, ctx);
        goto after_0;
    // 0x40018738: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4001873C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40018740: jal         0x40008F98
    // 0x40018744: nop

    ovl_actor_main_8F98(rdram, ctx);
        goto after_1;
    // 0x40018744: nop

    after_1:
    // 0x40018748: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x4001874C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40018750: lw          $a1, 0x334($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X334);
    // 0x40018754: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x40018758: beq         $a1, $at, L_4001876C
    if (ctx->r5 == ctx->r1) {
        // 0x4001875C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4001876C;
    }
    // 0x4001875C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40018760: jal         0x40000F34
    // 0x40018764: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_F34(rdram, ctx);
        goto after_2;
    // 0x40018764: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x40018768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001876C:
    // 0x4001876C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40018770: jr          $ra
    // 0x40018774: nop

    return;
    // 0x40018774: nop

;}
RECOMP_FUNC void ovl_actor_main_18778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40018778: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4001877C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40018780: bne         $a1, $at, L_400187A4
    if (ctx->r5 != ctx->r1) {
        // 0x40018784: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_400187A4;
    }
    // 0x40018784: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40018788: addiu       $a1, $zero, 0x597
    ctx->r5 = ADD32(0, 0X597);
    // 0x4001878C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40018790: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40018794: jal         0x40008D64
    // 0x40018798: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40018798: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4001879C: b           L_400187F0
    // 0x400187A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_400187F0;
    // 0x400187A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400187A4:
    // 0x400187A4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x400187A8: bne         $a1, $at, L_400187EC
    if (ctx->r5 != ctx->r1) {
        // 0x400187AC: lui         $a2, 0xBF80
        ctx->r6 = S32(0XBF80 << 16);
            goto L_400187EC;
    }
    // 0x400187AC: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    // 0x400187B0: lhu         $t6, 0x20($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X20);
    // 0x400187B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x400187B8: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x400187BC: bne         $t7, $zero, L_400187D8
    if (ctx->r15 != 0) {
        // 0x400187C0: addiu       $a1, $zero, 0x597
        ctx->r5 = ADD32(0, 0X597);
            goto L_400187D8;
    }
    // 0x400187C0: addiu       $a1, $zero, 0x597
    ctx->r5 = ADD32(0, 0X597);
    // 0x400187C4: lw          $t8, 0xCC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XCC);
    // 0x400187C8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x400187CC: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x400187D0: b           L_400187E0
    // 0x400187D4: sw          $t9, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r25;
        goto L_400187E0;
    // 0x400187D4: sw          $t9, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r25;
L_400187D8:
    // 0x400187D8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x400187DC: nop

L_400187E0:
    // 0x400187E0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x400187E4: jal         0x40008D64
    // 0x400187E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_1;
    // 0x400187E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_400187EC:
    // 0x400187EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400187F0:
    // 0x400187F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x400187F4: jr          $ra
    // 0x400187F8: nop

    return;
    // 0x400187F8: nop

;}
RECOMP_FUNC void ovl_actor_main_187FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400187FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40018800: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40018804: bne         $a1, $at, L_40018828
    if (ctx->r5 != ctx->r1) {
        // 0x40018808: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40018828;
    }
    // 0x40018808: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4001880C: addiu       $a1, $zero, 0x598
    ctx->r5 = ADD32(0, 0X598);
    // 0x40018810: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40018814: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40018818: jal         0x40008D64
    // 0x4001881C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x4001881C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40018820: b           L_40018840
    // 0x40018824: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40018840;
    // 0x40018824: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40018828:
    // 0x40018828: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x4001882C: bne         $a1, $at, L_40018840
    if (ctx->r5 != ctx->r1) {
        // 0x40018830: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40018840;
    }
    // 0x40018830: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40018834: jal         0x4000CB84
    // 0x40018838: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_1;
    // 0x40018838: nop

    after_1:
    // 0x4001883C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40018840:
    // 0x40018840: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40018844: jr          $ra
    // 0x40018848: nop

    return;
    // 0x40018848: nop

;}
RECOMP_FUNC void ovl_actor_main_1884C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001884C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40018850: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x40018854: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40018858: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001885C: beq         $a1, $at, L_40018890
    if (ctx->r5 == ctx->r1) {
        // 0x40018860: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_40018890;
    }
    // 0x40018860: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40018864: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x40018868: beq         $a1, $at, L_400188D8
    if (ctx->r5 == ctx->r1) {
        // 0x4001886C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400188D8;
    }
    // 0x4001886C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018870: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x40018874: beq         $a1, $at, L_40018910
    if (ctx->r5 == ctx->r1) {
        // 0x40018878: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40018910;
    }
    // 0x40018878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001887C: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x40018880: beq         $a1, $at, L_40018938
    if (ctx->r5 == ctx->r1) {
        // 0x40018884: nop
    
            goto L_40018938;
    }
    // 0x40018884: nop

    // 0x40018888: b           L_40018944
    // 0x4001888C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40018944;
    // 0x4001888C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40018890:
    // 0x40018890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018894: addiu       $a1, $zero, 0x592
    ctx->r5 = ADD32(0, 0X592);
    // 0x40018898: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001889C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400188A0: jal         0x40008D64
    // 0x400188A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x400188A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x400188A8: addiu       $a1, $s0, 0x324
    ctx->r5 = ADD32(ctx->r16, 0X324);
    // 0x400188AC: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    // 0x400188B0: jal         0x40011D40
    // 0x400188B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11D40(rdram, ctx);
        goto after_1;
    // 0x400188B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x400188B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x400188BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400188C0: addiu       $a1, $zero, 0x3C8
    ctx->r5 = ADD32(0, 0X3C8);
    // 0x400188C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x400188C8: jal         0x4000115C
    // 0x400188CC: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    ovl_actor_main_115C(rdram, ctx);
        goto after_2;
    // 0x400188CC: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    after_2:
    // 0x400188D0: b           L_40018944
    // 0x400188D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40018944;
    // 0x400188D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_400188D8:
    // 0x400188D8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x400188DC: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400188E0: lwc1        $f6, -0xC50($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0XC50);
    // 0x400188E4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x400188E8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x400188EC: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    // 0x400188F0: jal         0x4000120C
    // 0x400188F4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_3;
    // 0x400188F4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x400188F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400188FC: addiu       $a1, $zero, 0x2AC
    ctx->r5 = ADD32(0, 0X2AC);
    // 0x40018900: jal         0x4000115C
    // 0x40018904: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_4;
    // 0x40018904: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x40018908: b           L_40018944
    // 0x4001890C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40018944;
    // 0x4001890C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40018910:
    // 0x40018910: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x40018914: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40018918: jal         0x4001A598
    // 0x4001891C: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    ovl_actor_main_1A598(rdram, ctx);
        goto after_5;
    // 0x4001891C: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    after_5:
    // 0x40018920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018924: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x40018928: jal         0x40009000
    // 0x4001892C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_6;
    // 0x4001892C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x40018930: b           L_40018944
    // 0x40018934: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40018944;
    // 0x40018934: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40018938:
    // 0x40018938: jal         0x4000CB84
    // 0x4001893C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_7;
    // 0x4001893C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x40018940: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40018944:
    // 0x40018944: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x40018948: jr          $ra
    // 0x4001894C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4001894C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_18950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40018950: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40018954: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40018958: lw          $t6, 0x330($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X330);
    // 0x4001895C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40018960: beq         $t6, $at, L_4001898C
    if (ctx->r14 == ctx->r1) {
        // 0x40018964: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_4001898C;
    }
    // 0x40018964: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x40018968: addiu       $v0, $a3, 0x324
    ctx->r2 = ADD32(ctx->r7, 0X324);
    // 0x4001896C: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x40018970: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x40018974: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x40018978: jal         0x40000F34
    // 0x4001897C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_F34(rdram, ctx);
        goto after_0;
    // 0x4001897C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x40018980: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x40018984: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x40018988: sw          $t7, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r15;
L_4001898C:
    // 0x4001898C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40018990: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40018994: jr          $ra
    // 0x40018998: nop

    return;
    // 0x40018998: nop

;}
