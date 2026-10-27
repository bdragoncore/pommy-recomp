#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_boss_demon_30B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430030B4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430030B8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x430030BC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x430030C0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x430030C4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x430030C8: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x430030CC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x430030D0: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x430030D4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x430030D8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x430030DC: blez        $a1, L_43003168
    if (SIGNED(ctx->r5) <= 0) {
        // 0x430030E0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_43003168;
    }
    // 0x430030E0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x430030E4: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x430030E8: lui         $s2, 0x4301
    ctx->r18 = S32(0X4301 << 16);
    // 0x430030EC: addiu       $s2, $s2, -0x5500
    ctx->r18 = ADD32(ctx->r18, -0X5500);
    // 0x430030F0: addiu       $s4, $s4, -0x54A0
    ctx->r20 = ADD32(ctx->r20, -0X54A0);
    // 0x430030F4: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
L_430030F8:
    // 0x430030F8: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x430030FC: nop

    // 0x43003100: beq         $t6, $zero, L_43003124
    if (ctx->r14 == 0) {
        // 0x43003104: nop
    
            goto L_43003124;
    }
    // 0x43003104: nop

    // 0x43003108: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x4300310C: nop

    // 0x43003110: beq         $s3, $t7, L_43003120
    if (ctx->r19 == ctx->r15) {
        // 0x43003114: nop
    
            goto L_43003120;
    }
    // 0x43003114: nop

    // 0x43003118: b           L_4300316C
    // 0x4300311C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_4300316C;
    // 0x4300311C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43003120:
    // 0x43003120: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
L_43003124:
    // 0x43003124: lw          $a0, 0x58($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X58);
    // 0x43003128: nop

    // 0x4300312C: lw          $t9, 0x8C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8C);
    // 0x43003130: nop

    // 0x43003134: jalr        $t9
    // 0x43003138: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43003138: nop

    after_0:
    // 0x4300313C: beq         $v0, $zero, L_4300316C
    if (ctx->r2 == 0) {
        // 0x43003140: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_4300316C;
    }
    // 0x43003140: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43003144: lw          $t9, 0x98($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X98);
    // 0x43003148: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4300314C: jalr        $t9
    // 0x43003150: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43003150: nop

    after_1:
    // 0x43003154: jal         0x43008B98
    // 0x43003158: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_2;
    // 0x43003158: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x4300315C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43003160: bne         $s0, $s5, L_430030F8
    if (ctx->r16 != ctx->r21) {
        // 0x43003164: nop
    
            goto L_430030F8;
    }
    // 0x43003164: nop

L_43003168:
    // 0x43003168: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_4300316C:
    // 0x4300316C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43003170: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43003174: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x43003178: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x4300317C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x43003180: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x43003184: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x43003188: jr          $ra
    // 0x4300318C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x4300318C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_demon_3190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003190: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43003194: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43003198: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x4300319C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x430031A0: lw          $s0, 0x58($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X58);
    // 0x430031A4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x430031A8: lw          $t9, 0xA4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XA4);
    // 0x430031AC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x430031B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430031B4: jalr        $t9
    // 0x430031B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430031B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x430031BC: lui         $a1, 0xE0
    ctx->r5 = S32(0XE0 << 16);
    // 0x430031C0: ori         $a1, $a1, 0xFF00
    ctx->r5 = ctx->r5 | 0XFF00;
    // 0x430031C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430031C8: jal         0x43005F50
    // 0x430031CC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    ovl_boss_demon_5F50(rdram, ctx);
        goto after_1;
    // 0x430031CC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_1:
    // 0x430031D0: jal         0x43000244
    // 0x430031D4: addiu       $a0, $zero, 0x302
    ctx->r4 = ADD32(0, 0X302);
    ovl_boss_demon_244(rdram, ctx);
        goto after_2;
    // 0x430031D4: addiu       $a0, $zero, 0x302
    ctx->r4 = ADD32(0, 0X302);
    after_2:
    // 0x430031D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430031DC: jal         0x43002BFC
    // 0x430031E0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    ovl_boss_demon_2BFC(rdram, ctx);
        goto after_3;
    // 0x430031E0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_3:
    // 0x430031E4: lw          $t9, 0xAC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XAC);
    // 0x430031E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430031EC: jalr        $t9
    // 0x430031F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x430031F0: nop

    after_4:
    // 0x430031F4: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x430031F8: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x430031FC: jal         0x43005F90
    // 0x43003200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_demon_5F90(rdram, ctx);
        goto after_5;
    // 0x43003200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x43003204: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43003208: jal         0x43007A44
    // 0x4300320C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    ovl_boss_demon_7A44(rdram, ctx);
        goto after_6;
    // 0x4300320C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_6:
    // 0x43003210: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x43003214: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43003218: jal         0x430030B4
    // 0x4300321C: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    ovl_boss_demon_30B4(rdram, ctx);
        goto after_7;
    // 0x4300321C: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_7:
    // 0x43003220: bne         $v0, $zero, L_43003298
    if (ctx->r2 != 0) {
        // 0x43003224: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_43003298;
    }
    // 0x43003224: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x43003228: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x4300322C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43003230: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x43003234: jal         0x430030B4
    // 0x43003238: sw          $t7, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r15;
    ovl_boss_demon_30B4(rdram, ctx);
        goto after_8;
    // 0x43003238: sw          $t7, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r15;
    after_8:
    // 0x4300323C: bne         $v0, $zero, L_4300329C
    if (ctx->r2 != 0) {
        // 0x43003240: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_4300329C;
    }
    // 0x43003240: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x43003244: jal         0x43006024
    // 0x43003248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_demon_6024(rdram, ctx);
        goto after_9;
    // 0x43003248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x4300324C: lw          $t9, 0xB0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XB0);
    // 0x43003250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003254: jalr        $t9
    // 0x43003258: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x43003258: nop

    after_10:
    // 0x4300325C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43003260: jal         0x430030B4
    // 0x43003264: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    ovl_boss_demon_30B4(rdram, ctx);
        goto after_11;
    // 0x43003264: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_11:
    // 0x43003268: bne         $v0, $zero, L_43003298
    if (ctx->r2 != 0) {
        // 0x4300326C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_43003298;
    }
    // 0x4300326C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43003270: jal         0x430030B4
    // 0x43003274: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    ovl_boss_demon_30B4(rdram, ctx);
        goto after_12;
    // 0x43003274: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_12:
    // 0x43003278: bne         $v0, $zero, L_4300329C
    if (ctx->r2 != 0) {
        // 0x4300327C: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_4300329C;
    }
    // 0x4300327C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x43003280: jal         0x43002C7C
    // 0x43003284: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_boss_demon_2C7C(rdram, ctx);
        goto after_13;
    // 0x43003284: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x43003288: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300328C: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x43003290: sw          $zero, -0x54A4($at)
    MEM_W(-0X54A4, ctx->r1) = 0;
    // 0x43003294: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_43003298:
    // 0x43003298: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
L_4300329C:
    // 0x4300329C: nop

    // 0x430032A0: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x430032A4: nop

    // 0x430032A8: jalr        $t9
    // 0x430032AC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x430032AC: nop

    after_14:
    // 0x430032B0: lw          $t9, 0xB0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XB0);
    // 0x430032B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430032B8: jalr        $t9
    // 0x430032BC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x430032BC: nop

    after_15:
    // 0x430032C0: jal         0x43006070
    // 0x430032C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_demon_6070(rdram, ctx);
        goto after_16;
    // 0x430032C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x430032C8: jal         0x43008B98
    // 0x430032CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_17;
    // 0x430032CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_17:
    // 0x430032D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430032D4: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x430032D8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x430032DC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x430032E0: jr          $ra
    // 0x430032E4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x430032E4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_demon_32E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430032E8: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x430032EC: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x430032F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430032F4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x430032F8: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x430032FC: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x43003300: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x43003304: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x43003308: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x4300330C: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x43003310: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x43003314: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x43003318: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x4300331C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x43003320: addiu       $a2, $a2, -0x5808
    ctx->r6 = ADD32(ctx->r6, -0X5808);
    // 0x43003324: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x43003328: jal         0x43008DF8
    // 0x4300332C: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    ovl_boss_demon_8DF8(rdram, ctx);
        goto after_0;
    // 0x4300332C: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    after_0:
    // 0x43003330: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003334: lwc1        $f4, -0x5A08($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5A08);
    // 0x43003338: nop

    // 0x4300333C: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
    // 0x43003340: lwc1        $f14, 0x60($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X60);
    // 0x43003344: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x43003348: jal         0x43008EC4
    // 0x4300334C: nop

    ovl_boss_demon_8EC4(rdram, ctx);
        goto after_1;
    // 0x4300334C: nop

    after_1:
    // 0x43003350: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    // 0x43003354: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43003358: jalr        $t9
    // 0x4300335C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x4300335C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x43003360: lw          $t6, 0x58($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X58);
    // 0x43003364: addiu       $a0, $zero, 0x2F3
    ctx->r4 = ADD32(0, 0X2F3);
    // 0x43003368: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x4300336C: jal         0x43000280
    // 0x43003370: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    ovl_boss_demon_280(rdram, ctx);
        goto after_3;
    // 0x43003370: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    after_3:
    // 0x43003374: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x43003378: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4300337C: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43003380: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43003384: jalr        $t9
    // 0x43003388: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x43003388: nop

    after_4:
    // 0x4300338C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x43003390: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x43003394: lw          $t7, 0x4C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4C);
    // 0x43003398: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x4300339C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x430033A0: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x430033A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x430033A8: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x430033AC: div.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x430033B0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x430033B4: sw          $t8, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r24;
    // 0x430033B8: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x430033BC: swc1        $f2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f2.u32l;
    // 0x430033C0: swc1        $f2, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f2.u32l;
    // 0x430033C4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x430033C8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x430033CC: swc1        $f8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f8.u32l;
    // 0x430033D0: lw          $t9, 0x98($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X98);
    // 0x430033D4: nop

    // 0x430033D8: jalr        $t9
    // 0x430033DC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x430033DC: nop

    after_5:
    // 0x430033E0: lw          $t0, 0x4C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4C);
    // 0x430033E4: lui         $at, 0x4028
    ctx->r1 = S32(0X4028 << 16);
    // 0x430033E8: mtc1        $at, $f27
    ctx->f_odd[(27 - 1) * 2] = ctx->r1;
    // 0x430033EC: ori         $t1, $t0, 0x100
    ctx->r9 = ctx->r8 | 0X100;
    // 0x430033F0: sw          $t1, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r9;
    // 0x430033F4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430033F8: lwc1        $f23, -0x5A00($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, -0X5A00);
    // 0x430033FC: lwc1        $f22, -0x59FC($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X59FC);
    // 0x43003400: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x43003404: mtc1        $zero, $f25
    ctx->f_odd[(25 - 1) * 2] = 0;
    // 0x43003408: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x4300340C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_43003410:
    // 0x43003410: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x43003414: addiu       $a2, $a2, -0x5808
    ctx->r6 = ADD32(ctx->r6, -0X5808);
    // 0x43003418: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x4300341C: jal         0x43008DF8
    // 0x43003420: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_demon_8DF8(rdram, ctx);
        goto after_6;
    // 0x43003420: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x43003424: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x43003428: nop

    // 0x4300342C: cvt.d.s     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.d = CVT_D_S(ctx->f10.fl);
    // 0x43003430: c.lt.d      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.d < ctx->f22.d;
    // 0x43003434: nop

    // 0x43003438: bc1f        L_43003450
    if (!c1cs) {
        // 0x4300343C: nop
    
            goto L_43003450;
    }
    // 0x4300343C: nop

    // 0x43003440: cvt.s.d     $f16, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.d); 
    ctx->f16.fl = CVT_S_D(ctx->f24.d);
    // 0x43003444: b           L_4300345C
    // 0x43003448: swc1        $f16, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f16.u32l;
        goto L_4300345C;
    // 0x43003448: swc1        $f16, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f16.u32l;
    // 0x4300344C: nop

L_43003450:
    // 0x43003450: div.d       $f18, $f0, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f26.d); 
    ctx->f18.d = DIV_D(ctx->f0.d, ctx->f26.d);
    // 0x43003454: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x43003458: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
