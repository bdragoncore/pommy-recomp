#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80021D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021D90: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80021D94: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x80021D98: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x80021D9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80021DA0: addiu       $s2, $s2, -0x48F4
    ctx->r18 = ADD32(ctx->r18, -0X48F4);
    // 0x80021DA4: addiu       $s5, $s5, -0x48C8
    ctx->r21 = ADD32(ctx->r21, -0X48C8);
    // 0x80021DA8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80021DAC: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x80021DB0: addiu       $s4, $zero, 0x58
    ctx->r20 = ADD32(0, 0X58);
    // 0x80021DB4: addiu       $s3, $zero, 0x2C
    ctx->r19 = ADD32(0, 0X2C);
    // 0x80021DB8: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
L_80021DBC:
    // 0x80021DBC: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80021DC0: lw          $t7, -0x48A4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X48A4);
    // 0x80021DC4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80021DC8: nop

    // 0x80021DCC: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    // 0x80021DD0: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x80021DD4: nop

    // 0x80021DD8: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80021DDC: beq         $t9, $zero, L_8002224C
    if (ctx->r25 == 0) {
        // 0x80021DE0: lw          $t6, 0x1C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X1C);
            goto L_8002224C;
    }
    // 0x80021DE0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80021DE4: lh          $v1, 0xC($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XC);
    // 0x80021DE8: nop

    // 0x80021DEC: beq         $v1, $zero, L_80021DFC
    if (ctx->r3 == 0) {
        // 0x80021DF0: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_80021DFC;
    }
    // 0x80021DF0: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x80021DF4: b           L_80022248
    // 0x80021DF8: sh          $t6, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r14;
        goto L_80022248;
    // 0x80021DF8: sh          $t6, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r14;
L_80021DFC:
    // 0x80021DFC: lw          $fp, 0x4($s1)
    ctx->r30 = MEM_W(ctx->r17, 0X4);
    // 0x80021E00: bne         $v1, $zero, L_80022240
    if (ctx->r3 != 0) {
        // 0x80021E04: addiu       $t8, $v1, -0x1
        ctx->r24 = ADD32(ctx->r3, -0X1);
            goto L_80022240;
    }
    // 0x80021E04: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
L_80021E08:
    // 0x80021E08: lbu         $v0, 0x0($fp)
    ctx->r2 = MEM_BU(ctx->r30, 0X0);
    // 0x80021E0C: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x80021E10: sltiu       $at, $v0, 0x8
    ctx->r1 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x80021E14: beq         $at, $zero, L_80022234
    if (ctx->r1 == 0) {
        // 0x80021E18: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_80022234;
    }
    // 0x80021E18: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80021E1C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80021E20: addu        $at, $at, $t7
    gpr jr_addend_80021E2C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80021E24: lw          $t7, 0x5454($at)
    ctx->r15 = ADD32(ctx->r1, 0X5454);
    // 0x80021E28: nop

    // 0x80021E2C: jr          $t7
    // 0x80021E30: nop

    switch (jr_addend_80021E2C >> 2) {
        case 0: goto L_80021E34; break;
        case 1: goto L_80021ED8; break;
        case 2: goto L_80021F24; break;
        case 3: goto L_80021F44; break;
        case 4: goto L_80021F50; break;
        case 5: goto L_80021FA8; break;
        case 6: goto L_80021FC0; break;
        case 7: goto L_8002212C; break;
        default: switch_error(__func__, 0x80021E2C, 0x80095454);
    }
    // 0x80021E30: nop

L_80021E34:
    // 0x80021E34: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x80021E38: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80021E3C: lw          $a0, -0x48EC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X48EC);
    // 0x80021E40: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80021E44: blez        $a0, L_80021EC8
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80021E48: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80021EC8;
    }
    // 0x80021E48: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80021E4C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x80021E50: nop

    // 0x80021E54: beq         $v0, $zero, L_80021EC4
    if (ctx->r2 == 0) {
        // 0x80021E58: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80021EC4;
    }
    // 0x80021E58: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
L_80021E5C:
    // 0x80021E5C: sllv        $v1, $t8, $s0
    ctx->r3 = S32(ctx->r24 << (ctx->r16 & 31));
    // 0x80021E60: and         $t9, $v0, $v1
    ctx->r25 = ctx->r2 & ctx->r3;
    // 0x80021E64: beq         $t9, $zero, L_80021E9C
    if (ctx->r25 == 0) {
        // 0x80021E68: nop
    
            goto L_80021E9C;
    }
    // 0x80021E68: nop

    // 0x80021E6C: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80021E70: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x80021E74: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80021E78: mflo        $t7
    ctx->r15 = lo;
    // 0x80021E7C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80021E80: sb          $a1, 0x20($t8)
    MEM_B(0X20, ctx->r24) = ctx->r5;
    // 0x80021E84: lw          $t9, 0x14($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X14);
    // 0x80021E88: nor         $t6, $v1, $zero
    ctx->r14 = ~(ctx->r3 | 0);
    // 0x80021E8C: and         $t7, $t9, $t6
    ctx->r15 = ctx->r25 & ctx->r14;
    // 0x80021E90: sw          $t7, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r15;
    // 0x80021E94: lw          $a0, -0x48EC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X48EC);
    // 0x80021E98: nop

L_80021E9C:
    // 0x80021E9C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80021EA0: sll         $t8, $s0, 16
    ctx->r24 = S32(ctx->r16 << 16);
    // 0x80021EA4: sra         $s0, $t8, 16
    ctx->r16 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80021EA8: slt         $at, $s0, $a0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80021EAC: beq         $at, $zero, L_80021EC8
    if (ctx->r1 == 0) {
        // 0x80021EB0: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80021EC8;
    }
    // 0x80021EB0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80021EB4: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x80021EB8: nop

    // 0x80021EBC: bne         $v0, $zero, L_80021E5C
    if (ctx->r2 != 0) {
        // 0x80021EC0: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80021E5C;
    }
    // 0x80021EC0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
L_80021EC4:
    // 0x80021EC4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_80021EC8:
    // 0x80021EC8: sh          $t6, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r14;
    // 0x80021ECC: lh          $v1, 0xC($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XC);
    // 0x80021ED0: b           L_80022234
    // 0x80021ED4: nop

        goto L_80022234;
    // 0x80021ED4: nop

L_80021ED8:
    // 0x80021ED8: lbu         $t8, 0x0($fp)
    ctx->r24 = MEM_BU(ctx->r30, 0X0);
    // 0x80021EDC: lbu         $t7, 0x1($fp)
    ctx->r15 = MEM_BU(ctx->r30, 0X1);
    // 0x80021EE0: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x80021EE4: or          $s7, $t7, $t9
    ctx->r23 = ctx->r15 | ctx->r25;
    // 0x80021EE8: sll         $t6, $s7, 16
    ctx->r14 = S32(ctx->r23 << 16);
    // 0x80021EEC: sra         $s7, $t6, 16
    ctx->r23 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80021EF0: sll         $a0, $s7, 16
    ctx->r4 = S32(ctx->r23 << 16);
    // 0x80021EF4: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80021EF8: addiu       $fp, $fp, 0x2
    ctx->r30 = ADD32(ctx->r30, 0X2);
    // 0x80021EFC: jal         0x8001FED8
    // 0x80021F00: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8001FED8(rdram, ctx);
        goto after_0;
    // 0x80021F00: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x80021F04: bgez        $v0, L_80021F18
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80021F08: nop
    
            goto L_80021F18;
    }
    // 0x80021F08: nop

    // 0x80021F0C: lh          $v1, 0xC($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XC);
    // 0x80021F10: b           L_80022234
    // 0x80021F14: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
        goto L_80022234;
    // 0x80021F14: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
L_80021F18:
    // 0x80021F18: lh          $v1, 0xC($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XC);
    // 0x80021F1C: b           L_80022234
    // 0x80021F20: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
        goto L_80022234;
    // 0x80021F20: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
L_80021F24:
    // 0x80021F24: lbu         $t6, 0x0($fp)
    ctx->r14 = MEM_BU(ctx->r30, 0X0);
    // 0x80021F28: lbu         $t9, 0x1($fp)
    ctx->r25 = MEM_BU(ctx->r30, 0X1);
    // 0x80021F2C: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x80021F30: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x80021F34: sh          $t7, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r15;
    // 0x80021F38: lh          $v1, 0xC($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XC);
    // 0x80021F3C: b           L_80022234
    // 0x80021F40: addiu       $fp, $fp, 0x2
    ctx->r30 = ADD32(ctx->r30, 0X2);
        goto L_80022234;
    // 0x80021F40: addiu       $fp, $fp, 0x2
    ctx->r30 = ADD32(ctx->r30, 0X2);
L_80021F44:
    // 0x80021F44: lh          $v1, 0xC($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XC);
    // 0x80021F48: b           L_80022234
    // 0x80021F4C: sw          $fp, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r30;
        goto L_80022234;
    // 0x80021F4C: sw          $fp, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r30;
L_80021F50:
    // 0x80021F50: lh          $v0, 0xE($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XE);
    // 0x80021F54: nop

    // 0x80021F58: beq         $v0, $zero, L_80021F68
    if (ctx->r2 == 0) {
        // 0x80021F5C: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_80021F68;
    }
    // 0x80021F5C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80021F60: b           L_80021F7C
    // 0x80021F64: sh          $t6, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r14;
        goto L_80021F7C;
    // 0x80021F64: sh          $t6, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r14;
L_80021F68:
    // 0x80021F68: lbu         $t8, 0x0($fp)
    ctx->r24 = MEM_BU(ctx->r30, 0X0);
    // 0x80021F6C: lbu         $t9, 0x1($fp)
    ctx->r25 = MEM_BU(ctx->r30, 0X1);
    // 0x80021F70: sll         $t7, $t8, 8
    ctx->r15 = S32(ctx->r24 << 8);
    // 0x80021F74: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x80021F78: sh          $t6, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r14;
L_80021F7C:
    // 0x80021F7C: lh          $t8, 0xE($s1)
    ctx->r24 = MEM_H(ctx->r17, 0XE);
    // 0x80021F80: nop

    // 0x80021F84: bne         $t8, $zero, L_80021F94
    if (ctx->r24 != 0) {
        // 0x80021F88: nop
    
            goto L_80021F94;
    }
    // 0x80021F88: nop

    // 0x80021F8C: b           L_80021F9C
    // 0x80021F90: addiu       $fp, $fp, 0x2
    ctx->r30 = ADD32(ctx->r30, 0X2);
        goto L_80021F9C;
    // 0x80021F90: addiu       $fp, $fp, 0x2
    ctx->r30 = ADD32(ctx->r30, 0X2);
L_80021F94:
    // 0x80021F94: lw          $fp, 0x8($s1)
    ctx->r30 = MEM_W(ctx->r17, 0X8);
    // 0x80021F98: nop

L_80021F9C:
    // 0x80021F9C: lh          $v1, 0xC($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XC);
    // 0x80021FA0: b           L_80022234
    // 0x80021FA4: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
        goto L_80022234;
    // 0x80021FA4: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
L_80021FA8:
    // 0x80021FA8: lbu         $t9, 0x0($fp)
    ctx->r25 = MEM_BU(ctx->r30, 0X0);
    // 0x80021FAC: lh          $v1, 0xC($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XC);
    // 0x80021FB0: sll         $t7, $t9, 8
    ctx->r15 = S32(ctx->r25 << 8);
    // 0x80021FB4: sh          $t7, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r15;
    // 0x80021FB8: b           L_80022234
    // 0x80021FBC: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
        goto L_80022234;
    // 0x80021FBC: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
L_80021FC0:
    // 0x80021FC0: lbu         $t8, 0x2($fp)
    ctx->r24 = MEM_BU(ctx->r30, 0X2);
    // 0x80021FC4: lbu         $t6, 0x3($fp)
    ctx->r14 = MEM_BU(ctx->r30, 0X3);
    // 0x80021FC8: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x80021FCC: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x80021FD0: lh          $t6, 0x10($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X10);
    // 0x80021FD4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80021FD8: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80021FDC: sh          $t9, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r25;
    // 0x80021FE0: lh          $t7, 0x10($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X10);
    // 0x80021FE4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80021FE8: bgez        $t7, L_80021FF4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80021FEC: nop
    
            goto L_80021FF4;
    }
    // 0x80021FEC: nop

    // 0x80021FF0: sh          $zero, 0x10($s1)
    MEM_H(0X10, ctx->r17) = 0;
L_80021FF4:
    // 0x80021FF4: lbu         $t6, 0x0($fp)
    ctx->r14 = MEM_BU(ctx->r30, 0X0);
    // 0x80021FF8: lbu         $t8, 0x1($fp)
    ctx->r24 = MEM_BU(ctx->r30, 0X1);
    // 0x80021FFC: sll         $t9, $t6, 8
    ctx->r25 = S32(ctx->r14 << 8);
    // 0x80022000: lw          $a0, -0x48EC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X48EC);
    // 0x80022004: or          $s7, $t8, $t9
    ctx->r23 = ctx->r24 | ctx->r25;
    // 0x80022008: sll         $t7, $s7, 16
    ctx->r15 = S32(ctx->r23 << 16);
    // 0x8002200C: blez        $a0, L_80022120
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80022010: sra         $s7, $t7, 16
        ctx->r23 = S32(SIGNED(ctx->r15) >> 16);
            goto L_80022120;
    }
    // 0x80022010: sra         $s7, $t7, 16
    ctx->r23 = S32(SIGNED(ctx->r15) >> 16);
L_80022014:
    // 0x80022014: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80022018: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x8002201C: mflo        $t8
    ctx->r24 = lo;
    // 0x80022020: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x80022024: lh          $t7, 0x10($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X10);
    // 0x80022028: nop

    // 0x8002202C: bne         $s7, $t7, L_80022104
    if (ctx->r23 != ctx->r15) {
        // 0x80022030: nop
    
            goto L_80022104;
    }
    // 0x80022030: nop

    // 0x80022034: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80022038: lh          $t6, 0x10($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X10);
    // 0x8002203C: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x80022040: sra         $t8, $t6, 8
    ctx->r24 = S32(SIGNED(ctx->r14) >> 8);
    // 0x80022044: sb          $t8, 0x20($v0)
    MEM_B(0X20, ctx->r2) = ctx->r24;
    // 0x80022048: ori         $t7, $t9, 0x2
    ctx->r15 = ctx->r25 | 0X2;
    // 0x8002204C: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x80022050: lw          $t6, 0x14($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X14);
    // 0x80022054: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80022058: sllv        $t9, $t8, $s0
    ctx->r25 = S32(ctx->r24 << (ctx->r16 & 31));
    // 0x8002205C: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x80022060: sw          $t7, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r15;
    // 0x80022064: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80022068: mflo        $t8
    ctx->r24 = lo;
    // 0x8002206C: addu        $v1, $t8, $t6
    ctx->r3 = ADD32(ctx->r24, ctx->r14);
    // 0x80022070: lb          $t9, 0x17($v1)
    ctx->r25 = MEM_B(ctx->r3, 0X17);
    // 0x80022074: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x80022078: beq         $t9, $zero, L_800220F8
    if (ctx->r25 == 0) {
        // 0x8002207C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_800220F8;
    }
    // 0x8002207C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80022080:
    // 0x80022080: lb          $a0, 0x14($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X14);
    // 0x80022084: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x80022088: multu       $a0, $s4
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002208C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80022090: mflo        $t8
    ctx->r24 = lo;
    // 0x80022094: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x80022098: lh          $t9, 0xA($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XA);
    // 0x8002209C: nop

    // 0x800220A0: bne         $s0, $t9, L_800220F0
    if (ctx->r16 != ctx->r25) {
        // 0x800220A4: nop
    
            goto L_800220F0;
    }
    // 0x800220A4: nop

    // 0x800220A8: multu       $a0, $s3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800220AC: lh          $t7, 0x10($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X10);
    // 0x800220B0: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x800220B4: sra         $t8, $t7, 8
    ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
    // 0x800220B8: mflo        $v0
    ctx->r2 = lo;
    // 0x800220BC: addu        $t9, $t6, $v0
    ctx->r25 = ADD32(ctx->r14, ctx->r2);
    // 0x800220C0: sb          $t8, 0x20($t9)
    MEM_B(0X20, ctx->r25) = ctx->r24;
    // 0x800220C4: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x800220C8: nop

    // 0x800220CC: addu        $v1, $t7, $v0
    ctx->r3 = ADD32(ctx->r15, ctx->r2);
    // 0x800220D0: lw          $t6, 0x8($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X8);
    // 0x800220D4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800220D8: ori         $t8, $t6, 0x2
    ctx->r24 = ctx->r14 | 0X2;
    // 0x800220DC: sw          $t8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r24;
    // 0x800220E0: lw          $t9, 0x14($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X14);
    // 0x800220E4: sllv        $t6, $t7, $a0
    ctx->r14 = S32(ctx->r15 << (ctx->r4 & 31));
    // 0x800220E8: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x800220EC: sw          $t8, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r24;
L_800220F0:
    // 0x800220F0: bne         $a1, $s6, L_80022080
    if (ctx->r5 != ctx->r22) {
        // 0x800220F4: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_80022080;
    }
    // 0x800220F4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_800220F8:
    // 0x800220F8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800220FC: lw          $a0, -0x48EC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X48EC);
    // 0x80022100: nop

L_80022104:
    // 0x80022104: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80022108: sll         $t7, $s0, 16
    ctx->r15 = S32(ctx->r16 << 16);
    // 0x8002210C: sra         $s0, $t7, 16
    ctx->r16 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80022110: slt         $at, $s0, $a0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80022114: bne         $at, $zero, L_80022014
    if (ctx->r1 != 0) {
        // 0x80022118: nop
    
            goto L_80022014;
    }
    // 0x80022118: nop

    // 0x8002211C: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
L_80022120:
    // 0x80022120: lh          $v1, 0xC($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XC);
    // 0x80022124: b           L_80022234
    // 0x80022128: addiu       $fp, $fp, 0x4
    ctx->r30 = ADD32(ctx->r30, 0X4);
        goto L_80022234;
    // 0x80022128: addiu       $fp, $fp, 0x4
    ctx->r30 = ADD32(ctx->r30, 0X4);
L_8002212C:
    // 0x8002212C: lbu         $t8, 0x0($fp)
    ctx->r24 = MEM_BU(ctx->r30, 0X0);
    // 0x80022130: lbu         $t6, 0x1($fp)
    ctx->r14 = MEM_BU(ctx->r30, 0X1);
    // 0x80022134: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80022138: sll         $t7, $t8, 8
    ctx->r15 = S32(ctx->r24 << 8);
    // 0x8002213C: lw          $a0, -0x48EC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X48EC);
    // 0x80022140: or          $s7, $t6, $t7
    ctx->r23 = ctx->r14 | ctx->r15;
    // 0x80022144: sll         $t9, $s7, 16
    ctx->r25 = S32(ctx->r23 << 16);
    // 0x80022148: sra         $s7, $t9, 16
    ctx->r23 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8002214C: blez        $a0, L_800221D4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80022150: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_800221D4;
    }
    // 0x80022150: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80022154:
    // 0x80022154: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80022158: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x8002215C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80022160: mflo        $t6
    ctx->r14 = lo;
    // 0x80022164: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80022168: lh          $t9, 0x10($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X10);
    // 0x8002216C: nop

    // 0x80022170: bne         $s7, $t9, L_800221B8
    if (ctx->r23 != ctx->r25) {
        // 0x80022174: nop
    
            goto L_800221B8;
    }
    // 0x80022174: nop

    // 0x80022178: lw          $t8, -0x48E4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X48E4);
    // 0x8002217C: nop

    // 0x80022180: andi        $t6, $t8, 0x8000
    ctx->r14 = ctx->r24 & 0X8000;
    // 0x80022184: beq         $t6, $zero, L_800221B8
    if (ctx->r14 == 0) {
        // 0x80022188: nop
    
            goto L_800221B8;
    }
    // 0x80022188: nop

    // 0x8002218C: jal         0x8001D420
    // 0x80022190: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001D420(rdram, ctx);
        goto after_1;
    // 0x80022190: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80022194: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    // 0x80022198: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8002219C: jal         0x8001E774
    // 0x800221A0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8001E774(rdram, ctx);
        goto after_2;
    // 0x800221A0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_2:
    // 0x800221A4: jal         0x8001D420
    // 0x800221A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001D420(rdram, ctx);
        goto after_3;
    // 0x800221A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x800221AC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800221B0: lw          $a0, -0x48EC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X48EC);
    // 0x800221B4: nop

L_800221B8:
    // 0x800221B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800221BC: sll         $t9, $s0, 16
    ctx->r25 = S32(ctx->r16 << 16);
    // 0x800221C0: sra         $s0, $t9, 16
    ctx->r16 = S32(SIGNED(ctx->r25) >> 16);
    // 0x800221C4: slt         $at, $s0, $a0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800221C8: bne         $at, $zero, L_80022154
    if (ctx->r1 != 0) {
        // 0x800221CC: nop
    
            goto L_80022154;
    }
    // 0x800221CC: nop

    // 0x800221D0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800221D4:
    // 0x800221D4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800221D8: addiu       $a0, $a0, -0x48A4
    ctx->r4 = ADD32(ctx->r4, -0X48A4);
    // 0x800221DC: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
L_800221E0:
    // 0x800221E0: multu       $s0, $a2
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800221E4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800221E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800221EC: mflo        $t7
    ctx->r15 = lo;
    // 0x800221F0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800221F4: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x800221F8: sll         $t7, $s0, 16
    ctx->r15 = S32(ctx->r16 << 16);
    // 0x800221FC: andi        $t8, $t9, 0x1
    ctx->r24 = ctx->r25 & 0X1;
    // 0x80022200: beq         $t8, $zero, L_8002221C
    if (ctx->r24 == 0) {
        // 0x80022204: sra         $s0, $t7, 16
        ctx->r16 = S32(SIGNED(ctx->r15) >> 16);
            goto L_8002221C;
    }
    // 0x80022204: sra         $s0, $t7, 16
    ctx->r16 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80022208: lh          $t6, 0x12($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X12);
    // 0x8002220C: nop

    // 0x80022210: bne         $s7, $t6, L_80022220
    if (ctx->r23 != ctx->r14) {
        // 0x80022214: slti        $at, $s0, 0x10
        ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
            goto L_80022220;
    }
    // 0x80022214: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x80022218: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_8002221C:
    // 0x8002221C: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
L_80022220:
    // 0x80022220: bne         $at, $zero, L_800221E0
    if (ctx->r1 != 0) {
        // 0x80022224: nop
    
            goto L_800221E0;
    }
    // 0x80022224: nop

    // 0x80022228: lh          $v1, 0xC($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XC);
    // 0x8002222C: addiu       $fp, $fp, 0x2
    ctx->r30 = ADD32(ctx->r30, 0X2);
    // 0x80022230: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
L_80022234:
    // 0x80022234: beq         $v1, $zero, L_80021E08
    if (ctx->r3 == 0) {
        // 0x80022238: nop
    
            goto L_80021E08;
    }
    // 0x80022238: nop

    // 0x8002223C: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
L_80022240:
    // 0x80022240: sw          $fp, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r30;
    // 0x80022244: sh          $t8, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r24;
L_80022248:
    // 0x80022248: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
L_8002224C:
    // 0x8002224C: addiu       $at, $zero, 0x180
    ctx->r1 = ADD32(0, 0X180);
    // 0x80022250: addiu       $t7, $t6, 0x18
    ctx->r15 = ADD32(ctx->r14, 0X18);
    // 0x80022254: bne         $t7, $at, L_80021DBC
    if (ctx->r15 != ctx->r1) {
        // 0x80022258: sw          $t7, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r15;
            goto L_80021DBC;
    }
    // 0x80022258: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8002225C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80022260: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80022264: jr          $ra
    // 0x80022268: nop

    return;
    // 0x80022268: nop

;}
RECOMP_FUNC void func_8002226C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002226C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80022270: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80022274: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80022278: lw          $a0, -0x48FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X48FC);
    // 0x8002227C: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80022280: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80022284: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80022288: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x8002228C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80022290: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80022294: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80022298: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8002229C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800222A0: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800222A4: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x800222A8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800222AC: jal         0x8007DB40
    // 0x800222B0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    alSndpGetSound(rdram, ctx);
        goto after_0;
    // 0x800222B0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800222B4: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x800222B8: addiu       $s5, $s5, -0x48E8
    ctx->r21 = ADD32(ctx->r21, -0X48E8);
    // 0x800222BC: sh          $v0, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r2;
    // 0x800222C0: jal         0x80021D90
    // 0x800222C4: sw          $zero, 0x0($s5)
    MEM_W(0X0, ctx->r21) = 0;
    func_80021D90(rdram, ctx);
        goto after_1;
    // 0x800222C4: sw          $zero, 0x0($s5)
    MEM_W(0X0, ctx->r21) = 0;
    after_1:
    // 0x800222C8: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800222CC: lw          $t6, -0x48EC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X48EC);
    // 0x800222D0: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x800222D4: addiu       $s5, $s5, -0x48E8
    ctx->r21 = ADD32(ctx->r21, -0X48E8);
    // 0x800222D8: blez        $t6, L_800224E8
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800222DC: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_800224E8;
    }
    // 0x800222DC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x800222E0: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x800222E4: sll         $t7, $s4, 2
    ctx->r15 = S32(ctx->r20 << 2);
L_800222E8:
    // 0x800222E8: subu        $t7, $t7, $s4
    ctx->r15 = SUB32(ctx->r15, ctx->r20);
    // 0x800222EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800222F0: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x800222F4: lw          $t8, -0x48F4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X48F4);
    // 0x800222F8: subu        $t7, $t7, $s4
    ctx->r15 = SUB32(ctx->r15, ctx->r20);
    // 0x800222FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80022300: addu        $s3, $t7, $t8
    ctx->r19 = ADD32(ctx->r15, ctx->r24);
    // 0x80022304: lh          $a1, 0x12($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X12);
    // 0x80022308: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8002230C: bltz        $a1, L_80022424
    if (SIGNED(ctx->r5) < 0) {
        // 0x80022310: nop
    
            goto L_80022424;
    }
    // 0x80022310: nop

    // 0x80022314: lw          $a0, -0x48FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X48FC);
    // 0x80022318: jal         0x8007D930
    // 0x8002231C: nop

    alSndpSetSound(rdram, ctx);
        goto after_2;
    // 0x8002231C: nop

    after_2:
    // 0x80022320: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80022324: lw          $a0, -0x48FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X48FC);
    // 0x80022328: jal         0x8007DB50
    // 0x8002232C: nop

    alSndpGetState(rdram, ctx);
        goto after_3;
    // 0x8002232C: nop

    after_3:
    // 0x80022330: beq         $v0, $s6, L_8002234C
    if (ctx->r2 == ctx->r22) {
        // 0x80022334: lui         $t6, 0x800B
        ctx->r14 = S32(0X800B << 16);
            goto L_8002234C;
    }
    // 0x80022334: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80022338: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002233C: beq         $v0, $at, L_800223AC
    if (ctx->r2 == ctx->r1) {
        // 0x80022340: lui         $a0, 0x800B
        ctx->r4 = S32(0X800B << 16);
            goto L_800223AC;
    }
    // 0x80022340: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80022344: b           L_800223DC
    // 0x80022348: lw          $t7, 0x8($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X8);
        goto L_800223DC;
    // 0x80022348: lw          $t7, 0x8($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X8);
L_8002234C:
    // 0x8002234C: lw          $t9, 0xC($s3)
    ctx->r25 = MEM_W(ctx->r19, 0XC);
    // 0x80022350: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80022354: beq         $t9, $at, L_80022360
    if (ctx->r25 == ctx->r1) {
        // 0x80022358: nop
    
            goto L_80022360;
    }
    // 0x80022358: nop

    // 0x8002235C: sw          $s6, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r22;
L_80022360:
    // 0x80022360: lw          $t6, -0x48E4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X48E4);
    // 0x80022364: nop

    // 0x80022368: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8002236C: bne         $t7, $zero, L_80022398
    if (ctx->r15 != 0) {
        // 0x80022370: nop
    
            goto L_80022398;
    }
    // 0x80022370: nop

    // 0x80022374: sw          $s4, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r20;
    // 0x80022378: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x8002237C: jal         0x800211C0
    // 0x80022380: sh          $s4, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r20;
    func_800211C0(rdram, ctx);
        goto after_4;
    // 0x80022380: sh          $s4, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r20;
    after_4:
    // 0x80022384: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x80022388: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x8002238C: lh          $s4, 0x54($sp)
    ctx->r20 = MEM_H(ctx->r29, 0X54);
    // 0x80022390: addiu       $s5, $s5, -0x48E8
    ctx->r21 = ADD32(ctx->r21, -0X48E8);
    // 0x80022394: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
L_80022398:
    // 0x80022398: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x8002239C: nop

    // 0x800223A0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800223A4: b           L_80022408
    // 0x800223A8: sw          $t9, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r25;
        goto L_80022408;
    // 0x800223A8: sw          $t9, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r25;
L_800223AC:
    // 0x800223AC: lw          $t7, 0x8($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X8);
    // 0x800223B0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800223B4: andi        $t8, $t7, 0x1000
    ctx->r24 = ctx->r15 & 0X1000;
    // 0x800223B8: beq         $t8, $zero, L_800223C4
    if (ctx->r24 == 0) {
        // 0x800223BC: sw          $t6, 0xC($s3)
        MEM_W(0XC, ctx->r19) = ctx->r14;
            goto L_800223C4;
    }
    // 0x800223BC: sw          $t6, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r14;
    // 0x800223C0: sw          $s6, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r22;
L_800223C4:
    // 0x800223C4: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x800223C8: nop

    // 0x800223CC: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x800223D0: b           L_80022408
    // 0x800223D4: sw          $t6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r14;
        goto L_80022408;
    // 0x800223D4: sw          $t6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r14;
    // 0x800223D8: lw          $t7, 0x8($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X8);
L_800223DC:
    // 0x800223DC: sw          $zero, 0xC($s3)
    MEM_W(0XC, ctx->r19) = 0;
    // 0x800223E0: andi        $t8, $t7, 0x1000
    ctx->r24 = ctx->r15 & 0X1000;
    // 0x800223E4: beq         $t8, $zero, L_800223F0
    if (ctx->r24 == 0) {
        // 0x800223E8: nop
    
            goto L_800223F0;
    }
    // 0x800223E8: nop

    // 0x800223EC: sw          $s6, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r22;
L_800223F0:
    // 0x800223F0: lw          $a0, -0x48FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X48FC);
    // 0x800223F4: lh          $a1, 0x12($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X12);
    // 0x800223F8: jal         0x8007DB70
    // 0x800223FC: nop

    alSndpDeallocate(rdram, ctx);
        goto after_5;
    // 0x800223FC: nop

    after_5:
    // 0x80022400: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80022404: sh          $t9, 0x12($s3)
    MEM_H(0X12, ctx->r19) = ctx->r25;
L_80022408:
    // 0x80022408: lw          $t6, 0x8($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X8);
    // 0x8002240C: sll         $a0, $s4, 16
    ctx->r4 = S32(ctx->r20 << 16);
    // 0x80022410: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x80022414: beq         $t7, $zero, L_80022424
    if (ctx->r15 == 0) {
        // 0x80022418: sra         $t8, $a0, 16
        ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
            goto L_80022424;
    }
    // 0x80022418: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8002241C: jal         0x800202FC
    // 0x80022420: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_800202FC(rdram, ctx);
        goto after_6;
    // 0x80022420: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_6:
L_80022424:
    // 0x80022424: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80022428: lw          $v1, -0x48E4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X48E4);
    // 0x8002242C: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x80022430: andi        $t9, $v1, 0x1
    ctx->r25 = ctx->r3 & 0X1;
    // 0x80022434: beq         $t9, $zero, L_80022474
    if (ctx->r25 == 0) {
        // 0x80022438: andi        $t6, $v0, 0x100
        ctx->r14 = ctx->r2 & 0X100;
            goto L_80022474;
    }
    // 0x80022438: andi        $t6, $v0, 0x100
    ctx->r14 = ctx->r2 & 0X100;
    // 0x8002243C: bne         $t6, $zero, L_80022474
    if (ctx->r14 != 0) {
        // 0x80022440: lui         $t7, 0x800B
        ctx->r15 = S32(0X800B << 16);
            goto L_80022474;
    }
    // 0x80022440: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80022444: lh          $t7, -0x48D2($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X48D2);
    // 0x80022448: ori         $t8, $v0, 0x2
    ctx->r24 = ctx->r2 | 0X2;
    // 0x8002244C: bltz        $t7, L_80022464
    if (SIGNED(ctx->r15) < 0) {
        // 0x80022450: sll         $a0, $s4, 16
        ctx->r4 = S32(ctx->r20 << 16);
            goto L_80022464;
    }
    // 0x80022450: sll         $a0, $s4, 16
    ctx->r4 = S32(ctx->r20 << 16);
    // 0x80022454: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80022458: sw          $t8, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r24;
    // 0x8002245C: jal         0x800202FC
    // 0x80022460: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_800202FC(rdram, ctx);
        goto after_7;
    // 0x80022460: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_7:
L_80022464:
    // 0x80022464: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80022468: lw          $v0, -0x48EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X48EC);
    // 0x8002246C: b           L_800224D4
    // 0x80022470: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_800224D4;
    // 0x80022470: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80022474:
    // 0x80022474: andi        $t6, $v0, 0x1000
    ctx->r14 = ctx->r2 & 0X1000;
    // 0x80022478: beq         $t6, $zero, L_800224C4
    if (ctx->r14 == 0) {
        // 0x8002247C: nop
    
            goto L_800224C4;
    }
    // 0x8002247C: nop

    // 0x80022480: lh          $t7, 0x12($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X12);
    // 0x80022484: andi        $t8, $v1, 0x10
    ctx->r24 = ctx->r3 & 0X10;
    // 0x80022488: bgez        $t7, L_800224C4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8002248C: nop
    
            goto L_800224C4;
    }
    // 0x8002248C: nop

    // 0x80022490: bne         $t8, $zero, L_800224C4
    if (ctx->r24 != 0) {
        // 0x80022494: sll         $s0, $s4, 16
        ctx->r16 = S32(ctx->r20 << 16);
            goto L_800224C4;
    }
    // 0x80022494: sll         $s0, $s4, 16
    ctx->r16 = S32(ctx->r20 << 16);
    // 0x80022498: sra         $t9, $s0, 16
    ctx->r25 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8002249C: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x800224A0: jal         0x80021B8C
    // 0x800224A4: sh          $s4, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r20;
    func_80021B8C(rdram, ctx);
        goto after_8;
    // 0x800224A4: sh          $s4, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r20;
    after_8:
    // 0x800224A8: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x800224AC: addiu       $s5, $s5, -0x48E8
    ctx->r21 = ADD32(ctx->r21, -0X48E8);
    // 0x800224B0: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x800224B4: lh          $s4, 0x54($sp)
    ctx->r20 = MEM_H(ctx->r29, 0X54);
    // 0x800224B8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800224BC: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x800224C0: sw          $t7, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r15;
