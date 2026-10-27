#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80014AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014AA4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80014AA8: jr          $ra
    // 0x80014AAC: swc1        $f12, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x80014AAC: swc1        $f12, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80014AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014AB0: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x80014AB4: nor         $t7, $a1, $zero
    ctx->r15 = ~(ctx->r5 | 0);
    // 0x80014AB8: and         $t8, $t6, $t7
    ctx->r24 = ctx->r14 & ctx->r15;
    // 0x80014ABC: jr          $ra
    // 0x80014AC0: sw          $t8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r24;
    return;
    // 0x80014AC0: sw          $t8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_80014AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014AC4: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x80014AC8: nop

    // 0x80014ACC: or          $t7, $t6, $a1
    ctx->r15 = ctx->r14 | ctx->r5;
    // 0x80014AD0: jr          $ra
    // 0x80014AD4: sw          $t7, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r15;
    return;
    // 0x80014AD4: sw          $t7, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_80014AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014AD8: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80014ADC: nop

    // 0x80014AE0: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80014AE4: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80014AE8: nop

    // 0x80014AEC: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x80014AF0: lwc1        $f8, 0x24($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X24);
    // 0x80014AF4: jr          $ra
    // 0x80014AF8: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    return;
    // 0x80014AF8: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80014AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014AFC: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80014B00: nop

    // 0x80014B04: swc1        $f4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f4.u32l;
    // 0x80014B08: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80014B0C: nop

    // 0x80014B10: swc1        $f6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f6.u32l;
    // 0x80014B14: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80014B18: jr          $ra
    // 0x80014B1C: swc1        $f8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x80014B1C: swc1        $f8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80014B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014B20: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80014B24: nop

    // 0x80014B28: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80014B2C: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x80014B30: jr          $ra
    // 0x80014B34: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    return;
    // 0x80014B34: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_80014B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014B38: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80014B3C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80014B40: swc1        $f12, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f12.u32l;
    // 0x80014B44: jr          $ra
    // 0x80014B48: swc1        $f14, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f14.u32l;
    return;
    // 0x80014B48: swc1        $f14, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_80014B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014B4C: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80014B50: nop

    // 0x80014B54: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80014B58: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80014B5C: jr          $ra
    // 0x80014B60: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    return;
    // 0x80014B60: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_80014B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014B64: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80014B68: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80014B6C: swc1        $f12, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f12.u32l;
    // 0x80014B70: jr          $ra
    // 0x80014B74: swc1        $f14, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f14.u32l;
    return;
    // 0x80014B74: swc1        $f14, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_80014B78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014B78: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80014B7C: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80014B80: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80014B84: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x80014B88: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x80014B8C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80014B90: nop

    // 0x80014B94: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80014B98: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    // 0x80014B9C: lw          $v0, 0x555C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X555C);
    // 0x80014BA0: nop

    // 0x80014BA4: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x80014BA8: nop

    // 0x80014BAC: slt         $at, $a1, $t0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80014BB0: bne         $at, $zero, L_80014BD4
    if (ctx->r1 != 0) {
        // 0x80014BB4: nop
    
            goto L_80014BD4;
    }
    // 0x80014BB4: nop

L_80014BB8:
    // 0x80014BB8: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80014BBC: nop

    // 0x80014BC0: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x80014BC4: nop

    // 0x80014BC8: slt         $at, $a1, $t1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80014BCC: beq         $at, $zero, L_80014BB8
    if (ctx->r1 == 0) {
        // 0x80014BD0: nop
    
            goto L_80014BB8;
    }
    // 0x80014BD0: nop

L_80014BD4:
    // 0x80014BD4: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x80014BD8: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x80014BDC: nop

    // 0x80014BE0: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80014BE4: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x80014BE8: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80014BEC: jr          $ra
    // 0x80014BF0: sw          $a0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r4;
    return;
    // 0x80014BF0: sw          $a0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r4;
;}
RECOMP_FUNC void func_80014BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014BF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80014BF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80014BFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80014C00: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x80014C04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80014C08: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x80014C0C: bne         $t7, $zero, L_80014CFC
    if (ctx->r15 != 0) {
        // 0x80014C10: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_80014CFC;
    }
    // 0x80014C10: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80014C14: lw          $t8, -0x5C80($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5C80);
    // 0x80014C18: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80014C1C: lw          $v0, 0x4($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X4);
    // 0x80014C20: addiu       $a0, $a0, -0x5C7C
    ctx->r4 = ADD32(ctx->r4, -0X5C7C);
    // 0x80014C24: beq         $v0, $zero, L_80014CC4
    if (ctx->r2 == 0) {
        // 0x80014C28: lui         $t6, 0x8009
        ctx->r14 = S32(0X8009 << 16);
            goto L_80014CC4;
    }
    // 0x80014C28: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80014C2C: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x80014C30: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80014C34: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80014C38: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x80014C3C: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x80014C40: nop

    // 0x80014C44: beq         $v1, $zero, L_80014C58
    if (ctx->r3 == 0) {
        // 0x80014C48: nop
    
            goto L_80014C58;
    }
    // 0x80014C48: nop

    // 0x80014C4C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80014C50: nop

    // 0x80014C54: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_80014C58:
    // 0x80014C58: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x80014C5C: nop

    // 0x80014C60: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x80014C64: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80014C68: nop

    // 0x80014C6C: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x80014C70: nop

    // 0x80014C74: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x80014C78: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x80014C7C: nop

    // 0x80014C80: sw          $v0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r2;
    // 0x80014C84: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x80014C88: nop

    // 0x80014C8C: beq         $v1, $zero, L_80014C9C
    if (ctx->r3 == 0) {
        // 0x80014C90: nop
    
            goto L_80014C9C;
    }
    // 0x80014C90: nop

    // 0x80014C94: b           L_80014CA0
    // 0x80014C98: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
        goto L_80014CA0;
    // 0x80014C98: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_80014C9C:
    // 0x80014C9C: sw          $v0, -0x5C78($at)
    MEM_W(-0X5C78, ctx->r1) = ctx->r2;
L_80014CA0:
    // 0x80014CA0: lw          $t6, -0x19AC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X19AC);
    // 0x80014CA4: nop

    // 0x80014CA8: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
    // 0x80014CAC: lw          $t7, 0x38($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X38);
    // 0x80014CB0: nop

    // 0x80014CB4: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x80014CB8: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x80014CBC: b           L_80014CF0
    // 0x80014CC0: sw          $t8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r24;
        goto L_80014CF0;
    // 0x80014CC0: sw          $t8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r24;
L_80014CC4:
    // 0x80014CC4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x80014CC8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80014CCC: bne         $a0, $at, L_80014CE8
    if (ctx->r4 != ctx->r1) {
        // 0x80014CD0: nop
    
            goto L_80014CE8;
    }
    // 0x80014CD0: nop

    // 0x80014CD4: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x80014CD8: jal         0x80006DC0
    // 0x80014CDC: nop

    func_80006DC0(rdram, ctx);
        goto after_0;
    // 0x80014CDC: nop

    after_0:
    // 0x80014CE0: b           L_80014CF4
    // 0x80014CE4: lw          $a0, 0x54($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X54);
        goto L_80014CF4;
    // 0x80014CE4: lw          $a0, 0x54($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X54);
L_80014CE8:
    // 0x80014CE8: jal         0x80002D08
    // 0x80014CEC: nop

    func_80002D08(rdram, ctx);
        goto after_1;
    // 0x80014CEC: nop

    after_1:
L_80014CF0:
    // 0x80014CF0: lw          $a0, 0x54($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X54);
L_80014CF4:
    // 0x80014CF4: jal         0x80006DC0
    // 0x80014CF8: nop

    func_80006DC0(rdram, ctx);
        goto after_2;
    // 0x80014CF8: nop

    after_2:
L_80014CFC:
    // 0x80014CFC: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x80014D00: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80014D04: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x80014D08: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x80014D0C: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x80014D10: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x80014D14: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x80014D18: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80014D1C: addiu       $v0, $v0, -0x1110
    ctx->r2 = ADD32(ctx->r2, -0X1110);
    // 0x80014D20: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80014D24: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80014D28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80014D2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80014D30: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80014D34: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80014D38: jr          $ra
    // 0x80014D3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80014D3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80014D40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014D40: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80014D44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80014D48: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80014D4C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80014D50: cvt.w.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = CVT_W_S(ctx->f12.fl);
    // 0x80014D54: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80014D58: nop

    // 0x80014D5C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80014D60: beq         $v0, $zero, L_80014DAC
    if (ctx->r2 == 0) {
        // 0x80014D64: nop
    
            goto L_80014DAC;
    }
    // 0x80014D64: nop

    // 0x80014D68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80014D6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80014D70: sub.s       $f4, $f12, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x80014D74: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80014D78: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80014D7C: nop

    // 0x80014D80: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80014D84: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80014D88: nop

    // 0x80014D8C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80014D90: bne         $v0, $zero, L_80014DA4
    if (ctx->r2 != 0) {
        // 0x80014D94: nop
    
            goto L_80014DA4;
    }
    // 0x80014D94: nop

    // 0x80014D98: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x80014D9C: b           L_80014DBC
    // 0x80014DA0: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_80014DBC;
    // 0x80014DA0: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_80014DA4:
    // 0x80014DA4: b           L_80014DBC
    // 0x80014DA8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80014DBC;
    // 0x80014DA8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80014DAC:
    // 0x80014DAC: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x80014DB0: nop

    // 0x80014DB4: bltz        $v0, L_80014DA4
    if (SIGNED(ctx->r2) < 0) {
        // 0x80014DB8: nop
    
            goto L_80014DA4;
    }
    // 0x80014DB8: nop

L_80014DBC:
    // 0x80014DBC: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x80014DC0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80014DC4: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80014DC8: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x80014DCC: bgez        $t7, L_80014DE4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80014DD0: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80014DE4;
    }
    // 0x80014DD0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80014DD4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80014DD8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80014DDC: nop

    // 0x80014DE0: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80014DE4:
    // 0x80014DE4: lui         $at, 0x41F8
    ctx->r1 = S32(0X41F8 << 16);
    // 0x80014DE8: sub.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x80014DEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80014DF0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80014DF4: mul.s       $f0, $f12, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x80014DF8: sll         $t8, $v1, 5
    ctx->r24 = S32(ctx->r3 << 5);
    // 0x80014DFC: andi        $v1, $t8, 0xFFFF
    ctx->r3 = ctx->r24 & 0XFFFF;
    // 0x80014E00: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80014E04: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x80014E08: nop

    // 0x80014E0C: bc1f        L_80014E24
    if (!c1cs) {
        // 0x80014E10: nop
    
            goto L_80014E24;
    }
    // 0x80014E10: nop

    // 0x80014E14: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80014E18: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80014E1C: b           L_80014E30
    // 0x80014E20: add.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f10.fl;
        goto L_80014E30;
    // 0x80014E20: add.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f10.fl;
L_80014E24:
    // 0x80014E24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80014E28: nop

    // 0x80014E2C: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
L_80014E30:
    // 0x80014E30: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80014E34: nop

    // 0x80014E38: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80014E3C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80014E40: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80014E44: nop

    // 0x80014E48: cvt.w.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = CVT_W_S(ctx->f2.fl);
    // 0x80014E4C: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x80014E50: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80014E54: or          $v1, $v1, $t8
    ctx->r3 = ctx->r3 | ctx->r24;
    // 0x80014E58: jr          $ra
    // 0x80014E5C: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    return;
    // 0x80014E5C: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
;}
RECOMP_FUNC void func_80014E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014E60: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80014E64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80014E68: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80014E6C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80014E70: cvt.w.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = CVT_W_S(ctx->f12.fl);
    // 0x80014E74: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80014E78: nop

    // 0x80014E7C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80014E80: beq         $v0, $zero, L_80014ECC
    if (ctx->r2 == 0) {
        // 0x80014E84: nop
    
            goto L_80014ECC;
    }
    // 0x80014E84: nop

    // 0x80014E88: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80014E8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80014E90: sub.s       $f4, $f12, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x80014E94: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80014E98: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80014E9C: nop

    // 0x80014EA0: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80014EA4: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80014EA8: nop

    // 0x80014EAC: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80014EB0: bne         $v0, $zero, L_80014EC4
    if (ctx->r2 != 0) {
        // 0x80014EB4: nop
    
            goto L_80014EC4;
    }
    // 0x80014EB4: nop

    // 0x80014EB8: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x80014EBC: b           L_80014EDC
    // 0x80014EC0: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_80014EDC;
    // 0x80014EC0: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_80014EC4:
    // 0x80014EC4: b           L_80014EDC
    // 0x80014EC8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80014EDC;
    // 0x80014EC8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80014ECC:
    // 0x80014ECC: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x80014ED0: nop

    // 0x80014ED4: bltz        $v0, L_80014EC4
    if (SIGNED(ctx->r2) < 0) {
        // 0x80014ED8: nop
    
            goto L_80014EC4;
    }
    // 0x80014ED8: nop

L_80014EDC:
    // 0x80014EDC: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x80014EE0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80014EE4: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80014EE8: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x80014EEC: bgez        $t7, L_80014F04
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80014EF0: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80014F04;
    }
    // 0x80014EF0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80014EF4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80014EF8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80014EFC: nop

    // 0x80014F00: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80014F04:
    // 0x80014F04: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80014F08: sub.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x80014F0C: lwc1        $f4, 0x4FCC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4FCC);
    // 0x80014F10: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80014F14: mul.s       $f0, $f12, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x80014F18: sll         $t8, $v1, 10
    ctx->r24 = S32(ctx->r3 << 10);
    // 0x80014F1C: andi        $v1, $t8, 0xFFFF
    ctx->r3 = ctx->r24 & 0XFFFF;
    // 0x80014F20: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80014F24: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x80014F28: nop

    // 0x80014F2C: bc1f        L_80014F44
    if (!c1cs) {
        // 0x80014F30: nop
    
            goto L_80014F44;
    }
    // 0x80014F30: nop

    // 0x80014F34: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80014F38: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80014F3C: b           L_80014F50
    // 0x80014F40: add.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f10.fl;
        goto L_80014F50;
    // 0x80014F40: add.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f10.fl;
L_80014F44:
    // 0x80014F44: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80014F48: nop

    // 0x80014F4C: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
L_80014F50:
    // 0x80014F50: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80014F54: nop

    // 0x80014F58: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80014F5C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80014F60: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80014F64: nop

    // 0x80014F68: cvt.w.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = CVT_W_S(ctx->f2.fl);
    // 0x80014F6C: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x80014F70: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80014F74: or          $v1, $v1, $t8
    ctx->r3 = ctx->r3 | ctx->r24;
    // 0x80014F78: jr          $ra
    // 0x80014F7C: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    return;
    // 0x80014F7C: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
;}
RECOMP_FUNC void func_80014F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014F80: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x80014F84: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80014F88: sw          $t3, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r11;
    // 0x80014F8C: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x80014F90: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80014F94: srl         $t6, $a1, 3
    ctx->r14 = S32(U32(ctx->r5) >> 3);
    // 0x80014F98: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80014F9C: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80014FA0: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x80014FA4: addu        $a2, $a2, $t7
    ctx->r6 = ADD32(ctx->r6, ctx->r15);
    // 0x80014FA8: lw          $v1, -0x1070($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1070);
    // 0x80014FAC: lw          $a2, -0x105C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X105C);
    // 0x80014FB0: lw          $a3, 0x4C($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X4C);
    // 0x80014FB4: lw          $t0, 0x44($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X44);
    // 0x80014FB8: lw          $t1, 0x50($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X50);
    // 0x80014FBC: lw          $t2, 0x48($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X48);
    // 0x80014FC0: sw          $zero, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = 0;
    // 0x80014FC4: sw          $zero, 0x40($a0)
    MEM_W(0X40, ctx->r4) = 0;
L_80014FC8:
    // 0x80014FC8: slt         $at, $a3, $v1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80014FCC: bne         $at, $zero, L_80015008
    if (ctx->r1 != 0) {
        // 0x80014FD0: nop
    
            goto L_80015008;
    }
    // 0x80014FD0: nop

L_80014FD4:
    // 0x80014FD4: lw          $a1, 0x10($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X10);
    // 0x80014FD8: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x80014FDC: sltu        $at, $t0, $a1
    ctx->r1 = ctx->r8 < ctx->r5 ? 1 : 0;
    // 0x80014FE0: bne         $at, $zero, L_80014FF4
    if (ctx->r1 != 0) {
        // 0x80014FE4: subu        $a3, $a3, $v1
        ctx->r7 = SUB32(ctx->r7, ctx->r3);
            goto L_80014FF4;
    }
    // 0x80014FE4: subu        $a3, $a3, $v1
    ctx->r7 = SUB32(ctx->r7, ctx->r3);
    // 0x80014FE8: addu        $t8, $a3, $t0
    ctx->r24 = ADD32(ctx->r7, ctx->r8);
    // 0x80014FEC: subu        $a3, $t8, $a1
    ctx->r7 = SUB32(ctx->r24, ctx->r5);
    // 0x80014FF0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_80014FF4:
    // 0x80014FF4: lw          $t9, 0x3C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X3C);
    // 0x80014FF8: slt         $at, $a3, $v1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80014FFC: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x80015000: beq         $at, $zero, L_80014FD4
    if (ctx->r1 == 0) {
        // 0x80015004: sw          $t6, 0x3C($a0)
        MEM_W(0X3C, ctx->r4) = ctx->r14;
            goto L_80014FD4;
    }
    // 0x80015004: sw          $t6, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r14;
L_80015008:
    // 0x80015008: beq         $a3, $zero, L_80015044
    if (ctx->r7 == 0) {
        // 0x8001500C: slt         $at, $t1, $a2
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_80015044;
    }
    // 0x8001500C: slt         $at, $t1, $a2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80015010: lw          $a1, 0x10($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X10);
    // 0x80015014: addu        $t0, $t0, $a3
    ctx->r8 = ADD32(ctx->r8, ctx->r7);
    // 0x80015018: sltu        $at, $t0, $a1
    ctx->r1 = ctx->r8 < ctx->r5 ? 1 : 0;
    // 0x8001501C: bne         $at, $zero, L_8001502C
    if (ctx->r1 != 0) {
        // 0x80015020: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_8001502C;
    }
    // 0x80015020: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80015024: subu        $a3, $t0, $a1
    ctx->r7 = SUB32(ctx->r8, ctx->r5);
    // 0x80015028: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_8001502C:
    // 0x8001502C: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x80015030: nop

    // 0x80015034: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80015038: b           L_80014FC8
    // 0x8001503C: sw          $t8, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r24;
        goto L_80014FC8;
    // 0x8001503C: sw          $t8, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r24;
L_80015040:
    // 0x80015040: slt         $at, $t1, $a2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r6) ? 1 : 0;
L_80015044:
    // 0x80015044: bne         $at, $zero, L_80015088
    if (ctx->r1 != 0) {
        // 0x80015048: nop
    
            goto L_80015088;
    }
    // 0x80015048: nop

L_8001504C:
    // 0x8001504C: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x80015050: addu        $t2, $t2, $a2
    ctx->r10 = ADD32(ctx->r10, ctx->r6);
    // 0x80015054: addiu       $t9, $v1, -0x1
    ctx->r25 = ADD32(ctx->r3, -0X1);
    // 0x80015058: sltu        $at, $t2, $t9
    ctx->r1 = ctx->r10 < ctx->r25 ? 1 : 0;
    // 0x8001505C: bne         $at, $zero, L_80015074
    if (ctx->r1 != 0) {
        // 0x80015060: subu        $t1, $t1, $a2
        ctx->r9 = SUB32(ctx->r9, ctx->r6);
            goto L_80015074;
    }
    // 0x80015060: subu        $t1, $t1, $a2
    ctx->r9 = SUB32(ctx->r9, ctx->r6);
    // 0x80015064: addu        $t6, $t1, $t2
    ctx->r14 = ADD32(ctx->r9, ctx->r10);
    // 0x80015068: subu        $t1, $t6, $v1
    ctx->r9 = SUB32(ctx->r14, ctx->r3);
    // 0x8001506C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80015070: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
L_80015074:
    // 0x80015074: lw          $t7, 0x40($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X40);
    // 0x80015078: slt         $at, $t1, $a2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8001507C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80015080: beq         $at, $zero, L_8001504C
    if (ctx->r1 == 0) {
        // 0x80015084: sw          $t8, 0x40($a0)
        MEM_W(0X40, ctx->r4) = ctx->r24;
            goto L_8001504C;
    }
    // 0x80015084: sw          $t8, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r24;
L_80015088:
    // 0x80015088: beq         $t1, $zero, L_800150C4
    if (ctx->r9 == 0) {
        // 0x8001508C: nop
    
            goto L_800150C4;
    }
    // 0x8001508C: nop

    // 0x80015090: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x80015094: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80015098: sltu        $at, $t2, $v1
    ctx->r1 = ctx->r10 < ctx->r3 ? 1 : 0;
    // 0x8001509C: bne         $at, $zero, L_800150B0
    if (ctx->r1 != 0) {
        // 0x800150A0: or          $t1, $zero, $zero
        ctx->r9 = 0 | 0;
            goto L_800150B0;
    }
    // 0x800150A0: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x800150A4: subu        $t1, $t2, $v1
    ctx->r9 = SUB32(ctx->r10, ctx->r3);
    // 0x800150A8: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x800150AC: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
L_800150B0:
    // 0x800150B0: lw          $t9, 0x40($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X40);
    // 0x800150B4: nop

    // 0x800150B8: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x800150BC: b           L_80015040
    // 0x800150C0: sw          $t6, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r14;
        goto L_80015040;
    // 0x800150C0: sw          $t6, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r14;
L_800150C4:
    // 0x800150C4: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x800150C8: nop

    // 0x800150CC: bne         $t3, $t7, L_80015150
    if (ctx->r11 != ctx->r15) {
        // 0x800150D0: nop
    
            goto L_80015150;
    }
    // 0x800150D0: nop

    // 0x800150D4: lw          $t8, 0x40($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X40);
    // 0x800150D8: nop

    // 0x800150DC: bne         $t3, $t8, L_80015150
    if (ctx->r11 != ctx->r24) {
        // 0x800150E0: nop
    
            goto L_80015150;
    }
    // 0x800150E0: nop

    // 0x800150E4: lw          $t9, 0x4C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4C);
    // 0x800150E8: lw          $t6, 0x44($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X44);
    // 0x800150EC: lw          $t8, 0x50($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X50);
    // 0x800150F0: subu        $t7, $t9, $t6
    ctx->r15 = SUB32(ctx->r25, ctx->r14);
    // 0x800150F4: lw          $t9, 0x48($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X48);
    // 0x800150F8: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x800150FC: subu        $t6, $t8, $t9
    ctx->r14 = SUB32(ctx->r24, ctx->r25);
    // 0x80015100: multu       $t7, $t6
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80015104: sltiu       $at, $v1, 0x9
    ctx->r1 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x80015108: mflo        $t8
    ctx->r24 = lo;
    // 0x8001510C: nop

    // 0x80015110: nop

    // 0x80015114: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80015118: mflo        $a1
    ctx->r5 = lo;
    // 0x8001511C: srl         $t9, $a1, 3
    ctx->r25 = S32(U32(ctx->r5) >> 3);
    // 0x80015120: beq         $at, $zero, L_8001513C
    if (ctx->r1 == 0) {
        // 0x80015124: or          $a1, $t9, $zero
        ctx->r5 = ctx->r25 | 0;
            goto L_8001513C;
    }
    // 0x80015124: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x80015128: sltiu       $at, $t9, 0x801
    ctx->r1 = ctx->r25 < 0X801 ? 1 : 0;
    // 0x8001512C: beq         $at, $zero, L_80015154
    if (ctx->r1 == 0) {
        // 0x80015130: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80015154;
    }
    // 0x80015130: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80015134: jr          $ra
    // 0x80015138: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80015138: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8001513C:
    // 0x8001513C: sltiu       $at, $a1, 0x1001
    ctx->r1 = ctx->r5 < 0X1001 ? 1 : 0;
    // 0x80015140: beq         $at, $zero, L_80015154
    if (ctx->r1 == 0) {
        // 0x80015144: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80015154;
    }
    // 0x80015144: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80015148: jr          $ra
    // 0x8001514C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8001514C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80015150:
    // 0x80015150: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80015154:
    // 0x80015154: jr          $ra
    // 0x80015158: nop

    return;
    // 0x80015158: nop

;}
RECOMP_FUNC void func_8001515C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001515C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80015160: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80015164: lw          $t6, 0x38($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X38);
    // 0x80015168: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8001516C: lw          $s2, 0xC($t6)
    ctx->r18 = MEM_W(ctx->r14, 0XC);
    // 0x80015170: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x80015174: sra         $v0, $s2, 3
    ctx->r2 = S32(SIGNED(ctx->r18) >> 3);
    // 0x80015178: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8001517C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80015180: lw          $t8, -0x1070($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1070);
    // 0x80015184: addu        $s1, $s1, $t7
    ctx->r17 = ADD32(ctx->r17, ctx->r15);
    // 0x80015188: lw          $s1, -0x105C($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X105C);
    // 0x8001518C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80015190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80015194: jal         0x80014F80
    // 0x80015198: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    func_80014F80(rdram, ctx);
        goto after_0;
    // 0x80015198: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    after_0:
    // 0x8001519C: lw          $t9, 0x3C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X3C);
    // 0x800151A0: lw          $t6, 0x40($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X40);
    // 0x800151A4: slti        $at, $s2, 0x9
    ctx->r1 = SIGNED(ctx->r18) < 0X9 ? 1 : 0;
    // 0x800151A8: multu       $t9, $t6
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800151AC: mflo        $v1
    ctx->r3 = lo;
    // 0x800151B0: beq         $at, $zero, L_800151C0
    if (ctx->r1 == 0) {
        // 0x800151B4: sll         $a0, $v1, 2
        ctx->r4 = S32(ctx->r3 << 2);
            goto L_800151C0;
    }
    // 0x800151B4: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
    // 0x800151B8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800151BC: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
L_800151C0:
    // 0x800151C0: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x800151C4: jal         0x80006DFC
    // 0x800151C8: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    func_80006DFC(rdram, ctx);
        goto after_1;
    // 0x800151C8: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    after_1:
    // 0x800151CC: slti        $at, $s2, 0x9
    ctx->r1 = SIGNED(ctx->r18) < 0X9 ? 1 : 0;
    // 0x800151D0: sw          $v0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r2;
    // 0x800151D4: beq         $at, $zero, L_80015258
    if (ctx->r1 == 0) {
        // 0x800151D8: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80015258;
    }
    // 0x800151D8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800151DC: addiu       $t7, $zero, 0x30
    ctx->r15 = ADD32(0, 0X30);
    // 0x800151E0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800151E4: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x800151E8: lw          $t7, 0x54($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X54);
    // 0x800151EC: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x800151F0: addiu       $t8, $zero, 0x100
    ctx->r24 = ADD32(0, 0X100);
    // 0x800151F4: addu        $t6, $v0, $t9
    ctx->r14 = ADD32(ctx->r2, ctx->r25);
    // 0x800151F8: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x800151FC: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x80015200: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80015204: sh          $t8, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r24;
    // 0x80015208: lw          $t6, 0x38($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X38);
    // 0x8001520C: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x80015210: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x80015214: nop

    // 0x80015218: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8001521C: sh          $t8, 0xA($t9)
    MEM_H(0XA, ctx->r25) = ctx->r24;
    // 0x80015220: lw          $t6, 0x54($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X54);
    // 0x80015224: nop

    // 0x80015228: sh          $zero, 0xC($t6)
    MEM_H(0XC, ctx->r14) = 0;
    // 0x8001522C: lw          $t7, 0x54($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X54);
    // 0x80015230: nop

    // 0x80015234: sh          $zero, 0xE($t7)
    MEM_H(0XE, ctx->r15) = 0;
    // 0x80015238: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x8001523C: nop

    // 0x80015240: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x80015244: nop

    // 0x80015248: sw          $t8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r24;
    // 0x8001524C: lw          $t6, 0x54($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X54);
    // 0x80015250: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80015254: sw          $t8, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r24;
L_80015258:
    // 0x80015258: lw          $s5, 0x4C($s0)
    ctx->r21 = MEM_W(ctx->r16, 0X4C);
    // 0x8001525C: lw          $s6, 0x44($s0)
    ctx->r22 = MEM_W(ctx->r16, 0X44);
    // 0x80015260: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x80015264: lw          $t0, 0x3C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X3C);
    // 0x80015268: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001526C: blez        $t0, L_800154D8
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80015270: addiu       $t5, $zero, 0x4
        ctx->r13 = ADD32(0, 0X4);
            goto L_800154D8;
    }
    // 0x80015270: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x80015274: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x80015278: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8001527C: addiu       $fp, $zero, 0x2
    ctx->r30 = ADD32(0, 0X2);
    // 0x80015280: addiu       $s7, $zero, 0x20
    ctx->r23 = ADD32(0, 0X20);
    // 0x80015284: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
