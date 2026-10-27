#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_actor_main_8B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40008B64: jr          $ra
    // 0x40008B68: nop

    return;
    // 0x40008B68: nop

;}
RECOMP_FUNC void ovl_actor_main_8B6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40008B6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40008B70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40008B74: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x40008B78: nop

    // 0x40008B7C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x40008B80: sltiu       $at, $t7, 0x18
    ctx->r1 = ctx->r15 < 0X18 ? 1 : 0;
    // 0x40008B84: beq         $at, $zero, L_40008CAC
    if (ctx->r1 == 0) {
        // 0x40008B88: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_40008CAC;
    }
    // 0x40008B88: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x40008B8C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40008B90: addu        $at, $at, $t7
    gpr jr_addend_40008B9C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x40008B94: lw          $t7, -0x17DC($at)
    ctx->r15 = ADD32(ctx->r1, -0X17DC);
    // 0x40008B98: nop

    // 0x40008B9C: jr          $t7
    // 0x40008BA0: nop

    switch (jr_addend_40008B9C >> 2) {
        case 0: goto L_40008BD4; break;
        case 1: goto L_40008CAC; break;
        case 2: goto L_40008CAC; break;
        case 3: goto L_40008BE4; break;
        case 4: goto L_40008CAC; break;
        case 5: goto L_40008BF4; break;
        case 6: goto L_40008BA4; break;
        case 7: goto L_40008BB4; break;
        case 8: goto L_40008CAC; break;
        case 9: goto L_40008CAC; break;
        case 10: goto L_40008C14; break;
        case 11: goto L_40008C44; break;
        case 12: goto L_40008C04; break;
        case 13: goto L_40008C94; break;
        case 14: goto L_40008CA4; break;
        case 15: goto L_40008C24; break;
        case 16: goto L_40008C34; break;
        case 17: goto L_40008CAC; break;
        case 18: goto L_40008CAC; break;
        case 19: goto L_40008C54; break;
        case 20: goto L_40008BC4; break;
        case 21: goto L_40008C64; break;
        case 22: goto L_40008C74; break;
        case 23: goto L_40008C84; break;
        default: switch_error(__func__, 0x40008B9C, 0x4001E824);
    }
    // 0x40008BA0: nop

L_40008BA4:
    // 0x40008BA4: jal         0x40002074
    // 0x40008BA8: nop

    ovl_actor_main_2074(rdram, ctx);
        goto after_0;
    // 0x40008BA8: nop

    after_0:
    // 0x40008BAC: b           L_40008CB0
    // 0x40008BB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40008CB0;
    // 0x40008BB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40008BB4:
    // 0x40008BB4: jal         0x400020B4
    // 0x40008BB8: nop

    ovl_actor_main_20B4(rdram, ctx);
        goto after_1;
    // 0x40008BB8: nop

    after_1:
    // 0x40008BBC: b           L_40008CB0
    // 0x40008BC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40008CB0;
    // 0x40008BC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40008BC4:
    // 0x40008BC4: jal         0x40002144
    // 0x40008BC8: nop

    ovl_actor_main_2144(rdram, ctx);
        goto after_2;
    // 0x40008BC8: nop

    after_2:
    // 0x40008BCC: b           L_40008CB0
    // 0x40008BD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40008CB0;
    // 0x40008BD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40008BD4:
    // 0x40008BD4: jal         0x40001FC4
    // 0x40008BD8: nop

    ovl_actor_main_1FC4(rdram, ctx);
        goto after_3;
    // 0x40008BD8: nop

    after_3:
    // 0x40008BDC: b           L_40008CB0
    // 0x40008BE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40008CB0;
    // 0x40008BE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40008BE4:
    // 0x40008BE4: jal         0x40002194
    // 0x40008BE8: nop

    ovl_actor_main_2194(rdram, ctx);
        goto after_4;
    // 0x40008BE8: nop

    after_4:
    // 0x40008BEC: b           L_40008CB0
    // 0x40008BF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40008CB0;
    // 0x40008BF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40008BF4:
    // 0x40008BF4: jal         0x40005E80
    // 0x40008BF8: nop

    ovl_actor_main_5E80(rdram, ctx);
        goto after_5;
    // 0x40008BF8: nop

    after_5:
    // 0x40008BFC: b           L_40008CB0
    // 0x40008C00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40008CB0;
    // 0x40008C00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40008C04:
    // 0x40008C04: jal         0x40002240
    // 0x40008C08: nop

    ovl_actor_main_2240(rdram, ctx);
        goto after_6;
    // 0x40008C08: nop

    after_6:
    // 0x40008C0C: b           L_40008CB0
    // 0x40008C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40008CB0;
    // 0x40008C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40008C14:
    // 0x40008C14: jal         0x40003750
    // 0x40008C18: nop

    ovl_actor_main_3750(rdram, ctx);
        goto after_7;
    // 0x40008C18: nop

    after_7:
    // 0x40008C1C: b           L_40008CB0
    // 0x40008C20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40008CB0;
    // 0x40008C20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40008C24:
    // 0x40008C24: jal         0x40003A38
    // 0x40008C28: nop

    ovl_actor_main_3A38(rdram, ctx);
        goto after_8;
    // 0x40008C28: nop

    after_8:
    // 0x40008C2C: b           L_40008CB0
    // 0x40008C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40008CB0;
    // 0x40008C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40008C34:
    // 0x40008C34: jal         0x40003A74
    // 0x40008C38: nop

    ovl_actor_main_3A74(rdram, ctx);
        goto after_9;
    // 0x40008C38: nop

    after_9:
    // 0x40008C3C: b           L_40008CB0
    // 0x40008C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40008CB0;
    // 0x40008C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40008C44:
    // 0x40008C44: jal         0x40004B44
    // 0x40008C48: nop

    ovl_actor_main_4B44(rdram, ctx);
        goto after_10;
    // 0x40008C48: nop

    after_10:
    // 0x40008C4C: b           L_40008CB0
    // 0x40008C50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40008CB0;
    // 0x40008C50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40008C54:
    // 0x40008C54: jal         0x400054D8
    // 0x40008C58: nop

    ovl_actor_main_54D8(rdram, ctx);
        goto after_11;
    // 0x40008C58: nop

    after_11:
    // 0x40008C5C: b           L_40008CB0
    // 0x40008C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40008CB0;
    // 0x40008C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40008C64:
    // 0x40008C64: jal         0x40005754
    // 0x40008C68: nop

    ovl_actor_main_5754(rdram, ctx);
        goto after_12;
    // 0x40008C68: nop

    after_12:
    // 0x40008C6C: b           L_40008CB0
    // 0x40008C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40008CB0;
    // 0x40008C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40008C74:
    // 0x40008C74: jal         0x400059D4
    // 0x40008C78: nop

    ovl_actor_main_59D4(rdram, ctx);
        goto after_13;
    // 0x40008C78: nop

    after_13:
    // 0x40008C7C: b           L_40008CB0
    // 0x40008C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40008CB0;
    // 0x40008C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40008C84:
    // 0x40008C84: jal         0x40005C5C
    // 0x40008C88: nop

    ovl_actor_main_5C5C(rdram, ctx);
        goto after_14;
    // 0x40008C88: nop

    after_14:
    // 0x40008C8C: b           L_40008CB0
    // 0x40008C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40008CB0;
    // 0x40008C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40008C94:
    // 0x40008C94: jal         0x40005E04
    // 0x40008C98: nop

    ovl_actor_main_5E04(rdram, ctx);
        goto after_15;
    // 0x40008C98: nop

    after_15:
    // 0x40008C9C: b           L_40008CB0
    // 0x40008CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40008CB0;
    // 0x40008CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40008CA4:
    // 0x40008CA4: jal         0x40005E28
    // 0x40008CA8: nop

    ovl_actor_main_5E28(rdram, ctx);
        goto after_16;
    // 0x40008CA8: nop

    after_16:
L_40008CAC:
    // 0x40008CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40008CB0:
    // 0x40008CB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40008CB4: jr          $ra
    // 0x40008CB8: nop

    return;
    // 0x40008CB8: nop

;}
RECOMP_FUNC void ovl_actor_main_8CBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40008CBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40008CC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40008CC4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x40008CC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40008CCC: beq         $v0, $at, L_40008CFC
    if (ctx->r2 == ctx->r1) {
        // 0x40008CD0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_40008CFC;
    }
    // 0x40008CD0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x40008CD4: beq         $v0, $at, L_40008CFC
    if (ctx->r2 == ctx->r1) {
        // 0x40008CD8: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_40008CFC;
    }
    // 0x40008CD8: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x40008CDC: beq         $v0, $at, L_40008CFC
    if (ctx->r2 == ctx->r1) {
        // 0x40008CE0: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_40008CFC;
    }
    // 0x40008CE0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x40008CE4: beq         $v0, $at, L_40008CFC
    if (ctx->r2 == ctx->r1) {
        // 0x40008CE8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_40008CFC;
    }
    // 0x40008CE8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x40008CEC: beq         $v0, $at, L_40008CFC
    if (ctx->r2 == ctx->r1) {
        // 0x40008CF0: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_40008CFC;
    }
    // 0x40008CF0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40008CF4: bne         $v0, $at, L_40008D08
    if (ctx->r2 != ctx->r1) {
        // 0x40008CF8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40008D08;
    }
    // 0x40008CF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40008CFC:
    // 0x40008CFC: jal         0x40008B6C
    // 0x40008D00: nop

    ovl_actor_main_8B6C(rdram, ctx);
        goto after_0;
    // 0x40008D00: nop

    after_0:
    // 0x40008D04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40008D08:
    // 0x40008D08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40008D0C: jr          $ra
    // 0x40008D10: nop

    return;
    // 0x40008D10: nop

    // 0x40008D14: nop

    // 0x40008D18: nop

    // 0x40008D1C: nop