L_4300345C:
    // 0x4300345C: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x43003460: lwc1        $f14, 0x60($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X60);
    // 0x43003464: jal         0x43008EC4
    // 0x43003468: nop

    ovl_boss_demon_8EC4(rdram, ctx);
        goto after_7;
    // 0x43003468: nop

    after_7:
    // 0x4300346C: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    // 0x43003470: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43003474: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x43003478: jalr        $t9
    // 0x4300347C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x4300347C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x43003480: lw          $t9, 0xA4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XA4);
    // 0x43003484: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x43003488: jalr        $t9
    // 0x4300348C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x4300348C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x43003490: lw          $t9, 0xAC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XAC);
    // 0x43003494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003498: jalr        $t9
    // 0x4300349C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x4300349C: nop

    after_10:
    // 0x430034A0: jal         0x43008B98
    // 0x430034A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_11;
    // 0x430034A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x430034A8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x430034AC: slti        $at, $s1, 0x14
    ctx->r1 = SIGNED(ctx->r17) < 0X14 ? 1 : 0;
    // 0x430034B0: bne         $at, $zero, L_43003410
    if (ctx->r1 != 0) {
        // 0x430034B4: nop
    
            goto L_43003410;
    }
    // 0x430034B4: nop

    // 0x430034B8: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x430034BC: nop

    // 0x430034C0: lw          $t9, 0x9C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X9C);
    // 0x430034C4: nop

    // 0x430034C8: jalr        $t9
    // 0x430034CC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x430034CC: nop

    after_12:
    // 0x430034D0: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x430034D4: lw          $t2, 0x4C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4C);
    // 0x430034D8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430034DC: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x430034E0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x430034E4: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x430034E8: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x430034EC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x430034F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x430034F4: sw          $t3, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r11;
    // 0x430034F8: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x430034FC: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    // 0x43003500: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
    // 0x43003504: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43003508: mul.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x4300350C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x43003510: jalr        $t9
    // 0x43003514: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x43003514: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x43003518: jal         0x43008B98
    // 0x4300351C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_14;
    // 0x4300351C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_14:
    // 0x43003520: swc1        $f20, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f20.u32l;
    // 0x43003524: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_43003528:
    // 0x43003528: lw          $t9, 0xAC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XAC);
    // 0x4300352C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003530: jalr        $t9
    // 0x43003534: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x43003534: nop

    after_15:
    // 0x43003538: jal         0x43008B98
    // 0x4300353C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_16;
    // 0x4300353C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_16:
    // 0x43003540: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43003544: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x43003548: bne         $s1, $at, L_43003528
    if (ctx->r17 != ctx->r1) {
        // 0x4300354C: nop
    
            goto L_43003528;
    }
    // 0x4300354C: nop

    // 0x43003550: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x43003554: addiu       $s1, $s1, -0x5E2C
    ctx->r17 = ADD32(ctx->r17, -0X5E2C);
    // 0x43003558: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x4300355C: nop

    // 0x43003560: lw          $t9, 0xD0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD0);
    // 0x43003564: nop

    // 0x43003568: jalr        $t9
    // 0x4300356C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x4300356C: nop

    after_17:
    // 0x43003570: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x43003574: nop

    // 0x43003578: lw          $t9, 0xAC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XAC);
    // 0x4300357C: nop

    // 0x43003580: jalr        $t9
    // 0x43003584: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x43003584: nop

    after_18:
    // 0x43003588: lw          $t4, 0x4C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4C);
L_4300358C:
    // 0x4300358C: nop

    // 0x43003590: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x43003594: bne         $t5, $zero, L_430035DC
    if (ctx->r13 != 0) {
        // 0x43003598: lw          $a0, 0x54($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X54);
            goto L_430035DC;
    }
    // 0x43003598: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x4300359C: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x430035A0: nop

    // 0x430035A4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x430035A8: c.le.d      $f18, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f18.d <= ctx->f24.d;
    // 0x430035AC: nop

    // 0x430035B0: bc1t        L_430035DC
    if (c1cs) {
        // 0x430035B4: lw          $a0, 0x54($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X54);
            goto L_430035DC;
    }
    // 0x430035B4: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x430035B8: lw          $t9, 0xAC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XAC);
    // 0x430035BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430035C0: jalr        $t9
    // 0x430035C4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x430035C4: nop

    after_19:
    // 0x430035C8: jal         0x43008B98
    // 0x430035CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_20;
    // 0x430035CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_20:
    // 0x430035D0: b           L_4300358C
    // 0x430035D4: lw          $t4, 0x4C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4C);
        goto L_4300358C;
    // 0x430035D4: lw          $t4, 0x4C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4C);
    // 0x430035D8: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
L_430035DC:
    // 0x430035DC: nop

    // 0x430035E0: lw          $t9, 0xB0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XB0);
    // 0x430035E4: nop

    // 0x430035E8: jalr        $t9
    // 0x430035EC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x430035EC: nop

    after_21:
    // 0x430035F0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x430035F4: nop

    // 0x430035F8: lw          $t9, 0xD4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD4);
    // 0x430035FC: nop

    // 0x43003600: jalr        $t9
    // 0x43003604: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x43003604: nop

    after_22:
    // 0x43003608: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x4300360C: lw          $a0, -0x57E8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X57E8);
    // 0x43003610: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x43003614: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x43003618: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x4300361C: jalr        $t9
    // 0x43003620: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x43003620: nop

    after_23:
    // 0x43003624: addiu       $a0, $zero, 0x2F5
    ctx->r4 = ADD32(0, 0X2F5);
    // 0x43003628: jal         0x43000280
    // 0x4300362C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_demon_280(rdram, ctx);
        goto after_24;
    // 0x4300362C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_24:
    // 0x43003630: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x43003634: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    // 0x43003638: jal         0x43000CA0
    // 0x4300363C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_boss_demon_CA0(rdram, ctx);
        goto after_25;
    // 0x4300363C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_25:
    // 0x43003640: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43003644: lw          $t9, 0x98($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X98);
    // 0x43003648: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300364C: jalr        $t9
    // 0x43003650: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x43003650: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    after_26:
    // 0x43003654: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43003658: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4300365C: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    // 0x43003660: jal         0x43001F9C
    // 0x43003664: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    ovl_boss_demon_1F9C(rdram, ctx);
        goto after_27;
    // 0x43003664: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    after_27:
    // 0x43003668: jal         0x43002C7C
    // 0x4300366C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_demon_2C7C(rdram, ctx);
        goto after_28;
    // 0x4300366C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x43003670: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43003674: lw          $t7, -0x54A8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X54A8);
    // 0x43003678: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4300367C: bne         $t7, $at, L_430036B0
    if (ctx->r15 != ctx->r1) {
        // 0x43003680: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_430036B0;
    }
    // 0x43003680: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x43003684: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43003688: addiu       $a0, $a0, -0x54A4
    ctx->r4 = ADD32(ctx->r4, -0X54A4);
    // 0x4300368C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x43003690: nop

    // 0x43003694: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x43003698: beq         $v0, $zero, L_430036A8
    if (ctx->r2 == 0) {
        // 0x4300369C: sw          $t8, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r24;
            goto L_430036A8;
    }
    // 0x4300369C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x430036A0: b           L_430036B0
    // 0x430036A4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_430036B0;
    // 0x430036A4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_430036A8:
    // 0x430036A8: b           L_430036B0
    // 0x430036AC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_430036B0;
    // 0x430036AC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_430036B0:
    // 0x430036B0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x430036B4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x430036B8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x430036BC: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x430036C0: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x430036C4: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x430036C8: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x430036CC: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x430036D0: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x430036D4: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x430036D8: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x430036DC: jr          $ra
    // 0x430036E0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x430036E0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_boss_demon_36E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430036E4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x430036E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x430036EC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430036F0: lwc1        $f6, -0x57F4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X57F4);
    // 0x430036F4: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x430036F8: nop

    // 0x430036FC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x43003700: jr          $ra
    // 0x43003704: swc1        $f8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f8.u32l;
    return;
    // 0x43003704: swc1        $f8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f8.u32l;
;}
RECOMP_FUNC void ovl_boss_demon_3708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003708: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x4300370C: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x43003710: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x43003714: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43003718: addiu       $s2, $sp, 0x5C
    ctx->r18 = ADD32(ctx->r29, 0X5C);
    // 0x4300371C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x43003720: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x43003724: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x43003728: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x4300372C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43003730: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x43003734: addiu       $a2, $a2, -0x5808
    ctx->r6 = ADD32(ctx->r6, -0X5808);
    // 0x43003738: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x4300373C: jal         0x43008DF8
    // 0x43003740: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_demon_8DF8(rdram, ctx);
        goto after_0;
    // 0x43003740: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x43003744: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003748: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x4300374C: lwc1        $f4, -0x59F8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X59F8);
    // 0x43003750: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x43003754: jal         0x43008EC4
    // 0x43003758: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
    ovl_boss_demon_8EC4(rdram, ctx);
        goto after_1;
    // 0x43003758: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x4300375C: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    // 0x43003760: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43003764: jalr        $t9
    // 0x43003768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43003768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x4300376C: lw          $s3, 0x58($s0)
    ctx->r19 = MEM_W(ctx->r16, 0X58);
    // 0x43003770: addiu       $a0, $zero, 0x2F3
    ctx->r4 = ADD32(0, 0X2F3);
    // 0x43003774: jal         0x43000280
    // 0x43003778: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_demon_280(rdram, ctx);
        goto after_3;
    // 0x43003778: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x4300377C: lw          $t9, 0xA4($s3)
    ctx->r25 = MEM_W(ctx->r19, 0XA4);
    // 0x43003780: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43003784: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x43003788: jalr        $t9
    // 0x4300378C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x4300378C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x43003790: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x43003794: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x43003798: lw          $t6, 0x4C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4C);
    // 0x4300379C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x430037A0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x430037A4: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x430037A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x430037AC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x430037B0: div.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x430037B4: sw          $t7, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r15;
    // 0x430037B8: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x430037BC: swc1        $f2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f2.u32l;
    // 0x430037C0: swc1        $f2, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f2.u32l;
    // 0x430037C4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x430037C8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x430037CC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x430037D0: swc1        $f8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f8.u32l;
    // 0x430037D4: lw          $t9, 0x98($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X98);
    // 0x430037D8: nop

    // 0x430037DC: jalr        $t9
    // 0x430037E0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x430037E0: nop

    after_5:
    // 0x430037E4: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x430037E8: lw          $t0, -0x57E8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X57E8);
    // 0x430037EC: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x430037F0: addiu       $t8, $t8, 0x36E4
    ctx->r24 = ADD32(ctx->r24, 0X36E4);
    // 0x430037F4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x430037F8: sw          $t8, 0x54($t0)
    MEM_W(0X54, ctx->r8) = ctx->r24;
L_430037FC:
    // 0x430037FC: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x43003800: addiu       $a2, $a2, -0x5930
    ctx->r6 = ADD32(ctx->r6, -0X5930);
    // 0x43003804: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43003808: jal         0x43008DF8
    // 0x4300380C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_demon_8DF8(rdram, ctx);
        goto after_6;
    // 0x4300380C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x43003810: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x43003814: lwc1        $f14, 0x60($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X60);
    // 0x43003818: jal         0x43008EC4
    // 0x4300381C: nop

    ovl_boss_demon_8EC4(rdram, ctx);
        goto after_7;
    // 0x4300381C: nop

    after_7:
    // 0x43003820: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x43003824: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x43003828: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x4300382C: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x43003830: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x43003834: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x43003838: addiu       $a2, $a2, -0x5808
    ctx->r6 = ADD32(ctx->r6, -0X5808);
    // 0x4300383C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43003840: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x43003844: jal         0x43008DF8
    // 0x43003848: swc1        $f18, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f18.u32l;
    ovl_boss_demon_8DF8(rdram, ctx);
        goto after_8;
    // 0x43003848: swc1        $f18, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f18.u32l;
    after_8:
    // 0x4300384C: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x43003850: lwc1        $f14, 0x60($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X60);
    // 0x43003854: jal         0x43008EC4
    // 0x43003858: nop

    ovl_boss_demon_8EC4(rdram, ctx);
        goto after_9;
    // 0x43003858: nop

    after_9:
    // 0x4300385C: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    // 0x43003860: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43003864: jalr        $t9
    // 0x43003868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x43003868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x4300386C: lw          $t9, 0xA4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XA4);
    // 0x43003870: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x43003874: jalr        $t9
    // 0x43003878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x43003878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x4300387C: lw          $t9, 0xAC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XAC);
    // 0x43003880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003884: jalr        $t9
    // 0x43003888: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x43003888: nop

    after_12:
    // 0x4300388C: jal         0x43008B98
    // 0x43003890: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_13;
    // 0x43003890: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_13:
    // 0x43003894: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43003898: slti        $at, $s1, 0x14
    ctx->r1 = SIGNED(ctx->r17) < 0X14 ? 1 : 0;
    // 0x4300389C: bne         $at, $zero, L_430037FC
    if (ctx->r1 != 0) {
        // 0x430038A0: nop
    
            goto L_430037FC;
    }
    // 0x430038A0: nop

    // 0x430038A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x430038A8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x430038AC: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    // 0x430038B0: lw          $t9, 0x9C($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X9C);
    // 0x430038B4: nop

    // 0x430038B8: jalr        $t9
    // 0x430038BC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x430038BC: nop

    after_14:
    // 0x430038C0: lw          $t9, 0xA4($s3)
    ctx->r25 = MEM_W(ctx->r19, 0XA4);
    // 0x430038C4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x430038C8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x430038CC: jalr        $t9
    // 0x430038D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x430038D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x430038D4: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x430038D8: jal         0x43009450
    // 0x430038DC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_boss_demon_9450(rdram, ctx);
        goto after_16;
    // 0x430038DC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_16:
    // 0x430038E0: lw          $t9, 0x7C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X7C);
    // 0x430038E4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x430038E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430038EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x430038F0: jalr        $t9
    // 0x430038F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x430038F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
    // 0x430038F8: jal         0x43008B98
    // 0x430038FC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_18;
    // 0x430038FC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_18:
    // 0x43003900: addiu       $s2, $sp, 0x50
    ctx->r18 = ADD32(ctx->r29, 0X50);
    // 0x43003904: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43003908: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x4300390C: jal         0x430094B4
    // 0x43003910: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_demon_94B4(rdram, ctx);
        goto after_19;
    // 0x43003910: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_19:
    // 0x43003914: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x43003918: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4300391C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43003920: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x43003924: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x43003928: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x4300392C: jal         0x430029A4
    // 0x43003930: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_boss_demon_29A4(rdram, ctx);
        goto after_20;
    // 0x43003930: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_20:
    // 0x43003934: addiu       $a0, $zero, 0x2FB
    ctx->r4 = ADD32(0, 0X2FB);
    // 0x43003938: jal         0x43000280
    // 0x4300393C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    ovl_boss_demon_280(rdram, ctx);
        goto after_21;
    // 0x4300393C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_21:
    // 0x43003940: jal         0x4300948C
    // 0x43003944: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_boss_demon_948C(rdram, ctx);
        goto after_22;
    // 0x43003944: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_22:
    // 0x43003948: lw          $t9, 0x7C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X7C);
    // 0x4300394C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003950: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43003954: jalr        $t9
    // 0x43003958: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_23;
    // 0x43003958: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_23:
    // 0x4300395C: lw          $t9, 0x98($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X98);
    // 0x43003960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003964: jalr        $t9
    // 0x43003968: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x43003968: nop

    after_24:
    // 0x4300396C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43003970: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003974: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x43003978: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    // 0x4300397C: lwc1        $f8, -0x59F4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X59F4);
    // 0x43003980: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43003984: swc1        $f8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f8.u32l;
    // 0x43003988: lw          $t9, 0xA4($s3)
    ctx->r25 = MEM_W(ctx->r19, 0XA4);
    // 0x4300398C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x43003990: jalr        $t9
    // 0x43003994: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x43003994: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_25:
    // 0x43003998: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_4300399C:
    // 0x4300399C: lw          $t9, 0xAC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XAC);
    // 0x430039A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430039A4: jalr        $t9
    // 0x430039A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_26;
    // 0x430039A8: nop

    after_26:
    // 0x430039AC: jal         0x43008B98
    // 0x430039B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_27;
    // 0x430039B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_27:
    // 0x430039B4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x430039B8: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x430039BC: bne         $s1, $at, L_4300399C
    if (ctx->r17 != ctx->r1) {
        // 0x430039C0: nop
    
            goto L_4300399C;
    }
    // 0x430039C0: nop

    // 0x430039C4: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x430039C8: addiu       $s1, $s1, -0x5E2C
    ctx->r17 = ADD32(ctx->r17, -0X5E2C);
    // 0x430039CC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x430039D0: nop

    // 0x430039D4: lw          $t9, 0xD0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD0);
    // 0x430039D8: nop

    // 0x430039DC: jalr        $t9
    // 0x430039E0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_28;
    // 0x430039E0: nop

    after_28:
    // 0x430039E4: lw          $t9, 0xAC($s3)
    ctx->r25 = MEM_W(ctx->r19, 0XAC);
    // 0x430039E8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x430039EC: jalr        $t9
    // 0x430039F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_29;
    // 0x430039F0: nop

    after_29:
    // 0x430039F4: mtc1        $zero, $f21
    ctx->f_odd[(21 - 1) * 2] = 0;
    // 0x430039F8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x430039FC: nop

    // 0x43003A00: lw          $t1, 0x4C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4C);
