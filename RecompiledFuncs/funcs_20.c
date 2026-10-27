#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80042CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042CC8: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x80042CCC: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80042CD0: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x80042CD4: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x80042CD8: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x80042CDC: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x80042CE0: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x80042CE4: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80042CE8: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80042CEC: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80042CF0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80042CF4: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80042CF8: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x80042CFC: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80042D00: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80042D04: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80042D08: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80042D0C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80042D10: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80042D14: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80042D18: jal         0x80007774
    // 0x80042D1C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80042D1C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80042D20: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x80042D24: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80042D28: lw          $s1, 0x0($v1)
    ctx->r17 = MEM_W(ctx->r3, 0X0);
    // 0x80042D2C: addiu       $s3, $s3, -0x3C98
    ctx->r19 = ADD32(ctx->r19, -0X3C98);
    // 0x80042D30: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x80042D34: sw          $s4, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r20;
    // 0x80042D38: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80042D3C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80042D40: jal         0x80056C2C
    // 0x80042D44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80056C2C(rdram, ctx);
        goto after_1;
    // 0x80042D44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80042D48: sh          $zero, 0x0($s3)
    MEM_H(0X0, ctx->r19) = 0;
    // 0x80042D4C: sh          $zero, 0x2($s3)
    MEM_H(0X2, ctx->r19) = 0;
    // 0x80042D50: sh          $zero, 0x4($s3)
    MEM_H(0X4, ctx->r19) = 0;
    // 0x80042D54: sb          $zero, 0x6($s3)
    MEM_B(0X6, ctx->r19) = 0;
    // 0x80042D58: sb          $zero, 0x7($s3)
    MEM_B(0X7, ctx->r19) = 0;
    // 0x80042D5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80042D60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80042D64: jal         0x80056C2C
    // 0x80042D68: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_80056C2C(rdram, ctx);
        goto after_2;
    // 0x80042D68: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_2:
    // 0x80042D6C: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80042D70: beq         $at, $zero, L_80042DA0
    if (ctx->r1 == 0) {
        // 0x80042D74: addiu       $s2, $zero, 0x3
        ctx->r18 = ADD32(0, 0X3);
            goto L_80042DA0;
    }
    // 0x80042D74: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x80042D78: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x80042D7C: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x80042D80: addu        $s2, $s2, $t6
    ctx->r18 = ADD32(ctx->r18, ctx->r14);
    // 0x80042D84: lw          $s2, -0x4284($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X4284);
    // 0x80042D88: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80042D8C: div         $zero, $s2, $at
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r1)));
    // 0x80042D90: mflo        $t7
    ctx->r15 = lo;
    // 0x80042D94: addiu       $s2, $t7, 0x1
    ctx->r18 = ADD32(ctx->r15, 0X1);
    // 0x80042D98: b           L_80042DA0
    // 0x80042D9C: nop

        goto L_80042DA0;
    // 0x80042D9C: nop

L_80042DA0:
    // 0x80042DA0: jal         0x8005C3A8
    // 0x80042DA4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005C3A8(rdram, ctx);
        goto after_3;
    // 0x80042DA4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x80042DA8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80042DAC: addiu       $a0, $a0, 0x1A44
    ctx->r4 = ADD32(ctx->r4, 0X1A44);
    // 0x80042DB0: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80042DB4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80042DB8: sllv        $v1, $t8, $s1
    ctx->r3 = S32(ctx->r24 << (ctx->r17 & 31));
    // 0x80042DBC: and         $t6, $v1, $t9
    ctx->r14 = ctx->r3 & ctx->r25;
    // 0x80042DC0: bne         $t6, $zero, L_80042E1C
    if (ctx->r14 != 0) {
        // 0x80042DC4: slti        $at, $s2, 0x5
        ctx->r1 = SIGNED(ctx->r18) < 0X5 ? 1 : 0;
            goto L_80042E1C;
    }
    // 0x80042DC4: slti        $at, $s2, 0x5
    ctx->r1 = SIGNED(ctx->r18) < 0X5 ? 1 : 0;
    // 0x80042DC8: bne         $at, $zero, L_80042DD4
    if (ctx->r1 != 0) {
        // 0x80042DCC: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_80042DD4;
    }
    // 0x80042DCC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80042DD0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_80042DD4:
    // 0x80042DD4: slti        $at, $s2, 0x4
    ctx->r1 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x80042DD8: bne         $at, $zero, L_80042DF4
    if (ctx->r1 != 0) {
        // 0x80042DDC: slti        $at, $s2, 0x3
        ctx->r1 = SIGNED(ctx->r18) < 0X3 ? 1 : 0;
            goto L_80042DF4;
    }
    // 0x80042DDC: slti        $at, $s2, 0x3
    ctx->r1 = SIGNED(ctx->r18) < 0X3 ? 1 : 0;
    // 0x80042DE0: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x80042DE4: nop

    // 0x80042DE8: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x80042DEC: sw          $t9, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r25;
    // 0x80042DF0: slti        $at, $s2, 0x3
    ctx->r1 = SIGNED(ctx->r18) < 0X3 ? 1 : 0;
L_80042DF4:
    // 0x80042DF4: bne         $at, $zero, L_80042E0C
    if (ctx->r1 != 0) {
        // 0x80042DF8: nop
    
            goto L_80042E0C;
    }
    // 0x80042DF8: nop

    // 0x80042DFC: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x80042E00: sw          $s4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r20;
    // 0x80042E04: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x80042E08: sw          $t7, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r15;
L_80042E0C:
    // 0x80042E0C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80042E10: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80042E14: or          $t9, $t8, $v1
    ctx->r25 = ctx->r24 | ctx->r3;
    // 0x80042E18: sw          $t9, 0x1A44($at)
    MEM_W(0X1A44, ctx->r1) = ctx->r25;
L_80042E1C:
    // 0x80042E1C: jal         0x80007AB0
    // 0x80042E20: nop

    func_80007AB0(rdram, ctx);
        goto after_4;
    // 0x80042E20: nop

    after_4:
    // 0x80042E24: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x80042E28: subu        $t6, $t6, $s1
    ctx->r14 = SUB32(ctx->r14, ctx->r17);
    // 0x80042E2C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80042E30: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80042E34: addiu       $t7, $t7, -0x7688
    ctx->r15 = ADD32(ctx->r15, -0X7688);
    // 0x80042E38: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80042E3C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x80042E40: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x80042E44: addu        $s2, $t6, $t7
    ctx->r18 = ADD32(ctx->r14, ctx->r15);
    // 0x80042E48: lw          $t8, 0x2C($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X2C);
L_80042E4C:
    // 0x80042E4C: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x80042E50: lw          $s4, -0x3CA0($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X3CA0);
    // 0x80042E54: bltz        $t8, L_80043090
    if (SIGNED(ctx->r24) < 0) {
        // 0x80042E58: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80043090;
    }
    // 0x80042E58: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80042E5C: sh          $zero, 0x0($s3)
    MEM_H(0X0, ctx->r19) = 0;
    // 0x80042E60: sh          $zero, 0x2($s3)
    MEM_H(0X2, ctx->r19) = 0;
    // 0x80042E64: sh          $zero, 0x4($s3)
    MEM_H(0X4, ctx->r19) = 0;
    // 0x80042E68: sb          $zero, 0x6($s3)
    MEM_B(0X6, ctx->r19) = 0;
    // 0x80042E6C: jal         0x8002D000
    // 0x80042E70: sb          $zero, 0x7($s3)
    MEM_B(0X7, ctx->r19) = 0;
    func_8002D000(rdram, ctx);
        goto after_5;
    // 0x80042E70: sb          $zero, 0x7($s3)
    MEM_B(0X7, ctx->r19) = 0;
    after_5:
    // 0x80042E74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80042E78: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80042E7C: jal         0x8004A0A0
    // 0x80042E80: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    func_8004A0A0(rdram, ctx);
        goto after_6;
    // 0x80042E80: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    after_6:
    // 0x80042E84: bne         $v0, $zero, L_80042F38
    if (ctx->r2 != 0) {
        // 0x80042E88: nop
    
            goto L_80042F38;
    }
    // 0x80042E88: nop

    // 0x80042E8C: lwc1        $f0, 0x7C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80042E90: nop

    // 0x80042E94: c.lt.s      $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f0.fl < ctx->f26.fl;
    // 0x80042E98: nop

    // 0x80042E9C: bc1t        L_80042F38
    if (c1cs) {
        // 0x80042EA0: nop
    
            goto L_80042F38;
    }
    // 0x80042EA0: nop

    // 0x80042EA4: lwc1        $f2, 0x84($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80042EA8: nop

    // 0x80042EAC: c.lt.s      $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f2.fl < ctx->f26.fl;
    // 0x80042EB0: nop

    // 0x80042EB4: bc1t        L_80042F38
    if (c1cs) {
        // 0x80042EB8: nop
    
            goto L_80042F38;
    }
    // 0x80042EB8: nop

    // 0x80042EBC: div.s       $f4, $f2, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = DIV_S(ctx->f2.fl, ctx->f28.fl);
    // 0x80042EC0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80042EC4: nop

    // 0x80042EC8: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80042ECC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80042ED0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80042ED4: nop

    // 0x80042ED8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80042EDC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80042EE0: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x80042EE4: div.s       $f8, $f0, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f28.fl);
    // 0x80042EE8: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x80042EEC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80042EF0: nop

    // 0x80042EF4: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80042EF8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80042EFC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80042F00: addiu       $at, $zero, 0xF0
    ctx->r1 = ADD32(0, 0XF0);
    // 0x80042F04: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80042F08: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x80042F0C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80042F10: addu        $v0, $t7, $t9
    ctx->r2 = ADD32(ctx->r15, ctx->r25);
    // 0x80042F14: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x80042F18: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80042F1C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80042F20: lhu         $t8, -0x75A8($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X75A8);
    // 0x80042F24: nop

    // 0x80042F28: andi        $t7, $t8, 0xF0
    ctx->r15 = ctx->r24 & 0XF0;
    // 0x80042F2C: beq         $t7, $at, L_80042F38
    if (ctx->r15 == ctx->r1) {
        // 0x80042F30: nop
    
            goto L_80042F38;
    }
    // 0x80042F30: nop

    // 0x80042F34: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
L_80042F38:
    // 0x80042F38: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80042F3C: lw          $v0, -0x3C7C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C7C);
    // 0x80042F40: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80042F44: beq         $v0, $at, L_80042F88
    if (ctx->r2 == ctx->r1) {
        // 0x80042F48: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_80042F88;
    }
    // 0x80042F48: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80042F4C: beq         $v0, $at, L_80042F88
    if (ctx->r2 == ctx->r1) {
        // 0x80042F50: lui         $t9, 0x800B
        ctx->r25 = S32(0X800B << 16);
            goto L_80042F88;
    }
    // 0x80042F50: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80042F54: lw          $t9, -0x3C8C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3C8C);
    // 0x80042F58: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80042F5C: andi        $t6, $t9, 0x400
    ctx->r14 = ctx->r25 & 0X400;
    // 0x80042F60: beq         $t6, $zero, L_80042F70
    if (ctx->r14 == 0) {
        // 0x80042F64: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_80042F70;
    }
    // 0x80042F64: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80042F68: b           L_80042F70
    // 0x80042F6C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80042F70;
    // 0x80042F6C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80042F70:
    // 0x80042F70: beq         $v1, $zero, L_80042F88
    if (ctx->r3 == 0) {
        // 0x80042F74: nop
    
            goto L_80042F88;
    }
    // 0x80042F74: nop

    // 0x80042F78: lw          $t8, -0x3C90($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C90);
    // 0x80042F7C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80042F80: beq         $t8, $at, L_80042FA8
    if (ctx->r24 == ctx->r1) {
        // 0x80042F84: nop
    
            goto L_80042FA8;
    }
    // 0x80042F84: nop

L_80042F88:
    // 0x80042F88: lw          $a0, 0xC($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XC);
    // 0x80042F8C: jal         0x8004081C
    // 0x80042F90: nop

    func_8004081C(rdram, ctx);
        goto after_7;
    // 0x80042F90: nop

    after_7:
    // 0x80042F94: beq         $v0, $zero, L_80042FB0
    if (ctx->r2 == 0) {
        // 0x80042F98: slti        $at, $s1, 0x4
        ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
            goto L_80042FB0;
    }
    // 0x80042F98: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80042F9C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80042FA0: lw          $v0, -0x3C7C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C7C);
    // 0x80042FA4: nop

L_80042FA8:
    // 0x80042FA8: b           L_80042FF0
    // 0x80042FAC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80042FF0;
    // 0x80042FAC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80042FB0:
    // 0x80042FB0: beq         $at, $zero, L_80042FE8
    if (ctx->r1 == 0) {
        // 0x80042FB4: lui         $v0, 0x800B
        ctx->r2 = S32(0X800B << 16);
            goto L_80042FE8;
    }
    // 0x80042FB4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80042FB8: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x80042FBC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80042FC0: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x80042FC4: lw          $v1, -0x4284($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4284);
    // 0x80042FC8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80042FCC: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x80042FD0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80042FD4: lw          $v0, -0x3C7C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C7C);
    // 0x80042FD8: mflo        $t9
    ctx->r25 = lo;
    // 0x80042FDC: addiu       $v1, $t9, 0x1
    ctx->r3 = ADD32(ctx->r25, 0X1);
    // 0x80042FE0: b           L_80042FF4
    // 0x80042FE4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
        goto L_80042FF4;
    // 0x80042FE4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_80042FE8:
    // 0x80042FE8: lw          $v0, -0x3C7C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C7C);
    // 0x80042FEC: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_80042FF0:
    // 0x80042FF0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_80042FF4:
    // 0x80042FF4: bne         $v0, $at, L_8004300C
    if (ctx->r2 != ctx->r1) {
        // 0x80042FF8: lui         $t6, 0x800B
        ctx->r14 = S32(0X800B << 16);
            goto L_8004300C;
    }
    // 0x80042FF8: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80042FFC: lw          $t6, -0x3CA0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3CA0);
    // 0x80043000: nop

    // 0x80043004: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x80043008: bne         $at, $zero, L_80043090
    if (ctx->r1 != 0) {
        // 0x8004300C: addiu       $t7, $zero, 0x8
        ctx->r15 = ADD32(0, 0X8);
            goto L_80043090;
    }
L_8004300C:
    // 0x8004300C: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x80043010: subu        $t9, $t7, $v1
    ctx->r25 = SUB32(ctx->r15, ctx->r3);
    // 0x80043014: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80043018: div         $zero, $s4, $t6
    lo = S32(S64(S32(ctx->r20)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r20)) % S64(S32(ctx->r14)));
    // 0x8004301C: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x80043020: subu        $t8, $t8, $s1
    ctx->r24 = SUB32(ctx->r24, ctx->r17);
    // 0x80043024: bne         $t6, $zero, L_80043030
    if (ctx->r14 != 0) {
        // 0x80043028: nop
    
            goto L_80043030;
    }
    // 0x80043028: nop

    // 0x8004302C: break       7
    do_break(2147758124);
L_80043030:
    // 0x80043030: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80043034: bne         $t6, $at, L_80043048
    if (ctx->r14 != ctx->r1) {
        // 0x80043038: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80043048;
    }
    // 0x80043038: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004303C: bne         $s4, $at, L_80043048
    if (ctx->r20 != ctx->r1) {
        // 0x80043040: nop
    
            goto L_80043048;
    }
    // 0x80043040: nop

    // 0x80043044: break       6
    do_break(2147758148);
L_80043048:
    // 0x80043048: mfhi        $t7
    ctx->r15 = hi;
    // 0x8004304C: bne         $t8, $t7, L_80043070
    if (ctx->r24 != ctx->r15) {
        // 0x80043050: nop
    
            goto L_80043070;
    }
    // 0x80043050: nop

    // 0x80043054: sw          $s1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r17;
    // 0x80043058: jal         0x80042740
    // 0x8004305C: sw          $s2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r18;
    func_80042740(rdram, ctx);
        goto after_8;
    // 0x8004305C: sw          $s2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r18;
    after_8:
    // 0x80043060: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80043064: lw          $s1, 0xE4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XE4);
    // 0x80043068: lw          $s2, 0x6C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X6C);
    // 0x8004306C: addiu       $s3, $s3, -0x3C98
    ctx->r19 = ADD32(ctx->r19, -0X3C98);
L_80043070:
    // 0x80043070: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x80043074: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80043078: jalr        $t9
    // 0x8004307C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x8004307C: nop

    after_9:
    // 0x80043080: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80043084: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80043088: jal         0x80056C2C
    // 0x8004308C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_80056C2C(rdram, ctx);
        goto after_10;
    // 0x8004308C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_10:
L_80043090:
    // 0x80043090: jal         0x800072B0
    // 0x80043094: nop

    func_800072B0(rdram, ctx);
        goto after_11;
    // 0x80043094: nop

    after_11:
    // 0x80043098: jal         0x80007AB0
    // 0x8004309C: nop

    func_80007AB0(rdram, ctx);
        goto after_12;
    // 0x8004309C: nop

    after_12:
    // 0x800430A0: b           L_80042E4C
    // 0x800430A4: lw          $t8, 0x2C($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X2C);
        goto L_80042E4C;
    // 0x800430A4: lw          $t8, 0x2C($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X2C);
    // 0x800430A8: nop

    // 0x800430AC: nop

    // 0x800430B0: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x800430B4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800430B8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800430BC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800430C0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800430C4: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x800430C8: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800430CC: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x800430D0: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800430D4: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x800430D8: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800430DC: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x800430E0: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x800430E4: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x800430E8: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x800430EC: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x800430F0: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x800430F4: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x800430F8: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x800430FC: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x80043100: jr          $ra
    // 0x80043104: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x80043104: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_80043108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80043108: jr          $ra
    // 0x8004310C: nop

    return;
    // 0x8004310C: nop

;}
RECOMP_FUNC void func_80043110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80043110: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80043114: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x80043118: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8004311C: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x80043120: bne         $t7, $zero, L_80043164
    if (ctx->r15 != 0) {
        // 0x80043124: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80043164;
    }
    // 0x80043124: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80043128: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8004312C: jal         0x8002F188
    // 0x80043130: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8002F188(rdram, ctx);
        goto after_0;
    // 0x80043130: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x80043134: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80043138: lwc1        $f7, 0x5C28($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X5C28);
    // 0x8004313C: lwc1        $f6, 0x5C2C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5C2C);
    // 0x80043140: cvt.d.s     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.d = CVT_D_S(ctx->f20.fl);
    // 0x80043144: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80043148: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8004314C: nop

    // 0x80043150: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x80043154: sub.d       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f8.d - ctx->f4.d;
    // 0x80043158: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x8004315C: b           L_80043180
    // 0x80043160: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
        goto L_80043180;
    // 0x80043160: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
L_80043164:
    // 0x80043164: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80043168: lwc1        $f5, 0x5C30($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5C30);
    // 0x8004316C: lwc1        $f4, 0x5C34($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5C34);
    // 0x80043170: cvt.d.s     $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f8.d = CVT_D_S(ctx->f20.fl);
    // 0x80043174: mul.d       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f8.d, ctx->f4.d);
    // 0x80043178: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x8004317C: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
L_80043180:
    // 0x80043180: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80043184: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80043188: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8004318C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80043190: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80043194: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x80043198: jal         0x800289B4
    // 0x8004319C: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    func_800289B4(rdram, ctx);
        goto after_1;
    // 0x8004319C: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x800431A0: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800431A4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800431A8: mul.s       $f0, $f4, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x800431AC: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x800431B0: nop

    // 0x800431B4: bc1f        L_800431F8
    if (!c1cs) {
        // 0x800431B8: nop
    
            goto L_800431F8;
    }
    // 0x800431B8: nop

    // 0x800431BC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800431C0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800431C4: nop

    // 0x800431C8: add.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x800431CC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800431D0: nop

    // 0x800431D4: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800431D8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800431DC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800431E0: nop

    // 0x800431E4: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800431E8: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x800431EC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800431F0: b           L_80043230
    // 0x800431F4: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
        goto L_80043230;
    // 0x800431F4: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
L_800431F8:
    // 0x800431F8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800431FC: nop

    // 0x80043200: sub.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x80043204: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80043208: nop

    // 0x8004320C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80043210: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80043214: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80043218: nop

    // 0x8004321C: cvt.w.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80043220: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x80043224: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80043228: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x8004322C: nop

L_80043230:
    // 0x80043230: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80043234: nop

    // 0x80043238: mul.s       $f0, $f6, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x8004323C: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x80043240: nop

    // 0x80043244: bc1f        L_80043254
    if (!c1cs) {
        // 0x80043248: nop
    
            goto L_80043254;
    }
    // 0x80043248: nop

    // 0x8004324C: b           L_80043258
    // 0x80043250: add.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f12.fl;
        goto L_80043258;
    // 0x80043250: add.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f12.fl;
L_80043254:
    // 0x80043254: sub.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f12.fl;
L_80043258:
    // 0x80043258: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8004325C: nop

    // 0x80043260: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80043264: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80043268: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004326C: nop

    // 0x80043270: cvt.w.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_S(ctx->f2.fl);
    // 0x80043274: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x80043278: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8004327C: negu        $t6, $t9
    ctx->r14 = SUB32(0, ctx->r25);
    // 0x80043280: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x80043284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80043288: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8004328C: jr          $ra
    // 0x80043290: nop

    return;
    // 0x80043290: nop

;}
RECOMP_FUNC void func_80043294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80043294: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80043298: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x8004329C: addiu       $s3, $s3, -0x3C90
    ctx->r19 = ADD32(ctx->r19, -0X3C90);
    // 0x800432A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800432A4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x800432A8: jal         0x8005BB84
    // 0x800432AC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8005BB84(rdram, ctx);
        goto after_0;
    // 0x800432AC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x800432B0: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x800432B4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800432B8: addiu       $s0, $sp, 0x34
    ctx->r16 = ADD32(ctx->r29, 0X34);
    // 0x800432BC: jal         0x80043110
    // 0x800432C0: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    func_80043110(rdram, ctx);
        goto after_1;
    // 0x800432C0: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x800432C4: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x800432C8: addiu       $s0, $s0, -0x3C8C
    ctx->r16 = ADD32(ctx->r16, -0X3C8C);
    // 0x800432CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800432D0: jal         0x8005BCB4
    // 0x800432D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8005BCB4(rdram, ctx);
        goto after_2;
    // 0x800432D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x800432D8: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x800432DC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800432E0: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x800432E4: beq         $t7, $zero, L_800432F4
    if (ctx->r15 == 0) {
        // 0x800432E8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800432F4;
    }
    // 0x800432E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800432EC: b           L_800432F4
    // 0x800432F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800432F4;
    // 0x800432F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800432F4:
    // 0x800432F4: beq         $v0, $zero, L_8004332C
    if (ctx->r2 == 0) {
        // 0x800432F8: nop
    
            goto L_8004332C;
    }
    // 0x800432F8: nop

    // 0x800432FC: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x80043300: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80043304: bne         $t8, $at, L_8004332C
    if (ctx->r24 != ctx->r1) {
        // 0x80043308: lui         $v0, 0x800B
        ctx->r2 = S32(0X800B << 16);
            goto L_8004332C;
    }
    // 0x80043308: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8004330C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80043310: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80043314: addiu       $v0, $v0, -0x3C98
    ctx->r2 = ADD32(ctx->r2, -0X3C98);
    // 0x80043318: negu        $t6, $t9
    ctx->r14 = SUB32(0, ctx->r25);
    // 0x8004331C: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x80043320: sb          $t8, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r24;
    // 0x80043324: b           L_80043340
    // 0x80043328: sb          $t6, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r14;
        goto L_80043340;
    // 0x80043328: sb          $t6, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r14;
L_8004332C:
    // 0x8004332C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80043330: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80043334: addiu       $v0, $v0, -0x3C98
    ctx->r2 = ADD32(ctx->r2, -0X3C98);
    // 0x80043338: sb          $t9, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r25;
    // 0x8004333C: sb          $t6, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r14;
L_80043340:
    // 0x80043340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80043344: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80043348: jr          $ra
    // 0x8004334C: nop

    return;
    // 0x8004334C: nop

    // 0x80043350: jr          $ra
    // 0x80043354: nop

    return;
    // 0x80043354: nop

;}
RECOMP_FUNC void func_80043358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80043358: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8004335C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80043360: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x80043364: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80043368: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x8004336C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80043370: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80043374: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80043378: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8004337C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80043380: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80043384: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x80043388: jal         0x8002D000
    // 0x8004338C: sw          $a3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r7;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x8004338C: sw          $a3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r7;
    after_0:
    // 0x80043390: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80043394: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80043398: jal         0x8004A0A0
    // 0x8004339C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8004339C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_1:
    // 0x800433A0: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
    // 0x800433A4: bne         $v0, $zero, L_80043460
    if (ctx->r2 != 0) {
        // 0x800433A8: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_80043460;
    }
    // 0x800433A8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800433AC: lw          $v0, 0x1C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X1C);
    // 0x800433B0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800433B4: andi        $t6, $v0, 0x3F
    ctx->r14 = ctx->r2 & 0X3F;
    // 0x800433B8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800433BC: sra         $t7, $v0, 6
    ctx->r15 = S32(SIGNED(ctx->r2) >> 6);
    // 0x800433C0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800433C4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800433C8: andi        $t8, $t7, 0x3F
    ctx->r24 = ctx->r15 & 0X3F;
    // 0x800433CC: mul.s       $f0, $f6, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x800433D0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800433D4: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x800433D8: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800433DC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800433E0: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x800433E4: add.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f14.fl;
    // 0x800433E8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800433EC: mul.s       $f2, $f10, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x800433F0: bc1f        L_80043450
    if (!c1cs) {
        // 0x800433F4: nop
    
            goto L_80043450;
    }
    // 0x800433F4: nop

    // 0x800433F8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800433FC: nop

    // 0x80043400: add.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x80043404: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80043408: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8004340C: nop

    // 0x80043410: bc1f        L_80043450
    if (!c1cs) {
        // 0x80043414: nop
    
            goto L_80043450;
    }
    // 0x80043414: nop

    // 0x80043418: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x8004341C: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80043420: nop

    // 0x80043424: bc1f        L_80043450
    if (!c1cs) {
        // 0x80043428: nop
    
            goto L_80043450;
    }
    // 0x80043428: nop

    // 0x8004342C: add.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x80043430: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80043434: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80043438: addiu       $v0, $v0, -0x3C98
    ctx->r2 = ADD32(ctx->r2, -0X3C98);
    // 0x8004343C: bc1f        L_80043450
    if (!c1cs) {
        // 0x80043440: nop
    
            goto L_80043450;
    }
    // 0x80043440: nop

    // 0x80043444: sb          $zero, 0x6($v0)
    MEM_B(0X6, ctx->r2) = 0;
    // 0x80043448: b           L_80043460
    // 0x8004344C: sb          $zero, 0x7($v0)
    MEM_B(0X7, ctx->r2) = 0;
        goto L_80043460;
    // 0x8004344C: sb          $zero, 0x7($v0)
    MEM_B(0X7, ctx->r2) = 0;
L_80043450:
    // 0x80043450: lw          $s2, 0xC($a3)
    ctx->r18 = MEM_W(ctx->r7, 0XC);
    // 0x80043454: lwc1        $f20, 0x8($a3)
    ctx->f20.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80043458: jal         0x80043294
    // 0x8004345C: nop

    func_80043294(rdram, ctx);
        goto after_2;
    // 0x8004345C: nop

    after_2:
L_80043460:
    // 0x80043460: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80043464: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80043468: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8004346C: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80043470: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80043474: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80043478: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8004347C: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80043480: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80043484: jr          $ra
    // 0x80043488: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x80043488: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_8004348C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004348C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80043490: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80043494: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80043498: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8004349C: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x800434A0: jal         0x800426B8
    // 0x800434A4: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_800426B8(rdram, ctx);
        goto after_0;
    // 0x800434A4: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_0:
    // 0x800434A8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800434AC: bne         $v0, $zero, L_800434C0
    if (ctx->r2 != 0) {
        // 0x800434B0: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_800434C0;
    }
    // 0x800434B0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800434B4: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x800434B8: b           L_80043540
    // 0x800434BC: sw          $t6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->r14;
        goto L_80043540;
    // 0x800434BC: sw          $t6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->r14;