;}
RECOMP_FUNC void ovl_actor_main_8D20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40008D20: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x40008D24: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x40008D28: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x40008D2C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x40008D30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40008D34: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x40008D38: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x40008D3C: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x40008D40: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x40008D44: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x40008D48: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x40008D4C: jal         0x40001924
    // 0x40008D50: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    ovl_actor_main_1924(rdram, ctx);
        goto after_0;
    // 0x40008D50: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x40008D54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40008D58: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x40008D5C: jr          $ra
    // 0x40008D60: nop

    return;
    // 0x40008D60: nop

;}
RECOMP_FUNC void ovl_actor_main_8D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40008D64: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x40008D68: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x40008D6C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x40008D70: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x40008D74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40008D78: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x40008D7C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40008D80: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x40008D84: ori         $t8, $zero, 0xFFFF
    ctx->r24 = 0 | 0XFFFF;
    // 0x40008D88: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x40008D8C: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x40008D90: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x40008D94: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x40008D98: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x40008D9C: jal         0x40001924
    // 0x40008DA0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    ovl_actor_main_1924(rdram, ctx);
        goto after_0;
    // 0x40008DA0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_0:
    // 0x40008DA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40008DA8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x40008DAC: jr          $ra
    // 0x40008DB0: nop

    return;
    // 0x40008DB0: nop

;}
RECOMP_FUNC void ovl_actor_main_8DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40008DB4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40008DB8: lwc1        $f4, 0x48($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X48);
    // 0x40008DBC: nop

    // 0x40008DC0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x40008DC4: nop

    // 0x40008DC8: bc1f        L_40008DF8
    if (!c1cs) {
        // 0x40008DCC: nop
    
            goto L_40008DF8;
    }
    // 0x40008DCC: nop

    // 0x40008DD0: lwc1        $f6, 0x50($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X50);
    // 0x40008DD4: lui         $at, 0xFDFF
    ctx->r1 = S32(0XFDFF << 16);
    // 0x40008DD8: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x40008DDC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x40008DE0: bc1f        L_40008DF8
    if (!c1cs) {
        // 0x40008DE4: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_40008DF8;
    }
    // 0x40008DE4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x40008DE8: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x40008DEC: sw          $t8, 0x2E4($a0)
    MEM_W(0X2E4, ctx->r4) = ctx->r24;
    // 0x40008DF0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x40008DF4: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
L_40008DF8:
    // 0x40008DF8: jr          $ra
    // 0x40008DFC: nop

    return;
    // 0x40008DFC: nop

;}
RECOMP_FUNC void ovl_actor_main_8E00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40008E00: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40008E04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40008E08: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x40008E0C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x40008E10: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x40008E14: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x40008E18: jal         0x400006C4
    // 0x40008E1C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40008E1C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x40008E20: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x40008E24: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x40008E28: jal         0x40001E0C
    // 0x40008E2C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    ovl_actor_main_1E0C(rdram, ctx);
        goto after_1;
    // 0x40008E2C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x40008E30: jal         0x40001DD4
    // 0x40008E34: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_actor_main_1DD4(rdram, ctx);
        goto after_2;
    // 0x40008E34: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x40008E38: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x40008E3C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x40008E40: lw          $a0, 0x10($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X10);
    // 0x40008E44: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x40008E48: jal         0x400006C4
    // 0x40008E4C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_3;
    // 0x40008E4C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x40008E50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40008E54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x40008E58: jr          $ra
    // 0x40008E5C: nop

    return;
    // 0x40008E5C: nop

;}
RECOMP_FUNC void ovl_actor_main_8E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40008E60: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40008E64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40008E68: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x40008E6C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x40008E70: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x40008E74: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x40008E78: jal         0x400006C4
    // 0x40008E7C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40008E7C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x40008E80: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x40008E84: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x40008E88: jal         0x40001E0C
    // 0x40008E8C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    ovl_actor_main_1E0C(rdram, ctx);
        goto after_1;
    // 0x40008E8C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x40008E90: jal         0x40001DD4
    // 0x40008E94: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_actor_main_1DD4(rdram, ctx);
        goto after_2;
    // 0x40008E94: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x40008E98: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x40008E9C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x40008EA0: lw          $a0, 0x10($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X10);
    // 0x40008EA4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x40008EA8: jal         0x400006C4
    // 0x40008EAC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_3;
    // 0x40008EAC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x40008EB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40008EB4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x40008EB8: jr          $ra
    // 0x40008EBC: nop

    return;
    // 0x40008EBC: nop

;}
RECOMP_FUNC void ovl_actor_main_8EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40008EC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40008EC4: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x40008EC8: slt         $at, $a3, $a1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x40008ECC: bne         $at, $zero, L_40008EE0
    if (ctx->r1 != 0) {
        // 0x40008ED0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_40008EE0;
    }
    // 0x40008ED0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40008ED4: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x40008ED8: jal         0x40008E00
    // 0x40008EDC: nop

    ovl_actor_main_8E00(rdram, ctx);
        goto after_0;
    // 0x40008EDC: nop

    after_0:
L_40008EE0:
    // 0x40008EE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40008EE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40008EE8: jr          $ra
    // 0x40008EEC: nop

    return;
    // 0x40008EEC: nop

    // 0x40008EF0: jr          $ra
    // 0x40008EF4: nop

    return;
    // 0x40008EF4: nop

;}
RECOMP_FUNC void ovl_actor_main_8EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40008EF8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x40008EFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40008F00: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x40008F04: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x40008F08: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x40008F0C: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x40008F10: jal         0x400006C4
    // 0x40008F14: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40008F14: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x40008F18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40008F1C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x40008F20: jr          $ra
    // 0x40008F24: nop

    return;
    // 0x40008F24: nop

;}
RECOMP_FUNC void ovl_actor_main_8F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40008F28: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x40008F2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40008F30: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x40008F34: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x40008F38: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x40008F3C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x40008F40: jal         0x400006C4
    // 0x40008F44: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40008F44: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x40008F48: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x40008F4C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x40008F50: beq         $t7, $zero, L_40008F6C
    if (ctx->r15 == 0) {
        // 0x40008F54: addiu       $at, $zero, -0x9
        ctx->r1 = ADD32(0, -0X9);
            goto L_40008F6C;
    }
    // 0x40008F54: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x40008F58: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x40008F5C: nop

    // 0x40008F60: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x40008F64: b           L_40008F74
    // 0x40008F68: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_40008F74;
    // 0x40008F68: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_40008F6C:
    // 0x40008F6C: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x40008F70: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_40008F74:
    // 0x40008F74: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x40008F78: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x40008F7C: lw          $a0, 0x10($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X10);
    // 0x40008F80: jal         0x400006C4
    // 0x40008F84: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40008F84: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x40008F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40008F8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x40008F90: jr          $ra
    // 0x40008F94: nop

    return;
    // 0x40008F94: nop

;}
RECOMP_FUNC void ovl_actor_main_8F98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40008F98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40008F9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40008FA0: jal         0x400063F0
    // 0x40008FA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_63F0(rdram, ctx);
        goto after_0;
    // 0x40008FA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x40008FA8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40008FAC: beq         $v0, $zero, L_40008FC4
    if (ctx->r2 == 0) {
        // 0x40008FB0: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_40008FC4;
    }
    // 0x40008FB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x40008FB4: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x40008FB8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x40008FBC: beq         $t6, $at, L_40008FD4
    if (ctx->r14 == ctx->r1) {
        // 0x40008FC0: nop
    
            goto L_40008FD4;
    }
    // 0x40008FC0: nop

L_40008FC4:
    // 0x40008FC4: lw          $t7, 0x90($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X90);
    // 0x40008FC8: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x40008FCC: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x40008FD0: sw          $t8, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r24;
L_40008FD4:
    // 0x40008FD4: lw          $t9, 0x90($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X90);
    // 0x40008FD8: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x40008FDC: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x40008FE0: sw          $t0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r8;
    // 0x40008FE4: sw          $zero, 0x314($a0)
    MEM_W(0X314, ctx->r4) = 0;
    // 0x40008FE8: jal         0x40008F28
    // 0x40008FEC: sw          $zero, 0x3FC($a0)
    MEM_W(0X3FC, ctx->r4) = 0;
    ovl_actor_main_8F28(rdram, ctx);
        goto after_1;
    // 0x40008FEC: sw          $zero, 0x3FC($a0)
    MEM_W(0X3FC, ctx->r4) = 0;
    after_1:
    // 0x40008FF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40008FF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40008FF8: jr          $ra
    // 0x40008FFC: nop

    return;
    // 0x40008FFC: nop

;}
RECOMP_FUNC void ovl_actor_main_9000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40009004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40009008: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000900C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x40009010: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x40009014: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
    // 0x40009018: ori         $t9, $t7, 0x40
    ctx->r25 = ctx->r15 | 0X40;
    // 0x4000901C: sw          $t9, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r25;
    // 0x40009020: sw          $t0, 0x314($a0)
    MEM_W(0X314, ctx->r4) = ctx->r8;
    // 0x40009024: beq         $a2, $zero, L_40009034
    if (ctx->r6 == 0) {
        // 0x40009028: sw          $a1, 0x3FC($a0)
        MEM_W(0X3FC, ctx->r4) = ctx->r5;
            goto L_40009034;
    }
    // 0x40009028: sw          $a1, 0x3FC($a0)
    MEM_W(0X3FC, ctx->r4) = ctx->r5;
    // 0x4000902C: jal         0x40008F28
    // 0x40009030: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_8F28(rdram, ctx);
        goto after_0;
    // 0x40009030: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
L_40009034:
    // 0x40009034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40009038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000903C: jr          $ra
    // 0x40009040: nop

    return;
    // 0x40009040: nop

;}
RECOMP_FUNC void ovl_actor_main_9044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009044: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x40009048: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x4000904C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x40009050: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x40009054: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40009058: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x4000905C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x40009060: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x40009064: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x40009068: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x4000906C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x40009070: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x40009074: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x40009078: jal         0x400006C4
    // 0x4000907C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4000907C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x40009080: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x40009084: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x40009088: nop

    // 0x4000908C: sw          $t7, 0x310($t8)
    MEM_W(0X310, ctx->r24) = ctx->r15;
    // 0x40009090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40009094: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x40009098: jr          $ra
    // 0x4000909C: nop

    return;
    // 0x4000909C: nop

