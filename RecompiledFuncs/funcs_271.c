#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_mobj_main_9FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009FE0: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x45009FE4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45009FE8: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x45009FEC: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x45009FF0: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x45009FF4: jr          $ra
    // 0x45009FF8: swc1        $f4, 0x1DC($a0)
    MEM_W(0X1DC, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x45009FF8: swc1        $f4, 0x1DC($a0)
    MEM_W(0X1DC, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void ovl_mobj_main_9FFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45009FFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500A000: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500A004: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500A008: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4500A00C: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x4500A010: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500A014: jal         0x45005D34
    // 0x4500A018: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_0;
    // 0x4500A018: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4500A01C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500A020: jal         0x45005DA4
    // 0x4500A024: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_5DA4(rdram, ctx);
        goto after_1;
    // 0x4500A024: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x4500A028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500A02C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500A030: jr          $ra
    // 0x4500A034: nop

    return;
    // 0x4500A034: nop

;}
RECOMP_FUNC void ovl_mobj_main_A038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A038: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500A03C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500A040: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500A044: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x4500A048: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x4500A04C: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500A050: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4500A054: jal         0x45005D34
    // 0x4500A058: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_0;
    // 0x4500A058: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x4500A05C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500A060: jal         0x45005DA4
    // 0x4500A064: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_5DA4(rdram, ctx);
        goto after_1;
    // 0x4500A064: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x4500A068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500A06C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500A070: jr          $ra
    // 0x4500A074: nop

    return;
    // 0x4500A074: nop

;}
RECOMP_FUNC void ovl_mobj_main_A078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A078: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500A07C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4500A080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500A084: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x4500A088: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x4500A08C: jal         0x4500640C
    // 0x4500A090: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_640C(rdram, ctx);
        goto after_0;
    // 0x4500A090: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4500A094: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500A098: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x4500A09C: sw          $zero, 0x188($a0)
    MEM_W(0X188, ctx->r4) = 0;
    // 0x4500A0A0: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x4500A0A4: lui         $a2, 0x4501
    ctx->r6 = S32(0X4501 << 16);
    // 0x4500A0A8: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x4500A0AC: addiu       $a2, $a2, -0x278
    ctx->r6 = ADD32(ctx->r6, -0X278);
    // 0x4500A0B0: bc1f        L_4500A0C0
    if (!c1cs) {
        // 0x4500A0B4: addiu       $a1, $zero, 0x81
        ctx->r5 = ADD32(0, 0X81);
            goto L_4500A0C0;
    }
    // 0x4500A0B4: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    // 0x4500A0B8: jal         0x45005A5C
    // 0x4500A0BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_5A5C(rdram, ctx);
        goto after_1;
    // 0x4500A0BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_4500A0C0:
    // 0x4500A0C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500A0C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500A0C8: jr          $ra
    // 0x4500A0CC: nop

    return;
    // 0x4500A0CC: nop

;}
RECOMP_FUNC void ovl_mobj_main_A0D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A0D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500A0D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4500A0D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500A0DC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x4500A0E0: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    // 0x4500A0E4: jal         0x450063D0
    // 0x4500A0E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_63D0(rdram, ctx);
        goto after_0;
    // 0x4500A0E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4500A0EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500A0F0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x4500A0F4: sw          $zero, 0x188($a0)
    MEM_W(0X188, ctx->r4) = 0;
    // 0x4500A0F8: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x4500A0FC: lui         $a2, 0x4501
    ctx->r6 = S32(0X4501 << 16);
    // 0x4500A100: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x4500A104: addiu       $a2, $a2, -0xD4
    ctx->r6 = ADD32(ctx->r6, -0XD4);
    // 0x4500A108: bc1f        L_4500A118
    if (!c1cs) {
        // 0x4500A10C: addiu       $a1, $zero, 0x81
        ctx->r5 = ADD32(0, 0X81);
            goto L_4500A118;
    }
    // 0x4500A10C: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    // 0x4500A110: jal         0x45005A5C
    // 0x4500A114: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_5A5C(rdram, ctx);
        goto after_1;
    // 0x4500A114: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_4500A118:
    // 0x4500A118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500A11C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500A120: jr          $ra
    // 0x4500A124: nop

    return;
    // 0x4500A124: nop

;}
RECOMP_FUNC void ovl_mobj_main_A128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A128: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500A12C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500A130: lw          $v0, 0x188($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X188);
    // 0x4500A134: nop

    // 0x4500A138: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x4500A13C: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x4500A140: beq         $at, $zero, L_4500A15C
    if (ctx->r1 == 0) {
        // 0x4500A144: sw          $t6, 0x188($a0)
        MEM_W(0X188, ctx->r4) = ctx->r14;
            goto L_4500A15C;
    }
    // 0x4500A144: sw          $t6, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r14;
    // 0x4500A148: slti        $at, $v0, 0xF
    ctx->r1 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
    // 0x4500A14C: bne         $at, $zero, L_4500A160
    if (ctx->r1 != 0) {
        // 0x4500A150: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4500A160;
    }
    // 0x4500A150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500A154: jal         0x45005C3C
    // 0x4500A158: nop

    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_0;
    // 0x4500A158: nop

    after_0:
L_4500A15C:
    // 0x4500A15C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500A160:
    // 0x4500A160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500A164: jr          $ra
    // 0x4500A168: nop

    return;
    // 0x4500A168: nop

;}
RECOMP_FUNC void ovl_mobj_main_A16C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A16C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500A170: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4500A174: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x4500A178: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500A17C: lw          $a1, 0x1CC($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X1CC);
    // 0x4500A180: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x4500A184: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4500A188: jal         0x45000F34
    // 0x4500A18C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_0;
    // 0x4500A18C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x4500A190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500A194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500A198: jr          $ra
    // 0x4500A19C: nop

    return;
    // 0x4500A19C: nop

;}
RECOMP_FUNC void ovl_mobj_main_A1A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A1A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4500A1A4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x4500A1A8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x4500A1AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4500A1B0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x4500A1B4: lw          $a1, 0x1CC($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X1CC);
    // 0x4500A1B8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x4500A1BC: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x4500A1C0: jal         0x45000F34
    // 0x4500A1C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_0;
    // 0x4500A1C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x4500A1C8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x4500A1CC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x4500A1D0: lw          $a1, 0x1CC($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X1CC);
    // 0x4500A1D4: jal         0x45000F34
    // 0x4500A1D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_1;
    // 0x4500A1D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x4500A1DC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x4500A1E0: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x4500A1E4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x4500A1E8: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    // 0x4500A1EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4500A1F0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x4500A1F4: jal         0x45000F34
    // 0x4500A1F8: addiu       $a1, $a1, 0x1CC
    ctx->r5 = ADD32(ctx->r5, 0X1CC);
    ovl_mobj_main_F34(rdram, ctx);
        goto after_2;
    // 0x4500A1F8: addiu       $a1, $a1, 0x1CC
    ctx->r5 = ADD32(ctx->r5, 0X1CC);
    after_2:
    // 0x4500A1FC: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x4500A200: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x4500A204: lw          $a1, 0x1CC($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X1CC);
    // 0x4500A208: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x4500A20C: jal         0x45000F34
    // 0x4500A210: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_3;
    // 0x4500A210: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x4500A214: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4500A218: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4500A21C: jr          $ra
    // 0x4500A220: nop

    return;
    // 0x4500A220: nop

;}
RECOMP_FUNC void ovl_mobj_main_A224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A224: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500A228: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500A22C: jal         0x4500A1A0
    // 0x4500A230: addiu       $a1, $zero, 0x2C6
    ctx->r5 = ADD32(0, 0X2C6);
    ovl_mobj_main_A1A0(rdram, ctx);
        goto after_0;
    // 0x4500A230: addiu       $a1, $zero, 0x2C6
    ctx->r5 = ADD32(0, 0X2C6);
    after_0:
    // 0x4500A234: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500A238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500A23C: jr          $ra
    // 0x4500A240: nop

    return;
    // 0x4500A240: nop

;}
RECOMP_FUNC void ovl_mobj_main_A244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A244: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500A248: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500A24C: jal         0x4500A1A0
    // 0x4500A250: addiu       $a1, $zero, 0x2BE
    ctx->r5 = ADD32(0, 0X2BE);
    ovl_mobj_main_A1A0(rdram, ctx);
        goto after_0;
    // 0x4500A250: addiu       $a1, $zero, 0x2BE
    ctx->r5 = ADD32(0, 0X2BE);
    after_0:
    // 0x4500A254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500A258: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500A25C: jr          $ra
    // 0x4500A260: nop

    return;
    // 0x4500A260: nop

;}
RECOMP_FUNC void ovl_mobj_main_A264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A264: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500A268: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500A26C: jal         0x4500A1A0
    // 0x4500A270: addiu       $a1, $zero, 0x2BD
    ctx->r5 = ADD32(0, 0X2BD);
    ovl_mobj_main_A1A0(rdram, ctx);
        goto after_0;
    // 0x4500A270: addiu       $a1, $zero, 0x2BD
    ctx->r5 = ADD32(0, 0X2BD);
    after_0:
    // 0x4500A274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500A278: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500A27C: jr          $ra
    // 0x4500A280: nop

    return;
    // 0x4500A280: nop

;}
RECOMP_FUNC void ovl_mobj_main_A284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A284: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500A288: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4500A28C: beq         $a1, $at, L_4500A2B4
    if (ctx->r5 == ctx->r1) {
        // 0x4500A290: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500A2B4;
    }
    // 0x4500A290: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500A294: jal         0x450057BC
    // 0x4500A298: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_57BC(rdram, ctx);
        goto after_0;
    // 0x4500A298: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4500A29C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500A2A0: nop

    // 0x4500A2A4: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500A2A8: nop

    // 0x4500A2AC: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x4500A2B0: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
L_4500A2B4:
    // 0x4500A2B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500A2B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500A2BC: jr          $ra
    // 0x4500A2C0: nop

    return;
    // 0x4500A2C0: nop

;}
RECOMP_FUNC void ovl_mobj_main_A2C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A2C4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x4500A2C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4500A2CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4500A2D0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x4500A2D4: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x4500A2D8: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x4500A2DC: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500A2E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4500A2E4: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x4500A2E8: beq         $t7, $zero, L_4500A318
    if (ctx->r15 == 0) {
        // 0x4500A2EC: addiu       $a1, $zero, 0x2C
        ctx->r5 = ADD32(0, 0X2C);
            goto L_4500A318;
    }
    // 0x4500A2EC: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x4500A2F0: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x4500A2F4: jal         0x450006C4
    // 0x4500A2F8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4500A2F8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x4500A2FC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x4500A300: jal         0x450057BC
    // 0x4500A304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_57BC(rdram, ctx);
        goto after_1;
    // 0x4500A304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4500A308: lw          $t8, 0x184($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X184);
    // 0x4500A30C: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x4500A310: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x4500A314: sw          $t9, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r25;
L_4500A318:
    // 0x4500A318: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x4500A31C: jal         0x4500A284
    // 0x4500A320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_A284(rdram, ctx);
        goto after_2;
    // 0x4500A320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x4500A324: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x4500A328: jal         0x4500A284
    // 0x4500A32C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_A284(rdram, ctx);
        goto after_3;
    // 0x4500A32C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x4500A330: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x4500A334: jal         0x4500A284
    // 0x4500A338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_A284(rdram, ctx);
        goto after_4;
    // 0x4500A338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4500A33C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4500A340: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4500A344: jr          $ra
    // 0x4500A348: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x4500A348: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_mobj_main_A34C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A34C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4500A350: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4500A354: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x4500A358: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x4500A35C: addiu       $a1, $zero, 0x2CF
    ctx->r5 = ADD32(0, 0X2CF);
    // 0x4500A360: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x4500A364: jal         0x4500A2C4
    // 0x4500A368: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    ovl_mobj_main_A2C4(rdram, ctx);
        goto after_0;
    // 0x4500A368: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_0:
    // 0x4500A36C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4500A370: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4500A374: jr          $ra
    // 0x4500A378: nop

    return;
    // 0x4500A378: nop

;}
RECOMP_FUNC void ovl_mobj_main_A37C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A37C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4500A380: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4500A384: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x4500A388: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x4500A38C: addiu       $a1, $zero, 0x2CF
    ctx->r5 = ADD32(0, 0X2CF);
    // 0x4500A390: addiu       $a2, $zero, 0x2D1
    ctx->r6 = ADD32(0, 0X2D1);
    // 0x4500A394: jal         0x4500A2C4
    // 0x4500A398: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    ovl_mobj_main_A2C4(rdram, ctx);
        goto after_0;
    // 0x4500A398: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_0:
    // 0x4500A39C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4500A3A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4500A3A4: jr          $ra
    // 0x4500A3A8: nop

    return;
    // 0x4500A3A8: nop

;}
RECOMP_FUNC void ovl_mobj_main_A3AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A3AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4500A3B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4500A3B4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x4500A3B8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x4500A3BC: addiu       $a1, $zero, 0x2CF
    ctx->r5 = ADD32(0, 0X2CF);
    // 0x4500A3C0: addiu       $a2, $zero, 0x2D1
    ctx->r6 = ADD32(0, 0X2D1);
    // 0x4500A3C4: jal         0x4500A2C4
    // 0x4500A3C8: addiu       $a3, $zero, 0x2D0
    ctx->r7 = ADD32(0, 0X2D0);
    ovl_mobj_main_A2C4(rdram, ctx);
        goto after_0;
    // 0x4500A3C8: addiu       $a3, $zero, 0x2D0
    ctx->r7 = ADD32(0, 0X2D0);
    after_0:
    // 0x4500A3CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4500A3D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4500A3D4: jr          $ra
    // 0x4500A3D8: nop

    return;
    // 0x4500A3D8: nop

;}
RECOMP_FUNC void ovl_mobj_main_A3DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A3DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4500A3E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4500A3E4: addiu       $t6, $zero, 0x2D2
    ctx->r14 = ADD32(0, 0X2D2);
    // 0x4500A3E8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x4500A3EC: addiu       $a1, $zero, 0x2CF
    ctx->r5 = ADD32(0, 0X2CF);
    // 0x4500A3F0: addiu       $a2, $zero, 0x2D1
    ctx->r6 = ADD32(0, 0X2D1);
    // 0x4500A3F4: jal         0x4500A2C4
    // 0x4500A3F8: addiu       $a3, $zero, 0x2D0
    ctx->r7 = ADD32(0, 0X2D0);
    ovl_mobj_main_A2C4(rdram, ctx);
        goto after_0;
    // 0x4500A3F8: addiu       $a3, $zero, 0x2D0
    ctx->r7 = ADD32(0, 0X2D0);
    after_0:
    // 0x4500A3FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4500A400: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4500A404: jr          $ra
    // 0x4500A408: nop

    return;
    // 0x4500A408: nop

;}
RECOMP_FUNC void ovl_mobj_main_A40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A40C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4500A410: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4500A414: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x4500A418: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x4500A41C: addiu       $a1, $zero, 0x359
    ctx->r5 = ADD32(0, 0X359);
    // 0x4500A420: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x4500A424: jal         0x4500A2C4
    // 0x4500A428: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    ovl_mobj_main_A2C4(rdram, ctx);
        goto after_0;
    // 0x4500A428: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_0:
    // 0x4500A42C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4500A430: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4500A434: jr          $ra
    // 0x4500A438: nop

    return;
    // 0x4500A438: nop

;}
RECOMP_FUNC void ovl_mobj_main_A43C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A43C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4500A440: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4500A444: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x4500A448: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x4500A44C: addiu       $a1, $zero, 0x359
    ctx->r5 = ADD32(0, 0X359);
    // 0x4500A450: addiu       $a2, $zero, 0x370
    ctx->r6 = ADD32(0, 0X370);
    // 0x4500A454: jal         0x4500A2C4
    // 0x4500A458: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    ovl_mobj_main_A2C4(rdram, ctx);
        goto after_0;
    // 0x4500A458: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_0:
    // 0x4500A45C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4500A460: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4500A464: jr          $ra
    // 0x4500A468: nop

    return;
    // 0x4500A468: nop

;}
RECOMP_FUNC void ovl_mobj_main_A46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A46C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4500A470: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4500A474: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x4500A478: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x4500A47C: addiu       $a1, $zero, 0x359
    ctx->r5 = ADD32(0, 0X359);
    // 0x4500A480: addiu       $a2, $zero, 0x370
    ctx->r6 = ADD32(0, 0X370);
    // 0x4500A484: jal         0x4500A2C4
    // 0x4500A488: addiu       $a3, $zero, 0x35A
    ctx->r7 = ADD32(0, 0X35A);
    ovl_mobj_main_A2C4(rdram, ctx);
        goto after_0;
    // 0x4500A488: addiu       $a3, $zero, 0x35A
    ctx->r7 = ADD32(0, 0X35A);
    after_0:
    // 0x4500A48C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4500A490: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4500A494: jr          $ra
    // 0x4500A498: nop

    return;
    // 0x4500A498: nop

;}
RECOMP_FUNC void ovl_mobj_main_A49C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A49C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4500A4A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4500A4A4: addiu       $t6, $zero, 0x35B
    ctx->r14 = ADD32(0, 0X35B);
    // 0x4500A4A8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x4500A4AC: addiu       $a1, $zero, 0x359
    ctx->r5 = ADD32(0, 0X359);
    // 0x4500A4B0: addiu       $a2, $zero, 0x370
    ctx->r6 = ADD32(0, 0X370);
    // 0x4500A4B4: jal         0x4500A2C4
    // 0x4500A4B8: addiu       $a3, $zero, 0x35A
    ctx->r7 = ADD32(0, 0X35A);
    ovl_mobj_main_A2C4(rdram, ctx);
        goto after_0;
    // 0x4500A4B8: addiu       $a3, $zero, 0x35A
    ctx->r7 = ADD32(0, 0X35A);
    after_0:
    // 0x4500A4BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4500A4C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4500A4C4: jr          $ra
    // 0x4500A4C8: nop

    return;
    // 0x4500A4C8: nop

;}
RECOMP_FUNC void ovl_mobj_main_A4CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A4CC: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x4500A4D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500A4D4: lw          $t6, 0x190($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X190);
    // 0x4500A4D8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4500A4DC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x4500A4E0: lw          $t7, 0x194($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X194);
    // 0x4500A4E4: addiu       $t8, $sp, 0x1C
    ctx->r24 = ADD32(ctx->r29, 0X1C);
    // 0x4500A4E8: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x4500A4EC: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x4500A4F0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x4500A4F4: lwc1        $f4, 0x204($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X204);
    // 0x4500A4F8: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x4500A4FC: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x4500A500: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x4500A504: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x4500A508: jal         0x4500109C
    // 0x4500A50C: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_0;
    // 0x4500A50C: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x4500A510: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x4500A514: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x4500A518: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4500A51C: lwc1        $f6, 0x204($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X204);
    // 0x4500A520: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4500A524: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x4500A528: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4500A52C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x4500A530: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4500A534: jal         0x45005680
    // 0x4500A538: nop

    ovl_mobj_main_5680(rdram, ctx);
        goto after_1;
    // 0x4500A538: nop

    after_1:
    // 0x4500A53C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500A540: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x4500A544: jr          $ra
    // 0x4500A548: nop

    return;
    // 0x4500A548: nop

;}
RECOMP_FUNC void ovl_mobj_main_A54C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A54C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500A550: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500A554: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500A558: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x4500A55C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x4500A560: beq         $a1, $zero, L_4500A574
    if (ctx->r5 == 0) {
        // 0x4500A564: sw          $t7, 0x184($a0)
        MEM_W(0X184, ctx->r4) = ctx->r15;
            goto L_4500A574;
    }
    // 0x4500A564: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500A568: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4500A56C: jal         0x4500A4CC
    // 0x4500A570: swc1        $f4, 0x204($a0)
    MEM_W(0X204, ctx->r4) = ctx->f4.u32l;
    ovl_mobj_main_A4CC(rdram, ctx);
        goto after_0;
    // 0x4500A570: swc1        $f4, 0x204($a0)
    MEM_W(0X204, ctx->r4) = ctx->f4.u32l;
    after_0:
L_4500A574:
    // 0x4500A574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500A578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500A57C: jr          $ra
    // 0x4500A580: nop

    return;
    // 0x4500A580: nop

;}
RECOMP_FUNC void ovl_mobj_main_A584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A584: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500A588: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500A58C: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500A590: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x4500A594: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x4500A598: beq         $a1, $zero, L_4500A5AC
    if (ctx->r5 == 0) {
        // 0x4500A59C: sw          $t7, 0x184($a0)
        MEM_W(0X184, ctx->r4) = ctx->r15;
            goto L_4500A5AC;
    }
    // 0x4500A59C: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x4500A5A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4500A5A4: jal         0x4500A4CC
    // 0x4500A5A8: swc1        $f4, 0x204($a0)
    MEM_W(0X204, ctx->r4) = ctx->f4.u32l;
    ovl_mobj_main_A4CC(rdram, ctx);
        goto after_0;
    // 0x4500A5A8: swc1        $f4, 0x204($a0)
    MEM_W(0X204, ctx->r4) = ctx->f4.u32l;
    after_0:
L_4500A5AC:
    // 0x4500A5AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500A5B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500A5B4: jr          $ra
    // 0x4500A5B8: nop

    return;
    // 0x4500A5B8: nop

;}
RECOMP_FUNC void ovl_mobj_main_A5BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A5BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4500A5C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4500A5C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4500A5C8: jal         0x4500A4CC
    // 0x4500A5CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_mobj_main_A4CC(rdram, ctx);
        goto after_0;
    // 0x4500A5CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x4500A5D0: lw          $t6, 0x184($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X184);
    // 0x4500A5D4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x4500A5D8: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x4500A5DC: bne         $t7, $zero, L_4500A638
    if (ctx->r15 != 0) {
        // 0x4500A5E0: nop
    
            goto L_4500A638;
    }
    // 0x4500A5E0: nop

    // 0x4500A5E4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x4500A5E8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4500A5EC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x4500A5F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4500A5F4: lwc1        $f4, 0x204($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X204);
    // 0x4500A5F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500A5FC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4500A600: swc1        $f8, 0x204($s0)
    MEM_W(0X204, ctx->r16) = ctx->f8.u32l;
    // 0x4500A604: lwc1        $f10, 0x204($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X204);
    // 0x4500A608: nop

    // 0x4500A60C: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x4500A610: nop

    // 0x4500A614: bc1f        L_4500A680
    if (!c1cs) {
        // 0x4500A618: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4500A680;
    }
    // 0x4500A618: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4500A61C: jal         0x45005C3C
    // 0x4500A620: swc1        $f0, 0x204($s0)
    MEM_W(0X204, ctx->r16) = ctx->f0.u32l;
    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_1;
    // 0x4500A620: swc1        $f0, 0x204($s0)
    MEM_W(0X204, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x4500A624: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500A628: jal         0x45000F80
    // 0x4500A62C: addiu       $a1, $zero, 0x15F
    ctx->r5 = ADD32(0, 0X15F);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_2;
    // 0x4500A62C: addiu       $a1, $zero, 0x15F
    ctx->r5 = ADD32(0, 0X15F);
    after_2:
    // 0x4500A630: b           L_4500A680
    // 0x4500A634: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4500A680;
    // 0x4500A634: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4500A638:
    // 0x4500A638: lwc1        $f16, 0x204($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X204);
    // 0x4500A63C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4500A640: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4500A644: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x4500A648: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500A64C: swc1        $f4, 0x204($s0)
    MEM_W(0X204, ctx->r16) = ctx->f4.u32l;
    // 0x4500A650: lwc1        $f6, 0x204($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X204);
    // 0x4500A654: nop

    // 0x4500A658: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x4500A65C: nop

    // 0x4500A660: bc1f        L_4500A680
    if (!c1cs) {
        // 0x4500A664: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4500A680;
    }
    // 0x4500A664: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4500A668: jal         0x45005C3C
    // 0x4500A66C: swc1        $f0, 0x204($s0)
    MEM_W(0X204, ctx->r16) = ctx->f0.u32l;
    ovl_mobj_main_5C3C(rdram, ctx);
        goto after_3;
    // 0x4500A66C: swc1        $f0, 0x204($s0)
    MEM_W(0X204, ctx->r16) = ctx->f0.u32l;
    after_3:
    // 0x4500A670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500A674: jal         0x45000F80
    // 0x4500A678: addiu       $a1, $zero, 0x15F
    ctx->r5 = ADD32(0, 0X15F);
    ovl_mobj_main_F80(rdram, ctx);
        goto after_4;
    // 0x4500A678: addiu       $a1, $zero, 0x15F
    ctx->r5 = ADD32(0, 0X15F);
    after_4:
    // 0x4500A67C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4500A680:
    // 0x4500A680: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4500A684: jr          $ra
    // 0x4500A688: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x4500A688: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_mobj_main_A68C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A68C: jr          $ra
    // 0x4500A690: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x4500A690: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ovl_mobj_main_A694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A694: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4500A698: lwc1        $f4, 0x30($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X30);
    // 0x4500A69C: nop

    // 0x4500A6A0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x4500A6A4: nop

    // 0x4500A6A8: bc1f        L_4500A6E0
    if (!c1cs) {
        // 0x4500A6AC: nop
    
            goto L_4500A6E0;
    }
    // 0x4500A6AC: nop

    // 0x4500A6B0: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x4500A6B4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x4500A6B8: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x4500A6BC: nop

    // 0x4500A6C0: bc1f        L_4500A6E0
    if (!c1cs) {
        // 0x4500A6C4: nop
    
            goto L_4500A6E0;
    }
    // 0x4500A6C4: nop

    // 0x4500A6C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4500A6CC: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500A6D0: swc1        $f8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f8.u32l;
    // 0x4500A6D4: lwc1        $f10, 0x22AC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X22AC);
    // 0x4500A6D8: nop

    // 0x4500A6DC: swc1        $f10, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f10.u32l;
L_4500A6E0:
    // 0x4500A6E0: jr          $ra
    // 0x4500A6E4: nop

    return;
    // 0x4500A6E4: nop

;}
RECOMP_FUNC void ovl_mobj_main_A6E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A6E8: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x4500A6EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4500A6F0: lw          $v0, 0x188($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X188);
    // 0x4500A6F4: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
    // 0x4500A6F8: slti        $at, $v0, 0x28
    ctx->r1 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
    // 0x4500A6FC: beq         $at, $zero, L_4500A710
    if (ctx->r1 == 0) {
        // 0x4500A700: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_4500A710;
    }
    // 0x4500A700: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x4500A704: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4500A708: b           L_4500A768
    // 0x4500A70C: swc1        $f6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f6.u32l;
        goto L_4500A768;
    // 0x4500A70C: swc1        $f6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f6.u32l;