L_43003A04:
    // 0x43003A04: nop

    // 0x43003A08: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x43003A0C: bne         $t2, $zero, L_43003A50
    if (ctx->r10 != 0) {
        // 0x43003A10: nop
    
            goto L_43003A50;
    }
    // 0x43003A10: nop

    // 0x43003A14: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x43003A18: nop

    // 0x43003A1C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x43003A20: c.le.d      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.d <= ctx->f20.d;
    // 0x43003A24: nop

    // 0x43003A28: bc1t        L_43003A50
    if (c1cs) {
        // 0x43003A2C: nop
    
            goto L_43003A50;
    }
    // 0x43003A2C: nop

    // 0x43003A30: lw          $t9, 0xAC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XAC);
    // 0x43003A34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003A38: jalr        $t9
    // 0x43003A3C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_30;
    // 0x43003A3C: nop

    after_30:
    // 0x43003A40: jal         0x43008B98
    // 0x43003A44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_31;
    // 0x43003A44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_31:
    // 0x43003A48: b           L_43003A04
    // 0x43003A4C: lw          $t1, 0x4C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4C);
        goto L_43003A04;
    // 0x43003A4C: lw          $t1, 0x4C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4C);
L_43003A50:
    // 0x43003A50: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43003A54: lw          $a0, -0x57E8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X57E8);
    // 0x43003A58: nop

    // 0x43003A5C: lw          $t9, 0x58($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X58);
    // 0x43003A60: nop

    // 0x43003A64: jalr        $t9
    // 0x43003A68: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_32;
    // 0x43003A68: nop

    after_32:
    // 0x43003A6C: lw          $t9, 0xB0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0XB0);
    // 0x43003A70: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43003A74: jalr        $t9
    // 0x43003A78: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_33;
    // 0x43003A78: nop

    after_33:
    // 0x43003A7C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x43003A80: nop

    // 0x43003A84: lw          $t9, 0xD4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD4);
    // 0x43003A88: nop

    // 0x43003A8C: jalr        $t9
    // 0x43003A90: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x43003A90: nop

    after_34:
    // 0x43003A94: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43003A98: lw          $a0, -0x57E8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X57E8);
    // 0x43003A9C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x43003AA0: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x43003AA4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x43003AA8: jalr        $t9
    // 0x43003AAC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x43003AAC: nop

    after_35:
    // 0x43003AB0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x43003AB4: lw          $t9, 0x98($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X98);
    // 0x43003AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003ABC: jalr        $t9
    // 0x43003AC0: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_36;
    // 0x43003AC0: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
    after_36:
    // 0x43003AC4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43003AC8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43003ACC: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
    // 0x43003AD0: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x43003AD4: lw          $t9, 0xBC($s3)
    ctx->r25 = MEM_W(ctx->r19, 0XBC);
    // 0x43003AD8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43003ADC: jalr        $t9
    // 0x43003AE0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x43003AE0: nop

    after_37:
    // 0x43003AE4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x43003AE8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43003AEC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43003AF0: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x43003AF4: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x43003AF8: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x43003AFC: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x43003B00: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x43003B04: jr          $ra
    // 0x43003B08: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x43003B08: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
;}
RECOMP_FUNC void ovl_boss_demon_3B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003B0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43003B10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003B14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43003B18: lw          $a0, 0x58($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58);
    // 0x43003B1C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x43003B20: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43003B24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43003B28: jalr        $t9
    // 0x43003B2C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43003B2C: nop

    after_0:
    // 0x43003B30: jal         0x43000244
    // 0x43003B34: addiu       $a0, $zero, 0x303
    ctx->r4 = ADD32(0, 0X303);
    ovl_boss_demon_244(rdram, ctx);
        goto after_1;
    // 0x43003B34: addiu       $a0, $zero, 0x303
    ctx->r4 = ADD32(0, 0X303);
    after_1:
    // 0x43003B38: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43003B3C: jal         0x43002C7C
    // 0x43003B40: nop

    ovl_boss_demon_2C7C(rdram, ctx);
        goto after_2;
    // 0x43003B40: nop

    after_2:
    // 0x43003B44: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43003B48: lw          $t7, -0x54A8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X54A8);
    // 0x43003B4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003B50: beq         $t7, $zero, L_43003B60
    if (ctx->r15 == 0) {
        // 0x43003B54: addiu       $sp, $sp, 0x18
        ctx->r29 = ADD32(ctx->r29, 0X18);
            goto L_43003B60;
    }
    // 0x43003B54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43003B58: b           L_43003B64
    // 0x43003B5C: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
        goto L_43003B64;
    // 0x43003B5C: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
L_43003B60:
    // 0x43003B60: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_43003B64:
    // 0x43003B64: jr          $ra
    // 0x43003B68: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x43003B68: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_boss_demon_3B6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003B6C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43003B70: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003B74: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43003B78: lw          $t6, -0x57E8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X57E8);
    // 0x43003B7C: lwc1        $f4, -0x59F0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X59F0);
    // 0x43003B80: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x43003B84: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x43003B88: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x43003B8C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x43003B90: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x43003B94: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x43003B98: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x43003B9C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43003BA0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x43003BA4: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43003BA8: swc1        $f4, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f4.u32l;
    // 0x43003BAC: lui         $s2, 0x4301
    ctx->r18 = S32(0X4301 << 16);
    // 0x43003BB0: lui         $s3, 0x4301
    ctx->r19 = S32(0X4301 << 16);
    // 0x43003BB4: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x43003BB8: lui         $s5, 0x4301
    ctx->r21 = S32(0X4301 << 16);
    // 0x43003BBC: lui         $s6, 0x4301
    ctx->r22 = S32(0X4301 << 16);
    // 0x43003BC0: lui         $s7, 0x4301
    ctx->r23 = S32(0X4301 << 16);
    // 0x43003BC4: lw          $v0, -0x5D38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5D38);
    // 0x43003BC8: addiu       $s7, $s7, -0x5E30
    ctx->r23 = ADD32(ctx->r23, -0X5E30);
    // 0x43003BCC: addiu       $s6, $s6, -0x5500
    ctx->r22 = ADD32(ctx->r22, -0X5500);
    // 0x43003BD0: addiu       $s5, $s5, -0x5498
    ctx->r21 = ADD32(ctx->r21, -0X5498);
    // 0x43003BD4: addiu       $s4, $s4, -0x5CB8
    ctx->r20 = ADD32(ctx->r20, -0X5CB8);
    // 0x43003BD8: addiu       $s3, $s3, -0x549C
    ctx->r19 = ADD32(ctx->r19, -0X549C);
    // 0x43003BDC: addiu       $s2, $s2, -0x5CD0
    ctx->r18 = ADD32(ctx->r18, -0X5CD0);
    // 0x43003BE0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x43003BE4: addiu       $v1, $zero, 0xB
    ctx->r3 = ADD32(0, 0XB);
L_43003BE8:
    // 0x43003BE8: beq         $v0, $zero, L_43003BE8
    if (ctx->r2 == 0) {
        // 0x43003BEC: nop
    
            goto L_43003BE8;
    }
    // 0x43003BEC: nop

    // 0x43003BF0: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43003BF4: addiu       $s0, $t7, -0x5D38
    ctx->r16 = ADD32(ctx->r15, -0X5D38);
    // 0x43003BF8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x43003BFC: nop

L_43003C00:
    // 0x43003C00: bne         $v1, $v0, L_43003C48
    if (ctx->r3 != ctx->r2) {
        // 0x43003C04: sll         $v0, $s1, 1
        ctx->r2 = S32(ctx->r17 << 1);
            goto L_43003C48;
    }
    // 0x43003C04: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x43003C08: addu        $t8, $s2, $v0
    ctx->r24 = ADD32(ctx->r18, ctx->r2);
    // 0x43003C0C: lh          $v1, 0x0($t8)
    ctx->r3 = MEM_H(ctx->r24, 0X0);
    // 0x43003C10: addu        $t9, $s4, $v0
    ctx->r25 = ADD32(ctx->r20, ctx->r2);
    // 0x43003C14: bltz        $v1, L_43003C20
    if (SIGNED(ctx->r3) < 0) {
        // 0x43003C18: nop
    
            goto L_43003C20;
    }
    // 0x43003C18: nop

    // 0x43003C1C: sw          $v1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r3;
L_43003C20:
    // 0x43003C20: lh          $v1, 0x0($t9)
    ctx->r3 = MEM_H(ctx->r25, 0X0);
    // 0x43003C24: nop

    // 0x43003C28: bltz        $v1, L_43003C34
    if (SIGNED(ctx->r3) < 0) {
        // 0x43003C2C: nop
    
            goto L_43003C34;
    }
    // 0x43003C2C: nop

    // 0x43003C30: sw          $v1, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r3;
L_43003C34:
    // 0x43003C34: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x43003C38: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    // 0x43003C3C: jalr        $t9
    // 0x43003C40: sw          $zero, 0x0($s6)
    MEM_W(0X0, ctx->r22) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43003C40: sw          $zero, 0x0($s6)
    MEM_W(0X0, ctx->r22) = 0;
    after_0:
    // 0x43003C44: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43003C48:
    // 0x43003C48: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x43003C4C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43003C50: bne         $v0, $zero, L_43003C00
    if (ctx->r2 != 0) {
        // 0x43003C54: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_43003C00;
    }
    // 0x43003C54: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x43003C58: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43003C5C: lw          $v0, -0x5D38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5D38);
    // 0x43003C60: b           L_43003BE8
    // 0x43003C64: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_43003BE8;
    // 0x43003C64: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x43003C68: nop

    // 0x43003C6C: nop

    // 0x43003C70: nop

    // 0x43003C74: nop

    // 0x43003C78: nop

    // 0x43003C7C: nop

    // 0x43003C80: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x43003C84: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43003C88: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x43003C8C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x43003C90: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x43003C94: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x43003C98: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x43003C9C: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x43003CA0: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x43003CA4: jr          $ra
    // 0x43003CA8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x43003CA8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_boss_demon_3CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003CAC: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43003CB0: lw          $t6, -0x5E30($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5E30);
    // 0x43003CB4: nop

    // 0x43003CB8: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x43003CBC: nop

    // 0x43003CC0: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x43003CC4: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x43003CC8: nop

    // 0x43003CCC: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x43003CD0: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x43003CD4: jr          $ra
    // 0x43003CD8: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    return;
    // 0x43003CD8: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