;}
RECOMP_FUNC void ovl_actor_main_90A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400090A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x400090A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400090A8: lw          $v0, 0x310($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X310);
    // 0x400090AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x400090B0: beq         $v0, $at, L_400090DC
    if (ctx->r2 == ctx->r1) {
        // 0x400090B4: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_400090DC;
    }
    // 0x400090B4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x400090B8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x400090BC: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x400090C0: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x400090C4: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x400090C8: jal         0x400006C4
    // 0x400090CC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x400090CC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x400090D0: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x400090D4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x400090D8: sw          $t6, 0x310($a3)
    MEM_W(0X310, ctx->r7) = ctx->r14;
L_400090DC:
    // 0x400090DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400090E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x400090E4: jr          $ra
    // 0x400090E8: nop

    return;
    // 0x400090E8: nop

;}
RECOMP_FUNC void ovl_actor_main_90EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400090EC: lhu         $v0, 0x22($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X22);
    // 0x400090F0: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x400090F4: and         $t6, $v0, $a1
    ctx->r14 = ctx->r2 & ctx->r5;
    // 0x400090F8: beq         $t6, $zero, L_40009114
    if (ctx->r14 == 0) {
        // 0x400090FC: and         $t7, $v0, $a2
        ctx->r15 = ctx->r2 & ctx->r6;
            goto L_40009114;
    }
    // 0x400090FC: and         $t7, $v0, $a2
    ctx->r15 = ctx->r2 & ctx->r6;
    // 0x40009100: lwc1        $f4, 0x300($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X300);
    // 0x40009104: lhu         $v0, 0x22($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X22);
    // 0x40009108: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x4000910C: swc1        $f6, 0x300($a0)
    MEM_W(0X300, ctx->r4) = ctx->f6.u32l;
    // 0x40009110: and         $t7, $v0, $a2
    ctx->r15 = ctx->r2 & ctx->r6;
L_40009114:
    // 0x40009114: beq         $t7, $zero, L_4000912C
    if (ctx->r15 == 0) {
        // 0x40009118: nop
    
            goto L_4000912C;
    }
    // 0x40009118: nop

    // 0x4000911C: lwc1        $f8, 0x300($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X300);
    // 0x40009120: nop

    // 0x40009124: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x40009128: swc1        $f10, 0x300($a0)
    MEM_W(0X300, ctx->r4) = ctx->f10.u32l;
L_4000912C:
    // 0x4000912C: jr          $ra
    // 0x40009130: nop

    return;
    // 0x40009130: nop

;}
RECOMP_FUNC void ovl_actor_main_9134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009134: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40009138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000913C: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x40009140: jal         0x40001E0C
    // 0x40009144: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    ovl_actor_main_1E0C(rdram, ctx);
        goto after_0;
    // 0x40009144: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x40009148: jal         0x40001DD4
    // 0x4000914C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_actor_main_1DD4(rdram, ctx);
        goto after_1;
    // 0x4000914C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x40009150: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x40009154: jal         0x40001E0C
    // 0x40009158: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_1E0C(rdram, ctx);
        goto after_2;
    // 0x40009158: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x4000915C: jal         0x40001DD4
    // 0x40009160: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_actor_main_1DD4(rdram, ctx);
        goto after_3;
    // 0x40009160: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_3:
    // 0x40009164: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x40009168: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x4000916C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x40009170: sub.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x40009174: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x40009178: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x4000917C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x40009180: bc1f        L_40009198
    if (!c1cs) {
        // 0x40009184: neg.s       $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = -ctx->f0.fl;
            goto L_40009198;
    }
    // 0x40009184: neg.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = -ctx->f0.fl;
    // 0x40009188: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x4000918C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x40009190: b           L_400091C0
    // 0x40009194: sub.s       $f12, $f2, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f8.fl;
        goto L_400091C0;
    // 0x40009194: sub.s       $f12, $f2, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f8.fl;
L_40009198:
    // 0x40009198: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x4000919C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x400091A0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x400091A4: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x400091A8: nop

    // 0x400091AC: bc1f        L_400091C0
    if (!c1cs) {
        // 0x400091B0: nop
    
            goto L_400091C0;
    }
    // 0x400091B0: nop

    // 0x400091B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x400091B8: nop

    // 0x400091BC: add.s       $f12, $f2, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f16.fl;
L_400091C0:
    // 0x400091C0: c.le.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl <= ctx->f12.fl;
    // 0x400091C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400091C8: bc1f        L_400091E8
    if (!c1cs) {
        // 0x400091CC: addiu       $sp, $sp, 0x18
        ctx->r29 = ADD32(ctx->r29, 0X18);
            goto L_400091E8;
    }
    // 0x400091CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x400091D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x400091D4: nop

    // 0x400091D8: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x400091DC: nop

    // 0x400091E0: bc1t        L_40009210
    if (c1cs) {
        // 0x400091E4: nop
    
            goto L_40009210;
    }
    // 0x400091E4: nop

L_400091E8:
    // 0x400091E8: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x400091EC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x400091F0: bc1f        L_40009218
    if (!c1cs) {
        // 0x400091F4: nop
    
            goto L_40009218;
    }
    // 0x400091F4: nop

    // 0x400091F8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x400091FC: nop

    // 0x40009200: c.le.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl <= ctx->f12.fl;
    // 0x40009204: nop

    // 0x40009208: bc1f        L_40009218
    if (!c1cs) {
        // 0x4000920C: nop
    
            goto L_40009218;
    }
    // 0x4000920C: nop

L_40009210:
    // 0x40009210: b           L_40009218
    // 0x40009214: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_40009218;
    // 0x40009214: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_40009218:
    // 0x40009218: jr          $ra
    // 0x4000921C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4000921C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_9220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009220: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x40009224: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x40009228: blez        $a2, L_40009268
    if (SIGNED(ctx->r6) <= 0) {
        // 0x4000922C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_40009268;
    }
    // 0x4000922C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x40009230: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
L_40009234:
    // 0x40009234: lw          $t6, 0x24($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X24);
    // 0x40009238: nop

    // 0x4000923C: bne         $a1, $t6, L_40009258
    if (ctx->r5 != ctx->r14) {
        // 0x40009240: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_40009258;
    }
    // 0x40009240: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x40009244: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x40009248: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x4000924C: addu        $v1, $a0, $t7
    ctx->r3 = ADD32(ctx->r4, ctx->r15);
    // 0x40009250: jr          $ra
    // 0x40009254: addiu       $v0, $v1, 0x44
    ctx->r2 = ADD32(ctx->r3, 0X44);
    return;
    // 0x40009254: addiu       $v0, $v1, 0x44
    ctx->r2 = ADD32(ctx->r3, 0X44);
L_40009258:
    // 0x40009258: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x4000925C: slt         $at, $v0, $a2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x40009260: bne         $at, $zero, L_40009234
    if (ctx->r1 != 0) {
        // 0x40009264: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_40009234;
    }
    // 0x40009264: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
L_40009268:
    // 0x40009268: jr          $ra
    // 0x4000926C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4000926C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_9270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009270: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x40009274: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x40009278: lw          $a3, 0x0($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X0);
    // 0x4000927C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x40009280: slt         $at, $a2, $a3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x40009284: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x40009288: beq         $at, $zero, L_400092C4
    if (ctx->r1 == 0) {
        // 0x4000928C: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_400092C4;
    }
    // 0x4000928C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x40009290: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x40009294: addu        $a1, $a0, $t6
    ctx->r5 = ADD32(ctx->r4, ctx->r14);
L_40009298:
    // 0x40009298: lw          $t7, 0x24($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X24);
    // 0x4000929C: nop

    // 0x400092A0: and         $t8, $t7, $s0
    ctx->r24 = ctx->r15 & ctx->r16;
    // 0x400092A4: beq         $t8, $zero, L_400092B4
    if (ctx->r24 == 0) {
        // 0x400092A8: nop
    
            goto L_400092B4;
    }
    // 0x400092A8: nop

    // 0x400092AC: b           L_400092C4
    // 0x400092B0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_400092C4;
    // 0x400092B0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_400092B4:
    // 0x400092B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x400092B8: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x400092BC: bne         $at, $zero, L_40009298
    if (ctx->r1 != 0) {
        // 0x400092C0: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_40009298;
    }
    // 0x400092C0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_400092C4:
    // 0x400092C4: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x400092C8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x400092CC: jr          $ra
    // 0x400092D0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x400092D0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_92D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400092D4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x400092D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400092DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x400092E0: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x400092E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x400092E8: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x400092EC: beq         $t7, $zero, L_40009344
    if (ctx->r15 == 0) {
        // 0x400092F0: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_40009344;
    }
    // 0x400092F0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x400092F4: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x400092F8: jal         0x400006C4
    // 0x400092FC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x400092FC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x40009300: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x40009304: addiu       $a0, $s0, 0x2D4
    ctx->r4 = ADD32(ctx->r16, 0X2D4);
    // 0x40009308: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4000930C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x40009310: jal         0x400022A8
    // 0x40009314: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_22A8(rdram, ctx);
        goto after_1;
    // 0x40009314: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x40009318: lw          $t8, 0x90($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X90);
    // 0x4000931C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x40009320: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x40009324: sw          $t9, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r25;
    // 0x40009328: jal         0x4000E0C8
    // 0x4000932C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_E0C8(rdram, ctx);
        goto after_2;
    // 0x4000932C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x40009330: lw          $t0, 0x90($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X90);
    // 0x40009334: lui         $at, 0xEFFF
    ctx->r1 = S32(0XEFFF << 16);
    // 0x40009338: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x4000933C: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x40009340: sw          $t1, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r9;