L_800434C0:
    // 0x800434C0: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x800434C4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x800434C8: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x800434CC: beq         $at, $zero, L_800434F8
    if (ctx->r1 == 0) {
        // 0x800434D0: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_800434F8;
    }
    // 0x800434D0: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x800434D4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800434D8: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x800434DC: lw          $v1, -0x4284($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4284);
    // 0x800434E0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800434E4: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x800434E8: mflo        $t8
    ctx->r24 = lo;
    // 0x800434EC: addiu       $v1, $t8, 0x1
    ctx->r3 = ADD32(ctx->r24, 0X1);
    // 0x800434F0: b           L_800434FC
    // 0x800434F4: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
        goto L_800434FC;
    // 0x800434F4: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
L_800434F8:
    // 0x800434F8: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
L_800434FC:
    // 0x800434FC: nop

    // 0x80043500: bgez        $v0, L_80043514
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80043504: andi        $t9, $v0, 0x7
        ctx->r25 = ctx->r2 & 0X7;
            goto L_80043514;
    }
    // 0x80043504: andi        $t9, $v0, 0x7
    ctx->r25 = ctx->r2 & 0X7;
    // 0x80043508: beq         $t9, $zero, L_80043514
    if (ctx->r25 == 0) {
        // 0x8004350C: nop
    
            goto L_80043514;
    }
    // 0x8004350C: nop

    // 0x80043510: addiu       $t9, $t9, -0x8
    ctx->r25 = ADD32(ctx->r25, -0X8);
L_80043514:
    // 0x80043514: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x80043518: slt         $at, $t6, $v1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8004351C: beq         $at, $zero, L_80043540
    if (ctx->r1 == 0) {
        // 0x80043520: lui         $v1, 0x800B
        ctx->r3 = S32(0X800B << 16);
            goto L_80043540;
    }
    // 0x80043520: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80043524: addiu       $v1, $v1, -0x3C98
    ctx->r3 = ADD32(ctx->r3, -0X3C98);
    // 0x80043528: lhu         $t7, 0x2($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X2);
    // 0x8004352C: nop

    // 0x80043530: ori         $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 | 0X4000;
    // 0x80043534: sh          $t8, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r24;
    // 0x80043538: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x8004353C: nop

L_80043540:
    // 0x80043540: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x80043544: sw          $t9, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r25;
    // 0x80043548: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004354C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80043550: jr          $ra
    // 0x80043554: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80043554: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80043558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80043558: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8004355C: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80043560: addiu       $s3, $s3, -0x3C90
    ctx->r19 = ADD32(ctx->r19, -0X3C90);
    // 0x80043564: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80043568: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8004356C: jal         0x8005BB84
    // 0x80043570: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8005BB84(rdram, ctx);
        goto after_0;
    // 0x80043570: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x80043574: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80043578: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8004357C: addiu       $s0, $sp, 0x34
    ctx->r16 = ADD32(ctx->r29, 0X34);
    // 0x80043580: jal         0x80043110
    // 0x80043584: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    func_80043110(rdram, ctx);
        goto after_1;
    // 0x80043584: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x80043588: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8004358C: addiu       $s0, $s0, -0x3C8C
    ctx->r16 = ADD32(ctx->r16, -0X3C8C);
    // 0x80043590: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80043594: jal         0x8005BCB4
    // 0x80043598: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8005BCB4(rdram, ctx);
        goto after_2;
    // 0x80043598: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x8004359C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x800435A0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800435A4: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x800435A8: beq         $t7, $zero, L_800435B8
    if (ctx->r15 == 0) {
        // 0x800435AC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800435B8;
    }
    // 0x800435AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800435B0: b           L_800435B8
    // 0x800435B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800435B8;
    // 0x800435B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800435B8:
    // 0x800435B8: beq         $v0, $zero, L_800435F0
    if (ctx->r2 == 0) {
        // 0x800435BC: nop
    
            goto L_800435F0;
    }
    // 0x800435BC: nop

    // 0x800435C0: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x800435C4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800435C8: bne         $t8, $at, L_800435F0
    if (ctx->r24 != ctx->r1) {
        // 0x800435CC: lui         $v0, 0x800B
        ctx->r2 = S32(0X800B << 16);
            goto L_800435F0;
    }
    // 0x800435CC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800435D0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800435D4: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800435D8: addiu       $v0, $v0, -0x3C98
    ctx->r2 = ADD32(ctx->r2, -0X3C98);
    // 0x800435DC: negu        $t6, $t9
    ctx->r14 = SUB32(0, ctx->r25);
    // 0x800435E0: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x800435E4: sb          $t8, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r24;
    // 0x800435E8: b           L_80043604
    // 0x800435EC: sb          $t6, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r14;
        goto L_80043604;
    // 0x800435EC: sb          $t6, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r14;
L_800435F0:
    // 0x800435F0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800435F4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800435F8: addiu       $v0, $v0, -0x3C98
    ctx->r2 = ADD32(ctx->r2, -0X3C98);
    // 0x800435FC: sb          $t9, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r25;
    // 0x80043600: sb          $t6, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r14;
L_80043604:
    // 0x80043604: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80043608: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8004360C: jr          $ra
    // 0x80043610: nop

    return;
    // 0x80043610: nop

;}
RECOMP_FUNC void func_80043614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80043614: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80043618: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8004361C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80043620: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80043624: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80043628: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8004362C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80043630: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80043634: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80043638: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8004363C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80043640: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x80043644: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80043648: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x8004364C: beq         $at, $zero, L_80043704
    if (ctx->r1 == 0) {
        // 0x80043650: lui         $v0, 0x800B
        ctx->r2 = S32(0X800B << 16);
            goto L_80043704;
    }
    // 0x80043650: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80043654: addiu       $v0, $v0, -0x4298
    ctx->r2 = ADD32(ctx->r2, -0X4298);
    // 0x80043658: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8004365C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80043660: bne         $t7, $at, L_800436CC
    if (ctx->r15 != ctx->r1) {
        // 0x80043664: nop
    
            goto L_800436CC;
    }
    // 0x80043664: nop

    // 0x80043668: lw          $t8, 0xC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC);
    // 0x8004366C: nop

    // 0x80043670: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80043674: addu        $t6, $v0, $t9
    ctx->r14 = ADD32(ctx->r2, ctx->r25);
    // 0x80043678: lw          $a0, 0x94($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X94);
    // 0x8004367C: jal         0x8002D000
    // 0x80043680: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x80043680: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x80043684: lw          $t7, 0x10($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X10);
    // 0x80043688: nop

    // 0x8004368C: bne         $v0, $t7, L_800436CC
    if (ctx->r2 != ctx->r15) {
        // 0x80043690: nop
    
            goto L_800436CC;
    }
    // 0x80043690: nop

    // 0x80043694: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x80043698: jal         0x8002D000
    // 0x8004369C: nop

    func_8002D000(rdram, ctx);
        goto after_1;
    // 0x8004369C: nop

    after_1:
    // 0x800436A0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x800436A4: lw          $t9, 0x184C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X184C);
    // 0x800436A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800436AC: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x800436B0: jalr        $t9
    // 0x800436B4: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x800436B4: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_2:
    // 0x800436B8: beq         $v0, $zero, L_800436CC
    if (ctx->r2 == 0) {
        // 0x800436BC: nop
    
            goto L_800436CC;
    }
    // 0x800436BC: nop

    // 0x800436C0: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800436C4: nop

    // 0x800436C8: swc1        $f4, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f4.u32l;
L_800436CC:
    // 0x800436CC: lw          $s2, 0xC($s4)
    ctx->r18 = MEM_W(ctx->r20, 0XC);
    // 0x800436D0: lwc1        $f20, 0x8($s4)
    ctx->f20.u32l = MEM_W(ctx->r20, 0X8);
    // 0x800436D4: jal         0x80043558
    // 0x800436D8: nop

    func_80043558(rdram, ctx);
        goto after_3;
    // 0x800436D8: nop

    after_3:
    // 0x800436DC: lw          $v0, 0x20($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X20);
    // 0x800436E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800436E4: bne         $v0, $at, L_800436FC
    if (ctx->r2 != ctx->r1) {
        // 0x800436E8: addiu       $t8, $zero, 0x4000
        ctx->r24 = ADD32(0, 0X4000);
            goto L_800436FC;
    }
    // 0x800436E8: addiu       $t8, $zero, 0x4000
    ctx->r24 = ADD32(0, 0X4000);
    // 0x800436EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800436F0: sh          $t8, -0x3C96($at)
    MEM_H(-0X3C96, ctx->r1) = ctx->r24;
    // 0x800436F4: lw          $v0, 0x20($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X20);
    // 0x800436F8: nop

L_800436FC:
    // 0x800436FC: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x80043700: sw          $t6, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->r14;
L_80043704:
    // 0x80043704: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80043708: sw          $t7, 0x28($s4)
    MEM_W(0X28, ctx->r20) = ctx->r15;
    // 0x8004370C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80043710: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80043714: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80043718: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8004371C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80043720: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80043724: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80043728: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8004372C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80043730: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80043734: jr          $ra
    // 0x80043738: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80043738: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8004373C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004373C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80043740: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80043744: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x80043748: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x8004374C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80043750: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80043754: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80043758: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8004375C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80043760: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80043764: lwc1        $f20, 0x8($a0)
    ctx->f20.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80043768: lw          $s2, 0xC($a0)
    ctx->r18 = MEM_W(ctx->r4, 0XC);
    // 0x8004376C: jal         0x80043294
    // 0x80043770: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_80043294(rdram, ctx);
        goto after_0;
    // 0x80043770: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x80043774: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80043778: addiu       $t6, $zero, 0x4000
    ctx->r14 = ADD32(0, 0X4000);
    // 0x8004377C: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80043780: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80043784: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x80043788: bne         $at, $zero, L_8004379C
    if (ctx->r1 != 0) {
        // 0x8004378C: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_8004379C;
    }
    // 0x8004378C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80043790: sh          $t6, -0x3C96($at)
    MEM_H(-0X3C96, ctx->r1) = ctx->r14;
    // 0x80043794: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80043798: nop

L_8004379C:
    // 0x8004379C: slti        $v1, $v0, 0x33
    ctx->r3 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x800437A0: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x800437A4: bne         $v1, $zero, L_800437B0
    if (ctx->r3 != 0) {
        // 0x800437A8: sw          $t7, 0x20($a0)
        MEM_W(0X20, ctx->r4) = ctx->r15;
            goto L_800437B0;
    }
    // 0x800437A8: sw          $t7, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r15;
    // 0x800437AC: sw          $t8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r24;
L_800437B0:
    // 0x800437B0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800437B4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800437B8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800437BC: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800437C0: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800437C4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800437C8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800437CC: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x800437D0: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x800437D4: jr          $ra
    // 0x800437D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800437D8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800437DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800437DC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800437E0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800437E4: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x800437E8: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x800437EC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800437F0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800437F4: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800437F8: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x800437FC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80043800: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80043804: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x80043808: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8004380C: bne         $t6, $zero, L_80043838
    if (ctx->r14 != 0) {
        // 0x80043810: addiu       $a0, $zero, 0x17
        ctx->r4 = ADD32(0, 0X17);
            goto L_80043838;
    }
    // 0x80043810: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x80043814: jal         0x80028AB8
    // 0x80043818: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    func_80028AB8(rdram, ctx);
        goto after_0;
    // 0x80043818: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    after_0:
    // 0x8004381C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80043820: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80043824: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80043828: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8004382C: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80043830: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80043834: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
L_80043838:
    // 0x80043838: lw          $s2, 0xC($a1)
    ctx->r18 = MEM_W(ctx->r5, 0XC);
    // 0x8004383C: lwc1        $f20, 0x8($a1)
    ctx->f20.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80043840: jal         0x80043558
    // 0x80043844: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    func_80043558(rdram, ctx);
        goto after_1;
    // 0x80043844: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    after_1:
    // 0x80043848: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8004384C: addiu       $t7, $zero, 0x4000
    ctx->r15 = ADD32(0, 0X4000);
    // 0x80043850: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80043854: sh          $t7, -0x3C96($at)
    MEM_H(-0X3C96, ctx->r1) = ctx->r15;
    // 0x80043858: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8004385C: sw          $t8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->r24;
    // 0x80043860: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80043864: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80043868: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x8004386C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80043870: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80043874: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80043878: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8004387C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80043880: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80043884: jr          $ra
    // 0x80043888: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80043888: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8004388C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004388C: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x80043890: addiu       $t7, $zero, 0x4000
    ctx->r15 = ADD32(0, 0X4000);
    // 0x80043894: bne         $t6, $zero, L_800438A4
    if (ctx->r14 != 0) {
        // 0x80043898: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_800438A4;
    }
    // 0x80043898: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8004389C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800438A0: sh          $t7, -0x3C96($at)
    MEM_H(-0X3C96, ctx->r1) = ctx->r15;
L_800438A4:
    // 0x800438A4: jr          $ra
    // 0x800438A8: sw          $t8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r24;
    return;
    // 0x800438A8: sw          $t8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_800438AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800438AC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800438B0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800438B4: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x800438B8: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x800438BC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800438C0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800438C4: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800438C8: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x800438CC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800438D0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800438D4: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x800438D8: nop

    // 0x800438DC: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x800438E0: beq         $at, $zero, L_80043928
    if (ctx->r1 == 0) {
        // 0x800438E4: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_80043928;
    }
    // 0x800438E4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800438E8: lw          $s2, 0xC($a0)
    ctx->r18 = MEM_W(ctx->r4, 0XC);
    // 0x800438EC: lwc1        $f20, 0x8($a0)
    ctx->f20.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800438F0: jal         0x80043558
    // 0x800438F4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_80043558(rdram, ctx);
        goto after_0;
    // 0x800438F4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x800438F8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800438FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80043900: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80043904: addiu       $t7, $zero, 0x4000
    ctx->r15 = ADD32(0, 0X4000);
    // 0x80043908: bne         $v0, $at, L_8004391C
    if (ctx->r2 != ctx->r1) {
        // 0x8004390C: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_8004391C;
    }
    // 0x8004390C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80043910: sh          $t7, -0x3C96($at)
    MEM_H(-0X3C96, ctx->r1) = ctx->r15;
    // 0x80043914: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80043918: nop

L_8004391C:
    // 0x8004391C: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x80043920: sw          $t8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r24;
    // 0x80043924: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
L_80043928:
    // 0x80043928: sw          $t9, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r25;
    // 0x8004392C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80043930: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80043934: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80043938: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8004393C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80043940: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80043944: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80043948: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8004394C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80043950: jr          $ra
    // 0x80043954: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80043954: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80043958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80043958: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8004395C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80043960: lw          $t6, -0x4298($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4298);
    // 0x80043964: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80043968: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8004396C: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x80043970: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80043974: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80043978: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8004397C: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80043980: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80043984: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80043988: bne         $t6, $at, L_800439AC
    if (ctx->r14 != ctx->r1) {
        // 0x8004398C: swc1        $f20, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
            goto L_800439AC;
    }
    // 0x8004398C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80043990: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80043994: jal         0x80041748
    // 0x80043998: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_80041748(rdram, ctx);
        goto after_0;
    // 0x80043998: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x8004399C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800439A0: beq         $v0, $zero, L_800439AC
    if (ctx->r2 == 0) {
        // 0x800439A4: addiu       $t7, $zero, 0x5
        ctx->r15 = ADD32(0, 0X5);
            goto L_800439AC;
    }
    // 0x800439A4: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x800439A8: sw          $t7, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r15;
L_800439AC:
    // 0x800439AC: lw          $t8, 0x20($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X20);
    // 0x800439B0: nop

    // 0x800439B4: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x800439B8: beq         $at, $zero, L_80043A00
    if (ctx->r1 == 0) {
        // 0x800439BC: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_80043A00;
    }
    // 0x800439BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800439C0: lw          $s2, 0xC($a0)
    ctx->r18 = MEM_W(ctx->r4, 0XC);
    // 0x800439C4: lwc1        $f20, 0x8($a0)
    ctx->f20.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800439C8: jal         0x80043558
    // 0x800439CC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_80043558(rdram, ctx);
        goto after_1;
    // 0x800439CC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_1:
    // 0x800439D0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800439D4: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x800439D8: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x800439DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800439E0: beq         $v0, $zero, L_800439F8
    if (ctx->r2 == 0) {
        // 0x800439E4: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_800439F8;
    }
    // 0x800439E4: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x800439E8: sh          $t9, -0x3C96($at)
    MEM_H(-0X3C96, ctx->r1) = ctx->r25;
    // 0x800439EC: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x800439F0: nop

    // 0x800439F4: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
L_800439F8:
    // 0x800439F8: sw          $t6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r14;
    // 0x800439FC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_80043A00:
    // 0x80043A00: sw          $t7, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r15;
    // 0x80043A04: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80043A08: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80043A0C: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80043A10: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80043A14: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80043A18: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80043A1C: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80043A20: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80043A24: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80043A28: jr          $ra
    // 0x80043A2C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80043A2C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80043A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80043A30: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80043A34: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80043A38: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x80043A3C: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80043A40: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80043A44: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80043A48: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80043A4C: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80043A50: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80043A54: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80043A58: lwc1        $f20, 0x8($a0)
    ctx->f20.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80043A5C: lw          $s2, 0xC($a0)
    ctx->r18 = MEM_W(ctx->r4, 0XC);
    // 0x80043A60: jal         0x80043294
    // 0x80043A64: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_80043294(rdram, ctx);
        goto after_0;
    // 0x80043A64: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x80043A68: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80043A6C: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x80043A70: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80043A74: sh          $t6, -0x3C96($at)
    MEM_H(-0X3C96, ctx->r1) = ctx->r14;
    // 0x80043A78: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80043A7C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80043A80: slti        $v1, $v0, 0x1F
    ctx->r3 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x80043A84: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x80043A88: bne         $v1, $zero, L_80043A94
    if (ctx->r3 != 0) {
        // 0x80043A8C: sw          $t7, 0x20($a0)
        MEM_W(0X20, ctx->r4) = ctx->r15;
            goto L_80043A94;
    }
    // 0x80043A8C: sw          $t7, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r15;
    // 0x80043A90: sw          $t8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r24;
L_80043A94:
    // 0x80043A94: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80043A98: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80043A9C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80043AA0: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80043AA4: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80043AA8: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80043AAC: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80043AB0: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80043AB4: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80043AB8: jr          $ra
    // 0x80043ABC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80043ABC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80043AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80043AC0: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80043AC4: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x80043AC8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80043ACC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80043AD0: beq         $t7, $zero, L_80043AE0
    if (ctx->r15 == 0) {
        // 0x80043AD4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80043AE0;
    }
    // 0x80043AD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80043AD8: b           L_80043BA0
    // 0x80043ADC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80043BA0;
    // 0x80043ADC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80043AE0:
    // 0x80043AE0: beq         $s4, $zero, L_80043B1C
    if (ctx->r20 == 0) {
        // 0x80043AE4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80043B1C;
    }
    // 0x80043AE4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80043AE8: beq         $s4, $at, L_80043B2C
    if (ctx->r20 == ctx->r1) {
        // 0x80043AEC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80043B2C;
    }
    // 0x80043AEC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80043AF0: beq         $s4, $at, L_80043B0C
    if (ctx->r20 == ctx->r1) {
        // 0x80043AF4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80043B0C;
    }
    // 0x80043AF4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80043AF8: beq         $s4, $at, L_80043B34
    if (ctx->r20 == ctx->r1) {
        // 0x80043AFC: nop
    
            goto L_80043B34;
    }
    // 0x80043AFC: nop

    // 0x80043B00: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80043B04: b           L_80043B40
    // 0x80043B08: nop

        goto L_80043B40;
    // 0x80043B08: nop

L_80043B0C:
    // 0x80043B0C: jal         0x8005AB1C
    // 0x80043B10: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    func_8005AB1C(rdram, ctx);
        goto after_0;
    // 0x80043B10: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x80043B14: b           L_80043B40
    // 0x80043B18: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
        goto L_80043B40;
    // 0x80043B18: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
L_80043B1C:
    // 0x80043B1C: jal         0x8005AF70
    // 0x80043B20: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    func_8005AF70(rdram, ctx);
        goto after_1;
    // 0x80043B20: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x80043B24: b           L_80043B40
    // 0x80043B28: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
        goto L_80043B40;
    // 0x80043B28: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
L_80043B2C:
    // 0x80043B2C: jal         0x8005A3A8
    // 0x80043B30: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    func_8005A3A8(rdram, ctx);
        goto after_2;
    // 0x80043B30: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_2:
L_80043B34:
    // 0x80043B34: jal         0x8005AFA4
    // 0x80043B38: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    func_8005AFA4(rdram, ctx);
        goto after_3;
    // 0x80043B38: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x80043B3C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
L_80043B40:
    // 0x80043B40: blez        $s3, L_80043B9C
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80043B44: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80043B9C;
    }
    // 0x80043B44: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80043B48: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80043B4C:
    // 0x80043B4C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80043B50: nop

    // 0x80043B54: addu        $t9, $t8, $s2
    ctx->r25 = ADD32(ctx->r24, ctx->r18);
    // 0x80043B58: lw          $s0, 0x0($t9)
    ctx->r16 = MEM_W(ctx->r25, 0X0);
    // 0x80043B5C: bne         $s4, $zero, L_80043B78
    if (ctx->r20 != 0) {
        // 0x80043B60: nop
    
            goto L_80043B78;
    }
    // 0x80043B60: nop

    // 0x80043B64: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80043B68: jal         0x8005AD98
    // 0x80043B6C: nop

    func_8005AD98(rdram, ctx);
        goto after_4;
    // 0x80043B6C: nop

    after_4:
    // 0x80043B70: bne         $v0, $zero, L_80043B90
    if (ctx->r2 != 0) {
        // 0x80043B74: nop
    
            goto L_80043B90;
    }
    // 0x80043B74: nop

L_80043B78:
    // 0x80043B78: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x80043B7C: nop

    // 0x80043B80: bne         $s5, $t6, L_80043B90
    if (ctx->r21 != ctx->r14) {
        // 0x80043B84: nop
    
            goto L_80043B90;
    }
    // 0x80043B84: nop

    // 0x80043B88: b           L_80043BA0
    // 0x80043B8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80043BA0;
    // 0x80043B8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80043B90:
    // 0x80043B90: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80043B94: bne         $s1, $s3, L_80043B4C
    if (ctx->r17 != ctx->r19) {
        // 0x80043B98: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_80043B4C;
    }
    // 0x80043B98: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_80043B9C:
    // 0x80043B9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80043BA0:
    // 0x80043BA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80043BA4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80043BA8: jr          $ra
    // 0x80043BAC: nop

    return;
    // 0x80043BAC: nop

    // 0x80043BB0: jr          $ra
    // 0x80043BB4: nop

    return;
    // 0x80043BB4: nop

;}
RECOMP_FUNC void func_80043BB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80043BB8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80043BBC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80043BC0: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x80043BC4: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x80043BC8: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x80043BCC: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80043BD0: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80043BD4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80043BD8: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80043BDC: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80043BE0: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80043BE4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80043BE8: lwc1        $f20, 0x8($a0)
    ctx->f20.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80043BEC: lw          $s2, 0xC($a0)
    ctx->r18 = MEM_W(ctx->r4, 0XC);
    // 0x80043BF0: jal         0x80043294
    // 0x80043BF4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    func_80043294(rdram, ctx);
        goto after_0;
    // 0x80043BF4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    after_0:
    // 0x80043BF8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80043BFC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80043C00: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80043C04: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80043C08: slti        $v1, $v0, 0x29
    ctx->r3 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
    // 0x80043C0C: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x80043C10: bne         $v1, $zero, L_80043C20
    if (ctx->r3 != 0) {
        // 0x80043C14: sw          $t6, 0x20($a0)
        MEM_W(0X20, ctx->r4) = ctx->r14;
            goto L_80043C20;
    }
    // 0x80043C14: sw          $t6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r14;
    // 0x80043C18: b           L_80043C3C
    // 0x80043C1C: sw          $t7, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r15;
        goto L_80043C3C;
    // 0x80043C1C: sw          $t7, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r15;
L_80043C20:
    // 0x80043C20: lw          $s5, 0x10($a0)
    ctx->r21 = MEM_W(ctx->r4, 0X10);
    // 0x80043C24: jal         0x80043AC0
    // 0x80043C28: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    func_80043AC0(rdram, ctx);
        goto after_1;
    // 0x80043C28: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    after_1:
    // 0x80043C2C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80043C30: bne         $v0, $zero, L_80043C3C
    if (ctx->r2 != 0) {
        // 0x80043C34: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80043C3C;
    }
    // 0x80043C34: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80043C38: sw          $t8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r24;
L_80043C3C:
    // 0x80043C3C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80043C40: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80043C44: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80043C48: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80043C4C: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80043C50: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80043C54: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80043C58: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80043C5C: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80043C60: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x80043C64: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x80043C68: jr          $ra
    // 0x80043C6C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80043C6C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80043C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80043C70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80043C74: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80043C78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80043C7C: addiu       $s1, $s1, -0x4298
    ctx->r17 = ADD32(ctx->r17, -0X4298);
    // 0x80043C80: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80043C84: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_80043C88:
    // 0x80043C88: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x80043C8C: nop

    // 0x80043C90: beq         $t6, $zero, L_80043CC0
    if (ctx->r14 == 0) {
        // 0x80043C94: nop
    
            goto L_80043CC0;
    }
    // 0x80043C94: nop

    // 0x80043C98: lw          $t7, 0xC8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0XC8);
    // 0x80043C9C: nop

    // 0x80043CA0: bne         $t7, $zero, L_80043CC0
    if (ctx->r15 != 0) {
        // 0x80043CA4: nop
    
            goto L_80043CC0;
    }
    // 0x80043CA4: nop

    // 0x80043CA8: jal         0x8002D000
    // 0x80043CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x80043CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80043CB0: bne         $v0, $s3, L_80043CC0
    if (ctx->r2 != ctx->r19) {
        // 0x80043CB4: nop
    
            goto L_80043CC0;
    }
    // 0x80043CB4: nop

    // 0x80043CB8: b           L_80043CD0
    // 0x80043CBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80043CD0;
    // 0x80043CBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80043CC0:
    // 0x80043CC0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80043CC4: bne         $s0, $s2, L_80043C88
    if (ctx->r16 != ctx->r18) {
        // 0x80043CC8: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80043C88;
    }
    // 0x80043CC8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80043CCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80043CD0:
    // 0x80043CD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80043CD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80043CD8: jr          $ra
    // 0x80043CDC: nop

    return;
    // 0x80043CDC: nop

    // 0x80043CE0: jr          $ra
    // 0x80043CE4: nop

    return;
    // 0x80043CE4: nop

    // 0x80043CE8: jr          $ra
    // 0x80043CEC: nop

    return;
    // 0x80043CEC: nop

    // 0x80043CF0: jr          $ra
    // 0x80043CF4: nop

    return;
    // 0x80043CF4: nop