L_800224C4:
    // 0x800224C4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800224C8: lw          $v0, -0x48EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X48EC);
    // 0x800224CC: nop

    // 0x800224D0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_800224D4:
    // 0x800224D4: sll         $t8, $s4, 16
    ctx->r24 = S32(ctx->r20 << 16);
    // 0x800224D8: sra         $s4, $t8, 16
    ctx->r20 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800224DC: slt         $at, $s4, $v0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800224E0: bne         $at, $zero, L_800222E8
    if (ctx->r1 != 0) {
        // 0x800224E4: sll         $t7, $s4, 2
        ctx->r15 = S32(ctx->r20 << 2);
            goto L_800222E8;
    }
    // 0x800224E4: sll         $t7, $s4, 2
    ctx->r15 = S32(ctx->r20 << 2);
L_800224E8:
    // 0x800224E8: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800224EC: lw          $t6, -0x48E4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X48E4);
    // 0x800224F0: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x800224F4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800224F8: beq         $t7, $zero, L_8002256C
    if (ctx->r15 == 0) {
        // 0x800224FC: addiu       $s5, $s5, -0x48E0
        ctx->r21 = ADD32(ctx->r21, -0X48E0);
            goto L_8002256C;
    }
    // 0x800224FC: addiu       $s5, $s5, -0x48E0
    ctx->r21 = ADD32(ctx->r21, -0X48E0);
    // 0x80022500: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80022504: lh          $v0, -0x48D2($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X48D2);
    // 0x80022508: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002250C: blez        $v0, L_80022538
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80022510: sra         $t8, $v0, 1
        ctx->r24 = S32(SIGNED(ctx->r2) >> 1);
            goto L_80022538;
    }
    // 0x80022510: sra         $t8, $v0, 1
    ctx->r24 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80022514: sh          $t8, -0x48D2($at)
    MEM_H(-0X48D2, ctx->r1) = ctx->r24;
    // 0x80022518: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8002251C: lh          $t9, -0x48D2($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X48D2);
    // 0x80022520: nop

    // 0x80022524: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x80022528: beq         $at, $zero, L_80022548
    if (ctx->r1 == 0) {
        // 0x8002252C: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_80022548;
    }
    // 0x8002252C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80022530: b           L_80022548
    // 0x80022534: sh          $zero, -0x48D2($at)
    MEM_H(-0X48D2, ctx->r1) = 0;
        goto L_80022548;
    // 0x80022534: sh          $zero, -0x48D2($at)
    MEM_H(-0X48D2, ctx->r1) = 0;
L_80022538:
    // 0x80022538: bne         $v0, $zero, L_80022548
    if (ctx->r2 != 0) {
        // 0x8002253C: addiu       $t6, $zero, -0x1
        ctx->r14 = ADD32(0, -0X1);
            goto L_80022548;
    }
    // 0x8002253C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80022540: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80022544: sh          $t6, -0x48D2($at)
    MEM_H(-0X48D2, ctx->r1) = ctx->r14;
L_80022548:
    // 0x80022548: lh          $a1, 0x56($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X56);
    // 0x8002254C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80022550: bltz        $a1, L_800226EC
    if (SIGNED(ctx->r5) < 0) {
        // 0x80022554: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_800226EC;
    }
    // 0x80022554: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80022558: lw          $a0, -0x48FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X48FC);
    // 0x8002255C: jal         0x8007D930
    // 0x80022560: nop

    alSndpSetSound(rdram, ctx);
        goto after_9;
    // 0x80022560: nop

    after_9:
    // 0x80022564: b           L_800226EC
    // 0x80022568: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_800226EC;
    // 0x80022568: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_8002256C:
    // 0x8002256C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80022570: lwc1        $f2, 0x0($s5)
    ctx->f2.u32l = MEM_W(ctx->r21, 0X0);
    // 0x80022574: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80022578: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x8002257C: addiu       $s3, $s3, -0x48DC
    ctx->r19 = ADD32(ctx->r19, -0X48DC);
    // 0x80022580: bc1f        L_80022634
    if (!c1cs) {
        // 0x80022584: lui         $s6, 0x800B
        ctx->r22 = S32(0X800B << 16);
            goto L_80022634;
    }
    // 0x80022584: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x80022588: addiu       $s6, $s6, -0x48D8
    ctx->r22 = ADD32(ctx->r22, -0X48D8);
    // 0x8002258C: lwc1        $f4, 0x0($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X0);
    // 0x80022590: lh          $t7, 0x0($s6)
    ctx->r15 = MEM_H(ctx->r22, 0X0);
    // 0x80022594: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x80022598: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8002259C: swc1        $f6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f6.u32l;
    // 0x800225A0: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800225A4: lwc1        $f0, 0x0($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X0);
    // 0x800225A8: nop

    // 0x800225AC: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x800225B0: nop

    // 0x800225B4: bc1f        L_800225E4
    if (!c1cs) {
        // 0x800225B8: nop
    
            goto L_800225E4;
    }
    // 0x800225B8: nop

    // 0x800225BC: jal         0x8001EAF0
    // 0x800225C0: nop

    func_8001EAF0(rdram, ctx);
        goto after_10;
    // 0x800225C0: nop

    after_10:
    // 0x800225C4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800225C8: lh          $t8, 0x0($s6)
    ctx->r24 = MEM_H(ctx->r22, 0X0);
    // 0x800225CC: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x800225D0: swc1        $f14, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f14.u32l;
    // 0x800225D4: addiu       $t0, $t0, -0x48D6
    ctx->r8 = ADD32(ctx->r8, -0X48D6);
    // 0x800225D8: lwc1        $f2, 0x0($s5)
    ctx->f2.u32l = MEM_W(ctx->r21, 0X0);
    // 0x800225DC: b           L_80022634
    // 0x800225E0: sh          $t8, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r24;
        goto L_80022634;
    // 0x800225E0: sh          $t8, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r24;
L_800225E4:
    // 0x800225E4: sub.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x800225E8: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x800225EC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800225F0: addiu       $t0, $t0, -0x48D6
    ctx->r8 = ADD32(ctx->r8, -0X48D6);
    // 0x800225F4: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800225F8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800225FC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80022600: lh          $t8, 0x0($t0)
    ctx->r24 = MEM_H(ctx->r8, 0X0);
    // 0x80022604: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80022608: mfc1        $s4, $f4
    ctx->r20 = (int32_t)ctx->f4.u32l;
    // 0x8002260C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80022610: sll         $t6, $s4, 16
    ctx->r14 = S32(ctx->r20 << 16);
    // 0x80022614: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80022618: beq         $t7, $t8, L_80022634
    if (ctx->r15 == ctx->r24) {
        // 0x8002261C: nop
    
            goto L_80022634;
    }
    // 0x8002261C: nop

    // 0x80022620: jal         0x8001D850
    // 0x80022624: sh          $t7, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r15;
    func_8001D850(rdram, ctx);
        goto after_11;
    // 0x80022624: sh          $t7, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r15;
    after_11:
    // 0x80022628: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8002262C: lwc1        $f2, 0x0($s5)
    ctx->f2.u32l = MEM_W(ctx->r21, 0X0);
    // 0x80022630: nop

L_80022634:
    // 0x80022634: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x80022638: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x8002263C: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80022640: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x80022644: addiu       $s6, $s6, -0x48D8
    ctx->r22 = ADD32(ctx->r22, -0X48D8);
    // 0x80022648: addiu       $s3, $s3, -0x48DC
    ctx->r19 = ADD32(ctx->r19, -0X48DC);
    // 0x8002264C: bc1f        L_800226CC
    if (!c1cs) {
        // 0x80022650: addiu       $t0, $t0, -0x48D6
        ctx->r8 = ADD32(ctx->r8, -0X48D6);
            goto L_800226CC;
    }
    // 0x80022650: addiu       $t0, $t0, -0x48D6
    ctx->r8 = ADD32(ctx->r8, -0X48D6);
    // 0x80022654: lwc1        $f6, 0x0($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X0);
    // 0x80022658: lh          $v0, 0x0($s6)
    ctx->r2 = MEM_H(ctx->r22, 0X0);
    // 0x8002265C: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x80022660: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80022664: swc1        $f8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f8.u32l;
    // 0x80022668: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002266C: lwc1        $f0, 0x0($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X0);
    // 0x80022670: lh          $v1, 0x0($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X0);
    // 0x80022674: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x80022678: sll         $s4, $v0, 16
    ctx->r20 = S32(ctx->r2 << 16);
    // 0x8002267C: bc1f        L_80022690
    if (!c1cs) {
        // 0x80022680: sra         $t9, $s4, 16
        ctx->r25 = S32(SIGNED(ctx->r20) >> 16);
            goto L_80022690;
    }
    // 0x80022680: sra         $t9, $s4, 16
    ctx->r25 = S32(SIGNED(ctx->r20) >> 16);
    // 0x80022684: or          $s4, $t9, $zero
    ctx->r20 = ctx->r25 | 0;
    // 0x80022688: b           L_800226BC
    // 0x8002268C: swc1        $f14, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f14.u32l;
        goto L_800226BC;
    // 0x8002268C: swc1        $f14, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f14.u32l;
L_80022690:
    // 0x80022690: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80022694: nop

    // 0x80022698: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8002269C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800226A0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800226A4: nop

    // 0x800226A8: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800226AC: mfc1        $s4, $f6
    ctx->r20 = (int32_t)ctx->f6.u32l;
    // 0x800226B0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800226B4: sll         $t7, $s4, 16
    ctx->r15 = S32(ctx->r20 << 16);
    // 0x800226B8: sra         $s4, $t7, 16
    ctx->r20 = S32(SIGNED(ctx->r15) >> 16);
L_800226BC:
    // 0x800226BC: beq         $s4, $v1, L_800226D0
    if (ctx->r20 == ctx->r3) {
        // 0x800226C0: lh          $a1, 0x56($sp)
        ctx->r5 = MEM_H(ctx->r29, 0X56);
            goto L_800226D0;
    }
    // 0x800226C0: lh          $a1, 0x56($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X56);
    // 0x800226C4: jal         0x8001D850
    // 0x800226C8: sh          $s4, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r20;
    func_8001D850(rdram, ctx);
        goto after_12;
    // 0x800226C8: sh          $s4, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r20;
    after_12:
L_800226CC:
    // 0x800226CC: lh          $a1, 0x56($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X56);
L_800226D0:
    // 0x800226D0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800226D4: bltz        $a1, L_800226EC
    if (SIGNED(ctx->r5) < 0) {
        // 0x800226D8: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_800226EC;
    }
    // 0x800226D8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800226DC: lw          $a0, -0x48FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X48FC);
    // 0x800226E0: jal         0x8007D930
    // 0x800226E4: nop

    alSndpSetSound(rdram, ctx);
        goto after_13;
    // 0x800226E4: nop

    after_13:
    // 0x800226E8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_800226EC:
    // 0x800226EC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800226F0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800226F4: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800226F8: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800226FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80022700: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80022704: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80022708: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8002270C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80022710: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80022714: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80022718: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x8002271C: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80022720: jr          $ra
    // 0x80022724: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80022724: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80022728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80022728: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8002272C: addiu       $v0, $v0, -0x5880
    ctx->r2 = ADD32(ctx->r2, -0X5880);
    // 0x80022730: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80022734: nop

    // 0x80022738: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8002273C: jr          $ra
    // 0x80022740: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    return;
    // 0x80022740: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
;}
RECOMP_FUNC void func_80022744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80022744: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80022748: addiu       $t6, $zero, 0x3E80
    ctx->r14 = ADD32(0, 0X3E80);
    // 0x8002274C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80022750: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80022754: lbu         $a3, 0x4($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0X4);
    // 0x80022758: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8002275C: slti        $at, $a3, 0x8B
    ctx->r1 = SIGNED(ctx->r7) < 0X8B ? 1 : 0;
    // 0x80022760: bne         $at, $zero, L_80022778
    if (ctx->r1 != 0) {
        // 0x80022764: addiu       $at, $zero, 0xC9
        ctx->r1 = ADD32(0, 0XC9);
            goto L_80022778;
    }
    // 0x80022764: addiu       $at, $zero, 0xC9
    ctx->r1 = ADD32(0, 0XC9);
    // 0x80022768: beq         $a3, $at, L_80023564
    if (ctx->r7 == ctx->r1) {
        // 0x8002276C: nop
    
            goto L_80023564;
    }
    // 0x8002276C: nop

    // 0x80022770: b           L_80023720
    // 0x80022774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80023720;
    // 0x80022774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80022778:
    // 0x80022778: slti        $at, $a3, 0xA
    ctx->r1 = SIGNED(ctx->r7) < 0XA ? 1 : 0;
    // 0x8002277C: bne         $at, $zero, L_800227AC
    if (ctx->r1 != 0) {
        // 0x80022780: addiu       $t8, $a3, -0x1
        ctx->r24 = ADD32(ctx->r7, -0X1);
            goto L_800227AC;
    }
    // 0x80022780: addiu       $t8, $a3, -0x1
    ctx->r24 = ADD32(ctx->r7, -0X1);
    // 0x80022784: addiu       $t7, $a3, -0x80
    ctx->r15 = ADD32(ctx->r7, -0X80);
    // 0x80022788: sltiu       $at, $t7, 0xB
    ctx->r1 = ctx->r15 < 0XB ? 1 : 0;
    // 0x8002278C: beq         $at, $zero, L_8002371C
    if (ctx->r1 == 0) {
        // 0x80022790: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8002371C;
    }
    // 0x80022790: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80022794: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80022798: addu        $at, $at, $t7
    gpr jr_addend_800227A4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8002279C: lw          $t7, 0x5474($at)
    ctx->r15 = ADD32(ctx->r1, 0X5474);
    // 0x800227A0: nop

    // 0x800227A4: jr          $t7
    // 0x800227A8: nop

    switch (jr_addend_800227A4 >> 2) {
        case 0: goto L_800230AC; break;
        case 1: goto L_80023258; break;
        case 2: goto L_800232A8; break;
        case 3: goto L_8002336C; break;
        case 4: goto L_80023430; break;
        case 5: goto L_80023258; break;
        case 6: goto L_80023258; break;
        case 7: goto L_800232A8; break;
        case 8: goto L_8002336C; break;
        case 9: goto L_80023430; break;
        case 10: goto L_8002317C; break;
        default: switch_error(__func__, 0x800227A4, 0x80095474);
    }
    // 0x800227A8: nop

L_800227AC:
    // 0x800227AC: sltiu       $at, $t8, 0x9
    ctx->r1 = ctx->r24 < 0X9 ? 1 : 0;
    // 0x800227B0: beq         $at, $zero, L_8002371C
    if (ctx->r1 == 0) {
        // 0x800227B4: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_8002371C;
    }
    // 0x800227B4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800227B8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800227BC: addu        $at, $at, $t8
    gpr jr_addend_800227C8 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800227C0: lw          $t8, 0x54A0($at)
    ctx->r24 = ADD32(ctx->r1, 0X54A0);
    // 0x800227C4: nop

    // 0x800227C8: jr          $t8
    // 0x800227CC: nop

    switch (jr_addend_800227C8 >> 2) {
        case 0: goto L_800227D0; break;
        case 1: goto L_80022AEC; break;
        case 2: goto L_80022B74; break;
        case 3: goto L_80022C28; break;
        case 4: goto L_80022CDC; break;
        case 5: goto L_800228AC; break;
        case 6: goto L_800229CC; break;
        case 7: goto L_80022E70; break;
        case 8: goto L_80022F90; break;
        default: switch_error(__func__, 0x800227C8, 0x800954A0);
    }
    // 0x800227CC: nop

L_800227D0:
    // 0x800227D0: lhu         $t9, 0x8($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X8);
    // 0x800227D4: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x800227D8: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x800227DC: andi        $v0, $t6, 0xFFFF
    ctx->r2 = ctx->r14 & 0XFFFF;
    // 0x800227E0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800227E4: bne         $at, $zero, L_800227F8
    if (ctx->r1 != 0) {
        // 0x800227E8: sh          $t6, 0x8($a2)
        MEM_H(0X8, ctx->r6) = ctx->r14;
            goto L_800227F8;
    }
    // 0x800227E8: sh          $t6, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r14;
    // 0x800227EC: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x800227F0: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x800227F4: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
L_800227F8:
    // 0x800227F8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800227FC: bgez        $v0, L_80022814
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80022800: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80022814;
    }
    // 0x80022800: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80022804: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022808: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002280C: nop

    // 0x80022810: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80022814:
    // 0x80022814: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x80022818: bgez        $v1, L_80022830
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8002281C: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80022830;
    }
    // 0x8002281C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80022820: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022824: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80022828: nop

    // 0x8002282C: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_80022830:
    // 0x80022830: nop

    // 0x80022834: div.s       $f2, $f6, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80022838: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002283C: lwc1        $f10, 0x54C4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X54C4);
    // 0x80022840: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80022844: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80022848: mul.s       $f12, $f2, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x8002284C: jal         0x8007A640
    // 0x80022850: nop

    __sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x80022850: nop

    after_0:
    // 0x80022854: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80022858: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8002285C: lbu         $t7, 0xC($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0XC);
    // 0x80022860: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022864: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80022868: bgez        $t7, L_8002287C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8002286C: cvt.s.w     $f6, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8002287C;
    }
    // 0x8002286C: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80022870: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80022874: nop

    // 0x80022878: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_8002287C:
    // 0x8002287C: lbu         $t8, 0xD($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0XD);
    // 0x80022880: mul.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80022884: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80022888: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8002288C: bgez        $t8, L_800228A0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80022890: cvt.s.w     $f8, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
            goto L_800228A0;
    }
    // 0x80022890: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80022894: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80022898: nop

    // 0x8002289C: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
L_800228A0:
    // 0x800228A0: add.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x800228A4: b           L_8002371C
    // 0x800228A8: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
        goto L_8002371C;
    // 0x800228A8: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
L_800228AC:
    // 0x800228AC: lhu         $t9, 0x8($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X8);
    // 0x800228B0: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x800228B4: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x800228B8: andi        $v0, $t6, 0xFFFF
    ctx->r2 = ctx->r14 & 0XFFFF;
    // 0x800228BC: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800228C0: bne         $at, $zero, L_800228D4
    if (ctx->r1 != 0) {
        // 0x800228C4: sh          $t6, 0x8($a2)
        MEM_H(0X8, ctx->r6) = ctx->r14;
            goto L_800228D4;
    }
    // 0x800228C4: sh          $t6, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r14;
    // 0x800228C8: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x800228CC: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x800228D0: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
L_800228D4:
    // 0x800228D4: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x800228D8: bgez        $v0, L_800228F0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800228DC: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_800228F0;
    }
    // 0x800228DC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800228E0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800228E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800228E8: nop

    // 0x800228EC: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_800228F0:
    // 0x800228F0: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x800228F4: bgez        $v1, L_8002290C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x800228F8: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8002290C;
    }
    // 0x800228F8: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800228FC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022900: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80022904: nop

    // 0x80022908: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_8002290C:
    // 0x8002290C: nop

    // 0x80022910: div.s       $f2, $f4, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80022914: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80022918: lwc1        $f6, 0x54C8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X54C8);
    // 0x8002291C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80022920: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80022924: mul.s       $f12, $f2, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x80022928: jal         0x8007A640
    // 0x8002292C: nop

    __sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x8002292C: nop

    after_1:
    // 0x80022930: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80022934: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80022938: lbu         $t7, 0xC($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0XC);
    // 0x8002293C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022940: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80022944: bgez        $t7, L_80022958
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80022948: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80022958;
    }
    // 0x80022948: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002294C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80022950: nop

    // 0x80022954: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
L_80022958:
    // 0x80022958: mul.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8002295C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80022960: nop

    // 0x80022964: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x80022968: nop

    // 0x8002296C: bc1f        L_800229A0
    if (!c1cs) {
        // 0x80022970: nop
    
            goto L_800229A0;
    }
    // 0x80022970: nop

    // 0x80022974: lbu         $t8, 0xD($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0XD);
    // 0x80022978: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8002297C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80022980: bgez        $t8, L_80022994
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80022984: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80022994;
    }
    // 0x80022984: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80022988: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002298C: nop

    // 0x80022990: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_80022994:
    // 0x80022994: add.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x80022998: b           L_8002371C
    // 0x8002299C: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
        goto L_8002371C;
    // 0x8002299C: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
L_800229A0:
    // 0x800229A0: lbu         $t9, 0xD($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0XD);
    // 0x800229A4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800229A8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800229AC: bgez        $t9, L_800229C0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800229B0: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_800229C0;
    }
    // 0x800229B0: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800229B4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800229B8: nop

    // 0x800229BC: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
L_800229C0:
    // 0x800229C0: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x800229C4: b           L_8002371C
    // 0x800229C8: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
        goto L_8002371C;
    // 0x800229C8: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
L_800229CC:
    // 0x800229CC: lhu         $t6, 0x8($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X8);
    // 0x800229D0: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x800229D4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800229D8: andi        $v0, $t7, 0xFFFF
    ctx->r2 = ctx->r15 & 0XFFFF;
    // 0x800229DC: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800229E0: bne         $at, $zero, L_800229F4
    if (ctx->r1 != 0) {
        // 0x800229E4: sh          $t7, 0x8($a2)
        MEM_H(0X8, ctx->r6) = ctx->r15;
            goto L_800229F4;
    }
    // 0x800229E4: sh          $t7, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r15;
    // 0x800229E8: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x800229EC: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x800229F0: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
L_800229F4:
    // 0x800229F4: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x800229F8: bgez        $v0, L_80022A10
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800229FC: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80022A10;
    }
    // 0x800229FC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80022A00: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022A04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80022A08: nop

    // 0x80022A0C: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_80022A10:
    // 0x80022A10: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x80022A14: bgez        $v1, L_80022A2C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80022A18: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80022A2C;
    }
    // 0x80022A18: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80022A1C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022A20: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80022A24: nop

    // 0x80022A28: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
L_80022A2C:
    // 0x80022A2C: nop

    // 0x80022A30: div.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80022A34: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80022A38: lwc1        $f6, 0x54CC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X54CC);
    // 0x80022A3C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80022A40: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80022A44: mul.s       $f12, $f2, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x80022A48: jal         0x8007A640
    // 0x80022A4C: nop

    __sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x80022A4C: nop

    after_2:
    // 0x80022A50: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80022A54: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80022A58: lbu         $t8, 0xC($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0XC);
    // 0x80022A5C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022A60: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80022A64: bgez        $t8, L_80022A78
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80022A68: cvt.s.w     $f10, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80022A78;
    }
    // 0x80022A68: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80022A6C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80022A70: nop

    // 0x80022A74: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_80022A78:
    // 0x80022A78: mul.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80022A7C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80022A80: nop

    // 0x80022A84: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x80022A88: nop

    // 0x80022A8C: bc1f        L_80022AC0
    if (!c1cs) {
        // 0x80022A90: nop
    
            goto L_80022AC0;
    }
    // 0x80022A90: nop

    // 0x80022A94: lbu         $t9, 0xD($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0XD);
    // 0x80022A98: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022A9C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80022AA0: bgez        $t9, L_80022AB4
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80022AA4: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80022AB4;
    }
    // 0x80022AA4: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80022AA8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80022AAC: nop

    // 0x80022AB0: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80022AB4:
    // 0x80022AB4: sub.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x80022AB8: b           L_8002371C
    // 0x80022ABC: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
        goto L_8002371C;
    // 0x80022ABC: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
L_80022AC0:
    // 0x80022AC0: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
    // 0x80022AC4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022AC8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80022ACC: bgez        $t6, L_80022AE0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80022AD0: cvt.s.w     $f10, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80022AE0;
    }
    // 0x80022AD0: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80022AD4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80022AD8: nop

    // 0x80022ADC: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_80022AE0:
    // 0x80022AE0: add.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x80022AE4: b           L_8002371C
    // 0x80022AE8: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
        goto L_8002371C;
    // 0x80022AE8: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
L_80022AEC:
    // 0x80022AEC: lbu         $t7, 0x5($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X5);
    // 0x80022AF0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80022AF4: bne         $t7, $zero, L_80022B28
    if (ctx->r15 != 0) {
        // 0x80022AF8: nop
    
            goto L_80022B28;
    }
    // 0x80022AF8: nop

    // 0x80022AFC: lbu         $t8, 0xE($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0XE);
    // 0x80022B00: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022B04: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80022B08: bgez        $t8, L_80022B1C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80022B0C: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80022B1C;
    }
    // 0x80022B0C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80022B10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80022B14: nop

    // 0x80022B18: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80022B1C:
    // 0x80022B1C: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
    // 0x80022B20: b           L_80022B50
    // 0x80022B24: sb          $t9, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r25;
        goto L_80022B50;
    // 0x80022B24: sb          $t9, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r25;
L_80022B28:
    // 0x80022B28: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
    // 0x80022B2C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022B30: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80022B34: bgez        $t6, L_80022B48
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80022B38: cvt.s.w     $f4, $f6
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80022B48;
    }
    // 0x80022B38: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80022B3C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80022B40: nop

    // 0x80022B44: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
L_80022B48:
    // 0x80022B48: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80022B4C: sb          $zero, 0x5($a2)
    MEM_B(0X5, ctx->r6) = 0;
L_80022B50:
    // 0x80022B50: lhu         $t7, 0x6($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X6);
    // 0x80022B54: nop

    // 0x80022B58: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x80022B5C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80022B60: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80022B64: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80022B68: sll         $t8, $t8, 7
    ctx->r24 = S32(ctx->r24 << 7);
    // 0x80022B6C: b           L_8002371C
    // 0x80022B70: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
        goto L_8002371C;
    // 0x80022B70: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_80022B74:
    // 0x80022B74: lhu         $t9, 0x8($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X8);
    // 0x80022B78: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x80022B7C: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x80022B80: andi        $v0, $t6, 0xFFFF
    ctx->r2 = ctx->r14 & 0XFFFF;
    // 0x80022B84: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80022B88: beq         $at, $zero, L_80022B9C
    if (ctx->r1 == 0) {
        // 0x80022B8C: sh          $t6, 0x8($a2)
        MEM_H(0X8, ctx->r6) = ctx->r14;
            goto L_80022B9C;
    }
    // 0x80022B8C: sh          $t6, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r14;
    // 0x80022B90: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x80022B94: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x80022B98: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
L_80022B9C:
    // 0x80022B9C: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80022BA0: bgez        $v0, L_80022BB8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80022BA4: cvt.s.w     $f6, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80022BB8;
    }
    // 0x80022BA4: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80022BA8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022BAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80022BB0: nop

    // 0x80022BB4: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_80022BB8:
    // 0x80022BB8: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x80022BBC: bgez        $v1, L_80022BD4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80022BC0: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80022BD4;
    }
    // 0x80022BC0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80022BC4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022BC8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80022BCC: nop

    // 0x80022BD0: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80022BD4:
    // 0x80022BD4: lbu         $t7, 0xD($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0XD);
    // 0x80022BD8: div.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80022BDC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80022BE0: bgez        $t7, L_80022BF8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80022BE4: cvt.s.w     $f10, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80022BF8;
    }
    // 0x80022BE4: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80022BE8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022BEC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80022BF0: nop

    // 0x80022BF4: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
L_80022BF8:
    // 0x80022BF8: lbu         $t8, 0xC($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0XC);
    // 0x80022BFC: mul.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x80022C00: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80022C04: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022C08: bgez        $t8, L_80022C1C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80022C0C: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80022C1C;
    }
    // 0x80022C0C: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80022C10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80022C14: nop

    // 0x80022C18: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_80022C1C:
    // 0x80022C1C: sub.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x80022C20: b           L_8002371C
    // 0x80022C24: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
        goto L_8002371C;
    // 0x80022C24: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
L_80022C28:
    // 0x80022C28: lhu         $t9, 0x8($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X8);
    // 0x80022C2C: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x80022C30: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x80022C34: andi        $v0, $t6, 0xFFFF
    ctx->r2 = ctx->r14 & 0XFFFF;
    // 0x80022C38: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80022C3C: beq         $at, $zero, L_80022C50
    if (ctx->r1 == 0) {
        // 0x80022C40: sh          $t6, 0x8($a2)
        MEM_H(0X8, ctx->r6) = ctx->r14;
            goto L_80022C50;
    }
    // 0x80022C40: sh          $t6, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r14;
    // 0x80022C44: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x80022C48: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x80022C4C: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
L_80022C50:
    // 0x80022C50: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80022C54: bgez        $v0, L_80022C6C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80022C58: cvt.s.w     $f6, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80022C6C;
    }
    // 0x80022C58: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80022C5C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022C60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80022C64: nop

    // 0x80022C68: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_80022C6C:
    // 0x80022C6C: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x80022C70: bgez        $v1, L_80022C88
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80022C74: cvt.s.w     $f8, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80022C88;
    }
    // 0x80022C74: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80022C78: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022C7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80022C80: nop

    // 0x80022C84: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
L_80022C88:
    // 0x80022C88: lbu         $t7, 0xD($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0XD);
    // 0x80022C8C: div.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80022C90: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80022C94: bgez        $t7, L_80022CAC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80022C98: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80022CAC;
    }
    // 0x80022C98: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80022C9C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022CA0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80022CA4: nop

    // 0x80022CA8: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_80022CAC:
    // 0x80022CAC: lbu         $t8, 0xC($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0XC);
    // 0x80022CB0: mul.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x80022CB4: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80022CB8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022CBC: bgez        $t8, L_80022CD0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80022CC0: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80022CD0;
    }
    // 0x80022CC0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80022CC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80022CC8: nop

    // 0x80022CCC: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
L_80022CD0:
    // 0x80022CD0: add.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x80022CD4: b           L_8002371C
    // 0x80022CD8: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
        goto L_8002371C;
    // 0x80022CD8: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
L_80022CDC:
    // 0x80022CDC: lhu         $t9, 0x8($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X8);
    // 0x80022CE0: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x80022CE4: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x80022CE8: andi        $v0, $t6, 0xFFFF
    ctx->r2 = ctx->r14 & 0XFFFF;
    // 0x80022CEC: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80022CF0: bne         $at, $zero, L_80022D14
    if (ctx->r1 != 0) {
        // 0x80022CF4: sh          $t6, 0x8($a2)
        MEM_H(0X8, ctx->r6) = ctx->r14;
            goto L_80022D14;
    }
    // 0x80022CF4: sh          $t6, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r14;
    // 0x80022CF8: lbu         $t7, 0x5($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X5);
    // 0x80022CFC: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x80022D00: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80022D04: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x80022D08: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x80022D0C: sb          $t9, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r25;
    // 0x80022D10: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
L_80022D14:
    // 0x80022D14: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80022D18: bgez        $v0, L_80022D30
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80022D1C: cvt.s.w     $f6, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80022D30;
    }
    // 0x80022D1C: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80022D20: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022D24: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80022D28: nop

    // 0x80022D2C: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_80022D30:
    // 0x80022D30: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x80022D34: bgez        $v1, L_80022D4C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80022D38: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80022D4C;
    }
    // 0x80022D38: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80022D3C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022D40: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80022D44: nop

    // 0x80022D48: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80022D4C:
    // 0x80022D4C: lbu         $a3, 0x5($a2)
    ctx->r7 = MEM_BU(ctx->r6, 0X5);
    // 0x80022D50: div.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80022D54: beq         $a3, $zero, L_80022D7C
    if (ctx->r7 == 0) {
        // 0x80022D58: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80022D7C;
    }
    // 0x80022D58: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80022D5C: beq         $a3, $at, L_80022DA8
    if (ctx->r7 == ctx->r1) {
        // 0x80022D60: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80022DA8;
    }
    // 0x80022D60: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80022D64: beq         $a3, $at, L_80022DE0
    if (ctx->r7 == ctx->r1) {
        // 0x80022D68: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80022DE0;
    }
    // 0x80022D68: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80022D6C: beq         $a3, $at, L_80022E10
    if (ctx->r7 == ctx->r1) {
        // 0x80022D70: nop
    
            goto L_80022E10;
    }
    // 0x80022D70: nop

    // 0x80022D74: b           L_80022E48
    // 0x80022D78: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
        goto L_80022E48;
    // 0x80022D78: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
L_80022D7C:
    // 0x80022D7C: lbu         $t6, 0xC($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XC);
    // 0x80022D80: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022D84: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80022D88: bgez        $t6, L_80022D9C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80022D8C: cvt.s.w     $f10, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80022D9C;
    }
    // 0x80022D8C: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80022D90: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80022D94: nop

    // 0x80022D98: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
L_80022D9C:
    // 0x80022D9C: mul.s       $f2, $f10, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80022DA0: b           L_80022E48
    // 0x80022DA4: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
        goto L_80022E48;
    // 0x80022DA4: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
L_80022DA8:
    // 0x80022DA8: lbu         $t7, 0xC($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0XC);
    // 0x80022DAC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80022DB0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80022DB4: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80022DB8: sub.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x80022DBC: bgez        $t7, L_80022DD4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80022DC0: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80022DD4;
    }
    // 0x80022DC0: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80022DC4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022DC8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80022DCC: nop

    // 0x80022DD0: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_80022DD4:
    // 0x80022DD4: mul.s       $f2, $f4, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80022DD8: b           L_80022E48
    // 0x80022DDC: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
        goto L_80022E48;
    // 0x80022DDC: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
L_80022DE0:
    // 0x80022DE0: lbu         $t8, 0xC($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0XC);
    // 0x80022DE4: neg.s       $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = -ctx->f2.fl;
    // 0x80022DE8: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80022DEC: bgez        $t8, L_80022E04
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80022DF0: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80022E04;
    }
    // 0x80022DF0: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80022DF4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022DF8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80022DFC: nop

    // 0x80022E00: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
L_80022E04:
    // 0x80022E04: mul.s       $f2, $f6, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80022E08: b           L_80022E48
    // 0x80022E0C: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
        goto L_80022E48;
    // 0x80022E0C: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
L_80022E10:
    // 0x80022E10: lbu         $t9, 0xC($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0XC);
    // 0x80022E14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80022E18: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80022E1C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80022E20: sub.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x80022E24: bgez        $t9, L_80022E3C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80022E28: cvt.s.w     $f4, $f6
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80022E3C;
    }
    // 0x80022E28: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80022E2C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022E30: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80022E34: nop

    // 0x80022E38: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_80022E3C:
    // 0x80022E3C: mul.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80022E40: nop

    // 0x80022E44: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
L_80022E48:
    // 0x80022E48: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022E4C: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80022E50: bgez        $t6, L_80022E64
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80022E54: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80022E64;
    }
    // 0x80022E54: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80022E58: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80022E5C: nop

    // 0x80022E60: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80022E64:
    // 0x80022E64: add.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x80022E68: b           L_8002371C
    // 0x80022E6C: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
        goto L_8002371C;
    // 0x80022E6C: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
L_80022E70:
    // 0x80022E70: lhu         $t7, 0x8($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X8);
    // 0x80022E74: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x80022E78: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80022E7C: andi        $v0, $t8, 0xFFFF
    ctx->r2 = ctx->r24 & 0XFFFF;
    // 0x80022E80: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80022E84: bne         $at, $zero, L_80022EA8
    if (ctx->r1 != 0) {
        // 0x80022E88: sh          $t8, 0x8($a2)
        MEM_H(0X8, ctx->r6) = ctx->r24;
            goto L_80022EA8;
    }
    // 0x80022E88: sh          $t8, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r24;
    // 0x80022E8C: lbu         $t9, 0x5($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X5);
    // 0x80022E90: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x80022E94: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x80022E98: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80022E9C: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x80022EA0: sb          $t7, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r15;
    // 0x80022EA4: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