L_40009344:
    // 0x40009344: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40009348: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4000934C: jr          $ra
    // 0x40009350: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x40009350: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_actor_main_9354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009354: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40009358: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000935C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x40009360: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40009364: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x40009368: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x4000936C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x40009370: jal         0x40009220
    // 0x40009374: addiu       $a0, $a0, 0x230
    ctx->r4 = ADD32(ctx->r4, 0X230);
    ovl_actor_main_9220(rdram, ctx);
        goto after_0;
    // 0x40009374: addiu       $a0, $a0, 0x230
    ctx->r4 = ADD32(ctx->r4, 0X230);
    after_0:
    // 0x40009378: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x4000937C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x40009380: beq         $t7, $zero, L_400093A4
    if (ctx->r15 == 0) {
        // 0x40009384: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_400093A4;
    }
    // 0x40009384: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40009388: bne         $v0, $at, L_400093A8
    if (ctx->r2 != ctx->r1) {
        // 0x4000938C: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_400093A8;
    }
    // 0x4000938C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40009390: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40009394: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x40009398: jal         0x40009220
    // 0x4000939C: addiu       $a0, $a0, 0xDC
    ctx->r4 = ADD32(ctx->r4, 0XDC);
    ovl_actor_main_9220(rdram, ctx);
        goto after_1;
    // 0x4000939C: addiu       $a0, $a0, 0xDC
    ctx->r4 = ADD32(ctx->r4, 0XDC);
    after_1:
    // 0x400093A0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_400093A4:
    // 0x400093A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_400093A8:
    // 0x400093A8: beq         $v0, $at, L_400093D0
    if (ctx->r2 == ctx->r1) {
        // 0x400093AC: nop
    
            goto L_400093D0;
    }
    // 0x400093AC: nop

    // 0x400093B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x400093B4: jal         0x40001FA0
    // 0x400093B8: nop

    ovl_actor_main_1FA0(rdram, ctx);
        goto after_2;
    // 0x400093B8: nop

    after_2:
    // 0x400093BC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x400093C0: jal         0x4000A438
    // 0x400093C4: nop

    ovl_actor_main_A438(rdram, ctx);
        goto after_3;
    // 0x400093C4: nop

    after_3:
    // 0x400093C8: b           L_400093D8
    // 0x400093CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_400093D8;
    // 0x400093CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400093D0:
    // 0x400093D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x400093D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400093D8:
    // 0x400093D8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x400093DC: jr          $ra
    // 0x400093E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x400093E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_actor_main_93E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400093E4: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400093E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x400093EC: lwc1        $f4, -0x1770($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1770);
    // 0x400093F0: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
    // 0x400093F4: swc1        $f0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f0.u32l;
    // 0x400093F8: jr          $ra
    // 0x400093FC: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x400093FC: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void ovl_actor_main_9400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009400: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40009404: nop

    // 0x40009408: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x4000940C: jr          $ra
    // 0x40009410: swc1        $f0, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x40009410: swc1        $f0, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void ovl_actor_main_9414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009414: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x40009418: lwc1        $f6, 0x4C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x4000941C: swc1        $f4, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f4.u32l;
    // 0x40009420: jr          $ra
    // 0x40009424: swc1        $f6, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x40009424: swc1        $f6, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void ovl_actor_main_9428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009428: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000942C: lwc1        $f4, 0x48($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X48);
    // 0x40009430: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x40009434: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x40009438: nop

    // 0x4000943C: bc1f        L_40009464
    if (!c1cs) {
        // 0x40009440: nop
    
            goto L_40009464;
    }
    // 0x40009440: nop

    // 0x40009444: lwc1        $f6, 0x50($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X50);
    // 0x40009448: nop

    // 0x4000944C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x40009450: nop

    // 0x40009454: bc1f        L_40009464
    if (!c1cs) {
        // 0x40009458: nop
    
            goto L_40009464;
    }
    // 0x40009458: nop

    // 0x4000945C: jr          $ra
    // 0x40009460: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x40009460: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_40009464:
    // 0x40009464: jr          $ra
    // 0x40009468: nop

    return;
    // 0x40009468: nop

;}
RECOMP_FUNC void ovl_actor_main_946C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000946C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x40009470: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x40009474: jr          $ra
    // 0x40009478: swc1        $f4, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x40009478: swc1        $f4, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void ovl_actor_main_947C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000947C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x40009480: jr          $ra
    // 0x40009484: swc1        $f4, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x40009484: swc1        $f4, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void ovl_actor_main_9488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009488: jr          $ra
    // 0x4000948C: nop

    return;
    // 0x4000948C: nop

;}
RECOMP_FUNC void ovl_actor_main_9490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40009494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40009498: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000949C: nop

    // 0x400094A0: sll         $t7, $t6, 10
    ctx->r15 = S32(ctx->r14 << 10);
    // 0x400094A4: bgez        $t7, L_400094B4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x400094A8: nop
    
            goto L_400094B4;
    }
    // 0x400094A8: nop

    // 0x400094AC: b           L_40009510
    // 0x400094B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_40009510;
    // 0x400094B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_400094B4:
    // 0x400094B4: lw          $a1, 0x1C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X1C);
    // 0x400094B8: jal         0x40001D48
    // 0x400094BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_1D48(rdram, ctx);
        goto after_0;
    // 0x400094BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x400094C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x400094C4: jal         0x40001D78
    // 0x400094C8: sw          $v0, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r2;
    ovl_actor_main_1D78(rdram, ctx);
        goto after_1;
    // 0x400094C8: sw          $v0, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r2;
    after_1:
    // 0x400094CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x400094D0: nop

    // 0x400094D4: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x400094D8: lw          $t8, 0x98($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X98);
    // 0x400094DC: lw          $t0, 0x28($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X28);
    // 0x400094E0: addu        $v1, $t8, $v0
    ctx->r3 = ADD32(ctx->r24, ctx->r2);
    // 0x400094E4: slt         $at, $v1, $t0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x400094E8: beq         $at, $zero, L_40009510
    if (ctx->r1 == 0) {
        // 0x400094EC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_40009510;
    }
    // 0x400094EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x400094F0: jal         0x40001D48
    // 0x400094F4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    ovl_actor_main_1D48(rdram, ctx);
        goto after_2;
    // 0x400094F4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_2:
    // 0x400094F8: slti        $at, $v0, 0x14
    ctx->r1 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
    // 0x400094FC: beq         $at, $zero, L_40009510
    if (ctx->r1 == 0) {
        // 0x40009500: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_40009510;
    }
    // 0x40009500: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x40009504: b           L_40009510
    // 0x40009508: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_40009510;
    // 0x40009508: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x4000950C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_40009510:
    // 0x40009510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40009514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40009518: jr          $ra
    // 0x4000951C: nop

    return;
    // 0x4000951C: nop

;}
RECOMP_FUNC void ovl_actor_main_9520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009520: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40009524: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40009528: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x4000952C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x40009530: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x40009534: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x40009538: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x4000953C: beq         $t8, $zero, L_4000954C
    if (ctx->r24 == 0) {
        // 0x40009540: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_4000954C;
    }
    // 0x40009540: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x40009544: b           L_4000954C
    // 0x40009548: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_4000954C;
    // 0x40009548: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_4000954C:
    // 0x4000954C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x40009550: jal         0x400063F0
    // 0x40009554: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    ovl_actor_main_63F0(rdram, ctx);
        goto after_0;
    // 0x40009554: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x40009558: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x4000955C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x40009560: beq         $v0, $zero, L_4000958C
    if (ctx->r2 == 0) {
        // 0x40009564: nop
    
            goto L_4000958C;
    }
    // 0x40009564: nop

    // 0x40009568: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x4000956C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40009570: bne         $t9, $at, L_4000958C
    if (ctx->r25 != ctx->r1) {
        // 0x40009574: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_4000958C;
    }
    // 0x40009574: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x40009578: bne         $a1, $at, L_4000958C
    if (ctx->r5 != ctx->r1) {
        // 0x4000957C: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_4000958C;
    }
    // 0x4000957C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x40009580: b           L_4000958C
    // 0x40009584: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
        goto L_4000958C;
    // 0x40009584: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x40009588: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
L_4000958C:
    // 0x4000958C: lw          $v1, 0x4($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X4);
    // 0x40009590: andi        $t2, $a1, 0xF
    ctx->r10 = ctx->r5 & 0XF;
    // 0x40009594: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x40009598: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x4000959C: andi        $t0, $a2, 0xF
    ctx->r8 = ctx->r6 & 0XF;
    // 0x400095A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400095A4: sll         $t1, $t0, 12
    ctx->r9 = S32(ctx->r8 << 12);
    // 0x400095A8: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x400095AC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x400095B0: andi        $t5, $a0, 0xFF
    ctx->r13 = ctx->r4 & 0XFF;
    // 0x400095B4: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x400095B8: or          $v0, $t4, $t5
    ctx->r2 = ctx->r12 | ctx->r13;
    // 0x400095BC: jr          $ra
    // 0x400095C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x400095C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_actor_main_95C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400095C4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x400095C8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x400095CC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x400095D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x400095D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400095D8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x400095DC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x400095E0: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x400095E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x400095E8: jal         0x400006C4
    // 0x400095EC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x400095EC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x400095F0: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x400095F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400095F8: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    // 0x400095FC: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x40009600: nop

    // 0x40009604: swc1        $f6, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f6.u32l;
    // 0x40009608: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4000960C: jal         0x40009520
    // 0x40009610: swc1        $f8, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f8.u32l;
    ovl_actor_main_9520(rdram, ctx);
        goto after_1;
    // 0x40009610: swc1        $f8, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f8.u32l;
    after_1:
    // 0x40009614: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x40009618: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x4000961C: beq         $t6, $at, L_40009630
    if (ctx->r14 == ctx->r1) {
        // 0x40009620: sw          $v0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r2;
            goto L_40009630;
    }
    // 0x40009620: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x40009624: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x40009628: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x4000962C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_40009630:
    // 0x40009630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40009634: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x40009638: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x4000963C: jal         0x400060EC
    // 0x40009640: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    ovl_actor_main_60EC(rdram, ctx);
        goto after_2;
    // 0x40009640: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x40009644: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x40009648: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4000964C: sw          $t8, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r24;
    // 0x40009650: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x40009654: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x40009658: jal         0x400006C4
    // 0x4000965C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_3;
    // 0x4000965C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x40009660: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x40009664: jal         0x40001D48
    // 0x40009668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1D48(rdram, ctx);
        goto after_4;
    // 0x40009668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4000966C: sw          $v0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r2;
    // 0x40009670: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40009674: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x40009678: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x4000967C: jr          $ra
    // 0x40009680: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x40009680: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_actor_main_9684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009684: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x40009688: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000968C: bne         $a1, $zero, L_40009724
    if (ctx->r5 != 0) {
        // 0x40009690: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_40009724;
    }
    // 0x40009690: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x40009694: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40009698: lwc1        $f2, 0x2C($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x4000969C: lwc1        $f4, -0x176C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X176C);
    // 0x400096A0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x400096A4: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x400096A8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x400096AC: bc1f        L_400096CC
    if (!c1cs) {
        // 0x400096B0: nop
    
            goto L_400096CC;
    }
    // 0x400096B0: nop

    // 0x400096B4: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x400096B8: jal         0x400006C4
    // 0x400096BC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x400096BC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x400096C0: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x400096C4: b           L_40009740
    // 0x400096C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40009740;
    // 0x400096C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400096CC:
    // 0x400096CC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x400096D0: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400096D4: lwc1        $f8, 0x28($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X28);
    // 0x400096D8: lwc1        $f7, -0x1768($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X1768);
    // 0x400096DC: lwc1        $f6, -0x1764($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1764);
    // 0x400096E0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x400096E4: mul.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x400096E8: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x400096EC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x400096F0: add.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f18.d + ctx->f16.d;
    // 0x400096F4: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
    // 0x400096F8: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x400096FC: nop

    // 0x40009700: bc1f        L_4000970C
    if (!c1cs) {
        // 0x40009704: nop
    
            goto L_4000970C;
    }
    // 0x40009704: nop

    // 0x40009708: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
