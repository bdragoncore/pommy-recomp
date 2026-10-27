#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_actor_main_13F7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013F7C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40013F80: addiu       $t7, $a1, -0x1
    ctx->r15 = ADD32(ctx->r5, -0X1);
    // 0x40013F84: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x40013F88: sltiu       $at, $t7, 0x24
    ctx->r1 = ctx->r15 < 0X24 ? 1 : 0;
    // 0x40013F8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40013F90: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40013F94: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x40013F98: beq         $at, $zero, L_400140A8
    if (ctx->r1 == 0) {
        // 0x40013F9C: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_400140A8;
    }
    // 0x40013F9C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x40013FA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x40013FA4: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40013FA8: addu        $at, $at, $t7
    gpr jr_addend_40013FB4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x40013FAC: lw          $t7, -0x1078($at)
    ctx->r15 = ADD32(ctx->r1, -0X1078);
    // 0x40013FB0: nop

    // 0x40013FB4: jr          $t7
    // 0x40013FB8: nop

    switch (jr_addend_40013FB4 >> 2) {
        case 0: goto L_40013FBC; break;
        case 1: goto L_400140A8; break;
        case 2: goto L_400140A8; break;
        case 3: goto L_40014058; break;
        case 4: goto L_400140A8; break;
        case 5: goto L_400140A8; break;
        case 6: goto L_400140A8; break;
        case 7: goto L_400140A8; break;
        case 8: goto L_400140A8; break;
        case 9: goto L_400140A8; break;
        case 10: goto L_400140A8; break;
        case 11: goto L_400140A8; break;
        case 12: goto L_400140A8; break;
        case 13: goto L_400140A8; break;
        case 14: goto L_40014088; break;
        case 15: goto L_400140A8; break;
        case 16: goto L_400140A8; break;
        case 17: goto L_400140A8; break;
        case 18: goto L_400140A8; break;
        case 19: goto L_400140A8; break;
        case 20: goto L_400140A8; break;
        case 21: goto L_400140A8; break;
        case 22: goto L_400140A8; break;
        case 23: goto L_400140A8; break;
        case 24: goto L_400140A8; break;
        case 25: goto L_400140A8; break;
        case 26: goto L_400140A8; break;
        case 27: goto L_400140A8; break;
        case 28: goto L_400140A8; break;
        case 29: goto L_400140A8; break;
        case 30: goto L_400140A8; break;
        case 31: goto L_400140A8; break;
        case 32: goto L_400140A8; break;
        case 33: goto L_400140A8; break;
        case 34: goto L_400140A8; break;
        case 35: goto L_400140A0; break;
        default: switch_error(__func__, 0x40013FB4, 0x4001EF88);
    }
    // 0x40013FB8: nop

L_40013FBC:
    // 0x40013FBC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40013FC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40013FC4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40013FC8: addiu       $a1, $zero, 0x57B
    ctx->r5 = ADD32(0, 0X57B);
    // 0x40013FCC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40013FD0: jal         0x40008D64
    // 0x40013FD4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40013FD4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40013FD8: addiu       $a1, $s0, 0x324
    ctx->r5 = ADD32(ctx->r16, 0X324);
    // 0x40013FDC: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    // 0x40013FE0: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x40013FE4: jal         0x40011D40
    // 0x40013FE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11D40(rdram, ctx);
        goto after_1;
    // 0x40013FE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x40013FEC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x40013FF0: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x40013FF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x40013FF8: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x40013FFC: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    // 0x40014000: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x40014004: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x40014008: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x4001400C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x40014010: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x40014014: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x40014018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001401C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x40014020: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x40014024: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x40014028: jal         0x40006EEC
    // 0x4001402C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    ovl_actor_main_6EEC(rdram, ctx);
        goto after_2;
    // 0x4001402C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x40014030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40014034: addiu       $a1, $zero, 0x233
    ctx->r5 = ADD32(0, 0X233);
    // 0x40014038: jal         0x4000115C
    // 0x4001403C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_3;
    // 0x4001403C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x40014040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40014044: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x40014048: jal         0x40009000
    // 0x4001404C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_4;
    // 0x4001404C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x40014050: b           L_400140AC
    // 0x40014054: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
        goto L_400140AC;
    // 0x40014054: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
L_40014058:
    // 0x40014058: jal         0x40008F98
    // 0x4001405C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_8F98(rdram, ctx);
        goto after_5;
    // 0x4001405C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x40014060: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40014064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40014068: swc1        $f0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f0.u32l;
    // 0x4001406C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40014070: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x40014074: addiu       $a1, $zero, 0x568
    ctx->r5 = ADD32(0, 0X568);
    // 0x40014078: jal         0x40008D64
    // 0x4001407C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_6;
    // 0x4001407C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_6:
    // 0x40014080: b           L_400140AC
    // 0x40014084: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
        goto L_400140AC;
    // 0x40014084: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
L_40014088:
    // 0x40014088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001408C: addiu       $a1, $zero, 0x25E
    ctx->r5 = ADD32(0, 0X25E);
    // 0x40014090: jal         0x4000115C
    // 0x40014094: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_7;
    // 0x40014094: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x40014098: b           L_400140AC
    // 0x4001409C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
        goto L_400140AC;
    // 0x4001409C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
L_400140A0:
    // 0x400140A0: jal         0x4000CB84
    // 0x400140A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_8;
    // 0x400140A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_400140A8:
    // 0x400140A8: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
L_400140AC:
    // 0x400140AC: addiu       $t8, $s0, 0x324
    ctx->r24 = ADD32(ctx->r16, 0X324);
    // 0x400140B0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x400140B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400140B8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x400140BC: jal         0x40011BE4
    // 0x400140C0: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    ovl_actor_main_11BE4(rdram, ctx);
        goto after_9;
    // 0x400140C0: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    after_9:
    // 0x400140C4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x400140C8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x400140CC: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x400140D0: beq         $at, $zero, L_400140EC
    if (ctx->r1 == 0) {
        // 0x400140D4: slti        $at, $t0, 0xC
        ctx->r1 = SIGNED(ctx->r8) < 0XC ? 1 : 0;
            goto L_400140EC;
    }
    // 0x400140D4: slti        $at, $t0, 0xC
    ctx->r1 = SIGNED(ctx->r8) < 0XC ? 1 : 0;
    // 0x400140D8: jal         0x40011E8C
    // 0x400140DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11E8C(rdram, ctx);
        goto after_10;
    // 0x400140DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x400140E0: b           L_40014100
    // 0x400140E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40014100;
    // 0x400140E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x400140E8: slti        $at, $t0, 0xC
    ctx->r1 = SIGNED(ctx->r8) < 0XC ? 1 : 0;
L_400140EC:
    // 0x400140EC: beq         $at, $zero, L_400140FC
    if (ctx->r1 == 0) {
        // 0x400140F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400140FC;
    }
    // 0x400140F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400140F4: jal         0x40011F94
    // 0x400140F8: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    ovl_actor_main_11F94(rdram, ctx);
        goto after_11;
    // 0x400140F8: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_11:
L_400140FC:
    // 0x400140FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40014100:
    // 0x40014100: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x40014104: jr          $ra
    // 0x40014108: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x40014108: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_actor_main_1410C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001410C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x40014110: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x40014114: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40014118: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4001411C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x40014120: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x40014124: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x40014128: jal         0x40000DE4
    // 0x4001412C: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    ovl_actor_main_DE4(rdram, ctx);
        goto after_0;
    // 0x4001412C: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x40014130: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x40014134: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x40014138: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x4001413C: jal         0x40011C5C
    // 0x40014140: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_11C5C(rdram, ctx);
        goto after_1;
    // 0x40014140: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x40014144: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x40014148: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x4001414C: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x40014150: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x40014154: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x40014158: lwc1        $f0, 0x44($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X44);
    // 0x4001415C: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x40014160: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x40014164: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x40014168: bc1f        L_400141A0
    if (!c1cs) {
        // 0x4001416C: nop
    
            goto L_400141A0;
    }
    // 0x4001416C: nop

    // 0x40014170: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x40014174: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x40014178: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x4001417C: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x40014180: nop

    // 0x40014184: bc1f        L_40014194
    if (!c1cs) {
        // 0x40014188: nop
    
            goto L_40014194;
    }
    // 0x40014188: nop

    // 0x4001418C: b           L_400141CC
    // 0x40014190: swc1        $f12, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f12.u32l;
        goto L_400141CC;
    // 0x40014190: swc1        $f12, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f12.u32l;
L_40014194:
    // 0x40014194: neg.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = -ctx->f12.fl;
    // 0x40014198: b           L_400141CC
    // 0x4001419C: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
        goto L_400141CC;
    // 0x4001419C: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
L_400141A0:
    // 0x400141A0: sub.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x400141A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x400141A8: nop

    // 0x400141AC: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x400141B0: nop

    // 0x400141B4: bc1f        L_400141C8
    if (!c1cs) {
        // 0x400141B8: nop
    
            goto L_400141C8;
    }
    // 0x400141B8: nop

    // 0x400141BC: neg.s       $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = -ctx->f12.fl;
    // 0x400141C0: b           L_400141CC
    // 0x400141C4: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
        goto L_400141CC;
    // 0x400141C4: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
L_400141C8:
    // 0x400141C8: swc1        $f12, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f12.u32l;
L_400141CC:
    // 0x400141CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400141D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x400141D4: jr          $ra
    // 0x400141D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x400141D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_actor_main_141DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400141DC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x400141E0: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x400141E4: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x400141E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400141EC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x400141F0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x400141F4: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x400141F8: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x400141FC: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x40014200: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x40014204: jal         0x4001A4A0
    // 0x40014208: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_1A4A0(rdram, ctx);
        goto after_0;
    // 0x40014208: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x4001420C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x40014210: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40014214: addiu       $t7, $sp, 0x20
    ctx->r15 = ADD32(ctx->r29, 0X20);
    // 0x40014218: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x4001421C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x40014220: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x40014224: jal         0x40000790
    // 0x40014228: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    ovl_actor_main_790(rdram, ctx);
        goto after_1;
    // 0x40014228: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x4001422C: beq         $v0, $zero, L_40014238
    if (ctx->r2 == 0) {
        // 0x40014230: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_40014238;
    }
    // 0x40014230: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x40014234: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_40014238:
    // 0x40014238: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001423C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x40014240: jr          $ra
    // 0x40014244: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x40014244: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_actor_main_14248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40014248: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x4001424C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40014250: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x40014254: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x40014258: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x4001425C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x40014260: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x40014264: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x40014268: swc1        $f8, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f8.u32l;
    // 0x4001426C: lwc1        $f0, 0x44($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X44);
    // 0x40014270: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x40014274: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x40014278: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x4001427C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x40014280: bc1f        L_40014294
    if (!c1cs) {
        // 0x40014284: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_40014294;
    }
    // 0x40014284: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x40014288: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x4001428C: b           L_400142B4
    // 0x40014290: swc1        $f10, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f10.u32l;
        goto L_400142B4;
    // 0x40014290: swc1        $f10, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f10.u32l;
L_40014294:
    // 0x40014294: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x40014298: nop

    // 0x4001429C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x400142A0: nop

    // 0x400142A4: bc1f        L_400142B4
    if (!c1cs) {
        // 0x400142A8: nop
    
            goto L_400142B4;
    }
    // 0x400142A8: nop

    // 0x400142AC: add.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x400142B0: swc1        $f18, 0x44($a2)
    MEM_W(0X44, ctx->r6) = ctx->f18.u32l;
L_400142B4:
    // 0x400142B4: lwc1        $f0, 0x8($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X8);
    // 0x400142B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x400142BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x400142C0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x400142C4: nop

    // 0x400142C8: bc1f        L_400142D8
    if (!c1cs) {
        // 0x400142CC: nop
    
            goto L_400142D8;
    }
    // 0x400142CC: nop

    // 0x400142D0: b           L_400142DC
    // 0x400142D4: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_400142DC;
    // 0x400142D4: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_400142D8:
    // 0x400142D8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_400142DC:
    // 0x400142DC: lwc1        $f6, 0x4($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X4);
    // 0x400142E0: nop

    // 0x400142E4: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x400142E8: swc1        $f8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f8.u32l;
    // 0x400142EC: lwc1        $f10, 0x4($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X4);
    // 0x400142F0: nop

    // 0x400142F4: c.le.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl <= ctx->f10.fl;
    // 0x400142F8: nop

    // 0x400142FC: bc1f        L_40014328
    if (!c1cs) {
        // 0x40014300: nop
    
            goto L_40014328;
    }
    // 0x40014300: nop

    // 0x40014304: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x40014308: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x4001430C: jal         0x400006C4
    // 0x40014310: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40014310: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x40014314: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x40014318: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x4001431C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x40014320: b           L_40014358
    // 0x40014324: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
        goto L_40014358;
    // 0x40014324: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
L_40014328:
    // 0x40014328: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x4001432C: lwc1        $f16, 0x44($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X44);
    // 0x40014330: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x40014334: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x40014338: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x4001433C: jal         0x40000790
    // 0x40014340: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    ovl_actor_main_790(rdram, ctx);
        goto after_1;
    // 0x40014340: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    after_1:
    // 0x40014344: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x40014348: beq         $v0, $zero, L_40014358
    if (ctx->r2 == 0) {
        // 0x4001434C: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_40014358;
    }
    // 0x4001434C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x40014350: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x40014354: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_40014358:
    // 0x40014358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001435C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x40014360: jr          $ra
    // 0x40014364: nop

    return;
    // 0x40014364: nop

;}
RECOMP_FUNC void ovl_actor_main_14368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40014368: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x4001436C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x40014370: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40014374: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40014378: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001437C: beq         $a1, $at, L_400143B0
    if (ctx->r5 == ctx->r1) {
        // 0x40014380: sw          $a1, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r5;
            goto L_400143B0;
    }
    // 0x40014380: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x40014384: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x40014388: beq         $a1, $at, L_40014424
    if (ctx->r5 == ctx->r1) {
        // 0x4001438C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40014424;
    }
    // 0x4001438C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40014390: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x40014394: beq         $a1, $at, L_40014458
    if (ctx->r5 == ctx->r1) {
        // 0x40014398: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40014458;
    }
    // 0x40014398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001439C: addiu       $at, $zero, 0x12C
    ctx->r1 = ADD32(0, 0X12C);
    // 0x400143A0: beq         $a1, $at, L_40014498
    if (ctx->r5 == ctx->r1) {
        // 0x400143A4: nop
    
            goto L_40014498;
    }
    // 0x400143A4: nop

    // 0x400143A8: b           L_400144A4
    // 0x400143AC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
        goto L_400144A4;
    // 0x400143AC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
L_400143B0:
    // 0x400143B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400143B4: addiu       $a1, $zero, 0x566
    ctx->r5 = ADD32(0, 0X566);
    // 0x400143B8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400143BC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400143C0: jal         0x40008D64
    // 0x400143C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x400143C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x400143C8: addiu       $a3, $s0, 0x324
    ctx->r7 = ADD32(ctx->r16, 0X324);
    // 0x400143CC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x400143D0: addiu       $a2, $a3, 0x4
    ctx->r6 = ADD32(ctx->r7, 0X4);
    // 0x400143D4: jal         0x40011D40
    // 0x400143D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11D40(rdram, ctx);
        goto after_1;
    // 0x400143D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x400143DC: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400143E0: lwc1        $f4, -0xFE8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0XFE8);
    // 0x400143E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400143E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x400143EC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400143F0: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x400143F4: jal         0x4000120C
    // 0x400143F8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_2;
    // 0x400143F8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x400143FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40014400: addiu       $a1, $zero, 0x263
    ctx->r5 = ADD32(0, 0X263);
    // 0x40014404: jal         0x4000115C
    // 0x40014408: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_3;
    // 0x40014408: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x4001440C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40014410: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x40014414: jal         0x40009000
    // 0x40014418: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_4;
    // 0x40014418: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x4001441C: b           L_400144A4
    // 0x40014420: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
        goto L_400144A4;
    // 0x40014420: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
L_40014424:
    // 0x40014424: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40014428: lwc1        $f6, -0xFE4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0XFE4);
    // 0x4001442C: addiu       $a1, $zero, 0x61
    ctx->r5 = ADD32(0, 0X61);
    // 0x40014430: lui         $a2, 0x4320
    ctx->r6 = S32(0X4320 << 16);
    // 0x40014434: lui         $a3, 0x4307
    ctx->r7 = S32(0X4307 << 16);
    // 0x40014438: jal         0x4000120C
    // 0x4001443C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_5;
    // 0x4001443C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x40014440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40014444: addiu       $a1, $zero, 0x25F
    ctx->r5 = ADD32(0, 0X25F);
    // 0x40014448: jal         0x4000115C
    // 0x4001444C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_6;
    // 0x4001444C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x40014450: b           L_400144A4
    // 0x40014454: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
        goto L_400144A4;
    // 0x40014454: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
L_40014458:
    // 0x40014458: addiu       $v0, $s0, 0x324
    ctx->r2 = ADD32(ctx->r16, 0X324);
    // 0x4001445C: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x40014460: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x40014464: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x40014468: lui         $a2, 0x4307
    ctx->r6 = S32(0X4307 << 16);
    // 0x4001446C: lui         $a3, 0x4320
    ctx->r7 = S32(0X4320 << 16);
    // 0x40014470: jal         0x4001A534
    // 0x40014474: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_actor_main_1A534(rdram, ctx);
        goto after_7;
    // 0x40014474: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x40014478: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x4001447C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40014480: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x40014484: sw          $v0, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r2;
    // 0x40014488: jal         0x4001410C
    // 0x4001448C: addiu       $a1, $a3, 0xC
    ctx->r5 = ADD32(ctx->r7, 0XC);
    ovl_actor_main_1410C(rdram, ctx);
        goto after_8;
    // 0x4001448C: addiu       $a1, $a3, 0xC
    ctx->r5 = ADD32(ctx->r7, 0XC);
    after_8:
    // 0x40014490: b           L_400144A4
    // 0x40014494: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
        goto L_400144A4;
    // 0x40014494: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
L_40014498:
    // 0x40014498: jal         0x4000CB84
    // 0x4001449C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_9;
    // 0x4001449C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x400144A0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