L_80022EA8:
    // 0x80022EA8: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80022EAC: bgez        $v0, L_80022EC4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80022EB0: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80022EC4;
    }
    // 0x80022EB0: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80022EB4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022EB8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80022EBC: nop

    // 0x80022EC0: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_80022EC4:
    // 0x80022EC4: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x80022EC8: bgez        $v1, L_80022EE0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80022ECC: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80022EE0;
    }
    // 0x80022ECC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80022ED0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022ED4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80022ED8: nop

    // 0x80022EDC: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80022EE0:
    // 0x80022EE0: lbu         $a3, 0x5($a2)
    ctx->r7 = MEM_BU(ctx->r6, 0X5);
    // 0x80022EE4: div.s       $f2, $f10, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80022EE8: beq         $a3, $zero, L_80022F00
    if (ctx->r7 == 0) {
        // 0x80022EEC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80022F00;
    }
    // 0x80022EEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80022EF0: beq         $a3, $at, L_80022F30
    if (ctx->r7 == ctx->r1) {
        // 0x80022EF4: nop
    
            goto L_80022F30;
    }
    // 0x80022EF4: nop

    // 0x80022EF8: b           L_80022F68
    // 0x80022EFC: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
        goto L_80022F68;
    // 0x80022EFC: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
L_80022F00:
    // 0x80022F00: lbu         $t8, 0xC($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0XC);
    // 0x80022F04: neg.s       $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = -ctx->f2.fl;
    // 0x80022F08: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80022F0C: bgez        $t8, L_80022F24
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80022F10: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80022F24;
    }
    // 0x80022F10: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80022F14: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022F18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80022F1C: nop

    // 0x80022F20: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
L_80022F24:
    // 0x80022F24: mul.s       $f2, $f4, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80022F28: b           L_80022F68
    // 0x80022F2C: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
        goto L_80022F68;
    // 0x80022F2C: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
L_80022F30:
    // 0x80022F30: lbu         $t9, 0xC($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0XC);
    // 0x80022F34: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80022F38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80022F3C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80022F40: sub.s       $f6, $f2, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x80022F44: bgez        $t9, L_80022F5C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80022F48: cvt.s.w     $f10, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80022F5C;
    }
    // 0x80022F48: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80022F4C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022F50: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80022F54: nop

    // 0x80022F58: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_80022F5C:
    // 0x80022F5C: mul.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80022F60: nop

    // 0x80022F64: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
L_80022F68:
    // 0x80022F68: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022F6C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80022F70: bgez        $t6, L_80022F84
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80022F74: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80022F84;
    }
    // 0x80022F74: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80022F78: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80022F7C: nop

    // 0x80022F80: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_80022F84:
    // 0x80022F84: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x80022F88: b           L_8002371C
    // 0x80022F8C: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
        goto L_8002371C;
    // 0x80022F8C: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
L_80022F90:
    // 0x80022F90: lhu         $t7, 0x8($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X8);
    // 0x80022F94: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x80022F98: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80022F9C: andi        $v0, $t8, 0xFFFF
    ctx->r2 = ctx->r24 & 0XFFFF;
    // 0x80022FA0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80022FA4: bne         $at, $zero, L_80022FC8
    if (ctx->r1 != 0) {
        // 0x80022FA8: sh          $t8, 0x8($a2)
        MEM_H(0X8, ctx->r6) = ctx->r24;
            goto L_80022FC8;
    }
    // 0x80022FA8: sh          $t8, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r24;
    // 0x80022FAC: lbu         $t9, 0x5($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X5);
    // 0x80022FB0: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x80022FB4: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x80022FB8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80022FBC: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x80022FC0: sb          $t7, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r15;
    // 0x80022FC4: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
L_80022FC8:
    // 0x80022FC8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80022FCC: bgez        $v0, L_80022FE4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80022FD0: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80022FE4;
    }
    // 0x80022FD0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80022FD4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022FD8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80022FDC: nop

    // 0x80022FE0: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80022FE4:
    // 0x80022FE4: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x80022FE8: bgez        $v1, L_80023000
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80022FEC: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80023000;
    }
    // 0x80022FEC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80022FF0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80022FF4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80022FF8: nop

    // 0x80022FFC: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_80023000:
    // 0x80023000: lbu         $a3, 0x5($a2)
    ctx->r7 = MEM_BU(ctx->r6, 0X5);
    // 0x80023004: div.s       $f2, $f6, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80023008: beq         $a3, $zero, L_80023020
    if (ctx->r7 == 0) {
        // 0x8002300C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80023020;
    }
    // 0x8002300C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80023010: beq         $a3, $at, L_8002304C
    if (ctx->r7 == ctx->r1) {
        // 0x80023014: nop
    
            goto L_8002304C;
    }
    // 0x80023014: nop

    // 0x80023018: b           L_80023084
    // 0x8002301C: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
        goto L_80023084;
    // 0x8002301C: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
L_80023020:
    // 0x80023020: lbu         $t8, 0xC($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0XC);
    // 0x80023024: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80023028: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8002302C: bgez        $t8, L_80023040
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80023030: cvt.s.w     $f8, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80023040;
    }
    // 0x80023030: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80023034: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80023038: nop

    // 0x8002303C: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_80023040:
    // 0x80023040: mul.s       $f2, $f8, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80023044: b           L_80023084
    // 0x80023048: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
        goto L_80023084;
    // 0x80023048: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
L_8002304C:
    // 0x8002304C: lbu         $t9, 0xC($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0XC);
    // 0x80023050: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80023054: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80023058: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8002305C: sub.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x80023060: bgez        $t9, L_80023078
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80023064: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80023078;
    }
    // 0x80023064: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80023068: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8002306C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80023070: nop

    // 0x80023074: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
L_80023078:
    // 0x80023078: mul.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8002307C: nop

    // 0x80023080: lbu         $t6, 0xD($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XD);
L_80023084:
    // 0x80023084: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80023088: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8002308C: bgez        $t6, L_800230A0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80023090: cvt.s.w     $f4, $f6
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
            goto L_800230A0;
    }
    // 0x80023090: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80023094: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80023098: nop

    // 0x8002309C: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
L_800230A0:
    // 0x800230A0: add.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x800230A4: b           L_8002371C
    // 0x800230A8: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
        goto L_8002371C;
    // 0x800230A8: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
L_800230AC:
    // 0x800230AC: lhu         $t7, 0x8($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X8);
    // 0x800230B0: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x800230B4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800230B8: andi        $v0, $t8, 0xFFFF
    ctx->r2 = ctx->r24 & 0XFFFF;
    // 0x800230BC: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800230C0: bne         $at, $zero, L_800230D4
    if (ctx->r1 != 0) {
        // 0x800230C4: sh          $t8, 0x8($a2)
        MEM_H(0X8, ctx->r6) = ctx->r24;
            goto L_800230D4;
    }
    // 0x800230C4: sh          $t8, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r24;
    // 0x800230C8: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x800230CC: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x800230D0: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
L_800230D4:
    // 0x800230D4: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x800230D8: bgez        $v0, L_800230F0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800230DC: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_800230F0;
    }
    // 0x800230DC: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800230E0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800230E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800230E8: nop

    // 0x800230EC: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_800230F0:
    // 0x800230F0: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x800230F4: bgez        $v1, L_8002310C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x800230F8: cvt.s.w     $f6, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8002310C;
    }
    // 0x800230F8: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800230FC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80023100: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80023104: nop

    // 0x80023108: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_8002310C:
    // 0x8002310C: nop

    // 0x80023110: div.s       $f2, $f10, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80023114: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80023118: lwc1        $f8, 0x54D0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X54D0);
    // 0x8002311C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80023120: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80023124: mul.s       $f12, $f2, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x80023128: jal         0x8007A640
    // 0x8002312C: nop

    __sinf_recomp(rdram, ctx);
        goto after_3;
    // 0x8002312C: nop

    after_3:
    // 0x80023130: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80023134: nop

    // 0x80023138: lwc1        $f4, 0xC($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0XC);
    // 0x8002313C: nop

    // 0x80023140: mul.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80023144: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80023148: nop

    // 0x8002314C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80023150: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80023154: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80023158: nop

    // 0x8002315C: cvt.w.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_S(ctx->f2.fl);
    // 0x80023160: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x80023164: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80023168: jal         0x8007D100
    // 0x8002316C: nop

    func_8007D100(rdram, ctx);
        goto after_4;
    // 0x8002316C: nop

    after_4:
    // 0x80023170: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80023174: b           L_8002371C
    // 0x80023178: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
        goto L_8002371C;
    // 0x80023178: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
L_8002317C:
    // 0x8002317C: lhu         $t6, 0x8($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X8);
    // 0x80023180: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x80023184: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80023188: andi        $v0, $t7, 0xFFFF
    ctx->r2 = ctx->r15 & 0XFFFF;
    // 0x8002318C: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80023190: bne         $at, $zero, L_800231A4
    if (ctx->r1 != 0) {
        // 0x80023194: sh          $t7, 0x8($a2)
        MEM_H(0X8, ctx->r6) = ctx->r15;
            goto L_800231A4;
    }
    // 0x80023194: sh          $t7, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r15;
    // 0x80023198: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x8002319C: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x800231A0: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
L_800231A4:
    // 0x800231A4: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x800231A8: bgez        $v0, L_800231C0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800231AC: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_800231C0;
    }
    // 0x800231AC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800231B0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800231B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800231B8: nop

    // 0x800231BC: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
L_800231C0:
    // 0x800231C0: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x800231C4: bgez        $v1, L_800231DC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x800231C8: cvt.s.w     $f6, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
            goto L_800231DC;
    }
    // 0x800231C8: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800231CC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800231D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800231D4: nop

    // 0x800231D8: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_800231DC:
    // 0x800231DC: nop

    // 0x800231E0: div.s       $f2, $f8, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f6.fl);
    // 0x800231E4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800231E8: lwc1        $f10, 0x54D4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X54D4);
    // 0x800231EC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800231F0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800231F4: mul.s       $f12, $f2, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x800231F8: jal         0x8007A640
    // 0x800231FC: nop

    __sinf_recomp(rdram, ctx);
        goto after_5;
    // 0x800231FC: nop

    after_5:
    // 0x80023200: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80023204: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80023208: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002320C: lwc1        $f4, 0xC($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0XC);
    // 0x80023210: nop

    // 0x80023214: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80023218: nop

    // 0x8002321C: mul.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80023220: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80023224: nop

    // 0x80023228: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8002322C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80023230: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80023234: nop

    // 0x80023238: cvt.w.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_S(ctx->f2.fl);
    // 0x8002323C: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x80023240: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80023244: jal         0x8007D100
    // 0x80023248: nop

    func_8007D100(rdram, ctx);
        goto after_6;
    // 0x80023248: nop

    after_6:
    // 0x8002324C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80023250: b           L_8002371C
    // 0x80023254: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
        goto L_8002371C;
    // 0x80023254: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
L_80023258:
    // 0x80023258: lbu         $t9, 0x5($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X5);
    // 0x8002325C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80023260: bne         $t9, $zero, L_80023278
    if (ctx->r25 != 0) {
        // 0x80023264: nop
    
            goto L_80023278;
    }
    // 0x80023264: nop

    // 0x80023268: lwc1        $f4, 0xC($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0XC);
    // 0x8002326C: sb          $t6, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r14;
    // 0x80023270: b           L_80023284
    // 0x80023274: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
        goto L_80023284;
    // 0x80023274: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
L_80023278:
    // 0x80023278: lwc1        $f8, 0x10($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X10);
    // 0x8002327C: sb          $zero, 0x5($a2)
    MEM_B(0X5, ctx->r6) = 0;
    // 0x80023280: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
L_80023284:
    // 0x80023284: lhu         $t7, 0x6($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X6);
    // 0x80023288: nop

    // 0x8002328C: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x80023290: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80023294: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80023298: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002329C: sll         $t8, $t8, 7
    ctx->r24 = S32(ctx->r24 << 7);
    // 0x800232A0: b           L_8002371C
    // 0x800232A4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
        goto L_8002371C;
    // 0x800232A4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_800232A8:
    // 0x800232A8: lhu         $t9, 0x8($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X8);
    // 0x800232AC: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x800232B0: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x800232B4: andi        $v0, $t6, 0xFFFF
    ctx->r2 = ctx->r14 & 0XFFFF;
    // 0x800232B8: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800232BC: beq         $at, $zero, L_800232D0
    if (ctx->r1 == 0) {
        // 0x800232C0: sh          $t6, 0x8($a2)
        MEM_H(0X8, ctx->r6) = ctx->r14;
            goto L_800232D0;
    }
    // 0x800232C0: sh          $t6, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r14;
    // 0x800232C4: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x800232C8: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x800232CC: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
L_800232D0:
    // 0x800232D0: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x800232D4: bgez        $v0, L_800232EC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800232D8: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_800232EC;
    }
    // 0x800232D8: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800232DC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800232E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800232E4: nop

    // 0x800232E8: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_800232EC:
    // 0x800232EC: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x800232F0: bgez        $v1, L_80023308
    if (SIGNED(ctx->r3) >= 0) {
        // 0x800232F4: cvt.s.w     $f6, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80023308;
    }
    // 0x800232F4: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800232F8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800232FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80023300: nop

    // 0x80023304: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_80023308:
    // 0x80023308: nop

    // 0x8002330C: div.s       $f2, $f10, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80023310: lw          $t7, 0x10($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X10);
    // 0x80023314: lw          $t8, 0xC($a2)
    ctx->r24 = MEM_W(ctx->r6, 0XC);
    // 0x80023318: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8002331C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80023320: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80023324: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80023328: mul.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x8002332C: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80023330: sub.s       $f2, $f6, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x80023334: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80023338: nop

    // 0x8002333C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80023340: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80023344: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80023348: nop

    // 0x8002334C: cvt.w.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    ctx->f8.u32l = CVT_W_S(ctx->f2.fl);
    // 0x80023350: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x80023354: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80023358: jal         0x8007D100
    // 0x8002335C: nop

    func_8007D100(rdram, ctx);
        goto after_7;
    // 0x8002335C: nop

    after_7:
    // 0x80023360: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80023364: b           L_8002371C
    // 0x80023368: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
        goto L_8002371C;
    // 0x80023368: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
L_8002336C:
    // 0x8002336C: lhu         $t6, 0x8($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X8);
    // 0x80023370: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x80023374: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80023378: andi        $v0, $t7, 0xFFFF
    ctx->r2 = ctx->r15 & 0XFFFF;
    // 0x8002337C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80023380: beq         $at, $zero, L_80023394
    if (ctx->r1 == 0) {
        // 0x80023384: sh          $t7, 0x8($a2)
        MEM_H(0X8, ctx->r6) = ctx->r15;
            goto L_80023394;
    }
    // 0x80023384: sh          $t7, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r15;
    // 0x80023388: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x8002338C: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x80023390: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
L_80023394:
    // 0x80023394: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80023398: bgez        $v0, L_800233B0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8002339C: cvt.s.w     $f10, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800233B0;
    }
    // 0x8002339C: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800233A0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800233A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800233A8: nop

    // 0x800233AC: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
L_800233B0:
    // 0x800233B0: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x800233B4: bgez        $v1, L_800233CC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x800233B8: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_800233CC;
    }
    // 0x800233B8: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800233BC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800233C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800233C4: nop

    // 0x800233C8: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_800233CC:
    // 0x800233CC: nop

    // 0x800233D0: div.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x800233D4: lw          $t8, 0x10($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X10);
    // 0x800233D8: lw          $t9, 0xC($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XC);
    // 0x800233DC: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x800233E0: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x800233E4: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800233E8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800233EC: mul.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x800233F0: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800233F4: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x800233F8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800233FC: nop

    // 0x80023400: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80023404: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80023408: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002340C: nop

    // 0x80023410: cvt.w.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    ctx->f8.u32l = CVT_W_S(ctx->f2.fl);
    // 0x80023414: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x80023418: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8002341C: jal         0x8007D100
    // 0x80023420: nop

    func_8007D100(rdram, ctx);
        goto after_8;
    // 0x80023420: nop

    after_8:
    // 0x80023424: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80023428: b           L_8002371C
    // 0x8002342C: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
        goto L_8002371C;
    // 0x8002342C: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
L_80023430:
    // 0x80023430: lhu         $t7, 0x8($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X8);
    // 0x80023434: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x80023438: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8002343C: andi        $v0, $t8, 0xFFFF
    ctx->r2 = ctx->r24 & 0XFFFF;
    // 0x80023440: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80023444: bne         $at, $zero, L_80023468
    if (ctx->r1 != 0) {
        // 0x80023448: sh          $t8, 0x8($a2)
        MEM_H(0X8, ctx->r6) = ctx->r24;
            goto L_80023468;
    }
    // 0x80023448: sh          $t8, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r24;
    // 0x8002344C: lbu         $t9, 0x5($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X5);
    // 0x80023450: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x80023454: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x80023458: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x8002345C: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x80023460: sb          $t7, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r15;
    // 0x80023464: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
L_80023468:
    // 0x80023468: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x8002346C: bgez        $v0, L_80023484
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80023470: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80023484;
    }
    // 0x80023470: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80023474: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80023478: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002347C: nop

    // 0x80023480: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_80023484:
    // 0x80023484: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x80023488: bgez        $v1, L_800234A0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8002348C: cvt.s.w     $f6, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
            goto L_800234A0;
    }
    // 0x8002348C: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80023490: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80023494: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80023498: nop

    // 0x8002349C: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_800234A0:
    // 0x800234A0: lbu         $a3, 0x5($a2)
    ctx->r7 = MEM_BU(ctx->r6, 0X5);
    // 0x800234A4: div.s       $f2, $f10, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x800234A8: beq         $a3, $zero, L_800234D0
    if (ctx->r7 == 0) {
        // 0x800234AC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800234D0;
    }
    // 0x800234AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800234B0: beq         $a3, $at, L_800234E4
    if (ctx->r7 == ctx->r1) {
        // 0x800234B4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800234E4;
    }
    // 0x800234B4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800234B8: beq         $a3, $at, L_80023500
    if (ctx->r7 == ctx->r1) {
        // 0x800234BC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80023500;
    }
    // 0x800234BC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800234C0: beq         $a3, $at, L_80023518
    if (ctx->r7 == ctx->r1) {
        // 0x800234C4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80023518;
    }
    // 0x800234C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800234C8: b           L_80023530
    // 0x800234CC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
        goto L_80023530;
    // 0x800234CC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
L_800234D0:
    // 0x800234D0: lwc1        $f8, 0xC($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0XC);
    // 0x800234D4: nop

    // 0x800234D8: mul.s       $f2, $f8, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x800234DC: b           L_80023530
    // 0x800234E0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
        goto L_80023530;
    // 0x800234E0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
L_800234E4:
    // 0x800234E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800234E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800234EC: lwc1        $f6, 0xC($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0XC);
    // 0x800234F0: sub.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x800234F4: mul.s       $f2, $f10, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x800234F8: b           L_80023530
    // 0x800234FC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
        goto L_80023530;
    // 0x800234FC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
L_80023500:
    // 0x80023500: lwc1        $f4, 0xC($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0XC);
    // 0x80023504: neg.s       $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = -ctx->f2.fl;
    // 0x80023508: mul.s       $f2, $f8, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8002350C: b           L_80023530
    // 0x80023510: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
        goto L_80023530;
    // 0x80023510: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80023514: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_80023518:
    // 0x80023518: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8002351C: lwc1        $f8, 0xC($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0XC);
    // 0x80023520: sub.s       $f6, $f2, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x80023524: mul.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80023528: nop

    // 0x8002352C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
L_80023530:
    // 0x80023530: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80023534: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80023538: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002353C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80023540: nop

    // 0x80023544: cvt.w.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = CVT_W_S(ctx->f2.fl);
    // 0x80023548: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x8002354C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80023550: jal         0x8007D100
    // 0x80023554: nop

    func_8007D100(rdram, ctx);
        goto after_9;
    // 0x80023554: nop

    after_9:
    // 0x80023558: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8002355C: b           L_8002371C
    // 0x80023560: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
        goto L_8002371C;
    // 0x80023560: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
L_80023564:
    // 0x80023564: lhu         $t9, 0x8($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X8);
    // 0x80023568: lhu         $t7, 0x6($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X6);
    // 0x8002356C: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x80023570: andi        $v0, $t6, 0xFFFF
    ctx->r2 = ctx->r14 & 0XFFFF;
    // 0x80023574: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80023578: bne         $at, $zero, L_80023588
    if (ctx->r1 != 0) {
        // 0x8002357C: sh          $t6, 0x8($a2)
        MEM_H(0X8, ctx->r6) = ctx->r14;
            goto L_80023588;
    }
    // 0x8002357C: sh          $t6, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r14;
    // 0x80023580: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x80023584: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
L_80023588:
    // 0x80023588: lbu         $t8, 0x5($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X5);
    // 0x8002358C: nop

    // 0x80023590: beq         $t8, $zero, L_80023670
    if (ctx->r24 == 0) {
        // 0x80023594: nop
    
            goto L_80023670;
    }
    // 0x80023594: nop

    // 0x80023598: bne         $v0, $zero, L_800235D8
    if (ctx->r2 != 0) {
        // 0x8002359C: nop
    
            goto L_800235D8;
    }
    // 0x8002359C: nop

    // 0x800235A0: jal         0x80020C3C
    // 0x800235A4: addiu       $a0, $zero, 0x61
    ctx->r4 = ADD32(0, 0X61);
    func_80020C3C(rdram, ctx);
        goto after_10;
    // 0x800235A4: addiu       $a0, $zero, 0x61
    ctx->r4 = ADD32(0, 0X61);
    after_10:
    // 0x800235A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800235AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800235B0: addiu       $t9, $zero, 0xE
    ctx->r25 = ADD32(0, 0XE);
    // 0x800235B4: swc1        $f0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f0.u32l;
    // 0x800235B8: sh          $t9, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r25;
    // 0x800235BC: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
    // 0x800235C0: lbu         $t6, 0x5($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X5);
    // 0x800235C4: nop

    // 0x800235C8: sll         $t7, $t6, 14
    ctx->r15 = S32(ctx->r14 << 14);
    // 0x800235CC: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800235D0: b           L_8002371C
    // 0x800235D4: sb          $zero, 0x5($a2)
    MEM_B(0X5, ctx->r6) = 0;
        goto L_8002371C;
    // 0x800235D4: sb          $zero, 0x5($a2)
    MEM_B(0X5, ctx->r6) = 0;
L_800235D8:
    // 0x800235D8: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x800235DC: bgez        $v0, L_800235F4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800235E0: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_800235F4;
    }
    // 0x800235E0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800235E4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800235E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800235EC: nop

    // 0x800235F0: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
L_800235F4:
    // 0x800235F4: lhu         $t8, 0x6($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0X6);
    // 0x800235F8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800235FC: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80023600: bgez        $t8, L_80023614
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80023604: cvt.s.w     $f6, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80023614;
    }
    // 0x80023604: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80023608: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002360C: nop

    // 0x80023610: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_80023614:
    // 0x80023614: nop

    // 0x80023618: div.s       $f2, $f8, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8002361C: lwc1        $f0, 0xC($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0XC);
    // 0x80023620: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80023624: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80023628: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8002362C: mul.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80023630: sub.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x80023634: mul.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80023638: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8002363C: nop

    // 0x80023640: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80023644: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80023648: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002364C: nop

    // 0x80023650: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80023654: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x80023658: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8002365C: jal         0x8007D100
    // 0x80023660: nop

    func_8007D100(rdram, ctx);
        goto after_11;
    // 0x80023660: nop

    after_11:
    // 0x80023664: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80023668: b           L_8002371C
    // 0x8002366C: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
        goto L_8002371C;
    // 0x8002366C: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
L_80023670:
    // 0x80023670: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80023674: bgez        $v0, L_8002368C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80023678: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8002368C;
    }
    // 0x80023678: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002367C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80023680: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80023684: nop

    // 0x80023688: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_8002368C:
    // 0x8002368C: lhu         $t6, 0x6($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X6);
    // 0x80023690: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80023694: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80023698: bgez        $t6, L_800236AC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8002369C: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_800236AC;
    }
    // 0x8002369C: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800236A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800236A4: nop

    // 0x800236A8: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
L_800236AC:
    // 0x800236AC: nop

    // 0x800236B0: div.s       $f2, $f4, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f10.fl);
    // 0x800236B4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800236B8: lwc1        $f6, 0x54D8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X54D8);
    // 0x800236BC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800236C0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800236C4: mul.s       $f12, $f2, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x800236C8: jal         0x8007A640
    // 0x800236CC: nop

    __sinf_recomp(rdram, ctx);
        goto after_12;
    // 0x800236CC: nop

    after_12:
    // 0x800236D0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800236D4: nop

    // 0x800236D8: lwc1        $f8, 0xC($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0XC);
    // 0x800236DC: nop

    // 0x800236E0: mul.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x800236E4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800236E8: nop

    // 0x800236EC: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800236F0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800236F4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800236F8: nop

    // 0x800236FC: cvt.w.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = CVT_W_S(ctx->f2.fl);
    // 0x80023700: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x80023704: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80023708: jal         0x8007D100
    // 0x8002370C: nop

    func_8007D100(rdram, ctx);
        goto after_13;
    // 0x8002370C: nop

    after_13:
    // 0x80023710: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80023714: nop

    // 0x80023718: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
L_8002371C:
    // 0x8002371C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80023720:
    // 0x80023720: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80023724: jr          $ra
    // 0x80023728: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80023728: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8002372C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002372C: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x80023730: addiu       $t3, $t3, -0x5880
    ctx->r11 = ADD32(ctx->r11, -0X5880);
    // 0x80023734: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80023738: lw          $v1, 0x0($t3)
    ctx->r3 = MEM_W(ctx->r11, 0X0);
    // 0x8002373C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80023740: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x80023744: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x80023748: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002374C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80023750: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80023754: andi        $t1, $a2, 0xFF
    ctx->r9 = ctx->r6 & 0XFF;
    // 0x80023758: beq         $v1, $zero, L_80023E40
    if (ctx->r3 == 0) {
        // 0x8002375C: sw          $zero, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = 0;
            goto L_80023E40;
    }
    // 0x8002375C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80023760: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80023764: lbu         $t2, 0x3F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X3F);
    // 0x80023768: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x8002376C: sb          $t1, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r9;
    // 0x80023770: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x80023774: slti        $at, $t1, 0x8B
    ctx->r1 = SIGNED(ctx->r9) < 0X8B ? 1 : 0;
    // 0x80023778: sll         $t8, $t2, 14
    ctx->r24 = S32(ctx->r10 << 14);
    // 0x8002377C: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x80023780: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80023784: bne         $at, $zero, L_800237A0
    if (ctx->r1 != 0) {
        // 0x80023788: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_800237A0;
    }
    // 0x80023788: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8002378C: addiu       $at, $zero, 0xC9
    ctx->r1 = ADD32(0, 0XC9);
    // 0x80023790: beq         $t1, $at, L_80023DD0
    if (ctx->r9 == ctx->r1) {
        // 0x80023794: lbu         $a0, 0x3B($sp)
        ctx->r4 = MEM_BU(ctx->r29, 0X3B);
            goto L_80023DD0;
    }
    // 0x80023794: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x80023798: b           L_80023E38
    // 0x8002379C: lui         $t9, 0x3F
    ctx->r25 = S32(0X3F << 16);
        goto L_80023E38;
    // 0x8002379C: lui         $t9, 0x3F
    ctx->r25 = S32(0X3F << 16);
L_800237A0:
    // 0x800237A0: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x800237A4: bne         $at, $zero, L_800237D4
    if (ctx->r1 != 0) {
        // 0x800237A8: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_800237D4;
    }
    // 0x800237A8: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x800237AC: addiu       $t9, $v0, -0x80
    ctx->r25 = ADD32(ctx->r2, -0X80);
    // 0x800237B0: sltiu       $at, $t9, 0xB
    ctx->r1 = ctx->r25 < 0XB ? 1 : 0;
    // 0x800237B4: beq         $at, $zero, L_80023E34
    if (ctx->r1 == 0) {
        // 0x800237B8: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_80023E34;
    }
    // 0x800237B8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800237BC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800237C0: addu        $at, $at, $t9
    gpr jr_addend_800237CC = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800237C4: lw          $t9, 0x54DC($at)
    ctx->r25 = ADD32(ctx->r1, 0X54DC);
    // 0x800237C8: nop

    // 0x800237CC: jr          $t9
    // 0x800237D0: nop

    switch (jr_addend_800237CC >> 2) {
        case 0: goto L_80023A2C; break;
        case 1: goto L_80023A5C; break;
        case 2: goto L_80023AD4; break;
        case 3: goto L_80023B30; break;
        case 4: goto L_80023D40; break;
        case 5: goto L_80023B90; break;
        case 6: goto L_80023C10; break;
        case 7: goto L_80023C94; break;
        case 8: goto L_80023CE8; break;
        case 9: goto L_80023D84; break;
        case 10: goto L_80023A2C; break;
        default: switch_error(__func__, 0x800237CC, 0x800954DC);
    }
    // 0x800237D0: nop

L_800237D4:
    // 0x800237D4: sltiu       $at, $t6, 0x9
    ctx->r1 = ctx->r14 < 0X9 ? 1 : 0;
    // 0x800237D8: beq         $at, $zero, L_80023E34
    if (ctx->r1 == 0) {
        // 0x800237DC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80023E34;
    }
    // 0x800237DC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800237E0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800237E4: addu        $at, $at, $t6
    gpr jr_addend_800237F0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800237E8: lw          $t6, 0x5508($at)
    ctx->r14 = ADD32(ctx->r1, 0X5508);
    // 0x800237EC: nop

    // 0x800237F0: jr          $t6
    // 0x800237F4: nop

    switch (jr_addend_800237F0 >> 2) {
        case 0: goto L_800237F8; break;
        case 1: goto L_80023894; break;
        case 2: goto L_800238D4; break;
        case 3: goto L_8002391C; break;
        case 4: goto L_80023968; break;
        case 5: goto L_80023848; break;
        case 6: goto L_80023848; break;
        case 7: goto L_800239CC; break;
        case 8: goto L_800239CC; break;
        default: switch_error(__func__, 0x800237F0, 0x80095508);
    }
    // 0x800237F4: nop

L_800237F8:
    // 0x800237F8: addiu       $t7, $zero, 0x103
    ctx->r15 = ADD32(0, 0X103);
    // 0x800237FC: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x80023800: subu        $t8, $t7, $a3
    ctx->r24 = SUB32(ctx->r15, ctx->r7);
    // 0x80023804: sh          $t8, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r24;
    // 0x80023808: addiu       $t7, $zero, 0x7F
    ctx->r15 = ADD32(0, 0X7F);
    // 0x8002380C: sra         $t6, $a0, 1
    ctx->r14 = S32(SIGNED(ctx->r4) >> 1);
    // 0x80023810: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x80023814: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x80023818: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8002381C: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x80023820: sb          $t6, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r14;
    // 0x80023824: sb          $t8, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r24;
    // 0x80023828: bgez        $t9, L_80023840
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8002382C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80023840;
    }
    // 0x8002382C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80023830: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80023834: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80023838: nop

    // 0x8002383C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80023840:
    // 0x80023840: b           L_80023E40
    // 0x80023844: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
        goto L_80023E40;
    // 0x80023844: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
L_80023848:
    // 0x80023848: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x8002384C: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80023850: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x80023854: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80023858: addiu       $t7, $zero, 0x103
    ctx->r15 = ADD32(0, 0X103);
    // 0x8002385C: subu        $t6, $t7, $a3
    ctx->r14 = SUB32(ctx->r15, ctx->r7);
    // 0x80023860: sra         $t8, $a0, 1
    ctx->r24 = S32(SIGNED(ctx->r4) >> 1);
    // 0x80023864: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x80023868: sh          $t6, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r14;
    // 0x8002386C: sb          $t8, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r24;
    // 0x80023870: sb          $v0, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r2;
    // 0x80023874: bgez        $t9, L_8002388C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80023878: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8002388C;
    }
    // 0x80023878: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002387C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80023880: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80023884: nop

    // 0x80023888: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_8002388C:
    // 0x8002388C: b           L_80023E40
    // 0x80023890: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
        goto L_80023E40;
    // 0x80023890: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
L_80023894:
    // 0x80023894: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x80023898: addiu       $t7, $zero, 0x100
    ctx->r15 = ADD32(0, 0X100);
    // 0x8002389C: subu        $t8, $t7, $a3
    ctx->r24 = SUB32(ctx->r15, ctx->r7);
    // 0x800238A0: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x800238A4: addiu       $t9, $zero, 0x7F
    ctx->r25 = ADD32(0, 0X7F);
    // 0x800238A8: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x800238AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800238B0: subu        $t7, $t9, $a0
    ctx->r15 = SUB32(ctx->r25, ctx->r4);
    // 0x800238B4: sh          $t8, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r24;
    // 0x800238B8: sh          $t8, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r24;
    // 0x800238BC: sb          $zero, 0x5($a2)
    MEM_B(0X5, ctx->r6) = 0;
    // 0x800238C0: sb          $t7, 0xE($a2)
    MEM_B(0XE, ctx->r6) = ctx->r15;
    // 0x800238C4: sb          $v0, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r2;
    // 0x800238C8: sb          $v0, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r2;
    // 0x800238CC: b           L_80023E40
    // 0x800238D0: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
        goto L_80023E40;
    // 0x800238D0: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
L_800238D4:
    // 0x800238D4: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x800238D8: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x800238DC: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x800238E0: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x800238E4: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x800238E8: subu        $t8, $t6, $a3
    ctx->r24 = SUB32(ctx->r14, ctx->r7);
    // 0x800238EC: sh          $t8, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r24;
    // 0x800238F0: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x800238F4: sb          $v0, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r2;
    // 0x800238F8: sb          $a0, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r4;
    // 0x800238FC: bgez        $t9, L_80023914
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80023900: cvt.s.w     $f8, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80023914;
    }
    // 0x80023900: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80023904: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80023908: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002390C: nop

    // 0x80023910: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
L_80023914:
    // 0x80023914: b           L_80023E40
    // 0x80023918: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
        goto L_80023E40;
    // 0x80023918: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
L_8002391C:
    // 0x8002391C: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x80023920: addiu       $t7, $zero, 0x100
    ctx->r15 = ADD32(0, 0X100);
    // 0x80023924: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x80023928: subu        $t6, $t7, $a3
    ctx->r14 = SUB32(ctx->r15, ctx->r7);
    // 0x8002392C: subu        $t9, $t8, $a0
    ctx->r25 = SUB32(ctx->r24, ctx->r4);
    // 0x80023930: andi        $t7, $t9, 0xFF
    ctx->r15 = ctx->r25 & 0XFF;
    // 0x80023934: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80023938: sh          $t6, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r14;
    // 0x8002393C: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x80023940: sb          $t9, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r25;
    // 0x80023944: sb          $a0, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r4;
    // 0x80023948: bgez        $t7, L_80023960
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8002394C: cvt.s.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80023960;
    }
    // 0x8002394C: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80023950: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80023954: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80023958: nop

    // 0x8002395C: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_80023960:
    // 0x80023960: b           L_80023E40
    // 0x80023964: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
        goto L_80023E40;
    // 0x80023964: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