L_4500A710:
    // 0x4500A710: slti        $at, $v0, 0x50
    ctx->r1 = SIGNED(ctx->r2) < 0X50 ? 1 : 0;
    // 0x4500A714: beq         $at, $zero, L_4500A728
    if (ctx->r1 == 0) {
        // 0x4500A718: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_4500A728;
    }
    // 0x4500A718: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x4500A71C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4500A720: b           L_4500A768
    // 0x4500A724: swc1        $f8, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f8.u32l;
        goto L_4500A768;
    // 0x4500A724: swc1        $f8, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f8.u32l;
L_4500A728:
    // 0x4500A728: slti        $at, $v0, 0x78
    ctx->r1 = SIGNED(ctx->r2) < 0X78 ? 1 : 0;
    // 0x4500A72C: beq         $at, $zero, L_4500A740
    if (ctx->r1 == 0) {
        // 0x4500A730: lui         $at, 0x4387
        ctx->r1 = S32(0X4387 << 16);
            goto L_4500A740;
    }
    // 0x4500A730: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x4500A734: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4500A738: b           L_4500A768
    // 0x4500A73C: swc1        $f10, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f10.u32l;
        goto L_4500A768;
    // 0x4500A73C: swc1        $f10, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f10.u32l;
L_4500A740:
    // 0x4500A740: slti        $at, $v0, 0xA0
    ctx->r1 = SIGNED(ctx->r2) < 0XA0 ? 1 : 0;
    // 0x4500A744: beq         $at, $zero, L_4500A75C
    if (ctx->r1 == 0) {
        // 0x4500A748: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_4500A75C;
    }
    // 0x4500A748: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x4500A74C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x4500A750: b           L_4500A768
    // 0x4500A754: swc1        $f16, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f16.u32l;
        goto L_4500A768;
    // 0x4500A754: swc1        $f16, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f16.u32l;
    // 0x4500A758: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
L_4500A75C:
    // 0x4500A75C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4500A760: sw          $zero, 0x188($a0)
    MEM_W(0X188, ctx->r4) = 0;
    // 0x4500A764: swc1        $f18, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f18.u32l;
L_4500A768:
    // 0x4500A768: lw          $t6, 0x188($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X188);
    // 0x4500A76C: nop

    // 0x4500A770: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x4500A774: jr          $ra
    // 0x4500A778: sw          $t7, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r15;
    return;
    // 0x4500A778: sw          $t7, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void ovl_mobj_main_A77C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A77C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x4500A780: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500A784: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x4500A788: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4500A78C: bne         $t6, $at, L_4500A7F8
    if (ctx->r14 != ctx->r1) {
        // 0x4500A790: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_4500A7F8;
    }
    // 0x4500A790: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x4500A794: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x4500A798: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    // 0x4500A79C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4500A7A0: jal         0x450006C4
    // 0x4500A7A4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4500A7A4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x4500A7A8: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x4500A7AC: bne         $v0, $zero, L_4500A7FC
    if (ctx->r2 != 0) {
        // 0x4500A7B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4500A7FC;
    }
    // 0x4500A7B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500A7B4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x4500A7B8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x4500A7BC: bne         $t7, $zero, L_4500A7F8
    if (ctx->r15 != 0) {
        // 0x4500A7C0: addiu       $t0, $sp, 0x28
        ctx->r8 = ADD32(ctx->r29, 0X28);
            goto L_4500A7F8;
    }
    // 0x4500A7C0: addiu       $t0, $sp, 0x28
    ctx->r8 = ADD32(ctx->r29, 0X28);
    // 0x4500A7C4: lw          $t8, 0xC($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XC);
    // 0x4500A7C8: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x4500A7CC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x4500A7D0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x4500A7D4: lw          $at, 0x10($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X10);
    // 0x4500A7D8: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x4500A7DC: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x4500A7E0: lw          $t3, 0x14($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X14);
    // 0x4500A7E4: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    // 0x4500A7E8: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x4500A7EC: lw          $at, 0x18($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X18);
    // 0x4500A7F0: jal         0x4500C3F4
    // 0x4500A7F4: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    ovl_mobj_main_C3F4(rdram, ctx);
        goto after_1;
    // 0x4500A7F4: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    after_1:
L_4500A7F8:
    // 0x4500A7F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500A7FC:
    // 0x4500A7FC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x4500A800: jr          $ra
    // 0x4500A804: nop

    return;
    // 0x4500A804: nop

;}
RECOMP_FUNC void ovl_mobj_main_A808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500A808: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x4500A80C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500A810: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x4500A814: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x4500A818: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x4500A81C: jal         0x450006C4
    // 0x4500A820: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4500A820: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x4500A824: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x4500A828: nop

    // 0x4500A82C: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x4500A830: nop

    // 0x4500A834: slti        $at, $v0, 0x7E
    ctx->r1 = SIGNED(ctx->r2) < 0X7E ? 1 : 0;
    // 0x4500A838: bne         $at, $zero, L_4500A864
    if (ctx->r1 != 0) {
        // 0x4500A83C: addiu       $t7, $v0, -0xFC
        ctx->r15 = ADD32(ctx->r2, -0XFC);
            goto L_4500A864;
    }
    // 0x4500A83C: addiu       $t7, $v0, -0xFC
    ctx->r15 = ADD32(ctx->r2, -0XFC);
    // 0x4500A840: sltiu       $at, $t7, 0x14
    ctx->r1 = ctx->r15 < 0X14 ? 1 : 0;
    // 0x4500A844: beq         $at, $zero, L_4500A8F8
    if (ctx->r1 == 0) {
        // 0x4500A848: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_4500A8F8;
    }
    // 0x4500A848: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x4500A84C: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500A850: addu        $at, $at, $t7
    gpr jr_addend_4500A85C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x4500A854: lw          $t7, 0x22B0($at)
    ctx->r15 = ADD32(ctx->r1, 0X22B0);
    // 0x4500A858: nop

    // 0x4500A85C: jr          $t7
    // 0x4500A860: nop

    switch (jr_addend_4500A85C >> 2) {
        case 0: goto L_4500A8E4; break;
        case 1: goto L_4500A8E4; break;
        case 2: goto L_4500A8E4; break;
        case 3: goto L_4500A8E4; break;
        case 4: goto L_4500A8E4; break;
        case 5: goto L_4500A8E4; break;
        case 6: goto L_4500A8E4; break;
        case 7: goto L_4500A8E4; break;
        case 8: goto L_4500A8F8; break;
        case 9: goto L_4500A8F8; break;
        case 10: goto L_4500A8F8; break;
        case 11: goto L_4500A8F8; break;
        case 12: goto L_4500A8F8; break;
        case 13: goto L_4500A8F8; break;
        case 14: goto L_4500A8F8; break;
        case 15: goto L_4500A8F8; break;
        case 16: goto L_4500A880; break;
        case 17: goto L_4500A894; break;
        case 18: goto L_4500A8A8; break;
        case 19: goto L_4500A8BC; break;
        default: switch_error(__func__, 0x4500A85C, 0x450122B0);
    }
    // 0x4500A860: nop

L_4500A864:
    // 0x4500A864: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x4500A868: beq         $v0, $at, L_4500A8D0
    if (ctx->r2 == ctx->r1) {
        // 0x4500A86C: addiu       $at, $zero, 0x7D
        ctx->r1 = ADD32(0, 0X7D);
            goto L_4500A8D0;
    }
    // 0x4500A86C: addiu       $at, $zero, 0x7D
    ctx->r1 = ADD32(0, 0X7D);
    // 0x4500A870: beq         $v0, $at, L_4500A8D4
    if (ctx->r2 == ctx->r1) {
        // 0x4500A874: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_4500A8D4;
    }
    // 0x4500A874: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4500A878: b           L_4500A8FC
    // 0x4500A87C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
        goto L_4500A8FC;
    // 0x4500A87C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
L_4500A880:
    // 0x4500A880: lui         $at, 0x4090
    ctx->r1 = S32(0X4090 << 16);
    // 0x4500A884: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4500A888: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4500A88C: b           L_4500A90C
    // 0x4500A890: sub.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f4.fl;
        goto L_4500A90C;
    // 0x4500A890: sub.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f4.fl;
L_4500A894:
    // 0x4500A894: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500A898: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4500A89C: lwc1        $f6, 0x2300($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2300);
    // 0x4500A8A0: b           L_4500A90C
    // 0x4500A8A4: sub.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f6.fl;
        goto L_4500A90C;
    // 0x4500A8A4: sub.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f6.fl;
L_4500A8A8:
    // 0x4500A8A8: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500A8AC: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4500A8B0: lwc1        $f8, 0x2304($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2304);
    // 0x4500A8B4: b           L_4500A90C
    // 0x4500A8B8: sub.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f8.fl;
        goto L_4500A90C;
    // 0x4500A8B8: sub.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f8.fl;
L_4500A8BC:
    // 0x4500A8BC: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500A8C0: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4500A8C4: lwc1        $f10, 0x2308($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X2308);
    // 0x4500A8C8: b           L_4500A90C
    // 0x4500A8CC: sub.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f10.fl;
        goto L_4500A90C;
    // 0x4500A8CC: sub.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f10.fl;
L_4500A8D0:
    // 0x4500A8D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_4500A8D4:
    // 0x4500A8D4: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4500A8D8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4500A8DC: b           L_4500A90C
    // 0x4500A8E0: add.s       $f2, $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f16.fl;
        goto L_4500A90C;
    // 0x4500A8E0: add.s       $f2, $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f16.fl;
L_4500A8E4:
    // 0x4500A8E4: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500A8E8: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4500A8EC: lwc1        $f18, 0x230C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X230C);
    // 0x4500A8F0: b           L_4500A90C
    // 0x4500A8F4: add.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
        goto L_4500A90C;
    // 0x4500A8F4: add.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
L_4500A8F8:
    // 0x4500A8F8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
L_4500A8FC:
    // 0x4500A8FC: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4500A900: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4500A904: nop

    // 0x4500A908: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
L_4500A90C:
    // 0x4500A90C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x4500A910: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4500A914: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x4500A918: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x4500A91C: nop

    // 0x4500A920: bc1f        L_4500A934
    if (!c1cs) {
        // 0x4500A924: nop
    
            goto L_4500A934;
    }
    // 0x4500A924: nop

    // 0x4500A928: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x4500A92C: b           L_4500A954
    // 0x4500A930: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
        goto L_4500A954;
    // 0x4500A930: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
L_4500A934:
    // 0x4500A934: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x4500A938: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x4500A93C: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x4500A940: nop

    // 0x4500A944: bc1f        L_4500A954
    if (!c1cs) {
        // 0x4500A948: nop
    
            goto L_4500A954;
    }
    // 0x4500A948: nop

    // 0x4500A94C: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x4500A950: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
L_4500A954:
    // 0x4500A954: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x4500A958: jal         0x450006C4
    // 0x4500A95C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x4500A95C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x4500A960: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x4500A964: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x4500A968: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x4500A96C: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4500A970: bne         $t8, $at, L_4500AA08
    if (ctx->r24 != ctx->r1) {
        // 0x4500A974: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_4500AA08;
    }
    // 0x4500A974: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x4500A978: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4500A97C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4500A980: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x4500A984: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x4500A988: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x4500A98C: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    // 0x4500A990: jal         0x450006C4
    // 0x4500A994: nop

    ovl_mobj_main_6C4(rdram, ctx);
        goto after_2;
    // 0x4500A994: nop

    after_2:
    // 0x4500A998: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x4500A99C: jal         0x45000310
    // 0x4500A9A0: nop

    ovl_mobj_main_310(rdram, ctx);
        goto after_3;
    // 0x4500A9A0: nop

    after_3:
    // 0x4500A9A4: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x4500A9A8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4500A9AC: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x4500A9B0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x4500A9B4: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4500A9B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4500A9BC: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x4500A9C0: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x4500A9C4: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x4500A9C8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x4500A9CC: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x4500A9D0: jal         0x4500031C
    // 0x4500A9D4: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    ovl_mobj_main_31C(rdram, ctx);
        goto after_4;
    // 0x4500A9D4: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x4500A9D8: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x4500A9DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4500A9E0: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4500A9E4: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x4500A9E8: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x4500A9EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4500A9F0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x4500A9F4: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x4500A9F8: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x4500A9FC: lw          $a0, 0x1CC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1CC);
    // 0x4500AA00: jal         0x450006C4
    // 0x4500AA04: nop

    ovl_mobj_main_6C4(rdram, ctx);
        goto after_5;
    // 0x4500AA04: nop

    after_5:
L_4500AA08:
    // 0x4500AA08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500AA0C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x4500AA10: jr          $ra
    // 0x4500AA14: nop

    return;
    // 0x4500AA14: nop

;}
RECOMP_FUNC void ovl_mobj_main_AA18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500AA18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500AA1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500AA20: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500AA24: nop

    // 0x4500AA28: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x4500AA2C: beq         $t7, $zero, L_4500AA40
    if (ctx->r15 == 0) {
        // 0x4500AA30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4500AA40;
    }
    // 0x4500AA30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500AA34: jal         0x45006080
    // 0x4500AA38: nop

    ovl_mobj_main_6080(rdram, ctx);
        goto after_0;
    // 0x4500AA38: nop

    after_0:
    // 0x4500AA3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500AA40:
    // 0x4500AA40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500AA44: jr          $ra
    // 0x4500AA48: nop

    return;
    // 0x4500AA48: nop

;}
RECOMP_FUNC void ovl_mobj_main_AA4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500AA4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500AA50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500AA54: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500AA58: nop

    // 0x4500AA5C: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x4500AA60: beq         $t7, $zero, L_4500AA74
    if (ctx->r15 == 0) {
        // 0x4500AA64: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4500AA74;
    }
    // 0x4500AA64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500AA68: jal         0x4500649C
    // 0x4500AA6C: nop

    ovl_mobj_main_649C(rdram, ctx);
        goto after_0;
    // 0x4500AA6C: nop

    after_0:
    // 0x4500AA70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500AA74:
    // 0x4500AA74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500AA78: jr          $ra
    // 0x4500AA7C: nop

    return;
    // 0x4500AA7C: nop

;}
RECOMP_FUNC void ovl_mobj_main_AA80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500AA80: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x4500AA84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500AA88: lw          $v1, 0x188($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X188);
    // 0x4500AA8C: addiu       $at, $zero, 0x96
    ctx->r1 = ADD32(0, 0X96);
    // 0x4500AA90: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x4500AA94: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x4500AA98: bne         $v1, $at, L_4500AAB0
    if (ctx->r3 != ctx->r1) {
        // 0x4500AA9C: sw          $t6, 0x188($a0)
        MEM_W(0X188, ctx->r4) = ctx->r14;
            goto L_4500AAB0;
    }
    // 0x4500AA9C: sw          $t6, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r14;
    // 0x4500AAA0: jal         0x45005AB4
    // 0x4500AAA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_5AB4(rdram, ctx);
        goto after_0;
    // 0x4500AAA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x4500AAA8: b           L_4500AACC
    // 0x4500AAAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4500AACC;
    // 0x4500AAAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500AAB0:
    // 0x4500AAB0: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
    // 0x4500AAB4: bne         $at, $zero, L_4500AAC8
    if (ctx->r1 != 0) {
        // 0x4500AAB8: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_4500AAC8;
    }
    // 0x4500AAB8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4500AABC: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x4500AAC0: jal         0x450006C4
    // 0x4500AAC4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x4500AAC4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
L_4500AAC8:
    // 0x4500AAC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500AACC:
    // 0x4500AACC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x4500AAD0: jr          $ra
    // 0x4500AAD4: nop

    return;
    // 0x4500AAD4: nop

;}
RECOMP_FUNC void ovl_mobj_main_AAD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500AAD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500AADC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500AAE0: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500AAE4: nop

    // 0x4500AAE8: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x4500AAEC: beq         $t7, $zero, L_4500AB00
    if (ctx->r15 == 0) {
        // 0x4500AAF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4500AB00;
    }
    // 0x4500AAF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500AAF4: jal         0x45006590
    // 0x4500AAF8: nop

    ovl_mobj_main_6590(rdram, ctx);
        goto after_0;
    // 0x4500AAF8: nop

    after_0:
    // 0x4500AAFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500AB00:
    // 0x4500AB00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500AB04: jr          $ra
    // 0x4500AB08: nop

    return;
    // 0x4500AB08: nop

;}
RECOMP_FUNC void ovl_mobj_main_AB0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500AB0C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x4500AB10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500AB14: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x4500AB18: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x4500AB1C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x4500AB20: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    // 0x4500AB24: jal         0x45000DE4
    // 0x4500AB28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_mobj_main_DE4(rdram, ctx);
        goto after_0;
    // 0x4500AB28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x4500AB2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x4500AB30: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4500AB34: jal         0x450006C4
    // 0x4500AB38: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x4500AB38: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x4500AB3C: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x4500AB40: bne         $v0, $zero, L_4500AC2C
    if (ctx->r2 != 0) {
        // 0x4500AB44: lui         $at, 0x43AF
        ctx->r1 = S32(0X43AF << 16);
            goto L_4500AC2C;
    }
    // 0x4500AB44: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x4500AB48: lwc1        $f0, 0x204($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X204);
    // 0x4500AB4C: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4500AB50: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4500AB54: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x4500AB58: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x4500AB5C: bc1f        L_4500AB70
    if (!c1cs) {
        // 0x4500AB60: nop
    
            goto L_4500AB70;
    }
    // 0x4500AB60: nop

    // 0x4500AB64: sub.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x4500AB68: b           L_4500AB74
    // 0x4500AB6C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_4500AB74;
    // 0x4500AB6C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_4500AB70:
    // 0x4500AB70: sub.s       $f12, $f6, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f0.fl;
L_4500AB74:
    // 0x4500AB74: lwc1        $f0, 0x20C($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X20C);
    // 0x4500AB78: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x4500AB7C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x4500AB80: nop

    // 0x4500AB84: bc1f        L_4500AB98
    if (!c1cs) {
        // 0x4500AB88: nop
    
            goto L_4500AB98;
    }
    // 0x4500AB88: nop

    // 0x4500AB8C: sub.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x4500AB90: b           L_4500AB9C
    // 0x4500AB94: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_4500AB9C;
    // 0x4500AB94: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_4500AB98:
    // 0x4500AB98: sub.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f0.fl;
L_4500AB9C:
    // 0x4500AB9C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4500ABA0: nop

    // 0x4500ABA4: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x4500ABA8: nop

    // 0x4500ABAC: bc1f        L_4500AC30
    if (!c1cs) {
        // 0x4500ABB0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4500AC30;
    }
    // 0x4500ABB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500ABB4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x4500ABB8: addiu       $a2, $a3, 0x1DC
    ctx->r6 = ADD32(ctx->r7, 0X1DC);
    // 0x4500ABBC: bc1f        L_4500AC30
    if (!c1cs) {
        // 0x4500ABC0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4500AC30;
    }
    // 0x4500ABC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500ABC4: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x4500ABC8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x4500ABCC: bne         $v1, $zero, L_4500ABF4
    if (ctx->r3 != 0) {
        // 0x4500ABD0: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_4500ABF4;
    }
    // 0x4500ABD0: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x4500ABD4: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x4500ABD8: jal         0x45000FA0
    // 0x4500ABDC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    ovl_mobj_main_FA0(rdram, ctx);
        goto after_2;
    // 0x4500ABDC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_2:
    // 0x4500ABE0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x4500ABE4: nop

    // 0x4500ABE8: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x4500ABEC: b           L_4500AC1C
    // 0x4500ABF0: slti        $v0, $v1, 0x28
    ctx->r2 = SIGNED(ctx->r3) < 0X28 ? 1 : 0;
        goto L_4500AC1C;
    // 0x4500ABF0: slti        $v0, $v1, 0x28
    ctx->r2 = SIGNED(ctx->r3) < 0X28 ? 1 : 0;
L_4500ABF4:
    // 0x4500ABF4: bne         $v1, $at, L_4500AC18
    if (ctx->r3 != ctx->r1) {
        // 0x4500ABF8: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_4500AC18;
    }
    // 0x4500ABF8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x4500ABFC: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x4500AC00: jal         0x45000FA0
    // 0x4500AC04: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    ovl_mobj_main_FA0(rdram, ctx);
        goto after_3;
    // 0x4500AC04: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_3:
    // 0x4500AC08: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x4500AC0C: nop

    // 0x4500AC10: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x4500AC14: nop

L_4500AC18:
    // 0x4500AC18: slti        $v0, $v1, 0x28
    ctx->r2 = SIGNED(ctx->r3) < 0X28 ? 1 : 0;
L_4500AC1C:
    // 0x4500AC1C: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x4500AC20: bne         $v0, $zero, L_4500AC2C
    if (ctx->r2 != 0) {
        // 0x4500AC24: sw          $t6, 0x4($a2)
        MEM_W(0X4, ctx->r6) = ctx->r14;
            goto L_4500AC2C;
    }
    // 0x4500AC24: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x4500AC28: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
L_4500AC2C:
    // 0x4500AC2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500AC30:
    // 0x4500AC30: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x4500AC34: jr          $ra
    // 0x4500AC38: nop

    return;
    // 0x4500AC38: nop