;}
RECOMP_FUNC void func_80043CF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80043CF8: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80043CFC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80043D00: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80043D04: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80043D08: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80043D0C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80043D10: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80043D14: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80043D18: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80043D1C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80043D20: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80043D24: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80043D28: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80043D2C: lwc1        $f20, 0x8($a0)
    ctx->f20.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80043D30: lw          $s2, 0xC($a0)
    ctx->r18 = MEM_W(ctx->r4, 0XC);
    // 0x80043D34: jal         0x80043294
    // 0x80043D38: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    func_80043294(rdram, ctx);
        goto after_0;
    // 0x80043D38: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    after_0:
    // 0x80043D3C: lw          $a0, 0xC($s6)
    ctx->r4 = MEM_W(ctx->r22, 0XC);
    // 0x80043D40: jal         0x8002D000
    // 0x80043D44: nop

    func_8002D000(rdram, ctx);
        goto after_1;
    // 0x80043D44: nop

    after_1:
    // 0x80043D48: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80043D4C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80043D50: jal         0x8004A0A0
    // 0x80043D54: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x80043D54: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    after_2:
    // 0x80043D58: bne         $v0, $zero, L_80043E0C
    if (ctx->r2 != 0) {
        // 0x80043D5C: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_80043E0C;
    }
    // 0x80043D5C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80043D60: lw          $t6, 0x2C($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X2C);
    // 0x80043D64: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80043D68: slti        $at, $t6, 0xD
    ctx->r1 = SIGNED(ctx->r14) < 0XD ? 1 : 0;
    // 0x80043D6C: bne         $at, $zero, L_80043D80
    if (ctx->r1 != 0) {
        // 0x80043D70: nop
    
            goto L_80043D80;
    }
    // 0x80043D70: nop

    // 0x80043D74: sw          $zero, 0x20($s6)
    MEM_W(0X20, ctx->r22) = 0;
    // 0x80043D78: b           L_80043E08
    // 0x80043D7C: sw          $t7, 0x28($s6)
    MEM_W(0X28, ctx->r22) = ctx->r15;
        goto L_80043E08;
    // 0x80043D7C: sw          $t7, 0x28($s6)
    MEM_W(0X28, ctx->r22) = ctx->r15;
L_80043D80:
    // 0x80043D80: lw          $v0, 0x20($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X20);
    // 0x80043D84: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80043D88: slti        $v1, $v0, 0x15
    ctx->r3 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x80043D8C: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x80043D90: bne         $v1, $zero, L_80043DA0
    if (ctx->r3 != 0) {
        // 0x80043D94: sw          $t8, 0x20($s6)
        MEM_W(0X20, ctx->r22) = ctx->r24;
            goto L_80043DA0;
    }
    // 0x80043D94: sw          $t8, 0x20($s6)
    MEM_W(0X20, ctx->r22) = ctx->r24;
    // 0x80043D98: b           L_80043E08
    // 0x80043D9C: sw          $t9, 0x28($s6)
    MEM_W(0X28, ctx->r22) = ctx->r25;
        goto L_80043E08;
    // 0x80043D9C: sw          $t9, 0x28($s6)
    MEM_W(0X28, ctx->r22) = ctx->r25;
L_80043DA0:
    // 0x80043DA0: lw          $s5, 0x10($s6)
    ctx->r21 = MEM_W(ctx->r22, 0X10);
    // 0x80043DA4: jal         0x80043AC0
    // 0x80043DA8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    func_80043AC0(rdram, ctx);
        goto after_3;
    // 0x80043DA8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    after_3:
    // 0x80043DAC: bne         $v0, $zero, L_80043E0C
    if (ctx->r2 != 0) {
        // 0x80043DB0: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_80043E0C;
    }
    // 0x80043DB0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80043DB4: lw          $s5, 0x10($s6)
    ctx->r21 = MEM_W(ctx->r22, 0X10);
    // 0x80043DB8: jal         0x80043AC0
    // 0x80043DBC: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    func_80043AC0(rdram, ctx);
        goto after_4;
    // 0x80043DBC: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    after_4:
    // 0x80043DC0: bne         $v0, $zero, L_80043E0C
    if (ctx->r2 != 0) {
        // 0x80043DC4: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_80043E0C;
    }
    // 0x80043DC4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80043DC8: lw          $s5, 0x10($s6)
    ctx->r21 = MEM_W(ctx->r22, 0X10);
    // 0x80043DCC: jal         0x80043AC0
    // 0x80043DD0: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    func_80043AC0(rdram, ctx);
        goto after_5;
    // 0x80043DD0: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    after_5:
    // 0x80043DD4: bne         $v0, $zero, L_80043E0C
    if (ctx->r2 != 0) {
        // 0x80043DD8: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_80043E0C;
    }
    // 0x80043DD8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80043DDC: lw          $s5, 0x10($s6)
    ctx->r21 = MEM_W(ctx->r22, 0X10);
    // 0x80043DE0: jal         0x80043AC0
    // 0x80043DE4: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    func_80043AC0(rdram, ctx);
        goto after_6;
    // 0x80043DE4: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    after_6:
    // 0x80043DE8: bne         $v0, $zero, L_80043E0C
    if (ctx->r2 != 0) {
        // 0x80043DEC: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_80043E0C;
    }
    // 0x80043DEC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80043DF0: lw          $s3, 0x10($s6)
    ctx->r19 = MEM_W(ctx->r22, 0X10);
    // 0x80043DF4: jal         0x80043C70
    // 0x80043DF8: nop

    func_80043C70(rdram, ctx);
        goto after_7;
    // 0x80043DF8: nop

    after_7:
    // 0x80043DFC: bne         $v0, $zero, L_80043E08
    if (ctx->r2 != 0) {
        // 0x80043E00: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80043E08;
    }
    // 0x80043E00: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80043E04: sw          $t6, 0x28($s6)
    MEM_W(0X28, ctx->r22) = ctx->r14;
L_80043E08:
    // 0x80043E08: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80043E0C:
    // 0x80043E0C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80043E10: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80043E14: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80043E18: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80043E1C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80043E20: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80043E24: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80043E28: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80043E2C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80043E30: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80043E34: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80043E38: jr          $ra
    // 0x80043E3C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x80043E3C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_80043E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80043E40: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80043E44: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80043E48: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80043E4C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80043E50: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80043E54: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80043E58: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80043E5C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80043E60: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80043E64: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80043E68: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80043E6C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80043E70: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80043E74: lwc1        $f20, 0x8($a0)
    ctx->f20.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80043E78: lw          $s2, 0xC($a0)
    ctx->r18 = MEM_W(ctx->r4, 0XC);
    // 0x80043E7C: jal         0x80043294
    // 0x80043E80: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    func_80043294(rdram, ctx);
        goto after_0;
    // 0x80043E80: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    after_0:
    // 0x80043E84: lw          $v0, 0x20($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X20);
    // 0x80043E88: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80043E8C: slti        $v1, $v0, 0x15
    ctx->r3 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x80043E90: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x80043E94: bne         $v1, $zero, L_80043EA4
    if (ctx->r3 != 0) {
        // 0x80043E98: sw          $t6, 0x20($s6)
        MEM_W(0X20, ctx->r22) = ctx->r14;
            goto L_80043EA4;
    }
    // 0x80043E98: sw          $t6, 0x20($s6)
    MEM_W(0X20, ctx->r22) = ctx->r14;
    // 0x80043E9C: b           L_80043F0C
    // 0x80043EA0: sw          $t7, 0x28($s6)
    MEM_W(0X28, ctx->r22) = ctx->r15;
        goto L_80043F0C;
    // 0x80043EA0: sw          $t7, 0x28($s6)
    MEM_W(0X28, ctx->r22) = ctx->r15;
L_80043EA4:
    // 0x80043EA4: lw          $s5, 0x10($s6)
    ctx->r21 = MEM_W(ctx->r22, 0X10);
    // 0x80043EA8: jal         0x80043AC0
    // 0x80043EAC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    func_80043AC0(rdram, ctx);
        goto after_1;
    // 0x80043EAC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    after_1:
    // 0x80043EB0: bne         $v0, $zero, L_80043F10
    if (ctx->r2 != 0) {
        // 0x80043EB4: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_80043F10;
    }
    // 0x80043EB4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80043EB8: lw          $s5, 0x10($s6)
    ctx->r21 = MEM_W(ctx->r22, 0X10);
    // 0x80043EBC: jal         0x80043AC0
    // 0x80043EC0: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    func_80043AC0(rdram, ctx);
        goto after_2;
    // 0x80043EC0: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    after_2:
    // 0x80043EC4: bne         $v0, $zero, L_80043F10
    if (ctx->r2 != 0) {
        // 0x80043EC8: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_80043F10;
    }
    // 0x80043EC8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80043ECC: lw          $s5, 0x10($s6)
    ctx->r21 = MEM_W(ctx->r22, 0X10);
    // 0x80043ED0: jal         0x80043AC0
    // 0x80043ED4: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    func_80043AC0(rdram, ctx);
        goto after_3;
    // 0x80043ED4: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    after_3:
    // 0x80043ED8: bne         $v0, $zero, L_80043F10
    if (ctx->r2 != 0) {
        // 0x80043EDC: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_80043F10;
    }
    // 0x80043EDC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80043EE0: lw          $s5, 0x10($s6)
    ctx->r21 = MEM_W(ctx->r22, 0X10);
    // 0x80043EE4: jal         0x80043AC0
    // 0x80043EE8: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    func_80043AC0(rdram, ctx);
        goto after_4;
    // 0x80043EE8: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    after_4:
    // 0x80043EEC: bne         $v0, $zero, L_80043F10
    if (ctx->r2 != 0) {
        // 0x80043EF0: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_80043F10;
    }
    // 0x80043EF0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80043EF4: lw          $s3, 0x10($s6)
    ctx->r19 = MEM_W(ctx->r22, 0X10);
    // 0x80043EF8: jal         0x80043C70
    // 0x80043EFC: nop

    func_80043C70(rdram, ctx);
        goto after_5;
    // 0x80043EFC: nop

    after_5:
    // 0x80043F00: bne         $v0, $zero, L_80043F0C
    if (ctx->r2 != 0) {
        // 0x80043F04: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80043F0C;
    }
    // 0x80043F04: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80043F08: sw          $t8, 0x28($s6)
    MEM_W(0X28, ctx->r22) = ctx->r24;
L_80043F0C:
    // 0x80043F0C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80043F10:
    // 0x80043F10: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80043F14: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80043F18: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80043F1C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80043F20: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80043F24: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80043F28: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80043F2C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80043F30: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80043F34: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80043F38: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80043F3C: jr          $ra
    // 0x80043F40: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80043F40: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80043F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80043F44: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80043F48: addiu       $v0, $v0, -0x3C98
    ctx->r2 = ADD32(ctx->r2, -0X3C98);
    // 0x80043F4C: sb          $zero, 0x6($v0)
    MEM_B(0X6, ctx->r2) = 0;
    // 0x80043F50: sb          $zero, 0x7($v0)
    MEM_B(0X7, ctx->r2) = 0;
    // 0x80043F54: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80043F58: jr          $ra
    // 0x80043F5C: sw          $t6, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r14;
    return;
    // 0x80043F5C: sw          $t6, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_80043F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80043F60: jr          $ra
    // 0x80043F64: nop

    return;
    // 0x80043F64: nop

;}
RECOMP_FUNC void func_80043F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80043F70: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80043F74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80043F78: jal         0x8005C3A8
    // 0x80043F7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005C3A8(rdram, ctx);
        goto after_0;
    // 0x80043F7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80043F80: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80043F84: lw          $t6, -0x7804($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7804);
    // 0x80043F88: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80043F8C: bne         $t6, $zero, L_80043FD4
    if (ctx->r14 != 0) {
        // 0x80043F90: nop
    
            goto L_80043FD4;
    }
    // 0x80043F90: nop

    // 0x80043F94: lw          $t7, 0x2C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X2C);
    // 0x80043F98: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80043F9C: blez        $t7, L_80043FD4
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80043FA0: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80043FD4;
    }
    // 0x80043FA0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80043FA4: sw          $zero, -0x7800($at)
    MEM_W(-0X7800, ctx->r1) = 0;
    // 0x80043FA8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80043FAC: sw          $t8, -0x7804($at)
    MEM_W(-0X7804, ctx->r1) = ctx->r24;
    // 0x80043FB0: jal         0x80028AB8
    // 0x80043FB4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_80028AB8(rdram, ctx);
        goto after_1;
    // 0x80043FB4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_1:
    // 0x80043FB8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80043FBC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80043FC0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80043FC4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80043FC8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80043FCC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80043FD0: swc1        $f10, -0x77F0($at)
    MEM_W(-0X77F0, ctx->r1) = ctx->f10.u32l;
L_80043FD4:
    // 0x80043FD4: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80043FD8: lw          $t9, -0x7800($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X7800);
    // 0x80043FDC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80043FE0: beq         $t9, $at, L_80044020
    if (ctx->r25 == ctx->r1) {
        // 0x80043FE4: nop
    
            goto L_80044020;
    }
    // 0x80043FE4: nop

    // 0x80043FE8: lw          $t6, 0x2C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X2C);
    // 0x80043FEC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80043FF0: bne         $t6, $zero, L_80044020
    if (ctx->r14 != 0) {
        // 0x80043FF4: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_80044020;
    }
    // 0x80043FF4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80043FF8: sw          $zero, -0x7818($at)
    MEM_W(-0X7818, ctx->r1) = 0;
    // 0x80043FFC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044000: sw          $zero, -0x780C($at)
    MEM_W(-0X780C, ctx->r1) = 0;
    // 0x80044004: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044008: sw          $zero, -0x7810($at)
    MEM_W(-0X7810, ctx->r1) = 0;
    // 0x8004400C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044010: sw          $zero, -0x7804($at)
    MEM_W(-0X7804, ctx->r1) = 0;
    // 0x80044014: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044018: b           L_800440B8
    // 0x8004401C: sw          $t7, -0x7800($at)
    MEM_W(-0X7800, ctx->r1) = ctx->r15;
        goto L_800440B8;
    // 0x8004401C: sw          $t7, -0x7800($at)
    MEM_W(-0X7800, ctx->r1) = ctx->r15;
L_80044020:
    // 0x80044020: jal         0x8002D000
    // 0x80044024: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002D000(rdram, ctx);
        goto after_2;
    // 0x80044024: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80044028: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004402C: jal         0x8002D000
    // 0x80044030: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8002D000(rdram, ctx);
        goto after_3;
    // 0x80044030: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x80044034: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
    // 0x80044038: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8004403C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80044040: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80044044: jal         0x8004A0A0
    // 0x80044048: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_4;
    // 0x80044048: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_4:
    // 0x8004404C: bne         $v0, $zero, L_800440B8
    if (ctx->r2 != 0) {
        // 0x80044050: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800440B8;
    }
    // 0x80044050: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80044054: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x80044058: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8004405C: jal         0x8004A0A0
    // 0x80044060: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004A0A0(rdram, ctx);
        goto after_5;
    // 0x80044060: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x80044064: bne         $v0, $zero, L_800440B8
    if (ctx->r2 != 0) {
        // 0x80044068: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800440B8;
    }
    // 0x80044068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8004406C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80044070: jal         0x80028850
    // 0x80044074: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_80028850(rdram, ctx);
        goto after_6;
    // 0x80044074: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_6:
    // 0x80044078: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8004407C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80044080: lwc1        $f9, 0x5C38($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X5C38);
    // 0x80044084: lwc1        $f8, 0x5C3C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5C3C);
    // 0x80044088: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8004408C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80044090: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80044094: addiu       $t8, $t8, -0x77F4
    ctx->r24 = ADD32(ctx->r24, -0X77F4);
    // 0x80044098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8004409C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800440A0: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x800440A4: jal         0x8002848C
    // 0x800440A8: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    func_8002848C(rdram, ctx);
        goto after_7;
    // 0x800440A8: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    after_7:
    // 0x800440AC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x800440B0: addiu       $t9, $t9, -0x77EC
    ctx->r25 = ADD32(ctx->r25, -0X77EC);
    // 0x800440B4: swc1        $f0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f0.u32l;
L_800440B8:
    // 0x800440B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800440BC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x800440C0: jr          $ra
    // 0x800440C4: nop

    return;
    // 0x800440C4: nop

;}
RECOMP_FUNC void func_800440C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800440C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800440CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800440D0: jal         0x80028AB8
    // 0x800440D4: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_80028AB8(rdram, ctx);
        goto after_0;
    // 0x800440D4: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_0:
    // 0x800440D8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800440DC: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x800440E0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800440E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800440E8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800440EC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800440F0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x800440F4: jal         0x80028AB8
    // 0x800440F8: swc1        $f10, -0x77F4($at)
    MEM_W(-0X77F4, ctx->r1) = ctx->f10.u32l;
    func_80028AB8(rdram, ctx);
        goto after_1;
    // 0x800440F8: swc1        $f10, -0x77F4($at)
    MEM_W(-0X77F4, ctx->r1) = ctx->f10.u32l;
    after_1:
    // 0x800440FC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80044100: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80044104: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80044108: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8004410C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80044110: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80044114: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044118: swc1        $f10, -0x77F0($at)
    MEM_W(-0X77F0, ctx->r1) = ctx->f10.u32l;
    // 0x8004411C: jr          $ra
    // 0x80044120: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80044120: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80044124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80044124: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80044128: addiu       $v0, $v0, -0x7868
    ctx->r2 = ADD32(ctx->r2, -0X7868);
    // 0x8004412C: lw          $t6, 0x50($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X50);
    // 0x80044130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80044134: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80044138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004413C: bne         $s0, $t6, L_8004421C
    if (ctx->r16 != ctx->r14) {
        // 0x80044140: sw          $zero, 0x70($v0)
        MEM_W(0X70, ctx->r2) = 0;
            goto L_8004421C;
    }
    // 0x80044140: sw          $zero, 0x70($v0)
    MEM_W(0X70, ctx->r2) = 0;
    // 0x80044144: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044148: sw          $zero, -0x7818($at)
    MEM_W(-0X7818, ctx->r1) = 0;
    // 0x8004414C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044150: sw          $zero, -0x7804($at)
    MEM_W(-0X7804, ctx->r1) = 0;
    // 0x80044154: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044158: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8004415C: sw          $t7, -0x7800($at)
    MEM_W(-0X7800, ctx->r1) = ctx->r15;
    // 0x80044160: jal         0x80028AB8
    // 0x80044164: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_80028AB8(rdram, ctx);
        goto after_0;
    // 0x80044164: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_0:
    // 0x80044168: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8004416C: lbu         $t8, -0x42A0($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X42A0);
    // 0x80044170: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80044174: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80044178: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8004417C: lw          $t6, 0x17F4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X17F4);
    // 0x80044180: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x80044184: addiu       $t7, $t6, 0x1E
    ctx->r15 = ADD32(ctx->r14, 0X1E);
    // 0x80044188: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8004418C: beq         $at, $zero, L_800441B0
    if (ctx->r1 == 0) {
        // 0x80044190: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_800441B0;
    }
    // 0x80044190: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044194: sw          $s0, -0x780C($at)
    MEM_W(-0X780C, ctx->r1) = ctx->r16;
    // 0x80044198: jal         0x80028AB8
    // 0x8004419C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    func_80028AB8(rdram, ctx);
        goto after_1;
    // 0x8004419C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_1:
    // 0x800441A0: addiu       $t8, $v0, 0x3C
    ctx->r24 = ADD32(ctx->r2, 0X3C);
    // 0x800441A4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800441A8: b           L_800441C8
    // 0x800441AC: sw          $t8, -0x7810($at)
    MEM_W(-0X7810, ctx->r1) = ctx->r24;
        goto L_800441C8;
    // 0x800441AC: sw          $t8, -0x7810($at)
    MEM_W(-0X7810, ctx->r1) = ctx->r24;
L_800441B0:
    // 0x800441B0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800441B4: jal         0x80028AB8
    // 0x800441B8: sw          $zero, -0x780C($at)
    MEM_W(-0X780C, ctx->r1) = 0;
    func_80028AB8(rdram, ctx);
        goto after_2;
    // 0x800441B8: sw          $zero, -0x780C($at)
    MEM_W(-0X780C, ctx->r1) = 0;
    after_2:
    // 0x800441BC: addiu       $t9, $v0, 0x3C
    ctx->r25 = ADD32(ctx->r2, 0X3C);
    // 0x800441C0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800441C4: sw          $t9, -0x7810($at)
    MEM_W(-0X7810, ctx->r1) = ctx->r25;
L_800441C8:
    // 0x800441C8: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800441CC: lw          $t6, -0x7818($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7818);
    // 0x800441D0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800441D4: bne         $t6, $zero, L_80044240
    if (ctx->r14 != 0) {
        // 0x800441D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80044240;
    }
    // 0x800441D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800441DC: lw          $v0, -0x780C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X780C);
    // 0x800441E0: nop

    // 0x800441E4: beq         $v0, $zero, L_800441FC
    if (ctx->r2 == 0) {
        // 0x800441E8: nop
    
            goto L_800441FC;
    }
    // 0x800441E8: nop

    // 0x800441EC: beq         $v0, $s0, L_8004420C
    if (ctx->r2 == ctx->r16) {
        // 0x800441F0: nop
    
            goto L_8004420C;
    }
    // 0x800441F0: nop

    // 0x800441F4: b           L_80044240
    // 0x800441F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80044240;
    // 0x800441F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800441FC:
    // 0x800441FC: jal         0x800440C8
    // 0x80044200: nop

    func_800440C8(rdram, ctx);
        goto after_3;
    // 0x80044200: nop

    after_3:
    // 0x80044204: b           L_80044240
    // 0x80044208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80044240;
    // 0x80044208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004420C:
    // 0x8004420C: jal         0x80043F70
    // 0x80044210: nop

    func_80043F70(rdram, ctx);
        goto after_4;
    // 0x80044210: nop

    after_4:
    // 0x80044214: b           L_80044240
    // 0x80044218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80044240;
    // 0x80044218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004421C:
    // 0x8004421C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80044220: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044224: sw          $t7, -0x7818($at)
    MEM_W(-0X7818, ctx->r1) = ctx->r15;
    // 0x80044228: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004422C: sw          $zero, -0x780C($at)
    MEM_W(-0X780C, ctx->r1) = 0;
    // 0x80044230: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044234: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x80044238: sw          $t8, -0x7810($at)
    MEM_W(-0X7810, ctx->r1) = ctx->r24;
    // 0x8004423C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80044240:
    // 0x80044240: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80044244: jr          $ra
    // 0x80044248: nop

    return;
    // 0x80044248: nop

    // 0x8004424C: jr          $ra
    // 0x80044250: nop

    return;
    // 0x80044250: nop

    // 0x80044254: jr          $ra
    // 0x80044258: nop

    return;
    // 0x80044258: nop

;}
RECOMP_FUNC void func_8004425C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004425C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80044260: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80044264: addiu       $s0, $s0, -0x3C8C
    ctx->r16 = ADD32(ctx->r16, -0X3C8C);
    // 0x80044268: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004426C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80044270: jal         0x8005BCB4
    // 0x80044274: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8005BCB4(rdram, ctx);
        goto after_0;
    // 0x80044274: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80044278: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8004427C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80044280: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80044284: beq         $t7, $zero, L_80044294
    if (ctx->r15 == 0) {
        // 0x80044288: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_80044294;
    }
    // 0x80044288: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8004428C: b           L_80044294
    // 0x80044290: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80044294;
    // 0x80044290: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80044294:
    // 0x80044294: beq         $v0, $zero, L_80044320
    if (ctx->r2 == 0) {
        // 0x80044298: lui         $v1, 0x800D
        ctx->r3 = S32(0X800D << 16);
            goto L_80044320;
    }
    // 0x80044298: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8004429C: lw          $t8, -0x42C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X42C0);
    // 0x800442A0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800442A4: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x800442A8: beq         $t9, $zero, L_800442EC
    if (ctx->r25 == 0) {
        // 0x800442AC: addiu       $t6, $zero, 0xA
        ctx->r14 = ADD32(0, 0XA);
            goto L_800442EC;
    }
    // 0x800442AC: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x800442B0: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x800442B4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800442B8: sw          $t6, -0x7818($at)
    MEM_W(-0X7818, ctx->r1) = ctx->r14;
    // 0x800442BC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800442C0: sw          $zero, -0x780C($at)
    MEM_W(-0X780C, ctx->r1) = 0;
    // 0x800442C4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800442C8: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x800442CC: sw          $t7, -0x7810($at)
    MEM_W(-0X7810, ctx->r1) = ctx->r15;
    // 0x800442D0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800442D4: sw          $zero, -0x7804($at)
    MEM_W(-0X7804, ctx->r1) = 0;
    // 0x800442D8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800442DC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800442E0: sw          $t8, -0x7800($at)
    MEM_W(-0X7800, ctx->r1) = ctx->r24;
    // 0x800442E4: b           L_80044324
    // 0x800442E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80044324;
    // 0x800442E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800442EC:
    // 0x800442EC: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800442F0: sw          $t9, -0x7818($at)
    MEM_W(-0X7818, ctx->r1) = ctx->r25;
    // 0x800442F4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800442F8: sw          $zero, -0x780C($at)
    MEM_W(-0X780C, ctx->r1) = 0;
    // 0x800442FC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044300: sw          $t6, -0x7810($at)
    MEM_W(-0X7810, ctx->r1) = ctx->r14;
    // 0x80044304: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044308: sw          $zero, -0x7804($at)
    MEM_W(-0X7804, ctx->r1) = 0;
    // 0x8004430C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044310: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80044314: sw          $t7, -0x7800($at)
    MEM_W(-0X7800, ctx->r1) = ctx->r15;
    // 0x80044318: b           L_80044324
    // 0x8004431C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80044324;
    // 0x8004431C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80044320:
    // 0x80044320: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80044324:
    // 0x80044324: beq         $v0, $zero, L_80044384
    if (ctx->r2 == 0) {
        // 0x80044328: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80044384;
    }
    // 0x80044328: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8004432C: lw          $v0, -0x77F8($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X77F8);
    // 0x80044330: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044334: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80044338: sw          $v1, -0x77F8($at)
    MEM_W(-0X77F8, ctx->r1) = ctx->r3;
    // 0x8004433C: bgez        $v0, L_80044350
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80044340: andi        $t8, $v0, 0x7
        ctx->r24 = ctx->r2 & 0X7;
            goto L_80044350;
    }
    // 0x80044340: andi        $t8, $v0, 0x7
    ctx->r24 = ctx->r2 & 0X7;
    // 0x80044344: beq         $t8, $zero, L_80044350
    if (ctx->r24 == 0) {
        // 0x80044348: nop
    
            goto L_80044350;
    }
    // 0x80044348: nop

    // 0x8004434C: addiu       $t8, $t8, -0x8
    ctx->r24 = ADD32(ctx->r24, -0X8);
L_80044350:
    // 0x80044350: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80044354: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x80044358: beq         $at, $zero, L_80044378
    if (ctx->r1 == 0) {
        // 0x8004435C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80044378;
    }
    // 0x8004435C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80044360: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80044364: addiu       $a2, $a2, -0x3C98
    ctx->r6 = ADD32(ctx->r6, -0X3C98);
    // 0x80044368: lhu         $t6, 0x2($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X2);
    // 0x8004436C: nop

    // 0x80044370: ori         $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 | 0X4000;
    // 0x80044374: sh          $t7, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r15;
L_80044378:
    // 0x80044378: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8004437C: jal         0x80056C2C
    // 0x80044380: addiu       $a2, $a2, -0x3C98
    ctx->r6 = ADD32(ctx->r6, -0X3C98);
    func_80056C2C(rdram, ctx);
        goto after_1;
    // 0x80044380: addiu       $a2, $a2, -0x3C98
    ctx->r6 = ADD32(ctx->r6, -0X3C98);
    after_1:
L_80044384:
    // 0x80044384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80044388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004438C: jr          $ra
    // 0x80044390: nop

    return;
    // 0x80044390: nop

