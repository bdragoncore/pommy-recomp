#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_coll_main_1B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44001B2C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x44001B30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44001B34: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x44001B38: lw          $t6, 0x10($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X10);
    // 0x44001B3C: nop

    // 0x44001B40: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x44001B44: nop

    // 0x44001B48: swc1        $f4, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f4.u32l;
    // 0x44001B4C: lw          $t8, 0x10($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X10);
    // 0x44001B50: nop

    // 0x44001B54: lwc1        $f6, 0x4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4);
    // 0x44001B58: nop

    // 0x44001B5C: swc1        $f6, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f6.u32l;
    // 0x44001B60: lw          $t9, 0x10($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X10);
    // 0x44001B64: nop

    // 0x44001B68: lwc1        $f8, 0x8($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X8);
    // 0x44001B6C: nop

    // 0x44001B70: swc1        $f8, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f8.u32l;
    // 0x44001B74: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x44001B78: lw          $t0, 0xC($a1)
    ctx->r8 = MEM_W(ctx->r5, 0XC);
    // 0x44001B7C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x44001B80: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x44001B84: lw          $t1, 0x10($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X10);
    // 0x44001B88: nop

    // 0x44001B8C: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x44001B90: nop

    // 0x44001B94: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x44001B98: lw          $t2, 0x10($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X10);
    // 0x44001B9C: nop

    // 0x44001BA0: lwc1        $f16, 0x4($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X4);
    // 0x44001BA4: nop

    // 0x44001BA8: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x44001BAC: lw          $t3, 0x10($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X10);
    // 0x44001BB0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x44001BB4: lwc1        $f18, 0x8($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X8);
    // 0x44001BB8: jal         0x440013E8
    // 0x44001BBC: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    ovl_coll_main_13E8(rdram, ctx);
        goto after_0;
    // 0x44001BBC: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x44001BC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44001BC4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x44001BC8: jr          $ra
    // 0x44001BCC: nop

    return;
    // 0x44001BCC: nop

;}
RECOMP_FUNC void ovl_coll_main_1BD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44001BD0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x44001BD4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x44001BD8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x44001BDC: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x44001BE0: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x44001BE4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x44001BE8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x44001BEC: lui         $s0, 0x4400
    ctx->r16 = S32(0X4400 << 16);
    // 0x44001BF0: lui         $s2, 0x4401
    ctx->r18 = S32(0X4401 << 16);
    // 0x44001BF4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x44001BF8: addiu       $s0, $s0, 0x7BF0
    ctx->r16 = ADD32(ctx->r16, 0X7BF0);
    // 0x44001BFC: addiu       $s2, $s2, -0x6868
    ctx->r18 = ADD32(ctx->r18, -0X6868);
    // 0x44001C00: addiu       $s1, $zero, 0x10
    ctx->r17 = ADD32(0, 0X10);
    // 0x44001C04: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x44001C08: addiu       $s4, $zero, 0xD
    ctx->r20 = ADD32(0, 0XD);
    // 0x44001C0C: addiu       $s5, $zero, 0xE
    ctx->r21 = ADD32(0, 0XE);
L_44001C10:
    // 0x44001C10: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x44001C14: nop

    // 0x44001C18: beq         $s3, $t6, L_44001C70
    if (ctx->r19 == ctx->r14) {
        // 0x44001C1C: nop
    
            goto L_44001C70;
    }
    // 0x44001C1C: nop

    // 0x44001C20: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x44001C24: nop

    // 0x44001C28: beq         $s3, $t7, L_44001C70
    if (ctx->r19 == ctx->r15) {
        // 0x44001C2C: nop
    
            goto L_44001C70;
    }
    // 0x44001C2C: nop

    // 0x44001C30: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x44001C34: nop

    // 0x44001C38: beq         $s3, $t8, L_44001C70
    if (ctx->r19 == ctx->r24) {
        // 0x44001C3C: nop
    
            goto L_44001C70;
    }
    // 0x44001C3C: nop

    // 0x44001C40: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x44001C44: nop

    // 0x44001C48: bne         $s4, $v0, L_44001C60
    if (ctx->r20 != ctx->r2) {
        // 0x44001C4C: nop
    
            goto L_44001C60;
    }
    // 0x44001C4C: nop

    // 0x44001C50: jal         0x440023C0
    // 0x44001C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_23C0(rdram, ctx);
        goto after_0;
    // 0x44001C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x44001C58: b           L_44001C74
    // 0x44001C5C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_44001C74;
    // 0x44001C5C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_44001C60:
    // 0x44001C60: bne         $s5, $v0, L_44001C70
    if (ctx->r21 != ctx->r2) {
        // 0x44001C64: nop
    
            goto L_44001C70;
    }
    // 0x44001C64: nop

    // 0x44001C68: jal         0x440033F8
    // 0x44001C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_33F8(rdram, ctx);
        goto after_1;
    // 0x44001C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_44001C70:
    // 0x44001C70: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_44001C74:
    // 0x44001C74: slti        $at, $s1, 0x2E
    ctx->r1 = SIGNED(ctx->r17) < 0X2E ? 1 : 0;
    // 0x44001C78: bne         $at, $zero, L_44001C10
    if (ctx->r1 != 0) {
        // 0x44001C7C: addiu       $s0, $s0, 0xEC
        ctx->r16 = ADD32(ctx->r16, 0XEC);
            goto L_44001C10;
    }
    // 0x44001C7C: addiu       $s0, $s0, 0xEC
    ctx->r16 = ADD32(ctx->r16, 0XEC);
    // 0x44001C80: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x44001C84: addiu       $s0, $zero, 0x8
    ctx->r16 = ADD32(0, 0X8);
L_44001C88:
    // 0x44001C88: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x44001C8C: nop

    // 0x44001C90: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x44001C94: beq         $t0, $zero, L_44001CAC
    if (ctx->r8 == 0) {
        // 0x44001C98: nop
    
            goto L_44001CAC;
    }
    // 0x44001C98: nop

    // 0x44001C9C: lw          $t9, 0x10($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X10);
    // 0x44001CA0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x44001CA4: jalr        $t9
    // 0x44001CA8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x44001CA8: nop

    after_2:
L_44001CAC:
    // 0x44001CAC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x44001CB0: bne         $s1, $s0, L_44001C88
    if (ctx->r17 != ctx->r16) {
        // 0x44001CB4: addiu       $s2, $s2, 0x6C
        ctx->r18 = ADD32(ctx->r18, 0X6C);
            goto L_44001C88;
    }
    // 0x44001CB4: addiu       $s2, $s2, 0x6C
    ctx->r18 = ADD32(ctx->r18, 0X6C);
    // 0x44001CB8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x44001CBC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x44001CC0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x44001CC4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x44001CC8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x44001CCC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x44001CD0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x44001CD4: jr          $ra
    // 0x44001CD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x44001CD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_coll_main_1CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44001CDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44001CE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_44001CE4:
    // 0x44001CE4: jal         0x44001BD0
    // 0x44001CE8: nop

    ovl_coll_main_1BD0(rdram, ctx);
        goto after_0;
    // 0x44001CE8: nop

    after_0:
    // 0x44001CEC: jal         0x4400085C
    // 0x44001CF0: nop

    ovl_coll_main_85C(rdram, ctx);
        goto after_1;
    // 0x44001CF0: nop

    after_1:
    // 0x44001CF4: b           L_44001CE4
    // 0x44001CF8: nop

        goto L_44001CE4;
    // 0x44001CF8: nop

    // 0x44001CFC: nop

    // 0x44001D00: nop

    // 0x44001D04: nop

    // 0x44001D08: nop

    // 0x44001D0C: nop

    // 0x44001D10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44001D14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44001D18: jr          $ra
    // 0x44001D1C: nop

    return;
    // 0x44001D1C: nop

;}
RECOMP_FUNC void ovl_coll_main_1D20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44001D20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44001D24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44001D28: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x44001D2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x44001D30: bne         $v0, $at, L_44001D4C
    if (ctx->r2 != ctx->r1) {
        // 0x44001D34: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_44001D4C;
    }
    // 0x44001D34: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x44001D38: jal         0x440014D8
    // 0x44001D3C: nop

    ovl_coll_main_14D8(rdram, ctx);
        goto after_0;
    // 0x44001D3C: nop

    after_0:
    // 0x44001D40: b           L_44001E08
    // 0x44001D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_44001E08;
    // 0x44001D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44001D48: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
L_44001D4C:
    // 0x44001D4C: bne         $v0, $at, L_44001D68
    if (ctx->r2 != ctx->r1) {
        // 0x44001D50: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_44001D68;
    }
    // 0x44001D50: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x44001D54: jal         0x440017D8
    // 0x44001D58: nop

    ovl_coll_main_17D8(rdram, ctx);
        goto after_1;
    // 0x44001D58: nop

    after_1:
    // 0x44001D5C: b           L_44001E08
    // 0x44001D60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_44001E08;
    // 0x44001D60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44001D64: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
L_44001D68:
    // 0x44001D68: bne         $v0, $at, L_44001D84
    if (ctx->r2 != ctx->r1) {
        // 0x44001D6C: addiu       $at, $zero, 0x15
        ctx->r1 = ADD32(0, 0X15);
            goto L_44001D84;
    }
    // 0x44001D6C: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x44001D70: jal         0x440018E0
    // 0x44001D74: nop

    ovl_coll_main_18E0(rdram, ctx);
        goto after_2;
    // 0x44001D74: nop

    after_2:
    // 0x44001D78: b           L_44001E08
    // 0x44001D7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_44001E08;
    // 0x44001D7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44001D80: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
L_44001D84:
    // 0x44001D84: bne         $v0, $at, L_44001DA0
    if (ctx->r2 != ctx->r1) {
        // 0x44001D88: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_44001DA0;
    }
    // 0x44001D88: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x44001D8C: jal         0x44001910
    // 0x44001D90: nop

    ovl_coll_main_1910(rdram, ctx);
        goto after_3;
    // 0x44001D90: nop

    after_3:
    // 0x44001D94: b           L_44001E08
    // 0x44001D98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_44001E08;
    // 0x44001D98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44001D9C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_44001DA0:
    // 0x44001DA0: bne         $v0, $at, L_44001DBC
    if (ctx->r2 != ctx->r1) {
        // 0x44001DA4: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_44001DBC;
    }
    // 0x44001DA4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x44001DA8: jal         0x44001968
    // 0x44001DAC: nop

    ovl_coll_main_1968(rdram, ctx);
        goto after_4;
    // 0x44001DAC: nop

    after_4:
    // 0x44001DB0: b           L_44001E08
    // 0x44001DB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_44001E08;
    // 0x44001DB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44001DB8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
L_44001DBC:
    // 0x44001DBC: bne         $v0, $at, L_44001DD8
    if (ctx->r2 != ctx->r1) {
        // 0x44001DC0: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_44001DD8;
    }
    // 0x44001DC0: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x44001DC4: jal         0x440019A4
    // 0x44001DC8: nop

    ovl_coll_main_19A4(rdram, ctx);
        goto after_5;
    // 0x44001DC8: nop

    after_5:
    // 0x44001DCC: b           L_44001E08
    // 0x44001DD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_44001E08;
    // 0x44001DD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44001DD4: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
L_44001DD8:
    // 0x44001DD8: bne         $v0, $at, L_44001DF4
    if (ctx->r2 != ctx->r1) {
        // 0x44001DDC: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_44001DF4;
    }
    // 0x44001DDC: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x44001DE0: jal         0x440019D0
    // 0x44001DE4: nop

    ovl_coll_main_19D0(rdram, ctx);
        goto after_6;
    // 0x44001DE4: nop

    after_6:
    // 0x44001DE8: b           L_44001E08
    // 0x44001DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_44001E08;
    // 0x44001DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44001DF0: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
L_44001DF4:
    // 0x44001DF4: bne         $v0, $at, L_44001E08
    if (ctx->r2 != ctx->r1) {
        // 0x44001DF8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_44001E08;
    }
    // 0x44001DF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44001DFC: jal         0x44001AC8
    // 0x44001E00: nop

    ovl_coll_main_1AC8(rdram, ctx);
        goto after_7;
    // 0x44001E00: nop

    after_7:
    // 0x44001E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44001E08:
    // 0x44001E08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44001E0C: jr          $ra
    // 0x44001E10: nop

    return;
    // 0x44001E10: nop

;}
RECOMP_FUNC void ovl_coll_main_1E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44001E14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44001E18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44001E1C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x44001E20: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x44001E24: beq         $v0, $at, L_44001E34
    if (ctx->r2 == ctx->r1) {
        // 0x44001E28: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_44001E34;
    }
    // 0x44001E28: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x44001E2C: bne         $v0, $at, L_44001E48
    if (ctx->r2 != ctx->r1) {
        // 0x44001E30: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_44001E48;
    }
    // 0x44001E30: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
L_44001E34:
    // 0x44001E34: jal         0x44001D20
    // 0x44001E38: nop

    ovl_coll_main_1D20(rdram, ctx);
        goto after_0;
    // 0x44001E38: nop

    after_0:
    // 0x44001E3C: b           L_44001EAC
    // 0x44001E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_44001EAC;
    // 0x44001E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44001E44: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
L_44001E48:
    // 0x44001E48: beq         $v0, $at, L_44001E54
    if (ctx->r2 == ctx->r1) {
        // 0x44001E4C: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_44001E54;
    }
    // 0x44001E4C: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x44001E50: bne         $v0, $at, L_44001EA8
    if (ctx->r2 != ctx->r1) {
        // 0x44001E54: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_44001EA8;
    }
L_44001E54:
    // 0x44001E54: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x44001E58: bne         $v0, $at, L_44001E7C
    if (ctx->r2 != ctx->r1) {
        // 0x44001E5C: nop
    
            goto L_44001E7C;
    }
    // 0x44001E5C: nop

    // 0x44001E60: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x44001E64: lui         $v0, 0x4400
    ctx->r2 = S32(0X4400 << 16);
    // 0x44001E68: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x44001E6C: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x44001E70: lw          $v0, 0x6BA0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6BA0);
    // 0x44001E74: b           L_44001E98
    // 0x44001E78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_44001E98;
    // 0x44001E78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_44001E7C:
    // 0x44001E7C: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    // 0x44001E80: lui         $v0, 0x4400
    ctx->r2 = S32(0X4400 << 16);
    // 0x44001E84: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x44001E88: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x44001E8C: lw          $v0, 0x6C10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6C10);
    // 0x44001E90: nop

    // 0x44001E94: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_44001E98:
    // 0x44001E98: beq         $v0, $at, L_44001EAC
    if (ctx->r2 == ctx->r1) {
        // 0x44001E9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_44001EAC;
    }
    // 0x44001E9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44001EA0: jalr        $v0
    // 0x44001EA4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x44001EA4: nop

    after_1:
L_44001EA8:
    // 0x44001EA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44001EAC:
    // 0x44001EAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44001EB0: jr          $ra
    // 0x44001EB4: nop

    return;
    // 0x44001EB4: nop

    // 0x44001EB8: nop

    // 0x44001EBC: nop

;}
RECOMP_FUNC void ovl_coll_main_1EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44001EC0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x44001EC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x44001EC8: bne         $v0, $at, L_44001EE0
    if (ctx->r2 != ctx->r1) {
        // 0x44001ECC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_44001EE0;
    }
    // 0x44001ECC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x44001ED0: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x44001ED4: jr          $ra
    // 0x44001ED8: swc1        $f4, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x44001ED8: swc1        $f4, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f4.u32l;
    // 0x44001EDC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_44001EE0:
    // 0x44001EE0: bne         $v0, $at, L_44001F44
    if (ctx->r2 != ctx->r1) {
        // 0x44001EE4: lui         $t8, 0x4401
        ctx->r24 = S32(0X4401 << 16);
            goto L_44001F44;
    }
    // 0x44001EE4: lui         $t8, 0x4401
    ctx->r24 = S32(0X4401 << 16);
    // 0x44001EE8: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x44001EEC: lui         $t0, 0x4401
    ctx->r8 = S32(0X4401 << 16);
    // 0x44001EF0: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x44001EF4: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x44001EF8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x44001EFC: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x44001F00: addiu       $t9, $t6, -0x140
    ctx->r25 = ADD32(ctx->r14, -0X140);
    // 0x44001F04: addiu       $t0, $t0, -0x62B0
    ctx->r8 = ADD32(ctx->r8, -0X62B0);
    // 0x44001F08: addiu       $t7, $t6, -0x140
    ctx->r15 = ADD32(ctx->r14, -0X140);
    // 0x44001F0C: addiu       $t8, $t8, -0x6508
    ctx->r24 = ADD32(ctx->r24, -0X6508);
    // 0x44001F10: addu        $a2, $t9, $t0
    ctx->r6 = ADD32(ctx->r25, ctx->r8);
    // 0x44001F14: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x44001F18: swc1        $f0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f0.u32l;
    // 0x44001F1C: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x44001F20: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x44001F24: nop

    // 0x44001F28: swc1        $f0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f0.u32l;
    // 0x44001F2C: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x44001F30: lwc1        $f0, 0xC($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0XC);
    // 0x44001F34: nop

    // 0x44001F38: swc1        $f0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f0.u32l;
    // 0x44001F3C: jr          $ra
    // 0x44001F40: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    return;
    // 0x44001F40: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
L_44001F44:
    // 0x44001F44: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x44001F48: bne         $v0, $at, L_44001F88
    if (ctx->r2 != ctx->r1) {
        // 0x44001F4C: lui         $t3, 0x4401
        ctx->r11 = S32(0X4401 << 16);
            goto L_44001F88;
    }
    // 0x44001F4C: lui         $t3, 0x4401
    ctx->r11 = S32(0X4401 << 16);
    // 0x44001F50: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x44001F54: lui         $t5, 0x4401
    ctx->r13 = S32(0X4401 << 16);
    // 0x44001F58: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x44001F5C: addu        $t1, $t1, $v1
    ctx->r9 = ADD32(ctx->r9, ctx->r3);
    // 0x44001F60: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x44001F64: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x44001F68: addiu       $t4, $t1, -0x140
    ctx->r12 = ADD32(ctx->r9, -0X140);
    // 0x44001F6C: addiu       $t5, $t5, -0x62B0
    ctx->r13 = ADD32(ctx->r13, -0X62B0);
    // 0x44001F70: addiu       $t2, $t1, -0x140
    ctx->r10 = ADD32(ctx->r9, -0X140);
    // 0x44001F74: addiu       $t3, $t3, -0x6508
    ctx->r11 = ADD32(ctx->r11, -0X6508);
    // 0x44001F78: addu        $a2, $t4, $t5
    ctx->r6 = ADD32(ctx->r12, ctx->r13);
    // 0x44001F7C: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x44001F80: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x44001F84: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
L_44001F88:
    // 0x44001F88: jr          $ra
    // 0x44001F8C: nop

    return;
    // 0x44001F8C: nop

;}
RECOMP_FUNC void ovl_coll_main_1F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44001F90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x44001F94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44001F98: lw          $a2, 0xC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC);
    // 0x44001F9C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x44001FA0: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x44001FA4: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x44001FA8: jal         0x4400126C
    // 0x44001FAC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    ovl_coll_main_126C(rdram, ctx);
        goto after_0;
    // 0x44001FAC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x44001FB0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x44001FB4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x44001FB8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x44001FBC: bne         $v0, $at, L_44001FD0
    if (ctx->r2 != ctx->r1) {
        // 0x44001FC0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_44001FD0;
    }
    // 0x44001FC0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x44001FC4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x44001FC8: b           L_4400202C
    // 0x44001FCC: sw          $t6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r14;
        goto L_4400202C;
    // 0x44001FCC: sw          $t6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r14;
L_44001FD0:
    // 0x44001FD0: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x44001FD4: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x44001FD8: bne         $v1, $at, L_44001FF0
    if (ctx->r3 != ctx->r1) {
        // 0x44001FDC: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_44001FF0;
    }
    // 0x44001FDC: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x44001FE0: lw          $t7, 0x4($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X4);
    // 0x44001FE4: b           L_4400202C
    // 0x44001FE8: sw          $t7, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r15;
        goto L_4400202C;
    // 0x44001FE8: sw          $t7, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r15;
    // 0x44001FEC: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
L_44001FF0:
    // 0x44001FF0: bne         $v1, $at, L_44002010
    if (ctx->r3 != ctx->r1) {
        // 0x44001FF4: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_44002010;
    }
    // 0x44001FF4: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x44001FF8: lw          $a1, 0x4($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X4);
    // 0x44001FFC: jal         0x44001EC0
    // 0x44002000: nop

    ovl_coll_main_1EC0(rdram, ctx);
        goto after_1;
    // 0x44002000: nop

    after_1:
    // 0x44002004: b           L_44002030
    // 0x44002008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_44002030;
    // 0x44002008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4400200C: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
L_44002010:
    // 0x44002010: bne         $v1, $at, L_44002028
    if (ctx->r3 != ctx->r1) {
        // 0x44002014: addiu       $t9, $zero, -0x1
        ctx->r25 = ADD32(0, -0X1);
            goto L_44002028;
    }
    // 0x44002014: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x44002018: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x4400201C: addiu       $t8, $v0, 0x28
    ctx->r24 = ADD32(ctx->r2, 0X28);
    // 0x44002020: b           L_4400202C
    // 0x44002024: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_4400202C;
    // 0x44002024: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_44002028:
    // 0x44002028: sw          $t9, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r25;
L_4400202C:
    // 0x4400202C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44002030:
    // 0x44002030: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x44002034: jr          $ra
    // 0x44002038: nop

    return;
    // 0x44002038: nop

;}
RECOMP_FUNC void ovl_coll_main_203C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400203C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x44002040: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44002044: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x44002048: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x4400204C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x44002050: jal         0x440006C4
    // 0x44002054: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x44002054: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_0:
    // 0x44002058: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x4400205C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x44002060: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x44002064: ori         $t1, $t0, 0x4
    ctx->r9 = ctx->r8 | 0X4;
    // 0x44002068: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x4400206C: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x44002070: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x44002074: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x44002078: ori         $t4, $t2, 0x20
    ctx->r12 = ctx->r10 | 0X20;
    // 0x4400207C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x44002080: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x44002084: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x44002088: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x4400208C: addiu       $t3, $zero, 0xFC
    ctx->r11 = ADD32(0, 0XFC);
    // 0x44002090: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x44002094: ori         $t5, $t9, 0x4
    ctx->r13 = ctx->r25 | 0X4;
    // 0x44002098: ori         $t6, $t4, 0x10
    ctx->r14 = ctx->r12 | 0X10;
    // 0x4400209C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x440020A0: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x440020A4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x440020A8: lw          $a0, 0xC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC);
    // 0x440020AC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x440020B0: jal         0x440006C4
    // 0x440020B4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_1;
    // 0x440020B4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x440020B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x440020BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x440020C0: jr          $ra
    // 0x440020C4: nop

    return;
    // 0x440020C4: nop

;}
RECOMP_FUNC void ovl_coll_main_20C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440020C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x440020CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x440020D0: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x440020D4: jal         0x4400126C
    // 0x440020D8: nop

    ovl_coll_main_126C(rdram, ctx);
        goto after_0;
    // 0x440020D8: nop

    after_0:
    // 0x440020DC: jal         0x44001424
    // 0x440020E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_coll_main_1424(rdram, ctx);
        goto after_1;
    // 0x440020E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x440020E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x440020E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x440020EC: jr          $ra
    // 0x440020F0: nop

    return;
    // 0x440020F0: nop