L_4000970C:
    // 0x4000970C: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x40009710: nop

    // 0x40009714: bc1f        L_40009740
    if (!c1cs) {
        // 0x40009718: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40009740;
    }
    // 0x40009718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000971C: b           L_4000973C
    // 0x40009720: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
        goto L_4000973C;
    // 0x40009720: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
L_40009724:
    // 0x40009724: lw          $a0, 0x10($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X10);
    // 0x40009728: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4000972C: jal         0x400006C4
    // 0x40009730: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40009730: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x40009734: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x40009738: nop

L_4000973C:
    // 0x4000973C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40009740:
    // 0x40009740: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x40009744: jr          $ra
    // 0x40009748: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x40009748: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void ovl_actor_main_974C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000974C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x40009750: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40009754: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x40009758: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x4000975C: lw          $t7, 0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X10);
    // 0x40009760: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x40009764: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x40009768: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x4000976C: jal         0x400006C4
    // 0x40009770: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40009770: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_0:
    // 0x40009774: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x40009778: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4000977C: jal         0x400006C4
    // 0x40009780: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40009780: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x40009784: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x40009788: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000978C: bne         $t8, $at, L_400097BC
    if (ctx->r24 != ctx->r1) {
        // 0x40009790: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_400097BC;
    }
    // 0x40009790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40009794: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x40009798: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4000979C: bne         $t9, $at, L_400097BC
    if (ctx->r25 != ctx->r1) {
        // 0x400097A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_400097BC;
    }
    // 0x400097A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400097A4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x400097A8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x400097AC: lw          $a3, 0x1C($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X1C);
    // 0x400097B0: jal         0x400060EC
    // 0x400097B4: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    ovl_actor_main_60EC(rdram, ctx);
        goto after_2;
    // 0x400097B4: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_2:
    // 0x400097B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400097BC:
    // 0x400097BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x400097C0: jr          $ra
    // 0x400097C4: nop

    return;
    // 0x400097C4: nop

;}
RECOMP_FUNC void ovl_actor_main_97C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400097C8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x400097CC: lui         $t6, 0x4002
    ctx->r14 = S32(0X4002 << 16);
    // 0x400097D0: addiu       $v0, $sp, 0x1C
    ctx->r2 = ADD32(ctx->r29, 0X1C);
    // 0x400097D4: addiu       $t6, $t6, -0x2890
    ctx->r14 = ADD32(ctx->r14, -0X2890);
    // 0x400097D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400097DC: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x400097E0: addiu       $t9, $t6, 0x24
    ctx->r25 = ADD32(ctx->r14, 0X24);
    // 0x400097E4: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_400097E8:
    // 0x400097E8: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x400097EC: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x400097F0: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x400097F4: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x400097F8: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x400097FC: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x40009800: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x40009804: bne         $t6, $t9, L_400097E8
    if (ctx->r14 != ctx->r25) {
        // 0x40009808: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_400097E8;
    }
    // 0x40009808: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x4000980C: sll         $t1, $a3, 2
    ctx->r9 = S32(ctx->r7 << 2);
    // 0x40009810: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x40009814: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    // 0x40009818: jal         0x4000115C
    // 0x4000981C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_0;
    // 0x4000981C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x40009820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40009824: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x40009828: jr          $ra
    // 0x4000982C: nop

    return;
    // 0x4000982C: nop

;}
RECOMP_FUNC void ovl_actor_main_9830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009830: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x40009834: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40009838: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4000983C: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x40009840: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x40009844: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x40009848: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000984C: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x40009850: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x40009854: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x40009858: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x4000985C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x40009860: addiu       $a0, $a0, 0x2D4
    ctx->r4 = ADD32(ctx->r4, 0X2D4);
    // 0x40009864: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x40009868: jal         0x400022A8
    // 0x4000986C: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    ovl_actor_main_22A8(rdram, ctx);
        goto after_0;
    // 0x4000986C: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    after_0:
    // 0x40009870: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x40009874: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x40009878: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x4000987C: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x40009880: bne         $v1, $at, L_400098A4
    if (ctx->r3 != ctx->r1) {
        // 0x40009884: swc1        $f4, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
            goto L_400098A4;
    }
    // 0x40009884: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x40009888: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x4000988C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40009890: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x40009894: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x40009898: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x4000989C: b           L_40009A2C
    // 0x400098A0: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
        goto L_40009A2C;
    // 0x400098A0: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
L_400098A4:
    // 0x400098A4: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x400098A8: bne         $v1, $at, L_40009944
    if (ctx->r3 != ctx->r1) {
        // 0x400098AC: lw          $v0, 0x44($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X44);
            goto L_40009944;
    }
    // 0x400098AC: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x400098B0: lw          $a1, 0x2D8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2D8);
    // 0x400098B4: jal         0x4000974C
    // 0x400098B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_974C(rdram, ctx);
        goto after_1;
    // 0x400098B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x400098BC: lw          $t9, 0x2D8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X2D8);
    // 0x400098C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x400098C4: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x400098C8: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x400098CC: nop

    // 0x400098D0: bne         $v0, $at, L_400098F8
    if (ctx->r2 != ctx->r1) {
        // 0x400098D4: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_400098F8;
    }
    // 0x400098D4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x400098D8: jal         0x4000034C
    // 0x400098DC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_actor_main_34C(rdram, ctx);
        goto after_2;
    // 0x400098DC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
    // 0x400098E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400098E4: jal         0x400097C8
    // 0x400098E8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    ovl_actor_main_97C8(rdram, ctx);
        goto after_3;
    // 0x400098E8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_3:
    // 0x400098EC: b           L_40009928
    // 0x400098F0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
        goto L_40009928;
    // 0x400098F0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x400098F4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_400098F8:
    // 0x400098F8: bne         $v0, $at, L_40009910
    if (ctx->r2 != ctx->r1) {
        // 0x400098FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40009910;
    }
    // 0x400098FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40009900: jal         0x400097C8
    // 0x40009904: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_97C8(rdram, ctx);
        goto after_4;
    // 0x40009904: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x40009908: b           L_40009928
    // 0x4000990C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
        goto L_40009928;
    // 0x4000990C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_40009910:
    // 0x40009910: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x40009914: bne         $v0, $at, L_40009924
    if (ctx->r2 != ctx->r1) {
        // 0x40009918: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40009924;
    }
    // 0x40009918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000991C: jal         0x400097C8
    // 0x40009920: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    ovl_actor_main_97C8(rdram, ctx);
        goto after_5;
    // 0x40009920: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_5:
L_40009924:
    // 0x40009924: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_40009928:
    // 0x40009928: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000992C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x40009930: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x40009934: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x40009938: b           L_40009A2C
    // 0x4000993C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
        goto L_40009A2C;
    // 0x4000993C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x40009940: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_40009944:
    // 0x40009944: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x40009948: bne         $v0, $zero, L_40009958
    if (ctx->r2 != 0) {
        // 0x4000994C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_40009958;
    }
    // 0x4000994C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40009950: b           L_40009978
    // 0x40009954: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
        goto L_40009978;
    // 0x40009954: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
L_40009958:
    // 0x40009958: bne         $v0, $at, L_4000996C
    if (ctx->r2 != ctx->r1) {
        // 0x4000995C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_4000996C;
    }
    // 0x4000995C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x40009960: b           L_40009978
    // 0x40009964: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
        goto L_40009978;
    // 0x40009964: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x40009968: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_4000996C:
    // 0x4000996C: bne         $v0, $at, L_40009978
    if (ctx->r2 != ctx->r1) {
        // 0x40009970: addiu       $t1, $zero, 0xB
        ctx->r9 = ADD32(0, 0XB);
            goto L_40009978;
    }
    // 0x40009970: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
    // 0x40009974: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