;}
RECOMP_FUNC void func_80044394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80044394: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x80044398: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8004439C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800443A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800443A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800443A8: jal         0x8002D000
    // 0x800443AC: swc1        $f26, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f26.u32l;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x800443AC: swc1        $f26, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f26.u32l;
    after_0:
    // 0x800443B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800443B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800443B8: jal         0x8004A0A0
    // 0x800443BC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x800443BC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x800443C0: beq         $v0, $zero, L_800443D0
    if (ctx->r2 == 0) {
        // 0x800443C4: nop
    
            goto L_800443D0;
    }
    // 0x800443C4: nop

    // 0x800443C8: b           L_80044450
    // 0x800443CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80044450;
    // 0x800443CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800443D0:
    // 0x800443D0: jal         0x80028C2C
    // 0x800443D4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80028C2C(rdram, ctx);
        goto after_2;
    // 0x800443D4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x800443D8: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x800443DC: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800443E0: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800443E4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800443E8: add.s       $f4, $f10, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f24.fl;
    // 0x800443EC: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x800443F0: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x800443F4: jal         0x80028C00
    // 0x800443F8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80028C00(rdram, ctx);
        goto after_3;
    // 0x800443F8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x800443FC: mul.s       $f6, $f0, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80044400: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80044404: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80044408: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x8004440C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80044410: jal         0x8005093C
    // 0x80044414: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    func_8005093C(rdram, ctx);
        goto after_4;
    // 0x80044414: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x80044418: andi        $t6, $v0, 0x7000
    ctx->r14 = ctx->r2 & 0X7000;
    // 0x8004441C: addiu       $at, $zero, 0x1000
    ctx->r1 = ADD32(0, 0X1000);
    // 0x80044420: bne         $t6, $at, L_80044430
    if (ctx->r14 != ctx->r1) {
        // 0x80044424: nop
    
            goto L_80044430;
    }
    // 0x80044424: nop

    // 0x80044428: b           L_80044450
    // 0x8004442C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80044450;
    // 0x8004442C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80044430:
    // 0x80044430: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80044434: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80044438: c.eq.s      $f4, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f4.fl == ctx->f26.fl;
    // 0x8004443C: nop

    // 0x80044440: bc1f        L_80044450
    if (!c1cs) {
        // 0x80044444: nop
    
            goto L_80044450;
    }
    // 0x80044444: nop

    // 0x80044448: b           L_80044450
    // 0x8004444C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80044450;
    // 0x8004444C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80044450:
    // 0x80044450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80044454: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80044458: jr          $ra
    // 0x8004445C: nop

    return;
    // 0x8004445C: nop

    // 0x80044460: jr          $ra
    // 0x80044464: nop

    return;
    // 0x80044464: nop

;}
RECOMP_FUNC void func_80044468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80044468: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8004446C: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80044470: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80044474: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80044478: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8004447C: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80044480: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80044484: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80044488: jr          $ra
    // 0x8004448C: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    return;
    // 0x8004448C: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
;}
RECOMP_FUNC void func_80044490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80044490: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x80044494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80044498: jal         0x8005A3A8
    // 0x8004449C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    func_8005A3A8(rdram, ctx);
        goto after_0;
    // 0x8004449C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_0:
    // 0x800444A0: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x800444A4: addiu       $s3, $s3, -0x42C0
    ctx->r19 = ADD32(ctx->r19, -0X42C0);
    // 0x800444A8: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x800444AC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800444B0: lwc1        $f22, 0x5C40($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X5C40);
    // 0x800444B4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800444B8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800444BC: beq         $t7, $zero, L_800444CC
    if (ctx->r15 == 0) {
        // 0x800444C0: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_800444CC;
    }
    // 0x800444C0: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x800444C4: b           L_80044700
    // 0x800444C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80044700;
    // 0x800444C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800444CC:
    // 0x800444CC: jal         0x8002D000
    // 0x800444D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8002D000(rdram, ctx);
        goto after_1;
    // 0x800444D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800444D4: addiu       $s1, $sp, 0x74
    ctx->r17 = ADD32(ctx->r29, 0X74);
    // 0x800444D8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x800444DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800444E0: jal         0x8004A0A0
    // 0x800444E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x800444E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x800444E8: beq         $v0, $zero, L_800444F8
    if (ctx->r2 == 0) {
        // 0x800444EC: nop
    
            goto L_800444F8;
    }
    // 0x800444EC: nop

    // 0x800444F0: b           L_80044700
    // 0x800444F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80044700;
    // 0x800444F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800444F8:
    // 0x800444F8: blez        $s2, L_80044688
    if (SIGNED(ctx->r18) <= 0) {
        // 0x800444FC: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80044688;
    }
    // 0x800444FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80044500: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80044504: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80044508: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8004450C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80044510: addiu       $t0, $t0, 0x1724
    ctx->r8 = ADD32(ctx->r8, 0X1724);
    // 0x80044514: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_80044518:
    // 0x80044518: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8004451C: lbu         $t6, 0x20($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X20);
    // 0x80044520: addu        $t9, $t8, $a3
    ctx->r25 = ADD32(ctx->r24, ctx->r7);
    // 0x80044524: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x80044528: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x8004452C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80044530: sllv        $t8, $t7, $t6
    ctx->r24 = S32(ctx->r15 << (ctx->r14 & 31));
    // 0x80044534: and         $t7, $t8, $t9
    ctx->r15 = ctx->r24 & ctx->r25;
    // 0x80044538: beq         $t7, $zero, L_80044658
    if (ctx->r15 == 0) {
        // 0x8004453C: nop
    
            goto L_80044658;
    }
    // 0x8004453C: nop

    // 0x80044540: lwc1        $f14, 0x78($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80044544: nop

    // 0x80044548: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x8004454C: nop

    // 0x80044550: bc1f        L_80044560
    if (!c1cs) {
        // 0x80044554: nop
    
            goto L_80044560;
    }
    // 0x80044554: nop

    // 0x80044558: b           L_80044564
    // 0x8004455C: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
        goto L_80044564;
    // 0x8004455C: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
L_80044560:
    // 0x80044560: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_80044564:
    // 0x80044564: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80044568: nop

    // 0x8004456C: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80044570: nop

    // 0x80044574: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80044578: nop

    // 0x8004457C: bc1f        L_8004458C
    if (!c1cs) {
        // 0x80044580: nop
    
            goto L_8004458C;
    }
    // 0x80044580: nop

    // 0x80044584: b           L_80044590
    // 0x80044588: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_80044590;
    // 0x80044588: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_8004458C:
    // 0x8004458C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80044590:
    // 0x80044590: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80044594: lwc1        $f14, 0x78($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80044598: bc1f        L_800445E4
    if (!c1cs) {
        // 0x8004459C: nop
    
            goto L_800445E4;
    }
    // 0x8004459C: nop

    // 0x800445A0: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x800445A4: nop

    // 0x800445A8: bc1f        L_800445B8
    if (!c1cs) {
        // 0x800445AC: nop
    
            goto L_800445B8;
    }
    // 0x800445AC: nop

    // 0x800445B0: b           L_800445BC
    // 0x800445B4: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
        goto L_800445BC;
    // 0x800445B4: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
L_800445B8:
    // 0x800445B8: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_800445BC:
    // 0x800445BC: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x800445C0: nop

    // 0x800445C4: bc1f        L_800445D4
    if (!c1cs) {
        // 0x800445C8: nop
    
            goto L_800445D4;
    }
    // 0x800445C8: nop

    // 0x800445CC: b           L_800445D8
    // 0x800445D0: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_800445D8;
    // 0x800445D0: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_800445D4:
    // 0x800445D4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_800445D8:
    // 0x800445D8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x800445DC: b           L_80044620
    // 0x800445E0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80044620;
    // 0x800445E0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_800445E4:
    // 0x800445E4: c.lt.s      $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f14.fl < ctx->f20.fl;
    // 0x800445E8: nop

    // 0x800445EC: bc1f        L_800445FC
    if (!c1cs) {
        // 0x800445F0: nop
    
            goto L_800445FC;
    }
    // 0x800445F0: nop

    // 0x800445F4: b           L_80044600
    // 0x800445F8: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
        goto L_80044600;
    // 0x800445F8: neg.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = -ctx->f14.fl;
L_800445FC:
    // 0x800445FC: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_80044600:
    // 0x80044600: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80044604: nop

    // 0x80044608: bc1f        L_80044618
    if (!c1cs) {
        // 0x8004460C: nop
    
            goto L_80044618;
    }
    // 0x8004460C: nop

    // 0x80044610: b           L_8004461C
    // 0x80044614: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_8004461C;
    // 0x80044614: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_80044618:
    // 0x80044618: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8004461C:
    // 0x8004461C: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80044620:
    // 0x80044620: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x80044624: nop

    // 0x80044628: bc1f        L_80044650
    if (!c1cs) {
        // 0x8004462C: nop
    
            goto L_80044650;
    }
    // 0x8004462C: nop

    // 0x80044630: jal         0x80044468
    // 0x80044634: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80044468(rdram, ctx);
        goto after_3;
    // 0x80044634: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x80044638: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x8004463C: nop

    // 0x80044640: bc1f        L_80044650
    if (!c1cs) {
        // 0x80044644: nop
    
            goto L_80044650;
    }
    // 0x80044644: nop

    // 0x80044648: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8004464C: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
L_80044650:
    // 0x80044650: b           L_80044680
    // 0x80044654: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
        goto L_80044680;
    // 0x80044654: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_80044658:
    // 0x80044658: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8004465C: jal         0x80044468
    // 0x80044660: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80044468(rdram, ctx);
        goto after_4;
    // 0x80044660: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x80044664: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x80044668: nop

    // 0x8004466C: bc1f        L_8004467C
    if (!c1cs) {
        // 0x80044670: nop
    
            goto L_8004467C;
    }
    // 0x80044670: nop

    // 0x80044674: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x80044678: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
L_8004467C:
    // 0x8004467C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_80044680:
    // 0x80044680: bne         $a2, $s2, L_80044518
    if (ctx->r6 != ctx->r18) {
        // 0x80044684: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_80044518;
    }
    // 0x80044684: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
L_80044688:
    // 0x80044688: bgez        $s0, L_80044698
    if (SIGNED(ctx->r16) >= 0) {
        // 0x8004468C: nop
    
            goto L_80044698;
    }
    // 0x8004468C: nop

    // 0x80044690: b           L_80044700
    // 0x80044694: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80044700;
    // 0x80044694: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80044698:
    // 0x80044698: lbu         $t6, 0x20($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X20);
    // 0x8004469C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800446A0: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x800446A4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800446A8: lwc1        $f4, 0x17B0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X17B0);
    // 0x800446AC: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x800446B0: c.lt.s      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.fl < ctx->f4.fl;
    // 0x800446B4: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x800446B8: bc1f        L_80044700
    if (!c1cs) {
        // 0x800446BC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80044700;
    }
    // 0x800446BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800446C0: addu        $t6, $t9, $t7
    ctx->r14 = ADD32(ctx->r25, ctx->r15);
    // 0x800446C4: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x800446C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800446CC: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x800446D0: jal         0x80028850
    // 0x800446D4: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    func_80028850(rdram, ctx);
        goto after_5;
    // 0x800446D4: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_5:
    // 0x800446D8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800446DC: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800446E0: lwc1        $f11, 0x5C48($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X5C48);
    // 0x800446E4: lwc1        $f10, 0x5C4C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5C4C);
    // 0x800446E8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800446EC: mul.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x800446F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800446F4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800446F8: b           L_80044700
    // 0x800446FC: swc1        $f6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f6.u32l;
        goto L_80044700;
    // 0x800446FC: swc1        $f6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f6.u32l;
L_80044700:
    // 0x80044700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80044704: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x80044708: jr          $ra
    // 0x8004470C: nop

    return;
    // 0x8004470C: nop

;}
RECOMP_FUNC void func_80044710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80044710: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80044714: lw          $t6, -0x780C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X780C);
    // 0x80044718: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8004471C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80044720: bne         $s3, $t6, L_80044730
    if (ctx->r19 != ctx->r14) {
        // 0x80044724: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80044730;
    }
    // 0x80044724: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80044728: jal         0x80043F70
    // 0x8004472C: nop

    func_80043F70(rdram, ctx);
        goto after_0;
    // 0x8004472C: nop

    after_0:
L_80044730:
    // 0x80044730: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x80044734: addiu       $s2, $s2, -0x42C0
    ctx->r18 = ADD32(ctx->r18, -0X42C0);
    // 0x80044738: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x8004473C: lbu         $t7, 0x20($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X20);
    // 0x80044740: addiu       $s4, $s4, 0x1724
    ctx->r20 = ADD32(ctx->r20, 0X1724);
    // 0x80044744: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x80044748: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8004474C: sllv        $t9, $t8, $t7
    ctx->r25 = S32(ctx->r24 << (ctx->r15 & 31));
    // 0x80044750: and         $t8, $t9, $t6
    ctx->r24 = ctx->r25 & ctx->r14;
    // 0x80044754: bne         $t8, $zero, L_800447C8
    if (ctx->r24 != 0) {
        // 0x80044758: lui         $t9, 0x800D
        ctx->r25 = S32(0X800D << 16);
            goto L_800447C8;
    }
    // 0x80044758: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8004475C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80044760: lw          $t7, -0x780C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X780C);
    // 0x80044764: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044768: bne         $s3, $t7, L_800447A8
    if (ctx->r19 != ctx->r15) {
        // 0x8004476C: addiu       $s0, $sp, 0x30
        ctx->r16 = ADD32(ctx->r29, 0X30);
            goto L_800447A8;
    }
    // 0x8004476C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x80044770: lwc1        $f4, -0x77E8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X77E8);
    // 0x80044774: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80044778: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004477C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044780: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80044784: addiu       $s1, $sp, 0x2C
    ctx->r17 = ADD32(ctx->r29, 0X2C);
    // 0x80044788: bc1f        L_800447A8
    if (!c1cs) {
        // 0x8004478C: nop
    
            goto L_800447A8;
    }
    // 0x8004478C: nop

    // 0x80044790: lwc1        $f20, -0x77F4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X77F4);
    // 0x80044794: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80044798: jal         0x80043110
    // 0x8004479C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    func_80043110(rdram, ctx);
        goto after_1;
    // 0x8004479C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x800447A0: b           L_8004482C
    // 0x800447A4: lbu         $t6, 0x20($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X20);
        goto L_8004482C;
    // 0x800447A4: lbu         $t6, 0x20($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X20);
L_800447A8:
    // 0x800447A8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800447AC: lwc1        $f20, -0x77F4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X77F4);
    // 0x800447B0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800447B4: lwc1        $f22, -0x77F0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X77F0);
    // 0x800447B8: jal         0x80043110
    // 0x800447BC: addiu       $s1, $sp, 0x2C
    ctx->r17 = ADD32(ctx->r29, 0X2C);
    func_80043110(rdram, ctx);
        goto after_2;
    // 0x800447BC: addiu       $s1, $sp, 0x2C
    ctx->r17 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x800447C0: b           L_8004482C
    // 0x800447C4: lbu         $t6, 0x20($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X20);
        goto L_8004482C;
    // 0x800447C4: lbu         $t6, 0x20($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X20);
L_800447C8:
    // 0x800447C8: lw          $t9, -0x780C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X780C);
    // 0x800447CC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800447D0: bne         $s3, $t9, L_80044810
    if (ctx->r19 != ctx->r25) {
        // 0x800447D4: addiu       $s0, $sp, 0x30
        ctx->r16 = ADD32(ctx->r29, 0X30);
            goto L_80044810;
    }
    // 0x800447D4: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x800447D8: lwc1        $f8, -0x77EC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X77EC);
    // 0x800447DC: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x800447E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800447E4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800447E8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x800447EC: addiu       $s1, $sp, 0x2C
    ctx->r17 = ADD32(ctx->r29, 0X2C);
    // 0x800447F0: bc1f        L_80044810
    if (!c1cs) {
        // 0x800447F4: nop
    
            goto L_80044810;
    }
    // 0x800447F4: nop

    // 0x800447F8: lwc1        $f20, -0x77F4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X77F4);
    // 0x800447FC: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80044800: jal         0x80043110
    // 0x80044804: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    func_80043110(rdram, ctx);
        goto after_3;
    // 0x80044804: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x80044808: b           L_8004482C
    // 0x8004480C: lbu         $t6, 0x20($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X20);
        goto L_8004482C;
    // 0x8004480C: lbu         $t6, 0x20($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X20);
L_80044810:
    // 0x80044810: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044814: lwc1        $f20, -0x77F4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X77F4);
    // 0x80044818: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004481C: lwc1        $f22, -0x77F0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X77F0);
    // 0x80044820: jal         0x80043110
    // 0x80044824: addiu       $s1, $sp, 0x2C
    ctx->r17 = ADD32(ctx->r29, 0X2C);
    func_80043110(rdram, ctx);
        goto after_4;
    // 0x80044824: addiu       $s1, $sp, 0x2C
    ctx->r17 = ADD32(ctx->r29, 0X2C);
    after_4:
    // 0x80044828: lbu         $t6, 0x20($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X20);
L_8004482C:
    // 0x8004482C: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x80044830: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80044834: sllv        $t7, $t8, $t6
    ctx->r15 = S32(ctx->r24 << (ctx->r14 & 31));
    // 0x80044838: and         $t8, $t7, $t9
    ctx->r24 = ctx->r15 & ctx->r25;
    // 0x8004483C: beq         $t8, $zero, L_80044878
    if (ctx->r24 == 0) {
        // 0x80044840: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_80044878;
    }
    // 0x80044840: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80044844: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80044848: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004484C: lwc1        $f20, -0x77F4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X77F4);
    // 0x80044850: jal         0x80044394
    // 0x80044854: mov.s       $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    ctx->f24.fl = ctx->f22.fl;
    func_80044394(rdram, ctx);
        goto after_5;
    // 0x80044854: mov.s       $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    ctx->f24.fl = ctx->f22.fl;
    after_5:
    // 0x80044858: beq         $v0, $zero, L_80044878
    if (ctx->r2 == 0) {
        // 0x8004485C: lui         $a2, 0x800B
        ctx->r6 = S32(0X800B << 16);
            goto L_80044878;
    }
    // 0x8004485C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80044860: addiu       $a2, $a2, -0x3C98
    ctx->r6 = ADD32(ctx->r6, -0X3C98);
    // 0x80044864: sb          $zero, 0x6($a2)
    MEM_B(0X6, ctx->r6) = 0;
    // 0x80044868: sb          $zero, 0x7($a2)
    MEM_B(0X7, ctx->r6) = 0;
    // 0x8004486C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044870: b           L_80044890
    // 0x80044874: sw          $zero, -0x7810($at)
    MEM_W(-0X7810, ctx->r1) = 0;
        goto L_80044890;
    // 0x80044874: sw          $zero, -0x7810($at)
    MEM_W(-0X7810, ctx->r1) = 0;
L_80044878:
    // 0x80044878: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8004487C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80044880: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80044884: addiu       $a2, $a2, -0x3C98
    ctx->r6 = ADD32(ctx->r6, -0X3C98);
    // 0x80044888: sb          $t6, 0x6($a2)
    MEM_B(0X6, ctx->r6) = ctx->r14;
    // 0x8004488C: sb          $t7, 0x7($a2)
    MEM_B(0X7, ctx->r6) = ctx->r15;
L_80044890:
    // 0x80044890: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80044894: jal         0x80056C2C
    // 0x80044898: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80056C2C(rdram, ctx);
        goto after_6;
    // 0x80044898: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_6:
    // 0x8004489C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x800448A0: lw          $t9, -0x7818($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X7818);
    // 0x800448A4: nop

    // 0x800448A8: beq         $s3, $t9, L_800448F0
    if (ctx->r19 == ctx->r25) {
        // 0x800448AC: nop
    
            goto L_800448F0;
    }
    // 0x800448AC: nop

    // 0x800448B0: jal         0x80044490
    // 0x800448B4: addiu       $s4, $sp, 0x28
    ctx->r20 = ADD32(ctx->r29, 0X28);
    func_80044490(rdram, ctx);
        goto after_7;
    // 0x800448B4: addiu       $s4, $sp, 0x28
    ctx->r20 = ADD32(ctx->r29, 0X28);
    after_7:
    // 0x800448B8: beq         $v0, $zero, L_800448F0
    if (ctx->r2 == 0) {
        // 0x800448BC: addiu       $t8, $zero, 0x2
        ctx->r24 = ADD32(0, 0X2);
            goto L_800448F0;
    }
    // 0x800448BC: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800448C0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800448C4: sw          $t8, -0x7818($at)
    MEM_W(-0X7818, ctx->r1) = ctx->r24;
    // 0x800448C8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800448CC: sw          $zero, -0x780C($at)
    MEM_W(-0X780C, ctx->r1) = 0;
    // 0x800448D0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800448D4: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x800448D8: sw          $t6, -0x7810($at)
    MEM_W(-0X7810, ctx->r1) = ctx->r14;
    // 0x800448DC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800448E0: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800448E4: sw          $zero, -0x77FC($at)
    MEM_W(-0X77FC, ctx->r1) = 0;
    // 0x800448E8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800448EC: swc1        $f4, -0x77F4($at)
    MEM_W(-0X77F4, ctx->r1) = ctx->f4.u32l;
L_800448F0:
    // 0x800448F0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x800448F4: lw          $t7, -0x7810($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X7810);
    // 0x800448F8: nop

    // 0x800448FC: andi        $t9, $t7, 0x3
    ctx->r25 = ctx->r15 & 0X3;
    // 0x80044900: bne         $t9, $zero, L_80044914
    if (ctx->r25 != 0) {
        // 0x80044904: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80044914;
    }
    // 0x80044904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80044908: jal         0x8004425C
    // 0x8004490C: nop

    func_8004425C(rdram, ctx);
        goto after_8;
    // 0x8004490C: nop

    after_8:
    // 0x80044910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80044914:
    // 0x80044914: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80044918: jr          $ra
    // 0x8004491C: nop

    return;
    // 0x8004491C: nop

    // 0x80044920: jr          $ra
    // 0x80044924: nop

    return;
    // 0x80044924: nop

    // 0x80044928: jr          $ra
    // 0x8004492C: nop

    return;
    // 0x8004492C: nop

    // 0x80044930: jr          $ra
    // 0x80044934: nop

    return;
    // 0x80044934: nop

    // 0x80044938: jr          $ra
    // 0x8004493C: nop

    return;
    // 0x8004493C: nop

    // 0x80044940: jr          $ra
    // 0x80044944: nop

    return;
    // 0x80044944: nop

;}
RECOMP_FUNC void func_80044948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80044948: addiu       $sp, $sp, -0x178
    ctx->r29 = ADD32(ctx->r29, -0X178);
    // 0x8004494C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80044950: sw          $s7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r23;
    // 0x80044954: sw          $s6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r22;
    // 0x80044958: sw          $s5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r21;
    // 0x8004495C: sw          $s4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r20;
    // 0x80044960: sw          $s3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r19;
    // 0x80044964: sw          $s2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r18;
    // 0x80044968: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x8004496C: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x80044970: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80044974: swc1        $f28, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f28.u32l;
    // 0x80044978: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8004497C: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x80044980: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80044984: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x80044988: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8004498C: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80044990: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80044994: jal         0x80007774
    // 0x80044998: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80044998: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8004499C: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x800449A0: addiu       $s5, $s5, -0x3C98
    ctx->r21 = ADD32(ctx->r21, -0X3C98);
    // 0x800449A4: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x800449A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800449AC: jal         0x80056C2C
    // 0x800449B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80056C2C(rdram, ctx);
        goto after_1;
    // 0x800449B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x800449B4: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x800449B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800449BC: andi        $t6, $v0, 0x100
    ctx->r14 = ctx->r2 & 0X100;
    // 0x800449C0: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x800449C4: sw          $t7, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r15;
    // 0x800449C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800449CC: jal         0x80056C2C
    // 0x800449D0: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_80056C2C(rdram, ctx);
        goto after_2;
    // 0x800449D0: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_2:
    // 0x800449D4: sh          $zero, 0x0($s5)
    MEM_H(0X0, ctx->r21) = 0;
    // 0x800449D8: sh          $zero, 0x2($s5)
    MEM_H(0X2, ctx->r21) = 0;
    // 0x800449DC: sh          $zero, 0x4($s5)
    MEM_H(0X4, ctx->r21) = 0;
    // 0x800449E0: sb          $zero, 0x6($s5)
    MEM_B(0X6, ctx->r21) = 0;
    // 0x800449E4: sb          $zero, 0x7($s5)
    MEM_B(0X7, ctx->r21) = 0;
    // 0x800449E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800449EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800449F0: jal         0x80056C2C
    // 0x800449F4: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_80056C2C(rdram, ctx);
        goto after_3;
    // 0x800449F4: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_3:
    // 0x800449F8: jal         0x8002D000
    // 0x800449FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8002D000(rdram, ctx);
        goto after_4;
    // 0x800449FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x80044A00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80044A04: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80044A08: jal         0x8004A0A0
    // 0x80044A0C: addiu       $a2, $sp, 0x130
    ctx->r6 = ADD32(ctx->r29, 0X130);
    func_8004A0A0(rdram, ctx);
        goto after_5;
    // 0x80044A0C: addiu       $a2, $sp, 0x130
    ctx->r6 = ADD32(ctx->r29, 0X130);
    after_5:
    // 0x80044A10: beq         $v0, $zero, L_80044A2C
    if (ctx->r2 == 0) {
        // 0x80044A14: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_80044A2C;
    }
    // 0x80044A14: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044A18: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x80044A1C: nop

    // 0x80044A20: swc1        $f28, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f28.u32l;
    // 0x80044A24: swc1        $f28, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f28.u32l;
    // 0x80044A28: swc1        $f28, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f28.u32l;
L_80044A2C:
    // 0x80044A2C: sw          $zero, -0x7818($at)
    MEM_W(-0X7818, ctx->r1) = 0;
    // 0x80044A30: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044A34: sw          $zero, -0x7814($at)
    MEM_W(-0X7814, ctx->r1) = 0;
    // 0x80044A38: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044A3C: sw          $zero, -0x780C($at)
    MEM_W(-0X780C, ctx->r1) = 0;
    // 0x80044A40: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044A44: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80044A48: sw          $t8, -0x7800($at)
    MEM_W(-0X7800, ctx->r1) = ctx->r24;
    // 0x80044A4C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044A50: sw          $zero, -0x77FC($at)
    MEM_W(-0X77FC, ctx->r1) = 0;
    // 0x80044A54: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044A58: sw          $zero, -0x77F8($at)
    MEM_W(-0X77F8, ctx->r1) = 0;
    // 0x80044A5C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044A60: sw          $zero, -0x7808($at)
    MEM_W(-0X7808, ctx->r1) = 0;
    // 0x80044A64: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044A68: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x80044A6C: sw          $zero, -0x7804($at)
    MEM_W(-0X7804, ctx->r1) = 0;
    // 0x80044A70: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044A74: swc1        $f28, -0x77F4($at)
    MEM_W(-0X77F4, ctx->r1) = ctx->f28.u32l;
    // 0x80044A78: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044A7C: swc1        $f28, -0x77F0($at)
    MEM_W(-0X77F0, ctx->r1) = ctx->f28.u32l;
    // 0x80044A80: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044A84: swc1        $f28, -0x77EC($at)
    MEM_W(-0X77EC, ctx->r1) = ctx->f28.u32l;
    // 0x80044A88: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044A8C: swc1        $f28, -0x77E8($at)
    MEM_W(-0X77E8, ctx->r1) = ctx->f28.u32l;
    // 0x80044A90: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044A94: lwc1        $f4, 0x130($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X130);
    // 0x80044A98: sw          $zero, -0x77E0($at)
    MEM_W(-0X77E0, ctx->r1) = 0;
    // 0x80044A9C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044AA0: lwc1        $f6, 0x134($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X134);
    // 0x80044AA4: swc1        $f4, -0x77DC($at)
    MEM_W(-0X77DC, ctx->r1) = ctx->f4.u32l;
    // 0x80044AA8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044AAC: lwc1        $f8, 0x138($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X138);
    // 0x80044AB0: swc1        $f6, -0x77D8($at)
    MEM_W(-0X77D8, ctx->r1) = ctx->f6.u32l;
    // 0x80044AB4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044AB8: swc1        $f8, -0x77D4($at)
    MEM_W(-0X77D4, ctx->r1) = ctx->f8.u32l;
    // 0x80044ABC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044AC0: sw          $zero, -0x7810($at)
    MEM_W(-0X7810, ctx->r1) = 0;
    // 0x80044AC4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044AC8: jal         0x80044124
    // 0x80044ACC: swc1        $f28, -0x77D0($at)
    MEM_W(-0X77D0, ctx->r1) = ctx->f28.u32l;
    func_80044124(rdram, ctx);
        goto after_6;
    // 0x80044ACC: swc1        $f28, -0x77D0($at)
    MEM_W(-0X77D0, ctx->r1) = ctx->f28.u32l;
    after_6:
    // 0x80044AD0: sh          $zero, 0x0($s5)
    MEM_H(0X0, ctx->r21) = 0;
    // 0x80044AD4: addiu       $s7, $sp, 0x80
    ctx->r23 = ADD32(ctx->r29, 0X80);
    // 0x80044AD8: addiu       $s6, $sp, 0x98
    ctx->r22 = ADD32(ctx->r29, 0X98);
