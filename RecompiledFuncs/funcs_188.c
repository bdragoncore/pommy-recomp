#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_enemy_world3_7C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007C80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43007C84: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43007C88: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43007C8C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43007C90: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x43007C94: jal         0x43004880
    // 0x43007C98: nop

    ovl_enemy_world3_4880(rdram, ctx);
        goto after_0;
    // 0x43007C98: nop

    after_0:
    // 0x43007C9C: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x43007CA0: nop

    // 0x43007CA4: sltiu       $at, $t6, 0x16
    ctx->r1 = ctx->r14 < 0X16 ? 1 : 0;
    // 0x43007CA8: beq         $at, $zero, L_43007F2C
    if (ctx->r1 == 0) {
        // 0x43007CAC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_43007F2C;
    }
    // 0x43007CAC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43007CB0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43007CB4: addu        $at, $at, $t6
    gpr jr_addend_43007CC0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43007CB8: lw          $t6, -0x5DF0($at)
    ctx->r14 = ADD32(ctx->r1, -0X5DF0);
    // 0x43007CBC: nop

    // 0x43007CC0: jr          $t6
    // 0x43007CC4: nop

    switch (jr_addend_43007CC0 >> 2) {
        case 0: goto L_43007CC8; break;
        case 1: goto L_43007CD4; break;
        case 2: goto L_43007CEC; break;
        case 3: goto L_43007D04; break;
        case 4: goto L_43007D1C; break;
        case 5: goto L_43007D34; break;
        case 6: goto L_43007D54; break;
        case 7: goto L_43007D74; break;
        case 8: goto L_43007D8C; break;
        case 9: goto L_43007DA4; break;
        case 10: goto L_43007DBC; break;
        case 11: goto L_43007DD4; break;
        case 12: goto L_43007DEC; break;
        case 13: goto L_43007E04; break;
        case 14: goto L_43007E1C; break;
        case 15: goto L_43007E30; break;
        case 16: goto L_43007E44; break;
        case 17: goto L_43007E58; break;
        case 18: goto L_43007E78; break;
        case 19: goto L_43007E9C; break;
        case 20: goto L_43007EC0; break;
        case 21: goto L_43007EF8; break;
        default: switch_error(__func__, 0x43007CC0, 0x4300A210);
    }
    // 0x43007CC4: nop

L_43007CC8:
    // 0x43007CC8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43007CCC: b           L_43007F2C
    // 0x43007CD0: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
        goto L_43007F2C;
    // 0x43007CD0: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
L_43007CD4:
    // 0x43007CD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007CD8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43007CDC: jal         0x43007B10
    // 0x43007CE0: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    ovl_enemy_world3_7B10(rdram, ctx);
        goto after_1;
    // 0x43007CE0: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_1:
    // 0x43007CE4: b           L_43007F30
    // 0x43007CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007CEC:
    // 0x43007CEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007CF0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43007CF4: jal         0x43007B10
    // 0x43007CF8: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    ovl_enemy_world3_7B10(rdram, ctx);
        goto after_2;
    // 0x43007CF8: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    after_2:
    // 0x43007CFC: b           L_43007F30
    // 0x43007D00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007D00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007D04:
    // 0x43007D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007D08: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43007D0C: jal         0x43007B10
    // 0x43007D10: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    ovl_enemy_world3_7B10(rdram, ctx);
        goto after_3;
    // 0x43007D10: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_3:
    // 0x43007D14: b           L_43007F30
    // 0x43007D18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007D18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007D1C:
    // 0x43007D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007D20: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43007D24: jal         0x43007B10
    // 0x43007D28: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    ovl_enemy_world3_7B10(rdram, ctx);
        goto after_4;
    // 0x43007D28: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    after_4:
    // 0x43007D2C: b           L_43007F30
    // 0x43007D30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007D30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007D34:
    // 0x43007D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007D38: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43007D3C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x43007D40: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    // 0x43007D44: jal         0x43007108
    // 0x43007D48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_enemy_world3_7108(rdram, ctx);
        goto after_5;
    // 0x43007D48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x43007D4C: b           L_43007F30
    // 0x43007D50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007D50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007D54:
    // 0x43007D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007D58: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43007D5C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x43007D60: addiu       $a3, $zero, 0x78
    ctx->r7 = ADD32(0, 0X78);
    // 0x43007D64: jal         0x43007108
    // 0x43007D68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_enemy_world3_7108(rdram, ctx);
        goto after_6;
    // 0x43007D68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x43007D6C: b           L_43007F30
    // 0x43007D70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007D70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007D74:
    // 0x43007D74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007D78: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43007D7C: jal         0x43007B60
    // 0x43007D80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    ovl_enemy_world3_7B60(rdram, ctx);
        goto after_7;
    // 0x43007D80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_7:
    // 0x43007D84: b           L_43007F30
    // 0x43007D88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007D88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007D8C:
    // 0x43007D8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007D90: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43007D94: jal         0x43007B60
    // 0x43007D98: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    ovl_enemy_world3_7B60(rdram, ctx);
        goto after_8;
    // 0x43007D98: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_8:
    // 0x43007D9C: b           L_43007F30
    // 0x43007DA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007DA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007DA4:
    // 0x43007DA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007DA8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43007DAC: jal         0x43007B60
    // 0x43007DB0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    ovl_enemy_world3_7B60(rdram, ctx);
        goto after_9;
    // 0x43007DB0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_9:
    // 0x43007DB4: b           L_43007F30
    // 0x43007DB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007DB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007DBC:
    // 0x43007DBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007DC0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43007DC4: jal         0x43007B60
    // 0x43007DC8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    ovl_enemy_world3_7B60(rdram, ctx);
        goto after_10;
    // 0x43007DC8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_10:
    // 0x43007DCC: b           L_43007F30
    // 0x43007DD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007DD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007DD4:
    // 0x43007DD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007DD8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43007DDC: jal         0x43007B60
    // 0x43007DE0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    ovl_enemy_world3_7B60(rdram, ctx);
        goto after_11;
    // 0x43007DE0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_11:
    // 0x43007DE4: b           L_43007F30
    // 0x43007DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007DEC:
    // 0x43007DEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007DF0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43007DF4: jal         0x43007B60
    // 0x43007DF8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    ovl_enemy_world3_7B60(rdram, ctx);
        goto after_12;
    // 0x43007DF8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_12:
    // 0x43007DFC: b           L_43007F30
    // 0x43007E00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007E00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007E04:
    // 0x43007E04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007E08: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43007E0C: jal         0x43007B60
    // 0x43007E10: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    ovl_enemy_world3_7B60(rdram, ctx);
        goto after_13;
    // 0x43007E10: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_13:
    // 0x43007E14: b           L_43007F30
    // 0x43007E18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007E18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007E1C:
    // 0x43007E1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007E20: jal         0x43007010
    // 0x43007E24: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    ovl_enemy_world3_7010(rdram, ctx);
        goto after_14;
    // 0x43007E24: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_14:
    // 0x43007E28: b           L_43007F30
    // 0x43007E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007E30:
    // 0x43007E30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007E34: jal         0x43007010
    // 0x43007E38: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    ovl_enemy_world3_7010(rdram, ctx);
        goto after_15;
    // 0x43007E38: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_15:
    // 0x43007E3C: b           L_43007F30
    // 0x43007E40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007E40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007E44:
    // 0x43007E44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007E48: jal         0x43007010
    // 0x43007E4C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    ovl_enemy_world3_7010(rdram, ctx);
        goto after_16;
    // 0x43007E4C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_16:
    // 0x43007E50: b           L_43007F30
    // 0x43007E54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007E54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007E58:
    // 0x43007E58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007E5C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x43007E60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43007E64: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x43007E68: jal         0x43007108
    // 0x43007E6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_enemy_world3_7108(rdram, ctx);
        goto after_17;
    // 0x43007E6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_17:
    // 0x43007E70: b           L_43007F30
    // 0x43007E74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007E74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007E78:
    // 0x43007E78: addiu       $t7, $zero, 0x44
    ctx->r15 = ADD32(0, 0X44);
    // 0x43007E7C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x43007E80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007E84: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43007E88: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x43007E8C: jal         0x43007108
    // 0x43007E90: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    ovl_enemy_world3_7108(rdram, ctx);
        goto after_18;
    // 0x43007E90: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_18:
    // 0x43007E94: b           L_43007F30
    // 0x43007E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007E9C:
    // 0x43007E9C: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
    // 0x43007EA0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x43007EA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007EA8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43007EAC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x43007EB0: jal         0x43007108
    // 0x43007EB4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    ovl_enemy_world3_7108(rdram, ctx);
        goto after_19;
    // 0x43007EB4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_19:
    // 0x43007EB8: b           L_43007F30
    // 0x43007EBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007EBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007EC0:
    // 0x43007EC0: lw          $t9, 0x1C8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1C8);
    // 0x43007EC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007EC8: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x43007ECC: jal         0x43007B8C
    // 0x43007ED0: sw          $t0, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r8;
    ovl_enemy_world3_7B8C(rdram, ctx);
        goto after_20;
    // 0x43007ED0: sw          $t0, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r8;
    after_20:
    // 0x43007ED4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x43007ED8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x43007EDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007EE0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43007EE4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x43007EE8: jal         0x43007108
    // 0x43007EEC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    ovl_enemy_world3_7108(rdram, ctx);
        goto after_21;
    // 0x43007EEC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_21:
    // 0x43007EF0: b           L_43007F30
    // 0x43007EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007EF8:
    // 0x43007EF8: lw          $t2, 0x1C8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X1C8);
    // 0x43007EFC: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x43007F00: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x43007F04: sw          $t3, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r11;
    // 0x43007F08: jal         0x43007B8C
    // 0x43007F0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_7B8C(rdram, ctx);
        goto after_22;
    // 0x43007F0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x43007F10: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x43007F14: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x43007F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007F1C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43007F20: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x43007F24: jal         0x43007108
    // 0x43007F28: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    ovl_enemy_world3_7108(rdram, ctx);
        goto after_23;
    // 0x43007F28: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_23:
L_43007F2C:
    // 0x43007F2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007F30:
    // 0x43007F30: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x43007F34: jal         0x43009C14
    // 0x43007F38: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world3_9C14(rdram, ctx);
        goto after_24;
    // 0x43007F38: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_24:
    // 0x43007F3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43007F40: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43007F44: jr          $ra
    // 0x43007F48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43007F48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_enemy_world3_7F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007F4C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x43007F50: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x43007F54: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x43007F58: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x43007F5C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x43007F60: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x43007F64: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43007F68: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x43007F6C: lw          $t6, 0x22C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X22C);
    // 0x43007F70: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x43007F74: blez        $t6, L_43007FD0
    if (SIGNED(ctx->r14) <= 0) {
        // 0x43007F78: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_43007FD0;
    }
    // 0x43007F78: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x43007F7C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43007F80: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x43007F84: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x43007F88: addiu       $s2, $sp, 0x38
    ctx->r18 = ADD32(ctx->r29, 0X38);
L_43007F8C:
    // 0x43007F8C: lw          $a0, 0x234($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X234);
    // 0x43007F90: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x43007F94: jal         0x430006C4
    // 0x43007F98: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_enemy_world3_6C4(rdram, ctx);
        goto after_0;
    // 0x43007F98: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_0:
    // 0x43007F9C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x43007FA0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x43007FA4: bne         $t7, $s3, L_43007FBC
    if (ctx->r15 != ctx->r19) {
        // 0x43007FA8: nop
    
            goto L_43007FBC;
    }
    // 0x43007FA8: nop

    // 0x43007FAC: bne         $t8, $s4, L_43007FBC
    if (ctx->r24 != ctx->r20) {
        // 0x43007FB0: nop
    
            goto L_43007FBC;
    }
    // 0x43007FB0: nop

    // 0x43007FB4: b           L_43007FD4
    // 0x43007FB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_43007FD4;
    // 0x43007FB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43007FBC:
    // 0x43007FBC: lw          $t9, 0x22C($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X22C);
    // 0x43007FC0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43007FC4: slt         $at, $s1, $t9
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x43007FC8: bne         $at, $zero, L_43007F8C
    if (ctx->r1 != 0) {
        // 0x43007FCC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_43007F8C;
    }
    // 0x43007FCC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_43007FD0:
    // 0x43007FD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_43007FD4:
    // 0x43007FD4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43007FD8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43007FDC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x43007FE0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x43007FE4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x43007FE8: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x43007FEC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x43007FF0: jr          $ra
    // 0x43007FF4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x43007FF4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_enemy_world3_7FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007FF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007FFC: sltiu       $at, $a1, 0xC
    ctx->r1 = ctx->r5 < 0XC ? 1 : 0;
    // 0x43008000: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008004: beq         $at, $zero, L_43008120
    if (ctx->r1 == 0) {
        // 0x43008008: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_43008120;
    }
    // 0x43008008: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x4300800C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x43008010: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008014: addu        $at, $at, $t6
    gpr jr_addend_43008020 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43008018: lw          $t6, -0x5D98($at)
    ctx->r14 = ADD32(ctx->r1, -0X5D98);
    // 0x4300801C: nop

    // 0x43008020: jr          $t6
    // 0x43008024: nop

    switch (jr_addend_43008020 >> 2) {
        case 0: goto L_43008120; break;
        case 1: goto L_43008028; break;
        case 2: goto L_4300804C; break;
        case 3: goto L_43008070; break;
        case 4: goto L_43008094; break;
        case 5: goto L_430080B8; break;
        case 6: goto L_430080DC; break;
        case 7: goto L_430080DC; break;
        case 8: goto L_430080DC; break;
        case 9: goto L_430080F8; break;
        case 10: goto L_43008120; break;
        case 11: goto L_43008100; break;
        default: switch_error(__func__, 0x43008020, 0x4300A268);
    }
    // 0x43008024: nop

L_43008028:
    // 0x43008028: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4300802C: jal         0x430068E8
    // 0x43008030: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_world3_68E8(rdram, ctx);
        goto after_0;
    // 0x43008030: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x43008034: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x43008038: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4300803C: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x43008040: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x43008040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008044: b           L_43008120
    // 0x43008048: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x43008048: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_4300804C:
    // 0x4300804C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43008050: jal         0x430068E8
    // 0x43008054: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_world3_68E8(rdram, ctx);
        goto after_1;
    // 0x43008054: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x43008058: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x4300805C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43008060: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x43008064: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x43008064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008068: b           L_43008120
    // 0x4300806C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x4300806C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43008070:
    // 0x43008070: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43008074: jal         0x430068E8
    // 0x43008078: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_world3_68E8(rdram, ctx);
        goto after_2;
    // 0x43008078: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x4300807C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x43008080: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43008084: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x43008088: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x43008088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300808C: b           L_43008120
    // 0x43008090: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x43008090: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43008094:
    // 0x43008094: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43008098: jal         0x430068E8
    // 0x4300809C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_world3_68E8(rdram, ctx);
        goto after_3;
    // 0x4300809C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_3:
    // 0x430080A0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x430080A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430080A8: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x430080AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x430080AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430080B0: b           L_43008120
    // 0x430080B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x430080B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_430080B8:
    // 0x430080B8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x430080BC: jal         0x430068E8
    // 0x430080C0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_world3_68E8(rdram, ctx);
        goto after_4;
    // 0x430080C0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_4:
    // 0x430080C4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x430080C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430080CC: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x430080D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x430080D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430080D4: b           L_43008120
    // 0x430080D8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x430080D8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_430080DC:
    // 0x430080DC: jal         0x43007F4C
    // 0x430080E0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_world3_7F4C(rdram, ctx);
        goto after_5;
    // 0x430080E0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_5:
    // 0x430080E4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x430080E8: beq         $v0, $zero, L_43008124
    if (ctx->r2 == 0) {
        // 0x430080EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x430080EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430080F0: b           L_43008120
    // 0x430080F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x430080F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_430080F8:
    // 0x430080F8: b           L_43008120
    // 0x430080FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x430080FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43008100:
    // 0x43008100: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43008104: jal         0x43006908
    // 0x43008108: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_world3_6908(rdram, ctx);
        goto after_6;
    // 0x43008108: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_6:
    // 0x4300810C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x43008110: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43008114: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x43008118: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x43008118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300811C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43008120:
    // 0x43008120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008124:
    // 0x43008124: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43008128: jr          $ra
    // 0x4300812C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4300812C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world3_8130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008138: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4300813C: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x43008140: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43008144: bne         $v0, $at, L_43008168
    if (ctx->r2 != ctx->r1) {
        // 0x43008148: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_43008168;
    }
    // 0x43008148: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x4300814C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x43008150: jal         0x43005078
    // 0x43008154: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    ovl_enemy_world3_5078(rdram, ctx);
        goto after_0;
    // 0x43008154: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x43008158: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x4300815C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x43008160: b           L_43008190
    // 0x43008164: sw          $a2, 0x1DC($t6)
    MEM_W(0X1DC, ctx->r14) = ctx->r6;
        goto L_43008190;
    // 0x43008164: sw          $a2, 0x1DC($t6)
    MEM_W(0X1DC, ctx->r14) = ctx->r6;
L_43008168:
    // 0x43008168: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4300816C: bne         $v0, $at, L_43008190
    if (ctx->r2 != ctx->r1) {
        // 0x43008170: addiu       $a1, $zero, 0x18
        ctx->r5 = ADD32(0, 0X18);
            goto L_43008190;
    }
    // 0x43008170: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x43008174: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43008178: jal         0x43005078
    // 0x4300817C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    ovl_enemy_world3_5078(rdram, ctx);
        goto after_1;
    // 0x4300817C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x43008180: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x43008184: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x43008188: nop

    // 0x4300818C: sw          $a2, 0x1DC($t7)
    MEM_W(0X1DC, ctx->r15) = ctx->r6;
L_43008190:
    // 0x43008190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008198: jr          $ra
    // 0x4300819C: nop

    return;
    // 0x4300819C: nop

;}
RECOMP_FUNC void ovl_enemy_world3_81A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430081A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430081A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430081A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430081AC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x430081B0: beq         $a1, $at, L_4300820C
    if (ctx->r5 == ctx->r1) {
        // 0x430081B4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_4300820C;
    }
    // 0x430081B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x430081B8: lw          $t6, 0x1D4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1D4);
    // 0x430081BC: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x430081C0: nop

    // 0x430081C4: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x430081C8: bne         $at, $zero, L_43008210
    if (ctx->r1 != 0) {
        // 0x430081CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008210;
    }
    // 0x430081CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430081D0: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x430081D4: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x430081D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x430081DC: jal         0x43007FF8
    // 0x430081E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    ovl_enemy_world3_7FF8(rdram, ctx);
        goto after_0;
    // 0x430081E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x430081E4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x430081E8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x430081EC: beq         $v0, $zero, L_43008210
    if (ctx->r2 == 0) {
        // 0x430081F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008210;
    }
    // 0x430081F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430081F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x430081F8: jal         0x43008130
    // 0x430081FC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    ovl_enemy_world3_8130(rdram, ctx);
        goto after_1;
    // 0x430081FC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_1:
    // 0x43008200: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x43008204: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x43008208: sw          $zero, 0x1D4($t8)
    MEM_W(0X1D4, ctx->r24) = 0;