L_80015288:
    // 0x80015288: lw          $a2, 0x50($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X50);
    // 0x8001528C: lw          $a3, 0x48($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X48);
    // 0x80015290: bne         $t4, $t0, L_800152AC
    if (ctx->r12 != ctx->r8) {
        // 0x80015294: or          $t3, $zero, $zero
        ctx->r11 = 0 | 0;
            goto L_800152AC;
    }
    // 0x80015294: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x80015298: bne         $t4, $v0, L_800152B0
    if (ctx->r12 != ctx->r2) {
        // 0x8001529C: lw          $t7, 0x3C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X3C);
            goto L_800152B0;
    }
    // 0x8001529C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800152A0: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x800152A4: b           L_80015324
    // 0x800152A8: nop

        goto L_80015324;
    // 0x800152A8: nop

L_800152AC:
    // 0x800152AC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
L_800152B0:
    // 0x800152B0: nop

    // 0x800152B4: slt         $at, $s5, $t7
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800152B8: bne         $at, $zero, L_800152F4
    if (ctx->r1 != 0) {
        // 0x800152BC: nop
    
            goto L_800152F4;
    }
    // 0x800152BC: nop

    // 0x800152C0: lw          $t9, 0x38($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X38);
    // 0x800152C4: addu        $s6, $s6, $t7
    ctx->r22 = ADD32(ctx->r22, ctx->r15);
    // 0x800152C8: lw          $v1, 0x10($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X10);
    // 0x800152CC: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x800152D0: sltu        $at, $s6, $v1
    ctx->r1 = ctx->r22 < ctx->r3 ? 1 : 0;
    // 0x800152D4: bne         $at, $zero, L_80015324
    if (ctx->r1 != 0) {
        // 0x800152D8: subu        $s5, $s5, $t7
        ctx->r21 = SUB32(ctx->r21, ctx->r15);
            goto L_80015324;
    }
    // 0x800152D8: subu        $s5, $s5, $t7
    ctx->r21 = SUB32(ctx->r21, ctx->r15);
    // 0x800152DC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800152E0: subu        $a0, $s6, $v1
    ctx->r4 = SUB32(ctx->r22, ctx->r3);
    // 0x800152E4: addu        $s5, $s5, $a0
    ctx->r21 = ADD32(ctx->r21, ctx->r4);
    // 0x800152E8: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x800152EC: b           L_80015324
    // 0x800152F0: subu        $a1, $t8, $a0
    ctx->r5 = SUB32(ctx->r24, ctx->r4);
        goto L_80015324;
    // 0x800152F0: subu        $a1, $t8, $a0
    ctx->r5 = SUB32(ctx->r24, ctx->r4);
L_800152F4:
    // 0x800152F4: beq         $s5, $zero, L_80015324
    if (ctx->r21 == 0) {
        // 0x800152F8: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_80015324;
    }
    // 0x800152F8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x800152FC: lw          $t6, 0x38($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X38);
    // 0x80015300: addu        $s6, $s6, $s5
    ctx->r22 = ADD32(ctx->r22, ctx->r21);
    // 0x80015304: lw          $v1, 0x10($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X10);
    // 0x80015308: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8001530C: sltu        $at, $s6, $v1
    ctx->r1 = ctx->r22 < ctx->r3 ? 1 : 0;
    // 0x80015310: bne         $at, $zero, L_80015324
    if (ctx->r1 != 0) {
        // 0x80015314: nop
    
            goto L_80015324;
    }
    // 0x80015314: nop

    // 0x80015318: subu        $s5, $s6, $v1
    ctx->r21 = SUB32(ctx->r22, ctx->r3);
    // 0x8001531C: subu        $a1, $a1, $s5
    ctx->r5 = SUB32(ctx->r5, ctx->r21);
    // 0x80015320: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
L_80015324:
    // 0x80015324: blez        $v0, L_800154C0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80015328: sll         $t2, $s3, 2
        ctx->r10 = S32(ctx->r19 << 2);
            goto L_800154C0;
    }
    // 0x80015328: sll         $t2, $s3, 2
    ctx->r10 = S32(ctx->r19 << 2);
    // 0x8001532C: addiu       $t7, $a1, 0x1
    ctx->r15 = ADD32(ctx->r5, 0X1);
    // 0x80015330: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80015334: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80015338: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8001533C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80015340: addiu       $t8, $t8, -0x10EC
    ctx->r24 = ADD32(ctx->r24, -0X10EC);
    // 0x80015344: subu        $t2, $t2, $s3
    ctx->r10 = SUB32(ctx->r10, ctx->r19);
    // 0x80015348: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8001534C: cvt.s.w     $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    ctx->f22.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80015350: addu        $s4, $t9, $t8
    ctx->r20 = ADD32(ctx->r25, ctx->r24);
    // 0x80015354: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_80015358:
    // 0x80015358: lw          $t6, 0x54($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X54);
    // 0x8001535C: lw          $t7, 0x3C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X3C);
    // 0x80015360: addu        $a0, $t2, $t6
    ctx->r4 = ADD32(ctx->r10, ctx->r14);
    // 0x80015364: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    // 0x80015368: addiu       $t2, $t2, 0x30
    ctx->r10 = ADD32(ctx->r10, 0X30);
    // 0x8001536C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80015370: bne         $t4, $t7, L_8001538C
    if (ctx->r12 != ctx->r15) {
        // 0x80015374: or          $t0, $t1, $zero
        ctx->r8 = ctx->r9 | 0;
            goto L_8001538C;
    }
    // 0x80015374: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x80015378: bne         $t4, $v0, L_80015390
    if (ctx->r12 != ctx->r2) {
        // 0x8001537C: slt         $at, $a2, $s1
        ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_80015390;
    }
    // 0x8001537C: slt         $at, $a2, $s1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80015380: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x80015384: b           L_80015404
    // 0x80015388: nop

        goto L_80015404;
    // 0x80015388: nop

L_8001538C:
    // 0x8001538C: slt         $at, $a2, $s1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r17) ? 1 : 0;
L_80015390:
    // 0x80015390: bne         $at, $zero, L_800153D0
    if (ctx->r1 != 0) {
        // 0x80015394: nop
    
            goto L_800153D0;
    }
    // 0x80015394: nop

    // 0x80015398: lw          $t9, 0x38($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X38);
    // 0x8001539C: addu        $a3, $a3, $s1
    ctx->r7 = ADD32(ctx->r7, ctx->r17);
    // 0x800153A0: lw          $v0, 0x14($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X14);
    // 0x800153A4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800153A8: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x800153AC: sltu        $at, $a3, $t8
    ctx->r1 = ctx->r7 < ctx->r24 ? 1 : 0;
    // 0x800153B0: bne         $at, $zero, L_80015404
    if (ctx->r1 != 0) {
        // 0x800153B4: subu        $a2, $a2, $s1
        ctx->r6 = SUB32(ctx->r6, ctx->r17);
            goto L_80015404;
    }
    // 0x800153B4: subu        $a2, $a2, $s1
    ctx->r6 = SUB32(ctx->r6, ctx->r17);
    // 0x800153B8: subu        $v1, $a3, $v0
    ctx->r3 = SUB32(ctx->r7, ctx->r2);
    // 0x800153BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800153C0: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x800153C4: subu        $a1, $s1, $v1
    ctx->r5 = SUB32(ctx->r17, ctx->r3);
    // 0x800153C8: b           L_80015404
    // 0x800153CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
        goto L_80015404;
    // 0x800153CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_800153D0:
    // 0x800153D0: beq         $a2, $zero, L_80015404
    if (ctx->r6 == 0) {
        // 0x800153D4: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_80015404;
    }
    // 0x800153D4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800153D8: lw          $t6, 0x38($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X38);
    // 0x800153DC: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x800153E0: lw          $v0, 0x14($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X14);
    // 0x800153E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800153E8: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x800153EC: sltu        $at, $a3, $t7
    ctx->r1 = ctx->r7 < ctx->r15 ? 1 : 0;
    // 0x800153F0: bne         $at, $zero, L_80015404
    if (ctx->r1 != 0) {
        // 0x800153F4: subu        $v1, $a3, $v0
        ctx->r3 = SUB32(ctx->r7, ctx->r2);
            goto L_80015404;
    }
    // 0x800153F4: subu        $v1, $a3, $v0
    ctx->r3 = SUB32(ctx->r7, ctx->r2);
    // 0x800153F8: addiu       $a2, $v1, 0x1
    ctx->r6 = ADD32(ctx->r3, 0X1);
    // 0x800153FC: subu        $a1, $a1, $a2
    ctx->r5 = SUB32(ctx->r5, ctx->r6);
    // 0x80015400: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_80015404:
    // 0x80015404: jal         0x80014E60
    // 0x80015408: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80014E60(rdram, ctx);
        goto after_2;
    // 0x80015408: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x8001540C: sh          $v0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r2;
    // 0x80015410: jal         0x80014D40
    // 0x80015414: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    func_80014D40(rdram, ctx);
        goto after_3;
    // 0x80015414: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_3:
    // 0x80015418: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x8001541C: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
    // 0x80015420: jal         0x80014E60
    // 0x80015424: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80014E60(rdram, ctx);
        goto after_4;
    // 0x80015424: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_4:
    // 0x80015428: addiu       $t9, $a1, 0x1
    ctx->r25 = ADD32(ctx->r5, 0X1);
    // 0x8001542C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80015430: sh          $v0, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r2;
    // 0x80015434: jal         0x80014D40
    // 0x80015438: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    func_80014D40(rdram, ctx);
        goto after_5;
    // 0x80015438: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_5:
    // 0x8001543C: sh          $v0, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r2;
    // 0x80015440: sh          $zero, 0xE($a0)
    MEM_H(0XE, ctx->r4) = 0;
    // 0x80015444: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x80015448: bne         $s2, $s7, L_80015458
    if (ctx->r18 != ctx->r23) {
        // 0x8001544C: sb          $t8, 0x15($a0)
        MEM_B(0X15, ctx->r4) = ctx->r24;
            goto L_80015458;
    }
    // 0x8001544C: sb          $t8, 0x15($a0)
    MEM_B(0X15, ctx->r4) = ctx->r24;
    // 0x80015450: b           L_80015474
    // 0x80015454: sra         $t0, $t1, 1
    ctx->r8 = S32(SIGNED(ctx->r9) >> 1);
        goto L_80015474;
    // 0x80015454: sra         $t0, $t1, 1
    ctx->r8 = S32(SIGNED(ctx->r9) >> 1);
L_80015458:
    // 0x80015458: bne         $s2, $t5, L_80015474
    if (ctx->r18 != ctx->r13) {
        // 0x8001545C: andi        $t6, $t1, 0xF
        ctx->r14 = ctx->r9 & 0XF;
            goto L_80015474;
    }
    // 0x8001545C: andi        $t6, $t1, 0xF
    ctx->r14 = ctx->r9 & 0XF;
    // 0x80015460: beq         $t6, $zero, L_80015470
    if (ctx->r14 == 0) {
        // 0x80015464: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80015470;
    }
    // 0x80015464: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80015468: b           L_80015470
    // 0x8001546C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
        goto L_80015470;
    // 0x8001546C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
L_80015470:
    // 0x80015470: addu        $t0, $t1, $v0
    ctx->r8 = ADD32(ctx->r9, ctx->r2);
L_80015474:
    // 0x80015474: lbu         $t7, 0x15($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X15);
    // 0x80015478: slti        $at, $s2, 0x9
    ctx->r1 = SIGNED(ctx->r18) < 0X9 ? 1 : 0;
    // 0x8001547C: subu        $t9, $t5, $t7
    ctx->r25 = SUB32(ctx->r13, ctx->r15);
    // 0x80015480: srav        $t8, $t0, $t9
    ctx->r24 = S32(SIGNED(ctx->r8) >> (ctx->r25 & 31));
    // 0x80015484: sh          $t8, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r24;
    // 0x80015488: beq         $at, $zero, L_80015498
    if (ctx->r1 == 0) {
        // 0x8001548C: sh          $zero, 0x12($a0)
        MEM_H(0X12, ctx->r4) = 0;
            goto L_80015498;
    }
    // 0x8001548C: sh          $zero, 0x12($a0)
    MEM_H(0X12, ctx->r4) = 0;
    // 0x80015490: b           L_8001549C
    // 0x80015494: sb          $fp, 0x14($a0)
    MEM_B(0X14, ctx->r4) = ctx->r30;
        goto L_8001549C;
    // 0x80015494: sb          $fp, 0x14($a0)
    MEM_B(0X14, ctx->r4) = ctx->r30;
L_80015498:
    // 0x80015498: sb          $zero, 0x14($a0)
    MEM_B(0X14, ctx->r4) = 0;
L_8001549C:
    // 0x8001549C: sb          $zero, 0x16($a0)
    MEM_B(0X16, ctx->r4) = 0;
    // 0x800154A0: sb          $zero, 0x17($a0)
    MEM_B(0X17, ctx->r4) = 0;
    // 0x800154A4: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x800154A8: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x800154AC: slt         $at, $t3, $v0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800154B0: bne         $at, $zero, L_80015358
    if (ctx->r1 != 0) {
        // 0x800154B4: nop
    
            goto L_80015358;
    }
    // 0x800154B4: nop

    // 0x800154B8: lw          $t0, 0x3C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X3C);
    // 0x800154BC: nop

L_800154C0:
    // 0x800154C0: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x800154C4: nop

    // 0x800154C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800154CC: slt         $at, $v1, $t0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800154D0: bne         $at, $zero, L_80015288
    if (ctx->r1 != 0) {
        // 0x800154D4: sw          $v1, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r3;
            goto L_80015288;
    }
    // 0x800154D4: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
L_800154D8:
    // 0x800154D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800154DC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x800154E0: jr          $ra
    // 0x800154E4: nop

    return;
    // 0x800154E4: nop

;}
RECOMP_FUNC void func_800154E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800154E8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800154EC: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x800154F0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800154F4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800154F8: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x800154FC: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80015500: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80015504: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80015508: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8001550C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80015510: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80015514: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80015518: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8001551C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80015520: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80015524: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80015528: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8001552C: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x80015530: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x80015534: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x80015538: addiu       $v0, $v0, -0x7EA8
    ctx->r2 = ADD32(ctx->r2, -0X7EA8);
    // 0x8001553C: addiu       $t0, $t0, 0x5608
    ctx->r8 = ADD32(ctx->r8, 0X5608);
L_80015540:
    // 0x80015540: lw          $t6, 0xC($t0)
    ctx->r14 = MEM_W(ctx->r8, 0XC);
    // 0x80015544: nop

    // 0x80015548: beq         $t6, $zero, L_8001555C
    if (ctx->r14 == 0) {
        // 0x8001554C: nop
    
            goto L_8001555C;
    }
    // 0x8001554C: nop

    // 0x80015550: addiu       $t0, $t0, 0x58
    ctx->r8 = ADD32(ctx->r8, 0X58);
    // 0x80015554: bne         $t0, $v0, L_80015540
    if (ctx->r8 != ctx->r2) {
        // 0x80015558: nop
    
            goto L_80015540;
    }
    // 0x80015558: nop

L_8001555C:
    // 0x8001555C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x80015560: addiu       $t7, $t7, -0x7EA8
    ctx->r15 = ADD32(ctx->r15, -0X7EA8);
    // 0x80015564: sltu        $at, $t0, $t7
    ctx->r1 = ctx->r8 < ctx->r15 ? 1 : 0;
    // 0x80015568: bne         $at, $zero, L_80015594
    if (ctx->r1 != 0) {
        // 0x8001556C: lui         $a0, 0x8009
        ctx->r4 = S32(0X8009 << 16);
            goto L_80015594;
    }
    // 0x8001556C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80015570: addiu       $a0, $a0, 0x4FB0
    ctx->r4 = ADD32(ctx->r4, 0X4FB0);
    // 0x80015574: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x80015578: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x8001557C: jal         0x80000FBC
    // 0x80015580: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x80015580: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
    after_0:
    // 0x80015584: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x80015588: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x8001558C: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x80015590: nop

L_80015594:
    // 0x80015594: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80015598: lw          $v0, 0x555C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X555C);
    // 0x8001559C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x800155A0: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x800155A4: nop

    // 0x800155A8: slt         $at, $a2, $t8
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800155AC: bne         $at, $zero, L_800155D0
    if (ctx->r1 != 0) {
        // 0x800155B0: nop
    
            goto L_800155D0;
    }
    // 0x800155B0: nop

L_800155B4:
    // 0x800155B4: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x800155B8: nop

    // 0x800155BC: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x800155C0: nop

    // 0x800155C4: slt         $at, $a2, $t9
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800155C8: beq         $at, $zero, L_800155B4
    if (ctx->r1 == 0) {
        // 0x800155CC: nop
    
            goto L_800155B4;
    }
    // 0x800155CC: nop

L_800155D0:
    // 0x800155D0: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x800155D4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800155D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800155DC: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x800155E0: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x800155E4: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x800155E8: nop

    // 0x800155EC: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x800155F0: bne         $t1, $at, L_80015604
    if (ctx->r9 != ctx->r1) {
        // 0x800155F4: sw          $t1, 0x10($t0)
        MEM_W(0X10, ctx->r8) = ctx->r9;
            goto L_80015604;
    }
    // 0x800155F4: sw          $t1, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r9;
    // 0x800155F8: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x800155FC: b           L_8001561C
    // 0x80015600: sw          $t8, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r24;
        goto L_8001561C;
    // 0x80015600: sw          $t8, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r24;
L_80015604:
    // 0x80015604: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x80015608: jal         0x80002F88
    // 0x8001560C: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    func_80002F88(rdram, ctx);
        goto after_1;
    // 0x8001560C: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    after_1:
    // 0x80015610: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80015614: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x80015618: sw          $v0, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r2;
L_8001561C:
    // 0x8001561C: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x80015620: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x80015624: ori         $t6, $t9, 0x1
    ctx->r14 = ctx->r25 | 0X1;
    // 0x80015628: andi        $t8, $t7, 0x80
    ctx->r24 = ctx->r15 & 0X80;
    // 0x8001562C: sw          $t6, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r14;
    // 0x80015630: bne         $t8, $zero, L_800156F4
    if (ctx->r24 != 0) {
        // 0x80015634: sw          $a2, 0x8($t0)
        MEM_W(0X8, ctx->r8) = ctx->r6;
            goto L_800156F4;
    }
    // 0x80015634: sw          $a2, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r6;
    // 0x80015638: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001563C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80015640: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80015644: lw          $v0, 0x38($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X38);
    // 0x80015648: swc1        $f2, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f2.u32l;
    // 0x8001564C: swc1        $f2, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f2.u32l;
    // 0x80015650: swc1        $f0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f0.u32l;
    // 0x80015654: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x80015658: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x8001565C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80015660: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80015664: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80015668: bgez        $t9, L_80015680
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8001566C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80015680;
    }
    // 0x8001566C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80015670: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80015674: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80015678: nop

    // 0x8001567C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80015680:
    // 0x80015680: mul.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80015684: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80015688: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8001568C: swc1        $f10, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f10.u32l;
    // 0x80015690: lw          $t6, 0x14($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X14);
    // 0x80015694: nop

    // 0x80015698: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8001569C: bgez        $t6, L_800156B0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800156A0: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800156B0;
    }
    // 0x800156A0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800156A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800156A8: nop

    // 0x800156AC: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_800156B0:
    // 0x800156B0: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x800156B4: swc1        $f0, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->f0.u32l;
    // 0x800156B8: sw          $t7, 0x34($t0)
    MEM_W(0X34, ctx->r8) = ctx->r15;
    // 0x800156BC: sw          $zero, 0x48($t0)
    MEM_W(0X48, ctx->r8) = 0;
    // 0x800156C0: swc1        $f10, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f10.u32l;
    // 0x800156C4: sw          $zero, 0x44($t0)
    MEM_W(0X44, ctx->r8) = 0;
    // 0x800156C8: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x800156CC: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x800156D0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800156D4: sw          $t9, 0x4C($t0)
    MEM_W(0X4C, ctx->r8) = ctx->r25;
    // 0x800156D8: lw          $t6, 0x14($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X14);
    // 0x800156DC: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x800156E0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800156E4: jal         0x8001515C
    // 0x800156E8: sw          $t7, 0x50($t0)
    MEM_W(0X50, ctx->r8) = ctx->r15;
    func_8001515C(rdram, ctx);
        goto after_2;
    // 0x800156E8: sw          $t7, 0x50($t0)
    MEM_W(0X50, ctx->r8) = ctx->r15;
    after_2:
    // 0x800156EC: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x800156F0: nop

L_800156F4:
    // 0x800156F4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x800156F8: addiu       $v1, $v1, -0x1110
    ctx->r3 = ADD32(ctx->r3, -0X1110);
    // 0x800156FC: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80015700: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80015704: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80015708: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8001570C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80015710: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80015714: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80015718: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8001571C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80015720: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80015724: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80015728: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8001572C: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80015730: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80015734: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80015738: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8001573C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80015740: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80015744: jr          $ra
    // 0x80015748: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    return;
    // 0x80015748: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
;}
RECOMP_FUNC void func_8001574C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001574C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80015750: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80015754: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x80015758: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8001575C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80015760: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80015764: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80015768: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8001576C: jal         0x800154E8
    // 0x80015770: ori         $a3, $t0, 0x80
    ctx->r7 = ctx->r8 | 0X80;
    func_800154E8(rdram, ctx);
        goto after_0;
    // 0x80015770: ori         $a3, $t0, 0x80
    ctx->r7 = ctx->r8 | 0X80;
    after_0:
    // 0x80015774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80015778: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001577C: jr          $ra
    // 0x80015780: nop

    return;
    // 0x80015780: nop

;}
RECOMP_FUNC void func_80015784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015784: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80015788: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x8001578C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80015790: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80015794: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80015798: jal         0x800154E8
    // 0x8001579C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800154E8(rdram, ctx);
        goto after_0;
    // 0x8001579C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800157A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800157A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800157A8: jr          $ra
    // 0x800157AC: nop

    return;
    // 0x800157AC: nop

;}
RECOMP_FUNC void func_800157B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800157B0: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x800157B4: nop

    // 0x800157B8: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x800157BC: lwc1        $f6, 0x2C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x800157C0: jr          $ra
    // 0x800157C4: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    return;
    // 0x800157C4: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_800157C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800157C8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800157CC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800157D0: swc1        $f12, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f12.u32l;
    // 0x800157D4: jr          $ra
    // 0x800157D8: swc1        $f14, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f14.u32l;
    return;
    // 0x800157D8: swc1        $f14, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_800157DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800157DC: lw          $t6, 0x4C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4C);
    // 0x800157E0: lw          $t7, 0x50($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X50);
    // 0x800157E4: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x800157E8: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x800157EC: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800157F0: sltiu       $at, $a1, 0x5
    ctx->r1 = ctx->r5 < 0X5 ? 1 : 0;
    // 0x800157F4: beq         $at, $zero, L_80015878
    if (ctx->r1 == 0) {
        // 0x800157F8: cvt.s.w     $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80015878;
    }
    // 0x800157F8: cvt.s.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800157FC: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x80015800: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80015804: addu        $at, $at, $t8
    gpr jr_addend_80015810 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80015808: lw          $t8, 0x4FD0($at)
    ctx->r24 = ADD32(ctx->r1, 0X4FD0);
    // 0x8001580C: nop

    // 0x80015810: jr          $t8
    // 0x80015814: nop

    switch (jr_addend_80015810 >> 2) {
        case 0: goto L_80015818; break;
        case 1: goto L_8001583C; break;
        case 2: goto L_80015850; break;
        case 3: goto L_80015860; break;
        case 4: goto L_80015870; break;
        default: switch_error(__func__, 0x80015810, 0x80094FD0);
    }
    // 0x80015814: nop

L_80015818:
    // 0x80015818: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8001581C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80015820: nop

    // 0x80015824: mul.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x80015828: nop

    // 0x8001582C: mul.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x80015830: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
    // 0x80015834: jr          $ra
    // 0x80015838: swc1        $f10, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f10.u32l;
    return;
    // 0x80015838: swc1        $f10, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f10.u32l;
L_8001583C:
    // 0x8001583C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80015840: nop

    // 0x80015844: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x80015848: jr          $ra
    // 0x8001584C: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x8001584C: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
L_80015850:
    // 0x80015850: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80015854: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x80015858: jr          $ra
    // 0x8001585C: swc1        $f16, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f16.u32l;
    return;
    // 0x8001585C: swc1        $f16, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f16.u32l;
L_80015860:
    // 0x80015860: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80015864: swc1        $f2, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f2.u32l;
    // 0x80015868: jr          $ra
    // 0x8001586C: swc1        $f18, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f18.u32l;
    return;
    // 0x8001586C: swc1        $f18, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f18.u32l;
L_80015870:
    // 0x80015870: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x80015874: swc1        $f2, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f2.u32l;
L_80015878:
    // 0x80015878: jr          $ra
    // 0x8001587C: nop

    return;
    // 0x8001587C: nop

;}
RECOMP_FUNC void func_80015880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015880: lw          $t6, 0x4C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4C);
    // 0x80015884: nop

    // 0x80015888: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8001588C: lw          $t7, 0x50($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X50);
    // 0x80015890: jr          $ra
    // 0x80015894: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    return;
    // 0x80015894: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
;}
RECOMP_FUNC void func_80015898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015898: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8001589C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800158A0: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x800158A4: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x800158A8: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x800158AC: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x800158B0: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x800158B4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x800158B8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x800158BC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800158C0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800158C4: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800158C8: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x800158CC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800158D0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800158D4: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x800158D8: sw          $a1, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->r5;
    // 0x800158DC: sw          $a2, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r6;
    // 0x800158E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800158E4: jal         0x8001515C
    // 0x800158E8: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    func_8001515C(rdram, ctx);
        goto after_0;
    // 0x800158E8: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    after_0:
    // 0x800158EC: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x800158F0: jal         0x80006DC0
    // 0x800158F4: nop

    func_80006DC0(rdram, ctx);
        goto after_1;
    // 0x800158F4: nop

    after_1:
    // 0x800158F8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800158FC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80015900: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80015904: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80015908: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8001590C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80015910: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80015914: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80015918: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8001591C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80015920: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80015924: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80015928: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x8001592C: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80015930: jr          $ra
    // 0x80015934: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80015934: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80015938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015938: lw          $t6, 0x44($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X44);
    // 0x8001593C: nop

    // 0x80015940: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80015944: lw          $t7, 0x48($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X48);
    // 0x80015948: jr          $ra
    // 0x8001594C: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    return;
    // 0x8001594C: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
;}
RECOMP_FUNC void func_80015950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015950: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80015954: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80015958: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x8001595C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80015960: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80015964: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80015968: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8001596C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80015970: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80015974: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80015978: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8001597C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80015980: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80015984: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80015988: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8001598C: lw          $t6, 0x44($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X44);
    // 0x80015990: lw          $t8, 0x48($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X48);
    // 0x80015994: lw          $a3, 0x38($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X38);
    // 0x80015998: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x8001599C: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x800159A0: sw          $t7, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r15;
    // 0x800159A4: sw          $t9, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r25;
    // 0x800159A8: lw          $v1, 0x10($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X10);
    // 0x800159AC: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x800159B0: slt         $at, $t7, $v1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800159B4: bne         $at, $zero, L_800159C8
    if (ctx->r1 != 0) {
        // 0x800159B8: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_800159C8;
    }
    // 0x800159B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800159BC: subu        $t6, $t7, $v1
    ctx->r14 = SUB32(ctx->r15, ctx->r3);
    // 0x800159C0: b           L_800159D4
    // 0x800159C4: sw          $t6, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r14;
        goto L_800159D4;
    // 0x800159C4: sw          $t6, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r14;
L_800159C8:
    // 0x800159C8: bgez        $v0, L_800159D4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800159CC: addu        $t7, $v0, $v1
        ctx->r15 = ADD32(ctx->r2, ctx->r3);
            goto L_800159D4;
    }
    // 0x800159CC: addu        $t7, $v0, $v1
    ctx->r15 = ADD32(ctx->r2, ctx->r3);
    // 0x800159D0: sw          $t7, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r15;
L_800159D4:
    // 0x800159D4: lw          $v1, 0x14($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X14);
    // 0x800159D8: lw          $v0, 0x48($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X48);
    // 0x800159DC: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
    // 0x800159E0: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800159E4: bne         $at, $zero, L_800159F8
    if (ctx->r1 != 0) {
        // 0x800159E8: subu        $t9, $v0, $v1
        ctx->r25 = SUB32(ctx->r2, ctx->r3);
            goto L_800159F8;
    }
    // 0x800159E8: subu        $t9, $v0, $v1
    ctx->r25 = SUB32(ctx->r2, ctx->r3);
    // 0x800159EC: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x800159F0: b           L_80015A08
    // 0x800159F4: sw          $t6, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r14;
        goto L_80015A08;
    // 0x800159F4: sw          $t6, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r14;
L_800159F8:
    // 0x800159F8: bgez        $v0, L_80015A08
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800159FC: addu        $t7, $v0, $v1
        ctx->r15 = ADD32(ctx->r2, ctx->r3);
            goto L_80015A08;
    }
    // 0x800159FC: addu        $t7, $v0, $v1
    ctx->r15 = ADD32(ctx->r2, ctx->r3);
    // 0x80015A00: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80015A04: sw          $t8, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r24;