L_400144A4:
    // 0x400144A4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x400144A8: slti        $at, $t7, 0x3C
    ctx->r1 = SIGNED(ctx->r15) < 0X3C ? 1 : 0;
    // 0x400144AC: bne         $at, $zero, L_400144E4
    if (ctx->r1 != 0) {
        // 0x400144B0: slti        $at, $t7, 0x5A
        ctx->r1 = SIGNED(ctx->r15) < 0X5A ? 1 : 0;
            goto L_400144E4;
    }
    // 0x400144B0: slti        $at, $t7, 0x5A
    ctx->r1 = SIGNED(ctx->r15) < 0X5A ? 1 : 0;
    // 0x400144B4: beq         $at, $zero, L_400144E4
    if (ctx->r1 == 0) {
        // 0x400144B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400144E4;
    }
    // 0x400144B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400144BC: addiu       $a1, $s0, 0x330
    ctx->r5 = ADD32(ctx->r16, 0X330);
    // 0x400144C0: lui         $a2, 0x4307
    ctx->r6 = S32(0X4307 << 16);
    // 0x400144C4: jal         0x400141DC
    // 0x400144C8: lui         $a3, 0x4320
    ctx->r7 = S32(0X4320 << 16);
    ovl_actor_main_141DC(rdram, ctx);
        goto after_10;
    // 0x400144C8: lui         $a3, 0x4320
    ctx->r7 = S32(0X4320 << 16);
    after_10:
    // 0x400144CC: beq         $v0, $zero, L_40014534
    if (ctx->r2 == 0) {
        // 0x400144D0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_40014534;
    }
    // 0x400144D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x400144D4: jal         0x4000CB84
    // 0x400144D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_11;
    // 0x400144D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x400144DC: b           L_40014534
    // 0x400144E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40014534;
    // 0x400144E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_400144E4:
    // 0x400144E4: slti        $at, $t8, 0x5A
    ctx->r1 = SIGNED(ctx->r24) < 0X5A ? 1 : 0;
    // 0x400144E8: bne         $at, $zero, L_40014530
    if (ctx->r1 != 0) {
        // 0x400144EC: slti        $at, $t8, 0x12C
        ctx->r1 = SIGNED(ctx->r24) < 0X12C ? 1 : 0;
            goto L_40014530;
    }
    // 0x400144EC: slti        $at, $t8, 0x12C
    ctx->r1 = SIGNED(ctx->r24) < 0X12C ? 1 : 0;
    // 0x400144F0: beq         $at, $zero, L_40014530
    if (ctx->r1 == 0) {
        // 0x400144F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40014530;
    }
    // 0x400144F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400144F8: addiu       $a1, $s0, 0x330
    ctx->r5 = ADD32(ctx->r16, 0X330);
    // 0x400144FC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x40014500: jal         0x40014248
    // 0x40014504: lui         $a2, 0x4334
    ctx->r6 = S32(0X4334 << 16);
    ovl_actor_main_14248(rdram, ctx);
        goto after_12;
    // 0x40014504: lui         $a2, 0x4334
    ctx->r6 = S32(0X4334 << 16);
    after_12:
    // 0x40014508: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x4001450C: bne         $v0, $zero, L_40014528
    if (ctx->r2 != 0) {
        // 0x40014510: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40014528;
    }
    // 0x40014510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40014514: lui         $a2, 0x4307
    ctx->r6 = S32(0X4307 << 16);
    // 0x40014518: jal         0x400141DC
    // 0x4001451C: lui         $a3, 0x4320
    ctx->r7 = S32(0X4320 << 16);
    ovl_actor_main_141DC(rdram, ctx);
        goto after_13;
    // 0x4001451C: lui         $a3, 0x4320
    ctx->r7 = S32(0X4320 << 16);
    after_13:
    // 0x40014520: beq         $v0, $zero, L_40014534
    if (ctx->r2 == 0) {
        // 0x40014524: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_40014534;
    }
    // 0x40014524: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40014528:
    // 0x40014528: jal         0x4000CB84
    // 0x4001452C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_14;
    // 0x4001452C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
L_40014530:
    // 0x40014530: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40014534:
    // 0x40014534: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x40014538: jr          $ra
    // 0x4001453C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x4001453C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_actor_main_14540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40014540: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40014544: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40014548: lw          $a1, 0xC0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC0);
    // 0x4001454C: jal         0x40011944
    // 0x40014550: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_11944(rdram, ctx);
        goto after_0;
    // 0x40014550: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x40014554: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40014558: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4001455C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40014560: sw          $t6, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r14;
    // 0x40014564: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
    // 0x40014568: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4001456C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x40014570: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x40014574: jal         0x40006EEC
    // 0x40014578: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_6EEC(rdram, ctx);
        goto after_1;
    // 0x40014578: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x4001457C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40014580: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40014584: jr          $ra
    // 0x40014588: nop

    return;
    // 0x40014588: nop

;}
RECOMP_FUNC void ovl_actor_main_1458C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001458C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40014590: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40014594: jal         0x40008F98
    // 0x40014598: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    ovl_actor_main_8F98(rdram, ctx);
        goto after_0;
    // 0x40014598: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x4001459C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x400145A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x400145A4: lw          $a0, 0x330($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X330);
    // 0x400145A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x400145AC: beq         $a0, $at, L_400145C0
    if (ctx->r4 == ctx->r1) {
        // 0x400145B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_400145C0;
    }
    // 0x400145B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400145B4: jal         0x400006C4
    // 0x400145B8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x400145B8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x400145BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400145C0:
    // 0x400145C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x400145C4: jr          $ra
    // 0x400145C8: nop

    return;
    // 0x400145C8: nop

;}
RECOMP_FUNC void ovl_actor_main_145CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400145CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x400145D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400145D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x400145D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x400145DC: jal         0x400123E8
    // 0x400145E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_123E8(rdram, ctx);
        goto after_0;
    // 0x400145E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x400145E4: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x400145E8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x400145EC: bne         $v0, $at, L_40014618
    if (ctx->r2 != ctx->r1) {
        // 0x400145F0: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_40014618;
    }
    // 0x400145F0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x400145F4: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x400145F8: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x400145FC: bne         $t6, $at, L_40014660
    if (ctx->r14 != ctx->r1) {
        // 0x40014600: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40014660;
    }
    // 0x40014600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40014604: jal         0x40001A8C
    // 0x40014608: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x40014608: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x4001460C: b           L_40014660
    // 0x40014610: nop

        goto L_40014660;
    // 0x40014610: nop

    // 0x40014614: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_40014618:
    // 0x40014618: bne         $v0, $at, L_40014660
    if (ctx->r2 != ctx->r1) {
        // 0x4001461C: nop
    
            goto L_40014660;
    }
    // 0x4001461C: nop

    // 0x40014620: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x40014624: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x40014628: beq         $v0, $at, L_40014648
    if (ctx->r2 == ctx->r1) {
        // 0x4001462C: addiu       $at, $zero, 0x25
        ctx->r1 = ADD32(0, 0X25);
            goto L_40014648;
    }
    // 0x4001462C: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x40014630: beq         $v0, $at, L_40014648
    if (ctx->r2 == ctx->r1) {
        // 0x40014634: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_40014648;
    }
    // 0x40014634: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x40014638: beq         $v0, $at, L_40014658
    if (ctx->r2 == ctx->r1) {
        // 0x4001463C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40014658;
    }
    // 0x4001463C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40014640: b           L_40014660
    // 0x40014644: nop

        goto L_40014660;
    // 0x40014644: nop

L_40014648:
    // 0x40014648: jal         0x40016030
    // 0x4001464C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_16030(rdram, ctx);
        goto after_2;
    // 0x4001464C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x40014650: b           L_40014660
    // 0x40014654: nop

        goto L_40014660;
    // 0x40014654: nop

L_40014658:
    // 0x40014658: jal         0x40001A8C
    // 0x4001465C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_3;
    // 0x4001465C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
L_40014660:
    // 0x40014660: jal         0x4000D9FC
    // 0x40014664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_D9FC(rdram, ctx);
        goto after_4;
    // 0x40014664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x40014668: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001466C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x40014670: jr          $ra
    // 0x40014674: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x40014674: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_actor_main_14678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40014678: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x4001467C: jr          $ra
    // 0x40014680: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x40014680: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_actor_main_14684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40014684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40014688: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001468C: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x40014690: nop

    // 0x40014694: slti        $at, $v0, 0x20
    ctx->r1 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x40014698: bne         $at, $zero, L_400146F4
    if (ctx->r1 != 0) {
        // 0x4001469C: slti        $at, $v0, 0x2A
        ctx->r1 = SIGNED(ctx->r2) < 0X2A ? 1 : 0;
            goto L_400146F4;
    }
    // 0x4001469C: slti        $at, $v0, 0x2A
    ctx->r1 = SIGNED(ctx->r2) < 0X2A ? 1 : 0;
    // 0x400146A0: beq         $at, $zero, L_400146F8
    if (ctx->r1 == 0) {
        // 0x400146A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_400146F8;
    }
    // 0x400146A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400146A8: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x400146AC: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x400146B0: bne         $t6, $at, L_400146DC
    if (ctx->r14 != ctx->r1) {
        // 0x400146B4: sll         $t8, $v0, 2
        ctx->r24 = S32(ctx->r2 << 2);
            goto L_400146DC;
    }
    // 0x400146B4: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x400146B8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x400146BC: lui         $t9, 0x4002
    ctx->r25 = S32(0X4002 << 16);
    // 0x400146C0: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x400146C4: lw          $t9, -0x1D68($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1D68);
    // 0x400146C8: nop

    // 0x400146CC: jalr        $t9
    // 0x400146D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x400146D0: nop

    after_0:
    // 0x400146D4: b           L_400146F8
    // 0x400146D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_400146F8;
    // 0x400146D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400146DC:
    // 0x400146DC: lui         $t9, 0x4002
    ctx->r25 = S32(0X4002 << 16);
    // 0x400146E0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x400146E4: lw          $t9, -0x1D40($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1D40);
    // 0x400146E8: nop

    // 0x400146EC: jalr        $t9
    // 0x400146F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x400146F0: nop

    after_1:
L_400146F4:
    // 0x400146F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400146F8:
    // 0x400146F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x400146FC: jr          $ra
    // 0x40014700: nop

    return;
    // 0x40014700: nop

;}
RECOMP_FUNC void ovl_actor_main_14704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40014704: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x40014708: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001470C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x40014710: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x40014714: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x40014718: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x4001471C: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x40014720: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x40014724: jal         0x400006C4
    // 0x40014728: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40014728: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x4001472C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x40014730: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x40014734: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x40014738: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x4001473C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x40014740: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x40014744: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x40014748: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x4001474C: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x40014750: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x40014754: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x40014758: lw          $a0, 0x10($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X10);
    // 0x4001475C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x40014760: jal         0x400006C4
    // 0x40014764: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40014764: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x40014768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001476C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x40014770: jr          $ra
    // 0x40014774: nop

    return;
    // 0x40014774: nop

;}
RECOMP_FUNC void ovl_actor_main_14778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40014778: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x4001477C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x40014780: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x40014784: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40014788: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x4001478C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x40014790: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x40014794: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40014798: sw          $a1, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->r5;
    // 0x4001479C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x400147A0: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x400147A4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x400147A8: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x400147AC: jal         0x400006C4
    // 0x400147B0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x400147B0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x400147B4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x400147B8: jal         0x40008EF8
    // 0x400147BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x400147BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x400147C0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x400147C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400147C8: jal         0x40008EF8
    // 0x400147CC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_2;
    // 0x400147CC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_2:
    // 0x400147D0: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x400147D4: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x400147D8: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x400147DC: jal         0x400018BC
    // 0x400147E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_3;
    // 0x400147E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x400147E4: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x400147E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400147EC: beq         $t6, $zero, L_40014800
    if (ctx->r14 == 0) {
        // 0x400147F0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40014800;
    }
    // 0x400147F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400147F4: jal         0x40014704
    // 0x400147F8: addiu       $a1, $zero, 0x5B9
    ctx->r5 = ADD32(0, 0X5B9);
    ovl_actor_main_14704(rdram, ctx);
        goto after_4;
    // 0x400147F8: addiu       $a1, $zero, 0x5B9
    ctx->r5 = ADD32(0, 0X5B9);
    after_4:
    // 0x400147FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40014800:
    // 0x40014800: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x40014804: jr          $ra
    // 0x40014808: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x40014808: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_actor_main_1480C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001480C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40014810: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40014814: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x40014818: jal         0x4000A1B8
    // 0x4001481C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    ovl_actor_main_A1B8(rdram, ctx);
        goto after_0;
    // 0x4001481C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x40014820: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x40014824: jal         0x40009E78
    // 0x40014828: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_9E78(rdram, ctx);
        goto after_1;
    // 0x40014828: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x4001482C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x40014830: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x40014834: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x40014838: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x4001483C: nop

    // 0x40014840: bc1f        L_40014854
    if (!c1cs) {
        // 0x40014844: lw          $t6, 0x2C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X2C);
            goto L_40014854;
    }
    // 0x40014844: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x40014848: jal         0x40001A8C
    // 0x4001484C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_2;
    // 0x4001484C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x40014850: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
L_40014854:
    // 0x40014854: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40014858: bne         $t6, $at, L_4001487C
    if (ctx->r14 != ctx->r1) {
        // 0x4001485C: addiu       $a1, $zero, 0x59F
        ctx->r5 = ADD32(0, 0X59F);
            goto L_4001487C;
    }
    // 0x4001485C: addiu       $a1, $zero, 0x59F
    ctx->r5 = ADD32(0, 0X59F);
    // 0x40014860: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x40014864: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x40014868: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x4001486C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40014870: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40014874: jal         0x40014778
    // 0x40014878: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_actor_main_14778(rdram, ctx);
        goto after_3;
    // 0x40014878: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
L_4001487C:
    // 0x4001487C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40014880: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x40014884: jr          $ra
    // 0x40014888: nop

    return;
    // 0x40014888: nop

;}
RECOMP_FUNC void ovl_actor_main_1488C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001488C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40014890: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x40014894: bne         $a1, $at, L_400148BC
    if (ctx->r5 != ctx->r1) {
        // 0x40014898: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_400148BC;
    }
    // 0x40014898: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x4001489C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x400148A0: lwc1        $f6, 0x30($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X30);
    // 0x400148A4: nop

    // 0x400148A8: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x400148AC: nop

    // 0x400148B0: bc1f        L_400148BC
    if (!c1cs) {
        // 0x400148B4: nop
    
            goto L_400148BC;
    }
    // 0x400148B4: nop

    // 0x400148B8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_400148BC:
    // 0x400148BC: jr          $ra
    // 0x400148C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x400148C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_148C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400148C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x400148C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400148CC: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x400148D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x400148D4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x400148D8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x400148DC: jal         0x40015CE4
    // 0x400148E0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    ovl_actor_main_15CE4(rdram, ctx);
        goto after_0;
    // 0x400148E0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x400148E4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x400148E8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x400148EC: beq         $v0, $zero, L_40014908
    if (ctx->r2 == 0) {
        // 0x400148F0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_40014908;
    }
    // 0x400148F0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x400148F4: bne         $a1, $at, L_40014900
    if (ctx->r5 != ctx->r1) {
        // 0x400148F8: nop
    
            goto L_40014900;
    }
    // 0x400148F8: nop

    // 0x400148FC: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_40014900:
    // 0x40014900: b           L_40014918
    // 0x40014904: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_40014918;
    // 0x40014904: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_40014908:
    // 0x40014908: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4001490C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x40014910: jal         0x4000D9A4
    // 0x40014914: nop

    ovl_actor_main_D9A4(rdram, ctx);
        goto after_1;
    // 0x40014914: nop

    after_1:
L_40014918:
    // 0x40014918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001491C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40014920: jr          $ra
    // 0x40014924: nop

    return;
    // 0x40014924: nop

;}
RECOMP_FUNC void ovl_actor_main_14928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40014928: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001492C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40014930: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x40014934: jal         0x400123E8
    // 0x40014938: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_123E8(rdram, ctx);
        goto after_0;
    // 0x40014938: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x4001493C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40014940: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x40014944: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x40014948: nop

    // 0x4001494C: beq         $v0, $at, L_40014990
    if (ctx->r2 == ctx->r1) {
        // 0x40014950: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_40014990;
    }
    // 0x40014950: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x40014954: beq         $v0, $at, L_40014974
    if (ctx->r2 == ctx->r1) {
        // 0x40014958: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_40014974;
    }
    // 0x40014958: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x4001495C: beq         $v0, $at, L_40014974
    if (ctx->r2 == ctx->r1) {
        // 0x40014960: addiu       $at, $zero, 0x2B
        ctx->r1 = ADD32(0, 0X2B);
            goto L_40014974;
    }
    // 0x40014960: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x40014964: beq         $v0, $at, L_40014990
    if (ctx->r2 == ctx->r1) {
        // 0x40014968: nop
    
            goto L_40014990;
    }
    // 0x40014968: nop

    // 0x4001496C: b           L_4001499C
    // 0x40014970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001499C;
    // 0x40014970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40014974:
    // 0x40014974: jal         0x40016030
    // 0x40014978: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_16030(rdram, ctx);
        goto after_1;
    // 0x40014978: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x4001497C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40014980: jal         0x400093E4
    // 0x40014984: nop

    ovl_actor_main_93E4(rdram, ctx);
        goto after_2;
    // 0x40014984: nop

    after_2:
    // 0x40014988: b           L_4001499C
    // 0x4001498C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001499C;
    // 0x4001498C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40014990:
    // 0x40014990: jal         0x40016030
    // 0x40014994: nop

    ovl_actor_main_16030(rdram, ctx);
        goto after_3;
    // 0x40014994: nop

    after_3:
    // 0x40014998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001499C:
    // 0x4001499C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x400149A0: jr          $ra
    // 0x400149A4: nop

    return;
    // 0x400149A4: nop