L_4300820C:
    // 0x4300820C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008210:
    // 0x43008210: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43008214: jr          $ra
    // 0x43008218: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x43008218: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world3_821C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300821C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43008220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008224: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43008228: jal         0x430047A0
    // 0x4300822C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world3_47A0(rdram, ctx);
        goto after_0;
    // 0x4300822C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x43008230: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43008234: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43008238: jal         0x430047A0
    // 0x4300823C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_enemy_world3_47A0(rdram, ctx);
        goto after_1;
    // 0x4300823C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x43008240: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x43008244: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43008248: beq         $v1, $a1, L_43008268
    if (ctx->r3 == ctx->r5) {
        // 0x4300824C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_43008268;
    }
    // 0x4300824C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x43008250: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x43008254: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x43008258: bne         $t6, $at, L_43008268
    if (ctx->r14 != ctx->r1) {
        // 0x4300825C: nop
    
            goto L_43008268;
    }
    // 0x4300825C: nop

    // 0x43008260: b           L_43008284
    // 0x43008264: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
        goto L_43008284;
    // 0x43008264: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_43008268:
    // 0x43008268: beq         $v0, $a1, L_43008288
    if (ctx->r2 == ctx->r5) {
        // 0x4300826C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008288;
    }
    // 0x4300826C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008270: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x43008274: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x43008278: bne         $t7, $at, L_43008288
    if (ctx->r15 != ctx->r1) {
        // 0x4300827C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008288;
    }
    // 0x4300827C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008280: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_43008284:
    // 0x43008284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008288:
    // 0x43008288: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4300828C: jr          $ra
    // 0x43008290: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x43008290: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void ovl_enemy_world3_8294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008294: beq         $a1, $zero, L_430082B0
    if (ctx->r5 == 0) {
        // 0x43008298: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_430082B0;
    }
    // 0x43008298: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x4300829C: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x430082A0: nop

    // 0x430082A4: sll         $t7, $t6, 13
    ctx->r15 = S32(ctx->r14 << 13);
    // 0x430082A8: bltz        $t7, L_430082D4
    if (SIGNED(ctx->r15) < 0) {
        // 0x430082AC: nop
    
            goto L_430082D4;
    }
    // 0x430082AC: nop

L_430082B0:
    // 0x430082B0: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x430082B4: nop

    // 0x430082B8: andi        $t8, $v0, 0x8000
    ctx->r24 = ctx->r2 & 0X8000;
    // 0x430082BC: bne         $t8, $zero, L_430082D4
    if (ctx->r24 != 0) {
        // 0x430082C0: andi        $t9, $v0, 0x2000
        ctx->r25 = ctx->r2 & 0X2000;
            goto L_430082D4;
    }
    // 0x430082C0: andi        $t9, $v0, 0x2000
    ctx->r25 = ctx->r2 & 0X2000;
    // 0x430082C4: bne         $t9, $zero, L_430082D4
    if (ctx->r25 != 0) {
        // 0x430082C8: sll         $t0, $v0, 9
        ctx->r8 = S32(ctx->r2 << 9);
            goto L_430082D4;
    }
    // 0x430082C8: sll         $t0, $v0, 9
    ctx->r8 = S32(ctx->r2 << 9);
    // 0x430082CC: bgez        $t0, L_430082D8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x430082D0: nop
    
            goto L_430082D8;
    }
    // 0x430082D0: nop

L_430082D4:
    // 0x430082D4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_430082D8:
    // 0x430082D8: jr          $ra
    // 0x430082DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x430082DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world3_82E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430082E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430082E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430082E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430082EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430082F0: jal         0x43008294
    // 0x430082F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world3_8294(rdram, ctx);
        goto after_0;
    // 0x430082F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x430082F8: beq         $v0, $zero, L_4300833C
    if (ctx->r2 == 0) {
        // 0x430082FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300833C;
    }
    // 0x430082FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008300: lw          $t6, 0x1D4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1D4);
    // 0x43008304: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43008308: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x4300830C: jal         0x430047A0
    // 0x43008310: sw          $t7, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = ctx->r15;
    ovl_enemy_world3_47A0(rdram, ctx);
        goto after_1;
    // 0x43008310: sw          $t7, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = ctx->r15;
    after_1:
    // 0x43008314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008318: jal         0x430081A0
    // 0x4300831C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    ovl_enemy_world3_81A0(rdram, ctx);
        goto after_2;
    // 0x4300831C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x43008320: bne         $v0, $zero, L_4300833C
    if (ctx->r2 != 0) {
        // 0x43008324: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300833C;
    }
    // 0x43008324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008328: jal         0x430047A0
    // 0x4300832C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world3_47A0(rdram, ctx);
        goto after_3;
    // 0x4300832C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x43008330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008334: jal         0x430081A0
    // 0x43008338: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    ovl_enemy_world3_81A0(rdram, ctx);
        goto after_4;
    // 0x43008338: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_4:
L_4300833C:
    // 0x4300833C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43008340: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43008344: jr          $ra
    // 0x43008348: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43008348: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world3_834C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300834C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x43008350: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x43008354: beq         $v0, $at, L_4300837C
    if (ctx->r2 == ctx->r1) {
        // 0x43008358: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_4300837C;
    }
    // 0x43008358: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x4300835C: beq         $v0, $at, L_4300837C
    if (ctx->r2 == ctx->r1) {
        // 0x43008360: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_4300837C;
    }
    // 0x43008360: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x43008364: beq         $v0, $at, L_4300837C
    if (ctx->r2 == ctx->r1) {
        // 0x43008368: addiu       $at, $zero, 0x33
        ctx->r1 = ADD32(0, 0X33);
            goto L_4300837C;
    }
    // 0x43008368: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x4300836C: beq         $v0, $at, L_4300837C
    if (ctx->r2 == ctx->r1) {
        // 0x43008370: addiu       $at, $zero, 0x35
        ctx->r1 = ADD32(0, 0X35);
            goto L_4300837C;
    }
    // 0x43008370: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
    // 0x43008374: bne         $v0, $at, L_43008388
    if (ctx->r2 != ctx->r1) {
        // 0x43008378: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_43008388;
    }
    // 0x43008378: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4300837C:
    // 0x4300837C: jr          $ra
    // 0x43008380: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x43008380: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43008384: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43008388:
    // 0x43008388: jr          $ra
    // 0x4300838C: nop

    return;
    // 0x4300838C: nop

;}
RECOMP_FUNC void ovl_enemy_world3_8390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008390: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x43008394: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43008398: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300839C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430083A0: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x430083A4: jal         0x43004880
    // 0x430083A8: nop

    ovl_enemy_world3_4880(rdram, ctx);
        goto after_0;
    // 0x430083A8: nop

    after_0:
    // 0x430083AC: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x430083B0: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x430083B4: bne         $v1, $at, L_4300840C
    if (ctx->r3 != ctx->r1) {
        // 0x430083B8: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_4300840C;
    }
    // 0x430083B8: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x430083BC: lw          $t6, 0x64($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X64);
    // 0x430083C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430083C4: beq         $t6, $at, L_430083E4
    if (ctx->r14 == ctx->r1) {
        // 0x430083C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430083E4;
    }
    // 0x430083C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430083CC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x430083D0: lw          $a1, 0x64($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X64);
    // 0x430083D4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x430083D8: jal         0x43004FFC
    // 0x430083DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4FFC(rdram, ctx);
        goto after_1;
    // 0x430083DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x430083E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_430083E4:
    // 0x430083E4: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x430083E8: jal         0x43009C14
    // 0x430083EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_enemy_world3_9C14(rdram, ctx);
        goto after_2;
    // 0x430083EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x430083F0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x430083F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x430083F8: jal         0x430006C4
    // 0x430083FC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_enemy_world3_6C4(rdram, ctx);
        goto after_3;
    // 0x430083FC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_3:
    // 0x43008400: b           L_4300855C
    // 0x43008404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_4300855C;
    // 0x43008404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43008408: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
L_4300840C:
    // 0x4300840C: bne         $v1, $at, L_43008514
    if (ctx->r3 != ctx->r1) {
        // 0x43008410: addiu       $at, $zero, 0x2A
        ctx->r1 = ADD32(0, 0X2A);
            goto L_43008514;
    }
    // 0x43008410: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x43008414: lw          $t7, 0x54($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X54);
    // 0x43008418: nop

    // 0x4300841C: sll         $t8, $t7, 14
    ctx->r24 = S32(ctx->r15 << 14);
    // 0x43008420: bltz        $t8, L_430084FC
    if (SIGNED(ctx->r24) < 0) {
        // 0x43008424: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430084FC;
    }
    // 0x43008424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008428: jal         0x4300834C
    // 0x4300842C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_834C(rdram, ctx);
        goto after_4;
    // 0x4300842C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x43008430: beq         $v0, $zero, L_430084F8
    if (ctx->r2 == 0) {
        // 0x43008434: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_430084F8;
    }
    // 0x43008434: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43008438: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x4300843C: lw          $t1, 0x1E4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1E4);
    // 0x43008440: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x43008444: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x43008448: addiu       $t2, $t1, -0x6
    ctx->r10 = ADD32(ctx->r9, -0X6);
    // 0x4300844C: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x43008450: beq         $at, $zero, L_430084A0
    if (ctx->r1 == 0) {
        // 0x43008454: sw          $t0, 0x54($s0)
        MEM_W(0X54, ctx->r16) = ctx->r8;
            goto L_430084A0;
    }
    // 0x43008454: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
    // 0x43008458: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x4300845C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008460: addu        $at, $at, $t2
    gpr jr_addend_4300846C = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x43008464: lw          $t2, -0x5D68($at)
    ctx->r10 = ADD32(ctx->r1, -0X5D68);
    // 0x43008468: nop

    // 0x4300846C: jr          $t2
    // 0x43008470: nop

    switch (jr_addend_4300846C >> 2) {
        case 0: goto L_43008474; break;
        case 1: goto L_4300847C; break;
        case 2: goto L_43008484; break;
        case 3: goto L_4300848C; break;
        case 4: goto L_43008494; break;
        case 5: goto L_4300849C; break;
        default: switch_error(__func__, 0x4300846C, 0x4300A298);
    }
    // 0x43008470: nop

L_43008474:
    // 0x43008474: b           L_430084A0
    // 0x43008478: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
        goto L_430084A0;
    // 0x43008478: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
L_4300847C:
    // 0x4300847C: b           L_430084A0
    // 0x43008480: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
        goto L_430084A0;
    // 0x43008480: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
L_43008484:
    // 0x43008484: b           L_430084A0
    // 0x43008488: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
        goto L_430084A0;
    // 0x43008488: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
L_4300848C:
    // 0x4300848C: b           L_430084A0
    // 0x43008490: addiu       $a1, $zero, 0x9D
    ctx->r5 = ADD32(0, 0X9D);
        goto L_430084A0;
    // 0x43008490: addiu       $a1, $zero, 0x9D
    ctx->r5 = ADD32(0, 0X9D);
L_43008494:
    // 0x43008494: b           L_430084A0
    // 0x43008498: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
        goto L_430084A0;
    // 0x43008498: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
L_4300849C:
    // 0x4300849C: addiu       $a1, $zero, 0x88
    ctx->r5 = ADD32(0, 0X88);
L_430084A0:
    // 0x430084A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430084A4: beq         $a1, $at, L_430084F8
    if (ctx->r5 == ctx->r1) {
        // 0x430084A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430084F8;
    }
    // 0x430084A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430084AC: lw          $v0, 0x54($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X54);
    // 0x430084B0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x430084B4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x430084B8: sll         $t3, $v0, 11
    ctx->r11 = S32(ctx->r2 << 11);
    // 0x430084BC: bgez        $t3, L_430084D4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x430084C0: sll         $t4, $v0, 10
        ctx->r12 = S32(ctx->r2 << 10);
            goto L_430084D4;
    }
    // 0x430084C0: sll         $t4, $v0, 10
    ctx->r12 = S32(ctx->r2 << 10);
    // 0x430084C4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x430084C8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x430084CC: b           L_430084E4
    // 0x430084D0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
        goto L_430084E4;
    // 0x430084D0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_430084D4:
    // 0x430084D4: bgez        $t4, L_430084E4
    if (SIGNED(ctx->r12) >= 0) {
        // 0x430084D8: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_430084E4;
    }
    // 0x430084D8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x430084DC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x430084E0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_430084E4:
    // 0x430084E4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x430084E8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x430084EC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x430084F0: jal         0x43001F48
    // 0x430084F4: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    ovl_enemy_world3_1F48(rdram, ctx);
        goto after_5;
    // 0x430084F4: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_5:
L_430084F8:
    // 0x430084F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_430084FC:
    // 0x430084FC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x43008500: jal         0x43009C14
    // 0x43008504: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world3_9C14(rdram, ctx);
        goto after_6;
    // 0x43008504: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_6:
    // 0x43008508: b           L_4300855C
    // 0x4300850C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_4300855C;
    // 0x4300850C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43008510: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
L_43008514:
    // 0x43008514: beq         $v1, $at, L_4300853C
    if (ctx->r3 == ctx->r1) {
        // 0x43008518: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300853C;
    }
    // 0x43008518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300851C: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x43008520: beq         $v1, $at, L_4300853C
    if (ctx->r3 == ctx->r1) {
        // 0x43008524: addiu       $at, $zero, 0x2C
        ctx->r1 = ADD32(0, 0X2C);
            goto L_4300853C;
    }
    // 0x43008524: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x43008528: beq         $v1, $at, L_4300853C
    if (ctx->r3 == ctx->r1) {
        // 0x4300852C: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_4300853C;
    }
    // 0x4300852C: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x43008530: beq         $v1, $at, L_4300853C
    if (ctx->r3 == ctx->r1) {
        // 0x43008534: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_4300853C;
    }
    // 0x43008534: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x43008538: bne         $v1, $at, L_43008550
    if (ctx->r3 != ctx->r1) {
        // 0x4300853C: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_43008550;
    }
L_4300853C:
    // 0x4300853C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43008540: jal         0x43009C14
    // 0x43008544: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world3_9C14(rdram, ctx);
        goto after_7;
    // 0x43008544: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_7:
    // 0x43008548: b           L_4300855C
    // 0x4300854C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_4300855C;
    // 0x4300854C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43008550:
    // 0x43008550: b           L_4300855C
    // 0x43008554: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_4300855C;
    // 0x43008554: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43008558: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4300855C:
    // 0x4300855C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43008560: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43008564: jr          $ra
    // 0x43008568: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x43008568: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_enemy_world3_856C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300856C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43008570: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008574: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43008578: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4300857C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43008580: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x43008584: jal         0x430006C4
    // 0x43008588: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    ovl_enemy_world3_6C4(rdram, ctx);
        goto after_0;
    // 0x43008588: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_0:
    // 0x4300858C: bne         $v0, $zero, L_430085F0
    if (ctx->r2 != 0) {
        // 0x43008590: lui         $at, 0x4301
        ctx->r1 = S32(0X4301 << 16);
            goto L_430085F0;
    }
    // 0x43008590: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008594: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43008598: lwc1        $f4, -0x5D50($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5D50);
    // 0x4300859C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x430085A0: sub.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x430085A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430085A8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x430085AC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x430085B0: bc1f        L_430085C4
    if (!c1cs) {
        // 0x430085B4: addiu       $a1, $zero, 0x25
        ctx->r5 = ADD32(0, 0X25);
            goto L_430085C4;
    }
    // 0x430085B4: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x430085B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430085BC: jal         0x43005078
    // 0x430085C0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    ovl_enemy_world3_5078(rdram, ctx);
        goto after_1;
    // 0x430085C0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_1:
L_430085C4:
    // 0x430085C4: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x430085C8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x430085CC: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x430085D0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x430085D4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x430085D8: jal         0x430006C4
    // 0x430085DC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_enemy_world3_6C4(rdram, ctx);
        goto after_2;
    // 0x430085DC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x430085E0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x430085E4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x430085E8: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x430085EC: swc1        $f16, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f16.u32l;