L_80015A08:
    // 0x80015A08: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x80015A0C: jal         0x8001515C
    // 0x80015A10: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    func_8001515C(rdram, ctx);
        goto after_0;
    // 0x80015A10: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    after_0:
    // 0x80015A14: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x80015A18: jal         0x80006DC0
    // 0x80015A1C: nop

    func_80006DC0(rdram, ctx);
        goto after_1;
    // 0x80015A1C: nop

    after_1:
    // 0x80015A20: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80015A24: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80015A28: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80015A2C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80015A30: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80015A34: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80015A38: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80015A3C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80015A40: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80015A44: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80015A48: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80015A4C: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80015A50: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80015A54: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80015A58: jr          $ra
    // 0x80015A5C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80015A5C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80015A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015A60: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80015A64: nop

    // 0x80015A68: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80015A6C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80015A70: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80015A74: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80015A78: cvt.w.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = CVT_W_S(ctx->f12.fl);
    // 0x80015A7C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80015A80: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80015A84: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x80015A88: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80015A8C: sll         $t8, $t6, 16
    ctx->r24 = S32(ctx->r14 << 16);
    // 0x80015A90: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80015A94: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80015A98: sll         $t7, $t6, 18
    ctx->r15 = S32(ctx->r14 << 18);
    // 0x80015A9C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80015AA0: sra         $v1, $t7, 16
    ctx->r3 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80015AA4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80015AA8: sub.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x80015AAC: mul.s       $f0, $f12, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x80015AB0: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x80015AB4: nop

    // 0x80015AB8: bc1f        L_80015AD0
    if (!c1cs) {
        // 0x80015ABC: nop
    
            goto L_80015AD0;
    }
    // 0x80015ABC: nop

    // 0x80015AC0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80015AC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80015AC8: b           L_80015ADC
    // 0x80015ACC: add.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f6.fl;
        goto L_80015ADC;
    // 0x80015ACC: add.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f6.fl;
L_80015AD0:
    // 0x80015AD0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80015AD4: nop

    // 0x80015AD8: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
L_80015ADC:
    // 0x80015ADC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80015AE0: nop

    // 0x80015AE4: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80015AE8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80015AEC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80015AF0: nop

    // 0x80015AF4: cvt.w.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_S(ctx->f2.fl);
    // 0x80015AF8: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x80015AFC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80015B00: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x80015B04: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x80015B08: jr          $ra
    // 0x80015B0C: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    return;
    // 0x80015B0C: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
;}
RECOMP_FUNC void func_80015B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015B10: addiu       $sp, $sp, -0x1D8
    ctx->r29 = ADD32(ctx->r29, -0X1D8);
    // 0x80015B14: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80015B18: addiu       $t6, $zero, 0x19
    ctx->r14 = ADD32(0, 0X19);
    // 0x80015B1C: sw          $t6, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r14;
    // 0x80015B20: sw          $t7, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->r15;
    // 0x80015B24: sw          $t7, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r15;
    // 0x80015B28: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80015B2C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80015B30: lw          $t7, -0x1110($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1110);
    // 0x80015B34: sw          $t6, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r14;
    // 0x80015B38: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80015B3C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80015B40: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80015B44: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80015B48: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80015B4C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80015B50: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80015B54: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80015B58: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80015B5C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80015B60: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80015B64: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80015B68: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80015B6C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80015B70: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80015B74: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80015B78: sw          $a1, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->r5;
    // 0x80015B7C: sw          $t8, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r24;
    // 0x80015B80: sw          $zero, 0x164($sp)
    MEM_W(0X164, ctx->r29) = 0;
    // 0x80015B84: sw          $t9, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r25;
    // 0x80015B88: sw          $zero, 0x160($sp)
    MEM_W(0X160, ctx->r29) = 0;
    // 0x80015B8C: sw          $t6, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r14;
    // 0x80015B90: sw          $t9, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r25;
    // 0x80015B94: sw          $t8, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r24;
    // 0x80015B98: beq         $t7, $zero, L_80016A9C
    if (ctx->r15 == 0) {
        // 0x80015B9C: sw          $zero, 0x134($sp)
        MEM_W(0X134, ctx->r29) = 0;
            goto L_80016A9C;
    }
    // 0x80015B9C: sw          $zero, 0x134($sp)
    MEM_W(0X134, ctx->r29) = 0;
    // 0x80015BA0: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80015BA4: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80015BA8: addiu       $s0, $a0, 0x8
    ctx->r16 = ADD32(ctx->r4, 0X8);
    // 0x80015BAC: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80015BB0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80015BB4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80015BB8: addiu       $t6, $t6, -0x10D8
    ctx->r14 = ADD32(ctx->r14, -0X10D8);
    // 0x80015BBC: lui         $t9, 0xDE00
    ctx->r25 = S32(0XDE00 << 16);
    // 0x80015BC0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80015BC4: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x80015BC8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80015BCC: lw          $a0, 0x555C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X555C);
    // 0x80015BD0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80015BD4: beq         $a0, $zero, L_80016A9C
    if (ctx->r4 == 0) {
        // 0x80015BD8: nop
    
            goto L_80016A9C;
    }
    // 0x80015BD8: nop

    // 0x80015BDC: lw          $ra, 0x190($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X190);
    // 0x80015BE0: sw          $a0, 0x1D0($sp)
    MEM_W(0X1D0, ctx->r29) = ctx->r4;
L_80015BE4:
    // 0x80015BE4: lw          $t7, 0x1D0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1D0);
    // 0x80015BE8: nop

    // 0x80015BEC: lw          $v1, 0xC($t7)
    ctx->r3 = MEM_W(ctx->r15, 0XC);
    // 0x80015BF0: nop

    // 0x80015BF4: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x80015BF8: beq         $t8, $zero, L_80016A80
    if (ctx->r24 == 0) {
        // 0x80015BFC: andi        $t9, $v1, 0x40
        ctx->r25 = ctx->r3 & 0X40;
            goto L_80016A80;
    }
    // 0x80015BFC: andi        $t9, $v1, 0x40
    ctx->r25 = ctx->r3 & 0X40;
    // 0x80015C00: bne         $t9, $zero, L_80016A80
    if (ctx->r25 != 0) {
        // 0x80015C04: andi        $t6, $v1, 0x80
        ctx->r14 = ctx->r3 & 0X80;
            goto L_80016A80;
    }
    // 0x80015C04: andi        $t6, $v1, 0x80
    ctx->r14 = ctx->r3 & 0X80;
    // 0x80015C08: beq         $t6, $zero, L_80015C78
    if (ctx->r14 == 0) {
        // 0x80015C0C: andi        $t8, $v1, 0x100
        ctx->r24 = ctx->r3 & 0X100;
            goto L_80015C78;
    }
    // 0x80015C0C: andi        $t8, $v1, 0x100
    ctx->r24 = ctx->r3 & 0X100;
    // 0x80015C10: lw          $a1, 0x1D0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1D0);
    // 0x80015C14: addiu       $t7, $zero, 0x19
    ctx->r15 = ADD32(0, 0X19);
    // 0x80015C18: lw          $v0, 0x38($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X38);
    // 0x80015C1C: sw          $t7, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r15;
    // 0x80015C20: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80015C24: sw          $t7, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r15;
    // 0x80015C28: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80015C2C: sw          $ra, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r31;
    // 0x80015C30: lw          $a2, 0x1DC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1DC);
    // 0x80015C34: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80015C38: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80015C3C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80015C40: sw          $t6, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r14;
    // 0x80015C44: sw          $t6, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r14;
    // 0x80015C48: sw          $t9, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r25;
    // 0x80015C4C: sw          $t9, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r25;
    // 0x80015C50: sw          $t8, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->r24;
    // 0x80015C54: sw          $t8, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r24;
    // 0x80015C58: sw          $t7, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r15;
    // 0x80015C5C: sw          $zero, 0x160($sp)
    MEM_W(0X160, ctx->r29) = 0;
    // 0x80015C60: sw          $zero, 0x164($sp)
    MEM_W(0X164, ctx->r29) = 0;
    // 0x80015C64: jalr        $v0
    // 0x80015C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80015C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80015C6C: lw          $ra, 0x190($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X190);
    // 0x80015C70: b           L_80016A80
    // 0x80015C74: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_80016A80;
    // 0x80015C74: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80015C78:
    // 0x80015C78: sw          $zero, 0x1D4($sp)
    MEM_W(0X1D4, ctx->r29) = 0;
    // 0x80015C7C: sw          $zero, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = 0;
    // 0x80015C80: beq         $t8, $zero, L_80015CC0
    if (ctx->r24 == 0) {
        // 0x80015C84: sw          $zero, 0x1C0($sp)
        MEM_W(0X1C0, ctx->r29) = 0;
            goto L_80015CC0;
    }
    // 0x80015C84: sw          $zero, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = 0;
    // 0x80015C88: lw          $t9, 0x134($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X134);
    // 0x80015C8C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80015C90: bne         $t9, $zero, L_80015CEC
    if (ctx->r25 != 0) {
        // 0x80015C94: lui         $t6, 0xE200
        ctx->r14 = S32(0XE200 << 16);
            goto L_80015CEC;
    }
    // 0x80015C94: lui         $t6, 0xE200
    ctx->r14 = S32(0XE200 << 16);
    // 0x80015C98: ori         $t6, $t6, 0x1E01
    ctx->r14 = ctx->r14 | 0X1E01;
    // 0x80015C9C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80015CA0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80015CA4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80015CA8: lw          $t9, 0x1D0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1D0);
    // 0x80015CAC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80015CB0: sw          $t8, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r24;
    // 0x80015CB4: lw          $v1, 0xC($t9)
    ctx->r3 = MEM_W(ctx->r25, 0XC);
    // 0x80015CB8: b           L_80015CEC
    // 0x80015CBC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_80015CEC;
    // 0x80015CBC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80015CC0:
    // 0x80015CC0: lw          $t6, 0x134($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X134);
    // 0x80015CC4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80015CC8: beq         $t6, $zero, L_80015CEC
    if (ctx->r14 == 0) {
        // 0x80015CCC: lui         $t7, 0xE200
        ctx->r15 = S32(0XE200 << 16);
            goto L_80015CEC;
    }
    // 0x80015CCC: lui         $t7, 0xE200
    ctx->r15 = S32(0XE200 << 16);
    // 0x80015CD0: ori         $t7, $t7, 0x1E01
    ctx->r15 = ctx->r15 | 0X1E01;
    // 0x80015CD4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80015CD8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80015CDC: lw          $t8, 0x1D0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1D0);
    // 0x80015CE0: sw          $zero, 0x134($sp)
    MEM_W(0X134, ctx->r29) = 0;
    // 0x80015CE4: lw          $v1, 0xC($t8)
    ctx->r3 = MEM_W(ctx->r24, 0XC);
    // 0x80015CE8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80015CEC:
    // 0x80015CEC: lw          $t9, 0x1D0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1D0);
    // 0x80015CF0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80015CF4: lw          $t6, 0x34($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X34);
    // 0x80015CF8: andi        $t8, $v1, 0x100
    ctx->r24 = ctx->r3 & 0X100;
    // 0x80015CFC: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80015D00: bne         $t7, $at, L_80015D70
    if (ctx->r15 != ctx->r1) {
        // 0x80015D04: andi        $t9, $v1, 0x2
        ctx->r25 = ctx->r3 & 0X2;
            goto L_80015D70;
    }
    // 0x80015D04: andi        $t9, $v1, 0x2
    ctx->r25 = ctx->r3 & 0X2;
    // 0x80015D08: andi        $t8, $v1, 0x20
    ctx->r24 = ctx->r3 & 0X20;
    // 0x80015D0C: beq         $t8, $zero, L_80015D38
    if (ctx->r24 == 0) {
        // 0x80015D10: andi        $t7, $v1, 0x2
        ctx->r15 = ctx->r3 & 0X2;
            goto L_80015D38;
    }
    // 0x80015D10: andi        $t7, $v1, 0x2
    ctx->r15 = ctx->r3 & 0X2;
    // 0x80015D14: lw          $t9, 0x170($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X170);
    // 0x80015D18: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x80015D1C: lui         $s1, 0xC08
    ctx->r17 = S32(0XC08 << 16);
    // 0x80015D20: lui         $s2, 0x302
    ctx->r18 = S32(0X302 << 16);
    // 0x80015D24: and         $t6, $t9, $at
    ctx->r14 = ctx->r25 & ctx->r1;
    // 0x80015D28: ori         $s1, $s1, 0x4000
    ctx->r17 = ctx->r17 | 0X4000;
    // 0x80015D2C: ori         $s2, $s2, 0x4000
    ctx->r18 = ctx->r18 | 0X4000;
    // 0x80015D30: b           L_80015D48
    // 0x80015D34: sw          $t6, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r14;
        goto L_80015D48;
    // 0x80015D34: sw          $t6, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r14;
L_80015D38:
    // 0x80015D38: lui         $s1, 0x40
    ctx->r17 = S32(0X40 << 16);
    // 0x80015D3C: lui         $s2, 0x10
    ctx->r18 = S32(0X10 << 16);
    // 0x80015D40: ori         $s1, $s1, 0x3048
    ctx->r17 = ctx->r17 | 0X3048;
    // 0x80015D44: ori         $s2, $s2, 0x3048
    ctx->r18 = ctx->r18 | 0X3048;
L_80015D48:
    // 0x80015D48: beq         $t7, $zero, L_80015D5C
    if (ctx->r15 == 0) {
        // 0x80015D4C: ori         $t8, $s1, 0x30
        ctx->r24 = ctx->r17 | 0X30;
            goto L_80015D5C;
    }
    // 0x80015D4C: ori         $t8, $s1, 0x30
    ctx->r24 = ctx->r17 | 0X30;
    // 0x80015D50: ori         $t9, $s2, 0x30
    ctx->r25 = ctx->r18 | 0X30;
    // 0x80015D54: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x80015D58: or          $s2, $t9, $zero
    ctx->r18 = ctx->r25 | 0;
L_80015D5C:
    // 0x80015D5C: lw          $t6, 0x170($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X170);
    // 0x80015D60: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x80015D64: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80015D68: b           L_80015DB8
    // 0x80015D6C: sw          $t7, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r15;
        goto L_80015DB8;
    // 0x80015D6C: sw          $t7, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r15;
L_80015D70:
    // 0x80015D70: beq         $t8, $zero, L_80015D8C
    if (ctx->r24 == 0) {
        // 0x80015D74: lui         $s1, 0x440
        ctx->r17 = S32(0X440 << 16);
            goto L_80015D8C;
    }
    // 0x80015D74: lui         $s1, 0x440
    ctx->r17 = S32(0X440 << 16);
    // 0x80015D78: lui         $s1, 0x440
    ctx->r17 = S32(0X440 << 16);
    // 0x80015D7C: lui         $s2, 0x110
    ctx->r18 = S32(0X110 << 16);
    // 0x80015D80: ori         $s1, $s1, 0x7040
    ctx->r17 = ctx->r17 | 0X7040;
    // 0x80015D84: b           L_80015D98
    // 0x80015D88: ori         $s2, $s2, 0x7040
    ctx->r18 = ctx->r18 | 0X7040;
        goto L_80015D98;
    // 0x80015D88: ori         $s2, $s2, 0x7040
    ctx->r18 = ctx->r18 | 0X7040;
L_80015D8C:
    // 0x80015D8C: lui         $s2, 0x110
    ctx->r18 = S32(0X110 << 16);
    // 0x80015D90: ori         $s1, $s1, 0x70C0
    ctx->r17 = ctx->r17 | 0X70C0;
    // 0x80015D94: ori         $s2, $s2, 0x70C0
    ctx->r18 = ctx->r18 | 0X70C0;
L_80015D98:
    // 0x80015D98: lw          $t8, 0x170($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X170);
    // 0x80015D9C: beq         $t9, $zero, L_80015DB0
    if (ctx->r25 == 0) {
        // 0x80015DA0: ori         $t6, $s1, 0x10
        ctx->r14 = ctx->r17 | 0X10;
            goto L_80015DB0;
    }
    // 0x80015DA0: ori         $t6, $s1, 0x10
    ctx->r14 = ctx->r17 | 0X10;
    // 0x80015DA4: ori         $t7, $s2, 0x10
    ctx->r15 = ctx->r18 | 0X10;
    // 0x80015DA8: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x80015DAC: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
L_80015DB0:
    // 0x80015DB0: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x80015DB4: sw          $t9, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r25;
L_80015DB8:
    // 0x80015DB8: andi        $t6, $v1, 0x8
    ctx->r14 = ctx->r3 & 0X8;
    // 0x80015DBC: beq         $t6, $zero, L_80015E80
    if (ctx->r14 == 0) {
        // 0x80015DC0: lw          $v0, 0x1D0($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X1D0);
            goto L_80015E80;
    }
    // 0x80015DC0: lw          $v0, 0x1D0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1D0);
    // 0x80015DC4: lw          $v0, 0x1D0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1D0);
    // 0x80015DC8: lw          $a0, 0x1DC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1DC);
    // 0x80015DCC: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80015DD0: addiu       $a2, $sp, 0x100
    ctx->r6 = ADD32(ctx->r29, 0X100);
    // 0x80015DD4: swc1        $f4, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f4.u32l;
    // 0x80015DD8: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80015DDC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80015DE0: swc1        $f6, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f6.u32l;
    // 0x80015DE4: lwc1        $f8, 0x24($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80015DE8: sw          $ra, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r31;
    // 0x80015DEC: jal         0x8000809C
    // 0x80015DF0: swc1        $f8, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f8.u32l;
    func_8000809C(rdram, ctx);
        goto after_1;
    // 0x80015DF0: swc1        $f8, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x80015DF4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80015DF8: lwc1        $f6, 0x4FE4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4FE4);
    // 0x80015DFC: lwc1        $f4, 0x108($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80015E00: lwc1        $f10, 0x104($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X104);
    // 0x80015E04: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80015E08: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80015E0C: swc1        $f10, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f10.u32l;
    // 0x80015E10: lwc1        $f10, 0x4FE8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4FE8);
    // 0x80015E14: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80015E18: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80015E1C: lw          $ra, 0x190($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X190);
    // 0x80015E20: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x80015E24: lwc1        $f20, 0x100($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X100);
    // 0x80015E28: bc1f        L_80015E40
    if (!c1cs) {
        // 0x80015E2C: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_80015E40;
    }
    // 0x80015E2C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80015E30: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80015E34: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80015E38: b           L_80015E4C
    // 0x80015E3C: add.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f6.fl;
        goto L_80015E4C;
    // 0x80015E3C: add.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f6.fl;
L_80015E40:
    // 0x80015E40: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80015E44: nop

    // 0x80015E48: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
L_80015E4C:
    // 0x80015E4C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80015E50: nop

    // 0x80015E54: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80015E58: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80015E5C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80015E60: nop

    // 0x80015E64: cvt.w.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_S(ctx->f2.fl);
    // 0x80015E68: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80015E6C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80015E70: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x80015E74: b           L_80015E90
    // 0x80015E78: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
        goto L_80015E90;
    // 0x80015E78: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80015E7C: lw          $v0, 0x1D0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1D0);
L_80015E80:
    // 0x80015E80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80015E84: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80015E88: lwc1        $f20, 0x1C($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80015E8C: swc1        $f4, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f4.u32l;
L_80015E90:
    // 0x80015E90: lw          $t7, 0x154($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X154);
    // 0x80015E94: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80015E98: beq         $t7, $zero, L_80015EB8
    if (ctx->r15 == 0) {
        // 0x80015E9C: lui         $t8, 0xFC11
        ctx->r24 = S32(0XFC11 << 16);
            goto L_80015EB8;
    }
    // 0x80015E9C: lui         $t8, 0xFC11
    ctx->r24 = S32(0XFC11 << 16);
    // 0x80015EA0: ori         $t8, $t8, 0xFE23
    ctx->r24 = ctx->r24 | 0XFE23;
    // 0x80015EA4: addiu       $t9, $zero, -0xC07
    ctx->r25 = ADD32(0, -0XC07);
    // 0x80015EA8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80015EAC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80015EB0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80015EB4: sw          $zero, 0x154($sp)
    MEM_W(0X154, ctx->r29) = 0;
L_80015EB8:
    // 0x80015EB8: lw          $t6, 0x160($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X160);
    // 0x80015EBC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80015EC0: beq         $t6, $s1, L_80015EE0
    if (ctx->r14 == ctx->r17) {
        // 0x80015EC4: lui         $t7, 0xE200
        ctx->r15 = S32(0XE200 << 16);
            goto L_80015EE0;
    }
    // 0x80015EC4: lui         $t7, 0xE200
    ctx->r15 = S32(0XE200 << 16);
    // 0x80015EC8: sw          $s1, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r17;
    // 0x80015ECC: ori         $t7, $t7, 0x1C
    ctx->r15 = ctx->r15 | 0X1C;
    // 0x80015ED0: or          $t8, $s1, $s2
    ctx->r24 = ctx->r17 | ctx->r18;
    // 0x80015ED4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80015ED8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80015EDC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80015EE0:
    // 0x80015EE0: lw          $t9, 0x1D0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1D0);
    // 0x80015EE4: lw          $t6, 0x144($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X144);
    // 0x80015EE8: lw          $v1, 0x34($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X34);
    // 0x80015EEC: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x80015EF0: and         $a0, $v1, $at
    ctx->r4 = ctx->r3 & ctx->r1;
    // 0x80015EF4: bne         $t6, $a0, L_80015F0C
    if (ctx->r14 != ctx->r4) {
        // 0x80015EF8: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_80015F0C;
    }
    // 0x80015EF8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80015EFC: lw          $t7, 0x148($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X148);
    // 0x80015F00: nop

    // 0x80015F04: beq         $t7, $zero, L_80015F7C
    if (ctx->r15 == 0) {
        // 0x80015F08: lw          $t9, 0x140($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X140);
            goto L_80015F7C;
    }
    // 0x80015F08: lw          $t9, 0x140($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X140);
L_80015F0C:
    // 0x80015F0C: sw          $zero, 0x148($sp)
    MEM_W(0X148, ctx->r29) = 0;
    // 0x80015F10: sw          $a0, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r4;
    // 0x80015F14: lui         $t8, 0xFA00
    ctx->r24 = S32(0XFA00 << 16);
    // 0x80015F18: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80015F1C: lw          $t9, 0x144($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X144);
    // 0x80015F20: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x80015F24: and         $t6, $t9, $at
    ctx->r14 = ctx->r25 & ctx->r1;
    // 0x80015F28: srl         $t8, $t6, 24
    ctx->r24 = S32(U32(ctx->r14) >> 24);
    // 0x80015F2C: lw          $t6, 0x144($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X144);
    // 0x80015F30: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80015F34: sll         $t9, $t8, 24
    ctx->r25 = S32(ctx->r24 << 24);
    // 0x80015F38: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80015F3C: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80015F40: andi        $t7, $t8, 0xFF
    ctx->r15 = ctx->r24 & 0XFF;
    // 0x80015F44: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x80015F48: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x80015F4C: andi        $t9, $t6, 0xFF00
    ctx->r25 = ctx->r14 & 0XFF00;
    // 0x80015F50: sra         $t8, $t9, 8
    ctx->r24 = S32(SIGNED(ctx->r25) >> 8);
    // 0x80015F54: andi        $t6, $t8, 0xFF
    ctx->r14 = ctx->r24 & 0XFF;
    // 0x80015F58: sll         $t9, $t6, 8
    ctx->r25 = S32(ctx->r14 << 8);
    // 0x80015F5C: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x80015F60: ori         $t6, $t8, 0xFF
    ctx->r14 = ctx->r24 | 0XFF;
    // 0x80015F64: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80015F68: lw          $t7, 0x1D0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1D0);
    // 0x80015F6C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80015F70: lw          $v1, 0x34($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X34);
    // 0x80015F74: nop

    // 0x80015F78: lw          $t9, 0x140($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X140);
L_80015F7C:
    // 0x80015F7C: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x80015F80: bne         $t9, $a0, L_80015F98
    if (ctx->r25 != ctx->r4) {
        // 0x80015F84: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_80015F98;
    }
    // 0x80015F84: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80015F88: lw          $t8, 0x13C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X13C);
    // 0x80015F8C: nop

    // 0x80015F90: beq         $t8, $zero, L_80015FBC
    if (ctx->r24 == 0) {
        // 0x80015F94: lw          $t6, 0x1D0($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X1D0);
            goto L_80015FBC;
    }
    // 0x80015F94: lw          $t6, 0x1D0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1D0);
L_80015F98:
    // 0x80015F98: sw          $zero, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = 0;
    // 0x80015F9C: sw          $a0, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r4;
    // 0x80015FA0: lui         $t6, 0xF800
    ctx->r14 = S32(0XF800 << 16);
    // 0x80015FA4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80015FA8: lw          $t9, 0x140($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X140);
    // 0x80015FAC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80015FB0: andi        $t8, $t9, 0xFF
    ctx->r24 = ctx->r25 & 0XFF;
    // 0x80015FB4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80015FB8: lw          $t6, 0x1D0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1D0);
L_80015FBC:
    // 0x80015FBC: lw          $t9, 0x16C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X16C);
    // 0x80015FC0: lw          $v1, 0xC($t6)
    ctx->r3 = MEM_W(ctx->r14, 0XC);
    // 0x80015FC4: nop

    // 0x80015FC8: andi        $t7, $v1, 0x2
    ctx->r15 = ctx->r3 & 0X2;
    // 0x80015FCC: beq         $t7, $zero, L_8001602C
    if (ctx->r15 == 0) {
        // 0x80015FD0: nop
    
            goto L_8001602C;
    }
    // 0x80015FD0: nop

    // 0x80015FD4: lw          $t9, 0x16C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X16C);
    // 0x80015FD8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80015FDC: beq         $t9, $at, L_80016004
    if (ctx->r25 == ctx->r1) {
        // 0x80015FE0: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80016004;
    }
    // 0x80015FE0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80015FE4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80015FE8: sw          $t8, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->r24;
    // 0x80015FEC: lui         $t6, 0xE200
    ctx->r14 = S32(0XE200 << 16);
    // 0x80015FF0: ori         $t6, $t6, 0x1D00
    ctx->r14 = ctx->r14 | 0X1D00;
    // 0x80015FF4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80015FF8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80015FFC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80016000: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80016004:
    // 0x80016004: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80016008: lui         $t9, 0xEE00
    ctx->r25 = S32(0XEE00 << 16);
    // 0x8001600C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80016010: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80016014: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80016018: lw          $t7, 0x1D0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1D0);
    // 0x8001601C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80016020: lw          $v1, 0xC($t7)
    ctx->r3 = MEM_W(ctx->r15, 0XC);
    // 0x80016024: b           L_8001605C
    // 0x80016028: andi        $t7, $v1, 0x10
    ctx->r15 = ctx->r3 & 0X10;
        goto L_8001605C;
    // 0x80016028: andi        $t7, $v1, 0x10
    ctx->r15 = ctx->r3 & 0X10;
L_8001602C:
    // 0x8001602C: beq         $t9, $zero, L_80016058
    if (ctx->r25 == 0) {
        // 0x80016030: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_80016058;
    }
    // 0x80016030: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80016034: sw          $zero, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = 0;
    // 0x80016038: lui         $t8, 0xE200
    ctx->r24 = S32(0XE200 << 16);
    // 0x8001603C: ori         $t8, $t8, 0x1D00
    ctx->r24 = ctx->r24 | 0X1D00;
    // 0x80016040: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80016044: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80016048: lw          $t6, 0x1D0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1D0);
    // 0x8001604C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80016050: lw          $v1, 0xC($t6)
    ctx->r3 = MEM_W(ctx->r14, 0XC);
    // 0x80016054: nop

L_80016058:
    // 0x80016058: andi        $t7, $v1, 0x10
    ctx->r15 = ctx->r3 & 0X10;
L_8001605C:
    // 0x8001605C: beq         $t7, $zero, L_800160A0
    if (ctx->r15 == 0) {
        // 0x80016060: lw          $t9, 0x168($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X168);
            goto L_800160A0;
    }
    // 0x80016060: lw          $t9, 0x168($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X168);
    // 0x80016064: lw          $t9, 0x168($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X168);
    // 0x80016068: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8001606C: beq         $t9, $zero, L_800160D8
    if (ctx->r25 == 0) {
        // 0x80016070: lui         $t8, 0xE300
        ctx->r24 = S32(0XE300 << 16);
            goto L_800160D8;
    }
    // 0x80016070: lui         $t8, 0xE300
    ctx->r24 = S32(0XE300 << 16);
    // 0x80016074: sw          $zero, 0x168($sp)
    MEM_W(0X168, ctx->r29) = 0;
    // 0x80016078: ori         $t8, $t8, 0x1201
    ctx->r24 = ctx->r24 | 0X1201;
    // 0x8001607C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80016080: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80016084: lw          $t6, 0x170($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X170);
    // 0x80016088: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x8001608C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80016090: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80016094: b           L_800160D8
    // 0x80016098: sw          $t7, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r15;
        goto L_800160D8;
    // 0x80016098: sw          $t7, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r15;
    // 0x8001609C: lw          $t9, 0x168($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X168);