;}
RECOMP_FUNC void ovl_coll_main_20F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440020F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x440020F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x440020FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x44002100: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x44002104: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x44002108: jal         0x4400126C
    // 0x4400210C: nop

    ovl_coll_main_126C(rdram, ctx);
        goto after_0;
    // 0x4400210C: nop

    after_0:
    // 0x44002110: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x44002114: jal         0x44001910
    // 0x44002118: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    ovl_coll_main_1910(rdram, ctx);
        goto after_1;
    // 0x44002118: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_1:
    // 0x4400211C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x44002120: sw          $t7, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r15;
    // 0x44002124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x44002128: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4400212C: jal         0x440013E8
    // 0x44002130: addiu       $a2, $s0, 0x28
    ctx->r6 = ADD32(ctx->r16, 0X28);
    ovl_coll_main_13E8(rdram, ctx);
        goto after_2;
    // 0x44002130: addiu       $a2, $s0, 0x28
    ctx->r6 = ADD32(ctx->r16, 0X28);
    after_2:
    // 0x44002134: jal         0x4400203C
    // 0x44002138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_203C(rdram, ctx);
        goto after_3;
    // 0x44002138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x4400213C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x44002140: nop

    // 0x44002144: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    // 0x44002148: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4400214C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x44002150: jr          $ra
    // 0x44002154: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x44002154: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_coll_main_2158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44002158: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x4400215C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x44002160: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44002164: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x44002168: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x4400216C: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x44002170: lw          $a3, 0x8($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X8);
    // 0x44002174: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x44002178: bne         $a3, $at, L_440021D0
    if (ctx->r7 != ctx->r1) {
        // 0x4400217C: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_440021D0;
    }
    // 0x4400217C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x44002180: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x44002184: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x44002188: andi        $t8, $v1, 0x8000
    ctx->r24 = ctx->r3 & 0X8000;
    // 0x4400218C: bne         $t8, $zero, L_4400227C
    if (ctx->r24 != 0) {
        // 0x44002190: andi        $v0, $v1, 0x7
        ctx->r2 = ctx->r3 & 0X7;
            goto L_4400227C;
    }
    // 0x44002190: andi        $v0, $v1, 0x7
    ctx->r2 = ctx->r3 & 0X7;
    // 0x44002194: beq         $v0, $at, L_440021A8
    if (ctx->r2 == ctx->r1) {
        // 0x44002198: addiu       $t9, $zero, 0x20
        ctx->r25 = ADD32(0, 0X20);
            goto L_440021A8;
    }
    // 0x44002198: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x4400219C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x440021A0: bne         $v0, $at, L_440021B4
    if (ctx->r2 != ctx->r1) {
        // 0x440021A4: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_440021B4;
    }
    // 0x440021A4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_440021A8:
    // 0x440021A8: b           L_4400227C
    // 0x440021AC: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
        goto L_4400227C;
    // 0x440021AC: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    // 0x440021B0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_440021B4:
    // 0x440021B4: beq         $v0, $at, L_440021C8
    if (ctx->r2 == ctx->r1) {
        // 0x440021B8: addiu       $t1, $zero, 0x40
        ctx->r9 = ADD32(0, 0X40);
            goto L_440021C8;
    }
    // 0x440021B8: addiu       $t1, $zero, 0x40
    ctx->r9 = ADD32(0, 0X40);
    // 0x440021BC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x440021C0: bne         $v0, $at, L_44002280
    if (ctx->r2 != ctx->r1) {
        // 0x440021C4: lw          $t2, 0x48($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X48);
            goto L_44002280;
    }
    // 0x440021C4: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
L_440021C8:
    // 0x440021C8: b           L_4400227C
    // 0x440021CC: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
        goto L_4400227C;
    // 0x440021CC: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
L_440021D0:
    // 0x440021D0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x440021D4: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x440021D8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x440021DC: jal         0x440006C4
    // 0x440021E0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x440021E0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_0:
    // 0x440021E4: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x440021E8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x440021EC: bne         $v0, $zero, L_44002218
    if (ctx->r2 != 0) {
        // 0x440021F0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_44002218;
    }
    // 0x440021F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x440021F4: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x440021F8: ori         $at, $zero, 0x8040
    ctx->r1 = 0 | 0X8040;
    // 0x440021FC: lw          $t3, 0xC($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XC);
    // 0x44002200: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x44002204: slt         $at, $t3, $at
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x44002208: beq         $at, $zero, L_44002280
    if (ctx->r1 == 0) {
        // 0x4400220C: lw          $t2, 0x48($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X48);
            goto L_44002280;
    }
    // 0x4400220C: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x44002210: b           L_4400227C
    // 0x44002214: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
        goto L_4400227C;
    // 0x44002214: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
L_44002218:
    // 0x44002218: bne         $v0, $at, L_44002228
    if (ctx->r2 != ctx->r1) {
        // 0x4400221C: addiu       $t5, $zero, 0x4
        ctx->r13 = ADD32(0, 0X4);
            goto L_44002228;
    }
    // 0x4400221C: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x44002220: b           L_4400227C
    // 0x44002224: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
        goto L_4400227C;
    // 0x44002224: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
L_44002228:
    // 0x44002228: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4400222C: bne         $v0, $at, L_4400223C
    if (ctx->r2 != ctx->r1) {
        // 0x44002230: addiu       $t6, $zero, 0x8
        ctx->r14 = ADD32(0, 0X8);
            goto L_4400223C;
    }
    // 0x44002230: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x44002234: b           L_4400227C
    // 0x44002238: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
        goto L_4400227C;
    // 0x44002238: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
L_4400223C:
    // 0x4400223C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x44002240: bne         $v0, $at, L_44002270
    if (ctx->r2 != ctx->r1) {
        // 0x44002244: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_44002270;
    }
    // 0x44002244: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x44002248: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x4400224C: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x44002250: bne         $t7, $at, L_44002264
    if (ctx->r15 != ctx->r1) {
        // 0x44002254: addiu       $t9, $zero, 0x8
        ctx->r25 = ADD32(0, 0X8);
            goto L_44002264;
    }
    // 0x44002254: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x44002258: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x4400225C: b           L_4400227C
    // 0x44002260: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
        goto L_4400227C;
    // 0x44002260: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
L_44002264:
    // 0x44002264: b           L_4400227C
    // 0x44002268: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
        goto L_4400227C;
    // 0x44002268: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    // 0x4400226C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_44002270:
    // 0x44002270: bne         $v0, $at, L_4400227C
    if (ctx->r2 != ctx->r1) {
        // 0x44002274: addiu       $t1, $zero, 0x10
        ctx->r9 = ADD32(0, 0X10);
            goto L_4400227C;
    }
    // 0x44002274: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x44002278: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
L_4400227C:
    // 0x4400227C: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
L_44002280:
    // 0x44002280: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x44002284: beq         $t2, $at, L_44002314
    if (ctx->r10 == ctx->r1) {
        // 0x44002288: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_44002314;
    }
    // 0x44002288: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x4400228C: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x44002290: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x44002294: lw          $t4, 0xC($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC);
    // 0x44002298: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    // 0x4400229C: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x440022A0: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x440022A4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x440022A8: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x440022AC: lw          $t8, 0x10($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X10);
    // 0x440022B0: nop

    // 0x440022B4: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x440022B8: nop

    // 0x440022BC: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x440022C0: lw          $t9, 0x10($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X10);
    // 0x440022C4: nop

    // 0x440022C8: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x440022CC: nop

    // 0x440022D0: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x440022D4: lw          $t1, 0x10($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X10);
    // 0x440022D8: nop

    // 0x440022DC: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x440022E0: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x440022E4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x440022E8: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x440022EC: lw          $t9, 0x68($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X68);
    // 0x440022F0: nop

    // 0x440022F4: jalr        $t9
    // 0x440022F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x440022F8: nop

    after_1:
    // 0x440022FC: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x44002300: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x44002304: andi        $t4, $t2, 0x1
    ctx->r12 = ctx->r10 & 0X1;
    // 0x44002308: beq         $t4, $zero, L_44002318
    if (ctx->r12 == 0) {
        // 0x4400230C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_44002318;
    }
    // 0x4400230C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44002310: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_44002314:
    // 0x44002314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44002318:
    // 0x44002318: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x4400231C: jr          $ra
    // 0x44002320: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    return;
    // 0x44002320: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
;}
RECOMP_FUNC void ovl_coll_main_2324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44002324: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x44002328: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4400232C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x44002330: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x44002334: nop

    // 0x44002338: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x4400233C: jal         0x4400126C
    // 0x44002340: nop

    ovl_coll_main_126C(rdram, ctx);
        goto after_0;
    // 0x44002340: nop

    after_0:
    // 0x44002344: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x44002348: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x4400234C: lw          $a1, 0xC($t7)
    ctx->r5 = MEM_W(ctx->r15, 0XC);
    // 0x44002350: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x44002354: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x44002358: jal         0x44002158
    // 0x4400235C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_coll_main_2158(rdram, ctx);
        goto after_1;
    // 0x4400235C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x44002360: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x44002364: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x44002368: beq         $v0, $zero, L_44002374
    if (ctx->r2 == 0) {
        // 0x4400236C: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_44002374;
    }
    // 0x4400236C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x44002370: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
L_44002374:
    // 0x44002374: lw          $t9, 0x68($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X68);
    // 0x44002378: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4400237C: beq         $t9, $at, L_440023A4
    if (ctx->r25 == ctx->r1) {
        // 0x44002380: lw          $t2, 0x18($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X18);
            goto L_440023A4;
    }
    // 0x44002380: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x44002384: lw          $t0, 0xC($a1)
    ctx->r8 = MEM_W(ctx->r5, 0XC);
    // 0x44002388: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x4400238C: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x44002390: bne         $t1, $zero, L_440023A4
    if (ctx->r9 != 0) {
        // 0x44002394: lw          $t2, 0x18($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X18);
            goto L_440023A4;
    }
    // 0x44002394: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x44002398: jal         0x44001B2C
    // 0x4400239C: addiu       $a2, $a3, 0x28
    ctx->r6 = ADD32(ctx->r7, 0X28);
    ovl_coll_main_1B2C(rdram, ctx);
        goto after_2;
    // 0x4400239C: addiu       $a2, $a3, 0x28
    ctx->r6 = ADD32(ctx->r7, 0X28);
    after_2:
    // 0x440023A0: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
L_440023A4:
    // 0x440023A4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x440023A8: nop

    // 0x440023AC: sw          $t2, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r10;
    // 0x440023B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x440023B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x440023B8: jr          $ra
    // 0x440023BC: nop

    return;
    // 0x440023BC: nop

;}
RECOMP_FUNC void ovl_coll_main_23C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440023C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x440023C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x440023C8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x440023CC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x440023D0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x440023D4: jal         0x440013E8
    // 0x440023D8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    ovl_coll_main_13E8(rdram, ctx);
        goto after_0;
    // 0x440023D8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_0:
    // 0x440023DC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x440023E0: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x440023E4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x440023E8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x440023EC: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x440023F0: beq         $t8, $zero, L_44002408
    if (ctx->r24 == 0) {
        // 0x440023F4: addiu       $t9, $a3, 0x28
        ctx->r25 = ADD32(ctx->r7, 0X28);
            goto L_44002408;
    }
    // 0x440023F4: addiu       $t9, $a3, 0x28
    ctx->r25 = ADD32(ctx->r7, 0X28);
    // 0x440023F8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x440023FC: lw          $a0, 0xC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XC);
    // 0x44002400: jal         0x440006C4
    // 0x44002404: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_1;
    // 0x44002404: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_1:
L_44002408:
    // 0x44002408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4400240C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x44002410: jr          $ra
    // 0x44002414: nop

    return;
    // 0x44002414: nop

    // 0x44002418: nop

    // 0x4400241C: nop

;}
RECOMP_FUNC void ovl_coll_main_2420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44002420: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x44002424: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44002428: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x4400242C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x44002430: bne         $a2, $zero, L_4400243C
    if (ctx->r6 != 0) {
        // 0x44002434: or          $a3, $a2, $zero
        ctx->r7 = ctx->r6 | 0;
            goto L_4400243C;
    }
    // 0x44002434: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x44002438: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
L_4400243C:
    // 0x4400243C: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x44002440: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x44002444: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    // 0x44002448: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    // 0x4400244C: jal         0x440006C4
    // 0x44002450: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x44002450: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x44002454: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x44002458: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x4400245C: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x44002460: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x44002464: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x44002468: nop

    // 0x4400246C: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x44002470: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x44002474: nop

    // 0x44002478: swc1        $f6, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f6.u32l;
    // 0x4400247C: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x44002480: nop

    // 0x44002484: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    // 0x44002488: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x4400248C: jal         0x440013E8
    // 0x44002490: nop

    ovl_coll_main_13E8(rdram, ctx);
        goto after_1;
    // 0x44002490: nop

    after_1:
    // 0x44002494: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x44002498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4400249C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x440024A0: jr          $ra
    // 0x440024A4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x440024A4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_coll_main_24A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440024A8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x440024AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x440024B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x440024B4: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x440024B8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x440024BC: lw          $a1, 0x24($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X24);
    // 0x440024C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x440024C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x440024C8: beq         $a1, $at, L_44002550
    if (ctx->r5 == ctx->r1) {
        // 0x440024CC: addiu       $v1, $v1, -0x11
        ctx->r3 = ADD32(ctx->r3, -0X11);
            goto L_44002550;
    }
    // 0x440024CC: addiu       $v1, $v1, -0x11
    ctx->r3 = ADD32(ctx->r3, -0X11);
    // 0x440024D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x440024D4: jal         0x44002420
    // 0x440024D8: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    ovl_coll_main_2420(rdram, ctx);
        goto after_0;
    // 0x440024D8: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_0:
    // 0x440024DC: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x440024E0: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x440024E4: beq         $v1, $at, L_440024F8
    if (ctx->r3 == ctx->r1) {
        // 0x440024E8: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_440024F8;
    }
    // 0x440024E8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x440024EC: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x440024F0: bne         $v1, $at, L_44002550
    if (ctx->r3 != ctx->r1) {
        // 0x440024F4: nop
    
            goto L_44002550;
    }
    // 0x440024F4: nop

L_440024F8:
    // 0x440024F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x440024FC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x44002500: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x44002504: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x44002508: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x4400250C: lwc1        $f4, 0x30($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X30);
    // 0x44002510: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x44002514: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x44002518: lwc1        $f17, 0x6C90($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X6C90);
    // 0x4400251C: lwc1        $f16, 0x6C94($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6C94);
    // 0x44002520: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x44002524: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x44002528: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x4400252C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x44002530: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x44002534: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x44002538: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x4400253C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x44002540: jal         0x440013E8
    // 0x44002544: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    ovl_coll_main_13E8(rdram, ctx);
        goto after_1;
    // 0x44002544: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x44002548: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x4400254C: nop

L_44002550:
    // 0x44002550: lw          $t7, 0x28($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X28);
    // 0x44002554: lw          $t9, 0x70($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X70);
    // 0x44002558: ori         $t8, $t7, 0x1000
    ctx->r24 = ctx->r15 | 0X1000;
    // 0x4400255C: sw          $t8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r24;
    // 0x44002560: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x44002564: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x44002568: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x4400256C: bne         $t1, $at, L_44002594
    if (ctx->r9 != ctx->r1) {
        // 0x44002570: sll         $t3, $t8, 13
        ctx->r11 = S32(ctx->r24 << 13);
            goto L_44002594;
    }
    // 0x44002570: sll         $t3, $t8, 13
    ctx->r11 = S32(ctx->r24 << 13);
    // 0x44002574: bgez        $t3, L_44002594
    if (SIGNED(ctx->r11) >= 0) {
        // 0x44002578: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_44002594;
    }
    // 0x44002578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4400257C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x44002580: addiu       $a2, $s0, 0x74
    ctx->r6 = ADD32(ctx->r16, 0X74);
    // 0x44002584: jal         0x440013E8
    // 0x44002588: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    ovl_coll_main_13E8(rdram, ctx);
        goto after_2;
    // 0x44002588: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_2:
    // 0x4400258C: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x44002590: nop

L_44002594:
    // 0x44002594: beq         $v1, $zero, L_440025A0
    if (ctx->r3 == 0) {
        // 0x44002598: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_440025A0;
    }
    // 0x44002598: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x4400259C: bne         $v1, $at, L_440025BC
    if (ctx->r3 != ctx->r1) {
        // 0x440025A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_440025BC;
    }
L_440025A0:
    // 0x440025A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x440025A4: addiu       $a1, $zero, 0x1FB
    ctx->r5 = ADD32(0, 0X1FB);
    // 0x440025A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x440025AC: jal         0x44000F50
    // 0x440025B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_coll_main_F50(rdram, ctx);
        goto after_3;
    // 0x440025B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x440025B4: b           L_44002640
    // 0x440025B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_44002640;
    // 0x440025B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_440025BC:
    // 0x440025BC: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x440025C0: beq         $v1, $at, L_440025D0
    if (ctx->r3 == ctx->r1) {
        // 0x440025C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_440025D0;
    }
    // 0x440025C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x440025C8: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x440025CC: bne         $v1, $at, L_440025E8
    if (ctx->r3 != ctx->r1) {
        // 0x440025D0: addiu       $a1, $zero, 0x264
        ctx->r5 = ADD32(0, 0X264);
            goto L_440025E8;
    }
L_440025D0:
    // 0x440025D0: addiu       $a1, $zero, 0x264
    ctx->r5 = ADD32(0, 0X264);
    // 0x440025D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x440025D8: jal         0x44000F50
    // 0x440025DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_coll_main_F50(rdram, ctx);
        goto after_4;
    // 0x440025DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x440025E0: b           L_44002640
    // 0x440025E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_44002640;
    // 0x440025E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_440025E8:
    // 0x440025E8: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x440025EC: beq         $v1, $at, L_440025FC
    if (ctx->r3 == ctx->r1) {
        // 0x440025F0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_440025FC;
    }
    // 0x440025F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x440025F4: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x440025F8: bne         $v1, $at, L_44002624
    if (ctx->r3 != ctx->r1) {
        // 0x440025FC: addiu       $a1, $zero, 0x36
        ctx->r5 = ADD32(0, 0X36);
            goto L_44002624;
    }
L_440025FC:
    // 0x440025FC: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x44002600: jal         0x44000CA0
    // 0x44002604: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_coll_main_CA0(rdram, ctx);
        goto after_5;
    // 0x44002604: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x44002608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4400260C: addiu       $a1, $zero, 0x27E
    ctx->r5 = ADD32(0, 0X27E);
    // 0x44002610: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x44002614: jal         0x44000F50
    // 0x44002618: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_coll_main_F50(rdram, ctx);
        goto after_6;
    // 0x44002618: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x4400261C: b           L_44002640
    // 0x44002620: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_44002640;
    // 0x44002620: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_44002624:
    // 0x44002624: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x44002628: bne         $v1, $at, L_4400263C
    if (ctx->r3 != ctx->r1) {
        // 0x4400262C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_4400263C;
    }
    // 0x4400262C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x44002630: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x44002634: jal         0x44000CA0
    // 0x44002638: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_coll_main_CA0(rdram, ctx);
        goto after_7;
    // 0x44002638: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
L_4400263C:
    // 0x4400263C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_44002640:
    // 0x44002640: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x44002644: jr          $ra
    // 0x44002648: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x44002648: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_coll_main_264C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400264C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x44002650: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x44002654: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x44002658: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4400265C: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x44002660: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x44002664: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x44002668: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x4400266C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x44002670: jal         0x440006C4
    // 0x44002674: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x44002674: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x44002678: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x4400267C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x44002680: jal         0x440006C4
    // 0x44002684: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_1;
    // 0x44002684: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_1:
    // 0x44002688: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x4400268C: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x44002690: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x44002694: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x44002698: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x4400269C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x440026A0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x440026A4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x440026A8: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x440026AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x440026B0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x440026B4: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x440026B8: jal         0x440013E8
    // 0x440026BC: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    ovl_coll_main_13E8(rdram, ctx);
        goto after_2;
    // 0x440026BC: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x440026C0: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x440026C4: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x440026C8: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x440026CC: swc1        $f6, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f6.u32l;
    // 0x440026D0: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x440026D4: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x440026D8: addiu       $v0, $v0, -0x11
    ctx->r2 = ADD32(ctx->r2, -0X11);
    // 0x440026DC: bne         $v0, $at, L_440026F0
    if (ctx->r2 != ctx->r1) {
        // 0x440026E0: lui         $at, 0x428C
        ctx->r1 = S32(0X428C << 16);
            goto L_440026F0;
    }
    // 0x440026E0: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x440026E4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x440026E8: b           L_44002718
    // 0x440026EC: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
        goto L_44002718;
    // 0x440026EC: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
L_440026F0:
    // 0x440026F0: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x440026F4: bne         $v0, $at, L_44002708
    if (ctx->r2 != ctx->r1) {
        // 0x440026F8: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_44002708;
    }
    // 0x440026F8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x440026FC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x44002700: b           L_44002718
    // 0x44002704: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
        goto L_44002718;
    // 0x44002704: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
L_44002708:
    // 0x44002708: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x4400270C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x44002710: nop

    // 0x44002714: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
L_44002718:
    // 0x44002718: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x4400271C: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x44002720: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x44002724: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x44002728: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x4400272C: swc1        $f6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f6.u32l;
    // 0x44002730: lw          $t8, 0x70($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X70);
    // 0x44002734: nop

    // 0x44002738: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x4400273C: nop

    // 0x44002740: swc1        $f8, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f8.u32l;
    // 0x44002744: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x44002748: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4400274C: jr          $ra
    // 0x44002750: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x44002750: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_coll_main_2754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44002754: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x44002758: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4400275C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x44002760: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x44002764: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x44002768: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x4400276C: bgtz        $t7, L_440029A8
    if (SIGNED(ctx->r15) > 0) {
        // 0x44002770: sw          $t7, 0xA0($a0)
        MEM_W(0XA0, ctx->r4) = ctx->r15;
            goto L_440029A8;
    }
    // 0x44002770: sw          $t7, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r15;
    // 0x44002774: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x44002778: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x4400277C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x44002780: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x44002784: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x44002788: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4400278C: sw          $t9, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r25;
    // 0x44002790: lw          $a1, 0x9C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X9C);
    // 0x44002794: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x44002798: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    // 0x4400279C: jal         0x4400264C
    // 0x440027A0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_coll_main_264C(rdram, ctx);
        goto after_0;
    // 0x440027A0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x440027A4: lw          $t0, 0x24($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X24);
    // 0x440027A8: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x440027AC: bne         $t0, $at, L_44002924
    if (ctx->r8 != ctx->r1) {
        // 0x440027B0: nop
    
            goto L_44002924;
    }
    // 0x440027B0: nop

    // 0x440027B4: lw          $t1, 0x6C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X6C);
    // 0x440027B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x440027BC: bne         $t1, $at, L_440027E8
    if (ctx->r9 != ctx->r1) {
        // 0x440027C0: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_440027E8;
    }
    // 0x440027C0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x440027C4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x440027C8: jal         0x440006C4
    // 0x440027CC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_1;
    // 0x440027CC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_1:
    // 0x440027D0: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x440027D4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x440027D8: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x440027DC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x440027E0: jal         0x440006C4
    // 0x440027E4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_2;
    // 0x440027E4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_2:
L_440027E8:
    // 0x440027E8: lwc1        $f12, 0x30($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X30);
    // 0x440027EC: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x440027F0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x440027F4: sub.s       $f14, $f8, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x440027F8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x440027FC: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x44002800: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x44002804: bc1f        L_44002814
    if (!c1cs) {
        // 0x44002808: mov.s       $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
            goto L_44002814;
    }
    // 0x44002808: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    // 0x4400280C: b           L_44002818
    // 0x44002810: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_44002818;
    // 0x44002810: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_44002814:
    // 0x44002814: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_44002818:
    // 0x44002818: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x4400281C: nop

    // 0x44002820: bc1f        L_44002880
    if (!c1cs) {
        // 0x44002824: nop
    
            goto L_44002880;
    }
    // 0x44002824: nop

    // 0x44002828: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4400282C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x44002830: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x44002834: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x44002838: bc1f        L_44002860
    if (!c1cs) {
        // 0x4400283C: nop
    
            goto L_44002860;
    }
    // 0x4400283C: nop

    // 0x44002840: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x44002844: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x44002848: nop

    // 0x4400284C: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x44002850: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x44002854: lwc1        $f12, 0x30($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X30);
    // 0x44002858: b           L_44002880
    // 0x4400285C: sub.s       $f14, $f8, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f12.fl;
        goto L_44002880;
    // 0x4400285C: sub.s       $f14, $f8, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f12.fl;
L_44002860:
    // 0x44002860: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x44002864: nop

    // 0x44002868: add.s       $f10, $f12, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f16.fl;
    // 0x4400286C: swc1        $f10, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f10.u32l;
    // 0x44002870: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x44002874: lwc1        $f12, 0x30($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X30);
    // 0x44002878: nop

    // 0x4400287C: sub.s       $f14, $f18, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f12.fl;
L_44002880:
    // 0x44002880: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x44002884: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x44002888: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x4400288C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x44002890: bc1f        L_440028A0
    if (!c1cs) {
        // 0x44002894: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_440028A0;
    }
    // 0x44002894: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x44002898: b           L_440028A4
    // 0x4400289C: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_440028A4;
    // 0x4400289C: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
L_440028A0:
    // 0x440028A0: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_440028A4:
    // 0x440028A4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x440028A8: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x440028AC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x440028B0: nop

    // 0x440028B4: bc1f        L_44002924
    if (!c1cs) {
        // 0x440028B8: nop
    
            goto L_44002924;
    }
    // 0x440028B8: nop

    // 0x440028BC: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x440028C0: nop

    // 0x440028C4: bc1f        L_440028FC
    if (!c1cs) {
        // 0x440028C8: nop
    
            goto L_440028FC;
    }
    // 0x440028C8: nop

    // 0x440028CC: sub.s       $f8, $f12, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x440028D0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x440028D4: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x440028D8: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x440028DC: nop

    // 0x440028E0: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x440028E4: nop

    // 0x440028E8: bc1f        L_44002924
    if (!c1cs) {
        // 0x440028EC: nop
    
            goto L_44002924;
    }
    // 0x440028EC: nop

    // 0x440028F0: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x440028F4: b           L_44002924
    // 0x440028F8: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
        goto L_44002924;
    // 0x440028F8: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
L_440028FC:
    // 0x440028FC: add.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x44002900: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x44002904: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x44002908: nop

    // 0x4400290C: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x44002910: nop

    // 0x44002914: bc1f        L_44002924
    if (!c1cs) {
        // 0x44002918: nop
    
            goto L_44002924;
    }
    // 0x44002918: nop

    // 0x4400291C: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x44002920: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
L_44002924:
    // 0x44002924: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x44002928: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4400292C: swc1        $f10, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f10.u32l;
    // 0x44002930: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x44002934: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x44002938: swc1        $f4, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f4.u32l;
    // 0x4400293C: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x44002940: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    // 0x44002944: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x44002948: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4400294C: bc1f        L_44002960
    if (!c1cs) {
        // 0x44002950: nop
    
            goto L_44002960;
    }
    // 0x44002950: nop

    // 0x44002954: mov.s       $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = ctx->f6.fl;
    // 0x44002958: b           L_44002964
    // 0x4400295C: neg.s       $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = -ctx->f6.fl;
        goto L_44002964;
    // 0x4400295C: neg.s       $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = -ctx->f6.fl;
L_44002960:
    // 0x44002960: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_44002964:
    // 0x44002964: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x44002968: nop

    // 0x4400296C: bc1f        L_4400299C
    if (!c1cs) {
        // 0x44002970: nop
    
            goto L_4400299C;
    }
    // 0x44002970: nop

    // 0x44002974: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x44002978: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x4400297C: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x44002980: nop

    // 0x44002984: bc1f        L_44002998
    if (!c1cs) {
        // 0x44002988: nop
    
            goto L_44002998;
    }
    // 0x44002988: nop

    // 0x4400298C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x44002990: b           L_4400299C
    // 0x44002994: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
        goto L_4400299C;
    // 0x44002994: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
L_44002998:
    // 0x44002998: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
L_4400299C:
    // 0x4400299C: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x440029A0: nop

    // 0x440029A4: swc1        $f10, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f10.u32l;
L_440029A8:
    // 0x440029A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x440029AC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x440029B0: jr          $ra
    // 0x440029B4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x440029B4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_coll_main_29B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440029B8: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x440029BC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x440029C0: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x440029C4: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x440029C8: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x440029CC: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x440029D0: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x440029D4: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x440029D8: jal         0x440006C4
    // 0x440029DC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x440029DC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x440029E0: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x440029E4: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x440029E8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x440029EC: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    // 0x440029F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x440029F4: jal         0x44000F34
    // 0x440029F8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_coll_main_F34(rdram, ctx);
        goto after_1;
    // 0x440029F8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x440029FC: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x44002A00: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x44002A04: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x44002A08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x44002A0C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x44002A10: jal         0x44000F34
    // 0x44002A14: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    ovl_coll_main_F34(rdram, ctx);
        goto after_2;
    // 0x44002A14: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_2:
    // 0x44002A18: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x44002A1C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x44002A20: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x44002A24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x44002A28: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x44002A2C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x44002A30: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x44002A34: addiu       $t9, $zero, 0x1B
    ctx->r25 = ADD32(0, 0X1B);
    // 0x44002A38: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x44002A3C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x44002A40: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x44002A44: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x44002A48: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x44002A4C: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x44002A50: swc1        $f11, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x44002A54: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x44002A58: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x44002A5C: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x44002A60: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x44002A64: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x44002A68: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x44002A6C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x44002A70: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x44002A74: jal         0x44000F34
    // 0x44002A78: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    ovl_coll_main_F34(rdram, ctx);
        goto after_3;
    // 0x44002A78: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    after_3:
    // 0x44002A7C: lwc1        $f0, 0x90($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X90);
    // 0x44002A80: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x44002A84: lwc1        $f18, 0x8C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x44002A88: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x44002A8C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x44002A90: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x44002A94: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x44002A98: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x44002A9C: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x44002AA0: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    // 0x44002AA4: addiu       $t3, $sp, 0x5C
    ctx->r11 = ADD32(ctx->r29, 0X5C);
    // 0x44002AA8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x44002AAC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x44002AB0: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x44002AB4: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x44002AB8: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x44002ABC: jal         0x44000F34
    // 0x44002AC0: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    ovl_coll_main_F34(rdram, ctx);
        goto after_4;
    // 0x44002AC0: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    after_4:
    // 0x44002AC4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x44002AC8: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x44002ACC: jr          $ra
    // 0x44002AD0: nop

    return;
    // 0x44002AD0: nop

;}
RECOMP_FUNC void ovl_coll_main_2AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44002AD4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x44002AD8: subu        $v0, $a2, $a3
    ctx->r2 = SUB32(ctx->r6, ctx->r7);
    // 0x44002ADC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x44002AE0: bltz        $v0, L_44002BC4
    if (SIGNED(ctx->r2) < 0) {
        // 0x44002AE4: sw          $a1, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r5;
            goto L_44002BC4;
    }
    // 0x44002AE4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x44002AE8: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x44002AEC: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x44002AF0: mfhi        $t6
    ctx->r14 = hi;
    // 0x44002AF4: bne         $t6, $zero, L_44002BC8
    if (ctx->r14 != 0) {
        // 0x44002AF8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_44002BC8;
    }
    // 0x44002AF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x44002AFC: bne         $v0, $zero, L_44002B20
    if (ctx->r2 != 0) {
        // 0x44002B00: addiu       $a2, $zero, 0x216
        ctx->r6 = ADD32(0, 0X216);
            goto L_44002B20;
    }
    // 0x44002B00: addiu       $a2, $zero, 0x216
    ctx->r6 = ADD32(0, 0X216);
    // 0x44002B04: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x44002B08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x44002B0C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x44002B10: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x44002B14: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x44002B18: jal         0x440029B8
    // 0x44002B1C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_coll_main_29B8(rdram, ctx);
        goto after_0;
    // 0x44002B1C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
L_44002B20:
    // 0x44002B20: jal         0x44000340
    // 0x44002B24: nop

    ovl_coll_main_340(rdram, ctx);
        goto after_1;
    // 0x44002B24: nop

    after_1:
    // 0x44002B28: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x44002B2C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x44002B30: cvt.s.d     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f6.fl = CVT_S_D(ctx->f0.d);
    // 0x44002B34: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x44002B38: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x44002B3C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x44002B40: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x44002B44: lwc1        $f7, 0x6C98($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X6C98);
    // 0x44002B48: sub.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x44002B4C: lwc1        $f6, 0x6C9C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6C9C);
    // 0x44002B50: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x44002B54: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x44002B58: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x44002B5C: nop

    // 0x44002B60: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x44002B64: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x44002B68: jal         0x44000340
    // 0x44002B6C: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    ovl_coll_main_340(rdram, ctx);
        goto after_2;
    // 0x44002B6C: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x44002B70: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x44002B74: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x44002B78: cvt.s.d     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f18.fl = CVT_S_D(ctx->f0.d);
    // 0x44002B7C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x44002B80: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x44002B84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x44002B88: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x44002B8C: lwc1        $f19, 0x6CA0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X6CA0);
    // 0x44002B90: sub.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x44002B94: lwc1        $f18, 0x6CA4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6CA4);
    // 0x44002B98: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x44002B9C: mul.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x44002BA0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x44002BA4: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x44002BA8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x44002BAC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x44002BB0: cvt.s.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f8.fl = CVT_S_D(ctx->f4.d);
    // 0x44002BB4: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x44002BB8: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x44002BBC: jal         0x44000F34
    // 0x44002BC0: nop

    ovl_coll_main_F34(rdram, ctx);
        goto after_3;
    // 0x44002BC0: nop

    after_3:
L_44002BC4:
    // 0x44002BC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_44002BC8:
    // 0x44002BC8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x44002BCC: jr          $ra
    // 0x44002BD0: nop

    return;
    // 0x44002BD0: nop

;}
RECOMP_FUNC void ovl_coll_main_2BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44002BD4: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x44002BD8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x44002BDC: sw          $s7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r23;
    // 0x44002BE0: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    // 0x44002BE4: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x44002BE8: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x44002BEC: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x44002BF0: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x44002BF4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x44002BF8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x44002BFC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x44002C00: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x44002C04: lw          $t6, 0x6C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X6C);
    // 0x44002C08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x44002C0C: bne         $t6, $at, L_44002CF0
    if (ctx->r14 != ctx->r1) {
        // 0x44002C10: or          $s3, $a0, $zero
        ctx->r19 = ctx->r4 | 0;
            goto L_44002CF0;
    }
    // 0x44002C10: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x44002C14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x44002C18: addiu       $a1, $zero, 0x43
    ctx->r5 = ADD32(0, 0X43);
    // 0x44002C1C: jal         0x44000CA0
    // 0x44002C20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_coll_main_CA0(rdram, ctx);
        goto after_0;
    // 0x44002C20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x44002C24: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x44002C28: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x44002C2C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x44002C30: addiu       $s2, $s3, 0x24
    ctx->r18 = ADD32(ctx->r19, 0X24);
    // 0x44002C34: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x44002C38: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x44002C3C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x44002C40: addiu       $a1, $s2, 0x50
    ctx->r5 = ADD32(ctx->r18, 0X50);
    // 0x44002C44: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x44002C48: addiu       $a2, $zero, 0x1E1
    ctx->r6 = ADD32(0, 0X1E1);
    // 0x44002C4C: jal         0x440029B8
    // 0x44002C50: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_coll_main_29B8(rdram, ctx);
        goto after_1;
    // 0x44002C50: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x44002C54: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x44002C58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x44002C5C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x44002C60: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x44002C64: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x44002C68: addiu       $a1, $s2, 0x54
    ctx->r5 = ADD32(ctx->r18, 0X54);
    // 0x44002C6C: addiu       $a2, $zero, 0x1E2
    ctx->r6 = ADD32(0, 0X1E2);
    // 0x44002C70: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x44002C74: jal         0x440029B8
    // 0x44002C78: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_coll_main_29B8(rdram, ctx);
        goto after_2;
    // 0x44002C78: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x44002C7C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x44002C80: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x44002C84: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x44002C88: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x44002C8C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x44002C90: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x44002C94: addiu       $a1, $s2, 0x58
    ctx->r5 = ADD32(ctx->r18, 0X58);
    // 0x44002C98: addiu       $a2, $zero, 0x20E
    ctx->r6 = ADD32(0, 0X20E);
    // 0x44002C9C: jal         0x440029B8
    // 0x44002CA0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_coll_main_29B8(rdram, ctx);
        goto after_3;
    // 0x44002CA0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x44002CA4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x44002CA8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x44002CAC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x44002CB0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x44002CB4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x44002CB8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x44002CBC: addiu       $a1, $s2, 0x5C
    ctx->r5 = ADD32(ctx->r18, 0X5C);
    // 0x44002CC0: addiu       $a2, $zero, 0x1E3
    ctx->r6 = ADD32(0, 0X1E3);
    // 0x44002CC4: jal         0x440029B8
    // 0x44002CC8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    ovl_coll_main_29B8(rdram, ctx);
        goto after_4;
    // 0x44002CC8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x44002CCC: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x44002CD0: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x44002CD4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x44002CD8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x44002CDC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x44002CE0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x44002CE4: lui         $at, 0x4401
    ctx->r1 = S32(0X4401 << 16);
    // 0x44002CE8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x44002CEC: swc1        $f16, -0x63F0($at)
    MEM_W(-0X63F0, ctx->r1) = ctx->f16.u32l;
L_44002CF0:
    // 0x44002CF0: lui         $s0, 0x4400
    ctx->r16 = S32(0X4400 << 16);
    // 0x44002CF4: lui         $s1, 0x4400
    ctx->r17 = S32(0X4400 << 16);
    // 0x44002CF8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x44002CFC: addiu       $s1, $s1, 0x638C
    ctx->r17 = ADD32(ctx->r17, 0X638C);
    // 0x44002D00: addiu       $s0, $s0, 0x6380
    ctx->r16 = ADD32(ctx->r16, 0X6380);
    // 0x44002D04: addiu       $s2, $s3, 0x24
    ctx->r18 = ADD32(ctx->r19, 0X24);
L_44002D08:
    // 0x44002D08: lbu         $t3, 0x0($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X0);
    // 0x44002D0C: lw          $a2, 0x48($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X48);
    // 0x44002D10: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x44002D14: addu        $a1, $s2, $t4
    ctx->r5 = ADD32(ctx->r18, ctx->r12);
    // 0x44002D18: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x44002D1C: addiu       $a1, $a1, 0x50
    ctx->r5 = ADD32(ctx->r5, 0X50);
    // 0x44002D20: jal         0x44002AD4
    // 0x44002D24: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_coll_main_2AD4(rdram, ctx);
        goto after_5;
    // 0x44002D24: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_5:
    // 0x44002D28: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x44002D2C: bne         $s0, $s1, L_44002D08
    if (ctx->r16 != ctx->r17) {
        // 0x44002D30: nop
    
            goto L_44002D08;
    }
    // 0x44002D30: nop

    // 0x44002D34: lw          $t5, 0x48($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X48);
    // 0x44002D38: addiu       $s5, $sp, 0x64
    ctx->r21 = ADD32(ctx->r29, 0X64);
    // 0x44002D3C: blez        $t5, L_44002E0C
    if (SIGNED(ctx->r13) <= 0) {
        // 0x44002D40: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_44002E0C;
    }
    // 0x44002D40: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x44002D44: lw          $a0, 0xC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XC);
    // 0x44002D48: jal         0x440006C4
    // 0x44002D4C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    ovl_coll_main_6C4(rdram, ctx);
        goto after_6;
    // 0x44002D4C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_6:
    // 0x44002D50: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x44002D54: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x44002D58: addiu       $s7, $zero, 0x28
    ctx->r23 = ADD32(0, 0X28);
    // 0x44002D5C: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x44002D60: addiu       $s4, $sp, 0x80
    ctx->r20 = ADD32(ctx->r29, 0X80);
L_44002D64:
    // 0x44002D64: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x44002D68: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x44002D6C: beq         $s6, $a1, L_44002E00
    if (ctx->r22 == ctx->r5) {
        // 0x44002D70: or          $a2, $s5, $zero
        ctx->r6 = ctx->r21 | 0;
            goto L_44002E00;
    }
    // 0x44002D70: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x44002D74: jal         0x44000F34
    // 0x44002D78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_coll_main_F34(rdram, ctx);
        goto after_7;
    // 0x44002D78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x44002D7C: lw          $t7, 0x70($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X70);
    // 0x44002D80: lw          $t6, 0x48($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X48);
    // 0x44002D84: lw          $t8, 0x14($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X14);
    // 0x44002D88: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x44002D8C: addiu       $t9, $t8, -0xA
    ctx->r25 = ADD32(ctx->r24, -0XA);
    // 0x44002D90: slt         $at, $t9, $t6
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x44002D94: beq         $at, $zero, L_44002E00
    if (ctx->r1 == 0) {
        // 0x44002D98: or          $a2, $s4, $zero
        ctx->r6 = ctx->r20 | 0;
            goto L_44002E00;
    }
    // 0x44002D98: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x44002D9C: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x44002DA0: jal         0x44000F34
    // 0x44002DA4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_coll_main_F34(rdram, ctx);
        goto after_8;
    // 0x44002DA4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x44002DA8: lw          $t0, 0x70($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X70);
    // 0x44002DAC: lw          $v1, 0x48($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X48);
    // 0x44002DB0: lw          $v0, 0x14($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X14);
    // 0x44002DB4: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x44002DB8: bne         $v0, $v1, L_44002DC8
    if (ctx->r2 != ctx->r3) {
        // 0x44002DBC: subu        $t1, $v0, $v1
        ctx->r9 = SUB32(ctx->r2, ctx->r3);
            goto L_44002DC8;
    }
    // 0x44002DBC: subu        $t1, $v0, $v1
    ctx->r9 = SUB32(ctx->r2, ctx->r3);
    // 0x44002DC0: b           L_44002DE4
    // 0x44002DC4: swc1        $f20, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f20.u32l;
        goto L_44002DE4;
    // 0x44002DC4: swc1        $f20, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f20.u32l;
L_44002DC8:
    // 0x44002DC8: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x44002DCC: lwc1        $f18, 0x80($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X80);
    // 0x44002DD0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x44002DD4: nop

    // 0x44002DD8: div.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x44002DDC: sub.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x44002DE0: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
L_44002DE4:
    // 0x44002DE4: lwc1        $f16, 0x80($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X80);
    // 0x44002DE8: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x44002DEC: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    // 0x44002DF0: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
    // 0x44002DF4: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x44002DF8: jal         0x44000F34
    // 0x44002DFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_coll_main_F34(rdram, ctx);
        goto after_9;
    // 0x44002DFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
L_44002E00:
    // 0x44002E00: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x44002E04: bne         $s1, $s7, L_44002D64
    if (ctx->r17 != ctx->r23) {
        // 0x44002E08: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_44002D64;
    }
    // 0x44002E08: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_44002E0C:
    // 0x44002E0C: addiu       $s4, $sp, 0x80
    ctx->r20 = ADD32(ctx->r29, 0X80);
    // 0x44002E10: lw          $a1, 0x50($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X50);
    // 0x44002E14: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x44002E18: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x44002E1C: jal         0x44000F34
    // 0x44002E20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_coll_main_F34(rdram, ctx);
        goto after_10;
    // 0x44002E20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x44002E24: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x44002E28: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x44002E2C: lwc1        $f19, 0x6CA8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X6CA8);
    // 0x44002E30: lwc1        $f18, 0x6CAC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6CAC);
    // 0x44002E34: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x44002E38: sub.d       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f6.d - ctx->f18.d;
    // 0x44002E3C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x44002E40: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x44002E44: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x44002E48: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    // 0x44002E4C: lw          $a1, 0x50($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X50);
    // 0x44002E50: jal         0x44000F34
    // 0x44002E54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_coll_main_F34(rdram, ctx);
        goto after_11;
    // 0x44002E54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x44002E58: lw          $t3, 0x70($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X70);
    // 0x44002E5C: lw          $t2, 0x48($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X48);
    // 0x44002E60: lw          $t4, 0x14($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X14);
    // 0x44002E64: nop

    // 0x44002E68: addiu       $t5, $t4, -0xA
    ctx->r13 = ADD32(ctx->r12, -0XA);
    // 0x44002E6C: slt         $at, $t2, $t5
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x44002E70: beq         $at, $zero, L_44002EC4
    if (ctx->r1 == 0) {
        // 0x44002E74: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_44002EC4;
    }
    // 0x44002E74: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x44002E78: jal         0x44000340
    // 0x44002E7C: nop

    ovl_coll_main_340(rdram, ctx);
        goto after_12;
    // 0x44002E7C: nop

    after_12:
    // 0x44002E80: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x44002E84: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x44002E88: cvt.s.d     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f16.fl = CVT_S_D(ctx->f0.d);
    // 0x44002E8C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x44002E90: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x44002E94: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x44002E98: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x44002E9C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x44002EA0: add.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x44002EA4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x44002EA8: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x44002EAC: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x44002EB0: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x44002EB4: lw          $a1, 0x54($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X54);
    // 0x44002EB8: jal         0x44000F34
    // 0x44002EBC: nop

    ovl_coll_main_F34(rdram, ctx);
        goto after_13;
    // 0x44002EBC: nop

    after_13:
    // 0x44002EC0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_44002EC4:
    // 0x44002EC4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x44002EC8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x44002ECC: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x44002ED0: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x44002ED4: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x44002ED8: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x44002EDC: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x44002EE0: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x44002EE4: lw          $s6, 0x3C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X3C);
    // 0x44002EE8: lw          $s7, 0x40($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X40);
    // 0x44002EEC: jr          $ra
    // 0x44002EF0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x44002EF0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void ovl_coll_main_2EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44002EF4: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x44002EF8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x44002EFC: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x44002F00: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x44002F04: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x44002F08: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x44002F0C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x44002F10: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x44002F14: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x44002F18: lw          $s5, 0x6C($a0)
    ctx->r21 = MEM_W(ctx->r4, 0X6C);
    // 0x44002F1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x44002F20: bne         $s5, $at, L_44002FB4
    if (ctx->r21 != ctx->r1) {
        // 0x44002F24: or          $s4, $a0, $zero
        ctx->r20 = ctx->r4 | 0;
            goto L_44002FB4;
    }
    // 0x44002F24: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x44002F28: lui         $s0, 0x4400
    ctx->r16 = S32(0X4400 << 16);
    // 0x44002F2C: lui         $s1, 0x4400
    ctx->r17 = S32(0X4400 << 16);
    // 0x44002F30: addiu       $s1, $s1, 0x63DC
    ctx->r17 = ADD32(ctx->r17, 0X63DC);
    // 0x44002F34: addiu       $s0, $s0, 0x638C
    ctx->r16 = ADD32(ctx->r16, 0X638C);
    // 0x44002F38: addiu       $s6, $a0, 0x24
    ctx->r22 = ADD32(ctx->r4, 0X24);