L_430085F0:
    // 0x430085F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430085F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430085F8: jr          $ra
    // 0x430085FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x430085FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_enemy_world3_8600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008600: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43008604: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008608: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300860C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43008610: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x43008614: jal         0x43004880
    // 0x43008618: nop

    ovl_enemy_world3_4880(rdram, ctx);
        goto after_0;
    // 0x43008618: nop

    after_0:
    // 0x4300861C: lhu         $t6, 0x262($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X262);
    // 0x43008620: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x43008624: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x43008628: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x4300862C: bgez        $t8, L_43008644
    if (SIGNED(ctx->r24) >= 0) {
        // 0x43008630: sh          $t7, 0x262($s0)
        MEM_H(0X262, ctx->r16) = ctx->r15;
            goto L_43008644;
    }
    // 0x43008630: sh          $t7, 0x262($s0)
    MEM_H(0X262, ctx->r16) = ctx->r15;
    // 0x43008634: jal         0x4300856C
    // 0x43008638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_856C(rdram, ctx);
        goto after_1;
    // 0x43008638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4300863C: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x43008640: nop

L_43008644:
    // 0x43008644: andi        $t9, $v1, 0x8000
    ctx->r25 = ctx->r3 & 0X8000;
    // 0x43008648: beq         $t9, $zero, L_43008664
    if (ctx->r25 == 0) {
        // 0x4300864C: andi        $t0, $v1, 0x4
        ctx->r8 = ctx->r3 & 0X4;
            goto L_43008664;
    }
    // 0x4300864C: andi        $t0, $v1, 0x4
    ctx->r8 = ctx->r3 & 0X4;
    // 0x43008650: jal         0x43004B88
    // 0x43008654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4B88(rdram, ctx);
        goto after_2;
    // 0x43008654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x43008658: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x4300865C: nop

    // 0x43008660: andi        $t0, $v1, 0x4
    ctx->r8 = ctx->r3 & 0X4;
L_43008664:
    // 0x43008664: beq         $t0, $zero, L_43008690
    if (ctx->r8 == 0) {
        // 0x43008668: andi        $t3, $v1, 0x8
        ctx->r11 = ctx->r3 & 0X8;
            goto L_43008690;
    }
    // 0x43008668: andi        $t3, $v1, 0x8
    ctx->r11 = ctx->r3 & 0X8;
    // 0x4300866C: jal         0x43008390
    // 0x43008670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_8390(rdram, ctx);
        goto after_3;
    // 0x43008670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43008674: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
    // 0x43008678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300867C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x43008680: jal         0x43005064
    // 0x43008684: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    ovl_enemy_world3_5064(rdram, ctx);
        goto after_4;
    // 0x43008684: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    after_4:
    // 0x43008688: b           L_430087F8
    // 0x4300868C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430087F8;
    // 0x4300868C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008690:
    // 0x43008690: beq         $t3, $zero, L_430086AC
    if (ctx->r11 == 0) {
        // 0x43008694: andi        $t4, $v1, 0x4000
        ctx->r12 = ctx->r3 & 0X4000;
            goto L_430086AC;
    }
    // 0x43008694: andi        $t4, $v1, 0x4000
    ctx->r12 = ctx->r3 & 0X4000;
    // 0x43008698: jal         0x430035F8
    // 0x4300869C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_35F8(rdram, ctx);
        goto after_5;
    // 0x4300869C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x430086A0: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x430086A4: nop

    // 0x430086A8: andi        $t4, $v1, 0x4000
    ctx->r12 = ctx->r3 & 0X4000;
L_430086AC:
    // 0x430086AC: beq         $t4, $zero, L_430086BC
    if (ctx->r12 == 0) {
        // 0x430086B0: nop
    
            goto L_430086BC;
    }
    // 0x430086B0: nop

    // 0x430086B4: jal         0x43004B08
    // 0x430086B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4B08(rdram, ctx);
        goto after_6;
    // 0x430086B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_430086BC:
    // 0x430086BC: jal         0x430082E0
    // 0x430086C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_82E0(rdram, ctx);
        goto after_7;
    // 0x430086C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x430086C4: jal         0x43008390
    // 0x430086C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_8390(rdram, ctx);
        goto after_8;
    // 0x430086C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x430086CC: bne         $v0, $zero, L_430087F8
    if (ctx->r2 != 0) {
        // 0x430086D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430087F8;
    }
    // 0x430086D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430086D4: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x430086D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430086DC: beq         $v0, $zero, L_43008708
    if (ctx->r2 == 0) {
        // 0x430086E0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_43008708;
    }
    // 0x430086E0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x430086E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430086E8: beq         $v0, $at, L_43008718
    if (ctx->r2 == ctx->r1) {
        // 0x430086EC: addiu       $a0, $zero, 0x17
        ctx->r4 = ADD32(0, 0X17);
            goto L_43008718;
    }
    // 0x430086EC: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x430086F0: beq         $v0, $a0, L_430087CC
    if (ctx->r2 == ctx->r4) {
        // 0x430086F4: addiu       $at, $zero, 0x18
        ctx->r1 = ADD32(0, 0X18);
            goto L_430087CC;
    }
    // 0x430086F4: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x430086F8: beq         $v1, $at, L_430087CC
    if (ctx->r3 == ctx->r1) {
        // 0x430086FC: nop
    
            goto L_430087CC;
    }
    // 0x430086FC: nop

    // 0x43008700: b           L_430087F8
    // 0x43008704: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430087F8;
    // 0x43008704: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008708:
    // 0x43008708: jal         0x43005078
    // 0x4300870C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world3_5078(rdram, ctx);
        goto after_9;
    // 0x4300870C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x43008710: b           L_430087F8
    // 0x43008714: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430087F8;
    // 0x43008714: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008718:
    // 0x43008718: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x4300871C: nop

    // 0x43008720: andi        $t5, $v1, 0x1000
    ctx->r13 = ctx->r3 & 0X1000;
    // 0x43008724: bne         $t5, $zero, L_430087F4
    if (ctx->r13 != 0) {
        // 0x43008728: andi        $t6, $v1, 0x8
        ctx->r14 = ctx->r3 & 0X8;
            goto L_430087F4;
    }
    // 0x43008728: andi        $t6, $v1, 0x8
    ctx->r14 = ctx->r3 & 0X8;
    // 0x4300872C: bne         $t6, $zero, L_430087F8
    if (ctx->r14 != 0) {
        // 0x43008730: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430087F8;
    }
    // 0x43008730: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43008734: jal         0x43007C80
    // 0x43008738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_7C80(rdram, ctx);
        goto after_10;
    // 0x43008738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x4300873C: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x43008740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008744: jal         0x430048A4
    // 0x43008748: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    ovl_enemy_world3_48A4(rdram, ctx);
        goto after_11;
    // 0x43008748: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_11:
    // 0x4300874C: bne         $v0, $zero, L_430087F4
    if (ctx->r2 != 0) {
        // 0x43008750: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_430087F4;
    }
    // 0x43008750: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x43008754: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x43008758: nop

    // 0x4300875C: sra         $t7, $v0, 5
    ctx->r15 = S32(SIGNED(ctx->r2) >> 5);
    // 0x43008760: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x43008764: slti        $at, $t8, 0x8
    ctx->r1 = SIGNED(ctx->r24) < 0X8 ? 1 : 0;
    // 0x43008768: bne         $at, $zero, L_43008778
    if (ctx->r1 != 0) {
        // 0x4300876C: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_43008778;
    }
    // 0x4300876C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x43008770: b           L_4300878C
    // 0x43008774: addiu       $v1, $t8, -0x8
    ctx->r3 = ADD32(ctx->r24, -0X8);
        goto L_4300878C;
    // 0x43008774: addiu       $v1, $t8, -0x8
    ctx->r3 = ADD32(ctx->r24, -0X8);
L_43008778:
    // 0x43008778: bgez        $v0, L_43008788
    if (SIGNED(ctx->r2) >= 0) {
        // 0x4300877C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_43008788;
    }
    // 0x4300877C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43008780: b           L_43008788
    // 0x43008784: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
        goto L_43008788;
    // 0x43008784: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
L_43008788:
    // 0x43008788: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_4300878C:
    // 0x4300878C: lw          $t3, 0x54($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X54);
    // 0x43008790: sllv        $t0, $t9, $v1
    ctx->r8 = S32(ctx->r25 << (ctx->r3 & 31));
    // 0x43008794: nor         $t1, $t0, $zero
    ctx->r9 = ~(ctx->r8 | 0);
    // 0x43008798: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x4300879C: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x430087A0: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x430087A4: sw          $t2, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r10;
    // 0x430087A8: sw          $t4, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r12;
    // 0x430087AC: jal         0x430077E4
    // 0x430087B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_77E4(rdram, ctx);
        goto after_12;
    // 0x430087B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x430087B4: lw          $t5, 0x54($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X54);
    // 0x430087B8: lui         $at, 0xFFF7
    ctx->r1 = S32(0XFFF7 << 16);
    // 0x430087BC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x430087C0: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x430087C4: b           L_430087F4
    // 0x430087C8: sw          $t6, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r14;
        goto L_430087F4;
    // 0x430087C8: sw          $t6, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r14;
L_430087CC:
    // 0x430087CC: bne         $a0, $v0, L_430087E0
    if (ctx->r4 != ctx->r2) {
        // 0x430087D0: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_430087E0;
    }
    // 0x430087D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x430087D4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x430087D8: b           L_430087E8
    // 0x430087DC: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
        goto L_430087E8;
    // 0x430087DC: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
L_430087E0:
    // 0x430087E0: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x430087E4: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_430087E8:
    // 0x430087E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430087EC: jal         0x43009C14
    // 0x430087F0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_enemy_world3_9C14(rdram, ctx);
        goto after_13;
    // 0x430087F0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_13:
L_430087F4:
    // 0x430087F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430087F8:
    // 0x430087F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430087FC: jr          $ra
    // 0x43008800: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x43008800: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_enemy_world3_8804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008804: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43008808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300880C: lw          $t6, 0x180($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X180);
    // 0x43008810: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x43008814: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x43008818: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x4300881C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x43008820: lwc1        $f4, 0x220($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X220);
    // 0x43008824: addiu       $t8, $t7, 0x14
    ctx->r24 = ADD32(ctx->r15, 0X14);
    // 0x43008828: addiu       $t9, $t9, -0x59D0
    ctx->r25 = ADD32(ctx->r25, -0X59D0);
    // 0x4300882C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x43008830: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x43008834: lwc1        $f8, 0x220($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X220);
    // 0x43008838: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x4300883C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43008840: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x43008844: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x43008848: bc1t        L_430088A0
    if (c1cs) {
        // 0x4300884C: lui         $at, 0x4301
        ctx->r1 = S32(0X4301 << 16);
            goto L_430088A0;
    }
    // 0x4300884C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008850: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43008854: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x43008858: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x4300885C: jal         0x430006C4
    // 0x43008860: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    ovl_enemy_world3_6C4(rdram, ctx);
        goto after_0;
    // 0x43008860: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x43008864: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43008868: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x4300886C: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x43008870: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x43008874: lwc1        $f16, 0x228($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X228);
    // 0x43008878: addiu       $t0, $v0, 0x4
    ctx->r8 = ADD32(ctx->r2, 0X4);
    // 0x4300887C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x43008880: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x43008884: lwc1        $f18, 0x224($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X224);
    // 0x43008888: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x4300888C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43008890: jal         0x43005218
    // 0x43008894: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    ovl_enemy_world3_5218(rdram, ctx);
        goto after_1;
    // 0x43008894: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    after_1:
    // 0x43008898: b           L_430088B0
    // 0x4300889C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_430088B0;
    // 0x4300889C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430088A0:
    // 0x430088A0: lwc1        $f4, -0x5D4C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5D4C);
    // 0x430088A4: nop

    // 0x430088A8: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x430088AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430088B0:
    // 0x430088B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x430088B4: jr          $ra
    // 0x430088B8: nop

    return;
    // 0x430088B8: nop

;}
RECOMP_FUNC void ovl_enemy_world3_88BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430088BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430088C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430088C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430088C8: lw          $t6, 0x180($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X180);
    // 0x430088CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x430088D0: beq         $v0, $t6, L_43008974
    if (ctx->r2 == ctx->r14) {
        // 0x430088D4: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_43008974;
    }
    // 0x430088D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430088D8: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x430088DC: nop

    // 0x430088E0: beq         $v0, $t7, L_43008978
    if (ctx->r2 == ctx->r15) {
        // 0x430088E4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43008978;
    }
    // 0x430088E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430088E8: jal         0x43008804
    // 0x430088EC: nop

    ovl_enemy_world3_8804(rdram, ctx);
        goto after_0;
    // 0x430088EC: nop

    after_0:
    // 0x430088F0: jal         0x43003A60
    // 0x430088F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_3A60(rdram, ctx);
        goto after_1;
    // 0x430088F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x430088F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430088FC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x43008900: jal         0x43009C14
    // 0x43008904: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world3_9C14(rdram, ctx);
        goto after_2;
    // 0x43008904: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_2:
    // 0x43008908: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x4300890C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43008910: beq         $v0, $at, L_4300892C
    if (ctx->r2 == ctx->r1) {
        // 0x43008914: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_4300892C;
    }
    // 0x43008914: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43008918: jal         0x43003880
    // 0x4300891C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_3880(rdram, ctx);
        goto after_3;
    // 0x4300891C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43008920: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x43008924: nop

    // 0x43008928: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_4300892C:
    // 0x4300892C: beq         $v0, $at, L_43008948
    if (ctx->r2 == ctx->r1) {
        // 0x43008930: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_43008948;
    }
    // 0x43008930: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43008934: jal         0x43008600
    // 0x43008938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_8600(rdram, ctx);
        goto after_4;
    // 0x43008938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4300893C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x43008940: nop

    // 0x43008944: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43008948:
    // 0x43008948: beq         $v0, $at, L_43008958
    if (ctx->r2 == ctx->r1) {
        // 0x4300894C: nop
    
            goto L_43008958;
    }
    // 0x4300894C: nop

    // 0x43008950: jal         0x43002E4C
    // 0x43008954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_2E4C(rdram, ctx);
        goto after_5;
    // 0x43008954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_43008958:
    // 0x43008958: lw          $t8, 0x54($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X54);
    // 0x4300895C: nop

    // 0x43008960: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x43008964: beq         $t9, $zero, L_43008978
    if (ctx->r25 == 0) {
        // 0x43008968: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43008978;
    }
    // 0x43008968: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300896C: jal         0x43002D7C
    // 0x43008970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_2D7C(rdram, ctx);
        goto after_6;
    // 0x43008970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_43008974:
    // 0x43008974: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008978:
    // 0x43008978: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4300897C: jr          $ra
    // 0x43008980: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43008980: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world3_8984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008984: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43008988: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x4300898C: lw          $v1, -0x59DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X59DC);
    // 0x43008990: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43008994: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x43008998: beq         $at, $zero, L_430089DC
    if (ctx->r1 == 0) {
        // 0x4300899C: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_430089DC;
    }
    // 0x4300899C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_430089A0:
    // 0x430089A0: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x430089A4: nop

    // 0x430089A8: beq         $a1, $t6, L_430089C8
    if (ctx->r5 == ctx->r14) {
        // 0x430089AC: nop
    
            goto L_430089C8;
    }
    // 0x430089AC: nop

    // 0x430089B0: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x430089B4: nop

    // 0x430089B8: beq         $a1, $t7, L_430089C8
    if (ctx->r5 == ctx->r15) {
        // 0x430089BC: nop
    
            goto L_430089C8;
    }
    // 0x430089BC: nop

    // 0x430089C0: jr          $ra
    // 0x430089C4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x430089C4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_430089C8:
    // 0x430089C8: addiu       $v0, $v0, 0x268
    ctx->r2 = ADD32(ctx->r2, 0X268);
    // 0x430089CC: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x430089D0: bne         $at, $zero, L_430089A0
    if (ctx->r1 != 0) {
        // 0x430089D4: nop
    
            goto L_430089A0;
    }
    // 0x430089D4: nop

    // 0x430089D8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_430089DC:
    // 0x430089DC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x430089E0: jr          $ra
    // 0x430089E4: nop

    return;
    // 0x430089E4: nop

;}
RECOMP_FUNC void ovl_enemy_world3_89E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430089E8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x430089EC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x430089F0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x430089F4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x430089F8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x430089FC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43008A00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008A04: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x43008A08: jal         0x43005250
    // 0x43008A0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world3_5250(rdram, ctx);
        goto after_0;
    // 0x43008A0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x43008A10: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x43008A14: lw          $s4, -0x59F0($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X59F0);
    // 0x43008A18: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x43008A1C: blez        $s4, L_43008AE0
    if (SIGNED(ctx->r20) <= 0) {
        // 0x43008A20: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_43008AE0;
    }
    // 0x43008A20: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43008A24: addiu       $s3, $sp, 0x38
    ctx->r19 = ADD32(ctx->r29, 0X38);
    // 0x43008A28: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x43008A2C: addiu       $s1, $sp, 0x40
    ctx->r17 = ADD32(ctx->r29, 0X40);