;}
RECOMP_FUNC void ovl_actor_main_149A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400149A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x400149AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x400149B0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x400149B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x400149B8: jal         0x400123E8
    // 0x400149BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_123E8(rdram, ctx);
        goto after_0;
    // 0x400149BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x400149C0: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x400149C4: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x400149C8: beq         $v0, $at, L_40014A00
    if (ctx->r2 == ctx->r1) {
        // 0x400149CC: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_40014A00;
    }
    // 0x400149CC: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x400149D0: beq         $v0, $at, L_40014A00
    if (ctx->r2 == ctx->r1) {
        // 0x400149D4: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_40014A00;
    }
    // 0x400149D4: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x400149D8: beq         $v0, $at, L_40014A10
    if (ctx->r2 == ctx->r1) {
        // 0x400149DC: addiu       $at, $zero, 0x2B
        ctx->r1 = ADD32(0, 0X2B);
            goto L_40014A10;
    }
    // 0x400149DC: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x400149E0: bne         $v0, $at, L_40014A38
    if (ctx->r2 != ctx->r1) {
        // 0x400149E4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_40014A38;
    }
    // 0x400149E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x400149E8: jal         0x40016050
    // 0x400149EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_16050(rdram, ctx);
        goto after_1;
    // 0x400149EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x400149F0: jal         0x40008F98
    // 0x400149F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_8F98(rdram, ctx);
        goto after_2;
    // 0x400149F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x400149F8: b           L_40014A38
    // 0x400149FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40014A38;
    // 0x400149FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40014A00:
    // 0x40014A00: jal         0x40016050
    // 0x40014A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_16050(rdram, ctx);
        goto after_3;
    // 0x40014A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x40014A08: b           L_40014A38
    // 0x40014A0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40014A38;
    // 0x40014A0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40014A10:
    // 0x40014A10: jal         0x40016050
    // 0x40014A14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_16050(rdram, ctx);
        goto after_4;
    // 0x40014A14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x40014A18: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40014A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40014A20: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40014A24: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x40014A28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x40014A2C: jal         0x40006EEC
    // 0x40014A30: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_6EEC(rdram, ctx);
        goto after_5;
    // 0x40014A30: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x40014A34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40014A38:
    // 0x40014A38: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x40014A3C: jr          $ra
    // 0x40014A40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x40014A40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_14A44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40014A44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40014A48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40014A4C: bne         $a1, $at, L_40014A70
    if (ctx->r5 != ctx->r1) {
        // 0x40014A50: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40014A70;
    }
    // 0x40014A50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40014A54: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40014A58: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x40014A5C: addiu       $a1, $zero, 0x599
    ctx->r5 = ADD32(0, 0X599);
    // 0x40014A60: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40014A64: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40014A68: jal         0x40014778
    // 0x40014A6C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_actor_main_14778(rdram, ctx);
        goto after_0;
    // 0x40014A6C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
L_40014A70:
    // 0x40014A70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40014A74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40014A78: jr          $ra
    // 0x40014A7C: nop

    return;
    // 0x40014A7C: nop

;}
RECOMP_FUNC void ovl_actor_main_14A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40014A80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40014A84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40014A88: bne         $a1, $at, L_40014AA8
    if (ctx->r5 != ctx->r1) {
        // 0x40014A8C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40014AA8;
    }
    // 0x40014A8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40014A90: addiu       $a1, $zero, 0x59B
    ctx->r5 = ADD32(0, 0X59B);
    // 0x40014A94: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40014A98: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40014A9C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x40014AA0: jal         0x40014778
    // 0x40014AA4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_actor_main_14778(rdram, ctx);
        goto after_0;
    // 0x40014AA4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
L_40014AA8:
    // 0x40014AA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40014AAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40014AB0: jr          $ra
    // 0x40014AB4: nop

    return;
    // 0x40014AB4: nop

;}
RECOMP_FUNC void ovl_actor_main_14AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40014AB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40014ABC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40014AC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40014AC4: bne         $a1, $at, L_40014AF4
    if (ctx->r5 != ctx->r1) {
        // 0x40014AC8: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_40014AF4;
    }
    // 0x40014AC8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x40014ACC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40014AD0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x40014AD4: addiu       $a1, $zero, 0x59D
    ctx->r5 = ADD32(0, 0X59D);
    // 0x40014AD8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40014ADC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40014AE0: jal         0x40014778
    // 0x40014AE4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_actor_main_14778(rdram, ctx);
        goto after_0;
    // 0x40014AE4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x40014AE8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40014AEC: jal         0x40008EF8
    // 0x40014AF0: addiu       $a1, $zero, 0x5BA
    ctx->r5 = ADD32(0, 0X5BA);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x40014AF0: addiu       $a1, $zero, 0x5BA
    ctx->r5 = ADD32(0, 0X5BA);
    after_1:
L_40014AF4:
    // 0x40014AF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40014AF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40014AFC: jr          $ra
    // 0x40014B00: nop

    return;
    // 0x40014B00: nop

;}
RECOMP_FUNC void ovl_actor_main_14B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40014B04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40014B08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40014B0C: bne         $a1, $at, L_40014B2C
    if (ctx->r5 != ctx->r1) {
        // 0x40014B10: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40014B2C;
    }
    // 0x40014B10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40014B14: addiu       $a1, $zero, 0x5A1
    ctx->r5 = ADD32(0, 0X5A1);
    // 0x40014B18: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40014B1C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40014B20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x40014B24: jal         0x40014778
    // 0x40014B28: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_actor_main_14778(rdram, ctx);
        goto after_0;
    // 0x40014B28: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
L_40014B2C:
    // 0x40014B2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40014B30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40014B34: jr          $ra
    // 0x40014B38: nop

    return;
    // 0x40014B38: nop

;}
RECOMP_FUNC void ovl_actor_main_14B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40014B3C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40014B40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40014B44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40014B48: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x40014B4C: bne         $a1, $at, L_40014B80
    if (ctx->r5 != ctx->r1) {
        // 0x40014B50: sw          $a1, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r5;
            goto L_40014B80;
    }
    // 0x40014B50: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x40014B54: addiu       $a1, $zero, 0x5A3
    ctx->r5 = ADD32(0, 0X5A3);
    // 0x40014B58: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40014B5C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40014B60: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x40014B64: jal         0x40014778
    // 0x40014B68: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_actor_main_14778(rdram, ctx);
        goto after_0;
    // 0x40014B68: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x40014B6C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40014B70: lwc1        $f4, -0xFE0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0XFE0);
    // 0x40014B74: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x40014B78: nop

    // 0x40014B7C: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
L_40014B80:
    // 0x40014B80: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x40014B84: nop

    // 0x40014B88: slti        $at, $t8, 0x7
    ctx->r1 = SIGNED(ctx->r24) < 0X7 ? 1 : 0;
    // 0x40014B8C: bne         $at, $zero, L_40014BF8
    if (ctx->r1 != 0) {
        // 0x40014B90: slti        $at, $t8, 0x1A
        ctx->r1 = SIGNED(ctx->r24) < 0X1A ? 1 : 0;
            goto L_40014BF8;
    }
    // 0x40014B90: slti        $at, $t8, 0x1A
    ctx->r1 = SIGNED(ctx->r24) < 0X1A ? 1 : 0;
    // 0x40014B94: beq         $at, $zero, L_40014BFC
    if (ctx->r1 == 0) {
        // 0x40014B98: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40014BFC;
    }
    // 0x40014B98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40014B9C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x40014BA0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x40014BA4: lw          $a0, 0x10($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X10);
    // 0x40014BA8: jal         0x400006C4
    // 0x40014BAC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40014BAC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x40014BB0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x40014BB4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x40014BB8: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40014BBC: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x40014BC0: lwc1        $f6, -0xFDC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0XFDC);
    // 0x40014BC4: nop

    // 0x40014BC8: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x40014BCC: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x40014BD0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x40014BD4: bc1f        L_40014BE8
    if (!c1cs) {
        // 0x40014BD8: lw          $t0, 0x38($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X38);
            goto L_40014BE8;
    }
    // 0x40014BD8: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x40014BDC: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x40014BE0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x40014BE4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
L_40014BE8:
    // 0x40014BE8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x40014BEC: lw          $a0, 0x10($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X10);
    // 0x40014BF0: jal         0x400006C4
    // 0x40014BF4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_2;
    // 0x40014BF4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
L_40014BF8:
    // 0x40014BF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40014BFC:
    // 0x40014BFC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x40014C00: jr          $ra
    // 0x40014C04: nop

    return;
    // 0x40014C04: nop

;}
RECOMP_FUNC void ovl_actor_main_14C08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40014C08: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x40014C0C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x40014C10: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x40014C14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40014C18: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40014C1C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x40014C20: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x40014C24: beq         $a1, $at, L_40014C58
    if (ctx->r5 == ctx->r1) {
        // 0x40014C28: sw          $s1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r17;
            goto L_40014C58;
    }
    // 0x40014C28: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x40014C2C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x40014C30: beq         $a1, $at, L_40014CF8
    if (ctx->r5 == ctx->r1) {
        // 0x40014C34: lui         $a3, 0x3F80
        ctx->r7 = S32(0X3F80 << 16);
            goto L_40014CF8;
    }
    // 0x40014C34: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40014C38: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x40014C3C: beq         $a1, $at, L_40014D3C
    if (ctx->r5 == ctx->r1) {
        // 0x40014C40: lui         $a3, 0x4248
        ctx->r7 = S32(0X4248 << 16);
            goto L_40014D3C;
    }
    // 0x40014C40: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x40014C44: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x40014C48: beq         $a1, $at, L_40014D74
    if (ctx->r5 == ctx->r1) {
        // 0x40014C4C: nop
    
            goto L_40014D74;
    }
    // 0x40014C4C: nop

    // 0x40014C50: b           L_40014D80
    // 0x40014C54: addiu       $s1, $a0, 0x324
    ctx->r17 = ADD32(ctx->r4, 0X324);
        goto L_40014D80;
    // 0x40014C54: addiu       $s1, $a0, 0x324
    ctx->r17 = ADD32(ctx->r4, 0X324);
L_40014C58:
    // 0x40014C58: addiu       $s1, $s0, 0x324
    ctx->r17 = ADD32(ctx->r16, 0X324);
    // 0x40014C5C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x40014C60: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    // 0x40014C64: jal         0x40011D40
    // 0x40014C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11D40(rdram, ctx);
        goto after_0;
    // 0x40014C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x40014C6C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40014C70: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40014C74: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40014C78: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x40014C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40014C80: addiu       $a1, $zero, 0x5A7
    ctx->r5 = ADD32(0, 0X5A7);
    // 0x40014C84: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40014C88: jal         0x40014778
    // 0x40014C8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_14778(rdram, ctx);
        goto after_1;
    // 0x40014C8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x40014C90: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x40014C94: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x40014C98: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x40014C9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x40014CA0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x40014CA4: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    // 0x40014CA8: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x40014CAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x40014CB0: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x40014CB4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40014CB8: swc1        $f8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f8.u32l;
    // 0x40014CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40014CC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x40014CC4: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    // 0x40014CC8: jal         0x40006EEC
    // 0x40014CCC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    ovl_actor_main_6EEC(rdram, ctx);
        goto after_2;
    // 0x40014CCC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x40014CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40014CD4: addiu       $a1, $zero, 0x233
    ctx->r5 = ADD32(0, 0X233);
    // 0x40014CD8: jal         0x4000115C
    // 0x40014CDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_3;
    // 0x40014CDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x40014CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40014CE4: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x40014CE8: jal         0x40009000
    // 0x40014CEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_4;
    // 0x40014CEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x40014CF0: b           L_40014D84
    // 0x40014CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_40014D84;
    // 0x40014CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_40014CF8:
    // 0x40014CF8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40014CFC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x40014D00: swc1        $f0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f0.u32l;
    // 0x40014D04: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40014D08: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x40014D0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x40014D10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40014D14: jal         0x40014778
    // 0x40014D18: addiu       $a1, $zero, 0x5AF
    ctx->r5 = ADD32(0, 0X5AF);
    ovl_actor_main_14778(rdram, ctx);
        goto after_5;
    // 0x40014D18: addiu       $a1, $zero, 0x5AF
    ctx->r5 = ADD32(0, 0X5AF);
    after_5:
    // 0x40014D1C: jal         0x40008F98
    // 0x40014D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_8F98(rdram, ctx);
        goto after_6;
    // 0x40014D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x40014D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40014D28: addiu       $a1, $zero, 0x3DE
    ctx->r5 = ADD32(0, 0X3DE);
    // 0x40014D2C: jal         0x4000115C
    // 0x40014D30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_7;
    // 0x40014D30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x40014D34: b           L_40014D80
    // 0x40014D38: addiu       $s1, $s0, 0x324
    ctx->r17 = ADD32(ctx->r16, 0X324);
        goto L_40014D80;
    // 0x40014D38: addiu       $s1, $s0, 0x324
    ctx->r17 = ADD32(ctx->r16, 0X324);
L_40014D3C:
    // 0x40014D3C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40014D40: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40014D44: lwc1        $f16, -0xFD8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0XFD8);
    // 0x40014D48: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40014D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40014D50: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x40014D54: jal         0x4000120C
    // 0x40014D58: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_8;
    // 0x40014D58: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x40014D5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40014D60: addiu       $a1, $zero, 0x2E4
    ctx->r5 = ADD32(0, 0X2E4);
    // 0x40014D64: jal         0x4000115C
    // 0x40014D68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_9;
    // 0x40014D68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x40014D6C: b           L_40014D80
    // 0x40014D70: addiu       $s1, $s0, 0x324
    ctx->r17 = ADD32(ctx->r16, 0X324);
        goto L_40014D80;
    // 0x40014D70: addiu       $s1, $s0, 0x324
    ctx->r17 = ADD32(ctx->r16, 0X324);
L_40014D74:
    // 0x40014D74: jal         0x4000CB84
    // 0x40014D78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_10;
    // 0x40014D78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x40014D7C: addiu       $s1, $s0, 0x324
    ctx->r17 = ADD32(ctx->r16, 0X324);
L_40014D80:
    // 0x40014D80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_40014D84:
    // 0x40014D84: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x40014D88: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x40014D8C: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x40014D90: jal         0x40011BE4
    // 0x40014D94: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    ovl_actor_main_11BE4(rdram, ctx);
        goto after_11;
    // 0x40014D94: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_11:
    // 0x40014D98: slti        $at, $s2, 0x3
    ctx->r1 = SIGNED(ctx->r18) < 0X3 ? 1 : 0;
    // 0x40014D9C: beq         $at, $zero, L_40014DB0
    if (ctx->r1 == 0) {
        // 0x40014DA0: slti        $at, $s2, 0xA
        ctx->r1 = SIGNED(ctx->r18) < 0XA ? 1 : 0;
            goto L_40014DB0;
    }
    // 0x40014DA0: slti        $at, $s2, 0xA
    ctx->r1 = SIGNED(ctx->r18) < 0XA ? 1 : 0;
    // 0x40014DA4: jal         0x40011E8C
    // 0x40014DA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11E8C(rdram, ctx);
        goto after_12;
    // 0x40014DA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x40014DAC: slti        $at, $s2, 0xA
    ctx->r1 = SIGNED(ctx->r18) < 0XA ? 1 : 0;
L_40014DB0:
    // 0x40014DB0: bne         $at, $zero, L_40014DC8
    if (ctx->r1 != 0) {
        // 0x40014DB4: slti        $at, $s2, 0x10
        ctx->r1 = SIGNED(ctx->r18) < 0X10 ? 1 : 0;
            goto L_40014DC8;
    }
    // 0x40014DB4: slti        $at, $s2, 0x10
    ctx->r1 = SIGNED(ctx->r18) < 0X10 ? 1 : 0;
    // 0x40014DB8: beq         $at, $zero, L_40014DC8
    if (ctx->r1 == 0) {
        // 0x40014DBC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40014DC8;
    }
    // 0x40014DBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40014DC0: jal         0x40011F94
    // 0x40014DC4: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    ovl_actor_main_11F94(rdram, ctx);
        goto after_13;
    // 0x40014DC4: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_13:
L_40014DC8:
    // 0x40014DC8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x40014DCC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x40014DD0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x40014DD4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x40014DD8: jr          $ra
    // 0x40014DDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x40014DDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_actor_main_14DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40014DE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40014DE4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40014DE8: beq         $a1, $at, L_40014E04
    if (ctx->r5 == ctx->r1) {
        // 0x40014DEC: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40014E04;
    }
    // 0x40014DEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40014DF0: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x40014DF4: beq         $a1, $at, L_40014E28
    if (ctx->r5 == ctx->r1) {
        // 0x40014DF8: nop
    
            goto L_40014E28;
    }
    // 0x40014DF8: nop

    // 0x40014DFC: b           L_40014E34
    // 0x40014E00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40014E34;
    // 0x40014E00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40014E04:
    // 0x40014E04: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40014E08: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x40014E0C: addiu       $a1, $zero, 0x5AB
    ctx->r5 = ADD32(0, 0X5AB);
    // 0x40014E10: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40014E14: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40014E18: jal         0x40014778
    // 0x40014E1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_14778(rdram, ctx);
        goto after_0;
    // 0x40014E1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40014E20: b           L_40014E34
    // 0x40014E24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40014E34;
    // 0x40014E24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40014E28:
    // 0x40014E28: jal         0x4000CB84
    // 0x40014E2C: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_1;
    // 0x40014E2C: nop

    after_1:
    // 0x40014E30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40014E34:
    // 0x40014E34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40014E38: jr          $ra
    // 0x40014E3C: nop

    return;
    // 0x40014E3C: nop