L_80023968:
    // 0x80023968: addiu       $t6, $zero, 0x103
    ctx->r14 = ADD32(0, 0X103);
    // 0x8002396C: subu        $t8, $t6, $a3
    ctx->r24 = SUB32(ctx->r14, ctx->r7);
    // 0x80023970: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x80023974: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x80023978: bgez        $t8, L_80023988
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8002397C: sra         $t9, $t8, 2
        ctx->r25 = S32(SIGNED(ctx->r24) >> 2);
            goto L_80023988;
    }
    // 0x8002397C: sra         $t9, $t8, 2
    ctx->r25 = S32(SIGNED(ctx->r24) >> 2);
    // 0x80023980: addiu       $at, $t8, 0x3
    ctx->r1 = ADD32(ctx->r24, 0X3);
    // 0x80023984: sra         $t9, $at, 2
    ctx->r25 = S32(SIGNED(ctx->r1) >> 2);
L_80023988:
    // 0x80023988: sh          $t9, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r25;
    // 0x8002398C: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x80023990: sra         $t6, $a0, 1
    ctx->r14 = S32(SIGNED(ctx->r4) >> 1);
    // 0x80023994: subu        $t9, $t8, $t6
    ctx->r25 = SUB32(ctx->r24, ctx->r14);
    // 0x80023998: andi        $t7, $t9, 0xFF
    ctx->r15 = ctx->r25 & 0XFF;
    // 0x8002399C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800239A0: sb          $t6, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r14;
    // 0x800239A4: sb          $t9, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r25;
    // 0x800239A8: sb          $zero, 0x5($a2)
    MEM_B(0X5, ctx->r6) = 0;
    // 0x800239AC: bgez        $t7, L_800239C4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800239B0: cvt.s.w     $f6, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
            goto L_800239C4;
    }
    // 0x800239B0: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800239B4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800239B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800239BC: nop

    // 0x800239C0: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_800239C4:
    // 0x800239C4: b           L_80023E40
    // 0x800239C8: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
        goto L_80023E40;
    // 0x800239C8: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
L_800239CC:
    // 0x800239CC: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x800239D0: addiu       $t8, $zero, 0x103
    ctx->r24 = ADD32(0, 0X103);
    // 0x800239D4: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x800239D8: subu        $t6, $t8, $a3
    ctx->r14 = SUB32(ctx->r24, ctx->r7);
    // 0x800239DC: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x800239E0: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x800239E4: sra         $t7, $a0, 1
    ctx->r15 = S32(SIGNED(ctx->r4) >> 1);
    // 0x800239E8: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x800239EC: bgez        $t6, L_800239FC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800239F0: sra         $t9, $t6, 2
        ctx->r25 = S32(SIGNED(ctx->r14) >> 2);
            goto L_800239FC;
    }
    // 0x800239F0: sra         $t9, $t6, 2
    ctx->r25 = S32(SIGNED(ctx->r14) >> 2);
    // 0x800239F4: addiu       $at, $t6, 0x3
    ctx->r1 = ADD32(ctx->r14, 0X3);
    // 0x800239F8: sra         $t9, $at, 2
    ctx->r25 = S32(SIGNED(ctx->r1) >> 2);
L_800239FC:
    // 0x800239FC: sh          $t9, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r25;
    // 0x80023A00: sb          $t7, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r15;
    // 0x80023A04: sb          $v0, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r2;
    // 0x80023A08: sb          $zero, 0x5($a2)
    MEM_B(0X5, ctx->r6) = 0;
    // 0x80023A0C: bgez        $t8, L_80023A24
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80023A10: cvt.s.w     $f8, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80023A24;
    }
    // 0x80023A10: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80023A14: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80023A18: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80023A1C: nop

    // 0x80023A20: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
L_80023A24:
    // 0x80023A24: b           L_80023E40
    // 0x80023A28: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
        goto L_80023E40;
    // 0x80023A28: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
L_80023A2C:
    // 0x80023A2C: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x80023A30: jal         0x80020C3C
    // 0x80023A34: nop

    func_80020C3C(rdram, ctx);
        goto after_0;
    // 0x80023A34: nop

    after_0:
    // 0x80023A38: addiu       $t6, $zero, 0x103
    ctx->r14 = ADD32(0, 0X103);
    // 0x80023A3C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80023A40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80023A44: subu        $t9, $t6, $a3
    ctx->r25 = SUB32(ctx->r14, ctx->r7);
    // 0x80023A48: swc1        $f0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f0.u32l;
    // 0x80023A4C: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x80023A50: sh          $t9, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r25;
    // 0x80023A54: b           L_80023E40
    // 0x80023A58: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
        goto L_80023E40;
    // 0x80023A58: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
L_80023A5C:
    // 0x80023A5C: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x80023A60: addiu       $t7, $zero, 0x100
    ctx->r15 = ADD32(0, 0X100);
    // 0x80023A64: subu        $t6, $t7, $a3
    ctx->r14 = SUB32(ctx->r15, ctx->r7);
    // 0x80023A68: sh          $t6, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r14;
    // 0x80023A6C: sh          $t6, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r14;
    // 0x80023A70: jal         0x80020C3C
    // 0x80023A74: sb          $zero, 0x5($a2)
    MEM_B(0X5, ctx->r6) = 0;
    func_80020C3C(rdram, ctx);
        goto after_1;
    // 0x80023A74: sb          $zero, 0x5($a2)
    MEM_B(0X5, ctx->r6) = 0;
    after_1:
    // 0x80023A78: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80023A7C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x80023A80: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80023A84: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80023A88: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80023A8C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x80023A90: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80023A94: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80023A98: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80023A9C: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x80023AA0: jal         0x8007D100
    // 0x80023AA4: negu        $a0, $a1
    ctx->r4 = SUB32(0, ctx->r5);
    func_8007D100(rdram, ctx);
        goto after_2;
    // 0x80023AA4: negu        $a0, $a1
    ctx->r4 = SUB32(0, ctx->r5);
    after_2:
    // 0x80023AA8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80023AAC: nop

    // 0x80023AB0: swc1        $f0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f0.u32l;
    // 0x80023AB4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80023AB8: jal         0x8007D100
    // 0x80023ABC: nop

    func_8007D100(rdram, ctx);
        goto after_3;
    // 0x80023ABC: nop

    after_3:
    // 0x80023AC0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80023AC4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80023AC8: swc1        $f0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f0.u32l;
    // 0x80023ACC: b           L_80023E40
    // 0x80023AD0: swc1        $f0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f0.u32l;
        goto L_80023E40;
    // 0x80023AD0: swc1        $f0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f0.u32l;
L_80023AD4:
    // 0x80023AD4: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x80023AD8: addiu       $t7, $zero, 0x100
    ctx->r15 = ADD32(0, 0X100);
    // 0x80023ADC: subu        $t6, $t7, $a3
    ctx->r14 = SUB32(ctx->r15, ctx->r7);
    // 0x80023AE0: sh          $t6, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r14;
    // 0x80023AE4: jal         0x80020C3C
    // 0x80023AE8: sh          $t6, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r14;
    func_80020C3C(rdram, ctx);
        goto after_4;
    // 0x80023AE8: sh          $t6, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r14;
    after_4:
    // 0x80023AEC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80023AF0: nop

    // 0x80023AF4: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80023AF8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80023AFC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80023B00: nop

    // 0x80023B04: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80023B08: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x80023B0C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80023B10: sll         $t7, $a0, 1
    ctx->r15 = S32(ctx->r4 << 1);
    // 0x80023B14: sw          $t7, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r15;
    // 0x80023B18: sw          $a0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r4;
    // 0x80023B1C: jal         0x8007D100
    // 0x80023B20: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_8007D100(rdram, ctx);
        goto after_5;
    // 0x80023B20: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_5:
    // 0x80023B24: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80023B28: b           L_80023E40
    // 0x80023B2C: swc1        $f0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f0.u32l;
        goto L_80023E40;
    // 0x80023B2C: swc1        $f0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f0.u32l;
L_80023B30:
    // 0x80023B30: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x80023B34: addiu       $t8, $zero, 0x100
    ctx->r24 = ADD32(0, 0X100);
    // 0x80023B38: subu        $t9, $t8, $a3
    ctx->r25 = SUB32(ctx->r24, ctx->r7);
    // 0x80023B3C: sh          $t9, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r25;
    // 0x80023B40: jal         0x80020C3C
    // 0x80023B44: sh          $t9, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r25;
    func_80020C3C(rdram, ctx);
        goto after_6;
    // 0x80023B44: sh          $t9, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r25;
    after_6:
    // 0x80023B48: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80023B4C: nop

    // 0x80023B50: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80023B54: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80023B58: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80023B5C: nop

    // 0x80023B60: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80023B64: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80023B68: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80023B6C: negu        $a0, $a1
    ctx->r4 = SUB32(0, ctx->r5);
    // 0x80023B70: sll         $t8, $a1, 1
    ctx->r24 = S32(ctx->r5 << 1);
    // 0x80023B74: sw          $a0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r4;
    // 0x80023B78: sw          $t8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r24;
    // 0x80023B7C: jal         0x8007D100
    // 0x80023B80: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_8007D100(rdram, ctx);
        goto after_7;
    // 0x80023B80: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_7:
    // 0x80023B84: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80023B88: b           L_80023E40
    // 0x80023B8C: swc1        $f0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f0.u32l;
        goto L_80023E40;
    // 0x80023B8C: swc1        $f0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f0.u32l;
L_80023B90:
    // 0x80023B90: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x80023B94: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x80023B98: subu        $t7, $t6, $a3
    ctx->r15 = SUB32(ctx->r14, ctx->r7);
    // 0x80023B9C: sh          $t7, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r15;
    // 0x80023BA0: sh          $t7, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r15;
    // 0x80023BA4: jal         0x80020C3C
    // 0x80023BA8: sb          $zero, 0x5($a2)
    MEM_B(0X5, ctx->r6) = 0;
    func_80020C3C(rdram, ctx);
        goto after_8;
    // 0x80023BA8: sb          $zero, 0x5($a2)
    MEM_B(0X5, ctx->r6) = 0;
    after_8:
    // 0x80023BAC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80023BB0: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x80023BB4: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80023BB8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80023BBC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80023BC0: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x80023BC4: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80023BC8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80023BCC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80023BD0: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x80023BD4: jal         0x8007D100
    // 0x80023BD8: negu        $a0, $a1
    ctx->r4 = SUB32(0, ctx->r5);
    func_8007D100(rdram, ctx);
        goto after_9;
    // 0x80023BD8: negu        $a0, $a1
    ctx->r4 = SUB32(0, ctx->r5);
    after_9:
    // 0x80023BDC: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80023BE0: nop

    // 0x80023BE4: swc1        $f0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f0.u32l;
    // 0x80023BE8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80023BEC: jal         0x8007D100
    // 0x80023BF0: nop

    func_8007D100(rdram, ctx);
        goto after_10;
    // 0x80023BF0: nop

    after_10:
    // 0x80023BF4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80023BF8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80023BFC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80023C00: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80023C04: swc1        $f0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f0.u32l;
    // 0x80023C08: b           L_80023E40
    // 0x80023C0C: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
        goto L_80023E40;
    // 0x80023C0C: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
L_80023C10:
    // 0x80023C10: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x80023C14: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x80023C18: subu        $t7, $t6, $a3
    ctx->r15 = SUB32(ctx->r14, ctx->r7);
    // 0x80023C1C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80023C20: sh          $t7, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r15;
    // 0x80023C24: sh          $t7, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r15;
    // 0x80023C28: jal         0x80020C3C
    // 0x80023C2C: sb          $t8, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r24;
    func_80020C3C(rdram, ctx);
        goto after_11;
    // 0x80023C2C: sb          $t8, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r24;
    after_11:
    // 0x80023C30: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80023C34: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x80023C38: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80023C3C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80023C40: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80023C44: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x80023C48: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80023C4C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80023C50: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80023C54: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x80023C58: jal         0x8007D100
    // 0x80023C5C: negu        $a0, $a1
    ctx->r4 = SUB32(0, ctx->r5);
    func_8007D100(rdram, ctx);
        goto after_12;
    // 0x80023C5C: negu        $a0, $a1
    ctx->r4 = SUB32(0, ctx->r5);
    after_12:
    // 0x80023C60: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80023C64: nop

    // 0x80023C68: swc1        $f0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f0.u32l;
    // 0x80023C6C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80023C70: jal         0x8007D100
    // 0x80023C74: nop

    func_8007D100(rdram, ctx);
        goto after_13;
    // 0x80023C74: nop

    after_13:
    // 0x80023C78: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80023C7C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80023C80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80023C84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80023C88: swc1        $f0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f0.u32l;
    // 0x80023C8C: b           L_80023E40
    // 0x80023C90: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
        goto L_80023E40;
    // 0x80023C90: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
L_80023C94:
    // 0x80023C94: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x80023C98: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x80023C9C: subu        $t7, $t9, $a3
    ctx->r15 = SUB32(ctx->r25, ctx->r7);
    // 0x80023CA0: sh          $t7, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r15;
    // 0x80023CA4: jal         0x80020C3C
    // 0x80023CA8: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    func_80020C3C(rdram, ctx);
        goto after_14;
    // 0x80023CA8: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    after_14:
    // 0x80023CAC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80023CB0: nop

    // 0x80023CB4: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80023CB8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80023CBC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80023CC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80023CC4: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80023CC8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80023CCC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80023CD0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80023CD4: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x80023CD8: sw          $t6, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r14;
    // 0x80023CDC: sw          $a1, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r5;
    // 0x80023CE0: b           L_80023E40
    // 0x80023CE4: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
        goto L_80023E40;
    // 0x80023CE4: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
L_80023CE8:
    // 0x80023CE8: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x80023CEC: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x80023CF0: subu        $t7, $t9, $a3
    ctx->r15 = SUB32(ctx->r25, ctx->r7);
    // 0x80023CF4: sh          $t7, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r15;
    // 0x80023CF8: jal         0x80020C3C
    // 0x80023CFC: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    func_80020C3C(rdram, ctx);
        goto after_15;
    // 0x80023CFC: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    after_15:
    // 0x80023D00: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80023D04: nop

    // 0x80023D08: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80023D0C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80023D10: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80023D14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80023D18: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80023D1C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80023D20: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80023D24: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80023D28: negu        $t6, $a1
    ctx->r14 = SUB32(0, ctx->r5);
    // 0x80023D2C: sll         $t9, $a1, 1
    ctx->r25 = S32(ctx->r5 << 1);
    // 0x80023D30: sw          $t6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r14;
    // 0x80023D34: sw          $t9, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r25;
    // 0x80023D38: b           L_80023E40
    // 0x80023D3C: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
        goto L_80023E40;
    // 0x80023D3C: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
L_80023D40:
    // 0x80023D40: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x80023D44: jal         0x80020C3C
    // 0x80023D48: nop

    func_80020C3C(rdram, ctx);
        goto after_16;
    // 0x80023D48: nop

    after_16:
    // 0x80023D4C: addiu       $t7, $zero, 0x103
    ctx->r15 = ADD32(0, 0X103);
    // 0x80023D50: subu        $t8, $t7, $a3
    ctx->r24 = SUB32(ctx->r15, ctx->r7);
    // 0x80023D54: swc1        $f0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f0.u32l;
    // 0x80023D58: sb          $zero, 0x5($a2)
    MEM_B(0X5, ctx->r6) = 0;
    // 0x80023D5C: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x80023D60: bgez        $t8, L_80023D70
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80023D64: sra         $t6, $t8, 2
        ctx->r14 = S32(SIGNED(ctx->r24) >> 2);
            goto L_80023D70;
    }
    // 0x80023D64: sra         $t6, $t8, 2
    ctx->r14 = S32(SIGNED(ctx->r24) >> 2);
    // 0x80023D68: addiu       $at, $t8, 0x3
    ctx->r1 = ADD32(ctx->r24, 0X3);
    // 0x80023D6C: sra         $t6, $at, 2
    ctx->r14 = S32(SIGNED(ctx->r1) >> 2);
L_80023D70:
    // 0x80023D70: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80023D74: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80023D78: sh          $t6, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r14;
    // 0x80023D7C: b           L_80023E40
    // 0x80023D80: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
        goto L_80023E40;
    // 0x80023D80: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
L_80023D84:
    // 0x80023D84: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x80023D88: jal         0x80020C3C
    // 0x80023D8C: nop

    func_80020C3C(rdram, ctx);
        goto after_17;
    // 0x80023D8C: nop

    after_17:
    // 0x80023D90: addiu       $t7, $zero, 0x103
    ctx->r15 = ADD32(0, 0X103);
    // 0x80023D94: subu        $t8, $t7, $a3
    ctx->r24 = SUB32(ctx->r15, ctx->r7);
    // 0x80023D98: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80023D9C: swc1        $f0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f0.u32l;
    // 0x80023DA0: sb          $t9, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r25;
    // 0x80023DA4: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x80023DA8: bgez        $t8, L_80023DB8
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80023DAC: sra         $t6, $t8, 2
        ctx->r14 = S32(SIGNED(ctx->r24) >> 2);
            goto L_80023DB8;
    }
    // 0x80023DAC: sra         $t6, $t8, 2
    ctx->r14 = S32(SIGNED(ctx->r24) >> 2);
    // 0x80023DB0: addiu       $at, $t8, 0x3
    ctx->r1 = ADD32(ctx->r24, 0X3);
    // 0x80023DB4: sra         $t6, $at, 2
    ctx->r14 = S32(SIGNED(ctx->r1) >> 2);
L_80023DB8:
    // 0x80023DB8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80023DBC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80023DC0: sh          $t6, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r14;
    // 0x80023DC4: b           L_80023E40
    // 0x80023DC8: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
        goto L_80023E40;
    // 0x80023DC8: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
    // 0x80023DCC: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
L_80023DD0:
    // 0x80023DD0: jal         0x80020C3C
    // 0x80023DD4: nop

    func_80020C3C(rdram, ctx);
        goto after_18;
    // 0x80023DD4: nop

    after_18:
    // 0x80023DD8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80023DDC: addiu       $t7, $zero, 0x103
    ctx->r15 = ADD32(0, 0X103);
    // 0x80023DE0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80023DE4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80023DE8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80023DEC: subu        $t8, $t7, $a3
    ctx->r24 = SUB32(ctx->r15, ctx->r7);
    // 0x80023DF0: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80023DF4: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x80023DF8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80023DFC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80023E00: mtc1        $a1, $f8
    ctx->f8.u32l = ctx->r5;
    // 0x80023E04: sh          $t8, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r24;
    // 0x80023E08: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80023E0C: sb          $t2, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r10;
    // 0x80023E10: negu        $a0, $a1
    ctx->r4 = SUB32(0, ctx->r5);
    // 0x80023E14: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x80023E18: jal         0x8007D100
    // 0x80023E1C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_8007D100(rdram, ctx);
        goto after_19;
    // 0x80023E1C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_19:
    // 0x80023E20: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80023E24: addiu       $t6, $zero, 0x4000
    ctx->r14 = ADD32(0, 0X4000);
    // 0x80023E28: swc1        $f0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f0.u32l;
    // 0x80023E2C: b           L_80023E40
    // 0x80023E30: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
        goto L_80023E40;
    // 0x80023E30: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80023E34:
    // 0x80023E34: lui         $t9, 0x3F
    ctx->r25 = S32(0X3F << 16);
L_80023E38:
    // 0x80023E38: ori         $t9, $t9, 0xC000
    ctx->r25 = ctx->r25 | 0XC000;
    // 0x80023E3C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_80023E40:
    // 0x80023E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80023E44: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80023E48: jr          $ra
    // 0x80023E4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80023E4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80023E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80023E50: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80023E54: addiu       $v1, $v1, -0x5894
    ctx->r3 = ADD32(ctx->r3, -0X5894);
    // 0x80023E58: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80023E5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80023E60: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
    // 0x80023E64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80023E68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80023E6C: beq         $t6, $zero, L_80023F20
    if (ctx->r14 == 0) {
        // 0x80023E70: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_80023F20;
    }
    // 0x80023E70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80023E74: ori         $t7, $v0, 0x10
    ctx->r15 = ctx->r2 | 0X10;
    // 0x80023E78: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80023E7C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80023E80: lw          $t8, -0x5898($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5898);
    // 0x80023E84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80023E88: beq         $t8, $at, L_80023E9C
    if (ctx->r24 == ctx->r1) {
        // 0x80023E8C: lui         $a0, 0x800B
        ctx->r4 = S32(0X800B << 16);
            goto L_80023E9C;
    }
    // 0x80023E8C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80023E90: ori         $t0, $t7, 0x10
    ctx->r8 = ctx->r15 | 0X10;
    // 0x80023E94: b           L_80023F20
    // 0x80023E98: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
        goto L_80023F20;
    // 0x80023E98: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_80023E9C:
    // 0x80023E9C: lw          $a0, -0x58B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X58B0);
    // 0x80023EA0: lbu         $a1, 0x1B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1B);
    // 0x80023EA4: jal         0x8007D010
    // 0x80023EA8: nop

    alSeqpGetChlProgram(rdram, ctx);
        goto after_0;
    // 0x80023EA8: nop

    after_0:
    // 0x80023EAC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80023EB0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80023EB4: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x80023EB8: lbu         $a1, 0x1B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1B);
    // 0x80023EBC: lw          $a0, -0x58B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X58B0);
    // 0x80023EC0: jal         0x8007D0A0
    // 0x80023EC4: nop

    alSeqpGetChlVol(rdram, ctx);
        goto after_1;
    // 0x80023EC4: nop

    after_1:
    // 0x80023EC8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80023ECC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80023ED0: sb          $v0, 0x4($t2)
    MEM_B(0X4, ctx->r10) = ctx->r2;
    // 0x80023ED4: lbu         $a1, 0x1B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1B);
    // 0x80023ED8: lw          $a0, -0x58B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X58B0);
    // 0x80023EDC: jal         0x8007D0C0
    // 0x80023EE0: nop

    alSeqpGetChlPan(rdram, ctx);
        goto after_2;
    // 0x80023EE0: nop

    after_2:
    // 0x80023EE4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80023EE8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80023EEC: sb          $v0, 0x5($t3)
    MEM_B(0X5, ctx->r11) = ctx->r2;
    // 0x80023EF0: lbu         $a1, 0x1B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1B);
    // 0x80023EF4: lw          $a0, -0x58B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X58B0);
    // 0x80023EF8: jal         0x8007D0E0
    // 0x80023EFC: nop

    alSeqpGetChlFXMix(rdram, ctx);
        goto after_3;
    // 0x80023EFC: nop

    after_3:
    // 0x80023F00: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80023F04: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80023F08: addiu       $v1, $v1, -0x5894
    ctx->r3 = ADD32(ctx->r3, -0X5894);
    // 0x80023F0C: sb          $v0, 0x6($t4)
    MEM_B(0X6, ctx->r12) = ctx->r2;
    // 0x80023F10: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80023F14: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x80023F18: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x80023F1C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_80023F20:
    // 0x80023F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80023F24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80023F28: jr          $ra
    // 0x80023F2C: nop

    return;
    // 0x80023F2C: nop

;}
RECOMP_FUNC void func_80023F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80023F30: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80023F34: addiu       $v1, $v1, -0x5894
    ctx->r3 = ADD32(ctx->r3, -0X5894);
    // 0x80023F38: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80023F3C: sll         $a2, $a0, 16
    ctx->r6 = S32(ctx->r4 << 16);
    // 0x80023F40: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80023F44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80023F48: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x80023F4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80023F50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80023F54: beq         $t7, $zero, L_80024028
    if (ctx->r15 == 0) {
        // 0x80023F58: or          $a2, $t6, $zero
        ctx->r6 = ctx->r14 | 0;
            goto L_80024028;
    }
    // 0x80023F58: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80023F5C: ori         $t8, $v0, 0x10
    ctx->r24 = ctx->r2 | 0X10;
    // 0x80023F60: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x80023F64: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x80023F68: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80023F6C: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80023F70: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x80023F74: beq         $t1, $zero, L_80023F8C
    if (ctx->r9 == 0) {
        // 0x80023F78: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_80023F8C;
    }
    // 0x80023F78: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x80023F7C: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x80023F80: and         $t2, $t0, $at
    ctx->r10 = ctx->r8 & ctx->r1;
    // 0x80023F84: b           L_80024028
    // 0x80023F88: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
        goto L_80024028;
    // 0x80023F88: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_80023F8C:
    // 0x80023F8C: beq         $a2, $zero, L_80024004
    if (ctx->r6 == 0) {
        // 0x80023F90: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_80024004;
    }
    // 0x80023F90: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80023F94: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80023F98: lwc1        $f4, -0x5890($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5890);
    // 0x80023F9C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80023FA0: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x80023FA4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80023FA8: bc1f        L_80024004
    if (!c1cs) {
        // 0x80023FAC: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80024004;
    }
    // 0x80023FAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80023FB0: swc1        $f0, -0x588C($at)
    MEM_W(-0X588C, ctx->r1) = ctx->f0.u32l;
    // 0x80023FB4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80023FB8: lw          $a0, -0x58B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X58B0);
    // 0x80023FBC: sh          $zero, -0x5886($at)
    MEM_H(-0X5886, ctx->r1) = 0;
    // 0x80023FC0: jal         0x8007CE50
    // 0x80023FC4: sh          $a2, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r6;
    alSeqpSetVol(rdram, ctx);
        goto after_0;
    // 0x80023FC4: sh          $a2, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r6;
    after_0:
    // 0x80023FC8: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x80023FCC: lh          $a2, 0x1A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1A);
    // 0x80023FD0: lh          $t3, -0x5882($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X5882);
    // 0x80023FD4: mtc1        $a2, $f10
    ctx->f10.u32l = ctx->r6;
    // 0x80023FD8: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x80023FDC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80023FE0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80023FE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80023FE8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80023FEC: addiu       $v1, $v1, -0x5894
    ctx->r3 = ADD32(ctx->r3, -0X5894);
    // 0x80023FF0: div.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80023FF4: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x80023FF8: swc1        $f4, -0x5890($at)
    MEM_W(-0X5890, ctx->r1) = ctx->f4.u32l;
    // 0x80023FFC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80024000: nop

L_80024004:
    // 0x80024004: ori         $t4, $v0, 0x4
    ctx->r12 = ctx->r2 | 0X4;
    // 0x80024008: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8002400C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80024010: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024014: sw          $t5, -0x5898($at)
    MEM_W(-0X5898, ctx->r1) = ctx->r13;
    // 0x80024018: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8002401C: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x80024020: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80024024: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_80024028:
    // 0x80024028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002402C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80024030: jr          $ra
    // 0x80024034: nop

    return;
    // 0x80024034: nop

;}
RECOMP_FUNC void func_80024038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024038: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8002403C: lw          $v0, -0x5894($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5894);
    // 0x80024040: nop

    // 0x80024044: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x80024048: beq         $t6, $zero, L_80024058
    if (ctx->r14 == 0) {
        // 0x8002404C: andi        $t7, $v0, 0x1
        ctx->r15 = ctx->r2 & 0X1;
            goto L_80024058;
    }
    // 0x8002404C: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x80024050: jr          $ra
    // 0x80024054: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    return;
    // 0x80024054: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_80024058:
    // 0x80024058: beq         $t7, $zero, L_80024068
    if (ctx->r15 == 0) {
        // 0x8002405C: lui         $v0, 0x800B
        ctx->r2 = S32(0X800B << 16);
            goto L_80024068;
    }
    // 0x8002405C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80024060: jr          $ra
    // 0x80024064: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    return;
    // 0x80024064: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
L_80024068:
    // 0x80024068: lw          $v0, -0x5898($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5898);
    // 0x8002406C: nop

    // 0x80024070: jr          $ra
    // 0x80024074: nop

    return;
    // 0x80024074: nop

;}
RECOMP_FUNC void func_80024078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024078: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8002407C: addiu       $a1, $a1, -0x5894
    ctx->r5 = ADD32(ctx->r5, -0X5894);
    // 0x80024080: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80024084: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x80024088: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x8002408C: and         $v1, $t7, $at
    ctx->r3 = ctx->r15 & ctx->r1;
    // 0x80024090: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80024094: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80024098: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x8002409C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800240A0: bne         $v0, $zero, L_80024104
    if (ctx->r2 != 0) {
        // 0x800240A4: sw          $v1, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r3;
            goto L_80024104;
    }
    // 0x800240A4: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x800240A8: beq         $v0, $zero, L_800240B8
    if (ctx->r2 == 0) {
        // 0x800240AC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800240B8;
    }
    // 0x800240AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800240B0: b           L_800240D4
    // 0x800240B4: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
        goto L_800240D4;
    // 0x800240B4: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_800240B8:
    // 0x800240B8: andi        $t0, $v1, 0x1
    ctx->r8 = ctx->r3 & 0X1;
    // 0x800240BC: beq         $t0, $zero, L_800240CC
    if (ctx->r8 == 0) {
        // 0x800240C0: lui         $v0, 0x800B
        ctx->r2 = S32(0X800B << 16);
            goto L_800240CC;
    }
    // 0x800240C0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800240C4: b           L_800240D4
    // 0x800240C8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
        goto L_800240D4;
    // 0x800240C8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
L_800240CC:
    // 0x800240CC: lw          $v0, -0x5898($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5898);
    // 0x800240D0: nop

L_800240D4:
    // 0x800240D4: bne         $v0, $at, L_800240F8
    if (ctx->r2 != ctx->r1) {
        // 0x800240D8: lui         $a0, 0x800B
        ctx->r4 = S32(0X800B << 16);
            goto L_800240F8;
    }
    // 0x800240D8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800240DC: lw          $a0, -0x58B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X58B0);
    // 0x800240E0: jal         0x8007CED0
    // 0x800240E4: nop

    alSeqpStop(rdram, ctx);
        goto after_0;
    // 0x800240E4: nop

    after_0:
    // 0x800240E8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800240EC: addiu       $a1, $a1, -0x5894
    ctx->r5 = ADD32(ctx->r5, -0X5894);
    // 0x800240F0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x800240F4: nop

L_800240F8:
    // 0x800240F8: ori         $t1, $v1, 0x2
    ctx->r9 = ctx->r3 | 0X2;
    // 0x800240FC: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    // 0x80024100: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
L_80024104:
    // 0x80024104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80024108: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x8002410C: and         $t2, $v1, $at
    ctx->r10 = ctx->r3 & ctx->r1;
    // 0x80024110: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x80024114: jr          $ra
    // 0x80024118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80024118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002411C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002411C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80024120: lw          $t6, -0x5894($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5894);
    // 0x80024124: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80024128: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x8002412C: bne         $t7, $zero, L_8002413C
    if (ctx->r15 != 0) {
        // 0x80024130: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8002413C;
    }
    // 0x80024130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80024134: b           L_800241AC
    // 0x80024138: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800241AC;
    // 0x80024138: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002413C:
    // 0x8002413C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80024140: lw          $a0, -0x58B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X58B0);
    // 0x80024144: jal         0x8007CFD0
    // 0x80024148: nop

    alCSPGetTempo(rdram, ctx);
        goto after_0;
    // 0x80024148: nop

    after_0:
    // 0x8002414C: bne         $v0, $zero, L_8002415C
    if (ctx->r2 != 0) {
        // 0x80024150: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8002415C;
    }
    // 0x80024150: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80024154: b           L_800241AC
    // 0x80024158: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800241AC;
    // 0x80024158: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002415C:
    // 0x8002415C: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x80024160: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80024164: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80024168: lwc1        $f8, 0x552C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X552C);
    // 0x8002416C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80024170: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80024174: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80024178: nop

    // 0x8002417C: div.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f10.fl);
    // 0x80024180: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80024184: nop

    // 0x80024188: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8002418C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80024190: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80024194: nop

    // 0x80024198: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8002419C: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x800241A0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800241A4: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x800241A8: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
L_800241AC:
    // 0x800241AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800241B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800241B4: jr          $ra
    // 0x800241B8: nop

    return;
    // 0x800241B8: nop

;}
RECOMP_FUNC void func_800241BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800241BC: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x800241C0: lw          $t7, -0x5894($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5894);
    // 0x800241C4: sll         $a2, $a0, 16
    ctx->r6 = S32(ctx->r4 << 16);
    // 0x800241C8: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800241CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800241D0: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x800241D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800241D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800241DC: beq         $t8, $zero, L_80024248
    if (ctx->r24 == 0) {
        // 0x800241E0: or          $a2, $t6, $zero
        ctx->r6 = ctx->r14 | 0;
            goto L_80024248;
    }
    // 0x800241E0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x800241E4: bgtz        $t6, L_800241F0
    if (SIGNED(ctx->r14) > 0) {
        // 0x800241E8: lui         $at, 0x447A
        ctx->r1 = S32(0X447A << 16);
            goto L_800241F0;
    }
    // 0x800241E8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x800241EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_800241F0:
    // 0x800241F0: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x800241F4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800241F8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800241FC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80024200: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80024204: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80024208: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8002420C: lw          $a0, -0x58B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X58B0);
    // 0x80024210: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80024214: nop

    // 0x80024218: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8002421C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80024220: nop

    // 0x80024224: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80024228: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002422C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80024230: nop

    // 0x80024234: cvt.w.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80024238: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8002423C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80024240: jal         0x8007CF60
    // 0x80024244: nop

    alSeqpSetTempo(rdram, ctx);
        goto after_0;
    // 0x80024244: nop

    after_0:
L_80024248:
    // 0x80024248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002424C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80024250: jr          $ra
    // 0x80024254: nop

    return;
    // 0x80024254: nop

;}
RECOMP_FUNC void func_80024258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024258: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8002425C: lh          $v0, -0x5884($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X5884);
    // 0x80024260: nop

    // 0x80024264: bgez        $v0, L_80024274
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80024268: sra         $t6, $v0, 8
        ctx->r14 = S32(SIGNED(ctx->r2) >> 8);
            goto L_80024274;
    }
    // 0x80024268: sra         $t6, $v0, 8
    ctx->r14 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8002426C: addiu       $at, $v0, 0xFF
    ctx->r1 = ADD32(ctx->r2, 0XFF);
    // 0x80024270: sra         $t6, $at, 8
    ctx->r14 = S32(SIGNED(ctx->r1) >> 8);
L_80024274:
    // 0x80024274: sll         $t7, $t6, 24
    ctx->r15 = S32(ctx->r14 << 24);
    // 0x80024278: jr          $ra
    // 0x8002427C: sra         $v0, $t7, 24
    ctx->r2 = S32(SIGNED(ctx->r15) >> 24);
    return;
    // 0x8002427C: sra         $v0, $t7, 24
    ctx->r2 = S32(SIGNED(ctx->r15) >> 24);