L_43008A30:
    // 0x43008A30: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x43008A34: jal         0x43008984
    // 0x43008A38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_enemy_world3_8984(rdram, ctx);
        goto after_1;
    // 0x43008A38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x43008A3C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x43008A40: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x43008A44: beq         $t6, $s2, L_43008AE0
    if (ctx->r14 == ctx->r18) {
        // 0x43008A48: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_43008AE0;
    }
    // 0x43008A48: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x43008A4C: jal         0x43005218
    // 0x43008A50: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_enemy_world3_5218(rdram, ctx);
        goto after_2;
    // 0x43008A50: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_2:
    // 0x43008A54: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x43008A58: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x43008A5C: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x43008A60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43008A64: andi        $t8, $v0, 0x4
    ctx->r24 = ctx->r2 & 0X4;
    // 0x43008A68: beq         $t8, $zero, L_43008A80
    if (ctx->r24 == 0) {
        // 0x43008A6C: andi        $t9, $v0, 0x1
        ctx->r25 = ctx->r2 & 0X1;
            goto L_43008A80;
    }
    // 0x43008A6C: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x43008A70: jal         0x43005218
    // 0x43008A74: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    ovl_enemy_world3_5218(rdram, ctx);
        goto after_3;
    // 0x43008A74: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_3:
    // 0x43008A78: b           L_43008AD8
    // 0x43008A7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_43008AD8;
    // 0x43008A7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_43008A80:
    // 0x43008A80: beq         $t9, $zero, L_43008AC8
    if (ctx->r25 == 0) {
        // 0x43008A84: lw          $t6, 0x40($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X40);
            goto L_43008AC8;
    }
    // 0x43008A84: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x43008A88: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x43008A8C: nop

    // 0x43008A90: lw          $t1, 0x60($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X60);
    // 0x43008A94: nop

    // 0x43008A98: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x43008A9C: sw          $t2, 0x60($t0)
    MEM_W(0X60, ctx->r8) = ctx->r10;
    // 0x43008AA0: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x43008AA4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x43008AA8: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x43008AAC: nop

    // 0x43008AB0: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x43008AB4: bne         $t5, $zero, L_43008AC8
    if (ctx->r13 != 0) {
        // 0x43008AB8: lw          $t6, 0x40($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X40);
            goto L_43008AC8;
    }
    // 0x43008AB8: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x43008ABC: jal         0x430088BC
    // 0x43008AC0: nop

    ovl_enemy_world3_88BC(rdram, ctx);
        goto after_4;
    // 0x43008AC0: nop

    after_4:
    // 0x43008AC4: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
L_43008AC8:
    // 0x43008AC8: nop

    // 0x43008ACC: addiu       $t7, $t6, 0x268
    ctx->r15 = ADD32(ctx->r14, 0X268);
    // 0x43008AD0: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x43008AD4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_43008AD8:
    // 0x43008AD8: bne         $s0, $s4, L_43008A30
    if (ctx->r16 != ctx->r20) {
        // 0x43008ADC: nop
    
            goto L_43008A30;
    }
    // 0x43008ADC: nop

L_43008AE0:
    // 0x43008AE0: bne         $s4, $zero, L_43008AF4
    if (ctx->r20 != 0) {
        // 0x43008AE4: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_43008AF4;
    }
    // 0x43008AE4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43008AE8: jal         0x43002C70
    // 0x43008AEC: nop

    ovl_enemy_world3_2C70(rdram, ctx);
        goto after_5;
    // 0x43008AEC: nop

    after_5:
    // 0x43008AF0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_43008AF4:
    // 0x43008AF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43008AF8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43008AFC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43008B00: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x43008B04: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x43008B08: jr          $ra
    // 0x43008B0C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x43008B0C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_enemy_world3_8B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008B10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008B14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_43008B18:
    // 0x43008B18: jal         0x430089E8
    // 0x43008B1C: nop

    ovl_enemy_world3_89E8(rdram, ctx);
        goto after_0;
    // 0x43008B1C: nop

    after_0:
    // 0x43008B20: jal         0x4300085C
    // 0x43008B24: nop

    ovl_enemy_world3_85C(rdram, ctx);
        goto after_1;
    // 0x43008B24: nop

    after_1:
    // 0x43008B28: b           L_43008B18
    // 0x43008B2C: nop

        goto L_43008B18;
    // 0x43008B2C: nop

    // 0x43008B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008B34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008B38: jr          $ra
    // 0x43008B3C: nop

    return;
    // 0x43008B3C: nop

;}
RECOMP_FUNC void ovl_enemy_world3_8B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008B40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008B44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008B48: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x43008B4C: nop

    // 0x43008B50: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x43008B54: sltiu       $at, $t7, 0x18
    ctx->r1 = ctx->r15 < 0X18 ? 1 : 0;
    // 0x43008B58: beq         $at, $zero, L_43008C50
    if (ctx->r1 == 0) {
        // 0x43008B5C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_43008C50;
    }
    // 0x43008B5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x43008B60: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008B64: addu        $at, $at, $t7
    gpr jr_addend_43008B70 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x43008B68: lw          $t7, -0x5D48($at)
    ctx->r15 = ADD32(ctx->r1, -0X5D48);
    // 0x43008B6C: nop

    // 0x43008B70: jr          $t7
    // 0x43008B74: nop

    switch (jr_addend_43008B70 >> 2) {
        case 0: goto L_43008B78; break;
        case 1: goto L_43008C50; break;
        case 2: goto L_43008C50; break;
        case 3: goto L_43008BC8; break;
        case 4: goto L_43008C50; break;
        case 5: goto L_43008B98; break;
        case 6: goto L_43008B88; break;
        case 7: goto L_43008BA8; break;
        case 8: goto L_43008C50; break;
        case 9: goto L_43008C50; break;
        case 10: goto L_43008BD8; break;
        case 11: goto L_43008C48; break;
        case 12: goto L_43008C50; break;
        case 13: goto L_43008C50; break;
        case 14: goto L_43008C50; break;
        case 15: goto L_43008C50; break;
        case 16: goto L_43008C18; break;
        case 17: goto L_43008C08; break;
        case 18: goto L_43008C50; break;
        case 19: goto L_43008C38; break;
        case 20: goto L_43008BB8; break;
        case 21: goto L_43008C28; break;
        case 22: goto L_43008BF8; break;
        case 23: goto L_43008BE8; break;
        default: switch_error(__func__, 0x43008B70, 0x4300A2B8);
    }
    // 0x43008B74: nop

L_43008B78:
    // 0x43008B78: jal         0x4300528C
    // 0x43008B7C: nop

    ovl_enemy_world3_528C(rdram, ctx);
        goto after_0;
    // 0x43008B7C: nop

    after_0:
    // 0x43008B80: b           L_43008C54
    // 0x43008B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008B88:
    // 0x43008B88: jal         0x43005348
    // 0x43008B8C: nop

    ovl_enemy_world3_5348(rdram, ctx);
        goto after_1;
    // 0x43008B8C: nop

    after_1:
    // 0x43008B90: b           L_43008C54
    // 0x43008B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008B98:
    // 0x43008B98: jal         0x430053BC
    // 0x43008B9C: nop

    ovl_enemy_world3_53BC(rdram, ctx);
        goto after_2;
    // 0x43008B9C: nop

    after_2:
    // 0x43008BA0: b           L_43008C54
    // 0x43008BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BA8:
    // 0x43008BA8: jal         0x43005400
    // 0x43008BAC: nop

    ovl_enemy_world3_5400(rdram, ctx);
        goto after_3;
    // 0x43008BAC: nop

    after_3:
    // 0x43008BB0: b           L_43008C54
    // 0x43008BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BB8:
    // 0x43008BB8: jal         0x43005424
    // 0x43008BBC: nop

    ovl_enemy_world3_5424(rdram, ctx);
        goto after_4;
    // 0x43008BBC: nop

    after_4:
    // 0x43008BC0: b           L_43008C54
    // 0x43008BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BC8:
    // 0x43008BC8: jal         0x4300547C
    // 0x43008BCC: nop

    ovl_enemy_world3_547C(rdram, ctx);
        goto after_5;
    // 0x43008BCC: nop

    after_5:
    // 0x43008BD0: b           L_43008C54
    // 0x43008BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BD8:
    // 0x43008BD8: jal         0x43005924
    // 0x43008BDC: nop

    ovl_enemy_world3_5924(rdram, ctx);
        goto after_6;
    // 0x43008BDC: nop

    after_6:
    // 0x43008BE0: b           L_43008C54
    // 0x43008BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BE8:
    // 0x43008BE8: jal         0x430062D8
    // 0x43008BEC: nop

    ovl_enemy_world3_62D8(rdram, ctx);
        goto after_7;
    // 0x43008BEC: nop

    after_7:
    // 0x43008BF0: b           L_43008C54
    // 0x43008BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BF8:
    // 0x43008BF8: jal         0x43006368
    // 0x43008BFC: nop

    ovl_enemy_world3_6368(rdram, ctx);
        goto after_8;
    // 0x43008BFC: nop

    after_8:
    // 0x43008C00: b           L_43008C54
    // 0x43008C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C08:
    // 0x43008C08: jal         0x430063CC
    // 0x43008C0C: nop

    ovl_enemy_world3_63CC(rdram, ctx);
        goto after_9;
    // 0x43008C0C: nop

    after_9:
    // 0x43008C10: b           L_43008C54
    // 0x43008C14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C18:
    // 0x43008C18: jal         0x43006448
    // 0x43008C1C: nop

    ovl_enemy_world3_6448(rdram, ctx);
        goto after_10;
    // 0x43008C1C: nop

    after_10:
    // 0x43008C20: b           L_43008C54
    // 0x43008C24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C28:
    // 0x43008C28: jal         0x43006488
    // 0x43008C2C: nop

    ovl_enemy_world3_6488(rdram, ctx);
        goto after_11;
    // 0x43008C2C: nop

    after_11:
    // 0x43008C30: b           L_43008C54
    // 0x43008C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C38:
    // 0x43008C38: jal         0x430064EC
    // 0x43008C3C: nop

    ovl_enemy_world3_64EC(rdram, ctx);
        goto after_12;
    // 0x43008C3C: nop

    after_12:
    // 0x43008C40: b           L_43008C54
    // 0x43008C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C48:
    // 0x43008C48: jal         0x430066D0
    // 0x43008C4C: nop

    ovl_enemy_world3_66D0(rdram, ctx);
        goto after_13;
    // 0x43008C4C: nop

    after_13:
L_43008C50:
    // 0x43008C50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C54:
    // 0x43008C54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008C58: jr          $ra
    // 0x43008C5C: nop

    return;
    // 0x43008C5C: nop

;}
RECOMP_FUNC void ovl_enemy_world3_8C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008C60: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x43008C64: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x43008C68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008C6C: sltiu       $at, $t6, 0x18
    ctx->r1 = ctx->r14 < 0X18 ? 1 : 0;
    // 0x43008C70: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43008C74: beq         $at, $zero, L_430091E0
    if (ctx->r1 == 0) {
        // 0x43008C78: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_430091E0;
    }
    // 0x43008C78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43008C7C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43008C80: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008C84: addu        $at, $at, $t6
    gpr jr_addend_43008C90 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43008C88: lw          $t6, -0x5CE0($at)
    ctx->r14 = ADD32(ctx->r1, -0X5CE0);
    // 0x43008C8C: nop

    // 0x43008C90: jr          $t6
    // 0x43008C94: nop

    switch (jr_addend_43008C90 >> 2) {
        case 0: goto L_43008E58; break;
        case 1: goto L_43008EB0; break;
        case 2: goto L_430091E0; break;
        case 3: goto L_43009114; break;
        case 4: goto L_43009128; break;
        case 5: goto L_43009154; break;
        case 6: goto L_430091E0; break;
        case 7: goto L_430091E0; break;
        case 8: goto L_430091E0; break;
        case 9: goto L_430091E0; break;
        case 10: goto L_430091E0; break;
        case 11: goto L_430091E0; break;
        case 12: goto L_430091E0; break;
        case 13: goto L_43008C98; break;
        case 14: goto L_43009170; break;
        case 15: goto L_430091E0; break;
        case 16: goto L_430091E0; break;
        case 17: goto L_430091E0; break;
        case 18: goto L_43008CE0; break;
        case 19: goto L_430091E0; break;
        case 20: goto L_430091E0; break;
        case 21: goto L_43008D60; break;
        case 22: goto L_430091E0; break;
        case 23: goto L_430090C8; break;
        default: switch_error(__func__, 0x43008C90, 0x4300A320);
    }
    // 0x43008C94: nop

L_43008C98:
    // 0x43008C98: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43008C9C: addiu       $t8, $t8, -0x6180
    ctx->r24 = ADD32(ctx->r24, -0X6180);
    // 0x43008CA0: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x43008CA4: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x43008CA8: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
    // 0x43008CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008CB0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x43008CB4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x43008CB8: jal         0x430010F0
    // 0x43008CBC: lui         $a3, 0x42DC
    ctx->r7 = S32(0X42DC << 16);
    ovl_enemy_world3_10F0(rdram, ctx);
        goto after_0;
    // 0x43008CBC: lui         $a3, 0x42DC
    ctx->r7 = S32(0X42DC << 16);
    after_0:
    // 0x43008CC0: lw          $t9, 0x1C8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1C8);
    // 0x43008CC4: addiu       $v1, $s0, 0x24C
    ctx->r3 = ADD32(ctx->r16, 0X24C);
    // 0x43008CC8: ori         $t0, $t9, 0x10
    ctx->r8 = ctx->r25 | 0X10;
    // 0x43008CCC: sw          $t0, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r8;
    // 0x43008CD0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x43008CD4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x43008CD8: b           L_430091E0
    // 0x43008CDC: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_430091E0;
    // 0x43008CDC: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_43008CE0:
    // 0x43008CE0: jal         0x43001F1C
    // 0x43008CE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_1F1C(rdram, ctx);
        goto after_1;
    // 0x43008CE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x43008CE8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43008CEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008CF0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43008CF4: jal         0x43002238
    // 0x43008CF8: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_2;
    // 0x43008CF8: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    after_2:
    // 0x43008CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008D00: jal         0x43004AD8
    // 0x43008D04: addiu       $a1, $zero, 0x4B5
    ctx->r5 = ADD32(0, 0X4B5);
    ovl_enemy_world3_4AD8(rdram, ctx);
        goto after_3;
    // 0x43008D04: addiu       $a1, $zero, 0x4B5
    ctx->r5 = ADD32(0, 0X4B5);
    after_3:
    // 0x43008D08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008D0C: jal         0x43004AD8
    // 0x43008D10: addiu       $a1, $zero, 0x4B8
    ctx->r5 = ADD32(0, 0X4B8);
    ovl_enemy_world3_4AD8(rdram, ctx);
        goto after_4;
    // 0x43008D10: addiu       $a1, $zero, 0x4B8
    ctx->r5 = ADD32(0, 0X4B8);
    after_4:
    // 0x43008D14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008D18: jal         0x43004AD8
    // 0x43008D1C: addiu       $a1, $zero, 0x530
    ctx->r5 = ADD32(0, 0X530);
    ovl_enemy_world3_4AD8(rdram, ctx);
        goto after_5;
    // 0x43008D1C: addiu       $a1, $zero, 0x530
    ctx->r5 = ADD32(0, 0X530);
    after_5:
    // 0x43008D20: lw          $t3, 0x1C8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1C8);
    // 0x43008D24: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x43008D28: ori         $t4, $t3, 0x10
    ctx->r12 = ctx->r11 | 0X10;
    // 0x43008D2C: sw          $t2, 0x250($s0)
    MEM_W(0X250, ctx->r16) = ctx->r10;
    // 0x43008D30: sw          $t4, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r12;
    // 0x43008D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008D38: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x43008D3C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x43008D40: jal         0x430010F0
    // 0x43008D44: lui         $a3, 0x42DC
    ctx->r7 = S32(0X42DC << 16);
    ovl_enemy_world3_10F0(rdram, ctx);
        goto after_6;
    // 0x43008D44: lui         $a3, 0x42DC
    ctx->r7 = S32(0X42DC << 16);
    after_6:
    // 0x43008D48: lw          $t5, 0x54($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X54);
    // 0x43008D4C: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x43008D50: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x43008D54: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x43008D58: b           L_430091E0
    // 0x43008D5C: sw          $t6, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r14;
        goto L_430091E0;
    // 0x43008D5C: sw          $t6, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r14;
L_43008D60:
    // 0x43008D60: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43008D64: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x43008D68: addiu       $v1, $s0, 0x24C
    ctx->r3 = ADD32(ctx->r16, 0X24C);
    // 0x43008D6C: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x43008D70: nop

    // 0x43008D74: bc1f        L_43008DCC
    if (!c1cs) {
        // 0x43008D78: nop
    
            goto L_43008DCC;
    }
    // 0x43008D78: nop

    // 0x43008D7C: addiu       $v1, $s0, 0x24C
    ctx->r3 = ADD32(ctx->r16, 0X24C);
    // 0x43008D80: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x43008D84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008D88: bne         $t7, $zero, L_43008E10
    if (ctx->r15 != 0) {
        // 0x43008D8C: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_43008E10;
    }
    // 0x43008D8C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43008D90: jal         0x43002238
    // 0x43008D94: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_7;
    // 0x43008D94: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_7:
    // 0x43008D98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008D9C: jal         0x43004AD8
    // 0x43008DA0: addiu       $a1, $zero, 0x4B5
    ctx->r5 = ADD32(0, 0X4B5);
    ovl_enemy_world3_4AD8(rdram, ctx);
        goto after_8;
    // 0x43008DA0: addiu       $a1, $zero, 0x4B5
    ctx->r5 = ADD32(0, 0X4B5);
    after_8:
    // 0x43008DA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008DA8: jal         0x43004AD8
    // 0x43008DAC: addiu       $a1, $zero, 0x4B8
    ctx->r5 = ADD32(0, 0X4B8);
    ovl_enemy_world3_4AD8(rdram, ctx);
        goto after_9;
    // 0x43008DAC: addiu       $a1, $zero, 0x4B8
    ctx->r5 = ADD32(0, 0X4B8);
    after_9:
    // 0x43008DB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008DB4: jal         0x43004AD8
    // 0x43008DB8: addiu       $a1, $zero, 0x530
    ctx->r5 = ADD32(0, 0X530);
    ovl_enemy_world3_4AD8(rdram, ctx);
        goto after_10;
    // 0x43008DB8: addiu       $a1, $zero, 0x530
    ctx->r5 = ADD32(0, 0X530);
    after_10:
    // 0x43008DBC: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x43008DC0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x43008DC4: b           L_43008E10
    // 0x43008DC8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
        goto L_43008E10;
    // 0x43008DC8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