;}
RECOMP_FUNC void ovl_mobj_main_AC3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500AC3C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x4500AC40: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4500AC44: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4500AC48: lw          $v0, 0x1DC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1DC);
    // 0x4500AC4C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x4500AC50: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x4500AC54: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4500AC58: bgez        $v0, L_4500ACB8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x4500AC5C: sw          $t6, 0x1DC($a0)
        MEM_W(0X1DC, ctx->r4) = ctx->r14;
            goto L_4500ACB8;
    }
    // 0x4500AC5C: sw          $t6, 0x1DC($a0)
    MEM_W(0X1DC, ctx->r4) = ctx->r14;
    // 0x4500AC60: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500AC64: lwc1        $f7, 0x2310($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X2310);
    // 0x4500AC68: lwc1        $f6, 0x2314($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2314);
    // 0x4500AC6C: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x4500AC70: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x4500AC74: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x4500AC78: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x4500AC7C: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x4500AC80: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x4500AC84: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x4500AC88: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4500AC8C: jal         0x450056C8
    // 0x4500AC90: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    ovl_mobj_main_56C8(rdram, ctx);
        goto after_0;
    // 0x4500AC90: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x4500AC94: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x4500AC98: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x4500AC9C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4500ACA0: jal         0x4500076C
    // 0x4500ACA4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    ovl_mobj_main_76C(rdram, ctx);
        goto after_1;
    // 0x4500ACA4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x4500ACA8: jal         0x4500034C
    // 0x4500ACAC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_mobj_main_34C(rdram, ctx);
        goto after_2;
    // 0x4500ACAC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x4500ACB0: addiu       $t7, $v0, 0xA
    ctx->r15 = ADD32(ctx->r2, 0XA);
    // 0x4500ACB4: sw          $t7, 0x1DC($s0)
    MEM_W(0X1DC, ctx->r16) = ctx->r15;
L_4500ACB8:
    // 0x4500ACB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500ACBC: addiu       $a1, $zero, 0x16F
    ctx->r5 = ADD32(0, 0X16F);
    // 0x4500ACC0: jal         0x4500AB0C
    // 0x4500ACC4: addiu       $a2, $zero, 0x170
    ctx->r6 = ADD32(0, 0X170);
    ovl_mobj_main_AB0C(rdram, ctx);
        goto after_3;
    // 0x4500ACC4: addiu       $a2, $zero, 0x170
    ctx->r6 = ADD32(0, 0X170);
    after_3:
    // 0x4500ACC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4500ACCC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4500ACD0: jr          $ra
    // 0x4500ACD4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x4500ACD4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_mobj_main_ACD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500ACD8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x4500ACDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4500ACE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4500ACE4: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x4500ACE8: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x4500ACEC: bne         $t6, $at, L_4500AD88
    if (ctx->r14 != ctx->r1) {
        // 0x4500ACF0: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_4500AD88;
    }
    // 0x4500ACF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4500ACF4: lw          $a1, 0x1CC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X1CC);
    // 0x4500ACF8: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x4500ACFC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x4500AD00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4500AD04: jal         0x45000F34
    // 0x4500AD08: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_0;
    // 0x4500AD08: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x4500AD0C: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500AD10: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x4500AD14: lwc1        $f9, 0x2318($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X2318);
    // 0x4500AD18: lwc1        $f8, 0x231C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X231C);
    // 0x4500AD1C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x4500AD20: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x4500AD24: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x4500AD28: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x4500AD2C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x4500AD30: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x4500AD34: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x4500AD38: jal         0x45000F34
    // 0x4500AD3C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_1;
    // 0x4500AD3C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x4500AD40: lw          $v0, 0x184($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X184);
    // 0x4500AD44: lui         $at, 0x42FA
    ctx->r1 = S32(0X42FA << 16);
    // 0x4500AD48: andi        $t7, $v0, 0x10
    ctx->r15 = ctx->r2 & 0X10;
    // 0x4500AD4C: beq         $t7, $zero, L_4500AD68
    if (ctx->r15 == 0) {
        // 0x4500AD50: ori         $t8, $v0, 0x10
        ctx->r24 = ctx->r2 | 0X10;
            goto L_4500AD68;
    }
    // 0x4500AD50: ori         $t8, $v0, 0x10
    ctx->r24 = ctx->r2 | 0X10;
    // 0x4500AD54: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x4500AD58: jal         0x4500AC3C
    // 0x4500AD5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_AC3C(rdram, ctx);
        goto after_2;
    // 0x4500AD5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x4500AD60: b           L_4500ADB8
    // 0x4500AD64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4500ADB8;
    // 0x4500AD64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4500AD68:
    // 0x4500AD68: lwc1        $f18, 0x208($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X208);
    // 0x4500AD6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4500AD70: sw          $zero, 0x1DC($s0)
    MEM_W(0X1DC, ctx->r16) = 0;
    // 0x4500AD74: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x4500AD78: sw          $zero, 0x1E0($s0)
    MEM_W(0X1E0, ctx->r16) = 0;
    // 0x4500AD7C: swc1        $f6, 0x208($s0)
    MEM_W(0X208, ctx->r16) = ctx->f6.u32l;
    // 0x4500AD80: b           L_4500ADB4
    // 0x4500AD84: sw          $t8, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r24;
        goto L_4500ADB4;
    // 0x4500AD84: sw          $t8, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r24;
L_4500AD88:
    // 0x4500AD88: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x4500AD8C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x4500AD90: jal         0x450006C4
    // 0x4500AD94: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_3;
    // 0x4500AD94: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x4500AD98: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x4500AD9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500ADA0: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x4500ADA4: bne         $t0, $zero, L_4500ADB4
    if (ctx->r8 != 0) {
        // 0x4500ADA8: addiu       $a1, $zero, 0x1F2
        ctx->r5 = ADD32(0, 0X1F2);
            goto L_4500ADB4;
    }
    // 0x4500ADA8: addiu       $a1, $zero, 0x1F2
    ctx->r5 = ADD32(0, 0X1F2);
    // 0x4500ADAC: jal         0x4500AB0C
    // 0x4500ADB0: addiu       $a2, $zero, 0x1F3
    ctx->r6 = ADD32(0, 0X1F3);
    ovl_mobj_main_AB0C(rdram, ctx);
        goto after_4;
    // 0x4500ADB0: addiu       $a2, $zero, 0x1F3
    ctx->r6 = ADD32(0, 0X1F3);
    after_4:
L_4500ADB4:
    // 0x4500ADB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4500ADB8:
    // 0x4500ADB8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4500ADBC: jr          $ra
    // 0x4500ADC0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x4500ADC0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_mobj_main_ADC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500ADC4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4500ADC8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4500ADCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500ADD0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x4500ADD4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x4500ADD8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x4500ADDC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x4500ADE0: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x4500ADE4: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x4500ADE8: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x4500ADEC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x4500ADF0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x4500ADF4: jal         0x4500109C
    // 0x4500ADF8: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_0;
    // 0x4500ADF8: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x4500ADFC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4500AE00: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x4500AE04: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x4500AE08: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x4500AE0C: lwc1        $f6, 0x4($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X4);
    // 0x4500AE10: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x4500AE14: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x4500AE18: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x4500AE1C: jal         0x4500109C
    // 0x4500AE20: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_1;
    // 0x4500AE20: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x4500AE24: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x4500AE28: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x4500AE2C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x4500AE30: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x4500AE34: lwc1        $f18, 0x8($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X8);
    // 0x4500AE38: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x4500AE3C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x4500AE40: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x4500AE44: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x4500AE48: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x4500AE4C: lwc1        $f16, 0x8($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X8);
    // 0x4500AE50: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x4500AE54: nop

    // 0x4500AE58: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x4500AE5C: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    // 0x4500AE60: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x4500AE64: lwc1        $f4, 0x8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X8);
    // 0x4500AE68: nop

    // 0x4500AE6C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x4500AE70: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x4500AE74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500AE78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4500AE7C: jr          $ra
    // 0x4500AE80: nop

    return;
    // 0x4500AE80: nop

;}
RECOMP_FUNC void ovl_mobj_main_AE84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500AE84: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x4500AE88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500AE8C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x4500AE90: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x4500AE94: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x4500AE98: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x4500AE9C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x4500AEA0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x4500AEA4: jal         0x450006C4
    // 0x4500AEA8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4500AEA8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x4500AEAC: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x4500AEB0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4500AEB4: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x4500AEB8: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x4500AEBC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x4500AEC0: bc1t        L_4500AF00
    if (c1cs) {
        // 0x4500AEC4: lw          $v0, 0x50($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X50);
            goto L_4500AF00;
    }
    // 0x4500AEC4: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x4500AEC8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4500AECC: add.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x4500AED0: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x4500AED4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x4500AED8: bc1f        L_4500AEEC
    if (!c1cs) {
        // 0x4500AEDC: lw          $t7, 0x40($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X40);
            goto L_4500AEEC;
    }
    // 0x4500AEDC: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x4500AEE0: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x4500AEE4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x4500AEE8: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
L_4500AEEC:
    // 0x4500AEEC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x4500AEF0: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    // 0x4500AEF4: jal         0x450006C4
    // 0x4500AEF8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x4500AEF8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x4500AEFC: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
L_4500AF00:
    // 0x4500AF00: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4500AF04: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x4500AF08: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x4500AF0C: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x4500AF10: nop

    // 0x4500AF14: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x4500AF18: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4500AF1C: nop

    // 0x4500AF20: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x4500AF24: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4500AF28: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x4500AF2C: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x4500AF30: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x4500AF34: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x4500AF38: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x4500AF3C: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x4500AF40: jal         0x4500ADC4
    // 0x4500AF44: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_ADC4(rdram, ctx);
        goto after_2;
    // 0x4500AF44: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x4500AF48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500AF4C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x4500AF50: jr          $ra
    // 0x4500AF54: nop

    return;
    // 0x4500AF54: nop

;}
RECOMP_FUNC void ovl_mobj_main_AF58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500AF58: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x4500AF5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4500AF60: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4500AF64: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4500AF68: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x4500AF6C: lui         $a2, 0x4334
    ctx->r6 = S32(0X4334 << 16);
    // 0x4500AF70: jal         0x45005680
    // 0x4500AF74: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_mobj_main_5680(rdram, ctx);
        goto after_0;
    // 0x4500AF74: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_0:
    // 0x4500AF78: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x4500AF7C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4500AF80: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x4500AF84: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x4500AF88: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4500AF8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500AF90: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x4500AF94: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x4500AF98: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x4500AF9C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x4500AFA0: jal         0x4500ADC4
    // 0x4500AFA4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    ovl_mobj_main_ADC4(rdram, ctx);
        goto after_1;
    // 0x4500AFA4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x4500AFA8: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4500AFAC: lwc1        $f16, 0x204($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X204);
    // 0x4500AFB0: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x4500AFB4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x4500AFB8: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x4500AFBC: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x4500AFC0: lwc1        $f6, 0x208($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X208);
    // 0x4500AFC4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4500AFC8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4500AFCC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x4500AFD0: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x4500AFD4: lwc1        $f16, 0x20C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20C);
    // 0x4500AFD8: nop

    // 0x4500AFDC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x4500AFE0: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    // 0x4500AFE4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x4500AFE8: jal         0x450006C4
    // 0x4500AFEC: nop

    ovl_mobj_main_6C4(rdram, ctx);
        goto after_2;
    // 0x4500AFEC: nop

    after_2:
    // 0x4500AFF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4500AFF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4500AFF8: jr          $ra
    // 0x4500AFFC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x4500AFFC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_mobj_main_B000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500B000: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x4500B004: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4500B008: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4500B00C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4500B010: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x4500B014: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x4500B018: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x4500B01C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x4500B020: jal         0x450006C4
    // 0x4500B024: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4500B024: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x4500B028: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x4500B02C: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x4500B030: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4500B034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500B038: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x4500B03C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x4500B040: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x4500B044: jal         0x4500ADC4
    // 0x4500B048: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    ovl_mobj_main_ADC4(rdram, ctx);
        goto after_1;
    // 0x4500B048: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x4500B04C: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x4500B050: lwc1        $f10, 0x204($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X204);
    // 0x4500B054: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4500B058: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x4500B05C: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x4500B060: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x4500B064: lwc1        $f4, 0x208($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X208);
    // 0x4500B068: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x4500B06C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x4500B070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500B074: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x4500B078: lwc1        $f10, 0x20C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20C);
    // 0x4500B07C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x4500B080: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x4500B084: jal         0x4500224C
    // 0x4500B088: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    ovl_mobj_main_224C(rdram, ctx);
        goto after_2;
    // 0x4500B088: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x4500B08C: sw          $v0, 0x1DC($s0)
    MEM_W(0X1DC, ctx->r16) = ctx->r2;
    // 0x4500B090: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4500B094: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4500B098: jr          $ra
    // 0x4500B09C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x4500B09C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_mobj_main_B0A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500B0A0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x4500B0A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4500B0A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4500B0AC: addiu       $t6, $sp, 0x2C
    ctx->r14 = ADD32(ctx->r29, 0X2C);
    // 0x4500B0B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4500B0B4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x4500B0B8: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x4500B0BC: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    // 0x4500B0C0: jal         0x4500AE84
    // 0x4500B0C4: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    ovl_mobj_main_AE84(rdram, ctx);
        goto after_0;
    // 0x4500B0C4: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    after_0:
    // 0x4500B0C8: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x4500B0CC: lwc1        $f6, 0x204($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X204);
    // 0x4500B0D0: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x4500B0D4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4500B0D8: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x4500B0DC: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x4500B0E0: lwc1        $f16, 0x208($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X208);
    // 0x4500B0E4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4500B0E8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x4500B0EC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x4500B0F0: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x4500B0F4: lwc1        $f6, 0x20C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20C);
    // 0x4500B0F8: nop

    // 0x4500B0FC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4500B100: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x4500B104: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x4500B108: jal         0x450006C4
    // 0x4500B10C: nop

    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x4500B10C: nop

    after_1:
    // 0x4500B110: lw          $v0, 0x188($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X188);
    // 0x4500B114: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4500B118: slti        $at, $v0, 0x64
    ctx->r1 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
    // 0x4500B11C: beq         $at, $zero, L_4500B168
    if (ctx->r1 == 0) {
        // 0x4500B120: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_4500B168;
    }
    // 0x4500B120: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x4500B124: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4500B128: nop

    // 0x4500B12C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x4500B130: nop

    // 0x4500B134: bc1f        L_4500B16C
    if (!c1cs) {
        // 0x4500B138: slti        $at, $v0, 0x64
        ctx->r1 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
            goto L_4500B16C;
    }
    // 0x4500B138: slti        $at, $v0, 0x64
    ctx->r1 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
    // 0x4500B13C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x4500B140: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x4500B144: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x4500B148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500B14C: bc1f        L_4500B168
    if (!c1cs) {
        // 0x4500B150: lui         $a1, 0x42AA
        ctx->r5 = S32(0X42AA << 16);
            goto L_4500B168;
    }
    // 0x4500B150: lui         $a1, 0x42AA
    ctx->r5 = S32(0X42AA << 16);
    // 0x4500B154: sw          $t7, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->r15;
    // 0x4500B158: jal         0x4500B000
    // 0x4500B15C: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    ovl_mobj_main_B000(rdram, ctx);
        goto after_2;
    // 0x4500B15C: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    after_2:
    // 0x4500B160: b           L_4500B1CC
    // 0x4500B164: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4500B1CC;
    // 0x4500B164: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4500B168:
    // 0x4500B168: slti        $at, $v0, 0x64
    ctx->r1 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
L_4500B16C:
    // 0x4500B16C: bne         $at, $zero, L_4500B1C8
    if (ctx->r1 != 0) {
        // 0x4500B170: slti        $at, $v0, 0xC8
        ctx->r1 = SIGNED(ctx->r2) < 0XC8 ? 1 : 0;
            goto L_4500B1C8;
    }
    // 0x4500B170: slti        $at, $v0, 0xC8
    ctx->r1 = SIGNED(ctx->r2) < 0XC8 ? 1 : 0;
    // 0x4500B174: beq         $at, $zero, L_4500B1C8
    if (ctx->r1 == 0) {
        // 0x4500B178: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_4500B1C8;
    }
    // 0x4500B178: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x4500B17C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4500B180: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4500B184: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x4500B188: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x4500B18C: nop

    // 0x4500B190: bc1f        L_4500B1CC
    if (!c1cs) {
        // 0x4500B194: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_4500B1CC;
    }
    // 0x4500B194: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4500B198: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4500B19C: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x4500B1A0: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x4500B1A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500B1A8: bc1f        L_4500B1C8
    if (!c1cs) {
        // 0x4500B1AC: addiu       $a1, $zero, 0x17
        ctx->r5 = ADD32(0, 0X17);
            goto L_4500B1C8;
    }
    // 0x4500B1AC: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x4500B1B0: lw          $t8, 0x184($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X184);
    // 0x4500B1B4: sw          $zero, 0x188($s0)
    MEM_W(0X188, ctx->r16) = 0;
    // 0x4500B1B8: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x4500B1BC: sw          $t9, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r25;
    // 0x4500B1C0: jal         0x4500109C
    // 0x4500B1C4: addiu       $a2, $s0, 0x1DC
    ctx->r6 = ADD32(ctx->r16, 0X1DC);
    ovl_mobj_main_109C(rdram, ctx);
        goto after_3;
    // 0x4500B1C4: addiu       $a2, $s0, 0x1DC
    ctx->r6 = ADD32(ctx->r16, 0X1DC);
    after_3:
L_4500B1C8:
    // 0x4500B1C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4500B1CC:
    // 0x4500B1CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4500B1D0: jr          $ra
    // 0x4500B1D4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x4500B1D4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_mobj_main_B1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500B1D8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x4500B1DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4500B1E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4500B1E4: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x4500B1E8: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x4500B1EC: bne         $t6, $at, L_4500B298
    if (ctx->r14 != ctx->r1) {
        // 0x4500B1F0: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_4500B298;
    }
    // 0x4500B1F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4500B1F4: lw          $t7, 0x184($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X184);
    // 0x4500B1F8: nop

    // 0x4500B1FC: ori         $t8, $t7, 0x10
    ctx->r24 = ctx->r15 | 0X10;
    // 0x4500B200: andi        $t0, $t8, 0x10
    ctx->r8 = ctx->r24 & 0X10;
    // 0x4500B204: beq         $t0, $zero, L_4500B310
    if (ctx->r8 == 0) {
        // 0x4500B208: sw          $t8, 0x184($a0)
        MEM_W(0X184, ctx->r4) = ctx->r24;
            goto L_4500B310;
    }
    // 0x4500B208: sw          $t8, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r24;
    // 0x4500B20C: lw          $v1, 0x188($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X188);
    // 0x4500B210: nop

    // 0x4500B214: addiu       $t1, $v1, 0x1
    ctx->r9 = ADD32(ctx->r3, 0X1);
    // 0x4500B218: bne         $v1, $zero, L_4500B26C
    if (ctx->r3 != 0) {
        // 0x4500B21C: sw          $t1, 0x188($a0)
        MEM_W(0X188, ctx->r4) = ctx->r9;
            goto L_4500B26C;
    }
    // 0x4500B21C: sw          $t1, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->r9;
    // 0x4500B220: jal         0x45000340
    // 0x4500B224: nop

    ovl_mobj_main_340(rdram, ctx);
        goto after_0;
    // 0x4500B224: nop

    after_0:
    // 0x4500B228: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x4500B22C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4500B230: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x4500B234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500B238: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x4500B23C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x4500B240: jal         0x4500AF58
    // 0x4500B244: nop

    ovl_mobj_main_AF58(rdram, ctx);
        goto after_1;
    // 0x4500B244: nop

    after_1:
    // 0x4500B248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500B24C: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    // 0x4500B250: jal         0x4500B000
    // 0x4500B254: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    ovl_mobj_main_B000(rdram, ctx);
        goto after_2;
    // 0x4500B254: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    after_2:
    // 0x4500B258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500B25C: jal         0x45000FA0
    // 0x4500B260: addiu       $a1, $zero, 0x171
    ctx->r5 = ADD32(0, 0X171);
    ovl_mobj_main_FA0(rdram, ctx);
        goto after_3;
    // 0x4500B260: addiu       $a1, $zero, 0x171
    ctx->r5 = ADD32(0, 0X171);
    after_3:
    // 0x4500B264: b           L_4500B314
    // 0x4500B268: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4500B314;
    // 0x4500B268: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4500B26C:
    // 0x4500B26C: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
    // 0x4500B270: bne         $at, $zero, L_4500B310
    if (ctx->r1 != 0) {
        // 0x4500B274: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_4500B310;
    }
    // 0x4500B274: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x4500B278: bne         $v1, $at, L_4500B288
    if (ctx->r3 != ctx->r1) {
        // 0x4500B27C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4500B288;
    }
    // 0x4500B27C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500B280: jal         0x45000FA0
    // 0x4500B284: addiu       $a1, $zero, 0x172
    ctx->r5 = ADD32(0, 0X172);
    ovl_mobj_main_FA0(rdram, ctx);
        goto after_4;
    // 0x4500B284: addiu       $a1, $zero, 0x172
    ctx->r5 = ADD32(0, 0X172);
    after_4:
L_4500B288:
    // 0x4500B288: jal         0x4500B0A0
    // 0x4500B28C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_B0A0(rdram, ctx);
        goto after_5;
    // 0x4500B28C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x4500B290: b           L_4500B314
    // 0x4500B294: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4500B314;
    // 0x4500B294: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4500B298:
    // 0x4500B298: lw          $v0, 0x188($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X188);
    // 0x4500B29C: lw          $t3, 0x1DC($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1DC);
    // 0x4500B2A0: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x4500B2A4: slt         $at, $v0, $t3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x4500B2A8: bne         $at, $zero, L_4500B310
    if (ctx->r1 != 0) {
        // 0x4500B2AC: sw          $t2, 0x188($s0)
        MEM_W(0X188, ctx->r16) = ctx->r10;
            goto L_4500B310;
    }
    // 0x4500B2AC: sw          $t2, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->r10;
    // 0x4500B2B0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x4500B2B4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4500B2B8: jal         0x450006C4
    // 0x4500B2BC: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_6;
    // 0x4500B2BC: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_6:
    // 0x4500B2C0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x4500B2C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4500B2C8: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x4500B2CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500B2D0: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x4500B2D4: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x4500B2D8: jal         0x450056C8
    // 0x4500B2DC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    ovl_mobj_main_56C8(rdram, ctx);
        goto after_7;
    // 0x4500B2DC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x4500B2E0: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x4500B2E4: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    // 0x4500B2E8: jal         0x4500076C
    // 0x4500B2EC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    ovl_mobj_main_76C(rdram, ctx);
        goto after_8;
    // 0x4500B2EC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_8:
    // 0x4500B2F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500B2F4: jal         0x45000FA0
    // 0x4500B2F8: addiu       $a1, $zero, 0x147
    ctx->r5 = ADD32(0, 0X147);
    ovl_mobj_main_FA0(rdram, ctx);
        goto after_9;
    // 0x4500B2F8: addiu       $a1, $zero, 0x147
    ctx->r5 = ADD32(0, 0X147);
    after_9:
    // 0x4500B2FC: sw          $zero, 0x188($s0)
    MEM_W(0X188, ctx->r16) = 0;
    // 0x4500B300: jal         0x4500034C
    // 0x4500B304: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_mobj_main_34C(rdram, ctx);
        goto after_10;
    // 0x4500B304: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_10:
    // 0x4500B308: addiu       $t4, $v0, 0x5A
    ctx->r12 = ADD32(ctx->r2, 0X5A);
    // 0x4500B30C: sw          $t4, 0x1DC($s0)
    MEM_W(0X1DC, ctx->r16) = ctx->r12;