;}
RECOMP_FUNC void ovl_actor_main_14E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40014E40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40014E44: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x40014E48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40014E4C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x40014E50: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40014E54: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x40014E58: beq         $a1, $at, L_40014E80
    if (ctx->r5 == ctx->r1) {
        // 0x40014E5C: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_40014E80;
    }
    // 0x40014E5C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x40014E60: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x40014E64: beq         $a1, $at, L_40014EDC
    if (ctx->r5 == ctx->r1) {
        // 0x40014E68: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_40014EDC;
    }
    // 0x40014E68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x40014E6C: addiu       $at, $zero, 0x36
    ctx->r1 = ADD32(0, 0X36);
    // 0x40014E70: beq         $a1, $at, L_40014F64
    if (ctx->r5 == ctx->r1) {
        // 0x40014E74: nop
    
            goto L_40014F64;
    }
    // 0x40014E74: nop

    // 0x40014E78: b           L_40014F70
    // 0x40014E7C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_40014F70;
    // 0x40014E7C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_40014E80:
    // 0x40014E80: addiu       $s0, $s1, 0x324
    ctx->r16 = ADD32(ctx->r17, 0X324);
    // 0x40014E84: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x40014E88: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x40014E8C: jal         0x40011D40
    // 0x40014E90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_11D40(rdram, ctx);
        goto after_0;
    // 0x40014E90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x40014E94: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x40014E98: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x40014E9C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40014EA0: addiu       $a1, $zero, 0x5AD
    ctx->r5 = ADD32(0, 0X5AD);
    // 0x40014EA4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40014EA8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40014EAC: jal         0x40014778
    // 0x40014EB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_14778(rdram, ctx);
        goto after_1;
    // 0x40014EB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x40014EB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40014EB8: addiu       $a1, $zero, 0x3DE
    ctx->r5 = ADD32(0, 0X3DE);
    // 0x40014EBC: jal         0x4000115C
    // 0x40014EC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_2;
    // 0x40014EC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x40014EC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40014EC8: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x40014ECC: jal         0x40009000
    // 0x40014ED0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_3;
    // 0x40014ED0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x40014ED4: b           L_40014F70
    // 0x40014ED8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_40014F70;
    // 0x40014ED8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_40014EDC:
    // 0x40014EDC: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x40014EE0: jal         0x40000CA0
    // 0x40014EE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_4;
    // 0x40014EE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x40014EE8: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40014EEC: lwc1        $f4, -0xFD4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0XFD4);
    // 0x40014EF0: addiu       $s0, $s1, 0x324
    ctx->r16 = ADD32(ctx->r17, 0X324);
    // 0x40014EF4: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x40014EF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40014EFC: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    // 0x40014F00: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x40014F04: jal         0x4000120C
    // 0x40014F08: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_5;
    // 0x40014F08: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x40014F0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40014F10: addiu       $a1, $zero, 0x2E2
    ctx->r5 = ADD32(0, 0X2E2);
    // 0x40014F14: jal         0x4000115C
    // 0x40014F18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_6;
    // 0x40014F18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x40014F1C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x40014F20: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x40014F24: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x40014F28: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40014F2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x40014F30: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    // 0x40014F34: jal         0x40006EB8
    // 0x40014F38: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_7;
    // 0x40014F38: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x40014F3C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40014F40: lwc1        $f8, -0xFD0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0XFD0);
    // 0x40014F44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40014F48: addiu       $a1, $zero, 0x85
    ctx->r5 = ADD32(0, 0X85);
    // 0x40014F4C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x40014F50: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x40014F54: jal         0x4000120C
    // 0x40014F58: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_8;
    // 0x40014F58: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x40014F5C: b           L_40014F70
    // 0x40014F60: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_40014F70;
    // 0x40014F60: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_40014F64:
    // 0x40014F64: jal         0x4000CB84
    // 0x40014F68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_9;
    // 0x40014F68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x40014F6C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_40014F70:
    // 0x40014F70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40014F74: slti        $at, $t8, 0x17
    ctx->r1 = SIGNED(ctx->r24) < 0X17 ? 1 : 0;
    // 0x40014F78: bne         $at, $zero, L_40014F94
    if (ctx->r1 != 0) {
        // 0x40014F7C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_40014F94;
    }
    // 0x40014F7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40014F80: jal         0x40011F94
    // 0x40014F84: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    ovl_actor_main_11F94(rdram, ctx);
        goto after_10;
    // 0x40014F84: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_10:
    // 0x40014F88: jal         0x40011E8C
    // 0x40014F8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_11E8C(rdram, ctx);
        goto after_11;
    // 0x40014F8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x40014F90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40014F94:
    // 0x40014F94: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x40014F98: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x40014F9C: jr          $ra
    // 0x40014FA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x40014FA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_14FA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40014FA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40014FA8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40014FAC: bne         $a1, $at, L_40014FD0
    if (ctx->r5 != ctx->r1) {
        // 0x40014FB0: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40014FD0;
    }
    // 0x40014FB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40014FB4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40014FB8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x40014FBC: addiu       $a1, $zero, 0x5AF
    ctx->r5 = ADD32(0, 0X5AF);
    // 0x40014FC0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40014FC4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40014FC8: jal         0x40014778
    // 0x40014FCC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_14778(rdram, ctx);
        goto after_0;
    // 0x40014FCC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_40014FD0:
    // 0x40014FD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40014FD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40014FD8: jr          $ra
    // 0x40014FDC: nop

    return;
    // 0x40014FDC: nop

;}
RECOMP_FUNC void ovl_actor_main_14FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40014FE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40014FE4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40014FE8: bne         $a1, $at, L_4001500C
    if (ctx->r5 != ctx->r1) {
        // 0x40014FEC: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_4001500C;
    }
    // 0x40014FEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40014FF0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40014FF4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x40014FF8: addiu       $a1, $zero, 0x5B1
    ctx->r5 = ADD32(0, 0X5B1);
    // 0x40014FFC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40015000: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40015004: jal         0x40014778
    // 0x40015008: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_14778(rdram, ctx);
        goto after_0;
    // 0x40015008: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_4001500C:
    // 0x4001500C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40015010: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40015014: jr          $ra
    // 0x40015018: nop

    return;
    // 0x40015018: nop

;}
RECOMP_FUNC void ovl_actor_main_1501C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001501C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40015020: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40015024: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x40015028: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x4001502C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x40015030: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x40015034: jal         0x40000DE4
    // 0x40015038: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_actor_main_DE4(rdram, ctx);
        goto after_0;
    // 0x40015038: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x4001503C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x40015040: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x40015044: jal         0x400006C4
    // 0x40015048: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40015048: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x4001504C: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x40015050: jal         0x4000031C
    // 0x40015054: nop

    ovl_actor_main_31C(rdram, ctx);
        goto after_2;
    // 0x40015054: nop

    after_2:
    // 0x40015058: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x4001505C: jal         0x40000310
    // 0x40015060: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_310(rdram, ctx);
        goto after_3;
    // 0x40015060: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x40015064: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x40015068: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x4001506C: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x40015070: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x40015074: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x40015078: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x4001507C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x40015080: swc1        $f18, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f18.u32l;
    // 0x40015084: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x40015088: jal         0x40000310
    // 0x4001508C: nop

    ovl_actor_main_310(rdram, ctx);
        goto after_4;
    // 0x4001508C: nop

    after_4:
    // 0x40015090: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x40015094: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x40015098: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x4001509C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x400150A0: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x400150A4: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x400150A8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x400150AC: add.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x400150B0: swc1        $f18, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f18.u32l;
    // 0x400150B4: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x400150B8: jal         0x4000031C
    // 0x400150BC: nop

    ovl_actor_main_31C(rdram, ctx);
        goto after_5;
    // 0x400150BC: nop

    after_5:
    // 0x400150C0: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x400150C4: jal         0x4000031C
    // 0x400150C8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_31C(rdram, ctx);
        goto after_6;
    // 0x400150C8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x400150CC: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x400150D0: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x400150D4: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x400150D8: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x400150DC: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x400150E0: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x400150E4: add.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x400150E8: swc1        $f18, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f18.u32l;
    // 0x400150EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400150F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x400150F4: jr          $ra
    // 0x400150F8: nop

    return;
    // 0x400150F8: nop

;}
RECOMP_FUNC void ovl_actor_main_150FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400150FC: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x40015100: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x40015104: slti        $at, $a1, 0x4D
    ctx->r1 = SIGNED(ctx->r5) < 0X4D ? 1 : 0;
    // 0x40015108: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x4001510C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x40015110: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x40015114: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x40015118: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x4001511C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x40015120: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x40015124: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x40015128: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x4001512C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x40015130: bne         $at, $zero, L_4001517C
    if (ctx->r1 != 0) {
        // 0x40015134: sw          $a1, 0x7C($sp)
        MEM_W(0X7C, ctx->r29) = ctx->r5;
            goto L_4001517C;
    }
    // 0x40015134: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x40015138: addiu       $at, $zero, 0xA7
    ctx->r1 = ADD32(0, 0XA7);
    // 0x4001513C: beq         $a1, $at, L_40015350
    if (ctx->r5 == ctx->r1) {
        // 0x40015140: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_40015350;
    }
    // 0x40015140: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x40015144: addiu       $at, $zero, 0xC0
    ctx->r1 = ADD32(0, 0XC0);
    // 0x40015148: beq         $a1, $at, L_40015378
    if (ctx->r5 == ctx->r1) {
        // 0x4001514C: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_40015378;
    }
    // 0x4001514C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x40015150: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    // 0x40015154: beq         $a1, $at, L_40015390
    if (ctx->r5 == ctx->r1) {
        // 0x40015158: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_40015390;
    }
    // 0x40015158: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x4001515C: addiu       $at, $zero, 0xD7
    ctx->r1 = ADD32(0, 0XD7);
    // 0x40015160: beq         $a1, $at, L_400153A8
    if (ctx->r5 == ctx->r1) {
        // 0x40015164: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_400153A8;
    }
    // 0x40015164: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x40015168: addiu       $at, $zero, 0xF1
    ctx->r1 = ADD32(0, 0XF1);
    // 0x4001516C: beq         $a1, $at, L_400153C0
    if (ctx->r5 == ctx->r1) {
        // 0x40015170: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_400153C0;
    }
    // 0x40015170: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x40015174: b           L_400153DC
    // 0x40015178: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_400153DC;
    // 0x40015178: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_4001517C:
    // 0x4001517C: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x40015180: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40015184: beq         $t7, $at, L_400151C4
    if (ctx->r15 == ctx->r1) {
        // 0x40015188: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_400151C4;
    }
    // 0x40015188: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x4001518C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x40015190: beq         $t7, $at, L_40015200
    if (ctx->r15 == ctx->r1) {
        // 0x40015194: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_40015200;
    }
    // 0x40015194: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x40015198: addiu       $at, $zero, 0x3F
    ctx->r1 = ADD32(0, 0X3F);
    // 0x4001519C: beq         $t7, $at, L_40015240
    if (ctx->r15 == ctx->r1) {
        // 0x400151A0: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_40015240;
    }
    // 0x400151A0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x400151A4: addiu       $at, $zero, 0x41
    ctx->r1 = ADD32(0, 0X41);
    // 0x400151A8: beq         $t7, $at, L_400152C8
    if (ctx->r15 == ctx->r1) {
        // 0x400151AC: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_400152C8;
    }
    // 0x400151AC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x400151B0: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    // 0x400151B4: beq         $t7, $at, L_4001532C
    if (ctx->r15 == ctx->r1) {
        // 0x400151B8: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_4001532C;
    }
    // 0x400151B8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x400151BC: b           L_400153DC
    // 0x400151C0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_400153DC;
    // 0x400151C0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_400151C4:
    // 0x400151C4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x400151C8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x400151CC: addiu       $a1, $zero, 0x5B1
    ctx->r5 = ADD32(0, 0X5B1);
    // 0x400151D0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400151D4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400151D8: jal         0x40014778
    // 0x400151DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_14778(rdram, ctx);
        goto after_0;
    // 0x400151DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x400151E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x400151E4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x400151E8: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x400151EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x400151F0: jal         0x40009000
    // 0x400151F4: swc1        $f4, 0x40($s6)
    MEM_W(0X40, ctx->r22) = ctx->f4.u32l;
    ovl_actor_main_9000(rdram, ctx);
        goto after_1;
    // 0x400151F4: swc1        $f4, 0x40($s6)
    MEM_W(0X40, ctx->r22) = ctx->f4.u32l;
    after_1:
    // 0x400151F8: b           L_400153DC
    // 0x400151FC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_400153DC;
    // 0x400151FC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_40015200:
    // 0x40015200: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40015204: lwc1        $f6, -0xFCC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0XFCC);
    // 0x40015208: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001520C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40015210: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x40015214: jal         0x4000120C
    // 0x40015218: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_2;
    // 0x40015218: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x4001521C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x40015220: addiu       $a1, $zero, 0x2E8
    ctx->r5 = ADD32(0, 0X2E8);
    // 0x40015224: jal         0x4000115C
    // 0x40015228: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_3;
    // 0x40015228: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x4001522C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x40015230: jal         0x40000E20
    // 0x40015234: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    ovl_actor_main_E20(rdram, ctx);
        goto after_4;
    // 0x40015234: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_4:
    // 0x40015238: b           L_400153DC
    // 0x4001523C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_400153DC;
    // 0x4001523C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_40015240:
    // 0x40015240: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x40015244: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x40015248: addiu       $a1, $zero, 0x5A7
    ctx->r5 = ADD32(0, 0X5A7);
    // 0x4001524C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40015250: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40015254: jal         0x40014778
    // 0x40015258: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_14778(rdram, ctx);
        goto after_5;
    // 0x40015258: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x4001525C: addiu       $s5, $s6, 0x324
    ctx->r21 = ADD32(ctx->r22, 0X324);
    // 0x40015260: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x40015264: addiu       $a2, $s5, 0x4
    ctx->r6 = ADD32(ctx->r21, 0X4);
    // 0x40015268: jal         0x40011D40
    // 0x4001526C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    ovl_actor_main_11D40(rdram, ctx);
        goto after_6;
    // 0x4001526C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_6:
    // 0x40015270: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x40015274: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x40015278: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x4001527C: swc1        $f8, 0x40($s6)
    MEM_W(0X40, ctx->r22) = ctx->f8.u32l;
    // 0x40015280: lwc1        $f10, 0x0($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X0);
    // 0x40015284: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x40015288: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4001528C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x40015290: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x40015294: swc1        $f18, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f18.u32l;
    // 0x40015298: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x4001529C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x400152A0: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x400152A4: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x400152A8: jal         0x40006EEC
    // 0x400152AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EEC(rdram, ctx);
        goto after_7;
    // 0x400152AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x400152B0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x400152B4: addiu       $a1, $zero, 0x233
    ctx->r5 = ADD32(0, 0X233);
    // 0x400152B8: jal         0x4000115C
    // 0x400152BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_8;
    // 0x400152BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x400152C0: b           L_400153DC
    // 0x400152C4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_400153DC;
    // 0x400152C4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_400152C8:
    // 0x400152C8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x400152CC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x400152D0: jal         0x40011F94
    // 0x400152D4: swc1        $f6, 0x40($s6)
    MEM_W(0X40, ctx->r22) = ctx->f6.u32l;
    ovl_actor_main_11F94(rdram, ctx);
        goto after_9;
    // 0x400152D4: swc1        $f6, 0x40($s6)
    MEM_W(0X40, ctx->r22) = ctx->f6.u32l;
    after_9:
    // 0x400152D8: beq         $v0, $zero, L_4001531C
    if (ctx->r2 == 0) {
        // 0x400152DC: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_4001531C;
    }
    // 0x400152DC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x400152E0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x400152E4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x400152E8: addiu       $a1, $zero, 0x5B7
    ctx->r5 = ADD32(0, 0X5B7);
    // 0x400152EC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400152F0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400152F4: jal         0x40014778
    // 0x400152F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_14778(rdram, ctx);
        goto after_10;
    // 0x400152F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_10:
    // 0x400152FC: jal         0x40011B50
    // 0x40015300: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    ovl_actor_main_11B50(rdram, ctx);
        goto after_11;
    // 0x40015300: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_11:
    // 0x40015304: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x40015308: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    // 0x4001530C: jal         0x40000CA0
    // 0x40015310: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_12;
    // 0x40015310: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x40015314: b           L_400153DC
    // 0x40015318: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_400153DC;
    // 0x40015318: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_4001531C:
    // 0x4001531C: jal         0x4000CB84
    // 0x40015320: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_13;
    // 0x40015320: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_13:
    // 0x40015324: b           L_400153DC
    // 0x40015328: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_400153DC;
    // 0x40015328: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_4001532C:
    // 0x4001532C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40015330: lwc1        $f8, -0xFC8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0XFC8);
    // 0x40015334: addiu       $a1, $zero, 0xA9
    ctx->r5 = ADD32(0, 0XA9);
    // 0x40015338: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001533C: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x40015340: jal         0x4000120C
    // 0x40015344: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_14;
    // 0x40015344: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_14:
    // 0x40015348: b           L_400153DC
    // 0x4001534C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_400153DC;
    // 0x4001534C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_40015350:
    // 0x40015350: addiu       $a1, $zero, 0x3DF
    ctx->r5 = ADD32(0, 0X3DF);
    // 0x40015354: jal         0x4000115C
    // 0x40015358: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_15;
    // 0x40015358: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x4001535C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x40015360: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x40015364: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40015368: jal         0x400018BC
    // 0x4001536C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_16;
    // 0x4001536C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_16:
    // 0x40015370: b           L_400153DC
    // 0x40015374: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_400153DC;
    // 0x40015374: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_40015378:
    // 0x40015378: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x4001537C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x40015380: jal         0x400018BC
    // 0x40015384: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_17;
    // 0x40015384: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_17:
    // 0x40015388: b           L_400153DC
    // 0x4001538C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_400153DC;
    // 0x4001538C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_40015390:
    // 0x40015390: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x40015394: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40015398: jal         0x400018BC
    // 0x4001539C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_18;
    // 0x4001539C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_18:
    // 0x400153A0: b           L_400153DC
    // 0x400153A4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_400153DC;
    // 0x400153A4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_400153A8:
    // 0x400153A8: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x400153AC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x400153B0: jal         0x400018BC
    // 0x400153B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_19;
    // 0x400153B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_19:
    // 0x400153B8: b           L_400153DC
    // 0x400153BC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_400153DC;
    // 0x400153BC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_400153C0:
    // 0x400153C0: addiu       $a1, $zero, 0x59B
    ctx->r5 = ADD32(0, 0X59B);
    // 0x400153C4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400153C8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400153CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x400153D0: jal         0x40014778
    // 0x400153D4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_actor_main_14778(rdram, ctx);
        goto after_20;
    // 0x400153D4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_20:
    // 0x400153D8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_400153DC:
    // 0x400153DC: nop

    // 0x400153E0: slti        $at, $t1, 0x41
    ctx->r1 = SIGNED(ctx->r9) < 0X41 ? 1 : 0;
    // 0x400153E4: beq         $at, $zero, L_400153F8
    if (ctx->r1 == 0) {
        // 0x400153E8: lw          $t2, 0x7C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X7C);
            goto L_400153F8;
    }
    // 0x400153E8: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x400153EC: jal         0x40011E8C
    // 0x400153F0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    ovl_actor_main_11E8C(rdram, ctx);
        goto after_21;
    // 0x400153F0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_21:
    // 0x400153F4: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