L_43008DCC:
    // 0x43008DCC: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x43008DD0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43008DD4: bne         $t9, $at, L_43008DF8
    if (ctx->r25 != ctx->r1) {
        // 0x43008DD8: addiu       $a1, $zero, 0x2C
        ctx->r5 = ADD32(0, 0X2C);
            goto L_43008DF8;
    }
    // 0x43008DD8: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x43008DDC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x43008DE0: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x43008DE4: jal         0x430006C4
    // 0x43008DE8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_enemy_world3_6C4(rdram, ctx);
        goto after_11;
    // 0x43008DE8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_11:
    // 0x43008DEC: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x43008DF0: nop

    // 0x43008DF4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
L_43008DF8:
    // 0x43008DF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008DFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43008E00: jal         0x43002238
    // 0x43008E04: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_12;
    // 0x43008E04: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_12:
    // 0x43008E08: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x43008E0C: nop

L_43008E10:
    // 0x43008E10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008E14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43008E18: jal         0x4300568C
    // 0x43008E1C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    ovl_enemy_world3_568C(rdram, ctx);
        goto after_13;
    // 0x43008E1C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_13:
    // 0x43008E20: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x43008E24: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43008E28: beq         $v0, $at, L_430091E4
    if (ctx->r2 == ctx->r1) {
        // 0x43008E2C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430091E4;
    }
    // 0x43008E2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43008E30: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x43008E34: nop

    // 0x43008E38: beq         $v0, $t0, L_430091E4
    if (ctx->r2 == ctx->r8) {
        // 0x43008E3C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430091E4;
    }
    // 0x43008E3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43008E40: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x43008E44: lw          $t1, 0x54($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X54);
    // 0x43008E48: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x43008E4C: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x43008E50: b           L_430091E0
    // 0x43008E54: sw          $t2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r10;
        goto L_430091E0;
    // 0x43008E54: sw          $t2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r10;
L_43008E58:
    // 0x43008E58: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x43008E5C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x43008E60: bne         $t3, $at, L_43008E80
    if (ctx->r11 != ctx->r1) {
        // 0x43008E64: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008E80;
    }
    // 0x43008E64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008E68: lw          $t4, 0x54($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X54);
    // 0x43008E6C: lui         $at, 0xFF7F
    ctx->r1 = S32(0XFF7F << 16);
    // 0x43008E70: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x43008E74: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x43008E78: b           L_43008E98
    // 0x43008E7C: sw          $t5, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r13;
        goto L_43008E98;
    // 0x43008E7C: sw          $t5, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r13;
L_43008E80:
    // 0x43008E80: lw          $t6, 0x54($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X54);
    // 0x43008E84: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x43008E88: lw          $a1, 0x24C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24C);
    // 0x43008E8C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x43008E90: jal         0x43004DB8
    // 0x43008E94: sw          $t7, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r15;
    ovl_enemy_world3_4DB8(rdram, ctx);
        goto after_14;
    // 0x43008E94: sw          $t7, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r15;
    after_14:
L_43008E98:
    // 0x43008E98: jal         0x430014D8
    // 0x43008E9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_14D8(rdram, ctx);
        goto after_15;
    // 0x43008E9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x43008EA0: jal         0x43004E48
    // 0x43008EA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4E48(rdram, ctx);
        goto after_16;
    // 0x43008EA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x43008EA8: b           L_430091E4
    // 0x43008EAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430091E4;
    // 0x43008EAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008EB0:
    // 0x43008EB0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x43008EB4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x43008EB8: beq         $v0, $at, L_43008ED0
    if (ctx->r2 == ctx->r1) {
        // 0x43008EBC: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_43008ED0;
    }
    // 0x43008EBC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x43008EC0: beq         $v0, $at, L_43008FD4
    if (ctx->r2 == ctx->r1) {
        // 0x43008EC4: nop
    
            goto L_43008FD4;
    }
    // 0x43008EC4: nop

    // 0x43008EC8: b           L_430091E4
    // 0x43008ECC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430091E4;
    // 0x43008ECC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008ED0:
    // 0x43008ED0: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43008ED4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x43008ED8: beq         $v1, $zero, L_43008F08
    if (ctx->r3 == 0) {
        // 0x43008EDC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008F08;
    }
    // 0x43008EDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008EE0: beq         $v1, $at, L_43008F30
    if (ctx->r3 == ctx->r1) {
        // 0x43008EE4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008F30;
    }
    // 0x43008EE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008EE8: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x43008EEC: beq         $v1, $at, L_43008F4C
    if (ctx->r3 == ctx->r1) {
        // 0x43008EF0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008F4C;
    }
    // 0x43008EF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008EF4: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x43008EF8: beq         $v1, $at, L_43008F88
    if (ctx->r3 == ctx->r1) {
        // 0x43008EFC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008F88;
    }
    // 0x43008EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008F00: b           L_43008FB0
    // 0x43008F04: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
        goto L_43008FB0;
    // 0x43008F04: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
L_43008F08:
    // 0x43008F08: jal         0x43002238
    // 0x43008F0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_17;
    // 0x43008F0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
    // 0x43008F10: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x43008F14: lwc1        $f10, 0x24($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X24);
    // 0x43008F18: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x43008F1C: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43008F20: sw          $zero, 0x250($s0)
    MEM_W(0X250, ctx->r16) = 0;
    // 0x43008F24: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
    // 0x43008F28: b           L_43008FAC
    // 0x43008F2C: swc1        $f16, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f16.u32l;
        goto L_43008FAC;
    // 0x43008F2C: swc1        $f16, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f16.u32l;
L_43008F30:
    // 0x43008F30: jal         0x43002238
    // 0x43008F34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_18;
    // 0x43008F34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
    // 0x43008F38: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x43008F3C: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43008F40: sw          $zero, 0x250($s0)
    MEM_W(0X250, ctx->r16) = 0;
    // 0x43008F44: b           L_43008FAC
    // 0x43008F48: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
        goto L_43008FAC;
    // 0x43008F48: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
L_43008F4C:
    // 0x43008F4C: lw          $t8, 0x1C8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1C8);
    // 0x43008F50: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x43008F54: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x43008F58: sw          $t9, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r25;
    // 0x43008F5C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x43008F60: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x43008F64: jal         0x430010F0
    // 0x43008F68: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    ovl_enemy_world3_10F0(rdram, ctx);
        goto after_19;
    // 0x43008F68: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    after_19:
    // 0x43008F6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008F70: addiu       $a1, $zero, 0x210
    ctx->r5 = ADD32(0, 0X210);
    // 0x43008F74: jal         0x43001630
    // 0x43008F78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world3_1630(rdram, ctx);
        goto after_20;
    // 0x43008F78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_20:
    // 0x43008F7C: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43008F80: b           L_43008FB0
    // 0x43008F84: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
        goto L_43008FB0;
    // 0x43008F84: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
L_43008F88:
    // 0x43008F88: lw          $t0, 0x1C8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1C8);
    // 0x43008F8C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x43008F90: ori         $t1, $t0, 0x10
    ctx->r9 = ctx->r8 | 0X10;
    // 0x43008F94: sw          $t1, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r9;
    // 0x43008F98: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x43008F9C: jal         0x430010F0
    // 0x43008FA0: lui         $a3, 0x42DC
    ctx->r7 = S32(0X42DC << 16);
    ovl_enemy_world3_10F0(rdram, ctx);
        goto after_21;
    // 0x43008FA0: lui         $a3, 0x42DC
    ctx->r7 = S32(0X42DC << 16);
    after_21:
    // 0x43008FA4: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43008FA8: nop

L_43008FAC:
    // 0x43008FAC: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
L_43008FB0:
    // 0x43008FB0: bne         $at, $zero, L_430091E4
    if (ctx->r1 != 0) {
        // 0x43008FB4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430091E4;
    }
    // 0x43008FB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43008FB8: jal         0x43004D80
    // 0x43008FBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4D80(rdram, ctx);
        goto after_22;
    // 0x43008FBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x43008FC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008FC4: jal         0x43005078
    // 0x43008FC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world3_5078(rdram, ctx);
        goto after_23;
    // 0x43008FC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_23:
    // 0x43008FCC: b           L_430091E4
    // 0x43008FD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430091E4;
    // 0x43008FD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008FD4:
    // 0x43008FD4: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43008FD8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x43008FDC: beq         $v1, $zero, L_43008FF4
    if (ctx->r3 == 0) {
        // 0x43008FE0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008FF4;
    }
    // 0x43008FE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008FE4: beq         $v1, $at, L_4300902C
    if (ctx->r3 == ctx->r1) {
        // 0x43008FE8: nop
    
            goto L_4300902C;
    }
    // 0x43008FE8: nop

    // 0x43008FEC: b           L_43009090
    // 0x43008FF0: slti        $at, $v1, 0x14
    ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
        goto L_43009090;
    // 0x43008FF0: slti        $at, $v1, 0x14
    ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
L_43008FF4:
    // 0x43008FF4: jal         0x43002238
    // 0x43008FF8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_24;
    // 0x43008FF8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_24:
    // 0x43008FFC: sw          $zero, 0x250($s0)
    MEM_W(0X250, ctx->r16) = 0;
    // 0x43009000: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009004: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x43009008: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x4300900C: jal         0x430010F0
    // 0x43009010: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    ovl_enemy_world3_10F0(rdram, ctx);
        goto after_25;
    // 0x43009010: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    after_25:
    // 0x43009014: lw          $t2, 0x54($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X54);
    // 0x43009018: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x4300901C: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009020: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x43009024: b           L_4300908C
    // 0x43009028: sw          $t3, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r11;
        goto L_4300908C;
    // 0x43009028: sw          $t3, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r11;
L_4300902C:
    // 0x4300902C: addiu       $v1, $s0, 0x24C
    ctx->r3 = ADD32(ctx->r16, 0X24C);
    // 0x43009030: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x43009034: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43009038: beq         $t4, $at, L_43009084
    if (ctx->r12 == ctx->r1) {
        // 0x4300903C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009084;
    }
    // 0x4300903C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009040: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43009044: jal         0x430055CC
    // 0x43009048: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    ovl_enemy_world3_55CC(rdram, ctx);
        goto after_26;
    // 0x43009048: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_26:
    // 0x4300904C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x43009050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009054: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x43009058: addiu       $a1, $zero, 0x214
    ctx->r5 = ADD32(0, 0X214);
    // 0x4300905C: bne         $v0, $t5, L_43009084
    if (ctx->r2 != ctx->r13) {
        // 0x43009060: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_43009084;
    }
    // 0x43009060: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43009064: jal         0x43001630
    // 0x43009068: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    ovl_enemy_world3_1630(rdram, ctx);
        goto after_27;
    // 0x43009068: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_27:
    // 0x4300906C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x43009070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009074: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x43009078: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x4300907C: jal         0x43001210
    // 0x43009080: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_enemy_world3_1210(rdram, ctx);
        goto after_28;
    // 0x43009080: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_28:
L_43009084:
    // 0x43009084: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009088: nop

L_4300908C:
    // 0x4300908C: slti        $at, $v1, 0x14
    ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
L_43009090:
    // 0x43009090: bne         $at, $zero, L_430091E4
    if (ctx->r1 != 0) {
        // 0x43009094: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430091E4;
    }
    // 0x43009094: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43009098: jal         0x43004D80
    // 0x4300909C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4D80(rdram, ctx);
        goto after_29;
    // 0x4300909C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x430090A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430090A4: jal         0x43005078
    // 0x430090A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world3_5078(rdram, ctx);
        goto after_30;
    // 0x430090A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_30:
    // 0x430090AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430090B0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x430090B4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x430090B8: jal         0x430010F0
    // 0x430090BC: lui         $a3, 0x42DC
    ctx->r7 = S32(0X42DC << 16);
    ovl_enemy_world3_10F0(rdram, ctx);
        goto after_31;
    // 0x430090BC: lui         $a3, 0x42DC
    ctx->r7 = S32(0X42DC << 16);
    after_31:
    // 0x430090C0: b           L_430091E4
    // 0x430090C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430091E4;
    // 0x430090C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430090C8:
    // 0x430090C8: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x430090CC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x430090D0: bne         $t6, $at, L_430091E4
    if (ctx->r14 != ctx->r1) {
        // 0x430090D4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430091E4;
    }
    // 0x430090D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430090D8: lw          $t7, 0x4($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X4);
    // 0x430090DC: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x430090E0: beq         $t7, $at, L_430090F0
    if (ctx->r15 == ctx->r1) {
        // 0x430090E4: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_430090F0;
    }
    // 0x430090E4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x430090E8: b           L_430091E0
    // 0x430090EC: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
        goto L_430091E0;
    // 0x430090EC: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
L_430090F0:
    // 0x430090F0: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x430090F4: nop

    // 0x430090F8: slti        $at, $v1, 0x17
    ctx->r1 = SIGNED(ctx->r3) < 0X17 ? 1 : 0;
    // 0x430090FC: bne         $at, $zero, L_4300910C
    if (ctx->r1 != 0) {
        // 0x43009100: slti        $at, $v1, 0x21
        ctx->r1 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
            goto L_4300910C;
    }
    // 0x43009100: slti        $at, $v1, 0x21
    ctx->r1 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
    // 0x43009104: bne         $at, $zero, L_430091E4
    if (ctx->r1 != 0) {
        // 0x43009108: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430091E4;
    }
    // 0x43009108: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4300910C:
    // 0x4300910C: b           L_430091E0
    // 0x43009110: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
        goto L_430091E0;
    // 0x43009110: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
L_43009114:
    // 0x43009114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009118: jal         0x43004CE0
    // 0x4300911C: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    ovl_enemy_world3_4CE0(rdram, ctx);
        goto after_32;
    // 0x4300911C: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    after_32:
    // 0x43009120: b           L_430091E4
    // 0x43009124: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430091E4;
    // 0x43009124: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009128:
    // 0x43009128: lw          $t9, 0x60($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X60);
    // 0x4300912C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009130: bne         $t9, $zero, L_43009144
    if (ctx->r25 != 0) {
        // 0x43009134: nop
    
            goto L_43009144;
    }
    // 0x43009134: nop

    // 0x43009138: jal         0x43002238
    // 0x4300913C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_33;
    // 0x4300913C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_33:
    // 0x43009140: sw          $zero, 0x250($s0)
    MEM_W(0X250, ctx->r16) = 0;
L_43009144:
    // 0x43009144: jal         0x43004BF0
    // 0x43009148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4BF0(rdram, ctx);
        goto after_34;
    // 0x43009148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_34:
    // 0x4300914C: b           L_430091E4
    // 0x43009150: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430091E4;
    // 0x43009150: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009154:
    // 0x43009154: jal         0x43004C74
    // 0x43009158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4C74(rdram, ctx);
        goto after_35;
    // 0x43009158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_35:
    // 0x4300915C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009160: jal         0x43005078
    // 0x43009164: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world3_5078(rdram, ctx);
        goto after_36;
    // 0x43009164: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_36:
    // 0x43009168: b           L_430091E4
    // 0x4300916C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430091E4;
    // 0x4300916C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009170:
    // 0x43009170: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009174: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43009178: bne         $v1, $at, L_430091D0
    if (ctx->r3 != ctx->r1) {
        // 0x4300917C: slti        $at, $v1, 0x32
        ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
            goto L_430091D0;
    }
    // 0x4300917C: slti        $at, $v1, 0x32
    ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
    // 0x43009180: lw          $t0, 0x1E4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1E4);
    // 0x43009184: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x43009188: bne         $t0, $at, L_430091A4
    if (ctx->r8 != ctx->r1) {
        // 0x4300918C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430091A4;
    }
    // 0x4300918C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009194: jal         0x43002238
    // 0x43009198: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_37;
    // 0x43009198: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_37:
    // 0x4300919C: b           L_430091B0
    // 0x430091A0: sw          $zero, 0x250($s0)
    MEM_W(0X250, ctx->r16) = 0;
        goto L_430091B0;
    // 0x430091A0: sw          $zero, 0x250($s0)
    MEM_W(0X250, ctx->r16) = 0;
L_430091A4:
    // 0x430091A4: jal         0x43002238
    // 0x430091A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_38;
    // 0x430091A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_38:
    // 0x430091AC: sw          $zero, 0x250($s0)
    MEM_W(0X250, ctx->r16) = 0;
L_430091B0:
    // 0x430091B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430091B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x430091B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x430091BC: jal         0x43001DE0
    // 0x430091C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world3_1DE0(rdram, ctx);
        goto after_39;
    // 0x430091C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_39:
    // 0x430091C4: b           L_430091E4
    // 0x430091C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430091E4;
    // 0x430091C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430091CC: slti        $at, $v1, 0x32
    ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
L_430091D0:
    // 0x430091D0: bne         $at, $zero, L_430091E0
    if (ctx->r1 != 0) {
        // 0x430091D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430091E0;
    }
    // 0x430091D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430091D8: jal         0x43005078
    // 0x430091DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world3_5078(rdram, ctx);
        goto after_40;
    // 0x430091DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_40:
L_430091E0:
    // 0x430091E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430091E4:
    // 0x430091E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430091E8: jr          $ra
    // 0x430091EC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x430091EC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_enemy_world3_91F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430091F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430091F4: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x430091F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430091FC: sltiu       $at, $t6, 0x18
    ctx->r1 = ctx->r14 < 0X18 ? 1 : 0;
    // 0x43009200: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43009204: beq         $at, $zero, L_430094A8
    if (ctx->r1 == 0) {
        // 0x43009208: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_430094A8;
    }
    // 0x43009208: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4300920C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43009210: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009214: addu        $at, $at, $t6
    gpr jr_addend_43009220 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43009218: lw          $t6, -0x5C80($at)
    ctx->r14 = ADD32(ctx->r1, -0X5C80);
    // 0x4300921C: nop

    // 0x43009220: jr          $t6
    // 0x43009224: nop

    switch (jr_addend_43009220 >> 2) {
        case 0: goto L_43009288; break;
        case 1: goto L_430092A0; break;
        case 2: goto L_430094A8; break;
        case 3: goto L_430093E4; break;
        case 4: goto L_430093F8; break;
        case 5: goto L_43009420; break;
        case 6: goto L_430094A8; break;
        case 7: goto L_430094A8; break;
        case 8: goto L_430094A8; break;
        case 9: goto L_430094A8; break;
        case 10: goto L_430094A8; break;
        case 11: goto L_430094A8; break;
        case 12: goto L_430094A8; break;
        case 13: goto L_43009228; break;
        case 14: goto L_4300943C; break;
        case 15: goto L_430094A8; break;
        case 16: goto L_430094A8; break;
        case 17: goto L_430094A8; break;
        case 18: goto L_43009250; break;
        case 19: goto L_430094A8; break;
        case 20: goto L_430094A8; break;
        case 21: goto L_430094A8; break;
        case 22: goto L_430094A8; break;
        case 23: goto L_43009398; break;
        default: switch_error(__func__, 0x43009220, 0x4300A380);
    }
    // 0x43009224: nop

L_43009228:
    // 0x43009228: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x4300922C: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43009230: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x43009234: addiu       $t8, $t8, -0x6170
    ctx->r24 = ADD32(ctx->r24, -0X6170);
    // 0x43009238: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x4300923C: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x43009240: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x43009244: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
    // 0x43009248: b           L_430094A8
    // 0x4300924C: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
        goto L_430094A8;
    // 0x4300924C: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
L_43009250:
    // 0x43009250: jal         0x43001F1C
    // 0x43009254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_1F1C(rdram, ctx);
        goto after_0;
    // 0x43009254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x43009258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300925C: jal         0x43002238
    // 0x43009260: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_1;
    // 0x43009260: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x43009264: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300926C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43009270: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43009274: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43009278: jal         0x430010F0
    // 0x4300927C: nop

    ovl_enemy_world3_10F0(rdram, ctx);
        goto after_2;
    // 0x4300927C: nop

    after_2:
    // 0x43009280: b           L_430094AC
    // 0x43009284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430094AC;
    // 0x43009284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009288:
    // 0x43009288: jal         0x430014D8
    // 0x4300928C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_14D8(rdram, ctx);
        goto after_3;
    // 0x4300928C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43009290: jal         0x43004E48
    // 0x43009294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4E48(rdram, ctx);
        goto after_4;
    // 0x43009294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x43009298: b           L_430094AC
    // 0x4300929C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430094AC;
    // 0x4300929C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430092A0:
    // 0x430092A0: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x430092A4: nop

    // 0x430092A8: sltiu       $at, $v0, 0x1C
    ctx->r1 = ctx->r2 < 0X1C ? 1 : 0;
    // 0x430092AC: beq         $at, $zero, L_43009370
    if (ctx->r1 == 0) {
        // 0x430092B0: sll         $t1, $v0, 2
        ctx->r9 = S32(ctx->r2 << 2);
            goto L_43009370;
    }
    // 0x430092B0: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x430092B4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430092B8: addu        $at, $at, $t1
    gpr jr_addend_430092C4 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x430092BC: lw          $t1, -0x5C20($at)
    ctx->r9 = ADD32(ctx->r1, -0X5C20);
    // 0x430092C0: nop

    // 0x430092C4: jr          $t1
    // 0x430092C8: nop

    switch (jr_addend_430092C4 >> 2) {
        case 0: goto L_430092CC; break;
        case 1: goto L_43009370; break;
        case 2: goto L_43009370; break;
        case 3: goto L_43009370; break;
        case 4: goto L_43009370; break;
        case 5: goto L_430092F4; break;
        case 6: goto L_43009370; break;
        case 7: goto L_43009370; break;
        case 8: goto L_43009370; break;
        case 9: goto L_43009370; break;
        case 10: goto L_43009370; break;
        case 11: goto L_43009370; break;
        case 12: goto L_43009370; break;
        case 13: goto L_43009370; break;
        case 14: goto L_43009370; break;
        case 15: goto L_43009370; break;
        case 16: goto L_43009370; break;
        case 17: goto L_43009370; break;
        case 18: goto L_43009370; break;
        case 19: goto L_43009370; break;
        case 20: goto L_43009370; break;
        case 21: goto L_43009310; break;
        case 22: goto L_4300932C; break;
        case 23: goto L_43009370; break;
        case 24: goto L_43009370; break;
        case 25: goto L_43009370; break;
        case 26: goto L_43009370; break;
        case 27: goto L_4300934C; break;
        default: switch_error(__func__, 0x430092C4, 0x4300A3E0);
    }
    // 0x430092C8: nop

L_430092CC:
    // 0x430092CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430092D0: jal         0x43002238
    // 0x430092D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_5;
    // 0x430092D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x430092D8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x430092DC: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x430092E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x430092E4: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x430092E8: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    // 0x430092EC: b           L_43009370
    // 0x430092F0: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
        goto L_43009370;
    // 0x430092F0: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
L_430092F4:
    // 0x430092F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430092F8: jal         0x43002238
    // 0x430092FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_6;
    // 0x430092FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x43009300: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009304: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009308: b           L_43009370
    // 0x4300930C: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
        goto L_43009370;
    // 0x4300930C: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
L_43009310:
    // 0x43009310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009314: addiu       $a1, $zero, 0x205
    ctx->r5 = ADD32(0, 0X205);
    // 0x43009318: jal         0x43001630
    // 0x4300931C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world3_1630(rdram, ctx);
        goto after_7;
    // 0x4300931C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x43009320: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009324: b           L_43009374
    // 0x43009328: slti        $at, $v0, 0x23
    ctx->r1 = SIGNED(ctx->r2) < 0X23 ? 1 : 0;
        goto L_43009374;
    // 0x43009328: slti        $at, $v0, 0x23
    ctx->r1 = SIGNED(ctx->r2) < 0X23 ? 1 : 0;
L_4300932C:
    // 0x4300932C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009330: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x43009334: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x43009338: jal         0x430010F0
    // 0x4300933C: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    ovl_enemy_world3_10F0(rdram, ctx);
        goto after_8;
    // 0x4300933C: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_8:
    // 0x43009340: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009344: b           L_43009374
    // 0x43009348: slti        $at, $v0, 0x23
    ctx->r1 = SIGNED(ctx->r2) < 0X23 ? 1 : 0;
        goto L_43009374;
    // 0x43009348: slti        $at, $v0, 0x23
    ctx->r1 = SIGNED(ctx->r2) < 0X23 ? 1 : 0;
L_4300934C:
    // 0x4300934C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009354: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43009358: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4300935C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43009360: jal         0x430010F0
    // 0x43009364: nop

    ovl_enemy_world3_10F0(rdram, ctx);
        goto after_9;
    // 0x43009364: nop

    after_9:
    // 0x43009368: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x4300936C: nop

L_43009370:
    // 0x43009370: slti        $at, $v0, 0x23
    ctx->r1 = SIGNED(ctx->r2) < 0X23 ? 1 : 0;
L_43009374:
    // 0x43009374: bne         $at, $zero, L_430094AC
    if (ctx->r1 != 0) {
        // 0x43009378: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430094AC;
    }
    // 0x43009378: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300937C: jal         0x43004D80
    // 0x43009380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4D80(rdram, ctx);
        goto after_10;
    // 0x43009380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x43009384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009388: jal         0x43005078
    // 0x4300938C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world3_5078(rdram, ctx);
        goto after_11;
    // 0x4300938C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x43009390: b           L_430094AC
    // 0x43009394: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430094AC;
    // 0x43009394: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009398:
    // 0x43009398: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x4300939C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x430093A0: bne         $t2, $at, L_430094AC
    if (ctx->r10 != ctx->r1) {
        // 0x430093A4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430094AC;
    }
    // 0x430093A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430093A8: lw          $t3, 0x4($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X4);
    // 0x430093AC: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x430093B0: beq         $t3, $at, L_430093C0
    if (ctx->r11 == ctx->r1) {
        // 0x430093B4: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_430093C0;
    }
    // 0x430093B4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x430093B8: b           L_430094A8
    // 0x430093BC: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
        goto L_430094A8;
    // 0x430093BC: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
L_430093C0:
    // 0x430093C0: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x430093C4: nop

    // 0x430093C8: slti        $at, $v0, 0x16
    ctx->r1 = SIGNED(ctx->r2) < 0X16 ? 1 : 0;
    // 0x430093CC: bne         $at, $zero, L_430093DC
    if (ctx->r1 != 0) {
        // 0x430093D0: slti        $at, $v0, 0x1C
        ctx->r1 = SIGNED(ctx->r2) < 0X1C ? 1 : 0;
            goto L_430093DC;
    }
    // 0x430093D0: slti        $at, $v0, 0x1C
    ctx->r1 = SIGNED(ctx->r2) < 0X1C ? 1 : 0;
    // 0x430093D4: bne         $at, $zero, L_430094AC
    if (ctx->r1 != 0) {
        // 0x430093D8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430094AC;
    }
    // 0x430093D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430093DC:
    // 0x430093DC: b           L_430094A8
    // 0x430093E0: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
        goto L_430094A8;
    // 0x430093E0: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
L_430093E4:
    // 0x430093E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430093E8: jal         0x43004CE0
    // 0x430093EC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    ovl_enemy_world3_4CE0(rdram, ctx);
        goto after_12;
    // 0x430093EC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    after_12:
    // 0x430093F0: b           L_430094AC
    // 0x430093F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430094AC;
    // 0x430093F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430093F8:
    // 0x430093F8: lw          $t5, 0x60($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X60);
    // 0x430093FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009400: bne         $t5, $zero, L_43009410
    if (ctx->r13 != 0) {
        // 0x43009404: nop
    
            goto L_43009410;
    }
    // 0x43009404: nop

    // 0x43009408: jal         0x43002238
    // 0x4300940C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_13;
    // 0x4300940C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_13:
L_43009410:
    // 0x43009410: jal         0x43004BF0
    // 0x43009414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4BF0(rdram, ctx);
        goto after_14;
    // 0x43009414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x43009418: b           L_430094AC
    // 0x4300941C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430094AC;
    // 0x4300941C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009420:
    // 0x43009420: jal         0x43004C74
    // 0x43009424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4C74(rdram, ctx);
        goto after_15;
    // 0x43009424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x43009428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300942C: jal         0x43005078
    // 0x43009430: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world3_5078(rdram, ctx);
        goto after_16;
    // 0x43009430: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
    // 0x43009434: b           L_430094AC
    // 0x43009438: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430094AC;
    // 0x43009438: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4300943C:
    // 0x4300943C: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009440: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43009444: bne         $v0, $at, L_43009498
    if (ctx->r2 != ctx->r1) {
        // 0x43009448: slti        $at, $v0, 0x32
        ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
            goto L_43009498;
    }
    // 0x43009448: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x4300944C: lw          $t6, 0x1E4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1E4);
    // 0x43009450: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x43009454: bne         $t6, $at, L_43009470
    if (ctx->r14 != ctx->r1) {
        // 0x43009458: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009470;
    }
    // 0x43009458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300945C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009460: jal         0x43002238
    // 0x43009464: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_17;
    // 0x43009464: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_17:
    // 0x43009468: b           L_4300947C
    // 0x4300946C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_4300947C;
    // 0x4300946C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43009470:
    // 0x43009470: jal         0x43002238
    // 0x43009474: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_18;
    // 0x43009474: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_18:
    // 0x43009478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_4300947C:
    // 0x4300947C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43009480: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43009484: jal         0x43001DE0
    // 0x43009488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world3_1DE0(rdram, ctx);
        goto after_19;
    // 0x43009488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_19:
    // 0x4300948C: b           L_430094AC
    // 0x43009490: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430094AC;
    // 0x43009490: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43009494: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
L_43009498:
    // 0x43009498: bne         $at, $zero, L_430094A8
    if (ctx->r1 != 0) {
        // 0x4300949C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430094A8;
    }
    // 0x4300949C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430094A0: jal         0x43005078
    // 0x430094A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world3_5078(rdram, ctx);
        goto after_20;
    // 0x430094A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
L_430094A8:
    // 0x430094A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430094AC:
    // 0x430094AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430094B0: jr          $ra
    // 0x430094B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x430094B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world3_94B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430094B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x430094BC: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x430094C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x430094C4: sltiu       $at, $t6, 0x13
    ctx->r1 = ctx->r14 < 0X13 ? 1 : 0;
    // 0x430094C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430094CC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430094D0: beq         $at, $zero, L_43009724
    if (ctx->r1 == 0) {
        // 0x430094D4: sw          $a2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r6;
            goto L_43009724;
    }
    // 0x430094D4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x430094D8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x430094DC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430094E0: addu        $at, $at, $t6
    gpr jr_addend_430094EC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x430094E4: lw          $t6, -0x5BB0($at)
    ctx->r14 = ADD32(ctx->r1, -0X5BB0);
    // 0x430094E8: nop

    // 0x430094EC: jr          $t6
    // 0x430094F0: nop

    switch (jr_addend_430094EC >> 2) {
        case 0: goto L_43009528; break;
        case 1: goto L_43009540; break;
        case 2: goto L_43009724; break;
        case 3: goto L_43009660; break;
        case 4: goto L_43009674; break;
        case 5: goto L_4300969C; break;
        case 6: goto L_43009724; break;
        case 7: goto L_43009724; break;
        case 8: goto L_43009724; break;
        case 9: goto L_43009724; break;
        case 10: goto L_43009724; break;
        case 11: goto L_43009724; break;
        case 12: goto L_43009724; break;
        case 13: goto L_430094F4; break;
        case 14: goto L_430096B8; break;
        case 15: goto L_43009724; break;
        case 16: goto L_43009724; break;
        case 17: goto L_43009724; break;
        case 18: goto L_4300950C; break;
        default: switch_error(__func__, 0x430094EC, 0x4300A450);
    }
    // 0x430094F0: nop

L_430094F4:
    // 0x430094F4: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x430094F8: addiu       $t8, $t8, -0x6164
    ctx->r24 = ADD32(ctx->r24, -0X6164);
    // 0x430094FC: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x43009500: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x43009504: b           L_43009724
    // 0x43009508: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
        goto L_43009724;
    // 0x43009508: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
L_4300950C:
    // 0x4300950C: jal         0x43001F1C
    // 0x43009510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_1F1C(rdram, ctx);
        goto after_0;
    // 0x43009510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x43009514: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009518: jal         0x43002238
    // 0x4300951C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_1;
    // 0x4300951C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x43009520: b           L_43009728
    // 0x43009524: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009728;
    // 0x43009524: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009528:
    // 0x43009528: jal         0x430014D8
    // 0x4300952C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_14D8(rdram, ctx);
        goto after_2;
    // 0x4300952C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x43009530: jal         0x43004E48
    // 0x43009534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4E48(rdram, ctx);
        goto after_3;
    // 0x43009534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43009538: b           L_43009728
    // 0x4300953C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009728;
    // 0x4300953C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009540:
    // 0x43009540: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009544: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x43009548: beq         $v0, $zero, L_4300956C
    if (ctx->r2 == 0) {
        // 0x4300954C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300956C;
    }
    // 0x4300954C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009550: beq         $v0, $at, L_43009580
    if (ctx->r2 == ctx->r1) {
        // 0x43009554: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009580;
    }
    // 0x43009554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009558: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x4300955C: beq         $v0, $at, L_43009598
    if (ctx->r2 == ctx->r1) {
        // 0x43009560: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009598;
    }
    // 0x43009560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009564: b           L_430095C0
    // 0x43009568: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
        goto L_430095C0;
    // 0x43009568: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
L_4300956C:
    // 0x4300956C: jal         0x43002238
    // 0x43009570: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_4;
    // 0x43009570: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x43009574: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009578: b           L_430095C0
    // 0x4300957C: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
        goto L_430095C0;
    // 0x4300957C: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
L_43009580:
    // 0x43009580: addiu       $a1, $zero, 0x202
    ctx->r5 = ADD32(0, 0X202);
    // 0x43009584: jal         0x43001630
    // 0x43009588: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world3_1630(rdram, ctx);
        goto after_5;
    // 0x43009588: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x4300958C: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009590: b           L_430095C0
    // 0x43009594: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
        goto L_430095C0;
    // 0x43009594: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
L_43009598:
    // 0x43009598: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4300959C: lui         $a3, 0x41A3
    ctx->r7 = S32(0X41A3 << 16);
    // 0x430095A0: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x430095A4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x430095A8: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x430095AC: jal         0x43004610
    // 0x430095B0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_enemy_world3_4610(rdram, ctx);
        goto after_6;
    // 0x430095B0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x430095B4: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x430095B8: nop

    // 0x430095BC: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