L_4500B310:
    // 0x4500B310: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4500B314:
    // 0x4500B314: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4500B318: jr          $ra
    // 0x4500B31C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x4500B31C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_mobj_main_B320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500B320: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4500B324: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4500B328: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4500B32C: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500B330: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4500B334: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x4500B338: beq         $t7, $zero, L_4500B50C
    if (ctx->r15 == 0) {
        // 0x4500B33C: nop
    
            goto L_4500B50C;
    }
    // 0x4500B33C: nop

    // 0x4500B340: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x4500B344: nop

    // 0x4500B348: slti        $at, $v0, 0x2F
    ctx->r1 = SIGNED(ctx->r2) < 0X2F ? 1 : 0;
    // 0x4500B34C: bne         $at, $zero, L_4500B3B0
    if (ctx->r1 != 0) {
        // 0x4500B350: slti        $at, $v0, 0xFA
        ctx->r1 = SIGNED(ctx->r2) < 0XFA ? 1 : 0;
            goto L_4500B3B0;
    }
    // 0x4500B350: slti        $at, $v0, 0xFA
    ctx->r1 = SIGNED(ctx->r2) < 0XFA ? 1 : 0;
    // 0x4500B354: bne         $at, $zero, L_4500B36C
    if (ctx->r1 != 0) {
        // 0x4500B358: addiu       $at, $zero, 0x114
        ctx->r1 = ADD32(0, 0X114);
            goto L_4500B36C;
    }
    // 0x4500B358: addiu       $at, $zero, 0x114
    ctx->r1 = ADD32(0, 0X114);
    // 0x4500B35C: beq         $v0, $at, L_4500B4B4
    if (ctx->r2 == ctx->r1) {
        // 0x4500B360: nop
    
            goto L_4500B4B4;
    }
    // 0x4500B360: nop

    // 0x4500B364: b           L_4500B504
    // 0x4500B368: nop

        goto L_4500B504;
    // 0x4500B368: nop

L_4500B36C:
    // 0x4500B36C: slti        $at, $v0, 0x38
    ctx->r1 = SIGNED(ctx->r2) < 0X38 ? 1 : 0;
    // 0x4500B370: bne         $at, $zero, L_4500B39C
    if (ctx->r1 != 0) {
        // 0x4500B374: addiu       $t8, $v0, -0x8C
        ctx->r24 = ADD32(ctx->r2, -0X8C);
            goto L_4500B39C;
    }
    // 0x4500B374: addiu       $t8, $v0, -0x8C
    ctx->r24 = ADD32(ctx->r2, -0X8C);
    // 0x4500B378: sltiu       $at, $t8, 0x6E
    ctx->r1 = ctx->r24 < 0X6E ? 1 : 0;
    // 0x4500B37C: beq         $at, $zero, L_4500B504
    if (ctx->r1 == 0) {
        // 0x4500B380: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_4500B504;
    }
    // 0x4500B380: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x4500B384: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500B388: addu        $at, $at, $t8
    gpr jr_addend_4500B394 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x4500B38C: lw          $t8, 0x2320($at)
    ctx->r24 = ADD32(ctx->r1, 0X2320);
    // 0x4500B390: nop

    // 0x4500B394: jr          $t8
    // 0x4500B398: nop

    switch (jr_addend_4500B394 >> 2) {
        case 0: goto L_4500B414; break;
        case 1: goto L_4500B504; break;
        case 2: goto L_4500B504; break;
        case 3: goto L_4500B504; break;
        case 4: goto L_4500B504; break;
        case 5: goto L_4500B504; break;
        case 6: goto L_4500B404; break;
        case 7: goto L_4500B504; break;
        case 8: goto L_4500B504; break;
        case 9: goto L_4500B504; break;
        case 10: goto L_4500B504; break;
        case 11: goto L_4500B3F4; break;
        case 12: goto L_4500B504; break;
        case 13: goto L_4500B504; break;
        case 14: goto L_4500B504; break;
        case 15: goto L_4500B504; break;
        case 16: goto L_4500B424; break;
        case 17: goto L_4500B504; break;
        case 18: goto L_4500B504; break;
        case 19: goto L_4500B504; break;
        case 20: goto L_4500B504; break;
        case 21: goto L_4500B504; break;
        case 22: goto L_4500B504; break;
        case 23: goto L_4500B4F4; break;
        case 24: goto L_4500B434; break;
        case 25: goto L_4500B504; break;
        case 26: goto L_4500B504; break;
        case 27: goto L_4500B504; break;
        case 28: goto L_4500B504; break;
        case 29: goto L_4500B504; break;
        case 30: goto L_4500B504; break;
        case 31: goto L_4500B504; break;
        case 32: goto L_4500B504; break;
        case 33: goto L_4500B444; break;
        case 34: goto L_4500B504; break;
        case 35: goto L_4500B504; break;
        case 36: goto L_4500B504; break;
        case 37: goto L_4500B504; break;
        case 38: goto L_4500B504; break;
        case 39: goto L_4500B504; break;
        case 40: goto L_4500B504; break;
        case 41: goto L_4500B504; break;
        case 42: goto L_4500B504; break;
        case 43: goto L_4500B504; break;
        case 44: goto L_4500B504; break;
        case 45: goto L_4500B504; break;
        case 46: goto L_4500B504; break;
        case 47: goto L_4500B504; break;
        case 48: goto L_4500B504; break;
        case 49: goto L_4500B504; break;
        case 50: goto L_4500B504; break;
        case 51: goto L_4500B504; break;
        case 52: goto L_4500B504; break;
        case 53: goto L_4500B454; break;
        case 54: goto L_4500B504; break;
        case 55: goto L_4500B504; break;
        case 56: goto L_4500B504; break;
        case 57: goto L_4500B504; break;
        case 58: goto L_4500B504; break;
        case 59: goto L_4500B504; break;
        case 60: goto L_4500B504; break;
        case 61: goto L_4500B504; break;
        case 62: goto L_4500B504; break;
        case 63: goto L_4500B504; break;
        case 64: goto L_4500B4E4; break;
        case 65: goto L_4500B504; break;
        case 66: goto L_4500B504; break;
        case 67: goto L_4500B504; break;
        case 68: goto L_4500B504; break;
        case 69: goto L_4500B504; break;
        case 70: goto L_4500B504; break;
        case 71: goto L_4500B504; break;
        case 72: goto L_4500B504; break;
        case 73: goto L_4500B504; break;
        case 74: goto L_4500B504; break;
        case 75: goto L_4500B504; break;
        case 76: goto L_4500B4D4; break;
        case 77: goto L_4500B4C4; break;
        case 78: goto L_4500B504; break;
        case 79: goto L_4500B504; break;
        case 80: goto L_4500B504; break;
        case 81: goto L_4500B504; break;
        case 82: goto L_4500B504; break;
        case 83: goto L_4500B504; break;
        case 84: goto L_4500B504; break;
        case 85: goto L_4500B504; break;
        case 86: goto L_4500B464; break;
        case 87: goto L_4500B504; break;
        case 88: goto L_4500B504; break;
        case 89: goto L_4500B504; break;
        case 90: goto L_4500B504; break;
        case 91: goto L_4500B504; break;
        case 92: goto L_4500B504; break;
        case 93: goto L_4500B4A4; break;
        case 94: goto L_4500B474; break;
        case 95: goto L_4500B504; break;
        case 96: goto L_4500B504; break;
        case 97: goto L_4500B504; break;
        case 98: goto L_4500B504; break;
        case 99: goto L_4500B504; break;
        case 100: goto L_4500B504; break;
        case 101: goto L_4500B504; break;
        case 102: goto L_4500B504; break;
        case 103: goto L_4500B504; break;
        case 104: goto L_4500B504; break;
        case 105: goto L_4500B504; break;
        case 106: goto L_4500B504; break;
        case 107: goto L_4500B504; break;
        case 108: goto L_4500B504; break;
        case 109: goto L_4500B484; break;
        default: switch_error(__func__, 0x4500B394, 0x45012320);
    }
    // 0x4500B398: nop

L_4500B39C:
    // 0x4500B39C: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    // 0x4500B3A0: beq         $v0, $at, L_4500B494
    if (ctx->r2 == ctx->r1) {
        // 0x4500B3A4: nop
    
            goto L_4500B494;
    }
    // 0x4500B3A4: nop

    // 0x4500B3A8: b           L_4500B504
    // 0x4500B3AC: nop

        goto L_4500B504;
    // 0x4500B3AC: nop

L_4500B3B0:
    // 0x4500B3B0: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x4500B3B4: beq         $v0, $at, L_4500B3E4
    if (ctx->r2 == ctx->r1) {
        // 0x4500B3B8: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_4500B3E4;
    }
    // 0x4500B3B8: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x4500B3BC: beq         $v0, $at, L_4500B3D4
    if (ctx->r2 == ctx->r1) {
        // 0x4500B3C0: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_4500B3D4;
    }
    // 0x4500B3C0: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x4500B3C4: beq         $v0, $at, L_4500B3E4
    if (ctx->r2 == ctx->r1) {
        // 0x4500B3C8: nop
    
            goto L_4500B3E4;
    }
    // 0x4500B3C8: nop

    // 0x4500B3CC: b           L_4500B504
    // 0x4500B3D0: nop

        goto L_4500B504;
    // 0x4500B3D0: nop

L_4500B3D4:
    // 0x4500B3D4: jal         0x45006ED0
    // 0x4500B3D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_6ED0(rdram, ctx);
        goto after_0;
    // 0x4500B3D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x4500B3DC: b           L_4500B510
    // 0x4500B3E0: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
        goto L_4500B510;
    // 0x4500B3E0: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_4500B3E4:
    // 0x4500B3E4: jal         0x45006F80
    // 0x4500B3E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_6F80(rdram, ctx);
        goto after_1;
    // 0x4500B3E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4500B3EC: b           L_4500B510
    // 0x4500B3F0: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
        goto L_4500B510;
    // 0x4500B3F0: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_4500B3F4:
    // 0x4500B3F4: jal         0x4500709C
    // 0x4500B3F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_709C(rdram, ctx);
        goto after_2;
    // 0x4500B3F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x4500B3FC: b           L_4500B510
    // 0x4500B400: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
        goto L_4500B510;
    // 0x4500B400: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_4500B404:
    // 0x4500B404: jal         0x45007288
    // 0x4500B408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_7288(rdram, ctx);
        goto after_3;
    // 0x4500B408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x4500B40C: b           L_4500B510
    // 0x4500B410: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
        goto L_4500B510;
    // 0x4500B410: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_4500B414:
    // 0x4500B414: jal         0x4500741C
    // 0x4500B418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_741C(rdram, ctx);
        goto after_4;
    // 0x4500B418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4500B41C: b           L_4500B510
    // 0x4500B420: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
        goto L_4500B510;
    // 0x4500B420: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_4500B424:
    // 0x4500B424: jal         0x450077F8
    // 0x4500B428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_77F8(rdram, ctx);
        goto after_5;
    // 0x4500B428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x4500B42C: b           L_4500B510
    // 0x4500B430: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
        goto L_4500B510;
    // 0x4500B430: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_4500B434:
    // 0x4500B434: jal         0x45007E58
    // 0x4500B438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_7E58(rdram, ctx);
        goto after_6;
    // 0x4500B438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x4500B43C: b           L_4500B510
    // 0x4500B440: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
        goto L_4500B510;
    // 0x4500B440: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_4500B444:
    // 0x4500B444: jal         0x45007F60
    // 0x4500B448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_7F60(rdram, ctx);
        goto after_7;
    // 0x4500B448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x4500B44C: b           L_4500B510
    // 0x4500B450: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
        goto L_4500B510;
    // 0x4500B450: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_4500B454:
    // 0x4500B454: jal         0x450080F0
    // 0x4500B458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_80F0(rdram, ctx);
        goto after_8;
    // 0x4500B458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x4500B45C: b           L_4500B510
    // 0x4500B460: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
        goto L_4500B510;
    // 0x4500B460: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_4500B464:
    // 0x4500B464: jal         0x45008318
    // 0x4500B468: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_8318(rdram, ctx);
        goto after_9;
    // 0x4500B468: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x4500B46C: b           L_4500B510
    // 0x4500B470: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
        goto L_4500B510;
    // 0x4500B470: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_4500B474:
    // 0x4500B474: jal         0x45009874
    // 0x4500B478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_9874(rdram, ctx);
        goto after_10;
    // 0x4500B478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x4500B47C: b           L_4500B510
    // 0x4500B480: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
        goto L_4500B510;
    // 0x4500B480: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_4500B484:
    // 0x4500B484: jal         0x45008800
    // 0x4500B488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_8800(rdram, ctx);
        goto after_11;
    // 0x4500B488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x4500B48C: b           L_4500B510
    // 0x4500B490: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
        goto L_4500B510;
    // 0x4500B490: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_4500B494:
    // 0x4500B494: jal         0x45008918
    // 0x4500B498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_8918(rdram, ctx);
        goto after_12;
    // 0x4500B498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x4500B49C: b           L_4500B510
    // 0x4500B4A0: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
        goto L_4500B510;
    // 0x4500B4A0: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_4500B4A4:
    // 0x4500B4A4: jal         0x45008BA0
    // 0x4500B4A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_8BA0(rdram, ctx);
        goto after_13;
    // 0x4500B4A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x4500B4AC: b           L_4500B510
    // 0x4500B4B0: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
        goto L_4500B510;
    // 0x4500B4B0: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_4500B4B4:
    // 0x4500B4B4: jal         0x450091BC
    // 0x4500B4B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_91BC(rdram, ctx);
        goto after_14;
    // 0x4500B4B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x4500B4BC: b           L_4500B510
    // 0x4500B4C0: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
        goto L_4500B510;
    // 0x4500B4C0: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_4500B4C4:
    // 0x4500B4C4: jal         0x45009D10
    // 0x4500B4C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_9D10(rdram, ctx);
        goto after_15;
    // 0x4500B4C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x4500B4CC: b           L_4500B510
    // 0x4500B4D0: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
        goto L_4500B510;
    // 0x4500B4D0: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_4500B4D4:
    // 0x4500B4D4: jal         0x45009408
    // 0x4500B4D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_9408(rdram, ctx);
        goto after_16;
    // 0x4500B4D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x4500B4DC: b           L_4500B510
    // 0x4500B4E0: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
        goto L_4500B510;
    // 0x4500B4E0: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_4500B4E4:
    // 0x4500B4E4: jal         0x45009468
    // 0x4500B4E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_9468(rdram, ctx);
        goto after_17;
    // 0x4500B4E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x4500B4EC: b           L_4500B510
    // 0x4500B4F0: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
        goto L_4500B510;
    // 0x4500B4F0: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_4500B4F4:
    // 0x4500B4F4: jal         0x4500670C
    // 0x4500B4F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_670C(rdram, ctx);
        goto after_18;
    // 0x4500B4F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x4500B4FC: b           L_4500B510
    // 0x4500B500: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
        goto L_4500B510;
    // 0x4500B500: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_4500B504:
    // 0x4500B504: jal         0x450069EC
    // 0x4500B508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_69EC(rdram, ctx);
        goto after_19;
    // 0x4500B508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
L_4500B50C:
    // 0x4500B50C: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
L_4500B510:
    // 0x4500B510: addiu       $at, $zero, 0x8C
    ctx->r1 = ADD32(0, 0X8C);
    // 0x4500B514: bne         $t9, $at, L_4500B528
    if (ctx->r25 != ctx->r1) {
        // 0x4500B518: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4500B528;
    }
    // 0x4500B518: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4500B51C: jal         0x45007494
    // 0x4500B520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_7494(rdram, ctx);
        goto after_20;
    // 0x4500B520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x4500B524: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4500B528:
    // 0x4500B528: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4500B52C: jr          $ra
    // 0x4500B530: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x4500B530: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_mobj_main_B534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500B534: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x4500B538: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4500B53C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4500B540: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4500B544: jal         0x45000DE4
    // 0x4500B548: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_mobj_main_DE4(rdram, ctx);
        goto after_0;
    // 0x4500B548: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x4500B54C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x4500B550: lw          $t6, 0x1CC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1CC);
    // 0x4500B554: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4500B558: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x4500B55C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4500B560: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x4500B564: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    // 0x4500B568: jal         0x450006C4
    // 0x4500B56C: swc1        $f2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f2.u32l;
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x4500B56C: swc1        $f2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x4500B570: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x4500B574: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x4500B578: lwc1        $f2, 0x48($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X48);
    // 0x4500B57C: bne         $v0, $zero, L_4500B61C
    if (ctx->r2 != 0) {
        // 0x4500B580: nop
    
            goto L_4500B61C;
    }
    // 0x4500B580: nop

    // 0x4500B584: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x4500B588: lwc1        $f6, 0x204($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X204);
    // 0x4500B58C: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x4500B590: lwc1        $f18, 0x20C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20C);
    // 0x4500B594: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x4500B598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500B59C: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x4500B5A0: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x4500B5A4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x4500B5A8: jal         0x45005780
    // 0x4500B5AC: nop

    ovl_mobj_main_5780(rdram, ctx);
        goto after_2;
    // 0x4500B5AC: nop

    after_2:
    // 0x4500B5B0: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x4500B5B4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x4500B5B8: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500B5BC: lwc1        $f6, 0x24D8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X24D8);
    // 0x4500B5C0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x4500B5C4: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x4500B5C8: nop

    // 0x4500B5CC: bc1f        L_4500B5DC
    if (!c1cs) {
        // 0x4500B5D0: nop
    
            goto L_4500B5DC;
    }
    // 0x4500B5D0: nop

    // 0x4500B5D4: b           L_4500B618
    // 0x4500B5D8: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
        goto L_4500B618;
    // 0x4500B5D8: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
L_4500B5DC:
    // 0x4500B5DC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4500B5E0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x4500B5E4: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x4500B5E8: nop

    // 0x4500B5EC: bc1f        L_4500B618
    if (!c1cs) {
        // 0x4500B5F0: nop
    
            goto L_4500B618;
    }
    // 0x4500B5F0: nop

    // 0x4500B5F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4500B5F8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x4500B5FC: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x4500B600: nop

    // 0x4500B604: bc1f        L_4500B618
    if (!c1cs) {
        // 0x4500B608: nop
    
            goto L_4500B618;
    }
    // 0x4500B608: nop

    // 0x4500B60C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4500B610: nop

    // 0x4500B614: add.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f18.fl;
L_4500B618:
    // 0x4500B618: sub.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f14.fl;
L_4500B61C:
    // 0x4500B61C: lwc1        $f0, 0x1DC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1DC);
    // 0x4500B620: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x4500B624: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x4500B628: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x4500B62C: bc1f        L_4500B64C
    if (!c1cs) {
        // 0x4500B630: addiu       $a2, $sp, 0x4C
        ctx->r6 = ADD32(ctx->r29, 0X4C);
            goto L_4500B64C;
    }
    // 0x4500B630: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x4500B634: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x4500B638: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4500B63C: nop

    // 0x4500B640: add.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x4500B644: b           L_4500B660
    // 0x4500B648: swc1        $f4, 0x1DC($s0)
    MEM_W(0X1DC, ctx->r16) = ctx->f4.u32l;
        goto L_4500B660;
    // 0x4500B648: swc1        $f4, 0x1DC($s0)
    MEM_W(0X1DC, ctx->r16) = ctx->f4.u32l;
L_4500B64C:
    // 0x4500B64C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x4500B650: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4500B654: nop

    // 0x4500B658: sub.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x4500B65C: swc1        $f6, 0x1DC($s0)
    MEM_W(0X1DC, ctx->r16) = ctx->f6.u32l;
L_4500B660:
    // 0x4500B660: lwc1        $f0, 0x1DC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1DC);
    // 0x4500B664: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x4500B668: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x4500B66C: nop

    // 0x4500B670: bc1f        L_4500B684
    if (!c1cs) {
        // 0x4500B674: nop
    
            goto L_4500B684;
    }
    // 0x4500B674: nop

    // 0x4500B678: sub.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x4500B67C: b           L_4500B688
    // 0x4500B680: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_4500B688;
    // 0x4500B680: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_4500B684:
    // 0x4500B684: sub.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f0.fl;
L_4500B688:
    // 0x4500B688: c.le.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl <= ctx->f16.fl;
    // 0x4500B68C: nop

    // 0x4500B690: bc1f        L_4500B6A4
    if (!c1cs) {
        // 0x4500B694: nop
    
            goto L_4500B6A4;
    }
    // 0x4500B694: nop

    // 0x4500B698: swc1        $f2, 0x1DC($s0)
    MEM_W(0X1DC, ctx->r16) = ctx->f2.u32l;
    // 0x4500B69C: lwc1        $f0, 0x1DC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1DC);
    // 0x4500B6A0: nop

L_4500B6A4:
    // 0x4500B6A4: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x4500B6A8: nop

    // 0x4500B6AC: bc1f        L_4500B6C4
    if (!c1cs) {
        // 0x4500B6B0: nop
    
            goto L_4500B6C4;
    }
    // 0x4500B6B0: nop

    // 0x4500B6B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4500B6B8: nop

    // 0x4500B6BC: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x4500B6C0: swc1        $f10, 0x1DC($s0)
    MEM_W(0X1DC, ctx->r16) = ctx->f10.u32l;
L_4500B6C4:
    // 0x4500B6C4: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x4500B6C8: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500B6CC: lwc1        $f4, 0x1DC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1DC);
    // 0x4500B6D0: lwc1        $f9, 0x24E0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X24E0);
    // 0x4500B6D4: lwc1        $f8, 0x24E4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X24E4);
    // 0x4500B6D8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x4500B6DC: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x4500B6E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4500B6E4: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x4500B6E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4500B6EC: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x4500B6F0: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x4500B6F4: jal         0x45000F34
    // 0x4500B6F8: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_3;
    // 0x4500B6F8: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x4500B6FC: lw          $v0, 0x1E0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1E0);
    // 0x4500B700: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x4500B704: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x4500B708: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x4500B70C: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x4500B710: sw          $t7, 0x1E0($s0)
    MEM_W(0X1E0, ctx->r16) = ctx->r15;
    // 0x4500B714: beq         $v0, $at, L_4500B740
    if (ctx->r2 == ctx->r1) {
        // 0x4500B718: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_4500B740;
    }
    // 0x4500B718: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x4500B71C: addiu       $at, $zero, 0x44
    ctx->r1 = ADD32(0, 0X44);
    // 0x4500B720: beq         $v0, $at, L_4500B740
    if (ctx->r2 == ctx->r1) {
        // 0x4500B724: addiu       $at, $zero, 0x4C
        ctx->r1 = ADD32(0, 0X4C);
            goto L_4500B740;
    }
    // 0x4500B724: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    // 0x4500B728: beq         $v0, $at, L_4500B740
    if (ctx->r2 == ctx->r1) {
        // 0x4500B72C: addiu       $at, $zero, 0x54
        ctx->r1 = ADD32(0, 0X54);
            goto L_4500B740;
    }
    // 0x4500B72C: addiu       $at, $zero, 0x54
    ctx->r1 = ADD32(0, 0X54);
    // 0x4500B730: beq         $v0, $at, L_4500B740
    if (ctx->r2 == ctx->r1) {
        // 0x4500B734: addiu       $at, $zero, 0x5C
        ctx->r1 = ADD32(0, 0X5C);
            goto L_4500B740;
    }
    // 0x4500B734: addiu       $at, $zero, 0x5C
    ctx->r1 = ADD32(0, 0X5C);
    // 0x4500B738: bne         $v0, $at, L_4500B7B0
    if (ctx->r2 != ctx->r1) {
        // 0x4500B73C: slti        $at, $v1, 0x5C
        ctx->r1 = SIGNED(ctx->r3) < 0X5C ? 1 : 0;
            goto L_4500B7B0;
    }
    // 0x4500B73C: slti        $at, $v1, 0x5C
    ctx->r1 = SIGNED(ctx->r3) < 0X5C ? 1 : 0;
L_4500B740:
    // 0x4500B740: lwc1        $f6, 0x1DC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1DC);
    // 0x4500B744: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500B748: add.s       $f0, $f6, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x4500B74C: lwc1        $f8, 0x24E8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X24E8);
    // 0x4500B750: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4500B754: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x4500B758: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x4500B75C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500B760: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x4500B764: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x4500B768: jal         0x450056C8
    // 0x4500B76C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_mobj_main_56C8(rdram, ctx);
        goto after_4;
    // 0x4500B76C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x4500B770: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500B774: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x4500B778: lwc1        $f18, 0x24EC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X24EC);
    // 0x4500B77C: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x4500B780: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4500B784: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x4500B788: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    // 0x4500B78C: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x4500B790: jal         0x4500076C
    // 0x4500B794: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    ovl_mobj_main_76C(rdram, ctx);
        goto after_5;
    // 0x4500B794: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_5:
    // 0x4500B798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500B79C: jal         0x45000FA0
    // 0x4500B7A0: addiu       $a1, $zero, 0x1A8
    ctx->r5 = ADD32(0, 0X1A8);
    ovl_mobj_main_FA0(rdram, ctx);
        goto after_6;
    // 0x4500B7A0: addiu       $a1, $zero, 0x1A8
    ctx->r5 = ADD32(0, 0X1A8);
    after_6:
    // 0x4500B7A4: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x4500B7A8: nop

    // 0x4500B7AC: slti        $at, $v1, 0x5C
    ctx->r1 = SIGNED(ctx->r3) < 0X5C ? 1 : 0;