L_80044ADC:
    // 0x80044ADC: sh          $zero, 0x2($s5)
    MEM_H(0X2, ctx->r21) = 0;
    // 0x80044AE0: sh          $zero, 0x4($s5)
    MEM_H(0X4, ctx->r21) = 0;
    // 0x80044AE4: sb          $zero, 0x6($s5)
    MEM_B(0X6, ctx->r21) = 0;
    // 0x80044AE8: sb          $zero, 0x7($s5)
    MEM_B(0X7, ctx->r21) = 0;
    // 0x80044AEC: jal         0x800416F8
    // 0x80044AF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800416F8(rdram, ctx);
        goto after_7;
    // 0x80044AF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x80044AF4: bne         $v0, $zero, L_80044EC0
    if (ctx->r2 != 0) {
        // 0x80044AF8: lui         $v0, 0x800D
        ctx->r2 = S32(0X800D << 16);
            goto L_80044EC0;
    }
    // 0x80044AF8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80044AFC: lw          $v0, -0x7818($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7818);
    // 0x80044B00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80044B04: beq         $v0, $zero, L_80044B2C
    if (ctx->r2 == 0) {
        // 0x80044B08: nop
    
            goto L_80044B2C;
    }
    // 0x80044B08: nop

    // 0x80044B0C: beq         $v0, $at, L_80044B64
    if (ctx->r2 == ctx->r1) {
        // 0x80044B10: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80044B64;
    }
    // 0x80044B10: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80044B14: beq         $v0, $at, L_80044BD8
    if (ctx->r2 == ctx->r1) {
        // 0x80044B18: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80044BD8;
    }
    // 0x80044B18: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80044B1C: beq         $v0, $at, L_80044D6C
    if (ctx->r2 == ctx->r1) {
        // 0x80044B20: nop
    
            goto L_80044D6C;
    }
    // 0x80044B20: nop

    // 0x80044B24: b           L_80044D9C
    // 0x80044B28: nop

        goto L_80044D9C;
    // 0x80044B28: nop

L_80044B2C:
    // 0x80044B2C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80044B30: lw          $v0, -0x7810($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7810);
    // 0x80044B34: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044B38: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80044B3C: blez        $v0, L_80044B54
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80044B40: sw          $v0, -0x7810($at)
        MEM_W(-0X7810, ctx->r1) = ctx->r2;
            goto L_80044B54;
    }
    // 0x80044B40: sw          $v0, -0x7810($at)
    MEM_W(-0X7810, ctx->r1) = ctx->r2;
    // 0x80044B44: jal         0x80044710
    // 0x80044B48: nop

    func_80044710(rdram, ctx);
        goto after_8;
    // 0x80044B48: nop

    after_8:
    // 0x80044B4C: b           L_80044D9C
    // 0x80044B50: nop

        goto L_80044D9C;
    // 0x80044B50: nop

L_80044B54:
    // 0x80044B54: jal         0x80044124
    // 0x80044B58: nop

    func_80044124(rdram, ctx);
        goto after_9;
    // 0x80044B58: nop

    after_9:
    // 0x80044B5C: b           L_80044D9C
    // 0x80044B60: nop

        goto L_80044D9C;
    // 0x80044B60: nop

L_80044B64:
    // 0x80044B64: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80044B68: lw          $v0, -0x7810($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7810);
    // 0x80044B6C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044B70: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80044B74: blez        $v0, L_80044BC8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80044B78: sw          $v0, -0x7810($at)
        MEM_W(-0X7810, ctx->r1) = ctx->r2;
            goto L_80044BC8;
    }
    // 0x80044B78: sw          $v0, -0x7810($at)
    MEM_W(-0X7810, ctx->r1) = ctx->r2;
    // 0x80044B7C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80044B80: lw          $t9, -0x7810($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X7810);
    // 0x80044B84: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80044B88: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x80044B8C: mfhi        $t6
    ctx->r14 = hi;
    // 0x80044B90: beq         $t6, $zero, L_80044BA4
    if (ctx->r14 == 0) {
        // 0x80044B94: nop
    
            goto L_80044BA4;
    }
    // 0x80044B94: nop

    // 0x80044B98: sb          $zero, 0x6($s5)
    MEM_B(0X6, ctx->r21) = 0;
    // 0x80044B9C: b           L_80044D9C
    // 0x80044BA0: sb          $zero, 0x7($s5)
    MEM_B(0X7, ctx->r21) = 0;
        goto L_80044D9C;
    // 0x80044BA0: sb          $zero, 0x7($s5)
    MEM_B(0X7, ctx->r21) = 0;
L_80044BA4:
    // 0x80044BA4: jal         0x800440C8
    // 0x80044BA8: nop

    func_800440C8(rdram, ctx);
        goto after_10;
    // 0x80044BA8: nop

    after_10:
    // 0x80044BAC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80044BB0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80044BB4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044BB8: jal         0x80044710
    // 0x80044BBC: swc1        $f10, -0x77F0($at)
    MEM_W(-0X77F0, ctx->r1) = ctx->f10.u32l;
    func_80044710(rdram, ctx);
        goto after_11;
    // 0x80044BBC: swc1        $f10, -0x77F0($at)
    MEM_W(-0X77F0, ctx->r1) = ctx->f10.u32l;
    after_11:
    // 0x80044BC0: b           L_80044D9C
    // 0x80044BC4: nop

        goto L_80044D9C;
    // 0x80044BC4: nop

L_80044BC8:
    // 0x80044BC8: jal         0x80044124
    // 0x80044BCC: nop

    func_80044124(rdram, ctx);
        goto after_12;
    // 0x80044BCC: nop

    after_12:
    // 0x80044BD0: b           L_80044D9C
    // 0x80044BD4: nop

        goto L_80044D9C;
    // 0x80044BD4: nop

L_80044BD8:
    // 0x80044BD8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80044BDC: lw          $v0, -0x7810($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7810);
    // 0x80044BE0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044BE4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80044BE8: blez        $v0, L_80044D5C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80044BEC: sw          $v0, -0x7810($at)
        MEM_W(-0X7810, ctx->r1) = ctx->r2;
            goto L_80044D5C;
    }
    // 0x80044BEC: sw          $v0, -0x7810($at)
    MEM_W(-0X7810, ctx->r1) = ctx->r2;
    // 0x80044BF0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80044BF4: lw          $t7, -0x77FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X77FC);
    // 0x80044BF8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044BFC: bne         $t7, $zero, L_80044C38
    if (ctx->r15 != 0) {
        // 0x80044C00: addiu       $s0, $sp, 0xE0
        ctx->r16 = ADD32(ctx->r29, 0XE0);
            goto L_80044C38;
    }
    // 0x80044C00: addiu       $s0, $sp, 0xE0
    ctx->r16 = ADD32(ctx->r29, 0XE0);
    // 0x80044C04: lwc1        $f20, -0x77F4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X77F4);
    // 0x80044C08: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80044C0C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80044C10: jal         0x80043110
    // 0x80044C14: addiu       $s1, $sp, 0xDC
    ctx->r17 = ADD32(ctx->r29, 0XDC);
    func_80043110(rdram, ctx);
        goto after_13;
    // 0x80044C14: addiu       $s1, $sp, 0xDC
    ctx->r17 = ADD32(ctx->r29, 0XDC);
    after_13:
    // 0x80044C18: lw          $t8, 0xE0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE0);
    // 0x80044C1C: lw          $t9, 0xDC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XDC);
    // 0x80044C20: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80044C24: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044C28: sb          $t8, 0x6($s5)
    MEM_B(0X6, ctx->r21) = ctx->r24;
    // 0x80044C2C: sb          $t9, 0x7($s5)
    MEM_B(0X7, ctx->r21) = ctx->r25;
    // 0x80044C30: b           L_80044D44
    // 0x80044C34: sw          $t6, -0x77FC($at)
    MEM_W(-0X77FC, ctx->r1) = ctx->r14;
        goto L_80044D44;
    // 0x80044C34: sw          $t6, -0x77FC($at)
    MEM_W(-0X77FC, ctx->r1) = ctx->r14;
L_80044C38:
    // 0x80044C38: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80044C3C: lw          $t7, -0x77FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X77FC);
    // 0x80044C40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80044C44: bne         $t7, $at, L_80044D3C
    if (ctx->r15 != ctx->r1) {
        // 0x80044C48: lui         $v0, 0x800B
        ctx->r2 = S32(0X800B << 16);
            goto L_80044D3C;
    }
    // 0x80044C48: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80044C4C: lbu         $v0, -0x42A0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X42A0);
    // 0x80044C50: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80044C54: addiu       $t9, $t9, 0x1728
    ctx->r25 = ADD32(ctx->r25, 0X1728);
    // 0x80044C58: sll         $t8, $v0, 3
    ctx->r24 = S32(ctx->r2 << 3);
    // 0x80044C5C: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80044C60: lwc1        $f12, 0x0($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80044C64: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80044C68: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044C6C: c.eq.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl == ctx->f12.fl;
    // 0x80044C70: nop

    // 0x80044C74: bc1t        L_80044CA0
    if (c1cs) {
        // 0x80044C78: nop
    
            goto L_80044CA0;
    }
    // 0x80044C78: nop

    // 0x80044C7C: lwc1        $f20, -0x77F4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X77F4);
    // 0x80044C80: lwc1        $f24, 0x4($v1)
    ctx->f24.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80044C84: jal         0x80044394
    // 0x80044C88: mov.s       $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    ctx->f22.fl = ctx->f12.fl;
    func_80044394(rdram, ctx);
        goto after_14;
    // 0x80044C88: mov.s       $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    ctx->f22.fl = ctx->f12.fl;
    after_14:
    // 0x80044C8C: bne         $v0, $zero, L_80044D28
    if (ctx->r2 != 0) {
        // 0x80044C90: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_80044D28;
    }
    // 0x80044C90: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044C94: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80044C98: lbu         $v0, -0x42A0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X42A0);
    // 0x80044C9C: nop

L_80044CA0:
    // 0x80044CA0: slti        $at, $v0, 0xF
    ctx->r1 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
    // 0x80044CA4: bne         $at, $zero, L_80044CE8
    if (ctx->r1 != 0) {
        // 0x80044CA8: nop
    
            goto L_80044CE8;
    }
    // 0x80044CA8: nop

    // 0x80044CAC: jal         0x80027F1C
    // 0x80044CB0: nop

    func_80027F1C(rdram, ctx);
        goto after_15;
    // 0x80044CB0: nop

    after_15:
    // 0x80044CB4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80044CB8: lwc1        $f7, 0x5C50($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X5C50);
    // 0x80044CBC: lwc1        $f6, 0x5C54($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5C54);
    // 0x80044CC0: nop

    // 0x80044CC4: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x80044CC8: nop

    // 0x80044CCC: bc1f        L_80044CE8
    if (!c1cs) {
        // 0x80044CD0: nop
    
            goto L_80044CE8;
    }
    // 0x80044CD0: nop

    // 0x80044CD4: lhu         $t6, 0x2($s5)
    ctx->r14 = MEM_HU(ctx->r21, 0X2);
    // 0x80044CD8: nop

    // 0x80044CDC: ori         $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 | 0X4000;
    // 0x80044CE0: b           L_80044CF8
    // 0x80044CE4: sh          $t7, 0x2($s5)
    MEM_H(0X2, ctx->r21) = ctx->r15;
        goto L_80044CF8;
    // 0x80044CE4: sh          $t7, 0x2($s5)
    MEM_H(0X2, ctx->r21) = ctx->r15;
L_80044CE8:
    // 0x80044CE8: lhu         $t8, 0x2($s5)
    ctx->r24 = MEM_HU(ctx->r21, 0X2);
    // 0x80044CEC: nop

    // 0x80044CF0: ori         $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 | 0X8000;
    // 0x80044CF4: sh          $t9, 0x2($s5)
    MEM_H(0X2, ctx->r21) = ctx->r25;
L_80044CF8:
    // 0x80044CF8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044CFC: lwc1        $f20, -0x77F4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X77F4);
    // 0x80044D00: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80044D04: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80044D08: addiu       $s0, $sp, 0xE0
    ctx->r16 = ADD32(ctx->r29, 0XE0);
    // 0x80044D0C: jal         0x80043110
    // 0x80044D10: addiu       $s1, $sp, 0xDC
    ctx->r17 = ADD32(ctx->r29, 0XDC);
    func_80043110(rdram, ctx);
        goto after_16;
    // 0x80044D10: addiu       $s1, $sp, 0xDC
    ctx->r17 = ADD32(ctx->r29, 0XDC);
    after_16:
    // 0x80044D14: lw          $t6, 0xE0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE0);
    // 0x80044D18: lw          $t7, 0xDC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XDC);
    // 0x80044D1C: sb          $t6, 0x6($s5)
    MEM_B(0X6, ctx->r21) = ctx->r14;
    // 0x80044D20: b           L_80044D2C
    // 0x80044D24: sb          $t7, 0x7($s5)
    MEM_B(0X7, ctx->r21) = ctx->r15;
        goto L_80044D2C;
    // 0x80044D24: sb          $t7, 0x7($s5)
    MEM_B(0X7, ctx->r21) = ctx->r15;
L_80044D28:
    // 0x80044D28: sw          $zero, -0x7810($at)
    MEM_W(-0X7810, ctx->r1) = 0;
L_80044D2C:
    // 0x80044D2C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80044D30: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044D34: b           L_80044D44
    // 0x80044D38: sw          $t8, -0x77FC($at)
    MEM_W(-0X77FC, ctx->r1) = ctx->r24;
        goto L_80044D44;
    // 0x80044D38: sw          $t8, -0x77FC($at)
    MEM_W(-0X77FC, ctx->r1) = ctx->r24;
L_80044D3C:
    // 0x80044D3C: sb          $zero, 0x6($s5)
    MEM_B(0X6, ctx->r21) = 0;
    // 0x80044D40: sb          $zero, 0x7($s5)
    MEM_B(0X7, ctx->r21) = 0;
L_80044D44:
    // 0x80044D44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80044D48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80044D4C: jal         0x80056C2C
    // 0x80044D50: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_80056C2C(rdram, ctx);
        goto after_17;
    // 0x80044D50: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_17:
    // 0x80044D54: b           L_80044D9C
    // 0x80044D58: nop

        goto L_80044D9C;
    // 0x80044D58: nop

L_80044D5C:
    // 0x80044D5C: jal         0x80044124
    // 0x80044D60: nop

    func_80044124(rdram, ctx);
        goto after_18;
    // 0x80044D60: nop

    after_18:
    // 0x80044D64: b           L_80044D9C
    // 0x80044D68: nop

        goto L_80044D9C;
    // 0x80044D68: nop

L_80044D6C:
    // 0x80044D6C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80044D70: lw          $v0, -0x7810($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7810);
    // 0x80044D74: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044D78: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80044D7C: blez        $v0, L_80044D94
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80044D80: sw          $v0, -0x7810($at)
        MEM_W(-0X7810, ctx->r1) = ctx->r2;
            goto L_80044D94;
    }
    // 0x80044D80: sw          $v0, -0x7810($at)
    MEM_W(-0X7810, ctx->r1) = ctx->r2;
    // 0x80044D84: jal         0x8004425C
    // 0x80044D88: nop

    func_8004425C(rdram, ctx);
        goto after_19;
    // 0x80044D88: nop

    after_19:
    // 0x80044D8C: b           L_80044D9C
    // 0x80044D90: nop

        goto L_80044D9C;
    // 0x80044D90: nop

L_80044D94:
    // 0x80044D94: jal         0x80044124
    // 0x80044D98: nop

    func_80044124(rdram, ctx);
        goto after_20;
    // 0x80044D98: nop

    after_20:
L_80044D9C:
    // 0x80044D9C: jal         0x8002D000
    // 0x80044DA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002D000(rdram, ctx);
        goto after_21;
    // 0x80044DA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_21:
    // 0x80044DA4: sw          $v0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r2;
    // 0x80044DA8: jal         0x8002D000
    // 0x80044DAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8002D000(rdram, ctx);
        goto after_22;
    // 0x80044DAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_22:
    // 0x80044DB0: lw          $a0, 0x118($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X118);
    // 0x80044DB4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80044DB8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80044DBC: jal         0x8004A0A0
    // 0x80044DC0: sw          $v0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r2;
    func_8004A0A0(rdram, ctx);
        goto after_23;
    // 0x80044DC0: sw          $v0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r2;
    after_23:
    // 0x80044DC4: bne         $v0, $zero, L_80044E28
    if (ctx->r2 != 0) {
        // 0x80044DC8: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_80044E28;
    }
    // 0x80044DC8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80044DCC: lw          $a0, 0xB4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB4);
    // 0x80044DD0: jal         0x8004A0A0
    // 0x80044DD4: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_24;
    // 0x80044DD4: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_24:
    // 0x80044DD8: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80044DDC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80044DE0: jal         0x80028850
    // 0x80044DE4: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    func_80028850(rdram, ctx);
        goto after_25;
    // 0x80044DE4: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    after_25:
    // 0x80044DE8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80044DEC: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80044DF0: lwc1        $f5, 0x5C58($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5C58);
    // 0x80044DF4: lwc1        $f4, 0x5C5C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5C5C);
    // 0x80044DF8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80044DFC: mul.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x80044E00: swc1        $f28, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f28.u32l;
    // 0x80044E04: swc1        $f28, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f28.u32l;
    // 0x80044E08: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80044E0C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80044E10: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80044E14: jal         0x8002848C
    // 0x80044E18: swc1        $f8, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f8.u32l;
    func_8002848C(rdram, ctx);
        goto after_26;
    // 0x80044E18: swc1        $f8, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f8.u32l;
    after_26:
    // 0x80044E1C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80044E20: addiu       $t9, $t9, -0x77E8
    ctx->r25 = ADD32(ctx->r25, -0X77E8);
    // 0x80044E24: swc1        $f0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f0.u32l;
L_80044E28:
    // 0x80044E28: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80044E2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80044E30: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044E34: lwc1        $f4, -0x77E8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X77E8);
    // 0x80044E38: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80044E3C: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x80044E40: nop

    // 0x80044E44: bc1t        L_80044EC0
    if (c1cs) {
        // 0x80044E48: nop
    
            goto L_80044EC0;
    }
    // 0x80044E48: nop

    // 0x80044E4C: lw          $t6, -0x7818($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7818);
    // 0x80044E50: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80044E54: bne         $t6, $zero, L_80044EC0
    if (ctx->r14 != 0) {
        // 0x80044E58: nop
    
            goto L_80044EC0;
    }
    // 0x80044E58: nop

    // 0x80044E5C: lw          $t7, -0x780C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X780C);
    // 0x80044E60: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044E64: bne         $t7, $zero, L_80044EC0
    if (ctx->r15 != 0) {
        // 0x80044E68: nop
    
            goto L_80044EC0;
    }
    // 0x80044E68: nop

    // 0x80044E6C: lwc1        $f6, -0x77E8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X77E8);
    // 0x80044E70: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80044E74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80044E78: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044E7C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80044E80: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80044E84: bc1f        L_80044EC0
    if (!c1cs) {
        // 0x80044E88: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_80044EC0;
    }
    // 0x80044E88: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80044E8C: sw          $zero, -0x7818($at)
    MEM_W(-0X7818, ctx->r1) = 0;
    // 0x80044E90: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044E94: sw          $t8, -0x780C($at)
    MEM_W(-0X780C, ctx->r1) = ctx->r24;
    // 0x80044E98: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044E9C: sw          $zero, -0x7804($at)
    MEM_W(-0X7804, ctx->r1) = 0;
    // 0x80044EA0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044EA4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80044EA8: lwc1        $f10, 0x120($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X120);
    // 0x80044EAC: sw          $t9, -0x7800($at)
    MEM_W(-0X7800, ctx->r1) = ctx->r25;
    // 0x80044EB0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044EB4: swc1        $f10, -0x77F4($at)
    MEM_W(-0X77F4, ctx->r1) = ctx->f10.u32l;
    // 0x80044EB8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80044EBC: sw          $v0, -0x7810($at)
    MEM_W(-0X7810, ctx->r1) = ctx->r2;
L_80044EC0:
    // 0x80044EC0: jal         0x800072B0
    // 0x80044EC4: nop

    func_800072B0(rdram, ctx);
        goto after_27;
    // 0x80044EC4: nop

    after_27:
    // 0x80044EC8: jal         0x80007AB0
    // 0x80044ECC: nop

    func_80007AB0(rdram, ctx);
        goto after_28;
    // 0x80044ECC: nop

    after_28:
    // 0x80044ED0: b           L_80044ADC
    // 0x80044ED4: sh          $zero, 0x0($s5)
    MEM_H(0X0, ctx->r21) = 0;
        goto L_80044ADC;
    // 0x80044ED4: sh          $zero, 0x0($s5)
    MEM_H(0X0, ctx->r21) = 0;
    // 0x80044ED8: nop

    // 0x80044EDC: nop

    // 0x80044EE0: nop

    // 0x80044EE4: nop

    // 0x80044EE8: nop

    // 0x80044EEC: nop

    // 0x80044EF0: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x80044EF4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80044EF8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80044EFC: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80044F00: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80044F04: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80044F08: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80044F0C: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80044F10: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80044F14: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80044F18: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80044F1C: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x80044F20: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x80044F24: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x80044F28: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x80044F2C: lw          $s4, 0x4C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X4C);
    // 0x80044F30: lw          $s5, 0x50($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X50);
    // 0x80044F34: lw          $s6, 0x54($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X54);
    // 0x80044F38: lw          $s7, 0x58($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X58);
    // 0x80044F3C: jr          $ra
    // 0x80044F40: addiu       $sp, $sp, 0x178
    ctx->r29 = ADD32(ctx->r29, 0X178);
    return;
    // 0x80044F40: addiu       $sp, $sp, 0x178
    ctx->r29 = ADD32(ctx->r29, 0X178);
;}
RECOMP_FUNC void func_80044F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80044F44: jr          $ra
    // 0x80044F48: nop

    return;
    // 0x80044F48: nop

;}
RECOMP_FUNC void func_80044F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80044F4C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80044F50: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80044F54: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80044F58: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80044F5C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80044F60: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80044F64: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80044F68: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80044F6C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80044F70: jal         0x80007774
    // 0x80044F74: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80044F74: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80044F78: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x80044F7C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80044F80: lw          $s2, 0x0($v1)
    ctx->r18 = MEM_W(ctx->r3, 0X0);
    // 0x80044F84: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80044F88: addiu       $s0, $s0, -0x3C98
    ctx->r16 = ADD32(ctx->r16, -0X3C98);
    // 0x80044F8C: addiu       $s4, $s2, 0x4
    ctx->r20 = ADD32(ctx->r18, 0X4);
    // 0x80044F90: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80044F94: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80044F98: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80044F9C: jal         0x80056C2C
    // 0x80044FA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80056C2C(rdram, ctx);
        goto after_1;
    // 0x80044FA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80044FA4: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x80044FA8: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x80044FAC: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x80044FB0: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x80044FB4: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    // 0x80044FB8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80044FBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80044FC0: jal         0x80056C2C
    // 0x80044FC4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_80056C2C(rdram, ctx);
        goto after_2;
    // 0x80044FC4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x80044FC8: lui         $s6, 0x800D
    ctx->r22 = S32(0X800D << 16);
    // 0x80044FCC: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x80044FD0: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80044FD4: addiu       $s3, $s3, -0x4298
    ctx->r19 = ADD32(ctx->r19, -0X4298);
    // 0x80044FD8: addiu       $s5, $s5, -0x3C8C
    ctx->r21 = ADD32(ctx->r21, -0X3C8C);
    // 0x80044FDC: addiu       $s6, $s6, -0x7868
    ctx->r22 = ADD32(ctx->r22, -0X7868);
    // 0x80044FE0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80044FE4: addiu       $s7, $zero, 0x50
    ctx->r23 = ADD32(0, 0X50);
    // 0x80044FE8: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
L_80044FEC:
    // 0x80044FEC: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x80044FF0: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x80044FF4: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x80044FF8: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    // 0x80044FFC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80045000: jal         0x8005BCB4
    // 0x80045004: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_8005BCB4(rdram, ctx);
        goto after_3;
    // 0x80045004: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_3:
    // 0x80045008: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x8004500C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80045010: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80045014: beq         $t8, $zero, L_80045024
    if (ctx->r24 == 0) {
        // 0x80045018: sll         $t9, $s2, 2
        ctx->r25 = S32(ctx->r18 << 2);
            goto L_80045024;
    }
    // 0x80045018: sll         $t9, $s2, 2
    ctx->r25 = S32(ctx->r18 << 2);
    // 0x8004501C: b           L_80045024
    // 0x80045020: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80045024;
    // 0x80045020: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80045024:
    // 0x80045024: beq         $v0, $zero, L_80045030
    if (ctx->r2 == 0) {
        // 0x80045028: addu        $t0, $s3, $t9
        ctx->r8 = ADD32(ctx->r19, ctx->r25);
            goto L_80045030;
    }
    // 0x80045028: addu        $t0, $s3, $t9
    ctx->r8 = ADD32(ctx->r19, ctx->r25);
    // 0x8004502C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80045030:
    // 0x80045030: bne         $s1, $zero, L_80045064
    if (ctx->r17 != 0) {
        // 0x80045034: nop
    
            goto L_80045064;
    }
    // 0x80045034: nop

    // 0x80045038: lw          $a0, 0x118($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X118);
    // 0x8004503C: jal         0x8005B858
    // 0x80045040: nop

    func_8005B858(rdram, ctx);
        goto after_4;
    // 0x80045040: nop

    after_4:
    // 0x80045044: bltz        $v0, L_80045064
    if (SIGNED(ctx->r2) < 0) {
        // 0x80045048: sll         $t1, $v0, 2
        ctx->r9 = S32(ctx->r2 << 2);
            goto L_80045064;
    }
    // 0x80045048: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x8004504C: addu        $t2, $s3, $t1
    ctx->r10 = ADD32(ctx->r19, ctx->r9);
    // 0x80045050: lw          $t3, 0x94($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X94);
    // 0x80045054: nop

    // 0x80045058: beq         $s2, $t3, L_80045064
    if (ctx->r18 == ctx->r11) {
        // 0x8004505C: nop
    
            goto L_80045064;
    }
    // 0x8004505C: nop

    // 0x80045060: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80045064:
    // 0x80045064: bne         $s1, $zero, L_8004509C
    if (ctx->r17 != 0) {
        // 0x80045068: sll         $t4, $s2, 2
        ctx->r12 = S32(ctx->r18 << 2);
            goto L_8004509C;
    }
    // 0x80045068: sll         $t4, $s2, 2
    ctx->r12 = S32(ctx->r18 << 2);
    // 0x8004506C: addu        $t5, $s3, $t4
    ctx->r13 = ADD32(ctx->r19, ctx->r12);
    // 0x80045070: lw          $a0, 0x118($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X118);
    // 0x80045074: jal         0x8005B8C4
    // 0x80045078: nop

    func_8005B8C4(rdram, ctx);
        goto after_5;
    // 0x80045078: nop

    after_5:
    // 0x8004507C: bltz        $v0, L_8004509C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80045080: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_8004509C;
    }
    // 0x80045080: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80045084: addu        $t7, $s3, $t6
    ctx->r15 = ADD32(ctx->r19, ctx->r14);
    // 0x80045088: lw          $t8, 0x94($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X94);
    // 0x8004508C: nop

    // 0x80045090: beq         $s2, $t8, L_8004509C
    if (ctx->r18 == ctx->r24) {
        // 0x80045094: nop
    
            goto L_8004509C;
    }
    // 0x80045094: nop

    // 0x80045098: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8004509C:
    // 0x8004509C: beq         $s1, $zero, L_800450F8
    if (ctx->r17 == 0) {
        // 0x800450A0: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_800450F8;
    }
    // 0x800450A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800450A4: multu       $s2, $s7
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800450A8: mflo        $t9
    ctx->r25 = lo;
    // 0x800450AC: addu        $v0, $s6, $t9
    ctx->r2 = ADD32(ctx->r22, ctx->r25);
    // 0x800450B0: lw          $v1, 0x160($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X160);
    // 0x800450B4: addiu       $v0, $v0, 0x140
    ctx->r2 = ADD32(ctx->r2, 0X140);
    // 0x800450B8: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800450BC: addiu       $t0, $v1, 0x1
    ctx->r8 = ADD32(ctx->r3, 0X1);
    // 0x800450C0: sw          $t0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r8;
    // 0x800450C4: bgez        $a0, L_800450D8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x800450C8: andi        $t1, $a0, 0x7
        ctx->r9 = ctx->r4 & 0X7;
            goto L_800450D8;
    }
    // 0x800450C8: andi        $t1, $a0, 0x7
    ctx->r9 = ctx->r4 & 0X7;
    // 0x800450CC: beq         $t1, $zero, L_800450D8
    if (ctx->r9 == 0) {
        // 0x800450D0: nop
    
            goto L_800450D8;
    }
    // 0x800450D0: nop

    // 0x800450D4: addiu       $t1, $t1, -0x8
    ctx->r9 = ADD32(ctx->r9, -0X8);