L_400153F8:
    // 0x400153F8: nop

    // 0x400153FC: slti        $at, $t2, 0x3F
    ctx->r1 = SIGNED(ctx->r10) < 0X3F ? 1 : 0;
    // 0x40015400: bne         $at, $zero, L_40015428
    if (ctx->r1 != 0) {
        // 0x40015404: slti        $at, $t2, 0x41
        ctx->r1 = SIGNED(ctx->r10) < 0X41 ? 1 : 0;
            goto L_40015428;
    }
    // 0x40015404: slti        $at, $t2, 0x41
    ctx->r1 = SIGNED(ctx->r10) < 0X41 ? 1 : 0;
    // 0x40015408: beq         $at, $zero, L_40015428
    if (ctx->r1 == 0) {
        // 0x4001540C: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_40015428;
    }
    // 0x4001540C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x40015410: addiu       $t3, $s6, 0x324
    ctx->r11 = ADD32(ctx->r22, 0X324);
    // 0x40015414: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x40015418: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x4001541C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x40015420: jal         0x40011BE4
    // 0x40015424: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    ovl_actor_main_11BE4(rdram, ctx);
        goto after_22;
    // 0x40015424: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    after_22:
L_40015428:
    // 0x40015428: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x4001542C: nop

    // 0x40015430: slti        $at, $t4, 0xDC
    ctx->r1 = SIGNED(ctx->r12) < 0XDC ? 1 : 0;
    // 0x40015434: bne         $at, $zero, L_40015664
    if (ctx->r1 != 0) {
        // 0x40015438: slti        $at, $t4, 0xFB
        ctx->r1 = SIGNED(ctx->r12) < 0XFB ? 1 : 0;
            goto L_40015664;
    }
    // 0x40015438: slti        $at, $t4, 0xFB
    ctx->r1 = SIGNED(ctx->r12) < 0XFB ? 1 : 0;
    // 0x4001543C: beq         $at, $zero, L_40015664
    if (ctx->r1 == 0) {
        // 0x40015440: addiu       $at, $zero, 0xDC
        ctx->r1 = ADD32(0, 0XDC);
            goto L_40015664;
    }
    // 0x40015440: addiu       $at, $zero, 0xDC
    ctx->r1 = ADD32(0, 0XDC);
    // 0x40015444: bne         $t4, $at, L_4001557C
    if (ctx->r12 != ctx->r1) {
        // 0x40015448: addiu       $s5, $s6, 0x324
        ctx->r21 = ADD32(ctx->r22, 0X324);
            goto L_4001557C;
    }
    // 0x40015448: addiu       $s5, $s6, 0x324
    ctx->r21 = ADD32(ctx->r22, 0X324);
    // 0x4001544C: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x40015450: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x40015454: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40015458: swc1        $f10, 0x34($s5)
    MEM_W(0X34, ctx->r21) = ctx->f10.u32l;
    // 0x4001545C: lui         $s1, 0x4002
    ctx->r17 = S32(0X4002 << 16);
    // 0x40015460: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    // 0x40015464: addiu       $s2, $s5, 0x10
    ctx->r18 = ADD32(ctx->r21, 0X10);
    // 0x40015468: addiu       $s3, $s5, 0xC
    ctx->r19 = ADD32(ctx->r21, 0XC);
    // 0x4001546C: lwc1        $f20, -0xFBC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0XFBC);
    // 0x40015470: lwc1        $f21, -0xFC0($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0XFC0);
    // 0x40015474: addiu       $s5, $sp, 0x60
    ctx->r21 = ADD32(ctx->r29, 0X60);
    // 0x40015478: addiu       $s1, $s1, -0x1C98
    ctx->r17 = ADD32(ctx->r17, -0X1C98);
    // 0x4001547C: addiu       $s4, $sp, 0x68
    ctx->r20 = ADD32(ctx->r29, 0X68);
L_40015480:
    // 0x40015480: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x40015484: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x40015488: addiu       $a2, $zero, 0x7AB
    ctx->r6 = ADD32(0, 0X7AB);
    // 0x4001548C: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    // 0x40015490: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x40015494: jal         0x40000F34
    // 0x40015498: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_actor_main_F34(rdram, ctx);
        goto after_23;
    // 0x40015498: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_23:
    // 0x4001549C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x400154A0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x400154A4: addiu       $a2, $zero, 0x7AC
    ctx->r6 = ADD32(0, 0X7AC);
    // 0x400154A8: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    // 0x400154AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x400154B0: jal         0x40000F34
    // 0x400154B4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_actor_main_F34(rdram, ctx);
        goto after_24;
    // 0x400154B4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_24:
    // 0x400154B8: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x400154BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x400154C0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x400154C4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x400154C8: jal         0x40000F34
    // 0x400154CC: addiu       $a3, $zero, 0x7E2
    ctx->r7 = ADD32(0, 0X7E2);
    ovl_actor_main_F34(rdram, ctx);
        goto after_25;
    // 0x400154CC: addiu       $a3, $zero, 0x7E2
    ctx->r7 = ADD32(0, 0X7E2);
    after_25:
    // 0x400154D0: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x400154D4: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x400154D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x400154DC: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x400154E0: jal         0x40000F34
    // 0x400154E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_actor_main_F34(rdram, ctx);
        goto after_26;
    // 0x400154E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_26:
    // 0x400154E8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x400154EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x400154F0: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x400154F4: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x400154F8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x400154FC: lwc1        $f16, 0x0($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X0);
    // 0x40015500: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x40015504: mul.d       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f20.d);
    // 0x40015508: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x4001550C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x40015510: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x40015514: mul.d       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f20.d);
    // 0x40015518: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x4001551C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x40015520: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x40015524: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x40015528: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x4001552C: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x40015530: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x40015534: jal         0x40000F34
    // 0x40015538: nop

    ovl_actor_main_F34(rdram, ctx);
        goto after_27;
    // 0x40015538: nop

    after_27:
    // 0x4001553C: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x40015540: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x40015544: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x40015548: jal         0x40000F34
    // 0x4001554C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_F34(rdram, ctx);
        goto after_28;
    // 0x4001554C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_28:
    // 0x40015550: lui         $t5, 0x4002
    ctx->r13 = S32(0X4002 << 16);
    // 0x40015554: addiu       $t5, $t5, -0x1C70
    ctx->r13 = ADD32(ctx->r13, -0X1C70);
    // 0x40015558: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x4001555C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x40015560: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x40015564: bne         $s1, $t5, L_40015480
    if (ctx->r17 != ctx->r13) {
        // 0x40015568: addiu       $s3, $s3, 0x8
        ctx->r19 = ADD32(ctx->r19, 0X8);
            goto L_40015480;
    }
    // 0x40015568: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x4001556C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x40015570: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x40015574: jal         0x4000115C
    // 0x40015578: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_29;
    // 0x40015578: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_29:
L_4001557C:
    // 0x4001557C: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x40015580: addiu       $s4, $sp, 0x68
    ctx->r20 = ADD32(ctx->r29, 0X68);
    // 0x40015584: slti        $at, $t6, 0xE7
    ctx->r1 = SIGNED(ctx->r14) < 0XE7 ? 1 : 0;
    // 0x40015588: beq         $at, $zero, L_4001560C
    if (ctx->r1 == 0) {
        // 0x4001558C: addiu       $s5, $s6, 0x324
        ctx->r21 = ADD32(ctx->r22, 0X324);
            goto L_4001560C;
    }
    // 0x4001558C: addiu       $s5, $s6, 0x324
    ctx->r21 = ADD32(ctx->r22, 0X324);
    // 0x40015590: lui         $s1, 0x4002
    ctx->r17 = S32(0X4002 << 16);
    // 0x40015594: lui         $s2, 0x4002
    ctx->r18 = S32(0X4002 << 16);
    // 0x40015598: addiu       $s2, $s2, -0x1C70
    ctx->r18 = ADD32(ctx->r18, -0X1C70);
    // 0x4001559C: addiu       $s1, $s1, -0x1C98
    ctx->r17 = ADD32(ctx->r17, -0X1C98);
    // 0x400155A0: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
L_400155A4:
    // 0x400155A4: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x400155A8: lw          $a1, 0x34($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X34);
    // 0x400155AC: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x400155B0: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x400155B4: lw          $a2, 0x0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X0);
    // 0x400155B8: jal         0x4001501C
    // 0x400155BC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_actor_main_1501C(rdram, ctx);
        goto after_30;
    // 0x400155BC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_30:
    // 0x400155C0: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x400155C4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x400155C8: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x400155CC: jal         0x40000F34
    // 0x400155D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_F34(rdram, ctx);
        goto after_31;
    // 0x400155D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_31:
    // 0x400155D4: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x400155D8: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x400155DC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x400155E0: jal         0x40000F34
    // 0x400155E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_F34(rdram, ctx);
        goto after_32;
    // 0x400155E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_32:
    // 0x400155E8: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x400155EC: bne         $s1, $s2, L_400155A4
    if (ctx->r17 != ctx->r18) {
        // 0x400155F0: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_400155A4;
    }
    // 0x400155F0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x400155F4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x400155F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x400155FC: lwc1        $f18, 0x34($s5)
    ctx->f18.u32l = MEM_W(ctx->r21, 0X34);
    // 0x40015600: nop

    // 0x40015604: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x40015608: swc1        $f6, 0x34($s5)
    MEM_W(0X34, ctx->r21) = ctx->f6.u32l;
L_4001560C:
    // 0x4001560C: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x40015610: addiu       $at, $zero, 0xFA
    ctx->r1 = ADD32(0, 0XFA);
    // 0x40015614: bne         $t7, $at, L_40015664
    if (ctx->r15 != ctx->r1) {
        // 0x40015618: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_40015664;
    }
    // 0x40015618: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x4001561C: addiu       $a1, $zero, 0x251
    ctx->r5 = ADD32(0, 0X251);
    // 0x40015620: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x40015624: jal         0x4000115C
    // 0x40015628: addiu       $s5, $s6, 0x324
    ctx->r21 = ADD32(ctx->r22, 0X324);
    ovl_actor_main_115C(rdram, ctx);
        goto after_33;
    // 0x40015628: addiu       $s5, $s6, 0x324
    ctx->r21 = ADD32(ctx->r22, 0X324);
    after_33:
    // 0x4001562C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x40015630: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    // 0x40015634: addiu       $s2, $zero, 0x28
    ctx->r18 = ADD32(0, 0X28);
L_40015638:
    // 0x40015638: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x4001563C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x40015640: jal         0x40000F34
    // 0x40015644: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_F34(rdram, ctx);
        goto after_34;
    // 0x40015644: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_34:
    // 0x40015648: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x4001564C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x40015650: jal         0x40000F34
    // 0x40015654: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_F34(rdram, ctx);
        goto after_35;
    // 0x40015654: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_35:
    // 0x40015658: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x4001565C: bne         $s1, $s2, L_40015638
    if (ctx->r17 != ctx->r18) {
        // 0x40015660: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_40015638;
    }
    // 0x40015660: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_40015664:
    // 0x40015664: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x40015668: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x4001566C: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x40015670: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x40015674: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x40015678: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x4001567C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x40015680: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x40015684: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x40015688: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x4001568C: jr          $ra
    // 0x40015690: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x40015690: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void ovl_actor_main_15694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40015694: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40015698: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001569C: beq         $a1, $at, L_400156B8
    if (ctx->r5 == ctx->r1) {
        // 0x400156A0: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_400156B8;
    }
    // 0x400156A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400156A4: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x400156A8: beq         $a1, $at, L_400156DC
    if (ctx->r5 == ctx->r1) {
        // 0x400156AC: addiu       $a2, $zero, 0x0
        ctx->r6 = ADD32(0, 0X0);
            goto L_400156DC;
    }
    // 0x400156AC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400156B0: b           L_400156EC
    // 0x400156B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_400156EC;
    // 0x400156B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400156B8:
    // 0x400156B8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x400156BC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x400156C0: addiu       $a1, $zero, 0x5B3
    ctx->r5 = ADD32(0, 0X5B3);
    // 0x400156C4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400156C8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400156CC: jal         0x40014778
    // 0x400156D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_14778(rdram, ctx);
        goto after_0;
    // 0x400156D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x400156D4: b           L_400156EC
    // 0x400156D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_400156EC;
    // 0x400156D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400156DC:
    // 0x400156DC: lui         $a1, 0x41C8
    ctx->r5 = S32(0X41C8 << 16);
    // 0x400156E0: jal         0x400018BC
    // 0x400156E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_1;
    // 0x400156E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x400156E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400156EC:
    // 0x400156EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x400156F0: jr          $ra
    // 0x400156F4: nop

    return;
    // 0x400156F4: nop

;}
RECOMP_FUNC void ovl_actor_main_156F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400156F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x400156FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40015700: bne         $a1, $at, L_40015724
    if (ctx->r5 != ctx->r1) {
        // 0x40015704: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40015724;
    }
    // 0x40015704: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40015708: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x4001570C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x40015710: addiu       $a1, $zero, 0x5B5
    ctx->r5 = ADD32(0, 0X5B5);
    // 0x40015714: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40015718: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001571C: jal         0x40014778
    // 0x40015720: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_14778(rdram, ctx);
        goto after_0;
    // 0x40015720: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_40015724:
    // 0x40015724: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40015728: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4001572C: jr          $ra
    // 0x40015730: nop

    return;
    // 0x40015730: nop

;}
RECOMP_FUNC void ovl_actor_main_15734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40015734: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40015738: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001573C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40015740: bne         $a1, $at, L_40015770
    if (ctx->r5 != ctx->r1) {
        // 0x40015744: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_40015770;
    }
    // 0x40015744: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x40015748: jal         0x400093E4
    // 0x4001574C: nop

    ovl_actor_main_93E4(rdram, ctx);
        goto after_0;
    // 0x4001574C: nop

    after_0:
    // 0x40015750: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40015754: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40015758: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x4001575C: addiu       $a1, $zero, 0x59D
    ctx->r5 = ADD32(0, 0X59D);
    // 0x40015760: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40015764: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40015768: jal         0x40014778
    // 0x4001576C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_actor_main_14778(rdram, ctx);
        goto after_1;
    // 0x4001576C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
L_40015770:
    // 0x40015770: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40015774: jal         0x40009BB0
    // 0x40015778: nop

    ovl_actor_main_9BB0(rdram, ctx);
        goto after_2;
    // 0x40015778: nop

    after_2:
    // 0x4001577C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40015780: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40015784: jr          $ra
    // 0x40015788: nop

    return;
    // 0x40015788: nop

;}
RECOMP_FUNC void ovl_actor_main_1578C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001578C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40015790: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40015794: bne         $a1, $at, L_400157B8
    if (ctx->r5 != ctx->r1) {
        // 0x40015798: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_400157B8;
    }
    // 0x40015798: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4001579C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x400157A0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x400157A4: addiu       $a1, $zero, 0x5B3
    ctx->r5 = ADD32(0, 0X5B3);
    // 0x400157A8: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    // 0x400157AC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400157B0: jal         0x40014778
    // 0x400157B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_14778(rdram, ctx);
        goto after_0;
    // 0x400157B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_400157B8:
    // 0x400157B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400157BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x400157C0: jr          $ra
    // 0x400157C4: nop

    return;
    // 0x400157C4: nop

;}
RECOMP_FUNC void ovl_actor_main_157C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400157C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x400157CC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x400157D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400157D4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x400157D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x400157DC: beq         $a1, $at, L_40015804
    if (ctx->r5 == ctx->r1) {
        // 0x400157E0: sw          $s0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r16;
            goto L_40015804;
    }
    // 0x400157E0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x400157E4: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x400157E8: beq         $a1, $at, L_40015860
    if (ctx->r5 == ctx->r1) {
        // 0x400157EC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_40015860;
    }
    // 0x400157EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400157F0: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x400157F4: beq         $a1, $at, L_40015894
    if (ctx->r5 == ctx->r1) {
        // 0x400157F8: nop
    
            goto L_40015894;
    }
    // 0x400157F8: nop

    // 0x400157FC: b           L_400158A0
    // 0x40015800: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_400158A0;
    // 0x40015800: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40015804:
    // 0x40015804: addiu       $s0, $s1, 0x324
    ctx->r16 = ADD32(ctx->r17, 0X324);
    // 0x40015808: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x4001580C: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x40015810: jal         0x40011D40
    // 0x40015814: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_11D40(rdram, ctx);
        goto after_0;
    // 0x40015814: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x40015818: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x4001581C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x40015820: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40015824: addiu       $a1, $zero, 0x5E3
    ctx->r5 = ADD32(0, 0X5E3);
    // 0x40015828: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001582C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40015830: jal         0x40014778
    // 0x40015834: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_14778(rdram, ctx);
        goto after_1;
    // 0x40015834: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x40015838: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4001583C: addiu       $a1, $zero, 0x3E0
    ctx->r5 = ADD32(0, 0X3E0);
    // 0x40015840: jal         0x4000115C
    // 0x40015844: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_2;
    // 0x40015844: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x40015848: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4001584C: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x40015850: jal         0x40009000
    // 0x40015854: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_3;
    // 0x40015854: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x40015858: b           L_400158A0
    // 0x4001585C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_400158A0;
    // 0x4001585C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40015860:
    // 0x40015860: addiu       $s0, $s1, 0x324
    ctx->r16 = ADD32(ctx->r17, 0X324);
    // 0x40015864: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x40015868: lw          $a3, 0x0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X0);
    // 0x4001586C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x40015870: lui         $a2, 0x4416
    ctx->r6 = S32(0X4416 << 16);
    // 0x40015874: jal         0x4001A534
    // 0x40015878: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_1A534(rdram, ctx);
        goto after_4;
    // 0x40015878: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x4001587C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40015880: addiu       $a1, $zero, 0x2E5
    ctx->r5 = ADD32(0, 0X2E5);
    // 0x40015884: jal         0x4000115C
    // 0x40015888: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_5;
    // 0x40015888: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x4001588C: b           L_400158A0
    // 0x40015890: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_400158A0;
    // 0x40015890: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40015894:
    // 0x40015894: jal         0x4000CB84
    // 0x40015898: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_6;
    // 0x40015898: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x4001589C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_400158A0:
    // 0x400158A0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x400158A4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x400158A8: jr          $ra
    // 0x400158AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x400158AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_158B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400158B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x400158B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400158B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400158BC: beq         $a1, $at, L_400158D8
    if (ctx->r5 == ctx->r1) {
        // 0x400158C0: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_400158D8;
    }
    // 0x400158C0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x400158C4: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x400158C8: beq         $a1, $at, L_40015914
    if (ctx->r5 == ctx->r1) {
        // 0x400158CC: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_40015914;
    }
    // 0x400158CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x400158D0: b           L_4001592C
    // 0x400158D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4001592C;
    // 0x400158D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400158D8:
    // 0x400158D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x400158DC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x400158E0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x400158E4: addiu       $a1, $zero, 0x5A9
    ctx->r5 = ADD32(0, 0X5A9);
    // 0x400158E8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400158EC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400158F0: jal         0x40014778
    // 0x400158F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_14778(rdram, ctx);
        goto after_0;
    // 0x400158F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x400158F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x400158FC: addiu       $a1, $zero, 0x3E1
    ctx->r5 = ADD32(0, 0X3E1);
    // 0x40015900: jal         0x4000115C
    // 0x40015904: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_1;
    // 0x40015904: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x40015908: b           L_4001592C
    // 0x4001590C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4001592C;
    // 0x4001590C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40015910: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_40015914:
    // 0x40015914: jal         0x4000E5C0
    // 0x40015918: nop

    ovl_actor_main_E5C0(rdram, ctx);
        goto after_2;
    // 0x40015918: nop

    after_2:
    // 0x4001591C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40015920: jal         0x40001A8C
    // 0x40015924: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_3;
    // 0x40015924: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x40015928: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4001592C:
    // 0x4001592C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40015930: jr          $ra
    // 0x40015934: nop

    return;
    // 0x40015934: nop