L_44002F3C:
    // 0x44002F3C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x44002F40: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x44002F44: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x44002F48: addu        $a1, $s6, $t7
    ctx->r5 = ADD32(ctx->r22, ctx->r15);
    // 0x44002F4C: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x44002F50: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x44002F54: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x44002F58: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x44002F5C: addiu       $a1, $a1, 0x50
    ctx->r5 = ADD32(ctx->r5, 0X50);
    // 0x44002F60: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x44002F64: jal         0x440029B8
    // 0x44002F68: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_coll_main_29B8(rdram, ctx);
        goto after_0;
    // 0x44002F68: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x44002F6C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x44002F70: bne         $s0, $s1, L_44002F3C
    if (ctx->r16 != ctx->r17) {
        // 0x44002F74: nop
    
            goto L_44002F3C;
    }
    // 0x44002F74: nop

    // 0x44002F78: lw          $a2, 0x5C($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X5C);
    // 0x44002F7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x44002F80: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x44002F84: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    // 0x44002F88: jal         0x44000F34
    // 0x44002F8C: addiu       $a3, $zero, 0x20C
    ctx->r7 = ADD32(0, 0X20C);
    ovl_coll_main_F34(rdram, ctx);
        goto after_1;
    // 0x44002F8C: addiu       $a3, $zero, 0x20C
    ctx->r7 = ADD32(0, 0X20C);
    after_1:
    // 0x44002F90: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x44002F94: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x44002F98: multu       $t9, $v0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x44002F9C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x44002FA0: lui         $at, 0x4401
    ctx->r1 = S32(0X4401 << 16);
    // 0x44002FA4: mflo        $t0
    ctx->r8 = lo;
    // 0x44002FA8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x44002FAC: b           L_44003078
    // 0x44002FB0: swc1        $f6, -0x63F0($at)
    MEM_W(-0X63F0, ctx->r1) = ctx->f6.u32l;
        goto L_44003078;
    // 0x44002FB0: swc1        $f6, -0x63F0($at)
    MEM_W(-0X63F0, ctx->r1) = ctx->f6.u32l;
L_44002FB4:
    // 0x44002FB4: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x44002FB8: bne         $s5, $at, L_4400300C
    if (ctx->r21 != ctx->r1) {
        // 0x44002FBC: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_4400300C;
    }
    // 0x44002FBC: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x44002FC0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x44002FC4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x44002FC8: addiu       $s6, $s4, 0x24
    ctx->r22 = ADD32(ctx->r20, 0X24);
    // 0x44002FCC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x44002FD0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x44002FD4: addiu       $a1, $s6, 0x60
    ctx->r5 = ADD32(ctx->r22, 0X60);
    // 0x44002FD8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x44002FDC: addiu       $a2, $zero, 0x214
    ctx->r6 = ADD32(0, 0X214);
    // 0x44002FE0: lui         $a3, 0x4396
    ctx->r7 = S32(0X4396 << 16);
    // 0x44002FE4: jal         0x440029B8
    // 0x44002FE8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_coll_main_29B8(rdram, ctx);
        goto after_2;
    // 0x44002FE8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x44002FEC: lw          $a1, 0x60($s6)
    ctx->r5 = MEM_W(ctx->r22, 0X60);
    // 0x44002FF0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x44002FF4: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x44002FF8: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    // 0x44002FFC: jal         0x44000F34
    // 0x44003000: addiu       $a3, $zero, 0x215
    ctx->r7 = ADD32(0, 0X215);
    ovl_coll_main_F34(rdram, ctx);
        goto after_3;
    // 0x44003000: addiu       $a3, $zero, 0x215
    ctx->r7 = ADD32(0, 0X215);
    after_3:
    // 0x44003004: b           L_44003078
    // 0x44003008: nop

        goto L_44003078;
    // 0x44003008: nop

L_4400300C:
    // 0x4400300C: beq         $s5, $v0, L_44003024
    if (ctx->r21 == ctx->r2) {
        // 0x44003010: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_44003024;
    }
    // 0x44003010: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x44003014: beq         $s5, $at, L_44003024
    if (ctx->r21 == ctx->r1) {
        // 0x44003018: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_44003024;
    }
    // 0x44003018: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x4400301C: bne         $s5, $at, L_44003078
    if (ctx->r21 != ctx->r1) {
        // 0x44003020: nop
    
            goto L_44003078;
    }
    // 0x44003020: nop

L_44003024:
    // 0x44003024: bne         $s5, $v0, L_44003034
    if (ctx->r21 != ctx->r2) {
        // 0x44003028: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_44003034;
    }
    // 0x44003028: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x4400302C: b           L_44003048
    // 0x44003030: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_44003048;
    // 0x44003030: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_44003034:
    // 0x44003034: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x44003038: bne         $s5, $at, L_44003048
    if (ctx->r21 != ctx->r1) {
        // 0x4400303C: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_44003048;
    }
    // 0x4400303C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x44003040: b           L_44003048
    // 0x44003044: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_44003048;
    // 0x44003044: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_44003048:
    // 0x44003048: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4400304C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x44003050: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x44003054: addu        $a1, $s4, $t2
    ctx->r5 = ADD32(ctx->r20, ctx->r10);
    // 0x44003058: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x4400305C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x44003060: addiu       $a1, $a1, 0x74
    ctx->r5 = ADD32(ctx->r5, 0X74);
    // 0x44003064: addiu       $a2, $zero, 0x208
    ctx->r6 = ADD32(0, 0X208);
    // 0x44003068: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x4400306C: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x44003070: jal         0x440029B8
    // 0x44003074: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    ovl_coll_main_29B8(rdram, ctx);
        goto after_4;
    // 0x44003074: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_4:
L_44003078:
    // 0x44003078: blez        $s5, L_4400314C
    if (SIGNED(ctx->r21) <= 0) {
        // 0x4400307C: addiu       $s6, $s4, 0x24
        ctx->r22 = ADD32(ctx->r20, 0X24);
            goto L_4400314C;
    }
    // 0x4400307C: addiu       $s6, $s4, 0x24
    ctx->r22 = ADD32(ctx->r20, 0X24);
    // 0x44003080: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x44003084: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x44003088: jal         0x440006C4
    // 0x4400308C: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_5;
    // 0x4400308C: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_5:
    // 0x44003090: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x44003094: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
    // 0x44003098: addiu       $s3, $sp, 0x78
    ctx->r19 = ADD32(ctx->r29, 0X78);
L_4400309C:
    // 0x4400309C: lw          $s0, 0x50($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X50);
    // 0x440030A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x440030A4: beq         $s0, $at, L_4400313C
    if (ctx->r16 == ctx->r1) {
        // 0x440030A8: addiu       $a0, $zero, 0x11
        ctx->r4 = ADD32(0, 0X11);
            goto L_4400313C;
    }
    // 0x440030A8: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x440030AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x440030B0: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x440030B4: jal         0x44000F34
    // 0x440030B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_coll_main_F34(rdram, ctx);
        goto after_6;
    // 0x440030B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x440030BC: lw          $t4, 0x70($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X70);
    // 0x440030C0: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x440030C4: lw          $t5, 0x14($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X14);
    // 0x440030C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x440030CC: addiu       $t6, $t5, -0x1E
    ctx->r14 = ADD32(ctx->r13, -0X1E);
    // 0x440030D0: slt         $at, $t6, $s5
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x440030D4: beq         $at, $zero, L_4400313C
    if (ctx->r1 == 0) {
        // 0x440030D8: or          $a2, $s3, $zero
        ctx->r6 = ctx->r19 | 0;
            goto L_4400313C;
    }
    // 0x440030D8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x440030DC: jal         0x44000F34
    // 0x440030E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_coll_main_F34(rdram, ctx);
        goto after_7;
    // 0x440030E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x440030E4: lw          $t7, 0x70($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X70);
    // 0x440030E8: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x440030EC: lw          $v0, 0x14($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X14);
    // 0x440030F0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x440030F4: bne         $s5, $v0, L_44003108
    if (ctx->r21 != ctx->r2) {
        // 0x440030F8: or          $a2, $s3, $zero
        ctx->r6 = ctx->r19 | 0;
            goto L_44003108;
    }
    // 0x440030F8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x440030FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x44003100: b           L_44003128
    // 0x44003104: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
        goto L_44003128;
    // 0x44003104: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
L_44003108:
    // 0x44003108: subu        $t8, $v0, $s5
    ctx->r24 = SUB32(ctx->r2, ctx->r21);
    // 0x4400310C: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x44003110: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x44003114: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x44003118: nop

    // 0x4400311C: div.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f16.fl, ctx->f4.fl);
    // 0x44003120: sub.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x44003124: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
L_44003128:
    // 0x44003128: lwc1        $f0, 0x78($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X78);
    // 0x4400312C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x44003130: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x44003134: jal         0x44000F34
    // 0x44003138: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    ovl_coll_main_F34(rdram, ctx);
        goto after_8;
    // 0x44003138: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    after_8:
L_4400313C:
    // 0x4400313C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x44003140: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x44003144: bne         $s1, $at, L_4400309C
    if (ctx->r17 != ctx->r1) {
        // 0x44003148: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_4400309C;
    }
    // 0x44003148: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_4400314C:
    // 0x4400314C: lw          $t0, 0x70($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X70);
    // 0x44003150: addiu       $t9, $s5, 0x1E
    ctx->r25 = ADD32(ctx->r21, 0X1E);
    // 0x44003154: lw          $t1, 0x14($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X14);
    // 0x44003158: addiu       $s3, $sp, 0x78
    ctx->r19 = ADD32(ctx->r29, 0X78);
    // 0x4400315C: bne         $t9, $t1, L_4400318C
    if (ctx->r25 != ctx->r9) {
        // 0x44003160: addiu       $s1, $zero, 0x10
        ctx->r17 = ADD32(0, 0X10);
            goto L_4400318C;
    }
    // 0x44003160: addiu       $s1, $zero, 0x10
    ctx->r17 = ADD32(0, 0X10);
    // 0x44003164: addiu       $s2, $s6, 0x10
    ctx->r18 = ADD32(ctx->r22, 0X10);
    // 0x44003168: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_4400316C:
    // 0x4400316C: lw          $a1, 0x50($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X50);
    // 0x44003170: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x44003174: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x44003178: jal         0x44000F34
    // 0x4400317C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_coll_main_F34(rdram, ctx);
        goto after_9;
    // 0x4400317C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x44003180: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x44003184: bne         $s1, $s0, L_4400316C
    if (ctx->r17 != ctx->r16) {
        // 0x44003188: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_4400316C;
    }
    // 0x44003188: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_4400318C:
    // 0x4400318C: lw          $a1, 0x50($s6)
    ctx->r5 = MEM_W(ctx->r22, 0X50);
    // 0x44003190: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x44003194: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x44003198: jal         0x44000F34
    // 0x4400319C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_coll_main_F34(rdram, ctx);
        goto after_10;
    // 0x4400319C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x440031A0: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x440031A4: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x440031A8: lwc1        $f5, 0x6CB0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X6CB0);
    // 0x440031AC: lwc1        $f4, 0x6CB4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6CB4);
    // 0x440031B0: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x440031B4: sub.d       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = ctx->f18.d - ctx->f4.d;
    // 0x440031B8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x440031BC: cvt.s.d     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f6.fl = CVT_S_D(ctx->f16.d);
    // 0x440031C0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x440031C4: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x440031C8: lw          $a1, 0x50($s6)
    ctx->r5 = MEM_W(ctx->r22, 0X50);
    // 0x440031CC: jal         0x44000F34
    // 0x440031D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_coll_main_F34(rdram, ctx);
        goto after_11;
    // 0x440031D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x440031D4: lw          $t2, 0x70($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X70);
    // 0x440031D8: nop

    // 0x440031DC: lw          $t3, 0x14($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X14);
    // 0x440031E0: nop

    // 0x440031E4: addiu       $t4, $t3, -0x1E
    ctx->r12 = ADD32(ctx->r11, -0X1E);
    // 0x440031E8: slt         $at, $s5, $t4
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x440031EC: beq         $at, $zero, L_44003240
    if (ctx->r1 == 0) {
        // 0x440031F0: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_44003240;
    }
    // 0x440031F0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x440031F4: jal         0x44000340
    // 0x440031F8: nop

    ovl_coll_main_340(rdram, ctx);
        goto after_12;
    // 0x440031F8: nop

    after_12:
    // 0x440031FC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x44003200: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x44003204: cvt.s.d     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f8.fl = CVT_S_D(ctx->f0.d);
    // 0x44003208: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x4400320C: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x44003210: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x44003214: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x44003218: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x4400321C: add.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x44003220: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x44003224: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
    // 0x44003228: swc1        $f16, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f16.u32l;
    // 0x4400322C: swc1        $f16, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f16.u32l;
    // 0x44003230: lw          $a1, 0x54($s6)
    ctx->r5 = MEM_W(ctx->r22, 0X54);
    // 0x44003234: jal         0x44000F34
    // 0x44003238: nop

    ovl_coll_main_F34(rdram, ctx);
        goto after_13;
    // 0x44003238: nop

    after_13:
    // 0x4400323C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_44003240:
    // 0x44003240: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x44003244: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x44003248: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x4400324C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x44003250: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x44003254: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x44003258: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x4400325C: jr          $ra
    // 0x44003260: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x44003260: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void ovl_coll_main_3264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44003264: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x44003268: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4400326C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x44003270: lw          $t6, 0x6C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X6C);
    // 0x44003274: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x44003278: bne         $t6, $at, L_440032DC
    if (ctx->r14 != ctx->r1) {
        // 0x4400327C: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_440032DC;
    }
    // 0x4400327C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x44003280: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x44003284: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x44003288: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x4400328C: jal         0x44000DE4
    // 0x44003290: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    ovl_coll_main_DE4(rdram, ctx);
        goto after_0;
    // 0x44003290: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x44003294: lui         $at, 0x4188
    ctx->r1 = S32(0X4188 << 16);
    // 0x44003298: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4400329C: sw          $v0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r2;
    // 0x440032A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x440032A4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x440032A8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x440032AC: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x440032B0: jal         0x4400264C
    // 0x440032B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_coll_main_264C(rdram, ctx);
        goto after_1;
    // 0x440032B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x440032B8: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x440032BC: nop

    // 0x440032C0: swc1        $f6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f6.u32l;
    // 0x440032C4: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x440032C8: nop

    // 0x440032CC: swc1        $f8, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f8.u32l;
    // 0x440032D0: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x440032D4: nop

    // 0x440032D8: swc1        $f10, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f10.u32l;
L_440032DC:
    // 0x440032DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x440032E0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x440032E4: jr          $ra
    // 0x440032E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x440032E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_coll_main_32EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440032EC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x440032F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x440032F4: lw          $t6, 0x6C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X6C);
    // 0x440032F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x440032FC: bne         $t6, $at, L_44003358
    if (ctx->r14 != ctx->r1) {
        // 0x44003300: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_44003358;
    }
    // 0x44003300: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x44003304: addiu       $t7, $zero, 0x203
    ctx->r15 = ADD32(0, 0X203);
    // 0x44003308: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x4400330C: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x44003310: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x44003314: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x44003318: jal         0x440006C4
    // 0x4400331C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4400331C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x44003320: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x44003324: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x44003328: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4400332C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x44003330: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x44003334: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x44003338: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x4400333C: lw          $a0, 0xC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XC);
    // 0x44003340: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x44003344: jal         0x440006C4
    // 0x44003348: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_1;
    // 0x44003348: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x4400334C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x44003350: jal         0x44003264
    // 0x44003354: nop

    ovl_coll_main_3264(rdram, ctx);
        goto after_2;
    // 0x44003354: nop

    after_2:
L_44003358:
    // 0x44003358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4400335C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x44003360: jr          $ra
    // 0x44003364: nop

    return;
    // 0x44003364: nop

;}
RECOMP_FUNC void ovl_coll_main_3368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44003368: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4400336C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44003370: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x44003374: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x44003378: addiu       $v0, $v0, -0x11
    ctx->r2 = ADD32(ctx->r2, -0X11);
    // 0x4400337C: beq         $v0, $at, L_4400338C
    if (ctx->r2 == ctx->r1) {
        // 0x44003380: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_4400338C;
    }
    // 0x44003380: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x44003384: bne         $v0, $at, L_440033A0
    if (ctx->r2 != ctx->r1) {
        // 0x44003388: addiu       $at, $zero, 0x25
        ctx->r1 = ADD32(0, 0X25);
            goto L_440033A0;
    }
    // 0x44003388: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
L_4400338C:
    // 0x4400338C: jal         0x44002BD4
    // 0x44003390: nop

    ovl_coll_main_2BD4(rdram, ctx);
        goto after_0;
    // 0x44003390: nop

    after_0:
    // 0x44003394: b           L_440033EC
    // 0x44003398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_440033EC;
    // 0x44003398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4400339C: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
L_440033A0:
    // 0x440033A0: bne         $v0, $at, L_440033BC
    if (ctx->r2 != ctx->r1) {
        // 0x440033A4: addiu       $at, $zero, 0x2B
        ctx->r1 = ADD32(0, 0X2B);
            goto L_440033BC;
    }
    // 0x440033A4: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x440033A8: jal         0x44002EF4
    // 0x440033AC: nop

    ovl_coll_main_2EF4(rdram, ctx);
        goto after_1;
    // 0x440033AC: nop

    after_1:
    // 0x440033B0: b           L_440033EC
    // 0x440033B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_440033EC;
    // 0x440033B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x440033B8: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
L_440033BC:
    // 0x440033BC: bne         $v0, $at, L_440033D8
    if (ctx->r2 != ctx->r1) {
        // 0x440033C0: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_440033D8;
    }
    // 0x440033C0: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x440033C4: jal         0x440032EC
    // 0x440033C8: nop

    ovl_coll_main_32EC(rdram, ctx);
        goto after_2;
    // 0x440033C8: nop

    after_2:
    // 0x440033CC: b           L_440033EC
    // 0x440033D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_440033EC;
    // 0x440033D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x440033D4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
L_440033D8:
    // 0x440033D8: bne         $v0, $at, L_440033EC
    if (ctx->r2 != ctx->r1) {
        // 0x440033DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_440033EC;
    }
    // 0x440033DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x440033E0: jal         0x44003264
    // 0x440033E4: nop

    ovl_coll_main_3264(rdram, ctx);
        goto after_3;
    // 0x440033E4: nop

    after_3:
    // 0x440033E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_440033EC:
    // 0x440033EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x440033F0: jr          $ra
    // 0x440033F4: nop

    return;
    // 0x440033F4: nop

;}
RECOMP_FUNC void ovl_coll_main_33F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440033F8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x440033FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x44003400: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x44003404: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x44003408: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x4400340C: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x44003410: ori         $at, $at, 0x1000
    ctx->r1 = ctx->r1 | 0X1000;
    // 0x44003414: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x44003418: beq         $t7, $zero, L_44003434
    if (ctx->r15 == 0) {
        // 0x4400341C: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_44003434;
    }
    // 0x4400341C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x44003420: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x44003424: jal         0x440013E8
    // 0x44003428: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    ovl_coll_main_13E8(rdram, ctx);
        goto after_0;
    // 0x44003428: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_0:
    // 0x4400342C: b           L_44003528
    // 0x44003430: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_44003528;
    // 0x44003430: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_44003434:
    // 0x44003434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x44003438: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x4400343C: jal         0x440013E8
    // 0x44003440: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    ovl_coll_main_13E8(rdram, ctx);
        goto after_1;
    // 0x44003440: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_1:
    // 0x44003444: lw          $t8, 0x6C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X6C);
    // 0x44003448: nop

    // 0x4400344C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x44003450: sw          $t9, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r25;
    // 0x44003454: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x44003458: nop

    // 0x4400345C: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x44003460: nop

    // 0x44003464: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x44003468: beq         $t2, $zero, L_44003528
    if (ctx->r10 == 0) {
        // 0x4400346C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_44003528;
    }
    // 0x4400346C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x44003470: lw          $t3, 0x28($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X28);
    // 0x44003474: nop

    // 0x44003478: andi        $t4, $t3, 0x4000
    ctx->r12 = ctx->r11 & 0X4000;
    // 0x4400347C: beq         $t4, $zero, L_4400348C
    if (ctx->r12 == 0) {
        // 0x44003480: nop
    
            goto L_4400348C;
    }
    // 0x44003480: nop

    // 0x44003484: jal         0x44002754
    // 0x44003488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_2754(rdram, ctx);
        goto after_2;
    // 0x44003488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_4400348C:
    // 0x4400348C: lw          $t5, 0x70($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X70);
    // 0x44003490: nop

    // 0x44003494: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x44003498: nop

    // 0x4400349C: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x440034A0: beq         $t7, $zero, L_440034B0
    if (ctx->r15 == 0) {
        // 0x440034A4: nop
    
            goto L_440034B0;
    }
    // 0x440034A4: nop

    // 0x440034A8: jal         0x44003368
    // 0x440034AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_3368(rdram, ctx);
        goto after_3;
    // 0x440034AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_440034B0:
    // 0x440034B0: lw          $t8, 0x28($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X28);
    // 0x440034B4: addiu       $t1, $s0, 0x2C
    ctx->r9 = ADD32(ctx->r16, 0X2C);
    // 0x440034B8: sll         $t9, $t8, 11
    ctx->r25 = S32(ctx->r24 << 11);
    // 0x440034BC: bgez        $t9, L_440034DC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x440034C0: addiu       $a1, $zero, 0x8
        ctx->r5 = ADD32(0, 0X8);
            goto L_440034DC;
    }
    // 0x440034C0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x440034C4: lw          $t0, 0x70($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X70);
    // 0x440034C8: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x440034CC: lwc1        $f6, 0xC($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0XC);
    // 0x440034D0: nop

    // 0x440034D4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x440034D8: swc1        $f8, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f8.u32l;
L_440034DC:
    // 0x440034DC: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x440034E0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x440034E4: jal         0x440006C4
    // 0x440034E8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_4;
    // 0x440034E8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_4:
    // 0x440034EC: lw          $t2, 0x28($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X28);
    // 0x440034F0: nop

    // 0x440034F4: andi        $t3, $t2, 0x800
    ctx->r11 = ctx->r10 & 0X800;
    // 0x440034F8: beq         $t3, $zero, L_44003528
    if (ctx->r11 == 0) {
        // 0x440034FC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_44003528;
    }
    // 0x440034FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x44003500: lw          $t5, 0x70($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X70);
    // 0x44003504: lw          $t4, 0x6C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X6C);
    // 0x44003508: lw          $t6, 0x14($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X14);
    // 0x4400350C: nop

    // 0x44003510: slt         $at, $t4, $t6
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x44003514: bne         $at, $zero, L_44003528
    if (ctx->r1 != 0) {
        // 0x44003518: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_44003528;
    }
    // 0x44003518: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4400351C: jal         0x440024A8
    // 0x44003520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_24A8(rdram, ctx);
        goto after_5;
    // 0x44003520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x44003524: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_44003528:
    // 0x44003528: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4400352C: jr          $ra
    // 0x44003530: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x44003530: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_coll_main_3534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44003534: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x44003538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4400353C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x44003540: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x44003544: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x44003548: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x4400354C: jal         0x440006C4
    // 0x44003550: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x44003550: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_0:
    // 0x44003554: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x44003558: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x4400355C: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x44003560: ori         $t0, $t9, 0x4
    ctx->r8 = ctx->r25 | 0X4;
    // 0x44003564: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x44003568: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x4400356C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x44003570: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x44003574: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x44003578: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x4400357C: addiu       $t2, $zero, 0xFC
    ctx->r10 = ADD32(0, 0XFC);
    // 0x44003580: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x44003584: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x44003588: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x4400358C: lw          $t3, 0x70($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X70);
    // 0x44003590: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x44003594: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x44003598: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x4400359C: andi        $t5, $t4, 0x200
    ctx->r13 = ctx->r12 & 0X200;
    // 0x440035A0: beq         $t5, $zero, L_440035B8
    if (ctx->r13 == 0) {
        // 0x440035A4: ori         $t8, $t7, 0x20
        ctx->r24 = ctx->r15 | 0X20;
            goto L_440035B8;
    }
    // 0x440035A4: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x440035A8: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x440035AC: and         $t6, $t1, $at
    ctx->r14 = ctx->r9 & ctx->r1;
    // 0x440035B0: b           L_440035BC
    // 0x440035B4: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
        goto L_440035BC;
    // 0x440035B4: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
