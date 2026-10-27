#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80035B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035B5C: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x80035B60: addiu       $s7, $s7, -0x4170
    ctx->r23 = ADD32(ctx->r23, -0X4170);
    // 0x80035B64: lw          $v0, 0x14($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X14);
    // 0x80035B68: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80035B6C: slti        $at, $v0, 0x258
    ctx->r1 = SIGNED(ctx->r2) < 0X258 ? 1 : 0;
    // 0x80035B70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035B74: beq         $at, $zero, L_80035BDC
    if (ctx->r1 == 0) {
        // 0x80035B78: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80035BDC;
    }
    // 0x80035B78: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80035B7C: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x80035B80: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x80035B84: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80035B88: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80035B8C: addiu       $a1, $a1, 0x58C0
    ctx->r5 = ADD32(ctx->r5, 0X58C0);
    // 0x80035B90: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80035B94: bne         $v1, $zero, L_80035BA0
    if (ctx->r3 != 0) {
        // 0x80035B98: nop
    
            goto L_80035BA0;
    }
    // 0x80035B98: nop

    // 0x80035B9C: break       7
    do_break(2147703708);
L_80035BA0:
    // 0x80035BA0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80035BA4: bne         $v1, $at, L_80035BB8
    if (ctx->r3 != ctx->r1) {
        // 0x80035BA8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80035BB8;
    }
    // 0x80035BA8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80035BAC: bne         $v0, $at, L_80035BB8
    if (ctx->r2 != ctx->r1) {
        // 0x80035BB0: nop
    
            goto L_80035BB8;
    }
    // 0x80035BB0: nop

    // 0x80035BB4: break       6
    do_break(2147703732);
L_80035BB8:
    // 0x80035BB8: mfhi        $t6
    ctx->r14 = hi;
    // 0x80035BBC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80035BC0: addu        $a3, $a3, $t7
    ctx->r7 = ADD32(ctx->r7, ctx->r15);
    // 0x80035BC4: lw          $a3, -0x5E4($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X5E4);
    // 0x80035BC8: mflo        $a2
    ctx->r6 = lo;
    // 0x80035BCC: jal         0x800768B0
    // 0x80035BD0: nop

    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x80035BD0: nop

    after_0:
    // 0x80035BD4: b           L_80035C24
    // 0x80035BD8: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
        goto L_80035C24;
    // 0x80035BD8: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
L_80035BDC:
    // 0x80035BDC: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x80035BE0: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x80035BE4: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80035BE8: addiu       $a1, $a1, 0x58CC
    ctx->r5 = ADD32(ctx->r5, 0X58CC);
    // 0x80035BEC: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80035BF0: bne         $v1, $zero, L_80035BFC
    if (ctx->r3 != 0) {
        // 0x80035BF4: nop
    
            goto L_80035BFC;
    }
    // 0x80035BF4: nop

    // 0x80035BF8: break       7
    do_break(2147703800);
L_80035BFC:
    // 0x80035BFC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80035C00: bne         $v1, $at, L_80035C14
    if (ctx->r3 != ctx->r1) {
        // 0x80035C04: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80035C14;
    }
    // 0x80035C04: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80035C08: bne         $v0, $at, L_80035C14
    if (ctx->r2 != ctx->r1) {
        // 0x80035C0C: nop
    
            goto L_80035C14;
    }
    // 0x80035C0C: nop

    // 0x80035C10: break       6
    do_break(2147703824);
L_80035C14:
    // 0x80035C14: mflo        $a2
    ctx->r6 = lo;
    // 0x80035C18: jal         0x800768B0
    // 0x80035C1C: nop

    sprintf_recomp(rdram, ctx);
        goto after_1;
    // 0x80035C1C: nop

    after_1:
    // 0x80035C20: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
L_80035C24:
    // 0x80035C24: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80035C28: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80035C2C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80035C30: addiu       $t9, $t9, -0x4020
    ctx->r25 = ADD32(ctx->r25, -0X4020);
    // 0x80035C34: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x80035C38: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80035C3C: addu        $s1, $t8, $t9
    ctx->r17 = ADD32(ctx->r24, ctx->r25);
    // 0x80035C40: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80035C44: addiu       $s3, $sp, 0x4C
    ctx->r19 = ADD32(ctx->r29, 0X4C);
    // 0x80035C48: addiu       $s6, $zero, 0x20
    ctx->r22 = ADD32(0, 0X20);
L_80035C4C:
    // 0x80035C4C: lbu         $t6, 0x0($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X0);
    // 0x80035C50: lw          $s5, 0x0($s1)
    ctx->r21 = MEM_W(ctx->r17, 0X0);
    // 0x80035C54: beq         $s6, $t6, L_80035CE8
    if (ctx->r22 == ctx->r14) {
        // 0x80035C58: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_80035CE8;
    }
    // 0x80035C58: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x80035C5C: sll         $s4, $s2, 3
    ctx->r20 = S32(ctx->r18 << 3);
    // 0x80035C60: subu        $s4, $s4, $s2
    ctx->r20 = SUB32(ctx->r20, ctx->r18);
    // 0x80035C64: sll         $s4, $s4, 1
    ctx->r20 = S32(ctx->r20 << 1);
    // 0x80035C68: addiu       $s4, $s4, 0x98
    ctx->r20 = ADD32(ctx->r20, 0X98);
    // 0x80035C6C: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    // 0x80035C70: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80035C74: jal         0x80015784
    // 0x80035C78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_2;
    // 0x80035C78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80035C7C: mtc1        $s4, $f4
    ctx->f4.u32l = ctx->r20;
    // 0x80035C80: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80035C84: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80035C88: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80035C8C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80035C90: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80035C94: jal         0x80014B64
    // 0x80035C98: nop

    func_80014B64(rdram, ctx);
        goto after_3;
    // 0x80035C98: nop

    after_3:
    // 0x80035C9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80035CA0: jal         0x80014AC4
    // 0x80035CA4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_4;
    // 0x80035CA4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_4:
    // 0x80035CA8: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x80035CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80035CB0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x80035CB4: jal         0x80015898
    // 0x80035CB8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80015898(rdram, ctx);
        goto after_5;
    // 0x80035CB8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_5:
    // 0x80035CBC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80035CC0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80035CC4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80035CC8: jal         0x800157C8
    // 0x80035CCC: nop

    func_800157C8(rdram, ctx);
        goto after_6;
    // 0x80035CCC: nop

    after_6:
    // 0x80035CD0: lbu         $a1, 0x0($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X0);
    // 0x80035CD4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80035CD8: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x80035CDC: addiu       $a1, $t7, -0x300
    ctx->r5 = ADD32(ctx->r15, -0X300);
    // 0x80035CE0: jal         0x80015950
    // 0x80035CE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_7;
    // 0x80035CE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
L_80035CE8:
    // 0x80035CE8: beq         $s5, $zero, L_80035CF8
    if (ctx->r21 == 0) {
        // 0x80035CEC: nop
    
            goto L_80035CF8;
    }
    // 0x80035CEC: nop

    // 0x80035CF0: jal         0x80014BF4
    // 0x80035CF4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80014BF4(rdram, ctx);
        goto after_8;
    // 0x80035CF4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_8:
L_80035CF8:
    // 0x80035CF8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80035CFC: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x80035D00: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80035D04: bne         $at, $zero, L_80035C4C
    if (ctx->r1 != 0) {
        // 0x80035D08: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80035C4C;
    }
    // 0x80035D08: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80035D0C: lw          $t8, 0x14($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X14);
    // 0x80035D10: nop

    // 0x80035D14: slti        $at, $t8, 0x258
    ctx->r1 = SIGNED(ctx->r24) < 0X258 ? 1 : 0;
    // 0x80035D18: beq         $at, $zero, L_80035E00
    if (ctx->r1 == 0) {
        // 0x80035D1C: lui         $at, 0x42F8
        ctx->r1 = S32(0X42F8 << 16);
            goto L_80035E00;
    }
    // 0x80035D1C: lui         $at, 0x42F8
    ctx->r1 = S32(0X42F8 << 16);
    // 0x80035D20: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80035D24: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80035D28: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80035D2C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80035D30: addiu       $s3, $sp, 0x4C
    ctx->r19 = ADD32(ctx->r29, 0X4C);
    // 0x80035D34: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
L_80035D38:
    // 0x80035D38: lbu         $t9, 0x2($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X2);
    // 0x80035D3C: lw          $s5, 0x0($s1)
    ctx->r21 = MEM_W(ctx->r17, 0X0);
    // 0x80035D40: beq         $s6, $t9, L_80035DE0
    if (ctx->r22 == ctx->r25) {
        // 0x80035D44: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_80035DE0;
    }
    // 0x80035D44: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x80035D48: sll         $s4, $s2, 3
    ctx->r20 = S32(ctx->r18 << 3);
    // 0x80035D4C: addiu       $s4, $s4, 0xAC
    ctx->r20 = ADD32(ctx->r20, 0XAC);
    // 0x80035D50: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    // 0x80035D54: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80035D58: jal         0x80015784
    // 0x80035D5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_9;
    // 0x80035D5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x80035D60: mtc1        $s4, $f6
    ctx->f6.u32l = ctx->r20;
    // 0x80035D64: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80035D68: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80035D6C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80035D70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80035D74: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80035D78: jal         0x80014B64
    // 0x80035D7C: nop

    func_80014B64(rdram, ctx);
        goto after_10;
    // 0x80035D7C: nop

    after_10:
    // 0x80035D80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80035D84: jal         0x80014AC4
    // 0x80035D88: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_11;
    // 0x80035D88: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_11:
    // 0x80035D8C: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x80035D90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80035D94: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x80035D98: jal         0x80015898
    // 0x80035D9C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80015898(rdram, ctx);
        goto after_12;
    // 0x80035D9C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_12:
    // 0x80035DA0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80035DA4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80035DA8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80035DAC: jal         0x800157C8
    // 0x80035DB0: nop

    func_800157C8(rdram, ctx);
        goto after_13;
    // 0x80035DB0: nop

    after_13:
    // 0x80035DB4: lbu         $a1, 0x2($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X2);
    // 0x80035DB8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80035DBC: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x80035DC0: addiu       $a1, $t6, -0x300
    ctx->r5 = ADD32(ctx->r14, -0X300);
    // 0x80035DC4: jal         0x80015950
    // 0x80035DC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_14;
    // 0x80035DC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
    // 0x80035DCC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80035DD0: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x80035DD4: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80035DD8: jal         0x80014B38
    // 0x80035DDC: nop

    func_80014B38(rdram, ctx);
        goto after_15;
    // 0x80035DDC: nop

    after_15:
L_80035DE0:
    // 0x80035DE0: beq         $s5, $zero, L_80035DF0
    if (ctx->r21 == 0) {
        // 0x80035DE4: nop
    
            goto L_80035DF0;
    }
    // 0x80035DE4: nop

    // 0x80035DE8: jal         0x80014BF4
    // 0x80035DEC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80014BF4(rdram, ctx);
        goto after_16;
    // 0x80035DEC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_16:
L_80035DF0:
    // 0x80035DF0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80035DF4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80035DF8: bne         $s2, $s7, L_80035D38
    if (ctx->r18 != ctx->r23) {
        // 0x80035DFC: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80035D38;
    }
    // 0x80035DFC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_80035E00:
    // 0x80035E00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035E04: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80035E08: jr          $ra
    // 0x80035E0C: nop

    return;
    // 0x80035E0C: nop

    // 0x80035E10: jr          $ra
    // 0x80035E14: nop

    return;
    // 0x80035E14: nop

;}
RECOMP_FUNC void func_80035E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035E18: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80035E1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035E20: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80035E24: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x80035E28: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x80035E2C: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x80035E30: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80035E34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035E38: addiu       $s6, $s6, -0x6D4
    ctx->r22 = ADD32(ctx->r22, -0X6D4);
    // 0x80035E3C: addiu       $s7, $s7, -0x4020
    ctx->r23 = ADD32(ctx->r23, -0X4020);
    // 0x80035E40: addiu       $fp, $fp, -0x634
    ctx->r30 = ADD32(ctx->r30, -0X634);
    // 0x80035E44: addiu       $s3, $s3, -0x4298
    ctx->r19 = ADD32(ctx->r19, -0X4298);
    // 0x80035E48: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80035E4C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80035E50:
    // 0x80035E50: lw          $t6, 0x4($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X4);
    // 0x80035E54: addu        $v1, $s6, $s4
    ctx->r3 = ADD32(ctx->r22, ctx->r20);
    // 0x80035E58: beq         $t6, $zero, L_80035F54
    if (ctx->r14 == 0) {
        // 0x80035E5C: nop
    
            goto L_80035F54;
    }
    // 0x80035E5C: nop

    // 0x80035E60: lw          $a3, 0xC8($s3)
    ctx->r7 = MEM_W(ctx->r19, 0XC8);
    // 0x80035E64: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80035E68: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x80035E6C: beq         $t7, $a3, L_80035F54
    if (ctx->r15 == ctx->r7) {
        // 0x80035E70: sll         $t9, $s2, 3
        ctx->r25 = S32(ctx->r18 << 3);
            goto L_80035F54;
    }
    // 0x80035E70: sll         $t9, $s2, 3
    ctx->r25 = S32(ctx->r18 << 3);
    // 0x80035E74: addu        $v0, $fp, $t9
    ctx->r2 = ADD32(ctx->r30, ctx->r25);
    // 0x80035E78: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80035E7C: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80035E80: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x80035E84: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x80035E88: addu        $s1, $s7, $t8
    ctx->r17 = ADD32(ctx->r23, ctx->r24);
    // 0x80035E8C: cvt.s.w     $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80035E90: lw          $s5, 0x70($s1)
    ctx->r21 = MEM_W(ctx->r17, 0X70);
    // 0x80035E94: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x80035E98: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80035E9C: sw          $zero, 0x70($s1)
    MEM_W(0X70, ctx->r17) = 0;
    // 0x80035EA0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80035EA4: addu        $a0, $a0, $s4
    ctx->r4 = ADD32(ctx->r4, ctx->r20);
    // 0x80035EA8: lw          $a0, -0x5F4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5F4);
    // 0x80035EAC: addiu       $s1, $s1, 0x70
    ctx->r17 = ADD32(ctx->r17, 0X70);
    // 0x80035EB0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80035EB4: jal         0x80015784
    // 0x80035EB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_0;
    // 0x80035EB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80035EBC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80035EC0: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80035EC4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80035EC8: jal         0x80014B64
    // 0x80035ECC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_1;
    // 0x80035ECC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80035ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80035ED4: jal         0x80014AC4
    // 0x80035ED8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_2;
    // 0x80035ED8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
    // 0x80035EDC: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x80035EE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80035EE4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80035EE8: jal         0x80015898
    // 0x80035EEC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80015898(rdram, ctx);
        goto after_3;
    // 0x80035EEC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x80035EF0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80035EF4: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x80035EF8: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80035EFC: jal         0x800157C8
    // 0x80035F00: nop

    func_800157C8(rdram, ctx);
        goto after_4;
    // 0x80035F00: nop

    after_4:
    // 0x80035F04: lw          $t8, 0xC8($s3)
    ctx->r24 = MEM_W(ctx->r19, 0XC8);
    // 0x80035F08: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80035F0C: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80035F10: beq         $t9, $zero, L_80035F38
    if (ctx->r25 == 0) {
        // 0x80035F14: nop
    
            goto L_80035F38;
    }
    // 0x80035F14: nop

    // 0x80035F18: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80035F1C: jal         0x80015950
    // 0x80035F20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_5;
    // 0x80035F20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80035F24: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80035F28: jal         0x80014A7C
    // 0x80035F2C: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    func_80014A7C(rdram, ctx);
        goto after_6;
    // 0x80035F2C: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_6:
    // 0x80035F30: b           L_80035F44
    // 0x80035F34: nop

        goto L_80035F44;
    // 0x80035F34: nop

L_80035F38:
    // 0x80035F38: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80035F3C: jal         0x80014A7C
    // 0x80035F40: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_80014A7C(rdram, ctx);
        goto after_7;
    // 0x80035F40: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_7:
L_80035F44:
    // 0x80035F44: beq         $s5, $zero, L_80035F54
    if (ctx->r21 == 0) {
        // 0x80035F48: nop
    
            goto L_80035F54;
    }
    // 0x80035F48: nop

    // 0x80035F4C: jal         0x80014BF4
    // 0x80035F50: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80014BF4(rdram, ctx);
        goto after_8;
    // 0x80035F50: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_8:
L_80035F54:
    // 0x80035F54: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80035F58: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80035F5C: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x80035F60: bne         $s2, $at, L_80035E50
    if (ctx->r18 != ctx->r1) {
        // 0x80035F64: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_80035E50;
    }
    // 0x80035F64: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80035F68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035F6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80035F70: jr          $ra
    // 0x80035F74: nop

    return;
    // 0x80035F74: nop

;}
RECOMP_FUNC void func_80035F78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035F78: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x80035F7C: addiu       $s4, $s4, -0x4020
    ctx->r20 = ADD32(ctx->r20, -0X4020);
    // 0x80035F80: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x80035F84: addu        $v1, $s4, $v0
    ctx->r3 = ADD32(ctx->r20, ctx->r2);
    // 0x80035F88: lw          $s2, 0x80($v1)
    ctx->r18 = MEM_W(ctx->r3, 0X80);
    // 0x80035F8C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80035F90: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80035F94: sw          $zero, 0x80($v1)
    MEM_W(0X80, ctx->r3) = 0;
    // 0x80035F98: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80035F9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035FA0: lw          $a2, -0x41E0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X41E0);
    // 0x80035FA4: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80035FA8: addiu       $s3, $s0, 0x20
    ctx->r19 = ADD32(ctx->r16, 0X20);
    // 0x80035FAC: addiu       $a1, $a1, 0x58A4
    ctx->r5 = ADD32(ctx->r5, 0X58A4);
    // 0x80035FB0: jal         0x800768B0
    // 0x80035FB4: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x80035FB4: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_0:
    // 0x80035FB8: lbu         $t6, 0x3C($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X3C);
    // 0x80035FBC: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x80035FC0: beq         $t6, $at, L_80036080
    if (ctx->r14 == ctx->r1) {
        // 0x80035FC4: sll         $t7, $s0, 3
        ctx->r15 = S32(ctx->r16 << 3);
            goto L_80036080;
    }
    // 0x80035FC4: sll         $t7, $s0, 3
    ctx->r15 = S32(ctx->r16 << 3);
    // 0x80035FC8: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80035FCC: addiu       $t8, $t8, -0x634
    ctx->r24 = ADD32(ctx->r24, -0X634);
    // 0x80035FD0: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80035FD4: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80035FD8: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80035FDC: addiu       $t6, $t9, 0x10
    ctx->r14 = ADD32(ctx->r25, 0X10);
    // 0x80035FE0: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x80035FE4: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x80035FE8: cvt.s.w     $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80035FEC: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    // 0x80035FF0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80035FF4: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80035FF8: jal         0x80015784
    // 0x80035FFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_1;
    // 0x80035FFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80036000: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80036004: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80036008: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8003600C: jal         0x80014B64
    // 0x80036010: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_2;
    // 0x80036010: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80036014: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80036018: jal         0x80014AC4
    // 0x8003601C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_3;
    // 0x8003601C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_3:
    // 0x80036020: sll         $t8, $s3, 2
    ctx->r24 = S32(ctx->r19 << 2);
    // 0x80036024: addu        $s1, $s4, $t8
    ctx->r17 = ADD32(ctx->r20, ctx->r24);
    // 0x80036028: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x8003602C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80036030: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x80036034: jal         0x80015898
    // 0x80036038: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80015898(rdram, ctx);
        goto after_4;
    // 0x80036038: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_4:
    // 0x8003603C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80036040: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80036044: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80036048: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8003604C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80036050: jal         0x800157C8
    // 0x80036054: nop

    func_800157C8(rdram, ctx);
        goto after_5;
    // 0x80036054: nop

    after_5:
    // 0x80036058: lbu         $a1, 0x3C($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X3C);
    // 0x8003605C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80036060: sll         $t9, $a1, 4
    ctx->r25 = S32(ctx->r5 << 4);
    // 0x80036064: addiu       $a1, $t9, -0x300
    ctx->r5 = ADD32(ctx->r25, -0X300);
    // 0x80036068: jal         0x80015950
    // 0x8003606C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_6;
    // 0x8003606C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80036070: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80036074: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80036078: jal         0x80015898
    // 0x8003607C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80015898(rdram, ctx);
        goto after_7;
    // 0x8003607C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
L_80036080:
    // 0x80036080: beq         $s2, $zero, L_80036094
    if (ctx->r18 == 0) {
        // 0x80036084: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80036094;
    }
    // 0x80036084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036088: jal         0x80014BF4
    // 0x8003608C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80014BF4(rdram, ctx);
        goto after_8;
    // 0x8003608C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_8:
    // 0x80036090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80036094:
    // 0x80036094: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80036098: jr          $ra
    // 0x8003609C: nop

    return;
    // 0x8003609C: nop

    // 0x800360A0: jr          $ra
    // 0x800360A4: nop

    return;
    // 0x800360A4: nop

    // 0x800360A8: jr          $ra
    // 0x800360AC: nop

    return;
    // 0x800360AC: nop

;}
RECOMP_FUNC void func_800360B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800360B0: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800360B4: lw          $t6, -0x4298($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4298);
    // 0x800360B8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800360BC: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x800360C0: beq         $at, $zero, L_800364B8
    if (ctx->r1 == 0) {
        // 0x800360C4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800364B8;
    }
    // 0x800360C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800360C8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800360CC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800360D0: addu        $at, $at, $t6
    gpr jr_addend_800360DC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800360D4: lw          $t6, 0x5A28($at)
    ctx->r14 = ADD32(ctx->r1, 0X5A28);
    // 0x800360D8: nop

    // 0x800360DC: jr          $t6
    // 0x800360E0: nop

    switch (jr_addend_800360DC >> 2) {
        case 0: goto L_80036214; break;
        case 1: goto L_800362A8; break;
        case 2: goto L_80036298; break;
        case 3: goto L_80036190; break;
        case 4: goto L_800360E4; break;
        default: switch_error(__func__, 0x800360DC, 0x80095A28);
    }
    // 0x800360E0: nop

L_800360E4:
    // 0x800360E4: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x800360E8: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x800360EC: addiu       $fp, $fp, -0x6E0
    ctx->r30 = ADD32(ctx->r30, -0X6E0);
    // 0x800360F0: addiu       $s6, $s6, -0x4298
    ctx->r22 = ADD32(ctx->r22, -0X4298);
    // 0x800360F4: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x800360F8: addiu       $s7, $zero, 0x4
    ctx->r23 = ADD32(0, 0X4);
L_800360FC:
    // 0x800360FC: lw          $t7, 0x4($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X4);
    // 0x80036100: nop

    // 0x80036104: beq         $t7, $zero, L_80036140
    if (ctx->r15 == 0) {
        // 0x80036108: nop
    
            goto L_80036140;
    }
    // 0x80036108: nop

    // 0x8003610C: sw          $s5, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r21;
    // 0x80036110: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80036114: jal         0x800351D4
    // 0x80036118: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    func_800351D4(rdram, ctx);
        goto after_0;
    // 0x80036118: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    after_0:
    // 0x8003611C: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x80036120: addiu       $fp, $fp, -0x6E0
    ctx->r30 = ADD32(ctx->r30, -0X6E0);
    // 0x80036124: lw          $t8, 0x0($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X0);
    // 0x80036128: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x8003612C: lw          $s6, 0x18($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X18);
    // 0x80036130: bgez        $t8, L_80036140
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80036134: addiu       $s7, $zero, 0x4
        ctx->r23 = ADD32(0, 0X4);
            goto L_80036140;
    }
    // 0x80036134: addiu       $s7, $zero, 0x4
    ctx->r23 = ADD32(0, 0X4);
    // 0x80036138: jal         0x80035F78
    // 0x8003613C: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    func_80035F78(rdram, ctx);
        goto after_1;
    // 0x8003613C: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    after_1:
L_80036140:
    // 0x80036140: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80036144: bne         $s5, $s7, L_800360FC
    if (ctx->r21 != ctx->r23) {
        // 0x80036148: addiu       $s6, $s6, 0x4
        ctx->r22 = ADD32(ctx->r22, 0X4);
            goto L_800360FC;
    }
    // 0x80036148: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x8003614C: jal         0x80035E18
    // 0x80036150: nop

    func_80035E18(rdram, ctx);
        goto after_2;
    // 0x80036150: nop

    after_2:
    // 0x80036154: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80036158: lw          $t9, -0x415C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X415C);
    // 0x8003615C: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x80036160: bltz        $t9, L_80036170
    if (SIGNED(ctx->r25) < 0) {
        // 0x80036164: addiu       $fp, $fp, -0x6E0
        ctx->r30 = ADD32(ctx->r30, -0X6E0);
            goto L_80036170;
    }
    // 0x80036164: addiu       $fp, $fp, -0x6E0
    ctx->r30 = ADD32(ctx->r30, -0X6E0);
    // 0x80036168: jal         0x80035B5C
    // 0x8003616C: nop

    func_80035B5C(rdram, ctx);
        goto after_3;
    // 0x8003616C: nop

    after_3:
L_80036170:
    // 0x80036170: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80036174: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80036178: addiu       $v0, $v0, -0x6E4
    ctx->r2 = ADD32(ctx->r2, -0X6E4);
    // 0x8003617C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80036180: sw          $t6, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r14;
    // 0x80036184: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80036188: b           L_800364B8
    // 0x8003618C: sw          $t6, -0x6E8($at)
    MEM_W(-0X6E8, ctx->r1) = ctx->r14;
        goto L_800364B8;
    // 0x8003618C: sw          $t6, -0x6E8($at)
    MEM_W(-0X6E8, ctx->r1) = ctx->r14;
L_80036190:
    // 0x80036190: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x80036194: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x80036198: addiu       $fp, $fp, -0x6E0
    ctx->r30 = ADD32(ctx->r30, -0X6E0);
    // 0x8003619C: addiu       $s6, $s6, -0x4298
    ctx->r22 = ADD32(ctx->r22, -0X4298);
    // 0x800361A0: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x800361A4: addiu       $s7, $zero, 0x4
    ctx->r23 = ADD32(0, 0X4);
L_800361A8:
    // 0x800361A8: lw          $t9, 0x4($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X4);
    // 0x800361AC: nop

    // 0x800361B0: beq         $t9, $zero, L_800361D0
    if (ctx->r25 == 0) {
        // 0x800361B4: nop
    
            goto L_800361D0;
    }
    // 0x800361B4: nop

    // 0x800361B8: lw          $t6, 0x0($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X0);
    // 0x800361BC: nop

    // 0x800361C0: bgez        $t6, L_800361D0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800361C4: nop
    
            goto L_800361D0;
    }
    // 0x800361C4: nop

    // 0x800361C8: jal         0x80035F78
    // 0x800361CC: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    func_80035F78(rdram, ctx);
        goto after_4;
    // 0x800361CC: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    after_4:
L_800361D0:
    // 0x800361D0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x800361D4: bne         $s5, $s7, L_800361A8
    if (ctx->r21 != ctx->r23) {
        // 0x800361D8: addiu       $s6, $s6, 0x4
        ctx->r22 = ADD32(ctx->r22, 0X4);
            goto L_800361A8;
    }
    // 0x800361D8: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x800361DC: jal         0x80035E18
    // 0x800361E0: nop

    func_80035E18(rdram, ctx);
        goto after_5;
    // 0x800361E0: nop

    after_5:
    // 0x800361E4: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x800361E8: lw          $t7, -0x415C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X415C);
    // 0x800361EC: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x800361F0: bltz        $t7, L_80036200
    if (SIGNED(ctx->r15) < 0) {
        // 0x800361F4: addiu       $fp, $fp, -0x6E0
        ctx->r30 = ADD32(ctx->r30, -0X6E0);
            goto L_80036200;
    }
    // 0x800361F4: addiu       $fp, $fp, -0x6E0
    ctx->r30 = ADD32(ctx->r30, -0X6E0);
    // 0x800361F8: jal         0x80035B5C
    // 0x800361FC: nop

    func_80035B5C(rdram, ctx);
        goto after_6;
    // 0x800361FC: nop

    after_6:
L_80036200:
    // 0x80036200: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80036204: sw          $t8, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r24;
    // 0x80036208: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003620C: b           L_800364B8
    // 0x80036210: sw          $t8, -0x6E4($at)
    MEM_W(-0X6E4, ctx->r1) = ctx->r24;
        goto L_800364B8;
    // 0x80036210: sw          $t8, -0x6E4($at)
    MEM_W(-0X6E4, ctx->r1) = ctx->r24;
L_80036214:
    // 0x80036214: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x80036218: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x8003621C: addiu       $fp, $fp, -0x6E0
    ctx->r30 = ADD32(ctx->r30, -0X6E0);
    // 0x80036220: addiu       $s6, $s6, -0x4298
    ctx->r22 = ADD32(ctx->r22, -0X4298);
    // 0x80036224: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x80036228: addiu       $s7, $zero, 0x4
    ctx->r23 = ADD32(0, 0X4);
L_8003622C:
    // 0x8003622C: lw          $t6, 0x4($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X4);
    // 0x80036230: nop

    // 0x80036234: beq         $t6, $zero, L_80036254
    if (ctx->r14 == 0) {
        // 0x80036238: nop
    
            goto L_80036254;
    }
    // 0x80036238: nop

    // 0x8003623C: lw          $t7, 0x0($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X0);
    // 0x80036240: nop

    // 0x80036244: bgez        $t7, L_80036254
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80036248: nop
    
            goto L_80036254;
    }
    // 0x80036248: nop

    // 0x8003624C: jal         0x80034EB4
    // 0x80036250: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    func_80034EB4(rdram, ctx);
        goto after_7;
    // 0x80036250: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    after_7:
L_80036254:
    // 0x80036254: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80036258: bne         $s5, $s7, L_8003622C
    if (ctx->r21 != ctx->r23) {
        // 0x8003625C: addiu       $s6, $s6, 0x4
        ctx->r22 = ADD32(ctx->r22, 0X4);
            goto L_8003622C;
    }
    // 0x8003625C: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x80036260: jal         0x80034D54
    // 0x80036264: nop

    func_80034D54(rdram, ctx);
        goto after_8;
    // 0x80036264: nop

    after_8:
    // 0x80036268: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003626C: lw          $t8, -0x415C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X415C);
    // 0x80036270: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x80036274: bltz        $t8, L_80036284
    if (SIGNED(ctx->r24) < 0) {
        // 0x80036278: addiu       $fp, $fp, -0x6E0
        ctx->r30 = ADD32(ctx->r30, -0X6E0);
            goto L_80036284;
    }
    // 0x80036278: addiu       $fp, $fp, -0x6E0
    ctx->r30 = ADD32(ctx->r30, -0X6E0);
    // 0x8003627C: jal         0x80034A88
    // 0x80036280: nop

    func_80034A88(rdram, ctx);
        goto after_9;
    // 0x80036280: nop

    after_9:
L_80036284:
    // 0x80036284: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80036288: sw          $t9, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r25;
    // 0x8003628C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80036290: b           L_800364B8
    // 0x80036294: sw          $t9, -0x6E4($at)
    MEM_W(-0X6E4, ctx->r1) = ctx->r25;
        goto L_800364B8;
    // 0x80036294: sw          $t9, -0x6E4($at)
    MEM_W(-0X6E4, ctx->r1) = ctx->r25;
L_80036298:
    // 0x80036298: jal         0x80035600
    // 0x8003629C: nop

    func_80035600(rdram, ctx);
        goto after_10;
    // 0x8003629C: nop

    after_10:
    // 0x800362A0: b           L_800364BC
    // 0x800362A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800364BC;
    // 0x800362A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800362A8:
    // 0x800362A8: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x800362AC: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x800362B0: addiu       $fp, $fp, -0x6E0
    ctx->r30 = ADD32(ctx->r30, -0X6E0);
    // 0x800362B4: addiu       $s6, $s6, -0x4298
    ctx->r22 = ADD32(ctx->r22, -0X4298);
    // 0x800362B8: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x800362BC: addiu       $s7, $zero, 0x4
    ctx->r23 = ADD32(0, 0X4);
L_800362C0:
    // 0x800362C0: lw          $t7, 0x4($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X4);
    // 0x800362C4: nop

    // 0x800362C8: beq         $t7, $zero, L_80036304
    if (ctx->r15 == 0) {
        // 0x800362CC: nop
    
            goto L_80036304;
    }
    // 0x800362CC: nop

    // 0x800362D0: sw          $s5, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r21;
    // 0x800362D4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x800362D8: jal         0x800351D4
    // 0x800362DC: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    func_800351D4(rdram, ctx);
        goto after_11;
    // 0x800362DC: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    after_11:
    // 0x800362E0: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x800362E4: addiu       $fp, $fp, -0x6E0
    ctx->r30 = ADD32(ctx->r30, -0X6E0);
    // 0x800362E8: lw          $t8, 0x0($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X0);
    // 0x800362EC: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x800362F0: lw          $s6, 0x18($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X18);
    // 0x800362F4: bgez        $t8, L_80036304
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800362F8: addiu       $s7, $zero, 0x4
        ctx->r23 = ADD32(0, 0X4);
            goto L_80036304;
    }
    // 0x800362F8: addiu       $s7, $zero, 0x4
    ctx->r23 = ADD32(0, 0X4);
    // 0x800362FC: jal         0x80034EB4
    // 0x80036300: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    func_80034EB4(rdram, ctx);
        goto after_12;
    // 0x80036300: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    after_12:
L_80036304:
    // 0x80036304: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80036308: bne         $s5, $s7, L_800362C0
    if (ctx->r21 != ctx->r23) {
        // 0x8003630C: addiu       $s6, $s6, 0x4
        ctx->r22 = ADD32(ctx->r22, 0X4);
            goto L_800362C0;
    }
    // 0x8003630C: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x80036310: jal         0x80034D54
    // 0x80036314: nop

    func_80034D54(rdram, ctx);
        goto after_13;
    // 0x80036314: nop

    after_13:
    // 0x80036318: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8003631C: lw          $t9, -0x6E4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6E4);
    // 0x80036320: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x80036324: addiu       $fp, $fp, -0x6E0
    ctx->r30 = ADD32(ctx->r30, -0X6E0);
    // 0x80036328: bgez        $t9, L_8003647C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8003632C: addiu       $s7, $zero, 0x4
        ctx->r23 = ADD32(0, 0X4);
            goto L_8003647C;
    }
    // 0x8003632C: addiu       $s7, $zero, 0x4
    ctx->r23 = ADD32(0, 0X4);
    // 0x80036330: lui         $at, 0x4358
    ctx->r1 = S32(0X4358 << 16);
    // 0x80036334: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80036338: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8003633C: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80036340: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x80036344: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80036348: addiu       $s6, $s6, -0x6C4
    ctx->r22 = ADD32(ctx->r22, -0X6C4);
    // 0x8003634C: addiu       $s3, $s3, -0x4298
    ctx->r19 = ADD32(ctx->r19, -0X4298);
    // 0x80036350: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80036354: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80036358:
    // 0x80036358: lw          $t6, 0x4($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X4);
    // 0x8003635C: addu        $v0, $s6, $s4
    ctx->r2 = ADD32(ctx->r22, ctx->r20);
    // 0x80036360: beq         $t6, $zero, L_8003646C
    if (ctx->r14 == 0) {
        // 0x80036364: nop
    
            goto L_8003646C;
    }
    // 0x80036364: nop

    // 0x80036368: lw          $v1, 0xC8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XC8);
    // 0x8003636C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80036370: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x80036374: beq         $t7, $v1, L_8003646C
    if (ctx->r15 == ctx->r3) {
        // 0x80036378: addiu       $t9, $t8, 0x10
        ctx->r25 = ADD32(ctx->r24, 0X10);
            goto L_8003646C;
    }
    // 0x80036378: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x8003637C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80036380: addiu       $t6, $t6, -0x4020
    ctx->r14 = ADD32(ctx->r14, -0X4020);
    // 0x80036384: addu        $s1, $t9, $t6
    ctx->r17 = ADD32(ctx->r25, ctx->r14);
    // 0x80036388: lw          $s5, 0x0($s1)
    ctx->r21 = MEM_W(ctx->r17, 0X0);
    // 0x8003638C: sll         $t7, $s2, 3
    ctx->r15 = S32(ctx->r18 << 3);
    // 0x80036390: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80036394: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80036398: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x8003639C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800363A0: lw          $t8, -0x674($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X674);
    // 0x800363A4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800363A8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800363AC: addu        $a0, $a0, $s4
    ctx->r4 = ADD32(ctx->r4, ctx->r20);
    // 0x800363B0: lw          $a0, -0x5F4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5F4);
    // 0x800363B4: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x800363B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800363BC: jal         0x80015784
    // 0x800363C0: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    func_80015784(rdram, ctx);
        goto after_14;
    // 0x800363C0: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    after_14:
    // 0x800363C4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x800363C8: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x800363CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800363D0: jal         0x80014B64
    // 0x800363D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_15;
    // 0x800363D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_15:
    // 0x800363D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800363DC: jal         0x80014AC4
    // 0x800363E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_16;
    // 0x800363E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_16:
    // 0x800363E4: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x800363E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800363EC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x800363F0: jal         0x80015898
    // 0x800363F4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80015898(rdram, ctx);
        goto after_17;
    // 0x800363F4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_17:
    // 0x800363F8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800363FC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80036400: jal         0x80015950
    // 0x80036404: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_18;
    // 0x80036404: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_18:
    // 0x80036408: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8003640C: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x80036410: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80036414: jal         0x800157C8
    // 0x80036418: nop

    func_800157C8(rdram, ctx);
        goto after_19;
    // 0x80036418: nop

    after_19:
    // 0x8003641C: lw          $t9, 0xC8($s3)
    ctx->r25 = MEM_W(ctx->r19, 0XC8);
    // 0x80036420: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80036424: andi        $t6, $t9, 0x2
    ctx->r14 = ctx->r25 & 0X2;
    // 0x80036428: beq         $t6, $zero, L_80036450
    if (ctx->r14 == 0) {
        // 0x8003642C: nop
    
            goto L_80036450;
    }
    // 0x8003642C: nop

    // 0x80036430: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80036434: jal         0x80015950
    // 0x80036438: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_20;
    // 0x80036438: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_20:
    // 0x8003643C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80036440: jal         0x80014A7C
    // 0x80036444: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    func_80014A7C(rdram, ctx);
        goto after_21;
    // 0x80036444: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_21:
    // 0x80036448: b           L_8003645C
    // 0x8003644C: nop

        goto L_8003645C;
    // 0x8003644C: nop

L_80036450:
    // 0x80036450: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80036454: jal         0x80014A7C
    // 0x80036458: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_80014A7C(rdram, ctx);
        goto after_22;
    // 0x80036458: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_22:
L_8003645C:
    // 0x8003645C: beq         $s5, $zero, L_8003646C
    if (ctx->r21 == 0) {
        // 0x80036460: nop
    
            goto L_8003646C;
    }
    // 0x80036460: nop

    // 0x80036464: jal         0x80014BF4
    // 0x80036468: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80014BF4(rdram, ctx);
        goto after_23;
    // 0x80036468: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_23:
L_8003646C:
    // 0x8003646C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80036470: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x80036474: bne         $s2, $s7, L_80036358
    if (ctx->r18 != ctx->r23) {
        // 0x80036478: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_80036358;
    }
    // 0x80036478: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
L_8003647C:
    // 0x8003647C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80036480: lw          $t7, -0x415C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X415C);
    // 0x80036484: nop

    // 0x80036488: bltz        $t7, L_8003649C
    if (SIGNED(ctx->r15) < 0) {
        // 0x8003648C: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_8003649C;
    }
    // 0x8003648C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80036490: jal         0x80034A88
    // 0x80036494: nop

    func_80034A88(rdram, ctx);
        goto after_24;
    // 0x80036494: nop

    after_24:
    // 0x80036498: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
L_8003649C:
    // 0x8003649C: sw          $t8, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r24;
    // 0x800364A0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800364A4: sw          $t8, -0x6E4($at)
    MEM_W(-0X6E4, ctx->r1) = ctx->r24;
    // 0x800364A8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800364AC: lw          $t6, -0x6E4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X6E4);
    // 0x800364B0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800364B4: sw          $t6, -0x6E8($at)
    MEM_W(-0X6E8, ctx->r1) = ctx->r14;
L_800364B8:
    // 0x800364B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800364BC:
    // 0x800364BC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x800364C0: jr          $ra
    // 0x800364C4: nop

    return;
    // 0x800364C4: nop

    // 0x800364C8: jr          $ra
    // 0x800364CC: nop

    return;
    // 0x800364CC: nop

;}
RECOMP_FUNC void func_800364D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800364D0: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x800364D4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800364D8: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x800364DC: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x800364E0: lui         $at, 0x4224
    ctx->r1 = S32(0X4224 << 16);
    // 0x800364E4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800364E8: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x800364EC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800364F0: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x800364F4: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x800364F8: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x800364FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036500: addiu       $s3, $zero, 0x9
    ctx->r19 = ADD32(0, 0X9);
    // 0x80036504: addiu       $s6, $s6, -0x3F70
    ctx->r22 = ADD32(ctx->r22, -0X3F70);
    // 0x80036508: addiu       $s4, $s4, -0x4298
    ctx->r20 = ADD32(ctx->r20, -0X4298);
    // 0x8003650C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80036510: addiu       $fp, $zero, 0x4
    ctx->r30 = ADD32(0, 0X4);
    // 0x80036514: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80036518: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_8003651C:
    // 0x8003651C: lw          $t6, 0x4($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X4);
    // 0x80036520: sll         $t7, $s3, 2
    ctx->r15 = S32(ctx->r19 << 2);
    // 0x80036524: beq         $t6, $zero, L_80036618
    if (ctx->r14 == 0) {
        // 0x80036528: sll         $t8, $s2, 3
        ctx->r24 = S32(ctx->r18 << 3);
            goto L_80036618;
    }
    // 0x80036528: sll         $t8, $s2, 3
    ctx->r24 = S32(ctx->r18 << 3);
    // 0x8003652C: addu        $s1, $s6, $t7
    ctx->r17 = ADD32(ctx->r22, ctx->r15);
    // 0x80036530: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80036534: lw          $s5, 0x0($s1)
    ctx->r21 = MEM_W(ctx->r17, 0X0);
    // 0x80036538: addiu       $t9, $t9, -0x4F4
    ctx->r25 = ADD32(ctx->r25, -0X4F4);
    // 0x8003653C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x80036540: bne         $s7, $s2, L_800365AC
    if (ctx->r23 != ctx->r18) {
        // 0x80036544: addu        $v0, $t8, $t9
        ctx->r2 = ADD32(ctx->r24, ctx->r25);
            goto L_800365AC;
    }
    // 0x80036544: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x80036548: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8003654C: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80036550: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x80036554: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x80036558: cvt.s.w     $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8003655C: addiu       $a0, $zero, 0x920
    ctx->r4 = ADD32(0, 0X920);
    // 0x80036560: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80036564: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80036568: jal         0x80015784
    // 0x8003656C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_0;
    // 0x8003656C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80036570: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80036574: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80036578: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8003657C: jal         0x80014B64
    // 0x80036580: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_1;
    // 0x80036580: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80036584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80036588: jal         0x80014AC4
    // 0x8003658C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_2;
    // 0x8003658C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
    // 0x80036590: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x80036594: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80036598: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x8003659C: jal         0x800157C8
    // 0x800365A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800157C8(rdram, ctx);
        goto after_3;
    // 0x800365A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800365A4: b           L_80036608
    // 0x800365A8: nop

        goto L_80036608;
    // 0x800365A8: nop

L_800365AC:
    // 0x800365AC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800365B0: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x800365B4: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x800365B8: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x800365BC: cvt.s.w     $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800365C0: addiu       $a0, $zero, 0x921
    ctx->r4 = ADD32(0, 0X921);
    // 0x800365C4: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x800365C8: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800365CC: jal         0x80015784
    // 0x800365D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_4;
    // 0x800365D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x800365D4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x800365D8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x800365DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800365E0: jal         0x80014B64
    // 0x800365E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_5;
    // 0x800365E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x800365E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800365EC: jal         0x80014AC4
    // 0x800365F0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_6;
    // 0x800365F0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_6:
    // 0x800365F4: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x800365F8: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x800365FC: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x80036600: jal         0x800157C8
    // 0x80036604: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800157C8(rdram, ctx);
        goto after_7;
    // 0x80036604: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_80036608:
    // 0x80036608: beq         $s5, $zero, L_80036618
    if (ctx->r21 == 0) {
        // 0x8003660C: nop
    
            goto L_80036618;
    }
    // 0x8003660C: nop

    // 0x80036610: jal         0x80014BF4
    // 0x80036614: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80014BF4(rdram, ctx);
        goto after_8;
    // 0x80036614: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_8:
L_80036618:
    // 0x80036618: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8003661C: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x80036620: bne         $s2, $fp, L_8003651C
    if (ctx->r18 != ctx->r30) {
        // 0x80036624: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_8003651C;
    }
    // 0x80036624: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80036628: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x8003662C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x80036630: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80036634: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x80036638: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8003663C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80036640: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x80036644: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80036648: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003664C: lwc1        $f23, 0x5A40($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X5A40);
    // 0x80036650: lwc1        $f22, 0x5A44($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X5A44);
    // 0x80036654: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80036658: addiu       $s6, $zero, 0x1E
    ctx->r22 = ADD32(0, 0X1E);
    // 0x8003665C: addiu       $s5, $zero, 0x3C
    ctx->r21 = ADD32(0, 0X3C);
    // 0x80036660: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
L_80036664:
    // 0x80036664: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80036668: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8003666C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80036670: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80036674: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80036678: addiu       $s3, $zero, 0x9
    ctx->r19 = ADD32(0, 0X9);
    // 0x8003667C: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80036680: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x80036684: bc1f        L_800366A0
    if (!c1cs) {
        // 0x80036688: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_800366A0;
    }
    // 0x80036688: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8003668C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80036690: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80036694: nop

    // 0x80036698: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8003669C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
L_800366A0:
    // 0x800366A0: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800366A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800366A8: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800366AC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800366B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800366B4: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x800366B8: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x800366BC: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x800366C0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x800366C4: bc1f        L_800366E0
    if (!c1cs) {
        // 0x800366C8: addiu       $s4, $s4, -0x4298
        ctx->r20 = ADD32(ctx->r20, -0X4298);
            goto L_800366E0;
    }
    // 0x800366C8: addiu       $s4, $s4, -0x4298
    ctx->r20 = ADD32(ctx->r20, -0X4298);
    // 0x800366CC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800366D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800366D4: nop

    // 0x800366D8: sub.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x800366DC: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
L_800366E0:
    // 0x800366E0: lw          $t6, 0x4($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X4);
    // 0x800366E4: sll         $t7, $s3, 2
    ctx->r15 = S32(ctx->r19 << 2);
    // 0x800366E8: beq         $t6, $zero, L_8003685C
    if (ctx->r14 == 0) {
        // 0x800366EC: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_8003685C;
    }
    // 0x800366EC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x800366F0: addiu       $t8, $t8, -0x3F70
    ctx->r24 = ADD32(ctx->r24, -0X3F70);
    // 0x800366F4: bne         $s7, $s2, L_80036814
    if (ctx->r23 != ctx->r18) {
        // 0x800366F8: addu        $s1, $t7, $t8
        ctx->r17 = ADD32(ctx->r15, ctx->r24);
            goto L_80036814;
    }
    // 0x800366F8: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
    // 0x800366FC: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
    // 0x80036700: beq         $at, $zero, L_80036768
    if (ctx->r1 == 0) {
        // 0x80036704: slti        $at, $s0, 0xF
        ctx->r1 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
            goto L_80036768;
    }
    // 0x80036704: slti        $at, $s0, 0xF
    ctx->r1 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x80036708: beq         $at, $zero, L_8003673C
    if (ctx->r1 == 0) {
        // 0x8003670C: subu        $t9, $s6, $s0
        ctx->r25 = SUB32(ctx->r22, ctx->r16);
            goto L_8003673C;
    }
    // 0x8003670C: subu        $t9, $s6, $s0
    ctx->r25 = SUB32(ctx->r22, ctx->r16);
    // 0x80036710: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x80036714: nop

    // 0x80036718: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8003671C: nop

    // 0x80036720: div.s       $f10, $f4, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f26.fl);
    // 0x80036724: mul.s       $f8, $f10, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x80036728: sub.s       $f6, $f24, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f24.fl - ctx->f8.fl;
    // 0x8003672C: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x80036730: mul.d       $f10, $f4, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f22.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f22.d);
    // 0x80036734: b           L_800367CC
    // 0x80036738: cvt.s.d     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f20.fl = CVT_S_D(ctx->f10.d);
        goto L_800367CC;
    // 0x80036738: cvt.s.d     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f20.fl = CVT_S_D(ctx->f10.d);
L_8003673C:
    // 0x8003673C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80036740: nop

    // 0x80036744: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80036748: nop

    // 0x8003674C: div.s       $f4, $f6, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f26.fl);
    // 0x80036750: mul.s       $f10, $f4, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x80036754: sub.s       $f8, $f24, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f24.fl - ctx->f10.fl;
    // 0x80036758: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x8003675C: mul.d       $f4, $f6, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f22.d);
    // 0x80036760: b           L_800367CC
    // 0x80036764: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
        goto L_800367CC;
    // 0x80036764: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
L_80036768:
    // 0x80036768: slti        $at, $s0, 0x2D
    ctx->r1 = SIGNED(ctx->r16) < 0X2D ? 1 : 0;
    // 0x8003676C: beq         $at, $zero, L_800367A4
    if (ctx->r1 == 0) {
        // 0x80036770: subu        $t7, $s5, $s0
        ctx->r15 = SUB32(ctx->r21, ctx->r16);
            goto L_800367A4;
    }
    // 0x80036770: subu        $t7, $s5, $s0
    ctx->r15 = SUB32(ctx->r21, ctx->r16);
    // 0x80036774: addiu       $t6, $s0, -0x1E
    ctx->r14 = ADD32(ctx->r16, -0X1E);
    // 0x80036778: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8003677C: nop

    // 0x80036780: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80036784: nop

    // 0x80036788: div.s       $f6, $f8, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f26.fl);
    // 0x8003678C: mul.s       $f4, $f6, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f28.fl);
    // 0x80036790: sub.s       $f10, $f24, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f24.fl - ctx->f4.fl;
    // 0x80036794: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x80036798: mul.d       $f6, $f8, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f22.d); 
    ctx->f6.d = MUL_D(ctx->f8.d, ctx->f22.d);
    // 0x8003679C: b           L_800367CC
    // 0x800367A0: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
        goto L_800367CC;
    // 0x800367A0: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
L_800367A4:
    // 0x800367A4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800367A8: nop

    // 0x800367AC: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800367B0: nop

    // 0x800367B4: div.s       $f8, $f10, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f26.fl);
    // 0x800367B8: mul.s       $f6, $f8, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f28.fl);
    // 0x800367BC: sub.s       $f4, $f24, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f24.fl - ctx->f6.fl;
    // 0x800367C0: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x800367C4: mul.d       $f8, $f10, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f22.d);
    // 0x800367C8: cvt.s.d     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f20.fl = CVT_S_D(ctx->f8.d);
L_800367CC:
    // 0x800367CC: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800367D0: jal         0x80028C00
    // 0x800367D4: nop

    func_80028C00(rdram, ctx);
        goto after_9;
    // 0x800367D4: nop

    after_9:
    // 0x800367D8: mul.s       $f6, $f0, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x800367DC: lui         $at, 0x3F60
    ctx->r1 = S32(0X3F60 << 16);
    // 0x800367E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800367E4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800367E8: add.s       $f2, $f6, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x800367EC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x800367F0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x800367F4: jal         0x80014B38
    // 0x800367F8: nop

    func_80014B38(rdram, ctx);
        goto after_10;
    // 0x800367F8: nop

    after_10:
    // 0x800367FC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80036800: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80036804: jal         0x80014AA4
    // 0x80036808: nop

    func_80014AA4(rdram, ctx);
        goto after_11;
    // 0x80036808: nop

    after_11:
    // 0x8003680C: b           L_80036860
    // 0x80036810: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_80036860;
    // 0x80036810: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80036814:
    // 0x80036814: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80036818: jal         0x80028C00
    // 0x8003681C: nop

    func_80028C00(rdram, ctx);
        goto after_12;
    // 0x8003681C: nop

    after_12:
    // 0x80036820: mul.s       $f8, $f0, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x80036824: lui         $at, 0x3F60
    ctx->r1 = S32(0X3F60 << 16);
    // 0x80036828: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8003682C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80036830: jal         0x80028C00
    // 0x80036834: sub.s       $f20, $f10, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f8.fl;
    func_80028C00(rdram, ctx);
        goto after_13;
    // 0x80036834: sub.s       $f20, $f10, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f8.fl;
    after_13:
    // 0x80036838: mul.s       $f6, $f0, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x8003683C: lui         $at, 0x3F60
    ctx->r1 = S32(0X3F60 << 16);
    // 0x80036840: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80036844: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80036848: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8003684C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80036850: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80036854: jal         0x80014B38
    // 0x80036858: nop

    func_80014B38(rdram, ctx);
        goto after_14;
    // 0x80036858: nop

    after_14:
L_8003685C:
    // 0x8003685C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80036860:
    // 0x80036860: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x80036864: bne         $s2, $fp, L_800366E0
    if (ctx->r18 != ctx->r30) {
        // 0x80036868: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_800366E0;
    }
    // 0x80036868: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8003686C: jal         0x80007AB0
    // 0x80036870: nop

    func_80007AB0(rdram, ctx);
        goto after_15;
    // 0x80036870: nop

    after_15:
    // 0x80036874: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80036878: bne         $s0, $s5, L_80036664
    if (ctx->r16 != ctx->r21) {
        // 0x8003687C: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_80036664;
    }
    // 0x8003687C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80036880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036884: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80036888: jr          $ra
    // 0x8003688C: nop

    return;
    // 0x8003688C: nop

;}
RECOMP_FUNC void func_80036890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036890: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80036894: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x80036898: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003689C: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x800368A0: beq         $t7, $zero, L_800368C0
    if (ctx->r15 == 0) {
        // 0x800368A4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800368C0;
    }
    // 0x800368A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800368A8: jal         0x800364D0
    // 0x800368AC: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    func_800364D0(rdram, ctx);
        goto after_0;
    // 0x800368AC: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    after_0:
    // 0x800368B0: lw          $s7, 0x18($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X18);
    // 0x800368B4: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x800368B8: b           L_80036C84
    // 0x800368BC: addiu       $s5, $s5, -0x4298
    ctx->r21 = ADD32(ctx->r21, -0X4298);
        goto L_80036C84;
    // 0x800368BC: addiu       $s5, $s5, -0x4298
    ctx->r21 = ADD32(ctx->r21, -0X4298);
L_800368C0:
    // 0x800368C0: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x800368C4: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x800368C8: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x800368CC: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x800368D0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800368D4: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x800368D8: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800368DC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x800368E0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800368E4: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x800368E8: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x800368EC: lwc1        $f22, 0x5A48($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X5A48);
    // 0x800368F0: addiu       $s5, $s5, -0x4298
    ctx->r21 = ADD32(ctx->r21, -0X4298);
    // 0x800368F4: addiu       $fp, $fp, -0x3F70
    ctx->r30 = ADD32(ctx->r30, -0X3F70);
    // 0x800368F8: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x800368FC: addiu       $s0, $zero, 0x9
    ctx->r16 = ADD32(0, 0X9);
    // 0x80036900: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
L_80036904:
    // 0x80036904: bne         $s6, $zero, L_80036B24
    if (ctx->r22 != 0) {
        // 0x80036908: slti        $at, $s6, 0xF
        ctx->r1 = SIGNED(ctx->r22) < 0XF ? 1 : 0;
            goto L_80036B24;
    }
    // 0x80036908: slti        $at, $s6, 0xF
    ctx->r1 = SIGNED(ctx->r22) < 0XF ? 1 : 0;
    // 0x8003690C: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80036910: addiu       $s1, $s1, -0x3F4C
    ctx->r17 = ADD32(ctx->r17, -0X3F4C);
    // 0x80036914: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80036918:
    // 0x80036918: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x8003691C: lw          $s3, 0x0($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X0);
    // 0x80036920: beq         $s4, $t8, L_80036A08
    if (ctx->r20 == ctx->r24) {
        // 0x80036924: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_80036A08;
    }
    // 0x80036924: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x80036928: addiu       $a0, $zero, 0x922
    ctx->r4 = ADD32(0, 0X922);
    // 0x8003692C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80036930: jal         0x80015784
    // 0x80036934: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_1;
    // 0x80036934: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80036938: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x8003693C: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80036940: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80036944: jal         0x80014B64
    // 0x80036948: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_2;
    // 0x80036948: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x8003694C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80036950: jal         0x80014AC4
    // 0x80036954: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_3;
    // 0x80036954: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_3:
    // 0x80036958: bne         $s2, $zero, L_800369BC
    if (ctx->r18 != 0) {
        // 0x8003695C: sw          $s0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r16;
            goto L_800369BC;
    }
    // 0x8003695C: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x80036960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80036964: sll         $s0, $s7, 3
    ctx->r16 = S32(ctx->r23 << 3);
    // 0x80036968: addu        $s0, $s0, $s7
    ctx->r16 = ADD32(ctx->r16, ctx->r23);
    // 0x8003696C: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x80036970: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x80036974: jal         0x80015898
    // 0x80036978: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    func_80015898(rdram, ctx);
        goto after_4;
    // 0x80036978: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_4:
    // 0x8003697C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80036980: mfc1        $a1, $f30
    ctx->r5 = (int32_t)ctx->f30.u32l;
    // 0x80036984: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x80036988: jal         0x800157C8
    // 0x8003698C: nop

    func_800157C8(rdram, ctx);
        goto after_5;
    // 0x8003698C: nop

    after_5:
    // 0x80036990: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80036994: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80036998: jal         0x80015950
    // 0x8003699C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_6;
    // 0x8003699C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x800369A0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800369A4: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x800369A8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x800369AC: jal         0x80014B38
    // 0x800369B0: nop

    func_80014B38(rdram, ctx);
        goto after_7;
    // 0x800369B0: nop

    after_7:
    // 0x800369B4: b           L_80036B00
    // 0x800369B8: nop

        goto L_80036B00;
    // 0x800369B8: nop

L_800369BC:
    // 0x800369BC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800369C0: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    // 0x800369C4: jal         0x80015898
    // 0x800369C8: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    func_80015898(rdram, ctx);
        goto after_8;
    // 0x800369C8: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_8:
    // 0x800369CC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800369D0: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x800369D4: jal         0x800157C8
    // 0x800369D8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_800157C8(rdram, ctx);
        goto after_9;
    // 0x800369D8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_9:
    // 0x800369DC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800369E0: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x800369E4: jal         0x80015950
    // 0x800369E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_10;
    // 0x800369E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x800369EC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800369F0: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x800369F4: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x800369F8: jal         0x80014B38
    // 0x800369FC: nop

    func_80014B38(rdram, ctx);
        goto after_11;
    // 0x800369FC: nop

    after_11:
    // 0x80036A00: b           L_80036B00
    // 0x80036A04: nop

        goto L_80036B00;
    // 0x80036A04: nop

L_80036A08:
    // 0x80036A08: bne         $s2, $zero, L_80036AAC
    if (ctx->r18 != 0) {
        // 0x80036A0C: addiu       $a0, $zero, 0x924
        ctx->r4 = ADD32(0, 0X924);
            goto L_80036AAC;
    }
    // 0x80036A0C: addiu       $a0, $zero, 0x924
    ctx->r4 = ADD32(0, 0X924);
    // 0x80036A10: bne         $s7, $zero, L_80036A50
    if (ctx->r23 != 0) {
        // 0x80036A14: addiu       $a0, $zero, 0x925
        ctx->r4 = ADD32(0, 0X925);
            goto L_80036A50;
    }
    // 0x80036A14: addiu       $a0, $zero, 0x925
    ctx->r4 = ADD32(0, 0X925);
    // 0x80036A18: addiu       $a0, $zero, 0x926
    ctx->r4 = ADD32(0, 0X926);
    // 0x80036A1C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80036A20: jal         0x80015784
    // 0x80036A24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_12;
    // 0x80036A24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x80036A28: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x80036A2C: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80036A30: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80036A34: jal         0x80014B64
    // 0x80036A38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_13;
    // 0x80036A38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_13:
    // 0x80036A3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80036A40: jal         0x80014AC4
    // 0x80036A44: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_14;
    // 0x80036A44: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_14:
    // 0x80036A48: b           L_80036A80
    // 0x80036A4C: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
        goto L_80036A80;
    // 0x80036A4C: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
L_80036A50:
    // 0x80036A50: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80036A54: jal         0x80015784
    // 0x80036A58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_15;
    // 0x80036A58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x80036A5C: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x80036A60: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80036A64: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80036A68: jal         0x80014B64
    // 0x80036A6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_16;
    // 0x80036A6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_16:
    // 0x80036A70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80036A74: jal         0x80014AC4
    // 0x80036A78: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_17;
    // 0x80036A78: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_17:
    // 0x80036A7C: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
L_80036A80:
    // 0x80036A80: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80036A84: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x80036A88: jal         0x800157C8
    // 0x80036A8C: lui         $a2, 0x4200
    ctx->r6 = S32(0X4200 << 16);
    func_800157C8(rdram, ctx);
        goto after_18;
    // 0x80036A8C: lui         $a2, 0x4200
    ctx->r6 = S32(0X4200 << 16);
    after_18:
    // 0x80036A90: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80036A94: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x80036A98: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80036A9C: jal         0x80014B38
    // 0x80036AA0: nop

    func_80014B38(rdram, ctx);
        goto after_19;
    // 0x80036AA0: nop

    after_19:
    // 0x80036AA4: b           L_80036B00
    // 0x80036AA8: nop

        goto L_80036B00;
    // 0x80036AA8: nop

L_80036AAC:
    // 0x80036AAC: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80036AB0: jal         0x80015784
    // 0x80036AB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_20;
    // 0x80036AB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_20:
    // 0x80036AB8: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x80036ABC: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80036AC0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80036AC4: jal         0x80014B64
    // 0x80036AC8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_21;
    // 0x80036AC8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_21:
    // 0x80036ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80036AD0: jal         0x80014AC4
    // 0x80036AD4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_22;
    // 0x80036AD4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_22:
    // 0x80036AD8: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x80036ADC: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x80036AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80036AE4: jal         0x800157C8
    // 0x80036AE8: lui         $a2, 0xC080
    ctx->r6 = S32(0XC080 << 16);
    func_800157C8(rdram, ctx);
        goto after_23;
    // 0x80036AE8: lui         $a2, 0xC080
    ctx->r6 = S32(0XC080 << 16);
    after_23:
    // 0x80036AEC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80036AF0: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x80036AF4: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80036AF8: jal         0x80014B38
    // 0x80036AFC: nop

    func_80014B38(rdram, ctx);
        goto after_24;
    // 0x80036AFC: nop

    after_24:
L_80036B00:
    // 0x80036B00: beq         $s3, $zero, L_80036B10
    if (ctx->r19 == 0) {
        // 0x80036B04: nop
    
            goto L_80036B10;
    }
    // 0x80036B04: nop

    // 0x80036B08: jal         0x80014BF4
    // 0x80036B0C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80014BF4(rdram, ctx);
        goto after_25;
    // 0x80036B0C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_25:
L_80036B10:
    // 0x80036B10: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80036B14: bne         $s2, $s4, L_80036918
    if (ctx->r18 != ctx->r20) {
        // 0x80036B18: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80036918;
    }
    // 0x80036B18: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80036B1C: b           L_80036C44
    // 0x80036B20: addiu       $s0, $zero, 0x9
    ctx->r16 = ADD32(0, 0X9);
        goto L_80036C44;
    // 0x80036B20: addiu       $s0, $zero, 0x9
    ctx->r16 = ADD32(0, 0X9);
L_80036B24:
    // 0x80036B24: beq         $at, $zero, L_80036B74
    if (ctx->r1 == 0) {
        // 0x80036B28: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_80036B74;
    }
    // 0x80036B28: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80036B2C: addiu       $t6, $s6, 0x1
    ctx->r14 = ADD32(ctx->r22, 0X1);
    // 0x80036B30: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80036B34: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80036B38: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80036B3C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80036B40: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x80036B44: addu        $s1, $fp, $t9
    ctx->r17 = ADD32(ctx->r30, ctx->r25);
    // 0x80036B48: div.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
L_80036B4C:
    // 0x80036B4C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80036B50: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80036B54: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80036B58: jal         0x80014B38
    // 0x80036B5C: nop

    func_80014B38(rdram, ctx);
        goto after_26;
    // 0x80036B5C: nop

    after_26:
    // 0x80036B60: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80036B64: bne         $s2, $s4, L_80036B4C
    if (ctx->r18 != ctx->r20) {
        // 0x80036B68: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80036B4C;
    }
    // 0x80036B68: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80036B6C: b           L_80036C44
    // 0x80036B70: addiu       $s0, $zero, 0x9
    ctx->r16 = ADD32(0, 0X9);
        goto L_80036C44;
    // 0x80036B70: addiu       $s0, $zero, 0x9
    ctx->r16 = ADD32(0, 0X9);
L_80036B74:
    // 0x80036B74: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80036B78: bne         $s6, $at, L_80036C00
    if (ctx->r22 != ctx->r1) {
        // 0x80036B7C: addiu       $a0, $zero, 0x920
        ctx->r4 = ADD32(0, 0X920);
            goto L_80036C00;
    }
    // 0x80036B7C: addiu       $a0, $zero, 0x920
    ctx->r4 = ADD32(0, 0X920);
    // 0x80036B80: addiu       $s0, $zero, 0xB
    ctx->r16 = ADD32(0, 0XB);
    // 0x80036B84: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x80036B88: addu        $s1, $fp, $t7
    ctx->r17 = ADD32(ctx->r30, ctx->r15);
    // 0x80036B8C: lw          $s3, 0x0($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X0);
    // 0x80036B90: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x80036B94: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80036B98: jal         0x80015784
    // 0x80036B9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_27;
    // 0x80036B9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_27:
    // 0x80036BA0: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80036BA4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80036BA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80036BAC: jal         0x80014B64
    // 0x80036BB0: lui         $a1, 0x4352
    ctx->r5 = S32(0X4352 << 16);
    func_80014B64(rdram, ctx);
        goto after_28;
    // 0x80036BB0: lui         $a1, 0x4352
    ctx->r5 = S32(0X4352 << 16);
    after_28:
    // 0x80036BB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80036BB8: jal         0x80014AC4
    // 0x80036BBC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_29;
    // 0x80036BBC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_29:
    // 0x80036BC0: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x80036BC4: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x80036BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80036BCC: jal         0x800157C8
    // 0x80036BD0: lui         $a1, 0x4224
    ctx->r5 = S32(0X4224 << 16);
    func_800157C8(rdram, ctx);
        goto after_30;
    // 0x80036BD0: lui         $a1, 0x4224
    ctx->r5 = S32(0X4224 << 16);
    after_30:
    // 0x80036BD4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80036BD8: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x80036BDC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80036BE0: jal         0x80014B38
    // 0x80036BE4: nop

    func_80014B38(rdram, ctx);
        goto after_31;
    // 0x80036BE4: nop

    after_31:
    // 0x80036BE8: beq         $s3, $zero, L_80036BF8
    if (ctx->r19 == 0) {
        // 0x80036BEC: nop
    
            goto L_80036BF8;
    }
    // 0x80036BEC: nop

    // 0x80036BF0: jal         0x80014BF4
    // 0x80036BF4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80014BF4(rdram, ctx);
        goto after_32;
    // 0x80036BF4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_32:
L_80036BF8:
    // 0x80036BF8: b           L_80036C44
    // 0x80036BFC: addiu       $s0, $zero, 0x9
    ctx->r16 = ADD32(0, 0X9);
        goto L_80036C44;
    // 0x80036BFC: addiu       $s0, $zero, 0x9
    ctx->r16 = ADD32(0, 0X9);
L_80036C00:
    // 0x80036C00: slti        $at, $s6, 0x1E
    ctx->r1 = SIGNED(ctx->r22) < 0X1E ? 1 : 0;
    // 0x80036C04: beq         $at, $zero, L_80036C44
    if (ctx->r1 == 0) {
        // 0x80036C08: addiu       $t6, $s6, -0xE
        ctx->r14 = ADD32(ctx->r22, -0XE);
            goto L_80036C44;
    }
    // 0x80036C08: addiu       $t6, $s6, -0xE
    ctx->r14 = ADD32(ctx->r22, -0XE);
    // 0x80036C0C: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80036C10: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80036C14: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80036C18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80036C1C: addiu       $s0, $zero, 0xB
    ctx->r16 = ADD32(0, 0XB);
    // 0x80036C20: div.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80036C24: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x80036C28: addu        $t9, $fp, $t8
    ctx->r25 = ADD32(ctx->r30, ctx->r24);
    // 0x80036C2C: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80036C30: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80036C34: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80036C38: jal         0x80014B38
    // 0x80036C3C: nop

    func_80014B38(rdram, ctx);
        goto after_33;
    // 0x80036C3C: nop

    after_33:
    // 0x80036C40: addiu       $s0, $zero, 0x9
    ctx->r16 = ADD32(0, 0X9);
L_80036C44:
    // 0x80036C44: jal         0x80007AB0
    // 0x80036C48: addiu       $s1, $s6, 0x1
    ctx->r17 = ADD32(ctx->r22, 0X1);
    func_80007AB0(rdram, ctx);
        goto after_34;
    // 0x80036C48: addiu       $s1, $s6, 0x1
    ctx->r17 = ADD32(ctx->r22, 0X1);
    after_34:
    // 0x80036C4C: slti        $at, $s1, 0x3C
    ctx->r1 = SIGNED(ctx->r17) < 0X3C ? 1 : 0;
    // 0x80036C50: bne         $at, $zero, L_80036904
    if (ctx->r1 != 0) {
        // 0x80036C54: or          $s6, $s1, $zero
        ctx->r22 = ctx->r17 | 0;
            goto L_80036904;
    }
    // 0x80036C54: or          $s6, $s1, $zero
    ctx->r22 = ctx->r17 | 0;
    // 0x80036C58: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80036C5C: addiu       $s1, $s1, -0x3F4C
    ctx->r17 = ADD32(ctx->r17, -0X3F4C);
    // 0x80036C60: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80036C64: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
L_80036C68:
    // 0x80036C68: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80036C6C: jal         0x80014BF4
    // 0x80036C70: nop

    func_80014BF4(rdram, ctx);
        goto after_35;
    // 0x80036C70: nop

    after_35:
    // 0x80036C74: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80036C78: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80036C7C: bne         $s2, $s0, L_80036C68
    if (ctx->r18 != ctx->r16) {
        // 0x80036C80: sw          $zero, -0x4($s1)
        MEM_W(-0X4, ctx->r17) = 0;
            goto L_80036C68;
    }
    // 0x80036C80: sw          $zero, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = 0;
L_80036C84:
    // 0x80036C84: sll         $t7, $s7, 2
    ctx->r15 = S32(ctx->r23 << 2);
    // 0x80036C88: addu        $v0, $s5, $t7
    ctx->r2 = ADD32(ctx->r21, ctx->r15);
    // 0x80036C8C: lw          $t8, 0xB8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XB8);
    // 0x80036C90: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80036C94: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x80036C98: sw          $t6, 0xB8($v0)
    MEM_W(0XB8, ctx->r2) = ctx->r14;
    // 0x80036C9C: lw          $t7, 0x24($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X24);
    // 0x80036CA0: nop

    // 0x80036CA4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80036CA8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80036CAC: lw          $t9, -0x4170($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4170);
    // 0x80036CB0: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80036CB4: bne         $t6, $t9, L_80036CD0
    if (ctx->r14 != ctx->r25) {
        // 0x80036CB8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80036CD0;
    }
    // 0x80036CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036CBC: lw          $t7, -0x42C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X42C0);
    // 0x80036CC0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80036CC4: ori         $t8, $t7, 0x100
    ctx->r24 = ctx->r15 | 0X100;
    // 0x80036CC8: sw          $t8, -0x42C0($at)
    MEM_W(-0X42C0, ctx->r1) = ctx->r24;
    // 0x80036CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80036CD0:
    // 0x80036CD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036CD4: jr          $ra
    // 0x80036CD8: nop

    return;
    // 0x80036CD8: nop

;}
RECOMP_FUNC void func_80036CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036CDC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80036CE0: addiu       $v0, $v0, -0x3F70
    ctx->r2 = ADD32(ctx->r2, -0X3F70);
    // 0x80036CE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036CE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036CEC: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80036CF0: lw          $s1, 0x8($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X8);
    // 0x80036CF4: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x80036CF8: addiu       $a0, $zero, 0x91E
    ctx->r4 = ADD32(0, 0X91E);
    // 0x80036CFC: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80036D00: jal         0x80015784
    // 0x80036D04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_0;
    // 0x80036D04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80036D08: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80036D0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80036D10: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    // 0x80036D14: jal         0x80014B64
    // 0x80036D18: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    func_80014B64(rdram, ctx);
        goto after_1;
    // 0x80036D18: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    after_1:
    // 0x80036D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80036D20: jal         0x80014AC4
    // 0x80036D24: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_2;
    // 0x80036D24: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
    // 0x80036D28: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80036D2C: sw          $s0, -0x3F68($at)
    MEM_W(-0X3F68, ctx->r1) = ctx->r16;
    // 0x80036D30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80036D34: lui         $a1, 0x42B8
    ctx->r5 = S32(0X42B8 << 16);
    // 0x80036D38: jal         0x800157C8
    // 0x80036D3C: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    func_800157C8(rdram, ctx);
        goto after_3;
    // 0x80036D3C: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    after_3:
    // 0x80036D40: beq         $s1, $zero, L_80036D50
    if (ctx->r17 == 0) {
        // 0x80036D44: nop
    
            goto L_80036D50;
    }
    // 0x80036D44: nop

    // 0x80036D48: jal         0x80014BF4
    // 0x80036D4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80014BF4(rdram, ctx);
        goto after_4;
    // 0x80036D4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
L_80036D50:
    // 0x80036D50: jal         0x80027874
    // 0x80036D54: addiu       $a0, $zero, 0x415
    ctx->r4 = ADD32(0, 0X415);
    func_80027874(rdram, ctx);
        goto after_5;
    // 0x80036D54: addiu       $a0, $zero, 0x415
    ctx->r4 = ADD32(0, 0X415);
    after_5:
    // 0x80036D58: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x80036D5C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80036D60: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80036D64: lwc1        $f24, 0x5A4C($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X5A4C);
    // 0x80036D68: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80036D6C: lwc1        $f21, 0x5A50($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X5A50);
    // 0x80036D70: lwc1        $f20, 0x5A54($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5A54);
    // 0x80036D74: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80036D78: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
    // 0x80036D7C: addiu       $s1, $zero, 0x9
    ctx->r17 = ADD32(0, 0X9);
L_80036D80:
    // 0x80036D80: add.s       $f22, $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f24.fl;
    // 0x80036D84: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80036D88: lw          $a0, -0x3F68($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3F68);
    // 0x80036D8C: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x80036D90: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80036D94: jal         0x80014B38
    // 0x80036D98: nop

    func_80014B38(rdram, ctx);
        goto after_6;
    // 0x80036D98: nop

    after_6:
    // 0x80036D9C: subu        $t6, $s1, $s0
    ctx->r14 = SUB32(ctx->r17, ctx->r16);
    // 0x80036DA0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80036DA4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80036DA8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80036DAC: lw          $a0, -0x3F68($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3F68);
    // 0x80036DB0: mul.s       $f8, $f6, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x80036DB4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80036DB8: mul.d       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f20.d);
    // 0x80036DBC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80036DC0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80036DC4: jal         0x80014AA4
    // 0x80036DC8: nop

    func_80014AA4(rdram, ctx);
        goto after_7;
    // 0x80036DC8: nop

    after_7:
    // 0x80036DCC: jal         0x80007AB0
    // 0x80036DD0: nop

    func_80007AB0(rdram, ctx);
        goto after_8;
    // 0x80036DD0: nop

    after_8:
    // 0x80036DD4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80036DD8: bne         $s0, $s2, L_80036D80
    if (ctx->r16 != ctx->r18) {
        // 0x80036DDC: nop
    
            goto L_80036D80;
    }
    // 0x80036DDC: nop

    // 0x80036DE0: jal         0x8000797C
    // 0x80036DE4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_8000797C(rdram, ctx);
        goto after_9;
    // 0x80036DE4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_9:
    // 0x80036DE8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80036DEC: lw          $a0, -0x3F68($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3F68);
    // 0x80036DF0: jal         0x80014BF4
    // 0x80036DF4: nop

    func_80014BF4(rdram, ctx);
        goto after_10;
    // 0x80036DF4: nop

    after_10:
    // 0x80036DF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036DFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80036E00: sw          $zero, -0x3F68($at)
    MEM_W(-0X3F68, ctx->r1) = 0;
    // 0x80036E04: jr          $ra
    // 0x80036E08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80036E08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80036E0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036E0C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80036E10: addiu       $s0, $s0, -0x3DCC
    ctx->r16 = ADD32(ctx->r16, -0X3DCC);
    // 0x80036E14: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80036E18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036E1C: beq         $a0, $zero, L_80036E50
    if (ctx->r4 == 0) {
        // 0x80036E20: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80036E50;
    }
    // 0x80036E20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036E24: jal         0x800075A0
    // 0x80036E28: nop

    func_800075A0(rdram, ctx);
        goto after_0;
    // 0x80036E28: nop

    after_0:
    // 0x80036E2C: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80036E30: addiu       $s1, $s1, -0x3F70
    ctx->r17 = ADD32(ctx->r17, -0X3F70);
    // 0x80036E34: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x80036E38: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80036E3C: beq         $a0, $zero, L_80036E54
    if (ctx->r4 == 0) {
        // 0x80036E40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80036E54;
    }
    // 0x80036E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036E44: jal         0x80014BF4
    // 0x80036E48: nop

    func_80014BF4(rdram, ctx);
        goto after_1;
    // 0x80036E48: nop

    after_1:
    // 0x80036E4C: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
L_80036E50:
    // 0x80036E50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80036E54:
    // 0x80036E54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036E58: jr          $ra
    // 0x80036E5C: nop

    return;
    // 0x80036E5C: nop

;}
RECOMP_FUNC void func_80036E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036E60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036E64: lui         $at, 0x41A8
    ctx->r1 = S32(0X41A8 << 16);
    // 0x80036E68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036E6C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80036E70: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80036E74: jal         0x80007AB0
    // 0x80036E78: nop

    func_80007AB0(rdram, ctx);
        goto after_0;
    // 0x80036E78: nop

    after_0:
    // 0x80036E7C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80036E80: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x80036E84: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80036E88: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80036E8C: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x80036E90: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80036E94: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80036E98: addiu       $s1, $s1, -0x3F70
    ctx->r17 = ADD32(ctx->r17, -0X3F70);
    // 0x80036E9C: addiu       $s4, $zero, 0x62
    ctx->r20 = ADD32(0, 0X62);
    // 0x80036EA0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80036EA4: addiu       $s5, $zero, 0xC4
    ctx->r21 = ADD32(0, 0XC4);
L_80036EA8:
    // 0x80036EA8: lw          $s3, 0x0($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X0);
    // 0x80036EAC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x80036EB0: addiu       $a0, $zero, 0x91F
    ctx->r4 = ADD32(0, 0X91F);
    // 0x80036EB4: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80036EB8: jal         0x80015784
    // 0x80036EBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_1;
    // 0x80036EBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80036EC0: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x80036EC4: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x80036EC8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80036ECC: jal         0x80014B64
    // 0x80036ED0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_2;
    // 0x80036ED0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80036ED4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80036ED8: jal         0x80014AC4
    // 0x80036EDC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_3;
    // 0x80036EDC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_3:
    // 0x80036EE0: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x80036EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80036EE8: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
    // 0x80036EEC: jal         0x80015898
    // 0x80036EF0: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    func_80015898(rdram, ctx);
        goto after_4;
    // 0x80036EF0: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_4:
    // 0x80036EF4: mtc1        $s4, $f4
    ctx->f4.u32l = ctx->r20;
    // 0x80036EF8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80036EFC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80036F00: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x80036F04: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80036F08: jal         0x800157C8
    // 0x80036F0C: nop

    func_800157C8(rdram, ctx);
        goto after_5;
    // 0x80036F0C: nop

    after_5:
    // 0x80036F10: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80036F14: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80036F18: jal         0x80015950
    // 0x80036F1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_6;
    // 0x80036F1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80036F20: beq         $s3, $zero, L_80036F30
    if (ctx->r19 == 0) {
        // 0x80036F24: nop
    
            goto L_80036F30;
    }
    // 0x80036F24: nop

    // 0x80036F28: jal         0x80014BF4
    // 0x80036F2C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80014BF4(rdram, ctx);
        goto after_7;
    // 0x80036F2C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_7:
L_80036F30:
    // 0x80036F30: addiu       $s2, $s2, 0x62
    ctx->r18 = ADD32(ctx->r18, 0X62);
    // 0x80036F34: addiu       $s4, $s4, -0x62
    ctx->r20 = ADD32(ctx->r20, -0X62);
    // 0x80036F38: bne         $s2, $s5, L_80036EA8
    if (ctx->r18 != ctx->r21) {
        // 0x80036F3C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80036EA8;
    }
    // 0x80036F3C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80036F40: jal         0x80027CEC
    // 0x80036F44: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    func_80027CEC(rdram, ctx);
        goto after_8;
    // 0x80036F44: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    after_8:
    // 0x80036F48: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80036F4C: lwc1        $f28, 0x5A58($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X5A58);
    // 0x80036F50: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80036F54: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80036F58: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80036F5C: lwc1        $f24, 0x5A5C($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X5A5C);
    // 0x80036F60: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80036F64: addiu       $s4, $zero, 0x3C
    ctx->r20 = ADD32(0, 0X3C);
    // 0x80036F68: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x80036F6C: slti        $at, $s3, 0x14
    ctx->r1 = SIGNED(ctx->r19) < 0X14 ? 1 : 0;
L_80036F70:
    // 0x80036F70: beq         $at, $zero, L_80036F84
    if (ctx->r1 == 0) {
        // 0x80036F74: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80036F84;
    }
    // 0x80036F74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80036F78: sub.s       $f20, $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f26.fl;
    // 0x80036F7C: b           L_80036FD0
    // 0x80036F80: add.s       $f22, $f22, $f28
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f28.fl;
        goto L_80036FD0;
    // 0x80036F80: add.s       $f22, $f22, $f28
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f28.fl;
L_80036F84:
    // 0x80036F84: slti        $at, $s3, 0x16
    ctx->r1 = SIGNED(ctx->r19) < 0X16 ? 1 : 0;
    // 0x80036F88: beq         $at, $zero, L_80036F9C
    if (ctx->r1 == 0) {
        // 0x80036F8C: slti        $at, $s3, 0x1A
        ctx->r1 = SIGNED(ctx->r19) < 0X1A ? 1 : 0;
            goto L_80036F9C;
    }
    // 0x80036F8C: slti        $at, $s3, 0x1A
    ctx->r1 = SIGNED(ctx->r19) < 0X1A ? 1 : 0;
    // 0x80036F90: b           L_80036FD0
    // 0x80036F94: sub.s       $f20, $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f24.fl;
        goto L_80036FD0;
    // 0x80036F94: sub.s       $f20, $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f24.fl;
    // 0x80036F98: slti        $at, $s3, 0x1A
    ctx->r1 = SIGNED(ctx->r19) < 0X1A ? 1 : 0;
L_80036F9C:
    // 0x80036F9C: beq         $at, $zero, L_80036FB0
    if (ctx->r1 == 0) {
        // 0x80036FA0: slti        $at, $s3, 0x1E
        ctx->r1 = SIGNED(ctx->r19) < 0X1E ? 1 : 0;
            goto L_80036FB0;
    }
    // 0x80036FA0: slti        $at, $s3, 0x1E
    ctx->r1 = SIGNED(ctx->r19) < 0X1E ? 1 : 0;
    // 0x80036FA4: b           L_80036FD0
    // 0x80036FA8: add.s       $f20, $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f24.fl;
        goto L_80036FD0;
    // 0x80036FA8: add.s       $f20, $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f24.fl;
    // 0x80036FAC: slti        $at, $s3, 0x1E
    ctx->r1 = SIGNED(ctx->r19) < 0X1E ? 1 : 0;
L_80036FB0:
    // 0x80036FB0: beq         $at, $zero, L_80036FC4
    if (ctx->r1 == 0) {
        // 0x80036FB4: slti        $at, $s3, 0x20
        ctx->r1 = SIGNED(ctx->r19) < 0X20 ? 1 : 0;
            goto L_80036FC4;
    }
    // 0x80036FB4: slti        $at, $s3, 0x20
    ctx->r1 = SIGNED(ctx->r19) < 0X20 ? 1 : 0;
    // 0x80036FB8: b           L_80036FD0
    // 0x80036FBC: sub.s       $f20, $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f24.fl;
        goto L_80036FD0;
    // 0x80036FBC: sub.s       $f20, $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f24.fl;
    // 0x80036FC0: slti        $at, $s3, 0x20
    ctx->r1 = SIGNED(ctx->r19) < 0X20 ? 1 : 0;
L_80036FC4:
    // 0x80036FC4: beq         $at, $zero, L_80036FD0
    if (ctx->r1 == 0) {
        // 0x80036FC8: nop
    
            goto L_80036FD0;
    }
    // 0x80036FC8: nop

    // 0x80036FCC: add.s       $f20, $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f24.fl;
L_80036FD0:
    // 0x80036FD0: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80036FD4: addiu       $t7, $t7, -0x3F70
    ctx->r15 = ADD32(ctx->r15, -0X3F70);
    // 0x80036FD8: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80036FDC: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    // 0x80036FE0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80036FE4:
    // 0x80036FE4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80036FE8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80036FEC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80036FF0: jal         0x80014B38
    // 0x80036FF4: nop

    func_80014B38(rdram, ctx);
        goto after_9;
    // 0x80036FF4: nop

    after_9:
    // 0x80036FF8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80036FFC: bne         $s0, $s2, L_80036FE4
    if (ctx->r16 != ctx->r18) {
        // 0x80037000: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80036FE4;
    }
    // 0x80037000: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80037004: jal         0x80007AB0
    // 0x80037008: nop

    func_80007AB0(rdram, ctx);
        goto after_10;
    // 0x80037008: nop

    after_10:
    // 0x8003700C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80037010: bne         $s3, $s4, L_80036F70
    if (ctx->r19 != ctx->r20) {
        // 0x80037014: slti        $at, $s3, 0x14
        ctx->r1 = SIGNED(ctx->r19) < 0X14 ? 1 : 0;
            goto L_80036F70;
    }
    // 0x80037014: slti        $at, $s3, 0x14
    ctx->r1 = SIGNED(ctx->r19) < 0X14 ? 1 : 0;
    // 0x80037018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003701C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037020: jr          $ra
    // 0x80037024: nop

    return;
    // 0x80037024: nop

;}
RECOMP_FUNC void func_80037028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037028: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003702C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80037030: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037034: addiu       $s0, $s0, -0x4298
    ctx->r16 = ADD32(ctx->r16, -0X4298);
    // 0x80037038: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8003703C: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
L_80037040:
    // 0x80037040: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80037044: nop

    // 0x80037048: bne         $s2, $v0, L_80037060
    if (ctx->r18 != ctx->r2) {
        // 0x8003704C: nop
    
            goto L_80037060;
    }
    // 0x8003704C: nop

    // 0x80037050: jal         0x800404CC
    // 0x80037054: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800404CC(rdram, ctx);
        goto after_0;
    // 0x80037054: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x80037058: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8003705C: nop

L_80037060:
    // 0x80037060: beq         $v0, $zero, L_80037078
    if (ctx->r2 == 0) {
        // 0x80037064: nop
    
            goto L_80037078;
    }
    // 0x80037064: nop

    // 0x80037068: jal         0x8002D000
    // 0x8003706C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8002D000(rdram, ctx);
        goto after_1;
    // 0x8003706C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80037070: jal         0x8005B510
    // 0x80037074: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8005B510(rdram, ctx);
        goto after_2;
    // 0x80037074: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
L_80037078:
    // 0x80037078: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003707C: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80037080: bne         $at, $zero, L_80037040
    if (ctx->r1 != 0) {
        // 0x80037084: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80037040;
    }
    // 0x80037084: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80037088: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8003708C: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80037090: addiu       $s1, $s1, -0x4290
    ctx->r17 = ADD32(ctx->r17, -0X4290);
    // 0x80037094: addiu       $s0, $s0, -0x4298
    ctx->r16 = ADD32(ctx->r16, -0X4298);
L_80037098:
    // 0x80037098: lw          $a0, 0x118($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X118);
    // 0x8003709C: jal         0x8005B510
    // 0x800370A0: nop

    func_8005B510(rdram, ctx);
        goto after_3;
    // 0x800370A0: nop

    after_3:
    // 0x800370A4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800370A8: bne         $s0, $s1, L_80037098
    if (ctx->r16 != ctx->r17) {
        // 0x800370AC: nop
    
            goto L_80037098;
    }
    // 0x800370AC: nop

    // 0x800370B0: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800370B4: lw          $t6, -0x4298($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4298);
    // 0x800370B8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800370BC: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x800370C0: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x800370C4: lw          $a0, -0x748($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X748);
    // 0x800370C8: jal         0x80027CEC
    // 0x800370CC: nop

    func_80027CEC(rdram, ctx);
        goto after_4;
    // 0x800370CC: nop

    after_4:
    // 0x800370D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800370D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800370D8: jr          $ra
    // 0x800370DC: nop

    return;
    // 0x800370DC: nop

;}
RECOMP_FUNC void func_800370E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800370E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800370E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800370E8: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800370EC: addiu       $a0, $a0, -0x6AE0
    ctx->r4 = ADD32(ctx->r4, -0X6AE0);
    // 0x800370F0: ori         $a1, $zero, 0xFF8F
    ctx->r5 = 0 | 0XFF8F;
    // 0x800370F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800370F8: jal         0x80007C3C
    // 0x800370FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_0;
    // 0x800370FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80037100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037104: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80037108: sw          $v0, -0x3DCC($at)
    MEM_W(-0X3DCC, ctx->r1) = ctx->r2;
    // 0x8003710C: jr          $ra
    // 0x80037110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80037110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80037114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037118: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003711C: jal         0x80027874
    // 0x80037120: addiu       $a0, $zero, 0x35E
    ctx->r4 = ADD32(0, 0X35E);
    func_80027874(rdram, ctx);
        goto after_0;
    // 0x80037120: addiu       $a0, $zero, 0x35E
    ctx->r4 = ADD32(0, 0X35E);
    after_0:
    // 0x80037124: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80037128: lwc1        $f28, 0x5A60($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X5A60);
    // 0x8003712C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80037130: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80037134: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80037138: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8003713C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80037140: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80037144: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x80037148: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
L_8003714C:
    // 0x8003714C: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80037150: addiu       $s1, $s1, -0x3F60
    ctx->r17 = ADD32(ctx->r17, -0X3F60);
    // 0x80037154: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80037158: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8003715C: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
L_80037160:
    // 0x80037160: lw          $s4, 0x0($s1)
    ctx->r20 = MEM_W(ctx->r17, 0X0);
    // 0x80037164: bne         $fp, $s6, L_80037214
    if (ctx->r30 != ctx->r22) {
        // 0x80037168: addiu       $a0, $zero, 0x91C
        ctx->r4 = ADD32(0, 0X91C);
            goto L_80037214;
    }
    // 0x80037168: addiu       $a0, $zero, 0x91C
    ctx->r4 = ADD32(0, 0X91C);
    // 0x8003716C: sll         $s7, $s3, 2
    ctx->r23 = S32(ctx->r19 << 2);
    // 0x80037170: addu        $s7, $s7, $s3
    ctx->r23 = ADD32(ctx->r23, ctx->r19);
    // 0x80037174: sll         $s2, $s3, 3
    ctx->r18 = S32(ctx->r19 << 3);
    // 0x80037178: addu        $s2, $s2, $s3
    ctx->r18 = ADD32(ctx->r18, ctx->r19);
    // 0x8003717C: sll         $s7, $s7, 2
    ctx->r23 = S32(ctx->r23 << 2);
    // 0x80037180: subu        $s7, $s7, $s3
    ctx->r23 = SUB32(ctx->r23, ctx->r19);
    // 0x80037184: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x80037188: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x8003718C: addiu       $s2, $s2, 0x47
    ctx->r18 = ADD32(ctx->r18, 0X47);
    // 0x80037190: sll         $s7, $s7, 1
    ctx->r23 = S32(ctx->r23 << 1);
    // 0x80037194: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80037198: jal         0x80015784
    // 0x8003719C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_1;
    // 0x8003719C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800371A0: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x800371A4: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x800371A8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800371AC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800371B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800371B4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x800371B8: jal         0x80014B64
    // 0x800371BC: nop

    func_80014B64(rdram, ctx);
        goto after_2;
    // 0x800371BC: nop

    after_2:
    // 0x800371C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800371C4: jal         0x80014AC4
    // 0x800371C8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_3;
    // 0x800371C8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_3:
    // 0x800371CC: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x800371D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800371D4: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x800371D8: jal         0x80015898
    // 0x800371DC: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    func_80015898(rdram, ctx);
        goto after_4;
    // 0x800371DC: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_4:
    // 0x800371E0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800371E4: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x800371E8: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x800371EC: jal         0x800157C8
    // 0x800371F0: nop

    func_800157C8(rdram, ctx);
        goto after_5;
    // 0x800371F0: nop

    after_5:
    // 0x800371F4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800371F8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x800371FC: jal         0x80015950
    // 0x80037200: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_6;
    // 0x80037200: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80037204: beq         $s4, $zero, L_80037218
    if (ctx->r20 == 0) {
        // 0x80037208: slt         $at, $fp, $s6
        ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r22) ? 1 : 0;
            goto L_80037218;
    }
    // 0x80037208: slt         $at, $fp, $s6
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x8003720C: jal         0x80014BF4
    // 0x80037210: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_80014BF4(rdram, ctx);
        goto after_7;
    // 0x80037210: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_7:
L_80037214:
    // 0x80037214: slt         $at, $fp, $s6
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r22) ? 1 : 0;
L_80037218:
    // 0x80037218: bne         $at, $zero, L_8003725C
    if (ctx->r1 != 0) {
        // 0x8003721C: addiu       $t6, $s5, 0xA
        ctx->r14 = ADD32(ctx->r21, 0XA);
            goto L_8003725C;
    }
    // 0x8003721C: addiu       $t6, $s5, 0xA
    ctx->r14 = ADD32(ctx->r21, 0XA);
    // 0x80037220: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80037224: slt         $at, $fp, $t6
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80037228: beq         $at, $zero, L_80037248
    if (ctx->r1 == 0) {
        // 0x8003722C: subu        $t7, $fp, $s5
        ctx->r15 = SUB32(ctx->r30, ctx->r21);
            goto L_80037248;
    }
    // 0x8003722C: subu        $t7, $fp, $s5
    ctx->r15 = SUB32(ctx->r30, ctx->r21);
    // 0x80037230: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80037234: nop

    // 0x80037238: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8003723C: mul.s       $f0, $f8, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f28.fl);
    // 0x80037240: b           L_80037250
    // 0x80037244: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
        goto L_80037250;
    // 0x80037244: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
L_80037248:
    // 0x80037248: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x8003724C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
L_80037250:
    // 0x80037250: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80037254: jal         0x80014B38
    // 0x80037258: nop

    func_80014B38(rdram, ctx);
        goto after_8;
    // 0x80037258: nop

    after_8:
L_8003725C:
    // 0x8003725C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80037260: slti        $at, $s3, 0x5
    ctx->r1 = SIGNED(ctx->r19) < 0X5 ? 1 : 0;
    // 0x80037264: addiu       $s5, $s5, 0x5
    ctx->r21 = ADD32(ctx->r21, 0X5);
    // 0x80037268: addiu       $s6, $s6, 0x5
    ctx->r22 = ADD32(ctx->r22, 0X5);
    // 0x8003726C: bne         $at, $zero, L_80037160
    if (ctx->r1 != 0) {
        // 0x80037270: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80037160;
    }
    // 0x80037270: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80037274: jal         0x80007AB0
    // 0x80037278: nop

    func_80007AB0(rdram, ctx);
        goto after_9;
    // 0x80037278: nop

    after_9:
    // 0x8003727C: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x80037280: slti        $at, $fp, 0x2D
    ctx->r1 = SIGNED(ctx->r30) < 0X2D ? 1 : 0;
    // 0x80037284: bne         $at, $zero, L_8003714C
    if (ctx->r1 != 0) {
        // 0x80037288: nop
    
            goto L_8003714C;
    }
    // 0x80037288: nop

    // 0x8003728C: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80037290: addiu       $s1, $s1, -0x3F60
    ctx->r17 = ADD32(ctx->r17, -0X3F60);
    // 0x80037294: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80037298: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_8003729C:
    // 0x8003729C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800372A0: jal         0x80014BF4
    // 0x800372A4: nop

    func_80014BF4(rdram, ctx);
        goto after_10;
    // 0x800372A4: nop

    after_10:
    // 0x800372A8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800372AC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800372B0: bne         $s3, $s0, L_8003729C
    if (ctx->r19 != ctx->r16) {
        // 0x800372B4: sw          $zero, -0x4($s1)
        MEM_W(-0X4, ctx->r17) = 0;
            goto L_8003729C;
    }
    // 0x800372B4: sw          $zero, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = 0;
    // 0x800372B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800372BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800372C0: jr          $ra
    // 0x800372C4: nop

    return;
    // 0x800372C4: nop

;}
RECOMP_FUNC void func_800372C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800372C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800372CC: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x800372D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800372D4: addiu       $s0, $s0, -0x4298
    ctx->r16 = ADD32(ctx->r16, -0X4298);
    // 0x800372D8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_800372DC:
    // 0x800372DC: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x800372E0: nop

    // 0x800372E4: beq         $t6, $zero, L_800372FC
    if (ctx->r14 == 0) {
        // 0x800372E8: nop
    
            goto L_800372FC;
    }
    // 0x800372E8: nop

    // 0x800372EC: jal         0x8002D000
    // 0x800372F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x800372F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x800372F4: jal         0x8005B554
    // 0x800372F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8005B554(rdram, ctx);
        goto after_1;
    // 0x800372F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
L_800372FC:
    // 0x800372FC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80037300: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80037304: bne         $at, $zero, L_800372DC
    if (ctx->r1 != 0) {
        // 0x80037308: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800372DC;
    }
    // 0x80037308: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8003730C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80037310: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80037314: addiu       $s1, $s1, -0x4290
    ctx->r17 = ADD32(ctx->r17, -0X4290);
    // 0x80037318: addiu       $s0, $s0, -0x4298
    ctx->r16 = ADD32(ctx->r16, -0X4298);
L_8003731C:
    // 0x8003731C: lw          $a0, 0x118($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X118);
    // 0x80037320: jal         0x8005B554
    // 0x80037324: nop

    func_8005B554(rdram, ctx);
        goto after_2;
    // 0x80037324: nop

    after_2:
    // 0x80037328: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8003732C: bne         $s0, $s1, L_8003731C
    if (ctx->r16 != ctx->r17) {
        // 0x80037330: nop
    
            goto L_8003731C;
    }
    // 0x80037330: nop

    // 0x80037334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003733C: jr          $ra
    // 0x80037340: nop

    return;
    // 0x80037340: nop

    // 0x80037344: jr          $ra
    // 0x80037348: nop

    return;
    // 0x80037348: nop

;}
RECOMP_FUNC void func_8003734C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003734C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80037350: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80037354: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80037358: addiu       $a1, $a1, -0x6C4
    ctx->r5 = ADD32(ctx->r5, -0X6C4);
    // 0x8003735C: addiu       $a0, $a0, -0x6D4
    ctx->r4 = ADD32(ctx->r4, -0X6D4);
    // 0x80037360: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80037364: addiu       $a3, $a3, -0x3EE8
    ctx->r7 = ADD32(ctx->r7, -0X3EE8);
    // 0x80037368: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8003736C: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x80037370: addiu       $t3, $t3, -0x6E4
    ctx->r11 = ADD32(ctx->r11, -0X6E4);
    // 0x80037374: addiu       $t2, $t2, -0x6E0
    ctx->r10 = ADD32(ctx->r10, -0X6E0);
    // 0x80037378: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8003737C: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x80037380: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x80037384: sw          $a2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r6;
    // 0x80037388: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x8003738C: sw          $a2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r6;
    // 0x80037390: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x80037394: sw          $a2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r6;
    // 0x80037398: sw          $a2, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r6;
    // 0x8003739C: sw          $a2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r6;
    // 0x800373A0: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x800373A4: sw          $a2, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r6;
    // 0x800373A8: sw          $a2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r6;
    // 0x800373AC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800373B0: addiu       $t0, $t0, -0x6DC
    ctx->r8 = ADD32(ctx->r8, -0X6DC);
    // 0x800373B4: sw          $a2, -0x6E8($at)
    MEM_W(-0X6E8, ctx->r1) = ctx->r6;
    // 0x800373B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800373BC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800373C0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800373C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800373C8: sw          $a2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r6;
    // 0x800373CC: sw          $a2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r6;
    // 0x800373D0: addiu       $v1, $v1, -0x3F78
    ctx->r3 = ADD32(ctx->r3, -0X3F78);
    // 0x800373D4: addiu       $v0, $v0, -0x4020
    ctx->r2 = ADD32(ctx->r2, -0X4020);
L_800373D8:
    // 0x800373D8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800373DC: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x800373E0: bne         $at, $zero, L_800373D8
    if (ctx->r1 != 0) {
        // 0x800373E4: sw          $zero, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = 0;
            goto L_800373D8;
    }
    // 0x800373E4: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x800373E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800373EC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800373F0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800373F4: addiu       $v1, $v1, -0x3F3C
    ctx->r3 = ADD32(ctx->r3, -0X3F3C);
    // 0x800373F8: addiu       $v0, $v0, -0x3F6C
    ctx->r2 = ADD32(ctx->r2, -0X3F6C);
    // 0x800373FC: sw          $zero, -0x3F70($at)
    MEM_W(-0X3F70, ctx->r1) = 0;
L_80037400:
    // 0x80037400: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80037404: sw          $zero, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = 0;
    // 0x80037408: sw          $zero, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = 0;
    // 0x8003740C: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x80037410: bne         $v0, $v1, L_80037400
    if (ctx->r2 != ctx->r3) {
        // 0x80037414: sw          $zero, -0x10($v0)
        MEM_W(-0X10, ctx->r2) = 0;
            goto L_80037400;
    }
    // 0x80037414: sw          $zero, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = 0;
    // 0x80037418: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003741C: jal         0x800360B0
    // 0x80037420: sw          $zero, -0x3DCC($at)
    MEM_W(-0X3DCC, ctx->r1) = 0;
    func_800360B0(rdram, ctx);
        goto after_0;
    // 0x80037420: sw          $zero, -0x3DCC($at)
    MEM_W(-0X3DCC, ctx->r1) = 0;
    after_0:
    // 0x80037424: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80037428: lw          $t6, -0x415C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X415C);
    // 0x8003742C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80037430: bgez        $t6, L_80037510
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80037434: addiu       $v0, $v0, -0x4020
        ctx->r2 = ADD32(ctx->r2, -0X4020);
            goto L_80037510;
    }
    // 0x80037434: addiu       $v0, $v0, -0x4020
    ctx->r2 = ADD32(ctx->r2, -0X4020);
    // 0x80037438: lw          $s2, 0x0($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X0);
    // 0x8003743C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80037440: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80037444: lw          $t7, -0x42C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X42C0);
    // 0x80037448: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    // 0x8003744C: andi        $t8, $t7, 0x400
    ctx->r24 = ctx->r15 & 0X400;
    // 0x80037450: beq         $t8, $zero, L_80037490
    if (ctx->r24 == 0) {
        // 0x80037454: addiu       $a1, $zero, 0x100
        ctx->r5 = ADD32(0, 0X100);
            goto L_80037490;
    }
    // 0x80037454: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80037458: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    // 0x8003745C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80037460: jal         0x80015784
    // 0x80037464: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_1;
    // 0x80037464: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80037468: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8003746C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80037470: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    // 0x80037474: jal         0x80014B64
    // 0x80037478: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    func_80014B64(rdram, ctx);
        goto after_2;
    // 0x80037478: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    after_2:
    // 0x8003747C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80037480: jal         0x80014AC4
    // 0x80037484: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_3;
    // 0x80037484: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_3:
    // 0x80037488: b           L_800374BC
    // 0x8003748C: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
        goto L_800374BC;
    // 0x8003748C: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
L_80037490:
    // 0x80037490: jal         0x80015784
    // 0x80037494: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_4;
    // 0x80037494: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80037498: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8003749C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800374A0: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    // 0x800374A4: jal         0x80014B64
    // 0x800374A8: lui         $a2, 0x41C0
    ctx->r6 = S32(0X41C0 << 16);
    func_80014B64(rdram, ctx);
        goto after_5;
    // 0x800374A8: lui         $a2, 0x41C0
    ctx->r6 = S32(0X41C0 << 16);
    after_5:
    // 0x800374AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800374B0: jal         0x80014AC4
    // 0x800374B4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_6;
    // 0x800374B4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_6:
    // 0x800374B8: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
L_800374BC:
    // 0x800374BC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800374C0: sw          $s1, -0x4020($at)
    MEM_W(-0X4020, ctx->r1) = ctx->r17;
    // 0x800374C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800374C8: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x800374CC: jal         0x80015898
    // 0x800374D0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80015898(rdram, ctx);
        goto after_7;
    // 0x800374D0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_7:
    // 0x800374D4: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x800374D8: lw          $a0, -0x4020($s1)
    ctx->r4 = MEM_W(ctx->r17, -0X4020);
    // 0x800374DC: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    // 0x800374E0: jal         0x800157C8
    // 0x800374E4: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_800157C8(rdram, ctx);
        goto after_8;
    // 0x800374E4: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_8:
    // 0x800374E8: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x800374EC: lw          $s1, -0x4020($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X4020);
    // 0x800374F0: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x800374F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800374F8: jal         0x80015950
    // 0x800374FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80015950(rdram, ctx);
        goto after_9;
    // 0x800374FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x80037500: beq         $s2, $zero, L_80037514
    if (ctx->r18 == 0) {
        // 0x80037504: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80037514;
    }
    // 0x80037504: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037508: jal         0x80014BF4
    // 0x8003750C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80014BF4(rdram, ctx);
        goto after_10;
    // 0x8003750C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_10:
L_80037510:
    // 0x80037510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80037514:
    // 0x80037514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037518: jr          $ra
    // 0x8003751C: nop

    return;
    // 0x8003751C: nop

;}
RECOMP_FUNC void func_80037520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037520: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037524: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037528: jal         0x8003AFAC
    // 0x8003752C: nop

    func_8003AFAC(rdram, ctx);
        goto after_0;
    // 0x8003752C: nop

    after_0:
    // 0x80037530: jal         0x8002D5C4
    // 0x80037534: nop

    func_8002D5C4(rdram, ctx);
        goto after_1;
    // 0x80037534: nop

    after_1:
    // 0x80037538: jal         0x8003D1AC
    // 0x8003753C: nop

    func_8003D1AC(rdram, ctx);
        goto after_2;
    // 0x8003753C: nop

    after_2:
    // 0x80037540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80037548: jr          $ra
    // 0x8003754C: nop

    return;
    // 0x8003754C: nop

;}
RECOMP_FUNC void func_80037550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037550: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80037554: addiu       $v0, $v0, -0x42C0
    ctx->r2 = ADD32(ctx->r2, -0X42C0);
    // 0x80037558: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8003755C: lui         $at, 0xFF6F
    ctx->r1 = S32(0XFF6F << 16);
    // 0x80037560: ori         $at, $at, 0x98D0
    ctx->r1 = ctx->r1 | 0X98D0;
    // 0x80037564: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80037568: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8003756C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037570: beq         $a0, $zero, L_80037584
    if (ctx->r4 == 0) {
        // 0x80037574: sw          $t7, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r15;
            goto L_80037584;
    }
    // 0x80037574: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80037578: ori         $t9, $t7, 0x404
    ctx->r25 = ctx->r15 | 0X404;
    // 0x8003757C: b           L_80037594
    // 0x80037580: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
        goto L_80037594;
    // 0x80037580: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
L_80037584:
    // 0x80037584: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80037588: nop

    // 0x8003758C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x80037590: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_80037594:
    // 0x80037594: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80037598: addiu       $v0, $v0, -0x4298
    ctx->r2 = ADD32(ctx->r2, -0X4298);
    // 0x8003759C: addiu       $t8, $zero, 0x80A
    ctx->r24 = ADD32(0, 0X80A);
    // 0x800375A0: sw          $t8, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r24;
    // 0x800375A4: jal         0x8005C550
    // 0x800375A8: sw          $zero, 0x120($v0)
    MEM_W(0X120, ctx->r2) = 0;
    func_8005C550(rdram, ctx);
        goto after_0;
    // 0x800375A8: sw          $zero, 0x120($v0)
    MEM_W(0X120, ctx->r2) = 0;
    after_0:
    // 0x800375AC: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x800375B0: addiu       $s1, $s1, -0x4298
    ctx->r17 = ADD32(ctx->r17, -0X4298);
    // 0x800375B4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800375B8: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
    // 0x800375BC: addiu       $s2, $sp, 0x28
    ctx->r18 = ADD32(ctx->r29, 0X28);
L_800375C0:
    // 0x800375C0: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x800375C4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800375C8: sw          $zero, 0xB8($s1)
    MEM_W(0XB8, ctx->r17) = 0;
    // 0x800375CC: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x800375D0: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x800375D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800375D8: jal         0x8005BE2C
    // 0x800375DC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_1;
    // 0x800375DC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x800375E0: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x800375E4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800375E8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x800375EC: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x800375F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800375F4: jal         0x8005BE2C
    // 0x800375F8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_2;
    // 0x800375F8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x800375FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80037600: bne         $s0, $s3, L_800375C0
    if (ctx->r16 != ctx->r19) {
        // 0x80037604: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_800375C0;
    }
    // 0x80037604: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80037608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003760C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80037610: jr          $ra
    // 0x80037614: nop

    return;
    // 0x80037614: nop

;}
RECOMP_FUNC void func_80037618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80037618: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x8003761C: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x80037620: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x80037624: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x80037628: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x8003762C: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x80037630: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x80037634: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x80037638: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x8003763C: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x80037640: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x80037644: swc1        $f31, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80037648: swc1        $f30, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f30.u32l;
    // 0x8003764C: swc1        $f29, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80037650: swc1        $f28, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f28.u32l;
    // 0x80037654: swc1        $f27, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80037658: swc1        $f26, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f26.u32l;
    // 0x8003765C: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80037660: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x80037664: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80037668: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x8003766C: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80037670: jal         0x8003ED00
    // 0x80037674: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    func_8003ED00(rdram, ctx);
        goto after_0;
    // 0x80037674: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80037678: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x8003767C: lhu         $t6, 0x2B8($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X2B8);
    // 0x80037680: nop

    // 0x80037684: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x80037688: beq         $t7, $zero, L_800376AC
    if (ctx->r15 == 0) {
        // 0x8003768C: nop
    
            goto L_800376AC;
    }
    // 0x8003768C: nop

    // 0x80037690: jal         0x800517A4
    // 0x80037694: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    func_800517A4(rdram, ctx);
        goto after_1;
    // 0x80037694: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_1:
    // 0x80037698: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8003769C: jal         0x80051418
    // 0x800376A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80051418(rdram, ctx);
        goto after_2;
    // 0x800376A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800376A4: jal         0x80050FE8
    // 0x800376A8: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    func_80050FE8(rdram, ctx);
        goto after_3;
    // 0x800376A8: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_3:
L_800376AC:
    // 0x800376AC: jal         0x800517A4
    // 0x800376B0: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_800517A4(rdram, ctx);
        goto after_4;
    // 0x800376B0: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_4:
    // 0x800376B4: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x800376B8: jal         0x80051418
    // 0x800376BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80051418(rdram, ctx);
        goto after_5;
    // 0x800376BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800376C0: jal         0x80050FE8
    // 0x800376C4: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_80050FE8(rdram, ctx);
        goto after_6;
    // 0x800376C4: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_6:
    // 0x800376C8: jal         0x8003EB1C
    // 0x800376CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003EB1C(rdram, ctx);
        goto after_7;
    // 0x800376CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x800376D0: jal         0x8003F068
    // 0x800376D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003F068(rdram, ctx);
        goto after_8;
    // 0x800376D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x800376D8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800376DC: lb          $a0, -0x3D5F($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X3D5F);
    // 0x800376E0: jal         0x80027140
    // 0x800376E4: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    func_80027140(rdram, ctx);
        goto after_9;
    // 0x800376E4: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    after_9:
    // 0x800376E8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800376EC: lb          $a0, -0x3D5E($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X3D5E);
    // 0x800376F0: jal         0x800270D8
    // 0x800376F4: nop

    func_800270D8(rdram, ctx);
        goto after_10;
    // 0x800376F4: nop

    after_10:
    // 0x800376F8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800376FC: lbu         $a0, -0x3D60($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X3D60);
    // 0x80037700: jal         0x80024FEC
    // 0x80037704: nop

    func_80024FEC(rdram, ctx);
        goto after_11;
    // 0x80037704: nop

    after_11:
    // 0x80037708: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x8003770C: addiu       $s6, $s6, -0x42C0
    ctx->r22 = ADD32(ctx->r22, -0X42C0);
    // 0x80037710: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
L_80037714:
    // 0x80037714: nop

    // 0x80037718: sll         $t8, $a0, 12
    ctx->r24 = S32(ctx->r4 << 12);
L_8003771C:
    // 0x8003771C: bgez        $t8, L_8003772C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80037720: lui         $t9, 0x8009
        ctx->r25 = S32(0X8009 << 16);
            goto L_8003772C;
    }
    // 0x80037720: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80037724: b           L_800377AC
    // 0x80037728: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
        goto L_800377AC;
    // 0x80037728: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_8003772C:
    // 0x8003772C: lw          $t9, -0xCC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0XCC);
    // 0x80037730: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80037734: beq         $t9, $zero, L_8003774C
    if (ctx->r25 == 0) {
        // 0x80037738: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_8003774C;
    }
    // 0x80037738: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8003773C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80037740: sw          $zero, -0xCC($at)
    MEM_W(-0XCC, ctx->r1) = 0;
    // 0x80037744: b           L_800377AC
    // 0x80037748: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
        goto L_800377AC;
    // 0x80037748: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
L_8003774C:
    // 0x8003774C: lw          $t6, -0xC4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XC4);
    // 0x80037750: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80037754: beq         $t6, $zero, L_80037788
    if (ctx->r14 == 0) {
        // 0x80037758: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_80037788;
    }
    // 0x80037758: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003775C: lb          $a0, -0x3D5F($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X3D5F);
    // 0x80037760: jal         0x80027140
    // 0x80037764: nop

    func_80027140(rdram, ctx);
        goto after_12;
    // 0x80037764: nop

    after_12:
    // 0x80037768: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8003776C: lb          $a0, -0x3D5E($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X3D5E);
    // 0x80037770: jal         0x800270D8
    // 0x80037774: nop

    func_800270D8(rdram, ctx);
        goto after_13;
    // 0x80037774: nop

    after_13:
    // 0x80037778: jal         0x80027CEC
    // 0x8003777C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80027CEC(rdram, ctx);
        goto after_14;
    // 0x8003777C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_14:
    // 0x80037780: b           L_8003778C
    // 0x80037784: nop

        goto L_8003778C;
    // 0x80037784: nop

L_80037788:
    // 0x80037788: sw          $t7, -0xC4($at)
    MEM_W(-0XC4, ctx->r1) = ctx->r15;
L_8003778C:
    // 0x8003778C: jal         0x800517A4
    // 0x80037790: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_800517A4(rdram, ctx);
        goto after_15;
    // 0x80037790: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_15:
    // 0x80037794: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x80037798: jal         0x80051418
    // 0x8003779C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80051418(rdram, ctx);
        goto after_16;
    // 0x8003779C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
    // 0x800377A0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800377A4: jal         0x80050FE8
    // 0x800377A8: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_80050FE8(rdram, ctx);
        goto after_17;
    // 0x800377A8: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_17:
L_800377AC:
    // 0x800377AC: sltiu       $at, $s0, 0x7
    ctx->r1 = ctx->r16 < 0X7 ? 1 : 0;
    // 0x800377B0: beq         $at, $zero, L_80037C88
    if (ctx->r1 == 0) {
        // 0x800377B4: sll         $t8, $s0, 2
        ctx->r24 = S32(ctx->r16 << 2);
            goto L_80037C88;
    }
    // 0x800377B4: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x800377B8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800377BC: addu        $at, $at, $t8
    gpr jr_addend_800377C8 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800377C0: lw          $t8, 0x5A64($at)
    ctx->r24 = ADD32(ctx->r1, 0X5A64);
    // 0x800377C4: nop

    // 0x800377C8: jr          $t8
    // 0x800377CC: nop

    switch (jr_addend_800377C8 >> 2) {
        case 0: goto L_800377D0; break;
        case 1: goto L_80037888; break;
        case 2: goto L_80037A3C; break;
        case 3: goto L_80037A64; break;
        case 4: goto L_80037A94; break;
        case 5: goto L_80037B30; break;
        case 6: goto L_80037BC8; break;
        default: switch_error(__func__, 0x800377C8, 0x80095A64);
    }
    // 0x800377CC: nop

L_800377D0:
    // 0x800377D0: jal         0x800517A4
    // 0x800377D4: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    func_800517A4(rdram, ctx);
        goto after_18;
    // 0x800377D4: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    after_18:
    // 0x800377D8: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x800377DC: jal         0x80051418
    // 0x800377E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80051418(rdram, ctx);
        goto after_19;
    // 0x800377E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_19:
    // 0x800377E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800377E8: jal         0x80050FE8
    // 0x800377EC: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    func_80050FE8(rdram, ctx);
        goto after_20;
    // 0x800377EC: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    after_20:
    // 0x800377F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800377F4: bne         $s0, $at, L_8003780C
    if (ctx->r16 != ctx->r1) {
        // 0x800377F8: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_8003780C;
    }
    // 0x800377F8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800377FC: sw          $zero, -0xC4($at)
    MEM_W(-0XC4, ctx->r1) = 0;
    // 0x80037800: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x80037804: b           L_8003771C
    // 0x80037808: sll         $t8, $a0, 12
    ctx->r24 = S32(ctx->r4 << 12);
        goto L_8003771C;
    // 0x80037808: sll         $t8, $a0, 12
    ctx->r24 = S32(ctx->r4 << 12);
L_8003780C:
    // 0x8003780C: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    // 0x80037810: jal         0x80034970
    // 0x80037814: sw          $s0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r16;
    func_80034970(rdram, ctx);
        goto after_21;
    // 0x80037814: sw          $s0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r16;
    after_21:
    // 0x80037818: lw          $s0, 0xD4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD4);
    // 0x8003781C: jal         0x8003EB1C
    // 0x80037820: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8003EB1C(rdram, ctx);
        goto after_22;
    // 0x80037820: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_22:
    // 0x80037824: jal         0x8003F068
    // 0x80037828: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8003F068(rdram, ctx);
        goto after_23;
    // 0x80037828: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_23:
    // 0x8003782C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80037830: jal         0x8003089C
    // 0x80037834: sw          $s0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r16;
    func_8003089C(rdram, ctx);
        goto after_24;
    // 0x80037834: sw          $s0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r16;
    after_24:
    // 0x80037838: lw          $s0, 0xD4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD4);
    // 0x8003783C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80037840: bne         $s0, $at, L_80037C88
    if (ctx->r16 != ctx->r1) {
        // 0x80037844: addiu       $t9, $zero, 0x809
        ctx->r25 = ADD32(0, 0X809);
            goto L_80037C88;
    }
    // 0x80037844: addiu       $t9, $zero, 0x809
    ctx->r25 = ADD32(0, 0X809);
    // 0x80037848: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x8003784C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80037850: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80037854: sw          $zero, 0x4($s6)
    MEM_W(0X4, ctx->r22) = 0;
    // 0x80037858: sw          $t9, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r25;
    // 0x8003785C: sw          $zero, 0xC($s6)
    MEM_W(0XC, ctx->r22) = 0;
    // 0x80037860: sw          $t7, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r15;
    // 0x80037864: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80037868: sw          $zero, -0xC8($at)
    MEM_W(-0XC8, ctx->r1) = 0;
    // 0x8003786C: jal         0x800517A4
    // 0x80037870: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_800517A4(rdram, ctx);
        goto after_25;
    // 0x80037870: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_25:
    // 0x80037874: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x80037878: jal         0x80051418
    // 0x8003787C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80051418(rdram, ctx);
        goto after_26;
    // 0x8003787C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x80037880: b           L_80037C88
    // 0x80037884: nop

        goto L_80037C88;
    // 0x80037884: nop

L_80037888:
    // 0x80037888: jal         0x80027CEC
    // 0x8003788C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80027CEC(rdram, ctx);
        goto after_27;
    // 0x8003788C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_27:
L_80037890:
    // 0x80037890: jal         0x800517A4
    // 0x80037894: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_800517A4(rdram, ctx);
        goto after_28;
    // 0x80037894: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_28:
    // 0x80037898: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x8003789C: jal         0x80051418
    // 0x800378A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80051418(rdram, ctx);
        goto after_29;
    // 0x800378A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_29:
    // 0x800378A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800378A8: jal         0x80050FE8
    // 0x800378AC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_80050FE8(rdram, ctx);
        goto after_30;
    // 0x800378AC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_30:
    // 0x800378B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800378B4: bne         $s0, $at, L_800378D4
    if (ctx->r16 != ctx->r1) {
        // 0x800378B8: addiu       $at, $zero, -0x2
        ctx->r1 = ADD32(0, -0X2);
            goto L_800378D4;
    }
    // 0x800378B8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x800378BC: jal         0x80027C94
    // 0x800378C0: nop

    func_80027C94(rdram, ctx);
        goto after_31;
    // 0x800378C0: nop

    after_31:
    // 0x800378C4: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x800378C8: b           L_8003771C
    // 0x800378CC: sll         $t8, $a0, 12
    ctx->r24 = S32(ctx->r4 << 12);
        goto L_8003771C;
    // 0x800378CC: sll         $t8, $a0, 12
    ctx->r24 = S32(ctx->r4 << 12);
    // 0x800378D0: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
L_800378D4:
    // 0x800378D4: bne         $s0, $at, L_80037900
    if (ctx->r16 != ctx->r1) {
        // 0x800378D8: nop
    
            goto L_80037900;
    }
    // 0x800378D8: nop

    // 0x800378DC: jal         0x800517A4
    // 0x800378E0: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_800517A4(rdram, ctx);
        goto after_32;
    // 0x800378E0: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_32:
    // 0x800378E4: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x800378E8: jal         0x80051418
    // 0x800378EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80051418(rdram, ctx);
        goto after_33;
    // 0x800378EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_33:
    // 0x800378F0: jal         0x80050FE8
    // 0x800378F4: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_80050FE8(rdram, ctx);
        goto after_34;
    // 0x800378F4: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_34:
    // 0x800378F8: b           L_80037890
    // 0x800378FC: nop

        goto L_80037890;
    // 0x800378FC: nop

L_80037900:
    // 0x80037900: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80037904: sw          $s0, -0x4298($at)
    MEM_W(-0X4298, ctx->r1) = ctx->r16;
L_80037908:
    // 0x80037908: jal         0x800517A4
    // 0x8003790C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_800517A4(rdram, ctx);
        goto after_35;
    // 0x8003790C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_35:
    // 0x80037910: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x80037914: jal         0x80051418
    // 0x80037918: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80051418(rdram, ctx);
        goto after_36;
    // 0x80037918: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_36:
    // 0x8003791C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80037920: jal         0x80050FE8
    // 0x80037924: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_80050FE8(rdram, ctx);
        goto after_37;
    // 0x80037924: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_37:
    // 0x80037928: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003792C: beq         $s0, $at, L_80037890
    if (ctx->r16 == ctx->r1) {
        // 0x80037930: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_80037890;
    }
    // 0x80037930: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80037934: lw          $t8, -0x4298($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4298);
    // 0x80037938: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003793C: bne         $t8, $at, L_80037970
    if (ctx->r24 != ctx->r1) {
        // 0x80037940: nop
    
            goto L_80037970;
    }
    // 0x80037940: nop

L_80037944:
    // 0x80037944: jal         0x800517A4
    // 0x80037948: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_800517A4(rdram, ctx);
        goto after_38;
    // 0x80037948: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_38:
    // 0x8003794C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x80037950: jal         0x80051418
    // 0x80037954: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80051418(rdram, ctx);
        goto after_39;
    // 0x80037954: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_39:
    // 0x80037958: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8003795C: jal         0x80050FE8
    // 0x80037960: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_80050FE8(rdram, ctx);
        goto after_40;
    // 0x80037960: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_40:
    // 0x80037964: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80037968: beq         $s0, $at, L_80037908
    if (ctx->r16 == ctx->r1) {
        // 0x8003796C: nop
    
            goto L_80037908;
    }
    // 0x8003796C: nop

L_80037970:
    // 0x80037970: jal         0x800517A4
    // 0x80037974: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_800517A4(rdram, ctx);
        goto after_41;
    // 0x80037974: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_41:
    // 0x80037978: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x8003797C: jal         0x80051418
    // 0x80037980: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80051418(rdram, ctx);
        goto after_42;
    // 0x80037980: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_42:
    // 0x80037984: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80037988: jal         0x80050FE8
    // 0x8003798C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_80050FE8(rdram, ctx);
        goto after_43;
    // 0x8003798C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_43:
    // 0x80037990: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80037994: bne         $s0, $at, L_800379B8
    if (ctx->r16 != ctx->r1) {
        // 0x80037998: lui         $v0, 0x800B
        ctx->r2 = S32(0X800B << 16);
            goto L_800379B8;
    }
    // 0x80037998: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003799C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x800379A0: lw          $t9, -0x4298($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4298);
    // 0x800379A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800379A8: bne         $t9, $at, L_80037908
    if (ctx->r25 != ctx->r1) {
        // 0x800379AC: nop
    
            goto L_80037908;
    }
    // 0x800379AC: nop

    // 0x800379B0: b           L_80037944
    // 0x800379B4: nop

        goto L_80037944;
    // 0x800379B4: nop

L_800379B8:
    // 0x800379B8: lw          $v0, -0x4298($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4298);
    // 0x800379BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800379C0: beq         $v0, $zero, L_800379D8
    if (ctx->r2 == 0) {
        // 0x800379C4: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_800379D8;
    }
    // 0x800379C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800379C8: beq         $v0, $at, L_800379D8
    if (ctx->r2 == ctx->r1) {
        // 0x800379CC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800379D8;
    }
    // 0x800379CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800379D0: bne         $v0, $at, L_800379F0
    if (ctx->r2 != ctx->r1) {
        // 0x800379D4: nop
    
            goto L_800379F0;
    }
    // 0x800379D4: nop

L_800379D8:
    // 0x800379D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800379DC: jal         0x80037550
    // 0x800379E0: sw          $s0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r16;
    func_80037550(rdram, ctx);
        goto after_44;
    // 0x800379E0: sw          $s0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r16;
    after_44:
    // 0x800379E4: lw          $s0, 0xD4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD4);
    // 0x800379E8: b           L_80037A00
    // 0x800379EC: nop

        goto L_80037A00;
    // 0x800379EC: nop

L_800379F0:
    // 0x800379F0: jal         0x80037550
    // 0x800379F4: sw          $s0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r16;
    func_80037550(rdram, ctx);
        goto after_45;
    // 0x800379F4: sw          $s0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r16;
    after_45:
    // 0x800379F8: lw          $s0, 0xD4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD4);
    // 0x800379FC: nop

L_80037A00:
    // 0x80037A00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80037A04: sw          $s0, -0x4178($at)
    MEM_W(-0X4178, ctx->r1) = ctx->r16;
    // 0x80037A08: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80037A0C: lw          $t6, -0x4298($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4298);
    // 0x80037A10: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x80037A14: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x80037A18: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80037A1C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80037A20: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80037A24: lw          $t6, -0xBC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XBC);
    // 0x80037A28: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80037A2C: jal         0x80027C94
    // 0x80037A30: sw          $t6, -0x41E4($at)
    MEM_W(-0X41E4, ctx->r1) = ctx->r14;
    func_80027C94(rdram, ctx);
        goto after_46;
    // 0x80037A30: sw          $t6, -0x41E4($at)
    MEM_W(-0X41E4, ctx->r1) = ctx->r14;
    after_46:
    // 0x80037A34: b           L_80037C88
    // 0x80037A38: nop

        goto L_80037C88;
    // 0x80037A38: nop

L_80037A3C:
    // 0x80037A3C: jal         0x800517A4
    // 0x80037A40: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    func_800517A4(rdram, ctx);
        goto after_47;
    // 0x80037A40: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_47:
    // 0x80037A44: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    // 0x80037A48: jal         0x80051418
    // 0x80037A4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80051418(rdram, ctx);
        goto after_48;
    // 0x80037A4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_48:
    // 0x80037A50: jal         0x80050FE8
    // 0x80037A54: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    func_80050FE8(rdram, ctx);
        goto after_49;
    // 0x80037A54: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_49:
    // 0x80037A58: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x80037A5C: b           L_8003771C
    // 0x80037A60: sll         $t8, $a0, 12
    ctx->r24 = S32(ctx->r4 << 12);
        goto L_8003771C;
    // 0x80037A60: sll         $t8, $a0, 12
    ctx->r24 = S32(ctx->r4 << 12);
L_80037A64:
    // 0x80037A64: jal         0x800517A4
    // 0x80037A68: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_800517A4(rdram, ctx);
        goto after_50;
    // 0x80037A68: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_50:
    // 0x80037A6C: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x80037A70: jal         0x80051418
    // 0x80037A74: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80051418(rdram, ctx);
        goto after_51;
    // 0x80037A74: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_51:
    // 0x80037A78: jal         0x80050FE8
    // 0x80037A7C: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_80050FE8(rdram, ctx);
        goto after_52;
    // 0x80037A7C: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_52:
    // 0x80037A80: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80037A84: sw          $zero, -0xC4($at)
    MEM_W(-0XC4, ctx->r1) = 0;
    // 0x80037A88: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x80037A8C: b           L_8003771C
    // 0x80037A90: sll         $t8, $a0, 12
    ctx->r24 = S32(ctx->r4 << 12);
        goto L_8003771C;
    // 0x80037A90: sll         $t8, $a0, 12
    ctx->r24 = S32(ctx->r4 << 12);
L_80037A94:
    // 0x80037A94: jal         0x80034970
    // 0x80037A98: nop

    func_80034970(rdram, ctx);
        goto after_53;
    // 0x80037A98: nop

    after_53:
    // 0x80037A9C: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x80037AA0: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80037AA4: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80037AA8: sw          $zero, 0xC($s6)
    MEM_W(0XC, ctx->r22) = 0;
    // 0x80037AAC: sw          $t8, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r24;
    // 0x80037AB0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80037AB4: lw          $t9, -0xC8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0XC8);
    // 0x80037AB8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80037ABC: beq         $t9, $zero, L_80037B0C
    if (ctx->r25 == 0) {
        // 0x80037AC0: addiu       $a0, $zero, 0x20
        ctx->r4 = ADD32(0, 0X20);
            goto L_80037B0C;
    }
    // 0x80037AC0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x80037AC4: or          $t7, $t8, $at
    ctx->r15 = ctx->r24 | ctx->r1;
    // 0x80037AC8: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80037ACC: addiu       $t9, $zero, 0x8B0
    ctx->r25 = ADD32(0, 0X8B0);
    // 0x80037AD0: sw          $t7, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r15;
    // 0x80037AD4: sw          $t8, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r24;
    // 0x80037AD8: sw          $t9, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r25;
    // 0x80037ADC: jal         0x800517A4
    // 0x80037AE0: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    func_800517A4(rdram, ctx);
        goto after_54;
    // 0x80037AE0: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_54:
    // 0x80037AE4: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80037AE8: lw          $a1, -0xC8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XC8);
    // 0x80037AEC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80037AF0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80037AF4: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80037AF8: or          $a1, $t6, $at
    ctx->r5 = ctx->r14 | ctx->r1;
    // 0x80037AFC: jal         0x80051418
    // 0x80037B00: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    func_80051418(rdram, ctx);
        goto after_55;
    // 0x80037B00: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_55:
    // 0x80037B04: b           L_80037C88
    // 0x80037B08: nop

        goto L_80037C88;
    // 0x80037B08: nop

L_80037B0C:
    // 0x80037B0C: addiu       $t8, $zero, 0x809
    ctx->r24 = ADD32(0, 0X809);
    // 0x80037B10: sw          $zero, 0x4($s6)
    MEM_W(0X4, ctx->r22) = 0;
    // 0x80037B14: jal         0x800517A4
    // 0x80037B18: sw          $t8, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r24;
    func_800517A4(rdram, ctx);
        goto after_56;
    // 0x80037B18: sw          $t8, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r24;
    after_56:
    // 0x80037B1C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x80037B20: jal         0x80051418
    // 0x80037B24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80051418(rdram, ctx);
        goto after_57;
    // 0x80037B24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_57:
    // 0x80037B28: b           L_80037C88
    // 0x80037B2C: nop

        goto L_80037C88;
    // 0x80037B2C: nop

L_80037B30:
    // 0x80037B30: jal         0x8003E4D4
    // 0x80037B34: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    func_8003E4D4(rdram, ctx);
        goto after_58;
    // 0x80037B34: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    after_58:
    // 0x80037B38: beq         $v0, $zero, L_80037B6C
    if (ctx->r2 == 0) {
        // 0x80037B3C: addiu       $s0, $zero, 0x2
        ctx->r16 = ADD32(0, 0X2);
            goto L_80037B6C;
    }
    // 0x80037B3C: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x80037B40: jal         0x8003E4D4
    // 0x80037B44: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    func_8003E4D4(rdram, ctx);
        goto after_59;
    // 0x80037B44: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    after_59:
    // 0x80037B48: beq         $v0, $zero, L_80037B6C
    if (ctx->r2 == 0) {
        // 0x80037B4C: addiu       $s0, $zero, 0x2
        ctx->r16 = ADD32(0, 0X2);
            goto L_80037B6C;
    }
    // 0x80037B4C: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x80037B50: jal         0x8003E4D4
    // 0x80037B54: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    func_8003E4D4(rdram, ctx);
        goto after_60;
    // 0x80037B54: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_60:
    // 0x80037B58: bne         $v0, $zero, L_80037B6C
    if (ctx->r2 != 0) {
        // 0x80037B5C: addiu       $s0, $zero, 0x2
        ctx->r16 = ADD32(0, 0X2);
            goto L_80037B6C;
    }
    // 0x80037B5C: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x80037B60: b           L_80037B6C
    // 0x80037B64: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
        goto L_80037B6C;
    // 0x80037B64: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x80037B68: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
L_80037B6C:
    // 0x80037B6C: jal         0x80034970
    // 0x80037B70: sw          $s0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r16;
    func_80034970(rdram, ctx);
        goto after_61;
    // 0x80037B70: sw          $s0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r16;
    after_61:
    // 0x80037B74: lw          $t9, 0x0($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X0);
    // 0x80037B78: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80037B7C: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x80037B80: addiu       $t7, $zero, 0x809
    ctx->r15 = ADD32(0, 0X809);
    // 0x80037B84: lw          $s0, 0xC8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC8);
    // 0x80037B88: sw          $zero, 0xC($s6)
    MEM_W(0XC, ctx->r22) = 0;
    // 0x80037B8C: sw          $t6, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r14;
    // 0x80037B90: sw          $zero, 0x4($s6)
    MEM_W(0X4, ctx->r22) = 0;
    // 0x80037B94: sw          $t7, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r15;
    // 0x80037B98: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80037B9C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80037BA0: sw          $t8, -0x750($at)
    MEM_W(-0X750, ctx->r1) = ctx->r24;
    // 0x80037BA4: jal         0x800517A4
    // 0x80037BA8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_800517A4(rdram, ctx);
        goto after_62;
    // 0x80037BA8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_62:
    // 0x80037BAC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80037BB0: sw          $zero, -0xC8($at)
    MEM_W(-0XC8, ctx->r1) = 0;
    // 0x80037BB4: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x80037BB8: jal         0x80051418
    // 0x80037BBC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80051418(rdram, ctx);
        goto after_63;
    // 0x80037BBC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_63:
    // 0x80037BC0: b           L_80037C88
    // 0x80037BC4: nop

        goto L_80037C88;
    // 0x80037BC4: nop

L_80037BC8:
    // 0x80037BC8: jal         0x800517A4
    // 0x80037BCC: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_800517A4(rdram, ctx);
        goto after_64;
    // 0x80037BCC: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_64:
    // 0x80037BD0: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80037BD4: lbu         $t9, -0x3D5D($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X3D5D);
    // 0x80037BD8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80037BDC: andi        $t6, $t9, 0x80
    ctx->r14 = ctx->r25 & 0X80;
    // 0x80037BE0: beq         $t6, $zero, L_80037BF8
    if (ctx->r14 == 0) {
        // 0x80037BE4: addiu       $a0, $zero, 0x1A
        ctx->r4 = ADD32(0, 0X1A);
            goto L_80037BF8;
    }
    // 0x80037BE4: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x80037BE8: jal         0x80051418
    // 0x80037BEC: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_80051418(rdram, ctx);
        goto after_65;
    // 0x80037BEC: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_65:
    // 0x80037BF0: b           L_80037C04
    // 0x80037BF4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_80037C04;
    // 0x80037BF4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80037BF8:
    // 0x80037BF8: jal         0x80051418
    // 0x80037BFC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80051418(rdram, ctx);
        goto after_66;
    // 0x80037BFC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_66:
    // 0x80037C00: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80037C04:
    // 0x80037C04: jal         0x80050FE8
    // 0x80037C08: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_80050FE8(rdram, ctx);
        goto after_67;
    // 0x80037C08: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_67:
    // 0x80037C0C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80037C10: bne         $s0, $at, L_80037C28
    if (ctx->r16 != ctx->r1) {
        // 0x80037C14: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_80037C28;
    }
    // 0x80037C14: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80037C18: sw          $zero, -0xC4($at)
    MEM_W(-0XC4, ctx->r1) = 0;
    // 0x80037C1C: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x80037C20: b           L_8003771C
    // 0x80037C24: sll         $t8, $a0, 12
    ctx->r24 = S32(ctx->r4 << 12);
        goto L_8003771C;
    // 0x80037C24: sll         $t8, $a0, 12
    ctx->r24 = S32(ctx->r4 << 12);
L_80037C28:
    // 0x80037C28: jal         0x80034970
    // 0x80037C2C: sw          $s0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r16;
    func_80034970(rdram, ctx);
        goto after_68;
    // 0x80037C2C: sw          $s0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r16;
    after_68:
    // 0x80037C30: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x80037C34: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80037C38: lw          $s0, 0xD4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD4);
    // 0x80037C3C: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80037C40: addiu       $t6, $zero, 0x8B0
    ctx->r14 = ADD32(0, 0X8B0);
    // 0x80037C44: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80037C48: sw          $zero, 0xC($s6)
    MEM_W(0XC, ctx->r22) = 0;
    // 0x80037C4C: sw          $t8, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r24;
    // 0x80037C50: sw          $t9, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r25;
    // 0x80037C54: sw          $t6, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r14;
    // 0x80037C58: jal         0x800517A4
    // 0x80037C5C: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    func_800517A4(rdram, ctx);
        goto after_69;
    // 0x80037C5C: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_69:
    // 0x80037C60: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80037C64: sw          $s0, -0xC8($at)
    MEM_W(-0XC8, ctx->r1) = ctx->r16;
    // 0x80037C68: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80037C6C: lw          $a1, -0xC8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XC8);
    // 0x80037C70: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80037C74: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80037C78: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x80037C7C: or          $a1, $t7, $at
    ctx->r5 = ctx->r15 | ctx->r1;
    // 0x80037C80: jal         0x80051418
    // 0x80037C84: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    func_80051418(rdram, ctx);
        goto after_70;
    // 0x80037C84: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_70:
L_80037C88:
    // 0x80037C88: jal         0x8000797C
    // 0x80037C8C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8000797C(rdram, ctx);
        goto after_71;
    // 0x80037C8C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_71:
    // 0x80037C90: jal         0x8001D1DC
    // 0x80037C94: nop

    func_8001D1DC(rdram, ctx);
        goto after_72;
    // 0x80037C94: nop

    after_72:
    // 0x80037C98: jal         0x80002AAC
    // 0x80037C9C: nop

    func_80002AAC(rdram, ctx);
        goto after_73;
    // 0x80037C9C: nop

    after_73:
    // 0x80037CA0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80037CA4: jal         0x80076930
    // 0x80037CA8: sw          $zero, -0x750($at)
    MEM_W(-0X750, ctx->r1) = 0;
    osGetTime_recomp(rdram, ctx);
        goto after_74;
    // 0x80037CA8: sw          $zero, -0x750($at)
    MEM_W(-0X750, ctx->r1) = 0;
    after_74:
    // 0x80037CAC: jal         0x80027F84
    // 0x80037CB0: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    func_80027F84(rdram, ctx);
        goto after_75;
    // 0x80037CB0: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    after_75:
    // 0x80037CB4: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x80037CB8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80037CBC: andi        $t9, $a0, 0x4
    ctx->r25 = ctx->r4 & 0X4;
    // 0x80037CC0: beq         $t9, $zero, L_80038134
    if (ctx->r25 == 0) {
        // 0x80037CC4: addiu       $t9, $zero, 0x84
        ctx->r25 = ADD32(0, 0X84);
            goto L_80038134;
    }
    // 0x80037CC4: addiu       $t9, $zero, 0x84
    ctx->r25 = ADD32(0, 0X84);
    // 0x80037CC8: sw          $t6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r14;
L_80037CCC:
    // 0x80037CCC: jal         0x80030FA0
    // 0x80037CD0: nop

    func_80030FA0(rdram, ctx);
        goto after_76;
    // 0x80037CD0: nop

    after_76:
    // 0x80037CD4: jal         0x80037520
    // 0x80037CD8: nop

    func_80037520(rdram, ctx);
        goto after_77;
    // 0x80037CD8: nop

    after_77:
    // 0x80037CDC: jal         0x8003734C
    // 0x80037CE0: nop

    func_8003734C(rdram, ctx);
        goto after_78;
    // 0x80037CE0: nop

    after_78:
    // 0x80037CE4: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x80037CE8: addiu       $s6, $s6, -0x42C0
    ctx->r22 = ADD32(ctx->r22, -0X42C0);
    // 0x80037CEC: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x80037CF0: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80037CF4: ori         $at, $at, 0x800
    ctx->r1 = ctx->r1 | 0X800;
    // 0x80037CF8: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80037CFC: bne         $t8, $zero, L_80037D0C
    if (ctx->r24 != 0) {
        // 0x80037D00: nop
    
            goto L_80037D0C;
    }
    // 0x80037D00: nop

    // 0x80037D04: jal         0x80051FFC
    // 0x80037D08: nop

    func_80051FFC(rdram, ctx);
        goto after_79;
    // 0x80037D08: nop

    after_79:
L_80037D0C:
    // 0x80037D0C: jal         0x80007AB0
    // 0x80037D10: nop

    func_80007AB0(rdram, ctx);
        goto after_80;
    // 0x80037D10: nop

    after_80:
    // 0x80037D14: jal         0x800372C8
    // 0x80037D18: nop

    func_800372C8(rdram, ctx);
        goto after_81;
    // 0x80037D18: nop

    after_81:
    // 0x80037D1C: jal         0x80031034
    // 0x80037D20: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80031034(rdram, ctx);
        goto after_82;
    // 0x80037D20: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_82:
    // 0x80037D24: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80037D28: lw          $a3, -0xCF0($a3)
    ctx->r7 = MEM_W(ctx->r7, -0XCF0);
    // 0x80037D2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80037D30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80037D34: jal         0x8000960C
    // 0x80037D38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8000960C(rdram, ctx);
        goto after_83;
    // 0x80037D38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_83:
    // 0x80037D3C: jal         0x800094EC
    // 0x80037D40: nop

    func_800094EC(rdram, ctx);
        goto after_84;
    // 0x80037D40: nop

    after_84:
    // 0x80037D44: jal         0x80037114
    // 0x80037D48: nop

    func_80037114(rdram, ctx);
        goto after_85;
    // 0x80037D48: nop

    after_85:
    // 0x80037D4C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80037D50: lw          $t9, -0x415C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X415C);
    // 0x80037D54: nop

    // 0x80037D58: bltz        $t9, L_80037D68
    if (SIGNED(ctx->r25) < 0) {
        // 0x80037D5C: nop
    
            goto L_80037D68;
    }
    // 0x80037D5C: nop

    // 0x80037D60: jal         0x800370E0
    // 0x80037D64: nop

    func_800370E0(rdram, ctx);
        goto after_86;
    // 0x80037D64: nop

    after_86:
L_80037D68:
    // 0x80037D68: jal         0x80037028
    // 0x80037D6C: nop

    func_80037028(rdram, ctx);
        goto after_87;
    // 0x80037D6C: nop

    after_87:
L_80037D70:
    // 0x80037D70: jal         0x8003A638
    // 0x80037D74: nop

    func_8003A638(rdram, ctx);
        goto after_88;
    // 0x80037D74: nop

    after_88:
    // 0x80037D78: beq         $v0, $zero, L_80037D88
    if (ctx->r2 == 0) {
        // 0x80037D7C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80037D88;
    }
    // 0x80037D7C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80037D80: jal         0x80039B08
    // 0x80037D84: nop

    func_80039B08(rdram, ctx);
        goto after_89;
    // 0x80037D84: nop

    after_89:
L_80037D88:
    // 0x80037D88: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80037D8C: bne         $s0, $at, L_80037E30
    if (ctx->r16 != ctx->r1) {
        // 0x80037D90: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_80037E30;
    }
    // 0x80037D90: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80037D94: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80037D98: lw          $t8, -0x41F0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X41F0);
    // 0x80037D9C: lw          $t6, -0x41F4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X41F4);
    // 0x80037DA0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80037DA4: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80037DA8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80037DAC: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80037DB0: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80037DB4: lw          $t8, -0x41E8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X41E8);
    // 0x80037DB8: lw          $t6, -0x41EC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X41EC);
    // 0x80037DBC: sw          $t9, -0x4124($at)
    MEM_W(-0X4124, ctx->r1) = ctx->r25;
    // 0x80037DC0: sw          $t7, -0x4128($at)
    MEM_W(-0X4128, ctx->r1) = ctx->r15;
    // 0x80037DC4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80037DC8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80037DCC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80037DD0: sw          $t7, -0x4120($at)
    MEM_W(-0X4120, ctx->r1) = ctx->r15;
    // 0x80037DD4: jal         0x800360B0
    // 0x80037DD8: sw          $t9, -0x411C($at)
    MEM_W(-0X411C, ctx->r1) = ctx->r25;
    func_800360B0(rdram, ctx);
        goto after_90;
    // 0x80037DD8: sw          $t9, -0x411C($at)
    MEM_W(-0X411C, ctx->r1) = ctx->r25;
    after_90:
    // 0x80037DDC: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x80037DE0: jal         0x800397E0
    // 0x80037DE4: addiu       $s6, $s6, -0x42C0
    ctx->r22 = ADD32(ctx->r22, -0X42C0);
    func_800397E0(rdram, ctx);
        goto after_91;
    // 0x80037DE4: addiu       $s6, $s6, -0x42C0
    ctx->r22 = ADD32(ctx->r22, -0X42C0);
    after_91:
    // 0x80037DE8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80037DEC: lw          $a0, -0x415C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X415C);
    // 0x80037DF0: nop

    // 0x80037DF4: bltz        $a0, L_80037E10
    if (SIGNED(ctx->r4) < 0) {
        // 0x80037DF8: nop
    
            goto L_80037E10;
    }
    // 0x80037DF8: nop

    // 0x80037DFC: jal         0x80036E0C
    // 0x80037E00: nop

    func_80036E0C(rdram, ctx);
        goto after_92;
    // 0x80037E00: nop

    after_92:
    // 0x80037E04: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80037E08: lw          $a0, -0x415C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X415C);
    // 0x80037E0C: nop

L_80037E10:
    // 0x80037E10: bne         $a0, $zero, L_80037E20
    if (ctx->r4 != 0) {
        // 0x80037E14: nop
    
            goto L_80037E20;
    }
    // 0x80037E14: nop

    // 0x80037E18: jal         0x80036CDC
    // 0x80037E1C: nop

    func_80036CDC(rdram, ctx);
        goto after_93;
    // 0x80037E1C: nop

    after_93:
L_80037E20:
    // 0x80037E20: jal         0x80036E60
    // 0x80037E24: nop

    func_80036E60(rdram, ctx);
        goto after_94;
    // 0x80037E24: nop

    after_94:
    // 0x80037E28: b           L_80037F5C
    // 0x80037E2C: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
        goto L_80037F5C;
    // 0x80037E2C: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
L_80037E30:
    // 0x80037E30: beq         $s0, $zero, L_80037F08
    if (ctx->r16 == 0) {
        // 0x80037E34: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_80037F08;
    }
    // 0x80037E34: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80037E38: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80037E3C: lw          $t8, -0x41F0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X41F0);
    // 0x80037E40: lw          $t6, -0x41F4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X41F4);
    // 0x80037E44: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80037E48: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80037E4C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80037E50: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80037E54: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80037E58: lw          $t8, -0x41E8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X41E8);
    // 0x80037E5C: lw          $t6, -0x41EC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X41EC);
    // 0x80037E60: sw          $t9, -0x4124($at)
    MEM_W(-0X4124, ctx->r1) = ctx->r25;
    // 0x80037E64: sw          $t7, -0x4128($at)
    MEM_W(-0X4128, ctx->r1) = ctx->r15;
    // 0x80037E68: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80037E6C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80037E70: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80037E74: sw          $t7, -0x4120($at)
    MEM_W(-0X4120, ctx->r1) = ctx->r15;
    // 0x80037E78: sw          $t9, -0x411C($at)
    MEM_W(-0X411C, ctx->r1) = ctx->r25;
    // 0x80037E7C: jal         0x800360B0
    // 0x80037E80: sw          $s0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r16;
    func_800360B0(rdram, ctx);
        goto after_95;
    // 0x80037E80: sw          $s0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r16;
    after_95:
    // 0x80037E84: lw          $s0, 0xD8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD8);
    // 0x80037E88: jal         0x800397E0
    // 0x80037E8C: nop

    func_800397E0(rdram, ctx);
        goto after_96;
    // 0x80037E8C: nop

    after_96:
    // 0x80037E90: jal         0x80027874
    // 0x80037E94: addiu       $a0, $zero, 0x414
    ctx->r4 = ADD32(0, 0X414);
    func_80027874(rdram, ctx);
        goto after_97;
    // 0x80037E94: addiu       $a0, $zero, 0x414
    ctx->r4 = ADD32(0, 0X414);
    after_97:
    // 0x80037E98: jal         0x80027874
    // 0x80037E9C: addiu       $a0, $zero, 0x368
    ctx->r4 = ADD32(0, 0X368);
    func_80027874(rdram, ctx);
        goto after_98;
    // 0x80037E9C: addiu       $a0, $zero, 0x368
    ctx->r4 = ADD32(0, 0X368);
    after_98:
    // 0x80037EA0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80037EA4: lw          $a0, -0x415C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X415C);
    // 0x80037EA8: nop

    // 0x80037EAC: bltz        $a0, L_80037ECC
    if (SIGNED(ctx->r4) < 0) {
        // 0x80037EB0: nop
    
            goto L_80037ECC;
    }
    // 0x80037EB0: nop

    // 0x80037EB4: jal         0x80036E0C
    // 0x80037EB8: sw          $s0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r16;
    func_80036E0C(rdram, ctx);
        goto after_99;
    // 0x80037EB8: sw          $s0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r16;
    after_99:
    // 0x80037EBC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80037EC0: lw          $a0, -0x415C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X415C);
    // 0x80037EC4: lw          $s0, 0xD8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD8);
    // 0x80037EC8: nop

L_80037ECC:
    // 0x80037ECC: bne         $a0, $zero, L_80037EE8
    if (ctx->r4 != 0) {
        // 0x80037ED0: addiu       $a0, $s0, -0x1
        ctx->r4 = ADD32(ctx->r16, -0X1);
            goto L_80037EE8;
    }
    // 0x80037ED0: addiu       $a0, $s0, -0x1
    ctx->r4 = ADD32(ctx->r16, -0X1);
    // 0x80037ED4: jal         0x80036CDC
    // 0x80037ED8: sw          $s0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r16;
    func_80036CDC(rdram, ctx);
        goto after_100;
    // 0x80037ED8: sw          $s0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r16;
    after_100:
    // 0x80037EDC: lw          $s0, 0xD8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD8);
    // 0x80037EE0: nop

    // 0x80037EE4: addiu       $a0, $s0, -0x1
    ctx->r4 = ADD32(ctx->r16, -0X1);
L_80037EE8:
    // 0x80037EE8: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x80037EEC: jal         0x80036890
    // 0x80037EF0: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    func_80036890(rdram, ctx);
        goto after_101;
    // 0x80037EF0: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    after_101:
    // 0x80037EF4: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80037EF8: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x80037EFC: addiu       $s6, $s6, -0x42C0
    ctx->r22 = ADD32(ctx->r22, -0X42C0);
    // 0x80037F00: b           L_80037F58
    // 0x80037F04: sw          $a0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r4;
        goto L_80037F58;
    // 0x80037F04: sw          $a0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r4;
L_80037F08:
    // 0x80037F08: jal         0x800360B0
    // 0x80037F0C: nop

    func_800360B0(rdram, ctx);
        goto after_102;
    // 0x80037F0C: nop

    after_102:
    // 0x80037F10: jal         0x80007AB0
    // 0x80037F14: nop

    func_80007AB0(rdram, ctx);
        goto after_103;
    // 0x80037F14: nop

    after_103:
    // 0x80037F18: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80037F1C: addiu       $v0, $v0, 0x2C8
    ctx->r2 = ADD32(ctx->r2, 0X2C8);
    // 0x80037F20: lhu         $t6, 0x6($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X6);
    // 0x80037F24: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x80037F28: lhu         $t9, 0x2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X2);
    // 0x80037F2C: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80037F30: lhu         $t7, 0x4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X4);
    // 0x80037F34: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x80037F38: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80037F3C: andi        $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 & 0X1000;
    // 0x80037F40: beq         $t9, $zero, L_80037D70
    if (ctx->r25 == 0) {
        // 0x80037F44: nop
    
            goto L_80037D70;
    }
    // 0x80037F44: nop

    // 0x80037F48: jal         0x80033300
    // 0x80037F4C: nop

    func_80033300(rdram, ctx);
        goto after_104;
    // 0x80037F4C: nop

    after_104:
    // 0x80037F50: b           L_80037D70
    // 0x80037F54: nop

        goto L_80037D70;
    // 0x80037F54: nop

L_80037F58:
    // 0x80037F58: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
L_80037F5C:
    // 0x80037F5C: nop

    // 0x80037F60: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x80037F64: beq         $t7, $zero, L_80038074
    if (ctx->r15 == 0) {
        // 0x80037F68: nop
    
            goto L_80038074;
    }
    // 0x80037F68: nop

    // 0x80037F6C: jal         0x80030FA0
    // 0x80037F70: nop

    func_80030FA0(rdram, ctx);
        goto after_105;
    // 0x80037F70: nop

    after_105:
    // 0x80037F74: jal         0x80007AB0
    // 0x80037F78: nop

    func_80007AB0(rdram, ctx);
        goto after_106;
    // 0x80037F78: nop

    after_106:
    // 0x80037F7C: lw          $t8, 0x0($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X0);
    // 0x80037F80: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x80037F84: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80037F88: sw          $t9, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r25;
    // 0x80037F8C: jal         0x80031034
    // 0x80037F90: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80031034(rdram, ctx);
        goto after_107;
    // 0x80037F90: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_107:
    // 0x80037F94: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80037F98: lw          $a3, -0xCF0($a3)
    ctx->r7 = MEM_W(ctx->r7, -0XCF0);
    // 0x80037F9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80037FA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80037FA4: jal         0x80009534
    // 0x80037FA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80009534(rdram, ctx);
        goto after_108;
    // 0x80037FA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_108:
    // 0x80037FAC: jal         0x800094EC
    // 0x80037FB0: nop

    func_800094EC(rdram, ctx);
        goto after_109;
    // 0x80037FB0: nop

    after_109:
    // 0x80037FB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80037FB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80037FBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80037FC0: jal         0x80009A84
    // 0x80037FC4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80009A84(rdram, ctx);
        goto after_110;
    // 0x80037FC4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_110:
    // 0x80037FC8: jal         0x800349CC
    // 0x80037FCC: nop

    func_800349CC(rdram, ctx);
        goto after_111;
    // 0x80037FCC: nop

    after_111:
    // 0x80037FD0: jal         0x800349FC
    // 0x80037FD4: nop

    func_800349FC(rdram, ctx);
        goto after_112;
    // 0x80037FD4: nop

    after_112:
    // 0x80037FD8: jal         0x80031250
    // 0x80037FDC: nop

    func_80031250(rdram, ctx);
        goto after_113;
    // 0x80037FDC: nop

    after_113:
    // 0x80037FE0: jal         0x8000797C
    // 0x80037FE4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8000797C(rdram, ctx);
        goto after_114;
    // 0x80037FE4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_114:
    // 0x80037FE8: jal         0x8001D1DC
    // 0x80037FEC: nop

    func_8001D1DC(rdram, ctx);
        goto after_115;
    // 0x80037FEC: nop

    after_115:
    // 0x80037FF0: jal         0x80002AAC
    // 0x80037FF4: nop

    func_80002AAC(rdram, ctx);
        goto after_116;
    // 0x80037FF4: nop

    after_116:
    // 0x80037FF8: jal         0x800517A4
    // 0x80037FFC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_800517A4(rdram, ctx);
        goto after_117;
    // 0x80037FFC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_117:
    // 0x80038000: lw          $s0, 0xD0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD0);
    // 0x80038004: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x80038008: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x8003800C: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80038010: jal         0x80051418
    // 0x80038014: ori         $a1, $t6, 0x5
    ctx->r5 = ctx->r14 | 0X5;
    func_80051418(rdram, ctx);
        goto after_118;
    // 0x80038014: ori         $a1, $t6, 0x5
    ctx->r5 = ctx->r14 | 0X5;
    after_118:
    // 0x80038018: jal         0x80050FE8
    // 0x8003801C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_80050FE8(rdram, ctx);
        goto after_119;
    // 0x8003801C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_119:
    // 0x80038020: jal         0x800517A4
    // 0x80038024: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_800517A4(rdram, ctx);
        goto after_120;
    // 0x80038024: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_120:
    // 0x80038028: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x8003802C: jal         0x80051418
    // 0x80038030: ori         $a1, $s0, 0x6
    ctx->r5 = ctx->r16 | 0X6;
    func_80051418(rdram, ctx);
        goto after_121;
    // 0x80038030: ori         $a1, $s0, 0x6
    ctx->r5 = ctx->r16 | 0X6;
    after_121:
    // 0x80038034: jal         0x80050FE8
    // 0x80038038: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_80050FE8(rdram, ctx);
        goto after_122;
    // 0x80038038: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_122:
    // 0x8003803C: jal         0x8000797C
    // 0x80038040: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8000797C(rdram, ctx);
        goto after_123;
    // 0x80038040: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_123:
    // 0x80038044: jal         0x80002AAC
    // 0x80038048: nop

    func_80002AAC(rdram, ctx);
        goto after_124;
    // 0x80038048: nop

    after_124:
    // 0x8003804C: jal         0x80027CEC
    // 0x80038050: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80027CEC(rdram, ctx);
        goto after_125;
    // 0x80038050: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_125:
    // 0x80038054: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x80038058: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x8003805C: andi        $t7, $a0, 0x8000
    ctx->r15 = ctx->r4 & 0X8000;
    // 0x80038060: beq         $t7, $zero, L_80037970
    if (ctx->r15 == 0) {
        // 0x80038064: ori         $at, $at, 0x7FFF
        ctx->r1 = ctx->r1 | 0X7FFF;
            goto L_80037970;
    }
    // 0x80038064: ori         $at, $at, 0x7FFF
    ctx->r1 = ctx->r1 | 0X7FFF;
    // 0x80038068: and         $t8, $a0, $at
    ctx->r24 = ctx->r4 & ctx->r1;
    // 0x8003806C: b           L_80037890
    // 0x80038070: sw          $t8, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r24;
        goto L_80037890;
    // 0x80038070: sw          $t8, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r24;
L_80038074:
    // 0x80038074: jal         0x80031034
    // 0x80038078: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80031034(rdram, ctx);
        goto after_126;
    // 0x80038078: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_126:
    // 0x8003807C: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80038080: lw          $a3, -0xCF0($a3)
    ctx->r7 = MEM_W(ctx->r7, -0XCF0);
    // 0x80038084: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80038088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003808C: jal         0x80009534
    // 0x80038090: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80009534(rdram, ctx);
        goto after_127;
    // 0x80038090: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_127:
    // 0x80038094: jal         0x800094EC
    // 0x80038098: nop

    func_800094EC(rdram, ctx);
        goto after_128;
    // 0x80038098: nop

    after_128:
    // 0x8003809C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800380A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800380A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800380A8: jal         0x80009A84
    // 0x800380AC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80009A84(rdram, ctx);
        goto after_129;
    // 0x800380AC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_129:
    // 0x800380B0: jal         0x800349FC
    // 0x800380B4: nop

    func_800349FC(rdram, ctx);
        goto after_130;
    // 0x800380B4: nop

    after_130:
    // 0x800380B8: jal         0x800349CC
    // 0x800380BC: nop

    func_800349CC(rdram, ctx);
        goto after_131;
    // 0x800380BC: nop

    after_131:
    // 0x800380C0: jal         0x8000797C
    // 0x800380C4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8000797C(rdram, ctx);
        goto after_132;
    // 0x800380C4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_132:
    // 0x800380C8: jal         0x8001D1DC
    // 0x800380CC: nop

    func_8001D1DC(rdram, ctx);
        goto after_133;
    // 0x800380CC: nop

    after_133:
    // 0x800380D0: jal         0x80002AAC
    // 0x800380D4: nop

    func_80002AAC(rdram, ctx);
        goto after_134;
    // 0x800380D4: nop

    after_134:
    // 0x800380D8: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
    // 0x800380DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800380E0: beq         $t9, $at, L_80038128
    if (ctx->r25 == ctx->r1) {
        // 0x800380E4: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_80038128;
    }
    // 0x800380E4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800380E8: jal         0x800517A4
    // 0x800380EC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_800517A4(rdram, ctx);
        goto after_135;
    // 0x800380EC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_135:
    // 0x800380F0: lw          $a1, 0xD0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XD0);
    // 0x800380F4: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x800380F8: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x800380FC: jal         0x80051418
    // 0x80038100: ori         $a1, $t6, 0x5
    ctx->r5 = ctx->r14 | 0X5;
    func_80051418(rdram, ctx);
        goto after_136;
    // 0x80038100: ori         $a1, $t6, 0x5
    ctx->r5 = ctx->r14 | 0X5;
    after_136:
    // 0x80038104: jal         0x80050FE8
    // 0x80038108: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_80050FE8(rdram, ctx);
        goto after_137;
    // 0x80038108: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_137:
    // 0x8003810C: jal         0x8000797C
    // 0x80038110: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8000797C(rdram, ctx);
        goto after_138;
    // 0x80038110: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_138:
    // 0x80038114: jal         0x8001D1DC
    // 0x80038118: nop

    func_8001D1DC(rdram, ctx);
        goto after_139;
    // 0x80038118: nop

    after_139:
    // 0x8003811C: jal         0x80002AAC
    // 0x80038120: nop

    func_80002AAC(rdram, ctx);
        goto after_140;
    // 0x80038120: nop

    after_140:
    // 0x80038124: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_80038128:
    // 0x80038128: b           L_80037CCC
    // 0x8003812C: sw          $t8, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r24;
        goto L_80037CCC;
    // 0x8003812C: sw          $t8, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r24;
L_80038130:
    // 0x80038130: addiu       $t9, $zero, 0x84
    ctx->r25 = ADD32(0, 0X84);
L_80038134:
    // 0x80038134: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80038138: sw          $t9, -0x74C($at)
    MEM_W(-0X74C, ctx->r1) = ctx->r25;
    // 0x8003813C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80038140: sll         $t6, $a0, 15
    ctx->r14 = S32(ctx->r4 << 15);
    // 0x80038144: bltz        $t6, L_800383BC
    if (SIGNED(ctx->r14) < 0) {
        // 0x80038148: sw          $zero, -0x750($at)
        MEM_W(-0X750, ctx->r1) = 0;
            goto L_800383BC;
    }
    // 0x80038148: sw          $zero, -0x750($at)
    MEM_W(-0X750, ctx->r1) = 0;
    // 0x8003814C: lui         $at, 0x24
    ctx->r1 = S32(0X24 << 16);
    // 0x80038150: and         $t7, $a0, $at
    ctx->r15 = ctx->r4 & ctx->r1;
    // 0x80038154: beq         $t7, $zero, L_800381A4
    if (ctx->r15 == 0) {
        // 0x80038158: lui         $a0, 0x800B
        ctx->r4 = S32(0X800B << 16);
            goto L_800381A4;
    }
    // 0x80038158: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8003815C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80038160: jal         0x8003F068
    // 0x80038164: addiu       $s0, $zero, 0x9
    ctx->r16 = ADD32(0, 0X9);
    func_8003F068(rdram, ctx);
        goto after_141;
    // 0x80038164: addiu       $s0, $zero, 0x9
    ctx->r16 = ADD32(0, 0X9);
    after_141:
    // 0x80038168: lw          $t9, 0x0($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X0);
    // 0x8003816C: lw          $t8, 0x18($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X18);
    // 0x80038170: sll         $t6, $t9, 10
    ctx->r14 = S32(ctx->r25 << 10);
    // 0x80038174: bgez        $t6, L_800381FC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80038178: sw          $t8, 0x4($s6)
        MEM_W(0X4, ctx->r22) = ctx->r24;
            goto L_800381FC;
    }
    // 0x80038178: sw          $t8, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r24;
    // 0x8003817C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80038180: lb          $a0, -0x3D5F($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X3D5F);
    // 0x80038184: jal         0x80027140
    // 0x80038188: nop

    func_80027140(rdram, ctx);
        goto after_142;
    // 0x80038188: nop

    after_142:
    // 0x8003818C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80038190: lb          $a0, -0x3D5E($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X3D5E);
    // 0x80038194: jal         0x800270D8
    // 0x80038198: nop

    func_800270D8(rdram, ctx);
        goto after_143;
    // 0x80038198: nop

    after_143:
    // 0x8003819C: b           L_80038200
    // 0x800381A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_80038200;
    // 0x800381A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_800381A4:
    // 0x800381A4: lb          $a0, -0x3D5F($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X3D5F);
    // 0x800381A8: jal         0x80027140
    // 0x800381AC: nop

    func_80027140(rdram, ctx);
        goto after_144;
    // 0x800381AC: nop

    after_144:
    // 0x800381B0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800381B4: lb          $a0, -0x3D5E($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X3D5E);
    // 0x800381B8: jal         0x800270D8
    // 0x800381BC: nop

    func_800270D8(rdram, ctx);
        goto after_145;
    // 0x800381BC: nop

    after_145:
    // 0x800381C0: jal         0x8003E4D4
    // 0x800381C4: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    func_8003E4D4(rdram, ctx);
        goto after_146;
    // 0x800381C4: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    after_146:
    // 0x800381C8: bne         $v0, $zero, L_800381D8
    if (ctx->r2 != 0) {
        // 0x800381CC: addiu       $a0, $zero, 0x1F
        ctx->r4 = ADD32(0, 0X1F);
            goto L_800381D8;
    }
    // 0x800381CC: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x800381D0: b           L_800381FC
    // 0x800381D4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_800381FC;
    // 0x800381D4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800381D8:
    // 0x800381D8: lw          $t7, 0x4($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X4);
    // 0x800381DC: jal         0x800517A4
    // 0x800381E0: sw          $t7, 0x18($s6)
    MEM_W(0X18, ctx->r22) = ctx->r15;
    func_800517A4(rdram, ctx);
        goto after_147;
    // 0x800381E0: sw          $t7, 0x18($s6)
    MEM_W(0X18, ctx->r22) = ctx->r15;
    after_147:
    // 0x800381E4: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x800381E8: jal         0x80051418
    // 0x800381EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80051418(rdram, ctx);
        goto after_148;
    // 0x800381EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_148:
    // 0x800381F0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800381F4: jal         0x80050FE8
    // 0x800381F8: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    func_80050FE8(rdram, ctx);
        goto after_149;
    // 0x800381F8: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_149:
L_800381FC:
    // 0x800381FC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_80038200:
    // 0x80038200: bne         $s0, $at, L_80038214
    if (ctx->r16 != ctx->r1) {
        // 0x80038204: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80038214;
    }
    // 0x80038204: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80038208: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x8003820C: b           L_8003771C
    // 0x80038210: sll         $t8, $a0, 12
    ctx->r24 = S32(ctx->r4 << 12);
        goto L_8003771C;
    // 0x80038210: sll         $t8, $a0, 12
    ctx->r24 = S32(ctx->r4 << 12);
L_80038214:
    // 0x80038214: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80038218: beq         $s0, $at, L_80038228
    if (ctx->r16 == ctx->r1) {
        // 0x8003821C: addiu       $a0, $zero, 0x1F
        ctx->r4 = ADD32(0, 0X1F);
            goto L_80038228;
    }
    // 0x8003821C: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x80038220: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80038224: bne         $s0, $at, L_80038358
    if (ctx->r16 != ctx->r1) {
        // 0x80038228: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_80038358;
    }
L_80038228:
    // 0x80038228: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003822C: sw          $t8, -0xC4($at)
    MEM_W(-0XC4, ctx->r1) = ctx->r24;
    // 0x80038230: lw          $t9, 0x0($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X0);
    // 0x80038234: lui         $at, 0xFFDF
    ctx->r1 = S32(0XFFDF << 16);
    // 0x80038238: lw          $t7, 0x4($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X4);
    // 0x8003823C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80038240: and         $t6, $t9, $at
    ctx->r14 = ctx->r25 & ctx->r1;
    // 0x80038244: sw          $t6, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r14;
    // 0x80038248: jal         0x800517A4
    // 0x8003824C: sw          $t7, 0x18($s6)
    MEM_W(0X18, ctx->r22) = ctx->r15;
    func_800517A4(rdram, ctx);
        goto after_150;
    // 0x8003824C: sw          $t7, 0x18($s6)
    MEM_W(0X18, ctx->r22) = ctx->r15;
    after_150:
    // 0x80038250: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80038254: beq         $s0, $at, L_80038268
    if (ctx->r16 == ctx->r1) {
        // 0x80038258: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80038268;
    }
    // 0x80038258: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8003825C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80038260: bne         $s0, $at, L_80038270
    if (ctx->r16 != ctx->r1) {
        // 0x80038264: nop
    
            goto L_80038270;
    }
    // 0x80038264: nop

L_80038268:
    // 0x80038268: b           L_80038270
    // 0x8003826C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80038270;
    // 0x8003826C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80038270:
    // 0x80038270: jal         0x80051418
    // 0x80038274: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    func_80051418(rdram, ctx);
        goto after_151;
    // 0x80038274: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_151:
    // 0x80038278: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8003827C: jal         0x80050FE8
    // 0x80038280: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    func_80050FE8(rdram, ctx);
        goto after_152;
    // 0x80038280: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_152:
    // 0x80038284: jal         0x8000797C
    // 0x80038288: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8000797C(rdram, ctx);
        goto after_153;
    // 0x80038288: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_153:
    // 0x8003828C: jal         0x8001D1DC
    // 0x80038290: nop

    func_8001D1DC(rdram, ctx);
        goto after_154;
    // 0x80038290: nop

    after_154:
    // 0x80038294: jal         0x80002AAC
    // 0x80038298: nop

    func_80002AAC(rdram, ctx);
        goto after_155;
    // 0x80038298: nop

    after_155:
    // 0x8003829C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800382A0: bne         $s0, $at, L_800382B4
    if (ctx->r16 != ctx->r1) {
        // 0x800382A4: nop
    
            goto L_800382B4;
    }
    // 0x800382A4: nop

    // 0x800382A8: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x800382AC: b           L_80038134
    // 0x800382B0: addiu       $t9, $zero, 0x84
    ctx->r25 = ADD32(0, 0X84);
        goto L_80038134;
    // 0x800382B0: addiu       $t9, $zero, 0x84
    ctx->r25 = ADD32(0, 0X84);
L_800382B4:
    // 0x800382B4: jal         0x8003E3BC
    // 0x800382B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003E3BC(rdram, ctx);
        goto after_156;
    // 0x800382B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_156:
    // 0x800382BC: sll         $t8, $s0, 0
    ctx->r24 = S32(ctx->r16 << 0);
    // 0x800382C0: bgez        $t8, L_8003833C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800382C4: nop
    
            goto L_8003833C;
    }
    // 0x800382C4: nop

    // 0x800382C8: jal         0x800310AC
    // 0x800382CC: sw          $s0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r16;
    func_800310AC(rdram, ctx);
        goto after_157;
    // 0x800382CC: sw          $s0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r16;
    after_157:
    // 0x800382D0: lw          $s0, 0xC4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC4);
    // 0x800382D4: jal         0x80031088
    // 0x800382D8: nop

    func_80031088(rdram, ctx);
        goto after_158;
    // 0x800382D8: nop

    after_158:
    // 0x800382DC: lw          $t9, 0x0($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X0);
    // 0x800382E0: lui         $at, 0x21
    ctx->r1 = S32(0X21 << 16);
    // 0x800382E4: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x800382E8: sw          $zero, 0xC($s6)
    MEM_W(0XC, ctx->r22) = 0;
    // 0x800382EC: sw          $t6, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r14;
    // 0x800382F0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800382F4: sw          $zero, -0xC8($at)
    MEM_W(-0XC8, ctx->r1) = 0;
    // 0x800382F8: addiu       $t7, $zero, 0x809
    ctx->r15 = ADD32(0, 0X809);
    // 0x800382FC: sw          $zero, 0x4($s6)
    MEM_W(0X4, ctx->r22) = 0;
    // 0x80038300: sw          $t7, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r15;
    // 0x80038304: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80038308: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8003830C: jal         0x80027C94
    // 0x80038310: sw          $t8, -0x750($at)
    MEM_W(-0X750, ctx->r1) = ctx->r24;
    func_80027C94(rdram, ctx);
        goto after_159;
    // 0x80038310: sw          $t8, -0x750($at)
    MEM_W(-0X750, ctx->r1) = ctx->r24;
    after_159:
    // 0x80038314: jal         0x800517A4
    // 0x80038318: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_800517A4(rdram, ctx);
        goto after_160;
    // 0x80038318: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_160:
    // 0x8003831C: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x80038320: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80038324: and         $a1, $s0, $at
    ctx->r5 = ctx->r16 & ctx->r1;
    // 0x80038328: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8003832C: jal         0x80051418
    // 0x80038330: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_80051418(rdram, ctx);
        goto after_161;
    // 0x80038330: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_161:
    // 0x80038334: b           L_800383BC
    // 0x80038338: nop

        goto L_800383BC;
    // 0x80038338: nop

L_8003833C:
    // 0x8003833C: lw          $t9, 0x0($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X0);
    // 0x80038340: lui         $at, 0x5
    ctx->r1 = S32(0X5 << 16);
    // 0x80038344: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x80038348: sw          $t6, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r14;
    // 0x8003834C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80038350: b           L_800383BC
    // 0x80038354: sw          $zero, -0xC8($at)
    MEM_W(-0XC8, ctx->r1) = 0;
        goto L_800383BC;
    // 0x80038354: sw          $zero, -0xC8($at)
    MEM_W(-0XC8, ctx->r1) = 0;
L_80038358:
    // 0x80038358: bne         $s0, $zero, L_8003838C
    if (ctx->r16 != 0) {
        // 0x8003835C: sw          $s0, 0x4($s6)
        MEM_W(0X4, ctx->r22) = ctx->r16;
            goto L_8003838C;
    }
    // 0x8003835C: sw          $s0, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r16;
    // 0x80038360: jal         0x8003E4D4
    // 0x80038364: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    func_8003E4D4(rdram, ctx);
        goto after_162;
    // 0x80038364: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    after_162:
    // 0x80038368: bne         $v0, $zero, L_8003838C
    if (ctx->r2 != 0) {
        // 0x8003836C: nop
    
            goto L_8003838C;
    }
    // 0x8003836C: nop

    // 0x80038370: jal         0x80034970
    // 0x80038374: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    func_80034970(rdram, ctx);
        goto after_163;
    // 0x80038374: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    after_163:
    // 0x80038378: jal         0x8003F068
    // 0x8003837C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8003F068(rdram, ctx);
        goto after_164;
    // 0x8003837C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_164:
    // 0x80038380: addiu       $t7, $zero, 0x8AF
    ctx->r15 = ADD32(0, 0X8AF);
    // 0x80038384: b           L_800383B0
    // 0x80038388: sw          $t7, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r15;
        goto L_800383B0;
    // 0x80038388: sw          $t7, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r15;
L_8003838C:
    // 0x8003838C: jal         0x800310AC
    // 0x80038390: sw          $s0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r16;
    func_800310AC(rdram, ctx);
        goto after_165;
    // 0x80038390: sw          $s0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r16;
    after_165:
    // 0x80038394: lw          $s0, 0xD4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD4);
    // 0x80038398: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8003839C: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x800383A0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800383A4: lw          $t9, -0x1C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1C);
    // 0x800383A8: nop

    // 0x800383AC: sw          $t9, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r25;
L_800383B0:
    // 0x800383B0: sw          $zero, 0xC($s6)
    MEM_W(0XC, ctx->r22) = 0;
    // 0x800383B4: jal         0x8003E3BC
    // 0x800383B8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8003E3BC(rdram, ctx);
        goto after_166;
    // 0x800383B8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_166:
L_800383BC:
    // 0x800383BC: jal         0x80030DFC
    // 0x800383C0: nop

    func_80030DFC(rdram, ctx);
        goto after_167;
    // 0x800383C0: nop

    after_167:
L_800383C4:
    // 0x800383C4: jal         0x80030FA0
    // 0x800383C8: nop

    func_80030FA0(rdram, ctx);
        goto after_168;
    // 0x800383C8: nop

    after_168:
    // 0x800383CC: jal         0x8003E3BC
    // 0x800383D0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8003E3BC(rdram, ctx);
        goto after_169;
    // 0x800383D0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_169:
    // 0x800383D4: jal         0x800347CC
    // 0x800383D8: nop

    func_800347CC(rdram, ctx);
        goto after_170;
    // 0x800383D8: nop

    after_170:
    // 0x800383DC: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x800383E0: jal         0x80034698
    // 0x800383E4: addiu       $s6, $s6, -0x42C0
    ctx->r22 = ADD32(ctx->r22, -0X42C0);
    func_80034698(rdram, ctx);
        goto after_171;
    // 0x800383E4: addiu       $s6, $s6, -0x42C0
    ctx->r22 = ADD32(ctx->r22, -0X42C0);
    after_171:
    // 0x800383E8: jal         0x8003089C
    // 0x800383EC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    func_8003089C(rdram, ctx);
        goto after_172;
    // 0x800383EC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    after_172:
    // 0x800383F0: lw          $t6, 0x8($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X8);
    // 0x800383F4: addiu       $at, $zero, 0x87A
    ctx->r1 = ADD32(0, 0X87A);
    // 0x800383F8: bne         $t6, $at, L_80038414
    if (ctx->r14 != ctx->r1) {
        // 0x800383FC: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_80038414;
    }
    // 0x800383FC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80038400: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80038404: jal         0x8001B7E0
    // 0x80038408: sw          $t7, -0x15C0($at)
    MEM_W(-0X15C0, ctx->r1) = ctx->r15;
    func_8001B7E0(rdram, ctx);
        goto after_173;
    // 0x80038408: sw          $t7, -0x15C0($at)
    MEM_W(-0X15C0, ctx->r1) = ctx->r15;
    after_173:
    // 0x8003840C: b           L_8003841C
    // 0x80038410: nop

        goto L_8003841C;
    // 0x80038410: nop

L_80038414:
    // 0x80038414: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80038418: sw          $zero, -0x15C0($at)
    MEM_W(-0X15C0, ctx->r1) = 0;
L_8003841C:
    // 0x8003841C: jal         0x8002D000
    // 0x80038420: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002D000(rdram, ctx);
        goto after_174;
    // 0x80038420: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_174:
    // 0x80038424: jal         0x80031040
    // 0x80038428: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_80031040(rdram, ctx);
        goto after_175;
    // 0x80038428: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_175:
    // 0x8003842C: lw          $v0, 0xC($s6)
    ctx->r2 = MEM_W(ctx->r22, 0XC);
    // 0x80038430: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80038434: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x80038438: beq         $at, $zero, L_80038448
    if (ctx->r1 == 0) {
        // 0x8003843C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80038448;
    }
    // 0x8003843C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80038440: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x80038444: bne         $at, $zero, L_80038468
    if (ctx->r1 != 0) {
        // 0x80038448: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_80038468;
    }
L_80038448:
    // 0x80038448: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003844C: jal         0x8002D000
    // 0x80038450: sw          $t8, -0x3DC0($at)
    MEM_W(-0X3DC0, ctx->r1) = ctx->r24;
    func_8002D000(rdram, ctx);
        goto after_176;
    // 0x80038450: sw          $t8, -0x3DC0($at)
    MEM_W(-0X3DC0, ctx->r1) = ctx->r24;
    after_176:
    // 0x80038454: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80038458: addiu       $a2, $a2, -0x3DC0
    ctx->r6 = ADD32(ctx->r6, -0X3DC0);
    // 0x8003845C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80038460: jal         0x8004A0A0
    // 0x80038464: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_8004A0A0(rdram, ctx);
        goto after_177;
    // 0x80038464: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_177:
L_80038468:
    // 0x80038468: jal         0x8002D000
    // 0x8003846C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002D000(rdram, ctx);
        goto after_178;
    // 0x8003846C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_178:
    // 0x80038470: jal         0x80030DB4
    // 0x80038474: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80030DB4(rdram, ctx);
        goto after_179;
    // 0x80038474: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_179:
    // 0x80038478: lw          $t9, 0x4($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X4);
    // 0x8003847C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80038480: bne         $t9, $at, L_800384E4
    if (ctx->r25 != ctx->r1) {
        // 0x80038484: lui         $t6, 0x8009
        ctx->r14 = S32(0X8009 << 16);
            goto L_800384E4;
    }
    // 0x80038484: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80038488: lw          $t6, -0xC4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XC4);
    // 0x8003848C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80038490: beq         $t6, $zero, L_800384E4
    if (ctx->r14 == 0) {
        // 0x80038494: nop
    
            goto L_800384E4;
    }
    // 0x80038494: nop

    // 0x80038498: lw          $v1, 0x8($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X8);
    // 0x8003849C: addiu       $v0, $v0, -0x118
    ctx->r2 = ADD32(ctx->r2, -0X118);
L_800384A0:
    // 0x800384A0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800384A4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800384A8: bne         $v1, $t7, L_800384D8
    if (ctx->r3 != ctx->r15) {
        // 0x800384AC: addiu       $t6, $t6, -0xE8
        ctx->r14 = ADD32(ctx->r14, -0XE8);
            goto L_800384D8;
    }
    // 0x800384AC: addiu       $t6, $t6, -0xE8
    ctx->r14 = ADD32(ctx->r14, -0XE8);
    // 0x800384B0: lw          $t8, 0xC($s6)
    ctx->r24 = MEM_W(ctx->r22, 0XC);
    // 0x800384B4: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x800384B8: nop

    // 0x800384BC: bne         $t8, $t9, L_800384D8
    if (ctx->r24 != ctx->r25) {
        // 0x800384C0: nop
    
            goto L_800384D8;
    }
    // 0x800384C0: nop

    // 0x800384C4: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    // 0x800384C8: jal         0x80027CEC
    // 0x800384CC: nop

    func_80027CEC(rdram, ctx);
        goto after_180;
    // 0x800384CC: nop

    after_180:
    // 0x800384D0: b           L_800384E8
    // 0x800384D4: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
        goto L_800384E8;
    // 0x800384D4: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
L_800384D8:
    // 0x800384D8: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x800384DC: bne         $v0, $t6, L_800384A0
    if (ctx->r2 != ctx->r14) {
        // 0x800384E0: nop
    
            goto L_800384A0;
    }
    // 0x800384E0: nop

L_800384E4:
    // 0x800384E4: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
L_800384E8:
    // 0x800384E8: nop

    // 0x800384EC: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x800384F0: beq         $t8, $zero, L_80038510
    if (ctx->r24 == 0) {
        // 0x800384F4: nop
    
            goto L_80038510;
    }
    // 0x800384F4: nop

    // 0x800384F8: jal         0x8005C3A8
    // 0x800384FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005C3A8(rdram, ctx);
        goto after_181;
    // 0x800384FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_181:
    // 0x80038500: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x80038504: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x80038508: and         $t6, $t9, $at
    ctx->r14 = ctx->r25 & ctx->r1;
    // 0x8003850C: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
L_80038510:
    // 0x80038510: jal         0x8003424C
    // 0x80038514: nop

    func_8003424C(rdram, ctx);
        goto after_182;
    // 0x80038514: nop

    after_182:
    // 0x80038518: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x8003851C: addiu       $s6, $s6, -0x42C0
    ctx->r22 = ADD32(ctx->r22, -0X42C0);
    // 0x80038520: jal         0x80031034
    // 0x80038524: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80031034(rdram, ctx);
        goto after_183;
    // 0x80038524: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_183:
    // 0x80038528: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8003852C: lw          $v0, -0x750($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X750);
    // 0x80038530: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80038534: bne         $v0, $zero, L_80038590
    if (ctx->r2 != 0) {
        // 0x80038538: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_80038590;
    }
    // 0x80038538: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8003853C: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80038540: lw          $a3, -0xCF0($a3)
    ctx->r7 = MEM_W(ctx->r7, -0XCF0);
    // 0x80038544: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80038548: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003854C: jal         0x8000960C
    // 0x80038550: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8000960C(rdram, ctx);
        goto after_184;
    // 0x80038550: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_184:
    // 0x80038554: jal         0x800094DC
    // 0x80038558: nop

    func_800094DC(rdram, ctx);
        goto after_185;
    // 0x80038558: nop

    after_185:
    // 0x8003855C: beq         $v0, $zero, L_800385DC
    if (ctx->r2 == 0) {
        // 0x80038560: nop
    
            goto L_800385DC;
    }
    // 0x80038560: nop

L_80038564:
    // 0x80038564: jal         0x8003424C
    // 0x80038568: nop

    func_8003424C(rdram, ctx);
        goto after_186;
    // 0x80038568: nop

    after_186:
    // 0x8003856C: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x80038570: jal         0x80007AB0
    // 0x80038574: addiu       $s6, $s6, -0x42C0
    ctx->r22 = ADD32(ctx->r22, -0X42C0);
    func_80007AB0(rdram, ctx);
        goto after_187;
    // 0x80038574: addiu       $s6, $s6, -0x42C0
    ctx->r22 = ADD32(ctx->r22, -0X42C0);
    after_187:
    // 0x80038578: jal         0x800094DC
    // 0x8003857C: nop

    func_800094DC(rdram, ctx);
        goto after_188;
    // 0x8003857C: nop

    after_188:
    // 0x80038580: bne         $v0, $zero, L_80038564
    if (ctx->r2 != 0) {
        // 0x80038584: nop
    
            goto L_80038564;
    }
    // 0x80038584: nop

    // 0x80038588: b           L_800385E0
    // 0x8003858C: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
        goto L_800385E0;
    // 0x8003858C: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
L_80038590:
    // 0x80038590: bne         $v0, $at, L_800385DC
    if (ctx->r2 != ctx->r1) {
        // 0x80038594: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_800385DC;
    }
    // 0x80038594: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80038598: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x8003859C: lw          $a3, -0xCF0($a3)
    ctx->r7 = MEM_W(ctx->r7, -0XCF0);
    // 0x800385A0: jal         0x8000960C
    // 0x800385A4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_8000960C(rdram, ctx);
        goto after_189;
    // 0x800385A4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_189:
    // 0x800385A8: jal         0x800094DC
    // 0x800385AC: nop

    func_800094DC(rdram, ctx);
        goto after_190;
    // 0x800385AC: nop

    after_190:
    // 0x800385B0: beq         $v0, $zero, L_800385DC
    if (ctx->r2 == 0) {
        // 0x800385B4: nop
    
            goto L_800385DC;
    }
    // 0x800385B4: nop

L_800385B8:
    // 0x800385B8: jal         0x8003424C
    // 0x800385BC: nop

    func_8003424C(rdram, ctx);
        goto after_191;
    // 0x800385BC: nop

    after_191:
    // 0x800385C0: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x800385C4: jal         0x80007AB0
    // 0x800385C8: addiu       $s6, $s6, -0x42C0
    ctx->r22 = ADD32(ctx->r22, -0X42C0);
    func_80007AB0(rdram, ctx);
        goto after_192;
    // 0x800385C8: addiu       $s6, $s6, -0x42C0
    ctx->r22 = ADD32(ctx->r22, -0X42C0);
    after_192:
    // 0x800385CC: jal         0x800094DC
    // 0x800385D0: nop

    func_800094DC(rdram, ctx);
        goto after_193;
    // 0x800385D0: nop

    after_193:
    // 0x800385D4: bne         $v0, $zero, L_800385B8
    if (ctx->r2 != 0) {
        // 0x800385D8: nop
    
            goto L_800385B8;
    }
    // 0x800385D8: nop

L_800385DC:
    // 0x800385DC: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
L_800385E0:
    // 0x800385E0: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x800385E4: ori         $at, $at, 0x800
    ctx->r1 = ctx->r1 | 0X800;
    // 0x800385E8: and         $t7, $a0, $at
    ctx->r15 = ctx->r4 & ctx->r1;
    // 0x800385EC: bne         $t7, $zero, L_80038608
    if (ctx->r15 != 0) {
        // 0x800385F0: andi        $t8, $a0, 0x20
        ctx->r24 = ctx->r4 & 0X20;
            goto L_80038608;
    }
    // 0x800385F0: andi        $t8, $a0, 0x20
    ctx->r24 = ctx->r4 & 0X20;
    // 0x800385F4: jal         0x80051FFC
    // 0x800385F8: nop

    func_80051FFC(rdram, ctx);
        goto after_194;
    // 0x800385F8: nop

    after_194:
    // 0x800385FC: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x80038600: nop

    // 0x80038604: andi        $t8, $a0, 0x20
    ctx->r24 = ctx->r4 & 0X20;
L_80038608:
    // 0x80038608: beq         $t8, $zero, L_8003868C
    if (ctx->r24 == 0) {
        // 0x8003860C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8003868C;
    }
    // 0x8003860C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80038610: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80038614: jal         0x80056C2C
    // 0x80038618: addiu       $a2, $sp, 0xB4
    ctx->r6 = ADD32(ctx->r29, 0XB4);
    func_80056C2C(rdram, ctx);
        goto after_195;
    // 0x80038618: addiu       $a2, $sp, 0xB4
    ctx->r6 = ADD32(ctx->r29, 0XB4);
    after_195:
    // 0x8003861C: lw          $t9, 0xB4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB4);
    // 0x80038620: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80038624: ori         $t6, $t9, 0x100
    ctx->r14 = ctx->r25 | 0X100;
    // 0x80038628: sw          $t6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r14;
    // 0x8003862C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80038630: jal         0x80056C2C
    // 0x80038634: addiu       $a2, $sp, 0xB4
    ctx->r6 = ADD32(ctx->r29, 0XB4);
    func_80056C2C(rdram, ctx);
        goto after_196;
    // 0x80038634: addiu       $a2, $sp, 0xB4
    ctx->r6 = ADD32(ctx->r29, 0XB4);
    after_196:
    // 0x80038638: jal         0x8002D000
    // 0x8003863C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8002D000(rdram, ctx);
        goto after_197;
    // 0x8003863C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_197:
    // 0x80038640: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80038644: addiu       $a2, $a2, -0x3DC0
    ctx->r6 = ADD32(ctx->r6, -0X3DC0);
    // 0x80038648: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003864C: jal         0x8004A0A0
    // 0x80038650: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_8004A0A0(rdram, ctx);
        goto after_198;
    // 0x80038650: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_198:
    // 0x80038654: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80038658: lw          $t7, -0x3DB8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3DB8);
    // 0x8003865C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80038660: ori         $t8, $t7, 0x80
    ctx->r24 = ctx->r15 | 0X80;
    // 0x80038664: sw          $t8, -0x3DB8($at)
    MEM_W(-0X3DB8, ctx->r1) = ctx->r24;
    // 0x80038668: jal         0x8002D000
    // 0x8003866C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8002D000(rdram, ctx);
        goto after_199;
    // 0x8003866C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_199:
    // 0x80038670: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80038674: addiu       $a2, $a2, -0x3DC0
    ctx->r6 = ADD32(ctx->r6, -0X3DC0);
    // 0x80038678: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003867C: jal         0x8004A0A0
    // 0x80038680: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_8004A0A0(rdram, ctx);
        goto after_200;
    // 0x80038680: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_200:
    // 0x80038684: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x80038688: nop

L_8003868C:
    // 0x8003868C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80038690: ori         $at, $at, 0x820
    ctx->r1 = ctx->r1 | 0X820;
    // 0x80038694: and         $t9, $a0, $at
    ctx->r25 = ctx->r4 & ctx->r1;
    // 0x80038698: bne         $t9, $zero, L_800386A8
    if (ctx->r25 != 0) {
        // 0x8003869C: nop
    
            goto L_800386A8;
    }
    // 0x8003869C: nop

    // 0x800386A0: jal         0x8005A3DC
    // 0x800386A4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8005A3DC(rdram, ctx);
        goto after_201;
    // 0x800386A4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_201:
L_800386A8:
    // 0x800386A8: jal         0x8003424C
    // 0x800386AC: nop

    func_8003424C(rdram, ctx);
        goto after_202;
    // 0x800386AC: nop

    after_202:
    // 0x800386B0: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x800386B4: addiu       $s6, $s6, -0x42C0
    ctx->r22 = ADD32(ctx->r22, -0X42C0);
    // 0x800386B8: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x800386BC: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x800386C0: andi        $t6, $a0, 0x2
    ctx->r14 = ctx->r4 & 0X2;
    // 0x800386C4: beq         $t6, $zero, L_800386F4
    if (ctx->r14 == 0) {
        // 0x800386C8: andi        $v0, $a0, 0x100
        ctx->r2 = ctx->r4 & 0X100;
            goto L_800386F4;
    }
    // 0x800386C8: andi        $v0, $a0, 0x100
    ctx->r2 = ctx->r4 & 0X100;
    // 0x800386CC: jal         0x80033FF0
    // 0x800386D0: nop

    func_80033FF0(rdram, ctx);
        goto after_203;
    // 0x800386D0: nop

    after_203:
    // 0x800386D4: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x800386D8: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x800386DC: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x800386E0: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x800386E4: sw          $t8, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r24;
    // 0x800386E8: andi        $v0, $t8, 0x100
    ctx->r2 = ctx->r24 & 0X100;
    // 0x800386EC: b           L_80038A98
    // 0x800386F0: addiu       $v1, $v1, -0xC8
    ctx->r3 = ADD32(ctx->r3, -0XC8);
        goto L_80038A98;
    // 0x800386F0: addiu       $v1, $v1, -0xC8
    ctx->r3 = ADD32(ctx->r3, -0XC8);
L_800386F4:
    // 0x800386F4: andi        $t6, $a0, 0x200
    ctx->r14 = ctx->r4 & 0X200;
    // 0x800386F8: beq         $t6, $zero, L_800387C8
    if (ctx->r14 == 0) {
        // 0x800386FC: lui         $at, 0x1
        ctx->r1 = S32(0X1 << 16);
            goto L_800387C8;
    }
    // 0x800386FC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80038700: sll         $t7, $a0, 15
    ctx->r15 = S32(ctx->r4 << 15);
    // 0x80038704: bgez        $t7, L_800387B4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80038708: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_800387B4;
    }
    // 0x80038708: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8003870C: lui         $at, 0xFFFC
    ctx->r1 = S32(0XFFFC << 16);
    // 0x80038710: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80038714: and         $t8, $a0, $at
    ctx->r24 = ctx->r4 & ctx->r1;
    // 0x80038718: sw          $t8, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r24;
    // 0x8003871C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80038720: lw          $t9, -0xC8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0XC8);
    // 0x80038724: nop

    // 0x80038728: beq         $t9, $zero, L_80038740
    if (ctx->r25 == 0) {
        // 0x8003872C: nop
    
            goto L_80038740;
    }
    // 0x8003872C: nop

    // 0x80038730: jal         0x80050FE8
    // 0x80038734: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    func_80050FE8(rdram, ctx);
        goto after_204;
    // 0x80038734: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_204:
    // 0x80038738: b           L_80038750
    // 0x8003873C: nop

        goto L_80038750;
    // 0x8003873C: nop

L_80038740:
    // 0x80038740: jal         0x80050FE8
    // 0x80038744: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_80050FE8(rdram, ctx);
        goto after_205;
    // 0x80038744: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_205:
    // 0x80038748: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003874C: sw          $zero, -0xC4($at)
    MEM_W(-0XC4, ctx->r1) = 0;
L_80038750:
    // 0x80038750: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80038754: addiu       $v0, $v0, -0xC8
    ctx->r2 = ADD32(ctx->r2, -0XC8);
    // 0x80038758: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8003875C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80038760: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80038764: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x80038768: bne         $at, $zero, L_80038778
    if (ctx->r1 != 0) {
        // 0x8003876C: sw          $t7, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r15;
            goto L_80038778;
    }
    // 0x8003876C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80038770: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80038774: sw          $zero, -0xC8($at)
    MEM_W(-0XC8, ctx->r1) = 0;
L_80038778:
    // 0x80038778: lbu         $t9, -0x3D5D($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X3D5D);
    // 0x8003877C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80038780: andi        $t6, $t9, 0x80
    ctx->r14 = ctx->r25 & 0X80;
    // 0x80038784: bne         $t6, $zero, L_800387A0
    if (ctx->r14 != 0) {
        // 0x80038788: lui         $v1, 0x8009
        ctx->r3 = S32(0X8009 << 16);
            goto L_800387A0;
    }
    // 0x80038788: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8003878C: lw          $t7, -0xC8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0XC8);
    // 0x80038790: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80038794: bne         $t7, $at, L_800387A0
    if (ctx->r15 != ctx->r1) {
        // 0x80038798: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_800387A0;
    }
    // 0x80038798: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003879C: sw          $zero, -0xC8($at)
    MEM_W(-0XC8, ctx->r1) = 0;
L_800387A0:
    // 0x800387A0: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x800387A4: addiu       $v1, $v1, -0xC8
    ctx->r3 = ADD32(ctx->r3, -0XC8);
    // 0x800387A8: andi        $t8, $v0, 0x100
    ctx->r24 = ctx->r2 & 0X100;
    // 0x800387AC: b           L_80038A98
    // 0x800387B0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_80038A98;
    // 0x800387B0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_800387B4:
    // 0x800387B4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x800387B8: sw          $t9, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r25;
    // 0x800387BC: addiu       $v1, $v1, -0xC8
    ctx->r3 = ADD32(ctx->r3, -0XC8);
    // 0x800387C0: b           L_80038A98
    // 0x800387C4: andi        $v0, $a0, 0x100
    ctx->r2 = ctx->r4 & 0X100;
        goto L_80038A98;
    // 0x800387C4: andi        $v0, $a0, 0x100
    ctx->r2 = ctx->r4 & 0X100;
L_800387C8:
    // 0x800387C8: andi        $t6, $a0, 0x4001
    ctx->r14 = ctx->r4 & 0X4001;
    // 0x800387CC: beq         $t6, $zero, L_800388BC
    if (ctx->r14 == 0) {
        // 0x800387D0: ori         $at, $at, 0x800
        ctx->r1 = ctx->r1 | 0X800;
            goto L_800388BC;
    }
    // 0x800387D0: ori         $at, $at, 0x800
    ctx->r1 = ctx->r1 | 0X800;
    // 0x800387D4: andi        $t7, $a0, 0x4000
    ctx->r15 = ctx->r4 & 0X4000;
    // 0x800387D8: beq         $t7, $zero, L_800388AC
    if (ctx->r15 == 0) {
        // 0x800387DC: sll         $t8, $a0, 15
        ctx->r24 = S32(ctx->r4 << 15);
            goto L_800388AC;
    }
    // 0x800387DC: sll         $t8, $a0, 15
    ctx->r24 = S32(ctx->r4 << 15);
    // 0x800387E0: bgez        $t8, L_8003889C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800387E4: lui         $t9, 0x8009
        ctx->r25 = S32(0X8009 << 16);
            goto L_8003889C;
    }
    // 0x800387E4: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x800387E8: lw          $t9, -0xC8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0XC8);
    // 0x800387EC: nop

    // 0x800387F0: beq         $t9, $zero, L_80038808
    if (ctx->r25 == 0) {
        // 0x800387F4: nop
    
            goto L_80038808;
    }
    // 0x800387F4: nop

    // 0x800387F8: jal         0x80050FE8
    // 0x800387FC: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    func_80050FE8(rdram, ctx);
        goto after_206;
    // 0x800387FC: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_206:
    // 0x80038800: b           L_80038818
    // 0x80038804: nop

        goto L_80038818;
    // 0x80038804: nop

L_80038808:
    // 0x80038808: jal         0x80050FE8
    // 0x8003880C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_80050FE8(rdram, ctx);
        goto after_207;
    // 0x8003880C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_207:
    // 0x80038810: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80038814: sw          $zero, -0xC4($at)
    MEM_W(-0XC4, ctx->r1) = 0;
L_80038818:
    // 0x80038818: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8003881C: addiu       $v1, $v1, -0xC8
    ctx->r3 = ADD32(ctx->r3, -0XC8);
    // 0x80038820: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80038824: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80038828: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8003882C: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x80038830: bne         $at, $zero, L_8003883C
    if (ctx->r1 != 0) {
        // 0x80038834: sw          $t7, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r15;
            goto L_8003883C;
    }
    // 0x80038834: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80038838: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_8003883C:
    // 0x8003883C: lbu         $t9, -0x3D5D($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X3D5D);
    // 0x80038840: nop

    // 0x80038844: andi        $t6, $t9, 0x80
    ctx->r14 = ctx->r25 & 0X80;
    // 0x80038848: bne         $t6, $zero, L_80038864
    if (ctx->r14 != 0) {
        // 0x8003884C: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_80038864;
    }
    // 0x8003884C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80038850: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80038854: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80038858: bne         $t7, $at, L_80038864
    if (ctx->r15 != ctx->r1) {
        // 0x8003885C: nop
    
            goto L_80038864;
    }
    // 0x8003885C: nop

    // 0x80038860: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_80038864:
    // 0x80038864: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x80038868: lui         $at, 0x28
    ctx->r1 = S32(0X28 << 16);
    // 0x8003886C: and         $t8, $a0, $at
    ctx->r24 = ctx->r4 & ctx->r1;
    // 0x80038870: beq         $t8, $zero, L_8003887C
    if (ctx->r24 == 0) {
        // 0x80038874: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_8003887C;
    }
    // 0x80038874: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80038878: sw          $t9, -0xC4($at)
    MEM_W(-0XC4, ctx->r1) = ctx->r25;
L_8003887C:
    // 0x8003887C: lui         $at, 0xFFF4
    ctx->r1 = S32(0XFFF4 << 16);
    // 0x80038880: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80038884: and         $t6, $a0, $at
    ctx->r14 = ctx->r4 & ctx->r1;
    // 0x80038888: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8003888C: sw          $t6, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r14;
    // 0x80038890: addiu       $v1, $v1, -0xC8
    ctx->r3 = ADD32(ctx->r3, -0XC8);
    // 0x80038894: b           L_80038A98
    // 0x80038898: andi        $v0, $t6, 0x100
    ctx->r2 = ctx->r14 & 0X100;
        goto L_80038A98;
    // 0x80038898: andi        $v0, $t6, 0x100
    ctx->r2 = ctx->r14 & 0X100;
L_8003889C:
    // 0x8003889C: sll         $t7, $a0, 12
    ctx->r15 = S32(ctx->r4 << 12);
    // 0x800388A0: bgez        $t7, L_800388AC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800388A4: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_800388AC;
    }
    // 0x800388A4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800388A8: sw          $zero, -0xC4($at)
    MEM_W(-0XC4, ctx->r1) = 0;
L_800388AC:
    // 0x800388AC: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x800388B0: addiu       $v1, $v1, -0xC8
    ctx->r3 = ADD32(ctx->r3, -0XC8);
    // 0x800388B4: b           L_80038A98
    // 0x800388B8: andi        $v0, $a0, 0x100
    ctx->r2 = ctx->r4 & 0X100;
        goto L_80038A98;
    // 0x800388B8: andi        $v0, $a0, 0x100
    ctx->r2 = ctx->r4 & 0X100;
L_800388BC:
    // 0x800388BC: beq         $v0, $zero, L_800388D0
    if (ctx->r2 == 0) {
        // 0x800388C0: and         $t6, $a0, $at
        ctx->r14 = ctx->r4 & ctx->r1;
            goto L_800388D0;
    }
    // 0x800388C0: and         $t6, $a0, $at
    ctx->r14 = ctx->r4 & ctx->r1;
    // 0x800388C4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x800388C8: b           L_80038A98
    // 0x800388CC: addiu       $v1, $v1, -0xC8
    ctx->r3 = ADD32(ctx->r3, -0XC8);
        goto L_80038A98;
    // 0x800388CC: addiu       $v1, $v1, -0xC8
    ctx->r3 = ADD32(ctx->r3, -0XC8);
L_800388D0:
    // 0x800388D0: lhu         $t8, 0x2C8($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X2C8);
    // 0x800388D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800388D8: andi        $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 & 0X1000;
    // 0x800388DC: beq         $t9, $zero, L_80038958
    if (ctx->r25 == 0) {
        // 0x800388E0: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80038958;
    }
    // 0x800388E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800388E4: bne         $t6, $zero, L_80038958
    if (ctx->r14 != 0) {
        // 0x800388E8: nop
    
            goto L_80038958;
    }
    // 0x800388E8: nop

    // 0x800388EC: jal         0x80056C2C
    // 0x800388F0: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    func_80056C2C(rdram, ctx);
        goto after_208;
    // 0x800388F0: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    after_208:
    // 0x800388F4: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
    // 0x800388F8: nop

    // 0x800388FC: andi        $t8, $t7, 0x100
    ctx->r24 = ctx->r15 & 0X100;
    // 0x80038900: bne         $t8, $zero, L_80038958
    if (ctx->r24 != 0) {
        // 0x80038904: nop
    
            goto L_80038958;
    }
    // 0x80038904: nop

    // 0x80038908: jal         0x80033300
    // 0x8003890C: nop

    func_80033300(rdram, ctx);
        goto after_209;
    // 0x8003890C: nop

    after_209:
    // 0x80038910: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x80038914: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80038918: bne         $v0, $at, L_80038958
    if (ctx->r2 != ctx->r1) {
        // 0x8003891C: addiu       $s6, $s6, -0x42C0
        ctx->r22 = ADD32(ctx->r22, -0X42C0);
            goto L_80038958;
    }
    // 0x8003891C: addiu       $s6, $s6, -0x42C0
    ctx->r22 = ADD32(ctx->r22, -0X42C0);
    // 0x80038920: lw          $t9, 0x0($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X0);
    // 0x80038924: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80038928: ori         $t6, $t9, 0x200
    ctx->r14 = ctx->r25 | 0X200;
    // 0x8003892C: sw          $t6, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r14;
    // 0x80038930: jal         0x8003F068
    // 0x80038934: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    func_8003F068(rdram, ctx);
        goto after_210;
    // 0x80038934: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    after_210:
    // 0x80038938: jal         0x8003E4FC
    // 0x8003893C: addiu       $a0, $zero, 0xF6
    ctx->r4 = ADD32(0, 0XF6);
    func_8003E4FC(rdram, ctx);
        goto after_211;
    // 0x8003893C: addiu       $a0, $zero, 0xF6
    ctx->r4 = ADD32(0, 0XF6);
    after_211:
    // 0x80038940: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x80038944: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80038948: andi        $t7, $v0, 0x100
    ctx->r15 = ctx->r2 & 0X100;
    // 0x8003894C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80038950: b           L_80038A98
    // 0x80038954: addiu       $v1, $v1, -0xC8
    ctx->r3 = ADD32(ctx->r3, -0XC8);
        goto L_80038A98;
    // 0x80038954: addiu       $v1, $v1, -0xC8
    ctx->r3 = ADD32(ctx->r3, -0XC8);
L_80038958:
    // 0x80038958: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x8003895C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80038960: ori         $at, $at, 0x828
    ctx->r1 = ctx->r1 | 0X828;
    // 0x80038964: and         $t8, $a0, $at
    ctx->r24 = ctx->r4 & ctx->r1;
    // 0x80038968: bne         $t8, $zero, L_800389E8
    if (ctx->r24 != 0) {
        // 0x8003896C: lui         $t9, 0x800A
        ctx->r25 = S32(0X800A << 16);
            goto L_800389E8;
    }
    // 0x8003896C: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x80038970: lhu         $t9, 0x2C8($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X2C8);
    // 0x80038974: andi        $t7, $a0, 0x1000
    ctx->r15 = ctx->r4 & 0X1000;
    // 0x80038978: andi        $t6, $t9, 0x8
    ctx->r14 = ctx->r25 & 0X8;
    // 0x8003897C: bne         $t6, $zero, L_800389A0
    if (ctx->r14 != 0) {
        // 0x80038980: lui         $t8, 0x800A
        ctx->r24 = S32(0X800A << 16);
            goto L_800389A0;
    }
    // 0x80038980: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80038984: beq         $t7, $zero, L_800389E8
    if (ctx->r15 == 0) {
        // 0x80038988: nop
    
            goto L_800389E8;
    }
    // 0x80038988: nop

    // 0x8003898C: lhu         $t8, 0x2CA($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X2CA);
    // 0x80038990: nop

    // 0x80038994: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x80038998: beq         $t9, $zero, L_800389E8
    if (ctx->r25 == 0) {
        // 0x8003899C: nop
    
            goto L_800389E8;
    }
    // 0x8003899C: nop

L_800389A0:
    // 0x800389A0: jal         0x8002D000
    // 0x800389A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8002D000(rdram, ctx);
        goto after_212;
    // 0x800389A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_212:
    // 0x800389A8: jal         0x8005B494
    // 0x800389AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8005B494(rdram, ctx);
        goto after_213;
    // 0x800389AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_213:
    // 0x800389B0: beq         $v0, $zero, L_800389E8
    if (ctx->r2 == 0) {
        // 0x800389B4: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_800389E8;
    }
    // 0x800389B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800389B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800389BC: jal         0x80056C2C
    // 0x800389C0: addiu       $a2, $sp, 0xA4
    ctx->r6 = ADD32(ctx->r29, 0XA4);
    func_80056C2C(rdram, ctx);
        goto after_214;
    // 0x800389C0: addiu       $a2, $sp, 0xA4
    ctx->r6 = ADD32(ctx->r29, 0XA4);
    after_214:
    // 0x800389C4: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x800389C8: nop

    // 0x800389CC: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x800389D0: bne         $t7, $zero, L_80038A88
    if (ctx->r15 != 0) {
        // 0x800389D4: nop
    
            goto L_80038A88;
    }
    // 0x800389D4: nop

    // 0x800389D8: jal         0x8005B990
    // 0x800389DC: nop

    func_8005B990(rdram, ctx);
        goto after_215;
    // 0x800389DC: nop

    after_215:
    // 0x800389E0: b           L_80038A88
    // 0x800389E4: nop

        goto L_80038A88;
    // 0x800389E4: nop

L_800389E8:
    // 0x800389E8: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x800389EC: lhu         $t8, 0x2C8($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X2C8);
    // 0x800389F0: nop

    // 0x800389F4: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x800389F8: beq         $t9, $zero, L_80038A24
    if (ctx->r25 == 0) {
        // 0x800389FC: nop
    
            goto L_80038A24;
    }
    // 0x800389FC: nop

    // 0x80038A00: jal         0x8005B05C
    // 0x80038A04: nop

    func_8005B05C(rdram, ctx);
        goto after_216;
    // 0x80038A04: nop

    after_216:
    // 0x80038A08: beq         $v0, $zero, L_80038A24
    if (ctx->r2 == 0) {
        // 0x80038A0C: lui         $at, 0x1
        ctx->r1 = S32(0X1 << 16);
            goto L_80038A24;
    }
    // 0x80038A0C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80038A10: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x80038A14: ori         $at, $at, 0x800
    ctx->r1 = ctx->r1 | 0X800;
    // 0x80038A18: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80038A1C: beq         $t7, $zero, L_80038A4C
    if (ctx->r15 == 0) {
        // 0x80038A20: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80038A4C;
    }
    // 0x80038A20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80038A24:
    // 0x80038A24: lw          $t8, 0x0($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X0);
    // 0x80038A28: lui         $at, 0x6
    ctx->r1 = S32(0X6 << 16);
    // 0x80038A2C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80038A30: beq         $t9, $zero, L_80038A88
    if (ctx->r25 == 0) {
        // 0x80038A34: lui         $t6, 0x800B
        ctx->r14 = S32(0X800B << 16);
            goto L_80038A88;
    }
    // 0x80038A34: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80038A38: lw          $t6, -0x3DC8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3DC8);
    // 0x80038A3C: nop

    // 0x80038A40: andi        $t7, $t6, 0x7
    ctx->r15 = ctx->r14 & 0X7;
    // 0x80038A44: beq         $t7, $zero, L_80038A88
    if (ctx->r15 == 0) {
        // 0x80038A48: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80038A88;
    }
    // 0x80038A48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80038A4C:
    // 0x80038A4C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80038A50: jal         0x80056C2C
    // 0x80038A54: addiu       $a2, $sp, 0x9C
    ctx->r6 = ADD32(ctx->r29, 0X9C);
    func_80056C2C(rdram, ctx);
        goto after_217;
    // 0x80038A54: addiu       $a2, $sp, 0x9C
    ctx->r6 = ADD32(ctx->r29, 0X9C);
    after_217:
    // 0x80038A58: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x80038A5C: nop

    // 0x80038A60: andi        $t9, $t8, 0x100
    ctx->r25 = ctx->r24 & 0X100;
    // 0x80038A64: beq         $t9, $zero, L_80038A80
    if (ctx->r25 == 0) {
        // 0x80038A68: nop
    
            goto L_80038A80;
    }
    // 0x80038A68: nop

    // 0x80038A6C: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x80038A70: lui         $at, 0x6
    ctx->r1 = S32(0X6 << 16);
    // 0x80038A74: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80038A78: beq         $t7, $zero, L_80038A88
    if (ctx->r15 == 0) {
        // 0x80038A7C: nop
    
            goto L_80038A88;
    }
    // 0x80038A7C: nop

L_80038A80:
    // 0x80038A80: jal         0x800318E4
    // 0x80038A84: nop

    func_800318E4(rdram, ctx);
        goto after_218;
    // 0x80038A84: nop

    after_218:
L_80038A88:
    // 0x80038A88: jal         0x80007AB0
    // 0x80038A8C: nop

    func_80007AB0(rdram, ctx);
        goto after_219;
    // 0x80038A8C: nop

    after_219:
    // 0x80038A90: b           L_800386A8
    // 0x80038A94: nop

        goto L_800386A8;
    // 0x80038A94: nop

L_80038A98:
    // 0x80038A98: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80038A9C: beq         $v0, $zero, L_80038D28
    if (ctx->r2 == 0) {
        // 0x80038AA0: sw          $zero, -0xC0($at)
        MEM_W(-0XC0, ctx->r1) = 0;
            goto L_80038D28;
    }
    // 0x80038AA0: sw          $zero, -0xC0($at)
    MEM_W(-0XC0, ctx->r1) = 0;
    // 0x80038AA4: jal         0x80030FA0
    // 0x80038AA8: nop

    func_80030FA0(rdram, ctx);
        goto after_220;
    // 0x80038AA8: nop

    after_220:
    // 0x80038AAC: jal         0x80007AB0
    // 0x80038AB0: nop

    func_80007AB0(rdram, ctx);
        goto after_221;
    // 0x80038AB0: nop

    after_221:
    // 0x80038AB4: jal         0x80031260
    // 0x80038AB8: nop

    func_80031260(rdram, ctx);
        goto after_222;
    // 0x80038AB8: nop

    after_222:
    // 0x80038ABC: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x80038AC0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80038AC4: addiu       $s6, $s6, -0x42C0
    ctx->r22 = ADD32(ctx->r22, -0X42C0);
    // 0x80038AC8: bne         $v0, $at, L_80038B7C
    if (ctx->r2 != ctx->r1) {
        // 0x80038ACC: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80038B7C;
    }
    // 0x80038ACC: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80038AD0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80038AD4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80038AD8: sw          $t8, -0xC4($at)
    MEM_W(-0XC4, ctx->r1) = ctx->r24;
    // 0x80038ADC: jal         0x8002D000
    // 0x80038AE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002D000(rdram, ctx);
        goto after_223;
    // 0x80038AE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_223:
    // 0x80038AE4: jal         0x80031040
    // 0x80038AE8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_80031040(rdram, ctx);
        goto after_224;
    // 0x80038AE8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_224:
    // 0x80038AEC: jal         0x80031034
    // 0x80038AF0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80031034(rdram, ctx);
        goto after_225;
    // 0x80038AF0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_225:
    // 0x80038AF4: jal         0x80027C94
    // 0x80038AF8: nop

    func_80027C94(rdram, ctx);
        goto after_226;
    // 0x80038AF8: nop

    after_226:
    // 0x80038AFC: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80038B00: lw          $a3, -0xCF0($a3)
    ctx->r7 = MEM_W(ctx->r7, -0XCF0);
    // 0x80038B04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80038B08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80038B0C: jal         0x80009534
    // 0x80038B10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80009534(rdram, ctx);
        goto after_227;
    // 0x80038B10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_227:
    // 0x80038B14: jal         0x800094EC
    // 0x80038B18: nop

    func_800094EC(rdram, ctx);
        goto after_228;
    // 0x80038B18: nop

    after_228:
    // 0x80038B1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80038B20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80038B24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80038B28: jal         0x80009A84
    // 0x80038B2C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80009A84(rdram, ctx);
        goto after_229;
    // 0x80038B2C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_229:
    // 0x80038B30: jal         0x80031000
    // 0x80038B34: nop

    func_80031000(rdram, ctx);
        goto after_230;
    // 0x80038B34: nop

    after_230:
    // 0x80038B38: jal         0x80030F54
    // 0x80038B3C: nop

    func_80030F54(rdram, ctx);
        goto after_231;
    // 0x80038B3C: nop

    after_231:
    // 0x80038B40: jal         0x80031250
    // 0x80038B44: nop

    func_80031250(rdram, ctx);
        goto after_232;
    // 0x80038B44: nop

    after_232:
    // 0x80038B48: jal         0x80030EDC
    // 0x80038B4C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80030EDC(rdram, ctx);
        goto after_233;
    // 0x80038B4C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_233:
    // 0x80038B50: jal         0x8000797C
    // 0x80038B54: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8000797C(rdram, ctx);
        goto after_234;
    // 0x80038B54: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_234:
    // 0x80038B58: jal         0x8001D1DC
    // 0x80038B5C: nop

    func_8001D1DC(rdram, ctx);
        goto after_235;
    // 0x80038B5C: nop

    after_235:
    // 0x80038B60: jal         0x80002AAC
    // 0x80038B64: nop

    func_80002AAC(rdram, ctx);
        goto after_236;
    // 0x80038B64: nop

    after_236:
    // 0x80038B68: lw          $t9, 0x0($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X0);
    // 0x80038B6C: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x80038B70: and         $t6, $t9, $at
    ctx->r14 = ctx->r25 & ctx->r1;
    // 0x80038B74: b           L_80038F9C
    // 0x80038B78: sw          $t6, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r14;
        goto L_80038F9C;
    // 0x80038B78: sw          $t6, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r14;
L_80038B7C:
    // 0x80038B7C: lw          $a0, 0x4($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X4);
    // 0x80038B80: sw          $zero, 0xC($s6)
    MEM_W(0XC, ctx->r22) = 0;
    // 0x80038B84: jal         0x8003E4D4
    // 0x80038B88: addiu       $a0, $a0, 0x88
    ctx->r4 = ADD32(ctx->r4, 0X88);
    func_8003E4D4(rdram, ctx);
        goto after_237;
    // 0x80038B88: addiu       $a0, $a0, 0x88
    ctx->r4 = ADD32(ctx->r4, 0X88);
    after_237:
    // 0x80038B8C: beq         $v0, $zero, L_80038BE8
    if (ctx->r2 == 0) {
        // 0x80038B90: nop
    
            goto L_80038BE8;
    }
    // 0x80038B90: nop

    // 0x80038B94: jal         0x8003E4D4
    // 0x80038B98: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    func_8003E4D4(rdram, ctx);
        goto after_238;
    // 0x80038B98: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    after_238:
    // 0x80038B9C: beq         $v0, $zero, L_80038BE8
    if (ctx->r2 == 0) {
        // 0x80038BA0: nop
    
            goto L_80038BE8;
    }
    // 0x80038BA0: nop

    // 0x80038BA4: lw          $t7, 0x4($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X4);
    // 0x80038BA8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80038BAC: bne         $t7, $at, L_80038BCC
    if (ctx->r15 != ctx->r1) {
        // 0x80038BB0: nop
    
            goto L_80038BCC;
    }
    // 0x80038BB0: nop

    // 0x80038BB4: jal         0x8003E4D4
    // 0x80038BB8: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    func_8003E4D4(rdram, ctx);
        goto after_239;
    // 0x80038BB8: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    after_239:
    // 0x80038BBC: beq         $v0, $zero, L_80038BCC
    if (ctx->r2 == 0) {
        // 0x80038BC0: addiu       $t8, $zero, 0x8BB
        ctx->r24 = ADD32(0, 0X8BB);
            goto L_80038BCC;
    }
    // 0x80038BC0: addiu       $t8, $zero, 0x8BB
    ctx->r24 = ADD32(0, 0X8BB);
    // 0x80038BC4: b           L_80038CBC
    // 0x80038BC8: sw          $t8, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r24;
        goto L_80038CBC;
    // 0x80038BC8: sw          $t8, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r24;
L_80038BCC:
    // 0x80038BCC: lw          $t9, 0x4($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X4);
    // 0x80038BD0: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80038BD4: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80038BD8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80038BDC: lw          $t7, 0x8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X8);
    // 0x80038BE0: b           L_80038CBC
    // 0x80038BE4: sw          $t7, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r15;
        goto L_80038CBC;
    // 0x80038BE4: sw          $t7, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r15;
L_80038BE8:
    // 0x80038BE8: jal         0x8003E4D4
    // 0x80038BEC: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    func_8003E4D4(rdram, ctx);
        goto after_240;
    // 0x80038BEC: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    after_240:
    // 0x80038BF0: beq         $v0, $zero, L_80038CA0
    if (ctx->r2 == 0) {
        // 0x80038BF4: nop
    
            goto L_80038CA0;
    }
    // 0x80038BF4: nop

    // 0x80038BF8: lw          $t8, 0x4($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X4);
    // 0x80038BFC: nop

    // 0x80038C00: bne         $t8, $zero, L_80038C28
    if (ctx->r24 != 0) {
        // 0x80038C04: nop
    
            goto L_80038C28;
    }
    // 0x80038C04: nop

    // 0x80038C08: jal         0x8003E4D4
    // 0x80038C0C: addiu       $a0, $zero, 0x9C
    ctx->r4 = ADD32(0, 0X9C);
    func_8003E4D4(rdram, ctx);
        goto after_241;
    // 0x80038C0C: addiu       $a0, $zero, 0x9C
    ctx->r4 = ADD32(0, 0X9C);
    after_241:
    // 0x80038C10: beq         $v0, $zero, L_80038C28
    if (ctx->r2 == 0) {
        // 0x80038C14: addiu       $t9, $zero, 0x84C
        ctx->r25 = ADD32(0, 0X84C);
            goto L_80038C28;
    }
    // 0x80038C14: addiu       $t9, $zero, 0x84C
    ctx->r25 = ADD32(0, 0X84C);
    // 0x80038C18: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80038C1C: sw          $t9, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r25;
    // 0x80038C20: b           L_80038CBC
    // 0x80038C24: sw          $t6, 0xC($s6)
    MEM_W(0XC, ctx->r22) = ctx->r14;
        goto L_80038CBC;
    // 0x80038C24: sw          $t6, 0xC($s6)
    MEM_W(0XC, ctx->r22) = ctx->r14;
L_80038C28:
    // 0x80038C28: lw          $t7, 0x4($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X4);
    // 0x80038C2C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80038C30: bne         $t7, $at, L_80038C58
    if (ctx->r15 != ctx->r1) {
        // 0x80038C34: nop
    
            goto L_80038C58;
    }
    // 0x80038C34: nop

    // 0x80038C38: jal         0x8003E4D4
    // 0x80038C3C: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    func_8003E4D4(rdram, ctx);
        goto after_242;
    // 0x80038C3C: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    after_242:
    // 0x80038C40: beq         $v0, $zero, L_80038C58
    if (ctx->r2 == 0) {
        // 0x80038C44: addiu       $t8, $zero, 0x865
        ctx->r24 = ADD32(0, 0X865);
            goto L_80038C58;
    }
    // 0x80038C44: addiu       $t8, $zero, 0x865
    ctx->r24 = ADD32(0, 0X865);
    // 0x80038C48: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80038C4C: sw          $t8, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r24;
    // 0x80038C50: b           L_80038CBC
    // 0x80038C54: sw          $t9, 0xC($s6)
    MEM_W(0XC, ctx->r22) = ctx->r25;
        goto L_80038CBC;
    // 0x80038C54: sw          $t9, 0xC($s6)
    MEM_W(0XC, ctx->r22) = ctx->r25;
L_80038C58:
    // 0x80038C58: lw          $t6, 0x4($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X4);
    // 0x80038C5C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80038C60: bne         $t6, $at, L_80038C84
    if (ctx->r14 != ctx->r1) {
        // 0x80038C64: nop
    
            goto L_80038C84;
    }
    // 0x80038C64: nop

    // 0x80038C68: jal         0x8003E4D4
    // 0x80038C6C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    func_8003E4D4(rdram, ctx);
        goto after_243;
    // 0x80038C6C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    after_243:
    // 0x80038C70: beq         $v0, $zero, L_80038C84
    if (ctx->r2 == 0) {
        // 0x80038C74: addiu       $t7, $zero, 0x82E
        ctx->r15 = ADD32(0, 0X82E);
            goto L_80038C84;
    }
    // 0x80038C74: addiu       $t7, $zero, 0x82E
    ctx->r15 = ADD32(0, 0X82E);
    // 0x80038C78: sw          $t7, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r15;
    // 0x80038C7C: b           L_80038CBC
    // 0x80038C80: sw          $zero, 0xC($s6)
    MEM_W(0XC, ctx->r22) = 0;
        goto L_80038CBC;
    // 0x80038C80: sw          $zero, 0xC($s6)
    MEM_W(0XC, ctx->r22) = 0;
L_80038C84:
    // 0x80038C84: lw          $t8, 0x4($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X4);
    // 0x80038C88: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80038C8C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80038C90: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80038C94: lw          $t6, -0x1C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1C);
    // 0x80038C98: b           L_80038CBC
    // 0x80038C9C: sw          $t6, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r14;
        goto L_80038CBC;
    // 0x80038C9C: sw          $t6, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r14;
L_80038CA0:
    // 0x80038CA0: lw          $t7, 0x4($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X4);
    // 0x80038CA4: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80038CA8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80038CAC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80038CB0: lw          $t9, -0x1C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1C);
    // 0x80038CB4: nop

    // 0x80038CB8: sw          $t9, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r25;
L_80038CBC:
    // 0x80038CBC: jal         0x800310AC
    // 0x80038CC0: nop

    func_800310AC(rdram, ctx);
        goto after_244;
    // 0x80038CC0: nop

    after_244:
    // 0x80038CC4: jal         0x80031088
    // 0x80038CC8: nop

    func_80031088(rdram, ctx);
        goto after_245;
    // 0x80038CC8: nop

    after_245:
    // 0x80038CCC: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x80038CD0: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x80038CD4: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80038CD8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80038CDC: bne         $s3, $at, L_80038D04
    if (ctx->r19 != ctx->r1) {
        // 0x80038CE0: sw          $t7, 0x0($s6)
        MEM_W(0X0, ctx->r22) = ctx->r15;
            goto L_80038D04;
    }
    // 0x80038CE0: sw          $t7, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r15;
    // 0x80038CE4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80038CE8: jal         0x8003F068
    // 0x80038CEC: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    func_8003F068(rdram, ctx);
        goto after_246;
    // 0x80038CEC: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    after_246:
    // 0x80038CF0: lw          $t8, 0x0($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X0);
    // 0x80038CF4: nop

    // 0x80038CF8: ori         $t9, $t8, 0x200
    ctx->r25 = ctx->r24 | 0X200;
    // 0x80038CFC: b           L_80038D10
    // 0x80038D00: sw          $t9, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r25;
        goto L_80038D10;
    // 0x80038D00: sw          $t9, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r25;
L_80038D04:
    // 0x80038D04: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80038D08: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80038D0C: sw          $t6, -0xC0($at)
    MEM_W(-0XC0, ctx->r1) = ctx->r14;
L_80038D10:
    // 0x80038D10: jal         0x8003089C
    // 0x80038D14: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    func_8003089C(rdram, ctx);
        goto after_247;
    // 0x80038D14: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_247:
    // 0x80038D18: jal         0x8003E4FC
    // 0x80038D1C: addiu       $a0, $zero, 0xF6
    ctx->r4 = ADD32(0, 0XF6);
    func_8003E4FC(rdram, ctx);
        goto after_248;
    // 0x80038D1C: addiu       $a0, $zero, 0xF6
    ctx->r4 = ADD32(0, 0XF6);
    after_248:
    // 0x80038D20: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80038D24: addiu       $v1, $v1, -0xC8
    ctx->r3 = ADD32(ctx->r3, -0XC8);
L_80038D28:
    // 0x80038D28: jal         0x8002D000
    // 0x80038D2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002D000(rdram, ctx);
        goto after_249;
    // 0x80038D2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_249:
    // 0x80038D30: jal         0x80031040
    // 0x80038D34: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_80031040(rdram, ctx);
        goto after_250;
    // 0x80038D34: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_250:
    // 0x80038D38: jal         0x80031034
    // 0x80038D3C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80031034(rdram, ctx);
        goto after_251;
    // 0x80038D3C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_251:
    // 0x80038D40: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x80038D44: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80038D48: andi        $t8, $t7, 0x4200
    ctx->r24 = ctx->r15 & 0X4200;
    // 0x80038D4C: beq         $t8, $zero, L_80038D74
    if (ctx->r24 == 0) {
        // 0x80038D50: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_80038D74;
    }
    // 0x80038D50: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80038D54: lw          $t9, -0xC4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0XC4);
    // 0x80038D58: nop

    // 0x80038D5C: beq         $t9, $zero, L_80038D74
    if (ctx->r25 == 0) {
        // 0x80038D60: nop
    
            goto L_80038D74;
    }
    // 0x80038D60: nop

    // 0x80038D64: jal         0x80027C94
    // 0x80038D68: nop

    func_80027C94(rdram, ctx);
        goto after_252;
    // 0x80038D68: nop

    after_252:
    // 0x80038D6C: b           L_80038DDC
    // 0x80038D70: nop

        goto L_80038DDC;
    // 0x80038D70: nop

L_80038D74:
    // 0x80038D74: lw          $t6, 0x4($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X4);
    // 0x80038D78: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80038D7C: bne         $t6, $at, L_80038DDC
    if (ctx->r14 != ctx->r1) {
        // 0x80038D80: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_80038DDC;
    }
    // 0x80038D80: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80038D84: lw          $t7, -0xC4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0XC4);
    // 0x80038D88: nop

    // 0x80038D8C: beq         $t7, $zero, L_80038DDC
    if (ctx->r15 == 0) {
        // 0x80038D90: nop
    
            goto L_80038DDC;
    }
    // 0x80038D90: nop

    // 0x80038D94: lw          $v1, 0x8($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X8);
    // 0x80038D98: addiu       $v0, $v0, -0x118
    ctx->r2 = ADD32(ctx->r2, -0X118);
L_80038D9C:
    // 0x80038D9C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80038DA0: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80038DA4: bne         $v1, $t8, L_80038DD0
    if (ctx->r3 != ctx->r24) {
        // 0x80038DA8: addiu       $t7, $t7, -0xE8
        ctx->r15 = ADD32(ctx->r15, -0XE8);
            goto L_80038DD0;
    }
    // 0x80038DA8: addiu       $t7, $t7, -0xE8
    ctx->r15 = ADD32(ctx->r15, -0XE8);
    // 0x80038DAC: lw          $t9, 0xC($s6)
    ctx->r25 = MEM_W(ctx->r22, 0XC);
    // 0x80038DB0: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x80038DB4: nop

    // 0x80038DB8: bne         $t9, $t6, L_80038DD4
    if (ctx->r25 != ctx->r14) {
        // 0x80038DBC: addiu       $v0, $v0, 0xC
        ctx->r2 = ADD32(ctx->r2, 0XC);
            goto L_80038DD4;
    }
    // 0x80038DBC: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80038DC0: jal         0x80027C94
    // 0x80038DC4: nop

    func_80027C94(rdram, ctx);
        goto after_253;
    // 0x80038DC4: nop

    after_253:
    // 0x80038DC8: b           L_80038DDC
    // 0x80038DCC: nop

        goto L_80038DDC;
    // 0x80038DCC: nop

L_80038DD0:
    // 0x80038DD0: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
L_80038DD4:
    // 0x80038DD4: bne         $v0, $t7, L_80038D9C
    if (ctx->r2 != ctx->r15) {
        // 0x80038DD8: nop
    
            goto L_80038D9C;
    }
    // 0x80038DD8: nop

L_80038DDC:
    // 0x80038DDC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80038DE0: lw          $v0, -0x750($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X750);
    // 0x80038DE4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80038DE8: bne         $v0, $zero, L_80038E18
    if (ctx->r2 != 0) {
        // 0x80038DEC: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_80038E18;
    }
    // 0x80038DEC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80038DF0: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80038DF4: lw          $a3, -0xCF0($a3)
    ctx->r7 = MEM_W(ctx->r7, -0XCF0);
    // 0x80038DF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80038DFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80038E00: jal         0x80009534
    // 0x80038E04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80009534(rdram, ctx);
        goto after_254;
    // 0x80038E04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_254:
    // 0x80038E08: jal         0x800094EC
    // 0x80038E0C: nop

    func_800094EC(rdram, ctx);
        goto after_255;
    // 0x80038E0C: nop

    after_255:
    // 0x80038E10: b           L_80038E3C
    // 0x80038E14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_80038E3C;
    // 0x80038E14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80038E18:
    // 0x80038E18: bne         $v0, $at, L_80038E38
    if (ctx->r2 != ctx->r1) {
        // 0x80038E1C: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_80038E38;
    }
    // 0x80038E1C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80038E20: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80038E24: lw          $a3, -0xCF0($a3)
    ctx->r7 = MEM_W(ctx->r7, -0XCF0);
    // 0x80038E28: jal         0x80009534
    // 0x80038E2C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80009534(rdram, ctx);
        goto after_256;
    // 0x80038E2C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_256:
    // 0x80038E30: jal         0x800094EC
    // 0x80038E34: nop

    func_800094EC(rdram, ctx);
        goto after_257;
    // 0x80038E34: nop

    after_257:
L_80038E38:
    // 0x80038E38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80038E3C:
    // 0x80038E3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80038E40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80038E44: jal         0x80009A84
    // 0x80038E48: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80009A84(rdram, ctx);
        goto after_258;
    // 0x80038E48: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_258:
    // 0x80038E4C: jal         0x80031000
    // 0x80038E50: nop

    func_80031000(rdram, ctx);
        goto after_259;
    // 0x80038E50: nop

    after_259:
    // 0x80038E54: jal         0x80030F54
    // 0x80038E58: nop

    func_80030F54(rdram, ctx);
        goto after_260;
    // 0x80038E58: nop

    after_260:
    // 0x80038E5C: jal         0x80030EDC
    // 0x80038E60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80030EDC(rdram, ctx);
        goto after_261;
    // 0x80038E60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_261:
    // 0x80038E64: jal         0x8000797C
    // 0x80038E68: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8000797C(rdram, ctx);
        goto after_262;
    // 0x80038E68: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_262:
    // 0x80038E6C: jal         0x8001D1DC
    // 0x80038E70: nop

    func_8001D1DC(rdram, ctx);
        goto after_263;
    // 0x80038E70: nop

    after_263:
    // 0x80038E74: jal         0x80002AAC
    // 0x80038E78: nop

    func_80002AAC(rdram, ctx);
        goto after_264;
    // 0x80038E78: nop

    after_264:
    // 0x80038E7C: lw          $t8, 0xCC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XCC);
    // 0x80038E80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80038E84: beq         $t8, $zero, L_80038F5C
    if (ctx->r24 == 0) {
        // 0x80038E88: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80038F5C;
    }
    // 0x80038E88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80038E8C: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    // 0x80038E90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80038E94: jal         0x8000960C
    // 0x80038E98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8000960C(rdram, ctx);
        goto after_265;
    // 0x80038E98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_265:
    // 0x80038E9C: jal         0x8003E9C4
    // 0x80038EA0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8003E9C4(rdram, ctx);
        goto after_266;
    // 0x80038EA0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_266:
    // 0x80038EA4: jal         0x80002F88
    // 0x80038EA8: addiu       $a0, $zero, 0x7F1
    ctx->r4 = ADD32(0, 0X7F1);
    func_80002F88(rdram, ctx);
        goto after_267;
    // 0x80038EA8: addiu       $a0, $zero, 0x7F1
    ctx->r4 = ADD32(0, 0X7F1);
    after_267:
    // 0x80038EAC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80038EB0: jal         0x8003E690
    // 0x80038EB4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8003E690(rdram, ctx);
        goto after_268;
    // 0x80038EB4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_268:
    // 0x80038EB8: beq         $v0, $zero, L_80038F10
    if (ctx->r2 == 0) {
        // 0x80038EBC: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80038F10;
    }
    // 0x80038EBC: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80038EC0: jal         0x80027874
    // 0x80038EC4: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    func_80027874(rdram, ctx);
        goto after_269;
    // 0x80038EC4: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_269:
    // 0x80038EC8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80038ECC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80038ED0: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80038ED4: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x80038ED8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80038EDC: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    // 0x80038EE0: jal         0x8002A278
    // 0x80038EE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8002A278(rdram, ctx);
        goto after_270;
    // 0x80038EE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_270:
    // 0x80038EE8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80038EEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80038EF0: jal         0x80014B78
    // 0x80038EF4: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    func_80014B78(rdram, ctx);
        goto after_271;
    // 0x80038EF4: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    after_271:
    // 0x80038EF8: jal         0x8000797C
    // 0x80038EFC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    func_8000797C(rdram, ctx);
        goto after_272;
    // 0x80038EFC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_272:
    // 0x80038F00: jal         0x8002A310
    // 0x80038F04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002A310(rdram, ctx);
        goto after_273;
    // 0x80038F04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_273:
    // 0x80038F08: b           L_80038F4C
    // 0x80038F0C: nop

        goto L_80038F4C;
    // 0x80038F0C: nop

L_80038F10:
    // 0x80038F10: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80038F14: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80038F18: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x80038F1C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80038F20: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x80038F24: jal         0x8002A278
    // 0x80038F28: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8002A278(rdram, ctx);
        goto after_274;
    // 0x80038F28: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_274:
    // 0x80038F2C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80038F30: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80038F34: jal         0x80014B78
    // 0x80038F38: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    func_80014B78(rdram, ctx);
        goto after_275;
    // 0x80038F38: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    after_275:
    // 0x80038F3C: jal         0x8000797C
    // 0x80038F40: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    func_8000797C(rdram, ctx);
        goto after_276;
    // 0x80038F40: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_276:
    // 0x80038F44: jal         0x8002A310
    // 0x80038F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002A310(rdram, ctx);
        goto after_277;
    // 0x80038F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_277:
L_80038F4C:
    // 0x80038F4C: jal         0x80002D08
    // 0x80038F50: addiu       $a0, $zero, 0x7F1
    ctx->r4 = ADD32(0, 0X7F1);
    func_80002D08(rdram, ctx);
        goto after_278;
    // 0x80038F50: addiu       $a0, $zero, 0x7F1
    ctx->r4 = ADD32(0, 0X7F1);
    after_278:
    // 0x80038F54: jal         0x8000797C
    // 0x80038F58: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8000797C(rdram, ctx);
        goto after_279;
    // 0x80038F58: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_279:
L_80038F5C:
    // 0x80038F5C: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x80038F60: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x80038F64: ori         $at, $at, 0x200
    ctx->r1 = ctx->r1 | 0X200;
    // 0x80038F68: and         $t7, $a0, $at
    ctx->r15 = ctx->r4 & ctx->r1;
    // 0x80038F6C: bne         $t7, $zero, L_80038130
    if (ctx->r15 != 0) {
        // 0x80038F70: andi        $t8, $a0, 0x4000
        ctx->r24 = ctx->r4 & 0X4000;
            goto L_80038130;
    }
    // 0x80038F70: andi        $t8, $a0, 0x4000
    ctx->r24 = ctx->r4 & 0X4000;
    // 0x80038F74: bne         $t8, $zero, L_80038F9C
    if (ctx->r24 != 0) {
        // 0x80038F78: lui         $t9, 0x8009
        ctx->r25 = S32(0X8009 << 16);
            goto L_80038F9C;
    }
    // 0x80038F78: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80038F7C: lw          $t9, -0xC0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0XC0);
    // 0x80038F80: nop

    // 0x80038F84: beq         $t9, $zero, L_800383C4
    if (ctx->r25 == 0) {
        // 0x80038F88: nop
    
            goto L_800383C4;
    }
    // 0x80038F88: nop

    // 0x80038F8C: jal         0x80030DFC
    // 0x80038F90: nop

    func_80030DFC(rdram, ctx);
        goto after_280;
    // 0x80038F90: nop

    after_280:
    // 0x80038F94: b           L_800383C4
    // 0x80038F98: nop

        goto L_800383C4;
    // 0x80038F98: nop

L_80038F9C:
    // 0x80038F9C: jal         0x80007AB0
    // 0x80038FA0: nop

    func_80007AB0(rdram, ctx);
        goto after_281;
    // 0x80038FA0: nop

    after_281:
    // 0x80038FA4: b           L_80037714
    // 0x80038FA8: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
        goto L_80037714;
    // 0x80038FA8: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x80038FAC: nop

    // 0x80038FB0: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x80038FB4: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80038FB8: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80038FBC: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80038FC0: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80038FC4: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80038FC8: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80038FCC: lwc1        $f27, 0x38($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80038FD0: lwc1        $f26, 0x3C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80038FD4: lwc1        $f29, 0x40($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80038FD8: lwc1        $f28, 0x44($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80038FDC: lwc1        $f31, 0x48($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x80038FE0: lwc1        $f30, 0x4C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80038FE4: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x80038FE8: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x80038FEC: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x80038FF0: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x80038FF4: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x80038FF8: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x80038FFC: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x80039000: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x80039004: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x80039008: jr          $ra
    // 0x8003900C: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    // 0x8003900C: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_80039010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039010: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x80039014: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80039018: sw          $s7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r23;
    // 0x8003901C: sw          $s6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r22;
    // 0x80039020: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x80039024: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x80039028: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x8003902C: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x80039030: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x80039034: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x80039038: swc1        $f31, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x8003903C: swc1        $f30, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f30.u32l;
    // 0x80039040: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80039044: swc1        $f28, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f28.u32l;
    // 0x80039048: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8003904C: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x80039050: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80039054: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x80039058: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8003905C: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80039060: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80039064: jal         0x80007774
    // 0x80039068: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80039068: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8003906C: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80039070: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x80039074: addiu       $s3, $s3, -0x3EF0
    ctx->r19 = ADD32(ctx->r19, -0X3EF0);
    // 0x80039078: addiu       $s4, $sp, 0x9C
    ctx->r20 = ADD32(ctx->r29, 0X9C);
    // 0x8003907C: lw          $s7, 0x1C($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X1C);
    // 0x80039080: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80039084: addiu       $s2, $zero, 0x10
    ctx->r18 = ADD32(0, 0X10);
    // 0x80039088: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003908C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80039090: jal         0x80009D90
    // 0x80039094: mov.s       $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
    func_80009D90(rdram, ctx);
        goto after_1;
    // 0x80039094: mov.s       $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
    after_1:
    // 0x80039098: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x8003909C: addiu       $s1, $s1, -0x3B4
    ctx->r17 = ADD32(ctx->r17, -0X3B4);
    // 0x800390A0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800390A4: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x800390A8: lwc1        $f27, 0x5A80($at)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r1, 0X5A80);
    // 0x800390AC: lwc1        $f26, 0x5A84($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X5A84);
    // 0x800390B0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800390B4: mul.d       $f10, $f26, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f26.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f26.d, ctx->f8.d);
    // 0x800390B8: lwc1        $f0, 0xA0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x800390BC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x800390C0: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x800390C4: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x800390C8: add.d       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f4.d + ctx->f10.d;
    // 0x800390CC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x800390D0: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    // 0x800390D4: jal         0x80009DFC
    // 0x800390D8: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    func_80009DFC(rdram, ctx);
        goto after_2;
    // 0x800390D8: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x800390DC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800390E0: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x800390E4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800390E8: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x800390EC: lwc1        $f29, 0x5A88($at)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r1, 0X5A88);
    // 0x800390F0: lwc1        $f28, 0x5A8C($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X5A8C);
    // 0x800390F4: addiu       $s6, $s6, -0x3B8
    ctx->r22 = ADD32(ctx->r22, -0X3B8);
    // 0x800390F8: addiu       $s5, $sp, 0xA8
    ctx->r21 = ADD32(ctx->r29, 0XA8);
L_800390FC:
    // 0x800390FC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80039100: lhu         $v0, 0x2B8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2B8);
    // 0x80039104: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80039108: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x8003910C: beq         $t6, $zero, L_8003917C
    if (ctx->r14 == 0) {
        // 0x80039110: andi        $t7, $v0, 0x8
        ctx->r15 = ctx->r2 & 0X8;
            goto L_8003917C;
    }
    // 0x80039110: andi        $t7, $v0, 0x8
    ctx->r15 = ctx->r2 & 0X8;
    // 0x80039114: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80039118: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8003911C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80039120: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x80039124: nop

    // 0x80039128: bc1f        L_80039138
    if (!c1cs) {
        // 0x8003912C: nop
    
            goto L_80039138;
    }
    // 0x8003912C: nop

    // 0x80039130: add.s       $f6, $f0, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f30.fl;
    // 0x80039134: swc1        $f6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f6.u32l;
L_80039138:
    // 0x80039138: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8003913C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80039140: jal         0x80009D90
    // 0x80039144: cvt.d.s     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f20.d = CVT_D_S(ctx->f8.fl);
    func_80009D90(rdram, ctx);
        goto after_3;
    // 0x80039144: cvt.d.s     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f20.d = CVT_D_S(ctx->f8.fl);
    after_3:
    // 0x80039148: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8003914C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80039150: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x80039154: mul.d       $f16, $f26, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f26.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f26.d, ctx->f10.d);
    // 0x80039158: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8003915C: add.d       $f18, $f20, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f20.d + ctx->f16.d;
    // 0x80039160: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x80039164: jal         0x80009DFC
    // 0x80039168: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    func_80009DFC(rdram, ctx);
        goto after_4;
    // 0x80039168: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x8003916C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80039170: lhu         $v0, 0x2B8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2B8);
    // 0x80039174: b           L_800391EC
    // 0x80039178: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
        goto L_800391EC;
    // 0x80039178: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
L_8003917C:
    // 0x8003917C: beq         $t7, $zero, L_800391E8
    if (ctx->r15 == 0) {
        // 0x80039180: lui         $at, 0xC120
        ctx->r1 = S32(0XC120 << 16);
            goto L_800391E8;
    }
    // 0x80039180: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80039184: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80039188: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8003918C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80039190: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80039194: nop

    // 0x80039198: bc1f        L_800391A8
    if (!c1cs) {
        // 0x8003919C: nop
    
            goto L_800391A8;
    }
    // 0x8003919C: nop

    // 0x800391A0: sub.s       $f8, $f0, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f30.fl;
    // 0x800391A4: swc1        $f8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f8.u32l;
L_800391A8:
    // 0x800391A8: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x800391AC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x800391B0: jal         0x80009D90
    // 0x800391B4: cvt.d.s     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f20.d = CVT_D_S(ctx->f4.fl);
    func_80009D90(rdram, ctx);
        goto after_5;
    // 0x800391B4: cvt.d.s     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f20.d = CVT_D_S(ctx->f4.fl);
    after_5:
    // 0x800391B8: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x800391BC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x800391C0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800391C4: mul.d       $f18, $f26, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f26.d, ctx->f16.d);
    // 0x800391C8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x800391CC: add.d       $f6, $f20, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f20.d + ctx->f18.d;
    // 0x800391D0: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x800391D4: jal         0x80009DFC
    // 0x800391D8: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    func_80009DFC(rdram, ctx);
        goto after_6;
    // 0x800391D8: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x800391DC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x800391E0: lhu         $v0, 0x2B8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2B8);
    // 0x800391E4: nop

L_800391E8:
    // 0x800391E8: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
L_800391EC:
    // 0x800391EC: beq         $t8, $zero, L_8003921C
    if (ctx->r24 == 0) {
        // 0x800391F0: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_8003921C;
    }
    // 0x800391F0: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x800391F4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800391F8: lwc1        $f8, 0x5A90($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5A90);
    // 0x800391FC: nop

    // 0x80039200: add.s       $f22, $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f8.fl;
    // 0x80039204: c.lt.s      $f30, $f22
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f30.fl < ctx->f22.fl;
    // 0x80039208: nop

    // 0x8003920C: bc1f        L_800392F4
    if (!c1cs) {
        // 0x80039210: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_800392F4;
    }
    // 0x80039210: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80039214: b           L_800392F0
    // 0x80039218: mov.s       $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    ctx->f22.fl = ctx->f30.fl;
        goto L_800392F0;
    // 0x80039218: mov.s       $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    ctx->f22.fl = ctx->f30.fl;
L_8003921C:
    // 0x8003921C: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
    // 0x80039220: beq         $t9, $zero, L_80039258
    if (ctx->r25 == 0) {
        // 0x80039224: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_80039258;
    }
    // 0x80039224: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80039228: lwc1        $f4, 0x5A94($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5A94);
    // 0x8003922C: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x80039230: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80039234: sub.s       $f22, $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f4.fl;
    // 0x80039238: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x8003923C: c.lt.s      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.fl < ctx->f10.fl;
    // 0x80039240: nop

    // 0x80039244: bc1f        L_800392F4
    if (!c1cs) {
        // 0x80039248: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_800392F4;
    }
    // 0x80039248: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8003924C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80039250: b           L_800392F4
    // 0x80039254: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
        goto L_800392F4;
    // 0x80039254: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
L_80039258:
    // 0x80039258: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8003925C: nop

    // 0x80039260: c.lt.s      $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f22.fl < ctx->f16.fl;
    // 0x80039264: nop

    // 0x80039268: bc1f        L_80039278
    if (!c1cs) {
        // 0x8003926C: nop
    
            goto L_80039278;
    }
    // 0x8003926C: nop

    // 0x80039270: b           L_8003927C
    // 0x80039274: neg.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = -ctx->f22.fl;
        goto L_8003927C;
    // 0x80039274: neg.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = -ctx->f22.fl;
L_80039278:
    // 0x80039278: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
L_8003927C:
    // 0x8003927C: c.eq.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl == ctx->f24.fl;
    // 0x80039280: nop

    // 0x80039284: bc1t        L_800392F4
    if (c1cs) {
        // 0x80039288: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_800392F4;
    }
    // 0x80039288: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8003928C: c.lt.s      $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f22.fl < ctx->f24.fl;
    // 0x80039290: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80039294: bc1f        L_800392C0
    if (!c1cs) {
        // 0x80039298: nop
    
            goto L_800392C0;
    }
    // 0x80039298: nop

    // 0x8003929C: lwc1        $f18, 0x5A98($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5A98);
    // 0x800392A0: nop

    // 0x800392A4: add.s       $f22, $f22, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f18.fl;
    // 0x800392A8: c.lt.s      $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f24.fl < ctx->f22.fl;
    // 0x800392AC: nop

    // 0x800392B0: bc1f        L_800392F4
    if (!c1cs) {
        // 0x800392B4: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_800392F4;
    }
    // 0x800392B4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x800392B8: b           L_800392F0
    // 0x800392BC: mov.s       $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
        goto L_800392F0;
    // 0x800392BC: mov.s       $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
L_800392C0:
    // 0x800392C0: c.lt.s      $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f24.fl < ctx->f22.fl;
    // 0x800392C4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800392C8: bc1f        L_800392F4
    if (!c1cs) {
        // 0x800392CC: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_800392F4;
    }
    // 0x800392CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x800392D0: lwc1        $f6, 0x5A9C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5A9C);
    // 0x800392D4: nop

    // 0x800392D8: sub.s       $f22, $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f6.fl;
    // 0x800392DC: c.lt.s      $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f22.fl < ctx->f24.fl;
    // 0x800392E0: nop

    // 0x800392E4: bc1f        L_800392F4
    if (!c1cs) {
        // 0x800392E8: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_800392F4;
    }
    // 0x800392E8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x800392EC: mov.s       $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
L_800392F0:
    // 0x800392F0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
L_800392F4:
    // 0x800392F4: jal         0x800190CC
    // 0x800392F8: cvt.d.s     $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f20.d = CVT_D_S(ctx->f22.fl);
    func_800190CC(rdram, ctx);
        goto after_7;
    // 0x800392F8: cvt.d.s     $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f20.d = CVT_D_S(ctx->f22.fl);
    after_7:
    // 0x800392FC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80039300: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80039304: lwc1        $f11, 0x5AA0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X5AA0);
    // 0x80039308: lwc1        $f10, 0x5AA4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5AA4);
    // 0x8003930C: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x80039310: mul.d       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f4.d, ctx->f10.d);
    // 0x80039314: add.d       $f0, $f16, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f20.d); 
    ctx->f0.d = ctx->f16.d + ctx->f20.d;
    // 0x80039318: c.le.d      $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f28.d <= ctx->f0.d;
    // 0x8003931C: nop

    // 0x80039320: bc1f        L_80039330
    if (!c1cs) {
        // 0x80039324: nop
    
            goto L_80039330;
    }
    // 0x80039324: nop

    // 0x80039328: b           L_8003935C
    // 0x8003932C: sub.d       $f2, $f0, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f28.d); 
    ctx->f2.d = ctx->f0.d - ctx->f28.d;
        goto L_8003935C;
    // 0x8003932C: sub.d       $f2, $f0, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f28.d); 
    ctx->f2.d = ctx->f0.d - ctx->f28.d;
L_80039330:
    // 0x80039330: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x80039334: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80039338: nop

    // 0x8003933C: c.lt.d      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.d < ctx->f18.d;
    // 0x80039340: nop

    // 0x80039344: bc1f        L_80039354
    if (!c1cs) {
        // 0x80039348: nop
    
            goto L_80039354;
    }
    // 0x80039348: nop

    // 0x8003934C: b           L_80039358
    // 0x80039350: add.d       $f12, $f0, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f28.d); 
    ctx->f12.d = ctx->f0.d + ctx->f28.d;
        goto L_80039358;
    // 0x80039350: add.d       $f12, $f0, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f28.d); 
    ctx->f12.d = ctx->f0.d + ctx->f28.d;
L_80039354:
    // 0x80039354: mov.d       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.d = ctx->f0.d;
L_80039358:
    // 0x80039358: mov.d       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.d = ctx->f12.d;
L_8003935C:
    // 0x8003935C: cvt.s.d     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f6.fl = CVT_S_D(ctx->f2.d);
    // 0x80039360: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80039364: swc1        $f6, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->f6.u32l;
    // 0x80039368: lwc1        $f8, 0x0($s6)
    ctx->f8.u32l = MEM_W(ctx->r22, 0X0);
    // 0x8003936C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80039370: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x80039374: mul.d       $f10, $f4, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f26.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f26.d);
    // 0x80039378: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8003937C: jal         0x8001913C
    // 0x80039380: swc1        $f16, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f16.u32l;
    func_8001913C(rdram, ctx);
        goto after_8;
    // 0x80039380: swc1        $f16, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x80039384: blez        $s2, L_800393A0
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80039388: addiu       $at, $zero, 0xA0
        ctx->r1 = ADD32(0, 0XA0);
            goto L_800393A0;
    }
    // 0x80039388: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    // 0x8003938C: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    // 0x80039390: bne         $s0, $at, L_800393B4
    if (ctx->r16 != ctx->r1) {
        // 0x80039394: lui         $at, 0xFF00
        ctx->r1 = S32(0XFF00 << 16);
            goto L_800393B4;
    }
    // 0x80039394: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x80039398: b           L_800393B0
    // 0x8003939C: addiu       $s2, $zero, -0x10
    ctx->r18 = ADD32(0, -0X10);
        goto L_800393B0;
    // 0x8003939C: addiu       $s2, $zero, -0x10
    ctx->r18 = ADD32(0, -0X10);
L_800393A0:
    // 0x800393A0: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    // 0x800393A4: bne         $s0, $zero, L_800393B4
    if (ctx->r16 != 0) {
        // 0x800393A8: lui         $at, 0xFF00
        ctx->r1 = S32(0XFF00 << 16);
            goto L_800393B4;
    }
    // 0x800393A8: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x800393AC: addiu       $s2, $zero, 0x10
    ctx->r18 = ADD32(0, 0X10);
L_800393B0:
    // 0x800393B0: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
L_800393B4:
    // 0x800393B4: addu        $t0, $s0, $at
    ctx->r8 = ADD32(ctx->r16, ctx->r1);
    // 0x800393B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800393BC: jal         0x80007AB0
    // 0x800393C0: sw          $t0, -0x3F20($at)
    MEM_W(-0X3F20, ctx->r1) = ctx->r8;
    func_80007AB0(rdram, ctx);
        goto after_9;
    // 0x800393C0: sw          $t0, -0x3F20($at)
    MEM_W(-0X3F20, ctx->r1) = ctx->r8;
    after_9:
    // 0x800393C4: b           L_800390FC
    // 0x800393C8: nop

        goto L_800390FC;
    // 0x800393C8: nop

    // 0x800393CC: nop

    // 0x800393D0: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x800393D4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800393D8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800393DC: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800393E0: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800393E4: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800393E8: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800393EC: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x800393F0: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800393F4: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x800393F8: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800393FC: lwc1        $f31, 0x38($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80039400: lwc1        $f30, 0x3C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80039404: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x80039408: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x8003940C: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x80039410: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x80039414: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x80039418: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x8003941C: lw          $s6, 0x5C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X5C);
    // 0x80039420: lw          $s7, 0x60($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X60);
    // 0x80039424: jr          $ra
    // 0x80039428: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x80039428: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_8003942C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003942C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80039430: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80039434: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80039438: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8003943C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80039440: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80039444: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80039448: lui         $t7, 0xE200
    ctx->r15 = S32(0XE200 << 16);
    // 0x8003944C: lui         $t8, 0x50
    ctx->r24 = S32(0X50 << 16);
    // 0x80039450: ori         $t8, $t8, 0x4240
    ctx->r24 = ctx->r24 | 0X4240;
    // 0x80039454: ori         $t7, $t7, 0x1C
    ctx->r15 = ctx->r15 | 0X1C;
    // 0x80039458: addiu       $a1, $a0, 0x8
    ctx->r5 = ADD32(ctx->r4, 0X8);
    // 0x8003945C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80039460: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x80039464: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x80039468: lui         $t9, 0xFA00
    ctx->r25 = S32(0XFA00 << 16);
    // 0x8003946C: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x80039470: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x80039474: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80039478: lui         $t1, 0xFCFF
    ctx->r9 = S32(0XFCFF << 16);
    // 0x8003947C: lui         $t2, 0xFFFD
    ctx->r10 = S32(0XFFFD << 16);
    // 0x80039480: ori         $t2, $t2, 0xF6FB
    ctx->r10 = ctx->r10 | 0XF6FB;
    // 0x80039484: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x80039488: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x8003948C: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    // 0x80039490: sw          $t2, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r10;
    // 0x80039494: lui         $t4, 0x1
    ctx->r12 = S32(0X1 << 16);
    // 0x80039498: ori         $t4, $t4, 0x1
    ctx->r12 = ctx->r12 | 0X1;
    // 0x8003949C: addiu       $v1, $a3, 0x8
    ctx->r3 = ADD32(ctx->r7, 0X8);
    // 0x800394A0: lui         $t3, 0xF700
    ctx->r11 = S32(0XF700 << 16);
    // 0x800394A4: lui         $t5, 0xF64F
    ctx->r13 = S32(0XF64F << 16);
    // 0x800394A8: sw          $t3, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r11;
    // 0x800394AC: sw          $t4, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r12;
    // 0x800394B0: ori         $t5, $t5, 0xC3BC
    ctx->r13 = ctx->r13 | 0XC3BC;
    // 0x800394B4: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x800394B8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800394BC: jr          $ra
    // 0x800394C0: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    return;
    // 0x800394C0: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
;}
RECOMP_FUNC void func_800394C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800394C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800394C8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x800394CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800394D0: lw          $a3, -0x3F74($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X3F74);
    // 0x800394D4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800394D8: addiu       $a0, $a0, -0x4B4
    ctx->r4 = ADD32(ctx->r4, -0X4B4);
    // 0x800394DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800394E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800394E4: jal         0x8002A9C0
    // 0x800394E8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_8002A9C0(rdram, ctx);
        goto after_0;
    // 0x800394E8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_0:
    // 0x800394EC: jal         0x8002A98C
    // 0x800394F0: nop

    func_8002A98C(rdram, ctx);
        goto after_1;
    // 0x800394F0: nop

    after_1:
    // 0x800394F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800394F8: sw          $v0, -0x3F78($at)
    MEM_W(-0X3F78, ctx->r1) = ctx->r2;
L_800394FC:
    // 0x800394FC: jal         0x80007AB0
    // 0x80039500: nop

    func_80007AB0(rdram, ctx);
        goto after_2;
    // 0x80039500: nop

    after_2:
    // 0x80039504: b           L_800394FC
    // 0x80039508: nop

        goto L_800394FC;
    // 0x80039508: nop

    // 0x8003950C: nop

    // 0x80039510: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80039514: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80039518: jr          $ra
    // 0x8003951C: nop

    return;
    // 0x8003951C: nop

;}
RECOMP_FUNC void func_80039520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039520: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80039524: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80039528: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x8003952C: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x80039530: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x80039534: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x80039538: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x8003953C: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x80039540: swc1        $f31, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80039544: swc1        $f30, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f30.u32l;
    // 0x80039548: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8003954C: swc1        $f28, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f28.u32l;
    // 0x80039550: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80039554: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x80039558: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8003955C: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x80039560: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80039564: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80039568: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8003956C: jal         0x80007774
    // 0x80039570: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80039570: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80039574: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80039578: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8003957C: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x80039580: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80039584: addiu       $s2, $s2, -0x4170
    ctx->r18 = ADD32(ctx->r18, -0X4170);
    // 0x80039588: addiu       $v1, $v1, -0x3F70
    ctx->r3 = ADD32(ctx->r3, -0X3F70);
    // 0x8003958C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80039590: lw          $s0, 0x14($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X14);
    // 0x80039594: lw          $s3, 0xC($v1)
    ctx->r19 = MEM_W(ctx->r3, 0XC);
    // 0x80039598: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x8003959C: addiu       $a0, $zero, 0x91D
    ctx->r4 = ADD32(0, 0X91D);
    // 0x800395A0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x800395A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800395A8: jal         0x80015784
    // 0x800395AC: mov.s       $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
    func_80015784(rdram, ctx);
        goto after_1;
    // 0x800395AC: mov.s       $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
    after_1:
    // 0x800395B0: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x800395B4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800395B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800395BC: jal         0x80014B64
    // 0x800395C0: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    func_80014B64(rdram, ctx);
        goto after_2;
    // 0x800395C0: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    after_2:
    // 0x800395C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800395C8: jal         0x80014AC4
    // 0x800395CC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_3;
    // 0x800395CC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_3:
    // 0x800395D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800395D4: sw          $s1, -0x3F64($at)
    MEM_W(-0X3F64, ctx->r1) = ctx->r17;
    // 0x800395D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800395DC: lui         $a1, 0x42BA
    ctx->r5 = S32(0X42BA << 16);
    // 0x800395E0: jal         0x800157C8
    // 0x800395E4: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    func_800157C8(rdram, ctx);
        goto after_4;
    // 0x800395E4: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    after_4:
    // 0x800395E8: beq         $s3, $zero, L_800395FC
    if (ctx->r19 == 0) {
        // 0x800395EC: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_800395FC;
    }
    // 0x800395EC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800395F0: jal         0x80014BF4
    // 0x800395F4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80014BF4(rdram, ctx);
        goto after_5;
    // 0x800395F4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_5:
    // 0x800395F8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
L_800395FC:
    // 0x800395FC: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x80039600: lui         $at, 0x438C
    ctx->r1 = S32(0X438C << 16);
    // 0x80039604: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x80039608: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8003960C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80039610: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80039614: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x80039618: lwc1        $f24, 0x5AA8($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X5AA8);
    // 0x8003961C: addiu       $s4, $s4, -0xCF0
    ctx->r20 = ADD32(ctx->r20, -0XCF0);
    // 0x80039620: addiu       $s5, $zero, 0x5
    ctx->r21 = ADD32(0, 0X5);
    // 0x80039624: addiu       $s3, $zero, 0x6
    ctx->r19 = ADD32(0, 0X6);
    // 0x80039628: addiu       $s1, $zero, 0x384
    ctx->r17 = ADD32(0, 0X384);
    // 0x8003962C: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
L_80039630:
    // 0x80039630: nop

    // 0x80039634: slti        $at, $v0, 0x385
    ctx->r1 = SIGNED(ctx->r2) < 0X385 ? 1 : 0;
    // 0x80039638: beq         $at, $zero, L_800396A4
    if (ctx->r1 == 0) {
        // 0x8003963C: nop
    
            goto L_800396A4;
    }
    // 0x8003963C: nop

    // 0x80039640: beq         $s0, $v0, L_800396A4
    if (ctx->r16 == ctx->r2) {
        // 0x80039644: subu        $v1, $s1, $v0
        ctx->r3 = SUB32(ctx->r17, ctx->r2);
            goto L_800396A4;
    }
    // 0x80039644: subu        $v1, $s1, $v0
    ctx->r3 = SUB32(ctx->r17, ctx->r2);
    // 0x80039648: bne         $s3, $v1, L_80039658
    if (ctx->r19 != ctx->r3) {
        // 0x8003964C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80039658;
    }
    // 0x8003964C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80039650: mul.s       $f20, $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x80039654: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
L_80039658:
    // 0x80039658: slti        $at, $v1, 0x6
    ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8003965C: beq         $at, $zero, L_8003966C
    if (ctx->r1 == 0) {
        // 0x80039660: lui         $a0, 0x800B
        ctx->r4 = S32(0X800B << 16);
            goto L_8003966C;
    }
    // 0x80039660: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80039664: b           L_80039670
    // 0x80039668: add.s       $f20, $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f26.fl;
        goto L_80039670;
    // 0x80039668: add.s       $f20, $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f26.fl;
L_8003966C:
    // 0x8003966C: add.s       $f20, $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f30.fl;
L_80039670:
    // 0x80039670: add.s       $f22, $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f20.fl;
    // 0x80039674: lw          $a0, -0x3F64($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3F64);
    // 0x80039678: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x8003967C: jal         0x80014B64
    // 0x80039680: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    func_80014B64(rdram, ctx);
        goto after_6;
    // 0x80039680: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    after_6:
    // 0x80039684: lw          $t6, 0x14($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X14);
    // 0x80039688: nop

    // 0x8003968C: bne         $s1, $t6, L_800396A4
    if (ctx->r17 != ctx->r14) {
        // 0x80039690: nop
    
            goto L_800396A4;
    }
    // 0x80039690: nop

    // 0x80039694: jal         0x80027874
    // 0x80039698: addiu       $a0, $zero, 0x364
    ctx->r4 = ADD32(0, 0X364);
    func_80027874(rdram, ctx);
        goto after_7;
    // 0x80039698: addiu       $a0, $zero, 0x364
    ctx->r4 = ADD32(0, 0X364);
    after_7:
    // 0x8003969C: jal         0x80027C94
    // 0x800396A0: sw          $s5, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r21;
    func_80027C94(rdram, ctx);
        goto after_8;
    // 0x800396A0: sw          $s5, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r21;
    after_8:
L_800396A4:
    // 0x800396A4: c.lt.s      $f28, $f22
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f28.fl < ctx->f22.fl;
    // 0x800396A8: nop

    // 0x800396AC: bc1t        L_800396C4
    if (c1cs) {
        // 0x800396B0: nop
    
            goto L_800396C4;
    }
    // 0x800396B0: nop

    // 0x800396B4: jal         0x80007AB0
    // 0x800396B8: nop

    func_80007AB0(rdram, ctx);
        goto after_9;
    // 0x800396B8: nop

    after_9:
    // 0x800396BC: b           L_80039630
    // 0x800396C0: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
        goto L_80039630;
    // 0x800396C0: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
L_800396C4:
    // 0x800396C4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800396C8: lw          $a0, -0x3F64($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3F64);
    // 0x800396CC: jal         0x80014BF4
    // 0x800396D0: nop

    func_80014BF4(rdram, ctx);
        goto after_10;
    // 0x800396D0: nop

    after_10:
    // 0x800396D4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800396D8: sw          $zero, -0x3F64($at)
    MEM_W(-0X3F64, ctx->r1) = 0;
    // 0x800396DC: addiu       $s0, $zero, 0x366
    ctx->r16 = ADD32(0, 0X366);
    // 0x800396E0: lw          $t7, 0x14($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X14);
L_800396E4:
    // 0x800396E4: nop

    // 0x800396E8: bne         $s0, $t7, L_80039714
    if (ctx->r16 != ctx->r15) {
        // 0x800396EC: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_80039714;
    }
    // 0x800396EC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x800396F0: lw          $t8, -0x4298($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4298);
    // 0x800396F4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800396F8: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x800396FC: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x80039700: lw          $a0, -0x744($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X744);
    // 0x80039704: jal         0x80027CEC
    // 0x80039708: nop

    func_80027CEC(rdram, ctx);
        goto after_11;
    // 0x80039708: nop

    after_11:
    // 0x8003970C: b           L_80039724
    // 0x80039710: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
        goto L_80039724;
    // 0x80039710: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
L_80039714:
    // 0x80039714: jal         0x80007AB0
    // 0x80039718: nop

    func_80007AB0(rdram, ctx);
        goto after_12;
    // 0x80039718: nop

    after_12:
    // 0x8003971C: b           L_800396E4
    // 0x80039720: lw          $t7, 0x14($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X14);
        goto L_800396E4;
    // 0x80039720: lw          $t7, 0x14($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X14);
L_80039724:
    // 0x80039724: jal         0x80007AE0
    // 0x80039728: sw          $zero, -0x3DCC($at)
    MEM_W(-0X3DCC, ctx->r1) = 0;
    func_80007AE0(rdram, ctx);
        goto after_13;
    // 0x80039728: sw          $zero, -0x3DCC($at)
    MEM_W(-0X3DCC, ctx->r1) = 0;
    after_13:
    // 0x8003972C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x80039730: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80039734: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80039738: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8003973C: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80039740: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80039744: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80039748: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8003974C: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80039750: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80039754: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80039758: lwc1        $f31, 0x38($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x8003975C: lwc1        $f30, 0x3C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80039760: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x80039764: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x80039768: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x8003976C: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x80039770: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x80039774: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x80039778: jr          $ra
    // 0x8003977C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8003977C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80039780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039780: jr          $ra
    // 0x80039784: nop

    return;
    // 0x80039784: nop

;}
RECOMP_FUNC void func_800397A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800397A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800397AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800397B0: jal         0x8002D000
    // 0x800397B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x800397B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800397B8: jal         0x8005B930
    // 0x800397BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8005B930(rdram, ctx);
        goto after_1;
    // 0x800397BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800397C0: jal         0x8002D000
    // 0x800397C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8002D000(rdram, ctx);
        goto after_2;
    // 0x800397C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x800397C8: jal         0x8005B930
    // 0x800397CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8005B930(rdram, ctx);
        goto after_3;
    // 0x800397CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x800397D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800397D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800397D8: jr          $ra
    // 0x800397DC: nop

    return;
    // 0x800397DC: nop

;}
RECOMP_FUNC void func_800397E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800397E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800397E4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800397E8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800397EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800397F0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800397F4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800397F8: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x800397FC: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x80039800: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80039804: sw          $t6, 0x16C($at)
    MEM_W(0X16C, ctx->r1) = ctx->r14;
    // 0x80039808: addiu       $s2, $s2, 0x15C
    ctx->r18 = ADD32(ctx->r18, 0X15C);
    // 0x8003980C: addiu       $s1, $s1, -0x4298
    ctx->r17 = ADD32(ctx->r17, -0X4298);
    // 0x80039810: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80039814:
    // 0x80039814: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80039818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003981C: beq         $v0, $zero, L_80039834
    if (ctx->r2 == 0) {
        // 0x80039820: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_80039834;
    }
    // 0x80039820: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80039824: jal         0x80030524
    // 0x80039828: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80030524(rdram, ctx);
        goto after_0;
    // 0x80039828: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8003982C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80039830: nop

L_80039834:
    // 0x80039834: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80039838: bne         $v0, $at, L_80039848
    if (ctx->r2 != ctx->r1) {
        // 0x8003983C: nop
    
            goto L_80039848;
    }
    // 0x8003983C: nop

    // 0x80039840: jal         0x80040470
    // 0x80039844: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80040470(rdram, ctx);
        goto after_1;
    // 0x80039844: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_80039848:
    // 0x80039848: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8003984C: nop

    // 0x80039850: beq         $a0, $zero, L_80039864
    if (ctx->r4 == 0) {
        // 0x80039854: nop
    
            goto L_80039864;
    }
    // 0x80039854: nop

    // 0x80039858: jal         0x800075A0
    // 0x8003985C: nop

    func_800075A0(rdram, ctx);
        goto after_2;
    // 0x8003985C: nop

    after_2:
    // 0x80039860: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
L_80039864:
    // 0x80039864: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80039868: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x8003986C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80039870: bne         $at, $zero, L_80039814
    if (ctx->r1 != 0) {
        // 0x80039874: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_80039814;
    }
    // 0x80039874: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80039878: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8003987C: addiu       $s0, $s0, -0x4170
    ctx->r16 = ADD32(ctx->r16, -0X4170);
    // 0x80039880: lw          $a0, 0xE8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE8);
    // 0x80039884: nop

    // 0x80039888: beq         $a0, $zero, L_800398DC
    if (ctx->r4 == 0) {
        // 0x8003988C: nop
    
            goto L_800398DC;
    }
    // 0x8003988C: nop

    // 0x80039890: jal         0x800075A0
    // 0x80039894: nop

    func_800075A0(rdram, ctx);
        goto after_3;
    // 0x80039894: nop

    after_3:
    // 0x80039898: sw          $zero, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = 0;
    // 0x8003989C: jal         0x8002AF34
    // 0x800398A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8002AF34(rdram, ctx);
        goto after_4;
    // 0x800398A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x800398A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800398A8: addiu       $a1, $zero, 0x230
    ctx->r5 = ADD32(0, 0X230);
    // 0x800398AC: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    // 0x800398B0: jal         0x8001B20C
    // 0x800398B4: lui         $a3, 0x6E
    ctx->r7 = S32(0X6E << 16);
    func_8001B20C(rdram, ctx);
        goto after_5;
    // 0x800398B4: lui         $a3, 0x6E
    ctx->r7 = S32(0X6E << 16);
    after_5:
    // 0x800398B8: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x800398BC: addiu       $s1, $s1, 0x6AC
    ctx->r17 = ADD32(ctx->r17, 0X6AC);
    // 0x800398C0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800398C4: nop

    // 0x800398C8: beq         $a0, $zero, L_800398DC
    if (ctx->r4 == 0) {
        // 0x800398CC: nop
    
            goto L_800398DC;
    }
    // 0x800398CC: nop

    // 0x800398D0: jal         0x800195C4
    // 0x800398D4: nop

    func_800195C4(rdram, ctx);
        goto after_6;
    // 0x800398D4: nop

    after_6:
    // 0x800398D8: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_800398DC:
    // 0x800398DC: lw          $a0, 0xEC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XEC);
    // 0x800398E0: nop

    // 0x800398E4: beq         $a0, $zero, L_800398F8
    if (ctx->r4 == 0) {
        // 0x800398E8: nop
    
            goto L_800398F8;
    }
    // 0x800398E8: nop

    // 0x800398EC: jal         0x800075A0
    // 0x800398F0: nop

    func_800075A0(rdram, ctx);
        goto after_7;
    // 0x800398F0: nop

    after_7:
    // 0x800398F4: sw          $zero, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = 0;
L_800398F8:
    // 0x800398F8: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x800398FC: addiu       $s0, $s0, -0x3D6C
    ctx->r16 = ADD32(ctx->r16, -0X3D6C);
    // 0x80039900: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80039904: nop

    // 0x80039908: beq         $a0, $zero, L_8003991C
    if (ctx->r4 == 0) {
        // 0x8003990C: nop
    
            goto L_8003991C;
    }
    // 0x8003990C: nop

    // 0x80039910: jal         0x800075A0
    // 0x80039914: nop

    func_800075A0(rdram, ctx);
        goto after_8;
    // 0x80039914: nop

    after_8:
    // 0x80039918: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_8003991C:
    // 0x8003991C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80039920: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x80039924: addiu       $s0, $s0, 0x478
    ctx->r16 = ADD32(ctx->r16, 0X478);
    // 0x80039928: addiu       $v0, $v0, 0x46C
    ctx->r2 = ADD32(ctx->r2, 0X46C);
L_8003992C:
    // 0x8003992C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80039930: nop

    // 0x80039934: beq         $a0, $zero, L_80039950
    if (ctx->r4 == 0) {
        // 0x80039938: nop
    
            goto L_80039950;
    }
    // 0x80039938: nop

    // 0x8003993C: jal         0x800075A0
    // 0x80039940: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_800075A0(rdram, ctx);
        goto after_9;
    // 0x80039940: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_9:
    // 0x80039944: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80039948: nop

    // 0x8003994C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_80039950:
    // 0x80039950: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80039954: bne         $v0, $s0, L_8003992C
    if (ctx->r2 != ctx->r16) {
        // 0x80039958: nop
    
            goto L_8003992C;
    }
    // 0x80039958: nop

    // 0x8003995C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80039960: addiu       $a0, $a0, -0x42C0
    ctx->r4 = ADD32(ctx->r4, -0X42C0);
    // 0x80039964: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80039968: lui         $at, 0xFFEF
    ctx->r1 = S32(0XFFEF << 16);
    // 0x8003996C: sll         $t7, $v1, 11
    ctx->r15 = S32(ctx->r3 << 11);
    // 0x80039970: bgez        $t7, L_800399CC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80039974: ori         $at, $at, 0xFFFF
        ctx->r1 = ctx->r1 | 0XFFFF;
            goto L_800399CC;
    }
    // 0x80039974: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80039978: and         $t8, $v1, $at
    ctx->r24 = ctx->r3 & ctx->r1;
    // 0x8003997C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80039980: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80039984: lw          $v0, -0x4178($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4178);
    // 0x80039988: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003998C: bne         $v0, $zero, L_800399A4
    if (ctx->r2 != 0) {
        // 0x80039990: nop
    
            goto L_800399A4;
    }
    // 0x80039990: nop

    // 0x80039994: jal         0x80059A94
    // 0x80039998: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80059A94(rdram, ctx);
        goto after_10;
    // 0x80039998: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_10:
    // 0x8003999C: b           L_800399CC
    // 0x800399A0: nop

        goto L_800399CC;
    // 0x800399A0: nop

L_800399A4:
    // 0x800399A4: beq         $v0, $at, L_800399C4
    if (ctx->r2 == ctx->r1) {
        // 0x800399A8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800399C4;
    }
    // 0x800399A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800399AC: beq         $v0, $at, L_800399C4
    if (ctx->r2 == ctx->r1) {
        // 0x800399B0: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_800399C4;
    }
    // 0x800399B0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800399B4: beq         $v0, $at, L_800399C4
    if (ctx->r2 == ctx->r1) {
        // 0x800399B8: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_800399C4;
    }
    // 0x800399B8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800399BC: bne         $v0, $at, L_800399CC
    if (ctx->r2 != ctx->r1) {
        // 0x800399C0: nop
    
            goto L_800399CC;
    }
    // 0x800399C0: nop

L_800399C4:
    // 0x800399C4: jal         0x80059A94
    // 0x800399C8: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80059A94(rdram, ctx);
        goto after_11;
    // 0x800399C8: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_11:
L_800399CC:
    // 0x800399CC: jal         0x80040170
    // 0x800399D0: nop

    func_80040170(rdram, ctx);
        goto after_12;
    // 0x800399D0: nop

    after_12:
    // 0x800399D4: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x800399D8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800399DC: jal         0x80027C94
    // 0x800399E0: sw          $t9, -0xCF0($at)
    MEM_W(-0XCF0, ctx->r1) = ctx->r25;
    func_80027C94(rdram, ctx);
        goto after_13;
    // 0x800399E0: sw          $t9, -0xCF0($at)
    MEM_W(-0XCF0, ctx->r1) = ctx->r25;
    after_13:
    // 0x800399E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800399E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800399EC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800399F0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800399F4: jr          $ra
    // 0x800399F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800399F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800399FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800399FC: jr          $ra
    // 0x80039A00: nop

    return;
    // 0x80039A00: nop

;}
RECOMP_FUNC void func_80039A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039A04: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80039A08: addiu       $v0, $v0, -0x4298
    ctx->r2 = ADD32(ctx->r2, -0X4298);
    // 0x80039A0C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80039A10: lw          $t8, 0x120($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X120);
    // 0x80039A14: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x80039A18: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80039A1C: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x80039A20: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x80039A24: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x80039A28: addu        $t7, $v0, $t8
    ctx->r15 = ADD32(ctx->r2, ctx->r24);
    // 0x80039A2C: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x80039A30: addu        $s2, $s2, $t6
    ctx->r18 = ADD32(ctx->r18, ctx->r14);
    // 0x80039A34: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80039A38: lw          $s2, 0x170($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X170);
    // 0x80039A3C: beq         $t9, $zero, L_80039AF8
    if (ctx->r25 == 0) {
        // 0x80039A40: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80039AF8;
    }
    // 0x80039A40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80039A44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80039A48: jal         0x8005BCB4
    // 0x80039A4C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8005BCB4(rdram, ctx);
        goto after_0;
    // 0x80039A4C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x80039A50: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80039A54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80039A58: andi        $t6, $v1, 0x1000
    ctx->r14 = ctx->r3 & 0X1000;
    // 0x80039A5C: beq         $t6, $zero, L_80039A6C
    if (ctx->r14 == 0) {
        // 0x80039A60: andi        $t8, $v1, 0x400
        ctx->r24 = ctx->r3 & 0X400;
            goto L_80039A6C;
    }
    // 0x80039A60: andi        $t8, $v1, 0x400
    ctx->r24 = ctx->r3 & 0X400;
    // 0x80039A64: b           L_80039A6C
    // 0x80039A68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80039A6C;
    // 0x80039A68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80039A6C:
    // 0x80039A6C: bne         $v0, $zero, L_80039AFC
    if (ctx->r2 != 0) {
        // 0x80039A70: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80039AFC;
    }
    // 0x80039A70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80039A74: beq         $t8, $zero, L_80039A84
    if (ctx->r24 == 0) {
        // 0x80039A78: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80039A84;
    }
    // 0x80039A78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80039A7C: b           L_80039A84
    // 0x80039A80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80039A84;
    // 0x80039A80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80039A84:
    // 0x80039A84: beq         $v0, $zero, L_80039AB4
    if (ctx->r2 == 0) {
        // 0x80039A88: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80039AB4;
    }
    // 0x80039A88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80039A8C: jal         0x8005BB84
    // 0x80039A90: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_8005BB84(rdram, ctx);
        goto after_1;
    // 0x80039A90: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x80039A94: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80039A98: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80039A9C: bne         $t7, $at, L_80039AAC
    if (ctx->r15 != ctx->r1) {
        // 0x80039AA0: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_80039AAC;
    }
    // 0x80039AA0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80039AA4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80039AA8: sw          $t9, 0x638($at)
    MEM_W(0X638, ctx->r1) = ctx->r25;
L_80039AAC:
    // 0x80039AAC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80039AB0: bne         $s0, $at, L_80039AF8
    if (ctx->r16 != ctx->r1) {
        // 0x80039AB4: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_80039AF8;
    }
L_80039AB4:
    // 0x80039AB4: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x80039AB8: bne         $s2, $at, L_80039AD0
    if (ctx->r18 != ctx->r1) {
        // 0x80039ABC: addiu       $t6, $zero, 0x10
        ctx->r14 = ADD32(0, 0X10);
            goto L_80039AD0;
    }
    // 0x80039ABC: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x80039AC0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80039AC4: bne         $s0, $at, L_80039AD4
    if (ctx->r16 != ctx->r1) {
        // 0x80039AC8: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_80039AD4;
    }
    // 0x80039AC8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80039ACC: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
L_80039AD0:
    // 0x80039AD0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
L_80039AD4:
    // 0x80039AD4: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80039AD8: bne         $s0, $at, L_80039AEC
    if (ctx->r16 != ctx->r1) {
        // 0x80039ADC: sw          $s0, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r16;
            goto L_80039AEC;
    }
    // 0x80039ADC: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80039AE0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80039AE4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80039AE8: sw          $t8, 0x638($at)
    MEM_W(0X638, ctx->r1) = ctx->r24;
L_80039AEC:
    // 0x80039AEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80039AF0: jal         0x8005BE2C
    // 0x80039AF4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8005BE2C(rdram, ctx);
        goto after_2;
    // 0x80039AF4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_2:
L_80039AF8:
    // 0x80039AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80039AFC:
    // 0x80039AFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80039B00: jr          $ra
    // 0x80039B04: nop

    return;
    // 0x80039B04: nop

;}
RECOMP_FUNC void func_80039B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039B08: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80039B0C: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80039B10: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80039B14: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80039B18: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80039B1C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80039B20: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x80039B24: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80039B28: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x80039B2C: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x80039B30: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80039B34: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80039B38: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80039B3C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80039B40: sw          $t6, -0x3DA0($at)
    MEM_W(-0X3DA0, ctx->r1) = ctx->r14;
    // 0x80039B44: addiu       $s6, $s6, -0x3DA0
    ctx->r22 = ADD32(ctx->r22, -0X3DA0);
    // 0x80039B48: addiu       $s4, $s4, -0x4298
    ctx->r20 = ADD32(ctx->r20, -0X4298);
    // 0x80039B4C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80039B50: addiu       $s5, $sp, 0x40
    ctx->r21 = ADD32(ctx->r29, 0X40);
    // 0x80039B54: addiu       $s7, $zero, 0x4
    ctx->r23 = ADD32(0, 0X4);
L_80039B58:
    // 0x80039B58: lw          $t7, 0x4($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X4);
    // 0x80039B5C: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x80039B60: beq         $t7, $zero, L_80039BAC
    if (ctx->r15 == 0) {
        // 0x80039B64: nop
    
            goto L_80039BAC;
    }
    // 0x80039B64: nop

    // 0x80039B68: jal         0x80039A04
    // 0x80039B6C: addiu       $s0, $zero, 0xB
    ctx->r16 = ADD32(0, 0XB);
    func_80039A04(rdram, ctx);
        goto after_0;
    // 0x80039B6C: addiu       $s0, $zero, 0xB
    ctx->r16 = ADD32(0, 0XB);
    after_0:
    // 0x80039B70: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
    // 0x80039B74: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x80039B78: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x80039B7C: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80039B80: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80039B84: jal         0x8005BE2C
    // 0x80039B88: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_1;
    // 0x80039B88: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_1:
    // 0x80039B8C: lw          $a0, 0xFC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XFC);
    // 0x80039B90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80039B94: jal         0x8005B5C8
    // 0x80039B98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8005B5C8(rdram, ctx);
        goto after_2;
    // 0x80039B98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80039B9C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80039BA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80039BA4: jal         0x80056C2C
    // 0x80039BA8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    func_80056C2C(rdram, ctx);
        goto after_3;
    // 0x80039BA8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_3:
L_80039BAC:
    // 0x80039BAC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80039BB0: bne         $s3, $s7, L_80039B58
    if (ctx->r19 != ctx->r23) {
        // 0x80039BB4: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_80039B58;
    }
    // 0x80039BB4: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x80039BB8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80039BBC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80039BC0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80039BC4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80039BC8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80039BCC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80039BD0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80039BD4: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80039BD8: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80039BDC: jr          $ra
    // 0x80039BE0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80039BE0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80039BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039BE4: jr          $ra
    // 0x80039BE8: nop

    return;
    // 0x80039BE8: nop

;}
RECOMP_FUNC void func_80039BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039BEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80039BF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80039BF4: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80039BF8: addiu       $a0, $a0, -0x321C
    ctx->r4 = ADD32(ctx->r4, -0X321C);
    // 0x80039BFC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x80039C00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80039C04: jal         0x80007C3C
    // 0x80039C08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_0;
    // 0x80039C08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80039C0C: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x80039C10: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80039C14: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80039C18: sw          $v0, 0x15C($at)
    MEM_W(0X15C, ctx->r1) = ctx->r2;
    // 0x80039C1C: sw          $s0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r16;
    // 0x80039C20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80039C24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80039C28: jr          $ra
    // 0x80039C2C: nop

    return;
    // 0x80039C2C: nop

;}
RECOMP_FUNC void func_80039C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039C30: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80039C34: lw          $t6, -0x4294($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4294);
    // 0x80039C38: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80039C3C: beq         $t6, $zero, L_80039C74
    if (ctx->r14 == 0) {
        // 0x80039C40: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80039C74;
    }
    // 0x80039C40: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80039C44: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80039C48: lw          $t7, -0x41F4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X41F4);
    // 0x80039C4C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80039C50: bltz        $t7, L_80039C68
    if (SIGNED(ctx->r15) < 0) {
        // 0x80039C54: or          $a1, $t7, $zero
        ctx->r5 = ctx->r15 | 0;
            goto L_80039C68;
    }
    // 0x80039C54: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80039C58: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80039C5C: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x80039C60: b           L_80039C74
    // 0x80039C64: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80039C74;
    // 0x80039C64: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80039C68:
    // 0x80039C68: bne         $a1, $at, L_80039C74
    if (ctx->r5 != ctx->r1) {
        // 0x80039C6C: nop
    
            goto L_80039C74;
    }
    // 0x80039C6C: nop

    // 0x80039C70: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80039C74:
    // 0x80039C74: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80039C78: lw          $t8, -0x4290($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4290);
    // 0x80039C7C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80039C80: beq         $t8, $zero, L_80039CB8
    if (ctx->r24 == 0) {
        // 0x80039C84: lui         $t9, 0x800B
        ctx->r25 = S32(0X800B << 16);
            goto L_80039CB8;
    }
    // 0x80039C84: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80039C88: lw          $t9, -0x41F0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X41F0);
    // 0x80039C8C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80039C90: slt         $at, $v0, $t9
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80039C94: beq         $at, $zero, L_80039CAC
    if (ctx->r1 == 0) {
        // 0x80039C98: or          $a1, $t9, $zero
        ctx->r5 = ctx->r25 | 0;
            goto L_80039CAC;
    }
    // 0x80039C98: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x80039C9C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80039CA0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80039CA4: b           L_80039CB8
    // 0x80039CA8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80039CB8;
    // 0x80039CA8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80039CAC:
    // 0x80039CAC: bne         $v0, $a1, L_80039CB8
    if (ctx->r2 != ctx->r5) {
        // 0x80039CB0: nop
    
            goto L_80039CB8;
    }
    // 0x80039CB0: nop

    // 0x80039CB4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_80039CB8:
    // 0x80039CB8: lw          $t7, -0x428C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X428C);
    // 0x80039CBC: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80039CC0: beq         $t7, $zero, L_80039CF8
    if (ctx->r15 == 0) {
        // 0x80039CC4: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_80039CF8;
    }
    // 0x80039CC4: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80039CC8: lw          $t8, -0x41EC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X41EC);
    // 0x80039CCC: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80039CD0: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80039CD4: beq         $at, $zero, L_80039CEC
    if (ctx->r1 == 0) {
        // 0x80039CD8: or          $a1, $t8, $zero
        ctx->r5 = ctx->r24 | 0;
            goto L_80039CEC;
    }
    // 0x80039CD8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80039CDC: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x80039CE0: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80039CE4: b           L_80039CF8
    // 0x80039CE8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80039CF8;
    // 0x80039CE8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80039CEC:
    // 0x80039CEC: bne         $v0, $a1, L_80039CF8
    if (ctx->r2 != ctx->r5) {
        // 0x80039CF0: nop
    
            goto L_80039CF8;
    }
    // 0x80039CF0: nop

    // 0x80039CF4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_80039CF8:
    // 0x80039CF8: lw          $t6, -0x4288($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4288);
    // 0x80039CFC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80039D00: beq         $t6, $zero, L_80039D34
    if (ctx->r14 == 0) {
        // 0x80039D04: nop
    
            goto L_80039D34;
    }
    // 0x80039D04: nop

    // 0x80039D08: lw          $a1, -0x41E8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X41E8);
    // 0x80039D0C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80039D10: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80039D14: beq         $at, $zero, L_80039D28
    if (ctx->r1 == 0) {
        // 0x80039D18: nop
    
            goto L_80039D28;
    }
    // 0x80039D18: nop

    // 0x80039D1C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80039D20: jr          $ra
    // 0x80039D24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80039D24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80039D28:
    // 0x80039D28: bne         $v0, $a1, L_80039D34
    if (ctx->r2 != ctx->r5) {
        // 0x80039D2C: nop
    
            goto L_80039D34;
    }
    // 0x80039D2C: nop

    // 0x80039D30: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_80039D34:
    // 0x80039D34: jr          $ra
    // 0x80039D38: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80039D38: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80039D3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039D3C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80039D40: addiu       $a0, $a0, -0x4170
    ctx->r4 = ADD32(ctx->r4, -0X4170);
    // 0x80039D44: addiu       $t6, $zero, -0x64
    ctx->r14 = ADD32(0, -0X64);
    // 0x80039D48: lui         $t7, 0x1
    ctx->r15 = S32(0X1 << 16);
    // 0x80039D4C: sw          $t6, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->r14;
    // 0x80039D50: sw          $t7, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r15;
    // 0x80039D54: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80039D58: lw          $t8, -0x4294($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4294);
    // 0x80039D5C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80039D60: beq         $t8, $zero, L_80039D9C
    if (ctx->r24 == 0) {
        // 0x80039D64: lui         $t9, 0x800B
        ctx->r25 = S32(0X800B << 16);
            goto L_80039D9C;
    }
    // 0x80039D64: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80039D68: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80039D6C: lw          $v0, -0x41F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X41F4);
    // 0x80039D70: nop

    // 0x80039D74: slt         $at, $t6, $v0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80039D78: beq         $at, $zero, L_80039D84
    if (ctx->r1 == 0) {
        // 0x80039D7C: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_80039D84;
    }
    // 0x80039D7C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80039D80: sw          $v0, -0x40C8($at)
    MEM_W(-0X40C8, ctx->r1) = ctx->r2;
L_80039D84:
    // 0x80039D84: lw          $t6, 0xAC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XAC);
    // 0x80039D88: nop

    // 0x80039D8C: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80039D90: beq         $at, $zero, L_80039D9C
    if (ctx->r1 == 0) {
        // 0x80039D94: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_80039D9C;
    }
    // 0x80039D94: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80039D98: sw          $v0, -0x40C4($at)
    MEM_W(-0X40C4, ctx->r1) = ctx->r2;
L_80039D9C:
    // 0x80039D9C: lw          $t7, -0x4290($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4290);
    // 0x80039DA0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80039DA4: beq         $t7, $zero, L_80039DD8
    if (ctx->r15 == 0) {
        // 0x80039DA8: nop
    
            goto L_80039DD8;
    }
    // 0x80039DA8: nop

    // 0x80039DAC: lw          $v1, -0x41F0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X41F0);
    // 0x80039DB0: lw          $t8, 0xA8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XA8);
    // 0x80039DB4: lw          $v0, 0xAC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XAC);
    // 0x80039DB8: slt         $at, $t8, $v1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80039DBC: beq         $at, $zero, L_80039DC8
    if (ctx->r1 == 0) {
        // 0x80039DC0: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_80039DC8;
    }
    // 0x80039DC0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80039DC4: sw          $v1, -0x40C8($at)
    MEM_W(-0X40C8, ctx->r1) = ctx->r3;
L_80039DC8:
    // 0x80039DC8: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80039DCC: beq         $at, $zero, L_80039DD8
    if (ctx->r1 == 0) {
        // 0x80039DD0: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_80039DD8;
    }
    // 0x80039DD0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80039DD4: sw          $v1, -0x40C4($at)
    MEM_W(-0X40C4, ctx->r1) = ctx->r3;
L_80039DD8:
    // 0x80039DD8: lw          $t9, -0x428C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X428C);
    // 0x80039DDC: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80039DE0: beq         $t9, $zero, L_80039E14
    if (ctx->r25 == 0) {
        // 0x80039DE4: lui         $v1, 0x800B
        ctx->r3 = S32(0X800B << 16);
            goto L_80039E14;
    }
    // 0x80039DE4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80039DE8: lw          $v1, -0x41EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X41EC);
    // 0x80039DEC: lw          $t6, 0xA8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA8);
    // 0x80039DF0: lw          $v0, 0xAC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XAC);
    // 0x80039DF4: slt         $at, $t6, $v1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80039DF8: beq         $at, $zero, L_80039E04
    if (ctx->r1 == 0) {
        // 0x80039DFC: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_80039E04;
    }
    // 0x80039DFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80039E00: sw          $v1, -0x40C8($at)
    MEM_W(-0X40C8, ctx->r1) = ctx->r3;
L_80039E04:
    // 0x80039E04: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80039E08: beq         $at, $zero, L_80039E14
    if (ctx->r1 == 0) {
        // 0x80039E0C: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_80039E14;
    }
    // 0x80039E0C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80039E10: sw          $v1, -0x40C4($at)
    MEM_W(-0X40C4, ctx->r1) = ctx->r3;
L_80039E14:
    // 0x80039E14: lw          $t7, -0x4288($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4288);
    // 0x80039E18: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80039E1C: beq         $t7, $zero, L_80039E50
    if (ctx->r15 == 0) {
        // 0x80039E20: nop
    
            goto L_80039E50;
    }
    // 0x80039E20: nop

    // 0x80039E24: lw          $v1, -0x41E8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X41E8);
    // 0x80039E28: lw          $t8, 0xA8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XA8);
    // 0x80039E2C: lw          $v0, 0xAC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XAC);
    // 0x80039E30: slt         $at, $t8, $v1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80039E34: beq         $at, $zero, L_80039E40
    if (ctx->r1 == 0) {
        // 0x80039E38: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_80039E40;
    }
    // 0x80039E38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80039E3C: sw          $v1, -0x40C8($at)
    MEM_W(-0X40C8, ctx->r1) = ctx->r3;
L_80039E40:
    // 0x80039E40: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80039E44: beq         $at, $zero, L_80039E50
    if (ctx->r1 == 0) {
        // 0x80039E48: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_80039E50;
    }
    // 0x80039E48: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80039E4C: sw          $v1, -0x40C4($at)
    MEM_W(-0X40C4, ctx->r1) = ctx->r3;
L_80039E50:
    // 0x80039E50: jr          $ra
    // 0x80039E54: nop

    return;
    // 0x80039E54: nop

    // 0x80039E58: jr          $ra
    // 0x80039E5C: nop

    return;
    // 0x80039E5C: nop

    // 0x80039E60: jr          $ra
    // 0x80039E64: nop

    return;
    // 0x80039E64: nop

;}
RECOMP_FUNC void func_80039E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039E68: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80039E6C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80039E70: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x80039E74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80039E78: addiu       $s2, $s2, -0x4170
    ctx->r18 = ADD32(ctx->r18, -0X4170);
    // 0x80039E7C: addiu       $s0, $s0, -0x4298
    ctx->r16 = ADD32(ctx->r16, -0X4298);
    // 0x80039E80: addiu       $s3, $sp, 0x28
    ctx->r19 = ADD32(ctx->r29, 0X28);
    // 0x80039E84: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80039E88:
    // 0x80039E88: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x80039E8C: nop

    // 0x80039E90: beq         $t6, $zero, L_80039EF8
    if (ctx->r14 == 0) {
        // 0x80039E94: nop
    
            goto L_80039EF8;
    }
    // 0x80039E94: nop

    // 0x80039E98: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x80039E9C: nop

    // 0x80039EA0: bne         $t7, $zero, L_80039EF8
    if (ctx->r15 != 0) {
        // 0x80039EA4: nop
    
            goto L_80039EF8;
    }
    // 0x80039EA4: nop

    // 0x80039EA8: jal         0x8005C3A8
    // 0x80039EAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005C3A8(rdram, ctx);
        goto after_0;
    // 0x80039EAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x80039EB0: lw          $t8, 0x2C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X2C);
    // 0x80039EB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80039EB8: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x80039EBC: bne         $at, $zero, L_80039EE4
    if (ctx->r1 != 0) {
        // 0x80039EC0: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_80039EE4;
    }
    // 0x80039EC0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80039EC4: lw          $t9, 0x94($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X94);
    // 0x80039EC8: nop

    // 0x80039ECC: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80039ED0: addu        $v0, $s2, $t6
    ctx->r2 = ADD32(ctx->r18, ctx->r14);
    // 0x80039ED4: lw          $t7, 0xE0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XE0);
    // 0x80039ED8: nop

    // 0x80039EDC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80039EE0: sw          $t8, 0xE0($v0)
    MEM_W(0XE0, ctx->r2) = ctx->r24;
L_80039EE4:
    // 0x80039EE4: addiu       $t9, $zero, 0xE
    ctx->r25 = ADD32(0, 0XE);
    // 0x80039EE8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80039EEC: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x80039EF0: jal         0x8005BE2C
    // 0x80039EF4: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    func_8005BE2C(rdram, ctx);
        goto after_1;
    // 0x80039EF4: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    after_1:
L_80039EF8:
    // 0x80039EF8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80039EFC: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80039F00: bne         $at, $zero, L_80039E88
    if (ctx->r1 != 0) {
        // 0x80039F04: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80039E88;
    }
    // 0x80039F04: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80039F08: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80039F0C: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x80039F10: addiu       $s4, $s4, -0x4298
    ctx->r20 = ADD32(ctx->r20, -0X4298);
    // 0x80039F14: addiu       $s0, $s0, -0x4170
    ctx->r16 = ADD32(ctx->r16, -0X4170);
    // 0x80039F18: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80039F1C: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x80039F20: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
L_80039F24:
    // 0x80039F24: addiu       $s2, $s1, 0x4
    ctx->r18 = ADD32(ctx->r17, 0X4);
    // 0x80039F28: jal         0x8005C3A8
    // 0x80039F2C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8005C3A8(rdram, ctx);
        goto after_2;
    // 0x80039F2C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x80039F30: lw          $t7, 0x2C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X2C);
    // 0x80039F34: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80039F38: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x80039F3C: bne         $at, $zero, L_80039F54
    if (ctx->r1 != 0) {
        // 0x80039F40: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80039F54;
    }
    // 0x80039F40: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80039F44: lw          $t8, 0xE0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XE0);
    // 0x80039F48: nop

    // 0x80039F4C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80039F50: sw          $t9, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r25;
L_80039F54:
    // 0x80039F54: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80039F58: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80039F5C: jal         0x8005BE2C
    // 0x80039F60: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_3;
    // 0x80039F60: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_3:
    // 0x80039F64: lw          $t7, 0x10C($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X10C);
    // 0x80039F68: lw          $v0, 0xE0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE0);
    // 0x80039F6C: multu       $t7, $s5
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039F70: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80039F74: mflo        $v1
    ctx->r3 = lo;
    // 0x80039F78: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80039F7C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80039F80: beq         $at, $zero, L_80039F90
    if (ctx->r1 == 0) {
        // 0x80039F84: nop
    
            goto L_80039F90;
    }
    // 0x80039F84: nop

    // 0x80039F88: sw          $v1, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r3;
    // 0x80039F8C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80039F90:
    // 0x80039F90: bgez        $v0, L_80039F9C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80039F94: nop
    
            goto L_80039F9C;
    }
    // 0x80039F94: nop

    // 0x80039F98: sw          $zero, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = 0;
L_80039F9C:
    // 0x80039F9C: bne         $s1, $s6, L_80039F24
    if (ctx->r17 != ctx->r22) {
        // 0x80039FA0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80039F24;
    }
    // 0x80039FA0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80039FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80039FA8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80039FAC: jr          $ra
    // 0x80039FB0: nop

    return;
    // 0x80039FB0: nop

;}
RECOMP_FUNC void func_80039FB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039FB4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80039FB8: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x80039FBC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80039FC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80039FC4: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80039FC8: addiu       $v0, $sp, 0x48
    ctx->r2 = ADD32(ctx->r29, 0X48);
    // 0x80039FCC: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x80039FD0: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80039FD4: swc1        $f24, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f24.u32l;
L_80039FD8:
    // 0x80039FD8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80039FDC: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80039FE0: bne         $at, $zero, L_80039FD8
    if (ctx->r1 != 0) {
        // 0x80039FE4: sw          $v1, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->r3;
            goto L_80039FD8;
    }
    // 0x80039FE4: sw          $v1, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r3;
    // 0x80039FE8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80039FEC: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80039FF0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80039FF4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80039FF8: addiu       $s1, $s1, -0x4298
    ctx->r17 = ADD32(ctx->r17, -0X4298);
    // 0x80039FFC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003A000: addiu       $s4, $sp, 0x48
    ctx->r20 = ADD32(ctx->r29, 0X48);
    // 0x8003A004: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
L_8003A008:
    // 0x8003A008: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x8003A00C: nop

    // 0x8003A010: beq         $t6, $zero, L_8003A054
    if (ctx->r14 == 0) {
        // 0x8003A014: nop
    
            goto L_8003A054;
    }
    // 0x8003A014: nop

    // 0x8003A018: lw          $t7, 0x94($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X94);
    // 0x8003A01C: nop

    // 0x8003A020: bne         $s5, $t7, L_8003A054
    if (ctx->r21 != ctx->r15) {
        // 0x8003A024: nop
    
            goto L_8003A054;
    }
    // 0x8003A024: nop

    // 0x8003A028: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8003A02C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8003A030: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x8003A034: jal         0x8004058C
    // 0x8003A038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004058C(rdram, ctx);
        goto after_0;
    // 0x8003A038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8003A03C: bne         $v0, $zero, L_8003A054
    if (ctx->r2 != 0) {
        // 0x8003A040: addiu       $v0, $s2, 0x1
        ctx->r2 = ADD32(ctx->r18, 0X1);
            goto L_8003A054;
    }
    // 0x8003A040: addiu       $v0, $s2, 0x1
    ctx->r2 = ADD32(ctx->r18, 0X1);
    // 0x8003A044: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x8003A048: addu        $t9, $s4, $t8
    ctx->r25 = ADD32(ctx->r20, ctx->r24);
    // 0x8003A04C: sw          $s0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r16;
    // 0x8003A050: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8003A054:
    // 0x8003A054: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003A058: bne         $s0, $s3, L_8003A008
    if (ctx->r16 != ctx->r19) {
        // 0x8003A05C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8003A008;
    }
    // 0x8003A05C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8003A060: bgez        $s2, L_8003A070
    if (SIGNED(ctx->r18) >= 0) {
        // 0x8003A064: nop
    
            goto L_8003A070;
    }
    // 0x8003A064: nop

    // 0x8003A068: b           L_8003A09C
    // 0x8003A06C: addiu       $a0, $s5, 0x4
    ctx->r4 = ADD32(ctx->r21, 0X4);
        goto L_8003A09C;
    // 0x8003A06C: addiu       $a0, $s5, 0x4
    ctx->r4 = ADD32(ctx->r21, 0X4);
L_8003A070:
    // 0x8003A070: bne         $s2, $zero, L_8003A084
    if (ctx->r18 != 0) {
        // 0x8003A074: nop
    
            goto L_8003A084;
    }
    // 0x8003A074: nop

    // 0x8003A078: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8003A07C: b           L_8003A09C
    // 0x8003A080: nop

        goto L_8003A09C;
    // 0x8003A080: nop

L_8003A084:
    // 0x8003A084: jal         0x80028AB8
    // 0x8003A088: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80028AB8(rdram, ctx);
        goto after_1;
    // 0x8003A088: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x8003A08C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8003A090: addu        $t7, $s4, $t6
    ctx->r15 = ADD32(ctx->r20, ctx->r14);
    // 0x8003A094: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x8003A098: nop

L_8003A09C:
    // 0x8003A09C: jal         0x8002D000
    // 0x8003A0A0: nop

    func_8002D000(rdram, ctx);
        goto after_2;
    // 0x8003A0A0: nop

    after_2:
    // 0x8003A0A4: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x8003A0A8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8003A0AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003A0B0: jal         0x8004A0A0
    // 0x8003A0B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004A0A0(rdram, ctx);
        goto after_3;
    // 0x8003A0B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x8003A0B8: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x8003A0BC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8003A0C0: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8003A0C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003A0C8: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x8003A0CC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8003A0D0: jal         0x8005093C
    // 0x8003A0D4: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    func_8005093C(rdram, ctx);
        goto after_4;
    // 0x8003A0D4: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x8003A0D8: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8003A0DC: sll         $t8, $s5, 2
    ctx->r24 = S32(ctx->r21 << 2);
    // 0x8003A0E0: c.eq.s      $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f8.fl == ctx->f24.fl;
    // 0x8003A0E4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8003A0E8: bc1t        L_8003A0F8
    if (c1cs) {
        // 0x8003A0EC: addu        $a0, $a0, $t8
        ctx->r4 = ADD32(ctx->r4, ctx->r24);
            goto L_8003A0F8;
    }
    // 0x8003A0EC: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x8003A0F0: add.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x8003A0F4: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
L_8003A0F8:
    // 0x8003A0F8: lw          $a0, -0x4180($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4180);
    // 0x8003A0FC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8003A100: jal         0x8004A0A0
    // 0x8003A104: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_5;
    // 0x8003A104: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_5:
    // 0x8003A108: beq         $v0, $zero, L_8003A11C
    if (ctx->r2 == 0) {
        // 0x8003A10C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8003A11C;
    }
    // 0x8003A10C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8003A110: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8003A114: jal         0x80000FA0
    // 0x8003A118: addiu       $a0, $a0, 0x5AF8
    ctx->r4 = ADD32(ctx->r4, 0X5AF8);
    osSyncPrintf(rdram, ctx);
        goto after_6;
    // 0x8003A118: addiu       $a0, $a0, 0x5AF8
    ctx->r4 = ADD32(ctx->r4, 0X5AF8);
    after_6:
L_8003A11C:
    // 0x8003A11C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A120: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8003A124: jr          $ra
    // 0x8003A128: nop

    return;
    // 0x8003A128: nop

    // 0x8003A12C: jr          $ra
    // 0x8003A130: nop

    return;
    // 0x8003A130: nop

    // 0x8003A134: jr          $ra
    // 0x8003A138: nop

    return;
    // 0x8003A138: nop

    // 0x8003A13C: jr          $ra
    // 0x8003A140: nop

    return;
    // 0x8003A140: nop

    // 0x8003A144: jr          $ra
    // 0x8003A148: nop

    return;
    // 0x8003A148: nop

    // 0x8003A14C: jr          $ra
    // 0x8003A150: nop

    return;
    // 0x8003A150: nop

;}
RECOMP_FUNC void func_8003A154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A154: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x8003A158: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003A15C: addiu       $t6, $t6, -0x4298
    ctx->r14 = ADD32(ctx->r14, -0X4298);
    // 0x8003A160: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x8003A164: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x8003A168: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A16C: addiu       $s0, $s0, 0xD8
    ctx->r16 = ADD32(ctx->r16, 0XD8);
    // 0x8003A170: addiu       $s6, $s6, -0x4170
    ctx->r22 = ADD32(ctx->r22, -0X4170);
    // 0x8003A174: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8003A178: sw          $zero, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = 0;
    // 0x8003A17C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8003A180: addiu       $fp, $sp, 0x30
    ctx->r30 = ADD32(ctx->r29, 0X30);
    // 0x8003A184: addiu       $s7, $sp, 0x48
    ctx->r23 = ADD32(ctx->r29, 0X48);
L_8003A188:
    // 0x8003A188: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8003A18C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
L_8003A190:
    // 0x8003A190: lw          $t9, 0xB4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB4);
    // 0x8003A194: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x8003A198: sll         $t6, $t9, 3
    ctx->r14 = S32(ctx->r25 << 3);
    // 0x8003A19C: beq         $t8, $zero, L_8003A2B4
    if (ctx->r24 == 0) {
        // 0x8003A1A0: addu        $t7, $s6, $t6
        ctx->r15 = ADD32(ctx->r22, ctx->r14);
            goto L_8003A2B4;
    }
    // 0x8003A1A0: addu        $t7, $s6, $t6
    ctx->r15 = ADD32(ctx->r22, ctx->r14);
    // 0x8003A1A4: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x8003A1A8: addu        $s3, $t7, $t8
    ctx->r19 = ADD32(ctx->r15, ctx->r24);
    // 0x8003A1AC: lw          $t9, 0x18($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X18);
    // 0x8003A1B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003A1B4: bne         $t9, $at, L_8003A2B4
    if (ctx->r25 != ctx->r1) {
        // 0x8003A1B8: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_8003A2B4;
    }
    // 0x8003A1B8: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8003A1BC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8003A1C0: addiu       $t8, $t8, 0x368
    ctx->r24 = ADD32(ctx->r24, 0X368);
    // 0x8003A1C4: addu        $t7, $s6, $t6
    ctx->r15 = ADD32(ctx->r22, ctx->r14);
    // 0x8003A1C8: lw          $s4, 0x58($t7)
    ctx->r20 = MEM_W(ctx->r15, 0X58);
    // 0x8003A1CC: or          $t7, $s7, $zero
    ctx->r15 = ctx->r23 | 0;
    // 0x8003A1D0: addiu       $t6, $t8, 0x60
    ctx->r14 = ADD32(ctx->r24, 0X60);
L_8003A1D4:
    // 0x8003A1D4: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8003A1D8: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8003A1DC: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x8003A1E0: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x8003A1E4: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8003A1E8: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x8003A1EC: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x8003A1F0: bne         $t8, $t6, L_8003A1D4
    if (ctx->r24 != ctx->r14) {
        // 0x8003A1F4: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_8003A1D4;
    }
    // 0x8003A1F4: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x8003A1F8: lui         $s5, 0x8004
    ctx->r21 = S32(0X8004 << 16);
    // 0x8003A1FC: addiu       $s5, $s5, -0x396C
    ctx->r21 = ADD32(ctx->r21, -0X396C);
    // 0x8003A200: jal         0x80028AB8
    // 0x8003A204: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80028AB8(rdram, ctx);
        goto after_0;
    // 0x8003A204: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8003A208: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8003A20C: lw          $t9, -0x4178($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4178);
    // 0x8003A210: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8003A214: bne         $t9, $zero, L_8003A23C
    if (ctx->r25 != 0) {
        // 0x8003A218: sw          $s0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r16;
            goto L_8003A23C;
    }
    // 0x8003A218: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8003A21C: jal         0x80028AB8
    // 0x8003A220: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80028AB8(rdram, ctx);
        goto after_1;
    // 0x8003A220: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8003A224: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8003A228: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8003A22C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8003A230: lw          $t8, 0x154($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X154);
    // 0x8003A234: b           L_8003A244
    // 0x8003A238: sw          $t8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r24;
        goto L_8003A244;
    // 0x8003A238: sw          $t8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r24;
L_8003A23C:
    // 0x8003A23C: addiu       $t7, $zero, 0x33
    ctx->r15 = ADD32(0, 0X33);
    // 0x8003A240: sw          $t7, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r15;
L_8003A244:
    // 0x8003A244: sll         $t9, $s4, 2
    ctx->r25 = S32(ctx->r20 << 2);
    // 0x8003A248: subu        $t9, $t9, $s4
    ctx->r25 = SUB32(ctx->r25, ctx->r20);
    // 0x8003A24C: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x8003A250: subu        $t8, $t8, $s2
    ctx->r24 = SUB32(ctx->r24, ctx->r18);
    // 0x8003A254: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8003A258: addu        $t6, $s7, $t9
    ctx->r14 = ADD32(ctx->r23, ctx->r25);
    // 0x8003A25C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8003A260: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x8003A264: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8003A268: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8003A26C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8003A270: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003A274: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003A278: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x8003A27C: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x8003A280: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x8003A284: jal         0x8004A0A0
    // 0x8003A288: swc1        $f8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f8.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x8003A288: swc1        $f8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f8.u32l;
    after_2:
    // 0x8003A28C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8003A290: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8003A294: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8003A298: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x8003A29C: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x8003A2A0: jal         0x8004A0A0
    // 0x8003A2A4: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_3;
    // 0x8003A2A4: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    after_3:
    // 0x8003A2A8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8003A2AC: nop

    // 0x8003A2B0: sw          $v0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r2;
L_8003A2B4:
    // 0x8003A2B4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003A2B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003A2BC: bne         $s1, $at, L_8003A190
    if (ctx->r17 != ctx->r1) {
        // 0x8003A2C0: lw          $t7, 0x20($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X20);
            goto L_8003A190;
    }
    // 0x8003A2C0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8003A2C4: lw          $t9, 0xB4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB4);
    // 0x8003A2C8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8003A2CC: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x8003A2D0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8003A2D4: addiu       $t7, $t8, 0x4
    ctx->r15 = ADD32(ctx->r24, 0X4);
    // 0x8003A2D8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8003A2DC: addiu       $t8, $t9, 0x4
    ctx->r24 = ADD32(ctx->r25, 0X4);
    // 0x8003A2E0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8003A2E4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8003A2E8: bne         $t6, $at, L_8003A188
    if (ctx->r14 != ctx->r1) {
        // 0x8003A2EC: sw          $t6, 0xB4($sp)
        MEM_W(0XB4, ctx->r29) = ctx->r14;
            goto L_8003A188;
    }
    // 0x8003A2EC: sw          $t6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r14;
    // 0x8003A2F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A2F4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    // 0x8003A2F8: jr          $ra
    // 0x8003A2FC: nop

    return;
    // 0x8003A2FC: nop

;}
RECOMP_FUNC void func_8003A300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A300: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8003A304: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A308: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x8003A30C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003A310: lw          $t6, -0x40D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X40D8);
    // 0x8003A314: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x8003A318: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x8003A31C: jal         0x8005AF70
    // 0x8003A320: subu        $s1, $s6, $t6
    ctx->r17 = SUB32(ctx->r22, ctx->r14);
    func_8005AF70(rdram, ctx);
        goto after_0;
    // 0x8003A320: subu        $s1, $s6, $t6
    ctx->r17 = SUB32(ctx->r22, ctx->r14);
    after_0:
    // 0x8003A324: blez        $v0, L_8003A370
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8003A328: or          $s5, $v0, $zero
        ctx->r21 = ctx->r2 | 0;
            goto L_8003A370;
    }
    // 0x8003A328: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x8003A32C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003A330: sll         $s3, $v0, 2
    ctx->r19 = S32(ctx->r2 << 2);
    // 0x8003A334: addiu       $s4, $zero, 0xE
    ctx->r20 = ADD32(0, 0XE);
    // 0x8003A338: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
L_8003A33C:
    // 0x8003A33C: nop

    // 0x8003A340: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x8003A344: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8003A348: nop

    // 0x8003A34C: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x8003A350: jal         0x8005AD14
    // 0x8003A354: nop

    func_8005AD14(rdram, ctx);
        goto after_1;
    // 0x8003A354: nop

    after_1:
    // 0x8003A358: bne         $v0, $s4, L_8003A364
    if (ctx->r2 != ctx->r20) {
        // 0x8003A35C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8003A364;
    }
    // 0x8003A35C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8003A360: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8003A364:
    // 0x8003A364: slt         $at, $s0, $s3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8003A368: bne         $at, $zero, L_8003A33C
    if (ctx->r1 != 0) {
        // 0x8003A36C: lw          $t7, 0x34($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X34);
            goto L_8003A33C;
    }
    // 0x8003A36C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
L_8003A370:
    // 0x8003A370: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003A374: lw          $t6, -0x4294($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4294);
    // 0x8003A378: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003A37C: beq         $t6, $zero, L_8003A3A4
    if (ctx->r14 == 0) {
        // 0x8003A380: lui         $v0, 0x800B
        ctx->r2 = S32(0X800B << 16);
            goto L_8003A3A4;
    }
    // 0x8003A380: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003A384: lw          $v0, -0x41F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X41F4);
    // 0x8003A388: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8003A38C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8003A390: bne         $at, $zero, L_8003A3A4
    if (ctx->r1 != 0) {
        // 0x8003A394: addu        $s1, $s1, $v0
        ctx->r17 = ADD32(ctx->r17, ctx->r2);
            goto L_8003A3A4;
    }
    // 0x8003A394: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8003A398: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x8003A39C: b           L_8003A438
    // 0x8003A3A0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_8003A438;
    // 0x8003A3A0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_8003A3A4:
    // 0x8003A3A4: lw          $t8, -0x4290($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4290);
    // 0x8003A3A8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003A3AC: beq         $t8, $zero, L_8003A3D4
    if (ctx->r24 == 0) {
        // 0x8003A3B0: lui         $t6, 0x800B
        ctx->r14 = S32(0X800B << 16);
            goto L_8003A3D4;
    }
    // 0x8003A3B0: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003A3B4: lw          $v0, -0x41F0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X41F0);
    // 0x8003A3B8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8003A3BC: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8003A3C0: bne         $at, $zero, L_8003A3D4
    if (ctx->r1 != 0) {
        // 0x8003A3C4: addu        $s1, $s1, $v0
        ctx->r17 = ADD32(ctx->r17, ctx->r2);
            goto L_8003A3D4;
    }
    // 0x8003A3C4: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8003A3C8: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x8003A3CC: b           L_8003A438
    // 0x8003A3D0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_8003A438;
    // 0x8003A3D0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_8003A3D4:
    // 0x8003A3D4: lw          $t6, -0x428C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X428C);
    // 0x8003A3D8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003A3DC: beq         $t6, $zero, L_8003A404
    if (ctx->r14 == 0) {
        // 0x8003A3E0: lui         $t7, 0x800B
        ctx->r15 = S32(0X800B << 16);
            goto L_8003A404;
    }
    // 0x8003A3E0: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8003A3E4: lw          $v0, -0x41EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X41EC);
    // 0x8003A3E8: nop

    // 0x8003A3EC: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8003A3F0: bne         $at, $zero, L_8003A404
    if (ctx->r1 != 0) {
        // 0x8003A3F4: addu        $s1, $s1, $v0
        ctx->r17 = ADD32(ctx->r17, ctx->r2);
            goto L_8003A404;
    }
    // 0x8003A3F4: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8003A3F8: sw          $s6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r22;
    // 0x8003A3FC: b           L_8003A438
    // 0x8003A400: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_8003A438;
    // 0x8003A400: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_8003A404:
    // 0x8003A404: lw          $t7, -0x4288($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4288);
    // 0x8003A408: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003A40C: beq         $t7, $zero, L_8003A434
    if (ctx->r15 == 0) {
        // 0x8003A410: nop
    
            goto L_8003A434;
    }
    // 0x8003A410: nop

    // 0x8003A414: lw          $v0, -0x41E8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X41E8);
    // 0x8003A418: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8003A41C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8003A420: bne         $at, $zero, L_8003A434
    if (ctx->r1 != 0) {
        // 0x8003A424: addu        $s1, $s1, $v0
        ctx->r17 = ADD32(ctx->r17, ctx->r2);
            goto L_8003A434;
    }
    // 0x8003A424: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8003A428: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
    // 0x8003A42C: b           L_8003A438
    // 0x8003A430: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_8003A438;
    // 0x8003A430: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_8003A434:
    // 0x8003A434: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_8003A438:
    // 0x8003A438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A43C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8003A440: jr          $ra
    // 0x8003A444: nop

    return;
    // 0x8003A444: nop

;}
RECOMP_FUNC void func_8003A448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A448: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8003A44C: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8003A450: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A454: addiu       $s1, $s1, -0x4298
    ctx->r17 = ADD32(ctx->r17, -0X4298);
    // 0x8003A458: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003A45C: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_8003A460:
    // 0x8003A460: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x8003A464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003A468: beq         $t6, $zero, L_8003A478
    if (ctx->r14 == 0) {
        // 0x8003A46C: addiu       $a1, $zero, 0x2C
        ctx->r5 = ADD32(0, 0X2C);
            goto L_8003A478;
    }
    // 0x8003A46C: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x8003A470: jal         0x80030524
    // 0x8003A474: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80030524(rdram, ctx);
        goto after_0;
    // 0x8003A474: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_8003A478:
    // 0x8003A478: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003A47C: bne         $s0, $s2, L_8003A460
    if (ctx->r16 != ctx->r18) {
        // 0x8003A480: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8003A460;
    }
    // 0x8003A480: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8003A484: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003A488: lw          $v0, -0x4178($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4178);
    // 0x8003A48C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003A490: beq         $v0, $at, L_8003A4BC
    if (ctx->r2 == ctx->r1) {
        // 0x8003A494: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_8003A4BC;
    }
    // 0x8003A494: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8003A498: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003A49C: beq         $v0, $at, L_8003A4EC
    if (ctx->r2 == ctx->r1) {
        // 0x8003A4A0: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8003A4EC;
    }
    // 0x8003A4A0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8003A4A4: beq         $v0, $at, L_8003A51C
    if (ctx->r2 == ctx->r1) {
        // 0x8003A4A8: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_8003A51C;
    }
    // 0x8003A4A8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8003A4AC: beq         $v0, $at, L_8003A550
    if (ctx->r2 == ctx->r1) {
        // 0x8003A4B0: lui         $at, 0x447A
        ctx->r1 = S32(0X447A << 16);
            goto L_8003A550;
    }
    // 0x8003A4B0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8003A4B4: b           L_8003A57C
    // 0x8003A4B8: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
        goto L_8003A57C;
    // 0x8003A4B8: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
L_8003A4BC:
    // 0x8003A4BC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003A4C0: lwc1        $f4, 0x5B08($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5B08);
    // 0x8003A4C4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003A4C8: lwc1        $f8, 0x5B0C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5B0C);
    // 0x8003A4CC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003A4D0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8003A4D4: lwc1        $f10, 0x5B10($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5B10);
    // 0x8003A4D8: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x8003A4DC: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x8003A4E0: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x8003A4E4: b           L_8003A578
    // 0x8003A4E8: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
        goto L_8003A578;
    // 0x8003A4E8: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
L_8003A4EC:
    // 0x8003A4EC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003A4F0: lwc1        $f4, 0x5B14($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5B14);
    // 0x8003A4F4: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x8003A4F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8003A4FC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003A500: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8003A504: lwc1        $f10, 0x5B18($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5B18);
    // 0x8003A508: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x8003A50C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x8003A510: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x8003A514: b           L_8003A578
    // 0x8003A518: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
        goto L_8003A578;
    // 0x8003A518: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
L_8003A51C:
    // 0x8003A51C: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x8003A520: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8003A524: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8003A528: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8003A52C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003A530: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8003A534: lwc1        $f10, 0x5B1C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5B1C);
    // 0x8003A538: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x8003A53C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x8003A540: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x8003A544: b           L_8003A578
    // 0x8003A548: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
        goto L_8003A578;
    // 0x8003A548: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x8003A54C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
L_8003A550:
    // 0x8003A550: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8003A554: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003A558: lwc1        $f8, 0x5B20($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5B20);
    // 0x8003A55C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003A560: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8003A564: lwc1        $f10, 0x5B24($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5B24);
    // 0x8003A568: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x8003A56C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x8003A570: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x8003A574: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
L_8003A578:
    // 0x8003A578: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
L_8003A57C:
    // 0x8003A57C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8003A580: jal         0x80059DE8
    // 0x8003A584: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_80059DE8(rdram, ctx);
        goto after_1;
    // 0x8003A584: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_1:
    // 0x8003A588: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A58C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8003A590: jr          $ra
    // 0x8003A594: nop

    return;
    // 0x8003A594: nop

;}
RECOMP_FUNC void func_8003A598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A598: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8003A59C: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8003A5A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A5A4: addiu       $s1, $s1, -0x4298
    ctx->r17 = ADD32(ctx->r17, -0X4298);
    // 0x8003A5A8: addiu       $s3, $sp, 0x28
    ctx->r19 = ADD32(ctx->r29, 0X28);
    // 0x8003A5AC: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
    // 0x8003A5B0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003A5B4: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
L_8003A5B8:
    // 0x8003A5B8: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x8003A5BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003A5C0: beq         $t6, $zero, L_8003A61C
    if (ctx->r14 == 0) {
        // 0x8003A5C4: nop
    
            goto L_8003A61C;
    }
    // 0x8003A5C4: nop

    // 0x8003A5C8: jal         0x8005BCB4
    // 0x8003A5CC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8005BCB4(rdram, ctx);
        goto after_0;
    // 0x8003A5CC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x8003A5D0: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8003A5D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003A5D8: andi        $t8, $t7, 0x1000
    ctx->r24 = ctx->r15 & 0X1000;
    // 0x8003A5DC: beq         $t8, $zero, L_8003A5EC
    if (ctx->r24 == 0) {
        // 0x8003A5E0: addiu       $t9, $zero, 0x14
        ctx->r25 = ADD32(0, 0X14);
            goto L_8003A5EC;
    }
    // 0x8003A5E0: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x8003A5E4: b           L_8003A5EC
    // 0x8003A5E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003A5EC;
    // 0x8003A5E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003A5EC:
    // 0x8003A5EC: beq         $v0, $zero, L_8003A61C
    if (ctx->r2 == 0) {
        // 0x8003A5F0: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_8003A61C;
    }
    // 0x8003A5F0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003A5F4: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x8003A5F8: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x8003A5FC: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8003A600: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8003A604: jal         0x8002D000
    // 0x8003A608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002D000(rdram, ctx);
        goto after_1;
    // 0x8003A608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8003A60C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003A610: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x8003A614: jal         0x8004A0A0
    // 0x8003A618: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x8003A618: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_2:
L_8003A61C:
    // 0x8003A61C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003A620: bne         $s0, $s4, L_8003A5B8
    if (ctx->r16 != ctx->r20) {
        // 0x8003A624: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8003A5B8;
    }
    // 0x8003A624: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8003A628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A62C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8003A630: jr          $ra
    // 0x8003A634: nop

    return;
    // 0x8003A634: nop

;}
RECOMP_FUNC void func_8003A638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A638: addiu       $sp, $sp, -0x168
    ctx->r29 = ADD32(ctx->r29, -0X168);
    // 0x8003A63C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003A640: lw          $t6, -0x4260($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4260);
    // 0x8003A644: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8003A648: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8003A64C: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8003A650: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8003A654: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8003A658: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8003A65C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8003A660: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8003A664: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8003A668: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8003A66C: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8003A670: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8003A674: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8003A678: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8003A67C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8003A680: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8003A684: bne         $t6, $zero, L_8003A794
    if (ctx->r14 != 0) {
        // 0x8003A688: sw          $zero, 0x160($sp)
        MEM_W(0X160, ctx->r29) = 0;
            goto L_8003A794;
    }
    // 0x8003A688: sw          $zero, 0x160($sp)
    MEM_W(0X160, ctx->r29) = 0;
    // 0x8003A68C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8003A690: lw          $t7, -0x415C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X415C);
    // 0x8003A694: addiu       $at, $zero, 0x384
    ctx->r1 = ADD32(0, 0X384);
    // 0x8003A698: bne         $t7, $at, L_8003A794
    if (ctx->r15 != ctx->r1) {
        // 0x8003A69C: sw          $zero, 0x160($sp)
        MEM_W(0X160, ctx->r29) = 0;
            goto L_8003A794;
    }
    // 0x8003A69C: sw          $zero, 0x160($sp)
    MEM_W(0X160, ctx->r29) = 0;
    // 0x8003A6A0: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003A6A4: lw          $t8, -0x4298($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4298);
    // 0x8003A6A8: sw          $zero, 0x160($sp)
    MEM_W(0X160, ctx->r29) = 0;
    // 0x8003A6AC: bne         $t8, $zero, L_8003A794
    if (ctx->r24 != 0) {
        // 0x8003A6B0: lui         $v0, 0x800B
        ctx->r2 = S32(0X800B << 16);
            goto L_8003A794;
    }
    // 0x8003A6B0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003A6B4: addiu       $v0, $v0, -0x42C0
    ctx->r2 = ADD32(ctx->r2, -0X42C0);
    // 0x8003A6B8: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8003A6BC: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x8003A6C0: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x8003A6C4: jal         0x8003A598
    // 0x8003A6C8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_8003A598(rdram, ctx);
        goto after_0;
    // 0x8003A6C8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_0:
    // 0x8003A6CC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003A6D0: lw          $v0, -0x4178($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4178);
    // 0x8003A6D4: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x8003A6D8: bne         $v0, $zero, L_8003A728
    if (ctx->r2 != 0) {
        // 0x8003A6DC: nop
    
            goto L_8003A728;
    }
    // 0x8003A6DC: nop

    // 0x8003A6E0: jal         0x80059A94
    // 0x8003A6E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80059A94(rdram, ctx);
        goto after_1;
    // 0x8003A6E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8003A6E8: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x8003A6EC: addiu       $s7, $s7, -0x4298
    ctx->r23 = ADD32(ctx->r23, -0X4298);
    // 0x8003A6F0: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8003A6F4: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
L_8003A6F8:
    // 0x8003A6F8: lw          $t7, 0x4($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X4);
    // 0x8003A6FC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8003A700: beq         $t7, $zero, L_8003A714
    if (ctx->r15 == 0) {
        // 0x8003A704: addiu       $a1, $zero, 0x2D
        ctx->r5 = ADD32(0, 0X2D);
            goto L_8003A714;
    }
    // 0x8003A704: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x8003A708: jal         0x80030524
    // 0x8003A70C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80030524(rdram, ctx);
        goto after_2;
    // 0x8003A70C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8003A710: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
L_8003A714:
    // 0x8003A714: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8003A718: bne         $s6, $t0, L_8003A6F8
    if (ctx->r22 != ctx->r8) {
        // 0x8003A71C: addiu       $s7, $s7, 0x4
        ctx->r23 = ADD32(ctx->r23, 0X4);
            goto L_8003A6F8;
    }
    // 0x8003A71C: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x8003A720: b           L_8003A794
    // 0x8003A724: nop

        goto L_8003A794;
    // 0x8003A724: nop

L_8003A728:
    // 0x8003A728: beq         $t0, $v0, L_8003A734
    if (ctx->r8 == ctx->r2) {
        // 0x8003A72C: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_8003A734;
    }
    // 0x8003A72C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8003A730: bne         $v0, $at, L_8003A758
    if (ctx->r2 != ctx->r1) {
        // 0x8003A734: lui         $a0, 0x8004
        ctx->r4 = S32(0X8004 << 16);
            goto L_8003A758;
    }
L_8003A734:
    // 0x8003A734: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8003A738: addiu       $a0, $a0, -0x4A34
    ctx->r4 = ADD32(ctx->r4, -0X4A34);
    // 0x8003A73C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x8003A740: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003A744: jal         0x80007C3C
    // 0x8003A748: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_3;
    // 0x8003A748: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x8003A74C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003A750: b           L_8003A794
    // 0x8003A754: sw          $v0, -0x4084($at)
    MEM_W(-0X4084, ctx->r1) = ctx->r2;
        goto L_8003A794;
    // 0x8003A754: sw          $v0, -0x4084($at)
    MEM_W(-0X4084, ctx->r1) = ctx->r2;
L_8003A758:
    // 0x8003A758: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003A75C: beq         $v0, $at, L_8003A76C
    if (ctx->r2 == ctx->r1) {
        // 0x8003A760: lui         $a0, 0x8004
        ctx->r4 = S32(0X8004 << 16);
            goto L_8003A76C;
    }
    // 0x8003A760: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8003A764: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8003A768: bne         $v0, $at, L_8003A78C
    if (ctx->r2 != ctx->r1) {
        // 0x8003A76C: addiu       $a0, $a0, -0x4C50
        ctx->r4 = ADD32(ctx->r4, -0X4C50);
            goto L_8003A78C;
    }
L_8003A76C:
    // 0x8003A76C: addiu       $a0, $a0, -0x4C50
    ctx->r4 = ADD32(ctx->r4, -0X4C50);
    // 0x8003A770: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x8003A774: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003A778: jal         0x80007C3C
    // 0x8003A77C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_4;
    // 0x8003A77C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x8003A780: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003A784: b           L_8003A794
    // 0x8003A788: sw          $v0, -0x4084($at)
    MEM_W(-0X4084, ctx->r1) = ctx->r2;
        goto L_8003A794;
    // 0x8003A788: sw          $v0, -0x4084($at)
    MEM_W(-0X4084, ctx->r1) = ctx->r2;
L_8003A78C:
    // 0x8003A78C: jal         0x8003A448
    // 0x8003A790: nop

    func_8003A448(rdram, ctx);
        goto after_5;
    // 0x8003A790: nop

    after_5:
L_8003A794:
    // 0x8003A794: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003A798: lw          $t8, -0x4298($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4298);
    // 0x8003A79C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003A7A0: sw          $zero, 0x638($at)
    MEM_W(0X638, ctx->r1) = 0;
    // 0x8003A7A4: lw          $a2, 0x160($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X160);
    // 0x8003A7A8: sltiu       $at, $t8, 0x5
    ctx->r1 = ctx->r24 < 0X5 ? 1 : 0;
    // 0x8003A7AC: beq         $at, $zero, L_8003AF60
    if (ctx->r1 == 0) {
        // 0x8003A7B0: addiu       $t0, $zero, 0x4
        ctx->r8 = ADD32(0, 0X4);
            goto L_8003AF60;
    }
    // 0x8003A7B0: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x8003A7B4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8003A7B8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003A7BC: addu        $at, $at, $t8
    gpr jr_addend_8003A7C8 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8003A7C0: lw          $t8, 0x5B28($at)
    ctx->r24 = ADD32(ctx->r1, 0X5B28);
    // 0x8003A7C4: nop

    // 0x8003A7C8: jr          $t8
    // 0x8003A7CC: nop

    switch (jr_addend_8003A7C8 >> 2) {
        case 0: goto L_8003ADE4; break;
        case 1: goto L_8003AD38; break;
        case 2: goto L_8003AA78; break;
        case 3: goto L_8003A7D0; break;
        case 4: goto L_8003A878; break;
        default: switch_error(__func__, 0x8003A7C8, 0x80095B28);
    }
    // 0x8003A7CC: nop

L_8003A7D0:
    // 0x8003A7D0: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x8003A7D4: addiu       $s7, $s7, -0x4298
    ctx->r23 = ADD32(ctx->r23, -0X4298);
    // 0x8003A7D8: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8003A7DC: addiu       $fp, $zero, 0x2
    ctx->r30 = ADD32(0, 0X2);
    // 0x8003A7E0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8003A7E4:
    // 0x8003A7E4: lw          $t9, 0x4($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X4);
    // 0x8003A7E8: nop

    // 0x8003A7EC: beq         $t9, $zero, L_8003A810
    if (ctx->r25 == 0) {
        // 0x8003A7F0: nop
    
            goto L_8003A810;
    }
    // 0x8003A7F0: nop

    // 0x8003A7F4: lw          $t6, 0xC8($s7)
    ctx->r14 = MEM_W(ctx->r23, 0XC8);
    // 0x8003A7F8: or          $s0, $s6, $zero
    ctx->r16 = ctx->r22 | 0;
    // 0x8003A7FC: bne         $s1, $t6, L_8003A810
    if (ctx->r17 != ctx->r14) {
        // 0x8003A800: nop
    
            goto L_8003A810;
    }
    // 0x8003A800: nop

    // 0x8003A804: jal         0x80039BEC
    // 0x8003A808: sw          $fp, 0xC8($s7)
    MEM_W(0XC8, ctx->r23) = ctx->r30;
    func_80039BEC(rdram, ctx);
        goto after_6;
    // 0x8003A808: sw          $fp, 0xC8($s7)
    MEM_W(0XC8, ctx->r23) = ctx->r30;
    after_6:
    // 0x8003A80C: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
L_8003A810:
    // 0x8003A810: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8003A814: bne         $s6, $t0, L_8003A7E4
    if (ctx->r22 != ctx->r8) {
        // 0x8003A818: addiu       $s7, $s7, 0x4
        ctx->r23 = ADD32(ctx->r23, 0X4);
            goto L_8003A7E4;
    }
    // 0x8003A818: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x8003A81C: jal         0x8003A300
    // 0x8003A820: addiu       $s2, $sp, 0x160
    ctx->r18 = ADD32(ctx->r29, 0X160);
    func_8003A300(rdram, ctx);
        goto after_7;
    // 0x8003A820: addiu       $s2, $sp, 0x160
    ctx->r18 = ADD32(ctx->r29, 0X160);
    after_7:
    // 0x8003A824: lw          $a2, 0x160($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X160);
    // 0x8003A828: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8003A82C: beq         $a2, $zero, L_8003A83C
    if (ctx->r6 == 0) {
        // 0x8003A830: nop
    
            goto L_8003A83C;
    }
    // 0x8003A830: nop

    // 0x8003A834: b           L_8003AF64
    // 0x8003A838: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
        goto L_8003AF64;
    // 0x8003A838: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_8003A83C:
    // 0x8003A83C: beq         $at, $zero, L_8003A84C
    if (ctx->r1 == 0) {
        // 0x8003A840: lui         $t7, 0x800B
        ctx->r15 = S32(0X800B << 16);
            goto L_8003A84C;
    }
    // 0x8003A840: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8003A844: b           L_8003AF64
    // 0x8003A848: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8003AF64;
    // 0x8003A848: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8003A84C:
    // 0x8003A84C: lw          $t7, -0x4270($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4270);
    // 0x8003A850: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003A854: beq         $t7, $at, L_8003AF60
    if (ctx->r15 == ctx->r1) {
        // 0x8003A858: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_8003AF60;
    }
    // 0x8003A858: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003A85C: lw          $t8, -0x415C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X415C);
    // 0x8003A860: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003A864: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8003A868: bne         $t9, $zero, L_8003AF60
    if (ctx->r25 != 0) {
        // 0x8003A86C: sw          $t9, -0x415C($at)
        MEM_W(-0X415C, ctx->r1) = ctx->r25;
            goto L_8003AF60;
    }
    // 0x8003A86C: sw          $t9, -0x415C($at)
    MEM_W(-0X415C, ctx->r1) = ctx->r25;
    // 0x8003A870: b           L_8003AF64
    // 0x8003A874: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8003AF64;
    // 0x8003A874: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8003A878:
    // 0x8003A878: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x8003A87C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8003A880: addiu       $v1, $v1, -0x4170
    ctx->r3 = ADD32(ctx->r3, -0X4170);
    // 0x8003A884: addiu       $s7, $s7, -0x4298
    ctx->r23 = ADD32(ctx->r23, -0X4298);
    // 0x8003A888: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8003A88C: addiu       $fp, $zero, 0x2
    ctx->r30 = ADD32(0, 0X2);
    // 0x8003A890: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8003A894:
    // 0x8003A894: lw          $t6, 0xA4($s7)
    ctx->r14 = MEM_W(ctx->r23, 0XA4);
    // 0x8003A898: lw          $t7, 0x4($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X4);
    // 0x8003A89C: sw          $t6, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r14;
    // 0x8003A8A0: beq         $t7, $zero, L_8003A8CC
    if (ctx->r15 == 0) {
        // 0x8003A8A4: nop
    
            goto L_8003A8CC;
    }
    // 0x8003A8A4: nop

    // 0x8003A8A8: lw          $t8, 0xC8($s7)
    ctx->r24 = MEM_W(ctx->r23, 0XC8);
    // 0x8003A8AC: or          $s0, $s6, $zero
    ctx->r16 = ctx->r22 | 0;
    // 0x8003A8B0: bne         $s1, $t8, L_8003A8CC
    if (ctx->r17 != ctx->r24) {
        // 0x8003A8B4: nop
    
            goto L_8003A8CC;
    }
    // 0x8003A8B4: nop

    // 0x8003A8B8: sw          $fp, 0xC8($s7)
    MEM_W(0XC8, ctx->r23) = ctx->r30;
    // 0x8003A8BC: jal         0x80039BEC
    // 0x8003A8C0: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    func_80039BEC(rdram, ctx);
        goto after_8;
    // 0x8003A8C0: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    after_8:
    // 0x8003A8C4: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x8003A8C8: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
L_8003A8CC:
    // 0x8003A8CC: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8003A8D0: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x8003A8D4: bne         $s6, $t0, L_8003A894
    if (ctx->r22 != ctx->r8) {
        // 0x8003A8D8: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8003A894;
    }
    // 0x8003A8D8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8003A8DC: jal         0x80039D3C
    // 0x8003A8E0: nop

    func_80039D3C(rdram, ctx);
        goto after_9;
    // 0x8003A8E0: nop

    after_9:
    // 0x8003A8E4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003A8E8: lw          $v0, -0x4178($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4178);
    // 0x8003A8EC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8003A8F0: beq         $v0, $zero, L_8003A900
    if (ctx->r2 == 0) {
        // 0x8003A8F4: nop
    
            goto L_8003A900;
    }
    // 0x8003A8F4: nop

    // 0x8003A8F8: bne         $v0, $at, L_8003A910
    if (ctx->r2 != ctx->r1) {
        // 0x8003A8FC: nop
    
            goto L_8003A910;
    }
    // 0x8003A8FC: nop

L_8003A900:
    // 0x8003A900: jal         0x8003A154
    // 0x8003A904: nop

    func_8003A154(rdram, ctx);
        goto after_10;
    // 0x8003A904: nop

    after_10:
    // 0x8003A908: b           L_8003AA3C
    // 0x8003A90C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_8003AA3C;
    // 0x8003A90C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8003A910:
    // 0x8003A910: jal         0x8005B4EC
    // 0x8003A914: nop

    func_8005B4EC(rdram, ctx);
        goto after_11;
    // 0x8003A914: nop

    after_11:
    // 0x8003A918: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8003A91C: beq         $at, $zero, L_8003AA3C
    if (ctx->r1 == 0) {
        // 0x8003A920: lui         $s7, 0x8009
        ctx->r23 = S32(0X8009 << 16);
            goto L_8003AA3C;
    }
    // 0x8003A920: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x8003A924: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8003A928: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8003A92C: lw          $t7, -0x4178($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4178);
    // 0x8003A930: lw          $t9, -0x4298($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4298);
    // 0x8003A934: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8003A938: sll         $t6, $t9, 5
    ctx->r14 = S32(ctx->r25 << 5);
    // 0x8003A93C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8003A940: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x8003A944: addu        $s6, $s6, $t9
    ctx->r22 = ADD32(ctx->r22, ctx->r25);
    // 0x8003A948: lw          $s6, 0x170($s6)
    ctx->r22 = MEM_W(ctx->r22, 0X170);
    // 0x8003A94C: addiu       $s7, $s7, 0xD8
    ctx->r23 = ADD32(ctx->r23, 0XD8);
    // 0x8003A950: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003A954: sw          $s7, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r23;
    // 0x8003A958: jal         0x80028AB8
    // 0x8003A95C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80028AB8(rdram, ctx);
        goto after_12;
    // 0x8003A95C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x8003A960: sll         $t7, $s6, 3
    ctx->r15 = S32(ctx->r22 << 3);
    // 0x8003A964: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8003A968: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x8003A96C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8003A970: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8003A974: lw          $t9, 0x210($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X210);
    // 0x8003A978: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8003A97C: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x8003A980: addiu       $a0, $a0, -0x4298
    ctx->r4 = ADD32(ctx->r4, -0X4298);
    // 0x8003A984: addiu       $s6, $sp, 0x110
    ctx->r22 = ADD32(ctx->r29, 0X110);
    // 0x8003A988: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8003A98C: sw          $t9, 0x18($s7)
    MEM_W(0X18, ctx->r23) = ctx->r25;
L_8003A990:
    // 0x8003A990: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8003A994: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x8003A998: beq         $t7, $zero, L_8003A9A8
    if (ctx->r15 == 0) {
        // 0x8003A99C: addu        $t8, $s6, $t6
        ctx->r24 = ADD32(ctx->r22, ctx->r14);
            goto L_8003A9A8;
    }
    // 0x8003A99C: addu        $t8, $s6, $t6
    ctx->r24 = ADD32(ctx->r22, ctx->r14);
    // 0x8003A9A0: sw          $v1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r3;
    // 0x8003A9A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8003A9A8:
    // 0x8003A9A8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003A9AC: bne         $v1, $t0, L_8003A990
    if (ctx->r3 != ctx->r8) {
        // 0x8003A9B0: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_8003A990;
    }
    // 0x8003A9B0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8003A9B4: jal         0x80028AB8
    // 0x8003A9B8: addiu       $a0, $s0, -0x1
    ctx->r4 = ADD32(ctx->r16, -0X1);
    func_80028AB8(rdram, ctx);
        goto after_13;
    // 0x8003A9B8: addiu       $a0, $s0, -0x1
    ctx->r4 = ADD32(ctx->r16, -0X1);
    after_13:
    // 0x8003A9BC: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x8003A9C0: addu        $t7, $s6, $t9
    ctx->r15 = ADD32(ctx->r22, ctx->r25);
    // 0x8003A9C4: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x8003A9C8: jal         0x8002D000
    // 0x8003A9CC: nop

    func_8002D000(rdram, ctx);
        goto after_14;
    // 0x8003A9CC: nop

    after_14:
    // 0x8003A9D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003A9D4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8003A9D8: jal         0x8004A0A0
    // 0x8003A9DC: addiu       $a2, $sp, 0x120
    ctx->r6 = ADD32(ctx->r29, 0X120);
    func_8004A0A0(rdram, ctx);
        goto after_15;
    // 0x8003A9DC: addiu       $a2, $sp, 0x120
    ctx->r6 = ADD32(ctx->r29, 0X120);
    after_15:
    // 0x8003A9E0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8003A9E4: lwc1        $f0, 0x124($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X124);
    // 0x8003A9E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8003A9EC: lwc1        $f6, 0x120($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X120);
    // 0x8003A9F0: lwc1        $f8, 0x128($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X128);
    // 0x8003A9F4: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x8003A9F8: addiu       $s0, $sp, 0x138
    ctx->r16 = ADD32(ctx->r29, 0X138);
    // 0x8003A9FC: swc1        $f0, 0x10($s7)
    MEM_W(0X10, ctx->r23) = ctx->f0.u32l;
    // 0x8003AA00: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8003AA04: swc1        $f0, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f0.u32l;
    // 0x8003AA08: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003AA0C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8003AA10: swc1        $f6, 0xC($s7)
    MEM_W(0XC, ctx->r23) = ctx->f6.u32l;
    // 0x8003AA14: jal         0x8004A0A0
    // 0x8003AA18: swc1        $f8, 0x14($s7)
    MEM_W(0X14, ctx->r23) = ctx->f8.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_16;
    // 0x8003AA18: swc1        $f8, 0x14($s7)
    MEM_W(0X14, ctx->r23) = ctx->f8.u32l;
    after_16:
    // 0x8003AA1C: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x8003AA20: addiu       $t6, $t6, -0x3ACC
    ctx->r14 = ADD32(ctx->r14, -0X3ACC);
    // 0x8003AA24: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    // 0x8003AA28: sw          $t6, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r14;
    // 0x8003AA2C: sw          $s1, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r17;
    // 0x8003AA30: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x8003AA34: jal         0x8004A0A0
    // 0x8003AA38: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_17;
    // 0x8003AA38: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_17:
L_8003AA3C:
    // 0x8003AA3C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003AA40: lw          $t8, -0x415C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X415C);
    // 0x8003AA44: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003AA48: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8003AA4C: bne         $t9, $zero, L_8003AF60
    if (ctx->r25 != 0) {
        // 0x8003AA50: sw          $t9, -0x415C($at)
        MEM_W(-0X415C, ctx->r1) = ctx->r25;
            goto L_8003AF60;
    }
    // 0x8003AA50: sw          $t9, -0x415C($at)
    MEM_W(-0X415C, ctx->r1) = ctx->r25;
    // 0x8003AA54: jal         0x80039C30
    // 0x8003AA58: addiu       $a0, $sp, 0x160
    ctx->r4 = ADD32(ctx->r29, 0X160);
    func_80039C30(rdram, ctx);
        goto after_18;
    // 0x8003AA58: addiu       $a0, $sp, 0x160
    ctx->r4 = ADD32(ctx->r29, 0X160);
    after_18:
    // 0x8003AA5C: bne         $v0, $s1, L_8003AA70
    if (ctx->r2 != ctx->r17) {
        // 0x8003AA60: nop
    
            goto L_8003AA70;
    }
    // 0x8003AA60: nop

    // 0x8003AA64: lw          $a2, 0x160($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X160);
    // 0x8003AA68: b           L_8003AF64
    // 0x8003AA6C: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
        goto L_8003AF64;
    // 0x8003AA6C: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
L_8003AA70:
    // 0x8003AA70: b           L_8003AF64
    // 0x8003AA74: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8003AF64;
    // 0x8003AA74: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8003AA78:
    // 0x8003AA78: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x8003AA7C: addiu       $s7, $s7, -0x4298
    ctx->r23 = ADD32(ctx->r23, -0X4298);
    // 0x8003AA80: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8003AA84: addiu       $fp, $zero, 0x2
    ctx->r30 = ADD32(0, 0X2);
    // 0x8003AA88: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8003AA8C:
    // 0x8003AA8C: lw          $t7, 0x4($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X4);
    // 0x8003AA90: nop

    // 0x8003AA94: beq         $t7, $zero, L_8003AAB4
    if (ctx->r15 == 0) {
        // 0x8003AA98: nop
    
            goto L_8003AAB4;
    }
    // 0x8003AA98: nop

    // 0x8003AA9C: lw          $t6, 0xC8($s7)
    ctx->r14 = MEM_W(ctx->r23, 0XC8);
    // 0x8003AAA0: or          $s0, $s6, $zero
    ctx->r16 = ctx->r22 | 0;
    // 0x8003AAA4: bne         $s1, $t6, L_8003AAB4
    if (ctx->r17 != ctx->r14) {
        // 0x8003AAA8: nop
    
            goto L_8003AAB4;
    }
    // 0x8003AAA8: nop

    // 0x8003AAAC: jal         0x80039BEC
    // 0x8003AAB0: sw          $fp, 0xC8($s7)
    MEM_W(0XC8, ctx->r23) = ctx->r30;
    func_80039BEC(rdram, ctx);
        goto after_19;
    // 0x8003AAB0: sw          $fp, 0xC8($s7)
    MEM_W(0XC8, ctx->r23) = ctx->r30;
    after_19:
L_8003AAB4:
    // 0x8003AAB4: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8003AAB8: slti        $at, $s6, 0x4
    ctx->r1 = SIGNED(ctx->r22) < 0X4 ? 1 : 0;
    // 0x8003AABC: bne         $at, $zero, L_8003AA8C
    if (ctx->r1 != 0) {
        // 0x8003AAC0: addiu       $s7, $s7, 0x4
        ctx->r23 = ADD32(ctx->r23, 0X4);
            goto L_8003AA8C;
    }
    // 0x8003AAC0: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x8003AAC4: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x8003AAC8: addiu       $s7, $s7, -0x4298
    ctx->r23 = ADD32(ctx->r23, -0X4298);
    // 0x8003AACC: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8003AAD0: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
L_8003AAD4:
    // 0x8003AAD4: lw          $t8, 0x110($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X110);
    // 0x8003AAD8: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x8003AADC: bne         $s1, $t8, L_8003AC20
    if (ctx->r17 != ctx->r24) {
        // 0x8003AAE0: lui         $t7, 0x800B
        ctx->r15 = S32(0X800B << 16);
            goto L_8003AC20;
    }
    // 0x8003AAE0: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8003AAE4: sll         $t6, $s6, 3
    ctx->r14 = S32(ctx->r22 << 3);
    // 0x8003AAE8: subu        $t6, $t6, $s6
    ctx->r14 = SUB32(ctx->r14, ctx->r22);
    // 0x8003AAEC: addiu       $t7, $t7, -0x4170
    ctx->r15 = ADD32(ctx->r15, -0X4170);
    // 0x8003AAF0: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8003AAF4: addiu       $t8, $t8, 0xF4
    ctx->r24 = ADD32(ctx->r24, 0XF4);
    // 0x8003AAF8: addu        $v1, $t9, $t7
    ctx->r3 = ADD32(ctx->r25, ctx->r15);
    // 0x8003AAFC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003AB00: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8003AB04: bne         $s6, $zero, L_8003AB24
    if (ctx->r22 != 0) {
        // 0x8003AB08: sw          $t9, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r25;
            goto L_8003AB24;
    }
    // 0x8003AB08: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x8003AB0C: addiu       $a0, $zero, 0x382
    ctx->r4 = ADD32(0, 0X382);
    // 0x8003AB10: jal         0x80027874
    // 0x8003AB14: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    func_80027874(rdram, ctx);
        goto after_20;
    // 0x8003AB14: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    after_20:
    // 0x8003AB18: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x8003AB1C: b           L_8003AB3C
    // 0x8003AB20: lw          $t7, 0xE0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XE0);
        goto L_8003AB3C;
    // 0x8003AB20: lw          $t7, 0xE0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XE0);
L_8003AB24:
    // 0x8003AB24: addiu       $a0, $zero, 0x380
    ctx->r4 = ADD32(0, 0X380);
    // 0x8003AB28: jal         0x80027874
    // 0x8003AB2C: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    func_80027874(rdram, ctx);
        goto after_21;
    // 0x8003AB2C: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    after_21:
    // 0x8003AB30: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x8003AB34: nop

    // 0x8003AB38: lw          $t7, 0xE0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XE0);
L_8003AB3C:
    // 0x8003AB3C: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x8003AB40: addiu       $t6, $t7, -0x3
    ctx->r14 = ADD32(ctx->r15, -0X3);
    // 0x8003AB44: bgez        $t6, L_8003AB50
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8003AB48: sw          $t6, 0xE0($v1)
        MEM_W(0XE0, ctx->r3) = ctx->r14;
            goto L_8003AB50;
    }
    // 0x8003AB48: sw          $t6, 0xE0($v1)
    MEM_W(0XE0, ctx->r3) = ctx->r14;
    // 0x8003AB4C: sw          $zero, 0xE0($v1)
    MEM_W(0XE0, ctx->r3) = 0;
L_8003AB50:
    // 0x8003AB50: lw          $a0, 0x118($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X118);
    // 0x8003AB54: jal         0x8004A0A0
    // 0x8003AB58: addiu       $a2, $sp, 0xD8
    ctx->r6 = ADD32(ctx->r29, 0XD8);
    func_8004A0A0(rdram, ctx);
        goto after_22;
    // 0x8003AB58: addiu       $a2, $sp, 0xD8
    ctx->r6 = ADD32(ctx->r29, 0XD8);
    after_22:
    // 0x8003AB5C: jal         0x80040784
    // 0x8003AB60: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_80040784(rdram, ctx);
        goto after_23;
    // 0x8003AB60: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_23:
    // 0x8003AB64: jal         0x80040800
    // 0x8003AB68: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_80040800(rdram, ctx);
        goto after_24;
    // 0x8003AB68: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_24:
    // 0x8003AB6C: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x8003AB70: addiu       $t9, $s6, 0x1
    ctx->r25 = ADD32(ctx->r22, 0X1);
    // 0x8003AB74: sw          $v0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r2;
    // 0x8003AB78: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003AB7C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8003AB80: addiu       $a2, $sp, 0xB8
    ctx->r6 = ADD32(ctx->r29, 0XB8);
    // 0x8003AB84: jal         0x8004A0A0
    // 0x8003AB88: sw          $t9, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r25;
    func_8004A0A0(rdram, ctx);
        goto after_25;
    // 0x8003AB88: sw          $t9, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r25;
    after_25:
    // 0x8003AB8C: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x8003AB90: sw          $zero, 0x110($s7)
    MEM_W(0X110, ctx->r23) = 0;
    // 0x8003AB94: lw          $t6, 0x0($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X0);
    // 0x8003AB98: addiu       $s0, $s6, 0x4
    ctx->r16 = ADD32(ctx->r22, 0X4);
    // 0x8003AB9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003ABA0: jal         0x8005C478
    // 0x8003ABA4: sw          $t6, 0x118($s7)
    MEM_W(0X118, ctx->r23) = ctx->r14;
    func_8005C478(rdram, ctx);
        goto after_26;
    // 0x8003ABA4: sw          $t6, 0x118($s7)
    MEM_W(0X118, ctx->r23) = ctx->r14;
    after_26:
    // 0x8003ABA8: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x8003ABAC: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x8003ABB0: sw          $t8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r24;
    // 0x8003ABB4: sw          $t9, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r25;
    // 0x8003ABB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003ABBC: jal         0x8005BE2C
    // 0x8003ABC0: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    func_8005BE2C(rdram, ctx);
        goto after_27;
    // 0x8003ABC0: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    after_27:
    // 0x8003ABC4: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x8003ABC8: sw          $t7, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r15;
    // 0x8003ABCC: sw          $fp, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r30;
    // 0x8003ABD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003ABD4: jal         0x8005BE2C
    // 0x8003ABD8: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    func_8005BE2C(rdram, ctx);
        goto after_28;
    // 0x8003ABD8: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    after_28:
    // 0x8003ABDC: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x8003ABE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003ABE4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8003ABE8: jal         0x80056C2C
    // 0x8003ABEC: addiu       $a2, $sp, 0xA4
    ctx->r6 = ADD32(ctx->r29, 0XA4);
    func_80056C2C(rdram, ctx);
        goto after_29;
    // 0x8003ABEC: addiu       $a2, $sp, 0xA4
    ctx->r6 = ADD32(ctx->r29, 0XA4);
    after_29:
    // 0x8003ABF0: jal         0x8004515C
    // 0x8003ABF4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_8004515C(rdram, ctx);
        goto after_30;
    // 0x8003ABF4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_30:
    // 0x8003ABF8: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x8003ABFC: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x8003AC00: sw          $t8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r24;
    // 0x8003AC04: sw          $t6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r14;
    // 0x8003AC08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003AC0C: jal         0x8005BE2C
    // 0x8003AC10: addiu       $a1, $sp, 0x98
    ctx->r5 = ADD32(ctx->r29, 0X98);
    func_8005BE2C(rdram, ctx);
        goto after_31;
    // 0x8003AC10: addiu       $a1, $sp, 0x98
    ctx->r5 = ADD32(ctx->r29, 0X98);
    after_31:
    // 0x8003AC14: jal         0x80039FB4
    // 0x8003AC18: or          $s5, $s6, $zero
    ctx->r21 = ctx->r22 | 0;
    func_80039FB4(rdram, ctx);
        goto after_32;
    // 0x8003AC18: or          $s5, $s6, $zero
    ctx->r21 = ctx->r22 | 0;
    after_32:
    // 0x8003AC1C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8003AC20:
    // 0x8003AC20: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x8003AC24: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8003AC28: addiu       $t7, $t9, 0x4
    ctx->r15 = ADD32(ctx->r25, 0X4);
    // 0x8003AC2C: sw          $t7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r15;
    // 0x8003AC30: bne         $s6, $fp, L_8003AAD4
    if (ctx->r22 != ctx->r30) {
        // 0x8003AC34: addiu       $s7, $s7, 0x4
        ctx->r23 = ADD32(ctx->r23, 0X4);
            goto L_8003AAD4;
    }
    // 0x8003AC34: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x8003AC38: jal         0x80039E68
    // 0x8003AC3C: nop

    func_80039E68(rdram, ctx);
        goto after_33;
    // 0x8003AC3C: nop

    after_33:
    // 0x8003AC40: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8003AC44: lw          $a2, 0x160($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X160);
    // 0x8003AC48: addiu       $v1, $v1, -0x4170
    ctx->r3 = ADD32(ctx->r3, -0X4170);
    // 0x8003AC4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003AC50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003AC54: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8003AC58:
    // 0x8003AC58: lw          $t6, 0xE0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XE0);
    // 0x8003AC5C: nop

    // 0x8003AC60: beq         $t6, $zero, L_8003AC70
    if (ctx->r14 == 0) {
        // 0x8003AC64: nop
    
            goto L_8003AC70;
    }
    // 0x8003AC64: nop

    // 0x8003AC68: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8003AC6C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_8003AC70:
    // 0x8003AC70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003AC74: bne         $v0, $fp, L_8003AC58
    if (ctx->r2 != ctx->r30) {
        // 0x8003AC78: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8003AC58;
    }
    // 0x8003AC78: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8003AC7C: bne         $a0, $zero, L_8003AC8C
    if (ctx->r4 != 0) {
        // 0x8003AC80: lui         $a1, 0x800B
        ctx->r5 = S32(0X800B << 16);
            goto L_8003AC8C;
    }
    // 0x8003AC80: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AC84: b           L_8003AF64
    // 0x8003AC88: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8003AF64;
    // 0x8003AC88: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8003AC8C:
    // 0x8003AC8C: addiu       $a1, $a1, -0x3D98
    ctx->r5 = ADD32(ctx->r5, -0X3D98);
    // 0x8003AC90: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8003AC94: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003AC98: beq         $v1, $zero, L_8003ACB8
    if (ctx->r3 == 0) {
        // 0x8003AC9C: addiu       $t8, $v1, -0x1
        ctx->r24 = ADD32(ctx->r3, -0X1);
            goto L_8003ACB8;
    }
    // 0x8003AC9C: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
    // 0x8003ACA0: bne         $t8, $zero, L_8003ACC4
    if (ctx->r24 != 0) {
        // 0x8003ACA4: sw          $t8, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r24;
            goto L_8003ACC4;
    }
    // 0x8003ACA4: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8003ACA8: bne         $a0, $s1, L_8003ACC4
    if (ctx->r4 != ctx->r17) {
        // 0x8003ACAC: nop
    
            goto L_8003ACC4;
    }
    // 0x8003ACAC: nop

    // 0x8003ACB0: b           L_8003AF64
    // 0x8003ACB4: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
        goto L_8003AF64;
    // 0x8003ACB4: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
L_8003ACB8:
    // 0x8003ACB8: bne         $a0, $s1, L_8003ACC4
    if (ctx->r4 != ctx->r17) {
        // 0x8003ACBC: addiu       $t7, $zero, 0x10
        ctx->r15 = ADD32(0, 0X10);
            goto L_8003ACC4;
    }
    // 0x8003ACBC: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x8003ACC0: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
L_8003ACC4:
    // 0x8003ACC4: lw          $t6, -0x4270($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4270);
    // 0x8003ACC8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003ACCC: beq         $t6, $at, L_8003AF60
    if (ctx->r14 == ctx->r1) {
        // 0x8003ACD0: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_8003AF60;
    }
    // 0x8003ACD0: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003ACD4: lw          $t8, -0x415C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X415C);
    // 0x8003ACD8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003ACDC: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8003ACE0: bne         $t9, $zero, L_8003AF60
    if (ctx->r25 != 0) {
        // 0x8003ACE4: sw          $t9, -0x415C($at)
        MEM_W(-0X415C, ctx->r1) = ctx->r25;
            goto L_8003AF60;
    }
    // 0x8003ACE4: sw          $t9, -0x415C($at)
    MEM_W(-0X415C, ctx->r1) = ctx->r25;
    // 0x8003ACE8: bne         $a0, $s1, L_8003ACF8
    if (ctx->r4 != ctx->r17) {
        // 0x8003ACEC: lui         $v0, 0x800B
        ctx->r2 = S32(0X800B << 16);
            goto L_8003ACF8;
    }
    // 0x8003ACEC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003ACF0: b           L_8003AF64
    // 0x8003ACF4: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
        goto L_8003AF64;
    // 0x8003ACF4: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
L_8003ACF8:
    // 0x8003ACF8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8003ACFC: lw          $v0, -0x4090($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4090);
    // 0x8003AD00: lw          $v1, -0x408C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X408C);
    // 0x8003AD04: nop

    // 0x8003AD08: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003AD0C: beq         $at, $zero, L_8003AD20
    if (ctx->r1 == 0) {
        // 0x8003AD10: slt         $at, $v0, $v1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8003AD20;
    }
    // 0x8003AD10: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003AD14: b           L_8003AF64
    // 0x8003AD18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003AF64;
    // 0x8003AD18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003AD1C: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_8003AD20:
    // 0x8003AD20: beq         $at, $zero, L_8003AD30
    if (ctx->r1 == 0) {
        // 0x8003AD24: nop
    
            goto L_8003AD30;
    }
    // 0x8003AD24: nop

    // 0x8003AD28: b           L_8003AF64
    // 0x8003AD2C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8003AF64;
    // 0x8003AD2C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8003AD30:
    // 0x8003AD30: b           L_8003AF64
    // 0x8003AD34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8003AF64;
    // 0x8003AD34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8003AD38:
    // 0x8003AD38: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x8003AD3C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8003AD40: addiu       $v1, $v1, -0x4170
    ctx->r3 = ADD32(ctx->r3, -0X4170);
    // 0x8003AD44: addiu       $s7, $s7, -0x4298
    ctx->r23 = ADD32(ctx->r23, -0X4298);
    // 0x8003AD48: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8003AD4C: addiu       $fp, $zero, 0x2
    ctx->r30 = ADD32(0, 0X2);
    // 0x8003AD50: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8003AD54:
    // 0x8003AD54: lw          $t7, 0xA4($s7)
    ctx->r15 = MEM_W(ctx->r23, 0XA4);
    // 0x8003AD58: lw          $t6, 0x4($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X4);
    // 0x8003AD5C: sw          $t7, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r15;
    // 0x8003AD60: beq         $t6, $zero, L_8003AD8C
    if (ctx->r14 == 0) {
        // 0x8003AD64: nop
    
            goto L_8003AD8C;
    }
    // 0x8003AD64: nop

    // 0x8003AD68: lw          $t8, 0xC8($s7)
    ctx->r24 = MEM_W(ctx->r23, 0XC8);
    // 0x8003AD6C: or          $s0, $s6, $zero
    ctx->r16 = ctx->r22 | 0;
    // 0x8003AD70: bne         $s1, $t8, L_8003AD8C
    if (ctx->r17 != ctx->r24) {
        // 0x8003AD74: nop
    
            goto L_8003AD8C;
    }
    // 0x8003AD74: nop

    // 0x8003AD78: sw          $fp, 0xC8($s7)
    MEM_W(0XC8, ctx->r23) = ctx->r30;
    // 0x8003AD7C: jal         0x80039BEC
    // 0x8003AD80: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    func_80039BEC(rdram, ctx);
        goto after_34;
    // 0x8003AD80: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    after_34:
    // 0x8003AD84: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x8003AD88: nop

L_8003AD8C:
    // 0x8003AD8C: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8003AD90: slti        $at, $s6, 0x4
    ctx->r1 = SIGNED(ctx->r22) < 0X4 ? 1 : 0;
    // 0x8003AD94: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x8003AD98: bne         $at, $zero, L_8003AD54
    if (ctx->r1 != 0) {
        // 0x8003AD9C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8003AD54;
    }
    // 0x8003AD9C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8003ADA0: jal         0x80039D3C
    // 0x8003ADA4: nop

    func_80039D3C(rdram, ctx);
        goto after_35;
    // 0x8003ADA4: nop

    after_35:
    // 0x8003ADA8: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8003ADAC: lw          $t9, -0x415C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X415C);
    // 0x8003ADB0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003ADB4: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x8003ADB8: bne         $t7, $zero, L_8003AF60
    if (ctx->r15 != 0) {
        // 0x8003ADBC: sw          $t7, -0x415C($at)
        MEM_W(-0X415C, ctx->r1) = ctx->r15;
            goto L_8003AF60;
    }
    // 0x8003ADBC: sw          $t7, -0x415C($at)
    MEM_W(-0X415C, ctx->r1) = ctx->r15;
    // 0x8003ADC0: jal         0x80039C30
    // 0x8003ADC4: addiu       $a0, $sp, 0x160
    ctx->r4 = ADD32(ctx->r29, 0X160);
    func_80039C30(rdram, ctx);
        goto after_36;
    // 0x8003ADC4: addiu       $a0, $sp, 0x160
    ctx->r4 = ADD32(ctx->r29, 0X160);
    after_36:
    // 0x8003ADC8: bne         $v0, $s1, L_8003ADDC
    if (ctx->r2 != ctx->r17) {
        // 0x8003ADCC: nop
    
            goto L_8003ADDC;
    }
    // 0x8003ADCC: nop

    // 0x8003ADD0: lw          $a2, 0x160($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X160);
    // 0x8003ADD4: b           L_8003AF64
    // 0x8003ADD8: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
        goto L_8003AF64;
    // 0x8003ADD8: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
L_8003ADDC:
    // 0x8003ADDC: b           L_8003AF64
    // 0x8003ADE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8003AF64;
    // 0x8003ADE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8003ADE4:
    // 0x8003ADE4: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x8003ADE8: addiu       $s7, $s7, -0x4298
    ctx->r23 = ADD32(ctx->r23, -0X4298);
    // 0x8003ADEC: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8003ADF0: addiu       $fp, $zero, 0x2
    ctx->r30 = ADD32(0, 0X2);
    // 0x8003ADF4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8003ADF8:
    // 0x8003ADF8: lw          $t6, 0x4($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X4);
    // 0x8003ADFC: nop

    // 0x8003AE00: beq         $t6, $zero, L_8003AE2C
    if (ctx->r14 == 0) {
        // 0x8003AE04: nop
    
            goto L_8003AE2C;
    }
    // 0x8003AE04: nop

    // 0x8003AE08: lw          $t8, 0xC8($s7)
    ctx->r24 = MEM_W(ctx->r23, 0XC8);
    // 0x8003AE0C: or          $s0, $s6, $zero
    ctx->r16 = ctx->r22 | 0;
    // 0x8003AE10: bne         $s1, $t8, L_8003AE2C
    if (ctx->r17 != ctx->r24) {
        // 0x8003AE14: nop
    
            goto L_8003AE2C;
    }
    // 0x8003AE14: nop

    // 0x8003AE18: sw          $a2, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r6;
    // 0x8003AE1C: jal         0x80039BEC
    // 0x8003AE20: sw          $fp, 0xC8($s7)
    MEM_W(0XC8, ctx->r23) = ctx->r30;
    func_80039BEC(rdram, ctx);
        goto after_37;
    // 0x8003AE20: sw          $fp, 0xC8($s7)
    MEM_W(0XC8, ctx->r23) = ctx->r30;
    after_37:
    // 0x8003AE24: lw          $a2, 0x160($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X160);
    // 0x8003AE28: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
L_8003AE2C:
    // 0x8003AE2C: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8003AE30: bne         $s6, $t0, L_8003ADF8
    if (ctx->r22 != ctx->r8) {
        // 0x8003AE34: addiu       $s7, $s7, 0x4
        ctx->r23 = ADD32(ctx->r23, 0X4);
            goto L_8003ADF8;
    }
    // 0x8003AE34: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x8003AE38: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8003AE3C: lw          $t9, -0x4294($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4294);
    // 0x8003AE40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003AE44: beq         $t9, $zero, L_8003AE68
    if (ctx->r25 == 0) {
        // 0x8003AE48: lui         $t6, 0x800B
        ctx->r14 = S32(0X800B << 16);
            goto L_8003AE68;
    }
    // 0x8003AE48: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003AE4C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8003AE50: lw          $t7, -0x41D0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X41D0);
    // 0x8003AE54: nop

    // 0x8003AE58: bne         $t7, $zero, L_8003AE68
    if (ctx->r15 != 0) {
        // 0x8003AE5C: nop
    
            goto L_8003AE68;
    }
    // 0x8003AE5C: nop

    // 0x8003AE60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003AE64: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_8003AE68:
    // 0x8003AE68: lw          $t6, -0x4290($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4290);
    // 0x8003AE6C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8003AE70: beq         $t6, $zero, L_8003AE90
    if (ctx->r14 == 0) {
        // 0x8003AE74: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_8003AE90;
    }
    // 0x8003AE74: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003AE78: lw          $t8, -0x41CC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X41CC);
    // 0x8003AE7C: nop

    // 0x8003AE80: bne         $t8, $zero, L_8003AE90
    if (ctx->r24 != 0) {
        // 0x8003AE84: nop
    
            goto L_8003AE90;
    }
    // 0x8003AE84: nop

    // 0x8003AE88: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8003AE8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8003AE90:
    // 0x8003AE90: lw          $t9, -0x428C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X428C);
    // 0x8003AE94: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003AE98: beq         $t9, $zero, L_8003AEB8
    if (ctx->r25 == 0) {
        // 0x8003AE9C: lui         $t7, 0x800B
        ctx->r15 = S32(0X800B << 16);
            goto L_8003AEB8;
    }
    // 0x8003AE9C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8003AEA0: lw          $t7, -0x41C8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X41C8);
    // 0x8003AEA4: nop

    // 0x8003AEA8: bne         $t7, $zero, L_8003AEB8
    if (ctx->r15 != 0) {
        // 0x8003AEAC: nop
    
            goto L_8003AEB8;
    }
    // 0x8003AEAC: nop

    // 0x8003AEB0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8003AEB4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8003AEB8:
    // 0x8003AEB8: lw          $t6, -0x4288($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4288);
    // 0x8003AEBC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003AEC0: beq         $t6, $zero, L_8003AEE0
    if (ctx->r14 == 0) {
        // 0x8003AEC4: lui         $a1, 0x800B
        ctx->r5 = S32(0X800B << 16);
            goto L_8003AEE0;
    }
    // 0x8003AEC4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AEC8: lw          $t8, -0x41C4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X41C4);
    // 0x8003AECC: nop

    // 0x8003AED0: bne         $t8, $zero, L_8003AEE0
    if (ctx->r24 != 0) {
        // 0x8003AED4: nop
    
            goto L_8003AEE0;
    }
    // 0x8003AED4: nop

    // 0x8003AED8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8003AEDC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8003AEE0:
    // 0x8003AEE0: bne         $v0, $zero, L_8003AEF0
    if (ctx->r2 != 0) {
        // 0x8003AEE4: addiu       $a1, $a1, -0x3D98
        ctx->r5 = ADD32(ctx->r5, -0X3D98);
            goto L_8003AEF0;
    }
    // 0x8003AEE4: addiu       $a1, $a1, -0x3D98
    ctx->r5 = ADD32(ctx->r5, -0X3D98);
    // 0x8003AEE8: b           L_8003AF64
    // 0x8003AEEC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8003AF64;
    // 0x8003AEEC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8003AEF0:
    // 0x8003AEF0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8003AEF4: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003AEF8: beq         $v1, $zero, L_8003AF18
    if (ctx->r3 == 0) {
        // 0x8003AEFC: addiu       $t9, $v1, -0x1
        ctx->r25 = ADD32(ctx->r3, -0X1);
            goto L_8003AF18;
    }
    // 0x8003AEFC: addiu       $t9, $v1, -0x1
    ctx->r25 = ADD32(ctx->r3, -0X1);
    // 0x8003AF00: bne         $t9, $zero, L_8003AF24
    if (ctx->r25 != 0) {
        // 0x8003AF04: sw          $t9, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r25;
            goto L_8003AF24;
    }
    // 0x8003AF04: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x8003AF08: bne         $v0, $s1, L_8003AF24
    if (ctx->r2 != ctx->r17) {
        // 0x8003AF0C: nop
    
            goto L_8003AF24;
    }
    // 0x8003AF0C: nop

    // 0x8003AF10: b           L_8003AF64
    // 0x8003AF14: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
        goto L_8003AF64;
    // 0x8003AF14: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
L_8003AF18:
    // 0x8003AF18: bne         $v0, $s1, L_8003AF24
    if (ctx->r2 != ctx->r17) {
        // 0x8003AF1C: addiu       $t6, $zero, 0x10
        ctx->r14 = ADD32(0, 0X10);
            goto L_8003AF24;
    }
    // 0x8003AF1C: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x8003AF20: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
L_8003AF24:
    // 0x8003AF24: lw          $t8, -0x4270($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4270);
    // 0x8003AF28: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003AF2C: beq         $t8, $at, L_8003AF60
    if (ctx->r24 == ctx->r1) {
        // 0x8003AF30: lui         $t9, 0x800B
        ctx->r25 = S32(0X800B << 16);
            goto L_8003AF60;
    }
    // 0x8003AF30: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8003AF34: lw          $t9, -0x415C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X415C);
    // 0x8003AF38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003AF3C: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x8003AF40: bne         $t7, $zero, L_8003AF60
    if (ctx->r15 != 0) {
        // 0x8003AF44: sw          $t7, -0x415C($at)
        MEM_W(-0X415C, ctx->r1) = ctx->r15;
            goto L_8003AF60;
    }
    // 0x8003AF44: sw          $t7, -0x415C($at)
    MEM_W(-0X415C, ctx->r1) = ctx->r15;
    // 0x8003AF48: bne         $v0, $s1, L_8003AF58
    if (ctx->r2 != ctx->r17) {
        // 0x8003AF4C: nop
    
            goto L_8003AF58;
    }
    // 0x8003AF4C: nop

    // 0x8003AF50: b           L_8003AF64
    // 0x8003AF54: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
        goto L_8003AF64;
    // 0x8003AF54: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
L_8003AF58:
    // 0x8003AF58: b           L_8003AF64
    // 0x8003AF5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8003AF64;
    // 0x8003AF5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8003AF60:
    // 0x8003AF60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003AF64:
    // 0x8003AF64: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8003AF68: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8003AF6C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8003AF70: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8003AF74: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8003AF78: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8003AF7C: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8003AF80: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8003AF84: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8003AF88: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8003AF8C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8003AF90: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8003AF94: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8003AF98: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8003AF9C: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8003AFA0: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8003AFA4: jr          $ra
    // 0x8003AFA8: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    return;
    // 0x8003AFA8: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
;}
RECOMP_FUNC void func_8003AFAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AFAC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003AFB0: sw          $zero, -0x3D98($at)
    MEM_W(-0X3D98, ctx->r1) = 0;
    // 0x8003AFB4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AFB8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003AFBC: addiu       $a1, $a1, -0x4298
    ctx->r5 = ADD32(ctx->r5, -0X4298);
    // 0x8003AFC0: sw          $zero, 0x16C($at)
    MEM_W(0X16C, ctx->r1) = 0;
    // 0x8003AFC4: lw          $v0, 0x28($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X28);
    // 0x8003AFC8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8003AFCC: addiu       $t7, $t7, 0x12C
    ctx->r15 = ADD32(ctx->r15, 0X12C);
    // 0x8003AFD0: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8003AFD4: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x8003AFD8: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8003AFDC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x8003AFE0: multu       $t8, $a0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003AFE4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8003AFE8: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8003AFEC: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x8003AFF0: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x8003AFF4: addiu       $fp, $fp, -0x4170
    ctx->r30 = ADD32(ctx->r30, -0X4170);
    // 0x8003AFF8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8003AFFC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8003B000: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8003B004: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8003B008: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8003B00C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8003B010: mflo        $t9
    ctx->r25 = lo;
    // 0x8003B014: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8003B018: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8003B01C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8003B020: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8003B024: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8003B028: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8003B02C: bne         $t0, $at, L_8003B058
    if (ctx->r8 != ctx->r1) {
        // 0x8003B030: sw          $t9, 0x14($fp)
        MEM_W(0X14, ctx->r30) = ctx->r25;
            goto L_8003B058;
    }
    // 0x8003B030: sw          $t9, 0x14($fp)
    MEM_W(0X14, ctx->r30) = ctx->r25;
    // 0x8003B034: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003B038: bne         $v0, $at, L_8003B058
    if (ctx->r2 != ctx->r1) {
        // 0x8003B03C: nop
    
            goto L_8003B058;
    }
    // 0x8003B03C: nop

    // 0x8003B040: lw          $t1, -0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, -0X4);
    // 0x8003B044: nop

    // 0x8003B048: multu       $t1, $a0
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003B04C: mflo        $t2
    ctx->r10 = lo;
    // 0x8003B050: sw          $t2, 0x14($fp)
    MEM_W(0X14, ctx->r30) = ctx->r10;
    // 0x8003B054: nop

L_8003B058:
    // 0x8003B058: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8003B05C: addiu       $v1, $v1, -0x42C0
    ctx->r3 = ADD32(ctx->r3, -0X42C0);
    // 0x8003B060: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x8003B064: lui         $at, 0xFFEF
    ctx->r1 = S32(0XFFEF << 16);
    // 0x8003B068: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8003B06C: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x8003B070: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8003B074: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8003B078: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8003B07C: addiu       $v0, $v0, 0x318
    ctx->r2 = ADD32(ctx->r2, 0X318);
    // 0x8003B080: addiu       $v1, $v1, 0x320
    ctx->r3 = ADD32(ctx->r3, 0X320);
L_8003B084:
    // 0x8003B084: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8003B088: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8003B08C: bne         $at, $zero, L_8003B084
    if (ctx->r1 != 0) {
        // 0x8003B090: sw          $zero, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = 0;
            goto L_8003B084;
    }
    // 0x8003B090: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x8003B094: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x8003B098: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8003B09C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8003B0A0: sw          $zero, 0x9C($fp)
    MEM_W(0X9C, ctx->r30) = 0;
    // 0x8003B0A4: sw          $zero, 0x98($fp)
    MEM_W(0X98, ctx->r30) = 0;
    // 0x8003B0A8: addiu       $v1, $v1, 0x150
    ctx->r3 = ADD32(ctx->r3, 0X150);
    // 0x8003B0AC: addiu       $v0, $v0, 0x13C
    ctx->r2 = ADD32(ctx->r2, 0X13C);
    // 0x8003B0B0: addiu       $s3, $s3, -0x4170
    ctx->r19 = ADD32(ctx->r19, -0X4170);
L_8003B0B4:
    // 0x8003B0B4: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x8003B0B8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8003B0BC: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8003B0C0: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8003B0C4: bne         $at, $zero, L_8003B0B4
    if (ctx->r1 != 0) {
        // 0x8003B0C8: sw          $t5, -0x4($s3)
        MEM_W(-0X4, ctx->r19) = ctx->r13;
            goto L_8003B0B4;
    }
    // 0x8003B0C8: sw          $t5, -0x4($s3)
    MEM_W(-0X4, ctx->r19) = ctx->r13;
    // 0x8003B0CC: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003B0D0: addiu       $s7, $t6, -0x4170
    ctx->r23 = ADD32(ctx->r14, -0X4170);
    // 0x8003B0D4: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x8003B0D8: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8003B0DC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8003B0E0: addiu       $s1, $s1, -0x4298
    ctx->r17 = ADD32(ctx->r17, -0X4298);
    // 0x8003B0E4: addiu       $s6, $s6, 0x15C
    ctx->r22 = ADD32(ctx->r22, 0X15C);
    // 0x8003B0E8: or          $s3, $s7, $zero
    ctx->r19 = ctx->r23 | 0;
    // 0x8003B0EC: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x8003B0F0: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8003B0F4: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x8003B0F8: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
L_8003B0FC:
    // 0x8003B0FC: sw          $zero, 0xC8($s1)
    MEM_W(0XC8, ctx->r17) = 0;
    // 0x8003B100: sw          $s4, 0xFC($s1)
    MEM_W(0XFC, ctx->r17) = ctx->r20;
    // 0x8003B104: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8003B108: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003B10C: bne         $t7, $at, L_8003B120
    if (ctx->r15 != ctx->r1) {
        // 0x8003B110: sw          $zero, 0x0($s6)
        MEM_W(0X0, ctx->r22) = 0;
            goto L_8003B120;
    }
    // 0x8003B110: sw          $zero, 0x0($s6)
    MEM_W(0X0, ctx->r22) = 0;
    // 0x8003B114: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x8003B118: b           L_8003B124
    // 0x8003B11C: sw          $t8, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r24;
        goto L_8003B124;
    // 0x8003B11C: sw          $t8, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r24;
L_8003B120:
    // 0x8003B120: sw          $zero, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = 0;
L_8003B124:
    // 0x8003B124: lw          $a0, 0xA4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XA4);
    // 0x8003B128: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003B12C: sw          $a0, 0x38($s3)
    MEM_W(0X38, ctx->r19) = ctx->r4;
    // 0x8003B130: sw          $a0, 0x48($s3)
    MEM_W(0X48, ctx->r19) = ctx->r4;
    // 0x8003B134: swc1        $f20, 0x68($s2)
    MEM_W(0X68, ctx->r18) = ctx->f20.u32l;
    // 0x8003B138: swc1        $f20, 0x6C($s2)
    MEM_W(0X6C, ctx->r18) = ctx->f20.u32l;
    // 0x8003B13C: swc1        $f20, 0x70($s2)
    MEM_W(0X70, ctx->r18) = ctx->f20.u32l;
    // 0x8003B140: swc1        $f20, 0xB0($s2)
    MEM_W(0XB0, ctx->r18) = ctx->f20.u32l;
    // 0x8003B144: swc1        $f20, 0xB4($s2)
    MEM_W(0XB4, ctx->r18) = ctx->f20.u32l;
    // 0x8003B148: swc1        $f20, 0xB8($s2)
    MEM_W(0XB8, ctx->r18) = ctx->f20.u32l;
    // 0x8003B14C: or          $v1, $s7, $zero
    ctx->r3 = ctx->r23 | 0;
L_8003B150:
    // 0x8003B150: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003B154: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8003B158: bne         $v0, $s0, L_8003B150
    if (ctx->r2 != ctx->r16) {
        // 0x8003B15C: sw          $s4, 0x14($v1)
        MEM_W(0X14, ctx->r3) = ctx->r20;
            goto L_8003B150;
    }
    // 0x8003B15C: sw          $s4, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r20;
    // 0x8003B160: jal         0x8005C478
    // 0x8003B164: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8005C478(rdram, ctx);
        goto after_0;
    // 0x8003B164: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_0:
    // 0x8003B168: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8003B16C: slti        $at, $s5, 0x4
    ctx->r1 = SIGNED(ctx->r21) < 0X4 ? 1 : 0;
    // 0x8003B170: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B174: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8003B178: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x8003B17C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8003B180: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x8003B184: addiu       $s7, $s7, 0x8
    ctx->r23 = ADD32(ctx->r23, 0X8);
    // 0x8003B188: bne         $at, $zero, L_8003B0FC
    if (ctx->r1 != 0) {
        // 0x8003B18C: addiu       $a1, $a1, -0x4298
        ctx->r5 = ADD32(ctx->r5, -0X4298);
            goto L_8003B0FC;
    }
    // 0x8003B18C: addiu       $a1, $a1, -0x4298
    ctx->r5 = ADD32(ctx->r5, -0X4298);
    // 0x8003B190: addiu       $t9, $zero, -0x64
    ctx->r25 = ADD32(0, -0X64);
    // 0x8003B194: lui         $t0, 0x1
    ctx->r8 = S32(0X1 << 16);
    // 0x8003B198: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8003B19C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8003B1A0: sw          $t9, 0xA8($fp)
    MEM_W(0XA8, ctx->r30) = ctx->r25;
    // 0x8003B1A4: sw          $t0, 0xAC($fp)
    MEM_W(0XAC, ctx->r30) = ctx->r8;
    // 0x8003B1A8: sw          $zero, 0xE8($fp)
    MEM_W(0XE8, ctx->r30) = 0;
    // 0x8003B1AC: sw          $zero, 0xEC($fp)
    MEM_W(0XEC, ctx->r30) = 0;
    // 0x8003B1B0: addiu       $v1, $v1, 0x478
    ctx->r3 = ADD32(ctx->r3, 0X478);
    // 0x8003B1B4: addiu       $v0, $v0, 0x46C
    ctx->r2 = ADD32(ctx->r2, 0X46C);
L_8003B1B8:
    // 0x8003B1B8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8003B1BC: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8003B1C0: bne         $at, $zero, L_8003B1B8
    if (ctx->r1 != 0) {
        // 0x8003B1C4: sw          $zero, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = 0;
            goto L_8003B1B8;
    }
    // 0x8003B1C4: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x8003B1C8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003B1CC: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x8003B1D0: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8003B1D4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003B1D8: sw          $zero, 0x6AC($at)
    MEM_W(0X6AC, ctx->r1) = 0;
    // 0x8003B1DC: addiu       $v0, $v0, -0x4290
    ctx->r2 = ADD32(ctx->r2, -0X4290);
    // 0x8003B1E0: addiu       $s1, $s1, -0x4298
    ctx->r17 = ADD32(ctx->r17, -0X4298);
    // 0x8003B1E4: addiu       $s3, $s3, -0x4170
    ctx->r19 = ADD32(ctx->r19, -0X4170);
L_8003B1E8:
    // 0x8003B1E8: sw          $zero, 0x110($s1)
    MEM_W(0X110, ctx->r17) = 0;
    // 0x8003B1EC: sw          $s4, 0x118($s1)
    MEM_W(0X118, ctx->r17) = ctx->r20;
    // 0x8003B1F0: lw          $t1, 0x10C($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X10C);
    // 0x8003B1F4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8003B1F8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8003B1FC: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8003B200: addiu       $t3, $t2, 0x4
    ctx->r11 = ADD32(ctx->r10, 0X4);
    // 0x8003B204: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8003B208: bne         $s1, $v0, L_8003B1E8
    if (ctx->r17 != ctx->r2) {
        // 0x8003B20C: sw          $t3, 0xDC($s3)
        MEM_W(0XDC, ctx->r19) = ctx->r11;
            goto L_8003B1E8;
    }
    // 0x8003B20C: sw          $t3, 0xDC($s3)
    MEM_W(0XDC, ctx->r19) = ctx->r11;
    // 0x8003B210: jal         0x800401D8
    // 0x8003B214: nop

    func_800401D8(rdram, ctx);
        goto after_1;
    // 0x8003B214: nop

    after_1:
    // 0x8003B218: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8003B21C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8003B220: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8003B224: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8003B228: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8003B22C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8003B230: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8003B234: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8003B238: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8003B23C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8003B240: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8003B244: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8003B248: jr          $ra
    // 0x8003B24C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8003B24C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8003B250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B250: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003B254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B258: jal         0x8005C3A8
    // 0x8003B25C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005C3A8(rdram, ctx);
        goto after_0;
    // 0x8003B25C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8003B260: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8003B264: addiu       $v1, $v1, -0x4298
    ctx->r3 = ADD32(ctx->r3, -0X4298);
    // 0x8003B268: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x8003B26C: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x8003B270: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x8003B274: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003B278: bne         $t8, $at, L_8003B344
    if (ctx->r24 != ctx->r1) {
        // 0x8003B27C: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_8003B344;
    }
    // 0x8003B27C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x8003B280: sll         $t6, $s0, 4
    ctx->r14 = S32(ctx->r16 << 4);
    // 0x8003B284: addu        $s1, $v1, $t6
    ctx->r17 = ADD32(ctx->r3, ctx->r14);
    // 0x8003B288: lw          $t7, 0x54($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X54);
    // 0x8003B28C: addiu       $s2, $sp, 0x20
    ctx->r18 = ADD32(ctx->r29, 0X20);
    // 0x8003B290: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x8003B294: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8003B298: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8003B29C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003B2A0: jal         0x8005BE2C
    // 0x8003B2A4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_8005BE2C(rdram, ctx);
        goto after_1;
    // 0x8003B2A4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_1:
    // 0x8003B2A8: lw          $t9, 0x58($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X58);
    // 0x8003B2AC: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x8003B2B0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8003B2B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003B2B8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8003B2BC: jal         0x8005BE2C
    // 0x8003B2C0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    func_8005BE2C(rdram, ctx);
        goto after_2;
    // 0x8003B2C0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_2:
    // 0x8003B2C4: lw          $t7, 0x5C($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X5C);
    // 0x8003B2C8: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x8003B2CC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8003B2D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003B2D4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8003B2D8: jal         0x8005BE2C
    // 0x8003B2DC: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_8005BE2C(rdram, ctx);
        goto after_3;
    // 0x8003B2DC: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_3:
    // 0x8003B2E0: lw          $t9, 0x60($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X60);
    // 0x8003B2E4: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x8003B2E8: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8003B2EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003B2F0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8003B2F4: jal         0x8005BE2C
    // 0x8003B2F8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    func_8005BE2C(rdram, ctx);
        goto after_4;
    // 0x8003B2F8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_4:
    // 0x8003B2FC: jal         0x8005C6CC
    // 0x8003B300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005C6CC(rdram, ctx);
        goto after_5;
    // 0x8003B300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8003B304: lw          $t6, 0x5C($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X5C);
    // 0x8003B308: nop

    // 0x8003B30C: blez        $t6, L_8003B324
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8003B310: nop
    
            goto L_8003B324;
    }
    // 0x8003B310: nop

    // 0x8003B314: lw          $t7, 0x10($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X10);
    // 0x8003B318: nop

    // 0x8003B31C: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x8003B320: sw          $t8, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r24;
L_8003B324:
    // 0x8003B324: lw          $t9, 0x60($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X60);
    // 0x8003B328: nop

    // 0x8003B32C: blez        $t9, L_8003B348
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8003B330: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003B348;
    }
    // 0x8003B330: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B334: lw          $t6, 0x10($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X10);
    // 0x8003B338: nop

    // 0x8003B33C: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x8003B340: sw          $t7, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r15;
L_8003B344:
    // 0x8003B344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003B348:
    // 0x8003B348: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8003B34C: jr          $ra
    // 0x8003B350: nop

    return;
    // 0x8003B350: nop

;}
RECOMP_FUNC void func_8003B354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B354: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003B358: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B35C: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
    // 0x8003B360: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x8003B364: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8003B368: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8003B36C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8003B370: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8003B374: jal         0x8005BE2C
    // 0x8003B378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_0;
    // 0x8003B378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8003B37C: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x8003B380: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8003B384: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8003B388: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8003B38C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003B390: jal         0x8005BE2C
    // 0x8003B394: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_1;
    // 0x8003B394: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x8003B398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B39C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003B3A0: jr          $ra
    // 0x8003B3A4: nop

    return;
    // 0x8003B3A4: nop

    // 0x8003B3A8: jr          $ra
    // 0x8003B3AC: nop

    return;
    // 0x8003B3AC: nop

;}
RECOMP_FUNC void func_8003B3B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B3B0: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x8003B3B4: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003B3B8: lw          $t6, -0x4178($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4178);
    // 0x8003B3BC: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x8003B3C0: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8003B3C4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8003B3C8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8003B3CC: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8003B3D0: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x8003B3D4: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8003B3D8: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8003B3DC: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8003B3E0: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x8003B3E4: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x8003B3E8: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8003B3EC: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x8003B3F0: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8003B3F4: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x8003B3F8: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8003B3FC: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8003B400: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8003B404: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8003B408: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8003B40C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8003B410: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003B414: addiu       $s1, $zero, 0x5A
    ctx->r17 = ADD32(0, 0X5A);
    // 0x8003B418: bne         $t6, $at, L_8003B424
    if (ctx->r14 != ctx->r1) {
        // 0x8003B41C: addiu       $s5, $zero, 0xB
        ctx->r21 = ADD32(0, 0XB);
            goto L_8003B424;
    }
    // 0x8003B41C: addiu       $s5, $zero, 0xB
    ctx->r21 = ADD32(0, 0XB);
    // 0x8003B420: addiu       $s5, $zero, 0xD
    ctx->r21 = ADD32(0, 0XD);
L_8003B424:
    // 0x8003B424: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x8003B428: addiu       $s6, $s6, -0x4170
    ctx->r22 = ADD32(ctx->r22, -0X4170);
    // 0x8003B42C: lw          $t7, 0x14($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X14);
    // 0x8003B430: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8003B434: blez        $t7, L_8003B56C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8003B438: addiu       $s4, $sp, 0x84
        ctx->r20 = ADD32(ctx->r29, 0X84);
            goto L_8003B56C;
    }
    // 0x8003B438: addiu       $s4, $sp, 0x84
    ctx->r20 = ADD32(ctx->r29, 0X84);
    // 0x8003B43C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x8003B440: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8003B444: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x8003B448: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x8003B44C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8003B450: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x8003B454: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8003B458: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8003B45C: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x8003B460: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8003B464: addiu       $s2, $s2, 0x6C0
    ctx->r18 = ADD32(ctx->r18, 0X6C0);
    // 0x8003B468: addiu       $s3, $zero, 0x12C
    ctx->r19 = ADD32(0, 0X12C);
L_8003B46C:
    // 0x8003B46C: div         $zero, $s0, $s1
    lo = S32(S64(S32(ctx->r16)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r16)) % S64(S32(ctx->r17)));
    // 0x8003B470: bne         $s1, $zero, L_8003B47C
    if (ctx->r17 != 0) {
        // 0x8003B474: nop
    
            goto L_8003B47C;
    }
    // 0x8003B474: nop

    // 0x8003B478: break       7
    do_break(2147726456);
L_8003B47C:
    // 0x8003B47C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003B480: bne         $s1, $at, L_8003B494
    if (ctx->r17 != ctx->r1) {
        // 0x8003B484: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003B494;
    }
    // 0x8003B484: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003B488: bne         $s0, $at, L_8003B494
    if (ctx->r16 != ctx->r1) {
        // 0x8003B48C: nop
    
            goto L_8003B494;
    }
    // 0x8003B48C: nop

    // 0x8003B490: break       6
    do_break(2147726480);
L_8003B494:
    // 0x8003B494: mfhi        $t8
    ctx->r24 = hi;
    // 0x8003B498: bne         $t8, $zero, L_8003B554
    if (ctx->r24 != 0) {
        // 0x8003B49C: nop
    
            goto L_8003B554;
    }
    // 0x8003B49C: nop

    // 0x8003B4A0: addiu       $s1, $s1, -0x2
    ctx->r17 = ADD32(ctx->r17, -0X2);
    // 0x8003B4A4: jal         0x80028AB8
    // 0x8003B4A8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80028AB8(rdram, ctx);
        goto after_0;
    // 0x8003B4A8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_0:
    // 0x8003B4AC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8003B4B0: swc1        $f26, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f26.u32l;
    // 0x8003B4B4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8003B4B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x8003B4BC: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x8003B4C0: add.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f24.fl;
    // 0x8003B4C4: jal         0x80028AB8
    // 0x8003B4C8: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    func_80028AB8(rdram, ctx);
        goto after_1;
    // 0x8003B4C8: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x8003B4CC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x8003B4D0: nop

    // 0x8003B4D4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8003B4D8: mul.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x8003B4DC: add.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f28.fl;
    // 0x8003B4E0: jal         0x80027F1C
    // 0x8003B4E4: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    func_80027F1C(rdram, ctx);
        goto after_2;
    // 0x8003B4E4: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x8003B4E8: jal         0x80027F1C
    // 0x8003B4EC: mov.d       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.d = ctx->f0.d;
    func_80027F1C(rdram, ctx);
        goto after_3;
    // 0x8003B4EC: mov.d       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.d = ctx->f0.d;
    after_3:
    // 0x8003B4F0: div         $zero, $s0, $s3
    lo = S32(S64(S32(ctx->r16)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r16)) % S64(S32(ctx->r19)));
    // 0x8003B4F4: cvt.s.d     $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.d); 
    ctx->f8.fl = CVT_S_D(ctx->f20.d);
    // 0x8003B4F8: bne         $s3, $zero, L_8003B504
    if (ctx->r19 != 0) {
        // 0x8003B4FC: nop
    
            goto L_8003B504;
    }
    // 0x8003B4FC: nop

    // 0x8003B500: break       7
    do_break(2147726592);
L_8003B504:
    // 0x8003B504: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003B508: bne         $s3, $at, L_8003B51C
    if (ctx->r19 != ctx->r1) {
        // 0x8003B50C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003B51C;
    }
    // 0x8003B50C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003B510: bne         $s0, $at, L_8003B51C
    if (ctx->r16 != ctx->r1) {
        // 0x8003B514: nop
    
            goto L_8003B51C;
    }
    // 0x8003B514: nop

    // 0x8003B518: break       6
    do_break(2147726616);
L_8003B51C:
    // 0x8003B51C: mul.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f30.fl);
    // 0x8003B520: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8003B524: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8003B528: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8003B52C: cvt.s.d     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f16.fl = CVT_S_D(ctx->f0.d);
    // 0x8003B530: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8003B534: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8003B538: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x8003B53C: mflo        $t9
    ctx->r25 = lo;
    // 0x8003B540: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8003B544: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x8003B548: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x8003B54C: jal         0x80059DE8
    // 0x8003B550: nop

    func_80059DE8(rdram, ctx);
        goto after_4;
    // 0x8003B550: nop

    after_4:
L_8003B554:
    // 0x8003B554: jal         0x80007AB0
    // 0x8003B558: nop

    func_80007AB0(rdram, ctx);
        goto after_5;
    // 0x8003B558: nop

    after_5:
    // 0x8003B55C: lw          $t2, 0x14($s6)
    ctx->r10 = MEM_W(ctx->r22, 0X14);
    // 0x8003B560: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003B564: bgtz        $t2, L_8003B46C
    if (SIGNED(ctx->r10) > 0) {
        // 0x8003B568: nop
    
            goto L_8003B46C;
    }
    // 0x8003B568: nop

L_8003B56C:
    // 0x8003B56C: jal         0x80007AE0
    // 0x8003B570: sw          $zero, 0xEC($s6)
    MEM_W(0XEC, ctx->r22) = 0;
    func_80007AE0(rdram, ctx);
        goto after_6;
    // 0x8003B570: sw          $zero, 0xEC($s6)
    MEM_W(0XEC, ctx->r22) = 0;
    after_6:
    // 0x8003B574: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x8003B578: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8003B57C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8003B580: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8003B584: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8003B588: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8003B58C: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8003B590: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8003B594: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8003B598: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x8003B59C: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8003B5A0: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x8003B5A4: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8003B5A8: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8003B5AC: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8003B5B0: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8003B5B4: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x8003B5B8: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8003B5BC: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x8003B5C0: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x8003B5C4: jr          $ra
    // 0x8003B5C8: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x8003B5C8: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_8003B5CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B5CC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8003B5D0: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003B5D4: lw          $t6, -0x4178($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4178);
    // 0x8003B5D8: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x8003B5DC: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x8003B5E0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8003B5E4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8003B5E8: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x8003B5EC: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x8003B5F0: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x8003B5F4: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x8003B5F8: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8003B5FC: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x8003B600: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8003B604: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8003B608: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8003B60C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8003B610: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003B614: bne         $t6, $at, L_8003B628
    if (ctx->r14 != ctx->r1) {
        // 0x8003B618: addiu       $s1, $zero, 0x5A
        ctx->r17 = ADD32(0, 0X5A);
            goto L_8003B628;
    }
    // 0x8003B618: addiu       $s1, $zero, 0x5A
    ctx->r17 = ADD32(0, 0X5A);
    // 0x8003B61C: addiu       $s3, $zero, 0xA
    ctx->r19 = ADD32(0, 0XA);
    // 0x8003B620: b           L_8003B630
    // 0x8003B624: addiu       $s4, $zero, 0x9
    ctx->r20 = ADD32(0, 0X9);
        goto L_8003B630;
    // 0x8003B624: addiu       $s4, $zero, 0x9
    ctx->r20 = ADD32(0, 0X9);
L_8003B628:
    // 0x8003B628: addiu       $s3, $zero, 0x15
    ctx->r19 = ADD32(0, 0X15);
    // 0x8003B62C: addiu       $s4, $zero, 0xE
    ctx->r20 = ADD32(0, 0XE);
L_8003B630:
    // 0x8003B630: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x8003B634: addiu       $s5, $s5, -0x4170
    ctx->r21 = ADD32(ctx->r21, -0X4170);
    // 0x8003B638: lw          $t7, 0x14($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X14);
    // 0x8003B63C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8003B640: blez        $t7, L_8003B6F8
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8003B644: nop
    
            goto L_8003B6F8;
    }
    // 0x8003B644: nop

    // 0x8003B648: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8003B64C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8003B650: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8003B654: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8003B658: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8003B65C: addiu       $s2, $sp, 0x54
    ctx->r18 = ADD32(ctx->r29, 0X54);
L_8003B660:
    // 0x8003B660: div         $zero, $s0, $s1
    lo = S32(S64(S32(ctx->r16)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r16)) % S64(S32(ctx->r17)));
    // 0x8003B664: bne         $s1, $zero, L_8003B670
    if (ctx->r17 != 0) {
        // 0x8003B668: nop
    
            goto L_8003B670;
    }
    // 0x8003B668: nop

    // 0x8003B66C: break       7
    do_break(2147726956);
L_8003B670:
    // 0x8003B670: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003B674: bne         $s1, $at, L_8003B688
    if (ctx->r17 != ctx->r1) {
        // 0x8003B678: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003B688;
    }
    // 0x8003B678: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003B67C: bne         $s0, $at, L_8003B688
    if (ctx->r16 != ctx->r1) {
        // 0x8003B680: nop
    
            goto L_8003B688;
    }
    // 0x8003B680: nop

    // 0x8003B684: break       6
    do_break(2147726980);
L_8003B688:
    // 0x8003B688: mfhi        $t8
    ctx->r24 = hi;
    // 0x8003B68C: bne         $t8, $zero, L_8003B6E0
    if (ctx->r24 != 0) {
        // 0x8003B690: nop
    
            goto L_8003B6E0;
    }
    // 0x8003B690: nop

    // 0x8003B694: addiu       $s1, $s1, -0x2
    ctx->r17 = ADD32(ctx->r17, -0X2);
    // 0x8003B698: jal         0x80028AB8
    // 0x8003B69C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80028AB8(rdram, ctx);
        goto after_0;
    // 0x8003B69C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x8003B6A0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8003B6A4: swc1        $f24, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f24.u32l;
    // 0x8003B6A8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8003B6AC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8003B6B0: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x8003B6B4: add.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x8003B6B8: jal         0x80028AB8
    // 0x8003B6BC: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    func_80028AB8(rdram, ctx);
        goto after_1;
    // 0x8003B6BC: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x8003B6C0: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x8003B6C4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8003B6C8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8003B6CC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8003B6D0: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x8003B6D4: add.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x8003B6D8: jal         0x80059E24
    // 0x8003B6DC: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    func_80059E24(rdram, ctx);
        goto after_2;
    // 0x8003B6DC: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    after_2:
L_8003B6E0:
    // 0x8003B6E0: jal         0x80007AB0
    // 0x8003B6E4: nop

    func_80007AB0(rdram, ctx);
        goto after_3;
    // 0x8003B6E4: nop

    after_3:
    // 0x8003B6E8: lw          $t9, 0x14($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X14);
    // 0x8003B6EC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003B6F0: bgtz        $t9, L_8003B660
    if (SIGNED(ctx->r25) > 0) {
        // 0x8003B6F4: nop
    
            goto L_8003B660;
    }
    // 0x8003B6F4: nop

L_8003B6F8:
    // 0x8003B6F8: jal         0x80007AE0
    // 0x8003B6FC: sw          $zero, 0xEC($s5)
    MEM_W(0XEC, ctx->r21) = 0;
    func_80007AE0(rdram, ctx);
        goto after_4;
    // 0x8003B6FC: sw          $zero, 0xEC($s5)
    MEM_W(0XEC, ctx->r21) = 0;
    after_4:
    // 0x8003B700: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8003B704: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8003B708: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8003B70C: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8003B710: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8003B714: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8003B718: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8003B71C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x8003B720: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x8003B724: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x8003B728: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x8003B72C: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x8003B730: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x8003B734: jr          $ra
    // 0x8003B738: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8003B738: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8003B73C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B73C: jr          $ra
    // 0x8003B740: nop

    return;
    // 0x8003B740: nop

;}
RECOMP_FUNC void func_8003B744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B744: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x8003B748: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8003B74C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8003B750: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8003B754: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8003B758: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8003B75C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8003B760: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8003B764: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8003B768: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8003B76C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8003B770: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8003B774: jal         0x80007774
    // 0x8003B778: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8003B778: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8003B77C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8003B780: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x8003B784: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x8003B788: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8003B78C: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x8003B790: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8003B794: addiu       $s2, $s2, 0x408
    ctx->r18 = ADD32(ctx->r18, 0X408);
    // 0x8003B798: addiu       $s4, $s4, -0x4170
    ctx->r20 = ADD32(ctx->r20, -0X4170);
    // 0x8003B79C: addiu       $s6, $s6, -0x4298
    ctx->r22 = ADD32(ctx->r22, -0X4298);
    // 0x8003B7A0: addiu       $fp, $fp, 0x170
    ctx->r30 = ADD32(ctx->r30, 0X170);
    // 0x8003B7A4: addiu       $s7, $sp, 0x90
    ctx->r23 = ADD32(ctx->r29, 0X90);
    // 0x8003B7A8: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x8003B7AC: addiu       $s0, $sp, 0x68
    ctx->r16 = ADD32(ctx->r29, 0X68);
    // 0x8003B7B0: lw          $t6, 0x9C($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X9C);
L_8003B7B4:
    // 0x8003B7B4: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x8003B7B8: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x8003B7BC: beq         $at, $zero, L_8003B8DC
    if (ctx->r1 == 0) {
        // 0x8003B7C0: nop
    
            goto L_8003B8DC;
    }
    // 0x8003B7C0: nop

    // 0x8003B7C4: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x8003B7C8: lw          $t0, 0x120($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X120);
    // 0x8003B7CC: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8003B7D0: lw          $t3, -0x42C0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X42C0);
    // 0x8003B7D4: addu        $t9, $fp, $t8
    ctx->r25 = ADD32(ctx->r30, ctx->r24);
    // 0x8003B7D8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8003B7DC: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8003B7E0: lw          $s5, 0x0($t2)
    ctx->r21 = MEM_W(ctx->r10, 0X0);
    // 0x8003B7E4: sll         $t4, $t3, 11
    ctx->r12 = S32(ctx->r11 << 11);
    // 0x8003B7E8: bltz        $t4, L_8003B8DC
    if (SIGNED(ctx->r12) < 0) {
        // 0x8003B7EC: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_8003B8DC;
    }
    // 0x8003B7EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003B7F0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8003B7F4: sw          $s2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r18;
    // 0x8003B7F8: addiu       $v1, $v1, -0x4298
    ctx->r3 = ADD32(ctx->r3, -0X4298);
    // 0x8003B7FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003B800:
    // 0x8003B800: lw          $t5, 0x4($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X4);
    // 0x8003B804: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8003B808: beq         $t5, $zero, L_8003B818
    if (ctx->r13 == 0) {
        // 0x8003B80C: addu        $t7, $s0, $t6
        ctx->r15 = ADD32(ctx->r16, ctx->r14);
            goto L_8003B818;
    }
    // 0x8003B80C: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x8003B810: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x8003B814: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_8003B818:
    // 0x8003B818: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003B81C: bne         $v0, $s1, L_8003B800
    if (ctx->r2 != ctx->r17) {
        // 0x8003B820: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8003B800;
    }
    // 0x8003B820: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8003B824: lui         $s3, 0x8004
    ctx->r19 = S32(0X8004 << 16);
    // 0x8003B828: addiu       $s3, $s3, -0x3C48
    ctx->r19 = ADD32(ctx->r19, -0X3C48);
    // 0x8003B82C: jal         0x80028AB8
    // 0x8003B830: addiu       $a0, $a1, -0x1
    ctx->r4 = ADD32(ctx->r5, -0X1);
    func_80028AB8(rdram, ctx);
        goto after_1;
    // 0x8003B830: addiu       $a0, $a1, -0x1
    ctx->r4 = ADD32(ctx->r5, -0X1);
    after_1:
    // 0x8003B834: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x8003B838: addu        $t0, $s0, $t8
    ctx->r8 = ADD32(ctx->r16, ctx->r24);
    // 0x8003B83C: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x8003B840: jal         0x8002D000
    // 0x8003B844: nop

    func_8002D000(rdram, ctx);
        goto after_2;
    // 0x8003B844: nop

    after_2:
    // 0x8003B848: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003B84C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8003B850: jal         0x8004A0A0
    // 0x8003B854: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    func_8004A0A0(rdram, ctx);
        goto after_3;
    // 0x8003B854: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    after_3:
    // 0x8003B858: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8003B85C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8003B860: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x8003B864: jal         0x80028AB8
    // 0x8003B868: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    func_80028AB8(rdram, ctx);
        goto after_4;
    // 0x8003B868: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x8003B86C: sll         $t9, $s5, 3
    ctx->r25 = S32(ctx->r21 << 3);
    // 0x8003B870: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x8003B874: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8003B878: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x8003B87C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8003B880: lw          $t3, 0x210($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X210);
    // 0x8003B884: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8003B888: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8003B88C: lwc1        $f16, 0x80($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8003B890: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003B894: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003B898: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x8003B89C: sw          $t3, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r11;
    // 0x8003B8A0: swc1        $f8, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f8.u32l;
    // 0x8003B8A4: swc1        $f10, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f10.u32l;
    // 0x8003B8A8: jal         0x8004A0A0
    // 0x8003B8AC: swc1        $f16, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f16.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_5;
    // 0x8003B8AC: swc1        $f16, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f16.u32l;
    after_5:
    // 0x8003B8B0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8003B8B4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8003B8B8: sw          $s3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r19;
    // 0x8003B8BC: sw          $t4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r12;
    // 0x8003B8C0: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x8003B8C4: jal         0x8004A0A0
    // 0x8003B8C8: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_6;
    // 0x8003B8C8: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_6:
    // 0x8003B8CC: lw          $t5, 0x9C($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X9C);
    // 0x8003B8D0: nop

    // 0x8003B8D4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8003B8D8: sw          $t6, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = ctx->r14;
L_8003B8DC:
    // 0x8003B8DC: jal         0x80007AB0
    // 0x8003B8E0: nop

    func_80007AB0(rdram, ctx);
        goto after_7;
    // 0x8003B8E0: nop

    after_7:
    // 0x8003B8E4: b           L_8003B7B4
    // 0x8003B8E8: lw          $t6, 0x9C($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X9C);
        goto L_8003B7B4;
    // 0x8003B8E8: lw          $t6, 0x9C($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X9C);
    // 0x8003B8EC: nop

    // 0x8003B8F0: nop

    // 0x8003B8F4: nop

    // 0x8003B8F8: nop

    // 0x8003B8FC: nop

    // 0x8003B900: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8003B904: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8003B908: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8003B90C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8003B910: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8003B914: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8003B918: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8003B91C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8003B920: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8003B924: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8003B928: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8003B92C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8003B930: jr          $ra
    // 0x8003B934: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x8003B934: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_8003B938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B938: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8003B93C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8003B940: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8003B944: addiu       $t6, $t6, 0x6B0
    ctx->r14 = ADD32(ctx->r14, 0X6B0);
    // 0x8003B948: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8003B94C: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x8003B950: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x8003B954: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x8003B958: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x8003B95C: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8003B960: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x8003B964: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8003B968: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x8003B96C: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8003B970: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8003B974: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8003B978: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8003B97C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8003B980: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8003B984: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8003B988: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8003B98C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003B990: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x8003B994: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8003B998: jal         0x80019F10
    // 0x8003B99C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_80019F10(rdram, ctx);
        goto after_0;
    // 0x8003B99C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_0:
    // 0x8003B9A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8003B9A4: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8003B9A8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8003B9AC: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x8003B9B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8003B9B4: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x8003B9B8: mul.s       $f0, $f24, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f24.fl, ctx->f4.fl);
    // 0x8003B9BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8003B9C0: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x8003B9C4: addiu       $s2, $s2, 0x6AC
    ctx->r18 = ADD32(ctx->r18, 0X6AC);
    // 0x8003B9C8: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x8003B9CC: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x8003B9D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8003B9D4: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x8003B9D8: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
    // 0x8003B9DC: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x8003B9E0: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x8003B9E4: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8003B9E8: addiu       $s1, $s1, -0x4298
    ctx->r17 = ADD32(ctx->r17, -0X4298);
    // 0x8003B9EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003B9F0: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
    // 0x8003B9F4: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
    // 0x8003B9F8: swc1        $f16, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f16.u32l;
L_8003B9FC:
    // 0x8003B9FC: lw          $t0, 0x4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X4);
    // 0x8003BA00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003BA04: beq         $t0, $zero, L_8003BA14
    if (ctx->r8 == 0) {
        // 0x8003BA08: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_8003BA14;
    }
    // 0x8003BA08: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8003BA0C: jal         0x80030524
    // 0x8003BA10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80030524(rdram, ctx);
        goto after_1;
    // 0x8003BA10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_8003BA14:
    // 0x8003BA14: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003BA18: bne         $s0, $s3, L_8003B9FC
    if (ctx->r16 != ctx->r19) {
        // 0x8003BA1C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8003B9FC;
    }
    // 0x8003BA1C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8003BA20: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003BA24: lwc1        $f28, 0x5B3C($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X5B3C);
    // 0x8003BA28: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003BA2C: lwc1        $f23, 0x5B40($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X5B40);
    // 0x8003BA30: lwc1        $f22, 0x5B44($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X5B44);
    // 0x8003BA34: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003BA38: addiu       $s1, $zero, 0xF0
    ctx->r17 = ADD32(0, 0XF0);
L_8003BA3C:
    // 0x8003BA3C: jal         0x8007A640
    // 0x8003BA40: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    __sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x8003BA40: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x8003BA44: mul.s       $f18, $f0, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x8003BA48: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x8003BA4C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x8003BA50: sub.s       $f4, $f18, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f24.fl;
    // 0x8003BA54: jal         0x8007A800
    // 0x8003BA58: swc1        $f4, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f4.u32l;
    __cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x8003BA58: swc1        $f4, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f4.u32l;
    after_3:
    // 0x8003BA5C: mul.s       $f6, $f0, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x8003BA60: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x8003BA64: sub.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f24.fl;
    // 0x8003BA68: add.s       $f20, $f20, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f28.fl;
    // 0x8003BA6C: swc1        $f8, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f8.u32l;
    // 0x8003BA70: cvt.d.s     $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f2.d = CVT_D_S(ctx->f20.fl);
    // 0x8003BA74: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x8003BA78: c.lt.d      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.d < ctx->f2.d;
    // 0x8003BA7C: swc1        $f24, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f24.u32l;
    // 0x8003BA80: bc1f        L_8003BA90
    if (!c1cs) {
        // 0x8003BA84: nop
    
            goto L_8003BA90;
    }
    // 0x8003BA84: nop

    // 0x8003BA88: sub.d       $f10, $f2, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f22.d); 
    ctx->f10.d = ctx->f2.d - ctx->f22.d;
    // 0x8003BA8C: cvt.s.d     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f20.fl = CVT_S_D(ctx->f10.d);
L_8003BA90:
    // 0x8003BA90: jal         0x80007AB0
    // 0x8003BA94: nop

    func_80007AB0(rdram, ctx);
        goto after_4;
    // 0x8003BA94: nop

    after_4:
    // 0x8003BA98: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003BA9C: bne         $s0, $s1, L_8003BA3C
    if (ctx->r16 != ctx->r17) {
        // 0x8003BAA0: nop
    
            goto L_8003BA3C;
    }
    // 0x8003BAA0: nop

    // 0x8003BAA4: sub.s       $f2, $f26, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = ctx->f26.fl - ctx->f26.fl;
    // 0x8003BAA8: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8003BAAC: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8003BAB0: nop

    // 0x8003BAB4: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8003BAB8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8003BABC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8003BAC0: nop

    // 0x8003BAC4: cvt.w.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.u32l = CVT_W_S(ctx->f2.fl);
    // 0x8003BAC8: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8003BACC: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8003BAD0: jal         0x800191E8
    // 0x8003BAD4: nop

    func_800191E8(rdram, ctx);
        goto after_5;
    // 0x8003BAD4: nop

    after_5:
    // 0x8003BAD8: jal         0x80007AB0
    // 0x8003BADC: nop

    func_80007AB0(rdram, ctx);
        goto after_6;
    // 0x8003BADC: nop

    after_6:
    // 0x8003BAE0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8003BAE4: jal         0x800195C4
    // 0x8003BAE8: nop

    func_800195C4(rdram, ctx);
        goto after_7;
    // 0x8003BAE8: nop

    after_7:
    // 0x8003BAEC: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x8003BAF0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003BAF4: jal         0x80007AE0
    // 0x8003BAF8: sw          $zero, -0x4088($at)
    MEM_W(-0X4088, ctx->r1) = 0;
    func_80007AE0(rdram, ctx);
        goto after_8;
    // 0x8003BAF8: sw          $zero, -0x4088($at)
    MEM_W(-0X4088, ctx->r1) = 0;
    after_8:
    // 0x8003BAFC: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8003BB00: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8003BB04: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8003BB08: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8003BB0C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8003BB10: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8003BB14: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8003BB18: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8003BB1C: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8003BB20: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x8003BB24: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8003BB28: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x8003BB2C: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x8003BB30: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x8003BB34: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x8003BB38: jr          $ra
    // 0x8003BB3C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8003BB3C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8003BB40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BB40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003BB44: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003BB48: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003BB4C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003BB50: jal         0x80007774
    // 0x8003BB54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8003BB54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8003BB58: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8003BB5C: addiu       $s1, $s1, -0x4298
    ctx->r17 = ADD32(ctx->r17, -0X4298);
    // 0x8003BB60: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x8003BB64: lw          $t8, 0x120($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X120);
    // 0x8003BB68: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x8003BB6C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8003BB70: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8003BB74: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x8003BB78: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x8003BB7C: lw          $s0, 0x170($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X170);
    // 0x8003BB80: jal         0x80027874
    // 0x8003BB84: addiu       $a0, $zero, 0x372
    ctx->r4 = ADD32(0, 0X372);
    func_80027874(rdram, ctx);
        goto after_1;
    // 0x8003BB84: addiu       $a0, $zero, 0x372
    ctx->r4 = ADD32(0, 0X372);
    after_1:
    // 0x8003BB88: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8003BB8C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003BB90: beq         $v0, $at, L_8003BBA0
    if (ctx->r2 == ctx->r1) {
        // 0x8003BB94: addiu       $s2, $zero, 0x4
        ctx->r18 = ADD32(0, 0X4);
            goto L_8003BBA0;
    }
    // 0x8003BB94: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x8003BB98: bne         $s2, $v0, L_8003BBC0
    if (ctx->r18 != ctx->r2) {
        // 0x8003BB9C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8003BBC0;
    }
    // 0x8003BB9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8003BBA0:
    // 0x8003BBA0: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x8003BBA4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8003BBA8: addiu       $a1, $zero, 0x320
    ctx->r5 = ADD32(0, 0X320);
    // 0x8003BBAC: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    // 0x8003BBB0: jal         0x8001B20C
    // 0x8003BBB4: lui         $a3, 0x6E
    ctx->r7 = S32(0X6E << 16);
    func_8001B20C(rdram, ctx);
        goto after_2;
    // 0x8003BBB4: lui         $a3, 0x6E
    ctx->r7 = S32(0X6E << 16);
    after_2:
    // 0x8003BBB8: b           L_8003BBEC
    // 0x8003BBBC: nop

        goto L_8003BBEC;
    // 0x8003BBBC: nop

L_8003BBC0:
    // 0x8003BBC0: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x8003BBC4: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8003BBC8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8003BBCC: lw          $t2, 0x650($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X650);
    // 0x8003BBD0: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8003BBD4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8003BBD8: addu        $a1, $a1, $t3
    ctx->r5 = ADD32(ctx->r5, ctx->r11);
    // 0x8003BBDC: lw          $a1, 0x63C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X63C);
    // 0x8003BBE0: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    // 0x8003BBE4: jal         0x8001B20C
    // 0x8003BBE8: lui         $a3, 0x6E
    ctx->r7 = S32(0X6E << 16);
    func_8001B20C(rdram, ctx);
        goto after_3;
    // 0x8003BBE8: lui         $a3, 0x6E
    ctx->r7 = S32(0X6E << 16);
    after_3:
L_8003BBEC:
    // 0x8003BBEC: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8003BBF0: addiu       $s1, $s1, -0x4298
    ctx->r17 = ADD32(ctx->r17, -0X4298);
    // 0x8003BBF4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8003BBF8:
    // 0x8003BBF8: lw          $t4, 0x4($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X4);
    // 0x8003BBFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003BC00: beq         $t4, $zero, L_8003BC10
    if (ctx->r12 == 0) {
        // 0x8003BC04: addiu       $a1, $zero, 0x2B
        ctx->r5 = ADD32(0, 0X2B);
            goto L_8003BC10;
    }
    // 0x8003BC04: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    // 0x8003BC08: jal         0x80030524
    // 0x8003BC0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80030524(rdram, ctx);
        goto after_4;
    // 0x8003BC0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_8003BC10:
    // 0x8003BC10: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003BC14: bne         $s0, $s2, L_8003BBF8
    if (ctx->r16 != ctx->r18) {
        // 0x8003BC18: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8003BBF8;
    }
    // 0x8003BC18: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8003BC1C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003BC20: addiu       $s1, $zero, 0x1FE
    ctx->r17 = ADD32(0, 0X1FE);
L_8003BC24:
    // 0x8003BC24: jal         0x80007AB0
    // 0x8003BC28: nop

    func_80007AB0(rdram, ctx);
        goto after_5;
    // 0x8003BC28: nop

    after_5:
    // 0x8003BC2C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003BC30: bne         $s0, $s1, L_8003BC24
    if (ctx->r16 != ctx->r17) {
        // 0x8003BC34: nop
    
            goto L_8003BC24;
    }
    // 0x8003BC34: nop

    // 0x8003BC38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003BC3C: addiu       $a1, $zero, 0x320
    ctx->r5 = ADD32(0, 0X320);
    // 0x8003BC40: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    // 0x8003BC44: jal         0x8001B20C
    // 0x8003BC48: lui         $a3, 0x6E
    ctx->r7 = S32(0X6E << 16);
    func_8001B20C(rdram, ctx);
        goto after_6;
    // 0x8003BC48: lui         $a3, 0x6E
    ctx->r7 = S32(0X6E << 16);
    after_6:
    // 0x8003BC4C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003BC50: jal         0x80007AE0
    // 0x8003BC54: sw          $zero, -0x4088($at)
    MEM_W(-0X4088, ctx->r1) = 0;
    func_80007AE0(rdram, ctx);
        goto after_7;
    // 0x8003BC54: sw          $zero, -0x4088($at)
    MEM_W(-0X4088, ctx->r1) = 0;
    after_7:
    // 0x8003BC58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003BC5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003BC60: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003BC64: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003BC68: jr          $ra
    // 0x8003BC6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8003BC6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003BC70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BC70: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8003BC74: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003BC78: lw          $t6, -0x4294($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4294);
    // 0x8003BC7C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8003BC80: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8003BC84: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8003BC88: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8003BC8C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8003BC90: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8003BC94: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8003BC98: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8003BC9C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8003BCA0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8003BCA4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8003BCA8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8003BCAC: beq         $t6, $zero, L_8003BCBC
    if (ctx->r14 == 0) {
        // 0x8003BCB0: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8003BCBC;
    }
    // 0x8003BCB0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8003BCB4: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x8003BCB8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_8003BCBC:
    // 0x8003BCBC: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8003BCC0: lw          $t7, -0x4290($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4290);
    // 0x8003BCC4: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x8003BCC8: beq         $t7, $zero, L_8003BCE8
    if (ctx->r15 == 0) {
        // 0x8003BCCC: lui         $t5, 0x800B
        ctx->r13 = S32(0X800B << 16);
            goto L_8003BCE8;
    }
    // 0x8003BCCC: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x8003BCD0: addiu       $s5, $sp, 0x60
    ctx->r21 = ADD32(ctx->r29, 0X60);
    // 0x8003BCD4: sll         $t9, $s2, 2
    ctx->r25 = S32(ctx->r18 << 2);
    // 0x8003BCD8: addu        $t0, $s5, $t9
    ctx->r8 = ADD32(ctx->r21, ctx->r25);
    // 0x8003BCDC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8003BCE0: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x8003BCE4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8003BCE8:
    // 0x8003BCE8: lw          $t1, -0x428C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X428C);
    // 0x8003BCEC: addiu       $s5, $sp, 0x60
    ctx->r21 = ADD32(ctx->r29, 0X60);
    // 0x8003BCF0: beq         $t1, $zero, L_8003BD0C
    if (ctx->r9 == 0) {
        // 0x8003BCF4: or          $s6, $zero, $zero
        ctx->r22 = 0 | 0;
            goto L_8003BD0C;
    }
    // 0x8003BCF4: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8003BCF8: sll         $t3, $s2, 2
    ctx->r11 = S32(ctx->r18 << 2);
    // 0x8003BCFC: addu        $t4, $s5, $t3
    ctx->r12 = ADD32(ctx->r21, ctx->r11);
    // 0x8003BD00: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8003BD04: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x8003BD08: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8003BD0C:
    // 0x8003BD0C: lw          $t5, -0x4288($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X4288);
    // 0x8003BD10: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8003BD14: beq         $t5, $zero, L_8003BD30
    if (ctx->r13 == 0) {
        // 0x8003BD18: addiu       $fp, $zero, 0x208
        ctx->r30 = ADD32(0, 0X208);
            goto L_8003BD30;
    }
    // 0x8003BD18: addiu       $fp, $zero, 0x208
    ctx->r30 = ADD32(0, 0X208);
    // 0x8003BD1C: sll         $t7, $s2, 2
    ctx->r15 = S32(ctx->r18 << 2);
    // 0x8003BD20: addu        $t9, $s5, $t7
    ctx->r25 = ADD32(ctx->r21, ctx->r15);
    // 0x8003BD24: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8003BD28: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x8003BD2C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8003BD30:
    // 0x8003BD30: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8003BD34: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8003BD38: addiu       $s4, $s4, -0x42C0
    ctx->r20 = ADD32(ctx->r20, -0X42C0);
    // 0x8003BD3C: addiu       $s7, $zero, 0x50
    ctx->r23 = ADD32(0, 0X50);
    // 0x8003BD40: addiu       $s3, $sp, 0x58
    ctx->r19 = ADD32(ctx->r29, 0X58);
    // 0x8003BD44: addiu       $s1, $sp, 0x70
    ctx->r17 = ADD32(ctx->r29, 0X70);
L_8003BD48:
    // 0x8003BD48: div         $zero, $s6, $s7
    lo = S32(S64(S32(ctx->r22)) / S64(S32(ctx->r23))); hi = S32(S64(S32(ctx->r22)) % S64(S32(ctx->r23)));
    // 0x8003BD4C: bne         $s7, $zero, L_8003BD58
    if (ctx->r23 != 0) {
        // 0x8003BD50: nop
    
            goto L_8003BD58;
    }
    // 0x8003BD50: nop

    // 0x8003BD54: break       7
    do_break(2147728724);
L_8003BD58:
    // 0x8003BD58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003BD5C: bne         $s7, $at, L_8003BD70
    if (ctx->r23 != ctx->r1) {
        // 0x8003BD60: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003BD70;
    }
    // 0x8003BD60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003BD64: bne         $s6, $at, L_8003BD70
    if (ctx->r22 != ctx->r1) {
        // 0x8003BD68: nop
    
            goto L_8003BD70;
    }
    // 0x8003BD68: nop

    // 0x8003BD6C: break       6
    do_break(2147728748);
L_8003BD70:
    // 0x8003BD70: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8003BD74: mfhi        $v0
    ctx->r2 = hi;
    // 0x8003BD78: bne         $v0, $zero, L_8003BE08
    if (ctx->r2 != 0) {
        // 0x8003BD7C: nop
    
            goto L_8003BE08;
    }
    // 0x8003BD7C: nop

    // 0x8003BD80: blez        $s2, L_8003BE18
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8003BD84: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8003BE18;
    }
    // 0x8003BD84: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8003BD88:
    // 0x8003BD88: jal         0x8005AF70
    // 0x8003BD8C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005AF70(rdram, ctx);
        goto after_0;
    // 0x8003BD8C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x8003BD90: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x8003BD94: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
    // 0x8003BD98: andi        $t0, $t8, 0x400
    ctx->r8 = ctx->r24 & 0X400;
    // 0x8003BD9C: beq         $t0, $zero, L_8003BDAC
    if (ctx->r8 == 0) {
        // 0x8003BDA0: nop
    
            goto L_8003BDAC;
    }
    // 0x8003BDA0: nop

    // 0x8003BDA4: b           L_8003BDAC
    // 0x8003BDA8: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
        goto L_8003BDAC;
    // 0x8003BDA8: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
L_8003BDAC:
    // 0x8003BDAC: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003BDB0: beq         $at, $zero, L_8003BDF4
    if (ctx->r1 == 0) {
        // 0x8003BDB4: nop
    
            goto L_8003BDF4;
    }
    // 0x8003BDB4: nop

    // 0x8003BDB8: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x8003BDBC: addu        $t3, $s5, $t1
    ctx->r11 = ADD32(ctx->r21, ctx->r9);
    // 0x8003BDC0: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x8003BDC4: jal         0x8002D000
    // 0x8003BDC8: nop

    func_8002D000(rdram, ctx);
        goto after_1;
    // 0x8003BDC8: nop

    after_1:
    // 0x8003BDCC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003BDD0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8003BDD4: jal         0x8004A0A0
    // 0x8003BDD8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x8003BDD8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x8003BDDC: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8003BDE0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x8003BDE4: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x8003BDE8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8003BDEC: jal         0x8005B358
    // 0x8003BDF0: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    func_8005B358(rdram, ctx);
        goto after_3;
    // 0x8003BDF0: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    after_3:
L_8003BDF4:
    // 0x8003BDF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003BDF8: bne         $s0, $s2, L_8003BD88
    if (ctx->r16 != ctx->r18) {
        // 0x8003BDFC: nop
    
            goto L_8003BD88;
    }
    // 0x8003BDFC: nop

    // 0x8003BE00: b           L_8003BE18
    // 0x8003BE04: nop

        goto L_8003BE18;
    // 0x8003BE04: nop

L_8003BE08:
    // 0x8003BE08: bne         $v0, $at, L_8003BE18
    if (ctx->r2 != ctx->r1) {
        // 0x8003BE0C: nop
    
            goto L_8003BE18;
    }
    // 0x8003BE0C: nop

    // 0x8003BE10: jal         0x80027874
    // 0x8003BE14: addiu       $a0, $zero, 0x37E
    ctx->r4 = ADD32(0, 0X37E);
    func_80027874(rdram, ctx);
        goto after_4;
    // 0x8003BE14: addiu       $a0, $zero, 0x37E
    ctx->r4 = ADD32(0, 0X37E);
    after_4:
L_8003BE18:
    // 0x8003BE18: jal         0x80007AB0
    // 0x8003BE1C: nop

    func_80007AB0(rdram, ctx);
        goto after_5;
    // 0x8003BE1C: nop

    after_5:
    // 0x8003BE20: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8003BE24: bne         $s6, $fp, L_8003BD48
    if (ctx->r22 != ctx->r30) {
        // 0x8003BE28: nop
    
            goto L_8003BD48;
    }
    // 0x8003BE28: nop

    // 0x8003BE2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003BE30: jal         0x80007AE0
    // 0x8003BE34: sw          $zero, -0x4088($at)
    MEM_W(-0X4088, ctx->r1) = 0;
    func_80007AE0(rdram, ctx);
        goto after_6;
    // 0x8003BE34: sw          $zero, -0x4088($at)
    MEM_W(-0X4088, ctx->r1) = 0;
    after_6:
    // 0x8003BE38: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8003BE3C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8003BE40: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8003BE44: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8003BE48: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8003BE4C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8003BE50: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8003BE54: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8003BE58: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8003BE5C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8003BE60: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8003BE64: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8003BE68: jr          $ra
    // 0x8003BE6C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x8003BE6C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_8003BE70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BE70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003BE74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003BE78: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003BE7C: jal         0x80007774
    // 0x8003BE80: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8003BE80: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8003BE84: jal         0x8002AF34
    // 0x8003BE88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002AF34(rdram, ctx);
        goto after_1;
    // 0x8003BE88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8003BE8C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003BE90: addiu       $s1, $zero, 0x1E0
    ctx->r17 = ADD32(0, 0X1E0);
L_8003BE94:
    // 0x8003BE94: jal         0x80007AB0
    // 0x8003BE98: nop

    func_80007AB0(rdram, ctx);
        goto after_2;
    // 0x8003BE98: nop

    after_2:
    // 0x8003BE9C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003BEA0: bne         $s0, $s1, L_8003BE94
    if (ctx->r16 != ctx->r17) {
        // 0x8003BEA4: nop
    
            goto L_8003BE94;
    }
    // 0x8003BEA4: nop

    // 0x8003BEA8: jal         0x8002AF34
    // 0x8003BEAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8002AF34(rdram, ctx);
        goto after_3;
    // 0x8003BEAC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x8003BEB0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003BEB4: jal         0x80007AE0
    // 0x8003BEB8: sw          $zero, -0x4088($at)
    MEM_W(-0X4088, ctx->r1) = 0;
    func_80007AE0(rdram, ctx);
        goto after_4;
    // 0x8003BEB8: sw          $zero, -0x4088($at)
    MEM_W(-0X4088, ctx->r1) = 0;
    after_4:
    // 0x8003BEBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003BEC0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003BEC4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003BEC8: jr          $ra
    // 0x8003BECC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8003BECC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003BED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BED0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003BED4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BED8: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x8003BEDC: lwc1        $f21, 0x5B48($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X5B48);
    // 0x8003BEE0: lwc1        $f20, 0x5B4C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5B4C);
    // 0x8003BEE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BEE8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003BEEC: addiu       $s3, $s3, -0x4298
    ctx->r19 = ADD32(ctx->r19, -0X4298);
    // 0x8003BEF0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8003BEF4: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
L_8003BEF8:
    // 0x8003BEF8: lw          $t6, 0x4($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X4);
    // 0x8003BEFC: nop

    // 0x8003BF00: beq         $t6, $zero, L_8003BFCC
    if (ctx->r14 == 0) {
        // 0x8003BF04: nop
    
            goto L_8003BFCC;
    }
    // 0x8003BF04: nop

    // 0x8003BF08: lw          $t7, 0xC8($s3)
    ctx->r15 = MEM_W(ctx->r19, 0XC8);
    // 0x8003BF0C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8003BF10: bne         $t7, $zero, L_8003BFCC
    if (ctx->r15 != 0) {
        // 0x8003BF14: nop
    
            goto L_8003BFCC;
    }
    // 0x8003BF14: nop

    // 0x8003BF18: jal         0x8005C3A8
    // 0x8003BF1C: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    func_8005C3A8(rdram, ctx);
        goto after_0;
    // 0x8003BF1C: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    after_0:
    // 0x8003BF20: sltiu       $at, $s1, 0x6
    ctx->r1 = ctx->r17 < 0X6 ? 1 : 0;
    // 0x8003BF24: beq         $at, $zero, L_8003BFCC
    if (ctx->r1 == 0) {
        // 0x8003BF28: sll         $t8, $s1, 2
        ctx->r24 = S32(ctx->r17 << 2);
            goto L_8003BFCC;
    }
    // 0x8003BF28: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x8003BF2C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003BF30: addu        $at, $at, $t8
    gpr jr_addend_8003BF3C = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8003BF34: lw          $t8, 0x5B50($at)
    ctx->r24 = ADD32(ctx->r1, 0X5B50);
    // 0x8003BF38: nop

    // 0x8003BF3C: jr          $t8
    // 0x8003BF40: nop

    switch (jr_addend_8003BF3C >> 2) {
        case 0: goto L_8003BF58; break;
        case 1: goto L_8003BF44; break;
        case 2: goto L_8003BF6C; break;
        case 3: goto L_8003BFB0; break;
        case 4: goto L_8003BF94; break;
        case 5: goto L_8003BF78; break;
        default: switch_error(__func__, 0x8003BF3C, 0x80095B50);
    }
    // 0x8003BF40: nop

L_8003BF44:
    // 0x8003BF44: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x8003BF48: nop

    // 0x8003BF4C: addu        $s0, $s0, $t9
    ctx->r16 = ADD32(ctx->r16, ctx->r25);
    // 0x8003BF50: b           L_8003BFCC
    // 0x8003BF54: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
        goto L_8003BFCC;
    // 0x8003BF54: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_8003BF58:
    // 0x8003BF58: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8003BF5C: nop

    // 0x8003BF60: addu        $s0, $s0, $t6
    ctx->r16 = ADD32(ctx->r16, ctx->r14);
    // 0x8003BF64: b           L_8003BFCC
    // 0x8003BF68: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
        goto L_8003BFCC;
    // 0x8003BF68: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_8003BF6C:
    // 0x8003BF6C: lw          $s0, 0xC($v0)
    ctx->r16 = MEM_W(ctx->r2, 0XC);
    // 0x8003BF70: b           L_8003BFCC
    // 0x8003BF74: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
        goto L_8003BFCC;
    // 0x8003BF74: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_8003BF78:
    // 0x8003BF78: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x8003BF7C: nop

    // 0x8003BF80: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8003BF84: beq         $t8, $zero, L_8003BFCC
    if (ctx->r24 == 0) {
        // 0x8003BF88: nop
    
            goto L_8003BFCC;
    }
    // 0x8003BF88: nop

    // 0x8003BF8C: b           L_8003BFCC
    // 0x8003BF90: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8003BFCC;
    // 0x8003BF90: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8003BF94:
    // 0x8003BF94: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x8003BF98: nop

    // 0x8003BF9C: andi        $t6, $t9, 0x2
    ctx->r14 = ctx->r25 & 0X2;
    // 0x8003BFA0: beq         $t6, $zero, L_8003BFCC
    if (ctx->r14 == 0) {
        // 0x8003BFA4: nop
    
            goto L_8003BFCC;
    }
    // 0x8003BFA4: nop

    // 0x8003BFA8: b           L_8003BFCC
    // 0x8003BFAC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8003BFCC;
    // 0x8003BFAC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8003BFB0:
    // 0x8003BFB0: jal         0x80027F1C
    // 0x8003BFB4: nop

    func_80027F1C(rdram, ctx);
        goto after_1;
    // 0x8003BFB4: nop

    after_1:
    // 0x8003BFB8: c.lt.d      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.d < ctx->f20.d;
    // 0x8003BFBC: nop

    // 0x8003BFC0: bc1f        L_8003BFCC
    if (!c1cs) {
        // 0x8003BFC4: nop
    
            goto L_8003BFCC;
    }
    // 0x8003BFC4: nop

    // 0x8003BFC8: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
L_8003BFCC:
    // 0x8003BFCC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8003BFD0: bne         $s2, $s5, L_8003BEF8
    if (ctx->r18 != ctx->r21) {
        // 0x8003BFD4: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_8003BEF8;
    }
    // 0x8003BFD4: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8003BFD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BFDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003BFE0: jr          $ra
    // 0x8003BFE4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    return;
    // 0x8003BFE4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
;}