;}
RECOMP_FUNC void ovl_boss_demon_3CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003CDC: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x43003CE0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003CE4: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x43003CE8: swc1        $f28, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f28.u32l;
    // 0x43003CEC: lwc1        $f28, -0x59E4($at)
    ctx->f28.u32l = MEM_W(ctx->r1, -0X59E4);
    // 0x43003CF0: lwc1        $f29, -0x59E8($at)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r1, -0X59E8);
    // 0x43003CF4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003CF8: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x43003CFC: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x43003D00: lwc1        $f26, -0x59DC($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X59DC);
    // 0x43003D04: lwc1        $f27, -0x59E0($at)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r1, -0X59E0);
    // 0x43003D08: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003D0C: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x43003D10: swc1        $f30, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f30.u32l;
    // 0x43003D14: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x43003D18: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x43003D1C: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x43003D20: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x43003D24: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x43003D28: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x43003D2C: lwc1        $f24, -0x59D4($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X59D4);
    // 0x43003D30: lwc1        $f25, -0x59D8($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, -0X59D8);
    // 0x43003D34: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x43003D38: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x43003D3C: swc1        $f31, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x43003D40: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x43003D44: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x43003D48: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43003D4C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x43003D50: addiu       $s1, $s1, -0x54E8
    ctx->r17 = ADD32(ctx->r17, -0X54E8);
    // 0x43003D54: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43003D58: addiu       $s2, $sp, 0x68
    ctx->r18 = ADD32(ctx->r29, 0X68);
    // 0x43003D5C: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
L_43003D60:
    // 0x43003D60: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x43003D64: nop

    // 0x43003D68: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x43003D6C: mul.d       $f8, $f6, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f28.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f28.d);
    // 0x43003D70: cvt.s.d     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f20.fl = CVT_S_D(ctx->f8.d);
    // 0x43003D74: jal         0x4300A030
    // 0x43003D78: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_boss_demon_A030(rdram, ctx);
        goto after_0;
    // 0x43003D78: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x43003D7C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x43003D80: jal         0x43009E70
    // 0x43003D84: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_boss_demon_9E70(rdram, ctx);
        goto after_1;
    // 0x43003D84: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x43003D88: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x43003D8C: mul.d       $f16, $f10, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f24.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f24.d);
    // 0x43003D90: cvt.d.s     $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f18.d = CVT_D_S(ctx->f22.fl);
    // 0x43003D94: swc1        $f30, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f30.u32l;
    // 0x43003D98: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x43003D9C: mul.d       $f4, $f26, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f26.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f26.d, ctx->f18.d);
    // 0x43003DA0: add.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f16.d + ctx->f4.d;
    // 0x43003DA4: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x43003DA8: jal         0x43009E70
    // 0x43003DAC: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    ovl_boss_demon_9E70(rdram, ctx);
        goto after_2;
    // 0x43003DAC: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x43003DB0: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x43003DB4: jal         0x4300A030
    // 0x43003DB8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_boss_demon_A030(rdram, ctx);
        goto after_3;
    // 0x43003DB8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x43003DBC: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x43003DC0: mul.d       $f18, $f10, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f24.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f24.d);
    // 0x43003DC4: neg.s       $f16, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = -ctx->f22.fl;
    // 0x43003DC8: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x43003DCC: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
    // 0x43003DD0: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x43003DD4: mul.d       $f6, $f26, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f26.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f26.d, ctx->f4.d);
    // 0x43003DD8: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x43003DDC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43003DE0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x43003DE4: add.d       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f18.d + ctx->f6.d;
    // 0x43003DE8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x43003DEC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x43003DF0: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x43003DF4: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x43003DF8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x43003DFC: jal         0x430081E0
    // 0x43003E00: nop

    ovl_boss_demon_81E0(rdram, ctx);
        goto after_4;
    // 0x43003E00: nop

    after_4:
    // 0x43003E04: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43003E08: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x43003E0C: bne         $s0, $s3, L_43003D60
    if (ctx->r16 != ctx->r19) {
        // 0x43003E10: sw          $v0, -0x4($s1)
        MEM_W(-0X4, ctx->r17) = ctx->r2;
            goto L_43003D60;
    }
    // 0x43003E10: sw          $v0, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->r2;
    // 0x43003E14: jal         0x430082F0
    // 0x43003E18: nop

    ovl_boss_demon_82F0(rdram, ctx);
        goto after_5;
    // 0x43003E18: nop

    after_5:
    // 0x43003E1C: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x43003E20: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43003E24: sh          $t6, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r14;
    // 0x43003E28: addiu       $t7, $t7, -0x5C88
    ctx->r15 = ADD32(ctx->r15, -0X5C88);
    // 0x43003E2C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x43003E30: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43003E34: swl         $at, 0x14($v0)
    do_swl(rdram, 0X14, ctx->r2, ctx->r1);
    // 0x43003E38: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x43003E3C: addiu       $a1, $a1, -0x5C94
    ctx->r5 = ADD32(ctx->r5, -0X5C94);
    // 0x43003E40: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x43003E44: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x43003E48: jal         0x43008AC0
    // 0x43003E4C: swr         $at, 0x17($v0)
    do_swr(rdram, 0X17, ctx->r2, ctx->r1);
    ovl_boss_demon_8AC0(rdram, ctx);
        goto after_6;
    // 0x43003E4C: swr         $at, 0x17($v0)
    do_swr(rdram, 0X17, ctx->r2, ctx->r1);
    after_6:
    // 0x43003E50: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x43003E54: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x43003E58: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43003E5C: addiu       $a0, $a0, -0x5CA0
    ctx->r4 = ADD32(ctx->r4, -0X5CA0);
    // 0x43003E60: swc1        $f20, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f20.u32l;
    // 0x43003E64: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x43003E68: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x43003E6C: addiu       $t0, $t0, -0x57F8
    ctx->r8 = ADD32(ctx->r8, -0X57F8);
    // 0x43003E70: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x43003E74: lw          $t2, 0x4($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X4);
    // 0x43003E78: lui         $a2, 0x3D49
    ctx->r6 = S32(0X3D49 << 16);
    // 0x43003E7C: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
    // 0x43003E80: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x43003E84: ori         $a2, $a2, 0xFDB
    ctx->r6 = ctx->r6 | 0XFDB;
    // 0x43003E88: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x43003E8C: jal         0x430048D8
    // 0x43003E90: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    ovl_boss_demon_48D8(rdram, ctx);
        goto after_7;
    // 0x43003E90: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    after_7:
    // 0x43003E94: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x43003E98: addiu       $s1, $s1, -0x5E30
    ctx->r17 = ADD32(ctx->r17, -0X5E30);
    // 0x43003E9C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x43003EA0: lw          $t9, 0x6C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X6C);
    // 0x43003EA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43003EA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43003EAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43003EB0: jalr        $t9
    // 0x43003EB4: lui         $a3, 0x42B4
    ctx->r7 = S32(0X42B4 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x43003EB4: lui         $a3, 0x42B4
    ctx->r7 = S32(0X42B4 << 16);
    after_8:
    // 0x43003EB8: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x43003EBC: lui         $t4, 0x4300
    ctx->r12 = S32(0X4300 << 16);
    // 0x43003EC0: lw          $a0, 0x3C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X3C);
    // 0x43003EC4: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x43003EC8: lw          $t9, 0x48($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X48);
    // 0x43003ECC: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x43003ED0: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x43003ED4: addiu       $t4, $t4, 0x1DA4
    ctx->r12 = ADD32(ctx->r12, 0X1DA4);
    // 0x43003ED8: addiu       $t5, $t5, 0x1CCC
    ctx->r13 = ADD32(ctx->r13, 0X1CCC);
    // 0x43003EDC: addiu       $t6, $t6, 0x1D20
    ctx->r14 = ADD32(ctx->r14, 0X1D20);
    // 0x43003EE0: addiu       $t8, $t8, 0x1C50
    ctx->r24 = ADD32(ctx->r24, 0X1C50);
    // 0x43003EE4: lui         $a1, 0x3FE6
    ctx->r5 = S32(0X3FE6 << 16);
    // 0x43003EE8: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x43003EEC: sw          $t4, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r12;
    // 0x43003EF0: sw          $t5, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r13;
    // 0x43003EF4: sw          $t6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r14;
    // 0x43003EF8: jalr        $t9
    // 0x43003EFC: sw          $t8, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r24;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x43003EFC: sw          $t8, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r24;
    after_9:
    // 0x43003F00: jal         0x43005CDC
    // 0x43003F04: addiu       $a0, $zero, 0x9CD
    ctx->r4 = ADD32(0, 0X9CD);
    ovl_boss_demon_5CDC(rdram, ctx);
        goto after_10;
    // 0x43003F04: addiu       $a0, $zero, 0x9CD
    ctx->r4 = ADD32(0, 0X9CD);
    after_10:
    // 0x43003F08: lui         $s0, 0x4301
    ctx->r16 = S32(0X4301 << 16);
    // 0x43003F0C: addiu       $s0, $s0, -0x54F4
    ctx->r16 = ADD32(ctx->r16, -0X54F4);
    // 0x43003F10: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x43003F14: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x43003F18: addiu       $t7, $t7, 0x1A60
    ctx->r15 = ADD32(ctx->r15, 0X1A60);
    // 0x43003F1C: sw          $t7, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->r15;
    // 0x43003F20: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x43003F24: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x43003F28: addiu       $t0, $t0, -0x5E28
    ctx->r8 = ADD32(ctx->r8, -0X5E28);
    // 0x43003F2C: sw          $t0, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r8;
    // 0x43003F30: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x43003F34: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x43003F38: lw          $t9, 0x8C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8C);
    // 0x43003F3C: nop

    // 0x43003F40: jalr        $t9
    // 0x43003F44: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x43003F44: nop

    after_11:
    // 0x43003F48: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x43003F4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43003F50: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43003F54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43003F58: jalr        $t9
    // 0x43003F5C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x43003F5C: nop

    after_12:
    // 0x43003F60: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x43003F64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43003F68: lw          $t9, 0x80($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X80);
    // 0x43003F6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43003F70: jalr        $t9
    // 0x43003F74: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x43003F74: nop

    after_13:
    // 0x43003F78: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x43003F7C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x43003F80: jal         0x43007758
    // 0x43003F84: addiu       $a1, $zero, 0xA32
    ctx->r5 = ADD32(0, 0XA32);
    ovl_boss_demon_7758(rdram, ctx);
        goto after_14;
    // 0x43003F84: addiu       $a1, $zero, 0xA32
    ctx->r5 = ADD32(0, 0XA32);
    after_14:
    // 0x43003F88: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003F8C: sw          $v0, -0x5E2C($at)
    MEM_W(-0X5E2C, ctx->r1) = ctx->r2;
    // 0x43003F90: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003F94: sw          $zero, -0x54AC($at)
    MEM_W(-0X54AC, ctx->r1) = 0;
    // 0x43003F98: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003F9C: sw          $zero, -0x54A8($at)
    MEM_W(-0X54A8, ctx->r1) = 0;
    // 0x43003FA0: jal         0x43007168
    // 0x43003FA4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_boss_demon_7168(rdram, ctx);
        goto after_15;
    // 0x43003FA4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_15:
    // 0x43003FA8: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x43003FAC: addiu       $a0, $a0, 0x3B6C
    ctx->r4 = ADD32(ctx->r4, 0X3B6C);
    // 0x43003FB0: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x43003FB4: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x43003FB8: jal         0x43000820
    // 0x43003FBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_demon_820(rdram, ctx);
        goto after_16;
    // 0x43003FBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_16:
    // 0x43003FC0: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43003FC4: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x43003FC8: addiu       $v1, $v1, -0x54FC
    ctx->r3 = ADD32(ctx->r3, -0X54FC);
    // 0x43003FCC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x43003FD0: sw          $v0, 0x64($t4)
    MEM_W(0X64, ctx->r12) = ctx->r2;
    // 0x43003FD4: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x43003FD8: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x43003FDC: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x43003FE0: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x43003FE4: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x43003FE8: lwc1        $f30, 0x3C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43003FEC: lwc1        $f31, 0x38($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x43003FF0: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x43003FF4: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x43003FF8: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43003FFC: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x43004000: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43004004: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x43004008: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x4300400C: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43004010: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x43004014: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x43004018: jr          $ra
    // 0x4300401C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x4300401C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void ovl_boss_demon_4020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004020: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43004024: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43004028: lw          $a0, -0x5E2C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5E2C);
    // 0x4300402C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43004030: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43004034: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x43004038: lw          $t9, 0xD8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD8);
    // 0x4300403C: nop

    // 0x43004040: jalr        $t9
    // 0x43004044: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43004044: nop

    after_0:
    // 0x43004048: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x4300404C: lw          $a0, -0x5E30($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5E30);
    // 0x43004050: nop

    // 0x43004054: lw          $t9, 0xB0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XB0);
    // 0x43004058: nop

    // 0x4300405C: jalr        $t9
    // 0x43004060: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43004060: nop

    after_1:
    // 0x43004064: lui         $s0, 0x4301
    ctx->r16 = S32(0X4301 << 16);
    // 0x43004068: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x4300406C: addiu       $s1, $s1, -0x54C8
    ctx->r17 = ADD32(ctx->r17, -0X54C8);
    // 0x43004070: addiu       $s0, $s0, -0x54E8
    ctx->r16 = ADD32(ctx->r16, -0X54E8);
L_43004074:
    // 0x43004074: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x43004078: nop

    // 0x4300407C: beq         $a0, $zero, L_43004094
    if (ctx->r4 == 0) {
        // 0x43004080: nop
    
            goto L_43004094;
    }
    // 0x43004080: nop

    // 0x43004084: lw          $t9, 0x34($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X34);
    // 0x43004088: nop

    // 0x4300408C: jalr        $t9
    // 0x43004090: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43004090: nop

    after_2:
L_43004094:
    // 0x43004094: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x43004098: bne         $s0, $s1, L_43004074
    if (ctx->r16 != ctx->r17) {
        // 0x4300409C: nop
    
            goto L_43004074;
    }
    // 0x4300409C: nop

    // 0x430040A0: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430040A4: lw          $a0, -0x54FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X54FC);
    // 0x430040A8: jal         0x4300082C
    // 0x430040AC: nop

    ovl_boss_demon_82C(rdram, ctx);
        goto after_3;
    // 0x430040AC: nop

    after_3:
    // 0x430040B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430040B4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x430040B8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x430040BC: jr          $ra
    // 0x430040C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x430040C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430040C4: nop

    // 0x430040C8: nop

    // 0x430040CC: nop

;}
RECOMP_FUNC void ovl_boss_demon_40D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430040D0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x430040D4: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x430040D8: nop

    // 0x430040DC: lw          $v1, 0x4C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4C);
    // 0x430040E0: nop

    // 0x430040E4: andi        $t6, $v1, 0x100
    ctx->r14 = ctx->r3 & 0X100;
    // 0x430040E8: bne         $t6, $zero, L_430040F4
    if (ctx->r14 != 0) {
        // 0x430040EC: ori         $t7, $v1, 0x1
        ctx->r15 = ctx->r3 | 0X1;
            goto L_430040F4;
    }
    // 0x430040EC: ori         $t7, $v1, 0x1
    ctx->r15 = ctx->r3 | 0X1;
    // 0x430040F0: sw          $t7, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r15;