L_440035B8:
    // 0x440035B8: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
L_440035BC:
    // 0x440035BC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x440035C0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x440035C4: ori         $t0, $t9, 0x10
    ctx->r8 = ctx->r25 | 0X10;
    // 0x440035C8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x440035CC: lw          $t2, 0x70($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X70);
    // 0x440035D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x440035D4: lw          $v0, 0x0($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X0);
    // 0x440035D8: ori         $t5, $t4, 0x4
    ctx->r13 = ctx->r12 | 0X4;
    // 0x440035DC: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x440035E0: beq         $t3, $at, L_440035F0
    if (ctx->r11 == ctx->r1) {
        // 0x440035E4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_440035F0;
    }
    // 0x440035E4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x440035E8: bne         $t3, $at, L_440035F4
    if (ctx->r11 != ctx->r1) {
        // 0x440035EC: nop
    
            goto L_440035F4;
    }
    // 0x440035EC: nop

L_440035F0:
    // 0x440035F0: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
L_440035F4:
    // 0x440035F4: lw          $a0, 0xC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XC);
    // 0x440035F8: jal         0x440006C4
    // 0x440035FC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_1;
    // 0x440035FC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x44003600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44003604: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x44003608: jr          $ra
    // 0x4400360C: nop

    return;
    // 0x4400360C: nop

;}
RECOMP_FUNC void ovl_coll_main_3610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44003610: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x44003614: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x44003618: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4400361C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x44003620: jal         0x44001918
    // 0x44003624: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    ovl_coll_main_1918(rdram, ctx);
        goto after_0;
    // 0x44003624: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x44003628: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x4400362C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x44003630: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x44003634: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x44003638: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x4400363C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x44003640: jal         0x440015D4
    // 0x44003644: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_coll_main_15D4(rdram, ctx);
        goto after_1;
    // 0x44003644: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x44003648: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4400364C: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x44003650: jal         0x440013E8
    // 0x44003654: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_coll_main_13E8(rdram, ctx);
        goto after_2;
    // 0x44003654: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x44003658: lwc1        $f0, 0xE0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XE0);
    // 0x4400365C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x44003660: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x44003664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x44003668: jal         0x44003680
    // 0x4400366C: swc1        $f6, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f6.u32l;
    ovl_coll_main_3680(rdram, ctx);
        goto after_3;
    // 0x4400366C: swc1        $f6, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f6.u32l;
    after_3:
    // 0x44003670: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x44003674: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x44003678: jr          $ra
    // 0x4400367C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x4400367C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_coll_main_3680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44003680: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x44003684: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44003688: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x4400368C: lw          $t6, 0xAC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XAC);
    // 0x44003690: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x44003694: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x44003698: lw          $t7, 0xAC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XAC);
    // 0x4400369C: addiu       $t8, $sp, 0x1C
    ctx->r24 = ADD32(ctx->r29, 0X1C);
    // 0x440036A0: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x440036A4: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x440036A8: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x440036AC: lwc1        $f6, 0xE0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x440036B0: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x440036B4: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x440036B8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x440036BC: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x440036C0: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x440036C4: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x440036C8: jal         0x440013E8
    // 0x440036CC: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    ovl_coll_main_13E8(rdram, ctx);
        goto after_0;
    // 0x440036CC: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x440036D0: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x440036D4: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x440036D8: nop

    // 0x440036DC: swc1        $f10, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f10.u32l;
    // 0x440036E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x440036E4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x440036E8: jr          $ra
    // 0x440036EC: nop

    return;
    // 0x440036EC: nop

;}
RECOMP_FUNC void ovl_coll_main_36F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440036F0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x440036F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x440036F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x440036FC: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x44003700: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x44003704: jal         0x4400126C
    // 0x44003708: nop

    ovl_coll_main_126C(rdram, ctx);
        goto after_0;
    // 0x44003708: nop

    after_0:
    // 0x4400370C: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x44003710: jal         0x44001910
    // 0x44003714: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    ovl_coll_main_1910(rdram, ctx);
        goto after_1;
    // 0x44003714: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_1:
    // 0x44003718: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4400371C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x44003720: jal         0x440013E8
    // 0x44003724: addiu       $a2, $s0, 0x2C
    ctx->r6 = ADD32(ctx->r16, 0X2C);
    ovl_coll_main_13E8(rdram, ctx);
        goto after_2;
    // 0x44003724: addiu       $a2, $s0, 0x2C
    ctx->r6 = ADD32(ctx->r16, 0X2C);
    after_2:
    // 0x44003728: jal         0x44003534
    // 0x4400372C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_3534(rdram, ctx);
        goto after_3;
    // 0x4400372C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x44003730: lw          $v0, 0x70($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X70);
    // 0x44003734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x44003738: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x4400373C: nop

    // 0x44003740: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    // 0x44003744: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x44003748: nop

    // 0x4400374C: swc1        $f6, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f6.u32l;
    // 0x44003750: lw          $t7, 0x18($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X18);
    // 0x44003754: sw          $zero, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = 0;
    // 0x44003758: sll         $t9, $t7, 11
    ctx->r25 = S32(ctx->r15 << 11);
    // 0x4400375C: bgez        $t9, L_44003774
    if (SIGNED(ctx->r25) >= 0) {
        // 0x44003760: sw          $t7, 0x28($s0)
        MEM_W(0X28, ctx->r16) = ctx->r15;
            goto L_44003774;
    }
    // 0x44003760: sw          $t7, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r15;
    // 0x44003764: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x44003768: lw          $v0, 0x70($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X70);
    // 0x4400376C: b           L_44003780
    // 0x44003770: swc1        $f8, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f8.u32l;
        goto L_44003780;
    // 0x44003770: swc1        $f8, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f8.u32l;
L_44003774:
    // 0x44003774: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x44003778: nop

    // 0x4400377C: swc1        $f10, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f10.u32l;
L_44003780:
    // 0x44003780: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x44003784: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x44003788: andi        $t0, $v1, 0xFF
    ctx->r8 = ctx->r3 & 0XFF;
    // 0x4400378C: bne         $t0, $at, L_44003834
    if (ctx->r8 != ctx->r1) {
        // 0x44003790: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_44003834;
    }
    // 0x44003790: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x44003794: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x44003798: jal         0x44002420
    // 0x4400379C: addiu       $a2, $s0, 0x74
    ctx->r6 = ADD32(ctx->r16, 0X74);
    ovl_coll_main_2420(rdram, ctx);
        goto after_4;
    // 0x4400379C: addiu       $a2, $s0, 0x74
    ctx->r6 = ADD32(ctx->r16, 0X74);
    after_4:
    // 0x440037A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x440037A4: bne         $v0, $at, L_440037C0
    if (ctx->r2 != ctx->r1) {
        // 0x440037A8: nop
    
            goto L_440037C0;
    }
    // 0x440037A8: nop

    // 0x440037AC: lw          $t1, 0x28($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X28);
    // 0x440037B0: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x440037B4: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x440037B8: b           L_44003A50
    // 0x440037BC: sw          $t2, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r10;
        goto L_44003A50;
    // 0x440037BC: sw          $t2, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r10;
L_440037C0:
    // 0x440037C0: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x440037C4: lui         $a0, 0x8
    ctx->r4 = S32(0X8 << 16);
    // 0x440037C8: sll         $t3, $v1, 12
    ctx->r11 = S32(ctx->r3 << 12);
    // 0x440037CC: bltz        $t3, L_440037DC
    if (SIGNED(ctx->r11) < 0) {
        // 0x440037D0: sll         $t4, $v1, 11
        ctx->r12 = S32(ctx->r3 << 11);
            goto L_440037DC;
    }
    // 0x440037D0: sll         $t4, $v1, 11
    ctx->r12 = S32(ctx->r3 << 11);
    // 0x440037D4: bgez        $t4, L_44003828
    if (SIGNED(ctx->r12) >= 0) {
        // 0x440037D8: nop
    
            goto L_44003828;
    }
    // 0x440037D8: nop

L_440037DC:
    // 0x440037DC: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x440037E0: lw          $t5, 0x28($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X28);
    // 0x440037E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x440037E8: and         $t6, $t5, $a0
    ctx->r14 = ctx->r13 & ctx->r4;
    // 0x440037EC: beq         $t6, $zero, L_44003804
    if (ctx->r14 == 0) {
        // 0x440037F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_44003804;
    }
    // 0x440037F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x440037F4: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x440037F8: lwc1        $f16, 0x6CB8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6CB8);
    // 0x440037FC: b           L_44003814
    // 0x44003800: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
        goto L_44003814;
    // 0x44003800: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
L_44003804:
    // 0x44003804: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x44003808: lwc1        $f18, 0x6CBC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6CBC);
    // 0x4400380C: nop

    // 0x44003810: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
L_44003814:
    // 0x44003814: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x44003818: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x4400381C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x44003820: jal         0x440013E8
    // 0x44003824: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    ovl_coll_main_13E8(rdram, ctx);
        goto after_5;
    // 0x44003824: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_5:
L_44003828:
    // 0x44003828: lw          $v0, 0x70($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X70);
    // 0x4400382C: b           L_4400387C
    // 0x44003830: lw          $a1, 0x20($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X20);
        goto L_4400387C;
    // 0x44003830: lw          $a1, 0x20($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X20);
L_44003834:
    // 0x44003834: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x44003838: bne         $v1, $at, L_44003878
    if (ctx->r3 != ctx->r1) {
        // 0x4400383C: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_44003878;
    }
    // 0x4400383C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x44003840: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x44003844: sw          $v1, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r3;
    // 0x44003848: sw          $v1, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r3;
    // 0x4400384C: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x44003850: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
L_44003854:
    // 0x44003854: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x44003858: sw          $v1, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r3;
    // 0x4400385C: sw          $v1, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r3;
    // 0x44003860: sw          $v1, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r3;
    // 0x44003864: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x44003868: bne         $a0, $a3, L_44003854
    if (ctx->r4 != ctx->r7) {
        // 0x4400386C: sw          $v1, 0x64($v0)
        MEM_W(0X64, ctx->r2) = ctx->r3;
            goto L_44003854;
    }
    // 0x4400386C: sw          $v1, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r3;
    // 0x44003870: lw          $v0, 0x70($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X70);
    // 0x44003874: nop

L_44003878:
    // 0x44003878: lw          $a1, 0x20($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X20);
L_4400387C:
    // 0x4400387C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x44003880: beq         $a1, $at, L_44003898
    if (ctx->r5 == ctx->r1) {
        // 0x44003884: addiu       $a3, $zero, 0xA
        ctx->r7 = ADD32(0, 0XA);
            goto L_44003898;
    }
    // 0x44003884: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x44003888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4400388C: jal         0x44002420
    // 0x44003890: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_coll_main_2420(rdram, ctx);
        goto after_6;
    // 0x44003890: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x44003894: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
L_44003898:
    // 0x44003898: lw          $t7, 0x28($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X28);
    // 0x4400389C: nop

    // 0x440038A0: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x440038A4: beq         $t8, $zero, L_440038D8
    if (ctx->r24 == 0) {
        // 0x440038A8: nop
    
            goto L_440038D8;
    }
    // 0x440038A8: nop

    // 0x440038AC: jal         0x44000DE4
    // 0x440038B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_coll_main_DE4(rdram, ctx);
        goto after_7;
    // 0x440038B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x440038B4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x440038B8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x440038BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x440038C0: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x440038C4: sw          $v0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r2;
    // 0x440038C8: sw          $zero, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = 0;
    // 0x440038CC: swc1        $f2, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f2.u32l;
    // 0x440038D0: b           L_440038F4
    // 0x440038D4: swc1        $f4, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f4.u32l;
        goto L_440038F4;
    // 0x440038D4: swc1        $f4, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f4.u32l;
L_440038D8:
    // 0x440038D8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x440038DC: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x440038E0: swc1        $f6, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f6.u32l;
    // 0x440038E4: lwc1        $f8, 0x6CC0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6CC0);
    // 0x440038E8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x440038EC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x440038F0: swc1        $f8, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f8.u32l;
L_440038F4:
    // 0x440038F4: lw          $t9, 0x70($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X70);
    // 0x440038F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x440038FC: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x44003900: nop

    // 0x44003904: andi        $t1, $t0, 0x100
    ctx->r9 = ctx->r8 & 0X100;
    // 0x44003908: beq         $t1, $zero, L_4400393C
    if (ctx->r9 == 0) {
        // 0x4400390C: nop
    
            goto L_4400393C;
    }
    // 0x4400390C: nop

    // 0x44003910: jal         0x4400157C
    // 0x44003914: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    ovl_coll_main_157C(rdram, ctx);
        goto after_8;
    // 0x44003914: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_8:
    // 0x44003918: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x4400391C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x44003920: swc1        $f10, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->f10.u32l;
    // 0x44003924: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x44003928: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x4400392C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x44003930: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x44003934: swc1        $f18, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f18.u32l;
    // 0x44003938: swc1        $f16, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f16.u32l;
L_4400393C:
    // 0x4400393C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x44003940: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x44003944: addiu       $v0, $v0, -0x11
    ctx->r2 = ADD32(ctx->r2, -0X11);
    // 0x44003948: beq         $v0, $a3, L_4400395C
    if (ctx->r2 == ctx->r7) {
        // 0x4400394C: addiu       $v1, $v1, -0x10
        ctx->r3 = ADD32(ctx->r3, -0X10);
            goto L_4400395C;
    }
    // 0x4400394C: addiu       $v1, $v1, -0x10
    ctx->r3 = ADD32(ctx->r3, -0X10);
    // 0x44003950: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x44003954: bne         $v0, $at, L_44003988
    if (ctx->r2 != ctx->r1) {
        // 0x44003958: addiu       $at, $zero, 0x2A
        ctx->r1 = ADD32(0, 0X2A);
            goto L_44003988;
    }
    // 0x44003958: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
L_4400395C:
    // 0x4400395C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x44003960: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x44003964: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x44003968: lui         $at, 0x4401
    ctx->r1 = S32(0X4401 << 16);
    // 0x4400396C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x44003970: swc1        $f2, -0x62B0($at)
    MEM_W(-0X62B0, ctx->r1) = ctx->f2.u32l;
    // 0x44003974: lui         $at, 0x4401
    ctx->r1 = S32(0X4401 << 16);
    // 0x44003978: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x4400397C: b           L_44003A50
    // 0x44003980: swc1        $f2, -0x6508($at)
    MEM_W(-0X6508, ctx->r1) = ctx->f2.u32l;
        goto L_44003A50;
    // 0x44003980: swc1        $f2, -0x6508($at)
    MEM_W(-0X6508, ctx->r1) = ctx->f2.u32l;
    // 0x44003984: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
L_44003988:
    // 0x44003988: bne         $v0, $at, L_440039BC
    if (ctx->r2 != ctx->r1) {
        // 0x4400398C: lui         $at, 0x4100
        ctx->r1 = S32(0X4100 << 16);
            goto L_440039BC;
    }
    // 0x4400398C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x44003990: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x44003994: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x44003998: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x4400399C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x440039A0: lui         $at, 0x4401
    ctx->r1 = S32(0X4401 << 16);
    // 0x440039A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x440039A8: swc1        $f0, -0x62B0($at)
    MEM_W(-0X62B0, ctx->r1) = ctx->f0.u32l;
    // 0x440039AC: lui         $at, 0x4401
    ctx->r1 = S32(0X4401 << 16);
    // 0x440039B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x440039B4: b           L_44003A50
    // 0x440039B8: swc1        $f0, -0x6508($at)
    MEM_W(-0X6508, ctx->r1) = ctx->f0.u32l;
        goto L_44003A50;
    // 0x440039B8: swc1        $f0, -0x6508($at)
    MEM_W(-0X6508, ctx->r1) = ctx->f0.u32l;
L_440039BC:
    // 0x440039BC: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x440039C0: bne         $v0, $at, L_44003A1C
    if (ctx->r2 != ctx->r1) {
        // 0x440039C4: addiu       $a1, $zero, 0x2F
        ctx->r5 = ADD32(0, 0X2F);
            goto L_44003A1C;
    }
    // 0x440039C4: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    // 0x440039C8: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x440039CC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x440039D0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x440039D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x440039D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x440039DC: lui         $at, 0x4401
    ctx->r1 = S32(0X4401 << 16);
    // 0x440039E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x440039E4: swc1        $f0, -0x62B0($at)
    MEM_W(-0X62B0, ctx->r1) = ctx->f0.u32l;
    // 0x440039E8: lui         $at, 0x4401
    ctx->r1 = S32(0X4401 << 16);
    // 0x440039EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x440039F0: swc1        $f0, -0x6508($at)
    MEM_W(-0X6508, ctx->r1) = ctx->f0.u32l;
    // 0x440039F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x440039F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x440039FC: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x44003A00: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x44003A04: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x44003A08: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x44003A0C: jal         0x440006C4
    // 0x44003A10: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_9;
    // 0x44003A10: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_9:
    // 0x44003A14: b           L_44003A54
    // 0x44003A18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_44003A54;
    // 0x44003A18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_44003A1C:
    // 0x44003A1C: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x44003A20: bne         $v0, $at, L_44003A50
    if (ctx->r2 != ctx->r1) {
        // 0x44003A24: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_44003A50;
    }
    // 0x44003A24: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x44003A28: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x44003A2C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x44003A30: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x44003A34: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x44003A38: lui         $at, 0x4401
    ctx->r1 = S32(0X4401 << 16);
    // 0x44003A3C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x44003A40: swc1        $f0, -0x62B0($at)
    MEM_W(-0X62B0, ctx->r1) = ctx->f0.u32l;
    // 0x44003A44: lui         $at, 0x4401
    ctx->r1 = S32(0X4401 << 16);
    // 0x44003A48: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x44003A4C: swc1        $f0, -0x6508($at)
    MEM_W(-0X6508, ctx->r1) = ctx->f0.u32l;
L_44003A50:
    // 0x44003A50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_44003A54:
    // 0x44003A54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x44003A58: jr          $ra
    // 0x44003A5C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x44003A5C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void ovl_coll_main_3A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44003A60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44003A64: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x44003A68: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x44003A6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44003A70: swc1        $f12, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f12.u32l;
    // 0x44003A74: swc1        $f14, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f14.u32l;
    // 0x44003A78: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x44003A7C: addiu       $a2, $a0, 0x74
    ctx->r6 = ADD32(ctx->r4, 0X74);
    // 0x44003A80: jal         0x440013E8
    // 0x44003A84: swc1        $f4, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f4.u32l;
    ovl_coll_main_13E8(rdram, ctx);
        goto after_0;
    // 0x44003A84: swc1        $f4, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f4.u32l;
    after_0:
    // 0x44003A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44003A8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44003A90: jr          $ra
    // 0x44003A94: nop

    return;
    // 0x44003A94: nop

;}
RECOMP_FUNC void ovl_coll_main_3A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44003A98: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x44003A9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44003AA0: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x44003AA4: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x44003AA8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x44003AAC: lw          $v1, 0x1C($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X1C);
    // 0x44003AB0: nop

    // 0x44003AB4: slti        $at, $v1, 0x1D
    ctx->r1 = SIGNED(ctx->r3) < 0X1D ? 1 : 0;
    // 0x44003AB8: beq         $at, $zero, L_44003DFC
    if (ctx->r1 == 0) {
        // 0x44003ABC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_44003DFC;
    }
    // 0x44003ABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44003AC0: blez        $v1, L_44003AFC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x44003AC4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_44003AFC;
    }
    // 0x44003AC4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x44003AC8: slti        $at, $v0, 0x6
    ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x44003ACC: beq         $at, $zero, L_44003AFC
    if (ctx->r1 == 0) {
        // 0x44003AD0: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_44003AFC;
    }
    // 0x44003AD0: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x44003AD4: lui         $t8, 0x4400
    ctx->r24 = S32(0X4400 << 16);
    // 0x44003AD8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x44003ADC: lw          $t8, 0x63F8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X63F8);
    // 0x44003AE0: nop

    // 0x44003AE4: sw          $t8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r24;
    // 0x44003AE8: lw          $t9, 0x70($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X70);
    // 0x44003AEC: nop

    // 0x44003AF0: lw          $v1, 0x1C($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X1C);
    // 0x44003AF4: b           L_44003C10
    // 0x44003AF8: nop

        goto L_44003C10;
    // 0x44003AF8: nop

L_44003AFC:
    // 0x44003AFC: slti        $at, $v0, 0x6
    ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x44003B00: bne         $at, $zero, L_44003B38
    if (ctx->r1 != 0) {
        // 0x44003B04: slti        $at, $v0, 0x12
        ctx->r1 = SIGNED(ctx->r2) < 0X12 ? 1 : 0;
            goto L_44003B38;
    }
    // 0x44003B04: slti        $at, $v0, 0x12
    ctx->r1 = SIGNED(ctx->r2) < 0X12 ? 1 : 0;
    // 0x44003B08: beq         $at, $zero, L_44003B38
    if (ctx->r1 == 0) {
        // 0x44003B0C: sll         $t0, $v0, 2
        ctx->r8 = S32(ctx->r2 << 2);
            goto L_44003B38;
    }
    // 0x44003B0C: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x44003B10: lui         $t1, 0x4400
    ctx->r9 = S32(0X4400 << 16);
    // 0x44003B14: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x44003B18: lw          $t1, 0x63F8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X63F8);
    // 0x44003B1C: nop

    // 0x44003B20: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x44003B24: lw          $t2, 0x70($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X70);
    // 0x44003B28: nop

    // 0x44003B2C: lw          $v1, 0x1C($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X1C);
    // 0x44003B30: b           L_44003C10
    // 0x44003B34: nop

        goto L_44003C10;
    // 0x44003B34: nop

L_44003B38:
    // 0x44003B38: slti        $at, $v0, 0x12
    ctx->r1 = SIGNED(ctx->r2) < 0X12 ? 1 : 0;
    // 0x44003B3C: bne         $at, $zero, L_44003B78
    if (ctx->r1 != 0) {
        // 0x44003B40: addiu       $t6, $v0, -0x17
        ctx->r14 = ADD32(ctx->r2, -0X17);
            goto L_44003B78;
    }
    // 0x44003B40: addiu       $t6, $v0, -0x17
    ctx->r14 = ADD32(ctx->r2, -0X17);
    // 0x44003B44: slti        $at, $v0, 0x17
    ctx->r1 = SIGNED(ctx->r2) < 0X17 ? 1 : 0;
    // 0x44003B48: beq         $at, $zero, L_44003B78
    if (ctx->r1 == 0) {
        // 0x44003B4C: sll         $t3, $v0, 2
        ctx->r11 = S32(ctx->r2 << 2);
            goto L_44003B78;
    }
    // 0x44003B4C: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x44003B50: lui         $t4, 0x4400
    ctx->r12 = S32(0X4400 << 16);
    // 0x44003B54: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x44003B58: lw          $t4, 0x63F8($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X63F8);
    // 0x44003B5C: nop

    // 0x44003B60: sw          $t4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r12;
    // 0x44003B64: lw          $t5, 0x70($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X70);
    // 0x44003B68: nop

    // 0x44003B6C: lw          $v1, 0x1C($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X1C);
    // 0x44003B70: b           L_44003C10
    // 0x44003B74: nop

        goto L_44003C10;
    // 0x44003B74: nop