L_800160A0:
    // 0x800160A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800160A4: beq         $t9, $at, L_800160D8
    if (ctx->r25 == ctx->r1) {
        // 0x800160A8: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_800160D8;
    }
    // 0x800160A8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800160AC: sw          $t8, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r24;
    // 0x800160B0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800160B4: lui         $t6, 0xE300
    ctx->r14 = S32(0XE300 << 16);
    // 0x800160B8: ori         $t6, $t6, 0x1201
    ctx->r14 = ctx->r14 | 0X1201;
    // 0x800160BC: addiu       $t7, $zero, 0x2000
    ctx->r15 = ADD32(0, 0X2000);
    // 0x800160C0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800160C4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800160C8: lw          $t9, 0x170($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X170);
    // 0x800160CC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800160D0: ori         $t8, $t9, 0x8
    ctx->r24 = ctx->r25 | 0X8;
    // 0x800160D4: sw          $t8, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r24;
L_800160D8:
    // 0x800160D8: lw          $t6, 0x164($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X164);
    // 0x800160DC: lw          $t7, 0x170($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X170);
    // 0x800160E0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800160E4: beq         $t6, $t7, L_80016108
    if (ctx->r14 == ctx->r15) {
        // 0x800160E8: lui         $t9, 0xB00
        ctx->r25 = S32(0XB00 << 16);
            goto L_80016108;
    }
    // 0x800160E8: lui         $t9, 0xB00
    ctx->r25 = S32(0XB00 << 16);
    // 0x800160EC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800160F0: lw          $t8, 0x170($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X170);
    // 0x800160F4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800160F8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800160FC: lw          $t6, 0x170($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X170);
    // 0x80016100: nop

    // 0x80016104: sw          $t6, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r14;
L_80016108:
    // 0x80016108: sw          $ra, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r31;
    // 0x8001610C: jal         0x800046F0
    // 0x80016110: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_800046F0(rdram, ctx);
        goto after_2;
    // 0x80016110: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
    // 0x80016114: lw          $t7, 0x1D0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1D0);
    // 0x80016118: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8001611C: lwc1        $f6, 0x30($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X30);
    // 0x80016120: lwc1        $f11, 0x4FF0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X4FF0);
    // 0x80016124: lwc1        $f10, 0x4FF4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4FF4);
    // 0x80016128: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8001612C: nop

    // 0x80016130: div.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x80016134: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80016138: lwc1        $f7, 0x4FF8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X4FF8);
    // 0x8001613C: lwc1        $f6, 0x4FFC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4FFC);
    // 0x80016140: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80016144: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80016148: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8001614C: nop

    // 0x80016150: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80016154: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80016158: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001615C: nop

    // 0x80016160: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x80016164: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x80016168: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8001616C: andi        $s2, $v1, 0xFFFF
    ctx->r18 = ctx->r3 & 0XFFFF;
    // 0x80016170: jal         0x8007AB30
    // 0x80016174: andi        $a0, $s2, 0xFFFF
    ctx->r4 = ctx->r18 & 0XFFFF;
    coss(rdram, ctx);
        goto after_3;
    // 0x80016174: andi        $a0, $s2, 0xFFFF
    ctx->r4 = ctx->r18 & 0XFFFF;
    after_3:
    // 0x80016178: sll         $s3, $v0, 1
    ctx->r19 = S32(ctx->r2 << 1);
    // 0x8001617C: jal         0x8007AB60
    // 0x80016180: andi        $a0, $s2, 0xFFFF
    ctx->r4 = ctx->r18 & 0XFFFF;
    sins(rdram, ctx);
        goto after_4;
    // 0x80016180: andi        $a0, $s2, 0xFFFF
    ctx->r4 = ctx->r18 & 0XFFFF;
    after_4:
    // 0x80016184: lw          $ra, 0x190($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X190);
    // 0x80016188: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8001618C: ori         $at, $zero, 0xFFFE
    ctx->r1 = 0 | 0XFFFE;
    // 0x80016190: bne         $s3, $at, L_8001619C
    if (ctx->r19 != ctx->r1) {
        // 0x80016194: or          $a2, $v1, $zero
        ctx->r6 = ctx->r3 | 0;
            goto L_8001619C;
    }
    // 0x80016194: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x80016198: lui         $s3, 0x1
    ctx->r19 = S32(0X1 << 16);
L_8001619C:
    // 0x8001619C: ori         $at, $zero, 0xFFFE
    ctx->r1 = 0 | 0XFFFE;
    // 0x800161A0: bne         $v1, $at, L_800161B0
    if (ctx->r3 != ctx->r1) {
        // 0x800161A4: lui         $at, 0xFFFF
        ctx->r1 = S32(0XFFFF << 16);
            goto L_800161B0;
    }
    // 0x800161A4: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x800161A8: lui         $a2, 0x1
    ctx->r6 = S32(0X1 << 16);
    // 0x800161AC: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
L_800161B0:
    // 0x800161B0: ori         $at, $at, 0x2
    ctx->r1 = ctx->r1 | 0X2;
    // 0x800161B4: bne         $s3, $at, L_800161C4
    if (ctx->r19 != ctx->r1) {
        // 0x800161B8: lui         $at, 0xFFFF
        ctx->r1 = S32(0XFFFF << 16);
            goto L_800161C4;
    }
    // 0x800161B8: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x800161BC: lui         $s3, 0xFFFF
    ctx->r19 = S32(0XFFFF << 16);
    // 0x800161C0: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
L_800161C4:
    // 0x800161C4: ori         $at, $at, 0x2
    ctx->r1 = ctx->r1 | 0X2;
    // 0x800161C8: bne         $a2, $at, L_800161D8
    if (ctx->r6 != ctx->r1) {
        // 0x800161CC: lw          $t8, 0x1D0($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X1D0);
            goto L_800161D8;
    }
    // 0x800161CC: lw          $t8, 0x1D0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1D0);
    // 0x800161D0: lui         $a2, 0xFFFF
    ctx->r6 = S32(0XFFFF << 16);
    // 0x800161D4: lw          $t8, 0x1D0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1D0);
L_800161D8:
    // 0x800161D8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800161DC: lwc1        $f6, 0x14($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X14);
    // 0x800161E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800161E4: sw          $ra, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r31;
    // 0x800161E8: jal         0x80014E60
    // 0x800161EC: div.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    func_80014E60(rdram, ctx);
        goto after_5;
    // 0x800161EC: div.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    after_5:
    // 0x800161F0: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x800161F4: lw          $t6, 0x1D0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1D0);
    // 0x800161F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800161FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80016200: lwc1        $f10, 0x18($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X18);
    // 0x80016204: jal         0x80014E60
    // 0x80016208: div.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    func_80014E60(rdram, ctx);
        goto after_6;
    // 0x80016208: div.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    after_6:
    // 0x8001620C: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x80016210: sll         $v1, $s3, 10
    ctx->r3 = S32(ctx->r19 << 10);
    // 0x80016214: div         $zero, $v1, $a0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r4)));
    // 0x80016218: lw          $ra, 0x190($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X190);
    // 0x8001621C: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80016220: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x80016224: negu        $t9, $a2
    ctx->r25 = SUB32(0, ctx->r6);
    // 0x80016228: sll         $t8, $t9, 10
    ctx->r24 = S32(ctx->r25 << 10);
    // 0x8001622C: bne         $a0, $zero, L_80016238
    if (ctx->r4 != 0) {
        // 0x80016230: nop
    
            goto L_80016238;
    }
    // 0x80016230: nop

    // 0x80016234: break       7
    do_break(2147574324);
L_80016238:
    // 0x80016238: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001623C: bne         $a0, $at, L_80016250
    if (ctx->r4 != ctx->r1) {
        // 0x80016240: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80016250;
    }
    // 0x80016240: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80016244: bne         $v1, $at, L_80016250
    if (ctx->r3 != ctx->r1) {
        // 0x80016248: nop
    
            goto L_80016250;
    }
    // 0x80016248: nop

    // 0x8001624C: break       6
    do_break(2147574348);
L_80016250:
    // 0x80016250: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80016254: mflo        $t7
    ctx->r15 = lo;
    // 0x80016258: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x8001625C: sll         $t7, $a2, 10
    ctx->r15 = S32(ctx->r6 << 10);
    // 0x80016260: div         $zero, $t8, $a1
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r5)));
    // 0x80016264: bne         $a1, $zero, L_80016270
    if (ctx->r5 != 0) {
        // 0x80016268: nop
    
            goto L_80016270;
    }
    // 0x80016268: nop

    // 0x8001626C: break       7
    do_break(2147574380);
L_80016270:
    // 0x80016270: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80016274: bne         $a1, $at, L_80016288
    if (ctx->r5 != ctx->r1) {
        // 0x80016278: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80016288;
    }
    // 0x80016278: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001627C: bne         $t8, $at, L_80016288
    if (ctx->r24 != ctx->r1) {
        // 0x80016280: nop
    
            goto L_80016288;
    }
    // 0x80016280: nop

    // 0x80016284: break       6
    do_break(2147574404);
L_80016288:
    // 0x80016288: mflo        $t6
    ctx->r14 = lo;
    // 0x8001628C: sw          $t6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r14;
    // 0x80016290: nop

    // 0x80016294: div         $zero, $t7, $a0
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r4)));
    // 0x80016298: bne         $a0, $zero, L_800162A4
    if (ctx->r4 != 0) {
        // 0x8001629C: nop
    
            goto L_800162A4;
    }
    // 0x8001629C: nop

    // 0x800162A0: break       7
    do_break(2147574432);
L_800162A4:
    // 0x800162A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800162A8: bne         $a0, $at, L_800162BC
    if (ctx->r4 != ctx->r1) {
        // 0x800162AC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800162BC;
    }
    // 0x800162AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800162B0: bne         $t7, $at, L_800162BC
    if (ctx->r15 != ctx->r1) {
        // 0x800162B4: nop
    
            goto L_800162BC;
    }
    // 0x800162B4: nop

    // 0x800162B8: break       6
    do_break(2147574456);
L_800162BC:
    // 0x800162BC: mflo        $t9
    ctx->r25 = lo;
    // 0x800162C0: sw          $t9, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r25;
    // 0x800162C4: nop

    // 0x800162C8: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x800162CC: bne         $a1, $zero, L_800162D8
    if (ctx->r5 != 0) {
        // 0x800162D0: nop
    
            goto L_800162D8;
    }
    // 0x800162D0: nop

    // 0x800162D4: break       7
    do_break(2147574484);
L_800162D8:
    // 0x800162D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800162DC: bne         $a1, $at, L_800162F0
    if (ctx->r5 != ctx->r1) {
        // 0x800162E0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800162F0;
    }
    // 0x800162E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800162E4: bne         $v1, $at, L_800162F0
    if (ctx->r3 != ctx->r1) {
        // 0x800162E8: nop
    
            goto L_800162F0;
    }
    // 0x800162E8: nop

    // 0x800162EC: break       6
    do_break(2147574508);
L_800162F0:
    // 0x800162F0: mflo        $t8
    ctx->r24 = lo;
    // 0x800162F4: sw          $t8, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r24;
    // 0x800162F8: jal         0x80015A60
    // 0x800162FC: nop

    func_80015A60(rdram, ctx);
        goto after_7;
    // 0x800162FC: nop

    after_7:
    // 0x80016300: sh          $v0, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r2;
    // 0x80016304: lwc1        $f12, 0x12C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80016308: jal         0x80015A60
    // 0x8001630C: sw          $s1, 0x1CC($sp)
    MEM_W(0X1CC, ctx->r29) = ctx->r17;
    func_80015A60(rdram, ctx);
        goto after_8;
    // 0x8001630C: sw          $s1, 0x1CC($sp)
    MEM_W(0X1CC, ctx->r29) = ctx->r17;
    after_8:
    // 0x80016310: lw          $a1, 0x1CC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1CC);
    // 0x80016314: lw          $ra, 0x190($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X190);
    // 0x80016318: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x8001631C: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    // 0x80016320: lui         $t6, 0xDC17
    ctx->r14 = S32(0XDC17 << 16);
    // 0x80016324: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80016328: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x8001632C: lw          $t7, 0x1D0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1D0);
    // 0x80016330: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80016334: lw          $s5, 0x38($t7)
    ctx->r21 = MEM_W(ctx->r15, 0X38);
    // 0x80016338: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x8001633C: lw          $a0, 0xC($s5)
    ctx->r4 = MEM_W(ctx->r21, 0XC);
    // 0x80016340: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80016344: sra         $t9, $a0, 3
    ctx->r25 = S32(SIGNED(ctx->r4) >> 3);
    // 0x80016348: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8001634C: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x80016350: lw          $t6, -0x1070($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1070);
    // 0x80016354: addu        $s7, $s7, $t8
    ctx->r23 = ADD32(ctx->r23, ctx->r24);
    // 0x80016358: lw          $s7, -0x105C($s7)
    ctx->r23 = MEM_W(ctx->r23, -0X105C);
    // 0x8001635C: slti        $at, $a0, 0x9
    ctx->r1 = SIGNED(ctx->r4) < 0X9 ? 1 : 0;
    // 0x80016360: sw          $t8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r24;
    // 0x80016364: sw          $a0, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->r4;
    // 0x80016368: beq         $at, $zero, L_800163E4
    if (ctx->r1 == 0) {
        // 0x8001636C: sw          $t6, 0x1B4($sp)
        MEM_W(0X1B4, ctx->r29) = ctx->r14;
            goto L_800163E4;
    }
    // 0x8001636C: sw          $t6, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->r14;
    // 0x80016370: lw          $t7, 0x138($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X138);
    // 0x80016374: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80016378: beq         $t7, $zero, L_80016398
    if (ctx->r15 == 0) {
        // 0x8001637C: lui         $t9, 0xE300
        ctx->r25 = S32(0XE300 << 16);
            goto L_80016398;
    }
    // 0x8001637C: lui         $t9, 0xE300
    ctx->r25 = S32(0XE300 << 16);
    // 0x80016380: ori         $t9, $t9, 0x1001
    ctx->r25 = ctx->r25 | 0X1001;
    // 0x80016384: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x80016388: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8001638C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80016390: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80016394: sw          $zero, 0x138($sp)
    MEM_W(0X138, ctx->r29) = 0;
L_80016398:
    // 0x80016398: sw          $ra, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r31;
    // 0x8001639C: jal         0x800046F0
    // 0x800163A0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_800046F0(rdram, ctx);
        goto after_9;
    // 0x800163A0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_9:
    // 0x800163A4: lw          $t8, 0x1D0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1D0);
    // 0x800163A8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800163AC: lw          $a1, 0x54($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X54);
    // 0x800163B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800163B4: jal         0x80076BF8
    // 0x800163B8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x800163B8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_10:
    // 0x800163BC: lw          $ra, 0x190($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X190);
    // 0x800163C0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x800163C4: lui         $t7, 0x500
    ctx->r15 = S32(0X500 << 16);
    // 0x800163C8: ori         $t7, $t7, 0x17
    ctx->r15 = ctx->r15 | 0X17;
    // 0x800163CC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800163D0: sw          $s1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r17;
    // 0x800163D4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800163D8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800163DC: b           L_80016410
    // 0x800163E0: sw          $t9, 0x1D4($sp)
    MEM_W(0X1D4, ctx->r29) = ctx->r25;
        goto L_80016410;
    // 0x800163E0: sw          $t9, 0x1D4($sp)
    MEM_W(0X1D4, ctx->r29) = ctx->r25;
L_800163E4:
    // 0x800163E4: lw          $t6, 0x138($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X138);
    // 0x800163E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800163EC: beq         $t6, $at, L_80016410
    if (ctx->r14 == ctx->r1) {
        // 0x800163F0: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_80016410;
    }
    // 0x800163F0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800163F4: lui         $t8, 0xE300
    ctx->r24 = S32(0XE300 << 16);
    // 0x800163F8: ori         $t8, $t8, 0x1001
    ctx->r24 = ctx->r24 | 0X1001;
    // 0x800163FC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80016400: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80016404: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80016408: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8001640C: sw          $t7, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r15;
L_80016410:
    // 0x80016410: lw          $t9, 0x1D0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1D0);
    // 0x80016414: nop

    // 0x80016418: lw          $t6, 0x4C($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4C);
    // 0x8001641C: nop

    // 0x80016420: sw          $t6, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r14;
    // 0x80016424: lw          $t8, 0x44($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X44);
    // 0x80016428: nop

    // 0x8001642C: sw          $t8, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r24;
    // 0x80016430: lw          $a3, 0x3C($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X3C);
    // 0x80016434: nop

    // 0x80016438: blez        $a3, L_80016A6C
    if (SIGNED(ctx->r7) <= 0) {
        // 0x8001643C: lw          $a0, 0x1CC($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1CC);
            goto L_80016A6C;
    }
    // 0x8001643C: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    // 0x80016440: lw          $v0, 0x40($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X40);
    // 0x80016444: nop

L_80016448:
    // 0x80016448: lw          $a1, 0x1A4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1A4);
    // 0x8001644C: lw          $t7, 0x1B4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1B4);
    // 0x80016450: lw          $v1, 0x1D0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1D0);
    // 0x80016454: addu        $a0, $a1, $t7
    ctx->r4 = ADD32(ctx->r5, ctx->r15);
    // 0x80016458: sw          $a0, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r4;
    // 0x8001645C: sw          $a1, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->r5;
    // 0x80016460: lw          $t6, 0x1AC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1AC);
    // 0x80016464: lw          $s1, 0x48($v1)
    ctx->r17 = MEM_W(ctx->r3, 0X48);
    // 0x80016468: lw          $s2, 0x50($v1)
    ctx->r18 = MEM_W(ctx->r3, 0X50);
    // 0x8001646C: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80016470: sw          $zero, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = 0;
    // 0x80016474: bne         $at, $zero, L_800164B8
    if (ctx->r1 != 0) {
        // 0x80016478: sw          $zero, 0x198($sp)
        MEM_W(0X198, ctx->r29) = 0;
            goto L_800164B8;
    }
    // 0x80016478: sw          $zero, 0x198($sp)
    MEM_W(0X198, ctx->r29) = 0;
    // 0x8001647C: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x80016480: sw          $t8, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r24;
    // 0x80016484: sw          $t7, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r15;
    // 0x80016488: lw          $v1, 0x10($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X10);
    // 0x8001648C: sw          $a0, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r4;
    // 0x80016490: sltu        $at, $a0, $v1
    ctx->r1 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x80016494: bne         $at, $zero, L_800164F8
    if (ctx->r1 != 0) {
        // 0x80016498: subu        $a0, $a0, $v1
        ctx->r4 = SUB32(ctx->r4, ctx->r3);
            goto L_800164F8;
    }
    // 0x80016498: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x8001649C: lw          $t7, 0x1B4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1B4);
    // 0x800164A0: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x800164A4: subu        $t9, $t7, $a0
    ctx->r25 = SUB32(ctx->r15, ctx->r4);
    // 0x800164A8: sw          $t8, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r24;
    // 0x800164AC: sw          $t9, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r25;
    // 0x800164B0: b           L_800164F8
    // 0x800164B4: sw          $zero, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = 0;
        goto L_800164F8;
    // 0x800164B4: sw          $zero, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = 0;
L_800164B8:
    // 0x800164B8: lw          $t6, 0x1AC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1AC);
    // 0x800164BC: lw          $t8, 0x1A4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1A4);
    // 0x800164C0: beq         $t6, $zero, L_800164F8
    if (ctx->r14 == 0) {
        // 0x800164C4: sw          $t6, 0x194($sp)
        MEM_W(0X194, ctx->r29) = ctx->r14;
            goto L_800164F8;
    }
    // 0x800164C4: sw          $t6, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r14;
    // 0x800164C8: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x800164CC: sw          $t7, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r15;
    // 0x800164D0: sw          $zero, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = 0;
    // 0x800164D4: lw          $v1, 0x10($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X10);
    // 0x800164D8: nop

    // 0x800164DC: sltu        $at, $t7, $v1
    ctx->r1 = ctx->r15 < ctx->r3 ? 1 : 0;
    // 0x800164E0: bne         $at, $zero, L_800164F8
    if (ctx->r1 != 0) {
        // 0x800164E4: subu        $a0, $t7, $v1
        ctx->r4 = SUB32(ctx->r15, ctx->r3);
            goto L_800164F8;
    }
    // 0x800164E4: subu        $a0, $t7, $v1
    ctx->r4 = SUB32(ctx->r15, ctx->r3);
    // 0x800164E8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800164EC: sw          $a0, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->r4;
    // 0x800164F0: sw          $t6, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r14;
    // 0x800164F4: sw          $zero, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = 0;
L_800164F8:
    // 0x800164F8: blez        $v0, L_80016A44
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800164FC: lui         $t6, 0x8009
        ctx->r14 = S32(0X8009 << 16);
            goto L_80016A44;
    }
    // 0x800164FC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80016500: lw          $fp, 0x1D4($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X1D4);
    // 0x80016504: lw          $a0, 0x18C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18C);
    // 0x80016508: sll         $t7, $fp, 2
    ctx->r15 = S32(ctx->r30 << 2);
    // 0x8001650C: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x80016510: subu        $t7, $t7, $fp
    ctx->r15 = SUB32(ctx->r15, ctx->r30);
    // 0x80016514: lw          $v1, 0x184($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X184);
    // 0x80016518: lw          $t9, 0x19C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X19C);
    // 0x8001651C: sll         $fp, $t7, 4
    ctx->r30 = S32(ctx->r15 << 4);
    // 0x80016520: addiu       $t6, $t6, -0x10EC
    ctx->r14 = ADD32(ctx->r14, -0X10EC);
    // 0x80016524: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80016528: andi        $t7, $v0, 0xFFF
    ctx->r15 = ctx->r2 & 0XFFF;
    // 0x8001652C: addu        $s3, $t8, $t6
    ctx->r19 = ADD32(ctx->r24, ctx->r14);
    // 0x80016530: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80016534: sll         $v0, $t7, 12
    ctx->r2 = S32(ctx->r15 << 12);
    // 0x80016538: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8001653C: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x80016540: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80016544: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x80016548: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x8001654C: subu        $t5, $v1, $a0
    ctx->r13 = SUB32(ctx->r3, ctx->r4);
    // 0x80016550: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x80016554: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x80016558: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x8001655C: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x80016560: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
L_80016564:
    // 0x80016564: sw          $ra, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r31;
    // 0x80016568: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8001656C: or          $s6, $s1, $zero
    ctx->r22 = ctx->r17 | 0;
    // 0x80016570: jal         0x800046F0
    // 0x80016574: sw          $t5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r13;
    func_800046F0(rdram, ctx);
        goto after_11;
    // 0x80016574: sw          $t5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r13;
    after_11:
    // 0x80016578: lw          $t8, 0x1D0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1D0);
    // 0x8001657C: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80016580: lw          $t6, 0x54($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X54);
    // 0x80016584: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80016588: addu        $a1, $t6, $fp
    ctx->r5 = ADD32(ctx->r14, ctx->r30);
    // 0x8001658C: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    // 0x80016590: jal         0x80076BF8
    // 0x80016594: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x80016594: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_12:
    // 0x80016598: lw          $t7, 0x1D0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1D0);
    // 0x8001659C: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x800165A0: lw          $t9, 0x3C($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X3C);
    // 0x800165A4: lw          $ra, 0x190($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X190);
    // 0x800165A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800165AC: bne         $t9, $at, L_800165CC
    if (ctx->r25 != ctx->r1) {
        // 0x800165B0: addu        $v1, $s1, $s7
        ctx->r3 = ADD32(ctx->r17, ctx->r23);
            goto L_800165CC;
    }
    // 0x800165B0: addu        $v1, $s1, $s7
    ctx->r3 = ADD32(ctx->r17, ctx->r23);
    // 0x800165B4: lw          $t8, 0x40($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X40);
    // 0x800165B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800165BC: bne         $t8, $at, L_800165D0
    if (ctx->r24 != ctx->r1) {
        // 0x800165C0: slt         $at, $s2, $s7
        ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r23) ? 1 : 0;
            goto L_800165D0;
    }
    // 0x800165C0: slt         $at, $s2, $s7
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x800165C4: b           L_8001663C
    // 0x800165C8: addu        $t4, $s1, $s2
    ctx->r12 = ADD32(ctx->r17, ctx->r18);
        goto L_8001663C;
    // 0x800165C8: addu        $t4, $s1, $s2
    ctx->r12 = ADD32(ctx->r17, ctx->r18);