L_4500B7B0:
    // 0x4500B7B0: bne         $at, $zero, L_4500B7C0
    if (ctx->r1 != 0) {
        // 0x4500B7B4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_4500B7C0;
    }
    // 0x4500B7B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4500B7B8: sw          $zero, 0x1E0($s0)
    MEM_W(0X1E0, ctx->r16) = 0;
    // 0x4500B7BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4500B7C0:
    // 0x4500B7C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4500B7C4: jr          $ra
    // 0x4500B7C8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x4500B7C8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void ovl_mobj_main_B7CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500B7CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500B7D0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4500B7D4: beq         $a1, $at, L_4500B7E4
    if (ctx->r5 == ctx->r1) {
        // 0x4500B7D8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4500B7E4;
    }
    // 0x4500B7D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500B7DC: jal         0x45000FA0
    // 0x4500B7E0: nop

    ovl_mobj_main_FA0(rdram, ctx);
        goto after_0;
    // 0x4500B7E0: nop

    after_0:
L_4500B7E4:
    // 0x4500B7E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500B7E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500B7EC: jr          $ra
    // 0x4500B7F0: nop

    return;
    // 0x4500B7F0: nop

;}
RECOMP_FUNC void ovl_mobj_main_B7F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500B7F4: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x4500B7F8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x4500B7FC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x4500B800: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x4500B804: lw          $a1, 0x184($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X184);
    // 0x4500B808: lw          $a2, 0xC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC);
    // 0x4500B80C: andi        $t6, $a1, 0x4
    ctx->r14 = ctx->r5 & 0X4;
    // 0x4500B810: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x4500B814: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x4500B818: beq         $t6, $zero, L_4500BFDC
    if (ctx->r14 == 0) {
        // 0x4500B81C: or          $v1, $a2, $zero
        ctx->r3 = ctx->r6 | 0;
            goto L_4500BFDC;
    }
    // 0x4500B81C: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x4500B820: lw          $v0, 0x218($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X218);
    // 0x4500B824: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x4500B828: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x4500B82C: and         $t7, $a1, $at
    ctx->r15 = ctx->r5 & ctx->r1;
    // 0x4500B830: sw          $t7, 0x184($s1)
    MEM_W(0X184, ctx->r17) = ctx->r15;
    // 0x4500B834: beq         $v0, $a0, L_4500BCC4
    if (ctx->r2 == ctx->r4) {
        // 0x4500B838: sw          $zero, 0x188($s1)
        MEM_W(0X188, ctx->r17) = 0;
            goto L_4500BCC4;
    }
    // 0x4500B838: sw          $zero, 0x188($s1)
    MEM_W(0X188, ctx->r17) = 0;
    // 0x4500B83C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4500B840: beq         $v0, $at, L_4500B968
    if (ctx->r2 == ctx->r1) {
        // 0x4500B844: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_4500B968;
    }
    // 0x4500B844: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4500B848: bne         $v0, $at, L_4500BFD0
    if (ctx->r2 != ctx->r1) {
        // 0x4500B84C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4500BFD0;
    }
    // 0x4500B84C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500B850: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x4500B854: beq         $v1, $at, L_4500B8A0
    if (ctx->r3 == ctx->r1) {
        // 0x4500B858: addiu       $t8, $zero, 0x251
        ctx->r24 = ADD32(0, 0X251);
            goto L_4500B8A0;
    }
    // 0x4500B858: addiu       $t8, $zero, 0x251
    ctx->r24 = ADD32(0, 0X251);
    // 0x4500B85C: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x4500B860: beq         $v1, $at, L_4500B8AC
    if (ctx->r3 == ctx->r1) {
        // 0x4500B864: addiu       $t9, $zero, 0x24D
        ctx->r25 = ADD32(0, 0X24D);
            goto L_4500B8AC;
    }
    // 0x4500B864: addiu       $t9, $zero, 0x24D
    ctx->r25 = ADD32(0, 0X24D);
    // 0x4500B868: addiu       $at, $zero, 0x4D
    ctx->r1 = ADD32(0, 0X4D);
    // 0x4500B86C: beq         $v1, $at, L_4500B8B8
    if (ctx->r3 == ctx->r1) {
        // 0x4500B870: addiu       $t0, $zero, 0x2A2
        ctx->r8 = ADD32(0, 0X2A2);
            goto L_4500B8B8;
    }
    // 0x4500B870: addiu       $t0, $zero, 0x2A2
    ctx->r8 = ADD32(0, 0X2A2);
    // 0x4500B874: addiu       $at, $zero, 0x58
    ctx->r1 = ADD32(0, 0X58);
    // 0x4500B878: beq         $v1, $at, L_4500B8C4
    if (ctx->r3 == ctx->r1) {
        // 0x4500B87C: addiu       $t1, $zero, 0x2B5
        ctx->r9 = ADD32(0, 0X2B5);
            goto L_4500B8C4;
    }
    // 0x4500B87C: addiu       $t1, $zero, 0x2B5
    ctx->r9 = ADD32(0, 0X2B5);
    // 0x4500B880: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x4500B884: beq         $v1, $at, L_4500B8D0
    if (ctx->r3 == ctx->r1) {
        // 0x4500B888: addiu       $t2, $zero, 0x2F0
        ctx->r10 = ADD32(0, 0X2F0);
            goto L_4500B8D0;
    }
    // 0x4500B888: addiu       $t2, $zero, 0x2F0
    ctx->r10 = ADD32(0, 0X2F0);
    // 0x4500B88C: addiu       $at, $zero, 0xC6
    ctx->r1 = ADD32(0, 0XC6);
    // 0x4500B890: beq         $v1, $at, L_4500B8DC
    if (ctx->r3 == ctx->r1) {
        // 0x4500B894: nop
    
            goto L_4500B8DC;
    }
    // 0x4500B894: nop

    // 0x4500B898: b           L_4500B8E4
    // 0x4500B89C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
        goto L_4500B8E4;
    // 0x4500B89C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
L_4500B8A0:
    // 0x4500B8A0: sw          $t8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r24;
    // 0x4500B8A4: b           L_4500B8E0
    // 0x4500B8A8: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
        goto L_4500B8E0;
    // 0x4500B8A8: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
L_4500B8AC:
    // 0x4500B8AC: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    // 0x4500B8B0: b           L_4500B8E0
    // 0x4500B8B4: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
        goto L_4500B8E0;
    // 0x4500B8B4: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
L_4500B8B8:
    // 0x4500B8B8: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x4500B8BC: b           L_4500B8E0
    // 0x4500B8C0: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
        goto L_4500B8E0;
    // 0x4500B8C0: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
L_4500B8C4:
    // 0x4500B8C4: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    // 0x4500B8C8: b           L_4500B8E0
    // 0x4500B8CC: addiu       $s0, $zero, 0xD8
    ctx->r16 = ADD32(0, 0XD8);
        goto L_4500B8E0;
    // 0x4500B8CC: addiu       $s0, $zero, 0xD8
    ctx->r16 = ADD32(0, 0XD8);
L_4500B8D0:
    // 0x4500B8D0: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
    // 0x4500B8D4: b           L_4500B8E0
    // 0x4500B8D8: addiu       $s0, $zero, 0xD8
    ctx->r16 = ADD32(0, 0XD8);
        goto L_4500B8E0;
    // 0x4500B8D8: addiu       $s0, $zero, 0xD8
    ctx->r16 = ADD32(0, 0XD8);
L_4500B8DC:
    // 0x4500B8DC: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
L_4500B8E0:
    // 0x4500B8E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
L_4500B8E4:
    // 0x4500B8E4: jal         0x4500B7CC
    // 0x4500B8E8: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    ovl_mobj_main_B7CC(rdram, ctx);
        goto after_0;
    // 0x4500B8E8: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    after_0:
    // 0x4500B8EC: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x4500B8F0: addiu       $at, $zero, 0xC6
    ctx->r1 = ADD32(0, 0XC6);
    // 0x4500B8F4: beq         $v1, $at, L_4500BFD0
    if (ctx->r3 == ctx->r1) {
        // 0x4500B8F8: addiu       $at, $zero, 0x58
        ctx->r1 = ADD32(0, 0X58);
            goto L_4500BFD0;
    }
    // 0x4500B8F8: addiu       $at, $zero, 0x58
    ctx->r1 = ADD32(0, 0X58);
    // 0x4500B8FC: beq         $v1, $at, L_4500B938
    if (ctx->r3 == ctx->r1) {
        // 0x4500B900: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4500B938;
    }
    // 0x4500B900: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500B904: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4500B908: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4500B90C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4500B910: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x4500B914: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500B918: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x4500B91C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4500B920: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x4500B924: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x4500B928: jal         0x450075DC
    // 0x4500B92C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_1;
    // 0x4500B92C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x4500B930: b           L_4500BFD4
    // 0x4500B934: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
        goto L_4500BFD4;
    // 0x4500B934: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
L_4500B938:
    // 0x4500B938: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4500B93C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4500B940: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4500B944: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x4500B948: addiu       $a2, $zero, 0x2B4
    ctx->r6 = ADD32(0, 0X2B4);
    // 0x4500B94C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4500B950: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x4500B954: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x4500B958: jal         0x450075DC
    // 0x4500B95C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_2;
    // 0x4500B95C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x4500B960: b           L_4500BFD4
    // 0x4500B964: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
        goto L_4500BFD4;
    // 0x4500B964: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
L_4500B968:
    // 0x4500B968: slti        $at, $v1, 0xF4
    ctx->r1 = SIGNED(ctx->r3) < 0XF4 ? 1 : 0;
    // 0x4500B96C: bne         $at, $zero, L_4500B988
    if (ctx->r1 != 0) {
        // 0x4500B970: addiu       $t3, $v1, -0x1B
        ctx->r11 = ADD32(ctx->r3, -0X1B);
            goto L_4500B988;
    }
    // 0x4500B970: addiu       $t3, $v1, -0x1B
    ctx->r11 = ADD32(ctx->r3, -0X1B);
    // 0x4500B974: addiu       $at, $zero, 0x11C
    ctx->r1 = ADD32(0, 0X11C);
    // 0x4500B978: beq         $v1, $at, L_4500BBB0
    if (ctx->r3 == ctx->r1) {
        // 0x4500B97C: addiu       $t1, $zero, 0x22C
        ctx->r9 = ADD32(0, 0X22C);
            goto L_4500BBB0;
    }
    // 0x4500B97C: addiu       $t1, $zero, 0x22C
    ctx->r9 = ADD32(0, 0X22C);
    // 0x4500B980: b           L_4500BC10
    // 0x4500B984: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_4500BC10;
    // 0x4500B984: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_4500B988:
    // 0x4500B988: sltiu       $at, $t3, 0xD9
    ctx->r1 = ctx->r11 < 0XD9 ? 1 : 0;
    // 0x4500B98C: beq         $at, $zero, L_4500BC0C
    if (ctx->r1 == 0) {
        // 0x4500B990: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_4500BC0C;
    }
    // 0x4500B990: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x4500B994: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500B998: addu        $at, $at, $t3
    gpr jr_addend_4500B9A4 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x4500B99C: lw          $t3, 0x24F0($at)
    ctx->r11 = ADD32(ctx->r1, 0X24F0);
    // 0x4500B9A0: nop

    // 0x4500B9A4: jr          $t3
    // 0x4500B9A8: nop

    switch (jr_addend_4500B9A4 >> 2) {
        case 0: goto L_4500B9AC; break;
        case 1: goto L_4500BC0C; break;
        case 2: goto L_4500BC0C; break;
        case 3: goto L_4500BC0C; break;
        case 4: goto L_4500BC0C; break;
        case 5: goto L_4500BC0C; break;
        case 6: goto L_4500B9BC; break;
        case 7: goto L_4500BC0C; break;
        case 8: goto L_4500BC0C; break;
        case 9: goto L_4500BC0C; break;
        case 10: goto L_4500BC0C; break;
        case 11: goto L_4500BC0C; break;
        case 12: goto L_4500BC0C; break;
        case 13: goto L_4500B9CC; break;
        case 14: goto L_4500BC0C; break;
        case 15: goto L_4500BC0C; break;
        case 16: goto L_4500B9DC; break;
        case 17: goto L_4500BC0C; break;
        case 18: goto L_4500BC0C; break;
        case 19: goto L_4500BC0C; break;
        case 20: goto L_4500BC0C; break;
        case 21: goto L_4500BC0C; break;
        case 22: goto L_4500BC0C; break;
        case 23: goto L_4500B9EC; break;
        case 24: goto L_4500B9FC; break;
        case 25: goto L_4500BC0C; break;
        case 26: goto L_4500BC0C; break;
        case 27: goto L_4500BC0C; break;
        case 28: goto L_4500BC0C; break;
        case 29: goto L_4500BC0C; break;
        case 30: goto L_4500BC0C; break;
        case 31: goto L_4500BC0C; break;
        case 32: goto L_4500BC0C; break;
        case 33: goto L_4500BC0C; break;
        case 34: goto L_4500BC0C; break;
        case 35: goto L_4500BC0C; break;
        case 36: goto L_4500BC0C; break;
        case 37: goto L_4500BC0C; break;
        case 38: goto L_4500BC0C; break;
        case 39: goto L_4500BC0C; break;
        case 40: goto L_4500BC0C; break;
        case 41: goto L_4500BA0C; break;
        case 42: goto L_4500BA1C; break;
        case 43: goto L_4500BC0C; break;
        case 44: goto L_4500BA2C; break;
        case 45: goto L_4500BC0C; break;
        case 46: goto L_4500BC0C; break;
        case 47: goto L_4500BA3C; break;
        case 48: goto L_4500BC0C; break;
        case 49: goto L_4500BC0C; break;
        case 50: goto L_4500BC0C; break;
        case 51: goto L_4500BC0C; break;
        case 52: goto L_4500BC0C; break;
        case 53: goto L_4500BC0C; break;
        case 54: goto L_4500BC0C; break;
        case 55: goto L_4500BC0C; break;
        case 56: goto L_4500BC0C; break;
        case 57: goto L_4500BC0C; break;
        case 58: goto L_4500BC0C; break;
        case 59: goto L_4500BC0C; break;
        case 60: goto L_4500BC0C; break;
        case 61: goto L_4500BA4C; break;
        case 62: goto L_4500BC0C; break;
        case 63: goto L_4500BC0C; break;
        case 64: goto L_4500BC0C; break;
        case 65: goto L_4500BC0C; break;
        case 66: goto L_4500BC0C; break;
        case 67: goto L_4500BC0C; break;
        case 68: goto L_4500BC0C; break;
        case 69: goto L_4500BC0C; break;
        case 70: goto L_4500BC0C; break;
        case 71: goto L_4500BC0C; break;
        case 72: goto L_4500BC0C; break;
        case 73: goto L_4500BC0C; break;
        case 74: goto L_4500BC0C; break;
        case 75: goto L_4500BA5C; break;
        case 76: goto L_4500BC0C; break;
        case 77: goto L_4500BC0C; break;
        case 78: goto L_4500BC0C; break;
        case 79: goto L_4500BC0C; break;
        case 80: goto L_4500BC0C; break;
        case 81: goto L_4500BC0C; break;
        case 82: goto L_4500BC0C; break;
        case 83: goto L_4500BC0C; break;
        case 84: goto L_4500BC0C; break;
        case 85: goto L_4500BC0C; break;
        case 86: goto L_4500BC0C; break;
        case 87: goto L_4500BC0C; break;
        case 88: goto L_4500BC0C; break;
        case 89: goto L_4500BA6C; break;
        case 90: goto L_4500BC0C; break;
        case 91: goto L_4500BC0C; break;
        case 92: goto L_4500BC0C; break;
        case 93: goto L_4500BC0C; break;
        case 94: goto L_4500BC0C; break;
        case 95: goto L_4500BC0C; break;
        case 96: goto L_4500BA7C; break;
        case 97: goto L_4500BC0C; break;
        case 98: goto L_4500BC0C; break;
        case 99: goto L_4500BC0C; break;
        case 100: goto L_4500BA8C; break;
        case 101: goto L_4500BC0C; break;
        case 102: goto L_4500BB3C; break;
        case 103: goto L_4500BC0C; break;
        case 104: goto L_4500BC0C; break;
        case 105: goto L_4500BC0C; break;
        case 106: goto L_4500BC0C; break;
        case 107: goto L_4500BC0C; break;
        case 108: goto L_4500BC0C; break;
        case 109: goto L_4500BC0C; break;
        case 110: goto L_4500BC0C; break;
        case 111: goto L_4500BC0C; break;
        case 112: goto L_4500BC0C; break;
        case 113: goto L_4500BC0C; break;
        case 114: goto L_4500BC0C; break;
        case 115: goto L_4500BC0C; break;
        case 116: goto L_4500BABC; break;
        case 117: goto L_4500BC0C; break;
        case 118: goto L_4500BAAC; break;
        case 119: goto L_4500BC0C; break;
        case 120: goto L_4500BC0C; break;
        case 121: goto L_4500BC0C; break;
        case 122: goto L_4500BC0C; break;
        case 123: goto L_4500BC0C; break;
        case 124: goto L_4500BC0C; break;
        case 125: goto L_4500BC0C; break;
        case 126: goto L_4500BB84; break;
        case 127: goto L_4500BB4C; break;
        case 128: goto L_4500BC0C; break;
        case 129: goto L_4500BC0C; break;
        case 130: goto L_4500BADC; break;
        case 131: goto L_4500BC0C; break;
        case 132: goto L_4500BC0C; break;
        case 133: goto L_4500BC0C; break;
        case 134: goto L_4500BC0C; break;
        case 135: goto L_4500BC0C; break;
        case 136: goto L_4500BC0C; break;
        case 137: goto L_4500BC0C; break;
        case 138: goto L_4500BC0C; break;
        case 139: goto L_4500BC0C; break;
        case 140: goto L_4500BC0C; break;
        case 141: goto L_4500BC0C; break;
        case 142: goto L_4500BC0C; break;
        case 143: goto L_4500BC0C; break;
        case 144: goto L_4500BC0C; break;
        case 145: goto L_4500BC0C; break;
        case 146: goto L_4500BC0C; break;
        case 147: goto L_4500BC0C; break;
        case 148: goto L_4500BC0C; break;
        case 149: goto L_4500BA9C; break;
        case 150: goto L_4500BB0C; break;
        case 151: goto L_4500BC0C; break;
        case 152: goto L_4500BACC; break;
        case 153: goto L_4500BAEC; break;
        case 154: goto L_4500BC0C; break;
        case 155: goto L_4500BC0C; break;
        case 156: goto L_4500BC0C; break;
        case 157: goto L_4500BC0C; break;
        case 158: goto L_4500BC0C; break;
        case 159: goto L_4500BC0C; break;
        case 160: goto L_4500BC0C; break;
        case 161: goto L_4500BC0C; break;
        case 162: goto L_4500BC0C; break;
        case 163: goto L_4500BC0C; break;
        case 164: goto L_4500BC0C; break;
        case 165: goto L_4500BC0C; break;
        case 166: goto L_4500BC0C; break;
        case 167: goto L_4500BC0C; break;
        case 168: goto L_4500BC0C; break;
        case 169: goto L_4500BC0C; break;
        case 170: goto L_4500BBCC; break;
        case 171: goto L_4500BB8C; break;
        case 172: goto L_4500BAFC; break;
        case 173: goto L_4500BC0C; break;
        case 174: goto L_4500BC0C; break;
        case 175: goto L_4500BC0C; break;
        case 176: goto L_4500BC0C; break;
        case 177: goto L_4500BC0C; break;
        case 178: goto L_4500BC0C; break;
        case 179: goto L_4500BC0C; break;
        case 180: goto L_4500BC0C; break;
        case 181: goto L_4500BC0C; break;
        case 182: goto L_4500BC0C; break;
        case 183: goto L_4500BC0C; break;
        case 184: goto L_4500BC0C; break;
        case 185: goto L_4500BC0C; break;
        case 186: goto L_4500BC0C; break;
        case 187: goto L_4500BC0C; break;
        case 188: goto L_4500BC0C; break;
        case 189: goto L_4500BC0C; break;
        case 190: goto L_4500BC0C; break;
        case 191: goto L_4500BC0C; break;
        case 192: goto L_4500BB1C; break;
        case 193: goto L_4500BC0C; break;
        case 194: goto L_4500BB94; break;
        case 195: goto L_4500BC0C; break;
        case 196: goto L_4500BC0C; break;
        case 197: goto L_4500BC0C; break;
        case 198: goto L_4500BC0C; break;
        case 199: goto L_4500BC0C; break;
        case 200: goto L_4500BC0C; break;
        case 201: goto L_4500BC0C; break;
        case 202: goto L_4500BC0C; break;
        case 203: goto L_4500BC0C; break;
        case 204: goto L_4500BC0C; break;
        case 205: goto L_4500BC0C; break;
        case 206: goto L_4500BC0C; break;
        case 207: goto L_4500BC0C; break;
        case 208: goto L_4500BC0C; break;
        case 209: goto L_4500BC0C; break;
        case 210: goto L_4500BC0C; break;
        case 211: goto L_4500BC0C; break;
        case 212: goto L_4500BC0C; break;
        case 213: goto L_4500BC0C; break;
        case 214: goto L_4500BC0C; break;
        case 215: goto L_4500BC0C; break;
        case 216: goto L_4500BB2C; break;
        default: switch_error(__func__, 0x4500B9A4, 0x450124F0);
    }
    // 0x4500B9A8: nop

L_4500B9AC:
    // 0x4500B9AC: addiu       $t4, $zero, 0x252
    ctx->r12 = ADD32(0, 0X252);
    // 0x4500B9B0: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    // 0x4500B9B4: b           L_4500BC0C
    // 0x4500B9B8: addiu       $s0, $zero, 0xD6
    ctx->r16 = ADD32(0, 0XD6);
        goto L_4500BC0C;
    // 0x4500B9B8: addiu       $s0, $zero, 0xD6
    ctx->r16 = ADD32(0, 0XD6);
L_4500B9BC:
    // 0x4500B9BC: addiu       $t5, $zero, 0x24E
    ctx->r13 = ADD32(0, 0X24E);
    // 0x4500B9C0: sw          $t5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r13;
    // 0x4500B9C4: b           L_4500BC0C
    // 0x4500B9C8: addiu       $s0, $zero, 0xD6
    ctx->r16 = ADD32(0, 0XD6);
        goto L_4500BC0C;
    // 0x4500B9C8: addiu       $s0, $zero, 0xD6
    ctx->r16 = ADD32(0, 0XD6);
L_4500B9CC:
    // 0x4500B9CC: addiu       $t6, $zero, 0x272
    ctx->r14 = ADD32(0, 0X272);
    // 0x4500B9D0: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
    // 0x4500B9D4: b           L_4500BC0C
    // 0x4500B9D8: addiu       $s0, $zero, 0xD8
    ctx->r16 = ADD32(0, 0XD8);
        goto L_4500BC0C;
    // 0x4500B9D8: addiu       $s0, $zero, 0xD8
    ctx->r16 = ADD32(0, 0XD8);
L_4500B9DC:
    // 0x4500B9DC: addiu       $t7, $zero, 0x263
    ctx->r15 = ADD32(0, 0X263);
    // 0x4500B9E0: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
    // 0x4500B9E4: b           L_4500BC0C
    // 0x4500B9E8: addiu       $s0, $zero, 0xD8
    ctx->r16 = ADD32(0, 0XD8);
        goto L_4500BC0C;
    // 0x4500B9E8: addiu       $s0, $zero, 0xD8
    ctx->r16 = ADD32(0, 0XD8);
