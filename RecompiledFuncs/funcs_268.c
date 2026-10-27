#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_mobj_main_6618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006618: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x4500661C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006620: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006624: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x45006628: jal         0x450063D0
    // 0x4500662C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    ovl_mobj_main_63D0(rdram, ctx);
        goto after_0;
    // 0x4500662C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_0:
    // 0x45006630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006634: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006638: jr          $ra
    // 0x4500663C: nop

    return;
    // 0x4500663C: nop

;}
RECOMP_FUNC void ovl_mobj_main_6640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006640: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45006644: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006648: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500664C: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x45006650: jal         0x4500640C
    // 0x45006654: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_640C(rdram, ctx);
        goto after_0;
    // 0x45006654: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x45006658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500665C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006660: jr          $ra
    // 0x45006664: nop

    return;
    // 0x45006664: nop

;}
RECOMP_FUNC void ovl_mobj_main_6668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006668: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500666C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006670: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45006674: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x45006678: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x4500667C: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x45006680: jal         0x45005D34
    // 0x45006684: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_0;
    // 0x45006684: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x45006688: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500668C: jal         0x45005DA4
    // 0x45006690: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_5DA4(rdram, ctx);
        goto after_1;
    // 0x45006690: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x45006694: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006698: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500669C: jr          $ra
    // 0x450066A0: nop

    return;
    // 0x450066A0: nop

;}
RECOMP_FUNC void ovl_mobj_main_66A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450066A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x450066A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x450066AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x450066B0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x450066B4: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x450066B8: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x450066BC: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x450066C0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x450066C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x450066C8: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x450066CC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x450066D0: jal         0x45005B24
    // 0x450066D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_0;
    // 0x450066D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x450066D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x450066DC: jal         0x45005D34
    // 0x450066E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_1;
    // 0x450066E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x450066E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x450066E8: jal         0x45005DA4
    // 0x450066EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_5DA4(rdram, ctx);
        goto after_2;
    // 0x450066EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x450066F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x450066F4: jal         0x45005AB4
    // 0x450066F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_5AB4(rdram, ctx);
        goto after_3;
    // 0x450066F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x450066FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x45006700: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x45006704: jr          $ra
    // 0x45006708: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x45006708: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_mobj_main_670C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500670C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006710: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006714: lw          $t6, 0x188($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X188);
    // 0x45006718: lw          $v1, 0x184($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X184);
    // 0x4500671C: addiu       $v0, $t6, 0x1
    ctx->r2 = ADD32(ctx->r14, 0X1);
    // 0x45006720: andi        $t8, $v1, 0x20
    ctx->r24 = ctx->r3 & 0X20;
    // 0x45006724: sw          $v0, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r2;
    // 0x45006728: beq         $t8, $zero, L_45006740
    if (ctx->r24 == 0) {
        // 0x4500672C: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_45006740;
    }
    // 0x4500672C: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x45006730: jal         0x45005C3C
    // 0x45006734: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_0;
    // 0x45006734: nop

    after_0:
    // 0x45006738: b           L_45006794
    // 0x4500673C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45006794;
    // 0x4500673C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45006740:
    // 0x45006740: bne         $v1, $zero, L_45006790
    if (ctx->r3 != 0) {
        // 0x45006744: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_45006790;
    }
    // 0x45006744: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x45006748: bne         $v0, $at, L_45006764
    if (ctx->r2 != ctx->r1) {
        // 0x4500674C: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_45006764;
    }
    // 0x4500674C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x45006750: jal         0x45000F80
    // 0x45006754: addiu       $a1, $zero, 0x189
    ctx->r5 = ADD32(0, 0X189);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_1;
    // 0x45006754: addiu       $a1, $zero, 0x189
    ctx->r5 = ADD32(0, 0X189);
    after_1:
    // 0x45006758: b           L_45006794
    // 0x4500675C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45006794;
    // 0x4500675C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006760: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
L_45006764:
    // 0x45006764: bne         $v0, $at, L_45006780
    if (ctx->r2 != ctx->r1) {
        // 0x45006768: addiu       $at, $zero, 0x1D
        ctx->r1 = ADD32(0, 0X1D);
            goto L_45006780;
    }
    // 0x45006768: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x4500676C: jal         0x45005AB4
    // 0x45006770: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_5AB4(rdram, ctx);
        goto after_2;
    // 0x45006770: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x45006774: b           L_45006794
    // 0x45006778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45006794;
    // 0x45006778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500677C: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
L_45006780:
    // 0x45006780: bne         $v0, $at, L_45006794
    if (ctx->r2 != ctx->r1) {
        // 0x45006784: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45006794;
    }
    // 0x45006784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006788: jal         0x45005C3C
    // 0x4500678C: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_3;
    // 0x4500678C: nop

    after_3:
L_45006790:
    // 0x45006790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45006794:
    // 0x45006794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006798: jr          $ra
    // 0x4500679C: nop

    return;
    // 0x4500679C: nop

;}
RECOMP_FUNC void ovl_mobj_main_67A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450067A0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x450067A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450067A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450067AC: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x450067B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x450067B4: jal         0x450063D0
    // 0x450067B8: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    ovl_mobj_main_63D0(rdram, ctx);
        goto after_0;
    // 0x450067B8: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_0:
    // 0x450067BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x450067C0: jal         0x45005D34
    // 0x450067C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_1;
    // 0x450067C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x450067C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450067CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450067D0: jr          $ra
    // 0x450067D4: nop

    return;
    // 0x450067D4: nop

;}
RECOMP_FUNC void ovl_mobj_main_67D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450067D8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x450067DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450067E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450067E4: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x450067E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x450067EC: jal         0x4500640C
    // 0x450067F0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_640C(rdram, ctx);
        goto after_0;
    // 0x450067F0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x450067F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x450067F8: jal         0x45005D34
    // 0x450067FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_1;
    // 0x450067FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x45006800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006804: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006808: jr          $ra
    // 0x4500680C: nop

    return;
    // 0x4500680C: nop

;}
RECOMP_FUNC void ovl_mobj_main_6810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006814: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006818: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x4500681C: addiu       $at, $zero, 0xA8
    ctx->r1 = ADD32(0, 0XA8);
    // 0x45006820: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x45006824: bne         $v0, $at, L_45006838
    if (ctx->r2 != ctx->r1) {
        // 0x45006828: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_45006838;
    }
    // 0x45006828: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4500682C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x45006830: b           L_450069C8
    // 0x45006834: addiu       $a1, $zero, 0x196
    ctx->r5 = ADD32(0, 0X196);
        goto L_450069C8;
    // 0x45006834: addiu       $a1, $zero, 0x196
    ctx->r5 = ADD32(0, 0X196);
L_45006838:
    // 0x45006838: addiu       $at, $zero, 0x9E
    ctx->r1 = ADD32(0, 0X9E);
    // 0x4500683C: bne         $v0, $at, L_45006850
    if (ctx->r2 != ctx->r1) {
        // 0x45006840: addiu       $at, $zero, 0x9F
        ctx->r1 = ADD32(0, 0X9F);
            goto L_45006850;
    }
    // 0x45006840: addiu       $at, $zero, 0x9F
    ctx->r1 = ADD32(0, 0X9F);
    // 0x45006844: b           L_450069C8
    // 0x45006848: addiu       $a1, $zero, 0x1CE
    ctx->r5 = ADD32(0, 0X1CE);
        goto L_450069C8;
    // 0x45006848: addiu       $a1, $zero, 0x1CE
    ctx->r5 = ADD32(0, 0X1CE);
    // 0x4500684C: addiu       $at, $zero, 0x9F
    ctx->r1 = ADD32(0, 0X9F);
L_45006850:
    // 0x45006850: bne         $v0, $at, L_45006864
    if (ctx->r2 != ctx->r1) {
        // 0x45006854: addiu       $at, $zero, 0xC2
        ctx->r1 = ADD32(0, 0XC2);
            goto L_45006864;
    }
    // 0x45006854: addiu       $at, $zero, 0xC2
    ctx->r1 = ADD32(0, 0XC2);
    // 0x45006858: b           L_450069C8
    // 0x4500685C: addiu       $a1, $zero, 0x1CF
    ctx->r5 = ADD32(0, 0X1CF);
        goto L_450069C8;
    // 0x4500685C: addiu       $a1, $zero, 0x1CF
    ctx->r5 = ADD32(0, 0X1CF);
    // 0x45006860: addiu       $at, $zero, 0xC2
    ctx->r1 = ADD32(0, 0XC2);
L_45006864:
    // 0x45006864: bne         $v0, $at, L_45006878
    if (ctx->r2 != ctx->r1) {
        // 0x45006868: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_45006878;
    }
    // 0x45006868: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x4500686C: b           L_450069C8
    // 0x45006870: addiu       $a1, $zero, 0x1D0
    ctx->r5 = ADD32(0, 0X1D0);
        goto L_450069C8;
    // 0x45006870: addiu       $a1, $zero, 0x1D0
    ctx->r5 = ADD32(0, 0X1D0);
    // 0x45006874: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
L_45006878:
    // 0x45006878: beq         $v0, $at, L_45006888
    if (ctx->r2 == ctx->r1) {
        // 0x4500687C: addiu       $at, $zero, 0x105
        ctx->r1 = ADD32(0, 0X105);
            goto L_45006888;
    }
    // 0x4500687C: addiu       $at, $zero, 0x105
    ctx->r1 = ADD32(0, 0X105);
    // 0x45006880: bne         $v0, $at, L_45006894
    if (ctx->r2 != ctx->r1) {
        // 0x45006884: addiu       $at, $zero, 0xE7
        ctx->r1 = ADD32(0, 0XE7);
            goto L_45006894;
    }
    // 0x45006884: addiu       $at, $zero, 0xE7
    ctx->r1 = ADD32(0, 0XE7);
L_45006888:
    // 0x45006888: b           L_450069C8
    // 0x4500688C: addiu       $a1, $zero, 0x132
    ctx->r5 = ADD32(0, 0X132);
        goto L_450069C8;
    // 0x4500688C: addiu       $a1, $zero, 0x132
    ctx->r5 = ADD32(0, 0X132);
    // 0x45006890: addiu       $at, $zero, 0xE7
    ctx->r1 = ADD32(0, 0XE7);
L_45006894:
    // 0x45006894: bne         $v0, $at, L_450068A8
    if (ctx->r2 != ctx->r1) {
        // 0x45006898: addiu       $at, $zero, 0x89
        ctx->r1 = ADD32(0, 0X89);
            goto L_450068A8;
    }
    // 0x45006898: addiu       $at, $zero, 0x89
    ctx->r1 = ADD32(0, 0X89);
    // 0x4500689C: b           L_450069C8
    // 0x450068A0: addiu       $a1, $zero, 0x1B6
    ctx->r5 = ADD32(0, 0X1B6);
        goto L_450069C8;
    // 0x450068A0: addiu       $a1, $zero, 0x1B6
    ctx->r5 = ADD32(0, 0X1B6);
    // 0x450068A4: addiu       $at, $zero, 0x89
    ctx->r1 = ADD32(0, 0X89);
L_450068A8:
    // 0x450068A8: bne         $v0, $at, L_450068BC
    if (ctx->r2 != ctx->r1) {
        // 0x450068AC: addiu       $at, $zero, 0xE4
        ctx->r1 = ADD32(0, 0XE4);
            goto L_450068BC;
    }
    // 0x450068AC: addiu       $at, $zero, 0xE4
    ctx->r1 = ADD32(0, 0XE4);
    // 0x450068B0: b           L_450069C8
    // 0x450068B4: addiu       $a1, $zero, 0x18B
    ctx->r5 = ADD32(0, 0X18B);
        goto L_450069C8;
    // 0x450068B4: addiu       $a1, $zero, 0x18B
    ctx->r5 = ADD32(0, 0X18B);
    // 0x450068B8: addiu       $at, $zero, 0xE4
    ctx->r1 = ADD32(0, 0XE4);