;}
RECOMP_FUNC void func_80024280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024280: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80024284: lw          $t8, -0x5894($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5894);
    // 0x80024288: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002428C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80024290: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x80024294: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80024298: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8002429C: beq         $t9, $zero, L_800242FC
    if (ctx->r25 == 0) {
        // 0x800242A0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800242FC;
    }
    // 0x800242A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800242A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800242A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800242AC: jal         0x8001D8D8
    // 0x800242B0: swc1        $f4, -0x5890($at)
    MEM_W(-0X5890, ctx->r1) = ctx->f4.u32l;
    func_8001D8D8(rdram, ctx);
        goto after_0;
    // 0x800242B0: swc1        $f4, -0x5890($at)
    MEM_W(-0X5890, ctx->r1) = ctx->f4.u32l;
    after_0:
    // 0x800242B4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800242B8: addiu       $v1, $v1, -0x5882
    ctx->r3 = ADD32(ctx->r3, -0X5882);
    // 0x800242BC: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x800242C0: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x800242C4: lh          $t7, -0x5884($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X5884);
    // 0x800242C8: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    // 0x800242CC: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x800242D0: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800242D4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800242D8: lw          $a0, -0x58B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X58B0);
    // 0x800242DC: mflo        $a1
    ctx->r5 = lo;
    // 0x800242E0: nop

    // 0x800242E4: nop

    // 0x800242E8: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x800242EC: mflo        $t8
    ctx->r24 = lo;
    // 0x800242F0: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x800242F4: jal         0x8007CE50
    // 0x800242F8: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    alSeqpSetVol(rdram, ctx);
        goto after_1;
    // 0x800242F8: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    after_1:
L_800242FC:
    // 0x800242FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80024300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80024304: jr          $ra
    // 0x80024308: nop

    return;
    // 0x80024308: nop

;}
RECOMP_FUNC void func_8002430C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002430C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80024310: lw          $t8, -0x5894($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5894);
    // 0x80024314: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80024318: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002431C: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x80024320: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80024324: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x80024328: beq         $t9, $zero, L_80024380
    if (ctx->r25 == 0) {
        // 0x8002432C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80024380;
    }
    // 0x8002432C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80024330: jal         0x8001D8D8
    // 0x80024334: nop

    func_8001D8D8(rdram, ctx);
        goto after_0;
    // 0x80024334: nop

    after_0:
    // 0x80024338: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8002433C: addiu       $v1, $v1, -0x5884
    ctx->r3 = ADD32(ctx->r3, -0X5884);
    // 0x80024340: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x80024344: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80024348: lh          $t6, -0x5882($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X5882);
    // 0x8002434C: lh          $t7, 0x0($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X0);
    // 0x80024350: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80024354: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80024358: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8002435C: lw          $a0, -0x58B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X58B0);
    // 0x80024360: mflo        $a1
    ctx->r5 = lo;
    // 0x80024364: nop

    // 0x80024368: nop

    // 0x8002436C: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x80024370: mflo        $t8
    ctx->r24 = lo;
    // 0x80024374: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80024378: jal         0x8007CE50
    // 0x8002437C: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    alSeqpSetVol(rdram, ctx);
        goto after_1;
    // 0x8002437C: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    after_1:
L_80024380:
    // 0x80024380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80024384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80024388: jr          $ra
    // 0x8002438C: nop

    return;
    // 0x8002438C: nop

;}
RECOMP_FUNC void func_80024390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024390: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80024394: lw          $t6, -0x5898($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5898);
    // 0x80024398: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002439C: beq         $t6, $at, L_800243AC
    if (ctx->r14 == ctx->r1) {
        // 0x800243A0: nop
    
            goto L_800243AC;
    }
    // 0x800243A0: nop

    // 0x800243A4: jr          $ra
    // 0x800243A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800243A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800243AC:
    // 0x800243AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800243B0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x800243B4: lwc1        $f0, -0x5890($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5890);
    // 0x800243B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800243BC: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x800243C0: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x800243C4: bc1f        L_800243D4
    if (!c1cs) {
        // 0x800243C8: nop
    
            goto L_800243D4;
    }
    // 0x800243C8: nop

    // 0x800243CC: jr          $ra
    // 0x800243D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800243D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800243D4:
    // 0x800243D4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x800243D8: nop

    // 0x800243DC: bc1f        L_800243EC
    if (!c1cs) {
        // 0x800243E0: nop
    
            goto L_800243EC;
    }
    // 0x800243E0: nop

    // 0x800243E4: b           L_800243F0
    // 0x800243E8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_800243F0;
    // 0x800243E8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_800243EC:
    // 0x800243EC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_800243F0:
    // 0x800243F0: lh          $t7, -0x5882($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X5882);
    // 0x800243F4: lwc1        $f10, -0x588C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X588C);
    // 0x800243F8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800243FC: div.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80024400: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80024404: nop

    // 0x80024408: div.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8002440C: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x80024410: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80024414: nop

    // 0x80024418: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8002441C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80024420: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80024424: nop

    // 0x80024428: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8002442C: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x80024430: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80024434: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x80024438: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8002443C: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80024440: bc1f        L_80024454
    if (!c1cs) {
        // 0x80024444: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_80024454;
    }
    // 0x80024444: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x80024448: negu        $v1, $t0
    ctx->r3 = SUB32(0, ctx->r8);
    // 0x8002444C: sll         $t1, $v1, 16
    ctx->r9 = S32(ctx->r3 << 16);
    // 0x80024450: sra         $v1, $t1, 16
    ctx->r3 = S32(SIGNED(ctx->r9) >> 16);
L_80024454:
    // 0x80024454: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80024458: jr          $ra
    // 0x8002445C: nop

    return;
    // 0x8002445C: nop

;}
RECOMP_FUNC void func_80024460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024460: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80024464: lw          $t8, -0x5898($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5898);
    // 0x80024468: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8002446C: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80024470: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80024474: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80024478: bne         $t8, $at, L_800244D8
    if (ctx->r24 != ctx->r1) {
        // 0x8002447C: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_800244D8;
    }
    // 0x8002447C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80024480: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80024484: lw          $t9, -0x5894($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5894);
    // 0x80024488: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8002448C: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x80024490: bne         $t0, $zero, L_800244D8
    if (ctx->r8 != 0) {
        // 0x80024494: nop
    
            goto L_800244D8;
    }
    // 0x80024494: nop

    // 0x80024498: bgez        $t7, L_800244A4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8002449C: nop
    
            goto L_800244A4;
    }
    // 0x8002449C: nop

    // 0x800244A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_800244A4:
    // 0x800244A4: lh          $v0, -0x5882($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X5882);
    // 0x800244A8: mtc1        $a0, $f10
    ctx->f10.u32l = ctx->r4;
    // 0x800244AC: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x800244B0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800244B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800244B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800244BC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800244C0: swc1        $f4, -0x588C($at)
    MEM_W(-0X588C, ctx->r1) = ctx->f4.u32l;
    // 0x800244C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800244C8: div.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x800244CC: sh          $v0, -0x5886($at)
    MEM_H(-0X5886, ctx->r1) = ctx->r2;
    // 0x800244D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800244D4: swc1        $f18, -0x5890($at)
    MEM_W(-0X5890, ctx->r1) = ctx->f18.u32l;
L_800244D8:
    // 0x800244D8: jr          $ra
    // 0x800244DC: nop

    return;
    // 0x800244DC: nop

;}
RECOMP_FUNC void func_800244E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800244E0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800244E4: addiu       $v1, $v1, -0x5894
    ctx->r3 = ADD32(ctx->r3, -0X5894);
    // 0x800244E8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800244EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800244F0: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
    // 0x800244F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800244F8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800244FC: beq         $t6, $zero, L_800245A0
    if (ctx->r14 == 0) {
        // 0x80024500: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_800245A0;
    }
    // 0x80024500: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80024504: ori         $t7, $v0, 0x10
    ctx->r15 = ctx->r2 | 0X10;
    // 0x80024508: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x8002450C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80024510: beq         $t8, $zero, L_80024520
    if (ctx->r24 == 0) {
        // 0x80024514: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_80024520;
    }
    // 0x80024514: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80024518: b           L_8002453C
    // 0x8002451C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
        goto L_8002453C;
    // 0x8002451C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_80024520:
    // 0x80024520: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x80024524: beq         $t9, $zero, L_80024534
    if (ctx->r25 == 0) {
        // 0x80024528: lui         $v0, 0x800B
        ctx->r2 = S32(0X800B << 16);
            goto L_80024534;
    }
    // 0x80024528: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8002452C: b           L_8002453C
    // 0x80024530: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
        goto L_8002453C;
    // 0x80024530: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
L_80024534:
    // 0x80024534: lw          $v0, -0x5898($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5898);
    // 0x80024538: nop

L_8002453C:
    // 0x8002453C: beq         $v0, $zero, L_80024598
    if (ctx->r2 == 0) {
        // 0x80024540: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80024598;
    }
    // 0x80024540: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80024544: bne         $v0, $at, L_8002458C
    if (ctx->r2 != ctx->r1) {
        // 0x80024548: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8002458C;
    }
    // 0x80024548: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8002454C: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80024550: addiu       $s1, $s1, -0x58B0
    ctx->r17 = ADD32(ctx->r17, -0X58B0);
L_80024554:
    // 0x80024554: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80024558: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x8002455C: jal         0x8007CF00
    // 0x80024560: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alSeqpSetChlFXMix(rdram, ctx);
        goto after_0;
    // 0x80024560: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80024564: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80024568: andi        $t0, $s0, 0xFF
    ctx->r8 = ctx->r16 & 0XFF;
    // 0x8002456C: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x80024570: bne         $at, $zero, L_80024554
    if (ctx->r1 != 0) {
        // 0x80024574: or          $s0, $t0, $zero
        ctx->r16 = ctx->r8 | 0;
            goto L_80024554;
    }
    // 0x80024574: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x80024578: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8002457C: jal         0x8007CED0
    // 0x80024580: nop

    alSeqpStop(rdram, ctx);
        goto after_1;
    // 0x80024580: nop

    after_1:
    // 0x80024584: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80024588: addiu       $v1, $v1, -0x5894
    ctx->r3 = ADD32(ctx->r3, -0X5894);
L_8002458C:
    // 0x8002458C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80024590: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024594: sw          $t1, -0x5898($at)
    MEM_W(-0X5898, ctx->r1) = ctx->r9;
L_80024598:
    // 0x80024598: ori         $t2, $zero, 0x8000
    ctx->r10 = 0 | 0X8000;
    // 0x8002459C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_800245A0:
    // 0x800245A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800245A4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800245A8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800245AC: jr          $ra
    // 0x800245B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800245B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800245B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800245B4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800245B8: lh          $v0, -0x5888($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X5888);
    // 0x800245BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_800245C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800245C4: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800245C8: lw          $t6, -0x5894($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5894);
    // 0x800245CC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x800245D0: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x800245D4: bne         $t7, $zero, L_800245E4
    if (ctx->r15 != 0) {
        // 0x800245D8: nop
    
            goto L_800245E4;
    }
    // 0x800245D8: nop

    // 0x800245DC: jr          $ra
    // 0x800245E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800245E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800245E4:
    // 0x800245E4: lw          $t8, -0x58A4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X58A4);
    // 0x800245E8: nop

    // 0x800245EC: lh          $v0, 0x2($t8)
    ctx->r2 = MEM_H(ctx->r24, 0X2);
    // 0x800245F0: nop

    // 0x800245F4: jr          $ra
    // 0x800245F8: nop

    return;
    // 0x800245F8: nop

;}
RECOMP_FUNC void func_800245FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800245FC: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80024600: addiu       $a3, $a3, -0x5894
    ctx->r7 = ADD32(ctx->r7, -0X5894);
    // 0x80024604: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x80024608: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x8002460C: sra         $t6, $t0, 16
    ctx->r14 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80024610: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80024614: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x80024618: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002461C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80024620: or          $t0, $t6, $zero
    ctx->r8 = ctx->r14 | 0;
    // 0x80024624: bne         $t8, $zero, L_80024634
    if (ctx->r24 != 0) {
        // 0x80024628: or          $t2, $a1, $zero
        ctx->r10 = ctx->r5 | 0;
            goto L_80024634;
    }
    // 0x80024628: or          $t2, $a1, $zero
    ctx->r10 = ctx->r5 | 0;
    // 0x8002462C: b           L_80024894
    // 0x80024630: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80024894;
    // 0x80024630: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80024634:
    // 0x80024634: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80024638: lw          $v0, -0x58A4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X58A4);
    // 0x8002463C: nop

    // 0x80024640: lh          $t9, 0x2($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2);
    // 0x80024644: nop

    // 0x80024648: slt         $at, $t0, $t9
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8002464C: beq         $at, $zero, L_8002465C
    if (ctx->r1 == 0) {
        // 0x80024650: nop
    
            goto L_8002465C;
    }
    // 0x80024650: nop

    // 0x80024654: bgez        $t0, L_80024664
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80024658: ori         $t6, $zero, 0x8010
        ctx->r14 = 0 | 0X8010;
            goto L_80024664;
    }
    // 0x80024658: ori         $t6, $zero, 0x8010
    ctx->r14 = 0 | 0X8010;
L_8002465C:
    // 0x8002465C: b           L_80024894
    // 0x80024660: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80024894;
    // 0x80024660: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80024664:
    // 0x80024664: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x80024668: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x8002466C: addiu       $at, $zero, 0x5331
    ctx->r1 = ADD32(0, 0X5331);
    // 0x80024670: beq         $v1, $at, L_800246C0
    if (ctx->r3 == ctx->r1) {
        // 0x80024674: sll         $t7, $t0, 3
        ctx->r15 = S32(ctx->r8 << 3);
            goto L_800246C0;
    }
    // 0x80024674: sll         $t7, $t0, 3
    ctx->r15 = S32(ctx->r8 << 3);
    // 0x80024678: addiu       $at, $zero, 0x5332
    ctx->r1 = ADD32(0, 0X5332);
    // 0x8002467C: bne         $v1, $at, L_800246E8
    if (ctx->r3 != ctx->r1) {
        // 0x80024680: sll         $t7, $t0, 3
        ctx->r15 = S32(ctx->r8 << 3);
            goto L_800246E8;
    }
    // 0x80024680: sll         $t7, $t0, 3
    ctx->r15 = S32(ctx->r8 << 3);
    // 0x80024684: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80024688: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x8002468C: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x80024690: bgez        $t9, L_800246A8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80024694: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_800246A8;
    }
    // 0x80024694: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80024698: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8002469C: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x800246A0: b           L_80024894
    // 0x800246A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80024894;
    // 0x800246A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800246A8:
    // 0x800246A8: lw          $t8, -0x58A0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X58A0);
    // 0x800246AC: sll         $t9, $t0, 4
    ctx->r25 = S32(ctx->r8 << 4);
    // 0x800246B0: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x800246B4: lb          $a0, 0x1($t6)
    ctx->r4 = MEM_B(ctx->r14, 0X1);
    // 0x800246B8: b           L_800246EC
    // 0x800246BC: nop

        goto L_800246EC;
    // 0x800246BC: nop

L_800246C0:
    // 0x800246C0: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x800246C4: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x800246C8: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x800246CC: bgez        $t9, L_800246EC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800246D0: addiu       $a0, $zero, 0x7F
        ctx->r4 = ADD32(0, 0X7F);
            goto L_800246EC;
    }
    // 0x800246D0: addiu       $a0, $zero, 0x7F
    ctx->r4 = ADD32(0, 0X7F);
    // 0x800246D4: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x800246D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800246DC: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x800246E0: b           L_80024894
    // 0x800246E4: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
        goto L_80024894;
    // 0x800246E4: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
L_800246E8:
    // 0x800246E8: addiu       $a0, $zero, 0x7F
    ctx->r4 = ADD32(0, 0X7F);
L_800246EC:
    // 0x800246EC: jal         0x8001D8D8
    // 0x800246F0: nop

    func_8001D8D8(rdram, ctx);
        goto after_0;
    // 0x800246F0: nop

    after_0:
    // 0x800246F4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800246F8: addiu       $a1, $a1, -0x5884
    ctx->r5 = ADD32(ctx->r5, -0X5884);
    // 0x800246FC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80024700: beq         $t2, $t1, L_80024724
    if (ctx->r10 == ctx->r9) {
        // 0x80024704: sh          $v0, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r2;
            goto L_80024724;
    }
    // 0x80024704: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x80024708: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002470C: beq         $t2, $at, L_8002478C
    if (ctx->r10 == ctx->r1) {
        // 0x80024710: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8002478C;
    }
    // 0x80024710: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80024714: beq         $t2, $at, L_800247F0
    if (ctx->r10 == ctx->r1) {
        // 0x80024718: sll         $a0, $a2, 24
        ctx->r4 = S32(ctx->r6 << 24);
            goto L_800247F0;
    }
    // 0x80024718: sll         $a0, $a2, 24
    ctx->r4 = S32(ctx->r6 << 24);
    // 0x8002471C: b           L_80024804
    // 0x80024720: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
        goto L_80024804;
    // 0x80024720: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_80024724:
    // 0x80024724: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80024728: sll         $a0, $a2, 16
    ctx->r4 = S32(ctx->r6 << 16);
    // 0x8002472C: andi        $t8, $v1, 0x2
    ctx->r24 = ctx->r3 & 0X2;
    // 0x80024730: beq         $t8, $zero, L_80024740
    if (ctx->r24 == 0) {
        // 0x80024734: andi        $t9, $v1, 0x1
        ctx->r25 = ctx->r3 & 0X1;
            goto L_80024740;
    }
    // 0x80024734: andi        $t9, $v1, 0x1
    ctx->r25 = ctx->r3 & 0X1;
    // 0x80024738: b           L_80024758
    // 0x8002473C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
        goto L_80024758;
    // 0x8002473C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_80024740:
    // 0x80024740: beq         $t9, $zero, L_80024750
    if (ctx->r25 == 0) {
        // 0x80024744: lui         $v0, 0x800B
        ctx->r2 = S32(0X800B << 16);
            goto L_80024750;
    }
    // 0x80024744: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80024748: b           L_80024758
    // 0x8002474C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
        goto L_80024758;
    // 0x8002474C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
L_80024750:
    // 0x80024750: lw          $v0, -0x5898($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5898);
    // 0x80024754: nop

L_80024758:
    // 0x80024758: bne         $v0, $t1, L_80024814
    if (ctx->r2 != ctx->r9) {
        // 0x8002475C: sra         $t6, $a0, 16
        ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
            goto L_80024814;
    }
    // 0x8002475C: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80024760: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80024764: sh          $t0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r8;
    // 0x80024768: jal         0x80024460
    // 0x8002476C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    func_80024460(rdram, ctx);
        goto after_1;
    // 0x8002476C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    after_1:
    // 0x80024770: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80024774: addiu       $a3, $a3, -0x5894
    ctx->r7 = ADD32(ctx->r7, -0X5894);
    // 0x80024778: lh          $t0, 0x1A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1A);
    // 0x8002477C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80024780: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80024784: b           L_80024814
    // 0x80024788: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
        goto L_80024814;
    // 0x80024788: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_8002478C:
    // 0x8002478C: slti        $at, $a2, 0x2
    ctx->r1 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
    // 0x80024790: beq         $at, $zero, L_800247A4
    if (ctx->r1 == 0) {
        // 0x80024794: lui         $t7, 0x800B
        ctx->r15 = S32(0X800B << 16);
            goto L_800247A4;
    }
    // 0x80024794: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80024798: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x8002479C: b           L_80024814
    // 0x800247A0: nop

        goto L_80024814;
    // 0x800247A0: nop

L_800247A4:
    // 0x800247A4: lh          $t7, -0x5882($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X5882);
    // 0x800247A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800247AC: mtc1        $a2, $f10
    ctx->f10.u32l = ctx->r6;
    // 0x800247B0: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800247B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800247B8: swc1        $f4, -0x588C($at)
    MEM_W(-0X588C, ctx->r1) = ctx->f4.u32l;
    // 0x800247BC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800247C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800247C4: sh          $zero, -0x5886($at)
    MEM_H(-0X5886, ctx->r1) = 0;
    // 0x800247C8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800247CC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800247D0: div.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x800247D4: neg.s       $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = -ctx->f6.fl;
    // 0x800247D8: swc1        $f10, -0x5890($at)
    MEM_W(-0X5890, ctx->r1) = ctx->f10.u32l;
    // 0x800247DC: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x800247E0: nop

    // 0x800247E4: ori         $v1, $t8, 0x8
    ctx->r3 = ctx->r24 | 0X8;
    // 0x800247E8: b           L_80024814
    // 0x800247EC: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
        goto L_80024814;
    // 0x800247EC: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
L_800247F0:
    // 0x800247F0: sra         $t6, $a0, 24
    ctx->r14 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800247F4: jal         0x8001D8D8
    // 0x800247F8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8001D8D8(rdram, ctx);
        goto after_2;
    // 0x800247F8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_2:
    // 0x800247FC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x80024800: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
L_80024804:
    // 0x80024804: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024808: swc1        $f8, -0x5890($at)
    MEM_W(-0X5890, ctx->r1) = ctx->f8.u32l;
    // 0x8002480C: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80024810: nop

L_80024814:
    // 0x80024814: beq         $t2, $t1, L_8002486C
    if (ctx->r10 == ctx->r9) {
        // 0x80024818: andi        $t7, $v1, 0x2
        ctx->r15 = ctx->r3 & 0X2;
            goto L_8002486C;
    }
    // 0x80024818: andi        $t7, $v1, 0x2
    ctx->r15 = ctx->r3 & 0X2;
    // 0x8002481C: beq         $t7, $zero, L_8002482C
    if (ctx->r15 == 0) {
        // 0x80024820: andi        $t8, $v1, 0x1
        ctx->r24 = ctx->r3 & 0X1;
            goto L_8002482C;
    }
    // 0x80024820: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x80024824: b           L_80024844
    // 0x80024828: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
        goto L_80024844;
    // 0x80024828: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_8002482C:
    // 0x8002482C: beq         $t8, $zero, L_8002483C
    if (ctx->r24 == 0) {
        // 0x80024830: lui         $v0, 0x800B
        ctx->r2 = S32(0X800B << 16);
            goto L_8002483C;
    }
    // 0x80024830: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80024834: b           L_80024844
    // 0x80024838: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
        goto L_80024844;
    // 0x80024838: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
L_8002483C:
    // 0x8002483C: lw          $v0, -0x5898($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5898);
    // 0x80024840: nop

L_80024844:
    // 0x80024844: bne         $v0, $t1, L_8002486C
    if (ctx->r2 != ctx->r9) {
        // 0x80024848: lui         $a0, 0x800B
        ctx->r4 = S32(0X800B << 16);
            goto L_8002486C;
    }
    // 0x80024848: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8002484C: lw          $a0, -0x58B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X58B0);
    // 0x80024850: jal         0x8007CED0
    // 0x80024854: sh          $t0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r8;
    alSeqpStop(rdram, ctx);
        goto after_3;
    // 0x80024854: sh          $t0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r8;
    after_3:
    // 0x80024858: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8002485C: addiu       $a3, $a3, -0x5894
    ctx->r7 = ADD32(ctx->r7, -0X5894);
    // 0x80024860: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80024864: lh          $t0, 0x1A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1A);
    // 0x80024868: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_8002486C:
    // 0x8002486C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024870: sw          $t1, -0x5898($at)
    MEM_W(-0X5898, ctx->r1) = ctx->r9;
    // 0x80024874: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024878: sh          $t0, -0x5888($at)
    MEM_H(-0X5888, ctx->r1) = ctx->r8;
    // 0x8002487C: ori         $t9, $v1, 0x1
    ctx->r25 = ctx->r3 | 0X1;
    // 0x80024880: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x80024884: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x80024888: and         $t7, $t9, $at
    ctx->r15 = ctx->r25 & ctx->r1;
    // 0x8002488C: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x80024890: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80024894:
    // 0x80024894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80024898: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002489C: jr          $ra
    // 0x800248A0: nop

    return;
    // 0x800248A0: nop

;}
RECOMP_FUNC void func_800248A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800248A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800248A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800248AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800248B0: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x800248B4: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800248B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800248BC: jal         0x800245FC
    // 0x800248C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800245FC(rdram, ctx);
        goto after_0;
    // 0x800248C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800248C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800248C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800248CC: jr          $ra
    // 0x800248D0: nop

    return;
    // 0x800248D0: nop

;}
RECOMP_FUNC void func_800248D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800248D4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800248D8: addiu       $v0, $v0, -0xDD0
    ctx->r2 = ADD32(ctx->r2, -0XDD0);
    // 0x800248DC: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x800248E0: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x800248E4: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x800248E8: sw          $a2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r6;
    // 0x800248EC: sw          $a3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r7;
    // 0x800248F0: jr          $ra
    // 0x800248F4: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
    return;
    // 0x800248F4: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void func_800248F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800248F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800248FC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80024900: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80024904: lw          $a0, -0x58B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X58B0);
    // 0x80024908: jal         0x8007CED0
    // 0x8002490C: nop

    alSeqpStop(rdram, ctx);
        goto after_0;
    // 0x8002490C: nop

    after_0:
    // 0x80024910: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80024914: lw          $a0, -0x58B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X58B0);
    // 0x80024918: jal         0x8007AC30
    // 0x8002491C: nop

    alCSPDelete(rdram, ctx);
        goto after_1;
    // 0x8002491C: nop

    after_1:
    // 0x80024920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80024924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80024928: jr          $ra
    // 0x8002492C: nop

    return;
    // 0x8002492C: nop

;}
RECOMP_FUNC void func_80024930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024930: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80024934: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80024938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002493C: jal         0x80075600
    // 0x80024940: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    osInvalDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x80024940: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x80024944: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80024948: addiu       $s3, $s3, -0x58E8
    ctx->r19 = ADD32(ctx->r19, -0X58E8);
    // 0x8002494C: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    // 0x80024950: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80024954: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80024958: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8002495C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x80024960: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80024964: jal         0x80075470
    // 0x80024968: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    osPiStartDma_recomp(rdram, ctx);
        goto after_1;
    // 0x80024968: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_1:
    // 0x8002496C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80024970: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80024974: jal         0x80075330
    // 0x80024978: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x80024978: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x8002497C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80024980: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80024984: jr          $ra
    // 0x80024988: nop

    return;
    // 0x80024988: nop

;}
RECOMP_FUNC void func_8002498C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002498C: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x80024990: addiu       $s6, $s6, -0x5894
    ctx->r22 = ADD32(ctx->r22, -0X5894);
    // 0x80024994: lw          $v1, 0x0($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X0);
    // 0x80024998: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002499C: andi        $t6, $v1, 0x10
    ctx->r14 = ctx->r3 & 0X10;
    // 0x800249A0: bne         $t6, $zero, L_80024C58
    if (ctx->r14 != 0) {
        // 0x800249A4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80024C58;
    }
    // 0x800249A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800249A8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800249AC: lw          $a0, -0x58A4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X58A4);
    // 0x800249B0: addiu       $a1, $zero, 0x5332
    ctx->r5 = ADD32(0, 0X5332);
    // 0x800249B4: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    // 0x800249B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800249BC: bne         $a1, $t7, L_80024AD0
    if (ctx->r5 != ctx->r15) {
        // 0x800249C0: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_80024AD0;
    }
    // 0x800249C0: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x800249C4: lh          $t8, -0x5888($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X5888);
    // 0x800249C8: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800249CC: lw          $t6, -0x58A0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X58A0);
    // 0x800249D0: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x800249D4: addu        $v0, $t9, $t6
    ctx->r2 = ADD32(ctx->r25, ctx->r14);
    // 0x800249D8: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x800249DC: lw          $s5, 0x4($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X4);
    // 0x800249E0: lw          $t7, -0x589C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X589C);
    // 0x800249E4: lw          $s7, 0xC($v0)
    ctx->r23 = MEM_W(ctx->r2, 0XC);
    // 0x800249E8: lw          $s4, 0x8($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X8);
    // 0x800249EC: lbu         $a2, 0x0($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X0);
    // 0x800249F0: beq         $s5, $t7, L_80024AD0
    if (ctx->r21 == ctx->r15) {
        // 0x800249F4: andi        $t8, $v1, 0x100
        ctx->r24 = ctx->r3 & 0X100;
            goto L_80024AD0;
    }
    // 0x800249F4: andi        $t8, $v1, 0x100
    ctx->r24 = ctx->r3 & 0X100;
    // 0x800249F8: beq         $t8, $zero, L_80024A68
    if (ctx->r24 == 0) {
        // 0x800249FC: slti        $at, $s4, 0x4001
        ctx->r1 = SIGNED(ctx->r20) < 0X4001 ? 1 : 0;
            goto L_80024A68;
    }
    // 0x800249FC: slti        $at, $s4, 0x4001
    ctx->r1 = SIGNED(ctx->r20) < 0X4001 ? 1 : 0;
    // 0x80024A00: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80024A04: lw          $a0, -0x4750($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4750);
    // 0x80024A08: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x80024A0C: slti        $at, $a0, 0x4001
    ctx->r1 = SIGNED(ctx->r4) < 0X4001 ? 1 : 0;
    // 0x80024A10: bne         $at, $zero, L_80024A20
    if (ctx->r1 != 0) {
        // 0x80024A14: subu        $v0, $s4, $a0
        ctx->r2 = SUB32(ctx->r20, ctx->r4);
            goto L_80024A20;
    }
    // 0x80024A14: subu        $v0, $s4, $a0
    ctx->r2 = SUB32(ctx->r20, ctx->r4);
    // 0x80024A18: b           L_80024A24
    // 0x80024A1C: addiu       $s4, $zero, 0x4000
    ctx->r20 = ADD32(0, 0X4000);
        goto L_80024A24;
    // 0x80024A1C: addiu       $s4, $zero, 0x4000
    ctx->r20 = ADD32(0, 0X4000);
L_80024A20:
    // 0x80024A20: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
L_80024A24:
    // 0x80024A24: addiu       $fp, $fp, -0x58B4
    ctx->r30 = ADD32(ctx->r30, -0X58B4);
    // 0x80024A28: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x80024A2C: addu        $s2, $s5, $v0
    ctx->r18 = ADD32(ctx->r21, ctx->r2);
    // 0x80024A30: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    // 0x80024A34: jal         0x80024930
    // 0x80024A38: addu        $s0, $t9, $v0
    ctx->r16 = ADD32(ctx->r25, ctx->r2);
    func_80024930(rdram, ctx);
        goto after_0;
    // 0x80024A38: addu        $s0, $t9, $v0
    ctx->r16 = ADD32(ctx->r25, ctx->r2);
    after_0:
    // 0x80024A3C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80024A40: lw          $a0, -0x4750($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4750);
    // 0x80024A44: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024A48: subu        $a0, $a0, $s4
    ctx->r4 = SUB32(ctx->r4, ctx->r20);
    // 0x80024A4C: bne         $a0, $zero, L_80024C58
    if (ctx->r4 != 0) {
        // 0x80024A50: sw          $a0, -0x4750($at)
        MEM_W(-0X4750, ctx->r1) = ctx->r4;
            goto L_80024C58;
    }
    // 0x80024A50: sw          $a0, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = ctx->r4;
    // 0x80024A54: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x80024A58: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x80024A5C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80024A60: b           L_80024AB8
    // 0x80024A64: sw          $t7, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r15;
        goto L_80024AB8;
    // 0x80024A64: sw          $t7, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r15;
L_80024A68:
    // 0x80024A68: bne         $at, $zero, L_80024AA4
    if (ctx->r1 != 0) {
        // 0x80024A6C: lui         $fp, 0x800B
        ctx->r30 = S32(0X800B << 16);
            goto L_80024AA4;
    }
    // 0x80024A6C: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x80024A70: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x80024A74: addiu       $fp, $fp, -0x58B4
    ctx->r30 = ADD32(ctx->r30, -0X58B4);
    // 0x80024A78: ori         $t8, $v1, 0x100
    ctx->r24 = ctx->r3 | 0X100;
    // 0x80024A7C: addiu       $a0, $s4, -0x4000
    ctx->r4 = ADD32(ctx->r20, -0X4000);
    // 0x80024A80: sw          $t8, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r24;
    // 0x80024A84: lw          $s0, 0x0($fp)
    ctx->r16 = MEM_W(ctx->r30, 0X0);
    // 0x80024A88: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024A8C: sw          $a0, -0x4750($at)
    MEM_W(-0X4750, ctx->r1) = ctx->r4;
    // 0x80024A90: or          $s2, $s5, $zero
    ctx->r18 = ctx->r21 | 0;
    // 0x80024A94: jal         0x80024930
    // 0x80024A98: addiu       $s1, $zero, 0x4000
    ctx->r17 = ADD32(0, 0X4000);
    func_80024930(rdram, ctx);
        goto after_1;
    // 0x80024A98: addiu       $s1, $zero, 0x4000
    ctx->r17 = ADD32(0, 0X4000);
    after_1:
    // 0x80024A9C: b           L_80024C5C
    // 0x80024AA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80024C5C;
    // 0x80024AA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80024AA4:
    // 0x80024AA4: addiu       $fp, $fp, -0x58B4
    ctx->r30 = ADD32(ctx->r30, -0X58B4);
    // 0x80024AA8: lw          $s0, 0x0($fp)
    ctx->r16 = MEM_W(ctx->r30, 0X0);
    // 0x80024AAC: or          $s2, $s5, $zero
    ctx->r18 = ctx->r21 | 0;
    // 0x80024AB0: jal         0x80024930
    // 0x80024AB4: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    func_80024930(rdram, ctx);
        goto after_2;
    // 0x80024AB4: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    after_2:
L_80024AB8:
    // 0x80024AB8: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x80024ABC: jal         0x8007BFF0
    // 0x80024AC0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    alBnkfNew(rdram, ctx);
        goto after_3;
    // 0x80024AC0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_3:
    // 0x80024AC4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024AC8: b           L_80024C58
    // 0x80024ACC: sw          $s5, -0x589C($at)
    MEM_W(-0X589C, ctx->r1) = ctx->r21;
        goto L_80024C58;
    // 0x80024ACC: sw          $s5, -0x589C($at)
    MEM_W(-0X589C, ctx->r1) = ctx->r21;
L_80024AD0:
    // 0x80024AD0: andi        $t9, $v1, 0x200
    ctx->r25 = ctx->r3 & 0X200;
    // 0x80024AD4: bne         $t9, $zero, L_80024B78
    if (ctx->r25 != 0) {
        // 0x80024AD8: lui         $s0, 0x800B
        ctx->r16 = S32(0X800B << 16);
            goto L_80024B78;
    }
    // 0x80024AD8: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80024ADC: ori         $t6, $v1, 0x200
    ctx->r14 = ctx->r3 | 0X200;
    // 0x80024AE0: sw          $t6, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r14;
    // 0x80024AE4: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x80024AE8: addiu       $at, $zero, 0x5331
    ctx->r1 = ADD32(0, 0X5331);
    // 0x80024AEC: beq         $v0, $at, L_80024AFC
    if (ctx->r2 == ctx->r1) {
        // 0x80024AF0: lui         $t7, 0x800B
        ctx->r15 = S32(0X800B << 16);
            goto L_80024AFC;
    }
    // 0x80024AF0: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80024AF4: bne         $v0, $a1, L_80024B3C
    if (ctx->r2 != ctx->r5) {
        // 0x80024AF8: lui         $s0, 0x800B
        ctx->r16 = S32(0X800B << 16);
            goto L_80024B3C;
    }
    // 0x80024AF8: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