L_800450D8:
    // 0x800450D8: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x800450DC: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x800450E0: beq         $at, $zero, L_800450FC
    if (ctx->r1 == 0) {
        // 0x800450E4: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_800450FC;
    }
    // 0x800450E4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800450E8: lhu         $t3, 0x2($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X2);
    // 0x800450EC: nop

    // 0x800450F0: ori         $t4, $t3, 0x4000
    ctx->r12 = ctx->r11 | 0X4000;
    // 0x800450F4: sh          $t4, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r12;
L_800450F8:
    // 0x800450F8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_800450FC:
    // 0x800450FC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80045100: jal         0x80056C2C
    // 0x80045104: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_80056C2C(rdram, ctx);
        goto after_6;
    // 0x80045104: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_6:
    // 0x80045108: jal         0x80007AB0
    // 0x8004510C: nop

    func_80007AB0(rdram, ctx);
        goto after_7;
    // 0x8004510C: nop

    after_7:
    // 0x80045110: b           L_80044FEC
    // 0x80045114: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
        goto L_80044FEC;
    // 0x80045114: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x80045118: nop

    // 0x8004511C: nop

    // 0x80045120: nop

    // 0x80045124: nop

    // 0x80045128: nop

    // 0x8004512C: nop

    // 0x80045130: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80045134: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80045138: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8004513C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80045140: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80045144: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80045148: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8004514C: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80045150: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80045154: jr          $ra
    // 0x80045158: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80045158: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8004515C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004515C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80045160: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80045164: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80045168: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004516C: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80045170: sw          $a0, -0x3C70($at)
    MEM_W(-0X3C70, ctx->r1) = ctx->r4;
    // 0x80045174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80045178: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8004517C: addiu       $a0, $a0, 0x4F4C
    ctx->r4 = ADD32(ctx->r4, 0X4F4C);
    // 0x80045180: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80045184: ori         $a1, $zero, 0xFF8F
    ctx->r5 = 0 | 0XFF8F;
    // 0x80045188: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8004518C: jal         0x80007C3C
    // 0x80045190: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_0;
    // 0x80045190: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80045194: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80045198: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004519C: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x800451A0: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x800451A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800451A8: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x800451AC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800451B0: addiu       $t9, $t9, -0x3C70
    ctx->r25 = ADD32(ctx->r25, -0X3C70);
    // 0x800451B4: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x800451B8: sw          $v0, -0x76DC($at)
    MEM_W(-0X76DC, ctx->r1) = ctx->r2;
    // 0x800451BC: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x800451C0: sw          $t1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r9;
    // 0x800451C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800451C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800451CC: jr          $ra
    // 0x800451D0: nop

    return;
    // 0x800451D0: nop

    // 0x800451D4: jr          $ra
    // 0x800451D8: nop

    return;
    // 0x800451D8: nop

    // 0x800451DC: jr          $ra
    // 0x800451E0: nop

    return;
    // 0x800451E0: nop

    // 0x800451E4: jr          $ra
    // 0x800451E8: nop

    return;
    // 0x800451E8: nop

;}
RECOMP_FUNC void func_800451EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800451EC: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x800451F0: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x800451F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800451F8: addiu       $t7, $t7, 0x171C
    ctx->r15 = ADD32(ctx->r15, 0X171C);
    // 0x800451FC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80045200: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x80045204: addiu       $t6, $sp, 0x54
    ctx->r14 = ADD32(ctx->r29, 0X54);
    // 0x80045208: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x8004520C: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x80045210: addiu       $s3, $s3, -0x75A8
    ctx->r19 = ADD32(ctx->r19, -0X75A8);
    // 0x80045214: addiu       $s1, $s1, -0x7688
    ctx->r17 = ADD32(ctx->r17, -0X7688);
    // 0x80045218: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8004521C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80045220: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
L_80045224:
    // 0x80045224: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x80045228: jal         0x8002D000
    // 0x8004522C: nop

    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x8004522C: nop

    after_0:
    // 0x80045230: bne         $v0, $s2, L_80045240
    if (ctx->r2 != ctx->r18) {
        // 0x80045234: nop
    
            goto L_80045240;
    }
    // 0x80045234: nop

    // 0x80045238: b           L_80045250
    // 0x8004523C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_80045250;
    // 0x8004523C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_80045240:
    // 0x80045240: addiu       $s1, $s1, 0x38
    ctx->r17 = ADD32(ctx->r17, 0X38);
    // 0x80045244: bne         $s1, $s3, L_80045224
    if (ctx->r17 != ctx->r19) {
        // 0x80045248: nop
    
            goto L_80045224;
    }
    // 0x80045248: nop

    // 0x8004524C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80045250:
    // 0x80045250: lw          $s1, 0x18($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X18);
    // 0x80045254: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80045258: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8004525C: jal         0x80028850
    // 0x80045260: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    func_80028850(rdram, ctx);
        goto after_1;
    // 0x80045260: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_1:
    // 0x80045264: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80045268: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8004526C: lwc1        $f9, 0x5C60($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X5C60);
    // 0x80045270: lwc1        $f8, 0x5C64($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5C64);
    // 0x80045274: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80045278: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8004527C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80045280: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x80045284: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80045288: addiu       $s2, $s2, -0x75A8
    ctx->r18 = ADD32(ctx->r18, -0X75A8);
    // 0x8004528C: cvt.s.d     $f24, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f24.fl = CVT_S_D(ctx->f10.d);
    // 0x80045290: addiu       $s4, $sp, 0x54
    ctx->r20 = ADD32(ctx->r29, 0X54);
    // 0x80045294: addiu       $s6, $sp, 0x5C
    ctx->r22 = ADD32(ctx->r29, 0X5C);
    // 0x80045298: addiu       $s3, $zero, 0xF00
    ctx->r19 = ADD32(0, 0XF00);
L_8004529C:
    // 0x8004529C: jal         0x80028C2C
    // 0x800452A0: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    func_80028C2C(rdram, ctx);
        goto after_2;
    // 0x800452A0: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    after_2:
    // 0x800452A4: lwc1        $f4, 0x0($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X0);
    // 0x800452A8: lwc1        $f8, 0x0($s5)
    ctx->f8.u32l = MEM_W(ctx->r21, 0X0);
    // 0x800452AC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800452B0: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    // 0x800452B4: jal         0x80028C00
    // 0x800452B8: add.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f8.fl;
    func_80028C00(rdram, ctx);
        goto after_3;
    // 0x800452B8: add.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f8.fl;
    after_3:
    // 0x800452BC: lwc1        $f10, 0x0($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X0);
    // 0x800452C0: lwc1        $f6, 0x8($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X8);
    // 0x800452C4: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800452C8: add.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800452CC: nop

    // 0x800452D0: div.s       $f8, $f2, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = DIV_S(ctx->f2.fl, ctx->f22.fl);
    // 0x800452D4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800452D8: nop

    // 0x800452DC: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800452E0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800452E4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800452E8: nop

    // 0x800452EC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800452F0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800452F4: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x800452F8: div.s       $f4, $f20, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = DIV_S(ctx->f20.fl, ctx->f22.fl);
    // 0x800452FC: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x80045300: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80045304: lw          $t6, 0xBC4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XBC4);
    // 0x80045308: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8004530C: nop

    // 0x80045310: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80045314: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80045318: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004531C: nop

    // 0x80045320: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80045324: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x80045328: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8004532C: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x80045330: subu        $v1, $a0, $s1
    ctx->r3 = SUB32(ctx->r4, ctx->r17);
    // 0x80045334: bne         $v1, $t6, L_80045370
    if (ctx->r3 != ctx->r14) {
        // 0x80045338: sll         $t9, $s1, 1
        ctx->r25 = S32(ctx->r17 << 1);
            goto L_80045370;
    }
    // 0x80045338: sll         $t9, $s1, 1
    ctx->r25 = S32(ctx->r17 << 1);
    // 0x8004533C: addu        $t7, $s2, $t9
    ctx->r15 = ADD32(ctx->r18, ctx->r25);
    // 0x80045340: lhu         $v0, 0x0($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X0);
    // 0x80045344: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80045348: andi        $t8, $v0, 0xF00
    ctx->r24 = ctx->r2 & 0XF00;
    // 0x8004534C: beq         $s3, $t8, L_8004536C
    if (ctx->r19 == ctx->r24) {
        // 0x80045350: ori         $t8, $s0, 0x1
        ctx->r24 = ctx->r16 | 0X1;
            goto L_8004536C;
    }
    // 0x80045350: ori         $t8, $s0, 0x1
    ctx->r24 = ctx->r16 | 0X1;
    // 0x80045354: lw          $t6, 0xBD8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XBD8);
    // 0x80045358: nop

    // 0x8004535C: and         $t9, $t6, $v0
    ctx->r25 = ctx->r14 & ctx->r2;
    // 0x80045360: andi        $t7, $t9, 0xF0
    ctx->r15 = ctx->r25 & 0XF0;
    // 0x80045364: beq         $t7, $zero, L_80045370
    if (ctx->r15 == 0) {
        // 0x80045368: ori         $t8, $s0, 0x1
        ctx->r24 = ctx->r16 | 0X1;
            goto L_80045370;
    }
    // 0x80045368: ori         $t8, $s0, 0x1
    ctx->r24 = ctx->r16 | 0X1;
L_8004536C:
    // 0x8004536C: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
L_80045370:
    // 0x80045370: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80045374: lw          $t6, 0xBC8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XBC8);
    // 0x80045378: sll         $t9, $s1, 1
    ctx->r25 = S32(ctx->r17 << 1);
    // 0x8004537C: bne         $v1, $t6, L_800453B4
    if (ctx->r3 != ctx->r14) {
        // 0x80045380: addu        $t7, $s2, $t9
        ctx->r15 = ADD32(ctx->r18, ctx->r25);
            goto L_800453B4;
    }
    // 0x80045380: addu        $t7, $s2, $t9
    ctx->r15 = ADD32(ctx->r18, ctx->r25);
    // 0x80045384: lhu         $v0, 0x0($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X0);
    // 0x80045388: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8004538C: andi        $t8, $v0, 0xF00
    ctx->r24 = ctx->r2 & 0XF00;
    // 0x80045390: beq         $s3, $t8, L_800453B0
    if (ctx->r19 == ctx->r24) {
        // 0x80045394: ori         $t8, $s0, 0x1
        ctx->r24 = ctx->r16 | 0X1;
            goto L_800453B0;
    }
    // 0x80045394: ori         $t8, $s0, 0x1
    ctx->r24 = ctx->r16 | 0X1;
    // 0x80045398: lw          $t6, 0xBDC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XBDC);
    // 0x8004539C: nop

    // 0x800453A0: and         $t9, $t6, $v0
    ctx->r25 = ctx->r14 & ctx->r2;
    // 0x800453A4: andi        $t7, $t9, 0xF0
    ctx->r15 = ctx->r25 & 0XF0;
    // 0x800453A8: beq         $t7, $zero, L_800453B4
    if (ctx->r15 == 0) {
        // 0x800453AC: ori         $t8, $s0, 0x1
        ctx->r24 = ctx->r16 | 0X1;
            goto L_800453B4;
    }
    // 0x800453AC: ori         $t8, $s0, 0x1
    ctx->r24 = ctx->r16 | 0X1;
L_800453B0:
    // 0x800453B0: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
L_800453B4:
    // 0x800453B4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800453B8: lw          $t6, 0xBCC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XBCC);
    // 0x800453BC: sll         $t9, $s1, 1
    ctx->r25 = S32(ctx->r17 << 1);
    // 0x800453C0: bne         $v1, $t6, L_800453F8
    if (ctx->r3 != ctx->r14) {
        // 0x800453C4: addu        $t7, $s2, $t9
        ctx->r15 = ADD32(ctx->r18, ctx->r25);
            goto L_800453F8;
    }
    // 0x800453C4: addu        $t7, $s2, $t9
    ctx->r15 = ADD32(ctx->r18, ctx->r25);
    // 0x800453C8: lhu         $v0, 0x0($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X0);
    // 0x800453CC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800453D0: andi        $t8, $v0, 0xF00
    ctx->r24 = ctx->r2 & 0XF00;
    // 0x800453D4: beq         $s3, $t8, L_800453F4
    if (ctx->r19 == ctx->r24) {
        // 0x800453D8: ori         $t8, $s0, 0x1
        ctx->r24 = ctx->r16 | 0X1;
            goto L_800453F4;
    }
    // 0x800453D8: ori         $t8, $s0, 0x1
    ctx->r24 = ctx->r16 | 0X1;
    // 0x800453DC: lw          $t6, 0xBE0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XBE0);
    // 0x800453E0: nop

    // 0x800453E4: and         $t9, $t6, $v0
    ctx->r25 = ctx->r14 & ctx->r2;
    // 0x800453E8: andi        $t7, $t9, 0xF0
    ctx->r15 = ctx->r25 & 0XF0;
    // 0x800453EC: beq         $t7, $zero, L_800453F8
    if (ctx->r15 == 0) {
        // 0x800453F0: ori         $t8, $s0, 0x1
        ctx->r24 = ctx->r16 | 0X1;
            goto L_800453F8;
    }
    // 0x800453F0: ori         $t8, $s0, 0x1
    ctx->r24 = ctx->r16 | 0X1;
L_800453F4:
    // 0x800453F4: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
L_800453F8:
    // 0x800453F8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800453FC: lw          $t6, 0xBD0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XBD0);
    // 0x80045400: sll         $t9, $s1, 1
    ctx->r25 = S32(ctx->r17 << 1);
    // 0x80045404: bne         $v1, $t6, L_8004543C
    if (ctx->r3 != ctx->r14) {
        // 0x80045408: addu        $t7, $s2, $t9
        ctx->r15 = ADD32(ctx->r18, ctx->r25);
            goto L_8004543C;
    }
    // 0x80045408: addu        $t7, $s2, $t9
    ctx->r15 = ADD32(ctx->r18, ctx->r25);
    // 0x8004540C: lhu         $v0, 0x0($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X0);
    // 0x80045410: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80045414: andi        $t8, $v0, 0xF00
    ctx->r24 = ctx->r2 & 0XF00;
    // 0x80045418: beq         $s3, $t8, L_80045438
    if (ctx->r19 == ctx->r24) {
        // 0x8004541C: ori         $t8, $s0, 0x1
        ctx->r24 = ctx->r16 | 0X1;
            goto L_80045438;
    }
    // 0x8004541C: ori         $t8, $s0, 0x1
    ctx->r24 = ctx->r16 | 0X1;
    // 0x80045420: lw          $t6, 0xBE4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XBE4);
    // 0x80045424: nop

    // 0x80045428: and         $t9, $t6, $v0
    ctx->r25 = ctx->r14 & ctx->r2;
    // 0x8004542C: andi        $t7, $t9, 0xF0
    ctx->r15 = ctx->r25 & 0XF0;
    // 0x80045430: beq         $t7, $zero, L_8004543C
    if (ctx->r15 == 0) {
        // 0x80045434: ori         $t8, $s0, 0x1
        ctx->r24 = ctx->r16 | 0X1;
            goto L_8004543C;
    }
    // 0x80045434: ori         $t8, $s0, 0x1
    ctx->r24 = ctx->r16 | 0X1;
L_80045438:
    // 0x80045438: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
L_8004543C:
    // 0x8004543C: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x80045440: addu        $t9, $s2, $t6
    ctx->r25 = ADD32(ctx->r18, ctx->r14);
    // 0x80045444: lhu         $t7, 0x0($t9)
    ctx->r15 = MEM_HU(ctx->r25, 0X0);
    // 0x80045448: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8004544C: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x80045450: bne         $s4, $s6, L_8004529C
    if (ctx->r20 != ctx->r22) {
        // 0x80045454: or          $s0, $s0, $t8
        ctx->r16 = ctx->r16 | ctx->r24;
            goto L_8004529C;
    }
    // 0x80045454: or          $s0, $s0, $t8
    ctx->r16 = ctx->r16 | ctx->r24;
    // 0x80045458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004545C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x80045460: jr          $ra
    // 0x80045464: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    return;
    // 0x80045464: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
;}
RECOMP_FUNC void func_80045468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045468: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004546C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80045470: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80045474: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_80045478:
    // 0x80045478: jal         0x8002D000
    // 0x8004547C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x8004547C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80045480: bne         $v0, $s1, L_80045490
    if (ctx->r2 != ctx->r17) {
        // 0x80045484: nop
    
            goto L_80045490;
    }
    // 0x80045484: nop

    // 0x80045488: b           L_800454A0
    // 0x8004548C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_800454A0;
    // 0x8004548C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80045490:
    // 0x80045490: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80045494: bne         $s0, $s2, L_80045478
    if (ctx->r16 != ctx->r18) {
        // 0x80045498: nop
    
            goto L_80045478;
    }
    // 0x80045498: nop

    // 0x8004549C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800454A0:
    // 0x800454A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800454A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800454A8: jr          $ra
    // 0x800454AC: nop

    return;
    // 0x800454AC: nop

;}
RECOMP_FUNC void func_800454B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800454B0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800454B4: lw          $v0, -0x42C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X42C0);
    // 0x800454B8: lui         $at, 0x4B80
    ctx->r1 = S32(0X4B80 << 16);
    // 0x800454BC: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x800454C0: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x800454C4: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x800454C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800454CC: beq         $t6, $zero, L_800454DC
    if (ctx->r14 == 0) {
        // 0x800454D0: addiu       $s3, $zero, -0x1
        ctx->r19 = ADD32(0, -0X1);
            goto L_800454DC;
    }
    // 0x800454D0: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x800454D4: b           L_800458FC
    // 0x800454D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800458FC;
    // 0x800454D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800454DC:
    // 0x800454DC: sll         $t7, $v0, 11
    ctx->r15 = S32(ctx->r2 << 11);
    // 0x800454E0: bgez        $t7, L_800454F0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800454E4: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_800454F0;
    }
    // 0x800454E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800454E8: b           L_800458FC
    // 0x800454EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800458FC;
    // 0x800454EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800454F0:
    // 0x800454F0: addiu       $s5, $sp, 0x68
    ctx->r21 = ADD32(ctx->r29, 0X68);
    // 0x800454F4: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x800454F8: jal         0x8004A0A0
    // 0x800454FC: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x800454FC: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_0:
    // 0x80045500: lw          $s4, 0x90($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X90);
    // 0x80045504: beq         $v0, $zero, L_80045514
    if (ctx->r2 == 0) {
        // 0x80045508: sltiu       $at, $s0, 0x6
        ctx->r1 = ctx->r16 < 0X6 ? 1 : 0;
            goto L_80045514;
    }
    // 0x80045508: sltiu       $at, $s0, 0x6
    ctx->r1 = ctx->r16 < 0X6 ? 1 : 0;
    // 0x8004550C: b           L_800458FC
    // 0x80045510: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800458FC;
    // 0x80045510: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80045514:
    // 0x80045514: beq         $at, $zero, L_800456B0
    if (ctx->r1 == 0) {
        // 0x80045518: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_800456B0;
    }
    // 0x80045518: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8004551C: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x80045520: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80045524: addu        $at, $at, $t8
    gpr jr_addend_80045530 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80045528: lw          $t8, 0x5C68($at)
    ctx->r24 = ADD32(ctx->r1, 0X5C68);
    // 0x8004552C: nop

    // 0x80045530: jr          $t8
    // 0x80045534: nop

    switch (jr_addend_80045530 >> 2) {
        case 0: goto L_80045548; break;
        case 1: goto L_80045558; break;
        case 2: goto L_80045538; break;
        case 3: goto L_80045568; break;
        case 4: goto L_80045578; break;
        case 5: goto L_800455BC; break;
        default: switch_error(__func__, 0x80045530, 0x80095C68);
    }
    // 0x80045534: nop

L_80045538:
    // 0x80045538: jal         0x8005AB1C
    // 0x8004553C: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    func_8005AB1C(rdram, ctx);
        goto after_1;
    // 0x8004553C: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    after_1:
    // 0x80045540: b           L_800456B0
    // 0x80045544: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
        goto L_800456B0;
    // 0x80045544: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
L_80045548:
    // 0x80045548: jal         0x8005AF70
    // 0x8004554C: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    func_8005AF70(rdram, ctx);
        goto after_2;
    // 0x8004554C: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    after_2:
    // 0x80045550: b           L_800456B0
    // 0x80045554: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
        goto L_800456B0;
    // 0x80045554: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
L_80045558:
    // 0x80045558: jal         0x8005A3A8
    // 0x8004555C: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    func_8005A3A8(rdram, ctx);
        goto after_3;
    // 0x8004555C: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    after_3:
    // 0x80045560: b           L_800456B0
    // 0x80045564: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
        goto L_800456B0;
    // 0x80045564: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
L_80045568:
    // 0x80045568: jal         0x8005AFA4
    // 0x8004556C: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    func_8005AFA4(rdram, ctx);
        goto after_4;
    // 0x8004556C: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    after_4:
    // 0x80045570: b           L_800456B0
    // 0x80045574: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
        goto L_800456B0;
    // 0x80045574: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
L_80045578:
    // 0x80045578: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x8004557C: addiu       $s6, $s6, -0x4298
    ctx->r22 = ADD32(ctx->r22, -0X4298);
    // 0x80045580: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80045584: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
L_80045588:
    // 0x80045588: jal         0x80045468
    // 0x8004558C: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    func_80045468(rdram, ctx);
        goto after_5;
    // 0x8004558C: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    after_5:
    // 0x80045590: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80045594: addu        $t6, $s6, $t9
    ctx->r14 = ADD32(ctx->r22, ctx->r25);
    // 0x80045598: lw          $t7, 0x94($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X94);
    // 0x8004559C: nop

    // 0x800455A0: bne         $s7, $t7, L_8004561C
    if (ctx->r23 != ctx->r15) {
        // 0x800455A4: nop
    
            goto L_8004561C;
    }
    // 0x800455A4: nop

    // 0x800455A8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x800455AC: bne         $s7, $s3, L_80045588
    if (ctx->r23 != ctx->r19) {
        // 0x800455B0: nop
    
            goto L_80045588;
    }
    // 0x800455B0: nop

    // 0x800455B4: b           L_8004561C
    // 0x800455B8: nop

        goto L_8004561C;
    // 0x800455B8: nop

L_800455BC:
    // 0x800455BC: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x800455C0: addiu       $s6, $s6, -0x4298
    ctx->r22 = ADD32(ctx->r22, -0X4298);
    // 0x800455C4: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x800455C8: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
L_800455CC:
    // 0x800455CC: jal         0x80045468
    // 0x800455D0: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    func_80045468(rdram, ctx);
        goto after_6;
    // 0x800455D0: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    after_6:
    // 0x800455D4: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x800455D8: addu        $t9, $s6, $t8
    ctx->r25 = ADD32(ctx->r22, ctx->r24);
    // 0x800455DC: lw          $t6, 0x94($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X94);
    // 0x800455E0: nop

    // 0x800455E4: beq         $s7, $t6, L_800455FC
    if (ctx->r23 == ctx->r14) {
        // 0x800455E8: sll         $t7, $s7, 2
        ctx->r15 = S32(ctx->r23 << 2);
            goto L_800455FC;
    }
    // 0x800455E8: sll         $t7, $s7, 2
    ctx->r15 = S32(ctx->r23 << 2);
    // 0x800455EC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x800455F0: bne         $s7, $s3, L_800455CC
    if (ctx->r23 != ctx->r19) {
        // 0x800455F4: nop
    
            goto L_800455CC;
    }
    // 0x800455F4: nop

    // 0x800455F8: sll         $t7, $s7, 2
    ctx->r15 = S32(ctx->r23 << 2);
L_800455FC:
    // 0x800455FC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80045600: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80045604: lw          $t8, -0x4090($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4090);
    // 0x80045608: nop

    // 0x8004560C: bne         $t8, $zero, L_8004561C
    if (ctx->r24 != 0) {
        // 0x80045610: nop
    
            goto L_8004561C;
    }
    // 0x80045610: nop

    // 0x80045614: b           L_800458FC
    // 0x80045618: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800458FC;
    // 0x80045618: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004561C:
    // 0x8004561C: jal         0x8002D000
    // 0x80045620: addiu       $a0, $s7, 0x4
    ctx->r4 = ADD32(ctx->r23, 0X4);
    func_8002D000(rdram, ctx);
        goto after_7;
    // 0x80045620: addiu       $a0, $s7, 0x4
    ctx->r4 = ADD32(ctx->r23, 0X4);
    after_7:
    // 0x80045624: addiu       $s1, $sp, 0x50
    ctx->r17 = ADD32(ctx->r29, 0X50);
    // 0x80045628: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8004562C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80045630: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80045634: jal         0x8004A0A0
    // 0x80045638: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004A0A0(rdram, ctx);
        goto after_8;
    // 0x80045638: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_8:
    // 0x8004563C: beq         $v0, $zero, L_8004564C
    if (ctx->r2 == 0) {
        // 0x80045640: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8004564C;
    }
    // 0x80045640: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80045644: b           L_800458FC
    // 0x80045648: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800458FC;
    // 0x80045648: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004564C:
    // 0x8004564C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80045650: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80045654: jal         0x80028850
    // 0x80045658: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_80028850(rdram, ctx);
        goto after_9;
    // 0x80045658: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_9:
    // 0x8004565C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80045660: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80045664: lwc1        $f9, 0x5C80($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X5C80);
    // 0x80045668: lwc1        $f8, 0x5C84($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5C84);
    // 0x8004566C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80045670: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80045674: lw          $t9, 0x94($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X94);
    // 0x80045678: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8004567C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80045680: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x80045684: jal         0x800416B8
    // 0x80045688: swc1        $f4, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f4.u32l;
    func_800416B8(rdram, ctx);
        goto after_10;
    // 0x80045688: swc1        $f4, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f4.u32l;
    after_10:
    // 0x8004568C: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    // 0x80045690: beq         $s0, $zero, L_800456A8
    if (ctx->r16 == 0) {
        // 0x80045694: swc1        $f0, 0x0($t6)
        MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
            goto L_800456A8;
    }
    // 0x80045694: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x80045698: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8004569C: addiu       $a0, $a0, 0x5C10
    ctx->r4 = ADD32(ctx->r4, 0X5C10);
    // 0x800456A0: jal         0x80000FA0
    // 0x800456A4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    osSyncPrintf(rdram, ctx);
        goto after_11;
    // 0x800456A4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