L_450068BC:
    // 0x450068BC: bne         $v0, $at, L_450068D0
    if (ctx->r2 != ctx->r1) {
        // 0x450068C0: addiu       $at, $zero, 0xAB
        ctx->r1 = ADD32(0, 0XAB);
            goto L_450068D0;
    }
    // 0x450068C0: addiu       $at, $zero, 0xAB
    ctx->r1 = ADD32(0, 0XAB);
    // 0x450068C4: b           L_450069C8
    // 0x450068C8: addiu       $a1, $zero, 0x1C0
    ctx->r5 = ADD32(0, 0X1C0);
        goto L_450069C8;
    // 0x450068C8: addiu       $a1, $zero, 0x1C0
    ctx->r5 = ADD32(0, 0X1C0);
    // 0x450068CC: addiu       $at, $zero, 0xAB
    ctx->r1 = ADD32(0, 0XAB);
L_450068D0:
    // 0x450068D0: bne         $v0, $at, L_450068E4
    if (ctx->r2 != ctx->r1) {
        // 0x450068D4: addiu       $at, $zero, 0x5D
        ctx->r1 = ADD32(0, 0X5D);
            goto L_450068E4;
    }
    // 0x450068D4: addiu       $at, $zero, 0x5D
    ctx->r1 = ADD32(0, 0X5D);
    // 0x450068D8: b           L_450069C8
    // 0x450068DC: addiu       $a1, $zero, 0x1A5
    ctx->r5 = ADD32(0, 0X1A5);
        goto L_450069C8;
    // 0x450068DC: addiu       $a1, $zero, 0x1A5
    ctx->r5 = ADD32(0, 0X1A5);
    // 0x450068E0: addiu       $at, $zero, 0x5D
    ctx->r1 = ADD32(0, 0X5D);
L_450068E4:
    // 0x450068E4: beq         $v0, $at, L_4500690C
    if (ctx->r2 == ctx->r1) {
        // 0x450068E8: addiu       $at, $zero, 0x50
        ctx->r1 = ADD32(0, 0X50);
            goto L_4500690C;
    }
    // 0x450068E8: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x450068EC: beq         $v0, $at, L_4500690C
    if (ctx->r2 == ctx->r1) {
        // 0x450068F0: addiu       $at, $zero, 0x51
        ctx->r1 = ADD32(0, 0X51);
            goto L_4500690C;
    }
    // 0x450068F0: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x450068F4: beq         $v0, $at, L_4500690C
    if (ctx->r2 == ctx->r1) {
        // 0x450068F8: addiu       $at, $zero, 0x5E
        ctx->r1 = ADD32(0, 0X5E);
            goto L_4500690C;
    }
    // 0x450068F8: addiu       $at, $zero, 0x5E
    ctx->r1 = ADD32(0, 0X5E);
    // 0x450068FC: beq         $v0, $at, L_4500690C
    if (ctx->r2 == ctx->r1) {
        // 0x45006900: addiu       $at, $zero, 0x5F
        ctx->r1 = ADD32(0, 0X5F);
            goto L_4500690C;
    }
    // 0x45006900: addiu       $at, $zero, 0x5F
    ctx->r1 = ADD32(0, 0X5F);
    // 0x45006904: bne         $v0, $at, L_45006918
    if (ctx->r2 != ctx->r1) {
        // 0x45006908: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_45006918;
    }
    // 0x45006908: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
L_4500690C:
    // 0x4500690C: b           L_450069C8
    // 0x45006910: addiu       $a1, $zero, 0x148
    ctx->r5 = ADD32(0, 0X148);
        goto L_450069C8;
    // 0x45006910: addiu       $a1, $zero, 0x148
    ctx->r5 = ADD32(0, 0X148);
    // 0x45006914: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
L_45006918:
    // 0x45006918: beq         $v0, $at, L_45006958
    if (ctx->r2 == ctx->r1) {
        // 0x4500691C: addiu       $at, $zero, 0x15
        ctx->r1 = ADD32(0, 0X15);
            goto L_45006958;
    }
    // 0x4500691C: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x45006920: beq         $v0, $at, L_45006958
    if (ctx->r2 == ctx->r1) {
        // 0x45006924: addiu       $at, $zero, 0x25
        ctx->r1 = ADD32(0, 0X25);
            goto L_45006958;
    }
    // 0x45006924: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x45006928: beq         $v0, $at, L_45006958
    if (ctx->r2 == ctx->r1) {
        // 0x4500692C: addiu       $at, $zero, 0x27
        ctx->r1 = ADD32(0, 0X27);
            goto L_45006958;
    }
    // 0x4500692C: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x45006930: beq         $v0, $at, L_45006958
    if (ctx->r2 == ctx->r1) {
        // 0x45006934: addiu       $at, $zero, 0x43
        ctx->r1 = ADD32(0, 0X43);
            goto L_45006958;
    }
    // 0x45006934: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x45006938: beq         $v0, $at, L_45006958
    if (ctx->r2 == ctx->r1) {
        // 0x4500693C: addiu       $at, $zero, 0x36
        ctx->r1 = ADD32(0, 0X36);
            goto L_45006958;
    }
    // 0x4500693C: addiu       $at, $zero, 0x36
    ctx->r1 = ADD32(0, 0X36);
    // 0x45006940: beq         $v0, $at, L_45006958
    if (ctx->r2 == ctx->r1) {
        // 0x45006944: addiu       $at, $zero, 0x98
        ctx->r1 = ADD32(0, 0X98);
            goto L_45006958;
    }
    // 0x45006944: addiu       $at, $zero, 0x98
    ctx->r1 = ADD32(0, 0X98);
    // 0x45006948: beq         $v0, $at, L_45006958
    if (ctx->r2 == ctx->r1) {
        // 0x4500694C: addiu       $at, $zero, 0xE8
        ctx->r1 = ADD32(0, 0XE8);
            goto L_45006958;
    }
    // 0x4500694C: addiu       $at, $zero, 0xE8
    ctx->r1 = ADD32(0, 0XE8);
    // 0x45006950: bne         $v0, $at, L_45006968
    if (ctx->r2 != ctx->r1) {
        // 0x45006954: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_45006968;
    }
    // 0x45006954: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
L_45006958:
    // 0x45006958: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x4500695C: b           L_450069C8
    // 0x45006960: addiu       $a1, $zero, 0xD4
    ctx->r5 = ADD32(0, 0XD4);
        goto L_450069C8;
    // 0x45006960: addiu       $a1, $zero, 0xD4
    ctx->r5 = ADD32(0, 0XD4);
    // 0x45006964: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
L_45006968:
    // 0x45006968: beq         $v0, $at, L_45006990
    if (ctx->r2 == ctx->r1) {
        // 0x4500696C: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_45006990;
    }
    // 0x4500696C: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x45006970: beq         $v0, $at, L_45006990
    if (ctx->r2 == ctx->r1) {
        // 0x45006974: addiu       $at, $zero, 0x3A
        ctx->r1 = ADD32(0, 0X3A);
            goto L_45006990;
    }
    // 0x45006974: addiu       $at, $zero, 0x3A
    ctx->r1 = ADD32(0, 0X3A);
    // 0x45006978: beq         $v0, $at, L_45006990
    if (ctx->r2 == ctx->r1) {
        // 0x4500697C: addiu       $at, $zero, 0x9B
        ctx->r1 = ADD32(0, 0X9B);
            goto L_45006990;
    }
    // 0x4500697C: addiu       $at, $zero, 0x9B
    ctx->r1 = ADD32(0, 0X9B);
    // 0x45006980: beq         $v0, $at, L_45006990
    if (ctx->r2 == ctx->r1) {
        // 0x45006984: addiu       $at, $zero, 0x6E
        ctx->r1 = ADD32(0, 0X6E);
            goto L_45006990;
    }
    // 0x45006984: addiu       $at, $zero, 0x6E
    ctx->r1 = ADD32(0, 0X6E);
    // 0x45006988: bne         $v0, $at, L_450069A0
    if (ctx->r2 != ctx->r1) {
        // 0x4500698C: addiu       $at, $zero, 0xE3
        ctx->r1 = ADD32(0, 0XE3);
            goto L_450069A0;
    }
    // 0x4500698C: addiu       $at, $zero, 0xE3
    ctx->r1 = ADD32(0, 0XE3);
L_45006990:
    // 0x45006990: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x45006994: b           L_450069C8
    // 0x45006998: addiu       $a1, $zero, 0xD3
    ctx->r5 = ADD32(0, 0XD3);
        goto L_450069C8;
    // 0x45006998: addiu       $a1, $zero, 0xD3
    ctx->r5 = ADD32(0, 0XD3);
    // 0x4500699C: addiu       $at, $zero, 0xE3
    ctx->r1 = ADD32(0, 0XE3);
L_450069A0:
    // 0x450069A0: bne         $v0, $at, L_450069B8
    if (ctx->r2 != ctx->r1) {
        // 0x450069A4: addiu       $at, $zero, 0x6D
        ctx->r1 = ADD32(0, 0X6D);
            goto L_450069B8;
    }
    // 0x450069A4: addiu       $at, $zero, 0x6D
    ctx->r1 = ADD32(0, 0X6D);
    // 0x450069A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x450069AC: b           L_450069C8
    // 0x450069B0: addiu       $a1, $zero, 0x399
    ctx->r5 = ADD32(0, 0X399);
        goto L_450069C8;
    // 0x450069B0: addiu       $a1, $zero, 0x399
    ctx->r5 = ADD32(0, 0X399);
    // 0x450069B4: addiu       $at, $zero, 0x6D
    ctx->r1 = ADD32(0, 0X6D);
L_450069B8:
    // 0x450069B8: bne         $v0, $at, L_450069CC
    if (ctx->r2 != ctx->r1) {
        // 0x450069BC: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_450069CC;
    }
    // 0x450069BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x450069C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x450069C4: addiu       $a1, $zero, 0xDD
    ctx->r5 = ADD32(0, 0XDD);
L_450069C8:
    // 0x450069C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_450069CC:
    // 0x450069CC: beq         $a1, $at, L_450069E0
    if (ctx->r5 == ctx->r1) {
        // 0x450069D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_450069E0;
    }
    // 0x450069D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450069D4: jal         0x45000F50
    // 0x450069D8: nop

    ovl_mobj_main_F50(rdram, ctx);
        goto after_0;
    // 0x450069D8: nop

    after_0:
    // 0x450069DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_450069E0:
    // 0x450069E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450069E4: jr          $ra
    // 0x450069E8: nop

    return;
    // 0x450069E8: nop

;}
RECOMP_FUNC void ovl_mobj_main_69EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450069EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450069F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450069F4: lw          $t6, 0x188($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X188);
    // 0x450069F8: lw          $v1, 0x184($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X184);
    // 0x450069FC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x45006A00: andi        $t8, $v1, 0x20
    ctx->r24 = ctx->r3 & 0X20;
    // 0x45006A04: sw          $t7, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r15;
    // 0x45006A08: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x45006A0C: beq         $t8, $zero, L_45006A4C
    if (ctx->r24 == 0) {
        // 0x45006A10: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_45006A4C;
    }
    // 0x45006A10: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x45006A14: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x45006A18: bne         $t7, $at, L_45006A34
    if (ctx->r15 != ctx->r1) {
        // 0x45006A1C: addiu       $at, $zero, 0x3C
        ctx->r1 = ADD32(0, 0X3C);
            goto L_45006A34;
    }
    // 0x45006A1C: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x45006A20: jal         0x45006810
    // 0x45006A24: nop

    ovl_mobj_main_6810(rdram, ctx);
        goto after_0;
    // 0x45006A24: nop

    after_0:
    // 0x45006A28: b           L_45006A84
    // 0x45006A2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45006A84;
    // 0x45006A2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006A30: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