L_80024AFC:
    // 0x80024AFC: lh          $t7, -0x5888($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X5888);
    // 0x80024B00: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80024B04: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80024B08: addu        $v0, $a0, $t8
    ctx->r2 = ADD32(ctx->r4, ctx->r24);
    // 0x80024B0C: lw          $s4, 0x8($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X8);
    // 0x80024B10: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80024B14: andi        $t9, $s4, 0x1
    ctx->r25 = ctx->r20 & 0X1;
    // 0x80024B18: beq         $t9, $zero, L_80024B24
    if (ctx->r25 == 0) {
        // 0x80024B1C: nop
    
            goto L_80024B24;
    }
    // 0x80024B1C: nop

    // 0x80024B20: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80024B24:
    // 0x80024B24: lw          $s2, 0x0($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X0);
    // 0x80024B28: lw          $s0, -0x58AC($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X58AC);
    // 0x80024B2C: jal         0x80024930
    // 0x80024B30: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    func_80024930(rdram, ctx);
        goto after_4;
    // 0x80024B30: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    after_4:
    // 0x80024B34: b           L_80024C5C
    // 0x80024B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80024C5C;
    // 0x80024B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80024B3C:
    // 0x80024B3C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80024B40: addiu       $v0, $v0, -0xDD0
    ctx->r2 = ADD32(ctx->r2, -0XDD0);
    // 0x80024B44: lw          $s2, 0x0($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X0);
    // 0x80024B48: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x80024B4C: nop

    // 0x80024B50: subu        $s4, $t6, $s2
    ctx->r20 = SUB32(ctx->r14, ctx->r18);
    // 0x80024B54: andi        $t7, $s4, 0x1
    ctx->r15 = ctx->r20 & 0X1;
    // 0x80024B58: beq         $t7, $zero, L_80024B64
    if (ctx->r15 == 0) {
        // 0x80024B5C: nop
    
            goto L_80024B64;
    }
    // 0x80024B5C: nop

    // 0x80024B60: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80024B64:
    // 0x80024B64: lw          $s0, -0x58AC($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X58AC);
    // 0x80024B68: jal         0x80024930
    // 0x80024B6C: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    func_80024930(rdram, ctx);
        goto after_5;
    // 0x80024B6C: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    after_5:
    // 0x80024B70: b           L_80024C5C
    // 0x80024B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80024C5C;
    // 0x80024B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80024B78:
    // 0x80024B78: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x80024B7C: addiu       $fp, $fp, -0x58B4
    ctx->r30 = ADD32(ctx->r30, -0X58B4);
    // 0x80024B80: lw          $t8, 0x0($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X0);
    // 0x80024B84: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x80024B88: addiu       $s0, $s0, -0x58B0
    ctx->r16 = ADD32(ctx->r16, -0X58B0);
    // 0x80024B8C: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80024B90: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x80024B94: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80024B98: jal         0x8007C2A0
    // 0x80024B9C: nop

    alSeqpSetBank(rdram, ctx);
        goto after_6;
    // 0x80024B9C: nop

    after_6:
    // 0x80024BA0: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80024BA4: addiu       $s1, $s1, -0x58A8
    ctx->r17 = ADD32(ctx->r17, -0X58A8);
    // 0x80024BA8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80024BAC: lw          $a1, -0x58AC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X58AC);
    // 0x80024BB0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80024BB4: jal         0x8007C2E0
    // 0x80024BB8: nop

    alCSeqNew(rdram, ctx);
        goto after_7;
    // 0x80024BB8: nop

    after_7:
    // 0x80024BBC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80024BC0: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x80024BC4: jal         0x8007CE10
    // 0x80024BC8: nop

    alSeqpSetSeq(rdram, ctx);
        goto after_8;
    // 0x80024BC8: nop

    after_8:
    // 0x80024BCC: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x80024BD0: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80024BD4: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x80024BD8: beq         $t8, $zero, L_80024BF4
    if (ctx->r24 == 0) {
        // 0x80024BDC: lui         $t6, 0x800B
        ctx->r14 = S32(0X800B << 16);
            goto L_80024BF4;
    }
    // 0x80024BDC: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80024BE0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80024BE4: jal         0x8007CE50
    // 0x80024BE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    alSeqpSetVol(rdram, ctx);
        goto after_9;
    // 0x80024BE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80024BEC: b           L_80024C2C
    // 0x80024BF0: lw          $v1, 0x0($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X0);
        goto L_80024C2C;
    // 0x80024BF0: lw          $v1, 0x0($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X0);
L_80024BF4:
    // 0x80024BF4: lh          $t9, -0x5882($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X5882);
    // 0x80024BF8: lh          $t6, -0x5884($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X5884);
    // 0x80024BFC: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80024C00: multu       $t9, $t6
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80024C04: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80024C08: mflo        $a1
    ctx->r5 = lo;
    // 0x80024C0C: nop

    // 0x80024C10: nop

    // 0x80024C14: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x80024C18: mflo        $t7
    ctx->r15 = lo;
    // 0x80024C1C: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x80024C20: jal         0x8007CE50
    // 0x80024C24: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    alSeqpSetVol(rdram, ctx);
        goto after_10;
    // 0x80024C24: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    after_10:
    // 0x80024C28: lw          $v1, 0x0($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X0);
L_80024C2C:
    // 0x80024C2C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80024C30: andi        $t6, $v1, 0x2
    ctx->r14 = ctx->r3 & 0X2;
    // 0x80024C34: beq         $t6, $zero, L_80024C44
    if (ctx->r14 == 0) {
        // 0x80024C38: and         $t7, $v1, $at
        ctx->r15 = ctx->r3 & ctx->r1;
            goto L_80024C44;
    }
    // 0x80024C38: and         $t7, $v1, $at
    ctx->r15 = ctx->r3 & ctx->r1;
    // 0x80024C3C: b           L_80024C58
    // 0x80024C40: sw          $t7, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r15;
        goto L_80024C58;
    // 0x80024C40: sw          $t7, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r15;
L_80024C44:
    // 0x80024C44: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80024C48: jal         0x8007CE90
    // 0x80024C4C: nop

    alSeqpPlay(rdram, ctx);
        goto after_11;
    // 0x80024C4C: nop

    after_11:
    // 0x80024C50: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x80024C54: sw          $t8, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r24;
L_80024C58:
    // 0x80024C58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80024C5C:
    // 0x80024C5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80024C60: jr          $ra
    // 0x80024C64: nop

    return;
    // 0x80024C64: nop

;}
RECOMP_FUNC void func_80024C68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024C68: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80024C6C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80024C70: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80024C74: lw          $a0, -0x58B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X58B0);
    // 0x80024C78: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80024C7C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80024C80: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80024C84: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80024C88: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80024C8C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80024C90: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80024C94: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80024C98: jal         0x8007CEC0
    // 0x80024C9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    alSeqpGetState(rdram, ctx);
        goto after_0;
    // 0x80024C9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80024CA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80024CA4: beq         $v0, $a1, L_80024CC0
    if (ctx->r2 == ctx->r5) {
        // 0x80024CA8: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80024CC0;
    }
    // 0x80024CA8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80024CAC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80024CB0: beq         $v0, $at, L_80024CE8
    if (ctx->r2 == ctx->r1) {
        // 0x80024CB4: lui         $v1, 0x800B
        ctx->r3 = S32(0X800B << 16);
            goto L_80024CE8;
    }
    // 0x80024CB4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80024CB8: b           L_80024D08
    // 0x80024CBC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
        goto L_80024D08;
    // 0x80024CBC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
L_80024CC0:
    // 0x80024CC0: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80024CC4: lw          $t6, -0x5898($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5898);
    // 0x80024CC8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80024CCC: beq         $t6, $at, L_80024CDC
    if (ctx->r14 == ctx->r1) {
        // 0x80024CD0: lui         $v1, 0x800B
        ctx->r3 = S32(0X800B << 16);
            goto L_80024CDC;
    }
    // 0x80024CD0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80024CD4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024CD8: sw          $a1, -0x5898($at)
    MEM_W(-0X5898, ctx->r1) = ctx->r5;
L_80024CDC:
    // 0x80024CDC: lw          $v1, -0x5894($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5894);
    // 0x80024CE0: b           L_80024D54
    // 0x80024CE4: andi        $t6, $v1, 0x4
    ctx->r14 = ctx->r3 & 0X4;
        goto L_80024D54;
    // 0x80024CE4: andi        $t6, $v1, 0x4
    ctx->r14 = ctx->r3 & 0X4;
L_80024CE8:
    // 0x80024CE8: lw          $v1, -0x5894($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5894);
    // 0x80024CEC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024CF0: andi        $t7, $v1, 0x3
    ctx->r15 = ctx->r3 & 0X3;
    // 0x80024CF4: beq         $t7, $zero, L_80024D50
    if (ctx->r15 == 0) {
        // 0x80024CF8: sw          $v0, -0x5898($at)
        MEM_W(-0X5898, ctx->r1) = ctx->r2;
            goto L_80024D50;
    }
    // 0x80024CF8: sw          $v0, -0x5898($at)
    MEM_W(-0X5898, ctx->r1) = ctx->r2;
    // 0x80024CFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024D00: b           L_80024D50
    // 0x80024D04: sw          $a1, -0x5898($at)
    MEM_W(-0X5898, ctx->r1) = ctx->r5;
        goto L_80024D50;
    // 0x80024D04: sw          $a1, -0x5898($at)
    MEM_W(-0X5898, ctx->r1) = ctx->r5;
L_80024D08:
    // 0x80024D08: lw          $v1, -0x5894($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5894);
    // 0x80024D0C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024D10: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x80024D14: beq         $t8, $zero, L_80024D40
    if (ctx->r24 == 0) {
        // 0x80024D18: andi        $t9, $v1, 0x2
        ctx->r25 = ctx->r3 & 0X2;
            goto L_80024D40;
    }
    // 0x80024D18: andi        $t9, $v1, 0x2
    ctx->r25 = ctx->r3 & 0X2;
    // 0x80024D1C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024D20: sw          $a1, -0x5898($at)
    MEM_W(-0X5898, ctx->r1) = ctx->r5;
    // 0x80024D24: jal         0x8002498C
    // 0x80024D28: sw          $a2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r6;
    func_8002498C(rdram, ctx);
        goto after_1;
    // 0x80024D28: sw          $a2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r6;
    after_1:
    // 0x80024D2C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80024D30: lw          $v1, -0x5894($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5894);
    // 0x80024D34: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80024D38: b           L_80024D50
    // 0x80024D3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80024D50;
    // 0x80024D3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80024D40:
    // 0x80024D40: beq         $t9, $zero, L_80024D50
    if (ctx->r25 == 0) {
        // 0x80024D44: sw          $zero, -0x5898($at)
        MEM_W(-0X5898, ctx->r1) = 0;
            goto L_80024D50;
    }
    // 0x80024D44: sw          $zero, -0x5898($at)
    MEM_W(-0X5898, ctx->r1) = 0;
    // 0x80024D48: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024D4C: sw          $a1, -0x5898($at)
    MEM_W(-0X5898, ctx->r1) = ctx->r5;
L_80024D50:
    // 0x80024D50: andi        $t6, $v1, 0x4
    ctx->r14 = ctx->r3 & 0X4;
L_80024D54:
    // 0x80024D54: beq         $t6, $zero, L_80024D98
    if (ctx->r14 == 0) {
        // 0x80024D58: nop
    
            goto L_80024D98;
    }
    // 0x80024D58: nop

    // 0x80024D5C: bne         $a2, $zero, L_80024D90
    if (ctx->r6 != 0) {
        // 0x80024D60: lui         $a0, 0x800B
        ctx->r4 = S32(0X800B << 16);
            goto L_80024D90;
    }
    // 0x80024D60: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80024D64: lw          $a0, -0x58B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X58B0);
    // 0x80024D68: jal         0x8007CE90
    // 0x80024D6C: sw          $a2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r6;
    alSeqpPlay(rdram, ctx);
        goto after_2;
    // 0x80024D6C: sw          $a2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r6;
    after_2:
    // 0x80024D70: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80024D74: lw          $t7, -0x5894($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5894);
    // 0x80024D78: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x80024D7C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80024D80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024D84: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80024D88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80024D8C: sw          $t8, -0x5894($at)
    MEM_W(-0X5894, ctx->r1) = ctx->r24;
L_80024D90:
    // 0x80024D90: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024D94: sw          $a1, -0x5898($at)
    MEM_W(-0X5898, ctx->r1) = ctx->r5;
L_80024D98:
    // 0x80024D98: beq         $a2, $zero, L_80024FB0
    if (ctx->r6 == 0) {
        // 0x80024D9C: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_80024FB0;
    }
    // 0x80024D9C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024DA0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80024DA4: lwc1        $f2, -0x5890($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X5890);
    // 0x80024DA8: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80024DAC: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x80024DB0: addiu       $a2, $a2, -0x588C
    ctx->r6 = ADD32(ctx->r6, -0X588C);
    // 0x80024DB4: bc1f        L_80024EC8
    if (!c1cs) {
        // 0x80024DB8: nop
    
            goto L_80024EC8;
    }
    // 0x80024DB8: nop

    // 0x80024DBC: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80024DC0: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80024DC4: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x80024DC8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80024DCC: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x80024DD0: lh          $t9, -0x5882($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X5882);
    // 0x80024DD4: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80024DD8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80024DDC: nop

    // 0x80024DE0: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80024DE4: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x80024DE8: nop

    // 0x80024DEC: bc1f        L_80024E24
    if (!c1cs) {
        // 0x80024DF0: nop
    
            goto L_80024E24;
    }
    // 0x80024DF0: nop

    // 0x80024DF4: lw          $a0, -0x58B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X58B0);
    // 0x80024DF8: jal         0x8007CED0
    // 0x80024DFC: nop

    alSeqpStop(rdram, ctx);
        goto after_3;
    // 0x80024DFC: nop

    after_3:
    // 0x80024E00: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80024E04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024E08: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80024E0C: sw          $t6, -0x5898($at)
    MEM_W(-0X5898, ctx->r1) = ctx->r14;
    // 0x80024E10: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024E14: swc1        $f14, -0x5890($at)
    MEM_W(-0X5890, ctx->r1) = ctx->f14.u32l;
    // 0x80024E18: lwc1        $f2, -0x5890($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X5890);
    // 0x80024E1C: b           L_80024ECC
    // 0x80024E20: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
        goto L_80024ECC;
    // 0x80024E20: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
L_80024E24:
    // 0x80024E24: c.eq.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl == ctx->f0.fl;
    // 0x80024E28: nop

    // 0x80024E2C: bc1t        L_80024EC8
    if (c1cs) {
        // 0x80024E30: nop
    
            goto L_80024EC8;
    }
    // 0x80024E30: nop

    // 0x80024E34: sub.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80024E38: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80024E3C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80024E40: lh          $t6, -0x5886($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X5886);
    // 0x80024E44: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80024E48: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80024E4C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80024E50: nop

    // 0x80024E54: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80024E58: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x80024E5C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80024E60: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x80024E64: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80024E68: beq         $t9, $t6, L_80024EC8
    if (ctx->r25 == ctx->r14) {
        // 0x80024E6C: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_80024EC8;
    }
    // 0x80024E6C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80024E70: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80024E74: lh          $t7, -0x5884($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X5884);
    // 0x80024E78: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80024E7C: multu       $t9, $t7
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80024E80: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80024E84: lw          $a0, -0x58B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X58B0);
    // 0x80024E88: sh          $v0, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r2;
    // 0x80024E8C: mflo        $a1
    ctx->r5 = lo;
    // 0x80024E90: nop

    // 0x80024E94: nop

    // 0x80024E98: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x80024E9C: mflo        $t8
    ctx->r24 = lo;
    // 0x80024EA0: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80024EA4: jal         0x8007CE50
    // 0x80024EA8: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    alSeqpSetVol(rdram, ctx);
        goto after_4;
    // 0x80024EA8: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    after_4:
    // 0x80024EAC: lh          $v0, 0x42($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X42);
    // 0x80024EB0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024EB4: sh          $v0, -0x5886($at)
    MEM_H(-0X5886, ctx->r1) = ctx->r2;
    // 0x80024EB8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024EBC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80024EC0: lwc1        $f2, -0x5890($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X5890);
    // 0x80024EC4: nop

L_80024EC8:
    // 0x80024EC8: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
L_80024ECC:
    // 0x80024ECC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80024ED0: bc1f        L_80024FB0
    if (!c1cs) {
        // 0x80024ED4: addiu       $a2, $a2, -0x588C
        ctx->r6 = ADD32(ctx->r6, -0X588C);
            goto L_80024FB0;
    }
    // 0x80024ED4: addiu       $a2, $a2, -0x588C
    ctx->r6 = ADD32(ctx->r6, -0X588C);
    // 0x80024ED8: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80024EDC: lw          $t7, -0x5894($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5894);
    // 0x80024EE0: nop

    // 0x80024EE4: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x80024EE8: bne         $t8, $zero, L_80024FB4
    if (ctx->r24 != 0) {
        // 0x80024EEC: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80024FB4;
    }
    // 0x80024EEC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80024EF0: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80024EF4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80024EF8: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x80024EFC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80024F00: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x80024F04: lh          $v1, -0x5882($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X5882);
    // 0x80024F08: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80024F0C: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x80024F10: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80024F14: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80024F18: lh          $a0, -0x5886($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X5886);
    // 0x80024F1C: sra         $t9, $v0, 16
    ctx->r25 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80024F20: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x80024F24: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80024F28: bc1f        L_80024F38
    if (!c1cs) {
        // 0x80024F2C: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_80024F38;
    }
    // 0x80024F2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024F30: b           L_80024F64
    // 0x80024F34: swc1        $f14, -0x5890($at)
    MEM_W(-0X5890, ctx->r1) = ctx->f14.u32l;
        goto L_80024F64;
    // 0x80024F34: swc1        $f14, -0x5890($at)
    MEM_W(-0X5890, ctx->r1) = ctx->f14.u32l;
L_80024F38:
    // 0x80024F38: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80024F3C: nop

    // 0x80024F40: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80024F44: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80024F48: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80024F4C: nop

    // 0x80024F50: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80024F54: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x80024F58: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80024F5C: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x80024F60: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
L_80024F64:
    // 0x80024F64: beq         $v0, $a0, L_80024FB0
    if (ctx->r2 == ctx->r4) {
        // 0x80024F68: lui         $t9, 0x800B
        ctx->r25 = S32(0X800B << 16);
            goto L_80024FB0;
    }
    // 0x80024F68: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80024F6C: lh          $t9, -0x5884($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X5884);
    // 0x80024F70: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80024F74: multu       $v0, $t9
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80024F78: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80024F7C: lw          $a0, -0x58B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X58B0);
    // 0x80024F80: sh          $v0, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r2;
    // 0x80024F84: mflo        $a1
    ctx->r5 = lo;
    // 0x80024F88: nop

    // 0x80024F8C: nop

    // 0x80024F90: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x80024F94: mflo        $t6
    ctx->r14 = lo;
    // 0x80024F98: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x80024F9C: jal         0x8007CE50
    // 0x80024FA0: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    alSeqpSetVol(rdram, ctx);
        goto after_5;
    // 0x80024FA0: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    after_5:
    // 0x80024FA4: lh          $v0, 0x42($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X42);
    // 0x80024FA8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80024FAC: sh          $v0, -0x5886($at)
    MEM_H(-0X5886, ctx->r1) = ctx->r2;
L_80024FB0:
    // 0x80024FB0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80024FB4:
    // 0x80024FB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80024FB8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80024FBC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80024FC0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80024FC4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80024FC8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80024FCC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80024FD0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80024FD4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80024FD8: jr          $ra
    // 0x80024FDC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80024FDC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80024FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024FE0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80024FE4: jr          $ra
    // 0x80024FE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80024FE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80024FEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024FEC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80024FF0: addiu       $a1, $a1, -0x58B8
    ctx->r5 = ADD32(ctx->r5, -0X58B8);
    // 0x80024FF4: andi        $t8, $a0, 0x1
    ctx->r24 = ctx->r4 & 0X1;
    // 0x80024FF8: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    // 0x80024FFC: or          $t0, $zero, $t8
    ctx->r8 = 0 | ctx->r24;
    // 0x80025000: sb          $t0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r8;
    // 0x80025004: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80025008: lw          $v1, -0x48EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X48EC);
    // 0x8002500C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80025010: blez        $v1, L_80025088
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80025014: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80025088;
    }
    // 0x80025014: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80025018: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8002501C: addiu       $a2, $a2, -0x48F4
    ctx->r6 = ADD32(ctx->r6, -0X48F4);
    // 0x80025020: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_80025024:
    // 0x80025024: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x80025028: sll         $a1, $v1, 2
    ctx->r5 = S32(ctx->r3 << 2);
    // 0x8002502C: addu        $v0, $a0, $t1
    ctx->r2 = ADD32(ctx->r4, ctx->r9);
    // 0x80025030: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x80025034: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    // 0x80025038: beq         $a3, $t2, L_80025050
    if (ctx->r7 == ctx->r10) {
        // 0x8002503C: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_80025050;
    }
    // 0x8002503C: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x80025040: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80025044: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x80025048: b           L_8002507C
    // 0x8002504C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
        goto L_8002507C;
    // 0x8002504C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
L_80025050:
    // 0x80025050: lw          $t3, 0x8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X8);
    // 0x80025054: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80025058: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x8002505C: sw          $t4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r12;
    // 0x80025060: lw          $v1, -0x48EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X48EC);
    // 0x80025064: nop

    // 0x80025068: sll         $a1, $v1, 2
    ctx->r5 = S32(ctx->r3 << 2);
    // 0x8002506C: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x80025070: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80025074: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x80025078: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
L_8002507C:
    // 0x8002507C: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80025080: bne         $at, $zero, L_80025024
    if (ctx->r1 != 0) {
        // 0x80025084: nop
    
            goto L_80025024;
    }
    // 0x80025084: nop

L_80025088:
    // 0x80025088: jr          $ra
    // 0x8002508C: nop

    return;
    // 0x8002508C: nop

;}
RECOMP_FUNC void func_80025090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025090: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80025094: lw          $v0, -0x58BC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X58BC);
    // 0x80025098: jr          $ra
    return;
;}
RECOMP_FUNC void func_800250A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800250A0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800250A4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800250A8: jr          $ra
    // 0x800250AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800250AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800250B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800250B0: jr          $ra
    // 0x800250B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800250B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800250B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800250B8: jr          $ra
    // 0x800250BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800250BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800250C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800250C0: jr          $ra
    // 0x800250C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800250C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800250C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800250C8: jr          $ra
    // 0x800250CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800250CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800250D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800250D0: jr          $ra
    // 0x800250D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800250D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800250D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800250D8: jr          $ra
    // 0x800250DC: nop

    return;
    // 0x800250DC: nop

;}
RECOMP_FUNC void func_800250E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800250E0: jr          $ra
    // 0x800250E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800250E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800250E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800250E8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800250EC: addiu       $a0, $a0, -0x58D0
    ctx->r4 = ADD32(ctx->r4, -0X58D0);
    // 0x800250F0: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x800250F4: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x800250F8: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x800250FC: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x80025100: jr          $ra
    // 0x80025104: subu        $v0, $t9, $t8
    ctx->r2 = SUB32(ctx->r25, ctx->r24);
    return;
    // 0x80025104: subu        $v0, $t9, $t8
    ctx->r2 = SUB32(ctx->r25, ctx->r24);
;}
RECOMP_FUNC void func_80025108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025108: jr          $ra
    // 0x8002510C: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    return;
    // 0x8002510C: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
;}
RECOMP_FUNC void func_80025110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025110: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80025114: lw          $t6, -0xD50($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XD50);
    // 0x80025118: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8002511C: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x80025120: bne         $t7, $zero, L_80025130
    if (ctx->r15 != 0) {
        // 0x80025124: nop
    
            goto L_80025130;
    }
    // 0x80025124: nop

    // 0x80025128: jr          $ra
    // 0x8002512C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002512C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80025130:
    // 0x80025130: lw          $t8, -0x58C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X58C0);
    // 0x80025134: nop

    // 0x80025138: lw          $v0, 0x4($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X4);
    // 0x8002513C: nop

    // 0x80025140: jr          $ra
    // 0x80025144: nop

    return;
    // 0x80025144: nop

;}
RECOMP_FUNC void func_80025148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025148: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8002514C: jr          $ra
    // 0x80025150: addiu       $v0, $v0, -0xDD0
    ctx->r2 = ADD32(ctx->r2, -0XDD0);
    return;
    // 0x80025150: addiu       $v0, $v0, -0xDD0
    ctx->r2 = ADD32(ctx->r2, -0XDD0);
;}
RECOMP_FUNC void func_80025154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025154: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80025158: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002515C: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80025160: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80025164: addiu       $a2, $a2, -0x58D0
    ctx->r6 = ADD32(ctx->r6, -0X58D0);
    // 0x80025168: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8002516C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80025170: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80025174: jal         0x8007ABD0
    // 0x80025178: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x80025178: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8002517C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80025180: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80025184: jr          $ra
    // 0x80025188: nop

    return;
    // 0x80025188: nop

;}
RECOMP_FUNC void func_8002519C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002519C: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x800251A0: addiu       $s5, $s5, -0xDD0
    ctx->r21 = ADD32(ctx->r21, -0XDD0);
    // 0x800251A4: lw          $t6, 0x1C($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X1C);
    // 0x800251A8: lw          $t7, 0x18($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X18);
    // 0x800251AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800251B0: subu        $s1, $t6, $t7
    ctx->r17 = SUB32(ctx->r14, ctx->r15);
    // 0x800251B4: bne         $s1, $zero, L_800251C4
    if (ctx->r17 != 0) {
        // 0x800251B8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800251C4;
    }
    // 0x800251B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800251BC: b           L_80025234
    // 0x800251C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80025234;
    // 0x800251C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800251C4:
    // 0x800251C4: andi        $t8, $s1, 0x1
    ctx->r24 = ctx->r17 & 0X1;
    // 0x800251C8: beq         $t8, $zero, L_800251D4
    if (ctx->r24 == 0) {
        // 0x800251CC: nop
    
            goto L_800251D4;
    }
    // 0x800251CC: nop

    // 0x800251D0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800251D4:
    // 0x800251D4: jal         0x80025154
    // 0x800251D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80025154(rdram, ctx);
        goto after_0;
    // 0x800251D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x800251DC: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x800251E0: addiu       $s6, $s6, -0x4900
    ctx->r22 = ADD32(ctx->r22, -0X4900);
    // 0x800251E4: sw          $v0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r2;
    // 0x800251E8: bne         $v0, $zero, L_800251F8
    if (ctx->r2 != 0) {
        // 0x800251EC: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_800251F8;
    }
    // 0x800251EC: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x800251F0: b           L_80025234
    // 0x800251F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80025234;
    // 0x800251F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800251F8:
    // 0x800251F8: lw          $s2, 0x18($s5)
    ctx->r18 = MEM_W(ctx->r21, 0X18);
    // 0x800251FC: jal         0x80024930
    // 0x80025200: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    func_80024930(rdram, ctx);
        goto after_1;
    // 0x80025200: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    after_1:
    // 0x80025204: lw          $s4, 0x0($s6)
    ctx->r20 = MEM_W(ctx->r22, 0X0);
    // 0x80025208: addiu       $at, $zero, 0x4231
    ctx->r1 = ADD32(0, 0X4231);
    // 0x8002520C: lh          $t9, 0x0($s4)
    ctx->r25 = MEM_H(ctx->r20, 0X0);
    // 0x80025210: nop

    // 0x80025214: beq         $t9, $at, L_80025224
    if (ctx->r25 == ctx->r1) {
        // 0x80025218: nop
    
            goto L_80025224;
    }
    // 0x80025218: nop

    // 0x8002521C: b           L_80025234
    // 0x80025220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80025234;
    // 0x80025220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80025224:
    // 0x80025224: lw          $a1, 0x20($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X20);
    // 0x80025228: jal         0x8007BFF0
    // 0x8002522C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    alBnkfNew(rdram, ctx);
        goto after_2;
    // 0x8002522C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_2:
    // 0x80025230: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80025234:
    // 0x80025234: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80025238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002523C: jr          $ra
    // 0x80025240: nop

    return;
    // 0x80025240: nop

    // 0x80025244: jr          $ra
    // 0x80025248: nop

    return;
    // 0x80025248: nop

    // 0x8002524C: jr          $ra
    // 0x80025250: nop

    return;
    // 0x80025250: nop

    // 0x80025254: jr          $ra
    // 0x80025258: nop

    return;
    // 0x80025258: nop

;}
RECOMP_FUNC void func_8002525C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002525C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80025260: andi        $t6, $s1, 0x1
    ctx->r14 = ctx->r17 & 0X1;
    // 0x80025264: beq         $t6, $zero, L_80025270
    if (ctx->r14 == 0) {
        // 0x80025268: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80025270;
    }
    // 0x80025268: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002526C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80025270:
    // 0x80025270: jal         0x80025154
    // 0x80025274: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80025154(rdram, ctx);
        goto after_0;
    // 0x80025274: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x80025278: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8002527C: addiu       $v1, $v1, -0x48F8
    ctx->r3 = ADD32(ctx->r3, -0X48F8);
    // 0x80025280: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80025284: bne         $v0, $zero, L_80025294
    if (ctx->r2 != 0) {
        // 0x80025288: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80025294;
    }
    // 0x80025288: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8002528C: b           L_800252BC
    // 0x80025290: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800252BC;
    // 0x80025290: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80025294:
    // 0x80025294: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x80025298: lw          $s2, -0xDBC($s2)
    ctx->r18 = MEM_W(ctx->r18, -0XDBC);
    // 0x8002529C: nop

    // 0x800252A0: bne         $s2, $zero, L_800252B0
    if (ctx->r18 != 0) {
        // 0x800252A4: nop
    
            goto L_800252B0;
    }
    // 0x800252A4: nop

    // 0x800252A8: b           L_800252B8
    // 0x800252AC: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
        goto L_800252B8;
    // 0x800252AC: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
L_800252B0:
    // 0x800252B0: jal         0x80024930
    // 0x800252B4: nop

    func_80024930(rdram, ctx);
        goto after_1;
    // 0x800252B4: nop

    after_1:
L_800252B8:
    // 0x800252B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800252BC:
    // 0x800252BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800252C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800252C4: jr          $ra
    // 0x800252C8: nop

    return;
    // 0x800252C8: nop

    // 0x800252CC: jr          $ra
    // 0x800252D0: nop

    return;
    // 0x800252D0: nop

    // 0x800252D4: jr          $ra
    // 0x800252D8: nop

    return;
    // 0x800252D8: nop

;}
RECOMP_FUNC void func_800252DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800252DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800252E0: andi        $t6, $s1, 0x1
    ctx->r14 = ctx->r17 & 0X1;
    // 0x800252E4: beq         $t6, $zero, L_800252F0
    if (ctx->r14 == 0) {
        // 0x800252E8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800252F0;
    }
    // 0x800252E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800252EC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800252F0:
    // 0x800252F0: jal         0x80025154
    // 0x800252F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80025154(rdram, ctx);
        goto after_0;
    // 0x800252F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x800252F8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800252FC: addiu       $v1, $v1, -0x58A4
    ctx->r3 = ADD32(ctx->r3, -0X58A4);
    // 0x80025300: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80025304: bne         $v0, $zero, L_80025314
    if (ctx->r2 != 0) {
        // 0x80025308: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80025314;
    }
    // 0x80025308: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8002530C: b           L_80025328
    // 0x80025310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80025328;
    // 0x80025310: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80025314:
    // 0x80025314: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x80025318: lw          $s2, -0xDD0($s2)
    ctx->r18 = MEM_W(ctx->r18, -0XDD0);
    // 0x8002531C: jal         0x80024930
    // 0x80025320: nop

    func_80024930(rdram, ctx);
        goto after_1;
    // 0x80025320: nop

    after_1:
    // 0x80025324: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80025328:
    // 0x80025328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002532C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80025330: jr          $ra
    // 0x80025334: nop

    return;
    // 0x80025334: nop

;}
RECOMP_FUNC void func_80025338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025338: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x8002533C: addiu       $fp, $fp, -0x5894
    ctx->r30 = ADD32(ctx->r30, -0X5894);
    // 0x80025340: sw          $zero, 0x0($fp)
    MEM_W(0X0, ctx->r30) = 0;
    // 0x80025344: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80025348: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8002534C: sw          $zero, -0x5898($at)
    MEM_W(-0X5898, ctx->r1) = 0;
    // 0x80025350: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80025354: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80025358: swc1        $f4, -0x5890($at)
    MEM_W(-0X5890, ctx->r1) = ctx->f4.u32l;
    // 0x8002535C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80025360: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80025364: addiu       $t6, $zero, 0x7FFF
    ctx->r14 = ADD32(0, 0X7FFF);
    // 0x80025368: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x8002536C: sh          $t6, -0x5882($at)
    MEM_H(-0X5882, ctx->r1) = ctx->r14;
    // 0x80025370: jal         0x80025154
    // 0x80025374: addiu       $a0, $zero, 0x7C
    ctx->r4 = ADD32(0, 0X7C);
    func_80025154(rdram, ctx);
        goto after_0;
    // 0x80025374: addiu       $a0, $zero, 0x7C
    ctx->r4 = ADD32(0, 0X7C);
    after_0:
    // 0x80025378: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8002537C: addiu       $v1, $v1, -0x58B0
    ctx->r3 = ADD32(ctx->r3, -0X58B0);
    // 0x80025380: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80025384: bne         $v0, $zero, L_80025394
    if (ctx->r2 != 0) {
        // 0x80025388: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80025394;
    }
    // 0x80025388: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8002538C: b           L_800257F4
    // 0x80025390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800257F4;
    // 0x80025390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80025394:
    // 0x80025394: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x80025398: addiu       $s4, $s4, -0xDD0
    ctx->r20 = ADD32(ctx->r20, -0XDD0);
    // 0x8002539C: lw          $t7, 0x60($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X60);
    // 0x800253A0: lw          $t8, 0x64($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X64);
    // 0x800253A4: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x800253A8: sb          $t9, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r25;
    // 0x800253AC: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x800253B0: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x800253B4: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800253B8: lui         $t7, 0x8002
    ctx->r15 = S32(0X8002 << 16);
    // 0x800253BC: lui         $t8, 0x8002
    ctx->r24 = S32(0X8002 << 16);
    // 0x800253C0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x800253C4: addiu       $t6, $t6, -0x58D0
    ctx->r14 = ADD32(ctx->r14, -0X58D0);
    // 0x800253C8: addiu       $t7, $t7, 0x372C
    ctx->r15 = ADD32(ctx->r15, 0X372C);
    // 0x800253CC: addiu       $t8, $t8, 0x2744
    ctx->r24 = ADD32(ctx->r24, 0X2744);
    // 0x800253D0: addiu       $t9, $t9, 0x2728
    ctx->r25 = ADD32(ctx->r25, 0X2728);
    // 0x800253D4: sb          $zero, 0x39($sp)
    MEM_B(0X39, ctx->r29) = 0;
    // 0x800253D8: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x800253DC: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x800253E0: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x800253E4: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    // 0x800253E8: jal         0x8007ACD0
    // 0x800253EC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    alCSPNew(rdram, ctx);
        goto after_1;
    // 0x800253EC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x800253F0: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x800253F4: nop

    // 0x800253F8: bne         $t6, $zero, L_80025408
    if (ctx->r14 != 0) {
        // 0x800253FC: nop
    
            goto L_80025408;
    }
    // 0x800253FC: nop

    // 0x80025400: b           L_800257F4
    // 0x80025404: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800257F4;
    // 0x80025404: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80025408:
    // 0x80025408: jal         0x800252DC
    // 0x8002540C: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    func_800252DC(rdram, ctx);
        goto after_2;
    // 0x8002540C: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    after_2:
    // 0x80025410: beq         $v0, $zero, L_80025420
    if (ctx->r2 == 0) {
        // 0x80025414: nop
    
            goto L_80025420;
    }
    // 0x80025414: nop

    // 0x80025418: b           L_800257F4
    // 0x8002541C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800257F4;
    // 0x8002541C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80025420:
    // 0x80025420: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x80025424: addiu       $s6, $s6, -0x58A4
    ctx->r22 = ADD32(ctx->r22, -0X58A4);
    // 0x80025428: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x8002542C: addiu       $at, $zero, 0x5331
    ctx->r1 = ADD32(0, 0X5331);
    // 0x80025430: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x80025434: lh          $s5, 0x2($v0)
    ctx->r21 = MEM_H(ctx->r2, 0X2);
    // 0x80025438: beq         $v1, $at, L_80025450
    if (ctx->r3 == ctx->r1) {
        // 0x8002543C: addiu       $at, $zero, 0x5332
        ctx->r1 = ADD32(0, 0X5332);
            goto L_80025450;
    }
    // 0x8002543C: addiu       $at, $zero, 0x5332
    ctx->r1 = ADD32(0, 0X5332);
    // 0x80025440: beq         $v1, $at, L_8002555C
    if (ctx->r3 == ctx->r1) {
        // 0x80025444: sll         $s1, $s5, 2
        ctx->r17 = S32(ctx->r21 << 2);
            goto L_8002555C;
    }
    // 0x80025444: sll         $s1, $s5, 2
    ctx->r17 = S32(ctx->r21 << 2);
    // 0x80025448: b           L_80025684
    // 0x8002544C: lw          $t7, 0x4($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X4);
        goto L_80025684;
    // 0x8002544C: lw          $t7, 0x4($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X4);