L_40009978:
    // 0x40009978: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x4000997C: bne         $v1, $at, L_40009A0C
    if (ctx->r3 != ctx->r1) {
        // 0x40009980: nop
    
            goto L_40009A0C;
    }
    // 0x40009980: nop

    // 0x40009984: lw          $a1, 0x2EC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2EC);
    // 0x40009988: jal         0x4000974C
    // 0x4000998C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_974C(rdram, ctx);
        goto after_6;
    // 0x4000998C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x40009990: lw          $t2, 0x2EC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X2EC);
    // 0x40009994: nop

    // 0x40009998: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x4000999C: lw          $t3, 0x90($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X90);
    // 0x400099A0: nop

    // 0x400099A4: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x400099A8: bltz        $t4, L_400099F4
    if (SIGNED(ctx->r12) < 0) {
        // 0x400099AC: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_400099F4;
    }
    // 0x400099AC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x400099B0: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x400099B4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x400099B8: bne         $v0, $at, L_400099E0
    if (ctx->r2 != ctx->r1) {
        // 0x400099BC: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_400099E0;
    }
    // 0x400099BC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x400099C0: jal         0x4000034C
    // 0x400099C4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_actor_main_34C(rdram, ctx);
        goto after_7;
    // 0x400099C4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_7:
    // 0x400099C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400099CC: jal         0x400097C8
    // 0x400099D0: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    ovl_actor_main_97C8(rdram, ctx);
        goto after_8;
    // 0x400099D0: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    after_8:
    // 0x400099D4: b           L_400099F4
    // 0x400099D8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
        goto L_400099F4;
    // 0x400099D8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x400099DC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_400099E0:
    // 0x400099E0: bne         $v0, $at, L_400099F0
    if (ctx->r2 != ctx->r1) {
        // 0x400099E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400099F0;
    }
    // 0x400099E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400099E8: jal         0x400097C8
    // 0x400099EC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_actor_main_97C8(rdram, ctx);
        goto after_9;
    // 0x400099EC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_9:
L_400099F0:
    // 0x400099F0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
L_400099F4:
    // 0x400099F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x400099F8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x400099FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x40009A00: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x40009A04: b           L_40009A2C
    // 0x40009A08: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
        goto L_40009A2C;
    // 0x40009A08: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
L_40009A0C:
    // 0x40009A0C: lw          $a1, 0x2EC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2EC);
    // 0x40009A10: jal         0x4000974C
    // 0x40009A14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_974C(rdram, ctx);
        goto after_10;
    // 0x40009A14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x40009A18: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40009A1C: lw          $t5, 0x2EC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X2EC);
    // 0x40009A20: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x40009A24: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x40009A28: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
L_40009A2C:
    // 0x40009A2C: addiu       $t6, $sp, 0x30
    ctx->r14 = ADD32(ctx->r29, 0X30);
    // 0x40009A30: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x40009A34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40009A38: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x40009A3C: jal         0x40001258
    // 0x40009A40: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_actor_main_1258(rdram, ctx);
        goto after_11;
    // 0x40009A40: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_11:
    // 0x40009A44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40009A48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x40009A4C: jr          $ra
    // 0x40009A50: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x40009A50: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_actor_main_9A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009A54: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x40009A58: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x40009A5C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x40009A60: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x40009A64: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
    // 0x40009A68: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x40009A6C: jr          $ra
    // 0x40009A70: sw          $t9, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r25;
    return;
    // 0x40009A70: sw          $t9, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void ovl_actor_main_9A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009A74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40009A78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40009A7C: lw          $a1, 0xC0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC0);
    // 0x40009A80: jal         0x40011944
    // 0x40009A84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_11944(rdram, ctx);
        goto after_0;
    // 0x40009A84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x40009A88: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40009A8C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40009A90: sw          $t6, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r14;
    // 0x40009A94: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
    // 0x40009A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40009A9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40009AA0: jr          $ra
    // 0x40009AA4: nop

    return;
    // 0x40009AA4: nop

;}
RECOMP_FUNC void ovl_actor_main_9AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009AA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40009AAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40009AB0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x40009AB4: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x40009AB8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x40009ABC: addiu       $a0, $a0, 0x230
    ctx->r4 = ADD32(ctx->r4, 0X230);
    // 0x40009AC0: jal         0x40009220
    // 0x40009AC4: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_actor_main_9220(rdram, ctx);
        goto after_0;
    // 0x40009AC4: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_0:
    // 0x40009AC8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40009ACC: bne         $v0, $at, L_40009AE8
    if (ctx->r2 != ctx->r1) {
        // 0x40009AD0: addiu       $a1, $zero, 0x17
        ctx->r5 = ADD32(0, 0X17);
            goto L_40009AE8;
    }
    // 0x40009AD0: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x40009AD4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40009AD8: jal         0x40009220
    // 0x40009ADC: addiu       $a0, $a0, 0xDC
    ctx->r4 = ADD32(ctx->r4, 0XDC);
    ovl_actor_main_9220(rdram, ctx);
        goto after_1;
    // 0x40009ADC: addiu       $a0, $a0, 0xDC
    ctx->r4 = ADD32(ctx->r4, 0XDC);
    after_1:
    // 0x40009AE0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40009AE4: beq         $v0, $at, L_40009AF0
    if (ctx->r2 == ctx->r1) {
        // 0x40009AE8: addiu       $t7, $zero, 0x4
        ctx->r15 = ADD32(0, 0X4);
            goto L_40009AF0;
    }
L_40009AE8:
    // 0x40009AE8: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x40009AEC: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_40009AF0:
    // 0x40009AF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40009AF4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x40009AF8: jr          $ra
    // 0x40009AFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x40009AFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_actor_main_9B00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009B00: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x40009B04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x40009B08: bne         $t6, $zero, L_40009B18
    if (ctx->r14 != 0) {
        // 0x40009B0C: nop
    
            goto L_40009B18;
    }
    // 0x40009B0C: nop

    // 0x40009B10: jr          $ra
    // 0x40009B14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x40009B14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_40009B18:
    // 0x40009B18: jr          $ra
    // 0x40009B1C: nop

    return;
    // 0x40009B1C: nop

;}
RECOMP_FUNC void ovl_actor_main_9B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009B20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40009B24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40009B28: lw          $a1, 0xC0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC0);
    // 0x40009B2C: jal         0x40011944
    // 0x40009B30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_11944(rdram, ctx);
        goto after_0;
    // 0x40009B30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x40009B34: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40009B38: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40009B3C: sw          $t6, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r14;
    // 0x40009B40: jal         0x400093E4
    // 0x40009B44: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
    ovl_actor_main_93E4(rdram, ctx);
        goto after_1;
    // 0x40009B44: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
    after_1:
    // 0x40009B48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40009B4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40009B50: jr          $ra
    // 0x40009B54: nop

    return;
    // 0x40009B54: nop

;}
RECOMP_FUNC void ovl_actor_main_9B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009B58: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x40009B5C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40009B60: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x40009B64: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x40009B68: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
    // 0x40009B6C: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x40009B70: sw          $t9, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r25;
    // 0x40009B74: swc1        $f0, 0x2F8($a0)
    MEM_W(0X2F8, ctx->r4) = ctx->f0.u32l;
    // 0x40009B78: jr          $ra
    // 0x40009B7C: swc1        $f0, 0x2FC($a0)
    MEM_W(0X2FC, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x40009B7C: swc1        $f0, 0x2FC($a0)
    MEM_W(0X2FC, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void ovl_actor_main_9B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009B80: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x40009B84: jr          $ra
    // 0x40009B88: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x40009B88: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_actor_main_9B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009B8C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x40009B90: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x40009B94: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x40009B98: jr          $ra
    // 0x40009B9C: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    return;
    // 0x40009B9C: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
;}
RECOMP_FUNC void ovl_actor_main_9BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009BA0: jr          $ra
    // 0x40009BA4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x40009BA4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ovl_actor_main_9BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009BA8: jr          $ra
    // 0x40009BAC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x40009BAC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ovl_actor_main_9BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009BB0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x40009BB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40009BB8: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x40009BBC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x40009BC0: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x40009BC4: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x40009BC8: sll         $t8, $t7, 11
    ctx->r24 = S32(ctx->r15 << 11);
    // 0x40009BCC: bgez        $t8, L_40009C4C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x40009BD0: addiu       $a1, $zero, 0x1B
        ctx->r5 = ADD32(0, 0X1B);
            goto L_40009C4C;
    }
    // 0x40009BD0: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x40009BD4: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x40009BD8: jal         0x400006C4
    // 0x40009BDC: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40009BDC: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    after_0:
    // 0x40009BE0: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x40009BE4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x40009BE8: lw          $a0, 0x10($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X10);
    // 0x40009BEC: jal         0x400006C4
    // 0x40009BF0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40009BF0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x40009BF4: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x40009BF8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x40009BFC: lwc1        $f6, 0x30($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X30);
    // 0x40009C00: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x40009C04: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x40009C08: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x40009C0C: bc1f        L_40009C3C
    if (!c1cs) {
        // 0x40009C10: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_40009C3C;
    }
    // 0x40009C10: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x40009C14: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x40009C18: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x40009C1C: bc1f        L_40009C3C
    if (!c1cs) {
        // 0x40009C20: nop
    
            goto L_40009C3C;
    }
    // 0x40009C20: nop

    // 0x40009C24: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x40009C28: nop

    // 0x40009C2C: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x40009C30: nop

    // 0x40009C34: bc1t        L_40009C74
    if (c1cs) {
        // 0x40009C38: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40009C74;
    }
    // 0x40009C38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40009C3C:
    // 0x40009C3C: jal         0x40001A8C
    // 0x40009C40: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_2;
    // 0x40009C40: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x40009C44: b           L_40009C74
    // 0x40009C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40009C74;
    // 0x40009C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40009C4C:
    // 0x40009C4C: lwc1        $f0, 0x30($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X30);
    // 0x40009C50: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x40009C54: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x40009C58: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x40009C5C: nop

    // 0x40009C60: bc1t        L_40009C74
    if (c1cs) {
        // 0x40009C64: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40009C74;
    }
    // 0x40009C64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40009C68: jal         0x40001A8C
    // 0x40009C6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_3;
    // 0x40009C6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x40009C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40009C74:
    // 0x40009C74: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x40009C78: jr          $ra
    // 0x40009C7C: nop

    return;
    // 0x40009C7C: nop

;}
RECOMP_FUNC void ovl_actor_main_9C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009C80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40009C84: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40009C88: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x40009C8C: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x40009C90: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40009C94: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x40009C98: slti        $at, $a1, 0x33
    ctx->r1 = SIGNED(ctx->r5) < 0X33 ? 1 : 0;
    // 0x40009C9C: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x40009CA0: bgez        $t8, L_40009CB4
    if (SIGNED(ctx->r24) >= 0) {
        // 0x40009CA4: nop
    
            goto L_40009CB4;
    }
    // 0x40009CA4: nop

    // 0x40009CA8: bne         $at, $zero, L_40009CB8
    if (ctx->r1 != 0) {
        // 0x40009CAC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_40009CB8;
    }
    // 0x40009CAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40009CB0: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