L_430095C0:
    // 0x430095C0: bne         $at, $zero, L_430095E8
    if (ctx->r1 != 0) {
        // 0x430095C4: slti        $at, $v0, 0x7
        ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
            goto L_430095E8;
    }
    // 0x430095C4: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x430095C8: jal         0x43004D80
    // 0x430095CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4D80(rdram, ctx);
        goto after_7;
    // 0x430095CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x430095D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430095D4: jal         0x43005078
    // 0x430095D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world3_5078(rdram, ctx);
        goto after_8;
    // 0x430095D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x430095DC: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x430095E0: nop

    // 0x430095E4: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_430095E8:
    // 0x430095E8: bne         $at, $zero, L_4300960C
    if (ctx->r1 != 0) {
        // 0x430095EC: slti        $at, $v0, 0xC
        ctx->r1 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
            goto L_4300960C;
    }
    // 0x430095EC: slti        $at, $v0, 0xC
    ctx->r1 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x430095F0: beq         $at, $zero, L_4300960C
    if (ctx->r1 == 0) {
        // 0x430095F4: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_4300960C;
    }
    // 0x430095F4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x430095F8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x430095FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43009600: swc1        $f0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f0.u32l;
    // 0x43009604: b           L_43009724
    // 0x43009608: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
        goto L_43009724;
    // 0x43009608: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
L_4300960C:
    // 0x4300960C: slti        $at, $v0, 0xC
    ctx->r1 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x43009610: bne         $at, $zero, L_43009638
    if (ctx->r1 != 0) {
        // 0x43009614: slti        $at, $v0, 0x30
        ctx->r1 = SIGNED(ctx->r2) < 0X30 ? 1 : 0;
            goto L_43009638;
    }
    // 0x43009614: slti        $at, $v0, 0x30
    ctx->r1 = SIGNED(ctx->r2) < 0X30 ? 1 : 0;
    // 0x43009618: beq         $at, $zero, L_43009638
    if (ctx->r1 == 0) {
        // 0x4300961C: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_43009638;
    }
    // 0x4300961C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x43009620: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x43009624: lwc1        $f8, 0x2C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x43009628: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x4300962C: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x43009630: b           L_43009724
    // 0x43009634: swc1        $f10, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f10.u32l;
        goto L_43009724;
    // 0x43009634: swc1        $f10, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f10.u32l;
L_43009638:
    // 0x43009638: slti        $at, $v0, 0x30
    ctx->r1 = SIGNED(ctx->r2) < 0X30 ? 1 : 0;
    // 0x4300963C: bne         $at, $zero, L_43009724
    if (ctx->r1 != 0) {
        // 0x43009640: slti        $at, $v0, 0x35
        ctx->r1 = SIGNED(ctx->r2) < 0X35 ? 1 : 0;
            goto L_43009724;
    }
    // 0x43009640: slti        $at, $v0, 0x35
    ctx->r1 = SIGNED(ctx->r2) < 0X35 ? 1 : 0;
    // 0x43009644: beq         $at, $zero, L_43009724
    if (ctx->r1 == 0) {
        // 0x43009648: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_43009724;
    }
    // 0x43009648: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x4300964C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x43009650: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x43009654: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x43009658: b           L_43009724
    // 0x4300965C: swc1        $f16, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f16.u32l;
        goto L_43009724;
    // 0x4300965C: swc1        $f16, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f16.u32l;
L_43009660:
    // 0x43009660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009664: jal         0x43004CE0
    // 0x43009668: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    ovl_enemy_world3_4CE0(rdram, ctx);
        goto after_9;
    // 0x43009668: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    after_9:
    // 0x4300966C: b           L_43009728
    // 0x43009670: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009728;
    // 0x43009670: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009674:
    // 0x43009674: lw          $t9, 0x60($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X60);
    // 0x43009678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300967C: bne         $t9, $zero, L_4300968C
    if (ctx->r25 != 0) {
        // 0x43009680: nop
    
            goto L_4300968C;
    }
    // 0x43009680: nop

    // 0x43009684: jal         0x43002238
    // 0x43009688: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_10;
    // 0x43009688: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
L_4300968C:
    // 0x4300968C: jal         0x43004BF0
    // 0x43009690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4BF0(rdram, ctx);
        goto after_11;
    // 0x43009690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x43009694: b           L_43009728
    // 0x43009698: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009728;
    // 0x43009698: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4300969C:
    // 0x4300969C: jal         0x43004C74
    // 0x430096A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4C74(rdram, ctx);
        goto after_12;
    // 0x430096A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x430096A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430096A8: jal         0x43005078
    // 0x430096AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world3_5078(rdram, ctx);
        goto after_13;
    // 0x430096AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x430096B0: b           L_43009728
    // 0x430096B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009728;
    // 0x430096B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430096B8:
    // 0x430096B8: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x430096BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430096C0: bne         $v0, $at, L_43009714
    if (ctx->r2 != ctx->r1) {
        // 0x430096C4: slti        $at, $v0, 0x32
        ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
            goto L_43009714;
    }
    // 0x430096C4: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x430096C8: lw          $t0, 0x1E4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1E4);
    // 0x430096CC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x430096D0: bne         $t0, $at, L_430096EC
    if (ctx->r8 != ctx->r1) {
        // 0x430096D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430096EC;
    }
    // 0x430096D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430096D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430096DC: jal         0x43002238
    // 0x430096E0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_14;
    // 0x430096E0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_14:
    // 0x430096E4: b           L_430096F8
    // 0x430096E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_430096F8;
    // 0x430096E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_430096EC:
    // 0x430096EC: jal         0x43002238
    // 0x430096F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_15;
    // 0x430096F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_15:
    // 0x430096F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_430096F8:
    // 0x430096F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x430096FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43009700: jal         0x43001DE0
    // 0x43009704: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world3_1DE0(rdram, ctx);
        goto after_16;
    // 0x43009704: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_16:
    // 0x43009708: b           L_43009728
    // 0x4300970C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009728;
    // 0x4300970C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43009710: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
L_43009714:
    // 0x43009714: bne         $at, $zero, L_43009724
    if (ctx->r1 != 0) {
        // 0x43009718: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009724;
    }
    // 0x43009718: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300971C: jal         0x43005078
    // 0x43009720: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world3_5078(rdram, ctx);
        goto after_17;
    // 0x43009720: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
L_43009724:
    // 0x43009724: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009728:
    // 0x43009728: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4300972C: jr          $ra
    // 0x43009730: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43009730: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_enemy_world3_9734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009734: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43009738: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x4300973C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43009740: sltiu       $at, $t6, 0x13
    ctx->r1 = ctx->r14 < 0X13 ? 1 : 0;
    // 0x43009744: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43009748: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4300974C: beq         $at, $zero, L_43009980
    if (ctx->r1 == 0) {
        // 0x43009750: sw          $a2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r6;
            goto L_43009980;
    }
    // 0x43009750: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x43009754: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43009758: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300975C: addu        $at, $at, $t6
    gpr jr_addend_43009768 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43009760: lw          $t6, -0x5B64($at)
    ctx->r14 = ADD32(ctx->r1, -0X5B64);
    // 0x43009764: nop

    // 0x43009768: jr          $t6
    // 0x4300976C: nop

    switch (jr_addend_43009768 >> 2) {
        case 0: goto L_430097A8; break;
        case 1: goto L_430097C0; break;
        case 2: goto L_43009980; break;
        case 3: goto L_4300989C; break;
        case 4: goto L_430098B0; break;
        case 5: goto L_430098F0; break;
        case 6: goto L_43009980; break;
        case 7: goto L_43009980; break;
        case 8: goto L_43009980; break;
        case 9: goto L_43009980; break;
        case 10: goto L_43009980; break;
        case 11: goto L_43009980; break;
        case 12: goto L_43009980; break;
        case 13: goto L_43009980; break;
        case 14: goto L_4300990C; break;
        case 15: goto L_43009980; break;
        case 16: goto L_43009980; break;
        case 17: goto L_43009980; break;
        case 18: goto L_43009770; break;
        default: switch_error(__func__, 0x43009768, 0x4300A49C);
    }
    // 0x4300976C: nop

L_43009770:
    // 0x43009770: jal         0x43001F1C
    // 0x43009774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_1F1C(rdram, ctx);
        goto after_0;
    // 0x43009774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x43009778: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4300977C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43009780: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x43009784: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x43009788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300978C: addiu       $a1, $zero, 0x496
    ctx->r5 = ADD32(0, 0X496);
    // 0x43009790: addiu       $a2, $zero, 0x497
    ctx->r6 = ADD32(0, 0X497);
    // 0x43009794: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x43009798: jal         0x43002174
    // 0x4300979C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_enemy_world3_2174(rdram, ctx);
        goto after_1;
    // 0x4300979C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x430097A0: b           L_43009984
    // 0x430097A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009984;
    // 0x430097A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430097A8:
    // 0x430097A8: jal         0x430014D8
    // 0x430097AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_14D8(rdram, ctx);
        goto after_2;
    // 0x430097AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x430097B0: jal         0x43004E48
    // 0x430097B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4E48(rdram, ctx);
        goto after_3;
    // 0x430097B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x430097B8: b           L_43009984
    // 0x430097BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009984;
    // 0x430097BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430097C0:
    // 0x430097C0: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x430097C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430097C8: slti        $at, $v0, 0x12
    ctx->r1 = SIGNED(ctx->r2) < 0X12 ? 1 : 0;
    // 0x430097CC: beq         $at, $zero, L_430097E8
    if (ctx->r1 == 0) {
        // 0x430097D0: lui         $a1, 0x4248
        ctx->r5 = S32(0X4248 << 16);
            goto L_430097E8;
    }
    // 0x430097D0: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x430097D4: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x430097D8: jal         0x430049B0
    // 0x430097DC: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    ovl_enemy_world3_49B0(rdram, ctx);
        goto after_4;
    // 0x430097DC: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    after_4:
    // 0x430097E0: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x430097E4: nop

L_430097E8:
    // 0x430097E8: beq         $v0, $zero, L_43009810
    if (ctx->r2 == 0) {
        // 0x430097EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009810;
    }
    // 0x430097EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430097F0: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x430097F4: beq         $v0, $at, L_4300983C
    if (ctx->r2 == ctx->r1) {
        // 0x430097F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300983C;
    }
    // 0x430097F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430097FC: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x43009800: beq         $v0, $at, L_43009860
    if (ctx->r2 == ctx->r1) {
        // 0x43009804: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009860;
    }
    // 0x43009804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009808: b           L_43009878
    // 0x4300980C: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
        goto L_43009878;
    // 0x4300980C: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
L_43009810:
    // 0x43009810: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43009814: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43009818: addiu       $a1, $zero, 0x498
    ctx->r5 = ADD32(0, 0X498);
    // 0x4300981C: addiu       $a2, $zero, 0x499
    ctx->r6 = ADD32(0, 0X499);
    // 0x43009820: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x43009824: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x43009828: jal         0x43002174
    // 0x4300982C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_enemy_world3_2174(rdram, ctx);
        goto after_5;
    // 0x4300982C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x43009830: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009834: b           L_43009878
    // 0x43009838: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
        goto L_43009878;
    // 0x43009838: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
L_4300983C:
    // 0x4300983C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x43009840: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x43009844: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x43009848: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    // 0x4300984C: jal         0x43004610
    // 0x43009850: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_enemy_world3_4610(rdram, ctx);
        goto after_6;
    // 0x43009850: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x43009854: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009858: b           L_43009878
    // 0x4300985C: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
        goto L_43009878;
    // 0x4300985C: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
L_43009860:
    // 0x43009860: addiu       $a1, $zero, 0x215
    ctx->r5 = ADD32(0, 0X215);
    // 0x43009864: jal         0x43001630
    // 0x43009868: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world3_1630(rdram, ctx);
        goto after_7;
    // 0x43009868: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x4300986C: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009870: nop

    // 0x43009874: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
L_43009878:
    // 0x43009878: bne         $at, $zero, L_43009984
    if (ctx->r1 != 0) {
        // 0x4300987C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43009984;
    }
    // 0x4300987C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43009880: jal         0x43004D80
    // 0x43009884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4D80(rdram, ctx);
        goto after_8;
    // 0x43009884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x43009888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300988C: jal         0x43005078
    // 0x43009890: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world3_5078(rdram, ctx);
        goto after_9;
    // 0x43009890: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x43009894: b           L_43009984
    // 0x43009898: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009984;
    // 0x43009898: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4300989C:
    // 0x4300989C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430098A0: jal         0x43004CE0
    // 0x430098A4: addiu       $a1, $zero, 0xAA
    ctx->r5 = ADD32(0, 0XAA);
    ovl_enemy_world3_4CE0(rdram, ctx);
        goto after_10;
    // 0x430098A4: addiu       $a1, $zero, 0xAA
    ctx->r5 = ADD32(0, 0XAA);
    after_10:
    // 0x430098A8: b           L_43009984
    // 0x430098AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009984;
    // 0x430098AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430098B0:
    // 0x430098B0: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x430098B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430098B8: bne         $t8, $zero, L_430098E0
    if (ctx->r24 != 0) {
        // 0x430098BC: addiu       $a1, $zero, 0x49A
        ctx->r5 = ADD32(0, 0X49A);
            goto L_430098E0;
    }
    // 0x430098BC: addiu       $a1, $zero, 0x49A
    ctx->r5 = ADD32(0, 0X49A);
    // 0x430098C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x430098C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x430098C8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x430098CC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x430098D0: addiu       $a2, $zero, 0x49B
    ctx->r6 = ADD32(0, 0X49B);
    // 0x430098D4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x430098D8: jal         0x43002174
    // 0x430098DC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    ovl_enemy_world3_2174(rdram, ctx);
        goto after_11;
    // 0x430098DC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_11:
L_430098E0:
    // 0x430098E0: jal         0x43004BF0
    // 0x430098E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4BF0(rdram, ctx);
        goto after_12;
    // 0x430098E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x430098E8: b           L_43009984
    // 0x430098EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009984;
    // 0x430098EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430098F0:
    // 0x430098F0: jal         0x43004C74
    // 0x430098F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4C74(rdram, ctx);
        goto after_13;
    // 0x430098F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x430098F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430098FC: jal         0x43005078
    // 0x43009900: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world3_5078(rdram, ctx);
        goto after_14;
    // 0x43009900: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x43009904: b           L_43009984
    // 0x43009908: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009984;
    // 0x43009908: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4300990C:
    // 0x4300990C: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009910: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43009914: bne         $v0, $at, L_4300996C
    if (ctx->r2 != ctx->r1) {
        // 0x43009918: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300996C;
    }
    // 0x43009918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300991C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43009920: lw          $t0, 0x1E4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1E4);
    // 0x43009924: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x43009928: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x4300992C: bne         $t0, $at, L_4300993C
    if (ctx->r8 != ctx->r1) {
        // 0x43009930: addiu       $a1, $zero, 0x49C
        ctx->r5 = ADD32(0, 0X49C);
            goto L_4300993C;
    }
    // 0x43009930: addiu       $a1, $zero, 0x49C
    ctx->r5 = ADD32(0, 0X49C);
    // 0x43009934: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009938: nop

L_4300993C:
    // 0x4300993C: addiu       $a2, $zero, 0x49D
    ctx->r6 = ADD32(0, 0X49D);
    // 0x43009940: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x43009944: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x43009948: jal         0x43002174
    // 0x4300994C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_enemy_world3_2174(rdram, ctx);
        goto after_15;
    // 0x4300994C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_15:
    // 0x43009950: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009954: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43009958: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x4300995C: jal         0x43001DE0
    // 0x43009960: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world3_1DE0(rdram, ctx);
        goto after_16;
    // 0x43009960: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_16:
    // 0x43009964: b           L_43009984
    // 0x43009968: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009984;
    // 0x43009968: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4300996C:
    // 0x4300996C: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x43009970: bne         $at, $zero, L_43009980
    if (ctx->r1 != 0) {
        // 0x43009974: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009980;
    }
    // 0x43009974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009978: jal         0x43005078
    // 0x4300997C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world3_5078(rdram, ctx);
        goto after_17;
    // 0x4300997C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
L_43009980:
    // 0x43009980: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009984:
    // 0x43009984: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43009988: jr          $ra
    // 0x4300998C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4300998C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_enemy_world3_9990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009990: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43009994: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x43009998: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4300999C: sltiu       $at, $t6, 0x18
    ctx->r1 = ctx->r14 < 0X18 ? 1 : 0;
    // 0x430099A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430099A4: beq         $at, $zero, L_43009C04
    if (ctx->r1 == 0) {
        // 0x430099A8: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_43009C04;
    }
    // 0x430099A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430099AC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x430099B0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430099B4: addu        $at, $at, $t6
    gpr jr_addend_430099C0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x430099B8: lw          $t6, -0x5B18($at)
    ctx->r14 = ADD32(ctx->r1, -0X5B18);
    // 0x430099BC: nop

    // 0x430099C0: jr          $t6
    // 0x430099C4: nop

    switch (jr_addend_430099C0 >> 2) {
        case 0: goto L_430099FC; break;
        case 1: goto L_43009A14; break;
        case 2: goto L_43009C04; break;
        case 3: goto L_43009B40; break;
        case 4: goto L_43009B54; break;
        case 5: goto L_43009B7C; break;
        case 6: goto L_43009C04; break;
        case 7: goto L_43009C04; break;
        case 8: goto L_43009C04; break;
        case 9: goto L_43009C04; break;
        case 10: goto L_43009C04; break;
        case 11: goto L_43009C04; break;
        case 12: goto L_43009C04; break;
        case 13: goto L_430099C8; break;
        case 14: goto L_43009B98; break;
        case 15: goto L_43009C04; break;
        case 16: goto L_43009C04; break;
        case 17: goto L_43009C04; break;
        case 18: goto L_430099E0; break;
        case 19: goto L_43009C04; break;
        case 20: goto L_43009C04; break;
        case 21: goto L_43009C04; break;
        case 22: goto L_43009C04; break;
        case 23: goto L_43009B0C; break;
        default: switch_error(__func__, 0x430099C0, 0x4300A4E8);
    }
    // 0x430099C4: nop

L_430099C8:
    // 0x430099C8: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x430099CC: addiu       $t8, $t8, -0x6158
    ctx->r24 = ADD32(ctx->r24, -0X6158);
    // 0x430099D0: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x430099D4: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x430099D8: b           L_43009C04
    // 0x430099DC: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
        goto L_43009C04;
    // 0x430099DC: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