L_80025450:
    // 0x80025450: sll         $s1, $s5, 3
    ctx->r17 = S32(ctx->r21 << 3);
    // 0x80025454: jal         0x800252DC
    // 0x80025458: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_800252DC(rdram, ctx);
        goto after_3;
    // 0x80025458: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_3:
    // 0x8002545C: beq         $v0, $zero, L_8002546C
    if (ctx->r2 == 0) {
        // 0x80025460: nop
    
            goto L_8002546C;
    }
    // 0x80025460: nop

    // 0x80025464: b           L_800257F4
    // 0x80025468: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800257F4;
    // 0x80025468: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002546C:
    // 0x8002546C: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x80025470: lw          $a1, 0x0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X0);
    // 0x80025474: jal         0x8007BFB0
    // 0x80025478: nop

    alSeqFileNew(rdram, ctx);
        goto after_4;
    // 0x80025478: nop

    after_4:
    // 0x8002547C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80025480: blez        $s5, L_80025544
    if (SIGNED(ctx->r21) <= 0) {
        // 0x80025484: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_80025544;
    }
    // 0x80025484: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80025488: andi        $v0, $s5, 0x3
    ctx->r2 = ctx->r21 & 0X3;
    // 0x8002548C: beq         $v0, $zero, L_800254C8
    if (ctx->r2 == 0) {
        // 0x80025490: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800254C8;
    }
    // 0x80025490: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80025494: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80025498: lw          $t7, -0x58A4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X58A4);
    // 0x8002549C: sll         $t8, $zero, 3
    ctx->r24 = S32(0 << 3);
    // 0x800254A0: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
L_800254A4:
    // 0x800254A4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x800254A8: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x800254AC: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800254B0: beq         $at, $zero, L_800254BC
    if (ctx->r1 == 0) {
        // 0x800254B4: nop
    
            goto L_800254BC;
    }
    // 0x800254B4: nop

    // 0x800254B8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_800254BC:
    // 0x800254BC: bne         $v1, $a3, L_800254A4
    if (ctx->r3 != ctx->r7) {
        // 0x800254C0: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_800254A4;
    }
    // 0x800254C0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800254C4: beq         $a3, $s5, L_80025544
    if (ctx->r7 == ctx->r21) {
        // 0x800254C8: lui         $t9, 0x800B
        ctx->r25 = S32(0X800B << 16);
            goto L_80025544;
    }
L_800254C8:
    // 0x800254C8: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x800254CC: lw          $t9, -0x58A4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X58A4);
    // 0x800254D0: sll         $a2, $a3, 3
    ctx->r6 = S32(ctx->r7 << 3);
    // 0x800254D4: sll         $v1, $s5, 3
    ctx->r3 = S32(ctx->r21 << 3);
    // 0x800254D8: addu        $a0, $t9, $a2
    ctx->r4 = ADD32(ctx->r25, ctx->r6);
L_800254DC:
    // 0x800254DC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x800254E0: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    // 0x800254E4: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800254E8: beq         $at, $zero, L_800254F4
    if (ctx->r1 == 0) {
        // 0x800254EC: nop
    
            goto L_800254F4;
    }
    // 0x800254EC: nop

    // 0x800254F0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_800254F4:
    // 0x800254F4: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x800254F8: nop

    // 0x800254FC: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80025500: beq         $at, $zero, L_8002550C
    if (ctx->r1 == 0) {
        // 0x80025504: nop
    
            goto L_8002550C;
    }
    // 0x80025504: nop

    // 0x80025508: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8002550C:
    // 0x8002550C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80025510: nop

    // 0x80025514: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80025518: beq         $at, $zero, L_80025524
    if (ctx->r1 == 0) {
        // 0x8002551C: nop
    
            goto L_80025524;
    }
    // 0x8002551C: nop

    // 0x80025520: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80025524:
    // 0x80025524: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80025528: nop

    // 0x8002552C: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80025530: beq         $at, $zero, L_8002553C
    if (ctx->r1 == 0) {
        // 0x80025534: nop
    
            goto L_8002553C;
    }
    // 0x80025534: nop

    // 0x80025538: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8002553C:
    // 0x8002553C: bne         $a2, $v1, L_800254DC
    if (ctx->r6 != ctx->r3) {
        // 0x80025540: addiu       $a0, $a0, 0x20
        ctx->r4 = ADD32(ctx->r4, 0X20);
            goto L_800254DC;
    }
    // 0x80025540: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
L_80025544:
    // 0x80025544: lw          $s5, 0x8($s4)
    ctx->r21 = MEM_W(ctx->r20, 0X8);
    // 0x80025548: lw          $t6, 0xC($s4)
    ctx->r14 = MEM_W(ctx->r20, 0XC);
    // 0x8002554C: lw          $s6, 0x10($s4)
    ctx->r22 = MEM_W(ctx->r20, 0X10);
    // 0x80025550: subu        $s1, $t6, $s5
    ctx->r17 = SUB32(ctx->r14, ctx->r21);
    // 0x80025554: b           L_800256AC
    // 0x80025558: or          $s3, $s1, $zero
    ctx->r19 = ctx->r17 | 0;
        goto L_800256AC;
    // 0x80025558: or          $s3, $s1, $zero
    ctx->r19 = ctx->r17 | 0;
L_8002555C:
    // 0x8002555C: subu        $s1, $s1, $s5
    ctx->r17 = SUB32(ctx->r17, ctx->r21);
    // 0x80025560: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    // 0x80025564: jal         0x800252DC
    // 0x80025568: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    func_800252DC(rdram, ctx);
        goto after_5;
    // 0x80025568: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    after_5:
    // 0x8002556C: beq         $v0, $zero, L_8002557C
    if (ctx->r2 == 0) {
        // 0x80025570: lui         $t0, 0x800B
        ctx->r8 = S32(0X800B << 16);
            goto L_8002557C;
    }
    // 0x80025570: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x80025574: b           L_800257F4
    // 0x80025578: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800257F4;
    // 0x80025578: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002557C:
    // 0x8002557C: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x80025580: sll         $t7, $s5, 3
    ctx->r15 = S32(ctx->r21 << 3);
    // 0x80025584: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80025588: addiu       $t0, $t0, -0x58A0
    ctx->r8 = ADD32(ctx->r8, -0X58A0);
    // 0x8002558C: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x80025590: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80025594: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80025598: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8002559C: blez        $s5, L_80025660
    if (SIGNED(ctx->r21) <= 0) {
        // 0x800255A0: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_80025660;
    }
    // 0x800255A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800255A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800255A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_800255AC:
    // 0x800255AC: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x800255B0: nop

    // 0x800255B4: bltz        $t6, L_80025650
    if (SIGNED(ctx->r14) < 0) {
        // 0x800255B8: nop
    
            goto L_80025650;
    }
    // 0x800255B8: nop

    // 0x800255BC: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x800255C0: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x800255C4: sll         $v1, $a3, 4
    ctx->r3 = S32(ctx->r7 << 4);
    // 0x800255C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800255CC: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x800255D0: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x800255D4: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x800255D8: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x800255DC: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x800255E0: or          $s7, $a3, $zero
    ctx->r23 = ctx->r7 | 0;
    // 0x800255E4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800255E8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800255EC: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x800255F0: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x800255F4: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x800255F8: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x800255FC: nop

    // 0x80025600: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80025604: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x80025608: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x8002560C: nop

    // 0x80025610: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x80025614: lw          $a1, 0x8($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X8);
    // 0x80025618: nop

    // 0x8002561C: slt         $at, $s1, $a1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80025620: beq         $at, $zero, L_8002562C
    if (ctx->r1 == 0) {
        // 0x80025624: nop
    
            goto L_8002562C;
    }
    // 0x80025624: nop

    // 0x80025628: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
L_8002562C:
    // 0x8002562C: lw          $t8, 0x0($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X0);
    // 0x80025630: nop

    // 0x80025634: addu        $a0, $t8, $a2
    ctx->r4 = ADD32(ctx->r24, ctx->r6);
    // 0x80025638: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8002563C: nop

    // 0x80025640: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80025644: beq         $at, $zero, L_80025650
    if (ctx->r1 == 0) {
        // 0x80025648: nop
    
            goto L_80025650;
    }
    // 0x80025648: nop

    // 0x8002564C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80025650:
    // 0x80025650: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80025654: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x80025658: bne         $a3, $s5, L_800255AC
    if (ctx->r7 != ctx->r21) {
        // 0x8002565C: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_800255AC;
    }
    // 0x8002565C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_80025660:
    // 0x80025660: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x80025664: sll         $t6, $s7, 4
    ctx->r14 = S32(ctx->r23 << 4);
    // 0x80025668: addu        $v0, $t9, $t6
    ctx->r2 = ADD32(ctx->r25, ctx->r14);
    // 0x8002566C: lw          $s5, 0x4($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X4);
    // 0x80025670: lw          $s6, 0xC($v0)
    ctx->r22 = MEM_W(ctx->r2, 0XC);
    // 0x80025674: lw          $s3, 0x8($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X8);
    // 0x80025678: b           L_800256AC
    // 0x8002567C: nop

        goto L_800256AC;
    // 0x8002567C: nop

    // 0x80025680: lw          $t7, 0x4($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X4);
L_80025684:
    // 0x80025684: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x80025688: lw          $t9, 0xC($s4)
    ctx->r25 = MEM_W(ctx->r20, 0XC);
    // 0x8002568C: subu        $s0, $t7, $t8
    ctx->r16 = SUB32(ctx->r15, ctx->r24);
    // 0x80025690: lw          $t6, 0x8($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X8);
    // 0x80025694: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80025698: sh          $t7, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r15;
    // 0x8002569C: subu        $s1, $t9, $t6
    ctx->r17 = SUB32(ctx->r25, ctx->r14);
    // 0x800256A0: lw          $s5, 0x8($s4)
    ctx->r21 = MEM_W(ctx->r20, 0X8);
    // 0x800256A4: lw          $s6, 0x10($s4)
    ctx->r22 = MEM_W(ctx->r20, 0X10);
    // 0x800256A8: or          $s3, $s1, $zero
    ctx->r19 = ctx->r17 | 0;
L_800256AC:
    // 0x800256AC: beq         $s1, $zero, L_800256BC
    if (ctx->r17 == 0) {
        // 0x800256B0: nop
    
            goto L_800256BC;
    }
    // 0x800256B0: nop

    // 0x800256B4: bne         $s0, $zero, L_800256C4
    if (ctx->r16 != 0) {
        // 0x800256B8: nop
    
            goto L_800256C4;
    }
    // 0x800256B8: nop

L_800256BC:
    // 0x800256BC: b           L_800257F4
    // 0x800256C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800257F4;
    // 0x800256C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800256C4:
    // 0x800256C4: jal         0x80025154
    // 0x800256C8: addiu       $a0, $zero, 0xF8
    ctx->r4 = ADD32(0, 0XF8);
    func_80025154(rdram, ctx);
        goto after_6;
    // 0x800256C8: addiu       $a0, $zero, 0xF8
    ctx->r4 = ADD32(0, 0XF8);
    after_6:
    // 0x800256CC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800256D0: addiu       $v1, $v1, -0x58A8
    ctx->r3 = ADD32(ctx->r3, -0X58A8);
    // 0x800256D4: bne         $v0, $zero, L_800256E4
    if (ctx->r2 != 0) {
        // 0x800256D8: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_800256E4;
    }
    // 0x800256D8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x800256DC: b           L_800257F4
    // 0x800256E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800257F4;
    // 0x800256E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800256E4:
    // 0x800256E4: andi        $t9, $s0, 0x1
    ctx->r25 = ctx->r16 & 0X1;
    // 0x800256E8: beq         $t9, $zero, L_800256F4
    if (ctx->r25 == 0) {
        // 0x800256EC: nop
    
            goto L_800256F4;
    }
    // 0x800256EC: nop

    // 0x800256F0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_800256F4:
    // 0x800256F4: jal         0x80025154
    // 0x800256F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80025154(rdram, ctx);
        goto after_7;
    // 0x800256F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x800256FC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80025700: addiu       $v1, $v1, -0x58AC
    ctx->r3 = ADD32(ctx->r3, -0X58AC);
    // 0x80025704: bne         $v0, $zero, L_80025714
    if (ctx->r2 != 0) {
        // 0x80025708: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_80025714;
    }
    // 0x80025708: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8002570C: b           L_800257F4
    // 0x80025710: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800257F4;
    // 0x80025710: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80025714:
    // 0x80025714: andi        $t7, $s1, 0x1
    ctx->r15 = ctx->r17 & 0X1;
    // 0x80025718: beq         $t7, $zero, L_80025724
    if (ctx->r15 == 0) {
        // 0x8002571C: nop
    
            goto L_80025724;
    }
    // 0x8002571C: nop

    // 0x80025720: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80025724:
    // 0x80025724: jal         0x80025154
    // 0x80025728: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80025154(rdram, ctx);
        goto after_8;
    // 0x80025728: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x8002572C: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x80025730: addiu       $s4, $s4, -0x58B4
    ctx->r20 = ADD32(ctx->r20, -0X58B4);
    // 0x80025734: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x80025738: bne         $v0, $zero, L_80025748
    if (ctx->r2 != 0) {
        // 0x8002573C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80025748;
    }
    // 0x8002573C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80025740: b           L_800257F4
    // 0x80025744: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800257F4;
    // 0x80025744: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80025748:
    // 0x80025748: andi        $t8, $s3, 0x1
    ctx->r24 = ctx->r19 & 0X1;
    // 0x8002574C: beq         $t8, $zero, L_80025758
    if (ctx->r24 == 0) {
        // 0x80025750: or          $s2, $s5, $zero
        ctx->r18 = ctx->r21 | 0;
            goto L_80025758;
    }
    // 0x80025750: or          $s2, $s5, $zero
    ctx->r18 = ctx->r21 | 0;
    // 0x80025754: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_80025758:
    // 0x80025758: jal         0x80024930
    // 0x8002575C: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    func_80024930(rdram, ctx);
        goto after_9;
    // 0x8002575C: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    after_9:
    // 0x80025760: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x80025764: jal         0x8007BFF0
    // 0x80025768: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    alBnkfNew(rdram, ctx);
        goto after_10;
    // 0x80025768: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_10:
    // 0x8002576C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80025770: sw          $s5, -0x589C($at)
    MEM_W(-0X589C, ctx->r1) = ctx->r21;
    // 0x80025774: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80025778: addiu       $t9, $t9, -0x5878
    ctx->r25 = ADD32(ctx->r25, -0X5878);
    // 0x8002577C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80025780: sw          $t9, -0x5880($at)
    MEM_W(-0X5880, ctx->r1) = ctx->r25;
    // 0x80025784: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x80025788: addiu       $v1, $t0, -0x5864
    ctx->r3 = ADD32(ctx->r8, -0X5864);
    // 0x8002578C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80025790: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80025794: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80025798: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8002579C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800257A0: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x800257A4: addiu       $a3, $a3, -0x48C4
    ctx->r7 = ADD32(ctx->r7, -0X48C4);
    // 0x800257A8: addiu       $v0, $v0, -0x5814
    ctx->r2 = ADD32(ctx->r2, -0X5814);
    // 0x800257AC: addiu       $a2, $a2, -0x5828
    ctx->r6 = ADD32(ctx->r6, -0X5828);
    // 0x800257B0: addiu       $a1, $a1, -0x583C
    ctx->r5 = ADD32(ctx->r5, -0X583C);
    // 0x800257B4: addiu       $a0, $a0, -0x5850
    ctx->r4 = ADD32(ctx->r4, -0X5850);
    // 0x800257B8: sw          $v1, -0x5878($at)
    MEM_W(-0X5878, ctx->r1) = ctx->r3;
L_800257BC:
    // 0x800257BC: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x800257C0: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x800257C4: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x800257C8: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x800257CC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800257D0: addiu       $v0, $v0, 0x50
    ctx->r2 = ADD32(ctx->r2, 0X50);
    // 0x800257D4: addiu       $a2, $a2, 0x50
    ctx->r6 = ADD32(ctx->r6, 0X50);
    // 0x800257D8: addiu       $a1, $a1, 0x50
    ctx->r5 = ADD32(ctx->r5, 0X50);
    // 0x800257DC: bne         $v0, $a3, L_800257BC
    if (ctx->r2 != ctx->r7) {
        // 0x800257E0: addiu       $a0, $a0, 0x50
        ctx->r4 = ADD32(ctx->r4, 0X50);
            goto L_800257BC;
    }
    // 0x800257E0: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    // 0x800257E4: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x800257E8: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x800257EC: sw          $t6, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r14;
    // 0x800257F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800257F4:
    // 0x800257F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800257F8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x800257FC: jr          $ra
    // 0x80025800: nop

    return;
    // 0x80025800: nop

;}
RECOMP_FUNC void func_80025804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025804: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80025808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002580C: jal         0x80025154
    // 0x80025810: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80025154(rdram, ctx);
        goto after_0;
    // 0x80025810: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x80025814: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x80025818: addiu       $s5, $s5, -0x58C0
    ctx->r21 = ADD32(ctx->r21, -0X58C0);
    // 0x8002581C: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x80025820: bne         $v0, $zero, L_80025830
    if (ctx->r2 != 0) {
        // 0x80025824: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80025830;
    }
    // 0x80025824: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80025828: b           L_80025928
    // 0x8002582C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80025928;
    // 0x8002582C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80025830:
    // 0x80025830: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x80025834: addiu       $s4, $s4, -0xDD0
    ctx->r20 = ADD32(ctx->r20, -0XDD0);
    // 0x80025838: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8002583C: lw          $s2, 0x24($s4)
    ctx->r18 = MEM_W(ctx->r20, 0X24);
    // 0x80025840: nop

    // 0x80025844: beq         $s2, $zero, L_80025874
    if (ctx->r18 == 0) {
        // 0x80025848: nop
    
            goto L_80025874;
    }
    // 0x80025848: nop

    // 0x8002584C: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x80025850: jal         0x80024930
    // 0x80025854: addiu       $s1, $zero, 0x8
    ctx->r17 = ADD32(0, 0X8);
    func_80024930(rdram, ctx);
        goto after_1;
    // 0x80025854: addiu       $s1, $zero, 0x8
    ctx->r17 = ADD32(0, 0X8);
    after_1:
    // 0x80025858: lw          $v1, 0x0($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X0);
    // 0x8002585C: lui         $at, 0x4658
    ctx->r1 = S32(0X4658 << 16);
    // 0x80025860: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80025864: ori         $at, $at, 0x4430
    ctx->r1 = ctx->r1 | 0X4430;
    // 0x80025868: beq         $t6, $at, L_80025874
    if (ctx->r14 == ctx->r1) {
        // 0x8002586C: nop
    
            goto L_80025874;
    }
    // 0x8002586C: nop

    // 0x80025870: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
L_80025874:
    // 0x80025874: lw          $v0, 0x40($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X40);
    // 0x80025878: nop

    // 0x8002587C: slti        $at, $v0, 0x14
    ctx->r1 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
    // 0x80025880: bne         $at, $zero, L_800258EC
    if (ctx->r1 != 0) {
        // 0x80025884: slti        $at, $v0, 0x6
        ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
            goto L_800258EC;
    }
    // 0x80025884: slti        $at, $v0, 0x6
    ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x80025888: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x8002588C: addiu       $s2, $v0, -0x14
    ctx->r18 = ADD32(ctx->r2, -0X14);
    // 0x80025890: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x80025894: sll         $t6, $s2, 6
    ctx->r14 = S32(ctx->r18 << 6);
    // 0x80025898: slt         $at, $s2, $t8
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8002589C: bne         $at, $zero, L_800258AC
    if (ctx->r1 != 0) {
        // 0x800258A0: addu        $t6, $t6, $s2
        ctx->r14 = ADD32(ctx->r14, ctx->r18);
            goto L_800258AC;
    }
    // 0x800258A0: addu        $t6, $t6, $s2
    ctx->r14 = ADD32(ctx->r14, ctx->r18);
    // 0x800258A4: b           L_80025928
    // 0x800258A8: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
        goto L_80025928;
    // 0x800258A8: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
L_800258AC:
    // 0x800258AC: lw          $t9, 0x24($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X24);
    // 0x800258B0: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800258B4: addu        $s2, $t9, $t6
    ctx->r18 = ADD32(ctx->r25, ctx->r14);
    // 0x800258B8: addiu       $s2, $s2, 0x10
    ctx->r18 = ADD32(ctx->r18, 0X10);
    // 0x800258BC: jal         0x80025154
    // 0x800258C0: addiu       $a0, $zero, 0x208
    ctx->r4 = ADD32(0, 0X208);
    func_80025154(rdram, ctx);
        goto after_2;
    // 0x800258C0: addiu       $a0, $zero, 0x208
    ctx->r4 = ADD32(0, 0X208);
    after_2:
    // 0x800258C4: sw          $v0, 0x44($s4)
    MEM_W(0X44, ctx->r20) = ctx->r2;
    // 0x800258C8: bne         $v0, $zero, L_800258D8
    if (ctx->r2 != 0) {
        // 0x800258CC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_800258D8;
    }
    // 0x800258CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800258D0: b           L_80025928
    // 0x800258D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80025928;
    // 0x800258D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800258D8:
    // 0x800258D8: jal         0x80024930
    // 0x800258DC: addiu       $s1, $zero, 0x208
    ctx->r17 = ADD32(0, 0X208);
    func_80024930(rdram, ctx);
        goto after_3;
    // 0x800258DC: addiu       $s1, $zero, 0x208
    ctx->r17 = ADD32(0, 0X208);
    after_3:
    // 0x800258E0: b           L_80025928
    // 0x800258E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80025928;
    // 0x800258E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800258E8: slti        $at, $v0, 0x6
    ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
L_800258EC:
    // 0x800258EC: beq         $at, $zero, L_80025904
    if (ctx->r1 == 0) {
        // 0x800258F0: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_80025904;
    }
    // 0x800258F0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800258F4: sw          $zero, 0x44($s4)
    MEM_W(0X44, ctx->r20) = 0;
    // 0x800258F8: b           L_80025928
    // 0x800258FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80025928;
    // 0x800258FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80025900: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
L_80025904:
    // 0x80025904: bne         $v0, $at, L_80025928
    if (ctx->r2 != ctx->r1) {
        // 0x80025908: addiu       $v0, $zero, 0x64
        ctx->r2 = ADD32(0, 0X64);
            goto L_80025928;
    }
    // 0x80025908: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8002590C: lw          $t7, 0x44($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X44);
    // 0x80025910: nop

    // 0x80025914: beq         $t7, $zero, L_80025928
    if (ctx->r15 == 0) {
        // 0x80025918: addiu       $v0, $zero, 0x64
        ctx->r2 = ADD32(0, 0X64);
            goto L_80025928;
    }
    // 0x80025918: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8002591C: b           L_80025928
    // 0x80025920: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80025928;
    // 0x80025920: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80025924: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
L_80025928:
    // 0x80025928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002592C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80025930: jr          $ra
    // 0x80025934: nop

    return;
    // 0x80025934: nop

;}
RECOMP_FUNC void func_80025938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025938: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x8002593C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80025940: addiu       $v0, $v0, -0xDD0
    ctx->r2 = ADD32(ctx->r2, -0XDD0);
    // 0x80025944: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80025948: lw          $a1, 0x2C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X2C);
    // 0x8002594C: lw          $a2, 0x30($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X30);
    // 0x80025950: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80025954: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80025958: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8002595C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80025960: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80025964: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80025968: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8002596C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80025970: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80025974: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80025978: jal         0x8007AC90
    // 0x8002597C: addiu       $a0, $a0, -0x58D0
    ctx->r4 = ADD32(ctx->r4, -0X58D0);
    alHeapInit(rdram, ctx);
        goto after_0;
    // 0x8002597C: addiu       $a0, $a0, -0x58D0
    ctx->r4 = ADD32(ctx->r4, -0X58D0);
    after_0:
    // 0x80025980: jal         0x80025804
    // 0x80025984: nop

    func_80025804(rdram, ctx);
        goto after_1;
    // 0x80025984: nop

    after_1:
    // 0x80025988: beq         $v0, $zero, L_80025998
    if (ctx->r2 == 0) {
        // 0x8002598C: lui         $a0, 0x8009
        ctx->r4 = S32(0X8009 << 16);
            goto L_80025998;
    }
    // 0x8002598C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80025990: b           L_8002626C
    // 0x80025994: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8002626C;
    // 0x80025994: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80025998:
    // 0x80025998: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8002599C: addiu       $a1, $a1, -0x58D0
    ctx->r5 = ADD32(ctx->r5, -0X58D0);
    // 0x800259A0: jal         0x80026C88
    // 0x800259A4: addiu       $a0, $a0, -0xDD0
    ctx->r4 = ADD32(ctx->r4, -0XDD0);
    func_80026C88(rdram, ctx);
        goto after_2;
    // 0x800259A4: addiu       $a0, $a0, -0xDD0
    ctx->r4 = ADD32(ctx->r4, -0XDD0);
    after_2:
    // 0x800259A8: beq         $v0, $zero, L_800259B8
    if (ctx->r2 == 0) {
        // 0x800259AC: nop
    
            goto L_800259B8;
    }
    // 0x800259AC: nop

    // 0x800259B0: b           L_8002626C
    // 0x800259B4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8002626C;
    // 0x800259B4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800259B8:
    // 0x800259B8: jal         0x80025338
    // 0x800259BC: nop

    func_80025338(rdram, ctx);
        goto after_3;
    // 0x800259BC: nop

    after_3:
    // 0x800259C0: beq         $v0, $zero, L_800259D0
    if (ctx->r2 == 0) {
        // 0x800259C4: lui         $t4, 0x800B
        ctx->r12 = S32(0X800B << 16);
            goto L_800259D0;
    }
    // 0x800259C4: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x800259C8: b           L_8002626C
    // 0x800259CC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8002626C;
    // 0x800259CC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800259D0:
    // 0x800259D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800259D4: sw          $zero, -0x48E4($at)
    MEM_W(-0X48E4, ctx->r1) = 0;
    // 0x800259D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800259DC: sw          $zero, -0x48CC($at)
    MEM_W(-0X48CC, ctx->r1) = 0;
    // 0x800259E0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800259E4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800259E8: addiu       $v0, $v0, -0xDD0
    ctx->r2 = ADD32(ctx->r2, -0XDD0);
    // 0x800259EC: sw          $zero, -0x48F0($at)
    MEM_W(-0X48F0, ctx->r1) = 0;
    // 0x800259F0: lw          $t7, 0x6C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X6C);
    // 0x800259F4: lw          $t6, 0x68($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X68);
    // 0x800259F8: addiu       $t4, $t4, -0x48EC
    ctx->r12 = ADD32(ctx->r12, -0X48EC);
    // 0x800259FC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80025A00: lw          $t6, 0x70($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X70);
    // 0x80025A04: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80025A08: addiu       $t7, $t7, -0x58D0
    ctx->r15 = ADD32(ctx->r15, -0X58D0);
    // 0x80025A0C: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x80025A10: sw          $t8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r24;
    // 0x80025A14: sw          $t7, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r15;
    // 0x80025A18: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    // 0x80025A1C: jal         0x80025154
    // 0x80025A20: sw          $t6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r14;
    func_80025154(rdram, ctx);
        goto after_4;
    // 0x80025A20: sw          $t6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r14;
    after_4:
    // 0x80025A24: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80025A28: addiu       $v1, $v1, -0x48FC
    ctx->r3 = ADD32(ctx->r3, -0X48FC);
    // 0x80025A2C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80025A30: bne         $v0, $zero, L_80025A40
    if (ctx->r2 != 0) {
        // 0x80025A34: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80025A40;
    }
    // 0x80025A34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80025A38: b           L_80026240
    // 0x80025A3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80026240;
    // 0x80025A3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80025A40:
    // 0x80025A40: jal         0x8007D150
    // 0x80025A44: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    alSndpNew(rdram, ctx);
        goto after_5;
    // 0x80025A44: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    after_5:
    // 0x80025A48: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x80025A4C: addiu       $t4, $t4, -0x48EC
    ctx->r12 = ADD32(ctx->r12, -0X48EC);
    // 0x80025A50: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x80025A54: nop

    // 0x80025A58: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x80025A5C: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x80025A60: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80025A64: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x80025A68: jal         0x80025154
    // 0x80025A6C: sll         $a0, $t8, 2
    ctx->r4 = S32(ctx->r24 << 2);
    func_80025154(rdram, ctx);
        goto after_6;
    // 0x80025A6C: sll         $a0, $t8, 2
    ctx->r4 = S32(ctx->r24 << 2);
    after_6:
    // 0x80025A70: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80025A74: addiu       $a2, $a2, -0x48F4
    ctx->r6 = ADD32(ctx->r6, -0X48F4);
    // 0x80025A78: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x80025A7C: addiu       $t4, $t4, -0x48EC
    ctx->r12 = ADD32(ctx->r12, -0X48EC);
    // 0x80025A80: bne         $v0, $zero, L_80025A90
    if (ctx->r2 != 0) {
        // 0x80025A84: sw          $v0, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r2;
            goto L_80025A90;
    }
    // 0x80025A84: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x80025A88: b           L_80026240
    // 0x80025A8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80026240;
    // 0x80025A8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80025A90:
    // 0x80025A90: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80025A94: addiu       $v0, $v0, -0x48D8
    ctx->r2 = ADD32(ctx->r2, -0X48D8);
    // 0x80025A98: addiu       $t7, $zero, 0x7FFF
    ctx->r15 = ADD32(0, 0X7FFF);
    // 0x80025A9C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80025AA0: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x80025AA4: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x80025AA8: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x80025AAC: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x80025AB0: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x80025AB4: addiu       $t3, $t3, -0x48CE
    ctx->r11 = ADD32(ctx->r11, -0X48CE);
    // 0x80025AB8: addiu       $t2, $t2, -0x48CF
    ctx->r10 = ADD32(ctx->r10, -0X48CF);
    // 0x80025ABC: addiu       $t0, $t0, -0x48D0
    ctx->r8 = ADD32(ctx->r8, -0X48D0);
    // 0x80025AC0: addiu       $a3, $a3, -0x48D4
    ctx->r7 = ADD32(ctx->r7, -0X48D4);
    // 0x80025AC4: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x80025AC8: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x80025ACC: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
    // 0x80025AD0: sb          $t1, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r9;
    // 0x80025AD4: sb          $t6, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r14;
    // 0x80025AD8: sb          $zero, 0x0($t3)
    MEM_B(0X0, ctx->r11) = 0;
    // 0x80025ADC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80025AE0: sh          $t8, -0x48D6($at)
    MEM_H(-0X48D6, ctx->r1) = ctx->r24;
    // 0x80025AE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80025AE8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80025AEC: sw          $zero, -0x48E8($at)
    MEM_W(-0X48E8, ctx->r1) = 0;
    // 0x80025AF0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80025AF4: swc1        $f2, -0x48E0($at)
    MEM_W(-0X48E0, ctx->r1) = ctx->f2.u32l;
    // 0x80025AF8: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x80025AFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80025B00: blez        $a1, L_80025B88
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80025B04: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80025B88;
    }
    // 0x80025B04: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80025B08: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80025B0C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80025B10: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
L_80025B14:
    // 0x80025B14: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x80025B18: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80025B1C: addu        $v0, $v1, $t9
    ctx->r2 = ADD32(ctx->r3, ctx->r25);
    // 0x80025B20: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x80025B24: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x80025B28: sh          $t5, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r13;
    // 0x80025B2C: sb          $zero, 0x24($v0)
    MEM_B(0X24, ctx->r2) = 0;
    // 0x80025B30: sb          $t1, 0x20($v0)
    MEM_B(0X20, ctx->r2) = ctx->r9;
    // 0x80025B34: lb          $t6, 0x0($t0)
    ctx->r14 = MEM_B(ctx->r8, 0X0);
    // 0x80025B38: addiu       $v1, $v1, 0x2C
    ctx->r3 = ADD32(ctx->r3, 0X2C);
    // 0x80025B3C: sb          $t6, 0x1E($v0)
    MEM_B(0X1E, ctx->r2) = ctx->r14;
    // 0x80025B40: lbu         $t8, 0x0($t2)
    ctx->r24 = MEM_BU(ctx->r10, 0X0);
    // 0x80025B44: nop

    // 0x80025B48: sb          $t8, 0x21($v0)
    MEM_B(0X21, ctx->r2) = ctx->r24;
    // 0x80025B4C: sb          $t8, 0x22($v0)
    MEM_B(0X22, ctx->r2) = ctx->r24;
    // 0x80025B50: lbu         $t9, 0x0($t3)
    ctx->r25 = MEM_BU(ctx->r11, 0X0);
    // 0x80025B54: nop

    // 0x80025B58: sb          $t9, 0x23($v0)
    MEM_B(0X23, ctx->r2) = ctx->r25;
    // 0x80025B5C: lh          $t6, 0x0($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X0);
    // 0x80025B60: swc1        $f0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f0.u32l;
    // 0x80025B64: sh          $t6, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r14;
    // 0x80025B68: lh          $t7, 0x14($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X14);
    // 0x80025B6C: sb          $zero, 0x25($v0)
    MEM_B(0X25, ctx->r2) = 0;
    // 0x80025B70: sh          $t7, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r15;
    // 0x80025B74: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x80025B78: nop

    // 0x80025B7C: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80025B80: bne         $at, $zero, L_80025B14
    if (ctx->r1 != 0) {
        // 0x80025B84: nop
    
            goto L_80025B14;
    }
    // 0x80025B84: nop