L_4500B9EC:
    // 0x4500B9EC: addiu       $t8, $zero, 0x259
    ctx->r24 = ADD32(0, 0X259);
    // 0x4500B9F0: sw          $t8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r24;
    // 0x4500B9F4: b           L_4500BC0C
    // 0x4500B9F8: addiu       $s0, $zero, 0xD8
    ctx->r16 = ADD32(0, 0XD8);
        goto L_4500BC0C;
    // 0x4500B9F8: addiu       $s0, $zero, 0xD8
    ctx->r16 = ADD32(0, 0XD8);
L_4500B9FC:
    // 0x4500B9FC: addiu       $t9, $zero, 0x26C
    ctx->r25 = ADD32(0, 0X26C);
    // 0x4500BA00: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    // 0x4500BA04: b           L_4500BC0C
    // 0x4500BA08: addiu       $s0, $zero, 0xD8
    ctx->r16 = ADD32(0, 0XD8);
        goto L_4500BC0C;
    // 0x4500BA08: addiu       $s0, $zero, 0xD8
    ctx->r16 = ADD32(0, 0XD8);
L_4500BA0C:
    // 0x4500BA0C: addiu       $t0, $zero, 0x288
    ctx->r8 = ADD32(0, 0X288);
    // 0x4500BA10: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x4500BA14: b           L_4500BC0C
    // 0x4500BA18: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
        goto L_4500BC0C;
    // 0x4500BA18: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
L_4500BA1C:
    // 0x4500BA1C: addiu       $t1, $zero, 0x29A
    ctx->r9 = ADD32(0, 0X29A);
    // 0x4500BA20: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    // 0x4500BA24: b           L_4500BC0C
    // 0x4500BA28: addiu       $s0, $zero, 0x12C
    ctx->r16 = ADD32(0, 0X12C);
        goto L_4500BC0C;
    // 0x4500BA28: addiu       $s0, $zero, 0x12C
    ctx->r16 = ADD32(0, 0X12C);
L_4500BA2C:
    // 0x4500BA2C: addiu       $t2, $zero, 0x291
    ctx->r10 = ADD32(0, 0X291);
    // 0x4500BA30: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
    // 0x4500BA34: b           L_4500BC0C
    // 0x4500BA38: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
        goto L_4500BC0C;
    // 0x4500BA38: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
L_4500BA3C:
    // 0x4500BA3C: addiu       $t3, $zero, 0x295
    ctx->r11 = ADD32(0, 0X295);
    // 0x4500BA40: sw          $t3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r11;
    // 0x4500BA44: b           L_4500BC0C
    // 0x4500BA48: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
        goto L_4500BC0C;
    // 0x4500BA48: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
L_4500BA4C:
    // 0x4500BA4C: addiu       $t4, $zero, 0x2B6
    ctx->r12 = ADD32(0, 0X2B6);
    // 0x4500BA50: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    // 0x4500BA54: b           L_4500BC0C
    // 0x4500BA58: addiu       $s0, $zero, 0xD9
    ctx->r16 = ADD32(0, 0XD9);
        goto L_4500BC0C;
    // 0x4500BA58: addiu       $s0, $zero, 0xD9
    ctx->r16 = ADD32(0, 0XD9);
L_4500BA5C:
    // 0x4500BA5C: addiu       $t5, $zero, 0x2F1
    ctx->r13 = ADD32(0, 0X2F1);
    // 0x4500BA60: sw          $t5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r13;
    // 0x4500BA64: b           L_4500BC0C
    // 0x4500BA68: addiu       $s0, $zero, 0xD9
    ctx->r16 = ADD32(0, 0XD9);
        goto L_4500BC0C;
    // 0x4500BA68: addiu       $s0, $zero, 0xD9
    ctx->r16 = ADD32(0, 0XD9);
L_4500BA6C:
    // 0x4500BA6C: addiu       $t6, $zero, 0x2E7
    ctx->r14 = ADD32(0, 0X2E7);
    // 0x4500BA70: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
    // 0x4500BA74: b           L_4500BC0C
    // 0x4500BA78: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
        goto L_4500BC0C;
    // 0x4500BA78: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
L_4500BA7C:
    // 0x4500BA7C: addiu       $t7, $zero, 0x2F6
    ctx->r15 = ADD32(0, 0X2F6);
    // 0x4500BA80: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
    // 0x4500BA84: b           L_4500BC0C
    // 0x4500BA88: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
        goto L_4500BC0C;
    // 0x4500BA88: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
L_4500BA8C:
    // 0x4500BA8C: addiu       $t8, $zero, 0x2DF
    ctx->r24 = ADD32(0, 0X2DF);
    // 0x4500BA90: sw          $t8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r24;
    // 0x4500BA94: b           L_4500BC0C
    // 0x4500BA98: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
        goto L_4500BC0C;
    // 0x4500BA98: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
L_4500BA9C:
    // 0x4500BA9C: addiu       $t9, $zero, 0x368
    ctx->r25 = ADD32(0, 0X368);
    // 0x4500BAA0: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    // 0x4500BAA4: b           L_4500BC0C
    // 0x4500BAA8: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
        goto L_4500BC0C;
    // 0x4500BAA8: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
L_4500BAAC:
    // 0x4500BAAC: addiu       $t0, $zero, 0x32E
    ctx->r8 = ADD32(0, 0X32E);
    // 0x4500BAB0: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x4500BAB4: b           L_4500BC0C
    // 0x4500BAB8: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
        goto L_4500BC0C;
    // 0x4500BAB8: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
L_4500BABC:
    // 0x4500BABC: addiu       $t1, $zero, 0x326
    ctx->r9 = ADD32(0, 0X326);
    // 0x4500BAC0: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    // 0x4500BAC4: b           L_4500BC0C
    // 0x4500BAC8: addiu       $s0, $zero, 0xD8
    ctx->r16 = ADD32(0, 0XD8);
        goto L_4500BC0C;
    // 0x4500BAC8: addiu       $s0, $zero, 0xD8
    ctx->r16 = ADD32(0, 0XD8);
L_4500BACC:
    // 0x4500BACC: addiu       $t2, $zero, 0x318
    ctx->r10 = ADD32(0, 0X318);
    // 0x4500BAD0: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
    // 0x4500BAD4: b           L_4500BC0C
    // 0x4500BAD8: addiu       $s0, $zero, 0xD8
    ctx->r16 = ADD32(0, 0XD8);
        goto L_4500BC0C;
    // 0x4500BAD8: addiu       $s0, $zero, 0xD8
    ctx->r16 = ADD32(0, 0XD8);
L_4500BADC:
    // 0x4500BADC: addiu       $t3, $zero, 0x309
    ctx->r11 = ADD32(0, 0X309);
    // 0x4500BAE0: sw          $t3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r11;
    // 0x4500BAE4: b           L_4500BC0C
    // 0x4500BAE8: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
        goto L_4500BC0C;
    // 0x4500BAE8: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
L_4500BAEC:
    // 0x4500BAEC: addiu       $t4, $zero, 0x306
    ctx->r12 = ADD32(0, 0X306);
    // 0x4500BAF0: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    // 0x4500BAF4: b           L_4500BC0C
    // 0x4500BAF8: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
        goto L_4500BC0C;
    // 0x4500BAF8: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
L_4500BAFC:
    // 0x4500BAFC: addiu       $t5, $zero, 0x344
    ctx->r13 = ADD32(0, 0X344);
    // 0x4500BB00: sw          $t5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r13;
    // 0x4500BB04: b           L_4500BC0C
    // 0x4500BB08: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
        goto L_4500BC0C;
    // 0x4500BB08: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
L_4500BB0C:
    // 0x4500BB0C: addiu       $t6, $zero, 0x372
    ctx->r14 = ADD32(0, 0X372);
    // 0x4500BB10: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
    // 0x4500BB14: b           L_4500BC0C
    // 0x4500BB18: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
        goto L_4500BC0C;
    // 0x4500BB18: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
L_4500BB1C:
    // 0x4500BB1C: addiu       $t7, $zero, 0x34C
    ctx->r15 = ADD32(0, 0X34C);
    // 0x4500BB20: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
    // 0x4500BB24: b           L_4500BC0C
    // 0x4500BB28: addiu       $s0, $zero, 0xD8
    ctx->r16 = ADD32(0, 0XD8);
        goto L_4500BC0C;
    // 0x4500BB28: addiu       $s0, $zero, 0xD8
    ctx->r16 = ADD32(0, 0XD8);
L_4500BB2C:
    // 0x4500BB2C: addiu       $t8, $zero, 0x3A0
    ctx->r24 = ADD32(0, 0X3A0);
    // 0x4500BB30: sw          $t8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r24;
    // 0x4500BB34: b           L_4500BC0C
    // 0x4500BB38: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
        goto L_4500BC0C;
    // 0x4500BB38: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
L_4500BB3C:
    // 0x4500BB3C: addiu       $t9, $zero, 0x3CE
    ctx->r25 = ADD32(0, 0X3CE);
    // 0x4500BB40: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    // 0x4500BB44: b           L_4500BC0C
    // 0x4500BB48: addiu       $s0, $zero, 0xF9
    ctx->r16 = ADD32(0, 0XF9);
        goto L_4500BC0C;
    // 0x4500BB48: addiu       $s0, $zero, 0xF9
    ctx->r16 = ADD32(0, 0XF9);
L_4500BB4C:
    // 0x4500BB4C: addiu       $t0, $zero, 0x329
    ctx->r8 = ADD32(0, 0X329);
    // 0x4500BB50: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x4500BB54: lw          $a1, 0x1CC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1CC);
    // 0x4500BB58: lui         $a3, 0x6B50
    ctx->r7 = S32(0X6B50 << 16);
    // 0x4500BB5C: addiu       $s0, $zero, 0xD8
    ctx->r16 = ADD32(0, 0XD8);
    // 0x4500BB60: ori         $a3, $a3, 0x2E64
    ctx->r7 = ctx->r7 | 0X2E64;
    // 0x4500BB64: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    // 0x4500BB68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4500BB6C: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x4500BB70: jal         0x45000F34
    // 0x4500BB74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_mobj_main_F34(rdram, ctx);
        goto after_3;
    // 0x4500BB74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x4500BB78: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x4500BB7C: b           L_4500BC10
    // 0x4500BB80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_4500BC10;
    // 0x4500BB80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_4500BB84:
    // 0x4500BB84: b           L_4500BC0C
    // 0x4500BB88: addiu       $s0, $zero, 0x195
    ctx->r16 = ADD32(0, 0X195);
        goto L_4500BC0C;
    // 0x4500BB88: addiu       $s0, $zero, 0x195
    ctx->r16 = ADD32(0, 0X195);
L_4500BB8C:
    // 0x4500BB8C: b           L_4500BC0C
    // 0x4500BB90: addiu       $s0, $zero, 0xD6
    ctx->r16 = ADD32(0, 0XD6);
        goto L_4500BC0C;
    // 0x4500BB90: addiu       $s0, $zero, 0xD6
    ctx->r16 = ADD32(0, 0XD6);
L_4500BB94:
    // 0x4500BB94: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
    // 0x4500BB98: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500BB9C: jal         0x45009A00
    // 0x4500BBA0: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    ovl_mobj_main_9A00(rdram, ctx);
        goto after_4;
    // 0x4500BBA0: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    after_4:
    // 0x4500BBA4: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x4500BBA8: b           L_4500BC10
    // 0x4500BBAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_4500BC10;
    // 0x4500BBAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_4500BBB0:
    // 0x4500BBB0: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    // 0x4500BBB4: lw          $t2, 0x184($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X184);
    // 0x4500BBB8: addiu       $at, $zero, -0xC1
    ctx->r1 = ADD32(0, -0XC1);
    // 0x4500BBBC: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x4500BBC0: addiu       $s0, $zero, 0xD5
    ctx->r16 = ADD32(0, 0XD5);
    // 0x4500BBC4: b           L_4500BC0C
    // 0x4500BBC8: sw          $t3, 0x184($s1)
    MEM_W(0X184, ctx->r17) = ctx->r11;
        goto L_4500BC0C;
    // 0x4500BBC8: sw          $t3, 0x184($s1)
    MEM_W(0X184, ctx->r17) = ctx->r11;
L_4500BBCC:
    // 0x4500BBCC: addiu       $t4, $zero, 0x363
    ctx->r12 = ADD32(0, 0X363);
    // 0x4500BBD0: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    // 0x4500BBD4: lw          $t5, 0x184($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X184);
    // 0x4500BBD8: addiu       $at, $zero, -0xC1
    ctx->r1 = ADD32(0, -0XC1);
    // 0x4500BBDC: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x4500BBE0: sw          $t6, 0x184($s1)
    MEM_W(0X184, ctx->r17) = ctx->r14;
    // 0x4500BBE4: lui         $a2, 0x4501
    ctx->r6 = S32(0X4501 << 16);
    // 0x4500BBE8: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
    // 0x4500BBEC: addiu       $a2, $a2, -0x368
    ctx->r6 = ADD32(ctx->r6, -0X368);
    // 0x4500BBF0: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    // 0x4500BBF4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500BBF8: addiu       $a1, $zero, 0x81
    ctx->r5 = ADD32(0, 0X81);
    // 0x4500BBFC: jal         0x45005A5C
    // 0x4500BC00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_5A5C(rdram, ctx);
        goto after_5;
    // 0x4500BC00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x4500BC04: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x4500BC08: nop

L_4500BC0C:
    // 0x4500BC0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_4500BC10:
    // 0x4500BC10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x4500BC14: jal         0x4500B7CC
    // 0x4500BC18: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    ovl_mobj_main_B7CC(rdram, ctx);
        goto after_6;
    // 0x4500BC18: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    after_6:
    // 0x4500BC1C: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x4500BC20: addiu       $at, $zero, 0x4D
    ctx->r1 = ADD32(0, 0X4D);
    // 0x4500BC24: beq         $v1, $at, L_4500BFD0
    if (ctx->r3 == ctx->r1) {
        // 0x4500BC28: addiu       $at, $zero, 0x58
        ctx->r1 = ADD32(0, 0X58);
            goto L_4500BFD0;
    }
    // 0x4500BC28: addiu       $at, $zero, 0x58
    ctx->r1 = ADD32(0, 0X58);
    // 0x4500BC2C: beq         $v1, $at, L_4500BC58
    if (ctx->r3 == ctx->r1) {
        // 0x4500BC30: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4500BC58;
    }
    // 0x4500BC30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500BC34: addiu       $at, $zero, 0x99
    ctx->r1 = ADD32(0, 0X99);
    // 0x4500BC38: beq         $v1, $at, L_4500BC88
    if (ctx->r3 == ctx->r1) {
        // 0x4500BC3C: addiu       $at, $zero, 0xC6
        ctx->r1 = ADD32(0, 0XC6);
            goto L_4500BC88;
    }
    // 0x4500BC3C: addiu       $at, $zero, 0xC6
    ctx->r1 = ADD32(0, 0XC6);
    // 0x4500BC40: beq         $v1, $at, L_4500BFD0
    if (ctx->r3 == ctx->r1) {
        // 0x4500BC44: addiu       $at, $zero, 0xDD
        ctx->r1 = ADD32(0, 0XDD);
            goto L_4500BFD0;
    }
    // 0x4500BC44: addiu       $at, $zero, 0xDD
    ctx->r1 = ADD32(0, 0XDD);
    // 0x4500BC48: beq         $v1, $at, L_4500BFD0
    if (ctx->r3 == ctx->r1) {
        // 0x4500BC4C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4500BFD0;
    }
    // 0x4500BC4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500BC50: b           L_4500BC98
    // 0x4500BC54: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_4500BC98;
    // 0x4500BC54: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_4500BC58:
    // 0x4500BC58: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4500BC5C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4500BC60: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x4500BC64: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x4500BC68: addiu       $a2, $zero, 0x2B4
    ctx->r6 = ADD32(0, 0X2B4);
    // 0x4500BC6C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4500BC70: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x4500BC74: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x4500BC78: jal         0x450075DC
    // 0x4500BC7C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_7;
    // 0x4500BC7C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x4500BC80: b           L_4500BFD4
    // 0x4500BC84: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
        goto L_4500BFD4;
    // 0x4500BC84: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
L_4500BC88:
    // 0x4500BC88: jal         0x45009818
    // 0x4500BC8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_mobj_main_9818(rdram, ctx);
        goto after_8;
    // 0x4500BC8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x4500BC90: b           L_4500BFD4
    // 0x4500BC94: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
        goto L_4500BFD4;
    // 0x4500BC94: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
L_4500BC98:
    // 0x4500BC98: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4500BC9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4500BCA0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4500BCA4: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x4500BCA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4500BCAC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x4500BCB0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x4500BCB4: jal         0x450075DC
    // 0x4500BCB8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_9;
    // 0x4500BCB8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_9:
    // 0x4500BCBC: b           L_4500BFD4
    // 0x4500BCC0: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
        goto L_4500BFD4;
    // 0x4500BCC0: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
L_4500BCC4:
    // 0x4500BCC4: addiu       $t8, $v1, -0xF
    ctx->r24 = ADD32(ctx->r3, -0XF);
    // 0x4500BCC8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x4500BCCC: sltiu       $at, $t8, 0x10B
    ctx->r1 = ctx->r24 < 0X10B ? 1 : 0;
    // 0x4500BCD0: beq         $at, $zero, L_4500BF80
    if (ctx->r1 == 0) {
        // 0x4500BCD4: sw          $t7, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r15;
            goto L_4500BF80;
    }
    // 0x4500BCD4: sw          $t7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r15;
    // 0x4500BCD8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x4500BCDC: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500BCE0: addu        $at, $at, $t8
    gpr jr_addend_4500BCEC = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x4500BCE4: lw          $t8, 0x2854($at)
    ctx->r24 = ADD32(ctx->r1, 0X2854);
    // 0x4500BCE8: nop

    // 0x4500BCEC: jr          $t8
    // 0x4500BCF0: nop

    switch (jr_addend_4500BCEC >> 2) {
        case 0: goto L_4500BE8C; break;
        case 1: goto L_4500BF80; break;
        case 2: goto L_4500BF80; break;
        case 3: goto L_4500BF80; break;
        case 4: goto L_4500BF80; break;
        case 5: goto L_4500BF80; break;
        case 6: goto L_4500BF80; break;
        case 7: goto L_4500BF80; break;
        case 8: goto L_4500BF80; break;
        case 9: goto L_4500BF80; break;
        case 10: goto L_4500BF80; break;
        case 11: goto L_4500BF80; break;
        case 12: goto L_4500BD0C; break;
        case 13: goto L_4500BF80; break;
        case 14: goto L_4500BF80; break;
        case 15: goto L_4500BF80; break;
        case 16: goto L_4500BF80; break;
        case 17: goto L_4500BF80; break;
        case 18: goto L_4500BD1C; break;
        case 19: goto L_4500BF80; break;
        case 20: goto L_4500BF80; break;
        case 21: goto L_4500BF80; break;
        case 22: goto L_4500BF80; break;
        case 23: goto L_4500BF80; break;
        case 24: goto L_4500BF80; break;
        case 25: goto L_4500BD2C; break;
        case 26: goto L_4500BF80; break;
        case 27: goto L_4500BF80; break;
        case 28: goto L_4500BD3C; break;
        case 29: goto L_4500BF80; break;
        case 30: goto L_4500BF80; break;
        case 31: goto L_4500BF80; break;
        case 32: goto L_4500BF80; break;
        case 33: goto L_4500BF80; break;
        case 34: goto L_4500BF80; break;
        case 35: goto L_4500BD4C; break;
        case 36: goto L_4500BECC; break;
        case 37: goto L_4500BF80; break;
        case 38: goto L_4500BF80; break;
        case 39: goto L_4500BF80; break;
        case 40: goto L_4500BF80; break;
        case 41: goto L_4500BF80; break;
        case 42: goto L_4500BF80; break;
        case 43: goto L_4500BF80; break;
        case 44: goto L_4500BF80; break;
        case 45: goto L_4500BF80; break;
        case 46: goto L_4500BF80; break;
        case 47: goto L_4500BF80; break;
        case 48: goto L_4500BF80; break;
        case 49: goto L_4500BF80; break;
        case 50: goto L_4500BF80; break;
        case 51: goto L_4500BF80; break;
        case 52: goto L_4500BF80; break;
        case 53: goto L_4500BD5C; break;
        case 54: goto L_4500BD6C; break;
        case 55: goto L_4500BF80; break;
        case 56: goto L_4500BCF4; break;
        case 57: goto L_4500BE9C; break;
        case 58: goto L_4500BF80; break;
        case 59: goto L_4500BD7C; break;
        case 60: goto L_4500BF80; break;
        case 61: goto L_4500BF80; break;
        case 62: goto L_4500BCF4; break;
        case 63: goto L_4500BF80; break;
        case 64: goto L_4500BF80; break;
        case 65: goto L_4500BF80; break;
        case 66: goto L_4500BF80; break;
        case 67: goto L_4500BF80; break;
        case 68: goto L_4500BF80; break;
        case 69: goto L_4500BF80; break;
        case 70: goto L_4500BF80; break;
        case 71: goto L_4500BF80; break;
        case 72: goto L_4500BF80; break;
        case 73: goto L_4500BD8C; break;
        case 74: goto L_4500BF80; break;
        case 75: goto L_4500BF80; break;
        case 76: goto L_4500BF80; break;
        case 77: goto L_4500BF80; break;
        case 78: goto L_4500BF80; break;
        case 79: goto L_4500BF80; break;
        case 80: goto L_4500BF80; break;
        case 81: goto L_4500BF80; break;
        case 82: goto L_4500BF80; break;
        case 83: goto L_4500BF80; break;
        case 84: goto L_4500BF80; break;
        case 85: goto L_4500BF80; break;
        case 86: goto L_4500BF80; break;
        case 87: goto L_4500BD9C; break;
        case 88: goto L_4500BF80; break;
        case 89: goto L_4500BF80; break;
        case 90: goto L_4500BF80; break;
        case 91: goto L_4500BF80; break;
        case 92: goto L_4500BF80; break;
        case 93: goto L_4500BF80; break;
        case 94: goto L_4500BF80; break;
        case 95: goto L_4500BF80; break;
        case 96: goto L_4500BF80; break;
        case 97: goto L_4500BF80; break;
        case 98: goto L_4500BF80; break;
        case 99: goto L_4500BF80; break;
        case 100: goto L_4500BF80; break;
        case 101: goto L_4500BDAC; break;
        case 102: goto L_4500BF80; break;
        case 103: goto L_4500BF80; break;
        case 104: goto L_4500BF80; break;
        case 105: goto L_4500BF80; break;
        case 106: goto L_4500BF80; break;
        case 107: goto L_4500BF80; break;
        case 108: goto L_4500BDBC; break;
        case 109: goto L_4500BF80; break;
        case 110: goto L_4500BF80; break;
        case 111: goto L_4500BF80; break;
        case 112: goto L_4500BDCC; break;
        case 113: goto L_4500BF80; break;
        case 114: goto L_4500BF1C; break;
        case 115: goto L_4500BF80; break;
        case 116: goto L_4500BF80; break;
        case 117: goto L_4500BF80; break;
        case 118: goto L_4500BF80; break;
        case 119: goto L_4500BF80; break;
        case 120: goto L_4500BF80; break;
        case 121: goto L_4500BF80; break;
        case 122: goto L_4500BF80; break;
        case 123: goto L_4500BF80; break;
        case 124: goto L_4500BF80; break;
        case 125: goto L_4500BF80; break;
        case 126: goto L_4500BF80; break;
        case 127: goto L_4500BF80; break;
        case 128: goto L_4500BDEC; break;
        case 129: goto L_4500BF80; break;
        case 130: goto L_4500BDDC; break;
        case 131: goto L_4500BF80; break;
        case 132: goto L_4500BF80; break;
        case 133: goto L_4500BF80; break;
        case 134: goto L_4500BF80; break;
        case 135: goto L_4500BF80; break;
        case 136: goto L_4500BF80; break;
        case 137: goto L_4500BF80; break;
        case 138: goto L_4500BF80; break;
        case 139: goto L_4500BEF4; break;
        case 140: goto L_4500BF80; break;
        case 141: goto L_4500BF80; break;
        case 142: goto L_4500BE0C; break;
        case 143: goto L_4500BF80; break;
        case 144: goto L_4500BF80; break;
        case 145: goto L_4500BF80; break;
        case 146: goto L_4500BF80; break;
        case 147: goto L_4500BF80; break;
        case 148: goto L_4500BF80; break;
        case 149: goto L_4500BF80; break;
        case 150: goto L_4500BF80; break;
        case 151: goto L_4500BF80; break;
        case 152: goto L_4500BF80; break;
        case 153: goto L_4500BF80; break;
        case 154: goto L_4500BF80; break;
        case 155: goto L_4500BF80; break;
        case 156: goto L_4500BF80; break;
        case 157: goto L_4500BF80; break;
        case 158: goto L_4500BF80; break;
        case 159: goto L_4500BF80; break;
        case 160: goto L_4500BF80; break;
        case 161: goto L_4500BEBC; break;
        case 162: goto L_4500BE4C; break;
        case 163: goto L_4500BF80; break;
        case 164: goto L_4500BDFC; break;
        case 165: goto L_4500BE1C; break;
        case 166: goto L_4500BF80; break;
        case 167: goto L_4500BF80; break;
        case 168: goto L_4500BF80; break;
        case 169: goto L_4500BF80; break;
        case 170: goto L_4500BF80; break;
        case 171: goto L_4500BF80; break;
        case 172: goto L_4500BF80; break;
        case 173: goto L_4500BF80; break;
        case 174: goto L_4500BF80; break;
        case 175: goto L_4500BF80; break;
        case 176: goto L_4500BF80; break;
        case 177: goto L_4500BF80; break;
        case 178: goto L_4500BF80; break;
        case 179: goto L_4500BF80; break;
        case 180: goto L_4500BF80; break;
        case 181: goto L_4500BF80; break;
        case 182: goto L_4500BF80; break;
        case 183: goto L_4500BE2C; break;
        case 184: goto L_4500BE3C; break;
        case 185: goto L_4500BF80; break;
        case 186: goto L_4500BF80; break;
        case 187: goto L_4500BF80; break;
        case 188: goto L_4500BF80; break;
        case 189: goto L_4500BF80; break;
        case 190: goto L_4500BF80; break;
        case 191: goto L_4500BF80; break;
        case 192: goto L_4500BF80; break;
        case 193: goto L_4500BF80; break;
        case 194: goto L_4500BF80; break;
        case 195: goto L_4500BF80; break;
        case 196: goto L_4500BF80; break;
        case 197: goto L_4500BF80; break;
        case 198: goto L_4500BF80; break;
        case 199: goto L_4500BF80; break;
        case 200: goto L_4500BF80; break;
        case 201: goto L_4500BF80; break;
        case 202: goto L_4500BF80; break;
        case 203: goto L_4500BF80; break;
        case 204: goto L_4500BE5C; break;
        case 205: goto L_4500BF80; break;
        case 206: goto L_4500BCF4; break;
        case 207: goto L_4500BF80; break;
        case 208: goto L_4500BF80; break;
        case 209: goto L_4500BF80; break;
        case 210: goto L_4500BF80; break;
        case 211: goto L_4500BF80; break;
        case 212: goto L_4500BF80; break;
        case 213: goto L_4500BF80; break;
        case 214: goto L_4500BF80; break;
        case 215: goto L_4500BEAC; break;
        case 216: goto L_4500BF80; break;
        case 217: goto L_4500BF80; break;
        case 218: goto L_4500BF80; break;
        case 219: goto L_4500BF80; break;
        case 220: goto L_4500BF80; break;
        case 221: goto L_4500BF80; break;
        case 222: goto L_4500BF80; break;
        case 223: goto L_4500BF80; break;
        case 224: goto L_4500BF80; break;
        case 225: goto L_4500BF80; break;
        case 226: goto L_4500BF80; break;
        case 227: goto L_4500BF80; break;
        case 228: goto L_4500BE6C; break;
        case 229: goto L_4500BF80; break;
        case 230: goto L_4500BF80; break;
        case 231: goto L_4500BF80; break;
        case 232: goto L_4500BF80; break;
        case 233: goto L_4500BF80; break;
        case 234: goto L_4500BF80; break;
        case 235: goto L_4500BF80; break;
        case 236: goto L_4500BF80; break;
        case 237: goto L_4500BF80; break;
        case 238: goto L_4500BF80; break;
        case 239: goto L_4500BF80; break;
        case 240: goto L_4500BF80; break;
        case 241: goto L_4500BF80; break;
        case 242: goto L_4500BF80; break;
        case 243: goto L_4500BF80; break;
        case 244: goto L_4500BF80; break;
        case 245: goto L_4500BF80; break;
        case 246: goto L_4500BE7C; break;
        case 247: goto L_4500BF80; break;
        case 248: goto L_4500BF80; break;
        case 249: goto L_4500BF80; break;
        case 250: goto L_4500BF80; break;
        case 251: goto L_4500BF80; break;
        case 252: goto L_4500BF80; break;
        case 253: goto L_4500BF80; break;
        case 254: goto L_4500BF80; break;
        case 255: goto L_4500BF80; break;
        case 256: goto L_4500BF80; break;
        case 257: goto L_4500BF80; break;
        case 258: goto L_4500BF80; break;
        case 259: goto L_4500BF80; break;
        case 260: goto L_4500BF80; break;
        case 261: goto L_4500BF80; break;
        case 262: goto L_4500BF80; break;
        case 263: goto L_4500BF80; break;
        case 264: goto L_4500BF80; break;
        case 265: goto L_4500BF80; break;
        case 266: goto L_4500BF68; break;
        default: switch_error(__func__, 0x4500BCEC, 0x45012854);
    }
    // 0x4500BCF0: nop