L_45006A34:
    // 0x45006A34: bne         $v0, $at, L_45006A84
    if (ctx->r2 != ctx->r1) {
        // 0x45006A38: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45006A84;
    }
    // 0x45006A38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006A3C: jal         0x45005C3C
    // 0x45006A40: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_1;
    // 0x45006A40: nop

    after_1:
    // 0x45006A44: b           L_45006A84
    // 0x45006A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45006A84;
    // 0x45006A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45006A4C:
    // 0x45006A4C: bne         $v1, $zero, L_45006A80
    if (ctx->r3 != 0) {
        // 0x45006A50: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_45006A80;
    }
    // 0x45006A50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x45006A54: bne         $v0, $at, L_45006A70
    if (ctx->r2 != ctx->r1) {
        // 0x45006A58: addiu       $at, $zero, 0x1D
        ctx->r1 = ADD32(0, 0X1D);
            goto L_45006A70;
    }
    // 0x45006A58: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x45006A5C: jal         0x45006810
    // 0x45006A60: nop

    ovl_mobj_main_6810(rdram, ctx);
        goto after_2;
    // 0x45006A60: nop

    after_2:
    // 0x45006A64: b           L_45006A84
    // 0x45006A68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45006A84;
    // 0x45006A68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006A6C: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
L_45006A70:
    // 0x45006A70: bne         $v0, $at, L_45006A84
    if (ctx->r2 != ctx->r1) {
        // 0x45006A74: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45006A84;
    }
    // 0x45006A74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006A78: jal         0x45005C3C
    // 0x45006A7C: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_3;
    // 0x45006A7C: nop

    after_3:
L_45006A80:
    // 0x45006A80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45006A84:
    // 0x45006A84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006A88: jr          $ra
    // 0x45006A8C: nop

    return;
    // 0x45006A8C: nop

;}
RECOMP_FUNC void ovl_mobj_main_6A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006A90: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45006A94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006A98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006A9C: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x45006AA0: jal         0x4500640C
    // 0x45006AA4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_640C(rdram, ctx);
        goto after_0;
    // 0x45006AA4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x45006AA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006AAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006AB0: jr          $ra
    // 0x45006AB4: nop

    return;
    // 0x45006AB4: nop

;}
RECOMP_FUNC void ovl_mobj_main_6AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006AB8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45006ABC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006AC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006AC4: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x45006AC8: jal         0x450063D0
    // 0x45006ACC: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    ovl_mobj_main_63D0(rdram, ctx);
        goto after_0;
    // 0x45006ACC: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_0:
    // 0x45006AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006AD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006AD8: jr          $ra
    // 0x45006ADC: nop

    return;
    // 0x45006ADC: nop

;}
RECOMP_FUNC void ovl_mobj_main_6AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006AE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006AE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006AE8: lw          $t6, 0x188($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X188);
    // 0x45006AEC: lw          $t8, 0x184($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X184);
    // 0x45006AF0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x45006AF4: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x45006AF8: sw          $t7, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r15;
    // 0x45006AFC: bne         $t9, $zero, L_45006B50
    if (ctx->r25 != 0) {
        // 0x45006B00: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_45006B50;
    }
    // 0x45006B00: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x45006B04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x45006B08: bne         $t7, $at, L_45006B24
    if (ctx->r15 != ctx->r1) {
        // 0x45006B0C: addiu       $at, $zero, 0x18
        ctx->r1 = ADD32(0, 0X18);
            goto L_45006B24;
    }
    // 0x45006B0C: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x45006B10: jal         0x45000F80
    // 0x45006B14: addiu       $a1, $zero, 0x145
    ctx->r5 = ADD32(0, 0X145);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_0;
    // 0x45006B14: addiu       $a1, $zero, 0x145
    ctx->r5 = ADD32(0, 0X145);
    after_0:
    // 0x45006B18: b           L_45006B54
    // 0x45006B1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45006B54;
    // 0x45006B1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006B20: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
L_45006B24:
    // 0x45006B24: bne         $v0, $at, L_45006B40
    if (ctx->r2 != ctx->r1) {
        // 0x45006B28: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_45006B40;
    }
    // 0x45006B28: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x45006B2C: jal         0x45000F80
    // 0x45006B30: addiu       $a1, $zero, 0x13E
    ctx->r5 = ADD32(0, 0X13E);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_1;
    // 0x45006B30: addiu       $a1, $zero, 0x13E
    ctx->r5 = ADD32(0, 0X13E);
    after_1:
    // 0x45006B34: b           L_45006B54
    // 0x45006B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45006B54;
    // 0x45006B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006B3C: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
L_45006B40:
    // 0x45006B40: bne         $v0, $at, L_45006B54
    if (ctx->r2 != ctx->r1) {
        // 0x45006B44: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45006B54;
    }
    // 0x45006B44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006B48: jal         0x45005C3C
    // 0x45006B4C: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_2;
    // 0x45006B4C: nop

    after_2:
L_45006B50:
    // 0x45006B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45006B54:
    // 0x45006B54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006B58: jr          $ra
    // 0x45006B5C: nop

    return;
    // 0x45006B5C: nop

;}
RECOMP_FUNC void ovl_mobj_main_6B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006B60: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45006B64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006B68: lwc1        $f4, 0x204($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X204);
    // 0x45006B6C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45006B70: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x45006B74: lwc1        $f6, 0x208($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X208);
    // 0x45006B78: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x45006B7C: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x45006B80: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x45006B84: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x45006B88: lwc1        $f10, 0x20C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X20C);
    // 0x45006B8C: nop

    // 0x45006B90: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x45006B94: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45006B98: jal         0x450006C4
    // 0x45006B9C: nop

    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45006B9C: nop

    after_0:
    // 0x45006BA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006BA4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x45006BA8: jr          $ra
    // 0x45006BAC: nop

    return;
    // 0x45006BAC: nop

;}
RECOMP_FUNC void ovl_mobj_main_6BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006BB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006BB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006BB8: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45006BBC: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x45006BC0: sw          $a1, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r5;
    // 0x45006BC4: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x45006BC8: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x45006BCC: jal         0x45006B60
    // 0x45006BD0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_6B60(rdram, ctx);
        goto after_0;
    // 0x45006BD0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x45006BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006BD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006BDC: jr          $ra
    // 0x45006BE0: nop

    return;
    // 0x45006BE0: nop

;}
RECOMP_FUNC void ovl_mobj_main_6BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006BE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006BE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006BEC: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45006BF0: sw          $a1, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r5;
    // 0x45006BF4: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x45006BF8: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x45006BFC: jal         0x45006B60
    // 0x45006C00: lui         $a1, 0xC348
    ctx->r5 = S32(0XC348 << 16);
    ovl_mobj_main_6B60(rdram, ctx);
        goto after_0;
    // 0x45006C00: lui         $a1, 0xC348
    ctx->r5 = S32(0XC348 << 16);
    after_0:
    // 0x45006C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006C08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006C0C: jr          $ra
    // 0x45006C10: nop

    return;
    // 0x45006C10: nop

;}
RECOMP_FUNC void ovl_mobj_main_6C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006C14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006C18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006C1C: sw          $a1, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r5;
    // 0x45006C20: jal         0x45006B60
    // 0x45006C24: lui         $a1, 0xC396
    ctx->r5 = S32(0XC396 << 16);
    ovl_mobj_main_6B60(rdram, ctx);
        goto after_0;
    // 0x45006C24: lui         $a1, 0xC396
    ctx->r5 = S32(0XC396 << 16);
    after_0:
    // 0x45006C28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006C2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006C30: jr          $ra
    // 0x45006C34: nop

    return;
    // 0x45006C34: nop

;}
RECOMP_FUNC void ovl_mobj_main_6C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006C38: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x45006C3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x45006C40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x45006C44: lw          $v0, 0x188($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X188);
    // 0x45006C48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x45006C4C: bne         $v0, $at, L_45006CBC
    if (ctx->r2 != ctx->r1) {
        // 0x45006C50: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_45006CBC;
    }
    // 0x45006C50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x45006C54: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45006C58: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x45006C5C: jal         0x450006C4
    // 0x45006C60: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45006C60: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x45006C64: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x45006C68: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45006C6C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x45006C70: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x45006C74: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x45006C78: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x45006C7C: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x45006C80: lwc1        $f10, 0x208($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X208);
    // 0x45006C84: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x45006C88: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x45006C8C: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x45006C90: nop

    // 0x45006C94: bc1f        L_45006CA4
    if (!c1cs) {
        // 0x45006C98: nop
    
            goto L_45006CA4;
    }
    // 0x45006C98: nop

    // 0x45006C9C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x45006CA0: sw          $zero, 0x188($s0)
    MEM_W(0X188, ctx->r16) = 0;
L_45006CA4:
    // 0x45006CA4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x45006CA8: jal         0x450006C4
    // 0x45006CAC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x45006CAC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x45006CB0: lw          $v0, 0x188($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X188);
    // 0x45006CB4: b           L_45006D48
    // 0x45006CB8: nop

        goto L_45006D48;
    // 0x45006CB8: nop

L_45006CBC:
    // 0x45006CBC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x45006CC0: bne         $v0, $at, L_45006D2C
    if (ctx->r2 != ctx->r1) {
        // 0x45006CC4: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_45006D2C;
    }
    // 0x45006CC4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x45006CC8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x45006CCC: jal         0x450006C4
    // 0x45006CD0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_2;
    // 0x45006CD0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x45006CD4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x45006CD8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x45006CDC: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x45006CE0: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x45006CE4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x45006CE8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x45006CEC: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x45006CF0: lwc1        $f10, 0x208($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X208);
    // 0x45006CF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x45006CF8: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x45006CFC: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x45006D00: nop

    // 0x45006D04: bc1f        L_45006D14
    if (!c1cs) {
        // 0x45006D08: nop
    
            goto L_45006D14;
    }
    // 0x45006D08: nop

    // 0x45006D0C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x45006D10: sw          $zero, 0x188($s0)
    MEM_W(0X188, ctx->r16) = 0;
L_45006D14:
    // 0x45006D14: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x45006D18: jal         0x450006C4
    // 0x45006D1C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_3;
    // 0x45006D1C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x45006D20: lw          $v0, 0x188($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X188);
    // 0x45006D24: b           L_45006D48
    // 0x45006D28: nop

        goto L_45006D48;
    // 0x45006D28: nop

L_45006D2C:
    // 0x45006D2C: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x45006D30: bne         $at, $zero, L_45006D48
    if (ctx->r1 != 0) {
        // 0x45006D34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_45006D48;
    }
    // 0x45006D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45006D38: jal         0x450018D8
    // 0x45006D3C: lui         $a1, 0xC080
    ctx->r5 = S32(0XC080 << 16);
    ovl_mobj_main_18D8(rdram, ctx);
        goto after_4;
    // 0x45006D3C: lui         $a1, 0xC080
    ctx->r5 = S32(0XC080 << 16);
    after_4:
    // 0x45006D40: lw          $v0, 0x188($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X188);
    // 0x45006D44: nop

L_45006D48:
    // 0x45006D48: bne         $v0, $zero, L_45006D60
    if (ctx->r2 != 0) {
        // 0x45006D4C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_45006D60;
    }
    // 0x45006D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45006D50: jal         0x45000F80
    // 0x45006D54: addiu       $a1, $zero, 0x136
    ctx->r5 = ADD32(0, 0X136);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_5;
    // 0x45006D54: addiu       $a1, $zero, 0x136
    ctx->r5 = ADD32(0, 0X136);
    after_5:
    // 0x45006D58: jal         0x45005C10
    // 0x45006D5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_5C10(rdram, ctx);
        goto after_6;
    // 0x45006D5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_45006D60:
    // 0x45006D60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x45006D64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x45006D68: jr          $ra
    // 0x45006D6C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x45006D6C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_mobj_main_6D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006D70: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45006D74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006D78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006D7C: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x45006D80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45006D84: jal         0x4500640C
    // 0x45006D88: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_640C(rdram, ctx);
        goto after_0;
    // 0x45006D88: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x45006D8C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45006D90: jal         0x45005D34
    // 0x45006D94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_1;
    // 0x45006D94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x45006D98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006D9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006DA0: jr          $ra
    // 0x45006DA4: nop

    return;
    // 0x45006DA4: nop