L_430099E0:
    // 0x430099E0: jal         0x43001F1C
    // 0x430099E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_1F1C(rdram, ctx);
        goto after_0;
    // 0x430099E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x430099E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430099EC: jal         0x43002238
    // 0x430099F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_1;
    // 0x430099F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x430099F4: b           L_43009C08
    // 0x430099F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009C08;
    // 0x430099F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430099FC:
    // 0x430099FC: jal         0x430014D8
    // 0x43009A00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_14D8(rdram, ctx);
        goto after_2;
    // 0x43009A00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x43009A04: jal         0x43004E48
    // 0x43009A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4E48(rdram, ctx);
        goto after_3;
    // 0x43009A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43009A0C: b           L_43009C08
    // 0x43009A10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009C08;
    // 0x43009A10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009A14:
    // 0x43009A14: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009A18: nop

    // 0x43009A1C: sltiu       $at, $v0, 0x27
    ctx->r1 = ctx->r2 < 0X27 ? 1 : 0;
    // 0x43009A20: beq         $at, $zero, L_43009AE4
    if (ctx->r1 == 0) {
        // 0x43009A24: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_43009AE4;
    }
    // 0x43009A24: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x43009A28: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009A2C: addu        $at, $at, $t9
    gpr jr_addend_43009A38 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x43009A30: lw          $t9, -0x5AB8($at)
    ctx->r25 = ADD32(ctx->r1, -0X5AB8);
    // 0x43009A34: nop

    // 0x43009A38: jr          $t9
    // 0x43009A3C: nop

    switch (jr_addend_43009A38 >> 2) {
        case 0: goto L_43009A40; break;
        case 1: goto L_43009AE4; break;
        case 2: goto L_43009AE4; break;
        case 3: goto L_43009AE4; break;
        case 4: goto L_43009AE4; break;
        case 5: goto L_43009AE4; break;
        case 6: goto L_43009AE4; break;
        case 7: goto L_43009AE4; break;
        case 8: goto L_43009AE4; break;
        case 9: goto L_43009AE4; break;
        case 10: goto L_43009AE4; break;
        case 11: goto L_43009AE4; break;
        case 12: goto L_43009AE4; break;
        case 13: goto L_43009A58; break;
        case 14: goto L_43009A78; break;
        case 15: goto L_43009AE4; break;
        case 16: goto L_43009AE4; break;
        case 17: goto L_43009A9C; break;
        case 18: goto L_43009AE4; break;
        case 19: goto L_43009AE4; break;
        case 20: goto L_43009AE4; break;
        case 21: goto L_43009AE4; break;
        case 22: goto L_43009AE4; break;
        case 23: goto L_43009AB0; break;
        case 24: goto L_43009AE4; break;
        case 25: goto L_43009AE4; break;
        case 26: goto L_43009AE4; break;
        case 27: goto L_43009AE4; break;
        case 28: goto L_43009AE4; break;
        case 29: goto L_43009AC4; break;
        case 30: goto L_43009AE4; break;
        case 31: goto L_43009AE4; break;
        case 32: goto L_43009AE4; break;
        case 33: goto L_43009AE4; break;
        case 34: goto L_43009AE4; break;
        case 35: goto L_43009AE4; break;
        case 36: goto L_43009AE4; break;
        case 37: goto L_43009AE4; break;
        case 38: goto L_43009AD8; break;
        default: switch_error(__func__, 0x43009A38, 0x4300A548);
    }
    // 0x43009A3C: nop

L_43009A40:
    // 0x43009A40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009A44: jal         0x43002238
    // 0x43009A48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_4;
    // 0x43009A48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x43009A4C: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009A50: b           L_43009AE8
    // 0x43009A54: slti        $at, $v0, 0x2D
    ctx->r1 = SIGNED(ctx->r2) < 0X2D ? 1 : 0;
        goto L_43009AE8;
    // 0x43009A54: slti        $at, $v0, 0x2D
    ctx->r1 = SIGNED(ctx->r2) < 0X2D ? 1 : 0;
L_43009A58:
    // 0x43009A58: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009A5C: lwc1        $f4, -0x5A1C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5A1C);
    // 0x43009A60: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43009A64: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43009A68: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009A6C: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x43009A70: b           L_43009AE4
    // 0x43009A74: swc1        $f6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f6.u32l;
        goto L_43009AE4;
    // 0x43009A74: swc1        $f6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f6.u32l;
L_43009A78:
    // 0x43009A78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009A7C: addiu       $a1, $zero, 0x212
    ctx->r5 = ADD32(0, 0X212);
    // 0x43009A80: jal         0x43001630
    // 0x43009A84: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world3_1630(rdram, ctx);
        goto after_5;
    // 0x43009A84: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x43009A88: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009A8C: lwc1        $f8, -0x5A18($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5A18);
    // 0x43009A90: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009A94: b           L_43009AE4
    // 0x43009A98: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
        goto L_43009AE4;
    // 0x43009A98: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
L_43009A9C:
    // 0x43009A9C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009AA0: lwc1        $f10, -0x5A14($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5A14);
    // 0x43009AA4: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009AA8: b           L_43009AE4
    // 0x43009AAC: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
        goto L_43009AE4;
    // 0x43009AAC: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
L_43009AB0:
    // 0x43009AB0: lui         $at, 0x4118
    ctx->r1 = S32(0X4118 << 16);
    // 0x43009AB4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x43009AB8: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009ABC: b           L_43009AE4
    // 0x43009AC0: swc1        $f16, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f16.u32l;
        goto L_43009AE4;
    // 0x43009AC0: swc1        $f16, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f16.u32l;
L_43009AC4:
    // 0x43009AC4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009AC8: lwc1        $f18, -0x5A10($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5A10);
    // 0x43009ACC: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009AD0: b           L_43009AE4
    // 0x43009AD4: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
        goto L_43009AE4;
    // 0x43009AD4: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
L_43009AD8:
    // 0x43009AD8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43009ADC: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009AE0: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
L_43009AE4:
    // 0x43009AE4: slti        $at, $v0, 0x2D
    ctx->r1 = SIGNED(ctx->r2) < 0X2D ? 1 : 0;
L_43009AE8:
    // 0x43009AE8: bne         $at, $zero, L_43009C08
    if (ctx->r1 != 0) {
        // 0x43009AEC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43009C08;
    }
    // 0x43009AEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43009AF0: jal         0x43004D80
    // 0x43009AF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4D80(rdram, ctx);
        goto after_6;
    // 0x43009AF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x43009AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009AFC: jal         0x43005078
    // 0x43009B00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world3_5078(rdram, ctx);
        goto after_7;
    // 0x43009B00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x43009B04: b           L_43009C08
    // 0x43009B08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009C08;
    // 0x43009B08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009B0C:
    // 0x43009B0C: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x43009B10: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x43009B14: bne         $t0, $at, L_43009C08
    if (ctx->r8 != ctx->r1) {
        // 0x43009B18: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43009C08;
    }
    // 0x43009B18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43009B1C: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009B20: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x43009B24: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x43009B28: bne         $at, $zero, L_43009B38
    if (ctx->r1 != 0) {
        // 0x43009B2C: slti        $at, $v0, 0x2E
        ctx->r1 = SIGNED(ctx->r2) < 0X2E ? 1 : 0;
            goto L_43009B38;
    }
    // 0x43009B2C: slti        $at, $v0, 0x2E
    ctx->r1 = SIGNED(ctx->r2) < 0X2E ? 1 : 0;
    // 0x43009B30: bne         $at, $zero, L_43009C08
    if (ctx->r1 != 0) {
        // 0x43009B34: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43009C08;
    }
    // 0x43009B34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009B38:
    // 0x43009B38: b           L_43009C04
    // 0x43009B3C: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
        goto L_43009C04;
    // 0x43009B3C: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
L_43009B40:
    // 0x43009B40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009B44: jal         0x43004CE0
    // 0x43009B48: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    ovl_enemy_world3_4CE0(rdram, ctx);
        goto after_8;
    // 0x43009B48: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    after_8:
    // 0x43009B4C: b           L_43009C08
    // 0x43009B50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009C08;
    // 0x43009B50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009B54:
    // 0x43009B54: lw          $t2, 0x60($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X60);
    // 0x43009B58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009B5C: bne         $t2, $zero, L_43009B6C
    if (ctx->r10 != 0) {
        // 0x43009B60: nop
    
            goto L_43009B6C;
    }
    // 0x43009B60: nop

    // 0x43009B64: jal         0x43002238
    // 0x43009B68: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_9;
    // 0x43009B68: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
L_43009B6C:
    // 0x43009B6C: jal         0x43004BF0
    // 0x43009B70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4BF0(rdram, ctx);
        goto after_10;
    // 0x43009B70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x43009B74: b           L_43009C08
    // 0x43009B78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009C08;
    // 0x43009B78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009B7C:
    // 0x43009B7C: jal         0x43004C74
    // 0x43009B80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world3_4C74(rdram, ctx);
        goto after_11;
    // 0x43009B80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x43009B84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009B88: jal         0x43005078
    // 0x43009B8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world3_5078(rdram, ctx);
        goto after_12;
    // 0x43009B8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x43009B90: b           L_43009C08
    // 0x43009B94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009C08;
    // 0x43009B94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009B98:
    // 0x43009B98: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009B9C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43009BA0: bne         $v0, $at, L_43009BF4
    if (ctx->r2 != ctx->r1) {
        // 0x43009BA4: slti        $at, $v0, 0x32
        ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
            goto L_43009BF4;
    }
    // 0x43009BA4: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x43009BA8: lw          $t3, 0x1E4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1E4);
    // 0x43009BAC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x43009BB0: bne         $t3, $at, L_43009BCC
    if (ctx->r11 != ctx->r1) {
        // 0x43009BB4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009BCC;
    }
    // 0x43009BB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009BBC: jal         0x43002238
    // 0x43009BC0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_13;
    // 0x43009BC0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_13:
    // 0x43009BC4: b           L_43009BD8
    // 0x43009BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43009BD8;
    // 0x43009BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43009BCC:
    // 0x43009BCC: jal         0x43002238
    // 0x43009BD0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world3_2238(rdram, ctx);
        goto after_14;
    // 0x43009BD0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_14:
    // 0x43009BD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43009BD8:
    // 0x43009BD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43009BDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43009BE0: jal         0x43001DE0
    // 0x43009BE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world3_1DE0(rdram, ctx);
        goto after_15;
    // 0x43009BE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_15:
    // 0x43009BE8: b           L_43009C08
    // 0x43009BEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009C08;
    // 0x43009BEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43009BF0: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
L_43009BF4:
    // 0x43009BF4: bne         $at, $zero, L_43009C04
    if (ctx->r1 != 0) {
        // 0x43009BF8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009C04;
    }
    // 0x43009BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009BFC: jal         0x43005078
    // 0x43009C00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world3_5078(rdram, ctx);
        goto after_16;
    // 0x43009C00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
L_43009C04:
    // 0x43009C04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009C08:
    // 0x43009C08: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43009C0C: jr          $ra
    // 0x43009C10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43009C10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world3_9C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009C14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43009C18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43009C1C: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x43009C20: nop

    // 0x43009C24: addiu       $t7, $t6, -0x14
    ctx->r15 = ADD32(ctx->r14, -0X14);
    // 0x43009C28: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x43009C2C: beq         $at, $zero, L_43009C8C
    if (ctx->r1 == 0) {
        // 0x43009C30: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_43009C8C;
    }
    // 0x43009C30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x43009C34: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009C38: addu        $at, $at, $t7
    gpr jr_addend_43009C44 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x43009C3C: lw          $t7, -0x5A0C($at)
    ctx->r15 = ADD32(ctx->r1, -0X5A0C);
    // 0x43009C40: nop

    // 0x43009C44: jr          $t7
    // 0x43009C48: nop

    switch (jr_addend_43009C44 >> 2) {
        case 0: goto L_43009C58; break;
        case 1: goto L_43009C64; break;
        case 2: goto L_43009C7C; break;
        case 3: goto L_43009C70; break;
        case 4: goto L_43009C4C; break;
        default: switch_error(__func__, 0x43009C44, 0x4300A5F4);
    }
    // 0x43009C48: nop

L_43009C4C:
    // 0x43009C4C: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009C50: b           L_43009C84
    // 0x43009C54: addiu       $v0, $v0, -0x6670
    ctx->r2 = ADD32(ctx->r2, -0X6670);
        goto L_43009C84;
    // 0x43009C54: addiu       $v0, $v0, -0x6670
    ctx->r2 = ADD32(ctx->r2, -0X6670);
L_43009C58:
    // 0x43009C58: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009C5C: b           L_43009C84
    // 0x43009C60: addiu       $v0, $v0, -0x68CC
    ctx->r2 = ADD32(ctx->r2, -0X68CC);
        goto L_43009C84;
    // 0x43009C60: addiu       $v0, $v0, -0x68CC
    ctx->r2 = ADD32(ctx->r2, -0X68CC);
L_43009C64:
    // 0x43009C64: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009C68: b           L_43009C84
    // 0x43009C6C: addiu       $v0, $v0, -0x6B48
    ctx->r2 = ADD32(ctx->r2, -0X6B48);
        goto L_43009C84;
    // 0x43009C6C: addiu       $v0, $v0, -0x6B48
    ctx->r2 = ADD32(ctx->r2, -0X6B48);
L_43009C70:
    // 0x43009C70: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009C74: b           L_43009C84
    // 0x43009C78: addiu       $v0, $v0, -0x6E10
    ctx->r2 = ADD32(ctx->r2, -0X6E10);
        goto L_43009C84;
    // 0x43009C78: addiu       $v0, $v0, -0x6E10
    ctx->r2 = ADD32(ctx->r2, -0X6E10);
L_43009C7C:
    // 0x43009C7C: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009C80: addiu       $v0, $v0, -0x73A0
    ctx->r2 = ADD32(ctx->r2, -0X73A0);
L_43009C84:
    // 0x43009C84: jalr        $v0
    // 0x43009C88: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x43009C88: nop

    after_0:
L_43009C8C:
    // 0x43009C8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43009C90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43009C94: jr          $ra
    // 0x43009C98: nop

    return;
    // 0x43009C98: nop

;}
RECOMP_FUNC void ovl_enemy_world4_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000000: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43000004: jr          $ra
    // 0x43000008: addiu       $v0, $v0, -0x74C0
    ctx->r2 = ADD32(ctx->r2, -0X74C0);
    return;
    // 0x43000008: addiu       $v0, $v0, -0x74C0
    ctx->r2 = ADD32(ctx->r2, -0X74C0);
    // 0x4300000C: nop

;}
RECOMP_FUNC void ovl_enemy_world4_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000010: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000014: jr          $t1
    // 0x43000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
;}
RECOMP_FUNC void ovl_enemy_world4_1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300001C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000020: jr          $t1
    // 0x43000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
;}
RECOMP_FUNC void ovl_enemy_world4_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000028: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300002C: jr          $t1
    // 0x43000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
;}
RECOMP_FUNC void ovl_enemy_world4_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000034: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000038: jr          $t1
    // 0x4300003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
;}
RECOMP_FUNC void ovl_enemy_world4_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000040: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000044: jr          $t1
    // 0x43000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
;}
RECOMP_FUNC void ovl_enemy_world4_4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300004C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000050: jr          $t1
    // 0x43000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
;}
RECOMP_FUNC void ovl_enemy_world4_58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000058: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300005C: jr          $t1
    // 0x43000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
;}
RECOMP_FUNC void ovl_enemy_world4_64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000064: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000068: jr          $t1
    // 0x4300006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
;}
RECOMP_FUNC void ovl_enemy_world4_70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000070: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000074: jr          $t1
    // 0x43000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
;}
RECOMP_FUNC void ovl_enemy_world4_7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300007C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000080: jr          $t1
    // 0x43000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
;}
RECOMP_FUNC void ovl_enemy_world4_88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000088: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300008C: jr          $t1
    // 0x43000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
;}
RECOMP_FUNC void ovl_enemy_world4_94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000094: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000098: jr          $t1
    // 0x4300009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
;}
RECOMP_FUNC void ovl_enemy_world4_A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000A4: jr          $t1
    // 0x430000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
;}
RECOMP_FUNC void ovl_enemy_world4_AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000B0: jr          $t1
    // 0x430000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
;}
RECOMP_FUNC void ovl_enemy_world4_B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000BC: jr          $t1
    // 0x430000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
;}
RECOMP_FUNC void ovl_enemy_world4_C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000C8: jr          $t1
    // 0x430000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
;}
RECOMP_FUNC void ovl_enemy_world4_D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000D4: jr          $t1
    // 0x430000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
;}
RECOMP_FUNC void ovl_enemy_world4_DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000E0: jr          $t1
    // 0x430000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
;}
RECOMP_FUNC void ovl_enemy_world4_E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000EC: jr          $t1
    // 0x430000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
;}
RECOMP_FUNC void ovl_enemy_world4_F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000F8: jr          $t1
    // 0x430000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
;}
RECOMP_FUNC void ovl_enemy_world4_100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000100: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000104: jr          $t1
    // 0x43000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
;}
RECOMP_FUNC void ovl_enemy_world4_10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300010C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000110: jr          $t1
    // 0x43000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
;}
RECOMP_FUNC void ovl_enemy_world4_118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000118: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300011C: jr          $t1
    // 0x43000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
;}
RECOMP_FUNC void ovl_enemy_world4_124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000124: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000128: jr          $t1
    // 0x4300012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
;}
RECOMP_FUNC void ovl_enemy_world4_130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000130: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000134: jr          $t1
    // 0x43000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
;}