L_40009CB4:
    // 0x40009CB4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_40009CB8:
    // 0x40009CB8: bne         $a1, $at, L_40009CD4
    if (ctx->r5 != ctx->r1) {
        // 0x40009CBC: addiu       $at, $zero, 0x64
        ctx->r1 = ADD32(0, 0X64);
            goto L_40009CD4;
    }
    // 0x40009CBC: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x40009CC0: jal         0x400093E4
    // 0x40009CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_93E4(rdram, ctx);
        goto after_0;
    // 0x40009CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x40009CC8: b           L_40009DC8
    // 0x40009CCC: nop

        goto L_40009DC8;
    // 0x40009CCC: nop

    // 0x40009CD0: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
L_40009CD4:
    // 0x40009CD4: bne         $a1, $at, L_40009CEC
    if (ctx->r5 != ctx->r1) {
        // 0x40009CD8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40009CEC;
    }
    // 0x40009CD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40009CDC: jal         0x40008EF8
    // 0x40009CE0: addiu       $a1, $zero, 0x5D3
    ctx->r5 = ADD32(0, 0X5D3);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x40009CE0: addiu       $a1, $zero, 0x5D3
    ctx->r5 = ADD32(0, 0X5D3);
    after_1:
    // 0x40009CE4: b           L_40009DC8
    // 0x40009CE8: nop

        goto L_40009DC8;
    // 0x40009CE8: nop

L_40009CEC:
    // 0x40009CEC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40009CF0: beq         $a1, $at, L_40009D08
    if (ctx->r5 == ctx->r1) {
        // 0x40009CF4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40009D08;
    }
    // 0x40009CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40009CF8: addiu       $at, $zero, 0x406
    ctx->r1 = ADD32(0, 0X406);
    // 0x40009CFC: beq         $a1, $at, L_40009D08
    if (ctx->r5 == ctx->r1) {
        // 0x40009D00: addiu       $at, $zero, 0xC12
        ctx->r1 = ADD32(0, 0XC12);
            goto L_40009D08;
    }
    // 0x40009D00: addiu       $at, $zero, 0xC12
    ctx->r1 = ADD32(0, 0XC12);
    // 0x40009D04: bne         $a1, $at, L_40009D28
    if (ctx->r5 != ctx->r1) {
        // 0x40009D08: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_40009D28;
    }
L_40009D08:
    // 0x40009D08: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x40009D0C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x40009D10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x40009D14: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40009D18: jal         0x40008D20
    // 0x40009D1C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D20(rdram, ctx);
        goto after_2;
    // 0x40009D1C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
    // 0x40009D20: b           L_40009DC8
    // 0x40009D24: nop

        goto L_40009DC8;
    // 0x40009D24: nop

L_40009D28:
    // 0x40009D28: addiu       $at, $zero, 0x3E8
    ctx->r1 = ADD32(0, 0X3E8);
    // 0x40009D2C: bne         $a1, $at, L_40009D50
    if (ctx->r5 != ctx->r1) {
        // 0x40009D30: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40009D50;
    }
    // 0x40009D30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40009D34: addiu       $a1, $zero, 0x1A4
    ctx->r5 = ADD32(0, 0X1A4);
    // 0x40009D38: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40009D3C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40009D40: jal         0x40008D64
    // 0x40009D44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_3;
    // 0x40009D44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x40009D48: b           L_40009DC8
    // 0x40009D4C: nop

        goto L_40009DC8;
    // 0x40009D4C: nop

L_40009D50:
    // 0x40009D50: addiu       $at, $zero, 0xBB8
    ctx->r1 = ADD32(0, 0XBB8);
    // 0x40009D54: bne         $a1, $at, L_40009D7C
    if (ctx->r5 != ctx->r1) {
        // 0x40009D58: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40009D7C;
    }
    // 0x40009D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40009D5C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x40009D60: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x40009D64: addiu       $a1, $zero, 0x19B
    ctx->r5 = ADD32(0, 0X19B);
    // 0x40009D68: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40009D6C: jal         0x40008D64
    // 0x40009D70: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_4;
    // 0x40009D70: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_4:
    // 0x40009D74: b           L_40009DC8
    // 0x40009D78: nop

        goto L_40009DC8;
    // 0x40009D78: nop

L_40009D7C:
    // 0x40009D7C: addiu       $at, $zero, 0xFA0
    ctx->r1 = ADD32(0, 0XFA0);
    // 0x40009D80: bne         $a1, $at, L_40009DA8
    if (ctx->r5 != ctx->r1) {
        // 0x40009D84: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40009DA8;
    }
    // 0x40009D84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40009D88: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x40009D8C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x40009D90: addiu       $a1, $zero, 0x189
    ctx->r5 = ADD32(0, 0X189);
    // 0x40009D94: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40009D98: jal         0x40008D64
    // 0x40009D9C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_5;
    // 0x40009D9C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_5:
    // 0x40009DA0: b           L_40009DC8
    // 0x40009DA4: nop

        goto L_40009DC8;
    // 0x40009DA4: nop

L_40009DA8:
    // 0x40009DA8: addiu       $at, $zero, 0x4E20
    ctx->r1 = ADD32(0, 0X4E20);
    // 0x40009DAC: bne         $a1, $at, L_40009DC8
    if (ctx->r5 != ctx->r1) {
        // 0x40009DB0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40009DC8;
    }
    // 0x40009DB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40009DB4: addiu       $a1, $zero, 0x19F
    ctx->r5 = ADD32(0, 0X19F);
    // 0x40009DB8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40009DBC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40009DC0: jal         0x40008D64
    // 0x40009DC4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_6;
    // 0x40009DC4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
L_40009DC8:
    // 0x40009DC8: jal         0x40009B00
    // 0x40009DCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9B00(rdram, ctx);
        goto after_7;
    // 0x40009DCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x40009DD0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40009DD4: bne         $v0, $at, L_40009DE4
    if (ctx->r2 != ctx->r1) {
        // 0x40009DD8: nop
    
            goto L_40009DE4;
    }
    // 0x40009DD8: nop

    // 0x40009DDC: b           L_40009DEC
    // 0x40009DE0: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
        goto L_40009DEC;
    // 0x40009DE0: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
L_40009DE4:
    // 0x40009DE4: jal         0x40009BB0
    // 0x40009DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9BB0(rdram, ctx);
        goto after_8;
    // 0x40009DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_40009DEC:
    // 0x40009DEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40009DF0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x40009DF4: jr          $ra
    // 0x40009DF8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x40009DF8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_9DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009DFC: addiu       $t6, $a1, -0x2
    ctx->r14 = ADD32(ctx->r5, -0X2);
    // 0x40009E00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40009E04: sltiu       $at, $t6, 0x10
    ctx->r1 = ctx->r14 < 0X10 ? 1 : 0;
    // 0x40009E08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40009E0C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x40009E10: beq         $at, $zero, L_40009E48
    if (ctx->r1 == 0) {
        // 0x40009E14: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_40009E48;
    }
    // 0x40009E14: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x40009E18: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x40009E1C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40009E20: addu        $at, $at, $t6
    gpr jr_addend_40009E2C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x40009E24: lw          $t6, -0x1760($at)
    ctx->r14 = ADD32(ctx->r1, -0X1760);
    // 0x40009E28: nop

    // 0x40009E2C: jr          $t6
    // 0x40009E30: nop

    switch (jr_addend_40009E2C >> 2) {
        case 0: goto L_40009E44; break;
        case 1: goto L_40009E48; break;
        case 2: goto L_40009E44; break;
        case 3: goto L_40009E48; break;
        case 4: goto L_40009E48; break;
        case 5: goto L_40009E44; break;
        case 6: goto L_40009E44; break;
        case 7: goto L_40009E44; break;
        case 8: goto L_40009E44; break;
        case 9: goto L_40009E48; break;
        case 10: goto L_40009E34; break;
        case 11: goto L_40009E44; break;
        case 12: goto L_40009E44; break;
        case 13: goto L_40009E44; break;
        case 14: goto L_40009E44; break;
        case 15: goto L_40009E44; break;
        default: switch_error(__func__, 0x40009E2C, 0x4001E8A0);
    }
    // 0x40009E30: nop

L_40009E34:
    // 0x40009E34: jal         0x40009AA8
    // 0x40009E38: nop

    ovl_actor_main_9AA8(rdram, ctx);
        goto after_0;
    // 0x40009E38: nop

    after_0:
    // 0x40009E3C: b           L_40009E48
    // 0x40009E40: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_40009E48;
    // 0x40009E40: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_40009E44:
    // 0x40009E44: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_40009E48:
    // 0x40009E48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40009E4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40009E50: jr          $ra
    // 0x40009E54: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x40009E54: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_9E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009E58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40009E5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40009E60: jal         0x40008DB4
    // 0x40009E64: nop

    ovl_actor_main_8DB4(rdram, ctx);
        goto after_0;
    // 0x40009E64: nop

    after_0:
    // 0x40009E68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40009E6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40009E70: jr          $ra
    // 0x40009E74: nop

    return;
    // 0x40009E74: nop