;}
RECOMP_FUNC void ovl_actor_main_15938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40015938: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4001593C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40015940: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x40015944: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x40015948: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4001594C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x40015950: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x40015954: jal         0x400123E8
    // 0x40015958: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    ovl_actor_main_123E8(rdram, ctx);
        goto after_0;
    // 0x40015958: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x4001595C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x40015960: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x40015964: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40015968: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x4001596C: bne         $v0, $at, L_400159B8
    if (ctx->r2 != ctx->r1) {
        // 0x40015970: addiu       $at, $zero, 0x20
        ctx->r1 = ADD32(0, 0X20);
            goto L_400159B8;
    }
    // 0x40015970: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x40015974: beq         $v1, $at, L_40015984
    if (ctx->r3 == ctx->r1) {
        // 0x40015978: addiu       $a1, $zero, 0x21
        ctx->r5 = ADD32(0, 0X21);
            goto L_40015984;
    }
    // 0x40015978: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x4001597C: bne         $v1, $a1, L_40015994
    if (ctx->r3 != ctx->r5) {
        // 0x40015980: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_40015994;
    }
    // 0x40015980: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
L_40015984:
    // 0x40015984: jal         0x40016050
    // 0x40015988: nop

    ovl_actor_main_16050(rdram, ctx);
        goto after_1;
    // 0x40015988: nop

    after_1:
    // 0x4001598C: b           L_40015B3C
    // 0x40015990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40015B3C;
    // 0x40015990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40015994:
    // 0x40015994: bne         $v1, $at, L_40015B3C
    if (ctx->r3 != ctx->r1) {
        // 0x40015998: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40015B3C;
    }
    // 0x40015998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001599C: jal         0x40016050
    // 0x400159A0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_16050(rdram, ctx);
        goto after_2;
    // 0x400159A0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_2:
    // 0x400159A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x400159A8: jal         0x40008F98
    // 0x400159AC: nop

    ovl_actor_main_8F98(rdram, ctx);
        goto after_3;
    // 0x400159AC: nop

    after_3:
    // 0x400159B0: b           L_40015B3C
    // 0x400159B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40015B3C;
    // 0x400159B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400159B8:
    // 0x400159B8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x400159BC: bne         $v0, $at, L_400159F8
    if (ctx->r2 != ctx->r1) {
        // 0x400159C0: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_400159F8;
    }
    // 0x400159C0: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x400159C4: bne         $v1, $at, L_400159E0
    if (ctx->r3 != ctx->r1) {
        // 0x400159C8: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_400159E0;
    }
    // 0x400159C8: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x400159CC: jal         0x40016050
    // 0x400159D0: nop

    ovl_actor_main_16050(rdram, ctx);
        goto after_4;
    // 0x400159D0: nop

    after_4:
    // 0x400159D4: b           L_40015B3C
    // 0x400159D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40015B3C;
    // 0x400159D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400159DC: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
L_400159E0:
    // 0x400159E0: bne         $v1, $at, L_40015B3C
    if (ctx->r3 != ctx->r1) {
        // 0x400159E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40015B3C;
    }
    // 0x400159E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400159E8: jal         0x40016FE8
    // 0x400159EC: nop

    ovl_actor_main_16FE8(rdram, ctx);
        goto after_5;
    // 0x400159EC: nop

    after_5:
    // 0x400159F0: b           L_40015B3C
    // 0x400159F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40015B3C;
    // 0x400159F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400159F8:
    // 0x400159F8: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x400159FC: bne         $v0, $at, L_40015A48
    if (ctx->r2 != ctx->r1) {
        // 0x40015A00: addiu       $a1, $zero, 0x21
        ctx->r5 = ADD32(0, 0X21);
            goto L_40015A48;
    }
    // 0x40015A00: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x40015A04: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x40015A08: bne         $v1, $at, L_40015A30
    if (ctx->r3 != ctx->r1) {
        // 0x40015A0C: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_40015A30;
    }
    // 0x40015A0C: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x40015A10: jal         0x40016050
    // 0x40015A14: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_16050(rdram, ctx);
        goto after_6;
    // 0x40015A14: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_6:
    // 0x40015A18: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40015A1C: jal         0x40008F98
    // 0x40015A20: nop

    ovl_actor_main_8F98(rdram, ctx);
        goto after_7;
    // 0x40015A20: nop

    after_7:
    // 0x40015A24: b           L_40015B3C
    // 0x40015A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40015B3C;
    // 0x40015A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40015A2C: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
L_40015A30:
    // 0x40015A30: bne         $v1, $at, L_40015B3C
    if (ctx->r3 != ctx->r1) {
        // 0x40015A34: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40015B3C;
    }
    // 0x40015A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40015A38: jal         0x400177A0
    // 0x40015A3C: nop

    ovl_actor_main_177A0(rdram, ctx);
        goto after_8;
    // 0x40015A3C: nop

    after_8:
    // 0x40015A40: b           L_40015B3C
    // 0x40015A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40015B3C;
    // 0x40015A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40015A48:
    // 0x40015A48: bne         $v0, $a1, L_40015AA8
    if (ctx->r2 != ctx->r5) {
        // 0x40015A4C: addiu       $at, $zero, 0x2A
        ctx->r1 = ADD32(0, 0X2A);
            goto L_40015AA8;
    }
    // 0x40015A4C: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x40015A50: bne         $v1, $a1, L_40015A68
    if (ctx->r3 != ctx->r5) {
        // 0x40015A54: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_40015A68;
    }
    // 0x40015A54: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x40015A58: jal         0x40017BE0
    // 0x40015A5C: nop

    ovl_actor_main_17BE0(rdram, ctx);
        goto after_9;
    // 0x40015A5C: nop

    after_9:
    // 0x40015A60: b           L_40015B3C
    // 0x40015A64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40015B3C;
    // 0x40015A64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40015A68:
    // 0x40015A68: bne         $v1, $at, L_40015A90
    if (ctx->r3 != ctx->r1) {
        // 0x40015A6C: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_40015A90;
    }
    // 0x40015A6C: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x40015A70: jal         0x40016050
    // 0x40015A74: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_16050(rdram, ctx);
        goto after_10;
    // 0x40015A74: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_10:
    // 0x40015A78: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40015A7C: jal         0x40008F98
    // 0x40015A80: nop

    ovl_actor_main_8F98(rdram, ctx);
        goto after_11;
    // 0x40015A80: nop

    after_11:
    // 0x40015A84: b           L_40015B3C
    // 0x40015A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40015B3C;
    // 0x40015A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40015A8C: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
L_40015A90:
    // 0x40015A90: bne         $v1, $at, L_40015B3C
    if (ctx->r3 != ctx->r1) {
        // 0x40015A94: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40015B3C;
    }
    // 0x40015A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40015A98: jal         0x4001825C
    // 0x40015A9C: nop

    ovl_actor_main_1825C(rdram, ctx);
        goto after_12;
    // 0x40015A9C: nop

    after_12:
    // 0x40015AA0: b           L_40015B3C
    // 0x40015AA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40015B3C;
    // 0x40015AA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40015AA8:
    // 0x40015AA8: bne         $v0, $at, L_40015B00
    if (ctx->r2 != ctx->r1) {
        // 0x40015AAC: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_40015B00;
    }
    // 0x40015AAC: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x40015AB0: bne         $v1, $at, L_40015ACC
    if (ctx->r3 != ctx->r1) {
        // 0x40015AB4: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_40015ACC;
    }
    // 0x40015AB4: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x40015AB8: jal         0x40018BF4
    // 0x40015ABC: nop

    ovl_actor_main_18BF4(rdram, ctx);
        goto after_13;
    // 0x40015ABC: nop

    after_13:
    // 0x40015AC0: b           L_40015B3C
    // 0x40015AC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40015B3C;
    // 0x40015AC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40015AC8: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
L_40015ACC:
    // 0x40015ACC: bne         $v1, $at, L_40015AE8
    if (ctx->r3 != ctx->r1) {
        // 0x40015AD0: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_40015AE8;
    }
    // 0x40015AD0: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x40015AD4: jal         0x4001872C
    // 0x40015AD8: nop

    ovl_actor_main_1872C(rdram, ctx);
        goto after_14;
    // 0x40015AD8: nop

    after_14:
    // 0x40015ADC: b           L_40015B3C
    // 0x40015AE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40015B3C;
    // 0x40015AE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40015AE4: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
L_40015AE8:
    // 0x40015AE8: bne         $v1, $at, L_40015B3C
    if (ctx->r3 != ctx->r1) {
        // 0x40015AEC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40015B3C;
    }
    // 0x40015AEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40015AF0: jal         0x40016050
    // 0x40015AF4: nop

    ovl_actor_main_16050(rdram, ctx);
        goto after_15;
    // 0x40015AF4: nop

    after_15:
    // 0x40015AF8: b           L_40015B3C
    // 0x40015AFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40015B3C;
    // 0x40015AFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40015B00:
    // 0x40015B00: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x40015B04: bne         $v0, $at, L_40015B38
    if (ctx->r2 != ctx->r1) {
        // 0x40015B08: addiu       $at, $zero, 0x31
        ctx->r1 = ADD32(0, 0X31);
            goto L_40015B38;
    }
    // 0x40015B08: addiu       $at, $zero, 0x31
    ctx->r1 = ADD32(0, 0X31);
    // 0x40015B0C: bne         $v1, $at, L_40015B28
    if (ctx->r3 != ctx->r1) {
        // 0x40015B10: addiu       $at, $zero, 0x27
        ctx->r1 = ADD32(0, 0X27);
            goto L_40015B28;
    }
    // 0x40015B10: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x40015B14: jal         0x40016050
    // 0x40015B18: nop

    ovl_actor_main_16050(rdram, ctx);
        goto after_16;
    // 0x40015B18: nop

    after_16:
    // 0x40015B1C: b           L_40015B3C
    // 0x40015B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40015B3C;
    // 0x40015B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40015B24: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
L_40015B28:
    // 0x40015B28: bne         $v1, $at, L_40015B3C
    if (ctx->r3 != ctx->r1) {
        // 0x40015B2C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40015B3C;
    }
    // 0x40015B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40015B30: jal         0x400193D8
    // 0x40015B34: nop

    ovl_actor_main_193D8(rdram, ctx);
        goto after_17;
    // 0x40015B34: nop

    after_17:
L_40015B38:
    // 0x40015B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40015B3C:
    // 0x40015B3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40015B40: jr          $ra
    // 0x40015B44: nop

    return;
    // 0x40015B44: nop

;}
RECOMP_FUNC void ovl_actor_main_15B48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40015B48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40015B4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40015B50: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x40015B54: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x40015B58: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x40015B5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x40015B60: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x40015B64: jal         0x400123E8
    // 0x40015B68: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    ovl_actor_main_123E8(rdram, ctx);
        goto after_0;
    // 0x40015B68: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x40015B6C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x40015B70: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x40015B74: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40015B78: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x40015B7C: bne         $v1, $at, L_40015BAC
    if (ctx->r3 != ctx->r1) {
        // 0x40015B80: addiu       $at, $zero, 0x20
        ctx->r1 = ADD32(0, 0X20);
            goto L_40015BAC;
    }
    // 0x40015B80: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x40015B84: beq         $v0, $at, L_40015B9C
    if (ctx->r2 == ctx->r1) {
        // 0x40015B88: addiu       $a1, $zero, 0x21
        ctx->r5 = ADD32(0, 0X21);
            goto L_40015B9C;
    }
    // 0x40015B88: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x40015B8C: beq         $v0, $a1, L_40015B9C
    if (ctx->r2 == ctx->r5) {
        // 0x40015B90: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_40015B9C;
    }
    // 0x40015B90: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x40015B94: bne         $v0, $at, L_40015CD8
    if (ctx->r2 != ctx->r1) {
        // 0x40015B98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40015CD8;
    }
    // 0x40015B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40015B9C:
    // 0x40015B9C: jal         0x40016030
    // 0x40015BA0: nop

    ovl_actor_main_16030(rdram, ctx);
        goto after_1;
    // 0x40015BA0: nop

    after_1:
    // 0x40015BA4: b           L_40015CD8
    // 0x40015BA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40015CD8;
    // 0x40015BA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40015BAC:
    // 0x40015BAC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x40015BB0: bne         $v1, $at, L_40015BEC
    if (ctx->r3 != ctx->r1) {
        // 0x40015BB4: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_40015BEC;
    }
    // 0x40015BB4: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x40015BB8: bne         $v0, $at, L_40015BD4
    if (ctx->r2 != ctx->r1) {
        // 0x40015BBC: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_40015BD4;
    }
    // 0x40015BBC: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x40015BC0: jal         0x40016030
    // 0x40015BC4: nop

    ovl_actor_main_16030(rdram, ctx);
        goto after_2;
    // 0x40015BC4: nop

    after_2:
    // 0x40015BC8: b           L_40015CD8
    // 0x40015BCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40015CD8;
    // 0x40015BCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40015BD0: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
L_40015BD4:
    // 0x40015BD4: bne         $v0, $at, L_40015CD8
    if (ctx->r2 != ctx->r1) {
        // 0x40015BD8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40015CD8;
    }
    // 0x40015BD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40015BDC: jal         0x40016CC0
    // 0x40015BE0: nop

    ovl_actor_main_16CC0(rdram, ctx);
        goto after_3;
    // 0x40015BE0: nop

    after_3:
    // 0x40015BE4: b           L_40015CD8
    // 0x40015BE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40015CD8;
    // 0x40015BE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40015BEC:
    // 0x40015BEC: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x40015BF0: bne         $v1, $at, L_40015C30
    if (ctx->r3 != ctx->r1) {
        // 0x40015BF4: addiu       $a1, $zero, 0x21
        ctx->r5 = ADD32(0, 0X21);
            goto L_40015C30;
    }
    // 0x40015BF4: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x40015BF8: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x40015BFC: bne         $v0, $at, L_40015C18
    if (ctx->r2 != ctx->r1) {
        // 0x40015C00: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_40015C18;
    }
    // 0x40015C00: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x40015C04: jal         0x40016030
    // 0x40015C08: nop

    ovl_actor_main_16030(rdram, ctx);
        goto after_4;
    // 0x40015C08: nop

    after_4:
    // 0x40015C0C: b           L_40015CD8
    // 0x40015C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40015CD8;
    // 0x40015C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40015C14: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
L_40015C18:
    // 0x40015C18: bne         $v0, $at, L_40015CD8
    if (ctx->r2 != ctx->r1) {
        // 0x40015C1C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40015CD8;
    }
    // 0x40015C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40015C20: jal         0x40017794
    // 0x40015C24: nop

    ovl_actor_main_17794(rdram, ctx);
        goto after_5;
    // 0x40015C24: nop

    after_5:
    // 0x40015C28: b           L_40015CD8
    // 0x40015C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40015CD8;
    // 0x40015C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40015C30:
    // 0x40015C30: bne         $v1, $a1, L_40015C58
    if (ctx->r3 != ctx->r5) {
        // 0x40015C34: addiu       $at, $zero, 0x2A
        ctx->r1 = ADD32(0, 0X2A);
            goto L_40015C58;
    }
    // 0x40015C34: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x40015C38: beq         $v0, $a1, L_40015C48
    if (ctx->r2 == ctx->r5) {
        // 0x40015C3C: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_40015C48;
    }
    // 0x40015C3C: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x40015C40: bne         $v0, $at, L_40015CD8
    if (ctx->r2 != ctx->r1) {
        // 0x40015C44: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40015CD8;
    }
    // 0x40015C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40015C48:
    // 0x40015C48: jal         0x40016030
    // 0x40015C4C: nop

    ovl_actor_main_16030(rdram, ctx);
        goto after_6;
    // 0x40015C4C: nop

    after_6:
    // 0x40015C50: b           L_40015CD8
    // 0x40015C54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40015CD8;
    // 0x40015C54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40015C58:
    // 0x40015C58: bne         $v1, $at, L_40015CB0
    if (ctx->r3 != ctx->r1) {
        // 0x40015C5C: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_40015CB0;
    }
    // 0x40015C5C: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x40015C60: bne         $v0, $at, L_40015C7C
    if (ctx->r2 != ctx->r1) {
        // 0x40015C64: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_40015C7C;
    }
    // 0x40015C64: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x40015C68: jal         0x40018BE8
    // 0x40015C6C: nop

    ovl_actor_main_18BE8(rdram, ctx);
        goto after_7;
    // 0x40015C6C: nop

    after_7:
    // 0x40015C70: b           L_40015CD8
    // 0x40015C74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40015CD8;
    // 0x40015C74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40015C78: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