L_44003B78:
    // 0x44003B78: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x44003B7C: beq         $at, $zero, L_44003C10
    if (ctx->r1 == 0) {
        // 0x44003B80: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_44003C10;
    }
    // 0x44003B80: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x44003B84: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x44003B88: addu        $at, $at, $t6
    gpr jr_addend_44003B94 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x44003B8C: lw          $t6, 0x6CC4($at)
    ctx->r14 = ADD32(ctx->r1, 0X6CC4);
    // 0x44003B90: nop

    // 0x44003B94: jr          $t6
    // 0x44003B98: nop

    switch (jr_addend_44003B94 >> 2) {
        case 0: goto L_44003BF0; break;
        case 1: goto L_44003BFC; break;
        case 2: goto L_44003BD4; break;
        case 3: goto L_44003B9C; break;
        case 4: goto L_44003C08; break;
        case 5: goto L_44003BB8; break;
        default: switch_error(__func__, 0x44003B94, 0x44006CC4);
    }
    // 0x44003B98: nop

L_44003B9C:
    // 0x44003B9C: addiu       $t7, $zero, 0x22
    ctx->r15 = ADD32(0, 0X22);
    // 0x44003BA0: sw          $t7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r15;
    // 0x44003BA4: lw          $t8, 0x70($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X70);
    // 0x44003BA8: nop

    // 0x44003BAC: lw          $v1, 0x1C($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X1C);
    // 0x44003BB0: b           L_44003C10
    // 0x44003BB4: nop

        goto L_44003C10;
    // 0x44003BB4: nop

L_44003BB8:
    // 0x44003BB8: addiu       $t9, $zero, 0x23
    ctx->r25 = ADD32(0, 0X23);
    // 0x44003BBC: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x44003BC0: lw          $t0, 0x70($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X70);
    // 0x44003BC4: nop

    // 0x44003BC8: lw          $v1, 0x1C($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X1C);
    // 0x44003BCC: b           L_44003C10
    // 0x44003BD0: nop

        goto L_44003C10;
    // 0x44003BD0: nop

L_44003BD4:
    // 0x44003BD4: addiu       $t1, $zero, 0x1C
    ctx->r9 = ADD32(0, 0X1C);
    // 0x44003BD8: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x44003BDC: lw          $t2, 0x70($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X70);
    // 0x44003BE0: nop

    // 0x44003BE4: lw          $v1, 0x1C($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X1C);
    // 0x44003BE8: b           L_44003C10
    // 0x44003BEC: nop

        goto L_44003C10;
    // 0x44003BEC: nop

L_44003BF0:
    // 0x44003BF0: addiu       $t3, $zero, 0x19
    ctx->r11 = ADD32(0, 0X19);
    // 0x44003BF4: b           L_44003C10
    // 0x44003BF8: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
        goto L_44003C10;
    // 0x44003BF8: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
L_44003BFC:
    // 0x44003BFC: addiu       $t4, $zero, 0x12
    ctx->r12 = ADD32(0, 0X12);
    // 0x44003C00: b           L_44003C10
    // 0x44003C04: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
        goto L_44003C10;
    // 0x44003C04: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
L_44003C08:
    // 0x44003C08: addiu       $t5, $zero, 0x1F
    ctx->r13 = ADD32(0, 0X1F);
    // 0x44003C0C: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
L_44003C10:
    // 0x44003C10: lui         $v0, 0x4400
    ctx->r2 = S32(0X4400 << 16);
    // 0x44003C14: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x44003C18: lbu         $v0, 0x63DC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X63DC);
    // 0x44003C1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x44003C20: beq         $v0, $at, L_44003C4C
    if (ctx->r2 == ctx->r1) {
        // 0x44003C24: addiu       $t6, $zero, 0xD
        ctx->r14 = ADD32(0, 0XD);
            goto L_44003C4C;
    }
    // 0x44003C24: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x44003C28: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x44003C2C: beq         $v0, $at, L_44003CA0
    if (ctx->r2 == ctx->r1) {
        // 0x44003C30: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_44003CA0;
    }
    // 0x44003C30: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x44003C34: beq         $v0, $at, L_44003CF0
    if (ctx->r2 == ctx->r1) {
        // 0x44003C38: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_44003CF0;
    }
    // 0x44003C38: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x44003C3C: beq         $v0, $at, L_44003D88
    if (ctx->r2 == ctx->r1) {
        // 0x44003C40: addiu       $a1, $zero, 0x29
        ctx->r5 = ADD32(0, 0X29);
            goto L_44003D88;
    }
    // 0x44003C40: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x44003C44: b           L_44003DFC
    // 0x44003C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_44003DFC;
    // 0x44003C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44003C4C:
    // 0x44003C4C: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x44003C50: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    // 0x44003C54: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x44003C58: lw          $t8, 0xC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC);
    // 0x44003C5C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x44003C60: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    // 0x44003C64: lw          $t9, 0x28($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X28);
    // 0x44003C68: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x44003C6C: sll         $t0, $t9, 10
    ctx->r8 = S32(ctx->r25 << 10);
    // 0x44003C70: bgez        $t0, L_44003C80
    if (SIGNED(ctx->r8) >= 0) {
        // 0x44003C74: nop
    
            goto L_44003C80;
    }
    // 0x44003C74: nop

    // 0x44003C78: b           L_44003C84
    // 0x44003C7C: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
        goto L_44003C84;
    // 0x44003C7C: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
L_44003C80:
    // 0x44003C80: sw          $t2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r10;
L_44003C84:
    // 0x44003C84: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x44003C88: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x44003C8C: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    // 0x44003C90: jal         0x440006C4
    // 0x44003C94: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x44003C94: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_0:
    // 0x44003C98: b           L_44003DFC
    // 0x44003C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_44003DFC;
    // 0x44003C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44003CA0:
    // 0x44003CA0: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
    // 0x44003CA4: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x44003CA8: lw          $t5, 0xC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC);
    // 0x44003CAC: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x44003CB0: sw          $t5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r13;
    // 0x44003CB4: lw          $t6, 0x28($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X28);
    // 0x44003CB8: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x44003CBC: sll         $t7, $t6, 10
    ctx->r15 = S32(ctx->r14 << 10);
    // 0x44003CC0: bgez        $t7, L_44003CD0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x44003CC4: nop
    
            goto L_44003CD0;
    }
    // 0x44003CC4: nop

    // 0x44003CC8: b           L_44003CD4
    // 0x44003CCC: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
        goto L_44003CD4;
    // 0x44003CCC: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
L_44003CD0:
    // 0x44003CD0: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
L_44003CD4:
    // 0x44003CD4: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x44003CD8: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x44003CDC: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    // 0x44003CE0: jal         0x440006C4
    // 0x44003CE4: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_1;
    // 0x44003CE4: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_1:
    // 0x44003CE8: b           L_44003DFC
    // 0x44003CEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_44003DFC;
    // 0x44003CEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44003CF0:
    // 0x44003CF0: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x44003CF4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x44003CF8: lw          $t2, 0x10($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X10);
    // 0x44003CFC: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x44003D00: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x44003D04: nop

    // 0x44003D08: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x44003D0C: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x44003D10: lw          $t3, 0x10($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X10);
    // 0x44003D14: nop

    // 0x44003D18: lwc1        $f8, 0x4($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X4);
    // 0x44003D1C: nop

    // 0x44003D20: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x44003D24: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x44003D28: lw          $t4, 0x10($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X10);
    // 0x44003D2C: nop

    // 0x44003D30: lwc1        $f16, 0x8($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X8);
    // 0x44003D34: nop

    // 0x44003D38: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x44003D3C: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x44003D40: lw          $t5, 0xC($t1)
    ctx->r13 = MEM_W(ctx->r9, 0XC);
    // 0x44003D44: nop

    // 0x44003D48: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x44003D4C: lw          $t6, 0x28($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X28);
    // 0x44003D50: nop

    // 0x44003D54: sll         $t7, $t6, 10
    ctx->r15 = S32(ctx->r14 << 10);
    // 0x44003D58: bgez        $t7, L_44003D68
    if (SIGNED(ctx->r15) >= 0) {
        // 0x44003D5C: nop
    
            goto L_44003D68;
    }
    // 0x44003D5C: nop

    // 0x44003D60: b           L_44003D6C
    // 0x44003D64: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
        goto L_44003D6C;
    // 0x44003D64: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
L_44003D68:
    // 0x44003D68: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
L_44003D6C:
    // 0x44003D6C: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x44003D70: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x44003D74: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    // 0x44003D78: jal         0x440006C4
    // 0x44003D7C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_2;
    // 0x44003D7C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_2:
    // 0x44003D80: b           L_44003DFC
    // 0x44003D84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_44003DFC;
    // 0x44003D84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44003D88:
    // 0x44003D88: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x44003D8C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x44003D90: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    // 0x44003D94: jal         0x440006C4
    // 0x44003D98: sw          $a3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r7;
    ovl_coll_main_6C4(rdram, ctx);
        goto after_3;
    // 0x44003D98: sw          $a3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r7;
    after_3:
    // 0x44003D9C: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
    // 0x44003DA0: bne         $v0, $zero, L_44003DFC
    if (ctx->r2 != 0) {
        // 0x44003DA4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_44003DFC;
    }
    // 0x44003DA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44003DA8: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x44003DAC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x44003DB0: bne         $t3, $zero, L_44003DF8
    if (ctx->r11 != 0) {
        // 0x44003DB4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_44003DF8;
    }
    // 0x44003DB4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x44003DB8: bne         $t4, $at, L_44003DF8
    if (ctx->r12 != ctx->r1) {
        // 0x44003DBC: addiu       $t1, $zero, 0x29
        ctx->r9 = ADD32(0, 0X29);
            goto L_44003DF8;
    }
    // 0x44003DBC: addiu       $t1, $zero, 0x29
    ctx->r9 = ADD32(0, 0X29);
    // 0x44003DC0: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x44003DC4: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x44003DC8: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x44003DCC: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x44003DD0: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x44003DD4: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x44003DD8: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x44003DDC: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x44003DE0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x44003DE4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x44003DE8: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x44003DEC: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x44003DF0: jal         0x440013E8
    // 0x44003DF4: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    ovl_coll_main_13E8(rdram, ctx);
        goto after_4;
    // 0x44003DF4: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    after_4:
L_44003DF8:
    // 0x44003DF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44003DFC:
    // 0x44003DFC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x44003E00: jr          $ra
    // 0x44003E04: nop

    return;
    // 0x44003E04: nop

;}
RECOMP_FUNC void ovl_coll_main_3E08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44003E08: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x44003E0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44003E10: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x44003E14: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x44003E18: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    // 0x44003E1C: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x44003E20: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x44003E24: jal         0x440006C4
    // 0x44003E28: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x44003E28: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x44003E2C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x44003E30: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x44003E34: bne         $t7, $zero, L_44003E64
    if (ctx->r15 != 0) {
        // 0x44003E38: lw          $t1, 0x18($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X18);
            goto L_44003E64;
    }
    // 0x44003E38: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x44003E3C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x44003E40: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x44003E44: beq         $t8, $at, L_44003E64
    if (ctx->r24 == ctx->r1) {
        // 0x44003E48: lw          $t1, 0x18($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X18);
            goto L_44003E64;
    }
    // 0x44003E48: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x44003E4C: lw          $t9, 0x28($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X28);
    // 0x44003E50: nop

    // 0x44003E54: andi        $t0, $t9, 0x20
    ctx->r8 = ctx->r25 & 0X20;
    // 0x44003E58: beq         $t0, $zero, L_44003EE0
    if (ctx->r8 == 0) {
        // 0x44003E5C: lw          $a1, 0x34($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X34);
            goto L_44003EE0;
    }
    // 0x44003E5C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x44003E60: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
L_44003E64:
    // 0x44003E64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x44003E68: bne         $t1, $at, L_44003E98
    if (ctx->r9 != ctx->r1) {
        // 0x44003E6C: lw          $t5, 0x18($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X18);
            goto L_44003E98;
    }
    // 0x44003E6C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x44003E70: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x44003E74: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x44003E78: bne         $t2, $at, L_44003E98
    if (ctx->r10 != ctx->r1) {
        // 0x44003E7C: lw          $t5, 0x18($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X18);
            goto L_44003E98;
    }
    // 0x44003E7C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x44003E80: lw          $t3, 0x28($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X28);
    // 0x44003E84: nop

    // 0x44003E88: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x44003E8C: bne         $t4, $zero, L_44003EE0
    if (ctx->r12 != 0) {
        // 0x44003E90: lw          $a1, 0x34($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X34);
            goto L_44003EE0;
    }
    // 0x44003E90: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x44003E94: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
L_44003E98:
    // 0x44003E98: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x44003E9C: bne         $t5, $at, L_44003EBC
    if (ctx->r13 != ctx->r1) {
        // 0x44003EA0: lw          $t8, 0x18($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X18);
            goto L_44003EBC;
    }
    // 0x44003EA0: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x44003EA4: lw          $t6, 0x28($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X28);
    // 0x44003EA8: nop

    // 0x44003EAC: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x44003EB0: bne         $t7, $zero, L_44003EE0
    if (ctx->r15 != 0) {
        // 0x44003EB4: lw          $a1, 0x34($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X34);
            goto L_44003EE0;
    }
    // 0x44003EB4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x44003EB8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
L_44003EBC:
    // 0x44003EBC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x44003EC0: bne         $t8, $at, L_44003EEC
    if (ctx->r24 != ctx->r1) {
        // 0x44003EC4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_44003EEC;
    }
    // 0x44003EC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44003EC8: lw          $t9, 0x28($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X28);
    // 0x44003ECC: nop

    // 0x44003ED0: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x44003ED4: beq         $t0, $zero, L_44003EEC
    if (ctx->r8 == 0) {
        // 0x44003ED8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_44003EEC;
    }
    // 0x44003ED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44003EDC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
L_44003EE0:
    // 0x44003EE0: jal         0x44003A98
    // 0x44003EE4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_coll_main_3A98(rdram, ctx);
        goto after_1;
    // 0x44003EE4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_1:
    // 0x44003EE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44003EEC:
    // 0x44003EEC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x44003EF0: jr          $ra
    // 0x44003EF4: nop

    return;
    // 0x44003EF4: nop

;}
RECOMP_FUNC void ovl_coll_main_3EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44003EF8: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x44003EFC: nop

    // 0x44003F00: andi        $t6, $v0, 0x40
    ctx->r14 = ctx->r2 & 0X40;
    // 0x44003F04: bne         $t6, $zero, L_44003F34
    if (ctx->r14 != 0) {
        // 0x44003F08: ori         $t7, $v0, 0x40
        ctx->r15 = ctx->r2 | 0X40;
            goto L_44003F34;
    }
    // 0x44003F08: ori         $t7, $v0, 0x40
    ctx->r15 = ctx->r2 | 0X40;
    // 0x44003F0C: lw          $t8, 0x70($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X70);
    // 0x44003F10: sw          $t7, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r15;
    // 0x44003F14: lw          $t9, 0x6C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X6C);
    // 0x44003F18: lw          $v1, 0x14($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X14);
    // 0x44003F1C: nop

    // 0x44003F20: subu        $t0, $v1, $t9
    ctx->r8 = SUB32(ctx->r3, ctx->r25);
    // 0x44003F24: slti        $at, $t0, 0x6
    ctx->r1 = SIGNED(ctx->r8) < 0X6 ? 1 : 0;
    // 0x44003F28: bne         $at, $zero, L_44003F34
    if (ctx->r1 != 0) {
        // 0x44003F2C: addiu       $t1, $v1, -0x5
        ctx->r9 = ADD32(ctx->r3, -0X5);
            goto L_44003F34;
    }
    // 0x44003F2C: addiu       $t1, $v1, -0x5
    ctx->r9 = ADD32(ctx->r3, -0X5);
    // 0x44003F30: sw          $t1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r9;
L_44003F34:
    // 0x44003F34: jr          $ra
    // 0x44003F38: nop

    return;
    // 0x44003F38: nop

;}
RECOMP_FUNC void ovl_coll_main_3F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44003F3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44003F40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44003F44: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x44003F48: jal         0x4400126C
    // 0x44003F4C: nop

    ovl_coll_main_126C(rdram, ctx);
        goto after_0;
    // 0x44003F4C: nop

    after_0:
    // 0x44003F50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x44003F54: beq         $v0, $at, L_44003F64
    if (ctx->r2 == ctx->r1) {
        // 0x44003F58: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_44003F64;
    }
    // 0x44003F58: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x44003F5C: jal         0x440024A8
    // 0x44003F60: nop

    ovl_coll_main_24A8(rdram, ctx);
        goto after_1;
    // 0x44003F60: nop

    after_1:
L_44003F64:
    // 0x44003F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44003F68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44003F6C: jr          $ra
    // 0x44003F70: nop

    return;
    // 0x44003F70: nop

;}
RECOMP_FUNC void ovl_coll_main_3F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44003F74: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x44003F78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44003F7C: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x44003F80: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x44003F84: sll         $t6, $v0, 15
    ctx->r14 = S32(ctx->r2 << 15);
    // 0x44003F88: bltz        $t6, L_44003F9C
    if (SIGNED(ctx->r14) < 0) {
        // 0x44003F8C: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_44003F9C;
    }
    // 0x44003F8C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x44003F90: sll         $t7, $v0, 12
    ctx->r15 = S32(ctx->r2 << 12);
    // 0x44003F94: bgez        $t7, L_44004044
    if (SIGNED(ctx->r15) >= 0) {
        // 0x44003F98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_44004044;
    }
    // 0x44003F98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44003F9C:
    // 0x44003F9C: lw          $a0, 0xC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XC);
    // 0x44003FA0: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x44003FA4: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x44003FA8: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x44003FAC: jal         0x440006C4
    // 0x44003FB0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x44003FB0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x44003FB4: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x44003FB8: bne         $v0, $zero, L_44004040
    if (ctx->r2 != 0) {
        // 0x44003FBC: lui         $at, 0xC700
        ctx->r1 = S32(0XC700 << 16);
            goto L_44004040;
    }
    // 0x44003FBC: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x44003FC0: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x44003FC4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x44003FC8: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x44003FCC: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x44003FD0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x44003FD4: bc1t        L_4400403C
    if (c1cs) {
        // 0x44003FD8: addiu       $a2, $sp, 0x20
        ctx->r6 = ADD32(ctx->r29, 0X20);
            goto L_4400403C;
    }
    // 0x44003FD8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x44003FDC: lw          $a0, 0xC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XC);
    // 0x44003FE0: jal         0x440006C4
    // 0x44003FE4: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    ovl_coll_main_6C4(rdram, ctx);
        goto after_1;
    // 0x44003FE4: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x44003FE8: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x44003FEC: bne         $v0, $zero, L_44004040
    if (ctx->r2 != 0) {
        // 0x44003FF0: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_44004040;
    }
    // 0x44003FF0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x44003FF4: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x44003FF8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x44003FFC: lwc1        $f0, 0x48($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0X48);
    // 0x44004000: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x44004004: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x44004008: nop

    // 0x4400400C: bc1f        L_4400401C
    if (!c1cs) {
        // 0x44004010: nop
    
            goto L_4400401C;
    }
    // 0x44004010: nop

    // 0x44004014: b           L_44004020
    // 0x44004018: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_44004020;
    // 0x44004018: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_4400401C:
    // 0x4400401C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_44004020:
    // 0x44004020: add.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x44004024: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x44004028: nop

    // 0x4400402C: bc1f        L_44004040
    if (!c1cs) {
        // 0x44004030: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_44004040;
    }
    // 0x44004030: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x44004034: b           L_44004040
    // 0x44004038: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_44004040;
    // 0x44004038: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_4400403C:
    // 0x4400403C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_44004040:
    // 0x44004040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44004044:
    // 0x44004044: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x44004048: jr          $ra
    // 0x4400404C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4400404C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_coll_main_4050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004050: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x44004054: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x44004058: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4400405C: sw          $a0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r4;
    // 0x44004060: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x44004064: nop

    // 0x44004068: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x4400406C: jal         0x4400126C
    // 0x44004070: nop

    ovl_coll_main_126C(rdram, ctx);
        goto after_0;
    // 0x44004070: nop

    after_0:
    // 0x44004074: lw          $t7, 0xD8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD8);
    // 0x44004078: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4400407C: lw          $a3, 0xC($t7)
    ctx->r7 = MEM_W(ctx->r15, 0XC);
    // 0x44004080: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x44004084: bne         $v0, $at, L_44004094
    if (ctx->r2 != ctx->r1) {
        // 0x44004088: sw          $zero, 0xC8($sp)
        MEM_W(0XC8, ctx->r29) = 0;
            goto L_44004094;
    }
    // 0x44004088: sw          $zero, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = 0;
    // 0x4400408C: b           L_44004624
    // 0x44004090: sw          $zero, 0xC($t7)
    MEM_W(0XC, ctx->r15) = 0;
        goto L_44004624;
    // 0x44004090: sw          $zero, 0xC($t7)
    MEM_W(0XC, ctx->r15) = 0;
L_44004094:
    // 0x44004094: lw          $t8, 0x28($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X28);
    // 0x44004098: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
    // 0x4400409C: andi        $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 & 0X1000;
    // 0x440040A0: beq         $t9, $zero, L_440040B0
    if (ctx->r25 == 0) {
        // 0x440040A4: nop
    
            goto L_440040B0;
    }
    // 0x440040A4: nop

    // 0x440040A8: b           L_44004624
    // 0x440040AC: sw          $zero, 0xC($t0)
    MEM_W(0XC, ctx->r8) = 0;
        goto L_44004624;
    // 0x440040AC: sw          $zero, 0xC($t0)
    MEM_W(0XC, ctx->r8) = 0;
L_440040B0:
    // 0x440040B0: lw          $t1, 0xC($a3)
    ctx->r9 = MEM_W(ctx->r7, 0XC);
    // 0x440040B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x440040B8: andi        $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 & 0X8000;
    // 0x440040BC: bne         $t2, $zero, L_440040E8
    if (ctx->r10 != 0) {
        // 0x440040C0: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_440040E8;
    }
    // 0x440040C0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x440040C4: addiu       $a2, $s0, 0x2C
    ctx->r6 = ADD32(ctx->r16, 0X2C);
    // 0x440040C8: jal         0x44001B2C
    // 0x440040CC: sw          $a3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r7;
    ovl_coll_main_1B2C(rdram, ctx);
        goto after_1;
    // 0x440040CC: sw          $a3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r7;
    after_1:
    // 0x440040D0: lw          $t3, 0x28($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X28);
    // 0x440040D4: lw          $a3, 0xCC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XCC);
    // 0x440040D8: sll         $t4, $t3, 8
    ctx->r12 = S32(ctx->r11 << 8);
    // 0x440040DC: bgez        $t4, L_440040E8
    if (SIGNED(ctx->r12) >= 0) {
        // 0x440040E0: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_440040E8;
    }
    // 0x440040E0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x440040E4: sw          $t5, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r13;