L_430040F4:
    // 0x430040F4: jr          $ra
    // 0x430040F8: nop

    return;
    // 0x430040F8: nop

;}
RECOMP_FUNC void ovl_boss_demon_40FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430040FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004100: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004104: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x43004108: lwc1        $f2, 0x8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X8);
    // 0x4300410C: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x43004110: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43004114: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x43004118: jal         0x4300A1A0
    // 0x4300411C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    ovl_boss_demon_A1A0(rdram, ctx);
        goto after_0;
    // 0x4300411C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x43004120: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x43004124: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x43004128: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x4300412C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x43004130: nop

    // 0x43004134: bc1f        L_4300415C
    if (!c1cs) {
        // 0x43004138: nop
    
            goto L_4300415C;
    }
    // 0x43004138: nop

    // 0x4300413C: div.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x43004140: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x43004144: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x43004148: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x4300414C: nop

    // 0x43004150: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x43004154: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
    // 0x43004158: swc1        $f18, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f18.u32l;
L_4300415C:
    // 0x4300415C: lw          $a0, 0x58($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X58);
    // 0x43004160: nop

    // 0x43004164: beq         $a0, $zero, L_43004188
    if (ctx->r4 == 0) {
        // 0x43004168: nop
    
            goto L_43004188;
    }
    // 0x43004168: nop

    // 0x4300416C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x43004170: lw          $t9, 0x78($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X78);
    // 0x43004174: nop

    // 0x43004178: jalr        $t9
    // 0x4300417C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x4300417C: nop

    after_1:
    // 0x43004180: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x43004184: nop

L_43004188:
    // 0x43004188: lw          $t6, 0x5C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X5C);
    // 0x4300418C: nop

    // 0x43004190: beq         $t6, $zero, L_430041C0
    if (ctx->r14 == 0) {
        // 0x43004194: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430041C0;
    }
    // 0x43004194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004198: lw          $v0, 0x60($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X60);
    // 0x4300419C: nop

    // 0x430041A0: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x430041A4: addiu       $a0, $v0, 0x1C
    ctx->r4 = ADD32(ctx->r2, 0X1C);
    // 0x430041A8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x430041AC: beq         $t8, $zero, L_430041C0
    if (ctx->r24 == 0) {
        // 0x430041B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430041C0;
    }
    // 0x430041B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430041B4: jal         0x43008AC0
    // 0x430041B8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    ovl_boss_demon_8AC0(rdram, ctx);
        goto after_2;
    // 0x430041B8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x430041BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430041C0:
    // 0x430041C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430041C4: jr          $ra
    // 0x430041C8: nop

    return;
    // 0x430041C8: nop

;}
RECOMP_FUNC void ovl_boss_demon_41CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430041CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430041D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430041D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430041D8: beq         $a1, $zero, L_430041F8
    if (ctx->r5 == 0) {
        // 0x430041DC: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_430041F8;
    }
    // 0x430041DC: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x430041E0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x430041E4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x430041E8: lw          $t9, 0x40($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X40);
    // 0x430041EC: lw          $a2, 0xC($a1)
    ctx->r6 = MEM_W(ctx->r5, 0XC);
    // 0x430041F0: jalr        $t9
    // 0x430041F4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430041F4: nop

    after_0:
L_430041F8:
    // 0x430041F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430041FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004200: jr          $ra
    // 0x43004204: nop

    return;
    // 0x43004204: nop

;}
RECOMP_FUNC void ovl_boss_demon_4208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004208: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4300420C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43004210: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x43004214: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x43004218: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x4300421C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43004220: jal         0x430040FC
    // 0x43004224: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    ovl_boss_demon_40FC(rdram, ctx);
        goto after_0;
    // 0x43004224: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x43004228: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x4300422C: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x43004230: addiu       $s3, $zero, 0x10
    ctx->r19 = ADD32(0, 0X10);
L_43004234:
    // 0x43004234: lw          $a1, 0x3C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X3C);
    // 0x43004238: jal         0x430041CC
    // 0x4300423C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_boss_demon_41CC(rdram, ctx);
        goto after_1;
    // 0x4300423C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x43004240: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x43004244: bne         $s0, $s3, L_43004234
    if (ctx->r16 != ctx->r19) {
        // 0x43004248: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_43004234;
    }
    // 0x43004248: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x4300424C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43004250: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43004254: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x43004258: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x4300425C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x43004260: jr          $ra
    // 0x43004264: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43004264: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_demon_4268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004268: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4300426C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43004270: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43004274: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43004278: lw          $a0, 0x58($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58);
    // 0x4300427C: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x43004280: lw          $t9, 0x7C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X7C);
    // 0x43004284: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x43004288: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x4300428C: jalr        $t9
    // 0x43004290: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43004290: nop

    after_0:
    // 0x43004294: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x43004298: nop

    // 0x4300429C: beq         $t6, $zero, L_43004300
    if (ctx->r14 == 0) {
        // 0x430042A0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43004300;
    }
    // 0x430042A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430042A4: lw          $t7, 0x60($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X60);
    // 0x430042A8: nop

    // 0x430042AC: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x430042B0: nop

    // 0x430042B4: andi        $t0, $t8, 0x1
    ctx->r8 = ctx->r24 & 0X1;
    // 0x430042B8: bne         $t0, $zero, L_43004300
    if (ctx->r8 != 0) {
        // 0x430042BC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43004300;
    }
    // 0x430042BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430042C0: lwc1        $f12, 0xC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XC);
    // 0x430042C4: jal         0x43009E70
    // 0x430042C8: nop

    ovl_boss_demon_9E70(rdram, ctx);
        goto after_1;
    // 0x430042C8: nop

    after_1:
    // 0x430042CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x430042D0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x430042D4: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x430042D8: lwc1        $f12, 0xC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XC);
    // 0x430042DC: jal         0x4300A030
    // 0x430042E0: nop

    ovl_boss_demon_A030(rdram, ctx);
        goto after_2;
    // 0x430042E0: nop

    after_2:
    // 0x430042E4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x430042E8: lw          $a0, 0x60($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X60);
    // 0x430042EC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x430042F0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x430042F4: jal         0x43008AC0
    // 0x430042F8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    ovl_boss_demon_8AC0(rdram, ctx);
        goto after_3;
    // 0x430042F8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_3:
    // 0x430042FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43004300:
    // 0x43004300: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43004304: jr          $ra
    // 0x43004308: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x43004308: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_demon_430C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300430C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43004310: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x43004314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004318: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x4300431C: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x43004320: lw          $t7, 0x3C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X3C);
    // 0x43004324: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x43004328: bne         $t7, $zero, L_4300435C
    if (ctx->r15 != 0) {
        // 0x4300432C: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_4300435C;
    }
    // 0x4300432C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x43004330: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x43004334: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x43004338: jal         0x4300501C
    // 0x4300433C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_boss_demon_501C(rdram, ctx);
        goto after_0;
    // 0x4300433C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x43004340: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x43004344: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43004348: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x4300434C: sw          $v0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r2;
    // 0x43004350: addiu       $t8, $t8, 0x40D0
    ctx->r24 = ADD32(ctx->r24, 0X40D0);
    // 0x43004354: sw          $t8, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r24;
    // 0x43004358: sw          $a0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r4;
L_4300435C:
    // 0x4300435C: lw          $t9, 0x98($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X98);
    // 0x43004360: nop

    // 0x43004364: jalr        $t9
    // 0x43004368: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43004368: nop

    after_1:
    // 0x4300436C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004370: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43004374: jr          $ra
    // 0x43004378: nop

    return;
    // 0x43004378: nop

;}
RECOMP_FUNC void ovl_boss_demon_437C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300437C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43004380: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x43004384: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004388: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x4300438C: lw          $a2, 0x3C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X3C);
    // 0x43004390: nop

    // 0x43004394: beq         $a2, $zero, L_430043C0
    if (ctx->r6 == 0) {
        // 0x43004398: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430043C0;
    }
    // 0x43004398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300439C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x430043A0: lw          $t9, 0x54($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X54);
    // 0x430043A4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x430043A8: jalr        $t9
    // 0x430043AC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430043AC: nop

    after_0:
    // 0x430043B0: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x430043B4: nop

    // 0x430043B8: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x430043BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430043C0:
    // 0x430043C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430043C4: jr          $ra
    // 0x430043C8: nop

    return;
    // 0x430043C8: nop

;}
RECOMP_FUNC void ovl_boss_demon_43CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430043CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430043D0: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x430043D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430043D8: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x430043DC: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x430043E0: lw          $a2, 0x3C($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X3C);
    // 0x430043E4: nop

    // 0x430043E8: beq         $a2, $zero, L_43004404
    if (ctx->r6 == 0) {
        // 0x430043EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004404;
    }
    // 0x430043EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430043F0: lw          $t9, 0x44($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X44);
    // 0x430043F4: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x430043F8: jalr        $t9
    // 0x430043FC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430043FC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x43004400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004404:
    // 0x43004404: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004408: jr          $ra
    // 0x4300440C: nop

    return;
    // 0x4300440C: nop

;}
RECOMP_FUNC void ovl_boss_demon_4410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004414: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x43004418: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300441C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x43004420: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x43004424: lw          $a2, 0x3C($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X3C);
    // 0x43004428: nop

    // 0x4300442C: beq         $a2, $zero, L_43004448
    if (ctx->r6 == 0) {
        // 0x43004430: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004448;
    }
    // 0x43004430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004434: lw          $t9, 0x48($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X48);
    // 0x43004438: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x4300443C: jalr        $t9
    // 0x43004440: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43004440: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x43004444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004448:
    // 0x43004448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300444C: jr          $ra
    // 0x43004450: nop

    return;
    // 0x43004450: nop

;}
RECOMP_FUNC void ovl_boss_demon_4454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004454: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004458: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x4300445C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004460: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43004464: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x43004468: lw          $a3, 0x3C($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X3C);
    // 0x4300446C: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x43004470: beq         $a3, $zero, L_43004498
    if (ctx->r7 == 0) {
        // 0x43004474: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004498;
    }
    // 0x43004474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004478: lw          $t9, 0x58($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X58);
    // 0x4300447C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43004480: lw          $a1, 0x4($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X4);
    // 0x43004484: lw          $t9, 0x50($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X50);
    // 0x43004488: nop

    // 0x4300448C: jalr        $t9
    // 0x43004490: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43004490: nop

    after_0:
    // 0x43004494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004498:
    // 0x43004498: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300449C: jr          $ra
    // 0x430044A0: nop

    return;
    // 0x430044A0: nop

;}
RECOMP_FUNC void ovl_boss_demon_44A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430044A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430044A8: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x430044AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430044B0: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x430044B4: lw          $a3, 0x3C($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X3C);
    // 0x430044B8: nop

    // 0x430044BC: beq         $a3, $zero, L_430044D8
    if (ctx->r7 == 0) {
        // 0x430044C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430044D8;
    }
    // 0x430044C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430044C4: lw          $t9, 0x4C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4C);
    // 0x430044C8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x430044CC: jalr        $t9
    // 0x430044D0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430044D0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x430044D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430044D8:
    // 0x430044D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430044DC: jr          $ra
    // 0x430044E0: nop

    return;
    // 0x430044E0: nop

;}
RECOMP_FUNC void ovl_boss_demon_44E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430044E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430044E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430044EC: sw          $a1, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r5;
    // 0x430044F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430044F4: lw          $t9, 0x98($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X98);
    // 0x430044F8: nop

    // 0x430044FC: jalr        $t9
    // 0x43004500: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43004500: nop

    after_0:
    // 0x43004504: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43004508: nop

    // 0x4300450C: lw          $t9, 0x94($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X94);
    // 0x43004510: nop

    // 0x43004514: jalr        $t9
    // 0x43004518: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43004518: nop

    after_1:
    // 0x4300451C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004524: jr          $ra
    // 0x43004528: nop

    return;
    // 0x43004528: nop

;}
RECOMP_FUNC void ovl_boss_demon_452C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300452C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004530: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004534: lw          $a1, 0x58($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X58);
    // 0x43004538: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x4300453C: beq         $a1, $zero, L_43004568
    if (ctx->r5 == 0) {
        // 0x43004540: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004568;
    }
    // 0x43004540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004544: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x43004548: lw          $t9, 0xC0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0XC0);
    // 0x4300454C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x43004550: jalr        $t9
    // 0x43004554: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43004554: nop

    after_0:
    // 0x43004558: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x4300455C: nop

    // 0x43004560: sw          $zero, 0x58($a2)
    MEM_W(0X58, ctx->r6) = 0;
    // 0x43004564: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004568:
    // 0x43004568: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300456C: jr          $ra
    // 0x43004570: nop

    return;
    // 0x43004570: nop