;}
RECOMP_FUNC void ovl_mobj_main_6DA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006DA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006DAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006DB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45006DB4: lui         $a1, 0x4296
    ctx->r5 = S32(0X4296 << 16);
    // 0x45006DB8: jal         0x450063D0
    // 0x45006DBC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_mobj_main_63D0(rdram, ctx);
        goto after_0;
    // 0x45006DBC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x45006DC0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45006DC4: jal         0x45005D34
    // 0x45006DC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_1;
    // 0x45006DC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x45006DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006DD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006DD4: jr          $ra
    // 0x45006DD8: nop

    return;
    // 0x45006DD8: nop

;}
RECOMP_FUNC void ovl_mobj_main_6DDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006DDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006DE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006DE4: lw          $t6, 0x188($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X188);
    // 0x45006DE8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x45006DEC: addiu       $v0, $t6, 0x1
    ctx->r2 = ADD32(ctx->r14, 0X1);
    // 0x45006DF0: bne         $v0, $at, L_45006E08
    if (ctx->r2 != ctx->r1) {
        // 0x45006DF4: sw          $v0, 0x188($a0)
        MEM_W(0X188, ctx->r4) = ctx->r2;
            goto L_45006E08;
    }
    // 0x45006DF4: sw          $v0, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r2;
    // 0x45006DF8: jal         0x45000F80
    // 0x45006DFC: addiu       $a1, $zero, 0x178
    ctx->r5 = ADD32(0, 0X178);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_0;
    // 0x45006DFC: addiu       $a1, $zero, 0x178
    ctx->r5 = ADD32(0, 0X178);
    after_0:
    // 0x45006E00: b           L_45006E58
    // 0x45006E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45006E58;
    // 0x45006E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45006E08:
    // 0x45006E08: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x45006E0C: bne         $v0, $at, L_45006E28
    if (ctx->r2 != ctx->r1) {
        // 0x45006E10: addiu       $at, $zero, 0x46
        ctx->r1 = ADD32(0, 0X46);
            goto L_45006E28;
    }
    // 0x45006E10: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
    // 0x45006E14: jal         0x45000F80
    // 0x45006E18: addiu       $a1, $zero, 0x17A
    ctx->r5 = ADD32(0, 0X17A);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_1;
    // 0x45006E18: addiu       $a1, $zero, 0x17A
    ctx->r5 = ADD32(0, 0X17A);
    after_1:
    // 0x45006E1C: b           L_45006E58
    // 0x45006E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45006E58;
    // 0x45006E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006E24: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
L_45006E28:
    // 0x45006E28: bne         $v0, $at, L_45006E44
    if (ctx->r2 != ctx->r1) {
        // 0x45006E2C: addiu       $at, $zero, 0x4B
        ctx->r1 = ADD32(0, 0X4B);
            goto L_45006E44;
    }
    // 0x45006E2C: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
    // 0x45006E30: jal         0x45000F80
    // 0x45006E34: addiu       $a1, $zero, 0x17C
    ctx->r5 = ADD32(0, 0X17C);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_2;
    // 0x45006E34: addiu       $a1, $zero, 0x17C
    ctx->r5 = ADD32(0, 0X17C);
    after_2:
    // 0x45006E38: b           L_45006E58
    // 0x45006E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45006E58;
    // 0x45006E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006E40: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
L_45006E44:
    // 0x45006E44: bne         $v0, $at, L_45006E58
    if (ctx->r2 != ctx->r1) {
        // 0x45006E48: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45006E58;
    }
    // 0x45006E48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006E4C: jal         0x45005C3C
    // 0x45006E50: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_3;
    // 0x45006E50: nop

    after_3:
    // 0x45006E54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45006E58:
    // 0x45006E58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006E5C: jr          $ra
    // 0x45006E60: nop

    return;
    // 0x45006E60: nop

;}
RECOMP_FUNC void ovl_mobj_main_6E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006E64: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45006E68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006E6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006E70: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x45006E74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45006E78: jal         0x4500640C
    // 0x45006E7C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_640C(rdram, ctx);
        goto after_0;
    // 0x45006E7C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x45006E80: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45006E84: jal         0x45005D34
    // 0x45006E88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_1;
    // 0x45006E88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x45006E8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006E90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006E94: jr          $ra
    // 0x45006E98: nop

    return;
    // 0x45006E98: nop

;}
RECOMP_FUNC void ovl_mobj_main_6E9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006E9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006EA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006EA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45006EA8: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x45006EAC: jal         0x450063D0
    // 0x45006EB0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_mobj_main_63D0(rdram, ctx);
        goto after_0;
    // 0x45006EB0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x45006EB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45006EB8: jal         0x45005D34
    // 0x45006EBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_1;
    // 0x45006EBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x45006EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006EC8: jr          $ra
    // 0x45006ECC: nop

    return;
    // 0x45006ECC: nop

;}
RECOMP_FUNC void ovl_mobj_main_6ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006ED0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006ED4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006ED8: lw          $t6, 0x188($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X188);
    // 0x45006EDC: lw          $t8, 0x184($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X184);
    // 0x45006EE0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x45006EE4: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x45006EE8: bne         $t9, $zero, L_45006F04
    if (ctx->r25 != 0) {
        // 0x45006EEC: sw          $t7, 0x188($a0)
        MEM_W(0X188, ctx->r4) = ctx->r15;
            goto L_45006F04;
    }
    // 0x45006EEC: sw          $t7, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r15;
    // 0x45006EF0: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x45006EF4: bne         $t7, $at, L_45006F08
    if (ctx->r15 != ctx->r1) {
        // 0x45006EF8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45006F08;
    }
    // 0x45006EF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006EFC: jal         0x45005C3C
    // 0x45006F00: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_0;
    // 0x45006F00: nop

    after_0:
L_45006F04:
    // 0x45006F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45006F08:
    // 0x45006F08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006F0C: jr          $ra
    // 0x45006F10: nop

    return;
    // 0x45006F10: nop

;}
RECOMP_FUNC void ovl_mobj_main_6F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006F14: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45006F18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006F1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006F20: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x45006F24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45006F28: jal         0x4500640C
    // 0x45006F2C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_640C(rdram, ctx);
        goto after_0;
    // 0x45006F2C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x45006F30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45006F34: jal         0x45005D34
    // 0x45006F38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_1;
    // 0x45006F38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x45006F3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006F40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006F44: jr          $ra
    // 0x45006F48: nop

    return;
    // 0x45006F48: nop

;}
RECOMP_FUNC void ovl_mobj_main_6F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006F4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006F50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006F54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45006F58: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x45006F5C: jal         0x450063D0
    // 0x45006F60: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_mobj_main_63D0(rdram, ctx);
        goto after_0;
    // 0x45006F60: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x45006F64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45006F68: jal         0x45005D34
    // 0x45006F6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_1;
    // 0x45006F6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x45006F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006F74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45006F78: jr          $ra
    // 0x45006F7C: nop

    return;
    // 0x45006F7C: nop

;}
RECOMP_FUNC void ovl_mobj_main_6F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45006F80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45006F84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45006F88: lw          $t6, 0x188($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X188);
    // 0x45006F8C: lw          $t8, 0x184($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X184);
    // 0x45006F90: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x45006F94: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x45006F98: sw          $t7, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r15;
    // 0x45006F9C: bne         $t9, $zero, L_45007020
    if (ctx->r25 != 0) {
        // 0x45006FA0: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_45007020;
    }
    // 0x45006FA0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x45006FA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x45006FA8: bne         $t7, $at, L_45006FF0
    if (ctx->r15 != ctx->r1) {
        // 0x45006FAC: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_45006FF0;
    }
    // 0x45006FAC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x45006FB0: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x45006FB4: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x45006FB8: bne         $v0, $at, L_45006FD4
    if (ctx->r2 != ctx->r1) {
        // 0x45006FBC: addiu       $at, $zero, 0x2A
        ctx->r1 = ADD32(0, 0X2A);
            goto L_45006FD4;
    }
    // 0x45006FBC: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x45006FC0: jal         0x45000F80
    // 0x45006FC4: addiu       $a1, $zero, 0x145
    ctx->r5 = ADD32(0, 0X145);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_0;
    // 0x45006FC4: addiu       $a1, $zero, 0x145
    ctx->r5 = ADD32(0, 0X145);
    after_0:
    // 0x45006FC8: b           L_45007024
    // 0x45006FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45007024;
    // 0x45006FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006FD0: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
L_45006FD4:
    // 0x45006FD4: bne         $v0, $at, L_45007024
    if (ctx->r2 != ctx->r1) {
        // 0x45006FD8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45007024;
    }
    // 0x45006FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006FDC: jal         0x45000F80
    // 0x45006FE0: addiu       $a1, $zero, 0x13A
    ctx->r5 = ADD32(0, 0X13A);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_1;
    // 0x45006FE0: addiu       $a1, $zero, 0x13A
    ctx->r5 = ADD32(0, 0X13A);
    after_1:
    // 0x45006FE4: b           L_45007024
    // 0x45006FE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45007024;
    // 0x45006FE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006FEC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
L_45006FF0:
    // 0x45006FF0: bne         $v0, $at, L_45007024
    if (ctx->r2 != ctx->r1) {
        // 0x45006FF4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45007024;
    }
    // 0x45006FF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45006FF8: lw          $t0, 0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC);
    // 0x45006FFC: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x45007000: bne         $t0, $at, L_45007018
    if (ctx->r8 != ctx->r1) {
        // 0x45007004: addiu       $a1, $zero, 0x13F
        ctx->r5 = ADD32(0, 0X13F);
            goto L_45007018;
    }
    // 0x45007004: addiu       $a1, $zero, 0x13F
    ctx->r5 = ADD32(0, 0X13F);
    // 0x45007008: jal         0x45000F80
    // 0x4500700C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_F80(rdram, ctx);
        goto after_2;
    // 0x4500700C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x45007010: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45007014: nop

L_45007018:
    // 0x45007018: jal         0x45005C3C
    // 0x4500701C: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_3;
    // 0x4500701C: nop

    after_3:
L_45007020:
    // 0x45007020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45007024:
    // 0x45007024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45007028: jr          $ra
    // 0x4500702C: nop

    return;
    // 0x4500702C: nop

;}
RECOMP_FUNC void ovl_mobj_main_7030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45007030: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45007034: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45007038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500703C: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x45007040: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45007044: jal         0x4500640C
    // 0x45007048: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_640C(rdram, ctx);
        goto after_0;
    // 0x45007048: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x4500704C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45007050: jal         0x45005D34
    // 0x45007054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_1;
    // 0x45007054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x45007058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500705C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45007060: jr          $ra
    // 0x45007064: nop

    return;
    // 0x45007064: nop

;}
RECOMP_FUNC void ovl_mobj_main_7068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45007068: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500706C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45007070: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45007074: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x45007078: jal         0x450063D0
    // 0x4500707C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_mobj_main_63D0(rdram, ctx);
        goto after_0;
    // 0x4500707C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x45007080: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45007084: jal         0x45005D34
    // 0x45007088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_1;
    // 0x45007088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x4500708C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45007090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45007094: jr          $ra
    // 0x45007098: nop

    return;
    // 0x45007098: nop