L_4500BCF4:
    // 0x4500BCF4: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x4500BCF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500BCFC: jal         0x4500B7CC
    // 0x4500BD00: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    ovl_mobj_main_B7CC(rdram, ctx);
        goto after_10;
    // 0x4500BD00: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    after_10:
    // 0x4500BD04: b           L_4500BF84
    // 0x4500BD08: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
        goto L_4500BF84;
    // 0x4500BD08: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
L_4500BD0C:
    // 0x4500BD0C: addiu       $t9, $zero, 0x253
    ctx->r25 = ADD32(0, 0X253);
    // 0x4500BD10: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    // 0x4500BD14: b           L_4500BF80
    // 0x4500BD18: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
        goto L_4500BF80;
    // 0x4500BD18: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
L_4500BD1C:
    // 0x4500BD1C: addiu       $t0, $zero, 0x24F
    ctx->r8 = ADD32(0, 0X24F);
    // 0x4500BD20: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x4500BD24: b           L_4500BF80
    // 0x4500BD28: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
        goto L_4500BF80;
    // 0x4500BD28: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
L_4500BD2C:
    // 0x4500BD2C: addiu       $t1, $zero, 0x273
    ctx->r9 = ADD32(0, 0X273);
    // 0x4500BD30: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    // 0x4500BD34: b           L_4500BF80
    // 0x4500BD38: addiu       $s0, $zero, 0xDA
    ctx->r16 = ADD32(0, 0XDA);
        goto L_4500BF80;
    // 0x4500BD38: addiu       $s0, $zero, 0xDA
    ctx->r16 = ADD32(0, 0XDA);
L_4500BD3C:
    // 0x4500BD3C: addiu       $t2, $zero, 0x264
    ctx->r10 = ADD32(0, 0X264);
    // 0x4500BD40: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
    // 0x4500BD44: b           L_4500BF80
    // 0x4500BD48: addiu       $s0, $zero, 0xDA
    ctx->r16 = ADD32(0, 0XDA);
        goto L_4500BF80;
    // 0x4500BD48: addiu       $s0, $zero, 0xDA
    ctx->r16 = ADD32(0, 0XDA);
L_4500BD4C:
    // 0x4500BD4C: addiu       $t3, $zero, 0x25A
    ctx->r11 = ADD32(0, 0X25A);
    // 0x4500BD50: sw          $t3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r11;
    // 0x4500BD54: b           L_4500BF80
    // 0x4500BD58: addiu       $s0, $zero, 0xDA
    ctx->r16 = ADD32(0, 0XDA);
        goto L_4500BF80;
    // 0x4500BD58: addiu       $s0, $zero, 0xDA
    ctx->r16 = ADD32(0, 0XDA);
L_4500BD5C:
    // 0x4500BD5C: addiu       $t4, $zero, 0x289
    ctx->r12 = ADD32(0, 0X289);
    // 0x4500BD60: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    // 0x4500BD64: b           L_4500BF80
    // 0x4500BD68: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
        goto L_4500BF80;
    // 0x4500BD68: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
L_4500BD6C:
    // 0x4500BD6C: addiu       $t5, $zero, 0x29B
    ctx->r13 = ADD32(0, 0X29B);
    // 0x4500BD70: sw          $t5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r13;
    // 0x4500BD74: b           L_4500BF80
    // 0x4500BD78: addiu       $s0, $zero, 0x12D
    ctx->r16 = ADD32(0, 0X12D);
        goto L_4500BF80;
    // 0x4500BD78: addiu       $s0, $zero, 0x12D
    ctx->r16 = ADD32(0, 0X12D);
L_4500BD7C:
    // 0x4500BD7C: addiu       $t6, $zero, 0x296
    ctx->r14 = ADD32(0, 0X296);
    // 0x4500BD80: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
    // 0x4500BD84: b           L_4500BF80
    // 0x4500BD88: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
        goto L_4500BF80;
    // 0x4500BD88: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
L_4500BD8C:
    // 0x4500BD8C: addiu       $t7, $zero, 0x2B7
    ctx->r15 = ADD32(0, 0X2B7);
    // 0x4500BD90: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
    // 0x4500BD94: b           L_4500BF80
    // 0x4500BD98: addiu       $s0, $zero, 0xDA
    ctx->r16 = ADD32(0, 0XDA);
        goto L_4500BF80;
    // 0x4500BD98: addiu       $s0, $zero, 0xDA
    ctx->r16 = ADD32(0, 0XDA);
L_4500BD9C:
    // 0x4500BD9C: addiu       $t8, $zero, 0x2F2
    ctx->r24 = ADD32(0, 0X2F2);
    // 0x4500BDA0: sw          $t8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r24;
    // 0x4500BDA4: b           L_4500BF80
    // 0x4500BDA8: addiu       $s0, $zero, 0xDA
    ctx->r16 = ADD32(0, 0XDA);
        goto L_4500BF80;
    // 0x4500BDA8: addiu       $s0, $zero, 0xDA
    ctx->r16 = ADD32(0, 0XDA);
L_4500BDAC:
    // 0x4500BDAC: addiu       $t9, $zero, 0x2E8
    ctx->r25 = ADD32(0, 0X2E8);
    // 0x4500BDB0: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    // 0x4500BDB4: b           L_4500BF80
    // 0x4500BDB8: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
        goto L_4500BF80;
    // 0x4500BDB8: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
L_4500BDBC:
    // 0x4500BDBC: addiu       $t0, $zero, 0x2F7
    ctx->r8 = ADD32(0, 0X2F7);
    // 0x4500BDC0: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x4500BDC4: b           L_4500BF80
    // 0x4500BDC8: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
        goto L_4500BF80;
    // 0x4500BDC8: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
L_4500BDCC:
    // 0x4500BDCC: addiu       $t1, $zero, 0x2E0
    ctx->r9 = ADD32(0, 0X2E0);
    // 0x4500BDD0: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    // 0x4500BDD4: b           L_4500BF80
    // 0x4500BDD8: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
        goto L_4500BF80;
    // 0x4500BDD8: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
L_4500BDDC:
    // 0x4500BDDC: addiu       $t2, $zero, 0x32F
    ctx->r10 = ADD32(0, 0X32F);
    // 0x4500BDE0: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
    // 0x4500BDE4: b           L_4500BF80
    // 0x4500BDE8: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
        goto L_4500BF80;
    // 0x4500BDE8: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
L_4500BDEC:
    // 0x4500BDEC: addiu       $t3, $zero, 0x327
    ctx->r11 = ADD32(0, 0X327);
    // 0x4500BDF0: sw          $t3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r11;
    // 0x4500BDF4: b           L_4500BF80
    // 0x4500BDF8: addiu       $s0, $zero, 0xDA
    ctx->r16 = ADD32(0, 0XDA);
        goto L_4500BF80;
    // 0x4500BDF8: addiu       $s0, $zero, 0xDA
    ctx->r16 = ADD32(0, 0XDA);
L_4500BDFC:
    // 0x4500BDFC: addiu       $t4, $zero, 0x319
    ctx->r12 = ADD32(0, 0X319);
    // 0x4500BE00: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    // 0x4500BE04: b           L_4500BF80
    // 0x4500BE08: addiu       $s0, $zero, 0xDA
    ctx->r16 = ADD32(0, 0XDA);
        goto L_4500BF80;
    // 0x4500BE08: addiu       $s0, $zero, 0xDA
    ctx->r16 = ADD32(0, 0XDA);
L_4500BE0C:
    // 0x4500BE0C: addiu       $t5, $zero, 0x30A
    ctx->r13 = ADD32(0, 0X30A);
    // 0x4500BE10: sw          $t5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r13;
    // 0x4500BE14: b           L_4500BF80
    // 0x4500BE18: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
        goto L_4500BF80;
    // 0x4500BE18: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
L_4500BE1C:
    // 0x4500BE1C: addiu       $t6, $zero, 0x307
    ctx->r14 = ADD32(0, 0X307);
    // 0x4500BE20: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
    // 0x4500BE24: b           L_4500BF80
    // 0x4500BE28: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
        goto L_4500BF80;
    // 0x4500BE28: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
L_4500BE2C:
    // 0x4500BE2C: addiu       $t7, $zero, 0x377
    ctx->r15 = ADD32(0, 0X377);
    // 0x4500BE30: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
    // 0x4500BE34: b           L_4500BF80
    // 0x4500BE38: addiu       $s0, $zero, 0xF9
    ctx->r16 = ADD32(0, 0XF9);
        goto L_4500BF80;
    // 0x4500BE38: addiu       $s0, $zero, 0xF9
    ctx->r16 = ADD32(0, 0XF9);
L_4500BE3C:
    // 0x4500BE3C: addiu       $t8, $zero, 0x345
    ctx->r24 = ADD32(0, 0X345);
    // 0x4500BE40: sw          $t8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r24;
    // 0x4500BE44: b           L_4500BF80
    // 0x4500BE48: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
        goto L_4500BF80;
    // 0x4500BE48: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
L_4500BE4C:
    // 0x4500BE4C: addiu       $t9, $zero, 0x373
    ctx->r25 = ADD32(0, 0X373);
    // 0x4500BE50: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    // 0x4500BE54: b           L_4500BF80
    // 0x4500BE58: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
        goto L_4500BF80;
    // 0x4500BE58: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
L_4500BE5C:
    // 0x4500BE5C: addiu       $t0, $zero, 0x34D
    ctx->r8 = ADD32(0, 0X34D);
    // 0x4500BE60: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x4500BE64: b           L_4500BF80
    // 0x4500BE68: addiu       $s0, $zero, 0xDA
    ctx->r16 = ADD32(0, 0XDA);
        goto L_4500BF80;
    // 0x4500BE68: addiu       $s0, $zero, 0xDA
    ctx->r16 = ADD32(0, 0XDA);
L_4500BE6C:
    // 0x4500BE6C: addiu       $t1, $zero, 0x3A1
    ctx->r9 = ADD32(0, 0X3A1);
    // 0x4500BE70: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    // 0x4500BE74: b           L_4500BF80
    // 0x4500BE78: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
        goto L_4500BF80;
    // 0x4500BE78: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
L_4500BE7C:
    // 0x4500BE7C: addiu       $t2, $zero, 0x3C3
    ctx->r10 = ADD32(0, 0X3C3);
    // 0x4500BE80: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
    // 0x4500BE84: b           L_4500BF80
    // 0x4500BE88: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
        goto L_4500BF80;
    // 0x4500BE88: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
L_4500BE8C:
    // 0x4500BE8C: addiu       $t3, $zero, 0x3CC
    ctx->r11 = ADD32(0, 0X3CC);
    // 0x4500BE90: sw          $t3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r11;
    // 0x4500BE94: b           L_4500BF80
    // 0x4500BE98: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
        goto L_4500BF80;
    // 0x4500BE98: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
L_4500BE9C:
    // 0x4500BE9C: addiu       $t4, $zero, 0x3D6
    ctx->r12 = ADD32(0, 0X3D6);
    // 0x4500BEA0: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    // 0x4500BEA4: b           L_4500BF80
    // 0x4500BEA8: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
        goto L_4500BF80;
    // 0x4500BEA8: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
L_4500BEAC:
    // 0x4500BEAC: addiu       $t5, $zero, 0x3D4
    ctx->r13 = ADD32(0, 0X3D4);
    // 0x4500BEB0: sw          $t5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r13;
    // 0x4500BEB4: b           L_4500BF80
    // 0x4500BEB8: addiu       $s0, $zero, 0x1B4
    ctx->r16 = ADD32(0, 0X1B4);
        goto L_4500BF80;
    // 0x4500BEB8: addiu       $s0, $zero, 0x1B4
    ctx->r16 = ADD32(0, 0X1B4);
L_4500BEBC:
    // 0x4500BEBC: addiu       $t6, $zero, 0x369
    ctx->r14 = ADD32(0, 0X369);
    // 0x4500BEC0: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
    // 0x4500BEC4: b           L_4500BF80
    // 0x4500BEC8: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
        goto L_4500BF80;
    // 0x4500BEC8: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
L_4500BECC:
    // 0x4500BECC: addiu       $t7, $zero, 0x26D
    ctx->r15 = ADD32(0, 0X26D);
    // 0x4500BED0: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
    // 0x4500BED4: lw          $a1, 0x1CC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1CC);
    // 0x4500BED8: addiu       $s0, $zero, 0xDA
    ctx->r16 = ADD32(0, 0XDA);
    // 0x4500BEDC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x4500BEE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4500BEE4: jal         0x45000F34
    // 0x4500BEE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_11;
    // 0x4500BEE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x4500BEEC: b           L_4500BF84
    // 0x4500BEF0: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
        goto L_4500BF84;
    // 0x4500BEF0: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
L_4500BEF4:
    // 0x4500BEF4: addiu       $t8, $zero, 0x32A
    ctx->r24 = ADD32(0, 0X32A);
    // 0x4500BEF8: sw          $t8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r24;
    // 0x4500BEFC: lw          $a1, 0x1CC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1CC);
    // 0x4500BF00: addiu       $s0, $zero, 0xDA
    ctx->r16 = ADD32(0, 0XDA);
    // 0x4500BF04: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x4500BF08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x4500BF0C: jal         0x45000F34
    // 0x4500BF10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_12;
    // 0x4500BF10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x4500BF14: b           L_4500BF84
    // 0x4500BF18: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
        goto L_4500BF84;
    // 0x4500BF18: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
L_4500BF1C:
    // 0x4500BF1C: lw          $a1, 0x1CC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1CC);
    // 0x4500BF20: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x4500BF24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x4500BF28: jal         0x45000F34
    // 0x4500BF2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_13;
    // 0x4500BF2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x4500BF30: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4500BF34: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4500BF38: lw          $a1, 0x1CC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1CC);
    // 0x4500BF3C: lw          $a2, 0x1D0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1D0);
    // 0x4500BF40: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x4500BF44: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x4500BF48: swc1        $f11, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x4500BF4C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x4500BF50: jal         0x45000F34
    // 0x4500BF54: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    ovl_mobj_main_F34(rdram, ctx);
        goto after_14;
    // 0x4500BF54: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    after_14:
    // 0x4500BF58: addiu       $t9, $zero, 0x3CF
    ctx->r25 = ADD32(0, 0X3CF);
    // 0x4500BF5C: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    // 0x4500BF60: b           L_4500BF80
    // 0x4500BF64: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
        goto L_4500BF80;
    // 0x4500BF64: addiu       $s0, $zero, 0xD7
    ctx->r16 = ADD32(0, 0XD7);
L_4500BF68:
    // 0x4500BF68: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x4500BF6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500BF70: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x4500BF74: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x4500BF78: jal         0x45005B24
    // 0x4500BF7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_mobj_main_5B24(rdram, ctx);
        goto after_15;
    // 0x4500BF7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_15:
L_4500BF80:
    // 0x4500BF80: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
L_4500BF84:
    // 0x4500BF84: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500BF88: beq         $t0, $zero, L_4500BFD0
    if (ctx->r8 == 0) {
        // 0x4500BF8C: nop
    
            goto L_4500BFD0;
    }
    // 0x4500BF8C: nop

    // 0x4500BF90: jal         0x4500B7CC
    // 0x4500BF94: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_mobj_main_B7CC(rdram, ctx);
        goto after_16;
    // 0x4500BF94: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_16:
    // 0x4500BF98: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4500BF9C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4500BFA0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x4500BFA4: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x4500BFA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500BFAC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x4500BFB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4500BFB4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x4500BFB8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x4500BFBC: jal         0x450075DC
    // 0x4500BFC0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    ovl_mobj_main_75DC(rdram, ctx);
        goto after_17;
    // 0x4500BFC0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_17:
    // 0x4500BFC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500BFC8: jal         0x45005D34
    // 0x4500BFCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_5D34(rdram, ctx);
        goto after_18;
    // 0x4500BFCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_18:
L_4500BFD0:
    // 0x4500BFD0: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
L_4500BFD4:
    // 0x4500BFD4: b           L_4500C334
    // 0x4500BFD8: addiu       $at, $zero, 0x9A
    ctx->r1 = ADD32(0, 0X9A);
        goto L_4500C334;
    // 0x4500BFD8: addiu       $at, $zero, 0x9A
    ctx->r1 = ADD32(0, 0X9A);
L_4500BFDC:
    // 0x4500BFDC: lw          $v0, 0x218($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X218);
    // 0x4500BFE0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x4500BFE4: bne         $a0, $v0, L_4500C230
    if (ctx->r4 != ctx->r2) {
        // 0x4500BFE8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_4500C230;
    }
    // 0x4500BFE8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4500BFEC: lw          $t1, 0x188($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X188);
    // 0x4500BFF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x4500BFF4: addiu       $s0, $t1, 0x1
    ctx->r16 = ADD32(ctx->r9, 0X1);
    // 0x4500BFF8: bne         $s0, $a0, L_4500C024
    if (ctx->r16 != ctx->r4) {
        // 0x4500BFFC: sw          $s0, 0x188($s1)
        MEM_W(0X188, ctx->r17) = ctx->r16;
            goto L_4500C024;
    }
    // 0x4500BFFC: sw          $s0, 0x188($s1)
    MEM_W(0X188, ctx->r17) = ctx->r16;
    // 0x4500C000: addiu       $at, $zero, 0x47
    ctx->r1 = ADD32(0, 0X47);
    // 0x4500C004: beq         $v1, $at, L_4500C01C
    if (ctx->r3 == ctx->r1) {
        // 0x4500C008: addiu       $at, $zero, 0x4D
        ctx->r1 = ADD32(0, 0X4D);
            goto L_4500C01C;
    }
    // 0x4500C008: addiu       $at, $zero, 0x4D
    ctx->r1 = ADD32(0, 0X4D);
    // 0x4500C00C: beq         $v1, $at, L_4500C01C
    if (ctx->r3 == ctx->r1) {
        // 0x4500C010: addiu       $at, $zero, 0xDD
        ctx->r1 = ADD32(0, 0XDD);
            goto L_4500C01C;
    }
    // 0x4500C010: addiu       $at, $zero, 0xDD
    ctx->r1 = ADD32(0, 0XDD);
    // 0x4500C014: bne         $v1, $at, L_4500C118
    if (ctx->r3 != ctx->r1) {
        // 0x4500C018: addiu       $at, $zero, 0x81
        ctx->r1 = ADD32(0, 0X81);
            goto L_4500C118;
    }
    // 0x4500C018: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