L_800456A8:
    // 0x800456A8: b           L_800458FC
    // 0x800456AC: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_800458FC;
    // 0x800456AC: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_800456B0:
    // 0x800456B0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800456B4: lw          $v0, -0x3C7C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C7C);
    // 0x800456B8: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x800456BC: beq         $v0, $at, L_800456C8
    if (ctx->r2 == ctx->r1) {
        // 0x800456C0: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_800456C8;
    }
    // 0x800456C0: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x800456C4: bne         $v0, $at, L_80045734
    if (ctx->r2 != ctx->r1) {
        // 0x800456C8: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_80045734;
    }
L_800456C8:
    // 0x800456C8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800456CC: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x800456D0: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x800456D4: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x800456D8: div.s       $f8, $f6, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f28.fl);
    // 0x800456DC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800456E0: nop

    // 0x800456E4: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800456E8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800456EC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800456F0: nop

    // 0x800456F4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800456F8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800456FC: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x80045700: div.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f28.fl);
    // 0x80045704: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x80045708: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8004570C: nop

    // 0x80045710: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80045714: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80045718: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004571C: nop

    // 0x80045720: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80045724: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80045728: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8004572C: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x80045730: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
L_80045734:
    // 0x80045734: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x80045738: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8004573C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x80045740: blez        $t6, L_80045888
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80045744: or          $s7, $zero, $zero
        ctx->r23 = 0 | 0;
            goto L_80045888;
    }
    // 0x80045744: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80045748: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x8004574C: addiu       $s6, $s6, -0x4298
    ctx->r22 = ADD32(ctx->r22, -0X4298);
    // 0x80045750: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
L_80045754:
    // 0x80045754: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x80045758: nop

    // 0x8004575C: addu        $t7, $t9, $fp
    ctx->r15 = ADD32(ctx->r25, ctx->r30);
    // 0x80045760: lw          $s0, 0x0($t7)
    ctx->r16 = MEM_W(ctx->r15, 0X0);
    // 0x80045764: bne         $s1, $zero, L_8004577C
    if (ctx->r17 != 0) {
        // 0x80045768: nop
    
            goto L_8004577C;
    }
    // 0x80045768: nop

    // 0x8004576C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80045770: jal         0x8005AD98
    // 0x80045774: nop

    func_8005AD98(rdram, ctx);
        goto after_12;
    // 0x80045774: nop

    after_12:
    // 0x80045778: bne         $v0, $zero, L_80045878
    if (ctx->r2 != 0) {
        // 0x8004577C: lui         $v0, 0x800B
        ctx->r2 = S32(0X800B << 16);
            goto L_80045878;
    }
L_8004577C:
    // 0x8004577C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80045780: lw          $v0, -0x3C7C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C7C);
    // 0x80045784: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80045788: beq         $v0, $at, L_80045798
    if (ctx->r2 == ctx->r1) {
        // 0x8004578C: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_80045798;
    }
    // 0x8004578C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80045790: bne         $v0, $at, L_8004580C
    if (ctx->r2 != ctx->r1) {
        // 0x80045794: nop
    
            goto L_8004580C;
    }
    // 0x80045794: nop

L_80045798:
    // 0x80045798: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8004579C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800457A0: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800457A4: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800457A8: div.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f28.fl);
    // 0x800457AC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800457B0: nop

    // 0x800457B4: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800457B8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800457BC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800457C0: nop

    // 0x800457C4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800457C8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800457CC: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x800457D0: div.s       $f10, $f8, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f28.fl);
    // 0x800457D4: sll         $t9, $t6, 6
    ctx->r25 = S32(ctx->r14 << 6);
    // 0x800457D8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800457DC: nop

    // 0x800457E0: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800457E4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800457E8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800457EC: nop

    // 0x800457F0: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800457F4: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x800457F8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800457FC: jal         0x8004189C
    // 0x80045800: addu        $a1, $t9, $t8
    ctx->r5 = ADD32(ctx->r25, ctx->r24);
    func_8004189C(rdram, ctx);
        goto after_13;
    // 0x80045800: addu        $a1, $t9, $t8
    ctx->r5 = ADD32(ctx->r25, ctx->r24);
    after_13:
    // 0x80045804: bne         $v0, $zero, L_8004587C
    if (ctx->r2 != 0) {
        // 0x80045808: lw          $t7, 0x88($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X88);
            goto L_8004587C;
    }
    // 0x80045808: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
L_8004580C:
    // 0x8004580C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80045810: jal         0x800416B8
    // 0x80045814: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_800416B8(rdram, ctx);
        goto after_14;
    // 0x80045814: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_14:
    // 0x80045818: c.lt.s      $f0, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f0.fl < ctx->f30.fl;
    // 0x8004581C: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x80045820: bc1f        L_80045878
    if (!c1cs) {
        // 0x80045824: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80045878;
    }
    // 0x80045824: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80045828: beq         $s1, $at, L_80045870
    if (ctx->r17 == ctx->r1) {
        // 0x8004582C: nop
    
            goto L_80045870;
    }
    // 0x8004582C: nop

    // 0x80045830: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x80045834: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80045838: beq         $t6, $at, L_80045870
    if (ctx->r14 == ctx->r1) {
        // 0x8004583C: nop
    
            goto L_80045870;
    }
    // 0x8004583C: nop

    // 0x80045840: lw          $s4, 0x0($s0)
    ctx->r20 = MEM_W(ctx->r16, 0X0);
    // 0x80045844: lw          $s2, 0x90($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X90);
    // 0x80045848: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x8004584C: jal         0x800451EC
    // 0x80045850: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    func_800451EC(rdram, ctx);
        goto after_15;
    // 0x80045850: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_15:
    // 0x80045854: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80045858: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8004585C: lw          $s4, 0x90($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X90);
    // 0x80045860: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x80045864: addiu       $s6, $s6, -0x4298
    ctx->r22 = ADD32(ctx->r22, -0X4298);
    // 0x80045868: bne         $v0, $zero, L_80045878
    if (ctx->r2 != 0) {
        // 0x8004586C: addiu       $s5, $sp, 0x68
        ctx->r21 = ADD32(ctx->r29, 0X68);
            goto L_80045878;
    }
    // 0x8004586C: addiu       $s5, $sp, 0x68
    ctx->r21 = ADD32(ctx->r29, 0X68);
L_80045870:
    // 0x80045870: mov.s       $f30, $f26
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 26);
    ctx->f30.fl = ctx->f26.fl;
    // 0x80045874: or          $s3, $s7, $zero
    ctx->r19 = ctx->r23 | 0;
L_80045878:
    // 0x80045878: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
L_8004587C:
    // 0x8004587C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80045880: bne         $s7, $t7, L_80045754
    if (ctx->r23 != ctx->r15) {
        // 0x80045884: addiu       $fp, $fp, 0x4
        ctx->r30 = ADD32(ctx->r30, 0X4);
            goto L_80045754;
    }
    // 0x80045884: addiu       $fp, $fp, 0x4
    ctx->r30 = ADD32(ctx->r30, 0X4);
L_80045888:
    // 0x80045888: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x8004588C: bgez        $s3, L_8004589C
    if (SIGNED(ctx->r19) >= 0) {
        // 0x80045890: swc1        $f30, 0x0($t9)
        MEM_W(0X0, ctx->r25) = ctx->f30.u32l;
            goto L_8004589C;
    }
    // 0x80045890: swc1        $f30, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f30.u32l;
    // 0x80045894: b           L_800458FC
    // 0x80045898: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800458FC;
    // 0x80045898: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004589C:
    // 0x8004589C: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x800458A0: sll         $s0, $s3, 2
    ctx->r16 = S32(ctx->r19 << 2);
    // 0x800458A4: addu        $t6, $t8, $s0
    ctx->r14 = ADD32(ctx->r24, ctx->r16);
    // 0x800458A8: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800458AC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800458B0: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x800458B4: jal         0x80028850
    // 0x800458B8: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_80028850(rdram, ctx);
        goto after_16;
    // 0x800458B8: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_16:
    // 0x800458BC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800458C0: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800458C4: lwc1        $f11, 0x5C88($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X5C88);
    // 0x800458C8: lwc1        $f10, 0x5C8C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5C8C);
    // 0x800458CC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800458D0: mul.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x800458D4: lw          $t9, 0x94($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X94);
    // 0x800458D8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800458DC: swc1        $f6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f6.u32l;
    // 0x800458E0: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x800458E4: nop

    // 0x800458E8: addu        $t6, $t8, $s0
    ctx->r14 = ADD32(ctx->r24, ctx->r16);
    // 0x800458EC: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800458F0: nop

    // 0x800458F4: lw          $v0, 0x4($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X4);
    // 0x800458F8: nop

L_800458FC:
    // 0x800458FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80045900: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x80045904: jr          $ra
    // 0x80045908: nop

    return;
    // 0x80045908: nop

;}
RECOMP_FUNC void func_8004590C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004590C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80045910: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x80045914: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80045918: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x8004591C: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x80045920: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80045924: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80045928: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8004592C: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80045930: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80045934: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80045938: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x8004593C: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x80045940: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80045944: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x80045948: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8004594C: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80045950: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80045954: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80045958: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8004595C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80045960: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80045964: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80045968: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x8004596C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80045970: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80045974: jal         0x800454B0
    // 0x80045978: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    func_800454B0(rdram, ctx);
        goto after_0;
    // 0x80045978: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    after_0:
    // 0x8004597C: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x80045980: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80045984: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80045988: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8004598C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80045990: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80045994: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80045998: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8004599C: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800459A0: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x800459A4: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800459A8: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x800459AC: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800459B0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x800459B4: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x800459B8: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x800459BC: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x800459C0: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x800459C4: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x800459C8: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x800459CC: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x800459D0: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x800459D4: jr          $ra
    // 0x800459D8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x800459D8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_800459DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800459DC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x800459E0: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x800459E4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x800459E8: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x800459EC: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x800459F0: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x800459F4: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x800459F8: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x800459FC: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80045A00: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80045A04: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80045A08: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80045A0C: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x80045A10: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80045A14: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x80045A18: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80045A1C: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80045A20: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80045A24: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80045A28: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80045A2C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80045A30: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80045A34: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80045A38: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80045A3C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80045A40: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80045A44: jal         0x800454B0
    // 0x80045A48: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    func_800454B0(rdram, ctx);
        goto after_0;
    // 0x80045A48: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    after_0:
    // 0x80045A4C: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x80045A50: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80045A54: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80045A58: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80045A5C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80045A60: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80045A64: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80045A68: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80045A6C: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80045A70: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80045A74: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80045A78: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80045A7C: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80045A80: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80045A84: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80045A88: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80045A8C: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80045A90: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80045A94: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80045A98: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80045A9C: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x80045AA0: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x80045AA4: jr          $ra
    // 0x80045AA8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x80045AA8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80045AAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045AAC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80045AB0: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x80045AB4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80045AB8: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x80045ABC: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x80045AC0: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80045AC4: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80045AC8: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80045ACC: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80045AD0: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80045AD4: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80045AD8: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80045ADC: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x80045AE0: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80045AE4: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x80045AE8: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80045AEC: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80045AF0: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80045AF4: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80045AF8: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80045AFC: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80045B00: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80045B04: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80045B08: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80045B0C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80045B10: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80045B14: jal         0x800454B0
    // 0x80045B18: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    func_800454B0(rdram, ctx);
        goto after_0;
    // 0x80045B18: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    after_0:
    // 0x80045B1C: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x80045B20: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80045B24: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80045B28: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80045B2C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80045B30: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80045B34: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80045B38: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80045B3C: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80045B40: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80045B44: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80045B48: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80045B4C: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80045B50: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80045B54: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80045B58: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80045B5C: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80045B60: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80045B64: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80045B68: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80045B6C: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x80045B70: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x80045B74: jr          $ra
    // 0x80045B78: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x80045B78: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80045B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045B7C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80045B80: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x80045B84: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80045B88: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x80045B8C: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x80045B90: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80045B94: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80045B98: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80045B9C: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80045BA0: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80045BA4: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80045BA8: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80045BAC: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x80045BB0: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80045BB4: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x80045BB8: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80045BBC: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80045BC0: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80045BC4: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80045BC8: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80045BCC: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80045BD0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80045BD4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80045BD8: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x80045BDC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80045BE0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80045BE4: jal         0x800454B0
    // 0x80045BE8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    func_800454B0(rdram, ctx);
        goto after_0;
    // 0x80045BE8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    after_0:
    // 0x80045BEC: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x80045BF0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80045BF4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80045BF8: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80045BFC: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80045C00: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80045C04: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80045C08: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80045C0C: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80045C10: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80045C14: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80045C18: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80045C1C: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80045C20: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80045C24: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80045C28: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80045C2C: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80045C30: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80045C34: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80045C38: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80045C3C: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x80045C40: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x80045C44: jr          $ra
    // 0x80045C48: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x80045C48: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80045C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045C4C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80045C50: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x80045C54: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80045C58: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x80045C5C: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x80045C60: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80045C64: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80045C68: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80045C6C: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80045C70: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80045C74: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80045C78: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80045C7C: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x80045C80: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80045C84: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x80045C88: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80045C8C: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80045C90: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80045C94: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80045C98: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80045C9C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80045CA0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80045CA4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80045CA8: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x80045CAC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80045CB0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80045CB4: jal         0x800454B0
    // 0x80045CB8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    func_800454B0(rdram, ctx);
        goto after_0;
    // 0x80045CB8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    after_0:
    // 0x80045CBC: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x80045CC0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80045CC4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80045CC8: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80045CCC: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80045CD0: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80045CD4: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80045CD8: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80045CDC: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80045CE0: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80045CE4: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80045CE8: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80045CEC: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80045CF0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80045CF4: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80045CF8: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80045CFC: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80045D00: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80045D04: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80045D08: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80045D0C: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x80045D10: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x80045D14: jr          $ra
    // 0x80045D18: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x80045D18: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80045D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045D1C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80045D20: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x80045D24: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80045D28: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x80045D2C: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x80045D30: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80045D34: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80045D38: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80045D3C: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80045D40: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80045D44: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80045D48: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80045D4C: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x80045D50: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80045D54: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x80045D58: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80045D5C: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80045D60: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80045D64: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80045D68: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80045D6C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80045D70: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80045D74: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80045D78: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
    // 0x80045D7C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80045D80: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80045D84: jal         0x800454B0
    // 0x80045D88: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    func_800454B0(rdram, ctx);
        goto after_0;
    // 0x80045D88: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    after_0:
    // 0x80045D8C: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x80045D90: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80045D94: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80045D98: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80045D9C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80045DA0: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80045DA4: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80045DA8: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80045DAC: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80045DB0: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80045DB4: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80045DB8: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80045DBC: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80045DC0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80045DC4: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80045DC8: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80045DCC: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80045DD0: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80045DD4: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80045DD8: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80045DDC: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x80045DE0: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x80045DE4: jr          $ra
    // 0x80045DE8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x80045DE8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80045DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045DEC: jr          $ra
    // 0x80045DF0: nop

    return;
    // 0x80045DF0: nop

;}
RECOMP_FUNC void func_80045E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045E24: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80045E28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80045E2C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x80045E30: jal         0x8002D000
    // 0x80045E34: nop

    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x80045E34: nop

    after_0:
    // 0x80045E38: addiu       $s1, $sp, 0x48
    ctx->r17 = ADD32(ctx->r29, 0X48);
    // 0x80045E3C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80045E40: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80045E44: jal         0x8004A0A0
    // 0x80045E48: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x80045E48: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x80045E4C: bne         $v0, $zero, L_80045E98
    if (ctx->r2 != 0) {
        // 0x80045E50: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_80045E98;
    }
    // 0x80045E50: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80045E54: addiu       $s2, $sp, 0x30
    ctx->r18 = ADD32(ctx->r29, 0X30);
    // 0x80045E58: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x80045E5C: jal         0x8004A0A0
    // 0x80045E60: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x80045E60: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_2:
    // 0x80045E64: bne         $v0, $zero, L_80045E98
    if (ctx->r2 != 0) {
        // 0x80045E68: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80045E98;
    }
    // 0x80045E68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80045E6C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80045E70: jal         0x80028850
    // 0x80045E74: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    func_80028850(rdram, ctx);
        goto after_3;
    // 0x80045E74: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_3:
    // 0x80045E78: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80045E7C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80045E80: lwc1        $f9, 0x5C90($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X5C90);
    // 0x80045E84: lwc1        $f8, 0x5C94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5C94);
    // 0x80045E88: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80045E8C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80045E90: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x80045E94: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
L_80045E98:
    // 0x80045E98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80045E9C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80045EA0: jr          $ra
    // 0x80045EA4: nop

    return;
    // 0x80045EA4: nop

    // 0x80045EA8: jr          $ra
    // 0x80045EAC: nop

    return;
    // 0x80045EAC: nop

    // 0x80045EB0: jr          $ra
    // 0x80045EB4: nop

    return;
    // 0x80045EB4: nop

    // 0x80045EB8: jr          $ra
    // 0x80045EBC: nop

    return;
    // 0x80045EBC: nop

    // 0x80045EC0: jr          $ra
    // 0x80045EC4: nop

    return;
    // 0x80045EC4: nop

;}
RECOMP_FUNC void func_80045EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045EC8: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x80045ECC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80045ED0: lw          $v0, -0x3C7C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C7C);
    // 0x80045ED4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80045ED8: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80045EDC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80045EE0: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80045EE4: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x80045EE8: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80045EEC: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80045EF0: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80045EF4: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80045EF8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80045EFC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80045F00: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80045F04: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80045F08: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80045F0C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80045F10: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80045F14: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80045F18: beq         $v0, $at, L_80045F2C
    if (ctx->r2 == ctx->r1) {
        // 0x80045F1C: swc1        $f20, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
            goto L_80045F2C;
    }
    // 0x80045F1C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80045F20: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80045F24: bne         $v0, $at, L_80045F34
    if (ctx->r2 != ctx->r1) {
        // 0x80045F28: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80045F34;
    }
    // 0x80045F28: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80045F2C:
    // 0x80045F2C: b           L_80046070
    // 0x80045F30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80046070;
    // 0x80045F30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80045F34:
    // 0x80045F34: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x80045F38: addiu       $fp, $fp, -0x4298
    ctx->r30 = ADD32(ctx->r30, -0X4298);
    // 0x80045F3C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_80045F40:
    // 0x80045F40: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x80045F44: sll         $t6, $s7, 2
    ctx->r14 = S32(ctx->r23 << 2);
    // 0x80045F48: beq         $s7, $a0, L_80046028
    if (ctx->r23 == ctx->r4) {
        // 0x80045F4C: addu        $v0, $fp, $t6
        ctx->r2 = ADD32(ctx->r30, ctx->r14);
            goto L_80046028;
    }
    // 0x80045F4C: addu        $v0, $fp, $t6
    ctx->r2 = ADD32(ctx->r30, ctx->r14);
    // 0x80045F50: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80045F54: nop

    // 0x80045F58: beq         $t7, $zero, L_80046028
    if (ctx->r15 == 0) {
        // 0x80045F5C: nop
    
            goto L_80046028;
    }
    // 0x80045F5C: nop

    // 0x80045F60: lw          $t8, 0xC8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC8);
    // 0x80045F64: nop

    // 0x80045F68: bne         $t8, $zero, L_80046028
    if (ctx->r24 != 0) {
        // 0x80045F6C: nop
    
            goto L_80046028;
    }
    // 0x80045F6C: nop

    // 0x80045F70: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x80045F74: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80045F78: bne         $t9, $at, L_80045F98
    if (ctx->r25 != ctx->r1) {
        // 0x80045F7C: sll         $t6, $a0, 2
        ctx->r14 = S32(ctx->r4 << 2);
            goto L_80045F98;
    }
    // 0x80045F7C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80045F80: addu        $t7, $fp, $t6
    ctx->r15 = ADD32(ctx->r30, ctx->r14);
    // 0x80045F84: lw          $t8, 0x94($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X94);
    // 0x80045F88: lw          $t9, 0x94($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X94);
    // 0x80045F8C: nop

    // 0x80045F90: beq         $t8, $t9, L_80046028
    if (ctx->r24 == ctx->r25) {
        // 0x80045F94: nop
    
            goto L_80046028;
    }
    // 0x80045F94: nop

L_80045F98:
    // 0x80045F98: jal         0x8002D000
    // 0x80045F9C: nop

    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x80045F9C: nop

    after_0:
    // 0x80045FA0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80045FA4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80045FA8: jal         0x8004A0A0
    // 0x80045FAC: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x80045FAC: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    after_1:
    // 0x80045FB0: beq         $v0, $zero, L_80045FC0
    if (ctx->r2 == 0) {
        // 0x80045FB4: nop
    
            goto L_80045FC0;
    }
    // 0x80045FB4: nop

    // 0x80045FB8: b           L_80046070
    // 0x80045FBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80046070;
    // 0x80045FBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80045FC0:
    // 0x80045FC0: jal         0x8002D000
    // 0x80045FC4: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8002D000(rdram, ctx);
        goto after_2;
    // 0x80045FC4: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_2:
    // 0x80045FC8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80045FCC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80045FD0: jal         0x8004A0A0
    // 0x80045FD4: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    func_8004A0A0(rdram, ctx);
        goto after_3;
    // 0x80045FD4: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    after_3:
    // 0x80045FD8: beq         $v0, $zero, L_80045FE8
    if (ctx->r2 == 0) {
        // 0x80045FDC: nop
    
            goto L_80045FE8;
    }
    // 0x80045FDC: nop

    // 0x80045FE0: b           L_80046070
    // 0x80045FE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80046070;
    // 0x80045FE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80045FE8:
    // 0x80045FE8: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x80045FEC: jal         0x8002D000
    // 0x80045FF0: nop

    func_8002D000(rdram, ctx);
        goto after_4;
    // 0x80045FF0: nop

    after_4:
    // 0x80045FF4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80045FF8: addiu       $s5, $sp, 0x98
    ctx->r21 = ADD32(ctx->r29, 0X98);
    // 0x80045FFC: addiu       $s4, $sp, 0x80
    ctx->r20 = ADD32(ctx->r29, 0X80);
    // 0x80046000: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x80046004: jal         0x800451EC
    // 0x80046008: sw          $s1, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r17;
    func_800451EC(rdram, ctx);
        goto after_5;
    // 0x80046008: sw          $s1, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r17;
    after_5:
    // 0x8004600C: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x80046010: lw          $s1, 0xB0($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB0);
    // 0x80046014: bne         $v0, $zero, L_80046028
    if (ctx->r2 != 0) {
        // 0x80046018: sll         $t6, $s0, 2
        ctx->r14 = S32(ctx->r16 << 2);
            goto L_80046028;
    }
    // 0x80046018: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x8004601C: addu        $t7, $sp, $t6
    ctx->r15 = ADD32(ctx->r29, ctx->r14);
    // 0x80046020: sw          $s7, 0x68($t7)
    MEM_W(0X68, ctx->r15) = ctx->r23;
    // 0x80046024: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80046028:
    // 0x80046028: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8004602C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80046030: bne         $s7, $at, L_80045F40
    if (ctx->r23 != ctx->r1) {
        // 0x80046034: nop
    
            goto L_80045F40;
    }
    // 0x80046034: nop

    // 0x80046038: beq         $s0, $zero, L_80046070
    if (ctx->r16 == 0) {
        // 0x8004603C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80046070;
    }
    // 0x8004603C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80046040: jal         0x80028AB8
    // 0x80046044: addiu       $a0, $s0, -0x1
    ctx->r4 = ADD32(ctx->r16, -0X1);
    func_80028AB8(rdram, ctx);
        goto after_6;
    // 0x80046044: addiu       $a0, $s0, -0x1
    ctx->r4 = ADD32(ctx->r16, -0X1);
    after_6:
    // 0x80046048: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x8004604C: addu        $a0, $sp, $t8
    ctx->r4 = ADD32(ctx->r29, ctx->r24);
    // 0x80046050: lw          $a0, 0x68($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X68);
    // 0x80046054: jal         0x8002D000
    // 0x80046058: nop

    func_8002D000(rdram, ctx);
        goto after_7;
    // 0x80046058: nop

    after_7:
    // 0x8004605C: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x80046060: jal         0x80045E24
    // 0x80046064: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    func_80045E24(rdram, ctx);
        goto after_8;
    // 0x80046064: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    after_8:
    // 0x80046068: b           L_80046070
    // 0x8004606C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80046070;
    // 0x8004606C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80046070:
    // 0x80046070: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80046074: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80046078: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8004607C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80046080: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80046084: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80046088: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8004608C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80046090: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80046094: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80046098: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8004609C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x800460A0: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x800460A4: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x800460A8: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x800460AC: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x800460B0: jr          $ra
    // 0x800460B4: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x800460B4: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_800460B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800460B8: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x800460BC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x800460C0: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x800460C4: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x800460C8: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x800460CC: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x800460D0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x800460D4: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x800460D8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x800460DC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x800460E0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800460E4: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x800460E8: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x800460EC: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800460F0: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x800460F4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800460F8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800460FC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80046100: addiu       $t7, $t7, 0x1850
    ctx->r15 = ADD32(ctx->r15, 0X1850);
    // 0x80046104: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80046108: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x8004610C: addiu       $t6, $sp, 0x84
    ctx->r14 = ADD32(ctx->r29, 0X84);
    // 0x80046110: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80046114: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x80046118: lw          $t9, 0xC($t7)
    ctx->r25 = MEM_W(ctx->r15, 0XC);
    // 0x8004611C: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x80046120: sw          $t9, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r25;
    // 0x80046124: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x80046128: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8004612C: addiu       $t6, $t6, 0x1860
    ctx->r14 = ADD32(ctx->r14, 0X1860);
    // 0x80046130: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80046134: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80046138: addiu       $t8, $sp, 0x74
    ctx->r24 = ADD32(ctx->r29, 0X74);
    // 0x8004613C: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x80046140: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x80046144: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x80046148: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8004614C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80046150: sw          $t9, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r25;
    // 0x80046154: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x80046158: lw          $v0, -0x3C7C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C7C);
    // 0x8004615C: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80046160: beq         $v0, $at, L_80046174
    if (ctx->r2 == ctx->r1) {
        // 0x80046164: or          $s3, $a0, $zero
        ctx->r19 = ctx->r4 | 0;
            goto L_80046174;
    }
    // 0x80046164: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80046168: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x8004616C: bne         $v0, $at, L_8004617C
    if (ctx->r2 != ctx->r1) {
        // 0x80046170: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8004617C;
    }
    // 0x80046170: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80046174:
    // 0x80046174: b           L_80046438
    // 0x80046178: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80046438;
    // 0x80046178: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004617C:
    // 0x8004617C: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x80046180: addiu       $fp, $fp, -0x4298
    ctx->r30 = ADD32(ctx->r30, -0X4298);
    // 0x80046184: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_80046188:
    // 0x80046188: lw          $a0, 0xC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XC);
    // 0x8004618C: sll         $t7, $s7, 2
    ctx->r15 = S32(ctx->r23 << 2);
    // 0x80046190: beq         $s7, $a0, L_800462DC
    if (ctx->r23 == ctx->r4) {
        // 0x80046194: addu        $v1, $fp, $t7
        ctx->r3 = ADD32(ctx->r30, ctx->r15);
            goto L_800462DC;
    }
    // 0x80046194: addu        $v1, $fp, $t7
    ctx->r3 = ADD32(ctx->r30, ctx->r15);
    // 0x80046198: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x8004619C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800461A0: beq         $v0, $at, L_800461B0
    if (ctx->r2 == ctx->r1) {
        // 0x800461A4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800461B0;
    }
    // 0x800461A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800461A8: bne         $v0, $at, L_800462DC
    if (ctx->r2 != ctx->r1) {
        // 0x800461AC: nop
    
            goto L_800462DC;
    }
    // 0x800461AC: nop