;}
RECOMP_FUNC void ovl_actor_main_9E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40009E78: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x40009E7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40009E80: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40009E84: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x40009E88: lwc1        $f5, -0x1720($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1720);
    // 0x40009E8C: lwc1        $f4, -0x171C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X171C);
    // 0x40009E90: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x40009E94: mul.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x40009E98: lwc1        $f16, 0x2C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x40009E9C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x40009EA0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x40009EA4: add.d       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f18.d + ctx->f10.d;
    // 0x40009EA8: jal         0x40001E0C
    // 0x40009EAC: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    ovl_actor_main_1E0C(rdram, ctx);
        goto after_0;
    // 0x40009EAC: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_0:
    // 0x40009EB0: jal         0x40001DD4
    // 0x40009EB4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_actor_main_1DD4(rdram, ctx);
        goto after_1;
    // 0x40009EB4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x40009EB8: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x40009EBC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x40009EC0: lw          $t6, 0x90($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X90);
    // 0x40009EC4: swc1        $f0, 0x38($a3)
    MEM_W(0X38, ctx->r7) = ctx->f0.u32l;
    // 0x40009EC8: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x40009ECC: bne         $t7, $zero, L_40009F14
    if (ctx->r15 != 0) {
        // 0x40009ED0: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_40009F14;
    }
    // 0x40009ED0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x40009ED4: lwc1        $f4, 0x48($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X48);
    // 0x40009ED8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x40009EDC: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40009EE0: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x40009EE4: nop

    // 0x40009EE8: bc1f        L_40009F08
    if (!c1cs) {
        // 0x40009EEC: nop
    
            goto L_40009F08;
    }
    // 0x40009EEC: nop

    // 0x40009EF0: lwc1        $f16, 0x30($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X30);
    // 0x40009EF4: lwc1        $f18, -0x1718($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1718);
    // 0x40009EF8: nop

    // 0x40009EFC: mul.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x40009F00: b           L_40009F20
    // 0x40009F04: swc1        $f10, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->f10.u32l;
        goto L_40009F20;
    // 0x40009F04: swc1        $f10, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->f10.u32l;
L_40009F08:
    // 0x40009F08: lwc1        $f6, 0x30($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X30);
    // 0x40009F0C: b           L_40009F20
    // 0x40009F10: swc1        $f6, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->f6.u32l;
        goto L_40009F20;
    // 0x40009F10: swc1        $f6, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->f6.u32l;
L_40009F14:
    // 0x40009F14: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x40009F18: nop

    // 0x40009F1C: swc1        $f4, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->f4.u32l;
L_40009F20:
    // 0x40009F20: lw          $t8, 0x4($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X4);
    // 0x40009F24: lwc1        $f0, 0x40($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X40);
    // 0x40009F28: lw          $v0, 0xC($t8)
    ctx->r2 = MEM_W(ctx->r24, 0XC);
    // 0x40009F2C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x40009F30: bltz        $v0, L_40009F58
    if (SIGNED(ctx->r2) < 0) {
        // 0x40009F34: slti        $at, $v0, 0x4
        ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
            goto L_40009F58;
    }
    // 0x40009F34: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x40009F38: beq         $at, $zero, L_40009F58
    if (ctx->r1 == 0) {
        // 0x40009F3C: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_40009F58;
    }
    // 0x40009F3C: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x40009F40: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40009F44: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x40009F48: lwc1        $f8, -0x286C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X286C);
    // 0x40009F4C: nop

    // 0x40009F50: mul.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x40009F54: swc1        $f16, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->f16.u32l;
L_40009F58:
    // 0x40009F58: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    // 0x40009F5C: jal         0x400063F0
    // 0x40009F60: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    ovl_actor_main_63F0(rdram, ctx);
        goto after_2;
    // 0x40009F60: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x40009F64: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x40009F68: lwc1        $f2, 0x4C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x40009F6C: beq         $v0, $zero, L_40009FEC
    if (ctx->r2 == 0) {
        // 0x40009F70: nop
    
            goto L_40009FEC;
    }
    // 0x40009F70: nop

    // 0x40009F74: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x40009F78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40009F7C: beq         $v1, $at, L_40009F9C
    if (ctx->r3 == ctx->r1) {
        // 0x40009F80: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_40009F9C;
    }
    // 0x40009F80: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x40009F84: beq         $v1, $at, L_40009FB0
    if (ctx->r3 == ctx->r1) {
        // 0x40009F88: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_40009FB0;
    }
    // 0x40009F88: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x40009F8C: beq         $v1, $at, L_40009FCC
    if (ctx->r3 == ctx->r1) {
        // 0x40009F90: nop
    
            goto L_40009FCC;
    }
    // 0x40009F90: nop

    // 0x40009F94: b           L_40009FF0
    // 0x40009F98: lw          $t0, 0x90($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X90);
        goto L_40009FF0;
    // 0x40009F98: lw          $t0, 0x90($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X90);
L_40009F9C:
    // 0x40009F9C: lwc1        $f0, 0x40($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X40);
    // 0x40009FA0: nop

    // 0x40009FA4: add.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x40009FA8: b           L_40009FEC
    // 0x40009FAC: swc1        $f18, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->f18.u32l;
        goto L_40009FEC;
    // 0x40009FAC: swc1        $f18, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->f18.u32l;
L_40009FB0:
    // 0x40009FB0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x40009FB4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x40009FB8: lwc1        $f10, 0x40($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X40);
    // 0x40009FBC: nop

    // 0x40009FC0: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x40009FC4: b           L_40009FEC
    // 0x40009FC8: swc1        $f4, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->f4.u32l;
        goto L_40009FEC;
    // 0x40009FC8: swc1        $f4, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->f4.u32l;
L_40009FCC:
    // 0x40009FCC: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40009FD0: lwc1        $f8, -0x1714($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1714);
    // 0x40009FD4: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40009FD8: mul.s       $f16, $f2, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x40009FDC: lwc1        $f18, -0x1710($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1710);
    // 0x40009FE0: nop

    // 0x40009FE4: mul.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x40009FE8: swc1        $f10, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->f10.u32l;
L_40009FEC:
    // 0x40009FEC: lw          $t0, 0x90($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X90);
L_40009FF0:
    // 0x40009FF0: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40009FF4: sll         $t1, $t0, 10
    ctx->r9 = S32(ctx->r8 << 10);
    // 0x40009FF8: bgez        $t1, L_4000A01C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x40009FFC: nop
    
            goto L_4000A01C;
    }
    // 0x40009FFC: nop

    // 0x4000A000: lwc1        $f6, -0x170C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X170C);
    // 0x4000A004: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000A008: mul.s       $f4, $f2, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x4000A00C: lwc1        $f8, -0x1708($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1708);
    // 0x4000A010: nop

    // 0x4000A014: mul.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x4000A018: swc1        $f16, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->f16.u32l;
L_4000A01C:
    // 0x4000A01C: lw          $t2, 0x8($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X8);
    // 0x4000A020: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x4000A024: bne         $t2, $at, L_4000A0AC
    if (ctx->r10 != ctx->r1) {
        // 0x4000A028: nop
    
            goto L_4000A0AC;
    }
    // 0x4000A028: nop

    // 0x4000A02C: lw          $t3, 0x90($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X90);
    // 0x4000A030: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4000A034: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x4000A038: beq         $t4, $zero, L_4000A094
    if (ctx->r12 == 0) {
        // 0x4000A03C: addiu       $a2, $sp, 0x30
        ctx->r6 = ADD32(ctx->r29, 0X30);
            goto L_4000A094;
    }
    // 0x4000A03C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x4000A040: lw          $a0, 0x2EC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X2EC);
    // 0x4000A044: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    // 0x4000A048: jal         0x400006C4
    // 0x4000A04C: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_3;
    // 0x4000A04C: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    after_3:
    // 0x4000A050: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x4000A054: lwc1        $f2, 0x4C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x4000A058: bne         $v0, $zero, L_4000A094
    if (ctx->r2 != 0) {
        // 0x4000A05C: nop
    
            goto L_4000A094;
    }
    // 0x4000A05C: nop

    // 0x4000A060: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x4000A064: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x4000A068: bne         $t5, $zero, L_4000A094
    if (ctx->r13 != 0) {
        // 0x4000A06C: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_4000A094;
    }
    // 0x4000A06C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x4000A070: bne         $t6, $at, L_4000A094
    if (ctx->r14 != ctx->r1) {
        // 0x4000A074: lui         $at, 0x4002
        ctx->r1 = S32(0X4002 << 16);
            goto L_4000A094;
    }
    // 0x4000A074: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000A078: lwc1        $f18, -0x1704($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1704);
    // 0x4000A07C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000A080: mul.s       $f10, $f2, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x4000A084: lwc1        $f6, -0x1700($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1700);
    // 0x4000A088: nop

    // 0x4000A08C: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x4000A090: swc1        $f4, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->f4.u32l;
L_4000A094:
    // 0x4000A094: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000A098: lwc1        $f16, -0x16FC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X16FC);
    // 0x4000A09C: lwc1        $f8, 0x40($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X40);
    // 0x4000A0A0: nop

    // 0x4000A0A4: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x4000A0A8: swc1        $f18, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->f18.u32l;
L_4000A0AC:
    // 0x4000A0AC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x4000A0B0: lwc1        $f6, 0x30($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X30);
    // 0x4000A0B4: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000A0B8: c.eq.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl == ctx->f6.fl;
    // 0x4000A0BC: nop

    // 0x4000A0C0: bc1f        L_4000A0D4
    if (!c1cs) {
        // 0x4000A0C4: nop
    
            goto L_4000A0D4;
    }
    // 0x4000A0C4: nop

    // 0x4000A0C8: lwc1        $f4, -0x16F8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X16F8);
    // 0x4000A0CC: nop

    // 0x4000A0D0: swc1        $f4, 0x38($a3)
    MEM_W(0X38, ctx->r7) = ctx->f4.u32l;
L_4000A0D4:
    // 0x4000A0D4: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000A0D8: lwc1        $f8, -0x16F4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X16F4);
    // 0x4000A0DC: lwc1        $f0, 0x38($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X38);
    // 0x4000A0E0: nop

    // 0x4000A0E4: c.eq.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl == ctx->f0.fl;
    // 0x4000A0E8: nop

    // 0x4000A0EC: bc1t        L_4000A0FC
    if (c1cs) {
        // 0x4000A0F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000A0FC;
    }
    // 0x4000A0F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000A0F4: swc1        $f0, 0x44($a3)
    MEM_W(0X44, ctx->r7) = ctx->f0.u32l;
    // 0x4000A0F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000A0FC:
    // 0x4000A0FC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x4000A100: jr          $ra
    // 0x4000A104: nop

    return;
    // 0x4000A104: nop

;}