;}
RECOMP_FUNC void ovl_boss_demon_4574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004574: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43004578: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4300457C: lwc1        $f4, 0x34($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X34);
    // 0x43004580: lw          $a2, 0x30($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X30);
    // 0x43004584: lwc1        $f12, 0xC($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0XC);
    // 0x43004588: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x4300458C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43004590: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x43004594: jal         0x430092C8
    // 0x43004598: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_boss_demon_92C8(rdram, ctx);
        goto after_0;
    // 0x43004598: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x4300459C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x430045A0: nop

    // 0x430045A4: lw          $t9, 0x94($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X94);
    // 0x430045A8: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x430045AC: jalr        $t9
    // 0x430045B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x430045B0: nop

    after_1:
    // 0x430045B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430045B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430045BC: jr          $ra
    // 0x430045C0: nop

    return;
    // 0x430045C0: nop

;}
RECOMP_FUNC void ovl_boss_demon_45C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430045C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430045C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x430045CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430045D0: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x430045D4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x430045D8: jal         0x43009E70
    // 0x430045DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_boss_demon_9E70(rdram, ctx);
        goto after_0;
    // 0x430045DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x430045E0: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x430045E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x430045E8: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x430045EC: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x430045F0: nop

    // 0x430045F4: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x430045F8: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
    // 0x430045FC: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43004600: jal         0x4300A030
    // 0x43004604: nop

    ovl_boss_demon_A030(rdram, ctx);
        goto after_1;
    // 0x43004604: nop

    after_1:
    // 0x43004608: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x4300460C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43004610: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x43004614: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x43004618: lw          $t9, 0x98($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X98);
    // 0x4300461C: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x43004620: jalr        $t9
    // 0x43004624: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43004624: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x43004628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300462C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004630: jr          $ra
    // 0x43004634: nop

    return;
    // 0x43004634: nop

;}
RECOMP_FUNC void ovl_boss_demon_4638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004638: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x4300463C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004640: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004644: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x43004648: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x4300464C: jal         0x430045C4
    // 0x43004650: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_boss_demon_45C4(rdram, ctx);
        goto after_0;
    // 0x43004650: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43004654: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43004658: nop

    // 0x4300465C: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x43004660: lwc1        $f6, 0x1C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x43004664: lwc1        $f2, 0x28($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X28);
    // 0x43004668: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4300466C: swc1        $f8, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f8.u32l;
    // 0x43004670: lwc1        $f0, 0x18($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X18);
    // 0x43004674: nop

    // 0x43004678: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x4300467C: nop

    // 0x43004680: bc1f        L_43004694
    if (!c1cs) {
        // 0x43004684: nop
    
            goto L_43004694;
    }
    // 0x43004684: nop

    // 0x43004688: swc1        $f2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f2.u32l;
    // 0x4300468C: lwc1        $f0, 0x18($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X18);
    // 0x43004690: nop

L_43004694:
    // 0x43004694: lwc1        $f2, 0x2C($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x43004698: nop

    // 0x4300469C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x430046A0: nop

    // 0x430046A4: bc1f        L_430046B4
    if (!c1cs) {
        // 0x430046A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430046B4;
    }
    // 0x430046A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430046AC: swc1        $f2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f2.u32l;
    // 0x430046B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430046B4:
    // 0x430046B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430046B8: jr          $ra
    // 0x430046BC: nop

    return;
    // 0x430046BC: nop

;}
RECOMP_FUNC void ovl_boss_demon_46C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430046C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430046C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430046C8: lw          $a1, 0xC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC);
    // 0x430046CC: jal         0x43004638
    // 0x430046D0: nop

    ovl_boss_demon_4638(rdram, ctx);
        goto after_0;
    // 0x430046D0: nop

    after_0:
    // 0x430046D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430046D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430046DC: jr          $ra
    // 0x430046E0: nop

    return;
    // 0x430046E0: nop

;}
RECOMP_FUNC void ovl_boss_demon_46E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430046E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430046E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430046EC: lw          $t6, 0x4C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4C);
    // 0x430046F0: nop

    // 0x430046F4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x430046F8: beq         $t7, $zero, L_43004714
    if (ctx->r15 == 0) {
        // 0x430046FC: nop
    
            goto L_43004714;
    }
    // 0x430046FC: nop

    // 0x43004700: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43004704: nop

    // 0x43004708: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x4300470C: b           L_43004728
    // 0x43004710: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
        goto L_43004728;
    // 0x43004710: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
L_43004714:
    // 0x43004714: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x43004718: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x4300471C: nop

    // 0x43004720: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x43004724: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
L_43004728:
    // 0x43004728: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4300472C: lw          $t9, 0x98($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X98);
    // 0x43004730: nop

    // 0x43004734: jalr        $t9
    // 0x43004738: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43004738: nop

    after_0:
    // 0x4300473C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43004740: nop

    // 0x43004744: lwc1        $f10, 0x20($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X20);
    // 0x43004748: lwc1        $f16, 0x24($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X24);
    // 0x4300474C: lwc1        $f2, 0x38($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X38);
    // 0x43004750: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x43004754: swc1        $f18, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f18.u32l;
    // 0x43004758: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x4300475C: neg.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
    // 0x43004760: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x43004764: nop

    // 0x43004768: bc1f        L_4300477C
    if (!c1cs) {
        // 0x4300476C: nop
    
            goto L_4300477C;
    }
    // 0x4300476C: nop

    // 0x43004770: swc1        $f2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f2.u32l;
    // 0x43004774: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x43004778: nop

L_4300477C:
    // 0x4300477C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x43004780: nop

    // 0x43004784: bc1f        L_43004794
    if (!c1cs) {
        // 0x43004788: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004794;
    }
    // 0x43004788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300478C: swc1        $f12, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f12.u32l;
    // 0x43004790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004794:
    // 0x43004794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004798: jr          $ra
    // 0x4300479C: nop

    return;
    // 0x4300479C: nop

;}
RECOMP_FUNC void ovl_boss_demon_47A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430047A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430047A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430047A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x430047AC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x430047B0: jal         0x430082F0
    // 0x430047B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_boss_demon_82F0(rdram, ctx);
        goto after_0;
    // 0x430047B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x430047B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x430047BC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x430047C0: ori         $t7, $zero, 0x8001
    ctx->r15 = 0 | 0X8001;
    // 0x430047C4: sw          $v0, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r2;
    // 0x430047C8: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x430047CC: sh          $t7, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r15;
    // 0x430047D0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x430047D4: nop

    // 0x430047D8: sw          $t8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r24;
    // 0x430047DC: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x430047E0: nop

    // 0x430047E4: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x430047E8: nop

    // 0x430047EC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x430047F0: swc1        $f6, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f6.u32l;
    // 0x430047F4: lw          $t9, 0x98($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X98);
    // 0x430047F8: nop

    // 0x430047FC: jalr        $t9
    // 0x43004800: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43004800: nop

    after_1:
    // 0x43004804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004808: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300480C: jr          $ra
    // 0x43004810: nop

    return;
    // 0x43004810: nop

;}
RECOMP_FUNC void ovl_boss_demon_4814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004814: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004818: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300481C: lw          $a2, 0x5C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X5C);
    // 0x43004820: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x43004824: beq         $a2, $zero, L_43004844
    if (ctx->r6 == 0) {
        // 0x43004828: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_43004844;
    }
    // 0x43004828: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x4300482C: jal         0x43008330
    // 0x43004830: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    ovl_boss_demon_8330(rdram, ctx);
        goto after_0;
    // 0x43004830: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x43004834: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x43004838: nop

    // 0x4300483C: sw          $zero, 0x5C($a1)
    MEM_W(0X5C, ctx->r5) = 0;
    // 0x43004840: sw          $zero, 0x60($a1)
    MEM_W(0X60, ctx->r5) = 0;
L_43004844:
    // 0x43004844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004848: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300484C: jr          $ra
    // 0x43004850: nop

    return;
    // 0x43004850: nop

;}
RECOMP_FUNC void ovl_boss_demon_4854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004854: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43004858: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x4300485C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x43004860: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43004864: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x43004868: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4300486C: lw          $t9, 0x90($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X90);
    // 0x43004870: nop

    // 0x43004874: jalr        $t9
    // 0x43004878: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43004878: nop

    after_0:
    // 0x4300487C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43004880: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_43004884:
    // 0x43004884: lw          $t9, 0x70($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X70);
    // 0x43004888: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4300488C: jalr        $t9
    // 0x43004890: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43004890: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x43004894: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43004898: bne         $s0, $s2, L_43004884
    if (ctx->r16 != ctx->r18) {
        // 0x4300489C: nop
    
            goto L_43004884;
    }
    // 0x4300489C: nop

    // 0x430048A0: lw          $t9, 0x88($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X88);
    // 0x430048A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430048A8: jalr        $t9
    // 0x430048AC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x430048AC: nop

    after_2:
    // 0x430048B0: jal         0x430000F4
    // 0x430048B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_boss_demon_F4(rdram, ctx);
        goto after_3;
    // 0x430048B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x430048B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x430048BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430048C0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x430048C4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x430048C8: jr          $ra
    // 0x430048CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x430048CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_demon_48D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430048D0: jr          $ra
    // 0x430048D4: nop

    return;
    // 0x430048D4: nop

;}
RECOMP_FUNC void ovl_boss_demon_48D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430048D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430048DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430048E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430048E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x430048E8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x430048EC: jal         0x430000E8
    // 0x430048F0: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    ovl_boss_demon_E8(rdram, ctx);
        goto after_0;
    // 0x430048F0: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    after_0:
    // 0x430048F4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x430048F8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x430048FC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x43004900: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x43004904: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43004908: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x4300490C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x43004910: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x43004914: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x43004918: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x4300491C: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x43004920: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x43004924: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x43004928: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x4300492C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43004930: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004934: swc1        $f2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
    // 0x43004938: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x4300493C: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x43004940: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x43004944: swc1        $f0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f0.u32l;
    // 0x43004948: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
    // 0x4300494C: lwc1        $f6, -0x59D0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X59D0);
    // 0x43004950: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x43004954: swc1        $f6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f6.u32l;
    // 0x43004958: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x4300495C: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x43004960: lui         $t3, 0x4300
    ctx->r11 = S32(0X4300 << 16);
    // 0x43004964: lui         $t4, 0x4300
    ctx->r12 = S32(0X4300 << 16);
    // 0x43004968: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x4300496C: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x43004970: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x43004974: addiu       $t0, $t0, 0x430C
    ctx->r8 = ADD32(ctx->r8, 0X430C);
    // 0x43004978: addiu       $t1, $t1, 0x437C
    ctx->r9 = ADD32(ctx->r9, 0X437C);
    // 0x4300497C: addiu       $t2, $t2, 0x43CC
    ctx->r10 = ADD32(ctx->r10, 0X43CC);
    // 0x43004980: addiu       $t3, $t3, 0x4410
    ctx->r11 = ADD32(ctx->r11, 0X4410);
    // 0x43004984: addiu       $t4, $t4, 0x44A4
    ctx->r12 = ADD32(ctx->r12, 0X44A4);
    // 0x43004988: addiu       $t5, $t5, 0x4454
    ctx->r13 = ADD32(ctx->r13, 0X4454);
    // 0x4300498C: addiu       $t8, $t8, 0x47A0
    ctx->r24 = ADD32(ctx->r24, 0X47A0);
    // 0x43004990: addiu       $t7, $t7, 0x4814
    ctx->r15 = ADD32(ctx->r15, 0X4814);
    // 0x43004994: sw          $t0, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->r8;
    // 0x43004998: sw          $t1, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->r9;
    // 0x4300499C: sw          $t2, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->r10;
    // 0x430049A0: sw          $t3, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r11;
    // 0x430049A4: sw          $t4, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r12;
    // 0x430049A8: sw          $t5, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r13;
    // 0x430049AC: sw          $t8, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r24;
    // 0x430049B0: sw          $t7, 0x88($v0)
    MEM_W(0X88, ctx->r2) = ctx->r15;
    // 0x430049B4: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x430049B8: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x430049BC: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x430049C0: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x430049C4: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x430049C8: lui         $t3, 0x4300
    ctx->r11 = S32(0X4300 << 16);
    // 0x430049CC: lui         $t4, 0x4300
    ctx->r12 = S32(0X4300 << 16);
    // 0x430049D0: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x430049D4: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x430049D8: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x430049DC: addiu       $t6, $t6, 0x44E4
    ctx->r14 = ADD32(ctx->r14, 0X44E4);
    // 0x430049E0: addiu       $t9, $t9, 0x452C
    ctx->r25 = ADD32(ctx->r25, 0X452C);
    // 0x430049E4: addiu       $t0, $t0, 0x4208
    ctx->r8 = ADD32(ctx->r8, 0X4208);
    // 0x430049E8: addiu       $t1, $t1, 0x4268
    ctx->r9 = ADD32(ctx->r9, 0X4268);
    // 0x430049EC: addiu       $t2, $t2, 0x4574
    ctx->r10 = ADD32(ctx->r10, 0X4574);
    // 0x430049F0: addiu       $t3, $t3, 0x45C4
    ctx->r11 = ADD32(ctx->r11, 0X45C4);
    // 0x430049F4: addiu       $t4, $t4, 0x4638
    ctx->r12 = ADD32(ctx->r12, 0X4638);
    // 0x430049F8: addiu       $t5, $t5, 0x46C0
    ctx->r13 = ADD32(ctx->r13, 0X46C0);
    // 0x430049FC: addiu       $t8, $t8, 0x46E4
    ctx->r24 = ADD32(ctx->r24, 0X46E4);
    // 0x43004A00: addiu       $t7, $t7, 0x4854
    ctx->r15 = ADD32(ctx->r15, 0X4854);
    // 0x43004A04: sw          $zero, 0x48($v0)
    MEM_W(0X48, ctx->r2) = 0;
    // 0x43004A08: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x43004A0C: sw          $zero, 0x40($v0)
    MEM_W(0X40, ctx->r2) = 0;
    // 0x43004A10: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x43004A14: sw          $zero, 0x58($v0)
    MEM_W(0X58, ctx->r2) = 0;
    // 0x43004A18: sw          $zero, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = 0;
    // 0x43004A1C: sw          $zero, 0x60($v0)
    MEM_W(0X60, ctx->r2) = 0;
    // 0x43004A20: sw          $zero, 0x64($v0)
    MEM_W(0X64, ctx->r2) = 0;
    // 0x43004A24: sw          $zero, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = 0;
    // 0x43004A28: sw          $t6, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->r14;
    // 0x43004A2C: sw          $t9, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r25;
    // 0x43004A30: sw          $t0, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->r8;
    // 0x43004A34: sw          $t1, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r9;
    // 0x43004A38: sw          $t2, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r10;
    // 0x43004A3C: sw          $t3, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r11;
    // 0x43004A40: sw          $t4, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r12;
    // 0x43004A44: sw          $t5, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r13;
    // 0x43004A48: sw          $t8, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r24;
    // 0x43004A4C: sw          $t7, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->r15;
    // 0x43004A50: swc1        $f2, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f2.u32l;
    // 0x43004A54: swc1        $f8, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f8.u32l;
    // 0x43004A58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004A5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004A60: jr          $ra
    // 0x43004A64: nop

    return;
    // 0x43004A64: nop

    // 0x43004A68: nop

    // 0x43004A6C: nop