L_4500C01C:
    // 0x4500C01C: b           L_4500C114
    // 0x4500C020: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_4500C114;
    // 0x4500C020: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4500C024:
    // 0x4500C024: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x4500C028: bne         $s0, $at, L_4500C058
    if (ctx->r16 != ctx->r1) {
        // 0x4500C02C: addiu       $at, $zero, 0x81
        ctx->r1 = ADD32(0, 0X81);
            goto L_4500C058;
    }
    // 0x4500C02C: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
    // 0x4500C030: beq         $v1, $at, L_4500C114
    if (ctx->r3 == ctx->r1) {
        // 0x4500C034: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4500C114;
    }
    // 0x4500C034: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500C038: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4500C03C: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x4500C040: jal         0x45005AB4
    // 0x4500C044: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    ovl_mobj_main_5AB4(rdram, ctx);
        goto after_19;
    // 0x4500C044: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    after_19:
    // 0x4500C048: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x4500C04C: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x4500C050: b           L_4500C118
    // 0x4500C054: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
        goto L_4500C118;
    // 0x4500C054: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
L_4500C058:
    // 0x4500C058: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x4500C05C: bne         $s0, $at, L_4500C104
    if (ctx->r16 != ctx->r1) {
        // 0x4500C060: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_4500C104;
    }
    // 0x4500C060: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x4500C064: beq         $v1, $at, L_4500C0FC
    if (ctx->r3 == ctx->r1) {
        // 0x4500C068: addiu       $at, $zero, 0x21
        ctx->r1 = ADD32(0, 0X21);
            goto L_4500C0FC;
    }
    // 0x4500C068: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x4500C06C: beq         $v1, $at, L_4500C0FC
    if (ctx->r3 == ctx->r1) {
        // 0x4500C070: addiu       $at, $zero, 0x44
        ctx->r1 = ADD32(0, 0X44);
            goto L_4500C0FC;
    }
    // 0x4500C070: addiu       $at, $zero, 0x44
    ctx->r1 = ADD32(0, 0X44);
    // 0x4500C074: beq         $v1, $at, L_4500C0FC
    if (ctx->r3 == ctx->r1) {
        // 0x4500C078: addiu       $at, $zero, 0x4A
        ctx->r1 = ADD32(0, 0X4A);
            goto L_4500C0FC;
    }
    // 0x4500C078: addiu       $at, $zero, 0x4A
    ctx->r1 = ADD32(0, 0X4A);
    // 0x4500C07C: beq         $v1, $at, L_4500C0FC
    if (ctx->r3 == ctx->r1) {
        // 0x4500C080: addiu       $at, $zero, 0x45
        ctx->r1 = ADD32(0, 0X45);
            goto L_4500C0FC;
    }
    // 0x4500C080: addiu       $at, $zero, 0x45
    ctx->r1 = ADD32(0, 0X45);
    // 0x4500C084: beq         $v1, $at, L_4500C0FC
    if (ctx->r3 == ctx->r1) {
        // 0x4500C088: addiu       $at, $zero, 0x74
        ctx->r1 = ADD32(0, 0X74);
            goto L_4500C0FC;
    }
    // 0x4500C088: addiu       $at, $zero, 0x74
    ctx->r1 = ADD32(0, 0X74);
    // 0x4500C08C: beq         $v1, $at, L_4500C0FC
    if (ctx->r3 == ctx->r1) {
        // 0x4500C090: addiu       $at, $zero, 0x7B
        ctx->r1 = ADD32(0, 0X7B);
            goto L_4500C0FC;
    }
    // 0x4500C090: addiu       $at, $zero, 0x7B
    ctx->r1 = ADD32(0, 0X7B);
    // 0x4500C094: beq         $v1, $at, L_4500C0FC
    if (ctx->r3 == ctx->r1) {
        // 0x4500C098: addiu       $at, $zero, 0x7F
        ctx->r1 = ADD32(0, 0X7F);
            goto L_4500C0FC;
    }
    // 0x4500C098: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x4500C09C: beq         $v1, $at, L_4500C0FC
    if (ctx->r3 == ctx->r1) {
        // 0x4500C0A0: addiu       $at, $zero, 0x91
        ctx->r1 = ADD32(0, 0X91);
            goto L_4500C0FC;
    }
    // 0x4500C0A0: addiu       $at, $zero, 0x91
    ctx->r1 = ADD32(0, 0X91);
    // 0x4500C0A4: beq         $v1, $at, L_4500C0FC
    if (ctx->r3 == ctx->r1) {
        // 0x4500C0A8: addiu       $at, $zero, 0x9A
        ctx->r1 = ADD32(0, 0X9A);
            goto L_4500C0FC;
    }
    // 0x4500C0A8: addiu       $at, $zero, 0x9A
    ctx->r1 = ADD32(0, 0X9A);
    // 0x4500C0AC: beq         $v1, $at, L_4500C0FC
    if (ctx->r3 == ctx->r1) {
        // 0x4500C0B0: addiu       $at, $zero, 0x8F
        ctx->r1 = ADD32(0, 0X8F);
            goto L_4500C0FC;
    }
    // 0x4500C0B0: addiu       $at, $zero, 0x8F
    ctx->r1 = ADD32(0, 0X8F);
    // 0x4500C0B4: beq         $v1, $at, L_4500C0FC
    if (ctx->r3 == ctx->r1) {
        // 0x4500C0B8: addiu       $at, $zero, 0x9D
        ctx->r1 = ADD32(0, 0X9D);
            goto L_4500C0FC;
    }
    // 0x4500C0B8: addiu       $at, $zero, 0x9D
    ctx->r1 = ADD32(0, 0X9D);
    // 0x4500C0BC: beq         $v1, $at, L_4500C0FC
    if (ctx->r3 == ctx->r1) {
        // 0x4500C0C0: addiu       $at, $zero, 0xB4
        ctx->r1 = ADD32(0, 0XB4);
            goto L_4500C0FC;
    }
    // 0x4500C0C0: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x4500C0C4: beq         $v1, $at, L_4500C0FC
    if (ctx->r3 == ctx->r1) {
        // 0x4500C0C8: addiu       $at, $zero, 0xC7
        ctx->r1 = ADD32(0, 0XC7);
            goto L_4500C0FC;
    }
    // 0x4500C0C8: addiu       $at, $zero, 0xC7
    ctx->r1 = ADD32(0, 0XC7);
    // 0x4500C0CC: beq         $v1, $at, L_4500C0FC
    if (ctx->r3 == ctx->r1) {
        // 0x4500C0D0: addiu       $at, $zero, 0xB1
        ctx->r1 = ADD32(0, 0XB1);
            goto L_4500C0FC;
    }
    // 0x4500C0D0: addiu       $at, $zero, 0xB1
    ctx->r1 = ADD32(0, 0XB1);
    // 0x4500C0D4: beq         $v1, $at, L_4500C0FC
    if (ctx->r3 == ctx->r1) {
        // 0x4500C0D8: addiu       $at, $zero, 0xDB
        ctx->r1 = ADD32(0, 0XDB);
            goto L_4500C0FC;
    }
    // 0x4500C0D8: addiu       $at, $zero, 0xDB
    ctx->r1 = ADD32(0, 0XDB);
    // 0x4500C0DC: beq         $v1, $at, L_4500C0FC
    if (ctx->r3 == ctx->r1) {
        // 0x4500C0E0: addiu       $at, $zero, 0x105
        ctx->r1 = ADD32(0, 0X105);
            goto L_4500C0FC;
    }
    // 0x4500C0E0: addiu       $at, $zero, 0x105
    ctx->r1 = ADD32(0, 0X105);
    // 0x4500C0E4: beq         $v1, $at, L_4500C0FC
    if (ctx->r3 == ctx->r1) {
        // 0x4500C0E8: addiu       $at, $zero, 0x48
        ctx->r1 = ADD32(0, 0X48);
            goto L_4500C0FC;
    }
    // 0x4500C0E8: addiu       $at, $zero, 0x48
    ctx->r1 = ADD32(0, 0X48);
    // 0x4500C0EC: beq         $v1, $at, L_4500C0FC
    if (ctx->r3 == ctx->r1) {
        // 0x4500C0F0: addiu       $at, $zero, 0xE6
        ctx->r1 = ADD32(0, 0XE6);
            goto L_4500C0FC;
    }
    // 0x4500C0F0: addiu       $at, $zero, 0xE6
    ctx->r1 = ADD32(0, 0XE6);
    // 0x4500C0F4: bne         $v1, $at, L_4500C118
    if (ctx->r3 != ctx->r1) {
        // 0x4500C0F8: addiu       $at, $zero, 0x81
        ctx->r1 = ADD32(0, 0X81);
            goto L_4500C118;
    }
    // 0x4500C0F8: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
L_4500C0FC:
    // 0x4500C0FC: b           L_4500C114
    // 0x4500C100: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_4500C114;
    // 0x4500C100: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4500C104:
    // 0x4500C104: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x4500C108: bne         $s0, $at, L_4500C118
    if (ctx->r16 != ctx->r1) {
        // 0x4500C10C: addiu       $at, $zero, 0x81
        ctx->r1 = ADD32(0, 0X81);
            goto L_4500C118;
    }
    // 0x4500C10C: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
    // 0x4500C110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4500C114:
    // 0x4500C114: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
L_4500C118:
    // 0x4500C118: bne         $v1, $at, L_4500C200
    if (ctx->r3 != ctx->r1) {
        // 0x4500C11C: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_4500C200;
    }
    // 0x4500C11C: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x4500C120: bne         $s0, $at, L_4500C144
    if (ctx->r16 != ctx->r1) {
        // 0x4500C124: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4500C144;
    }
    // 0x4500C124: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500C128: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4500C12C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x4500C130: jal         0x45005AB4
    // 0x4500C134: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    ovl_mobj_main_5AB4(rdram, ctx);
        goto after_20;
    // 0x4500C134: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    after_20:
    // 0x4500C138: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x4500C13C: b           L_4500C1B0
    // 0x4500C140: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
        goto L_4500C1B0;
    // 0x4500C140: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
L_4500C144:
    // 0x4500C144: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
    // 0x4500C148: bne         $at, $zero, L_4500C1AC
    if (ctx->r1 != 0) {
        // 0x4500C14C: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_4500C1AC;
    }
    // 0x4500C14C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4500C150: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x4500C154: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x4500C158: jal         0x450006C4
    // 0x4500C15C: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_21;
    // 0x4500C15C: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_21:
    // 0x4500C160: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x4500C164: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4500C168: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x4500C16C: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x4500C170: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4500C174: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x4500C178: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x4500C17C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x4500C180: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x4500C184: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x4500C188: bc1f        L_4500C198
    if (!c1cs) {
        // 0x4500C18C: addiu       $a2, $sp, 0x44
        ctx->r6 = ADD32(ctx->r29, 0X44);
            goto L_4500C198;
    }
    // 0x4500C18C: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x4500C190: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x4500C194: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
L_4500C198:
    // 0x4500C198: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x4500C19C: jal         0x450006C4
    // 0x4500C1A0: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_22;
    // 0x4500C1A0: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    after_22:
    // 0x4500C1A4: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x4500C1A8: nop

L_4500C1AC:
    // 0x4500C1AC: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
L_4500C1B0:
    // 0x4500C1B0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x4500C1B4: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x4500C1B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4500C1BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4500C1C0: c.eq.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl == ctx->f0.fl;
    // 0x4500C1C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4500C1C8: bc1f        L_4500C1E4
    if (!c1cs) {
        // 0x4500C1CC: lui         $at, 0x4352
        ctx->r1 = S32(0X4352 << 16);
            goto L_4500C1E4;
    }
    // 0x4500C1CC: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x4500C1D0: jal         0x45005DA4
    // 0x4500C1D4: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    ovl_mobj_main_5DA4(rdram, ctx);
        goto after_23;
    // 0x4500C1D4: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    after_23:
    // 0x4500C1D8: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x4500C1DC: b           L_4500C200
    // 0x4500C1E0: nop

        goto L_4500C200;
    // 0x4500C1E0: nop

L_4500C1E4:
    // 0x4500C1E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4500C1E8: nop

    // 0x4500C1EC: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x4500C1F0: nop

    // 0x4500C1F4: bc1f        L_4500C200
    if (!c1cs) {
        // 0x4500C1F8: nop
    
            goto L_4500C200;
    }
    // 0x4500C1F8: nop

    // 0x4500C1FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4500C200:
    // 0x4500C200: beq         $v0, $zero, L_4500C224
    if (ctx->r2 == 0) {
        // 0x4500C204: addiu       $t3, $zero, 0xE
        ctx->r11 = ADD32(0, 0XE);
            goto L_4500C224;
    }
    // 0x4500C204: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    // 0x4500C208: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x4500C20C: sw          $t3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r11;
    // 0x4500C210: sw          $t4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r12;
    // 0x4500C214: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x4500C218: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x4500C21C: jal         0x450006C4
    // 0x4500C220: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_24;
    // 0x4500C220: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    after_24:
L_4500C224:
    // 0x4500C224: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x4500C228: b           L_4500C334
    // 0x4500C22C: addiu       $at, $zero, 0x9A
    ctx->r1 = ADD32(0, 0X9A);
        goto L_4500C334;
    // 0x4500C22C: addiu       $at, $zero, 0x9A
    ctx->r1 = ADD32(0, 0X9A);
L_4500C230:
    // 0x4500C230: bne         $v0, $at, L_4500C2C4
    if (ctx->r2 != ctx->r1) {
        // 0x4500C234: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_4500C2C4;
    }
    // 0x4500C234: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x4500C238: beq         $v1, $at, L_4500C270
    if (ctx->r3 == ctx->r1) {
        // 0x4500C23C: addiu       $at, $zero, 0x66
        ctx->r1 = ADD32(0, 0X66);
            goto L_4500C270;
    }
    // 0x4500C23C: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x4500C240: beq         $v1, $at, L_4500C270
    if (ctx->r3 == ctx->r1) {
        // 0x4500C244: addiu       $at, $zero, 0x81
        ctx->r1 = ADD32(0, 0X81);
            goto L_4500C270;
    }
    // 0x4500C244: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
    // 0x4500C248: beq         $v1, $at, L_4500C270
    if (ctx->r3 == ctx->r1) {
        // 0x4500C24C: addiu       $at, $zero, 0xB0
        ctx->r1 = ADD32(0, 0XB0);
            goto L_4500C270;
    }
    // 0x4500C24C: addiu       $at, $zero, 0xB0
    ctx->r1 = ADD32(0, 0XB0);
    // 0x4500C250: beq         $v1, $at, L_4500C270
    if (ctx->r3 == ctx->r1) {
        // 0x4500C254: addiu       $at, $zero, 0xB1
        ctx->r1 = ADD32(0, 0XB1);
            goto L_4500C270;
    }
    // 0x4500C254: addiu       $at, $zero, 0xB1
    ctx->r1 = ADD32(0, 0XB1);
    // 0x4500C258: beq         $v1, $at, L_4500C270
    if (ctx->r3 == ctx->r1) {
        // 0x4500C25C: addiu       $at, $zero, 0xC6
        ctx->r1 = ADD32(0, 0XC6);
            goto L_4500C270;
    }
    // 0x4500C25C: addiu       $at, $zero, 0xC6
    ctx->r1 = ADD32(0, 0XC6);
    // 0x4500C260: beq         $v1, $at, L_4500C270
    if (ctx->r3 == ctx->r1) {
        // 0x4500C264: addiu       $at, $zero, 0xDD
        ctx->r1 = ADD32(0, 0XDD);
            goto L_4500C270;
    }
    // 0x4500C264: addiu       $at, $zero, 0xDD
    ctx->r1 = ADD32(0, 0XDD);
    // 0x4500C268: bne         $v1, $at, L_4500C334
    if (ctx->r3 != ctx->r1) {
        // 0x4500C26C: addiu       $at, $zero, 0x9A
        ctx->r1 = ADD32(0, 0X9A);
            goto L_4500C334;
    }
    // 0x4500C26C: addiu       $at, $zero, 0x9A
    ctx->r1 = ADD32(0, 0X9A);
L_4500C270:
    // 0x4500C270: lw          $t5, 0x188($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X188);
    // 0x4500C274: nop

    // 0x4500C278: addiu       $v0, $t5, 0x1
    ctx->r2 = ADD32(ctx->r13, 0X1);
    // 0x4500C27C: bne         $v0, $a0, L_4500C298
    if (ctx->r2 != ctx->r4) {
        // 0x4500C280: sw          $v0, 0x188($s1)
        MEM_W(0X188, ctx->r17) = ctx->r2;
            goto L_4500C298;
    }
    // 0x4500C280: sw          $v0, 0x188($s1)
    MEM_W(0X188, ctx->r17) = ctx->r2;
    // 0x4500C284: lw          $t7, 0x184($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X184);
    // 0x4500C288: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x4500C28C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x4500C290: b           L_4500C2B8
    // 0x4500C294: sw          $t8, 0x184($s1)
    MEM_W(0X184, ctx->r17) = ctx->r24;
        goto L_4500C2B8;
    // 0x4500C294: sw          $t8, 0x184($s1)
    MEM_W(0X184, ctx->r17) = ctx->r24;
L_4500C298:
    // 0x4500C298: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x4500C29C: bne         $at, $zero, L_4500C2B8
    if (ctx->r1 != 0) {
        // 0x4500C2A0: nop
    
            goto L_4500C2B8;
    }
    // 0x4500C2A0: nop

    // 0x4500C2A4: lw          $t9, 0x184($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X184);
    // 0x4500C2A8: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x4500C2AC: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x4500C2B0: sw          $t0, 0x184($s1)
    MEM_W(0X184, ctx->r17) = ctx->r8;
    // 0x4500C2B4: sw          $zero, 0x188($s1)
    MEM_W(0X188, ctx->r17) = 0;
L_4500C2B8:
    // 0x4500C2B8: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x4500C2BC: b           L_4500C334
    // 0x4500C2C0: addiu       $at, $zero, 0x9A
    ctx->r1 = ADD32(0, 0X9A);
        goto L_4500C334;
    // 0x4500C2C0: addiu       $at, $zero, 0x9A
    ctx->r1 = ADD32(0, 0X9A);
L_4500C2C4:
    // 0x4500C2C4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4500C2C8: bne         $v0, $at, L_4500C330
    if (ctx->r2 != ctx->r1) {
        // 0x4500C2CC: addiu       $at, $zero, 0x66
        ctx->r1 = ADD32(0, 0X66);
            goto L_4500C330;
    }
    // 0x4500C2CC: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x4500C2D0: beq         $v1, $at, L_4500C2E0
    if (ctx->r3 == ctx->r1) {
        // 0x4500C2D4: addiu       $at, $zero, 0xC6
        ctx->r1 = ADD32(0, 0XC6);
            goto L_4500C2E0;
    }
    // 0x4500C2D4: addiu       $at, $zero, 0xC6
    ctx->r1 = ADD32(0, 0XC6);
    // 0x4500C2D8: bne         $v1, $at, L_4500C334
    if (ctx->r3 != ctx->r1) {
        // 0x4500C2DC: addiu       $at, $zero, 0x9A
        ctx->r1 = ADD32(0, 0X9A);
            goto L_4500C334;
    }
    // 0x4500C2DC: addiu       $at, $zero, 0x9A
    ctx->r1 = ADD32(0, 0X9A);
L_4500C2E0:
    // 0x4500C2E0: lw          $t1, 0x188($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X188);
    // 0x4500C2E4: nop

    // 0x4500C2E8: addiu       $v0, $t1, 0x1
    ctx->r2 = ADD32(ctx->r9, 0X1);
    // 0x4500C2EC: bne         $v0, $a0, L_4500C308
    if (ctx->r2 != ctx->r4) {
        // 0x4500C2F0: sw          $v0, 0x188($s1)
        MEM_W(0X188, ctx->r17) = ctx->r2;
            goto L_4500C308;
    }
    // 0x4500C2F0: sw          $v0, 0x188($s1)
    MEM_W(0X188, ctx->r17) = ctx->r2;
    // 0x4500C2F4: lw          $t3, 0x184($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X184);
    // 0x4500C2F8: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x4500C2FC: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x4500C300: b           L_4500C328
    // 0x4500C304: sw          $t4, 0x184($s1)
    MEM_W(0X184, ctx->r17) = ctx->r12;
        goto L_4500C328;
    // 0x4500C304: sw          $t4, 0x184($s1)
    MEM_W(0X184, ctx->r17) = ctx->r12;
L_4500C308:
    // 0x4500C308: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x4500C30C: bne         $at, $zero, L_4500C328
    if (ctx->r1 != 0) {
        // 0x4500C310: nop
    
            goto L_4500C328;
    }
    // 0x4500C310: nop

    // 0x4500C314: lw          $t5, 0x184($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X184);
    // 0x4500C318: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x4500C31C: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x4500C320: sw          $t6, 0x184($s1)
    MEM_W(0X184, ctx->r17) = ctx->r14;
    // 0x4500C324: sw          $zero, 0x188($s1)
    MEM_W(0X188, ctx->r17) = 0;
L_4500C328:
    // 0x4500C328: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x4500C32C: nop

L_4500C330:
    // 0x4500C330: addiu       $at, $zero, 0x9A
    ctx->r1 = ADD32(0, 0X9A);
L_4500C334:
    // 0x4500C334: bne         $a2, $at, L_4500C348
    if (ctx->r6 != ctx->r1) {
        // 0x4500C338: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_4500C348;
    }
    // 0x4500C338: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x4500C33C: jal         0x4500B534
    // 0x4500C340: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_mobj_main_B534(rdram, ctx);
        goto after_25;
    // 0x4500C340: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_25:
    // 0x4500C344: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_4500C348:
    // 0x4500C348: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x4500C34C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x4500C350: jr          $ra
    // 0x4500C354: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x4500C354: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void ovl_mobj_main_C358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500C358: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500C35C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500C360: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500C364: nop

    // 0x4500C368: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x4500C36C: beq         $t7, $zero, L_4500C380
    if (ctx->r15 == 0) {
        // 0x4500C370: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4500C380;
    }
    // 0x4500C370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500C374: jal         0x45006AE0
    // 0x4500C378: nop

    ovl_mobj_main_6AE0(rdram, ctx);
        goto after_0;
    // 0x4500C378: nop

    after_0:
    // 0x4500C37C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500C380:
    // 0x4500C380: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500C384: jr          $ra
    // 0x4500C388: nop

    return;
    // 0x4500C388: nop

;}
RECOMP_FUNC void ovl_mobj_main_C38C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500C38C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500C390: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500C394: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500C398: nop

    // 0x4500C39C: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x4500C3A0: beq         $t7, $zero, L_4500C3B4
    if (ctx->r15 == 0) {
        // 0x4500C3A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4500C3B4;
    }
    // 0x4500C3A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500C3A8: jal         0x45006C38
    // 0x4500C3AC: nop

    ovl_mobj_main_6C38(rdram, ctx);
        goto after_0;
    // 0x4500C3AC: nop

    after_0:
    // 0x4500C3B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500C3B4:
    // 0x4500C3B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500C3B8: jr          $ra
    // 0x4500C3BC: nop

    return;
    // 0x4500C3BC: nop

;}
RECOMP_FUNC void ovl_mobj_main_C3C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500C3C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500C3C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500C3C8: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x4500C3CC: nop

    // 0x4500C3D0: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x4500C3D4: beq         $t7, $zero, L_4500C3E8
    if (ctx->r15 == 0) {
        // 0x4500C3D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4500C3E8;
    }
    // 0x4500C3D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500C3DC: jal         0x45006DDC
    // 0x4500C3E0: nop

    ovl_mobj_main_6DDC(rdram, ctx);
        goto after_0;
    // 0x4500C3E0: nop

    after_0:
    // 0x4500C3E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4500C3E8:
    // 0x4500C3E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500C3EC: jr          $ra
    // 0x4500C3F0: nop

    return;
    // 0x4500C3F0: nop

;}