;}
RECOMP_FUNC void ovl_mobj_main_709C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500709C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450070A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450070A4: lw          $t6, 0x188($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X188);
    // 0x450070A8: lw          $t8, 0x184($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X184);
    // 0x450070AC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x450070B0: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x450070B4: bne         $t9, $zero, L_450070D8
    if (ctx->r25 != 0) {
        // 0x450070B8: sw          $t7, 0x188($a0)
        MEM_W(0X188, ctx->r4) = ctx->r15;
            goto L_450070D8;
    }
    // 0x450070B8: sw          $t7, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r15;
    // 0x450070BC: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x450070C0: bne         $t7, $at, L_450070E4
    if (ctx->r15 != ctx->r1) {
        // 0x450070C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_450070E4;
    }
    // 0x450070C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450070C8: jal         0x45005C3C
    // 0x450070CC: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_0;
    // 0x450070CC: nop

    after_0:
    // 0x450070D0: b           L_450070E4
    // 0x450070D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_450070E4;
    // 0x450070D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_450070D8:
    // 0x450070D8: jal         0x45005C3C
    // 0x450070DC: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_1;
    // 0x450070DC: nop

    after_1:
    // 0x450070E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_450070E4:
    // 0x450070E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450070E8: jr          $ra
    // 0x450070EC: nop

    return;
    // 0x450070EC: nop

;}
RECOMP_FUNC void ovl_mobj_main_70F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450070F0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x450070F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x450070F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x450070FC: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x45007100: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x45007104: andi        $t6, $v0, 0x20
    ctx->r14 = ctx->r2 & 0X20;
    // 0x45007108: beq         $t6, $zero, L_45007124
    if (ctx->r14 == 0) {
        // 0x4500710C: addiu       $a1, $zero, 0x2C
        ctx->r5 = ADD32(0, 0X2C);
            goto L_45007124;
    }
    // 0x4500710C: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x45007110: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45007114: jal         0x450006C4
    // 0x45007118: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45007118: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x4500711C: lw          $v0, 0x184($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X184);
    // 0x45007120: nop

L_45007124:
    // 0x45007124: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x45007128: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x4500712C: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x45007130: addiu       $at, $zero, 0xA7
    ctx->r1 = ADD32(0, 0XA7);
    // 0x45007134: bne         $v1, $at, L_45007164
    if (ctx->r3 != ctx->r1) {
        // 0x45007138: sw          $t7, 0x184($s0)
        MEM_W(0X184, ctx->r16) = ctx->r15;
            goto L_45007164;
    }
    // 0x45007138: sw          $t7, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r15;
    // 0x4500713C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45007140: jal         0x450057BC
    // 0x45007144: addiu       $a1, $zero, 0x37A
    ctx->r5 = ADD32(0, 0X37A);
    ovl_mobj_main_57BC(rdram, ctx);
        goto after_1;
    // 0x45007144: addiu       $a1, $zero, 0x37A
    ctx->r5 = ADD32(0, 0X37A);
    after_1:
    // 0x45007148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500714C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x45007150: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x45007154: jal         0x45005B24
    // 0x45007158: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_2;
    // 0x45007158: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x4500715C: b           L_4500717C
    // 0x45007160: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4500717C;
    // 0x45007160: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_45007164:
    // 0x45007164: addiu       $at, $zero, 0xA2
    ctx->r1 = ADD32(0, 0XA2);
    // 0x45007168: bne         $v1, $at, L_45007178
    if (ctx->r3 != ctx->r1) {
        // 0x4500716C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_45007178;
    }
    // 0x4500716C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45007170: jal         0x45005750
    // 0x45007174: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_mobj_main_5750(rdram, ctx);
        goto after_3;
    // 0x45007174: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
L_45007178:
    // 0x45007178: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4500717C:
    // 0x4500717C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x45007180: jr          $ra
    // 0x45007184: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x45007184: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_mobj_main_7188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45007188: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4500718C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x45007190: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x45007194: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x45007198: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4500719C: andi        $t6, $v0, 0x20
    ctx->r14 = ctx->r2 & 0X20;
    // 0x450071A0: bne         $t6, $zero, L_45007244
    if (ctx->r14 != 0) {
        // 0x450071A4: addiu       $a2, $zero, -0x1
        ctx->r6 = ADD32(0, -0X1);
            goto L_45007244;
    }
    // 0x450071A4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x450071A8: jal         0x45004454
    // 0x450071AC: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    ovl_mobj_main_4454(rdram, ctx);
        goto after_0;
    // 0x450071AC: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_0:
    // 0x450071B0: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x450071B4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x450071B8: addiu       $at, $zero, 0xA2
    ctx->r1 = ADD32(0, 0XA2);
    // 0x450071BC: beq         $v0, $at, L_45007200
    if (ctx->r2 == ctx->r1) {
        // 0x450071C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_45007200;
    }
    // 0x450071C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x450071C4: addiu       $at, $zero, 0xA7
    ctx->r1 = ADD32(0, 0XA7);
    // 0x450071C8: beq         $v0, $at, L_450071E8
    if (ctx->r2 == ctx->r1) {
        // 0x450071CC: addiu       $at, $zero, 0xBB
        ctx->r1 = ADD32(0, 0XBB);
            goto L_450071E8;
    }
    // 0x450071CC: addiu       $at, $zero, 0xBB
    ctx->r1 = ADD32(0, 0XBB);
    // 0x450071D0: beq         $v0, $at, L_450071F0
    if (ctx->r2 == ctx->r1) {
        // 0x450071D4: addiu       $at, $zero, 0xBC
        ctx->r1 = ADD32(0, 0XBC);
            goto L_450071F0;
    }
    // 0x450071D4: addiu       $at, $zero, 0xBC
    ctx->r1 = ADD32(0, 0XBC);
    // 0x450071D8: beq         $v0, $at, L_450071F8
    if (ctx->r2 == ctx->r1) {
        // 0x450071DC: nop
    
            goto L_450071F8;
    }
    // 0x450071DC: nop

    // 0x450071E0: b           L_45007218
    // 0x450071E4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_45007218;
    // 0x450071E4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_450071E8:
    // 0x450071E8: b           L_45007214
    // 0x450071EC: addiu       $a2, $zero, 0x37A
    ctx->r6 = ADD32(0, 0X37A);
        goto L_45007214;
    // 0x450071EC: addiu       $a2, $zero, 0x37A
    ctx->r6 = ADD32(0, 0X37A);
L_450071F0:
    // 0x450071F0: b           L_45007214
    // 0x450071F4: addiu       $a2, $zero, 0x365
    ctx->r6 = ADD32(0, 0X365);
        goto L_45007214;
    // 0x450071F4: addiu       $a2, $zero, 0x365
    ctx->r6 = ADD32(0, 0X365);
L_450071F8:
    // 0x450071F8: b           L_45007214
    // 0x450071FC: addiu       $a2, $zero, 0x37C
    ctx->r6 = ADD32(0, 0X37C);
        goto L_45007214;
    // 0x450071FC: addiu       $a2, $zero, 0x37C
    ctx->r6 = ADD32(0, 0X37C);
L_45007200:
    // 0x45007200: addiu       $a1, $zero, 0x389
    ctx->r5 = ADD32(0, 0X389);
    // 0x45007204: jal         0x45005750
    // 0x45007208: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    ovl_mobj_main_5750(rdram, ctx);
        goto after_1;
    // 0x45007208: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_1:
    // 0x4500720C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x45007210: nop

L_45007214:
    // 0x45007214: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_45007218:
    // 0x45007218: beq         $a2, $at, L_45007228
    if (ctx->r6 == ctx->r1) {
        // 0x4500721C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_45007228;
    }
    // 0x4500721C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45007220: jal         0x450057BC
    // 0x45007224: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    ovl_mobj_main_57BC(rdram, ctx);
        goto after_2;
    // 0x45007224: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_2:
L_45007228:
    // 0x45007228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500722C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x45007230: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x45007234: jal         0x45005B24
    // 0x45007238: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_3;
    // 0x45007238: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x4500723C: lw          $v0, 0x184($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X184);
    // 0x45007240: nop

L_45007244:
    // 0x45007244: ori         $t7, $v0, 0x20
    ctx->r15 = ctx->r2 | 0X20;
    // 0x45007248: sw          $t7, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r15;
    // 0x4500724C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x45007250: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x45007254: jr          $ra
    // 0x45007258: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x45007258: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_mobj_main_725C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500725C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45007260: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45007264: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45007268: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x4500726C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x45007270: jal         0x45005B24
    // 0x45007274: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_0;
    // 0x45007274: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x45007278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500727C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45007280: jr          $ra
    // 0x45007284: nop

    return;
    // 0x45007284: nop

;}
RECOMP_FUNC void ovl_mobj_main_7288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45007288: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500728C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45007290: lw          $t6, 0x188($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X188);
    // 0x45007294: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x45007298: addiu       $v0, $t6, 0x1
    ctx->r2 = ADD32(ctx->r14, 0X1);
    // 0x4500729C: bne         $v0, $at, L_450072B4
    if (ctx->r2 != ctx->r1) {
        // 0x450072A0: sw          $v0, 0x188($a0)
        MEM_W(0X188, ctx->r4) = ctx->r2;
            goto L_450072B4;
    }
    // 0x450072A0: sw          $v0, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r2;
    // 0x450072A4: jal         0x45000F80
    // 0x450072A8: addiu       $a1, $zero, 0x19A
    ctx->r5 = ADD32(0, 0X19A);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_0;
    // 0x450072A8: addiu       $a1, $zero, 0x19A
    ctx->r5 = ADD32(0, 0X19A);
    after_0:
    // 0x450072AC: b           L_450072E8
    // 0x450072B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_450072E8;
    // 0x450072B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_450072B4:
    // 0x450072B4: addiu       $at, $zero, 0x5F
    ctx->r1 = ADD32(0, 0X5F);
    // 0x450072B8: bne         $v0, $at, L_450072D4
    if (ctx->r2 != ctx->r1) {
        // 0x450072BC: addiu       $at, $zero, 0x78
        ctx->r1 = ADD32(0, 0X78);
            goto L_450072D4;
    }
    // 0x450072BC: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x450072C0: jal         0x45000F80
    // 0x450072C4: addiu       $a1, $zero, 0x19B
    ctx->r5 = ADD32(0, 0X19B);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_1;
    // 0x450072C4: addiu       $a1, $zero, 0x19B
    ctx->r5 = ADD32(0, 0X19B);
    after_1:
    // 0x450072C8: b           L_450072E8
    // 0x450072CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_450072E8;
    // 0x450072CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450072D0: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
L_450072D4:
    // 0x450072D4: bne         $v0, $at, L_450072E8
    if (ctx->r2 != ctx->r1) {
        // 0x450072D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_450072E8;
    }
    // 0x450072D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450072DC: jal         0x45005C3C
    // 0x450072E0: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_2;
    // 0x450072E0: nop

    after_2:
    // 0x450072E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_450072E8:
    // 0x450072E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450072EC: jr          $ra
    // 0x450072F0: nop

    return;
    // 0x450072F0: nop

;}
RECOMP_FUNC void ovl_mobj_main_72F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450072F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x450072F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x450072FC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x45007300: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x45007304: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x45007308: jal         0x450057EC
    // 0x4500730C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_57EC(rdram, ctx);
        goto after_0;
    // 0x4500730C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x45007310: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x45007314: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x45007318: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x4500731C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x45007320: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x45007324: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x45007328: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x4500732C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x45007330: jal         0x45005878
    // 0x45007334: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    ovl_mobj_main_5878(rdram, ctx);
        goto after_1;
    // 0x45007334: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_1:
    // 0x45007338: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4500733C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x45007340: jr          $ra
    // 0x45007344: nop

    return;
    // 0x45007344: nop

;}
RECOMP_FUNC void ovl_mobj_main_7348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45007348: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x4500734C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45007350: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45007354: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x45007358: jal         0x4500640C
    // 0x4500735C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    ovl_mobj_main_640C(rdram, ctx);
        goto after_0;
    // 0x4500735C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x45007360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45007364: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45007368: jr          $ra
    // 0x4500736C: nop

    return;
    // 0x4500736C: nop

;}
RECOMP_FUNC void ovl_mobj_main_7370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45007370: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45007374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45007378: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x4500737C: jal         0x450063D0
    // 0x45007380: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_mobj_main_63D0(rdram, ctx);
        goto after_0;
    // 0x45007380: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x45007384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45007388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500738C: jr          $ra
    // 0x45007390: nop

    return;
    // 0x45007390: nop