L_440040E8:
    // 0x440040E8: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x440040EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x440040F0: lwc1        $f6, 0x14($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X14);
    // 0x440040F4: nop

    // 0x440040F8: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x440040FC: nop

    // 0x44004100: bc1t        L_44004314
    if (c1cs) {
        // 0x44004104: nop
    
            goto L_44004314;
    }
    // 0x44004104: nop

    // 0x44004108: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x4400410C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x44004110: beq         $a0, $at, L_440042BC
    if (ctx->r4 == ctx->r1) {
        // 0x44004114: addiu       $a1, $zero, 0x29
        ctx->r5 = ADD32(0, 0X29);
            goto L_440042BC;
    }
    // 0x44004114: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x44004118: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    // 0x4400411C: jal         0x440006C4
    // 0x44004120: sw          $a3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r7;
    ovl_coll_main_6C4(rdram, ctx);
        goto after_2;
    // 0x44004120: sw          $a3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r7;
    after_2:
    // 0x44004124: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
    // 0x44004128: jal         0x44003E08
    // 0x4400412C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_3E08(rdram, ctx);
        goto after_3;
    // 0x4400412C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x44004130: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x44004134: lw          $a3, 0xCC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XCC);
    // 0x44004138: andi        $t6, $v1, 0x400
    ctx->r14 = ctx->r3 & 0X400;
    // 0x4400413C: beq         $t6, $zero, L_44004278
    if (ctx->r14 == 0) {
        // 0x44004140: sll         $t8, $v1, 9
        ctx->r24 = S32(ctx->r3 << 9);
            goto L_44004278;
    }
    // 0x44004140: sll         $t8, $v1, 9
    ctx->r24 = S32(ctx->r3 << 9);
    // 0x44004144: lw          $v0, 0xB0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB0);
    // 0x44004148: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x4400414C: bne         $v0, $zero, L_440041E0
    if (ctx->r2 != 0) {
        // 0x44004150: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_440041E0;
    }
    // 0x44004150: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x44004154: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x44004158: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x4400415C: bne         $t7, $a0, L_440041A0
    if (ctx->r15 != ctx->r4) {
        // 0x44004160: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_440041A0;
    }
    // 0x44004160: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x44004164: lw          $t8, 0xC($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XC);
    // 0x44004168: ori         $at, $zero, 0x8040
    ctx->r1 = 0 | 0X8040;
    // 0x4400416C: slt         $at, $t8, $at
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x44004170: bne         $at, $zero, L_4400417C
    if (ctx->r1 != 0) {
        // 0x44004174: sll         $t9, $v1, 9
        ctx->r25 = S32(ctx->r3 << 9);
            goto L_4400417C;
    }
    // 0x44004174: sll         $t9, $v1, 9
    ctx->r25 = S32(ctx->r3 << 9);
    // 0x44004178: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_4400417C:
    // 0x4400417C: beq         $v0, $zero, L_440041B4
    if (ctx->r2 == 0) {
        // 0x44004180: nop
    
            goto L_440041B4;
    }
    // 0x44004180: nop

    // 0x44004184: bgez        $t9, L_440041B4
    if (SIGNED(ctx->r25) >= 0) {
        // 0x44004188: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_440041B4;
    }
    // 0x44004188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4400418C: jal         0x44003EF8
    // 0x44004190: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    ovl_coll_main_3EF8(rdram, ctx);
        goto after_4;
    // 0x44004190: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    after_4:
    // 0x44004194: lw          $v0, 0xA4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA4);
    // 0x44004198: b           L_440041B4
    // 0x4400419C: nop

        goto L_440041B4;
    // 0x4400419C: nop

L_440041A0:
    // 0x440041A0: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
    // 0x440041A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x440041A8: bne         $t0, $at, L_440041B4
    if (ctx->r8 != ctx->r1) {
        // 0x440041AC: nop
    
            goto L_440041B4;
    }
    // 0x440041AC: nop

    // 0x440041B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_440041B4:
    // 0x440041B4: beq         $v0, $zero, L_4400425C
    if (ctx->r2 == 0) {
        // 0x440041B8: lw          $t7, 0xAC($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XAC);
            goto L_4400425C;
    }
    // 0x440041B8: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
    // 0x440041BC: lw          $t1, 0x28($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X28);
    // 0x440041C0: nop

    // 0x440041C4: andi        $t2, $t1, 0x20
    ctx->r10 = ctx->r9 & 0X20;
    // 0x440041C8: bne         $t2, $zero, L_4400425C
    if (ctx->r10 != 0) {
        // 0x440041CC: lw          $t7, 0xAC($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XAC);
            goto L_4400425C;
    }
    // 0x440041CC: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
    // 0x440041D0: jal         0x44003EF8
    // 0x440041D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_3EF8(rdram, ctx);
        goto after_5;
    // 0x440041D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x440041D8: b           L_4400425C
    // 0x440041DC: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
        goto L_4400425C;
    // 0x440041DC: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
L_440041E0:
    // 0x440041E0: bne         $v0, $at, L_440041F8
    if (ctx->r2 != ctx->r1) {
        // 0x440041E4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_440041F8;
    }
    // 0x440041E4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x440041E8: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x440041EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x440041F0: beq         $t3, $a0, L_44004228
    if (ctx->r11 == ctx->r4) {
        // 0x440041F4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_44004228;
    }
    // 0x440041F4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_440041F8:
    // 0x440041F8: bne         $v0, $at, L_44004210
    if (ctx->r2 != ctx->r1) {
        // 0x440041FC: andi        $t4, $v1, 0x10
        ctx->r12 = ctx->r3 & 0X10;
            goto L_44004210;
    }
    // 0x440041FC: andi        $t4, $v1, 0x10
    ctx->r12 = ctx->r3 & 0X10;
    // 0x44004200: bne         $t4, $zero, L_4400422C
    if (ctx->r12 != 0) {
        // 0x44004204: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_4400422C;
    }
    // 0x44004204: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x44004208: lw          $v0, 0xB0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB0);
    // 0x4400420C: nop

L_44004210:
    // 0x44004210: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x44004214: bne         $v0, $at, L_44004238
    if (ctx->r2 != ctx->r1) {
        // 0x44004218: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_44004238;
    }
    // 0x44004218: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x4400421C: lw          $t5, 0xB4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB4);
    // 0x44004220: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x44004224: beq         $t5, $at, L_44004234
    if (ctx->r13 == ctx->r1) {
        // 0x44004228: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_44004234;
    }
L_44004228:
    // 0x44004228: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_4400422C:
    // 0x4400422C: b           L_44004258
    // 0x44004230: sw          $t6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r14;
        goto L_44004258;
    // 0x44004230: sw          $t6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r14;
L_44004234:
    // 0x44004234: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_44004238:
    // 0x44004238: bne         $v0, $at, L_4400425C
    if (ctx->r2 != ctx->r1) {
        // 0x4400423C: lw          $t7, 0xAC($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XAC);
            goto L_4400425C;
    }
    // 0x4400423C: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
    // 0x44004240: jal         0x44003F74
    // 0x44004244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_3F74(rdram, ctx);
        goto after_6;
    // 0x44004244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x44004248: beq         $v0, $zero, L_4400425C
    if (ctx->r2 == 0) {
        // 0x4400424C: lw          $t7, 0xAC($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XAC);
            goto L_4400425C;
    }
    // 0x4400424C: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
    // 0x44004250: jal         0x44003EF8
    // 0x44004254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_3EF8(rdram, ctx);
        goto after_7;
    // 0x44004254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_44004258:
    // 0x44004258: lw          $t7, 0xAC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XAC);
L_4400425C:
    // 0x4400425C: nop

    // 0x44004260: beq         $t7, $zero, L_44004618
    if (ctx->r15 == 0) {
        // 0x44004264: lw          $t0, 0xC8($sp)
        ctx->r8 = MEM_W(ctx->r29, 0XC8);
            goto L_44004618;
    }
    // 0x44004264: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x44004268: jal         0x440024A8
    // 0x4400426C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_24A8(rdram, ctx);
        goto after_8;
    // 0x4400426C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x44004270: b           L_44004618
    // 0x44004274: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
        goto L_44004618;
    // 0x44004274: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
L_44004278:
    // 0x44004278: bgez        $t8, L_44004618
    if (SIGNED(ctx->r24) >= 0) {
        // 0x4400427C: lw          $t0, 0xC8($sp)
        ctx->r8 = MEM_W(ctx->r29, 0XC8);
            goto L_44004618;
    }
    // 0x4400427C: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x44004280: lw          $v0, 0xB0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB0);
    // 0x44004284: lw          $t9, 0xB4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB4);
    // 0x44004288: bne         $v0, $zero, L_44004614
    if (ctx->r2 != 0) {
        // 0x4400428C: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_44004614;
    }
    // 0x4400428C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x44004290: bne         $t9, $a0, L_44004618
    if (ctx->r25 != ctx->r4) {
        // 0x44004294: lw          $t0, 0xC8($sp)
        ctx->r8 = MEM_W(ctx->r29, 0XC8);
            goto L_44004618;
    }
    // 0x44004294: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x44004298: lw          $t0, 0xC($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XC);
    // 0x4400429C: ori         $at, $zero, 0x8040
    ctx->r1 = 0 | 0X8040;
    // 0x440042A0: slt         $at, $t0, $at
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x440042A4: beq         $at, $zero, L_44004618
    if (ctx->r1 == 0) {
        // 0x440042A8: lw          $t0, 0xC8($sp)
        ctx->r8 = MEM_W(ctx->r29, 0XC8);
            goto L_44004618;
    }
    // 0x440042A8: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x440042AC: jal         0x44003EF8
    // 0x440042B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_3EF8(rdram, ctx);
        goto after_9;
    // 0x440042B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x440042B4: b           L_44004618
    // 0x440042B8: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
        goto L_44004618;
    // 0x440042B8: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
L_440042BC:
    // 0x440042BC: lw          $t1, 0x28($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X28);
    // 0x440042C0: nop

    // 0x440042C4: andi        $t2, $t1, 0x400
    ctx->r10 = ctx->r9 & 0X400;
    // 0x440042C8: beq         $t2, $zero, L_44004618
    if (ctx->r10 == 0) {
        // 0x440042CC: lw          $t0, 0xC8($sp)
        ctx->r8 = MEM_W(ctx->r29, 0XC8);
            goto L_44004618;
    }
    // 0x440042CC: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x440042D0: jal         0x44003F74
    // 0x440042D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_3F74(rdram, ctx);
        goto after_10;
    // 0x440042D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x440042D8: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x440042DC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x440042E0: addiu       $v1, $v1, -0x11
    ctx->r3 = ADD32(ctx->r3, -0X11);
    // 0x440042E4: bne         $v1, $a0, L_440042F4
    if (ctx->r3 != ctx->r4) {
        // 0x440042E8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_440042F4;
    }
    // 0x440042E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x440042EC: beq         $v0, $at, L_44004304
    if (ctx->r2 == ctx->r1) {
        // 0x440042F0: nop
    
            goto L_44004304;
    }
    // 0x440042F0: nop

L_440042F4:
    // 0x440042F4: beq         $v1, $a0, L_44004618
    if (ctx->r3 == ctx->r4) {
        // 0x440042F8: lw          $t0, 0xC8($sp)
        ctx->r8 = MEM_W(ctx->r29, 0XC8);
            goto L_44004618;
    }
    // 0x440042F8: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x440042FC: beq         $v0, $zero, L_44004618
    if (ctx->r2 == 0) {
        // 0x44004300: lw          $t0, 0xC8($sp)
        ctx->r8 = MEM_W(ctx->r29, 0XC8);
            goto L_44004618;
    }
    // 0x44004300: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
L_44004304:
    // 0x44004304: jal         0x440024A8
    // 0x44004308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_24A8(rdram, ctx);
        goto after_11;
    // 0x44004308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x4400430C: b           L_44004618
    // 0x44004310: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
        goto L_44004618;
    // 0x44004310: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
L_44004314:
    // 0x44004314: lw          $t3, 0x70($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X70);
    // 0x44004318: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x4400431C: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x44004320: nop

    // 0x44004324: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x44004328: bne         $a0, $t5, L_4400452C
    if (ctx->r4 != ctx->r13) {
        // 0x4400432C: nop
    
            goto L_4400452C;
    }
    // 0x4400432C: nop

    // 0x44004330: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x44004334: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x44004338: andi        $t6, $v1, 0x8000
    ctx->r14 = ctx->r3 & 0X8000;
    // 0x4400433C: bne         $t6, $zero, L_440043CC
    if (ctx->r14 != 0) {
        // 0x44004340: addiu       $a2, $sp, 0x84
        ctx->r6 = ADD32(ctx->r29, 0X84);
            goto L_440043CC;
    }
    // 0x44004340: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    // 0x44004344: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x44004348: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x4400434C: addiu       $v1, $v1, -0x11
    ctx->r3 = ADD32(ctx->r3, -0X11);
    // 0x44004350: jal         0x440006C4
    // 0x44004354: sw          $v1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r3;
    ovl_coll_main_6C4(rdram, ctx);
        goto after_12;
    // 0x44004354: sw          $v1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r3;
    after_12:
    // 0x44004358: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x4400435C: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x44004360: beq         $v1, $at, L_44004370
    if (ctx->r3 == ctx->r1) {
        // 0x44004364: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_44004370;
    }
    // 0x44004364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x44004368: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x4400436C: bne         $v1, $at, L_4400438C
    if (ctx->r3 != ctx->r1) {
        // 0x44004370: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_4400438C;
    }
L_44004370:
    // 0x44004370: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x44004374: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x44004378: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x4400437C: nop

    // 0x44004380: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x44004384: b           L_440043AC
    // 0x44004388: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
        goto L_440043AC;
    // 0x44004388: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
L_4400438C:
    // 0x4400438C: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x44004390: bne         $v1, $at, L_440043AC
    if (ctx->r3 != ctx->r1) {
        // 0x44004394: lui         $at, 0x4302
        ctx->r1 = S32(0X4302 << 16);
            goto L_440043AC;
    }
    // 0x44004394: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x44004398: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4400439C: lwc1        $f18, 0x88($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X88);
    // 0x440043A0: nop

    // 0x440043A4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x440043A8: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
L_440043AC:
    // 0x440043AC: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x440043B0: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    // 0x440043B4: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x440043B8: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x440043BC: jal         0x44003A60
    // 0x440043C0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_coll_main_3A60(rdram, ctx);
        goto after_13;
    // 0x440043C0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_13:
    // 0x440043C4: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x440043C8: nop

L_440043CC:
    // 0x440043CC: andi        $t7, $v1, 0x6000
    ctx->r15 = ctx->r3 & 0X6000;
    // 0x440043D0: addiu       $at, $zero, 0x6000
    ctx->r1 = ADD32(0, 0X6000);
    // 0x440043D4: bne         $t7, $at, L_4400442C
    if (ctx->r15 != ctx->r1) {
        // 0x440043D8: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_4400442C;
    }
    // 0x440043D8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x440043DC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x440043E0: jal         0x440006C4
    // 0x440043E4: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_14;
    // 0x440043E4: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    after_14:
    // 0x440043E8: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x440043EC: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x440043F0: lwc1        $f19, 0x6CE0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X6CE0);
    // 0x440043F4: lwc1        $f18, 0x6CE4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6CE4);
    // 0x440043F8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x440043FC: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x44004400: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x44004404: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x44004408: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4400440C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x44004410: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x44004414: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x44004418: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x4400441C: jal         0x44003A60
    // 0x44004420: nop

    ovl_coll_main_3A60(rdram, ctx);
        goto after_15;
    // 0x44004420: nop

    after_15:
    // 0x44004424: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x44004428: nop

L_4400442C:
    // 0x4400442C: sll         $t8, $v1, 15
    ctx->r24 = S32(ctx->r3 << 15);
    // 0x44004430: bltz        $t8, L_44004440
    if (SIGNED(ctx->r24) < 0) {
        // 0x44004434: sll         $t9, $v1, 14
        ctx->r25 = S32(ctx->r3 << 14);
            goto L_44004440;
    }
    // 0x44004434: sll         $t9, $v1, 14
    ctx->r25 = S32(ctx->r3 << 14);
    // 0x44004438: bgez        $t9, L_4400452C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x4400443C: nop
    
            goto L_4400452C;
    }
    // 0x4400443C: nop

L_44004440:
    // 0x44004440: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x44004444: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x44004448: jal         0x440006C4
    // 0x4400444C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_16;
    // 0x4400444C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_16:
    // 0x44004450: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x44004454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x44004458: sll         $t0, $v1, 15
    ctx->r8 = S32(ctx->r3 << 15);
    // 0x4400445C: bgez        $t0, L_440044B4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x44004460: addiu       $a1, $zero, 0x25
        ctx->r5 = ADD32(0, 0X25);
            goto L_440044B4;
    }
    // 0x44004460: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x44004464: lwc1        $f0, 0x48($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X48);
    // 0x44004468: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4400446C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x44004470: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x44004474: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x44004478: bc1f        L_44004488
    if (!c1cs) {
        // 0x4400447C: nop
    
            goto L_44004488;
    }
    // 0x4400447C: nop

    // 0x44004480: b           L_4400448C
    // 0x44004484: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_4400448C;
    // 0x44004484: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_44004488:
    // 0x44004488: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_4400448C:
    // 0x4400448C: nop

    // 0x44004490: div.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f2.fl, ctx->f10.fl);
    // 0x44004494: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x44004498: lwc1        $f18, 0x6CE8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6CE8);
    // 0x4400449C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x440044A0: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x440044A4: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x440044A8: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x440044AC: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x440044B0: nop

L_440044B4:
    // 0x440044B4: sll         $t1, $v1, 14
    ctx->r9 = S32(ctx->r3 << 14);
    // 0x440044B8: bgez        $t1, L_44004508
    if (SIGNED(ctx->r9) >= 0) {
        // 0x440044BC: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_44004508;
    }
    // 0x440044BC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x440044C0: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x440044C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x440044C8: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x440044CC: div.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x440044D0: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x440044D4: add.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x440044D8: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x440044DC: lw          $t2, 0x24($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X24);
    // 0x440044E0: nop

    // 0x440044E4: bne         $t2, $at, L_44004508
    if (ctx->r10 != ctx->r1) {
        // 0x440044E8: nop
    
            goto L_44004508;
    }
    // 0x440044E8: nop

    // 0x440044EC: lw          $t3, 0x6C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X6C);
    // 0x440044F0: nop

    // 0x440044F4: slti        $at, $t3, 0x1F
    ctx->r1 = SIGNED(ctx->r11) < 0X1F ? 1 : 0;
    // 0x440044F8: bne         $at, $zero, L_44004508
    if (ctx->r1 != 0) {
        // 0x440044FC: nop
    
            goto L_44004508;
    }
    // 0x440044FC: nop

    // 0x44004500: sub.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x44004504: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
L_44004508:
    // 0x44004508: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x4400450C: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x44004510: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x44004514: jal         0x44003A60
    // 0x44004518: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_coll_main_3A60(rdram, ctx);
        goto after_17;
    // 0x44004518: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_17:
    // 0x4400451C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x44004520: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x44004524: jal         0x440006C4
    // 0x44004528: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_18;
    // 0x44004528: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_18:
L_4400452C:
    // 0x4400452C: lw          $t4, 0x70($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X70);
    // 0x44004530: nop

    // 0x44004534: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x44004538: nop

    // 0x4400453C: andi        $t6, $t5, 0x100
    ctx->r14 = ctx->r13 & 0X100;
    // 0x44004540: beq         $t6, $zero, L_44004618
    if (ctx->r14 == 0) {
        // 0x44004544: lw          $t0, 0xC8($sp)
        ctx->r8 = MEM_W(ctx->r29, 0XC8);
            goto L_44004618;
    }
    // 0x44004544: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x44004548: lw          $t7, 0x28($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X28);
    // 0x4400454C: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x44004550: sll         $t8, $t7, 14
    ctx->r24 = S32(ctx->r15 << 14);
    // 0x44004554: bgez        $t8, L_44004614
    if (SIGNED(ctx->r24) >= 0) {
        // 0x44004558: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_44004614;
    }
    // 0x44004558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4400455C: lwc1        $f0, 0x38($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X38);
    // 0x44004560: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x44004564: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x44004568: addiu       $v0, $v0, -0x11
    ctx->r2 = ADD32(ctx->r2, -0X11);
    // 0x4400456C: bne         $v0, $at, L_440045B8
    if (ctx->r2 != ctx->r1) {
        // 0x44004570: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_440045B8;
    }
    // 0x44004570: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x44004574: lw          $t9, 0x6C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X6C);
    // 0x44004578: nop

    // 0x4400457C: slti        $at, $t9, 0x1F
    ctx->r1 = SIGNED(ctx->r25) < 0X1F ? 1 : 0;
    // 0x44004580: beq         $at, $zero, L_440045A8
    if (ctx->r1 == 0) {
        // 0x44004584: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_440045A8;
    }
    // 0x44004584: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x44004588: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4400458C: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x44004590: mul.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x44004594: lwc1        $f16, 0x6CEC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6CEC);
    // 0x44004598: nop

    // 0x4400459C: mul.s       $f12, $f0, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x440045A0: b           L_440045E4
    // 0x440045A4: lwc1        $f4, 0xE4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XE4);
        goto L_440045E4;
    // 0x440045A4: lwc1        $f4, 0xE4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XE4);
L_440045A8:
    // 0x440045A8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x440045AC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x440045B0: b           L_440045E4
    // 0x440045B4: lwc1        $f4, 0xE4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XE4);
        goto L_440045E4;
    // 0x440045B4: lwc1        $f4, 0xE4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XE4);
L_440045B8:
    // 0x440045B8: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x440045BC: bne         $v0, $at, L_440045E0
    if (ctx->r2 != ctx->r1) {
        // 0x440045C0: lui         $at, 0x4400
        ctx->r1 = S32(0X4400 << 16);
            goto L_440045E0;
    }
    // 0x440045C0: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x440045C4: lwc1        $f18, 0x6CF0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6CF0);
    // 0x440045C8: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x440045CC: mul.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x440045D0: lwc1        $f6, 0x6CF4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6CF4);
    // 0x440045D4: nop

    // 0x440045D8: mul.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x440045DC: nop

L_440045E0:
    // 0x440045E0: lwc1        $f4, 0xE4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XE4);
L_440045E4:
    // 0x440045E4: lwc1        $f10, 0xE8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XE8);
    // 0x440045E8: add.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x440045EC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x440045F0: add.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x440045F4: swc1        $f8, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f8.u32l;
    // 0x440045F8: jal         0x4400157C
    // 0x440045FC: swc1        $f16, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f16.u32l;
    ovl_coll_main_157C(rdram, ctx);
        goto after_19;
    // 0x440045FC: swc1        $f16, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f16.u32l;
    after_19:
    // 0x44004600: lwc1        $f18, 0xE8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XE8);
    // 0x44004604: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x44004608: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x4400460C: jal         0x44003610
    // 0x44004610: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    ovl_coll_main_3610(rdram, ctx);
        goto after_20;
    // 0x44004610: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    after_20:
L_44004614:
    // 0x44004614: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
L_44004618:
    // 0x44004618: lw          $t1, 0xD8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD8);
    // 0x4400461C: nop

    // 0x44004620: sw          $t0, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r8;