L_800165CC:
    // 0x800165CC: slt         $at, $s2, $s7
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r23) ? 1 : 0;
L_800165D0:
    // 0x800165D0: bne         $at, $zero, L_8001660C
    if (ctx->r1 != 0) {
        // 0x800165D4: or          $t4, $v1, $zero
        ctx->r12 = ctx->r3 | 0;
            goto L_8001660C;
    }
    // 0x800165D4: or          $t4, $v1, $zero
    ctx->r12 = ctx->r3 | 0;
    // 0x800165D8: lw          $v0, 0x14($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X14);
    // 0x800165DC: subu        $s2, $s2, $s7
    ctx->r18 = SUB32(ctx->r18, ctx->r23);
    // 0x800165E0: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x800165E4: sltu        $at, $v1, $t6
    ctx->r1 = ctx->r3 < ctx->r14 ? 1 : 0;
    // 0x800165E8: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    // 0x800165EC: bne         $at, $zero, L_8001663C
    if (ctx->r1 != 0) {
        // 0x800165F0: or          $ra, $s7, $zero
        ctx->r31 = ctx->r23 | 0;
            goto L_8001663C;
    }
    // 0x800165F0: or          $ra, $s7, $zero
    ctx->r31 = ctx->r23 | 0;
    // 0x800165F4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x800165F8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800165FC: addu        $s2, $s2, $v1
    ctx->r18 = ADD32(ctx->r18, ctx->r3);
    // 0x80016600: subu        $ra, $s7, $v1
    ctx->r31 = SUB32(ctx->r23, ctx->r3);
    // 0x80016604: b           L_8001663C
    // 0x80016608: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_8001663C;
    // 0x80016608: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8001660C:
    // 0x8001660C: beq         $s2, $zero, L_8001663C
    if (ctx->r18 == 0) {
        // 0x80016610: or          $ra, $s2, $zero
        ctx->r31 = ctx->r18 | 0;
            goto L_8001663C;
    }
    // 0x80016610: or          $ra, $s2, $zero
    ctx->r31 = ctx->r18 | 0;
    // 0x80016614: lw          $v0, 0x14($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X14);
    // 0x80016618: addu        $s1, $s1, $s2
    ctx->r17 = ADD32(ctx->r17, ctx->r18);
    // 0x8001661C: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x80016620: sltu        $at, $s1, $t9
    ctx->r1 = ctx->r17 < ctx->r25 ? 1 : 0;
    // 0x80016624: bne         $at, $zero, L_8001663C
    if (ctx->r1 != 0) {
        // 0x80016628: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8001663C;
    }
    // 0x80016628: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8001662C: subu        $v1, $s1, $v0
    ctx->r3 = SUB32(ctx->r17, ctx->r2);
    // 0x80016630: addiu       $s2, $v1, 0x1
    ctx->r18 = ADD32(ctx->r3, 0X1);
    // 0x80016634: subu        $ra, $ra, $s2
    ctx->r31 = SUB32(ctx->r31, ctx->r18);
    // 0x80016638: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8001663C:
    // 0x8001663C: lw          $t7, 0x1D0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1D0);
    // 0x80016640: nop

    // 0x80016644: lwc1        $f6, 0x28($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X28);
    // 0x80016648: sw          $ra, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r31;
    // 0x8001664C: jal         0x80015A60
    // 0x80016650: sub.s       $f12, $f20, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f6.fl;
    func_80015A60(rdram, ctx);
        goto after_13;
    // 0x80016650: sub.s       $f12, $f20, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f6.fl;
    after_13:
    // 0x80016654: sh          $v0, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r2;
    // 0x80016658: lw          $t8, 0x198($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X198);
    // 0x8001665C: lw          $t6, 0x1D0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1D0);
    // 0x80016660: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80016664: lwc1        $f4, 0x2C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80016668: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8001666C: jal         0x80015A60
    // 0x80016670: sub.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f4.fl;
    func_80015A60(rdram, ctx);
        goto after_14;
    // 0x80016670: sub.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f4.fl;
    after_14:
    // 0x80016674: lw          $ra, 0x190($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X190);
    // 0x80016678: sh          $v0, 0x8($s4)
    MEM_H(0X8, ctx->r20) = ctx->r2;
    // 0x8001667C: lw          $t9, 0x1B8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1B8);
    // 0x80016680: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80016684: bne         $t9, $at, L_800167EC
    if (ctx->r25 != ctx->r1) {
        // 0x80016688: addiu       $fp, $fp, 0x30
        ctx->r30 = ADD32(ctx->r30, 0X30);
            goto L_800167EC;
    }
    // 0x80016688: addiu       $fp, $fp, 0x30
    ctx->r30 = ADD32(ctx->r30, 0X30);
    // 0x8001668C: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x80016690: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x80016694: andi        $t8, $t7, 0x7
    ctx->r24 = ctx->r15 & 0X7;
    // 0x80016698: sll         $t6, $t8, 21
    ctx->r14 = S32(ctx->r24 << 21);
    // 0x8001669C: lw          $t8, 0x10($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X10);
    // 0x800166A0: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x800166A4: lui         $a2, 0x8
    ctx->r6 = S32(0X8 << 16);
    // 0x800166A8: or          $t7, $t9, $a2
    ctx->r15 = ctx->r25 | ctx->r6;
    // 0x800166AC: srl         $t6, $t8, 1
    ctx->r14 = S32(U32(ctx->r24) >> 1);
    // 0x800166B0: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x800166B4: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x800166B8: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x800166BC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800166C0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800166C4: lw          $t9, 0x4($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X4);
    // 0x800166C8: sra         $a1, $t5, 1
    ctx->r5 = S32(SIGNED(ctx->r13) >> 1);
    // 0x800166CC: addiu       $a1, $a1, 0x7
    ctx->r5 = ADD32(ctx->r5, 0X7);
    // 0x800166D0: addu        $t7, $s5, $t9
    ctx->r15 = ADD32(ctx->r21, ctx->r25);
    // 0x800166D4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800166D8: sra         $t8, $a1, 3
    ctx->r24 = S32(SIGNED(ctx->r5) >> 3);
    // 0x800166DC: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x800166E0: andi        $t6, $t8, 0x1FF
    ctx->r14 = ctx->r24 & 0X1FF;
    // 0x800166E4: sll         $a1, $t6, 9
    ctx->r5 = S32(ctx->r14 << 9);
    // 0x800166E8: andi        $t8, $t7, 0x7
    ctx->r24 = ctx->r15 & 0X7;
    // 0x800166EC: sll         $t6, $t8, 21
    ctx->r14 = S32(ctx->r24 << 21);
    // 0x800166F0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800166F4: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x800166F8: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x800166FC: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80016700: or          $t7, $t9, $a2
    ctx->r15 = ctx->r25 | ctx->r6;
    // 0x80016704: or          $t8, $t7, $a1
    ctx->r24 = ctx->r15 | ctx->r5;
    // 0x80016708: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8001670C: lui         $t6, 0x700
    ctx->r14 = S32(0X700 << 16);
    // 0x80016710: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x80016714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80016718: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8001671C: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x80016720: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80016724: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80016728: lw          $t1, 0x18C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18C);
    // 0x8001672C: lw          $t2, 0x184($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X184);
    // 0x80016730: sll         $t7, $t1, 1
    ctx->r15 = S32(ctx->r9 << 1);
    // 0x80016734: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x80016738: sll         $t6, $t8, 12
    ctx->r14 = S32(ctx->r24 << 12);
    // 0x8001673C: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x80016740: or          $t1, $t6, $at
    ctx->r9 = ctx->r14 | ctx->r1;
    // 0x80016744: sll         $t7, $t2, 1
    ctx->r15 = S32(ctx->r10 << 1);
    // 0x80016748: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x8001674C: sll         $t6, $t8, 12
    ctx->r14 = S32(ctx->r24 << 12);
    // 0x80016750: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80016754: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80016758: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x8001675C: or          $t2, $t6, $at
    ctx->r10 = ctx->r14 | ctx->r1;
    // 0x80016760: sll         $a2, $s6, 2
    ctx->r6 = S32(ctx->r22 << 2);
    // 0x80016764: sll         $a3, $t4, 2
    ctx->r7 = S32(ctx->r12 << 2);
    // 0x80016768: andi        $t6, $a3, 0xFFF
    ctx->r14 = ctx->r7 & 0XFFF;
    // 0x8001676C: andi        $t7, $a2, 0xFFF
    ctx->r15 = ctx->r6 & 0XFFF;
    // 0x80016770: or          $t8, $t1, $t7
    ctx->r24 = ctx->r9 | ctx->r15;
    // 0x80016774: or          $t9, $t2, $t6
    ctx->r25 = ctx->r10 | ctx->r14;
    // 0x80016778: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8001677C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80016780: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x80016784: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x80016788: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8001678C: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x80016790: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80016794: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80016798: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x8001679C: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x800167A0: andi        $t6, $t8, 0x7
    ctx->r14 = ctx->r24 & 0X7;
    // 0x800167A4: sll         $t9, $t6, 21
    ctx->r25 = S32(ctx->r14 << 21);
    // 0x800167A8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800167AC: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x800167B0: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x800167B4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x800167B8: or          $t8, $t7, $a1
    ctx->r24 = ctx->r15 | ctx->r5;
    // 0x800167BC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800167C0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800167C4: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x800167C8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800167CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800167D0: or          $t9, $t6, $a2
    ctx->r25 = ctx->r14 | ctx->r6;
    // 0x800167D4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x800167D8: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800167DC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800167E0: or          $t8, $t7, $a3
    ctx->r24 = ctx->r15 | ctx->r7;
    // 0x800167E4: b           L_800169D8
    // 0x800167E8: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
        goto L_800169D8;
    // 0x800167E8: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
L_800167EC:
    // 0x800167EC: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x800167F0: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x800167F4: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x800167F8: or          $t6, $t2, $at
    ctx->r14 = ctx->r10 | ctx->r1;
    // 0x800167FC: lw          $t7, 0x1B8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1B8);
    // 0x80016800: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80016804: or          $t9, $t3, $at
    ctx->r25 = ctx->r11 | ctx->r1;
    // 0x80016808: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8001680C: slti        $at, $t7, 0x9
    ctx->r1 = SIGNED(ctx->r15) < 0X9 ? 1 : 0;
    // 0x80016810: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80016814: or          $t3, $t9, $zero
    ctx->r11 = ctx->r25 | 0;
    // 0x80016818: beq         $at, $zero, L_80016828
    if (ctx->r1 == 0) {
        // 0x8001681C: or          $t2, $t6, $zero
        ctx->r10 = ctx->r14 | 0;
            goto L_80016828;
    }
    // 0x8001681C: or          $t2, $t6, $zero
    ctx->r10 = ctx->r14 | 0;
    // 0x80016820: b           L_8001682C
    // 0x80016824: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_8001682C;
    // 0x80016824: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80016828:
    // 0x80016828: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8001682C:
    // 0x8001682C: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x80016830: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x80016834: andi        $t6, $t8, 0x3
    ctx->r14 = ctx->r24 & 0X3;
    // 0x80016838: sll         $t9, $t6, 19
    ctx->r25 = S32(ctx->r14 << 19);
    // 0x8001683C: andi        $t8, $v1, 0x7
    ctx->r24 = ctx->r3 & 0X7;
    // 0x80016840: sll         $t6, $t8, 21
    ctx->r14 = S32(ctx->r24 << 21);
    // 0x80016844: lw          $t8, 0x10($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X10);
    // 0x80016848: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x8001684C: or          $t9, $t7, $t6
    ctx->r25 = ctx->r15 | ctx->r14;
    // 0x80016850: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x80016854: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x80016858: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x8001685C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80016860: lw          $t7, 0x4($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X4);
    // 0x80016864: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x80016868: addu        $t9, $s5, $t7
    ctx->r25 = ADD32(ctx->r21, ctx->r15);
    // 0x8001686C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80016870: lw          $t6, 0x1B8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1B8);
    // 0x80016874: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80016878: slti        $at, $t6, 0x9
    ctx->r1 = SIGNED(ctx->r14) < 0X9 ? 1 : 0;
    // 0x8001687C: beq         $at, $zero, L_8001688C
    if (ctx->r1 == 0) {
        // 0x80016880: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8001688C;
    }
    // 0x80016880: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80016884: b           L_8001688C
    // 0x80016888: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_8001688C;
    // 0x80016888: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_8001688C:
    // 0x8001688C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x80016890: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80016894: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x80016898: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8001689C: lw          $t7, -0x10FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X10FC);
    // 0x800168A0: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x800168A4: multu       $t7, $t5
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800168A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800168AC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800168B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800168B4: sll         $a2, $s6, 2
    ctx->r6 = S32(ctx->r22 << 2);
    // 0x800168B8: sll         $a3, $t4, 2
    ctx->r7 = S32(ctx->r12 << 2);
    // 0x800168BC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800168C0: or          $t1, $s0, $zero
    ctx->r9 = ctx->r16 | 0;
    // 0x800168C4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800168C8: mflo        $t9
    ctx->r25 = lo;
    // 0x800168CC: addiu       $t6, $t9, 0x7
    ctx->r14 = ADD32(ctx->r25, 0X7);
    // 0x800168D0: sra         $t8, $t6, 3
    ctx->r24 = S32(SIGNED(ctx->r14) >> 3);
    // 0x800168D4: andi        $t7, $t8, 0x1FF
    ctx->r15 = ctx->r24 & 0X1FF;
    // 0x800168D8: sll         $t9, $t7, 9
    ctx->r25 = S32(ctx->r15 << 9);
    // 0x800168DC: andi        $t8, $v1, 0x7
    ctx->r24 = ctx->r3 & 0X7;
    // 0x800168E0: sll         $t7, $t8, 21
    ctx->r15 = S32(ctx->r24 << 21);
    // 0x800168E4: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x800168E8: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x800168EC: andi        $t8, $v0, 0x3
    ctx->r24 = ctx->r2 & 0X3;
    // 0x800168F0: sll         $t6, $t8, 19
    ctx->r14 = S32(ctx->r24 << 19);
    // 0x800168F4: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x800168F8: lui         $t8, 0x700
    ctx->r24 = S32(0X700 << 16);
    // 0x800168FC: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x80016900: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x80016904: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x80016908: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8001690C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80016910: andi        $t8, $a3, 0xFFF
    ctx->r24 = ctx->r7 & 0XFFF;
    // 0x80016914: andi        $t6, $a2, 0xFFF
    ctx->r14 = ctx->r6 & 0XFFF;
    // 0x80016918: or          $t7, $t2, $t6
    ctx->r15 = ctx->r10 | ctx->r14;
    // 0x8001691C: or          $t9, $t3, $t8
    ctx->r25 = ctx->r11 | ctx->r24;
    // 0x80016920: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x80016924: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80016928: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8001692C: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x80016930: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x80016934: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x80016938: lw          $t7, 0x1B8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1B8);
    // 0x8001693C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80016940: slti        $at, $t7, 0x9
    ctx->r1 = SIGNED(ctx->r15) < 0X9 ? 1 : 0;
    // 0x80016944: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80016948: beq         $at, $zero, L_80016958
    if (ctx->r1 == 0) {
        // 0x8001694C: or          $a3, $t8, $zero
        ctx->r7 = ctx->r24 | 0;
            goto L_80016958;
    }
    // 0x8001694C: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x80016950: b           L_8001695C
    // 0x80016954: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_8001695C;
    // 0x80016954: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80016958:
    // 0x80016958: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8001695C:
    // 0x8001695C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x80016960: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80016964: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x80016968: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001696C: lw          $t9, -0x110C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X110C);
    // 0x80016970: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x80016974: multu       $t9, $t5
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80016978: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8001697C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80016980: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80016984: mflo        $t6
    ctx->r14 = lo;
    // 0x80016988: addiu       $t7, $t6, 0x7
    ctx->r15 = ADD32(ctx->r14, 0X7);
    // 0x8001698C: sra         $t8, $t7, 3
    ctx->r24 = S32(SIGNED(ctx->r15) >> 3);
    // 0x80016990: andi        $t9, $t8, 0x1FF
    ctx->r25 = ctx->r24 & 0X1FF;
    // 0x80016994: sll         $t6, $t9, 9
    ctx->r14 = S32(ctx->r25 << 9);
    // 0x80016998: andi        $t8, $v1, 0x7
    ctx->r24 = ctx->r3 & 0X7;
    // 0x8001699C: sll         $t9, $t8, 21
    ctx->r25 = S32(ctx->r24 << 21);
    // 0x800169A0: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x800169A4: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x800169A8: andi        $t8, $v0, 0x3
    ctx->r24 = ctx->r2 & 0X3;
    // 0x800169AC: sll         $t7, $t8, 19
    ctx->r15 = S32(ctx->r24 << 19);
    // 0x800169B0: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x800169B4: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x800169B8: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x800169BC: nop

    // 0x800169C0: or          $t6, $t8, $a2
    ctx->r14 = ctx->r24 | ctx->r6;
    // 0x800169C4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800169C8: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800169CC: nop

    // 0x800169D0: or          $t9, $t7, $a3
    ctx->r25 = ctx->r15 | ctx->r7;
    // 0x800169D4: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
L_800169D8:
    // 0x800169D8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800169DC: lui         $t8, 0x200
    ctx->r24 = S32(0X200 << 16);
    // 0x800169E0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800169E4: sw          $s4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r20;
    // 0x800169E8: lw          $t6, 0x1D4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1D4);
    // 0x800169EC: sw          $ra, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r31;
    // 0x800169F0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800169F4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800169F8: sw          $t7, 0x1D4($sp)
    MEM_W(0X1D4, ctx->r29) = ctx->r15;
    // 0x800169FC: sw          $t5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r13;
    // 0x80016A00: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80016A04: jal         0x80075580
    // 0x80016A08: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_15;
    // 0x80016A08: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_15:
    // 0x80016A0C: lw          $ra, 0x190($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X190);
    // 0x80016A10: lw          $t9, 0x198($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X198);
    // 0x80016A14: lw          $t6, 0x1D0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1D0);
    // 0x80016A18: addu        $t8, $t9, $ra
    ctx->r24 = ADD32(ctx->r25, ctx->r31);
    // 0x80016A1C: lw          $v1, 0x1BC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1BC);
    // 0x80016A20: sw          $t8, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->r24;
    // 0x80016A24: lw          $v0, 0x40($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X40);
    // 0x80016A28: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80016A2C: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x80016A30: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80016A34: bne         $at, $zero, L_80016564
    if (ctx->r1 != 0) {
        // 0x80016A38: sw          $v1, 0x1BC($sp)
        MEM_W(0X1BC, ctx->r29) = ctx->r3;
            goto L_80016564;
    }
    // 0x80016A38: sw          $v1, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->r3;
    // 0x80016A3C: lw          $a3, 0x3C($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X3C);
    // 0x80016A40: nop

L_80016A44:
    // 0x80016A44: lw          $v1, 0x1C0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C0);
    // 0x80016A48: lw          $t7, 0x19C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X19C);
    // 0x80016A4C: lw          $t9, 0x194($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X194);
    // 0x80016A50: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80016A54: slt         $at, $v1, $a3
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80016A58: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x80016A5C: sw          $v1, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->r3;
    // 0x80016A60: bne         $at, $zero, L_80016448
    if (ctx->r1 != 0) {
        // 0x80016A64: sw          $t8, 0x19C($sp)
        MEM_W(0X19C, ctx->r29) = ctx->r24;
            goto L_80016448;
    }
    // 0x80016A64: sw          $t8, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->r24;
    // 0x80016A68: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
L_80016A6C:
    // 0x80016A6C: sw          $ra, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r31;
    // 0x80016A70: jal         0x80075580
    // 0x80016A74: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_16;
    // 0x80016A74: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_16:
    // 0x80016A78: lw          $ra, 0x190($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X190);
    // 0x80016A7C: nop

L_80016A80:
    // 0x80016A80: lw          $v0, 0x1D0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1D0);
    // 0x80016A84: nop

    // 0x80016A88: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80016A8C: nop

    // 0x80016A90: bne         $v0, $zero, L_80015BE4
    if (ctx->r2 != 0) {
        // 0x80016A94: sw          $v0, 0x1D0($sp)
        MEM_W(0X1D0, ctx->r29) = ctx->r2;
            goto L_80015BE4;
    }
    // 0x80016A94: sw          $v0, 0x1D0($sp)
    MEM_W(0X1D0, ctx->r29) = ctx->r2;
    // 0x80016A98: sw          $ra, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r31;
L_80016A9C:
    // 0x80016A9C: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x80016AA0: addiu       $s4, $s4, -0x5C78
    ctx->r20 = ADD32(ctx->r20, -0X5C78);
    // 0x80016AA4: lw          $s1, 0x0($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X0);
    // 0x80016AA8: lui         $s5, 0x800A
    ctx->r21 = S32(0X800A << 16);
    // 0x80016AAC: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80016AB0: addiu       $s5, $s5, 0x3A4
    ctx->r21 = ADD32(ctx->r21, 0X3A4);
    // 0x80016AB4: beq         $t6, $zero, L_80016B90
    if (ctx->r14 == 0) {
        // 0x80016AB8: addiu       $s6, $zero, -0x1
        ctx->r22 = ADD32(0, -0X1);
            goto L_80016B90;
    }
    // 0x80016AB8: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x80016ABC: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80016AC0: addiu       $s3, $s3, -0x5C80
    ctx->r19 = ADD32(ctx->r19, -0X5C80);
L_80016AC4:
    // 0x80016AC4: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x80016AC8: lw          $t9, 0x10($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X10);
    // 0x80016ACC: lw          $s2, 0x0($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X0);
    // 0x80016AD0: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80016AD4: bne         $at, $zero, L_80016B80
    if (ctx->r1 != 0) {
        // 0x80016AD8: nop
    
            goto L_80016B80;
    }
    // 0x80016AD8: nop

    // 0x80016ADC: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x80016AE0: nop

    // 0x80016AE4: bne         $s6, $a0, L_80016B00
    if (ctx->r22 != ctx->r4) {
        // 0x80016AE8: nop
    
            goto L_80016B00;
    }
    // 0x80016AE8: nop

    // 0x80016AEC: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x80016AF0: jal         0x80006DC0
    // 0x80016AF4: nop

    func_80006DC0(rdram, ctx);
        goto after_17;
    // 0x80016AF4: nop

    after_17:
    // 0x80016AF8: b           L_80016B0C
    // 0x80016AFC: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
        goto L_80016B0C;
    // 0x80016AFC: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
L_80016B00:
    // 0x80016B00: jal         0x80002D08
    // 0x80016B04: nop

    func_80002D08(rdram, ctx);
        goto after_18;
    // 0x80016B04: nop

    after_18:
    // 0x80016B08: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
L_80016B0C:
    // 0x80016B0C: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80016B10: nop

    // 0x80016B14: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x80016B18: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80016B1C: nop

    // 0x80016B20: beq         $v0, $zero, L_80016B34
    if (ctx->r2 == 0) {
        // 0x80016B24: nop
    
            goto L_80016B34;
    }
    // 0x80016B24: nop

    // 0x80016B28: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80016B2C: b           L_80016B40
    // 0x80016B30: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_80016B40;
    // 0x80016B30: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_80016B34:
    // 0x80016B34: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80016B38: nop

    // 0x80016B3C: sw          $t9, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r25;
L_80016B40:
    // 0x80016B40: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x80016B44: nop

    // 0x80016B48: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x80016B4C: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x80016B50: nop

    // 0x80016B54: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80016B58: nop

    // 0x80016B5C: sw          $t7, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r15;
    // 0x80016B60: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x80016B64: nop

    // 0x80016B68: sw          $s1, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r17;
    // 0x80016B6C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80016B70: nop

    // 0x80016B74: beq         $v0, $zero, L_80016B80
    if (ctx->r2 == 0) {
        // 0x80016B78: nop
    
            goto L_80016B80;
    }
    // 0x80016B78: nop

    // 0x80016B7C: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
L_80016B80:
    // 0x80016B80: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x80016B84: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x80016B88: bne         $t8, $zero, L_80016AC4
    if (ctx->r24 != 0) {
        // 0x80016B8C: nop
    
            goto L_80016AC4;
    }
    // 0x80016B8C: nop

L_80016B90:
    // 0x80016B90: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80016B94: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80016B98: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80016B9C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80016BA0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80016BA4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80016BA8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80016BAC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80016BB0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80016BB4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80016BB8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80016BBC: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80016BC0: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80016BC4: jr          $ra
    // 0x80016BC8: addiu       $sp, $sp, 0x1D8
    ctx->r29 = ADD32(ctx->r29, 0X1D8);
    return;
    // 0x80016BC8: addiu       $sp, $sp, 0x1D8
    ctx->r29 = ADD32(ctx->r29, 0X1D8);
;}
RECOMP_FUNC void func_80016BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016BCC: jr          $ra
    // 0x80016BD0: nop

    return;
    // 0x80016BD0: nop

;}
RECOMP_FUNC void func_80016BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016BE0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80016BE4: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x80016BE8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80016BEC: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x80016BF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80016BF4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80016BF8: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80016BFC: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x80016C00: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x80016C04: addiu       $a1, $a1, -0xDE8
    ctx->r5 = ADD32(ctx->r5, -0XDE8);
    // 0x80016C08: jal         0x80073EF0
    // 0x80016C0C: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    func_80073EF0(rdram, ctx);
        goto after_0;
    // 0x80016C0C: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    after_0:
    // 0x80016C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80016C14: jal         0x8000C540
    // 0x80016C18: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8000C540(rdram, ctx);
        goto after_1;
    // 0x80016C18: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x80016C1C: jal         0x8000C734
    // 0x80016C20: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    func_8000C734(rdram, ctx);
        goto after_2;
    // 0x80016C20: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    after_2:
    // 0x80016C24: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80016C28: sw          $v0, -0x5C70($at)
    MEM_W(-0X5C70, ctx->r1) = ctx->r2;
    // 0x80016C2C: jal         0x8000C734
    // 0x80016C30: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    func_8000C734(rdram, ctx);
        goto after_3;
    // 0x80016C30: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    after_3:
    // 0x80016C34: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80016C38: addiu       $a1, $a1, -0x5C6C
    ctx->r5 = ADD32(ctx->r5, -0X5C6C);
    // 0x80016C3C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80016C40: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80016C44: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80016C48:
    // 0x80016C48: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80016C4C: nop

    // 0x80016C50: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x80016C54: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80016C58: slti        $at, $v1, 0x200
    ctx->r1 = SIGNED(ctx->r3) < 0X200 ? 1 : 0;
    // 0x80016C5C: bne         $at, $zero, L_80016C48
    if (ctx->r1 != 0) {
        // 0x80016C60: sh          $v0, 0x0($t7)
        MEM_H(0X0, ctx->r15) = ctx->r2;
            goto L_80016C48;
    }
    // 0x80016C60: sh          $v0, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r2;
    // 0x80016C64: jal         0x8000C734
    // 0x80016C68: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    func_8000C734(rdram, ctx);
        goto after_4;
    // 0x80016C68: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    after_4:
    // 0x80016C6C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80016C70: addiu       $a1, $a1, -0x5C68
    ctx->r5 = ADD32(ctx->r5, -0X5C68);
    // 0x80016C74: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80016C78: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80016C7C:
    // 0x80016C7C: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x80016C80: nop

    // 0x80016C84: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x80016C88: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80016C8C: slti        $at, $v1, 0x200
    ctx->r1 = SIGNED(ctx->r3) < 0X200 ? 1 : 0;
    // 0x80016C90: bne         $at, $zero, L_80016C7C
    if (ctx->r1 != 0) {
        // 0x80016C94: sh          $zero, 0x0($t9)
        MEM_H(0X0, ctx->r25) = 0;
            goto L_80016C7C;
    }
    // 0x80016C94: sh          $zero, 0x0($t9)
    MEM_H(0X0, ctx->r25) = 0;
    // 0x80016C98: jal         0x8000C734
    // 0x80016C9C: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    func_8000C734(rdram, ctx);
        goto after_5;
    // 0x80016C9C: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    after_5:
    // 0x80016CA0: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80016CA4: addiu       $s3, $s3, -0x5C64
    ctx->r19 = ADD32(ctx->r19, -0X5C64);
    // 0x80016CA8: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x80016CAC: jal         0x8000C734
    // 0x80016CB0: ori         $a0, $zero, 0xE800
    ctx->r4 = 0 | 0XE800;
    func_8000C734(rdram, ctx);
        goto after_6;
    // 0x80016CB0: ori         $a0, $zero, 0xE800
    ctx->r4 = 0 | 0XE800;
    after_6:
    // 0x80016CB4: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x80016CB8: addiu       $s2, $s2, -0x5C5C
    ctx->r18 = ADD32(ctx->r18, -0X5C5C);
    // 0x80016CBC: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x80016CC0: jal         0x8000C734
    // 0x80016CC4: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    func_8000C734(rdram, ctx);
        goto after_7;
    // 0x80016CC4: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    after_7:
    // 0x80016CC8: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80016CCC: addiu       $a2, $a2, -0x5C58
    ctx->r6 = ADD32(ctx->r6, -0X5C58);
    // 0x80016CD0: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x80016CD4: jal         0x8000C734
    // 0x80016CD8: addiu       $a0, $zero, 0x3800
    ctx->r4 = ADD32(0, 0X3800);
    func_8000C734(rdram, ctx);
        goto after_8;
    // 0x80016CD8: addiu       $a0, $zero, 0x3800
    ctx->r4 = ADD32(0, 0X3800);
    after_8:
    // 0x80016CDC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80016CE0: sw          $v0, -0x5C50($at)
    MEM_W(-0X5C50, ctx->r1) = ctx->r2;
    // 0x80016CE4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80016CE8: jal         0x8000C734
    // 0x80016CEC: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    func_8000C734(rdram, ctx);
        goto after_9;
    // 0x80016CEC: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    after_9:
    // 0x80016CF0: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80016CF4: addiu       $s1, $s1, -0x5C4C
    ctx->r17 = ADD32(ctx->r17, -0X5C4C);
    // 0x80016CF8: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x80016CFC: jal         0x8000C734
    // 0x80016D00: addiu       $a0, $zero, 0xC80
    ctx->r4 = ADD32(0, 0XC80);
    func_8000C734(rdram, ctx);
        goto after_10;
    // 0x80016D00: addiu       $a0, $zero, 0xC80
    ctx->r4 = ADD32(0, 0XC80);
    after_10:
    // 0x80016D04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80016D08: sw          $v0, -0x5C00($at)
    MEM_W(-0X5C00, ctx->r1) = ctx->r2;
    // 0x80016D0C: jal         0x8000C734
    // 0x80016D10: addiu       $a0, $zero, 0x960
    ctx->r4 = ADD32(0, 0X960);
    func_8000C734(rdram, ctx);
        goto after_11;
    // 0x80016D10: addiu       $a0, $zero, 0x960
    ctx->r4 = ADD32(0, 0X960);
    after_11:
    // 0x80016D14: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80016D18: sw          $v0, -0x5BFC($at)
    MEM_W(-0X5BFC, ctx->r1) = ctx->r2;
    // 0x80016D1C: jal         0x8000C734
    // 0x80016D20: addiu       $a0, $zero, 0x12C0
    ctx->r4 = ADD32(0, 0X12C0);
    func_8000C734(rdram, ctx);
        goto after_12;
    // 0x80016D20: addiu       $a0, $zero, 0x12C0
    ctx->r4 = ADD32(0, 0X12C0);
    after_12:
    // 0x80016D24: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80016D28: sw          $v0, -0x5BF8($at)
    MEM_W(-0X5BF8, ctx->r1) = ctx->r2;
    // 0x80016D2C: jal         0x8000C734
    // 0x80016D30: addiu       $a0, $zero, 0x1F40
    ctx->r4 = ADD32(0, 0X1F40);
    func_8000C734(rdram, ctx);
        goto after_13;
    // 0x80016D30: addiu       $a0, $zero, 0x1F40
    ctx->r4 = ADD32(0, 0X1F40);
    after_13:
    // 0x80016D34: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80016D38: sw          $v0, -0x5BF4($at)
    MEM_W(-0X5BF4, ctx->r1) = ctx->r2;
    // 0x80016D3C: jal         0x8000C734
    // 0x80016D40: addiu       $a0, $zero, 0x7D0
    ctx->r4 = ADD32(0, 0X7D0);
    func_8000C734(rdram, ctx);
        goto after_14;
    // 0x80016D40: addiu       $a0, $zero, 0x7D0
    ctx->r4 = ADD32(0, 0X7D0);
    after_14:
    // 0x80016D44: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80016D48: sw          $v0, -0x5BF0($at)
    MEM_W(-0X5BF0, ctx->r1) = ctx->r2;
    // 0x80016D4C: jal         0x8000C734
    // 0x80016D50: addiu       $a0, $zero, 0x7D0
    ctx->r4 = ADD32(0, 0X7D0);
    func_8000C734(rdram, ctx);
        goto after_15;
    // 0x80016D50: addiu       $a0, $zero, 0x7D0
    ctx->r4 = ADD32(0, 0X7D0);
    after_15:
    // 0x80016D54: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80016D58: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80016D5C: sw          $v0, -0x5BEC($at)
    MEM_W(-0X5BEC, ctx->r1) = ctx->r2;
    // 0x80016D60: addiu       $a2, $a2, -0x5C58
    ctx->r6 = ADD32(ctx->r6, -0X5C58);
    // 0x80016D64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80016D68: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80016D6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80016D70:
    // 0x80016D70: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x80016D74: nop

    // 0x80016D78: addu        $t1, $t0, $v1
    ctx->r9 = ADD32(ctx->r8, ctx->r3);
    // 0x80016D7C: sh          $a0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r4;
    // 0x80016D80: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x80016D84: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80016D88: addu        $t3, $t2, $a1
    ctx->r11 = ADD32(ctx->r10, ctx->r5);
    // 0x80016D8C: sh          $zero, 0x38($t3)
    MEM_H(0X38, ctx->r11) = 0;
    // 0x80016D90: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x80016D94: nop

    // 0x80016D98: addu        $t5, $t4, $a1
    ctx->r13 = ADD32(ctx->r12, ctx->r5);
    // 0x80016D9C: sh          $a0, 0x36($t5)
    MEM_H(0X36, ctx->r13) = ctx->r4;
    // 0x80016DA0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80016DA4: slti        $at, $a0, 0x100
    ctx->r1 = SIGNED(ctx->r4) < 0X100 ? 1 : 0;
    // 0x80016DA8: bne         $at, $zero, L_80016D70
    if (ctx->r1 != 0) {
        // 0x80016DAC: addiu       $a1, $a1, 0xE8
        ctx->r5 = ADD32(ctx->r5, 0XE8);
            goto L_80016D70;
    }
    // 0x80016DAC: addiu       $a1, $a1, 0xE8
    ctx->r5 = ADD32(ctx->r5, 0XE8);
    // 0x80016DB0: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80016DB4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80016DB8: sw          $v0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r2;
    // 0x80016DBC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80016DC0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80016DC4: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x80016DC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80016DCC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80016DD0: sw          $t7, -0x5C54($at)
    MEM_W(-0X5C54, ctx->r1) = ctx->r15;
    // 0x80016DD4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80016DD8:
    // 0x80016DD8: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x80016DDC: nop

    // 0x80016DE0: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x80016DE4: sh          $a0, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r4;
    // 0x80016DE8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80016DEC: slti        $at, $a0, 0x100
    ctx->r1 = SIGNED(ctx->r4) < 0X100 ? 1 : 0;
    // 0x80016DF0: bne         $at, $zero, L_80016DD8
    if (ctx->r1 != 0) {
        // 0x80016DF4: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_80016DD8;
    }
    // 0x80016DF4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80016DF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80016DFC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80016E00: sw          $zero, -0x5C60($at)
    MEM_W(-0X5C60, ctx->r1) = 0;
    // 0x80016E04: jal         0x8007A23C
    // 0x80016E08: addiu       $a0, $a0, -0x5C40
    ctx->r4 = ADD32(ctx->r4, -0X5C40);
    guMtxIdent(rdram, ctx);
        goto after_16;
    // 0x80016E08: addiu       $a0, $a0, -0x5C40
    ctx->r4 = ADD32(ctx->r4, -0X5C40);
    after_16:
    // 0x80016E0C: jal         0x80010874
    // 0x80016E10: nop

    func_80010874(rdram, ctx);
        goto after_17;
    // 0x80016E10: nop

    after_17:
    // 0x80016E14: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x80016E18: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x80016E1C: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x80016E20: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80016E24: lw          $t6, -0x5BEC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5BEC);
    // 0x80016E28: lw          $t4, -0x5BF0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X5BF0);
    // 0x80016E2C: lw          $t2, -0x5BF4($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X5BF4);
    // 0x80016E30: lw          $t0, -0x5BF8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X5BF8);
    // 0x80016E34: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80016E38: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80016E3C: lw          $a2, -0x5BFC($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X5BFC);
    // 0x80016E40: lw          $a0, -0x5C00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5C00);
    // 0x80016E44: addiu       $t1, $zero, 0x4B0
    ctx->r9 = ADD32(0, 0X4B0);
    // 0x80016E48: addiu       $t3, $zero, 0x7D0
    ctx->r11 = ADD32(0, 0X7D0);
    // 0x80016E4C: addiu       $t5, $zero, 0x1F4
    ctx->r13 = ADD32(0, 0X1F4);
    // 0x80016E50: addiu       $t7, $zero, 0x1F4
    ctx->r15 = ADD32(0, 0X1F4);
    // 0x80016E54: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x80016E58: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x80016E5C: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80016E60: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80016E64: addiu       $a1, $zero, 0x320
    ctx->r5 = ADD32(0, 0X320);
    // 0x80016E68: addiu       $a3, $zero, 0x258
    ctx->r7 = ADD32(0, 0X258);
    // 0x80016E6C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80016E70: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80016E74: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80016E78: jal         0x80013B88
    // 0x80016E7C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80013B88(rdram, ctx);
        goto after_18;
    // 0x80016E7C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_18:
    // 0x80016E80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80016E84: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