L_80025B88:
    // 0x80025B88: jal         0x80025154
    // 0x80025B8C: sll         $a0, $a1, 4
    ctx->r4 = S32(ctx->r5 << 4);
    func_80025154(rdram, ctx);
        goto after_7;
    // 0x80025B8C: sll         $a0, $a1, 4
    ctx->r4 = S32(ctx->r5 << 4);
    after_7:
    // 0x80025B90: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80025B94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80025B98: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80025B9C: addiu       $v1, $v1, -0x48C4
    ctx->r3 = ADD32(ctx->r3, -0X48C4);
    // 0x80025BA0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80025BA4: bne         $v0, $zero, L_80025BB4
    if (ctx->r2 != 0) {
        // 0x80025BA8: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_80025BB4;
    }
    // 0x80025BA8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80025BAC: b           L_80025C14
    // 0x80025BB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80025C14;
    // 0x80025BB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80025BB4:
    // 0x80025BB4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80025BB8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80025BBC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80025BC0: swc1        $f4, -0x48C0($at)
    MEM_W(-0X48C0, ctx->r1) = ctx->f4.u32l;
    // 0x80025BC4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80025BC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80025BCC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80025BD0: swc1        $f6, -0x48BC($at)
    MEM_W(-0X48BC, ctx->r1) = ctx->f6.u32l;
    // 0x80025BD4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80025BD8: swc1        $f2, -0x48B8($at)
    MEM_W(-0X48B8, ctx->r1) = ctx->f2.u32l;
    // 0x80025BDC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80025BE0: swc1        $f2, -0x48B4($at)
    MEM_W(-0X48B4, ctx->r1) = ctx->f2.u32l;
    // 0x80025BE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80025BE8: sh          $zero, -0x48B0($at)
    MEM_H(-0X48B0, ctx->r1) = 0;
    // 0x80025BEC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80025BF0: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x80025BF4: sh          $t9, -0x48AE($at)
    MEM_H(-0X48AE, ctx->r1) = ctx->r25;
    // 0x80025BF8: lui         $at, 0x4499
    ctx->r1 = S32(0X4499 << 16);
    // 0x80025BFC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80025C00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80025C04: swc1        $f8, -0x48AC($at)
    MEM_W(-0X48AC, ctx->r1) = ctx->f8.u32l;
    // 0x80025C08: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80025C0C: swc1        $f0, -0x48A8($at)
    MEM_W(-0X48A8, ctx->r1) = ctx->f0.u32l;
    // 0x80025C10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80025C14:
    // 0x80025C14: beq         $v0, $zero, L_80025C24
    if (ctx->r2 == 0) {
        // 0x80025C18: nop
    
            goto L_80025C24;
    }
    // 0x80025C18: nop

    // 0x80025C1C: b           L_80026240
    // 0x80025C20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80026240;
    // 0x80025C20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80025C24:
    // 0x80025C24: jal         0x8002525C
    // 0x80025C28: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    func_8002525C(rdram, ctx);
        goto after_8;
    // 0x80025C28: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    after_8:
    // 0x80025C2C: beq         $v0, $zero, L_80025C3C
    if (ctx->r2 == 0) {
        // 0x80025C30: lui         $v1, 0x800B
        ctx->r3 = S32(0X800B << 16);
            goto L_80025C3C;
    }
    // 0x80025C30: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80025C34: b           L_80026240
    // 0x80025C38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80026240;
    // 0x80025C38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80025C3C:
    // 0x80025C3C: lw          $v1, -0x48F8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X48F8);
    // 0x80025C40: addiu       $at, $zero, 0x5431
    ctx->r1 = ADD32(0, 0X5431);
    // 0x80025C44: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x80025C48: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80025C4C: beq         $v0, $at, L_80025C6C
    if (ctx->r2 == ctx->r1) {
        // 0x80025C50: addiu       $at, $zero, 0x5432
        ctx->r1 = ADD32(0, 0X5432);
            goto L_80025C6C;
    }
    // 0x80025C50: addiu       $at, $zero, 0x5432
    ctx->r1 = ADD32(0, 0X5432);
    // 0x80025C54: beq         $v0, $at, L_80025CC0
    if (ctx->r2 == ctx->r1) {
        // 0x80025C58: addiu       $at, $zero, 0x5433
        ctx->r1 = ADD32(0, 0X5433);
            goto L_80025CC0;
    }
    // 0x80025C58: addiu       $at, $zero, 0x5433
    ctx->r1 = ADD32(0, 0X5433);
    // 0x80025C5C: beq         $v0, $at, L_80025CC0
    if (ctx->r2 == ctx->r1) {
        // 0x80025C60: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_80025CC0;
    }
    // 0x80025C60: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80025C64: b           L_800260F8
    // 0x80025C68: nop

        goto L_800260F8;
    // 0x80025C68: nop

L_80025C6C:
    // 0x80025C6C: lw          $t6, -0xDB8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XDB8);
    // 0x80025C70: nop

    // 0x80025C74: bne         $t6, $zero, L_80025C84
    if (ctx->r14 != 0) {
        // 0x80025C78: nop
    
            goto L_80025C84;
    }
    // 0x80025C78: nop

    // 0x80025C7C: b           L_80026240
    // 0x80025C80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80026240;
    // 0x80025C80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80025C84:
    // 0x80025C84: lh          $a1, 0x2($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X2);
    // 0x80025C88: nop

    // 0x80025C8C: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x80025C90: jal         0x8002525C
    // 0x80025C94: addiu       $s1, $t7, 0x4
    ctx->r17 = ADD32(ctx->r15, 0X4);
    func_8002525C(rdram, ctx);
        goto after_9;
    // 0x80025C94: addiu       $s1, $t7, 0x4
    ctx->r17 = ADD32(ctx->r15, 0X4);
    after_9:
    // 0x80025C98: beq         $v0, $zero, L_80025CA8
    if (ctx->r2 == 0) {
        // 0x80025C9C: nop
    
            goto L_80025CA8;
    }
    // 0x80025C9C: nop

    // 0x80025CA0: b           L_80026240
    // 0x80025CA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80026240;
    // 0x80025CA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80025CA8:
    // 0x80025CA8: jal         0x8002519C
    // 0x80025CAC: nop

    func_8002519C(rdram, ctx);
        goto after_10;
    // 0x80025CAC: nop

    after_10:
    // 0x80025CB0: beq         $v0, $zero, L_800261B0
    if (ctx->r2 == 0) {
        // 0x80025CB4: nop
    
            goto L_800261B0;
    }
    // 0x80025CB4: nop

    // 0x80025CB8: b           L_80026240
    // 0x80025CBC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        goto L_80026240;
    // 0x80025CBC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_80025CC0:
    // 0x80025CC0: lh          $a1, 0x2($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X2);
    // 0x80025CC4: nop

    // 0x80025CC8: sll         $t8, $a1, 3
    ctx->r24 = S32(ctx->r5 << 3);
    // 0x80025CCC: addiu       $s1, $t8, 0x4
    ctx->r17 = ADD32(ctx->r24, 0X4);
    // 0x80025CD0: jal         0x8002525C
    // 0x80025CD4: sw          $s1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r17;
    func_8002525C(rdram, ctx);
        goto after_11;
    // 0x80025CD4: sw          $s1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r17;
    after_11:
    // 0x80025CD8: lw          $a1, 0xBC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XBC);
    // 0x80025CDC: beq         $v0, $zero, L_80025CEC
    if (ctx->r2 == 0) {
        // 0x80025CE0: lui         $t9, 0x8009
        ctx->r25 = S32(0X8009 << 16);
            goto L_80025CEC;
    }
    // 0x80025CE0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80025CE4: b           L_80026240
    // 0x80025CE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80026240;
    // 0x80025CE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80025CEC:
    // 0x80025CEC: lw          $t9, -0xDBC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0XDBC);
    // 0x80025CF0: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x80025CF4: addu        $t6, $t9, $a1
    ctx->r14 = ADD32(ctx->r25, ctx->r5);
    // 0x80025CF8: bgez        $a1, L_80025D0C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80025CFC: andi        $t7, $a1, 0x7
        ctx->r15 = ctx->r5 & 0X7;
            goto L_80025D0C;
    }
    // 0x80025CFC: andi        $t7, $a1, 0x7
    ctx->r15 = ctx->r5 & 0X7;
    // 0x80025D00: beq         $t7, $zero, L_80025D0C
    if (ctx->r15 == 0) {
        // 0x80025D04: nop
    
            goto L_80025D0C;
    }
    // 0x80025D04: nop

    // 0x80025D08: addiu       $t7, $t7, -0x8
    ctx->r15 = ADD32(ctx->r15, -0X8);
L_80025D0C:
    // 0x80025D0C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80025D10: jal         0x80025154
    // 0x80025D14: sw          $t8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r24;
    func_80025154(rdram, ctx);
        goto after_12;
    // 0x80025D14: sw          $t8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r24;
    after_12:
    // 0x80025D18: bne         $v0, $zero, L_80025D28
    if (ctx->r2 != 0) {
        // 0x80025D1C: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_80025D28;
    }
    // 0x80025D1C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x80025D20: b           L_80026240
    // 0x80025D24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80026240;
    // 0x80025D24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80025D28:
    // 0x80025D28: lw          $s2, 0xC4($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC4);
    // 0x80025D2C: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x80025D30: addiu       $s1, $zero, 0x24
    ctx->r17 = ADD32(0, 0X24);
    // 0x80025D34: jal         0x80024930
    // 0x80025D38: sw          $t0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r8;
    func_80024930(rdram, ctx);
        goto after_13;
    // 0x80025D38: sw          $t0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r8;
    after_13:
    // 0x80025D3C: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x80025D40: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80025D44: lw          $t9, -0xDBC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0XDBC);
    // 0x80025D48: lw          $t6, 0x4($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X4);
    // 0x80025D4C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80025D50: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x80025D54: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x80025D58: lw          $t8, -0xDBC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0XDBC);
    // 0x80025D5C: lw          $t9, 0xC($t0)
    ctx->r25 = MEM_W(ctx->r8, 0XC);
    // 0x80025D60: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    // 0x80025D64: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80025D68: sw          $t6, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r14;
    // 0x80025D6C: bne         $a0, $zero, L_80025D7C
    if (ctx->r4 != 0) {
        // 0x80025D70: or          $a3, $t0, $zero
        ctx->r7 = ctx->r8 | 0;
            goto L_80025D7C;
    }
    // 0x80025D70: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x80025D74: b           L_80025ED0
    // 0x80025D78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80025ED0;
    // 0x80025D78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80025D7C:
    // 0x80025D7C: andi        $t7, $a0, 0x1
    ctx->r15 = ctx->r4 & 0X1;
    // 0x80025D80: beq         $t7, $zero, L_80025D8C
    if (ctx->r15 == 0) {
        // 0x80025D84: nop
    
            goto L_80025D8C;
    }
    // 0x80025D84: nop

    // 0x80025D88: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_80025D8C:
    // 0x80025D8C: sw          $a0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r4;
    // 0x80025D90: sw          $a3, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r7;
    // 0x80025D94: jal         0x80025154
    // 0x80025D98: sw          $t0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r8;
    func_80025154(rdram, ctx);
        goto after_14;
    // 0x80025D98: sw          $t0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r8;
    after_14:
    // 0x80025D9C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80025DA0: addiu       $a1, $a1, -0x4900
    ctx->r5 = ADD32(ctx->r5, -0X4900);
    // 0x80025DA4: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x80025DA8: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    // 0x80025DAC: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x80025DB0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80025DB4: bne         $v0, $zero, L_80025DC4
    if (ctx->r2 != 0) {
        // 0x80025DB8: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80025DC4;
    }
    // 0x80025DB8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80025DBC: b           L_80025ED0
    // 0x80025DC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80025ED0;
    // 0x80025DC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80025DC4:
    // 0x80025DC4: lw          $t8, 0x4($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X4);
    // 0x80025DC8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80025DCC: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x80025DD0: sw          $t8, -0xDB8($at)
    MEM_W(-0XDB8, ctx->r1) = ctx->r24;
    // 0x80025DD4: lw          $s2, -0xDB8($s2)
    ctx->r18 = MEM_W(ctx->r18, -0XDB8);
    // 0x80025DD8: sw          $t0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r8;
    // 0x80025DDC: sw          $a3, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r7;
    // 0x80025DE0: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x80025DE4: jal         0x80024930
    // 0x80025DE8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    func_80024930(rdram, ctx);
        goto after_15;
    // 0x80025DE8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    after_15:
    // 0x80025DEC: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x80025DF0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80025DF4: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x80025DF8: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    // 0x80025DFC: blez        $t9, L_80025ECC
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80025E00: addiu       $a1, $a1, -0x4900
        ctx->r5 = ADD32(ctx->r5, -0X4900);
            goto L_80025ECC;
    }
    // 0x80025E00: addiu       $a1, $a1, -0x4900
    ctx->r5 = ADD32(ctx->r5, -0X4900);
    // 0x80025E04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80025E08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80025E0C:
    // 0x80025E0C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80025E10: nop

    // 0x80025E14: addu        $v1, $t6, $a0
    ctx->r3 = ADD32(ctx->r14, ctx->r4);
    // 0x80025E18: lbu         $t7, 0xE($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0XE);
    // 0x80025E1C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80025E20: beq         $t7, $zero, L_80025E34
    if (ctx->r15 == 0) {
        // 0x80025E24: nop
    
            goto L_80025E34;
    }
    // 0x80025E24: nop

    // 0x80025E28: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80025E2C: b           L_80025EC0
    // 0x80025E30: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
        goto L_80025EC0;
    // 0x80025E30: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
L_80025E34:
    // 0x80025E34: sb          $a2, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r6;
    // 0x80025E38: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x80025E3C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80025E40: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x80025E44: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80025E48: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80025E4C: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x80025E50: nop

    // 0x80025E54: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80025E58: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x80025E5C: lbu         $t9, 0x9($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X9);
    // 0x80025E60: nop

    // 0x80025E64: beq         $t9, $zero, L_80025E78
    if (ctx->r25 == 0) {
        // 0x80025E68: nop
    
            goto L_80025E78;
    }
    // 0x80025E68: nop

    // 0x80025E6C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80025E70: b           L_80025EC0
    // 0x80025E74: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
        goto L_80025EC0;
    // 0x80025E74: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
L_80025E78:
    // 0x80025E78: sb          $a2, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r6;
    // 0x80025E7C: lw          $t7, 0xC($t0)
    ctx->r15 = MEM_W(ctx->r8, 0XC);
    // 0x80025E80: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80025E84: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x80025E88: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80025E8C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80025E90: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80025E94: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x80025E98: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x80025E9C: beq         $v1, $zero, L_80025EB4
    if (ctx->r3 == 0) {
        // 0x80025EA0: sw          $t7, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->r15;
            goto L_80025EB4;
    }
    // 0x80025EA0: sw          $t7, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r15;
    // 0x80025EA4: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x80025EA8: nop

    // 0x80025EAC: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x80025EB0: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
L_80025EB4:
    // 0x80025EB4: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80025EB8: nop

    // 0x80025EBC: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
L_80025EC0:
    // 0x80025EC0: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80025EC4: bne         $at, $zero, L_80025E0C
    if (ctx->r1 != 0) {
        // 0x80025EC8: nop
    
            goto L_80025E0C;
    }
    // 0x80025EC8: nop

L_80025ECC:
    // 0x80025ECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80025ED0:
    // 0x80025ED0: beq         $v0, $zero, L_80025EE0
    if (ctx->r2 == 0) {
        // 0x80025ED4: nop
    
            goto L_80025EE0;
    }
    // 0x80025ED4: nop

    // 0x80025ED8: b           L_80026240
    // 0x80025EDC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        goto L_80026240;
    // 0x80025EDC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_80025EE0:
    // 0x80025EE0: lw          $t6, 0x14($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X14);
    // 0x80025EE4: nop

    // 0x80025EE8: beq         $t6, $zero, L_80025F00
    if (ctx->r14 == 0) {
        // 0x80025EEC: nop
    
            goto L_80025F00;
    }
    // 0x80025EEC: nop

    // 0x80025EF0: lw          $v0, 0x18($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X18);
    // 0x80025EF4: nop

    // 0x80025EF8: bne         $v0, $zero, L_80025F08
    if (ctx->r2 != 0) {
        // 0x80025EFC: andi        $t7, $v0, 0x1
        ctx->r15 = ctx->r2 & 0X1;
            goto L_80025F08;
    }
    // 0x80025EFC: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
L_80025F00:
    // 0x80025F00: b           L_80026038
    // 0x80025F04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80026038;
    // 0x80025F04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80025F08:
    // 0x80025F08: beq         $t7, $zero, L_80025F14
    if (ctx->r15 == 0) {
        // 0x80025F0C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80025F14;
    }
    // 0x80025F0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80025F10: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
L_80025F14:
    // 0x80025F14: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x80025F18: jal         0x80025154
    // 0x80025F1C: sw          $t0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r8;
    func_80025154(rdram, ctx);
        goto after_16;
    // 0x80025F1C: sw          $t0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r8;
    after_16:
    // 0x80025F20: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80025F24: addiu       $v1, $v1, -0x48CC
    ctx->r3 = ADD32(ctx->r3, -0X48CC);
    // 0x80025F28: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80025F2C: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x80025F30: bne         $v0, $zero, L_80025F40
    if (ctx->r2 != 0) {
        // 0x80025F34: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_80025F40;
    }
    // 0x80025F34: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80025F38: b           L_80026038
    // 0x80025F3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80026038;
    // 0x80025F3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80025F40:
    // 0x80025F40: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80025F44: lw          $t6, -0xDBC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XDBC);
    // 0x80025F48: lw          $t9, 0x14($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X14);
    // 0x80025F4C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80025F50: addu        $s2, $t9, $t6
    ctx->r18 = ADD32(ctx->r25, ctx->r14);
    // 0x80025F54: sw          $s2, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r18;
    // 0x80025F58: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
    // 0x80025F5C: jal         0x80024930
    // 0x80025F60: sw          $t0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r8;
    func_80024930(rdram, ctx);
        goto after_17;
    // 0x80025F60: sw          $t0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r8;
    after_17:
    // 0x80025F64: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80025F68: lw          $v0, -0x48CC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X48CC);
    // 0x80025F6C: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x80025F70: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80025F74: addiu       $t4, $t4, -0x48EC
    ctx->r12 = ADD32(ctx->r12, -0X48EC);
    // 0x80025F78: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x80025F7C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80025F80: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80025F84: lw          $v0, -0x48CC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X48CC);
    // 0x80025F88: nop

    // 0x80025F8C: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x80025F90: nop

    // 0x80025F94: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80025F98: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80025F9C: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    // 0x80025FA0: nop

    // 0x80025FA4: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80025FA8: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x80025FAC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80025FB0: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x80025FB4: jal         0x80025154
    // 0x80025FB8: sll         $a0, $t8, 3
    ctx->r4 = S32(ctx->r24 << 3);
    func_80025154(rdram, ctx);
        goto after_18;
    // 0x80025FB8: sll         $a0, $t8, 3
    ctx->r4 = S32(ctx->r24 << 3);
    after_18:
    // 0x80025FBC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80025FC0: addiu       $a1, $a1, -0x48C8
    ctx->r5 = ADD32(ctx->r5, -0X48C8);
    // 0x80025FC4: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x80025FC8: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x80025FCC: addiu       $t4, $t4, -0x48EC
    ctx->r12 = ADD32(ctx->r12, -0X48EC);
    // 0x80025FD0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80025FD4: bne         $v0, $zero, L_80025FE4
    if (ctx->r2 != 0) {
        // 0x80025FD8: addiu       $t5, $zero, -0x1
        ctx->r13 = ADD32(0, -0X1);
            goto L_80025FE4;
    }
    // 0x80025FD8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80025FDC: b           L_80026038
    // 0x80025FE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80026038;
    // 0x80025FE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80025FE4:
    // 0x80025FE4: lw          $t6, 0x0($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X0);
    // 0x80025FE8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80025FEC: blez        $t6, L_8002602C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80025FF0: addiu       $a0, $zero, 0x58
        ctx->r4 = ADD32(0, 0X58);
            goto L_8002602C;
    }
    // 0x80025FF0: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    // 0x80025FF4: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
L_80025FF8:
    // 0x80025FF8: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80025FFC: multu       $t8, $a0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80026000: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80026004: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80026008: mflo        $t9
    ctx->r25 = lo;
    // 0x8002600C: addu        $v0, $t9, $t6
    ctx->r2 = ADD32(ctx->r25, ctx->r14);
    // 0x80026010: sh          $t5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r13;
    // 0x80026014: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80026018: lw          $t7, 0x0($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X0);
    // 0x8002601C: nop

    // 0x80026020: slt         $at, $v1, $t7
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80026024: bne         $at, $zero, L_80025FF8
    if (ctx->r1 != 0) {
        // 0x80026028: sll         $t7, $v1, 16
        ctx->r15 = S32(ctx->r3 << 16);
            goto L_80025FF8;
    }
    // 0x80026028: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
L_8002602C:
    // 0x8002602C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80026030: sb          $zero, -0x48CD($at)
    MEM_B(-0X48CD, ctx->r1) = 0;
    // 0x80026034: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80026038:
    // 0x80026038: beq         $v0, $zero, L_80026048
    if (ctx->r2 == 0) {
        // 0x8002603C: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_80026048;
    }
    // 0x8002603C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80026040: b           L_80026240
    // 0x80026044: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80026240;
    // 0x80026044: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80026048:
    // 0x80026048: lw          $t8, -0x48F8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X48F8);
    // 0x8002604C: addiu       $at, $zero, 0x5432
    ctx->r1 = ADD32(0, 0X5432);
    // 0x80026050: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x80026054: nop

    // 0x80026058: beq         $t9, $at, L_800261B0
    if (ctx->r25 == ctx->r1) {
        // 0x8002605C: nop
    
            goto L_800261B0;
    }
    // 0x8002605C: nop

    // 0x80026060: lw          $t6, 0x1C($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X1C);
    // 0x80026064: nop

    // 0x80026068: beq         $t6, $zero, L_80026080
    if (ctx->r14 == 0) {
        // 0x8002606C: nop
    
            goto L_80026080;
    }
    // 0x8002606C: nop

    // 0x80026070: lw          $v0, 0x20($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X20);
    // 0x80026074: nop

    // 0x80026078: bne         $v0, $zero, L_80026088
    if (ctx->r2 != 0) {
        // 0x8002607C: andi        $t7, $v0, 0x1
        ctx->r15 = ctx->r2 & 0X1;
            goto L_80026088;
    }
    // 0x8002607C: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
L_80026080:
    // 0x80026080: b           L_800260E8
    // 0x80026084: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800260E8;
    // 0x80026084: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80026088:
    // 0x80026088: beq         $t7, $zero, L_80026094
    if (ctx->r15 == 0) {
        // 0x8002608C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80026094;
    }
    // 0x8002608C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80026090: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
L_80026094:
    // 0x80026094: sw          $a0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r4;
    // 0x80026098: jal         0x80025154
    // 0x8002609C: sw          $t0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r8;
    func_80025154(rdram, ctx);
        goto after_19;
    // 0x8002609C: sw          $t0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r8;
    after_19:
    // 0x800260A0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800260A4: addiu       $v1, $v1, -0x48F0
    ctx->r3 = ADD32(ctx->r3, -0X48F0);
    // 0x800260A8: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x800260AC: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x800260B0: bne         $v0, $zero, L_800260C0
    if (ctx->r2 != 0) {
        // 0x800260B4: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_800260C0;
    }
    // 0x800260B4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x800260B8: b           L_800260E8
    // 0x800260BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_800260E8;
    // 0x800260BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800260C0:
    // 0x800260C0: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800260C4: lw          $t6, -0xDBC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XDBC);
    // 0x800260C8: lw          $t9, 0x1C($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X1C);
    // 0x800260CC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800260D0: addu        $s2, $t9, $t6
    ctx->r18 = ADD32(ctx->r25, ctx->r14);
    // 0x800260D4: sw          $s2, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r18;
    // 0x800260D8: lw          $s0, 0x0($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X0);
    // 0x800260DC: jal         0x80024930
    // 0x800260E0: nop

    func_80024930(rdram, ctx);
        goto after_20;
    // 0x800260E0: nop

    after_20:
    // 0x800260E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800260E8:
    // 0x800260E8: beq         $v0, $zero, L_800261B0
    if (ctx->r2 == 0) {
        // 0x800260EC: nop
    
            goto L_800261B0;
    }
    // 0x800260EC: nop

    // 0x800260F0: b           L_80026240
    // 0x800260F4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        goto L_80026240;
    // 0x800260F4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_800260F8:
    // 0x800260F8: lw          $t8, -0xDB8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0XDB8);
    // 0x800260FC: nop

    // 0x80026100: bne         $t8, $zero, L_80026110
    if (ctx->r24 != 0) {
        // 0x80026104: nop
    
            goto L_80026110;
    }
    // 0x80026104: nop

    // 0x80026108: b           L_80026240
    // 0x8002610C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80026240;
    // 0x8002610C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80026110:
    // 0x80026110: jal         0x8002519C
    // 0x80026114: nop

    func_8002519C(rdram, ctx);
        goto after_21;
    // 0x80026114: nop

    after_21:
    // 0x80026118: beq         $v0, $zero, L_80026128
    if (ctx->r2 == 0) {
        // 0x8002611C: lui         $a1, 0x800B
        ctx->r5 = S32(0X800B << 16);
            goto L_80026128;
    }
    // 0x8002611C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80026120: b           L_80026240
    // 0x80026124: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        goto L_80026240;
    // 0x80026124: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_80026128:
    // 0x80026128: addiu       $a1, $a1, -0x4900
    ctx->r5 = ADD32(ctx->r5, -0X4900);
    // 0x8002612C: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x80026130: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80026134: lh          $t1, 0x2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X2);
    // 0x80026138: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8002613C: blez        $t1, L_800261A0
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80026140: sll         $t9, $a3, 2
        ctx->r25 = S32(ctx->r7 << 2);
            goto L_800261A0;
    }
    // 0x80026140: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
L_80026144:
    // 0x80026144: addu        $t6, $t0, $t9
    ctx->r14 = ADD32(ctx->r8, ctx->r25);
    // 0x80026148: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    // 0x8002614C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80026150: lh          $a1, 0x0($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X0);
    // 0x80026154: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80026158: blez        $a1, L_8002618C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8002615C: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_8002618C;
    }
L_8002615C:
    // 0x8002615C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80026160: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80026164: lw          $v1, 0xC($t8)
    ctx->r3 = MEM_W(ctx->r24, 0XC);
    // 0x80026168: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8002616C: lh          $t9, 0xE($v1)
    ctx->r25 = MEM_H(ctx->r3, 0XE);
    // 0x80026170: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x80026174: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80026178: addu        $a2, $a2, $t9
    ctx->r6 = ADD32(ctx->r6, ctx->r25);
    // 0x8002617C: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80026180: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x80026184: bne         $at, $zero, L_8002615C
    if (ctx->r1 != 0) {
        // 0x80026188: sra         $a2, $t6, 16
        ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
            goto L_8002615C;
    }
    // 0x80026188: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
L_8002618C:
    // 0x8002618C: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x80026190: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80026194: slt         $at, $a3, $t1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80026198: bne         $at, $zero, L_80026144
    if (ctx->r1 != 0) {
        // 0x8002619C: sll         $t9, $a3, 2
        ctx->r25 = S32(ctx->r7 << 2);
            goto L_80026144;
    }
    // 0x8002619C: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
L_800261A0:
    // 0x800261A0: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x800261A4: lw          $t8, -0x48F8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X48F8);
    // 0x800261A8: nop

    // 0x800261AC: sh          $a2, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r6;
L_800261B0:
    // 0x800261B0: jal         0x80025154
    // 0x800261B4: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    func_80025154(rdram, ctx);
        goto after_22;
    // 0x800261B4: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_22:
    // 0x800261B8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800261BC: addiu       $v1, $v1, -0x48A4
    ctx->r3 = ADD32(ctx->r3, -0X48A4);
    // 0x800261C0: bne         $v0, $zero, L_800261D0
    if (ctx->r2 != 0) {
        // 0x800261C4: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_800261D0;
    }
    // 0x800261C4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x800261C8: b           L_80026224
    // 0x800261CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80026224;
    // 0x800261CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800261D0:
    // 0x800261D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800261D4: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
L_800261D8:
    // 0x800261D8: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x800261DC: nop

    // 0x800261E0: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x800261E4: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x800261E8: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x800261EC: nop

    // 0x800261F0: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x800261F4: sw          $zero, 0x18($t9)
    MEM_W(0X18, ctx->r25) = 0;
    // 0x800261F8: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x800261FC: nop

    // 0x80026200: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80026204: sw          $zero, 0x30($t7)
    MEM_W(0X30, ctx->r15) = 0;
    // 0x80026208: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8002620C: nop

    // 0x80026210: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x80026214: addiu       $v0, $v0, 0x60
    ctx->r2 = ADD32(ctx->r2, 0X60);
    // 0x80026218: bne         $v0, $a0, L_800261D8
    if (ctx->r2 != ctx->r4) {
        // 0x8002621C: sw          $zero, 0x48($t9)
        MEM_W(0X48, ctx->r25) = 0;
            goto L_800261D8;
    }
    // 0x8002621C: sw          $zero, 0x48($t9)
    MEM_W(0X48, ctx->r25) = 0;
    // 0x80026220: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80026224:
    // 0x80026224: beq         $v0, $zero, L_80026234
    if (ctx->r2 == 0) {
        // 0x80026228: ori         $t6, $zero, 0x8000
        ctx->r14 = 0 | 0X8000;
            goto L_80026234;
    }
    // 0x80026228: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x8002622C: b           L_80026240
    // 0x80026230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80026240;
    // 0x80026230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80026234:
    // 0x80026234: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80026238: sw          $t6, -0x48E4($at)
    MEM_W(-0X48E4, ctx->r1) = ctx->r14;
    // 0x8002623C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80026240:
    // 0x80026240: beq         $v0, $zero, L_80026250
    if (ctx->r2 == 0) {
        // 0x80026244: lui         $a0, 0x8009
        ctx->r4 = S32(0X8009 << 16);
            goto L_80026250;
    }
    // 0x80026244: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80026248: b           L_8002626C
    // 0x8002624C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8002626C;
    // 0x8002624C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80026250:
    // 0x80026250: jal         0x80026A1C
    // 0x80026254: addiu       $a0, $a0, -0xDD0
    ctx->r4 = ADD32(ctx->r4, -0XDD0);
    func_80026A1C(rdram, ctx);
        goto after_23;
    // 0x80026254: addiu       $a0, $a0, -0xDD0
    ctx->r4 = ADD32(ctx->r4, -0XDD0);
    after_23:
    // 0x80026258: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x8002625C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80026260: sw          $t7, -0xD50($at)
    MEM_W(-0XD50, ctx->r1) = ctx->r15;
    // 0x80026264: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80026268: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8002626C:
    // 0x8002626C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80026270: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80026274: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80026278: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8002627C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80026280: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80026284: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80026288: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8002628C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80026290: jr          $ra
    // 0x80026294: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x80026294: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_80026298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026298: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8002629C: lw          $t6, -0x5898($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5898);
    // 0x800262A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800262A4: bne         $t6, $zero, L_800262C0
    if (ctx->r14 != 0) {
        // 0x800262A8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800262C0;
    }
    // 0x800262A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800262AC: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x800262B0: lw          $t7, -0x48E8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X48E8);
    // 0x800262B4: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x800262B8: beq         $t7, $zero, L_800262C8
    if (ctx->r15 == 0) {
        // 0x800262BC: nop
    
            goto L_800262C8;
    }
    // 0x800262BC: nop

L_800262C0:
    // 0x800262C0: b           L_80026318
    // 0x800262C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80026318;
    // 0x800262C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800262C8:
    // 0x800262C8: lw          $t8, -0xD50($t8)
    ctx->r24 = MEM_W(ctx->r24, -0XD50);
    // 0x800262CC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800262D0: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x800262D4: bne         $t9, $zero, L_800262E4
    if (ctx->r25 != 0) {
        // 0x800262D8: nop
    
            goto L_800262E4;
    }
    // 0x800262D8: nop

    // 0x800262DC: b           L_80026318
    // 0x800262E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80026318;
    // 0x800262E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800262E4:
    // 0x800262E4: lw          $a0, -0x58B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X58B0);
    // 0x800262E8: jal         0x8007AC30
    // 0x800262EC: nop

    alCSPDelete(rdram, ctx);
        goto after_0;
    // 0x800262EC: nop

    after_0:
    // 0x800262F0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800262F4: lw          $a0, -0x48FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X48FC);
    // 0x800262F8: jal         0x8007AC60
    // 0x800262FC: nop

    alSndpDelete(rdram, ctx);
        goto after_1;
    // 0x800262FC: nop

    after_1:
    // 0x80026300: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80026304: jal         0x800269D0
    // 0x80026308: addiu       $a0, $a0, -0xDD0
    ctx->r4 = ADD32(ctx->r4, -0XDD0);
    func_800269D0(rdram, ctx);
        goto after_2;
    // 0x80026308: addiu       $a0, $a0, -0xDD0
    ctx->r4 = ADD32(ctx->r4, -0XDD0);
    after_2:
    // 0x8002630C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80026310: sw          $zero, -0xD50($at)
    MEM_W(-0XD50, ctx->r1) = 0;
    // 0x80026314: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80026318:
    // 0x80026318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002631C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80026320: jr          $ra
    // 0x80026324: nop

    return;
    // 0x80026324: nop

;}
RECOMP_FUNC void func_80026328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026328: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002632C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80026330: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80026334: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80026338: addiu       $a1, $a1, -0x59B0
    ctx->r5 = ADD32(ctx->r5, -0X59B0);
    // 0x8002633C: addiu       $a0, $a0, -0x58E8
    ctx->r4 = ADD32(ctx->r4, -0X58E8);
    // 0x80026340: jal         0x80075300
    // 0x80026344: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80026344: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    after_0:
    // 0x80026348: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8002634C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80026350: addiu       $v0, $v0, -0xDD0
    ctx->r2 = ADD32(ctx->r2, -0XDD0);
    // 0x80026354: sb          $zero, -0x58B8($at)
    MEM_B(-0X58B8, ctx->r1) = 0;
    // 0x80026358: lw          $t6, 0x2C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X2C);
    // 0x8002635C: nop

    // 0x80026360: beq         $t6, $zero, L_80026378
    if (ctx->r14 == 0) {
        // 0x80026364: nop
    
            goto L_80026378;
    }
    // 0x80026364: nop

    // 0x80026368: lw          $t7, 0x30($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X30);
    // 0x8002636C: nop

    // 0x80026370: bne         $t7, $zero, L_80026380
    if (ctx->r15 != 0) {
        // 0x80026374: nop
    
            goto L_80026380;
    }
    // 0x80026374: nop

L_80026378:
    // 0x80026378: b           L_80026388
    // 0x8002637C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80026388;
    // 0x8002637C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80026380:
    // 0x80026380: jal         0x80025938
    // 0x80026384: nop

    func_80025938(rdram, ctx);
        goto after_1;
    // 0x80026384: nop

    after_1:
L_80026388:
    // 0x80026388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002638C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80026390: jr          $ra
    // 0x80026394: nop

    return;
    // 0x80026394: nop

;}