L_44004624:
    // 0x44004624: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x44004628: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4400462C: jr          $ra
    // 0x44004630: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x44004630: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void ovl_coll_main_4634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004634: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x44004638: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4400463C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x44004640: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x44004644: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x44004648: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4400464C: bne         $v0, $zero, L_440046D4
    if (ctx->r2 != 0) {
        // 0x44004650: or          $s1, $a1, $zero
        ctx->r17 = ctx->r5 | 0;
            goto L_440046D4;
    }
    // 0x44004650: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x44004654: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x44004658: lw          $t6, 0x28($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X28);
    // 0x4400465C: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x44004660: andi        $t7, $t6, 0x2000
    ctx->r15 = ctx->r14 & 0X2000;
    // 0x44004664: beq         $t7, $zero, L_4400478C
    if (ctx->r15 == 0) {
        // 0x44004668: swc1        $f0, 0x3C($a0)
        MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
            goto L_4400478C;
    }
    // 0x44004668: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
    // 0x4400466C: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x44004670: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x44004674: lwc1        $f9, 0x6CF8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X6CF8);
    // 0x44004678: lwc1        $f8, 0x6CFC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6CFC);
    // 0x4400467C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x44004680: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x44004684: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x44004688: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x4400468C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x44004690: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x44004694: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x44004698: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x4400469C: jal         0x44003A60
    // 0x440046A0: nop

    ovl_coll_main_3A60(rdram, ctx);
        goto after_0;
    // 0x440046A0: nop

    after_0:
    // 0x440046A4: lw          $t8, 0x70($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X70);
    // 0x440046A8: nop

    // 0x440046AC: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x440046B0: nop

    // 0x440046B4: andi        $t0, $t9, 0x100
    ctx->r8 = ctx->r25 & 0X100;
    // 0x440046B8: beq         $t0, $zero, L_44004790
    if (ctx->r8 == 0) {
        // 0x440046BC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_44004790;
    }
    // 0x440046BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x440046C0: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x440046C4: jal         0x44003680
    // 0x440046C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_3680(rdram, ctx);
        goto after_1;
    // 0x440046C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x440046CC: b           L_44004790
    // 0x440046D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_44004790;
    // 0x440046D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_440046D4:
    // 0x440046D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x440046D8: bne         $v0, $at, L_4400478C
    if (ctx->r2 != ctx->r1) {
        // 0x440046DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4400478C;
    }
    // 0x440046DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x440046E0: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x440046E4: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x440046E8: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x440046EC: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x440046F0: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x440046F4: jal         0x44003A60
    // 0x440046F8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    ovl_coll_main_3A60(rdram, ctx);
        goto after_2;
    // 0x440046F8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x440046FC: lw          $t1, 0x70($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X70);
    // 0x44004700: nop

    // 0x44004704: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x44004708: nop

    // 0x4400470C: andi        $t3, $t2, 0x100
    ctx->r11 = ctx->r10 & 0X100;
    // 0x44004710: beq         $t3, $zero, L_44004790
    if (ctx->r11 == 0) {
        // 0x44004714: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_44004790;
    }
    // 0x44004714: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x44004718: lwc1        $f12, 0xE0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XE0);
    // 0x4400471C: jal         0x44000310
    // 0x44004720: nop

    ovl_coll_main_310(rdram, ctx);
        goto after_3;
    // 0x44004720: nop

    after_3:
    // 0x44004724: lwc1        $f4, 0xE4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x44004728: lw          $t4, 0x4($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X4);
    // 0x4400472C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x44004730: lwc1        $f8, 0x0($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X0);
    // 0x44004734: nop

    // 0x44004738: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x4400473C: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x44004740: lw          $t5, 0x4($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X4);
    // 0x44004744: nop

    // 0x44004748: lwc1        $f16, 0x4($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X4);
    // 0x4400474C: nop

    // 0x44004750: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x44004754: lwc1        $f12, 0xE0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XE0);
    // 0x44004758: jal         0x4400031C
    // 0x4400475C: nop

    ovl_coll_main_31C(rdram, ctx);
        goto after_4;
    // 0x4400475C: nop

    after_4:
    // 0x44004760: lwc1        $f18, 0xE4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x44004764: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x44004768: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x4400476C: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x44004770: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x44004774: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x44004778: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4400477C: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x44004780: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x44004784: jal         0x440006C4
    // 0x44004788: nop

    ovl_coll_main_6C4(rdram, ctx);
        goto after_5;
    // 0x44004788: nop

    after_5:
L_4400478C:
    // 0x4400478C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_44004790:
    // 0x44004790: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x44004794: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x44004798: jr          $ra
    // 0x4400479C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x4400479C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_coll_main_47A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440047A0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x440047A4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x440047A8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x440047AC: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x440047B0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x440047B4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x440047B8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x440047BC: lui         $s0, 0x4400
    ctx->r16 = S32(0X4400 << 16);
    // 0x440047C0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x440047C4: addiu       $s0, $s0, 0x7BF0
    ctx->r16 = ADD32(ctx->r16, 0X7BF0);
    // 0x440047C8: addiu       $s1, $zero, 0x10
    ctx->r17 = ADD32(0, 0X10);
    // 0x440047CC: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x440047D0: addiu       $s3, $zero, 0xE
    ctx->r19 = ADD32(0, 0XE);
    // 0x440047D4: addiu       $s4, $sp, 0x3C
    ctx->r20 = ADD32(ctx->r29, 0X3C);
    // 0x440047D8: addiu       $s5, $zero, 0x2E
    ctx->r21 = ADD32(0, 0X2E);
L_440047DC:
    // 0x440047DC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x440047E0: nop

    // 0x440047E4: beq         $s2, $t6, L_44004824
    if (ctx->r18 == ctx->r14) {
        // 0x440047E8: nop
    
            goto L_44004824;
    }
    // 0x440047E8: nop

    // 0x440047EC: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x440047F0: nop

    // 0x440047F4: beq         $s2, $t7, L_44004824
    if (ctx->r18 == ctx->r15) {
        // 0x440047F8: nop
    
            goto L_44004824;
    }
    // 0x440047F8: nop

    // 0x440047FC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x44004800: nop

    // 0x44004804: beq         $s2, $a0, L_44004824
    if (ctx->r18 == ctx->r4) {
        // 0x44004808: nop
    
            goto L_44004824;
    }
    // 0x44004808: nop

    // 0x4400480C: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x44004810: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x44004814: bne         $s3, $t8, L_44004824
    if (ctx->r19 != ctx->r24) {
        // 0x44004818: nop
    
            goto L_44004824;
    }
    // 0x44004818: nop

    // 0x4400481C: jal         0x440006C4
    // 0x44004820: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x44004820: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_0:
L_44004824:
    // 0x44004824: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x44004828: bne         $s1, $s5, L_440047DC
    if (ctx->r17 != ctx->r21) {
        // 0x4400482C: addiu       $s0, $s0, 0xEC
        ctx->r16 = ADD32(ctx->r16, 0XEC);
            goto L_440047DC;
    }
    // 0x4400482C: addiu       $s0, $s0, 0xEC
    ctx->r16 = ADD32(ctx->r16, 0XEC);
    // 0x44004830: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x44004834: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x44004838: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x4400483C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x44004840: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x44004844: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x44004848: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x4400484C: jr          $ra
    // 0x44004850: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x44004850: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_coll_main_4854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004854: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x44004858: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4400485C: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x44004860: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x44004864: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x44004868: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x4400486C: beq         $t6, $at, L_440048A4
    if (ctx->r14 == ctx->r1) {
        // 0x44004870: nop
    
            goto L_440048A4;
    }
    // 0x44004870: nop

    // 0x44004874: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x44004878: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x4400487C: jal         0x4400126C
    // 0x44004880: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_coll_main_126C(rdram, ctx);
        goto after_0;
    // 0x44004880: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x44004884: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x44004888: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x4400488C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x44004890: bne         $v0, $at, L_440048A4
    if (ctx->r2 != ctx->r1) {
        // 0x44004894: sw          $v0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r2;
            goto L_440048A4;
    }
    // 0x44004894: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x44004898: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x4400489C: b           L_44004904
    // 0x440048A0: sw          $t7, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r15;
        goto L_44004904;
    // 0x440048A0: sw          $t7, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r15;
L_440048A4:
    // 0x440048A4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x440048A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x440048AC: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x440048B0: bne         $v0, $at, L_440048D0
    if (ctx->r2 != ctx->r1) {
        // 0x440048B4: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_440048D0;
    }
    // 0x440048B4: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x440048B8: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x440048BC: jal         0x44004634
    // 0x440048C0: nop

    ovl_coll_main_4634(rdram, ctx);
        goto after_1;
    // 0x440048C0: nop

    after_1:
    // 0x440048C4: b           L_44004908
    // 0x440048C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_44004908;
    // 0x440048C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x440048CC: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
L_440048D0:
    // 0x440048D0: bne         $v0, $at, L_440048E4
    if (ctx->r2 != ctx->r1) {
        // 0x440048D4: addiu       $t8, $a0, 0x2C
        ctx->r24 = ADD32(ctx->r4, 0X2C);
            goto L_440048E4;
    }
    // 0x440048D4: addiu       $t8, $a0, 0x2C
    ctx->r24 = ADD32(ctx->r4, 0X2C);
    // 0x440048D8: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x440048DC: b           L_44004904
    // 0x440048E0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
        goto L_44004904;
    // 0x440048E0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_440048E4:
    // 0x440048E4: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x440048E8: bne         $v0, $at, L_44004900
    if (ctx->r2 != ctx->r1) {
        // 0x440048EC: addiu       $t9, $zero, -0x1
        ctx->r25 = ADD32(0, -0X1);
            goto L_44004900;
    }
    // 0x440048EC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x440048F0: jal         0x440047A0
    // 0x440048F4: nop

    ovl_coll_main_47A0(rdram, ctx);
        goto after_2;
    // 0x440048F4: nop

    after_2:
    // 0x440048F8: b           L_44004908
    // 0x440048FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_44004908;
    // 0x440048FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44004900:
    // 0x44004900: sw          $t9, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r25;
L_44004904:
    // 0x44004904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44004908:
    // 0x44004908: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4400490C: jr          $ra
    // 0x44004910: nop

    return;
    // 0x44004910: nop

;}
RECOMP_FUNC void ovl_coll_main_4914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004914: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x44004918: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4400491C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x44004920: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x44004924: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x44004928: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x4400492C: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x44004930: nop

    // 0x44004934: sll         $t6, $v0, 7
    ctx->r14 = S32(ctx->r2 << 7);
    // 0x44004938: bltz        $t6, L_440049C0
    if (SIGNED(ctx->r14) < 0) {
        // 0x4400493C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_440049C0;
    }
    // 0x4400493C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x44004940: lw          $t7, 0x70($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X70);
    // 0x44004944: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x44004948: lw          $v1, 0x0($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X0);
    // 0x4400494C: andi        $t9, $v0, 0x1000
    ctx->r25 = ctx->r2 & 0X1000;
    // 0x44004950: andi        $t8, $v1, 0xFF
    ctx->r24 = ctx->r3 & 0XFF;
    // 0x44004954: bne         $t8, $at, L_4400497C
    if (ctx->r24 != ctx->r1) {
        // 0x44004958: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_4400497C;
    }
    // 0x44004958: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x4400495C: beq         $t9, $zero, L_44004968
    if (ctx->r25 == 0) {
        // 0x44004960: sll         $t0, $v0, 13
        ctx->r8 = S32(ctx->r2 << 13);
            goto L_44004968;
    }
    // 0x44004960: sll         $t0, $v0, 13
    ctx->r8 = S32(ctx->r2 << 13);
    // 0x44004964: bltz        $t0, L_440049BC
    if (SIGNED(ctx->r8) < 0) {
        // 0x44004968: addiu       $a1, $zero, 0x17
        ctx->r5 = ADD32(0, 0X17);
            goto L_440049BC;
    }
L_44004968:
    // 0x44004968: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x4400496C: jal         0x440013E8
    // 0x44004970: addiu       $a2, $a0, 0x74
    ctx->r6 = ADD32(ctx->r4, 0X74);
    ovl_coll_main_13E8(rdram, ctx);
        goto after_0;
    // 0x44004970: addiu       $a2, $a0, 0x74
    ctx->r6 = ADD32(ctx->r4, 0X74);
    after_0:
    // 0x44004974: b           L_440049C0
    // 0x44004978: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_440049C0;
    // 0x44004978: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4400497C:
    // 0x4400497C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x44004980: bne         $v1, $at, L_440049BC
    if (ctx->r3 != ctx->r1) {
        // 0x44004984: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_440049BC;
    }
    // 0x44004984: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x44004988: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4400498C: addiu       $s3, $zero, 0x28
    ctx->r19 = ADD32(0, 0X28);
    // 0x44004990: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_44004994:
    // 0x44004994: lw          $a1, 0x74($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X74);
    // 0x44004998: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x4400499C: beq         $s2, $a1, L_440049B0
    if (ctx->r18 == ctx->r5) {
        // 0x440049A0: nop
    
            goto L_440049B0;
    }
    // 0x440049A0: nop

    // 0x440049A4: jal         0x44000F34
    // 0x440049A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_coll_main_F34(rdram, ctx);
        goto after_1;
    // 0x440049A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x440049AC: sw          $s2, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r18;
L_440049B0:
    // 0x440049B0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x440049B4: bne         $s1, $s3, L_44004994
    if (ctx->r17 != ctx->r19) {
        // 0x440049B8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_44004994;
    }
    // 0x440049B8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_440049BC:
    // 0x440049BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_440049C0:
    // 0x440049C0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x440049C4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x440049C8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x440049CC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x440049D0: jr          $ra
    // 0x440049D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x440049D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_coll_main_49D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440049D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x440049DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x440049E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x440049E4: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x440049E8: jal         0x4400126C
    // 0x440049EC: nop

    ovl_coll_main_126C(rdram, ctx);
        goto after_0;
    // 0x440049EC: nop

    after_0:
    // 0x440049F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x440049F4: beq         $v0, $at, L_44004A04
    if (ctx->r2 == ctx->r1) {
        // 0x440049F8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_44004A04;
    }
    // 0x440049F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x440049FC: jal         0x44004914
    // 0x44004A00: nop

    ovl_coll_main_4914(rdram, ctx);
        goto after_1;
    // 0x44004A00: nop

    after_1:
L_44004A04:
    // 0x44004A04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x44004A08: jal         0x44001968
    // 0x44004A0C: nop

    ovl_coll_main_1968(rdram, ctx);
        goto after_2;
    // 0x44004A0C: nop

    after_2:
    // 0x44004A10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44004A14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44004A18: jr          $ra
    // 0x44004A1C: nop

    return;
    // 0x44004A1C: nop

;}
RECOMP_FUNC void ovl_coll_main_4A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004A20: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x44004A24: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x44004A28: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x44004A2C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x44004A30: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x44004A34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44004A38: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x44004A3C: addiu       $t7, $sp, 0x1C
    ctx->r15 = ADD32(ctx->r29, 0X1C);
    // 0x44004A40: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x44004A44: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x44004A48: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x44004A4C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x44004A50: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x44004A54: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x44004A58: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    // 0x44004A5C: jal         0x440006C4
    // 0x44004A60: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x44004A60: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x44004A64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44004A68: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x44004A6C: jr          $ra
    // 0x44004A70: nop

    return;
    // 0x44004A70: nop

;}
RECOMP_FUNC void ovl_coll_main_4A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004A74: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x44004A78: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x44004A7C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x44004A80: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x44004A84: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x44004A88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44004A8C: addiu       $t6, $sp, 0x1C
    ctx->r14 = ADD32(ctx->r29, 0X1C);
    // 0x44004A90: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x44004A94: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x44004A98: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x44004A9C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x44004AA0: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x44004AA4: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x44004AA8: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    // 0x44004AAC: jal         0x440006C4
    // 0x44004AB0: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x44004AB0: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x44004AB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44004AB8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x44004ABC: jr          $ra
    // 0x44004AC0: nop

    return;
    // 0x44004AC0: nop

;}
RECOMP_FUNC void ovl_coll_main_4AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004AC4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x44004AC8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x44004ACC: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x44004AD0: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x44004AD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44004AD8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x44004ADC: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x44004AE0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x44004AE4: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x44004AE8: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    // 0x44004AEC: jal         0x440006C4
    // 0x44004AF0: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x44004AF0: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x44004AF4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x44004AF8: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x44004AFC: beq         $t6, $zero, L_44004B8C
    if (ctx->r14 == 0) {
        // 0x44004B00: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_44004B8C;
    }
    // 0x44004B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44004B04: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x44004B08: lwc1        $f4, 0x4($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X4);
    // 0x44004B0C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x44004B10: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x44004B14: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x44004B18: bc1t        L_44004B8C
    if (c1cs) {
        // 0x44004B1C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_44004B8C;
    }
    // 0x44004B1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44004B20: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x44004B24: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x44004B28: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x44004B2C: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x44004B30: lwc1        $f10, 0x0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X0);
    // 0x44004B34: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x44004B38: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x44004B3C: lwc1        $f16, 0x4($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X4);
    // 0x44004B40: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x44004B44: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x44004B48: lwc1        $f18, 0x8($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X8);
    // 0x44004B4C: jal         0x440013E8
    // 0x44004B50: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    ovl_coll_main_13E8(rdram, ctx);
        goto after_1;
    // 0x44004B50: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x44004B54: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x44004B58: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x44004B5C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x44004B60: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x44004B64: jal         0x44004A74
    // 0x44004B68: nop

    ovl_coll_main_4A74(rdram, ctx);
        goto after_2;
    // 0x44004B68: nop

    after_2:
    // 0x44004B6C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x44004B70: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x44004B74: lui         $a2, 0x477F
    ctx->r6 = S32(0X477F << 16);
    // 0x44004B78: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x44004B7C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x44004B80: jal         0x44004A20
    // 0x44004B84: ori         $a2, $a2, 0xFF00
    ctx->r6 = ctx->r6 | 0XFF00;
    ovl_coll_main_4A20(rdram, ctx);
        goto after_3;
    // 0x44004B84: ori         $a2, $a2, 0xFF00
    ctx->r6 = ctx->r6 | 0XFF00;
    after_3:
    // 0x44004B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44004B8C:
    // 0x44004B8C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x44004B90: jr          $ra
    // 0x44004B94: nop

    return;
    // 0x44004B94: nop

;}
RECOMP_FUNC void ovl_coll_main_4B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004B98: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x44004B9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44004BA0: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x44004BA4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x44004BA8: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x44004BAC: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x44004BB0: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x44004BB4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x44004BB8: jal         0x440006C4
    // 0x44004BBC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x44004BBC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x44004BC0: bne         $v0, $zero, L_44004C1C
    if (ctx->r2 != 0) {
        // 0x44004BC4: addiu       $a1, $zero, 0x13
        ctx->r5 = ADD32(0, 0X13);
            goto L_44004C1C;
    }
    // 0x44004BC4: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x44004BC8: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x44004BCC: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x44004BD0: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x44004BD4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x44004BD8: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x44004BDC: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x44004BE0: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x44004BE4: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x44004BE8: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x44004BEC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x44004BF0: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x44004BF4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x44004BF8: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x44004BFC: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x44004C00: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x44004C04: lw          $a0, 0x68($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X68);
    // 0x44004C08: jal         0x440013E8
    // 0x44004C0C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_coll_main_13E8(rdram, ctx);
        goto after_1;
    // 0x44004C0C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x44004C10: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x44004C14: b           L_44004C24
    // 0x44004C18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_44004C24;
    // 0x44004C18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44004C1C:
    // 0x44004C1C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x44004C20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44004C24:
    // 0x44004C24: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x44004C28: jr          $ra
    // 0x44004C2C: nop

    return;
    // 0x44004C2C: nop

    // 0x44004C30: jr          $ra
    // 0x44004C34: nop

    return;
    // 0x44004C34: nop

;}
RECOMP_FUNC void ovl_coll_main_4C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004C38: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x44004C3C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x44004C40: jr          $ra
    // 0x44004C44: sw          $t6, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r14;
    return;
    // 0x44004C44: sw          $t6, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r14;
;}
RECOMP_FUNC void ovl_coll_main_4C48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004C48: lui         $t7, 0x4400
    ctx->r15 = S32(0X4400 << 16);
    // 0x44004C4C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x44004C50: addiu       $t7, $t7, 0x5728
    ctx->r15 = ADD32(ctx->r15, 0X5728);
    // 0x44004C54: sw          $t6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r14;
    // 0x44004C58: sw          $t7, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r15;
    // 0x44004C5C: jr          $ra
    // 0x44004C60: sw          $a0, 0x68($a1)
    MEM_W(0X68, ctx->r5) = ctx->r4;
    return;
    // 0x44004C60: sw          $a0, 0x68($a1)
    MEM_W(0X68, ctx->r5) = ctx->r4;
;}
RECOMP_FUNC void ovl_coll_main_4C64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004C64: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x44004C68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44004C6C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x44004C70: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x44004C74: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x44004C78: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x44004C7C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x44004C80: jal         0x440006C4
    // 0x44004C84: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x44004C84: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x44004C88: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x44004C8C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x44004C90: bne         $t7, $at, L_44004CC4
    if (ctx->r15 != ctx->r1) {
        // 0x44004C94: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_44004CC4;
    }
    // 0x44004C94: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x44004C98: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x44004C9C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x44004CA0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x44004CA4: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x44004CA8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x44004CAC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x44004CB0: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x44004CB4: jal         0x44004A74
    // 0x44004CB8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    ovl_coll_main_4A74(rdram, ctx);
        goto after_1;
    // 0x44004CB8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    after_1:
    // 0x44004CBC: b           L_44004CFC
    // 0x44004CC0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
        goto L_44004CFC;
    // 0x44004CC0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
L_44004CC4:
    // 0x44004CC4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x44004CC8: nop

    // 0x44004CCC: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x44004CD0: jal         0x440010F4
    // 0x44004CD4: nop

    ovl_coll_main_10F4(rdram, ctx);
        goto after_2;
    // 0x44004CD4: nop

    after_2:
    // 0x44004CD8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x44004CDC: beq         $v0, $at, L_44004CF8
    if (ctx->r2 == ctx->r1) {
        // 0x44004CE0: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_44004CF8;
    }
    // 0x44004CE0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x44004CE4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x44004CE8: jal         0x44004C48
    // 0x44004CEC: nop

    ovl_coll_main_4C48(rdram, ctx);
        goto after_3;
    // 0x44004CEC: nop

    after_3:
    // 0x44004CF0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x44004CF4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_44004CF8:
    // 0x44004CF8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
L_44004CFC:
    // 0x44004CFC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x44004D00: nop

    // 0x44004D04: sw          $t2, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->r10;
    // 0x44004D08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44004D0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x44004D10: jr          $ra
    // 0x44004D14: nop

    return;
    // 0x44004D14: nop

;}
RECOMP_FUNC void ovl_coll_main_4D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004D18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x44004D1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x44004D20: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x44004D24: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x44004D28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x44004D2C: lwc1        $f6, 0x10($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X10);
    // 0x44004D30: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x44004D34: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x44004D38: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x44004D3C: bc1f        L_44004D58
    if (!c1cs) {
        // 0x44004D40: or          $t6, $a1, $zero
        ctx->r14 = ctx->r5 | 0;
            goto L_44004D58;
    }
    // 0x44004D40: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x44004D44: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x44004D48: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x44004D4C: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x44004D50: jal         0x44004AC4
    // 0x44004D54: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    ovl_coll_main_4AC4(rdram, ctx);
        goto after_0;
    // 0x44004D54: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    after_0:
L_44004D58:
    // 0x44004D58: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x44004D5C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x44004D60: sw          $t7, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->r15;
    // 0x44004D64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x44004D68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x44004D6C: jr          $ra
    // 0x44004D70: nop

    return;
    // 0x44004D70: nop

;}
RECOMP_FUNC void ovl_coll_main_4D74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004D74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44004D78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44004D7C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x44004D80: jal         0x44004D18
    // 0x44004D84: lui         $a3, 0xC0C0
    ctx->r7 = S32(0XC0C0 << 16);
    ovl_coll_main_4D18(rdram, ctx);
        goto after_0;
    // 0x44004D84: lui         $a3, 0xC0C0
    ctx->r7 = S32(0XC0C0 << 16);
    after_0:
    // 0x44004D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44004D8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44004D90: jr          $ra
    // 0x44004D94: nop

    return;
    // 0x44004D94: nop

;}