L_80016E88:
    // 0x80016E88: sh          $zero, 0x24($s0)
    MEM_H(0X24, ctx->r16) = 0;
    // 0x80016E8C: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x80016E90: nop

    // 0x80016E94: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x80016E98: sw          $s0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r16;
    // 0x80016E9C: sh          $zero, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = 0;
    // 0x80016EA0: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x80016EA4: addiu       $s0, $s0, 0x38
    ctx->r16 = ADD32(ctx->r16, 0X38);
    // 0x80016EA8: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x80016EAC: sw          $s0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r16;
    // 0x80016EB0: sh          $zero, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = 0;
    // 0x80016EB4: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x80016EB8: addiu       $s0, $s0, 0x38
    ctx->r16 = ADD32(ctx->r16, 0X38);
    // 0x80016EBC: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x80016EC0: sw          $s0, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r16;
    // 0x80016EC4: sh          $zero, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = 0;
    // 0x80016EC8: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x80016ECC: addiu       $s0, $s0, 0x38
    ctx->r16 = ADD32(ctx->r16, 0X38);
    // 0x80016ED0: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x80016ED4: sw          $s0, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r16;
    // 0x80016ED8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80016EDC: bne         $v0, $v1, L_80016E88
    if (ctx->r2 != ctx->r3) {
        // 0x80016EE0: addiu       $s0, $s0, 0x38
        ctx->r16 = ADD32(ctx->r16, 0X38);
            goto L_80016E88;
    }
    // 0x80016EE0: addiu       $s0, $s0, 0x38
    ctx->r16 = ADD32(ctx->r16, 0X38);
    // 0x80016EE4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80016EE8: addiu       $v1, $v1, -0x5C50
    ctx->r3 = ADD32(ctx->r3, -0X5C50);
    // 0x80016EEC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80016EF0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80016EF4: sw          $v0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r2;
    // 0x80016EF8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80016EFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80016F00: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x80016F04: nop

    // 0x80016F08: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80016F0C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80016F10: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x80016F14: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x80016F18: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x80016F1C: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x80016F20: sw          $t7, -0x5C48($at)
    MEM_W(-0X5C48, ctx->r1) = ctx->r15;
    // 0x80016F24: jr          $ra
    // 0x80016F28: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80016F28: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80016F2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016F2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80016F30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80016F34: jal         0x800046F0
    // 0x80016F38: sll         $a0, $s2, 1
    ctx->r4 = S32(ctx->r18 << 1);
    func_800046F0(rdram, ctx);
        goto after_0;
    // 0x80016F38: sll         $a0, $s2, 1
    ctx->r4 = S32(ctx->r18 << 1);
    after_0:
    // 0x80016F3C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80016F40: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80016F44: blez        $s2, L_80017054
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80016F48: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80017054;
    }
    // 0x80016F48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80016F4C: andi        $a1, $s2, 0x3
    ctx->r5 = ctx->r18 & 0X3;
    // 0x80016F50: beq         $a1, $zero, L_80016F94
    if (ctx->r5 == 0) {
        // 0x80016F54: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_80016F94;
    }
    // 0x80016F54: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_80016F58:
    // 0x80016F58: lh          $t6, 0x0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X0);
    // 0x80016F5C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80016F60: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
    // 0x80016F64: lh          $t7, 0x2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2);
    // 0x80016F68: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
    // 0x80016F6C: sh          $t7, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r15;
    // 0x80016F70: lh          $t8, -0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, -0X2);
    // 0x80016F74: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80016F78: sh          $t8, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r24;
    // 0x80016F7C: lw          $t9, -0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, -0X4);
    // 0x80016F80: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80016F84: bne         $v0, $a0, L_80016F58
    if (ctx->r2 != ctx->r4) {
        // 0x80016F88: sw          $t9, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r25;
            goto L_80016F58;
    }
    // 0x80016F88: sw          $t9, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r25;
    // 0x80016F8C: beq         $a0, $s2, L_80017054
    if (ctx->r4 == ctx->r18) {
        // 0x80016F90: nop
    
            goto L_80017054;
    }
    // 0x80016F90: nop

L_80016F94:
    // 0x80016F94: lh          $t6, 0x0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X0);
    // 0x80016F98: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80016F9C: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
    // 0x80016FA0: lh          $t7, 0x2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2);
    // 0x80016FA4: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x80016FA8: sh          $t7, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r15;
    // 0x80016FAC: lh          $t8, -0x14($s0)
    ctx->r24 = MEM_H(ctx->r16, -0X14);
    // 0x80016FB0: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x80016FB4: sh          $t8, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r24;
    // 0x80016FB8: lw          $t9, -0x10($s1)
    ctx->r25 = MEM_W(ctx->r17, -0X10);
    // 0x80016FBC: addiu       $v1, $v1, 0x40
    ctx->r3 = ADD32(ctx->r3, 0X40);
    // 0x80016FC0: sw          $t9, -0x34($v1)
    MEM_W(-0X34, ctx->r3) = ctx->r25;
    // 0x80016FC4: lh          $t6, -0x12($s0)
    ctx->r14 = MEM_H(ctx->r16, -0X12);
    // 0x80016FC8: nop

    // 0x80016FCC: sh          $t6, -0x30($v1)
    MEM_H(-0X30, ctx->r3) = ctx->r14;
    // 0x80016FD0: lh          $t7, -0x10($s0)
    ctx->r15 = MEM_H(ctx->r16, -0X10);
    // 0x80016FD4: nop

    // 0x80016FD8: sh          $t7, -0x2E($v1)
    MEM_H(-0X2E, ctx->r3) = ctx->r15;
    // 0x80016FDC: lh          $t8, -0xE($s0)
    ctx->r24 = MEM_H(ctx->r16, -0XE);
    // 0x80016FE0: nop

    // 0x80016FE4: sh          $t8, -0x2C($v1)
    MEM_H(-0X2C, ctx->r3) = ctx->r24;
    // 0x80016FE8: lw          $t9, -0xC($s1)
    ctx->r25 = MEM_W(ctx->r17, -0XC);
    // 0x80016FEC: nop

    // 0x80016FF0: sw          $t9, -0x24($v1)
    MEM_W(-0X24, ctx->r3) = ctx->r25;
    // 0x80016FF4: lh          $t6, -0xC($s0)
    ctx->r14 = MEM_H(ctx->r16, -0XC);
    // 0x80016FF8: nop

    // 0x80016FFC: sh          $t6, -0x20($v1)
    MEM_H(-0X20, ctx->r3) = ctx->r14;
    // 0x80017000: lh          $t7, -0xA($s0)
    ctx->r15 = MEM_H(ctx->r16, -0XA);
    // 0x80017004: nop

    // 0x80017008: sh          $t7, -0x1E($v1)
    MEM_H(-0X1E, ctx->r3) = ctx->r15;
    // 0x8001700C: lh          $t8, -0x8($s0)
    ctx->r24 = MEM_H(ctx->r16, -0X8);
    // 0x80017010: nop

    // 0x80017014: sh          $t8, -0x1C($v1)
    MEM_H(-0X1C, ctx->r3) = ctx->r24;
    // 0x80017018: lw          $t9, -0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, -0X8);
    // 0x8001701C: nop

    // 0x80017020: sw          $t9, -0x14($v1)
    MEM_W(-0X14, ctx->r3) = ctx->r25;
    // 0x80017024: lh          $t6, -0x6($s0)
    ctx->r14 = MEM_H(ctx->r16, -0X6);
    // 0x80017028: nop

    // 0x8001702C: sh          $t6, -0x10($v1)
    MEM_H(-0X10, ctx->r3) = ctx->r14;
    // 0x80017030: lh          $t7, -0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, -0X4);
    // 0x80017034: nop

    // 0x80017038: sh          $t7, -0xE($v1)
    MEM_H(-0XE, ctx->r3) = ctx->r15;
    // 0x8001703C: lh          $t8, -0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, -0X2);
    // 0x80017040: nop

    // 0x80017044: sh          $t8, -0xC($v1)
    MEM_H(-0XC, ctx->r3) = ctx->r24;
    // 0x80017048: lw          $t9, -0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, -0X4);
    // 0x8001704C: bne         $a0, $s2, L_80016F94
    if (ctx->r4 != ctx->r18) {
        // 0x80017050: sw          $t9, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r25;
            goto L_80016F94;
    }
    // 0x80017050: sw          $t9, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r25;
L_80017054:
    // 0x80017054: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80017058: jal         0x80075580
    // 0x8001705C: sll         $a1, $s2, 4
    ctx->r5 = S32(ctx->r18 << 4);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x8001705C: sll         $a1, $s2, 4
    ctx->r5 = S32(ctx->r18 << 4);
    after_1:
    // 0x80017060: andi        $t6, $s2, 0xFF
    ctx->r14 = ctx->r18 & 0XFF;
    // 0x80017064: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x80017068: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x8001706C: addu        $t9, $s5, $s2
    ctx->r25 = ADD32(ctx->r21, ctx->r18);
    // 0x80017070: andi        $t6, $t9, 0x7F
    ctx->r14 = ctx->r25 & 0X7F;
    // 0x80017074: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80017078: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8001707C: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
    // 0x80017080: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x80017084: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80017088: sw          $s4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r20;
    // 0x8001708C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80017090: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x80017094: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x80017098: jr          $ra
    // 0x8001709C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8001709C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800170A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800170A0: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x800170A4: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x800170A8: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x800170AC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x800170B0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800170B4: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x800170B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800170BC: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x800170C0: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x800170C4: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x800170C8: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x800170CC: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x800170D0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x800170D4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x800170D8: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800170DC: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x800170E0: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800170E4: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800170E8: addiu       $a1, $a1, -0xE28
    ctx->r5 = ADD32(ctx->r5, -0XE28);
    // 0x800170EC: jal         0x8000E4A8
    // 0x800170F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8000E4A8(rdram, ctx);
        goto after_0;
    // 0x800170F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x800170F4: lw          $a1, 0xBC($s4)
    ctx->r5 = MEM_W(ctx->r20, 0XBC);
    // 0x800170F8: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x800170FC: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x80017100: lw          $t9, 0xA4($s4)
    ctx->r25 = MEM_W(ctx->r20, 0XA4);
    // 0x80017104: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80017108: jalr        $t9
    // 0x8001710C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8001710C: nop

    after_1:
    // 0x80017110: lw          $t9, 0xA8($s4)
    ctx->r25 = MEM_W(ctx->r20, 0XA8);
    // 0x80017114: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x80017118: jalr        $t9
    // 0x8001711C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8001711C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_2:
    // 0x80017120: lw          $a1, 0xC0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0XC0);
    // 0x80017124: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80017128: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x8001712C: lw          $t9, 0xAC($s4)
    ctx->r25 = MEM_W(ctx->r20, 0XAC);
    // 0x80017130: nop

    // 0x80017134: jalr        $t9
    // 0x80017138: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80017138: nop

    after_3:
    // 0x8001713C: lw          $t9, 0xB0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0XB0);
    // 0x80017140: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x80017144: jalr        $t9
    // 0x80017148: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x80017148: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_4:
    // 0x8001714C: lw          $s1, 0xC4($s4)
    ctx->r17 = MEM_W(ctx->r20, 0XC4);
    // 0x80017150: lw          $t9, 0xB4($s4)
    ctx->r25 = MEM_W(ctx->r20, 0XB4);
    // 0x80017154: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80017158: jalr        $t9
    // 0x8001715C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x8001715C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x80017160: lw          $t9, 0xB8($s4)
    ctx->r25 = MEM_W(ctx->r20, 0XB8);
    // 0x80017164: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80017168: jalr        $t9
    // 0x8001716C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x8001716C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x80017170: lw          $s6, 0xC8($s4)
    ctx->r22 = MEM_W(ctx->r20, 0XC8);
    // 0x80017174: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x80017178: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8001717C: slti        $at, $s6, 0x10
    ctx->r1 = SIGNED(ctx->r22) < 0X10 ? 1 : 0;
    // 0x80017180: beq         $at, $zero, L_80017190
    if (ctx->r1 == 0) {
        // 0x80017184: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80017190;
    }
    // 0x80017184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80017188: b           L_80017198
    // 0x8001718C: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
        goto L_80017198;
    // 0x8001718C: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
L_80017190:
    // 0x80017190: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x80017194: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
L_80017198:
    // 0x80017198: lw          $t7, 0xCC($s4)
    ctx->r15 = MEM_W(ctx->r20, 0XCC);
    // 0x8001719C: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x800171A0: jal         0x8000E59C
    // 0x800171A4: sw          $t7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r15;
    func_8000E59C(rdram, ctx);
        goto after_7;
    // 0x800171A4: sw          $t7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r15;
    after_7:
    // 0x800171A8: lw          $s0, 0x8C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8C);
    // 0x800171AC: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x800171B0: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x800171B4: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x800171B8: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x800171BC: sw          $s1, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r17;
    // 0x800171C0: jal         0x80016F2C
    // 0x800171C4: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    func_80016F2C(rdram, ctx);
        goto after_8;
    // 0x800171C4: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    after_8:
    // 0x800171C8: sll         $t8, $s6, 2
    ctx->r24 = S32(ctx->r22 << 2);
    // 0x800171CC: lw          $v1, 0x7C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X7C);
    // 0x800171D0: subu        $t8, $t8, $s6
    ctx->r24 = SUB32(ctx->r24, ctx->r22);
    // 0x800171D4: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x800171D8: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x800171DC: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x800171E0: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x800171E4: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x800171E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800171EC: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x800171F0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800171F4: lw          $s1, 0x88($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X88);
    // 0x800171F8: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x800171FC: lw          $s4, 0x98($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X98);
    // 0x80017200: sll         $t9, $s6, 2
    ctx->r25 = S32(ctx->r22 << 2);
    // 0x80017204: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80017208: addiu       $t6, $t8, 0x40
    ctx->r14 = ADD32(ctx->r24, 0X40);
    // 0x8001720C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80017210: sw          $t6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r14;
    // 0x80017214: sw          $t9, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r25;
    // 0x80017218: sw          $t7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r15;
    // 0x8001721C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80017220: div.s       $f22, $f4, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80017224: bne         $at, $zero, L_800174C8
    if (ctx->r1 != 0) {
        // 0x80017228: addu        $s1, $s1, $t9
        ctx->r17 = ADD32(ctx->r17, ctx->r25);
            goto L_800174C8;
    }
    // 0x80017228: addu        $s1, $s1, $t9
    ctx->r17 = ADD32(ctx->r17, ctx->r25);
    // 0x8001722C: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    // 0x80017230: lui         $s7, 0x600
    ctx->r23 = S32(0X600 << 16);
    // 0x80017234: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x80017238: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
L_8001723C:
    // 0x8001723C: sub.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f22.fl;
    // 0x80017240: or          $fp, $s4, $zero
    ctx->r30 = ctx->r20 | 0;
    // 0x80017244: beq         $s4, $zero, L_80017254
    if (ctx->r20 == 0) {
        // 0x80017248: or          $s6, $t3, $zero
        ctx->r22 = ctx->r11 | 0;
            goto L_80017254;
    }
    // 0x80017248: or          $s6, $t3, $zero
    ctx->r22 = ctx->r11 | 0;
    // 0x8001724C: b           L_80017258
    // 0x80017250: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
        goto L_80017258;
    // 0x80017250: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80017254:
    // 0x80017254: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
L_80017258:
    // 0x80017258: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x8001725C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80017260: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    // 0x80017264: jal         0x8000E59C
    // 0x80017268: sw          $t4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r12;
    func_8000E59C(rdram, ctx);
        goto after_9;
    // 0x80017268: sw          $t4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r12;
    after_9:
    // 0x8001726C: lw          $s0, 0x8C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8C);
    // 0x80017270: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x80017274: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80017278: or          $s5, $s4, $zero
    ctx->r21 = ctx->r20 | 0;
    // 0x8001727C: sw          $s1, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r17;
    // 0x80017280: jal         0x80016F2C
    // 0x80017284: sw          $s4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r20;
    func_80016F2C(rdram, ctx);
        goto after_10;
    // 0x80017284: sw          $s4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r20;
    after_10:
    // 0x80017288: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x8001728C: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x80017290: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80017294: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x80017298: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x8001729C: lw          $s1, 0x88($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X88);
    // 0x800172A0: lw          $s4, 0x98($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X98);
    // 0x800172A4: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x800172A8: lw          $t4, 0xA4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA4);
    // 0x800172AC: addiu       $t8, $t7, 0x40
    ctx->r24 = ADD32(ctx->r15, 0X40);
    // 0x800172B0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800172B4: sw          $t8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r24;
    // 0x800172B8: sw          $t9, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r25;
    // 0x800172BC: or          $t1, $s4, $zero
    ctx->r9 = ctx->r20 | 0;
    // 0x800172C0: blez        $t3, L_800174B8
    if (SIGNED(ctx->r11) <= 0) {
        // 0x800172C4: addu        $s1, $s1, $t6
        ctx->r17 = ADD32(ctx->r17, ctx->r14);
            goto L_800174B8;
    }
    // 0x800172C4: addu        $s1, $s1, $t6
    ctx->r17 = ADD32(ctx->r17, ctx->r14);
    // 0x800172C8: andi        $a2, $t3, 0x3
    ctx->r6 = ctx->r11 & 0X3;
    // 0x800172CC: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x800172D0: beq         $a2, $zero, L_80017350
    if (ctx->r6 == 0) {
        // 0x800172D4: addu        $t2, $a2, $t3
        ctx->r10 = ADD32(ctx->r6, ctx->r11);
            goto L_80017350;
    }
    // 0x800172D4: addu        $t2, $a2, $t3
    ctx->r10 = ADD32(ctx->r6, ctx->r11);
    // 0x800172D8: sll         $v0, $fp, 1
    ctx->r2 = S32(ctx->r30 << 1);
    // 0x800172DC: sll         $v1, $t1, 1
    ctx->r3 = S32(ctx->r9 << 1);
    // 0x800172E0: addiu       $a1, $v1, 0x2
    ctx->r5 = ADD32(ctx->r3, 0X2);
    // 0x800172E4: addiu       $a0, $v0, 0x2
    ctx->r4 = ADD32(ctx->r2, 0X2);
L_800172E8:
    // 0x800172E8: andi        $a3, $v1, 0xFF
    ctx->r7 = ctx->r3 & 0XFF;
    // 0x800172EC: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x800172F0: sll         $t7, $t9, 16
    ctx->r15 = S32(ctx->r25 << 16);
    // 0x800172F4: sll         $t8, $a3, 8
    ctx->r24 = S32(ctx->r7 << 8);
    // 0x800172F8: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x800172FC: andi        $t0, $a0, 0xFF
    ctx->r8 = ctx->r4 & 0XFF;
    // 0x80017300: or          $t9, $t6, $t0
    ctx->r25 = ctx->r14 | ctx->r8;
    // 0x80017304: or          $t7, $t9, $s7
    ctx->r15 = ctx->r25 | ctx->r23;
    // 0x80017308: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8001730C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80017310: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80017314: sll         $t9, $t6, 8
    ctx->r25 = S32(ctx->r14 << 8);
    // 0x80017318: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x8001731C: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x80017320: or          $t6, $t7, $t0
    ctx->r14 = ctx->r15 | ctx->r8;
    // 0x80017324: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
    // 0x80017328: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x8001732C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80017330: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80017334: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80017338: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8001733C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80017340: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x80017344: bne         $t2, $s6, L_800172E8
    if (ctx->r10 != ctx->r22) {
        // 0x80017348: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_800172E8;
    }
    // 0x80017348: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x8001734C: beq         $s6, $zero, L_800174B8
    if (ctx->r22 == 0) {
        // 0x80017350: sll         $v0, $fp, 1
        ctx->r2 = S32(ctx->r30 << 1);
            goto L_800174B8;
    }
L_80017350:
    // 0x80017350: sll         $v0, $fp, 1
    ctx->r2 = S32(ctx->r30 << 1);
    // 0x80017354: sll         $v1, $t1, 1
    ctx->r3 = S32(ctx->r9 << 1);
    // 0x80017358: addiu       $a1, $v1, 0x2
    ctx->r5 = ADD32(ctx->r3, 0X2);
    // 0x8001735C: addiu       $a0, $v0, 0x2
    ctx->r4 = ADD32(ctx->r2, 0X2);
L_80017360:
    // 0x80017360: andi        $a3, $v1, 0xFF
    ctx->r7 = ctx->r3 & 0XFF;
    // 0x80017364: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x80017368: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8001736C: sll         $t7, $a3, 8
    ctx->r15 = S32(ctx->r7 << 8);
    // 0x80017370: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x80017374: andi        $t0, $a0, 0xFF
    ctx->r8 = ctx->r4 & 0XFF;
    // 0x80017378: or          $t8, $t6, $t0
    ctx->r24 = ctx->r14 | ctx->r8;
    // 0x8001737C: or          $t9, $t8, $s7
    ctx->r25 = ctx->r24 | ctx->r23;
    // 0x80017380: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80017384: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80017388: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8001738C: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x80017390: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x80017394: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x80017398: or          $t6, $t9, $t0
    ctx->r14 = ctx->r25 | ctx->r8;
    // 0x8001739C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x800173A0: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x800173A4: andi        $a3, $v1, 0xFF
    ctx->r7 = ctx->r3 & 0XFF;
    // 0x800173A8: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x800173AC: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x800173B0: sll         $t9, $a3, 8
    ctx->r25 = S32(ctx->r7 << 8);
    // 0x800173B4: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x800173B8: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x800173BC: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x800173C0: andi        $t0, $a0, 0xFF
    ctx->r8 = ctx->r4 & 0XFF;
    // 0x800173C4: or          $t7, $t6, $t0
    ctx->r15 = ctx->r14 | ctx->r8;
    // 0x800173C8: or          $t8, $t7, $s7
    ctx->r24 = ctx->r15 | ctx->r23;
    // 0x800173CC: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x800173D0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800173D4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x800173D8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x800173DC: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x800173E0: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x800173E4: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x800173E8: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x800173EC: or          $t6, $t8, $t0
    ctx->r14 = ctx->r24 | ctx->r8;
    // 0x800173F0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x800173F4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x800173F8: andi        $a3, $v1, 0xFF
    ctx->r7 = ctx->r3 & 0XFF;
    // 0x800173FC: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x80017400: sll         $t7, $t9, 16
    ctx->r15 = S32(ctx->r25 << 16);
    // 0x80017404: sll         $t8, $a3, 8
    ctx->r24 = S32(ctx->r7 << 8);
    // 0x80017408: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x8001740C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80017410: andi        $t0, $a0, 0xFF
    ctx->r8 = ctx->r4 & 0XFF;
    // 0x80017414: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x80017418: or          $t9, $t6, $t0
    ctx->r25 = ctx->r14 | ctx->r8;
    // 0x8001741C: or          $t7, $t9, $s7
    ctx->r15 = ctx->r25 | ctx->r23;
    // 0x80017420: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80017424: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80017428: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8001742C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80017430: sll         $t9, $t6, 8
    ctx->r25 = S32(ctx->r14 << 8);
    // 0x80017434: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80017438: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x8001743C: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x80017440: or          $t6, $t7, $t0
    ctx->r14 = ctx->r15 | ctx->r8;
    // 0x80017444: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80017448: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8001744C: andi        $a3, $v1, 0xFF
    ctx->r7 = ctx->r3 & 0XFF;
    // 0x80017450: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x80017454: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80017458: sll         $t7, $a3, 8
    ctx->r15 = S32(ctx->r7 << 8);
    // 0x8001745C: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x80017460: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80017464: andi        $t0, $a0, 0xFF
    ctx->r8 = ctx->r4 & 0XFF;
    // 0x80017468: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x8001746C: or          $t8, $t6, $t0
    ctx->r24 = ctx->r14 | ctx->r8;
    // 0x80017470: or          $t9, $t8, $s7
    ctx->r25 = ctx->r24 | ctx->r23;
    // 0x80017474: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80017478: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8001747C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80017480: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80017484: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x80017488: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8001748C: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x80017490: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x80017494: or          $t6, $t9, $t0
    ctx->r14 = ctx->r25 | ctx->r8;
    // 0x80017498: addiu       $s6, $s6, -0x4
    ctx->r22 = ADD32(ctx->r22, -0X4);
    // 0x8001749C: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x800174A0: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x800174A4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800174A8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x800174AC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x800174B0: bne         $s6, $zero, L_80017360
    if (ctx->r22 != 0) {
        // 0x800174B4: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_80017360;
    }
    // 0x800174B4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_800174B8:
    // 0x800174B8: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x800174BC: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x800174C0: bne         $t4, $t7, L_8001723C
    if (ctx->r12 != ctx->r15) {
        // 0x800174C4: lw          $v0, 0x78($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X78);
            goto L_8001723C;
    }
    // 0x800174C4: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