;}
RECOMP_FUNC void ovl_mobj_main_7394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45007394: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x45007398: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500739C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450073A0: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x450073A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x450073A8: jal         0x4500640C
    // 0x450073AC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_640C(rdram, ctx);
        goto after_0;
    // 0x450073AC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x450073B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x450073B4: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x450073B8: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x450073BC: ori         $at, $at, 0x7FFF
    ctx->r1 = ctx->r1 | 0X7FFF;
    // 0x450073C0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x450073C4: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x450073C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450073CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450073D0: jr          $ra
    // 0x450073D4: nop

    return;
    // 0x450073D4: nop

;}
RECOMP_FUNC void ovl_mobj_main_73D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450073D8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x450073DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450073E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450073E4: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x450073E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x450073EC: jal         0x450063D0
    // 0x450073F0: lui         $a1, 0x4188
    ctx->r5 = S32(0X4188 << 16);
    ovl_mobj_main_63D0(rdram, ctx);
        goto after_0;
    // 0x450073F0: lui         $a1, 0x4188
    ctx->r5 = S32(0X4188 << 16);
    after_0:
    // 0x450073F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x450073F8: nop

    // 0x450073FC: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45007400: nop

    // 0x45007404: ori         $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 | 0X8000;
    // 0x45007408: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500740C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45007410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45007414: jr          $ra
    // 0x45007418: nop

    return;
    // 0x45007418: nop

;}
RECOMP_FUNC void ovl_mobj_main_741C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500741C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45007420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45007424: lw          $t6, 0x188($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X188);
    // 0x45007428: lw          $v1, 0x184($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X184);
    // 0x4500742C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x45007430: andi        $t8, $v1, 0x20
    ctx->r24 = ctx->r3 & 0X20;
    // 0x45007434: sw          $t7, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r15;
    // 0x45007438: beq         $t8, $zero, L_4500745C
    if (ctx->r24 == 0) {
        // 0x4500743C: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_4500745C;
    }
    // 0x4500743C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x45007440: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x45007444: bne         $t7, $at, L_45007488
    if (ctx->r15 != ctx->r1) {
        // 0x45007448: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45007488;
    }
    // 0x45007448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500744C: jal         0x45005C3C
    // 0x45007450: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_0;
    // 0x45007450: nop

    after_0:
    // 0x45007454: b           L_45007488
    // 0x45007458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45007488;
    // 0x45007458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500745C:
    // 0x4500745C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x45007460: bne         $v0, $at, L_45007470
    if (ctx->r2 != ctx->r1) {
        // 0x45007464: ori         $t9, $v1, 0x8000
        ctx->r25 = ctx->r3 | 0X8000;
            goto L_45007470;
    }
    // 0x45007464: ori         $t9, $v1, 0x8000
    ctx->r25 = ctx->r3 | 0X8000;
    // 0x45007468: b           L_45007484
    // 0x4500746C: sw          $t9, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r25;
        goto L_45007484;
    // 0x4500746C: sw          $t9, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r25;
L_45007470:
    // 0x45007470: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x45007474: bne         $v0, $at, L_45007488
    if (ctx->r2 != ctx->r1) {
        // 0x45007478: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45007488;
    }
    // 0x45007478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500747C: jal         0x45005C3C
    // 0x45007480: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_1;
    // 0x45007480: nop

    after_1:
L_45007484:
    // 0x45007484: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45007488:
    // 0x45007488: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500748C: jr          $ra
    // 0x45007490: nop

    return;
    // 0x45007490: nop

;}
RECOMP_FUNC void ovl_mobj_main_7494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45007494: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x45007498: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x4500749C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x450074A0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x450074A4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x450074A8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x450074AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x450074B0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x450074B4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x450074B8: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x450074BC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x450074C0: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x450074C4: beq         $t7, $zero, L_450075B8
    if (ctx->r15 == 0) {
        // 0x450074C8: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_450075B8;
    }
    // 0x450074C8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x450074CC: lw          $t8, 0x228($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X228);
    // 0x450074D0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x450074D4: blez        $t8, L_450075B4
    if (SIGNED(ctx->r24) <= 0) {
        // 0x450074D8: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_450075B4;
    }
    // 0x450074D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x450074DC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x450074E0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x450074E4: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x450074E8: addiu       $s3, $sp, 0x4C
    ctx->r19 = ADD32(ctx->r29, 0X4C);
L_450074EC:
    // 0x450074EC: lw          $a0, 0x22C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X22C);
    // 0x450074F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x450074F4: beq         $s4, $a0, L_450075A0
    if (ctx->r20 == ctx->r4) {
        // 0x450074F8: nop
    
            goto L_450075A0;
    }
    // 0x450074F8: nop

    // 0x450074FC: jal         0x450006C4
    // 0x45007500: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45007500: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_0:
    // 0x45007504: bne         $v0, $zero, L_450075A0
    if (ctx->r2 != 0) {
        // 0x45007508: nop
    
            goto L_450075A0;
    }
    // 0x45007508: nop

    // 0x4500750C: lwc1        $f0, 0x204($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X204);
    // 0x45007510: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x45007514: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x45007518: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x4500751C: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x45007520: bc1f        L_45007534
    if (!c1cs) {
        // 0x45007524: nop
    
            goto L_45007534;
    }
    // 0x45007524: nop

    // 0x45007528: sub.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x4500752C: b           L_45007538
    // 0x45007530: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_45007538;
    // 0x45007530: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_45007534:
    // 0x45007534: sub.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f6.fl;
L_45007538:
    // 0x45007538: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x4500753C: nop

    // 0x45007540: bc1f        L_450075A0
    if (!c1cs) {
        // 0x45007544: nop
    
            goto L_450075A0;
    }
    // 0x45007544: nop

    // 0x45007548: lwc1        $f0, 0x20C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X20C);
    // 0x4500754C: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x45007550: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x45007554: addiu       $t9, $zero, 0x16
    ctx->r25 = ADD32(0, 0X16);
    // 0x45007558: bc1f        L_4500756C
    if (!c1cs) {
        // 0x4500755C: addiu       $v0, $s0, 0x22C
        ctx->r2 = ADD32(ctx->r16, 0X22C);
            goto L_4500756C;
    }
    // 0x4500755C: addiu       $v0, $s0, 0x22C
    ctx->r2 = ADD32(ctx->r16, 0X22C);
    // 0x45007560: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x45007564: b           L_45007570
    // 0x45007568: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_45007570;
    // 0x45007568: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_4500756C:
    // 0x4500756C: sub.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f10.fl;
L_45007570:
    // 0x45007570: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x45007574: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
    // 0x45007578: bc1f        L_450075A0
    if (!c1cs) {
        // 0x4500757C: addiu       $a1, $zero, 0x23
        ctx->r5 = ADD32(0, 0X23);
            goto L_450075A0;
    }
    // 0x4500757C: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x45007580: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x45007584: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x45007588: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x4500758C: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x45007590: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    // 0x45007594: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x45007598: jal         0x450006C4
    // 0x4500759C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x4500759C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_1:
L_450075A0:
    // 0x450075A0: lw          $t2, 0x228($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X228);
    // 0x450075A4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x450075A8: slt         $at, $s2, $t2
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x450075AC: bne         $at, $zero, L_450074EC
    if (ctx->r1 != 0) {
        // 0x450075B0: addiu       $s0, $s0, 0x18
        ctx->r16 = ADD32(ctx->r16, 0X18);
            goto L_450074EC;
    }
    // 0x450075B0: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
L_450075B4:
    // 0x450075B4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_450075B8:
    // 0x450075B8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x450075BC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x450075C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x450075C4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x450075C8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x450075CC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x450075D0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x450075D4: jr          $ra
    // 0x450075D8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x450075D8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_mobj_main_75DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450075DC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x450075E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450075E4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x450075E8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x450075EC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x450075F0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x450075F4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x450075F8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x450075FC: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x45007600: jal         0x450006C4
    // 0x45007604: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45007604: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x45007608: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x4500760C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x45007610: beq         $a1, $at, L_45007628
    if (ctx->r5 == ctx->r1) {
        // 0x45007614: lw          $t8, 0x3C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X3C);
            goto L_45007628;
    }
    // 0x45007614: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x45007618: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x4500761C: jal         0x450057BC
    // 0x45007620: nop

    ovl_mobj_main_57BC(rdram, ctx);
        goto after_1;
    // 0x45007620: nop

    after_1:
    // 0x45007624: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
L_45007628:
    // 0x45007628: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x4500762C: beq         $t8, $zero, L_4500764C
    if (ctx->r24 == 0) {
        // 0x45007630: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4500764C;
    }
    // 0x45007630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45007634: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x45007638: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x4500763C: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x45007640: jal         0x45005B24
    // 0x45007644: nop

    ovl_mobj_main_5B24(rdram, ctx);
        goto after_2;
    // 0x45007644: nop

    after_2:
    // 0x45007648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500764C:
    // 0x4500764C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x45007650: jr          $ra
    // 0x45007654: nop

    return;
    // 0x45007654: nop

;}
RECOMP_FUNC void ovl_mobj_main_7658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45007658: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4500765C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x45007660: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45007664: addiu       $a1, $zero, 0x315
    ctx->r5 = ADD32(0, 0X315);
    // 0x45007668: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x4500766C: beq         $t7, $zero, L_450076B4
    if (ctx->r15 == 0) {
        // 0x45007670: addiu       $a2, $zero, 0x316
        ctx->r6 = ADD32(0, 0X316);
            goto L_450076B4;
    }
    // 0x45007670: addiu       $a2, $zero, 0x316
    ctx->r6 = ADD32(0, 0X316);
    // 0x45007674: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x45007678: addiu       $a1, $zero, 0x314
    ctx->r5 = ADD32(0, 0X314);
    // 0x4500767C: addiu       $a2, $zero, 0x314
    ctx->r6 = ADD32(0, 0X314);
    // 0x45007680: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x45007684: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x45007688: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x4500768C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x45007690: jal         0x450075DC
    // 0x45007694: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_0;
    // 0x45007694: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x45007698: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x4500769C: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x450076A0: lw          $t8, 0x184($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X184);
    // 0x450076A4: ori         $at, $at, 0x7FFF
    ctx->r1 = ctx->r1 | 0X7FFF;
    // 0x450076A8: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x450076AC: b           L_450076F4
    // 0x450076B0: sw          $t9, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r25;
        goto L_450076F4;
    // 0x450076B0: sw          $t9, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r25;
L_450076B4:
    // 0x450076B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x450076B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x450076BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x450076C0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x450076C4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x450076C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x450076CC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x450076D0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x450076D4: jal         0x450075DC
    // 0x450076D8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_1;
    // 0x450076D8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x450076DC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x450076E0: nop

    // 0x450076E4: lw          $t1, 0x184($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X184);
    // 0x450076E8: nop

    // 0x450076EC: ori         $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 | 0X8000;
    // 0x450076F0: sw          $t2, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r10;
L_450076F4:
    // 0x450076F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x450076F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x450076FC: jr          $ra
    // 0x45007700: nop

    return;
    // 0x45007700: nop

;}
RECOMP_FUNC void ovl_mobj_main_7704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45007704: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45007708: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500770C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45007710: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x45007714: lw          $t7, 0x184($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X184);
    // 0x45007718: nop

    // 0x4500771C: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x45007720: beq         $t8, $zero, L_45007730
    if (ctx->r24 == 0) {
        // 0x45007724: nop
    
            goto L_45007730;
    }
    // 0x45007724: nop

    // 0x45007728: jal         0x45007658
    // 0x4500772C: nop

    ovl_mobj_main_7658(rdram, ctx);
        goto after_0;
    // 0x4500772C: nop

    after_0:
L_45007730:
    // 0x45007730: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45007734: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x45007738: jal         0x4500640C
    // 0x4500773C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_640C(rdram, ctx);
        goto after_1;
    // 0x4500773C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x45007740: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45007744: jal         0x45005D34
    // 0x45007748: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_2;
    // 0x45007748: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x4500774C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45007750: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45007754: jr          $ra
    // 0x45007758: nop

    return;
    // 0x45007758: nop

;}
RECOMP_FUNC void ovl_mobj_main_775C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500775C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45007760: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45007764: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45007768: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4500776C: lw          $t7, 0x184($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X184);
    // 0x45007770: nop

    // 0x45007774: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x45007778: beq         $t8, $zero, L_45007788
    if (ctx->r24 == 0) {
        // 0x4500777C: nop
    
            goto L_45007788;
    }
    // 0x4500777C: nop

    // 0x45007780: jal         0x45007658
    // 0x45007784: nop

    ovl_mobj_main_7658(rdram, ctx);
        goto after_0;
    // 0x45007784: nop

    after_0:
L_45007788:
    // 0x45007788: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500778C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x45007790: jal         0x450063D0
    // 0x45007794: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    ovl_mobj_main_63D0(rdram, ctx);
        goto after_1;
    // 0x45007794: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_1:
    // 0x45007798: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500779C: jal         0x45005D34
    // 0x450077A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_2;
    // 0x450077A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x450077A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450077A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450077AC: jr          $ra
    // 0x450077B0: nop

    return;
    // 0x450077B0: nop

;}
RECOMP_FUNC void ovl_mobj_main_77B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450077B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450077B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450077BC: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x450077C0: nop

    // 0x450077C4: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x450077C8: bne         $t7, $zero, L_450077E0
    if (ctx->r15 != 0) {
        // 0x450077CC: nop
    
            goto L_450077E0;
    }
    // 0x450077CC: nop

    // 0x450077D0: jal         0x45007658
    // 0x450077D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_7658(rdram, ctx);
        goto after_0;
    // 0x450077D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x450077D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x450077DC: nop

L_450077E0:
    // 0x450077E0: jal         0x45005D34
    // 0x450077E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_1;
    // 0x450077E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x450077E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450077EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450077F0: jr          $ra
    // 0x450077F4: nop

    return;
    // 0x450077F4: nop

;}
RECOMP_FUNC void ovl_mobj_main_77F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450077F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450077FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45007800: lw          $t6, 0x188($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X188);
    // 0x45007804: lw          $t8, 0x184($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X184);
    // 0x45007808: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x4500780C: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x45007810: sw          $t7, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r15;
    // 0x45007814: beq         $t9, $zero, L_45007854
    if (ctx->r25 == 0) {
        // 0x45007818: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_45007854;
    }
    // 0x45007818: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x4500781C: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x45007820: bne         $t7, $at, L_4500783C
    if (ctx->r15 != ctx->r1) {
        // 0x45007824: addiu       $at, $zero, 0x3C
        ctx->r1 = ADD32(0, 0X3C);
            goto L_4500783C;
    }
    // 0x45007824: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x45007828: jal         0x45000FA0
    // 0x4500782C: addiu       $a1, $zero, 0xDD
    ctx->r5 = ADD32(0, 0XDD);
    ovl_mobj_main_FA0(rdram, ctx);
        goto after_0;
    // 0x4500782C: addiu       $a1, $zero, 0xDD
    ctx->r5 = ADD32(0, 0XDD);
    after_0:
    // 0x45007830: b           L_45007888
    // 0x45007834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45007888;
    // 0x45007834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45007838: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
L_4500783C:
    // 0x4500783C: bne         $v0, $at, L_45007888
    if (ctx->r2 != ctx->r1) {
        // 0x45007840: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45007888;
    }
    // 0x45007840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45007844: jal         0x45005C3C
    // 0x45007848: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_1;
    // 0x45007848: nop

    after_1:
    // 0x4500784C: b           L_45007888
    // 0x45007850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45007888;
    // 0x45007850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45007854:
    // 0x45007854: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x45007858: bne         $v0, $at, L_45007874
    if (ctx->r2 != ctx->r1) {
        // 0x4500785C: addiu       $at, $zero, 0x1D
        ctx->r1 = ADD32(0, 0X1D);
            goto L_45007874;
    }
    // 0x4500785C: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x45007860: jal         0x45000FA0
    // 0x45007864: addiu       $a1, $zero, 0xDD
    ctx->r5 = ADD32(0, 0XDD);
    ovl_mobj_main_FA0(rdram, ctx);
        goto after_2;
    // 0x45007864: addiu       $a1, $zero, 0xDD
    ctx->r5 = ADD32(0, 0XDD);
    after_2:
    // 0x45007868: b           L_45007888
    // 0x4500786C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45007888;
    // 0x4500786C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45007870: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
L_45007874:
    // 0x45007874: bne         $v0, $at, L_45007888
    if (ctx->r2 != ctx->r1) {
        // 0x45007878: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45007888;
    }
    // 0x45007878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500787C: jal         0x45005C3C
    // 0x45007880: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_3;
    // 0x45007880: nop

    after_3:
    // 0x45007884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45007888:
    // 0x45007888: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500788C: jr          $ra
    // 0x45007890: nop

    return;
    // 0x45007890: nop

;}
RECOMP_FUNC void ovl_mobj_main_7894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45007894: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x45007898: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4500789C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x450078A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x450078A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x450078A8: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x450078AC: beq         $a1, $zero, L_450078C8
    if (ctx->r5 == 0) {
        // 0x450078B0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_450078C8;
    }
    // 0x450078B0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x450078B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x450078B8: beq         $a1, $at, L_45007930
    if (ctx->r5 == ctx->r1) {
        // 0x450078BC: addiu       $a2, $sp, 0x34
        ctx->r6 = ADD32(ctx->r29, 0X34);
            goto L_45007930;
    }
    // 0x450078BC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x450078C0: b           L_45007AC0
    // 0x450078C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_45007AC0;
    // 0x450078C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_450078C8:
    // 0x450078C8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x450078CC: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x450078D0: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x450078D4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x450078D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x450078DC: jal         0x45005680
    // 0x450078E0: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    ovl_mobj_main_5680(rdram, ctx);
        goto after_0;
    // 0x450078E0: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_0:
    // 0x450078E4: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x450078E8: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x450078EC: lwc1        $f9, 0x21C8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X21C8);
    // 0x450078F0: lwc1        $f8, 0x21CC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X21CC);
    // 0x450078F4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x450078F8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x450078FC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x45007900: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x45007904: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    // 0x45007908: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
    // 0x4500790C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x45007910: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x45007914: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x45007918: lw          $a1, 0x1CC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1CC);
    // 0x4500791C: jal         0x45000F34
    // 0x45007920: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_1;
    // 0x45007920: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x45007924: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x45007928: b           L_45007AC0
    // 0x4500792C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_45007AC0;
    // 0x4500792C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_45007930:
    // 0x45007930: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x45007934: swc1        $f12, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f12.u32l;
    // 0x45007938: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x4500793C: jal         0x450006C4
    // 0x45007940: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_2;
    // 0x45007940: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x45007944: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x45007948: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    // 0x4500794C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x45007950: sub.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x45007954: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x45007958: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x4500795C: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x45007960: bc1f        L_4500798C
    if (!c1cs) {
        // 0x45007964: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_4500798C;
    }
    // 0x45007964: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x45007968: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x4500796C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x45007970: bc1f        L_4500798C
    if (!c1cs) {
        // 0x45007974: swc1        $f0, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
            goto L_4500798C;
    }
    // 0x45007974: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x45007978: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x4500797C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x45007980: nop

    // 0x45007984: add.s       $f0, $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x45007988: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
L_4500798C:
    // 0x4500798C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x45007990: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x45007994: jal         0x450006C4
    // 0x45007998: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_3;
    // 0x45007998: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_3:
    // 0x4500799C: lw          $a1, 0x1CC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1CC);
    // 0x450079A0: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x450079A4: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x450079A8: jal         0x45000F34
    // 0x450079AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_4;
    // 0x450079AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x450079B0: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x450079B4: lwc1        $f15, 0x21D0($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, 0X21D0);
    // 0x450079B8: lwc1        $f14, 0x21D4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X21D4);
    // 0x450079BC: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x450079C0: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x450079C4: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x450079C8: mul.d       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f14.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f14.d);
    // 0x450079CC: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x450079D0: lwc1        $f9, 0x21D8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X21D8);
    // 0x450079D4: lwc1        $f8, 0x21DC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X21DC);
    // 0x450079D8: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x450079DC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x450079E0: mul.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x450079E4: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    // 0x450079E8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x450079EC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x450079F0: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x450079F4: sub.d       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f0.d - ctx->f18.d;
    // 0x450079F8: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x450079FC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x45007A00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x45007A04: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x45007A08: lw          $t6, 0x184($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X184);
    // 0x45007A0C: nop

    // 0x45007A10: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x45007A14: bne         $t7, $zero, L_45007A34
    if (ctx->r15 != 0) {
        // 0x45007A18: nop
    
            goto L_45007A34;
    }
    // 0x45007A18: nop

    // 0x45007A1C: c.le.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
    // 0x45007A20: ori         $t8, $v1, 0x2
    ctx->r24 = ctx->r3 | 0X2;
    // 0x45007A24: bc1f        L_45007A78
    if (!c1cs) {
        // 0x45007A28: nop
    
            goto L_45007A78;
    }
    // 0x45007A28: nop

    // 0x45007A2C: b           L_45007A78
    // 0x45007A30: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_45007A78;
    // 0x45007A30: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_45007A34:
    // 0x45007A34: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x45007A38: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x45007A3C: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x45007A40: nop

    // 0x45007A44: bc1f        L_45007A78
    if (!c1cs) {
        // 0x45007A48: nop
    
            goto L_45007A78;
    }
    // 0x45007A48: nop

    // 0x45007A4C: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x45007A50: mul.d       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f14.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f14.d);
    // 0x45007A54: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45007A58: lwc1        $f9, 0x21E0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X21E0);
    // 0x45007A5C: lwc1        $f8, 0x21E4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X21E4);
    // 0x45007A60: ori         $t9, $v1, 0x2
    ctx->r25 = ctx->r3 | 0X2;
    // 0x45007A64: c.le.d      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.d <= ctx->f8.d;
    // 0x45007A68: nop

    // 0x45007A6C: bc1f        L_45007A78
    if (!c1cs) {
        // 0x45007A70: nop
    
            goto L_45007A78;
    }
    // 0x45007A70: nop

    // 0x45007A74: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_45007A78:
    // 0x45007A78: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x45007A7C: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45007A80: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x45007A84: nop

    // 0x45007A88: bc1f        L_45007AA8
    if (!c1cs) {
        // 0x45007A8C: nop
    
            goto L_45007AA8;
    }
    // 0x45007A8C: nop

    // 0x45007A90: lwc1        $f7, 0x21E8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X21E8);
    // 0x45007A94: lwc1        $f6, 0x21EC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X21EC);
    // 0x45007A98: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x45007A9C: add.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f4.d + ctx->f6.d;
    // 0x45007AA0: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x45007AA4: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