L_40015C7C:
    // 0x40015C7C: bne         $v0, $at, L_40015C98
    if (ctx->r2 != ctx->r1) {
        // 0x40015C80: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_40015C98;
    }
    // 0x40015C80: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x40015C84: jal         0x40018700
    // 0x40015C88: nop

    ovl_actor_main_18700(rdram, ctx);
        goto after_8;
    // 0x40015C88: nop

    after_8:
    // 0x40015C8C: b           L_40015CD8
    // 0x40015C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40015CD8;
    // 0x40015C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40015C94: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
L_40015C98:
    // 0x40015C98: bne         $v0, $at, L_40015CD8
    if (ctx->r2 != ctx->r1) {
        // 0x40015C9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40015CD8;
    }
    // 0x40015C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40015CA0: jal         0x40016030
    // 0x40015CA4: nop

    ovl_actor_main_16030(rdram, ctx);
        goto after_9;
    // 0x40015CA4: nop

    after_9:
    // 0x40015CA8: b           L_40015CD8
    // 0x40015CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40015CD8;
    // 0x40015CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40015CB0:
    // 0x40015CB0: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x40015CB4: bne         $v1, $at, L_40015CD4
    if (ctx->r3 != ctx->r1) {
        // 0x40015CB8: addiu       $at, $zero, 0x27
        ctx->r1 = ADD32(0, 0X27);
            goto L_40015CD4;
    }
    // 0x40015CB8: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x40015CBC: beq         $v0, $at, L_40015CCC
    if (ctx->r2 == ctx->r1) {
        // 0x40015CC0: addiu       $at, $zero, 0x31
        ctx->r1 = ADD32(0, 0X31);
            goto L_40015CCC;
    }
    // 0x40015CC0: addiu       $at, $zero, 0x31
    ctx->r1 = ADD32(0, 0X31);
    // 0x40015CC4: bne         $v0, $at, L_40015CD8
    if (ctx->r2 != ctx->r1) {
        // 0x40015CC8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40015CD8;
    }
    // 0x40015CC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40015CCC:
    // 0x40015CCC: jal         0x40016030
    // 0x40015CD0: nop

    ovl_actor_main_16030(rdram, ctx);
        goto after_10;
    // 0x40015CD0: nop

    after_10:
L_40015CD4:
    // 0x40015CD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40015CD8:
    // 0x40015CD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40015CDC: jr          $ra
    // 0x40015CE0: nop

    return;
    // 0x40015CE0: nop

;}
RECOMP_FUNC void ovl_actor_main_15CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40015CE4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x40015CE8: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x40015CEC: bne         $v0, $at, L_40015D00
    if (ctx->r2 != ctx->r1) {
        // 0x40015CF0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_40015D00;
    }
    // 0x40015CF0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x40015CF4: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x40015CF8: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x40015CFC: beq         $t6, $at, L_40015DC4
    if (ctx->r14 == ctx->r1) {
        // 0x40015D00: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_40015DC4;
    }
L_40015D00:
    // 0x40015D00: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x40015D04: bne         $v0, $at, L_40015D1C
    if (ctx->r2 != ctx->r1) {
        // 0x40015D08: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_40015D1C;
    }
    // 0x40015D08: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x40015D0C: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x40015D10: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x40015D14: beq         $t7, $at, L_40015DC4
    if (ctx->r15 == ctx->r1) {
        // 0x40015D18: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_40015DC4;
    }
    // 0x40015D18: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_40015D1C:
    // 0x40015D1C: bne         $v0, $at, L_40015D34
    if (ctx->r2 != ctx->r1) {
        // 0x40015D20: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_40015D34;
    }
    // 0x40015D20: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x40015D24: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x40015D28: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x40015D2C: beq         $t8, $at, L_40015DC4
    if (ctx->r24 == ctx->r1) {
        // 0x40015D30: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_40015DC4;
    }
    // 0x40015D30: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
L_40015D34:
    // 0x40015D34: bne         $v0, $at, L_40015D4C
    if (ctx->r2 != ctx->r1) {
        // 0x40015D38: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_40015D4C;
    }
    // 0x40015D38: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40015D3C: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x40015D40: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x40015D44: beq         $a1, $t9, L_40015DC4
    if (ctx->r5 == ctx->r25) {
        // 0x40015D48: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_40015DC4;
    }
    // 0x40015D48: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_40015D4C:
    // 0x40015D4C: bne         $v0, $at, L_40015D60
    if (ctx->r2 != ctx->r1) {
        // 0x40015D50: addiu       $a1, $zero, 0x24
        ctx->r5 = ADD32(0, 0X24);
            goto L_40015D60;
    }
    // 0x40015D50: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x40015D54: lw          $t0, 0xC8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC8);
    // 0x40015D58: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x40015D5C: beq         $t0, $at, L_40015DC4
    if (ctx->r8 == ctx->r1) {
        // 0x40015D60: addiu       $at, $zero, 0x21
        ctx->r1 = ADD32(0, 0X21);
            goto L_40015DC4;
    }
L_40015D60:
    // 0x40015D60: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x40015D64: bne         $v0, $at, L_40015D7C
    if (ctx->r2 != ctx->r1) {
        // 0x40015D68: addiu       $at, $zero, 0x2A
        ctx->r1 = ADD32(0, 0X2A);
            goto L_40015D7C;
    }
    // 0x40015D68: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x40015D6C: lw          $t1, 0xC8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC8);
    // 0x40015D70: nop

    // 0x40015D74: beq         $a1, $t1, L_40015DC4
    if (ctx->r5 == ctx->r9) {
        // 0x40015D78: addiu       $at, $zero, 0x2A
        ctx->r1 = ADD32(0, 0X2A);
            goto L_40015DC4;
    }
    // 0x40015D78: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
L_40015D7C:
    // 0x40015D7C: bne         $v0, $at, L_40015D94
    if (ctx->r2 != ctx->r1) {
        // 0x40015D80: addiu       $at, $zero, 0x25
        ctx->r1 = ADD32(0, 0X25);
            goto L_40015D94;
    }
    // 0x40015D80: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x40015D84: lw          $t2, 0xC8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC8);
    // 0x40015D88: nop

    // 0x40015D8C: beq         $a1, $t2, L_40015DC4
    if (ctx->r5 == ctx->r10) {
        // 0x40015D90: addiu       $at, $zero, 0x25
        ctx->r1 = ADD32(0, 0X25);
            goto L_40015DC4;
    }
    // 0x40015D90: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
L_40015D94:
    // 0x40015D94: bne         $v0, $at, L_40015DAC
    if (ctx->r2 != ctx->r1) {
        // 0x40015D98: addiu       $at, $zero, 0x2F
        ctx->r1 = ADD32(0, 0X2F);
            goto L_40015DAC;
    }
    // 0x40015D98: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x40015D9C: lw          $t3, 0xC8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XC8);
    // 0x40015DA0: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x40015DA4: beq         $t3, $at, L_40015DC4
    if (ctx->r11 == ctx->r1) {
        // 0x40015DA8: addiu       $at, $zero, 0x2F
        ctx->r1 = ADD32(0, 0X2F);
            goto L_40015DC4;
    }
    // 0x40015DA8: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
L_40015DAC:
    // 0x40015DAC: bne         $v0, $at, L_40015DC8
    if (ctx->r2 != ctx->r1) {
        // 0x40015DB0: nop
    
            goto L_40015DC8;
    }
    // 0x40015DB0: nop

    // 0x40015DB4: lw          $t4, 0xC8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XC8);
    // 0x40015DB8: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x40015DBC: bne         $t4, $at, L_40015DC8
    if (ctx->r12 != ctx->r1) {
        // 0x40015DC0: nop
    
            goto L_40015DC8;
    }
    // 0x40015DC0: nop

L_40015DC4:
    // 0x40015DC4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_40015DC8:
    // 0x40015DC8: jr          $ra
    // 0x40015DCC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x40015DCC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_15DD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40015DD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40015DD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40015DD8: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x40015DDC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x40015DE0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x40015DE4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x40015DE8: jal         0x40015CE4
    // 0x40015DEC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    ovl_actor_main_15CE4(rdram, ctx);
        goto after_0;
    // 0x40015DEC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x40015DF0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x40015DF4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x40015DF8: beq         $v0, $zero, L_40015E14
    if (ctx->r2 == 0) {
        // 0x40015DFC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_40015E14;
    }
    // 0x40015DFC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x40015E00: bne         $a1, $at, L_40015E0C
    if (ctx->r5 != ctx->r1) {
        // 0x40015E04: nop
    
            goto L_40015E0C;
    }
    // 0x40015E04: nop

    // 0x40015E08: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_40015E0C:
    // 0x40015E0C: b           L_40015E24
    // 0x40015E10: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_40015E24;
    // 0x40015E10: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_40015E14:
    // 0x40015E14: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40015E18: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x40015E1C: jal         0x4000D9A4
    // 0x40015E20: nop

    ovl_actor_main_D9A4(rdram, ctx);
        goto after_1;
    // 0x40015E20: nop

    after_1:
L_40015E24:
    // 0x40015E24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40015E28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40015E2C: jr          $ra
    // 0x40015E30: nop

    return;
    // 0x40015E30: nop

;}
RECOMP_FUNC void ovl_actor_main_15E34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40015E34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40015E38: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x40015E3C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x40015E40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40015E44: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40015E48: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x40015E4C: beq         $a1, $at, L_40015E80
    if (ctx->r5 == ctx->r1) {
        // 0x40015E50: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_40015E80;
    }
    // 0x40015E50: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40015E54: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x40015E58: beq         $a1, $at, L_40015F14
    if (ctx->r5 == ctx->r1) {
        // 0x40015E5C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40015F14;
    }
    // 0x40015E5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40015E60: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x40015E64: beq         $a1, $at, L_40015F2C
    if (ctx->r5 == ctx->r1) {
        // 0x40015E68: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40015F2C;
    }
    // 0x40015E68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40015E6C: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x40015E70: beq         $a1, $at, L_40015F54
    if (ctx->r5 == ctx->r1) {
        // 0x40015E74: nop
    
            goto L_40015F54;
    }
    // 0x40015E74: nop

    // 0x40015E78: b           L_40015F60
    // 0x40015E7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40015F60;
    // 0x40015E7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40015E80:
    // 0x40015E80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40015E84: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x40015E88: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40015E8C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40015E90: jal         0x40008D64
    // 0x40015E94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40015E94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40015E98: addiu       $s1, $s0, 0x324
    ctx->r17 = ADD32(ctx->r16, 0X324);
    // 0x40015E9C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x40015EA0: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    // 0x40015EA4: jal         0x40011D40
    // 0x40015EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11D40(rdram, ctx);
        goto after_1;
    // 0x40015EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x40015EAC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x40015EB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x40015EB4: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x40015EB8: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    // 0x40015EBC: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x40015EC0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x40015EC4: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x40015EC8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x40015ECC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x40015ED0: swc1        $f10, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f10.u32l;
    // 0x40015ED4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40015ED8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x40015EDC: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x40015EE0: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x40015EE4: jal         0x40006EEC
    // 0x40015EE8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    ovl_actor_main_6EEC(rdram, ctx);
        goto after_2;
    // 0x40015EE8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x40015EEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40015EF0: addiu       $a1, $zero, 0x233
    ctx->r5 = ADD32(0, 0X233);
    // 0x40015EF4: jal         0x4000115C
    // 0x40015EF8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_3;
    // 0x40015EF8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x40015EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40015F00: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x40015F04: jal         0x40009000
    // 0x40015F08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_4;
    // 0x40015F08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x40015F0C: b           L_40015F60
    // 0x40015F10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40015F60;
    // 0x40015F10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40015F14:
    // 0x40015F14: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x40015F18: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40015F1C: jal         0x400018BC
    // 0x40015F20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_5;
    // 0x40015F20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x40015F24: b           L_40015F60
    // 0x40015F28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40015F60;
    // 0x40015F28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40015F2C:
    // 0x40015F2C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x40015F30: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x40015F34: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x40015F38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x40015F3C: jal         0x400018BC
    // 0x40015F40: swc1        $f18, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f18.u32l;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_6;
    // 0x40015F40: swc1        $f18, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f18.u32l;
    after_6:
    // 0x40015F44: jal         0x40008F98
    // 0x40015F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_8F98(rdram, ctx);
        goto after_7;
    // 0x40015F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x40015F4C: b           L_40015F60
    // 0x40015F50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40015F60;
    // 0x40015F50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40015F54:
    // 0x40015F54: jal         0x4000CB84
    // 0x40015F58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_8;
    // 0x40015F58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x40015F5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40015F60:
    // 0x40015F60: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x40015F64: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x40015F68: jr          $ra
    // 0x40015F6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x40015F6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_15F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40015F70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40015F74: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40015F78: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x40015F7C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x40015F80: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x40015F84: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x40015F88: jal         0x40015E34
    // 0x40015F8C: addiu       $a2, $zero, 0x559
    ctx->r6 = ADD32(0, 0X559);
    ovl_actor_main_15E34(rdram, ctx);
        goto after_0;
    // 0x40015F8C: addiu       $a2, $zero, 0x559
    ctx->r6 = ADD32(0, 0X559);
    after_0:
    // 0x40015F90: addiu       $t6, $s1, 0x324
    ctx->r14 = ADD32(ctx->r17, 0X324);
    // 0x40015F94: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x40015F98: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40015F9C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x40015FA0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x40015FA4: jal         0x40011BE4
    // 0x40015FA8: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_actor_main_11BE4(rdram, ctx);
        goto after_1;
    // 0x40015FA8: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_1:
    // 0x40015FAC: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x40015FB0: bne         $s0, $at, L_40015FE4
    if (ctx->r16 != ctx->r1) {
        // 0x40015FB4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_40015FE4;
    }
    // 0x40015FB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40015FB8: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40015FBC: lwc1        $f4, -0xFB8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0XFB8);
    // 0x40015FC0: addiu       $a1, $zero, 0x73
    ctx->r5 = ADD32(0, 0X73);
    // 0x40015FC4: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x40015FC8: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x40015FCC: jal         0x4000120C
    // 0x40015FD0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_2;
    // 0x40015FD0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x40015FD4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40015FD8: addiu       $a1, $zero, 0x248
    ctx->r5 = ADD32(0, 0X248);
    // 0x40015FDC: jal         0x4000115C
    // 0x40015FE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_3;
    // 0x40015FE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
L_40015FE4:
    // 0x40015FE4: slti        $at, $s0, 0xD
    ctx->r1 = SIGNED(ctx->r16) < 0XD ? 1 : 0;
    // 0x40015FE8: beq         $at, $zero, L_40016004
    if (ctx->r1 == 0) {
        // 0x40015FEC: slti        $at, $s0, 0xF
        ctx->r1 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
            goto L_40016004;
    }
    // 0x40015FEC: slti        $at, $s0, 0xF
    ctx->r1 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x40015FF0: jal         0x40011E8C
    // 0x40015FF4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_11E8C(rdram, ctx);
        goto after_4;
    // 0x40015FF4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x40015FF8: b           L_40016020
    // 0x40015FFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40016020;
    // 0x40015FFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40016000: slti        $at, $s0, 0xF
    ctx->r1 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
L_40016004:
    // 0x40016004: bne         $at, $zero, L_4001601C
    if (ctx->r1 != 0) {
        // 0x40016008: slti        $at, $s0, 0x15
        ctx->r1 = SIGNED(ctx->r16) < 0X15 ? 1 : 0;
            goto L_4001601C;
    }
    // 0x40016008: slti        $at, $s0, 0x15
    ctx->r1 = SIGNED(ctx->r16) < 0X15 ? 1 : 0;
    // 0x4001600C: beq         $at, $zero, L_4001601C
    if (ctx->r1 == 0) {
        // 0x40016010: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4001601C;
    }
    // 0x40016010: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40016014: jal         0x40011F94
    // 0x40016018: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    ovl_actor_main_11F94(rdram, ctx);
        goto after_5;
    // 0x40016018: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_5:
L_4001601C:
    // 0x4001601C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40016020:
    // 0x40016020: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x40016024: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x40016028: jr          $ra
    // 0x4001602C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4001602C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_16030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40016030: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40016034: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40016038: jal         0x40001A8C
    // 0x4001603C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_0;
    // 0x4001603C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x40016040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40016044: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40016048: jr          $ra
    // 0x4001604C: nop

    return;
    // 0x4001604C: nop

;}
RECOMP_FUNC void ovl_actor_main_16050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40016050: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40016054: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40016058: lw          $a1, 0xC0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC0);
    // 0x4001605C: jal         0x40011944
    // 0x40016060: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_11944(rdram, ctx);
        goto after_0;
    // 0x40016060: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x40016064: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40016068: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4001606C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40016070: sw          $t6, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r14;
    // 0x40016074: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
    // 0x40016078: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4001607C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x40016080: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x40016084: jal         0x40006EEC
    // 0x40016088: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_6EEC(rdram, ctx);
        goto after_1;
    // 0x40016088: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x4001608C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40016090: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40016094: jr          $ra
    // 0x40016098: nop

    return;
    // 0x40016098: nop