L_800174C8:
    // 0x800174C8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x800174CC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800174D0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800174D4: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800174D8: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800174DC: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x800174E0: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800174E4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x800174E8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x800174EC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x800174F0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x800174F4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x800174F8: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x800174FC: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80017500: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80017504: jr          $ra
    // 0x80017508: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x80017508: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_8001750C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001750C: jr          $ra
    // 0x80017510: nop

    return;
    // 0x80017510: nop

;}
RECOMP_FUNC void func_80017514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017514: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x80017518: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8001751C: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x80017520: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x80017524: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80017528: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8001752C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80017530: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80017534: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80017538: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8001753C: lw          $v1, 0x9C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X9C);
    // 0x80017540: lw          $v0, 0x98($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X98);
    // 0x80017544: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x80017548: beq         $v1, $zero, L_800175E8
    if (ctx->r3 == 0) {
        // 0x8001754C: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_800175E8;
    }
    // 0x8001754C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80017550: andi        $a1, $v1, 0x3
    ctx->r5 = ctx->r3 & 0X3;
    // 0x80017554: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x80017558: beq         $a1, $zero, L_80017588
    if (ctx->r5 == 0) {
        // 0x8001755C: addu        $a0, $a1, $v1
        ctx->r4 = ADD32(ctx->r5, ctx->r3);
            goto L_80017588;
    }
    // 0x8001755C: addu        $a0, $a1, $v1
    ctx->r4 = ADD32(ctx->r5, ctx->r3);
L_80017560:
    // 0x80017560: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x80017564: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80017568: sw          $at, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r1;
    // 0x8001756C: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80017570: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x80017574: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80017578: bne         $a0, $v1, L_80017560
    if (ctx->r4 != ctx->r3) {
        // 0x8001757C: sw          $t7, -0x4($a3)
        MEM_W(-0X4, ctx->r7) = ctx->r15;
            goto L_80017560;
    }
    // 0x8001757C: sw          $t7, -0x4($a3)
    MEM_W(-0X4, ctx->r7) = ctx->r15;
    // 0x80017580: beq         $v1, $zero, L_800175E8
    if (ctx->r3 == 0) {
        // 0x80017584: nop
    
            goto L_800175E8;
    }
    // 0x80017584: nop

L_80017588:
    // 0x80017588: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x8001758C: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x80017590: sw          $at, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r1;
    // 0x80017594: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x80017598: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    // 0x8001759C: sw          $t9, -0x1C($a3)
    MEM_W(-0X1C, ctx->r7) = ctx->r25;
    // 0x800175A0: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x800175A4: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x800175A8: sw          $at, -0x18($a3)
    MEM_W(-0X18, ctx->r7) = ctx->r1;
    // 0x800175AC: lw          $t7, -0x14($v0)
    ctx->r15 = MEM_W(ctx->r2, -0X14);
    // 0x800175B0: nop

    // 0x800175B4: sw          $t7, -0x14($a3)
    MEM_W(-0X14, ctx->r7) = ctx->r15;
    // 0x800175B8: lw          $at, -0x10($v0)
    ctx->r1 = MEM_W(ctx->r2, -0X10);
    // 0x800175BC: nop

    // 0x800175C0: sw          $at, -0x10($a3)
    MEM_W(-0X10, ctx->r7) = ctx->r1;
    // 0x800175C4: lw          $t9, -0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, -0XC);
    // 0x800175C8: nop

    // 0x800175CC: sw          $t9, -0xC($a3)
    MEM_W(-0XC, ctx->r7) = ctx->r25;
    // 0x800175D0: lw          $at, -0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, -0X8);
    // 0x800175D4: nop

    // 0x800175D8: sw          $at, -0x8($a3)
    MEM_W(-0X8, ctx->r7) = ctx->r1;
    // 0x800175DC: lw          $t7, -0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, -0X4);
    // 0x800175E0: bne         $v1, $zero, L_80017588
    if (ctx->r3 != 0) {
        // 0x800175E4: sw          $t7, -0x4($a3)
        MEM_W(-0X4, ctx->r7) = ctx->r15;
            goto L_80017588;
    }
    // 0x800175E4: sw          $t7, -0x4($a3)
    MEM_W(-0X4, ctx->r7) = ctx->r15;
L_800175E8:
    // 0x800175E8: lw          $t0, 0xA0($s4)
    ctx->r8 = MEM_W(ctx->r20, 0XA0);
    // 0x800175EC: addiu       $v0, $sp, 0x4C
    ctx->r2 = ADD32(ctx->r29, 0X4C);
    // 0x800175F0: or          $v1, $s4, $zero
    ctx->r3 = ctx->r20 | 0;
    // 0x800175F4: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
L_800175F8:
    // 0x800175F8: lw          $a0, 0x3C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X3C);
    // 0x800175FC: nop

    // 0x80017600: beq         $a0, $zero, L_80017610
    if (ctx->r4 == 0) {
        // 0x80017604: addiu       $t8, $a0, 0x10
        ctx->r24 = ADD32(ctx->r4, 0X10);
            goto L_80017610;
    }
    // 0x80017604: addiu       $t8, $a0, 0x10
    ctx->r24 = ADD32(ctx->r4, 0X10);
    // 0x80017608: b           L_80017614
    // 0x8001760C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
        goto L_80017614;
    // 0x8001760C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_80017610:
    // 0x80017610: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_80017614:
    // 0x80017614: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80017618: bne         $v0, $a1, L_800175F8
    if (ctx->r2 != ctx->r5) {
        // 0x8001761C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_800175F8;
    }
    // 0x8001761C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80017620: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80017624: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80017628: jal         0x8000D964
    // 0x8001762C: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    func_8000D964(rdram, ctx);
        goto after_0;
    // 0x8001762C: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_0:
    // 0x80017630: lui         $t9, 0xDE00
    ctx->r25 = S32(0XDE00 << 16);
    // 0x80017634: sw          $t9, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r25;
    // 0x80017638: lw          $t6, 0xA0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0XA0);
    // 0x8001763C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80017640: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80017644: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x80017648: sw          $t7, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r15;
    // 0x8001764C: lw          $a0, 0xB4($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XB4);
    // 0x80017650: lw          $a1, 0xA8($s4)
    ctx->r5 = MEM_W(ctx->r20, 0XA8);
    // 0x80017654: lw          $ra, 0xAC($s4)
    ctx->r31 = MEM_W(ctx->r20, 0XAC);
    // 0x80017658: lw          $s3, 0xB0($s4)
    ctx->r19 = MEM_W(ctx->r20, 0XB0);
    // 0x8001765C: blez        $a0, L_80017970
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80017660: or          $t2, $zero, $zero
        ctx->r10 = 0 | 0;
            goto L_80017970;
    }
    // 0x80017660: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x80017664: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x80017668: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x8001766C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80017670: or          $t4, $a1, $zero
    ctx->r12 = ctx->r5 | 0;
    // 0x80017674: lui         $t5, 0x1
    ctx->r13 = S32(0X1 << 16);
L_80017678:
    // 0x80017678: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x8001767C: nop

    // 0x80017680: bne         $v1, $zero, L_80017690
    if (ctx->r3 != 0) {
        // 0x80017684: nop
    
            goto L_80017690;
    }
    // 0x80017684: nop

    // 0x80017688: b           L_80017960
    // 0x8001768C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
        goto L_80017960;
    // 0x8001768C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
L_80017690:
    // 0x80017690: beq         $ra, $zero, L_8001773C
    if (ctx->r31 == 0) {
        // 0x80017694: or          $t1, $t5, $zero
        ctx->r9 = ctx->r13 | 0;
            goto L_8001773C;
    }
    // 0x80017694: or          $t1, $t5, $zero
    ctx->r9 = ctx->r13 | 0;
    // 0x80017698: addu        $t8, $ra, $t2
    ctx->r24 = ADD32(ctx->r31, ctx->r10);
    // 0x8001769C: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x800176A0: nop

    // 0x800176A4: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800176A8: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800176AC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800176B0: mul.d       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f20.d);
    // 0x800176B4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800176B8: nop

    // 0x800176BC: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800176C0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800176C4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800176C8: nop

    // 0x800176CC: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x800176D0: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800176D4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800176D8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800176DC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800176E0: mul.d       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f20.d);
    // 0x800176E4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800176E8: nop

    // 0x800176EC: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800176F0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800176F4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800176F8: nop

    // 0x800176FC: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x80017700: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80017704: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x80017708: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8001770C: mul.d       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f20.d);
    // 0x80017710: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80017714: nop

    // 0x80017718: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8001771C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80017720: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80017724: nop

    // 0x80017728: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x8001772C: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x80017730: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80017734: b           L_80017748
    // 0x80017738: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
        goto L_80017748;
    // 0x80017738: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
L_8001773C:
    // 0x8001773C: or          $t0, $t5, $zero
    ctx->r8 = ctx->r13 | 0;
    // 0x80017740: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x80017744: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
L_80017748:
    // 0x80017748: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8001774C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80017750: mul.d       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f20.d);
    // 0x80017754: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80017758: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8001775C: nop

    // 0x80017760: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80017764: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80017768: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001776C: nop

    // 0x80017770: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x80017774: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80017778: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8001777C: mfc1        $s0, $f10
    ctx->r16 = (int32_t)ctx->f10.u32l;
    // 0x80017780: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80017784: mul.d       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f20.d);
    // 0x80017788: sw          $ra, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r31;
    // 0x8001778C: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x80017790: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x80017794: sw          $t1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r9;
    // 0x80017798: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8001779C: sw          $t0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r8;
    // 0x800177A0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800177A4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800177A8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800177AC: sw          $a3, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r7;
    // 0x800177B0: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x800177B4: sw          $a2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r6;
    // 0x800177B8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800177BC: mfc1        $s1, $f6
    ctx->r17 = (int32_t)ctx->f6.u32l;
    // 0x800177C0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800177C4: mul.d       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f20.d);
    // 0x800177C8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800177CC: nop

    // 0x800177D0: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800177D4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800177D8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800177DC: nop

    // 0x800177E0: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x800177E4: mfc1        $s2, $f18
    ctx->r18 = (int32_t)ctx->f18.u32l;
    // 0x800177E8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800177EC: jal         0x800046F0
    // 0x800177F0: nop

    func_800046F0(rdram, ctx);
        goto after_1;
    // 0x800177F0: nop

    after_1:
    // 0x800177F4: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    // 0x800177F8: lw          $a3, 0xD0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XD0);
    // 0x800177FC: lw          $t0, 0x80($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X80);
    // 0x80017800: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80017804: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80017808: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8001780C: lw          $ra, 0xB8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XB8);
    // 0x80017810: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80017814: lui         $t3, 0xFFFF
    ctx->r11 = S32(0XFFFF << 16);
    // 0x80017818: lui         $t5, 0x1
    ctx->r13 = S32(0X1 << 16);
    // 0x8001781C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80017820: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80017824:
    // 0x80017824: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80017828: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x8001782C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80017830: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x80017834: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x80017838: bne         $a0, $a1, L_80017824
    if (ctx->r4 != ctx->r5) {
        // 0x8001783C: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_80017824;
    }
    // 0x8001783C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80017840: sra         $t8, $t0, 16
    ctx->r24 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80017844: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80017848: and         $t7, $a2, $t3
    ctx->r15 = ctx->r6 & ctx->r11;
    // 0x8001784C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80017850: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
    // 0x80017854: and         $t6, $t1, $t3
    ctx->r14 = ctx->r9 & ctx->r11;
    // 0x80017858: sra         $t8, $s1, 16
    ctx->r24 = S32(SIGNED(ctx->r17) >> 16);
    // 0x8001785C: sw          $t6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r14;
    // 0x80017860: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80017864: and         $t7, $s0, $t3
    ctx->r15 = ctx->r16 & ctx->r11;
    // 0x80017868: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x8001786C: and         $t8, $s2, $t3
    ctx->r24 = ctx->r18 & ctx->r11;
    // 0x80017870: sw          $t6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r14;
    // 0x80017874: ori         $t7, $t8, 0x1
    ctx->r15 = ctx->r24 | 0X1;
    // 0x80017878: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x8001787C: andi        $t8, $t0, 0xFFFF
    ctx->r24 = ctx->r8 & 0XFFFF;
    // 0x80017880: sw          $t6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r14;
    // 0x80017884: sw          $t8, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r24;
    // 0x80017888: sw          $t7, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r15;
    // 0x8001788C: sll         $t9, $t1, 16
    ctx->r25 = S32(ctx->r9 << 16);
    // 0x80017890: andi        $t8, $s1, 0xFFFF
    ctx->r24 = ctx->r17 & 0XFFFF;
    // 0x80017894: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x80017898: sw          $t9, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r25;
    // 0x8001789C: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x800178A0: sll         $t9, $s2, 16
    ctx->r25 = S32(ctx->r18 << 16);
    // 0x800178A4: sw          $t7, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r15;
    // 0x800178A8: sw          $t9, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r25;
    // 0x800178AC: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x800178B0: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x800178B4: lui         $t6, 0xDA38
    ctx->r14 = S32(0XDA38 << 16);
    // 0x800178B8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800178BC: addu        $t8, $v0, $at
    ctx->r24 = ADD32(ctx->r2, ctx->r1);
    // 0x800178C0: ori         $t6, $t6, 0x3
    ctx->r14 = ctx->r14 | 0X3;
    // 0x800178C4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800178C8: lui         $t7, 0xDA38
    ctx->r15 = S32(0XDA38 << 16);
    // 0x800178CC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800178D0: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x800178D4: ori         $t7, $t7, 0x1
    ctx->r15 = ctx->r15 | 0X1;
    // 0x800178D8: lui         $t9, 0x100
    ctx->r25 = S32(0X100 << 16);
    // 0x800178DC: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x800178E0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800178E4: beq         $s3, $zero, L_80017938
    if (ctx->r19 == 0) {
        // 0x800178E8: addiu       $a3, $a3, 0x8
        ctx->r7 = ADD32(ctx->r7, 0X8);
            goto L_80017938;
    }
    // 0x800178E8: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x800178EC: addu        $t6, $s3, $t2
    ctx->r14 = ADD32(ctx->r19, ctx->r10);
    // 0x800178F0: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    // 0x800178F4: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x800178F8: lui         $t8, 0xF800
    ctx->r24 = S32(0XF800 << 16);
    // 0x800178FC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80017900: srl         $t6, $v0, 24
    ctx->r14 = S32(U32(ctx->r2) >> 24);
    // 0x80017904: sll         $t8, $t6, 24
    ctx->r24 = S32(ctx->r14 << 24);
    // 0x80017908: srl         $t9, $v0, 16
    ctx->r25 = S32(U32(ctx->r2) >> 16);
    // 0x8001790C: andi        $t6, $t9, 0xFF
    ctx->r14 = ctx->r25 & 0XFF;
    // 0x80017910: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x80017914: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x80017918: srl         $t8, $v0, 8
    ctx->r24 = S32(U32(ctx->r2) >> 8);
    // 0x8001791C: andi        $t7, $t8, 0xFF
    ctx->r15 = ctx->r24 & 0XFF;
    // 0x80017920: sll         $t6, $t7, 8
    ctx->r14 = S32(ctx->r15 << 8);
    // 0x80017924: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x80017928: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x8001792C: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x80017930: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x80017934: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
L_80017938:
    // 0x80017938: addiu       $t7, $sp, 0xC0
    ctx->r15 = ADD32(ctx->r29, 0XC0);
    // 0x8001793C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80017940: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x80017944: sw          $at, -0x8($a3)
    MEM_W(-0X8, ctx->r7) = ctx->r1;
    // 0x80017948: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x8001794C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80017950: sw          $t9, -0x4($a3)
    MEM_W(-0X4, ctx->r7) = ctx->r25;
    // 0x80017954: lw          $a0, 0xB4($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XB4);
    // 0x80017958: nop

    // 0x8001795C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
L_80017960:
    // 0x80017960: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x80017964: slt         $at, $t2, $v0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80017968: bne         $at, $zero, L_80017678
    if (ctx->r1 != 0) {
        // 0x8001796C: addiu       $t4, $t4, 0x4
        ctx->r12 = ADD32(ctx->r12, 0X4);
            goto L_80017678;
    }
    // 0x8001796C: addiu       $t4, $t4, 0x4
    ctx->r12 = ADD32(ctx->r12, 0X4);
L_80017970:
    // 0x80017970: beq         $s5, $zero, L_80017998
    if (ctx->r21 == 0) {
        // 0x80017974: or          $v0, $a3, $zero
        ctx->r2 = ctx->r7 | 0;
            goto L_80017998;
    }
    // 0x80017974: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x80017978: lw          $t7, 0xA4($s4)
    ctx->r15 = MEM_W(ctx->r20, 0XA4);
    // 0x8001797C: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80017980: lw          $t8, 0x7D08($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7D08);
    // 0x80017984: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80017988: lw          $t6, -0x19AC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X19AC);
    // 0x8001798C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80017990: addu        $t7, $t8, $t9
    ctx->r15 = ADD32(ctx->r24, ctx->r25);
    // 0x80017994: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
L_80017998:
    // 0x80017998: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8001799C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800179A0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800179A4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800179A8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800179AC: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x800179B0: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x800179B4: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x800179B8: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x800179BC: jr          $ra
    // 0x800179C0: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x800179C0: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_800179C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800179C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800179C8: andi        $t6, $s2, 0x400
    ctx->r14 = ctx->r18 & 0X400;
    // 0x800179CC: bne         $t6, $zero, L_800179E4
    if (ctx->r14 != 0) {
        // 0x800179D0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800179E4;
    }
    // 0x800179D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800179D4: jal         0x8007A1B4
    // 0x800179D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x800179D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800179DC: b           L_80017A20
    // 0x800179E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80017A20;
    // 0x800179E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800179E4:
    // 0x800179E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800179E8: jal         0x8000F048
    // 0x800179EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8000F048(rdram, ctx);
        goto after_1;
    // 0x800179EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x800179F0: lwc1        $f4, 0x18($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X18);
    // 0x800179F4: andi        $t7, $s2, 0x80
    ctx->r15 = ctx->r18 & 0X80;
    // 0x800179F8: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x800179FC: lwc1        $f6, 0x1C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x80017A00: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80017A04: swc1        $f6, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f6.u32l;
    // 0x80017A08: lwc1        $f8, 0x20($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X20);
    // 0x80017A0C: beq         $t7, $zero, L_80017A1C
    if (ctx->r15 == 0) {
        // 0x80017A10: swc1        $f8, 0x2C($s0)
        MEM_W(0X2C, ctx->r16) = ctx->f8.u32l;
            goto L_80017A1C;
    }
    // 0x80017A10: swc1        $f8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f8.u32l;
    // 0x80017A14: b           L_80017A1C
    // 0x80017A18: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80017A1C;
    // 0x80017A18: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80017A1C:
    // 0x80017A1C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80017A20:
    // 0x80017A20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80017A24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80017A28: jr          $ra
    // 0x80017A2C: nop

    return;
    // 0x80017A2C: nop

;}
RECOMP_FUNC void func_80017A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017A30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80017A34: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80017A38: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80017A3C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80017A40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80017A44: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80017A48: lhu         $s2, 0x38($a1)
    ctx->r18 = MEM_HU(ctx->r5, 0X38);
    // 0x80017A4C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80017A50: addiu       $s0, $a1, 0x98
    ctx->r16 = ADD32(ctx->r5, 0X98);
    // 0x80017A54: jal         0x800179C4
    // 0x80017A58: addiu       $s1, $a1, 0x8
    ctx->r17 = ADD32(ctx->r5, 0X8);
    func_800179C4(rdram, ctx);
        goto after_0;
    // 0x80017A58: addiu       $s1, $a1, 0x8
    ctx->r17 = ADD32(ctx->r5, 0X8);
    after_0:
    // 0x80017A5C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80017A60: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80017A64: lhu         $t6, 0x38($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X38);
    // 0x80017A68: swc1        $f0, 0xC4($a2)
    MEM_W(0XC4, ctx->r6) = ctx->f0.u32l;
    // 0x80017A6C: andi        $t7, $t6, 0xFF7F
    ctx->r15 = ctx->r14 & 0XFF7F;
    // 0x80017A70: sh          $t7, 0x38($a2)
    MEM_H(0X38, ctx->r6) = ctx->r15;
    // 0x80017A74: swc1        $f0, 0xB4($a2)
    MEM_W(0XB4, ctx->r6) = ctx->f0.u32l;
    // 0x80017A78: swc1        $f0, 0xA4($a2)
    MEM_W(0XA4, ctx->r6) = ctx->f0.u32l;
    // 0x80017A7C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80017A80: jal         0x8000F3AC
    // 0x80017A84: addiu       $a1, $a2, 0x98
    ctx->r5 = ADD32(ctx->r6, 0X98);
    func_8000F3AC(rdram, ctx);
        goto after_1;
    // 0x80017A84: addiu       $a1, $a2, 0x98
    ctx->r5 = ADD32(ctx->r6, 0X98);
    after_1:
    // 0x80017A88: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80017A8C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80017A90: lw          $t9, 0xD8($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XD8);
    // 0x80017A94: lw          $a1, 0xDC($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XDC);
    // 0x80017A98: jalr        $t9
    // 0x80017A9C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80017A9C: nop

    after_2:
    // 0x80017AA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80017AA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80017AA8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80017AAC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80017AB0: jr          $ra
    // 0x80017AB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80017AB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80017AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017AB8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80017ABC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017AC0: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80017AC4: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80017AC8: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x80017ACC: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80017AD0: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x80017AD4: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x80017AD8: lwc1        $f8, 0x14($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X14);
    // 0x80017ADC: nop

    // 0x80017AE0: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x80017AE4: lwc1        $f10, 0x18($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X18);
    // 0x80017AE8: nop

    // 0x80017AEC: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x80017AF0: lw          $v1, 0xAC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XAC);
    // 0x80017AF4: lw          $v0, 0xA8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XA8);
    // 0x80017AF8: beq         $v1, $zero, L_80017B94
    if (ctx->r3 == 0) {
        // 0x80017AFC: andi        $a2, $v1, 0x3
        ctx->r6 = ctx->r3 & 0X3;
            goto L_80017B94;
    }
    // 0x80017AFC: andi        $a2, $v1, 0x3
    ctx->r6 = ctx->r3 & 0X3;
    // 0x80017B00: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x80017B04: beq         $a2, $zero, L_80017B34
    if (ctx->r6 == 0) {
        // 0x80017B08: addu        $a1, $a2, $v1
        ctx->r5 = ADD32(ctx->r6, ctx->r3);
            goto L_80017B34;
    }
    // 0x80017B08: addu        $a1, $a2, $v1
    ctx->r5 = ADD32(ctx->r6, ctx->r3);
L_80017B0C:
    // 0x80017B0C: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x80017B10: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80017B14: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x80017B18: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80017B1C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80017B20: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80017B24: bne         $a1, $v1, L_80017B0C
    if (ctx->r5 != ctx->r3) {
        // 0x80017B28: sw          $t7, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = ctx->r15;
            goto L_80017B0C;
    }
    // 0x80017B28: sw          $t7, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r15;
    // 0x80017B2C: beq         $v1, $zero, L_80017B94
    if (ctx->r3 == 0) {
        // 0x80017B30: nop
    
            goto L_80017B94;
    }
    // 0x80017B30: nop

L_80017B34:
    // 0x80017B34: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x80017B38: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x80017B3C: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x80017B40: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x80017B44: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x80017B48: sw          $t9, -0x1C($a0)
    MEM_W(-0X1C, ctx->r4) = ctx->r25;
    // 0x80017B4C: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x80017B50: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80017B54: sw          $at, -0x18($a0)
    MEM_W(-0X18, ctx->r4) = ctx->r1;
    // 0x80017B58: lw          $t2, -0x14($v0)
    ctx->r10 = MEM_W(ctx->r2, -0X14);
    // 0x80017B5C: nop

    // 0x80017B60: sw          $t2, -0x14($a0)
    MEM_W(-0X14, ctx->r4) = ctx->r10;
    // 0x80017B64: lw          $at, -0x10($v0)
    ctx->r1 = MEM_W(ctx->r2, -0X10);
    // 0x80017B68: nop

    // 0x80017B6C: sw          $at, -0x10($a0)
    MEM_W(-0X10, ctx->r4) = ctx->r1;
    // 0x80017B70: lw          $t4, -0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, -0XC);
    // 0x80017B74: nop

    // 0x80017B78: sw          $t4, -0xC($a0)
    MEM_W(-0XC, ctx->r4) = ctx->r12;
    // 0x80017B7C: lw          $at, -0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, -0X8);
    // 0x80017B80: nop

    // 0x80017B84: sw          $at, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = ctx->r1;
    // 0x80017B88: lw          $t6, -0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, -0X4);
    // 0x80017B8C: bne         $v1, $zero, L_80017B34
    if (ctx->r3 != 0) {
        // 0x80017B90: sw          $t6, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = ctx->r14;
            goto L_80017B34;
    }
    // 0x80017B90: sw          $t6, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r14;
L_80017B94:
    // 0x80017B94: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80017B98: lui         $t7, 0xE300
    ctx->r15 = S32(0XE300 << 16);
    // 0x80017B9C: ori         $t7, $t7, 0xC00
    ctx->r15 = ctx->r15 | 0XC00;
    // 0x80017BA0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80017BA4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80017BA8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80017BAC: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x80017BB0: addiu       $a1, $t0, 0x98
    ctx->r5 = ADD32(ctx->r8, 0X98);
    // 0x80017BB4: jal         0x8000B234
    // 0x80017BB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8000B234(rdram, ctx);
        goto after_0;
    // 0x80017BB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80017BBC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80017BC0: lui         $t3, 0xE300
    ctx->r11 = S32(0XE300 << 16);
    // 0x80017BC4: lw          $v1, 0xB0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0XB0);
    // 0x80017BC8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80017BCC: bltz        $v1, L_80017BF0
    if (SIGNED(ctx->r3) < 0) {
        // 0x80017BD0: ori         $t3, $t3, 0xC00
        ctx->r11 = ctx->r11 | 0XC00;
            goto L_80017BF0;
    }
    // 0x80017BD0: ori         $t3, $t3, 0xC00
    ctx->r11 = ctx->r11 | 0XC00;
    // 0x80017BD4: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x80017BD8: lw          $t9, 0x7D0C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7D0C);
    // 0x80017BDC: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80017BE0: lw          $t8, -0x19AC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X19AC);
    // 0x80017BE4: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x80017BE8: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80017BEC: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
L_80017BF0:
    // 0x80017BF0: lui         $t4, 0x8
    ctx->r12 = S32(0X8 << 16);
    // 0x80017BF4: sw          $t4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r12;
    // 0x80017BF8: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x80017BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80017C00: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x80017C04: jr          $ra
    // 0x80017C08: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80017C08: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80017C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017C0C: jr          $ra
    // 0x80017C10: nop

    return;
    // 0x80017C10: nop

;}
RECOMP_FUNC void func_80017C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017C14: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80017C18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80017C1C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80017C20: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80017C24: lhu         $t6, 0x38($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X38);
    // 0x80017C28: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80017C2C: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x80017C30: beq         $t7, $zero, L_80017CA4
    if (ctx->r15 == 0) {
        // 0x80017C34: or          $s1, $a0, $zero
        ctx->r17 = ctx->r4 | 0;
            goto L_80017CA4;
    }
    // 0x80017C34: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80017C38: jal         0x8007A1B4
    // 0x80017C3C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x80017C3C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_0:
    // 0x80017C40: lwc1        $f4, 0xA4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA4);
    // 0x80017C44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80017C48: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x80017C4C: lwc1        $f6, 0xB4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x80017C50: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x80017C54: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x80017C58: lwc1        $f8, 0xC4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC4);
    // 0x80017C5C: nop

    // 0x80017C60: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x80017C64: lwc1        $f10, 0xC8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC8);
    // 0x80017C68: nop

    // 0x80017C6C: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x80017C70: lwc1        $f16, 0xCC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XCC);
    // 0x80017C74: nop

    // 0x80017C78: swc1        $f16, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f16.u32l;
    // 0x80017C7C: lwc1        $f18, 0xD0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x80017C80: jal         0x8000F3AC
    // 0x80017C84: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    func_8000F3AC(rdram, ctx);
        goto after_1;
    // 0x80017C84: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x80017C88: lui         $t8, 0xDA38
    ctx->r24 = S32(0XDA38 << 16);
    // 0x80017C8C: ori         $t8, $t8, 0x1
    ctx->r24 = ctx->r24 | 0X1;
    // 0x80017C90: lui         $t9, 0x100
    ctx->r25 = S32(0X100 << 16);
    // 0x80017C94: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80017C98: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80017C9C: b           L_80017CC4
    // 0x80017CA0: addiu       $s1, $v0, 0x8
    ctx->r17 = ADD32(ctx->r2, 0X8);
        goto L_80017CC4;
    // 0x80017CA0: addiu       $s1, $v0, 0x8
    ctx->r17 = ADD32(ctx->r2, 0X8);