L_800461B0:
    // 0x800461B0: lw          $t8, 0xC8($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XC8);
    // 0x800461B4: nop

    // 0x800461B8: bne         $t8, $zero, L_800462DC
    if (ctx->r24 != 0) {
        // 0x800461BC: nop
    
            goto L_800462DC;
    }
    // 0x800461BC: nop

    // 0x800461C0: lw          $t6, 0x0($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X0);
    // 0x800461C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800461C8: bne         $t6, $at, L_800461E8
    if (ctx->r14 != ctx->r1) {
        // 0x800461CC: sll         $t9, $a0, 2
        ctx->r25 = S32(ctx->r4 << 2);
            goto L_800461E8;
    }
    // 0x800461CC: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x800461D0: addu        $t7, $fp, $t9
    ctx->r15 = ADD32(ctx->r30, ctx->r25);
    // 0x800461D4: lw          $t8, 0x94($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X94);
    // 0x800461D8: lw          $t6, 0x94($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X94);
    // 0x800461DC: nop

    // 0x800461E0: beq         $t8, $t6, L_800462DC
    if (ctx->r24 == ctx->r14) {
        // 0x800461E4: nop
    
            goto L_800462DC;
    }
    // 0x800461E4: nop

L_800461E8:
    // 0x800461E8: jal         0x8002D000
    // 0x800461EC: nop

    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x800461EC: nop

    after_0:
    // 0x800461F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800461F4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800461F8: jal         0x8004A0A0
    // 0x800461FC: addiu       $a2, $sp, 0xB8
    ctx->r6 = ADD32(ctx->r29, 0XB8);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x800461FC: addiu       $a2, $sp, 0xB8
    ctx->r6 = ADD32(ctx->r29, 0XB8);
    after_1:
    // 0x80046200: beq         $v0, $zero, L_80046210
    if (ctx->r2 == 0) {
        // 0x80046204: nop
    
            goto L_80046210;
    }
    // 0x80046204: nop

    // 0x80046208: b           L_80046438
    // 0x8004620C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80046438;
    // 0x8004620C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80046210:
    // 0x80046210: jal         0x8002D000
    // 0x80046214: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8002D000(rdram, ctx);
        goto after_2;
    // 0x80046214: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_2:
    // 0x80046218: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8004621C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80046220: jal         0x8004A0A0
    // 0x80046224: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    func_8004A0A0(rdram, ctx);
        goto after_3;
    // 0x80046224: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    after_3:
    // 0x80046228: beq         $v0, $zero, L_80046238
    if (ctx->r2 == 0) {
        // 0x8004622C: lui         $t9, 0x800B
        ctx->r25 = S32(0X800B << 16);
            goto L_80046238;
    }
    // 0x8004622C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80046230: b           L_80046438
    // 0x80046234: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80046438;
    // 0x80046234: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80046238:
    // 0x80046238: lw          $t9, -0x3C8C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3C8C);
    // 0x8004623C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80046240: andi        $t7, $t9, 0x400
    ctx->r15 = ctx->r25 & 0X400;
    // 0x80046244: beq         $t7, $zero, L_80046254
    if (ctx->r15 == 0) {
        // 0x80046248: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_80046254;
    }
    // 0x80046248: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8004624C: b           L_80046254
    // 0x80046250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80046254;
    // 0x80046250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80046254:
    // 0x80046254: beq         $v0, $zero, L_8004626C
    if (ctx->r2 == 0) {
        // 0x80046258: nop
    
            goto L_8004626C;
    }
    // 0x80046258: nop

    // 0x8004625C: lw          $t8, -0x3C90($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C90);
    // 0x80046260: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80046264: beq         $t8, $at, L_800462B4
    if (ctx->r24 == ctx->r1) {
        // 0x80046268: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_800462B4;
    }
    // 0x80046268: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
L_8004626C:
    // 0x8004626C: lw          $a0, 0xC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XC);
    // 0x80046270: jal         0x8004081C
    // 0x80046274: nop

    func_8004081C(rdram, ctx);
        goto after_4;
    // 0x80046274: nop

    after_4:
    // 0x80046278: bne         $v0, $zero, L_800462B4
    if (ctx->r2 != 0) {
        // 0x8004627C: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_800462B4;
    }
    // 0x8004627C: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x80046280: lw          $a0, 0xC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XC);
    // 0x80046284: jal         0x8002D000
    // 0x80046288: nop

    func_8002D000(rdram, ctx);
        goto after_5;
    // 0x80046288: nop

    after_5:
    // 0x8004628C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80046290: addiu       $s5, $sp, 0xB8
    ctx->r21 = ADD32(ctx->r29, 0XB8);
    // 0x80046294: addiu       $s4, $sp, 0xA0
    ctx->r20 = ADD32(ctx->r29, 0XA0);
    // 0x80046298: sw          $s1, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r17;
    // 0x8004629C: jal         0x800451EC
    // 0x800462A0: sw          $s3, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r19;
    func_800451EC(rdram, ctx);
        goto after_6;
    // 0x800462A0: sw          $s3, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r19;
    after_6:
    // 0x800462A4: lw          $s1, 0x98($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X98);
    // 0x800462A8: lw          $s3, 0xD0($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XD0);
    // 0x800462AC: bne         $v0, $zero, L_800462DC
    if (ctx->r2 != 0) {
        // 0x800462B0: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_800462DC;
    }
    // 0x800462B0: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
L_800462B4:
    // 0x800462B4: addiu       $t6, $sp, 0x74
    ctx->r14 = ADD32(ctx->r29, 0X74);
    // 0x800462B8: addiu       $t9, $sp, 0x84
    ctx->r25 = ADD32(ctx->r29, 0X84);
    // 0x800462BC: addu        $a3, $v0, $t9
    ctx->r7 = ADD32(ctx->r2, ctx->r25);
    // 0x800462C0: addu        $a2, $v0, $t6
    ctx->r6 = ADD32(ctx->r2, ctx->r14);
    // 0x800462C4: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    // 0x800462C8: jal         0x80044468
    // 0x800462CC: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    func_80044468(rdram, ctx);
        goto after_7;
    // 0x800462CC: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    after_7:
    // 0x800462D0: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x800462D4: sw          $s7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r23;
    // 0x800462D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800462DC:
    // 0x800462DC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x800462E0: slti        $at, $s7, 0x4
    ctx->r1 = SIGNED(ctx->r23) < 0X4 ? 1 : 0;
    // 0x800462E4: bne         $at, $zero, L_80046188
    if (ctx->r1 != 0) {
        // 0x800462E8: nop
    
            goto L_80046188;
    }
    // 0x800462E8: nop

    // 0x800462EC: beq         $s1, $zero, L_80046430
    if (ctx->r17 == 0) {
        // 0x800462F0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80046430;
    }
    // 0x800462F0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800462F4: blez        $s1, L_80046408
    if (SIGNED(ctx->r17) <= 0) {
        // 0x800462F8: or          $s7, $zero, $zero
        ctx->r23 = 0 | 0;
            goto L_80046408;
    }
    // 0x800462F8: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x800462FC: andi        $a1, $s1, 0x3
    ctx->r5 = ctx->r17 & 0X3;
    // 0x80046300: beq         $a1, $zero, L_8004634C
    if (ctx->r5 == 0) {
        // 0x80046304: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8004634C;
    }
    // 0x80046304: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80046308: sll         $t7, $zero, 2
    ctx->r15 = S32(0 << 2);
    // 0x8004630C: addiu       $t8, $sp, 0x74
    ctx->r24 = ADD32(ctx->r29, 0X74);
    // 0x80046310: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
L_80046314:
    // 0x80046314: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x80046318: addu        $t9, $sp, $t6
    ctx->r25 = ADD32(ctx->r29, ctx->r14);
    // 0x8004631C: lwc1        $f6, 0x74($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X74);
    // 0x80046320: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80046324: nop

    // 0x80046328: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8004632C: nop

    // 0x80046330: bc1f        L_8004633C
    if (!c1cs) {
        // 0x80046334: nop
    
            goto L_8004633C;
    }
    // 0x80046334: nop

    // 0x80046338: or          $v1, $s7, $zero
    ctx->r3 = ctx->r23 | 0;
L_8004633C:
    // 0x8004633C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80046340: bne         $a0, $s7, L_80046314
    if (ctx->r4 != ctx->r23) {
        // 0x80046344: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80046314;
    }
    // 0x80046344: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80046348: beq         $s7, $s1, L_80046408
    if (ctx->r23 == ctx->r17) {
        // 0x8004634C: sll         $t7, $s7, 2
        ctx->r15 = S32(ctx->r23 << 2);
            goto L_80046408;
    }
L_8004634C:
    // 0x8004634C: sll         $t7, $s7, 2
    ctx->r15 = S32(ctx->r23 << 2);
    // 0x80046350: addiu       $t8, $sp, 0x74
    ctx->r24 = ADD32(ctx->r29, 0X74);
    // 0x80046354: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
L_80046358:
    // 0x80046358: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8004635C: addiu       $t9, $sp, 0x74
    ctx->r25 = ADD32(ctx->r29, 0X74);
    // 0x80046360: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x80046364: lwc1        $f0, 0x0($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80046368: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004636C: sll         $t8, $s7, 2
    ctx->r24 = S32(ctx->r23 << 2);
    // 0x80046370: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80046374: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80046378: bc1f        L_80046388
    if (!c1cs) {
        // 0x8004637C: nop
    
            goto L_80046388;
    }
    // 0x8004637C: nop

    // 0x80046380: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80046384: or          $v1, $s7, $zero
    ctx->r3 = ctx->r23 | 0;
L_80046388:
    // 0x80046388: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8004638C: nop

    // 0x80046390: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80046394: nop

    // 0x80046398: bc1f        L_800463B4
    if (!c1cs) {
        // 0x8004639C: nop
    
            goto L_800463B4;
    }
    // 0x8004639C: nop

    // 0x800463A0: addiu       $v1, $s7, 0x1
    ctx->r3 = ADD32(ctx->r23, 0X1);
    // 0x800463A4: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x800463A8: addu        $t8, $sp, $t7
    ctx->r24 = ADD32(ctx->r29, ctx->r15);
    // 0x800463AC: lwc1        $f0, 0x74($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X74);
    // 0x800463B0: nop

L_800463B4:
    // 0x800463B4: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800463B8: nop

    // 0x800463BC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x800463C0: nop

    // 0x800463C4: bc1f        L_800463E0
    if (!c1cs) {
        // 0x800463C8: nop
    
            goto L_800463E0;
    }
    // 0x800463C8: nop

    // 0x800463CC: addiu       $v1, $s7, 0x2
    ctx->r3 = ADD32(ctx->r23, 0X2);
    // 0x800463D0: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x800463D4: addu        $t6, $sp, $t9
    ctx->r14 = ADD32(ctx->r29, ctx->r25);
    // 0x800463D8: lwc1        $f0, 0x74($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X74);
    // 0x800463DC: nop

L_800463E0:
    // 0x800463E0: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x800463E4: nop

    // 0x800463E8: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x800463EC: nop

    // 0x800463F0: bc1f        L_800463FC
    if (!c1cs) {
        // 0x800463F4: nop
    
            goto L_800463FC;
    }
    // 0x800463F4: nop

    // 0x800463F8: addiu       $v1, $s7, 0x3
    ctx->r3 = ADD32(ctx->r23, 0X3);
L_800463FC:
    // 0x800463FC: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x80046400: bne         $s7, $s1, L_80046358
    if (ctx->r23 != ctx->r17) {
        // 0x80046404: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_80046358;
    }
    // 0x80046404: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_80046408:
    // 0x80046408: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x8004640C: addu        $a0, $sp, $t7
    ctx->r4 = ADD32(ctx->r29, ctx->r15);
    // 0x80046410: lw          $a0, 0x84($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X84);
    // 0x80046414: jal         0x8002D000
    // 0x80046418: nop

    func_8002D000(rdram, ctx);
        goto after_8;
    // 0x80046418: nop

    after_8:
    // 0x8004641C: sw          $v0, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r2;
    // 0x80046420: jal         0x80045E24
    // 0x80046424: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    func_80045E24(rdram, ctx);
        goto after_9;
    // 0x80046424: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    after_9:
    // 0x80046428: b           L_80046438
    // 0x8004642C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80046438;
    // 0x8004642C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80046430:
    // 0x80046430: jal         0x80045EC8
    // 0x80046434: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80045EC8(rdram, ctx);
        goto after_10;
    // 0x80046434: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_10:
L_80046438:
    // 0x80046438: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8004643C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80046440: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80046444: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80046448: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8004644C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80046450: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80046454: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80046458: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8004645C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80046460: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80046464: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80046468: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8004646C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80046470: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80046474: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80046478: jr          $ra
    // 0x8004647C: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x8004647C: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_80046480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046480: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80046484: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80046488: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8004648C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80046490: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80046494: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x80046498: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8004649C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800464A0: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x800464A4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800464A8: lw          $v1, -0x4204($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4204);
    // 0x800464AC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800464B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800464B4:
    // 0x800464B4: bne         $v0, $v1, L_800464C8
    if (ctx->r2 != ctx->r3) {
        // 0x800464B8: nop
    
            goto L_800464C8;
    }
    // 0x800464B8: nop

    // 0x800464BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800464C0: bne         $v0, $a0, L_800464B4
    if (ctx->r2 != ctx->r4) {
        // 0x800464C4: nop
    
            goto L_800464B4;
    }
    // 0x800464C4: nop

L_800464C8:
    // 0x800464C8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x800464CC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x800464D0: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x800464D4: lw          $t8, -0x4090($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4090);
    // 0x800464D8: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x800464DC: bne         $t8, $zero, L_800464EC
    if (ctx->r24 != 0) {
        // 0x800464E0: addu        $t9, $t9, $v1
        ctx->r25 = ADD32(ctx->r25, ctx->r3);
            goto L_800464EC;
    }
    // 0x800464E0: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x800464E4: b           L_80046500
    // 0x800464E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80046500;
    // 0x800464E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800464EC:
    // 0x800464EC: lw          $t9, -0x4180($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4180);
    // 0x800464F0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x800464F4: jal         0x80045E24
    // 0x800464F8: sw          $t9, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r25;
    func_80045E24(rdram, ctx);
        goto after_0;
    // 0x800464F8: sw          $t9, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r25;
    after_0:
    // 0x800464FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80046500:
    // 0x80046500: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80046504: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80046508: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8004650C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80046510: jr          $ra
    // 0x80046514: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80046514: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80046518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046518: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8004651C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80046520: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80046524: addiu       $s1, $s1, -0x3C8C
    ctx->r17 = ADD32(ctx->r17, -0X3C8C);
    // 0x80046528: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x8004652C: jal         0x8005BCB4
    // 0x80046530: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8005BCB4(rdram, ctx);
        goto after_0;
    // 0x80046530: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x80046534: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80046538: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004653C: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x80046540: beq         $t7, $zero, L_80046550
    if (ctx->r15 == 0) {
        // 0x80046544: nop
    
            goto L_80046550;
    }
    // 0x80046544: nop

    // 0x80046548: b           L_80046550
    // 0x8004654C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80046550;
    // 0x8004654C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80046550:
    // 0x80046550: beq         $v0, $zero, L_800465C0
    if (ctx->r2 == 0) {
        // 0x80046554: nop
    
            goto L_800465C0;
    }
    // 0x80046554: nop

    // 0x80046558: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8004655C: addiu       $s1, $s1, -0x3C90
    ctx->r17 = ADD32(ctx->r17, -0X3C90);
    // 0x80046560: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x80046564: jal         0x8005BB84
    // 0x80046568: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8005BB84(rdram, ctx);
        goto after_1;
    // 0x80046568: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x8004656C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80046570: lw          $v0, -0x3C7C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C7C);
    // 0x80046574: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80046578: beq         $v0, $at, L_800465A0
    if (ctx->r2 == ctx->r1) {
        // 0x8004657C: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_800465A0;
    }
    // 0x8004657C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80046580: beq         $v0, $at, L_800465A0
    if (ctx->r2 == ctx->r1) {
        // 0x80046584: nop
    
            goto L_800465A0;
    }
    // 0x80046584: nop

    // 0x80046588: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8004658C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80046590: bne         $t8, $at, L_800465C0
    if (ctx->r24 != ctx->r1) {
        // 0x80046594: nop
    
            goto L_800465C0;
    }
    // 0x80046594: nop

    // 0x80046598: b           L_800466A0
    // 0x8004659C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800466A0;
    // 0x8004659C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800465A0:
    // 0x800465A0: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x800465A4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800465A8: bne         $t9, $at, L_800465C0
    if (ctx->r25 != ctx->r1) {
        // 0x800465AC: nop
    
            goto L_800465C0;
    }
    // 0x800465AC: nop

    // 0x800465B0: bne         $s2, $zero, L_800465C0
    if (ctx->r18 != 0) {
        // 0x800465B4: nop
    
            goto L_800465C0;
    }
    // 0x800465B4: nop

    // 0x800465B8: b           L_800466A0
    // 0x800465BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800466A0;
    // 0x800465BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800465C0:
    // 0x800465C0: lw          $t6, 0x2C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X2C);
    // 0x800465C4: nop

    // 0x800465C8: slti        $at, $t6, 0xD
    ctx->r1 = SIGNED(ctx->r14) < 0XD ? 1 : 0;
    // 0x800465CC: bne         $at, $zero, L_800465F0
    if (ctx->r1 != 0) {
        // 0x800465D0: nop
    
            goto L_800465F0;
    }
    // 0x800465D0: nop

    // 0x800465D4: lw          $t7, 0x10($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X10);
    // 0x800465D8: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x800465DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800465E0: bne         $t7, $t8, L_800465F0
    if (ctx->r15 != ctx->r24) {
        // 0x800465E4: nop
    
            goto L_800465F0;
    }
    // 0x800465E4: nop

    // 0x800465E8: b           L_800466A0
    // 0x800465EC: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
        goto L_800466A0;
    // 0x800465EC: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
L_800465F0:
    // 0x800465F0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x800465F4: jal         0x8002D000
    // 0x800465F8: nop

    func_8002D000(rdram, ctx);
        goto after_2;
    // 0x800465F8: nop

    after_2:
    // 0x800465FC: sll         $t9, $s2, 2
    ctx->r25 = S32(ctx->r18 << 2);
    // 0x80046600: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80046604: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80046608: lw          $t9, 0x1838($at)
    ctx->r25 = MEM_W(ctx->r1, 0X1838);
    // 0x8004660C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80046610: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80046614: jalr        $t9
    // 0x80046618: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80046618: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x8004661C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80046620: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80046624: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80046628: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004662C: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x80046630: nop

    // 0x80046634: bc1t        L_800466A0
    if (c1cs) {
        // 0x80046638: nop
    
            goto L_800466A0;
    }
    // 0x80046638: nop

    // 0x8004663C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80046640: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80046644: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80046648: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8004664C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80046650: andi        $t8, $s3, 0x1
    ctx->r24 = ctx->r19 & 0X1;
    // 0x80046654: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80046658: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x8004665C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80046660: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80046664: beq         $t8, $zero, L_80046698
    if (ctx->r24 == 0) {
        // 0x80046668: sw          $t7, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->r15;
            goto L_80046698;
    }
    // 0x80046668: sw          $t7, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r15;
    // 0x8004666C: mul.s       $f6, $f20, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x80046670: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80046674: nop

    // 0x80046678: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8004667C: nop

    // 0x80046680: bc1f        L_80046690
    if (!c1cs) {
        // 0x80046684: nop
    
            goto L_80046690;
    }
    // 0x80046684: nop

    // 0x80046688: b           L_800466A0
    // 0x8004668C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800466A0;
    // 0x8004668C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80046690:
    // 0x80046690: b           L_800466A0
    // 0x80046694: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800466A0;
    // 0x80046694: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80046698:
    // 0x80046698: b           L_800466A0
    // 0x8004669C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800466A0;
    // 0x8004669C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800466A0:
    // 0x800466A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800466A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800466A8: jr          $ra
    // 0x800466AC: nop

    return;
    // 0x800466AC: nop

;}
RECOMP_FUNC void func_800466B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800466B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800466B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800466B8: lw          $t6, 0x2C($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X2C);
    // 0x800466BC: nop

    // 0x800466C0: slti        $at, $t6, 0xD
    ctx->r1 = SIGNED(ctx->r14) < 0XD ? 1 : 0;
    // 0x800466C4: bne         $at, $zero, L_800466EC
    if (ctx->r1 != 0) {
        // 0x800466C8: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_800466EC;
    }
    // 0x800466C8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x800466CC: lw          $t7, 0x10($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X10);
    // 0x800466D0: lw          $t8, 0x14($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X14);
    // 0x800466D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800466D8: bne         $t7, $t8, L_800466EC
    if (ctx->r15 != ctx->r24) {
        // 0x800466DC: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_800466EC;
    }
    // 0x800466DC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x800466E0: b           L_80046730
    // 0x800466E4: sw          $zero, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = 0;
        goto L_80046730;
    // 0x800466E4: sw          $zero, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = 0;
    // 0x800466E8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
L_800466EC:
    // 0x800466EC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800466F0: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x800466F4: jal         0x80046518
    // 0x800466F8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    func_80046518(rdram, ctx);
        goto after_0;
    // 0x800466F8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    after_0:
    // 0x800466FC: bgez        $v0, L_80046714
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80046700: nop
    
            goto L_80046714;
    }
    // 0x80046700: nop

    // 0x80046704: jal         0x800418F4
    // 0x80046708: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    func_800418F4(rdram, ctx);
        goto after_1;
    // 0x80046708: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    after_1:
    // 0x8004670C: b           L_80046734
    // 0x80046710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80046734;
    // 0x80046710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80046714:
    // 0x80046714: blez        $v0, L_8004672C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80046718: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_8004672C;
    }
    // 0x80046718: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x8004671C: addiu       $t9, $t9, 0x181C
    ctx->r25 = ADD32(ctx->r25, 0X181C);
    // 0x80046720: sw          $t9, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r25;
    // 0x80046724: b           L_80046730
    // 0x80046728: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80046730;
    // 0x80046728: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004672C:
    // 0x8004672C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80046730:
    // 0x80046730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80046734:
    // 0x80046734: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80046738: jr          $ra
    // 0x8004673C: nop

    return;
    // 0x8004673C: nop

;}
RECOMP_FUNC void func_80046740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046740: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80046744: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80046748: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8004674C: addiu       $s0, $s0, -0x3C8C
    ctx->r16 = ADD32(ctx->r16, -0X3C8C);
    // 0x80046750: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x80046754: jal         0x8005BCB4
    // 0x80046758: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8005BCB4(rdram, ctx);
        goto after_0;
    // 0x80046758: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x8004675C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80046760: lw          $v0, -0x3C7C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C7C);
    // 0x80046764: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80046768: beq         $v0, $at, L_800467C8
    if (ctx->r2 == ctx->r1) {
        // 0x8004676C: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_800467C8;
    }
    // 0x8004676C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80046770: beq         $v0, $at, L_800467C8
    if (ctx->r2 == ctx->r1) {
        // 0x80046774: nop
    
            goto L_800467C8;
    }
    // 0x80046774: nop

    // 0x80046778: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8004677C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80046780: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x80046784: beq         $t7, $zero, L_80046794
    if (ctx->r15 == 0) {
        // 0x80046788: nop
    
            goto L_80046794;
    }
    // 0x80046788: nop

    // 0x8004678C: b           L_80046794
    // 0x80046790: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80046794;
    // 0x80046790: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80046794:
    // 0x80046794: beq         $v0, $zero, L_800467C8
    if (ctx->r2 == 0) {
        // 0x80046798: nop
    
            goto L_800467C8;
    }
    // 0x80046798: nop

    // 0x8004679C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x800467A0: addiu       $s0, $s0, -0x3C90
    ctx->r16 = ADD32(ctx->r16, -0X3C90);
    // 0x800467A4: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x800467A8: jal         0x8005BB84
    // 0x800467AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8005BB84(rdram, ctx);
        goto after_1;
    // 0x800467AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x800467B0: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x800467B4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800467B8: bne         $t8, $at, L_800467C8
    if (ctx->r24 != ctx->r1) {
        // 0x800467BC: nop
    
            goto L_800467C8;
    }
    // 0x800467BC: nop

    // 0x800467C0: b           L_80046864
    // 0x800467C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80046864;
    // 0x800467C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800467C8:
    // 0x800467C8: lw          $t9, 0x2C($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X2C);
    // 0x800467CC: nop

    // 0x800467D0: slti        $at, $t9, 0xD
    ctx->r1 = SIGNED(ctx->r25) < 0XD ? 1 : 0;
    // 0x800467D4: bne         $at, $zero, L_800467FC
    if (ctx->r1 != 0) {
        // 0x800467D8: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_800467FC;
    }
    // 0x800467D8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x800467DC: lw          $t6, 0x10($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X10);
    // 0x800467E0: lw          $t7, 0x14($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X14);
    // 0x800467E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800467E8: bne         $t6, $t7, L_800467FC
    if (ctx->r14 != ctx->r15) {
        // 0x800467EC: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_800467FC;
    }
    // 0x800467EC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x800467F0: b           L_80046864
    // 0x800467F4: sw          $zero, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = 0;
        goto L_80046864;
    // 0x800467F4: sw          $zero, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = 0;
    // 0x800467F8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
L_800467FC:
    // 0x800467FC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80046800: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x80046804: jal         0x80046518
    // 0x80046808: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    func_80046518(rdram, ctx);
        goto after_2;
    // 0x80046808: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    after_2:
    // 0x8004680C: blez        $v0, L_80046824
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80046810: lui         $t8, 0x8004
        ctx->r24 = S32(0X8004 << 16);
            goto L_80046824;
    }
    // 0x80046810: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x80046814: addiu       $t8, $t8, 0x181C
    ctx->r24 = ADD32(ctx->r24, 0X181C);
    // 0x80046818: sw          $t8, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r24;
    // 0x8004681C: b           L_80046864
    // 0x80046820: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80046864;
    // 0x80046820: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80046824:
    // 0x80046824: bgez        $v0, L_80046860
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80046828: lui         $t9, 0x800B
        ctx->r25 = S32(0X800B << 16);
            goto L_80046860;
    }
    // 0x80046828: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8004682C: lw          $t9, -0x4298($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4298);
    // 0x80046830: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80046834: bne         $t9, $at, L_80046850
    if (ctx->r25 != ctx->r1) {
        // 0x80046838: lui         $t7, 0x8004
        ctx->r15 = S32(0X8004 << 16);
            goto L_80046850;
    }
    // 0x80046838: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x8004683C: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x80046840: addiu       $t6, $t6, 0x3E40
    ctx->r14 = ADD32(ctx->r14, 0X3E40);
    // 0x80046844: sw          $t6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r14;
    // 0x80046848: b           L_80046864
    // 0x8004684C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80046864;
    // 0x8004684C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80046850:
    // 0x80046850: addiu       $t7, $t7, 0x3CF8
    ctx->r15 = ADD32(ctx->r15, 0X3CF8);
    // 0x80046854: sw          $t7, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r15;
    // 0x80046858: b           L_80046864
    // 0x8004685C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80046864;
    // 0x8004685C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80046860:
    // 0x80046860: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80046864:
    // 0x80046864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80046868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004686C: jr          $ra
    // 0x80046870: nop

    return;
    // 0x80046870: nop

    // 0x80046874: jr          $ra
    // 0x80046878: nop

    return;
    // 0x80046878: nop

;}