L_45007AA8:
    // 0x45007AA8: lw          $a1, 0x1CC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1CC);
    // 0x45007AAC: jal         0x45000F34
    // 0x45007AB0: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_5;
    // 0x45007AB0: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_5:
    // 0x45007AB4: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x45007AB8: nop

    // 0x45007ABC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_45007AC0:
    // 0x45007AC0: xori        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 ^ 0X3;
    // 0x45007AC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x45007AC8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x45007ACC: jr          $ra
    // 0x45007AD0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    return;
    // 0x45007AD0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void ovl_mobj_main_7AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45007AD4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x45007AD8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x45007ADC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x45007AE0: sltiu       $at, $a1, 0x1A
    ctx->r1 = ctx->r5 < 0X1A ? 1 : 0;
    // 0x45007AE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45007AE8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x45007AEC: beq         $at, $zero, L_45007D44
    if (ctx->r1 == 0) {
        // 0x45007AF0: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_45007D44;
    }
    // 0x45007AF0: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x45007AF4: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x45007AF8: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45007AFC: addu        $at, $at, $t6
    gpr jr_addend_45007B08 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x45007B00: lw          $t6, 0x21F0($at)
    ctx->r14 = ADD32(ctx->r1, 0X21F0);
    // 0x45007B04: nop

    // 0x45007B08: jr          $t6
    // 0x45007B0C: nop

    switch (jr_addend_45007B08 >> 2) {
        case 0: goto L_45007C10; break;
        case 1: goto L_45007C24; break;
        case 2: goto L_45007C3C; break;
        case 3: goto L_45007C50; break;
        case 4: goto L_45007C68; break;
        case 5: goto L_45007C7C; break;
        case 6: goto L_45007C94; break;
        case 7: goto L_45007CA8; break;
        case 8: goto L_45007CC0; break;
        case 9: goto L_45007CD4; break;
        case 10: goto L_45007CEC; break;
        case 11: goto L_45007D00; break;
        case 12: goto L_45007B10; break;
        case 13: goto L_45007B1C; break;
        case 14: goto L_45007B34; break;
        case 15: goto L_45007B48; break;
        case 16: goto L_45007B60; break;
        case 17: goto L_45007B74; break;
        case 18: goto L_45007B8C; break;
        case 19: goto L_45007BA0; break;
        case 20: goto L_45007BB8; break;
        case 21: goto L_45007BCC; break;
        case 22: goto L_45007BE4; break;
        case 23: goto L_45007BF8; break;
        case 24: goto L_45007D18; break;
        case 25: goto L_45007D30; break;
        default: switch_error(__func__, 0x45007B08, 0x450121F0);
    }
    // 0x45007B0C: nop

L_45007B10:
    // 0x45007B10: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x45007B14: b           L_45007D44
    // 0x45007B18: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
        goto L_45007D44;
    // 0x45007B18: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
L_45007B1C:
    // 0x45007B1C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x45007B20: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x45007B24: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45007B28: lwc1        $f0, 0x2258($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2258);
    // 0x45007B2C: b           L_45007D44
    // 0x45007B30: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
        goto L_45007D44;
    // 0x45007B30: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
L_45007B34:
    // 0x45007B34: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x45007B38: lui         $at, 0x43A5
    ctx->r1 = S32(0X43A5 << 16);
    // 0x45007B3C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45007B40: b           L_45007D44
    // 0x45007B44: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
        goto L_45007D44;
    // 0x45007B44: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
L_45007B48:
    // 0x45007B48: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x45007B4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45007B50: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45007B54: lwc1        $f0, 0x225C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X225C);
    // 0x45007B58: b           L_45007D44
    // 0x45007B5C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
        goto L_45007D44;
    // 0x45007B5C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
L_45007B60:
    // 0x45007B60: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x45007B64: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x45007B68: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45007B6C: b           L_45007D44
    // 0x45007B70: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
        goto L_45007D44;
    // 0x45007B70: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
L_45007B74:
    // 0x45007B74: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x45007B78: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x45007B7C: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45007B80: lwc1        $f0, 0x2260($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2260);
    // 0x45007B84: b           L_45007D44
    // 0x45007B88: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
        goto L_45007D44;
    // 0x45007B88: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
L_45007B8C:
    // 0x45007B8C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x45007B90: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x45007B94: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45007B98: b           L_45007D44
    // 0x45007B9C: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
        goto L_45007D44;
    // 0x45007B9C: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
L_45007BA0:
    // 0x45007BA0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x45007BA4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x45007BA8: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x45007BAC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45007BB0: b           L_45007D44
    // 0x45007BB4: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
        goto L_45007D44;
    // 0x45007BB4: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
L_45007BB8:
    // 0x45007BB8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x45007BBC: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x45007BC0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45007BC4: b           L_45007D44
    // 0x45007BC8: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
        goto L_45007D44;
    // 0x45007BC8: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
L_45007BCC:
    // 0x45007BCC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x45007BD0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x45007BD4: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x45007BD8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45007BDC: b           L_45007D44
    // 0x45007BE0: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
        goto L_45007D44;
    // 0x45007BE0: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
L_45007BE4:
    // 0x45007BE4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x45007BE8: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x45007BEC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45007BF0: b           L_45007D44
    // 0x45007BF4: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
        goto L_45007D44;
    // 0x45007BF4: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
L_45007BF8:
    // 0x45007BF8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x45007BFC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x45007C00: lui         $at, 0x4343
    ctx->r1 = S32(0X4343 << 16);
    // 0x45007C04: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45007C08: b           L_45007D44
    // 0x45007C0C: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
        goto L_45007D44;
    // 0x45007C0C: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
L_45007C10:
    // 0x45007C10: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x45007C14: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x45007C18: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45007C1C: b           L_45007D44
    // 0x45007C20: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
        goto L_45007D44;
    // 0x45007C20: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
L_45007C24:
    // 0x45007C24: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x45007C28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x45007C2C: lui         $at, 0x4325
    ctx->r1 = S32(0X4325 << 16);
    // 0x45007C30: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45007C34: b           L_45007D44
    // 0x45007C38: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
        goto L_45007D44;
    // 0x45007C38: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
L_45007C3C:
    // 0x45007C3C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x45007C40: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x45007C44: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45007C48: b           L_45007D44
    // 0x45007C4C: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
        goto L_45007D44;
    // 0x45007C4C: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
L_45007C50:
    // 0x45007C50: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x45007C54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45007C58: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
    // 0x45007C5C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45007C60: b           L_45007D44
    // 0x45007C64: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
        goto L_45007D44;
    // 0x45007C64: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
L_45007C68:
    // 0x45007C68: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x45007C6C: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x45007C70: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45007C74: b           L_45007D44
    // 0x45007C78: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
        goto L_45007D44;
    // 0x45007C78: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
L_45007C7C:
    // 0x45007C7C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x45007C80: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x45007C84: lui         $at, 0x42D2
    ctx->r1 = S32(0X42D2 << 16);
    // 0x45007C88: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45007C8C: b           L_45007D44
    // 0x45007C90: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
        goto L_45007D44;
    // 0x45007C90: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
L_45007C94:
    // 0x45007C94: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x45007C98: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x45007C9C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45007CA0: b           L_45007D44
    // 0x45007CA4: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
        goto L_45007D44;
    // 0x45007CA4: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
L_45007CA8:
    // 0x45007CA8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x45007CAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x45007CB0: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x45007CB4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45007CB8: b           L_45007D44
    // 0x45007CBC: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
        goto L_45007D44;
    // 0x45007CBC: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
L_45007CC0:
    // 0x45007CC0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x45007CC4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x45007CC8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45007CCC: b           L_45007D44
    // 0x45007CD0: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
        goto L_45007D44;
    // 0x45007CD0: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
L_45007CD4:
    // 0x45007CD4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x45007CD8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x45007CDC: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x45007CE0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45007CE4: b           L_45007D44
    // 0x45007CE8: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
        goto L_45007D44;
    // 0x45007CE8: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
L_45007CEC:
    // 0x45007CEC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x45007CF0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x45007CF4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45007CF8: b           L_45007D44
    // 0x45007CFC: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
        goto L_45007D44;
    // 0x45007CFC: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
L_45007D00:
    // 0x45007D00: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x45007D04: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x45007D08: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x45007D0C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45007D10: b           L_45007D44
    // 0x45007D14: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
        goto L_45007D44;
    // 0x45007D14: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
L_45007D18:
    // 0x45007D18: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x45007D1C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x45007D20: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x45007D24: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45007D28: b           L_45007D44
    // 0x45007D2C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
        goto L_45007D44;
    // 0x45007D2C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
L_45007D30:
    // 0x45007D30: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x45007D34: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45007D38: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45007D3C: lwc1        $f0, 0x2264($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2264);
    // 0x45007D40: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
L_45007D44:
    // 0x45007D44: c.eq.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl == ctx->f12.fl;
    // 0x45007D48: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x45007D4C: bc1t        L_45007D70
    if (c1cs) {
        // 0x45007D50: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_45007D70;
    }
    // 0x45007D50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x45007D54: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x45007D58: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x45007D5C: jal         0x45007894
    // 0x45007D60: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    ovl_mobj_main_7894(rdram, ctx);
        goto after_0;
    // 0x45007D60: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x45007D64: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x45007D68: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x45007D6C: nop

L_45007D70:
    // 0x45007D70: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x45007D74: bne         $v0, $at, L_45007D90
    if (ctx->r2 != ctx->r1) {
        // 0x45007D78: nop
    
            goto L_45007D90;
    }
    // 0x45007D78: nop

    // 0x45007D7C: lw          $t7, 0x184($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X184);
    // 0x45007D80: nop

    // 0x45007D84: ori         $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 | 0X8000;
    // 0x45007D88: b           L_45007DA4
    // 0x45007D8C: sw          $t8, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r24;
        goto L_45007DA4;
    // 0x45007D8C: sw          $t8, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r24;
L_45007D90:
    // 0x45007D90: lw          $t9, 0x184($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X184);
    // 0x45007D94: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x45007D98: ori         $at, $at, 0x7FFF
    ctx->r1 = ctx->r1 | 0X7FFF;
    // 0x45007D9C: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x45007DA0: sw          $t0, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r8;
L_45007DA4:
    // 0x45007DA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45007DA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x45007DAC: jr          $ra
    // 0x45007DB0: nop

    return;
    // 0x45007DB0: nop

;}
RECOMP_FUNC void ovl_mobj_main_7DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45007DB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45007DB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45007DBC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x45007DC0: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45007DC4: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    // 0x45007DC8: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x45007DCC: beq         $t7, $zero, L_45007DEC
    if (ctx->r15 == 0) {
        // 0x45007DD0: lui         $a2, 0x4501
        ctx->r6 = S32(0X4501 << 16);
            goto L_45007DEC;
    }
    // 0x45007DD0: lui         $a2, 0x4501
    ctx->r6 = S32(0X4501 << 16);
    // 0x45007DD4: addiu       $a2, $a2, 0x1AC
    ctx->r6 = ADD32(ctx->r6, 0X1AC);
    // 0x45007DD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x45007DDC: jal         0x45005A5C
    // 0x45007DE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_5A5C(rdram, ctx);
        goto after_0;
    // 0x45007DE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x45007DE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45007DE8: nop

L_45007DEC:
    // 0x45007DEC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x45007DF0: jal         0x4500640C
    // 0x45007DF4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_mobj_main_640C(rdram, ctx);
        goto after_1;
    // 0x45007DF4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x45007DF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45007DFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45007E00: jr          $ra
    // 0x45007E04: nop

    return;
    // 0x45007E04: nop

;}
RECOMP_FUNC void ovl_mobj_main_7E08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45007E08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45007E0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45007E10: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45007E14: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    // 0x45007E18: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x45007E1C: bne         $t7, $zero, L_45007E3C
    if (ctx->r15 != 0) {
        // 0x45007E20: lui         $a2, 0x4501
        ctx->r6 = S32(0X4501 << 16);
            goto L_45007E3C;
    }
    // 0x45007E20: lui         $a2, 0x4501
    ctx->r6 = S32(0X4501 << 16);
    // 0x45007E24: addiu       $a2, $a2, 0x1C0
    ctx->r6 = ADD32(ctx->r6, 0X1C0);
    // 0x45007E28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x45007E2C: jal         0x45005A5C
    // 0x45007E30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_5A5C(rdram, ctx);
        goto after_0;
    // 0x45007E30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x45007E34: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45007E38: nop

L_45007E3C:
    // 0x45007E3C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x45007E40: jal         0x450063D0
    // 0x45007E44: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_mobj_main_63D0(rdram, ctx);
        goto after_1;
    // 0x45007E44: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_1:
    // 0x45007E48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45007E4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45007E50: jr          $ra
    // 0x45007E54: nop

    return;
    // 0x45007E54: nop

;}