;}
RECOMP_FUNC void ovl_boss_demon_4A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004A70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004A74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004A78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43004A7C: jal         0x43009400
    // 0x43004A80: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_boss_demon_9400(rdram, ctx);
        goto after_0;
    // 0x43004A80: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x43004A84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004A88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004A8C: jr          $ra
    // 0x43004A90: nop

    return;
    // 0x43004A90: nop

;}
RECOMP_FUNC void ovl_boss_demon_4A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004A94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004A98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004A9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43004AA0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43004AA4: jal         0x43009388
    // 0x43004AA8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_boss_demon_9388(rdram, ctx);
        goto after_0;
    // 0x43004AA8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x43004AAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004AB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004AB4: jr          $ra
    // 0x43004AB8: nop

    return;
    // 0x43004AB8: nop

;}
RECOMP_FUNC void ovl_boss_demon_4ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004ABC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004AC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004AC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43004AC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43004ACC: jal         0x43009388
    // 0x43004AD0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_boss_demon_9388(rdram, ctx);
        goto after_0;
    // 0x43004AD0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x43004AD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004AD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004ADC: jr          $ra
    // 0x43004AE0: nop

    return;
    // 0x43004AE0: nop

;}
RECOMP_FUNC void ovl_boss_demon_4AE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004AE4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x43004AE8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x43004AEC: jr          $ra
    // 0x43004AF0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x43004AF0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void ovl_boss_demon_4AF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004AF4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x43004AF8: jr          $ra
    // 0x43004AFC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x43004AFC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_boss_demon_4B00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004B00: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x43004B04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43004B08: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43004B0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43004B10: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x43004B14: jal         0x43001320
    // 0x43004B18: nop

    ovl_boss_demon_1320(rdram, ctx);
        goto after_0;
    // 0x43004B18: nop

    after_0:
    // 0x43004B1C: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43004B20: lw          $t6, -0x5810($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5810);
    // 0x43004B24: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x43004B28: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x43004B2C: bne         $t6, $a0, L_43004B4C
    if (ctx->r14 != ctx->r4) {
        // 0x43004B30: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_43004B4C;
    }
    // 0x43004B30: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43004B34: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x43004B38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43004B3C: jalr        $t9
    // 0x43004B40: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43004B40: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    after_1:
    // 0x43004B44: b           L_43004C38
    // 0x43004B48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43004C38;
    // 0x43004B48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43004B4C:
    // 0x43004B4C: bne         $a0, $at, L_43004B6C
    if (ctx->r4 != ctx->r1) {
        // 0x43004B50: addiu       $a1, $zero, 0x29
        ctx->r5 = ADD32(0, 0X29);
            goto L_43004B6C;
    }
    // 0x43004B50: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x43004B54: lw          $t9, 0x3C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X3C);
    // 0x43004B58: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43004B5C: jalr        $t9
    // 0x43004B60: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43004B60: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    after_2:
    // 0x43004B64: b           L_43004C38
    // 0x43004B68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43004C38;
    // 0x43004B68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43004B6C:
    // 0x43004B6C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x43004B70: jal         0x430006C4
    // 0x43004B74: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    ovl_boss_demon_6C4(rdram, ctx);
        goto after_3;
    // 0x43004B74: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    after_3:
    // 0x43004B78: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x43004B7C: bne         $v0, $zero, L_43004C38
    if (ctx->r2 != 0) {
        // 0x43004B80: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43004C38;
    }
    // 0x43004B80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43004B84: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x43004B88: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x43004B8C: bne         $v0, $at, L_43004BAC
    if (ctx->r2 != ctx->r1) {
        // 0x43004B90: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_43004BAC;
    }
    // 0x43004B90: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43004B94: lw          $t9, 0x30($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X30);
    // 0x43004B98: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x43004B9C: jalr        $t9
    // 0x43004BA0: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x43004BA0: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    after_4:
    // 0x43004BA4: b           L_43004C38
    // 0x43004BA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43004C38;
    // 0x43004BA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43004BAC:
    // 0x43004BAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43004BB0: bne         $v0, $at, L_43004BE4
    if (ctx->r2 != ctx->r1) {
        // 0x43004BB4: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_43004BE4;
    }
    // 0x43004BB4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x43004BB8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x43004BBC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x43004BC0: bne         $a0, $at, L_43004BE0
    if (ctx->r4 != ctx->r1) {
        // 0x43004BC4: addiu       $a1, $s0, 0x10
        ctx->r5 = ADD32(ctx->r16, 0X10);
            goto L_43004BE0;
    }
    // 0x43004BC4: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x43004BC8: lw          $t9, 0x34($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X34);
    // 0x43004BCC: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x43004BD0: jalr        $t9
    // 0x43004BD4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x43004BD4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_5:
    // 0x43004BD8: b           L_43004C38
    // 0x43004BDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43004C38;
    // 0x43004BDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43004BE0:
    // 0x43004BE0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
L_43004BE4:
    // 0x43004BE4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x43004BE8: bne         $v0, $at, L_43004C34
    if (ctx->r2 != ctx->r1) {
        // 0x43004BEC: lui         $v1, 0x4301
        ctx->r3 = S32(0X4301 << 16);
            goto L_43004C34;
    }
    // 0x43004BEC: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43004BF0: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43004BF4: addiu       $v0, $v0, -0x5C80
    ctx->r2 = ADD32(ctx->r2, -0X5C80);
    // 0x43004BF8: addiu       $v1, $v1, -0x5C48
    ctx->r3 = ADD32(ctx->r3, -0X5C48);
L_43004BFC:
    // 0x43004BFC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x43004C00: nop

    // 0x43004C04: bne         $a0, $t7, L_43004C28
    if (ctx->r4 != ctx->r15) {
        // 0x43004C08: nop
    
            goto L_43004C28;
    }
    // 0x43004C08: nop

    // 0x43004C0C: lw          $t9, 0x38($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X38);
    // 0x43004C10: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x43004C14: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43004C18: jalr        $t9
    // 0x43004C1C: addiu       $a2, $s0, 0x10
    ctx->r6 = ADD32(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x43004C1C: addiu       $a2, $s0, 0x10
    ctx->r6 = ADD32(ctx->r16, 0X10);
    after_6:
    // 0x43004C20: b           L_43004C38
    // 0x43004C24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43004C38;
    // 0x43004C24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43004C28:
    // 0x43004C28: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x43004C2C: bne         $v0, $v1, L_43004BFC
    if (ctx->r2 != ctx->r3) {
        // 0x43004C30: nop
    
            goto L_43004BFC;
    }
    // 0x43004C30: nop

L_43004C34:
    // 0x43004C34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43004C38:
    // 0x43004C38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43004C3C: jr          $ra
    // 0x43004C40: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x43004C40: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_boss_demon_4C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004C44: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43004C48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43004C4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43004C50: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x43004C54: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x43004C58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43004C5C: beq         $t6, $at, L_43004DC8
    if (ctx->r14 == ctx->r1) {
        // 0x43004C60: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_43004DC8;
    }
    // 0x43004C60: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43004C64: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x43004C68: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x43004C6C: bne         $v0, $zero, L_43004CD8
    if (ctx->r2 != 0) {
        // 0x43004C70: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_43004CD8;
    }
    // 0x43004C70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43004C74: jal         0x43009E70
    // 0x43004C78: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    ovl_boss_demon_9E70(rdram, ctx);
        goto after_0;
    // 0x43004C78: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x43004C7C: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x43004C80: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x43004C84: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x43004C88: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x43004C8C: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    // 0x43004C90: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x43004C94: swc1        $f10, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f10.u32l;
    // 0x43004C98: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x43004C9C: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x43004CA0: nop

    // 0x43004CA4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x43004CA8: swc1        $f4, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f4.u32l;
    // 0x43004CAC: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x43004CB0: jal         0x4300A030
    // 0x43004CB4: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    ovl_boss_demon_A030(rdram, ctx);
        goto after_1;
    // 0x43004CB4: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x43004CB8: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x43004CBC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x43004CC0: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x43004CC4: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x43004CC8: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x43004CCC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x43004CD0: b           L_43004DB8
    // 0x43004CD4: swc1        $f16, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f16.u32l;
        goto L_43004DB8;
    // 0x43004CD4: swc1        $f16, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f16.u32l;
L_43004CD8:
    // 0x43004CD8: bne         $v0, $at, L_43004CFC
    if (ctx->r2 != ctx->r1) {
        // 0x43004CDC: addiu       $a3, $s0, 0x10
        ctx->r7 = ADD32(ctx->r16, 0X10);
            goto L_43004CFC;
    }
    // 0x43004CDC: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    // 0x43004CE0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43004CE4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x43004CE8: jal         0x43008AC0
    // 0x43004CEC: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    ovl_boss_demon_8AC0(rdram, ctx);
        goto after_2;
    // 0x43004CEC: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_2:
    // 0x43004CF0: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x43004CF4: b           L_43004DBC
    // 0x43004CF8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
        goto L_43004DBC;
    // 0x43004CF8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_43004CFC:
    // 0x43004CFC: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x43004D00: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x43004D04: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x43004D08: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x43004D0C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x43004D10: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x43004D14: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x43004D18: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    // 0x43004D1C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x43004D20: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x43004D24: nop

    // 0x43004D28: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x43004D2C: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x43004D30: lwc1        $f16, 0x30($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X30);
    // 0x43004D34: add.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x43004D38: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x43004D3C: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
    // 0x43004D40: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x43004D44: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x43004D48: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x43004D4C: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x43004D50: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x43004D54: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x43004D58: mul.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x43004D5C: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x43004D60: nop

    // 0x43004D64: mul.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x43004D68: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x43004D6C: lwc1        $f4, 0x34($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X34);
    // 0x43004D70: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x43004D74: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x43004D78: swc1        $f18, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f18.u32l;
    // 0x43004D7C: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x43004D80: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x43004D84: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x43004D88: mul.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x43004D8C: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x43004D90: lwc1        $f8, 0x28($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X28);
    // 0x43004D94: mul.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x43004D98: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x43004D9C: nop

    // 0x43004DA0: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x43004DA4: add.s       $f16, $f6, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x43004DA8: lwc1        $f18, 0x38($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X38);
    // 0x43004DAC: add.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x43004DB0: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x43004DB4: swc1        $f8, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f8.u32l;
L_43004DB8:
    // 0x43004DB8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_43004DBC:
    // 0x43004DBC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43004DC0: jal         0x430006C4
    // 0x43004DC4: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    ovl_boss_demon_6C4(rdram, ctx);
        goto after_3;
    // 0x43004DC4: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_3:
L_43004DC8:
    // 0x43004DC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43004DCC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43004DD0: jr          $ra
    // 0x43004DD4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x43004DD4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_demon_4DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004DD8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x43004DDC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43004DE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004DE4: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x43004DE8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x43004DEC: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x43004DF0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x43004DF4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43004DF8: jal         0x430006C4
    // 0x43004DFC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    ovl_boss_demon_6C4(rdram, ctx);
        goto after_0;
    // 0x43004DFC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_0:
    // 0x43004E00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004E04: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43004E08: jr          $ra
    // 0x43004E0C: nop

    return;
    // 0x43004E0C: nop

;}
RECOMP_FUNC void ovl_boss_demon_4E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004E10: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43004E14: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x43004E18: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43004E1C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43004E20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004E24: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x43004E28: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x43004E2C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x43004E30: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x43004E34: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    // 0x43004E38: jal         0x430006C4
    // 0x43004E3C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_boss_demon_6C4(rdram, ctx);
        goto after_0;
    // 0x43004E3C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x43004E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004E44: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43004E48: jr          $ra
    // 0x43004E4C: nop

    return;
    // 0x43004E4C: nop