L_80017CA4:
    // 0x80017CA4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80017CA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80017CAC: addiu       $a1, $s0, 0x98
    ctx->r5 = ADD32(ctx->r16, 0X98);
    // 0x80017CB0: swc1        $f0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->f0.u32l;
    // 0x80017CB4: swc1        $f0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f0.u32l;
    // 0x80017CB8: jal         0x8000F3AC
    // 0x80017CBC: swc1        $f0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f0.u32l;
    func_8000F3AC(rdram, ctx);
        goto after_2;
    // 0x80017CBC: swc1        $f0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x80017CC0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_80017CC4:
    // 0x80017CC4: lbu         $a3, 0xE0($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XE0);
    // 0x80017CC8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80017CCC: beq         $a3, $zero, L_80017CE8
    if (ctx->r7 == 0) {
        // 0x80017CD0: addiu       $a1, $s0, 0xC8
        ctx->r5 = ADD32(ctx->r16, 0XC8);
            goto L_80017CE8;
    }
    // 0x80017CD0: addiu       $a1, $s0, 0xC8
    ctx->r5 = ADD32(ctx->r16, 0XC8);
    // 0x80017CD4: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x80017CD8: lw          $a2, 0x6274($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6274);
    // 0x80017CDC: jal         0x8000E2F0
    // 0x80017CE0: addiu       $a2, $a2, 0x9C
    ctx->r6 = ADD32(ctx->r6, 0X9C);
    func_8000E2F0(rdram, ctx);
        goto after_3;
    // 0x80017CE0: addiu       $a2, $a2, 0x9C
    ctx->r6 = ADD32(ctx->r6, 0X9C);
    after_3:
    // 0x80017CE4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_80017CE8:
    // 0x80017CE8: lw          $t2, 0xDC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XDC);
    // 0x80017CEC: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x80017CF0: lw          $t1, 0x7D08($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7D08);
    // 0x80017CF4: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80017CF8: lw          $t0, -0x19AC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X19AC);
    // 0x80017CFC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80017D00: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80017D04: sw          $t0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r8;
    // 0x80017D08: lw          $a3, 0xD8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XD8);
    // 0x80017D0C: addiu       $v0, $sp, 0x2C
    ctx->r2 = ADD32(ctx->r29, 0X2C);
    // 0x80017D10: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80017D14: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
L_80017D18:
    // 0x80017D18: lw          $a0, 0x3C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X3C);
    // 0x80017D1C: nop

    // 0x80017D20: beq         $a0, $zero, L_80017D30
    if (ctx->r4 == 0) {
        // 0x80017D24: addiu       $t5, $a0, 0x10
        ctx->r13 = ADD32(ctx->r4, 0X10);
            goto L_80017D30;
    }
    // 0x80017D24: addiu       $t5, $a0, 0x10
    ctx->r13 = ADD32(ctx->r4, 0X10);
    // 0x80017D28: b           L_80017D34
    // 0x80017D2C: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
        goto L_80017D34;
    // 0x80017D2C: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
L_80017D30:
    // 0x80017D30: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_80017D34:
    // 0x80017D34: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80017D38: bne         $v0, $a1, L_80017D18
    if (ctx->r2 != ctx->r5) {
        // 0x80017D3C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80017D18;
    }
    // 0x80017D3C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80017D40: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80017D44: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80017D48: jal         0x8000DB44
    // 0x80017D4C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_8000DB44(rdram, ctx);
        goto after_4;
    // 0x80017D4C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_4:
    // 0x80017D50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80017D54: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80017D58: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80017D5C: jr          $ra
    // 0x80017D60: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x80017D60: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_80017D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017D64: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x80017D68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80017D6C: lhu         $t6, 0xC($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC);
    // 0x80017D70: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x80017D74: blez        $t6, L_80017DC0
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80017D78: lui         $t0, 0xE0E0
        ctx->r8 = S32(0XE0E0 << 16);
            goto L_80017DC0;
    }
    // 0x80017D78: lui         $t0, 0xE0E0
    ctx->r8 = S32(0XE0E0 << 16);
    // 0x80017D7C: lui         $a3, 0xF8F8
    ctx->r7 = S32(0XF8F8 << 16);
    // 0x80017D80: ori         $a3, $a3, 0xF800
    ctx->r7 = ctx->r7 | 0XF800;
    // 0x80017D84: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80017D88: ori         $t0, $t0, 0xE000
    ctx->r8 = ctx->r8 | 0XE000;
L_80017D8C:
    // 0x80017D8C: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x80017D90: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80017D94: and         $t8, $v1, $t0
    ctx->r24 = ctx->r3 & ctx->r8;
    // 0x80017D98: srl         $t9, $t8, 5
    ctx->r25 = S32(U32(ctx->r24) >> 5);
    // 0x80017D9C: and         $t7, $v1, $a3
    ctx->r15 = ctx->r3 & ctx->r7;
    // 0x80017DA0: or          $t1, $t7, $t9
    ctx->r9 = ctx->r15 | ctx->r25;
    // 0x80017DA4: ori         $t2, $t1, 0x80
    ctx->r10 = ctx->r9 | 0X80;
    // 0x80017DA8: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x80017DAC: lhu         $t3, 0xC($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XC);
    // 0x80017DB0: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x80017DB4: slt         $at, $a2, $t3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80017DB8: bne         $at, $zero, L_80017D8C
    if (ctx->r1 != 0) {
        // 0x80017DBC: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_80017D8C;
    }
    // 0x80017DBC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_80017DC0:
    // 0x80017DC0: jr          $ra
    // 0x80017DC4: nop

    return;
    // 0x80017DC4: nop

;}
RECOMP_FUNC void func_80017DC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017DC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80017DCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017DD0: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x80017DD4: nop

    // 0x80017DD8: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x80017DDC: jal         0x8007A000
    // 0x80017DE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    guMtxF2L(rdram, ctx);
        goto after_0;
    // 0x80017DE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80017DE4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80017DE8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80017DEC: sh          $zero, 0x3E($a1)
    MEM_H(0X3E, ctx->r5) = 0;
    // 0x80017DF0: sh          $zero, 0x36($a1)
    MEM_H(0X36, ctx->r5) = 0;
    // 0x80017DF4: sh          $zero, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = 0;
    // 0x80017DF8: sh          $zero, 0x26($a1)
    MEM_H(0X26, ctx->r5) = 0;
    // 0x80017DFC: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
    // 0x80017E00: sh          $zero, 0xE($a1)
    MEM_H(0XE, ctx->r5) = 0;
    // 0x80017E04: sh          $zero, 0x6($a1)
    MEM_H(0X6, ctx->r5) = 0;
    // 0x80017E08: sh          $t6, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r14;
    // 0x80017E0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80017E10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80017E14: jr          $ra
    // 0x80017E18: nop

    return;
    // 0x80017E18: nop

;}
RECOMP_FUNC void func_80017E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017E1C: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x80017E20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80017E24: lhu         $t6, 0xC($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC);
    // 0x80017E28: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x80017E2C: blez        $t6, L_80017E6C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80017E30: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_80017E6C;
    }
    // 0x80017E30: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_80017E34:
    // 0x80017E34: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    // 0x80017E38: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80017E3C: sh          $t7, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r15;
    // 0x80017E40: lh          $t8, 0x2($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X2);
    // 0x80017E44: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x80017E48: sh          $t8, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r24;
    // 0x80017E4C: lh          $t9, -0x8($a0)
    ctx->r25 = MEM_H(ctx->r4, -0X8);
    // 0x80017E50: addiu       $a1, $a1, 0x6
    ctx->r5 = ADD32(ctx->r5, 0X6);
    // 0x80017E54: sh          $t9, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r25;
    // 0x80017E58: lhu         $t0, 0xC($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0XC);
    // 0x80017E5C: nop

    // 0x80017E60: slt         $at, $a2, $t0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80017E64: bne         $at, $zero, L_80017E34
    if (ctx->r1 != 0) {
        // 0x80017E68: nop
    
            goto L_80017E34;
    }
    // 0x80017E68: nop

L_80017E6C:
    // 0x80017E6C: jr          $ra
    // 0x80017E70: nop

    return;
    // 0x80017E70: nop

;}
RECOMP_FUNC void func_80017E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017E74: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80017E78: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x80017E7C: blez        $t6, L_80017EA8
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80017E80: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80017EA8;
    }
    // 0x80017E80: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80017E84:
    // 0x80017E84: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80017E88: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80017E8C: ori         $t8, $t7, 0x80
    ctx->r24 = ctx->r15 | 0X80;
    // 0x80017E90: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80017E94: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x80017E98: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80017E9C: slt         $at, $v1, $t9
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80017EA0: bne         $at, $zero, L_80017E84
    if (ctx->r1 != 0) {
        // 0x80017EA4: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80017E84;
    }
    // 0x80017EA4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_80017EA8:
    // 0x80017EA8: jr          $ra
    // 0x80017EAC: nop

    return;
    // 0x80017EAC: nop

;}
RECOMP_FUNC void func_80017EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017EB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80017EB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80017EB8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80017EBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017EC0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80017EC4: addiu       $a1, $a1, -0x5C40
    ctx->r5 = ADD32(ctx->r5, -0X5C40);
    // 0x80017EC8: jal         0x8000E4A8
    // 0x80017ECC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_8000E4A8(rdram, ctx);
        goto after_0;
    // 0x80017ECC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80017ED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80017ED4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80017ED8: jr          $ra
    // 0x80017EDC: nop

    return;
    // 0x80017EDC: nop

;}
RECOMP_FUNC void func_80017EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017EE0: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80017EE4: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x80017EE8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80017EEC: blez        $t6, L_80017F94
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80017EF0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80017F94;
    }
    // 0x80017EF0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80017EF4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80017EF8:
    // 0x80017EF8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80017EFC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80017F00: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80017F04: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80017F08: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80017F0C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80017F10: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80017F14: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80017F18: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80017F1C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80017F20: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x80017F24: addiu       $a2, $a2, 0x6
    ctx->r6 = ADD32(ctx->r6, 0X6);
    // 0x80017F28: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80017F2C: sh          $t8, -0x6($a2)
    MEM_H(-0X6, ctx->r6) = ctx->r24;
    // 0x80017F30: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80017F34: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80017F38: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80017F3C: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80017F40: nop

    // 0x80017F44: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80017F48: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80017F4C: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x80017F50: nop

    // 0x80017F54: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80017F58: sh          $t0, -0x4($a2)
    MEM_H(-0X4, ctx->r6) = ctx->r8;
    // 0x80017F5C: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80017F60: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80017F64: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80017F68: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80017F6C: nop

    // 0x80017F70: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80017F74: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x80017F78: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80017F7C: sh          $t2, -0x2($a2)
    MEM_H(-0X2, ctx->r6) = ctx->r10;
    // 0x80017F80: lw          $t3, 0xC8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XC8);
    // 0x80017F84: nop

    // 0x80017F88: slt         $at, $v1, $t3
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80017F8C: bne         $at, $zero, L_80017EF8
    if (ctx->r1 != 0) {
        // 0x80017F90: nop
    
            goto L_80017EF8;
    }
    // 0x80017F90: nop

L_80017F94:
    // 0x80017F94: jr          $ra
    // 0x80017F98: nop

    return;
    // 0x80017F98: nop

;}
RECOMP_FUNC void func_80017F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017F9C: lw          $a2, 0xCC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XCC);
    // 0x80017FA0: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x80017FA4: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x80017FA8: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80017FAC: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x80017FB0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80017FB4: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x80017FB8: div.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f4.d, ctx->f8.d);
    // 0x80017FBC: multu       $v1, $a2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80017FC0: negu        $t9, $v1
    ctx->r25 = SUB32(0, ctx->r3);
    // 0x80017FC4: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x80017FC8: addiu       $t1, $zero, -0x100
    ctx->r9 = ADD32(0, -0X100);
    // 0x80017FCC: mflo        $t6
    ctx->r14 = lo;
    // 0x80017FD0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80017FD4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80017FD8: addu        $v0, $t8, $a1
    ctx->r2 = ADD32(ctx->r24, ctx->r5);
    // 0x80017FDC: addu        $a3, $t2, $v0
    ctx->r7 = ADD32(ctx->r10, ctx->r2);
    // 0x80017FE0: sltu        $at, $a3, $a1
    ctx->r1 = ctx->r7 < ctx->r5 ? 1 : 0;
    // 0x80017FE4: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x80017FE8: bne         $at, $zero, L_800180B4
    if (ctx->r1 != 0) {
        // 0x80017FEC: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_800180B4;
    }
    // 0x80017FEC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80017FF0:
    // 0x80017FF0: blez        $v1, L_800180A8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80017FF4: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_800180A8;
    }
    // 0x80017FF4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x80017FF8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80017FFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80018000: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x80018004: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80018008: cvt.w.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.u32l = CVT_W_S(ctx->f2.fl);
    // 0x8001800C: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x80018010: nop

    // 0x80018014: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x80018018: beq         $a2, $zero, L_80018064
    if (ctx->r6 == 0) {
        // 0x8001801C: nop
    
            goto L_80018064;
    }
    // 0x8001801C: nop

    // 0x80018020: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80018024: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80018028: sub.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x8001802C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80018030: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x80018034: nop

    // 0x80018038: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8001803C: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x80018040: nop

    // 0x80018044: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x80018048: bne         $a2, $zero, L_8001805C
    if (ctx->r6 != 0) {
        // 0x8001804C: nop
    
            goto L_8001805C;
    }
    // 0x8001804C: nop

    // 0x80018050: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80018054: b           L_80018074
    // 0x80018058: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_80018074;
    // 0x80018058: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_8001805C:
    // 0x8001805C: b           L_80018074
    // 0x80018060: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_80018074;
    // 0x80018060: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_80018064:
    // 0x80018064: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80018068: nop

    // 0x8001806C: bltz        $a2, L_8001805C
    if (SIGNED(ctx->r6) < 0) {
        // 0x80018070: nop
    
            goto L_8001805C;
    }
    // 0x80018070: nop

L_80018074:
    // 0x80018074: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80018078: nop

    // 0x8001807C: nop

L_80018080:
    // 0x80018080: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x80018084: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80018088: and         $t5, $t4, $t1
    ctx->r13 = ctx->r12 & ctx->r9;
    // 0x8001808C: or          $t6, $t5, $a2
    ctx->r14 = ctx->r13 | ctx->r6;
    // 0x80018090: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80018094: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x80018098: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8001809C: slt         $at, $t0, $v1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800180A0: bne         $at, $zero, L_80018080
    if (ctx->r1 != 0) {
        // 0x800180A4: addiu       $a3, $a3, -0x4
        ctx->r7 = ADD32(ctx->r7, -0X4);
            goto L_80018080;
    }
    // 0x800180A4: addiu       $a3, $a3, -0x4
    ctx->r7 = ADD32(ctx->r7, -0X4);
L_800180A8:
    // 0x800180A8: sltu        $at, $a3, $a1
    ctx->r1 = ctx->r7 < ctx->r5 ? 1 : 0;
    // 0x800180AC: beq         $at, $zero, L_80017FF0
    if (ctx->r1 == 0) {
        // 0x800180B0: add.s       $f2, $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
            goto L_80017FF0;
    }
    // 0x800180B0: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
L_800180B4:
    // 0x800180B4: jr          $ra
    // 0x800180B8: nop

    return;
    // 0x800180B8: nop

;}
RECOMP_FUNC void func_800180BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800180BC: lw          $t6, 0xCC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XCC);
    // 0x800180C0: nop

    // 0x800180C4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800180C8: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x800180CC: addu        $v0, $t8, $a1
    ctx->r2 = ADD32(ctx->r24, ctx->r5);
    // 0x800180D0: addiu       $v1, $v0, -0x40
    ctx->r3 = ADD32(ctx->r2, -0X40);
    // 0x800180D4: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x800180D8: bne         $at, $zero, L_80018124
    if (ctx->r1 != 0) {
        // 0x800180DC: or          $t1, $v1, $zero
        ctx->r9 = ctx->r3 | 0;
            goto L_80018124;
    }
L_800180DC:
    // 0x800180DC: or          $t1, $v1, $zero
    ctx->r9 = ctx->r3 | 0;
    // 0x800180E0: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x800180E4: addiu       $t0, $v1, 0x3C
    ctx->r8 = ADD32(ctx->r3, 0X3C);
L_800180E8:
    // 0x800180E8: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x800180EC: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x800180F0: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x800180F4: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x800180F8: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x800180FC: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x80018100: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x80018104: bne         $t1, $t0, L_800180E8
    if (ctx->r9 != ctx->r8) {
        // 0x80018108: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_800180E8;
    }
    // 0x80018108: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
    // 0x8001810C: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x80018110: addiu       $v1, $v1, -0x40
    ctx->r3 = ADD32(ctx->r3, -0X40);
    // 0x80018114: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x80018118: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x8001811C: beq         $at, $zero, L_800180DC
    if (ctx->r1 == 0) {
        // 0x80018120: addiu       $v0, $v0, -0x40
        ctx->r2 = ADD32(ctx->r2, -0X40);
            goto L_800180DC;
    }
    // 0x80018120: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
L_80018124:
    // 0x80018124: jr          $ra
    // 0x80018128: nop

    return;
    // 0x80018128: nop

;}
RECOMP_FUNC void func_8001812C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001812C: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x80018130: lw          $t6, 0xCC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XCC);
    // 0x80018134: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80018138: multu       $v1, $t6
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001813C: negu        $t2, $v1
    ctx->r10 = SUB32(0, ctx->r3);
    // 0x80018140: addiu       $a3, $a1, 0x4
    ctx->r7 = ADD32(ctx->r5, 0X4);
    // 0x80018144: mflo        $t7
    ctx->r15 = lo;
    // 0x80018148: nop

    // 0x8001814C: nop

    // 0x80018150: multu       $t7, $t0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80018154: mflo        $t8
    ctx->r24 = lo;
    // 0x80018158: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8001815C: sll         $t1, $t9, 1
    ctx->r9 = S32(ctx->r25 << 1);
    // 0x80018160: multu       $t2, $t0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80018164: addu        $v0, $t1, $a1
    ctx->r2 = ADD32(ctx->r9, ctx->r5);
    // 0x80018168: mflo        $t3
    ctx->r11 = lo;
    // 0x8001816C: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80018170: addu        $a2, $t4, $v0
    ctx->r6 = ADD32(ctx->r12, ctx->r2);
    // 0x80018174: sltu        $at, $a2, $a3
    ctx->r1 = ctx->r6 < ctx->r7 ? 1 : 0;
    // 0x80018178: bne         $at, $zero, L_800181A8
    if (ctx->r1 != 0) {
        // 0x8001817C: nop
    
            goto L_800181A8;
    }
    // 0x8001817C: nop

L_80018180:
    // 0x80018180: lh          $t5, 0x0($a2)
    ctx->r13 = MEM_H(ctx->r6, 0X0);
    // 0x80018184: addiu       $a2, $a2, -0x6
    ctx->r6 = ADD32(ctx->r6, -0X6);
    // 0x80018188: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
    // 0x8001818C: lh          $t6, 0x4($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X4);
    // 0x80018190: sltu        $at, $a2, $a3
    ctx->r1 = ctx->r6 < ctx->r7 ? 1 : 0;
    // 0x80018194: sh          $t6, -0x2($v0)
    MEM_H(-0X2, ctx->r2) = ctx->r14;
    // 0x80018198: lh          $t7, 0x2($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X2);
    // 0x8001819C: addiu       $v0, $v0, -0x6
    ctx->r2 = ADD32(ctx->r2, -0X6);
    // 0x800181A0: beq         $at, $zero, L_80018180
    if (ctx->r1 == 0) {
        // 0x800181A4: sh          $t7, 0x2($v0)
        MEM_H(0X2, ctx->r2) = ctx->r15;
            goto L_80018180;
    }
    // 0x800181A4: sh          $t7, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r15;
L_800181A8:
    // 0x800181A8: jr          $ra
    // 0x800181AC: nop

    return;
    // 0x800181AC: nop

;}
RECOMP_FUNC void func_800181B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800181B0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x800181B4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800181B8: lw          $v1, -0x5C5C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5C5C);
    // 0x800181BC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800181C0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800181C4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800181C8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800181CC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800181D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800181D4: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
    // 0x800181D8: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x800181DC: beq         $s0, $v1, L_80018260
    if (ctx->r16 == ctx->r3) {
        // 0x800181E0: addiu       $s4, $s4, -0xE08
        ctx->r20 = ADD32(ctx->r20, -0XE08);
            goto L_80018260;
    }
    // 0x800181E0: addiu       $s4, $s4, -0xE08
    ctx->r20 = ADD32(ctx->r20, -0XE08);
    // 0x800181E4: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x800181E8: addiu       $s2, $s2, -0x19AC
    ctx->r18 = ADD32(ctx->r18, -0X19AC);
    // 0x800181EC: addiu       $s3, $sp, 0x40
    ctx->r19 = ADD32(ctx->r29, 0X40);
    // 0x800181F0: ori         $s1, $zero, 0xD000
    ctx->r17 = 0 | 0XD000;
L_800181F4:
    // 0x800181F4: lhu         $v0, 0x38($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X38);
    // 0x800181F8: nop

    // 0x800181FC: andi        $t6, $v0, 0xD000
    ctx->r14 = ctx->r2 & 0XD000;
    // 0x80018200: bne         $s1, $t6, L_80018250
    if (ctx->r17 != ctx->r14) {
        // 0x80018204: andi        $t7, $v0, 0x2000
        ctx->r15 = ctx->r2 & 0X2000;
            goto L_80018250;
    }
    // 0x80018204: andi        $t7, $v0, 0x2000
    ctx->r15 = ctx->r2 & 0X2000;
    // 0x80018208: beq         $t7, $zero, L_80018224
    if (ctx->r15 == 0) {
        // 0x8001820C: nop
    
            goto L_80018224;
    }
    // 0x8001820C: nop

    // 0x80018210: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x80018214: nop

    // 0x80018218: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8001821C: beq         $t9, $zero, L_80018250
    if (ctx->r25 == 0) {
        // 0x80018220: nop
    
            goto L_80018250;
    }
    // 0x80018220: nop

L_80018224:
    // 0x80018224: lhu         $t0, 0x34($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X34);
    // 0x80018228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001822C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80018230: addu        $t2, $s4, $t1
    ctx->r10 = ADD32(ctx->r20, ctx->r9);
    // 0x80018234: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x80018238: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8001823C: jalr        $t9
    // 0x80018240: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80018240: nop

    after_0:
    // 0x80018244: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80018248: lw          $v1, -0x5C5C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5C5C);
    // 0x8001824C: nop

L_80018250:
    // 0x80018250: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80018254: nop

    // 0x80018258: bne         $s0, $v1, L_800181F4
    if (ctx->r16 != ctx->r3) {
        // 0x8001825C: nop
    
            goto L_800181F4;
    }
    // 0x8001825C: nop

L_80018260:
    // 0x80018260: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80018264: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80018268: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001826C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80018270: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80018274: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80018278: jr          $ra
    // 0x8001827C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x8001827C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80018280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018280: jr          $ra
    // 0x80018284: nop

    return;
    // 0x80018284: nop

;}
RECOMP_FUNC void func_80018288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018288: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001828C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80018290: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80018294: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80018298: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8001829C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800182A0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800182A4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800182A8: jal         0x8000FB9C
    // 0x800182AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8000FB9C(rdram, ctx);
        goto after_0;
    // 0x800182AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x800182B0: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x800182B4: lw          $a3, -0x5C50($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X5C50);
    // 0x800182B8: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x800182BC: lw          $s0, 0x0($a3)
    ctx->r16 = MEM_W(ctx->r7, 0X0);
    // 0x800182C0: addiu       $s5, $s5, -0x19AC
    ctx->r21 = ADD32(ctx->r21, -0X19AC);
    // 0x800182C4: beq         $s0, $a3, L_80018420
    if (ctx->r16 == ctx->r7) {
        // 0x800182C8: addiu       $s6, $zero, -0x1001
        ctx->r22 = ADD32(0, -0X1001);
            goto L_80018420;
    }
    // 0x800182C8: addiu       $s6, $zero, -0x1001
    ctx->r22 = ADD32(0, -0X1001);
    // 0x800182CC: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x800182D0: lui         $s3, 0x800A
    ctx->r19 = S32(0X800A << 16);
    // 0x800182D4: addiu       $s3, $s3, 0x7D18
    ctx->r19 = ADD32(ctx->r19, 0X7D18);
    // 0x800182D8: addiu       $s4, $s4, 0x7D0C
    ctx->r20 = ADD32(ctx->r20, 0X7D0C);
    // 0x800182DC: addiu       $s2, $zero, 0xFF
    ctx->r18 = ADD32(0, 0XFF);
L_800182E0:
    // 0x800182E0: lhu         $t6, 0x24($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X24);
    // 0x800182E4: nop

    // 0x800182E8: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x800182EC: beq         $t7, $zero, L_80018410
    if (ctx->r15 == 0) {
        // 0x800182F0: nop
    
            goto L_80018410;
    }
    // 0x800182F0: nop

    // 0x800182F4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800182F8: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x800182FC: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80018300: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80018304: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80018308: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x8001830C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80018310: lh          $a0, 0x26($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X26);
    // 0x80018314: mfc1        $s1, $f6
    ctx->r17 = (int32_t)ctx->f6.u32l;
    // 0x80018318: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8001831C: sll         $t9, $s1, 16
    ctx->r25 = S32(ctx->r17 << 16);
    // 0x80018320: sra         $s1, $t9, 16
    ctx->r17 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80018324: mtc1        $s1, $f8
    ctx->f8.u32l = ctx->r17;
    // 0x80018328: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x8001832C: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80018330: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80018334: jal         0x8000F6C0
    // 0x80018338: nop

    func_8000F6C0(rdram, ctx);
        goto after_1;
    // 0x80018338: nop

    after_1:
    // 0x8001833C: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x80018340: sh          $v0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r2;
    // 0x80018344: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80018348: sll         $t3, $v0, 1
    ctx->r11 = S32(ctx->r2 << 1);
    // 0x8001834C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80018350: lh          $t5, 0x2($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X2);
    // 0x80018354: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80018358: bne         $s1, $t5, L_8001836C
    if (ctx->r17 != ctx->r13) {
        // 0x8001835C: nop
    
            goto L_8001836C;
    }
    // 0x8001835C: nop

    // 0x80018360: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    // 0x80018364: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x80018368: sh          $a0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r4;
L_8001836C:
    // 0x8001836C: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x80018370: nop

    // 0x80018374: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x80018378: lbu         $a2, 0x0($t7)
    ctx->r6 = MEM_BU(ctx->r15, 0X0);
    // 0x8001837C: nop

    // 0x80018380: beq         $s2, $a2, L_800183F0
    if (ctx->r18 == ctx->r6) {
        // 0x80018384: sll         $t9, $a2, 1
        ctx->r25 = S32(ctx->r6 << 1);
            goto L_800183F0;
    }
    // 0x80018384: sll         $t9, $a2, 1
    ctx->r25 = S32(ctx->r6 << 1);
    // 0x80018388: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x8001838C: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x80018390: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80018394: lh          $a1, 0x0($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X0);
    // 0x80018398: lw          $t4, 0x0($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X0);
    // 0x8001839C: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x800183A0: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x800183A4: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x800183A8: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x800183AC: addu        $t5, $t4, $v1
    ctx->r13 = ADD32(ctx->r12, ctx->r3);
    // 0x800183B0: sw          $t3, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r11;
    // 0x800183B4: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x800183B8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x800183BC: lhu         $t6, 0x38($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X38);
    // 0x800183C0: nop

    // 0x800183C4: ori         $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 | 0X1000;
    // 0x800183C8: sh          $t7, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r15;
    // 0x800183CC: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x800183D0: nop

    // 0x800183D4: sw          $t8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r24;
    // 0x800183D8: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x800183DC: nop

    // 0x800183E0: sw          $t9, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r25;
    // 0x800183E4: lw          $a3, -0x5C50($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X5C50);
    // 0x800183E8: b           L_80018414
    // 0x800183EC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_80018414;
    // 0x800183EC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_800183F0:
    // 0x800183F0: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x800183F4: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x800183F8: lhu         $t0, 0x38($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X38);
    // 0x800183FC: nop

    // 0x80018400: and         $t1, $t0, $s6
    ctx->r9 = ctx->r8 & ctx->r22;
    // 0x80018404: sh          $t1, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r9;
    // 0x80018408: lw          $a3, -0x5C50($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X5C50);
    // 0x8001840C: nop

L_80018410:
    // 0x80018410: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80018414:
    // 0x80018414: nop

    // 0x80018418: bne         $s0, $a3, L_800182E0
    if (ctx->r16 != ctx->r7) {
        // 0x8001841C: nop
    
            goto L_800182E0;
    }
    // 0x8001841C: nop

L_80018420:
    // 0x80018420: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80018424: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80018428: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001842C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80018430: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80018434: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80018438: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8001843C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80018440: jr          $ra
    // 0x80018444: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80018444: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