;}
RECOMP_FUNC void ovl_actor_main_1609C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001609C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x400160A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x400160A4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x400160A8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x400160AC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x400160B0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x400160B4: jal         0x40015E34
    // 0x400160B8: addiu       $a2, $zero, 0x55A
    ctx->r6 = ADD32(0, 0X55A);
    ovl_actor_main_15E34(rdram, ctx);
        goto after_0;
    // 0x400160B8: addiu       $a2, $zero, 0x55A
    ctx->r6 = ADD32(0, 0X55A);
    after_0:
    // 0x400160BC: addiu       $t6, $s1, 0x324
    ctx->r14 = ADD32(ctx->r17, 0X324);
    // 0x400160C0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x400160C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400160C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x400160CC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x400160D0: jal         0x40011BE4
    // 0x400160D4: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_actor_main_11BE4(rdram, ctx);
        goto after_1;
    // 0x400160D4: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_1:
    // 0x400160D8: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x400160DC: bne         $s0, $at, L_40016110
    if (ctx->r16 != ctx->r1) {
        // 0x400160E0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_40016110;
    }
    // 0x400160E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400160E4: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400160E8: lwc1        $f4, -0xFB4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0XFB4);
    // 0x400160EC: addiu       $a1, $zero, 0x73
    ctx->r5 = ADD32(0, 0X73);
    // 0x400160F0: lui         $a2, 0x4296
    ctx->r6 = S32(0X4296 << 16);
    // 0x400160F4: lui         $a3, 0x425C
    ctx->r7 = S32(0X425C << 16);
    // 0x400160F8: jal         0x4000120C
    // 0x400160FC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_2;
    // 0x400160FC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x40016100: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40016104: addiu       $a1, $zero, 0x248
    ctx->r5 = ADD32(0, 0X248);
    // 0x40016108: jal         0x4000115C
    // 0x4001610C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_3;
    // 0x4001610C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
L_40016110:
    // 0x40016110: slti        $at, $s0, 0xD
    ctx->r1 = SIGNED(ctx->r16) < 0XD ? 1 : 0;
    // 0x40016114: beq         $at, $zero, L_40016130
    if (ctx->r1 == 0) {
        // 0x40016118: slti        $at, $s0, 0xF
        ctx->r1 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
            goto L_40016130;
    }
    // 0x40016118: slti        $at, $s0, 0xF
    ctx->r1 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x4001611C: jal         0x40011E8C
    // 0x40016120: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_11E8C(rdram, ctx);
        goto after_4;
    // 0x40016120: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x40016124: b           L_4001614C
    // 0x40016128: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001614C;
    // 0x40016128: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4001612C: slti        $at, $s0, 0xF
    ctx->r1 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
L_40016130:
    // 0x40016130: bne         $at, $zero, L_40016148
    if (ctx->r1 != 0) {
        // 0x40016134: slti        $at, $s0, 0x15
        ctx->r1 = SIGNED(ctx->r16) < 0X15 ? 1 : 0;
            goto L_40016148;
    }
    // 0x40016134: slti        $at, $s0, 0x15
    ctx->r1 = SIGNED(ctx->r16) < 0X15 ? 1 : 0;
    // 0x40016138: beq         $at, $zero, L_40016148
    if (ctx->r1 == 0) {
        // 0x4001613C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_40016148;
    }
    // 0x4001613C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40016140: jal         0x40011F94
    // 0x40016144: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    ovl_actor_main_11F94(rdram, ctx);
        goto after_5;
    // 0x40016144: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_5:
L_40016148:
    // 0x40016148: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001614C:
    // 0x4001614C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x40016150: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x40016154: jr          $ra
    // 0x40016158: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x40016158: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_1615C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001615C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40016160: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x40016164: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40016168: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001616C: beq         $a1, $at, L_400161A0
    if (ctx->r5 == ctx->r1) {
        // 0x40016170: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_400161A0;
    }
    // 0x40016170: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40016174: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x40016178: beq         $a1, $at, L_400161E8
    if (ctx->r5 == ctx->r1) {
        // 0x4001617C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400161E8;
    }
    // 0x4001617C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016180: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x40016184: beq         $a1, $at, L_4001620C
    if (ctx->r5 == ctx->r1) {
        // 0x40016188: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001620C;
    }
    // 0x40016188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001618C: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x40016190: beq         $a1, $at, L_4001623C
    if (ctx->r5 == ctx->r1) {
        // 0x40016194: nop
    
            goto L_4001623C;
    }
    // 0x40016194: nop

    // 0x40016198: b           L_40016248
    // 0x4001619C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40016248;
    // 0x4001619C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_400161A0:
    // 0x400161A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400161A4: addiu       $a1, $zero, 0x55B
    ctx->r5 = ADD32(0, 0X55B);
    // 0x400161A8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400161AC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400161B0: jal         0x40008D64
    // 0x400161B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x400161B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x400161B8: addiu       $a1, $s0, 0x324
    ctx->r5 = ADD32(ctx->r16, 0X324);
    // 0x400161BC: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    // 0x400161C0: jal         0x40011D40
    // 0x400161C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11D40(rdram, ctx);
        goto after_1;
    // 0x400161C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x400161C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x400161CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400161D0: addiu       $a1, $zero, 0x39D
    ctx->r5 = ADD32(0, 0X39D);
    // 0x400161D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x400161D8: jal         0x4000115C
    // 0x400161DC: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    ovl_actor_main_115C(rdram, ctx);
        goto after_2;
    // 0x400161DC: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    after_2:
    // 0x400161E0: b           L_40016248
    // 0x400161E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40016248;
    // 0x400161E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_400161E8:
    // 0x400161E8: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400161EC: lwc1        $f6, -0xFB0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0XFB0);
    // 0x400161F0: addiu       $a1, $zero, 0x4D
    ctx->r5 = ADD32(0, 0X4D);
    // 0x400161F4: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x400161F8: lui         $a3, 0x430C
    ctx->r7 = S32(0X430C << 16);
    // 0x400161FC: jal         0x4000120C
    // 0x40016200: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_3;
    // 0x40016200: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x40016204: b           L_40016248
    // 0x40016208: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40016248;
    // 0x40016208: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001620C:
    // 0x4001620C: addiu       $a1, $zero, 0x246
    ctx->r5 = ADD32(0, 0X246);
    // 0x40016210: jal         0x4000115C
    // 0x40016214: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_4;
    // 0x40016214: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x40016218: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x4001621C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x40016220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016224: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40016228: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4001622C: jal         0x4001A598
    // 0x40016230: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    ovl_actor_main_1A598(rdram, ctx);
        goto after_5;
    // 0x40016230: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_5:
    // 0x40016234: b           L_40016248
    // 0x40016238: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40016248;
    // 0x40016238: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001623C:
    // 0x4001623C: jal         0x4000CB84
    // 0x40016240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_6;
    // 0x40016240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x40016244: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40016248:
    // 0x40016248: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4001624C: jr          $ra
    // 0x40016250: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x40016250: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_16254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40016254: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40016258: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4001625C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40016260: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40016264: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40016268: beq         $a1, $at, L_400162B4
    if (ctx->r5 == ctx->r1) {
        // 0x4001626C: sw          $a1, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r5;
            goto L_400162B4;
    }
    // 0x4001626C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x40016270: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x40016274: beq         $a1, $at, L_40016320
    if (ctx->r5 == ctx->r1) {
        // 0x40016278: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40016320;
    }
    // 0x40016278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001627C: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x40016280: beq         $a1, $at, L_4001633C
    if (ctx->r5 == ctx->r1) {
        // 0x40016284: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001633C;
    }
    // 0x40016284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016288: addiu       $at, $zero, 0xAF
    ctx->r1 = ADD32(0, 0XAF);
    // 0x4001628C: beq         $a1, $at, L_40016388
    if (ctx->r5 == ctx->r1) {
        // 0x40016290: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40016388;
    }
    // 0x40016290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016294: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    // 0x40016298: beq         $a1, $at, L_400163B0
    if (ctx->r5 == ctx->r1) {
        // 0x4001629C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400163B0;
    }
    // 0x4001629C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400162A0: addiu       $at, $zero, 0xEB
    ctx->r1 = ADD32(0, 0XEB);
    // 0x400162A4: beq         $a1, $at, L_400163C8
    if (ctx->r5 == ctx->r1) {
        // 0x400162A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400163C8;
    }
    // 0x400162A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400162AC: b           L_400163E0
    // 0x400162B0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
        goto L_400163E0;
    // 0x400162B0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
L_400162B4:
    // 0x400162B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400162B8: addiu       $a1, $zero, 0x55F
    ctx->r5 = ADD32(0, 0X55F);
    // 0x400162BC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400162C0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400162C4: jal         0x40008D64
    // 0x400162C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x400162C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x400162CC: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400162D0: lwc1        $f4, -0xFAC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0XFAC);
    // 0x400162D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400162D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x400162DC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400162E0: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x400162E4: jal         0x4000120C
    // 0x400162E8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_1;
    // 0x400162E8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x400162EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400162F0: addiu       $a1, $zero, 0x24A
    ctx->r5 = ADD32(0, 0X24A);
    // 0x400162F4: jal         0x4000115C
    // 0x400162F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_2;
    // 0x400162F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x400162FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016300: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x40016304: jal         0x40009000
    // 0x40016308: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_3;
    // 0x40016308: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x4001630C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x40016310: jal         0x40000E20
    // 0x40016314: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    ovl_actor_main_E20(rdram, ctx);
        goto after_4;
    // 0x40016314: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_4:
    // 0x40016318: b           L_400163E0
    // 0x4001631C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
        goto L_400163E0;
    // 0x4001631C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
L_40016320:
    // 0x40016320: addiu       $a1, $s0, 0x324
    ctx->r5 = ADD32(ctx->r16, 0X324);
    // 0x40016324: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
    // 0x40016328: addiu       $a2, $zero, 0x559
    ctx->r6 = ADD32(0, 0X559);
    // 0x4001632C: jal         0x40011DA0
    // 0x40016330: lui         $a3, 0x41D8
    ctx->r7 = S32(0X41D8 << 16);
    ovl_actor_main_11DA0(rdram, ctx);
        goto after_5;
    // 0x40016330: lui         $a3, 0x41D8
    ctx->r7 = S32(0X41D8 << 16);
    after_5:
    // 0x40016334: b           L_400163E0
    // 0x40016338: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
        goto L_400163E0;
    // 0x40016338: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
L_4001633C:
    // 0x4001633C: jal         0x40011F94
    // 0x40016340: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    ovl_actor_main_11F94(rdram, ctx);
        goto after_6;
    // 0x40016340: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_6:
    // 0x40016344: beq         $v0, $zero, L_40016378
    if (ctx->r2 == 0) {
        // 0x40016348: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40016378;
    }
    // 0x40016348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001634C: addiu       $a1, $zero, 0x55C
    ctx->r5 = ADD32(0, 0X55C);
    // 0x40016350: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40016354: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40016358: jal         0x40008D64
    // 0x4001635C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_7;
    // 0x4001635C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x40016360: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x40016364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016368: jal         0x40011B50
    // 0x4001636C: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    ovl_actor_main_11B50(rdram, ctx);
        goto after_8;
    // 0x4001636C: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    after_8:
    // 0x40016370: b           L_400163E0
    // 0x40016374: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
        goto L_400163E0;
    // 0x40016374: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
L_40016378:
    // 0x40016378: jal         0x4000CB84
    // 0x4001637C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_9;
    // 0x4001637C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x40016380: b           L_400163E0
    // 0x40016384: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
        goto L_400163E0;
    // 0x40016384: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
L_40016388:
    // 0x40016388: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x4001638C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40016390: jal         0x400018BC
    // 0x40016394: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_10;
    // 0x40016394: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x40016398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001639C: addiu       $a1, $zero, 0x39E
    ctx->r5 = ADD32(0, 0X39E);
    // 0x400163A0: jal         0x4000115C
    // 0x400163A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_11;
    // 0x400163A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x400163A8: b           L_400163E0
    // 0x400163AC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
        goto L_400163E0;
    // 0x400163AC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
L_400163B0:
    // 0x400163B0: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x400163B4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x400163B8: jal         0x400018BC
    // 0x400163BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_12;
    // 0x400163BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x400163C0: b           L_400163E0
    // 0x400163C4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
        goto L_400163E0;
    // 0x400163C4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
L_400163C8:
    // 0x400163C8: addiu       $a1, $zero, 0x55E
    ctx->r5 = ADD32(0, 0X55E);
    // 0x400163CC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400163D0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400163D4: jal         0x40008D64
    // 0x400163D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_13;
    // 0x400163D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_13:
    // 0x400163DC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
L_400163E0:
    // 0x400163E0: nop

    // 0x400163E4: slti        $at, $t7, 0x40
    ctx->r1 = SIGNED(ctx->r15) < 0X40 ? 1 : 0;
    // 0x400163E8: beq         $at, $zero, L_40016454
    if (ctx->r1 == 0) {
        // 0x400163EC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_40016454;
    }
    // 0x400163EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x400163F0: jal         0x40011E8C
    // 0x400163F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11E8C(rdram, ctx);
        goto after_14;
    // 0x400163F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x400163F8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x400163FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40016400: slti        $at, $t8, 0x3C
    ctx->r1 = SIGNED(ctx->r24) < 0X3C ? 1 : 0;
    // 0x40016404: bne         $at, $zero, L_40016450
    if (ctx->r1 != 0) {
        // 0x40016408: or          $a1, $t8, $zero
        ctx->r5 = ctx->r24 | 0;
            goto L_40016450;
    }
    // 0x40016408: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x4001640C: addiu       $v0, $s0, 0x324
    ctx->r2 = ADD32(ctx->r16, 0X324);
    // 0x40016410: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x40016414: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x40016418: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x4001641C: jal         0x40011BE4
    // 0x40016420: lui         $a3, 0x41D8
    ctx->r7 = S32(0X41D8 << 16);
    ovl_actor_main_11BE4(rdram, ctx);
        goto after_15;
    // 0x40016420: lui         $a3, 0x41D8
    ctx->r7 = S32(0X41D8 << 16);
    after_15:
    // 0x40016424: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x40016428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001642C: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x40016430: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40016434: xori        $v1, $v0, 0xB
    ctx->r3 = ctx->r2 ^ 0XB;
    // 0x40016438: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x4001643C: bne         $v1, $zero, L_40016450
    if (ctx->r3 != 0) {
        // 0x40016440: sw          $t9, 0x8($a1)
        MEM_W(0X8, ctx->r5) = ctx->r25;
            goto L_40016450;
    }
    // 0x40016440: sw          $t9, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r25;
    // 0x40016444: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x40016448: jal         0x400018BC
    // 0x4001644C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_16;
    // 0x4001644C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_16:
L_40016450:
    // 0x40016450: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40016454:
    // 0x40016454: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x40016458: jr          $ra
    // 0x4001645C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x4001645C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_actor_main_16460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40016460: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40016464: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40016468: bne         $a1, $at, L_4001648C
    if (ctx->r5 != ctx->r1) {
        // 0x4001646C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_4001648C;
    }
    // 0x4001646C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40016470: addiu       $a1, $zero, 0x55D
    ctx->r5 = ADD32(0, 0X55D);
    // 0x40016474: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40016478: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001647C: jal         0x40008D64
    // 0x40016480: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40016480: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40016484: b           L_400164E4
    // 0x40016488: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_400164E4;
    // 0x40016488: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4001648C:
    // 0x4001648C: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x40016490: bne         $a1, $at, L_400164E4
    if (ctx->r5 != ctx->r1) {
        // 0x40016494: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_400164E4;
    }
    // 0x40016494: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40016498: lhu         $t6, 0x20($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X20);
    // 0x4001649C: addiu       $a1, $zero, 0x55D
    ctx->r5 = ADD32(0, 0X55D);
    // 0x400164A0: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x400164A4: bne         $t7, $zero, L_400164D4
    if (ctx->r15 != 0) {
        // 0x400164A8: lui         $a2, 0xBF80
        ctx->r6 = S32(0XBF80 << 16);
            goto L_400164D4;
    }
    // 0x400164A8: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    // 0x400164AC: lw          $t8, 0xCC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XCC);
    // 0x400164B0: addiu       $a1, $zero, 0x55D
    ctx->r5 = ADD32(0, 0X55D);
    // 0x400164B4: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x400164B8: sw          $t9, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r25;
    // 0x400164BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x400164C0: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    // 0x400164C4: jal         0x40008D64
    // 0x400164C8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_1;
    // 0x400164C8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_1:
    // 0x400164CC: b           L_400164E4
    // 0x400164D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_400164E4;
    // 0x400164D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400164D4:
    // 0x400164D4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400164D8: jal         0x40008D64
    // 0x400164DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_2;
    // 0x400164DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x400164E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400164E4:
    // 0x400164E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x400164E8: jr          $ra
    // 0x400164EC: nop

    return;
    // 0x400164EC: nop

;}
RECOMP_FUNC void ovl_actor_main_164F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400164F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x400164F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400164F8: bne         $a1, $at, L_40016514
    if (ctx->r5 != ctx->r1) {
        // 0x400164FC: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40016514;
    }
    // 0x400164FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40016500: addiu       $a1, $zero, 0x55E
    ctx->r5 = ADD32(0, 0X55E);
    // 0x40016504: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40016508: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001650C: jal         0x40008D64
    // 0x40016510: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40016510: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_40016514:
    // 0x40016514: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40016518: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4001651C: jr          $ra
    // 0x40016520: nop

    return;
    // 0x40016520: nop

;}
RECOMP_FUNC void ovl_actor_main_16524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40016524: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40016528: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001652C: bne         $a1, $at, L_40016548
    if (ctx->r5 != ctx->r1) {
        // 0x40016530: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40016548;
    }
    // 0x40016530: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40016534: addiu       $a1, $zero, 0x55F
    ctx->r5 = ADD32(0, 0X55F);
    // 0x40016538: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001653C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40016540: jal         0x40008D64
    // 0x40016544: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40016544: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_40016548:
    // 0x40016548: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001654C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40016550: jr          $ra
    // 0x40016554: nop

    return;
    // 0x40016554: nop

;}
RECOMP_FUNC void ovl_actor_main_16558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40016558: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4001655C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40016560: bne         $a1, $at, L_4001657C
    if (ctx->r5 != ctx->r1) {
        // 0x40016564: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_4001657C;
    }
    // 0x40016564: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40016568: addiu       $a1, $zero, 0x56B
    ctx->r5 = ADD32(0, 0X56B);
    // 0x4001656C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40016570: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40016574: jal         0x40008D64
    // 0x40016578: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40016578: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_4001657C:
    // 0x4001657C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40016580: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40016584: jr          $ra
    // 0x40016588: nop

    return;
    // 0x40016588: nop

;}