;}
RECOMP_FUNC void ovl_boss_demon_4E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004E50: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43004E54: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43004E58: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43004E5C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x43004E60: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x43004E64: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x43004E68: sw          $t6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r14;
    // 0x43004E6C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x43004E70: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x43004E74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43004E78: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x43004E7C: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x43004E80: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x43004E84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43004E88: jal         0x43000DC0
    // 0x43004E8C: sllv        $a3, $t8, $t7
    ctx->r7 = S32(ctx->r24 << (ctx->r15 & 31));
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_0;
    // 0x43004E8C: sllv        $a3, $t8, $t7
    ctx->r7 = S32(ctx->r24 << (ctx->r15 & 31));
    after_0:
    // 0x43004E90: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x43004E94: nop

    // 0x43004E98: beq         $t9, $zero, L_43004F14
    if (ctx->r25 == 0) {
        // 0x43004E9C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43004F14;
    }
    // 0x43004E9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43004EA0: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x43004EA4: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    // 0x43004EA8: sw          $t0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r8;
    // 0x43004EAC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x43004EB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43004EB4: lw          $v0, 0x8($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X8);
    // 0x43004EB8: nop

    // 0x43004EBC: lh          $t2, 0x0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X0);
    // 0x43004EC0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x43004EC4: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x43004EC8: nop

    // 0x43004ECC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43004ED0: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x43004ED4: lh          $t3, -0x2($v0)
    ctx->r11 = MEM_H(ctx->r2, -0X2);
    // 0x43004ED8: nop

    // 0x43004EDC: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x43004EE0: nop

    // 0x43004EE4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x43004EE8: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x43004EEC: lh          $t4, 0x0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X0);
    // 0x43004EF0: nop

    // 0x43004EF4: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x43004EF8: nop

    // 0x43004EFC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x43004F00: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x43004F04: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x43004F08: jal         0x43000DC0
    // 0x43004F0C: nop

    ovl_boss_demon_DC0(rdram, ctx);
        goto after_1;
    // 0x43004F0C: nop

    after_1:
    // 0x43004F10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43004F14:
    // 0x43004F14: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43004F18: jr          $ra
    // 0x43004F1C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x43004F1C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_boss_demon_4F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004F20: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43004F24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004F28: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x43004F2C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43004F30: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x43004F34: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x43004F38: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x43004F3C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x43004F40: jal         0x430006C4
    // 0x43004F44: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    ovl_boss_demon_6C4(rdram, ctx);
        goto after_0;
    // 0x43004F44: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x43004F48: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x43004F4C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x43004F50: beq         $t6, $zero, L_43004F7C
    if (ctx->r14 == 0) {
        // 0x43004F54: addiu       $at, $zero, -0x5
        ctx->r1 = ADD32(0, -0X5);
            goto L_43004F7C;
    }
    // 0x43004F54: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x43004F58: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x43004F5C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43004F60: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x43004F64: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x43004F68: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x43004F6C: jal         0x430006C4
    // 0x43004F70: addiu       $a2, $a3, 0x10
    ctx->r6 = ADD32(ctx->r7, 0X10);
    ovl_boss_demon_6C4(rdram, ctx);
        goto after_1;
    // 0x43004F70: addiu       $a2, $a3, 0x10
    ctx->r6 = ADD32(ctx->r7, 0X10);
    after_1:
    // 0x43004F74: b           L_43004FA0
    // 0x43004F78: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
        goto L_43004FA0;
    // 0x43004F78: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
L_43004F7C:
    // 0x43004F7C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x43004F80: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x43004F84: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x43004F88: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x43004F8C: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x43004F90: addiu       $a2, $a2, -0x5C48
    ctx->r6 = ADD32(ctx->r6, -0X5C48);
    // 0x43004F94: jal         0x430006C4
    // 0x43004F98: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_boss_demon_6C4(rdram, ctx);
        goto after_2;
    // 0x43004F98: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x43004F9C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
L_43004FA0:
    // 0x43004FA0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x43004FA4: jal         0x430006C4
    // 0x43004FA8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_boss_demon_6C4(rdram, ctx);
        goto after_3;
    // 0x43004FA8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x43004FAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004FB0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x43004FB4: jr          $ra
    // 0x43004FB8: nop

    return;
    // 0x43004FB8: nop

;}
RECOMP_FUNC void ovl_boss_demon_4FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004FBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43004FC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004FC4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43004FC8: lw          $a3, 0x0($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X0);
    // 0x43004FCC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43004FD0: beq         $a3, $at, L_43005000
    if (ctx->r7 == ctx->r1) {
        // 0x43004FD4: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_43005000;
    }
    // 0x43004FD4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43004FD8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x43004FDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43004FE0: jal         0x430006C4
    // 0x43004FE4: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    ovl_boss_demon_6C4(rdram, ctx);
        goto after_0;
    // 0x43004FE4: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x43004FE8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x43004FEC: jal         0x430012B0
    // 0x43004FF0: nop

    ovl_boss_demon_12B0(rdram, ctx);
        goto after_1;
    // 0x43004FF0: nop

    after_1:
    // 0x43004FF4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x43004FF8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x43004FFC: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
L_43005000:
    // 0x43005000: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43005004: jal         0x430000F4
    // 0x43005008: nop

    ovl_boss_demon_F4(rdram, ctx);
        goto after_2;
    // 0x43005008: nop

    after_2:
    // 0x4300500C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005010: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43005014: jr          $ra
    // 0x43005018: nop

    return;
    // 0x43005018: nop

;}
RECOMP_FUNC void ovl_boss_demon_501C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300501C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x43005020: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43005024: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x43005028: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4300502C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x43005030: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x43005034: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x43005038: jal         0x430000E8
    // 0x4300503C: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    ovl_boss_demon_E8(rdram, ctx);
        goto after_0;
    // 0x4300503C: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    after_0:
    // 0x43005040: lui         $a1, 0x4300
    ctx->r5 = S32(0X4300 << 16);
    // 0x43005044: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x43005048: addiu       $a1, $a1, 0x4B00
    ctx->r5 = ADD32(ctx->r5, 0X4B00);
    // 0x4300504C: jal         0x4300070C
    // 0x43005050: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_boss_demon_70C(rdram, ctx);
        goto after_1;
    // 0x43005050: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x43005054: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x43005058: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x4300505C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x43005060: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x43005064: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43005068: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x4300506C: jal         0x43000718
    // 0x43005070: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    ovl_boss_demon_718(rdram, ctx);
        goto after_2;
    // 0x43005070: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x43005074: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43005078: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x4300507C: jal         0x43001260
    // 0x43005080: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_demon_1260(rdram, ctx);
        goto after_3;
    // 0x43005080: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x43005084: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43005088: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x4300508C: jal         0x430006C4
    // 0x43005090: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_boss_demon_6C4(rdram, ctx);
        goto after_4;
    // 0x43005090: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x43005094: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x43005098: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4300509C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x430050A0: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x430050A4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x430050A8: jal         0x430006C4
    // 0x430050AC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_boss_demon_6C4(rdram, ctx);
        goto after_5;
    // 0x430050AC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_5:
    // 0x430050B0: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x430050B4: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x430050B8: beq         $a0, $zero, L_430050C8
    if (ctx->r4 == 0) {
        // 0x430050BC: sw          $s1, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r17;
            goto L_430050C8;
    }
    // 0x430050BC: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x430050C0: b           L_430050D0
    // 0x430050C4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_430050D0;
    // 0x430050C4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_430050C8:
    // 0x430050C8: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x430050CC: addiu       $v1, $v1, -0x5930
    ctx->r3 = ADD32(ctx->r3, -0X5930);
L_430050D0:
    // 0x430050D0: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x430050D4: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x430050D8: sw          $at, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r1;
    // 0x430050DC: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x430050E0: addiu       $t1, $t1, 0x4A70
    ctx->r9 = ADD32(ctx->r9, 0X4A70);
    // 0x430050E4: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
    // 0x430050E8: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x430050EC: sw          $t1, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r9;
    // 0x430050F0: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x430050F4: lui         $t3, 0x4300
    ctx->r11 = S32(0X4300 << 16);
    // 0x430050F8: lui         $t4, 0x4300
    ctx->r12 = S32(0X4300 << 16);
    // 0x430050FC: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x43005100: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x43005104: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x43005108: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x4300510C: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x43005110: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x43005114: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x43005118: addiu       $t2, $t2, 0x4A94
    ctx->r10 = ADD32(ctx->r10, 0X4A94);
    // 0x4300511C: addiu       $t3, $t3, 0x4ABC
    ctx->r11 = ADD32(ctx->r11, 0X4ABC);
    // 0x43005120: addiu       $t4, $t4, 0x4AE4
    ctx->r12 = ADD32(ctx->r12, 0X4AE4);
    // 0x43005124: addiu       $t5, $t5, 0x4AF4
    ctx->r13 = ADD32(ctx->r13, 0X4AF4);
    // 0x43005128: addiu       $t6, $t6, 0x4C44
    ctx->r14 = ADD32(ctx->r14, 0X4C44);
    // 0x4300512C: addiu       $t7, $t7, 0x4DD8
    ctx->r15 = ADD32(ctx->r15, 0X4DD8);
    // 0x43005130: addiu       $t8, $t8, 0x4E10
    ctx->r24 = ADD32(ctx->r24, 0X4E10);
    // 0x43005134: addiu       $t9, $t9, 0x4F20
    ctx->r25 = ADD32(ctx->r25, 0X4F20);
    // 0x43005138: addiu       $t0, $t0, 0x4E50
    ctx->r8 = ADD32(ctx->r8, 0X4E50);
    // 0x4300513C: addiu       $t1, $t1, 0x4FBC
    ctx->r9 = ADD32(ctx->r9, 0X4FBC);
    // 0x43005140: sw          $t2, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r10;
    // 0x43005144: sw          $t3, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r11;
    // 0x43005148: sw          $t4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r12;
    // 0x4300514C: sw          $t5, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r13;
    // 0x43005150: sw          $t6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r14;
    // 0x43005154: sw          $t7, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r15;
    // 0x43005158: sw          $t8, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r24;
    // 0x4300515C: sw          $t9, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r25;
    // 0x43005160: sw          $t0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r8;
    // 0x43005164: sw          $t1, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r9;
    // 0x43005168: sw          $at, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r1;
    // 0x4300516C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005170: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x43005174: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43005178: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x4300517C: jr          $ra
    // 0x43005180: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x43005180: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x43005184: nop

    // 0x43005188: nop

    // 0x4300518C: nop

;}
RECOMP_FUNC void ovl_boss_demon_5190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005190: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x43005194: jr          $ra
    // 0x43005198: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x43005198: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_boss_demon_519C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300519C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430051A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430051A4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x430051A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430051AC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x430051B0: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x430051B4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x430051B8: jal         0x43000DC0
    // 0x430051BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_0;
    // 0x430051BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x430051C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430051C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430051C8: jr          $ra
    // 0x430051CC: nop

    return;
    // 0x430051CC: nop

;}
RECOMP_FUNC void ovl_boss_demon_51D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430051D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430051D4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x430051D8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x430051DC: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x430051E0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x430051E4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x430051E8: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x430051EC: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x430051F0: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x430051F4: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x430051F8: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x430051FC: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x43005200: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x43005204: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43005208: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x4300520C: swc1        $f11, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x43005210: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x43005214: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x43005218: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x4300521C: jal         0x43000DC0
    // 0x43005220: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_0;
    // 0x43005220: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_0:
    // 0x43005224: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43005228: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4300522C: jr          $ra
    // 0x43005230: nop

    return;
    // 0x43005230: nop

;}
RECOMP_FUNC void ovl_boss_demon_5234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005234: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x43005238: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4300523C: bne         $t6, $at, L_43005290
    if (ctx->r14 != ctx->r1) {
        // 0x43005240: lui         $t8, 0x4301
        ctx->r24 = S32(0X4301 << 16);
            goto L_43005290;
    }
    // 0x43005240: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43005244: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43005248: lw          $v1, -0x57EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X57EC);
    // 0x4300524C: lw          $v0, 0x70($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X70);
    // 0x43005250: nop

    // 0x43005254: beq         $v0, $v1, L_43005290
    if (ctx->r2 == ctx->r3) {
        // 0x43005258: subu        $t7, $v1, $v0
        ctx->r15 = SUB32(ctx->r3, ctx->r2);
            goto L_43005290;
    }
    // 0x43005258: subu        $t7, $v1, $v0
    ctx->r15 = SUB32(ctx->r3, ctx->r2);
    // 0x4300525C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x43005260: lwc1        $f4, 0x2C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x43005264: bgez        $t7, L_4300527C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x43005268: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_4300527C;
    }
    // 0x43005268: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x4300526C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x43005270: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x43005274: nop

    // 0x43005278: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_4300527C:
    // 0x4300527C: mul.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x43005280: lwc1        $f18, 0x28($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X28);
    // 0x43005284: nop

    // 0x43005288: add.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x4300528C: swc1        $f6, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f6.u32l;
L_43005290:
    // 0x43005290: lw          $t8, -0x57EC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X57EC);
    // 0x43005294: lwc1        $f0, 0x28($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X28);
    // 0x43005298: jr          $ra
    // 0x4300529C: sw          $t8, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r24;
    return;
    // 0x4300529C: sw          $t8, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r24;
;}
