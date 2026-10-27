#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world8_8D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60008D54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60008D58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60008D5C: jal         0x60000C1C
    // 0x60008D60: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60008D60: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60008D64: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x60008D68: addiu       $at, $zero, 0x8B9
    ctx->r1 = ADD32(0, 0X8B9);
    // 0x60008D6C: bne         $t6, $at, L_60008D84
    if (ctx->r14 != ctx->r1) {
        // 0x60008D70: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_60008D84;
    }
    // 0x60008D70: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60008D74: jal         0x60000A60
    // 0x60008D78: addiu       $a0, $zero, 0xBFC
    ctx->r4 = ADD32(0, 0XBFC);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_1;
    // 0x60008D78: addiu       $a0, $zero, 0xBFC
    ctx->r4 = ADD32(0, 0XBFC);
    after_1:
    // 0x60008D7C: b           L_60008D8C
    // 0x60008D80: nop

        goto L_60008D8C;
    // 0x60008D80: nop

L_60008D84:
    // 0x60008D84: jal         0x60000A60
    // 0x60008D88: addiu       $a0, $zero, 0xBFD
    ctx->r4 = ADD32(0, 0XBFD);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_2;
    // 0x60008D88: addiu       $a0, $zero, 0xBFD
    ctx->r4 = ADD32(0, 0XBFD);
    after_2:
L_60008D8C:
    // 0x60008D8C: jal         0x600009D0
    // 0x60008D90: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_3;
    // 0x60008D90: nop

    after_3:
    // 0x60008D94: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x60008D98: nop

    // 0x60008D9C: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x60008DA0: beq         $t8, $zero, L_60008DC4
    if (ctx->r24 == 0) {
        // 0x60008DA4: nop
    
            goto L_60008DC4;
    }
    // 0x60008DA4: nop

L_60008DA8:
    // 0x60008DA8: jal         0x600009D0
    // 0x60008DAC: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_4;
    // 0x60008DAC: nop

    after_4:
    // 0x60008DB0: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x60008DB4: nop

    // 0x60008DB8: andi        $t0, $t9, 0x800
    ctx->r8 = ctx->r25 & 0X800;
    // 0x60008DBC: bne         $t0, $zero, L_60008DA8
    if (ctx->r8 != 0) {
        // 0x60008DC0: nop
    
            goto L_60008DA8;
    }
    // 0x60008DC0: nop

L_60008DC4:
    // 0x60008DC4: jal         0x600009C4
    // 0x60008DC8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_5;
    // 0x60008DC8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_5:
    // 0x60008DCC: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x60008DD0: nop

    // 0x60008DD4: ori         $t2, $t1, 0x200
    ctx->r10 = ctx->r9 | 0X200;
    // 0x60008DD8: jal         0x600009AC
    // 0x60008DDC: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    ovl_stage_world8_9AC(rdram, ctx);
        goto after_6;
    // 0x60008DDC: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    after_6:
    // 0x60008DE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60008DE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60008DE8: jr          $ra
    // 0x60008DEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60008DEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world8_8DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60008DF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60008DF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60008DF8: jal         0x60000C1C
    // 0x60008DFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60008DFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60008E00: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60008E04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60008E08: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x60008E0C: beq         $t7, $zero, L_60008E30
    if (ctx->r15 == 0) {
        // 0x60008E10: nop
    
            goto L_60008E30;
    }
    // 0x60008E10: nop

L_60008E14:
    // 0x60008E14: jal         0x600009D0
    // 0x60008E18: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_1;
    // 0x60008E18: nop

    after_1:
    // 0x60008E1C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x60008E20: nop

    // 0x60008E24: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60008E28: bne         $t9, $zero, L_60008E14
    if (ctx->r25 != 0) {
        // 0x60008E2C: nop
    
            goto L_60008E14;
    }
    // 0x60008E2C: nop

L_60008E30:
    // 0x60008E30: jal         0x600009C4
    // 0x60008E34: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_2;
    // 0x60008E34: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_2:
    // 0x60008E38: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x60008E3C: nop

    // 0x60008E40: ori         $t1, $t0, 0x200
    ctx->r9 = ctx->r8 | 0X200;
    // 0x60008E44: jal         0x600009AC
    // 0x60008E48: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    ovl_stage_world8_9AC(rdram, ctx);
        goto after_3;
    // 0x60008E48: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    after_3:
    // 0x60008E4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60008E50: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60008E54: jr          $ra
    // 0x60008E58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60008E58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world8_8E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60008E5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60008E60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60008E64: jal         0x60000C1C
    // 0x60008E68: nop

    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60008E68: nop

    after_0:
    // 0x60008E6C: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60008E70: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x60008E74: bne         $t6, $at, L_60008ED0
    if (ctx->r14 != ctx->r1) {
        // 0x60008E78: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60008ED0;
    }
    // 0x60008E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60008E7C: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x60008E80: addiu       $at, $zero, 0x8BA
    ctx->r1 = ADD32(0, 0X8BA);
    // 0x60008E84: bne         $t7, $at, L_60008EA8
    if (ctx->r15 != ctx->r1) {
        // 0x60008E88: lui         $a0, 0x6001
        ctx->r4 = S32(0X6001 << 16);
            goto L_60008EA8;
    }
    // 0x60008E88: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60008E8C: addiu       $a0, $a0, -0x7210
    ctx->r4 = ADD32(ctx->r4, -0X7210);
    // 0x60008E90: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60008E94: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x60008E98: jal         0x60000994
    // 0x60008E9C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_1;
    // 0x60008E9C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x60008EA0: b           L_60008ED0
    // 0x60008EA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60008ED0;
    // 0x60008EA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60008EA8:
    // 0x60008EA8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x60008EAC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60008EB0: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x60008EB4: bgez        $t9, L_60008ECC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x60008EB8: addiu       $a0, $a0, -0x72AC
        ctx->r4 = ADD32(ctx->r4, -0X72AC);
            goto L_60008ECC;
    }
    // 0x60008EB8: addiu       $a0, $a0, -0x72AC
    ctx->r4 = ADD32(ctx->r4, -0X72AC);
    // 0x60008EBC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60008EC0: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x60008EC4: jal         0x60000994
    // 0x60008EC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_2;
    // 0x60008EC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
L_60008ECC:
    // 0x60008ECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60008ED0:
    // 0x60008ED0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60008ED4: jr          $ra
    // 0x60008ED8: nop

    return;
    // 0x60008ED8: nop

;}
RECOMP_FUNC void ovl_stage_world8_8EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60008EDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60008EE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60008EE4: jal         0x60000BB0
    // 0x60008EE8: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x60008EE8: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    after_0:
    // 0x60008EEC: bne         $v0, $zero, L_60008F2C
    if (ctx->r2 != 0) {
        // 0x60008EF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60008F2C;
    }
    // 0x60008EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60008EF4: jal         0x60000BB0
    // 0x60008EF8: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x60008EF8: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    after_1:
    // 0x60008EFC: beq         $v0, $zero, L_60008F2C
    if (ctx->r2 == 0) {
        // 0x60008F00: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60008F2C;
    }
    // 0x60008F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60008F04: jal         0x60000BB0
    // 0x60008F08: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_2;
    // 0x60008F08: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
    after_2:
    // 0x60008F0C: beq         $v0, $zero, L_60008F28
    if (ctx->r2 == 0) {
        // 0x60008F10: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_60008F28;
    }
    // 0x60008F10: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x60008F14: jal         0x60000F04
    // 0x60008F18: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    ovl_stage_world8_F04(rdram, ctx);
        goto after_3;
    // 0x60008F18: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    after_3:
    // 0x60008F1C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x60008F20: jal         0x60000F04
    // 0x60008F24: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    ovl_stage_world8_F04(rdram, ctx);
        goto after_4;
    // 0x60008F24: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    after_4:
L_60008F28:
    // 0x60008F28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60008F2C:
    // 0x60008F2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60008F30: jr          $ra
    // 0x60008F34: nop

    return;
    // 0x60008F34: nop

;}
RECOMP_FUNC void ovl_stage_world8_8F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60008F38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60008F3C: slti        $at, $a0, 0x64
    ctx->r1 = SIGNED(ctx->r4) < 0X64 ? 1 : 0;
    // 0x60008F40: bne         $at, $zero, L_60008F5C
    if (ctx->r1 != 0) {
        // 0x60008F44: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_60008F5C;
    }
    // 0x60008F44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60008F48: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x60008F4C: beq         $a0, $at, L_60009498
    if (ctx->r4 == ctx->r1) {
        // 0x60008F50: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60009498;
    }
    // 0x60008F50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60008F54: b           L_60009498
    // 0x60008F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x60008F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60008F5C:
    // 0x60008F5C: sltiu       $at, $a0, 0x64
    ctx->r1 = ctx->r4 < 0X64 ? 1 : 0;
    // 0x60008F60: beq         $at, $zero, L_60009494
    if (ctx->r1 == 0) {
        // 0x60008F64: sll         $t6, $a0, 2
        ctx->r14 = S32(ctx->r4 << 2);
            goto L_60009494;
    }
    // 0x60008F64: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x60008F68: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60008F6C: addu        $at, $at, $t6
    gpr jr_addend_60008F78 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x60008F70: lw          $t6, -0x698C($at)
    ctx->r14 = ADD32(ctx->r1, -0X698C);
    // 0x60008F74: nop

    // 0x60008F78: jr          $t6
    // 0x60008F7C: nop

    switch (jr_addend_60008F78 >> 2) {
        case 0: goto L_60008F80; break;
        case 1: goto L_60008F90; break;
        case 2: goto L_60008FA0; break;
        case 3: goto L_60008FB0; break;
        case 4: goto L_60008FC0; break;
        case 5: goto L_60008FD0; break;
        case 6: goto L_60008FE0; break;
        case 7: goto L_60008FF0; break;
        case 8: goto L_60009000; break;
        case 9: goto L_60009010; break;
        case 10: goto L_60009020; break;
        case 11: goto L_60009030; break;
        case 12: goto L_60009040; break;
        case 13: goto L_60009050; break;
        case 14: goto L_60009060; break;
        case 15: goto L_60009070; break;
        case 16: goto L_60009080; break;
        case 17: goto L_60009090; break;
        case 18: goto L_600090A0; break;
        case 19: goto L_600090B0; break;
        case 20: goto L_600090C0; break;
        case 21: goto L_600090D0; break;
        case 22: goto L_600090E0; break;
        case 23: goto L_600090F0; break;
        case 24: goto L_60009100; break;
        case 25: goto L_60009110; break;
        case 26: goto L_60009120; break;
        case 27: goto L_60009130; break;
        case 28: goto L_60009494; break;
        case 29: goto L_60009140; break;
        case 30: goto L_60009150; break;
        case 31: goto L_60009160; break;
        case 32: goto L_60009170; break;
        case 33: goto L_60009180; break;
        case 34: goto L_60009190; break;
        case 35: goto L_600091A0; break;
        case 36: goto L_600091B0; break;
        case 37: goto L_600091C0; break;
        case 38: goto L_600091D0; break;
        case 39: goto L_600091E0; break;
        case 40: goto L_600091F0; break;
        case 41: goto L_60009200; break;
        case 42: goto L_60009210; break;
        case 43: goto L_60009220; break;
        case 44: goto L_60009230; break;
        case 45: goto L_60009240; break;
        case 46: goto L_60009250; break;
        case 47: goto L_60009260; break;
        case 48: goto L_60009270; break;
        case 49: goto L_60009280; break;
        case 50: goto L_60009290; break;
        case 51: goto L_600092A0; break;
        case 52: goto L_600092B0; break;
        case 53: goto L_600092C0; break;
        case 54: goto L_600092D0; break;
        case 55: goto L_600092E0; break;
        case 56: goto L_600092F0; break;
        case 57: goto L_60009300; break;
        case 58: goto L_60009310; break;
        case 59: goto L_60009320; break;
        case 60: goto L_60009330; break;
        case 61: goto L_60009340; break;
        case 62: goto L_60009350; break;
        case 63: goto L_60009360; break;
        case 64: goto L_60009370; break;
        case 65: goto L_60009380; break;
        case 66: goto L_60009390; break;
        case 67: goto L_600093A0; break;
        case 68: goto L_600093E4; break;
        case 69: goto L_600093F4; break;
        case 70: goto L_60009404; break;
        case 71: goto L_60009414; break;
        case 72: goto L_60009494; break;
        case 73: goto L_60009424; break;
        case 74: goto L_60009434; break;
        case 75: goto L_60009444; break;
        case 76: goto L_60009454; break;
        case 77: goto L_60009464; break;
        case 78: goto L_60009494; break;
        case 79: goto L_60009494; break;
        case 80: goto L_60009494; break;
        case 81: goto L_60009494; break;
        case 82: goto L_60009494; break;
        case 83: goto L_60009494; break;
        case 84: goto L_60009494; break;
        case 85: goto L_60009494; break;
        case 86: goto L_60009494; break;
        case 87: goto L_60009494; break;
        case 88: goto L_60009494; break;
        case 89: goto L_60009494; break;
        case 90: goto L_60009494; break;
        case 91: goto L_60009494; break;
        case 92: goto L_60009494; break;
        case 93: goto L_60009494; break;
        case 94: goto L_60009494; break;
        case 95: goto L_60009494; break;
        case 96: goto L_60009474; break;
        case 97: goto L_60009494; break;
        case 98: goto L_6000947C; break;
        case 99: goto L_6000948C; break;
        default: switch_error(__func__, 0x60008F78, 0x60009674);
    }
    // 0x60008F7C: nop

L_60008F80:
    // 0x60008F80: jal         0x60003C0C
    // 0x60008F84: nop

    ovl_stage_world8_3C0C(rdram, ctx);
        goto after_0;
    // 0x60008F84: nop

    after_0:
    // 0x60008F88: b           L_60009498
    // 0x60008F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x60008F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60008F90:
    // 0x60008F90: jal         0x60003E24
    // 0x60008F94: nop

    ovl_stage_world8_3E24(rdram, ctx);
        goto after_1;
    // 0x60008F94: nop

    after_1:
    // 0x60008F98: b           L_60009498
    // 0x60008F9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x60008F9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60008FA0:
    // 0x60008FA0: jal         0x6000401C
    // 0x60008FA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_401C(rdram, ctx);
        goto after_2;
    // 0x60008FA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x60008FA8: b           L_60009498
    // 0x60008FAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x60008FAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60008FB0:
    // 0x60008FB0: jal         0x6000401C
    // 0x60008FB4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_401C(rdram, ctx);
        goto after_3;
    // 0x60008FB4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x60008FB8: b           L_60009498
    // 0x60008FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x60008FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60008FC0:
    // 0x60008FC0: jal         0x6000401C
    // 0x60008FC4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_401C(rdram, ctx);
        goto after_4;
    // 0x60008FC4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x60008FC8: b           L_60009498
    // 0x60008FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x60008FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60008FD0:
    // 0x60008FD0: jal         0x6000401C
    // 0x60008FD4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world8_401C(rdram, ctx);
        goto after_5;
    // 0x60008FD4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_5:
    // 0x60008FD8: b           L_60009498
    // 0x60008FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x60008FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60008FE0:
    // 0x60008FE0: jal         0x600043B8
    // 0x60008FE4: nop

    ovl_stage_world8_43B8(rdram, ctx);
        goto after_6;
    // 0x60008FE4: nop

    after_6:
    // 0x60008FE8: b           L_60009498
    // 0x60008FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x60008FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60008FF0:
    // 0x60008FF0: jal         0x600045E4
    // 0x60008FF4: nop

    ovl_stage_world8_45E4(rdram, ctx);
        goto after_7;
    // 0x60008FF4: nop

    after_7:
    // 0x60008FF8: b           L_60009498
    // 0x60008FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x60008FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009000:
    // 0x60009000: jal         0x600046A8
    // 0x60009004: nop

    ovl_stage_world8_46A8(rdram, ctx);
        goto after_8;
    // 0x60009004: nop

    after_8:
    // 0x60009008: b           L_60009498
    // 0x6000900C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000900C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009010:
    // 0x60009010: jal         0x60004770
    // 0x60009014: nop

    ovl_stage_world8_4770(rdram, ctx);
        goto after_9;
    // 0x60009014: nop

    after_9:
    // 0x60009018: b           L_60009498
    // 0x6000901C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000901C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009020:
    // 0x60009020: jal         0x600048DC
    // 0x60009024: nop

    ovl_stage_world8_48DC(rdram, ctx);
        goto after_10;
    // 0x60009024: nop

    after_10:
    // 0x60009028: b           L_60009498
    // 0x6000902C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000902C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009030:
    // 0x60009030: jal         0x60004A58
    // 0x60009034: nop

    ovl_stage_world8_4A58(rdram, ctx);
        goto after_11;
    // 0x60009034: nop

    after_11:
    // 0x60009038: b           L_60009498
    // 0x6000903C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000903C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009040:
    // 0x60009040: jal         0x60004BD4
    // 0x60009044: nop

    ovl_stage_world8_4BD4(rdram, ctx);
        goto after_12;
    // 0x60009044: nop

    after_12:
    // 0x60009048: b           L_60009498
    // 0x6000904C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000904C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009050:
    // 0x60009050: jal         0x60004DE4
    // 0x60009054: nop

    ovl_stage_world8_4DE4(rdram, ctx);
        goto after_13;
    // 0x60009054: nop

    after_13:
    // 0x60009058: b           L_60009498
    // 0x6000905C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000905C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009060:
    // 0x60009060: jal         0x60004E20
    // 0x60009064: nop

    ovl_stage_world8_4E20(rdram, ctx);
        goto after_14;
    // 0x60009064: nop

    after_14:
    // 0x60009068: b           L_60009498
    // 0x6000906C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000906C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009070:
    // 0x60009070: jal         0x60004E50
    // 0x60009074: nop

    ovl_stage_world8_4E50(rdram, ctx);
        goto after_15;
    // 0x60009074: nop

    after_15:
    // 0x60009078: b           L_60009498
    // 0x6000907C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000907C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009080:
    // 0x60009080: jal         0x60004F8C
    // 0x60009084: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_4F8C(rdram, ctx);
        goto after_16;
    // 0x60009084: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_16:
    // 0x60009088: b           L_60009498
    // 0x6000908C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000908C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009090:
    // 0x60009090: jal         0x60004F8C
    // 0x60009094: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_4F8C(rdram, ctx);
        goto after_17;
    // 0x60009094: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_17:
    // 0x60009098: b           L_60009498
    // 0x6000909C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000909C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600090A0:
    // 0x600090A0: jal         0x60004F8C
    // 0x600090A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_4F8C(rdram, ctx);
        goto after_18;
    // 0x600090A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_18:
    // 0x600090A8: b           L_60009498
    // 0x600090AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x600090AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600090B0:
    // 0x600090B0: jal         0x60004F8C
    // 0x600090B4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world8_4F8C(rdram, ctx);
        goto after_19;
    // 0x600090B4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_19:
    // 0x600090B8: b           L_60009498
    // 0x600090BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x600090BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600090C0:
    // 0x600090C0: jal         0x60004F8C
    // 0x600090C4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world8_4F8C(rdram, ctx);
        goto after_20;
    // 0x600090C4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_20:
    // 0x600090C8: b           L_60009498
    // 0x600090CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x600090CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600090D0:
    // 0x600090D0: jal         0x60004F8C
    // 0x600090D4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world8_4F8C(rdram, ctx);
        goto after_21;
    // 0x600090D4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_21:
    // 0x600090D8: b           L_60009498
    // 0x600090DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x600090DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600090E0:
    // 0x600090E0: jal         0x60004F8C
    // 0x600090E4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_stage_world8_4F8C(rdram, ctx);
        goto after_22;
    // 0x600090E4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_22:
    // 0x600090E8: b           L_60009498
    // 0x600090EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x600090EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600090F0:
    // 0x600090F0: jal         0x60004F8C
    // 0x600090F4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_stage_world8_4F8C(rdram, ctx);
        goto after_23;
    // 0x600090F4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_23:
    // 0x600090F8: b           L_60009498
    // 0x600090FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x600090FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009100:
    // 0x60009100: jal         0x600051BC
    // 0x60009104: nop

    ovl_stage_world8_51BC(rdram, ctx);
        goto after_24;
    // 0x60009104: nop

    after_24:
    // 0x60009108: b           L_60009498
    // 0x6000910C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000910C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009110:
    // 0x60009110: jal         0x60005304
    // 0x60009114: nop

    ovl_stage_world8_5304(rdram, ctx);
        goto after_25;
    // 0x60009114: nop

    after_25:
    // 0x60009118: b           L_60009498
    // 0x6000911C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000911C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009120:
    // 0x60009120: jal         0x6000546C
    // 0x60009124: nop

    ovl_stage_world8_546C(rdram, ctx);
        goto after_26;
    // 0x60009124: nop

    after_26:
    // 0x60009128: b           L_60009498
    // 0x6000912C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000912C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009130:
    // 0x60009130: jal         0x6000553C
    // 0x60009134: nop

    ovl_stage_world8_553C(rdram, ctx);
        goto after_27;
    // 0x60009134: nop

    after_27:
    // 0x60009138: b           L_60009498
    // 0x6000913C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000913C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009140:
    // 0x60009140: jal         0x6000555C
    // 0x60009144: nop

    ovl_stage_world8_555C(rdram, ctx);
        goto after_28;
    // 0x60009144: nop

    after_28:
    // 0x60009148: b           L_60009498
    // 0x6000914C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000914C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009150:
    // 0x60009150: jal         0x600055C8
    // 0x60009154: nop

    ovl_stage_world8_55C8(rdram, ctx);
        goto after_29;
    // 0x60009154: nop

    after_29:
    // 0x60009158: b           L_60009498
    // 0x6000915C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000915C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009160:
    // 0x60009160: jal         0x60005614
    // 0x60009164: nop

    ovl_stage_world8_5614(rdram, ctx);
        goto after_30;
    // 0x60009164: nop

    after_30:
    // 0x60009168: b           L_60009498
    // 0x6000916C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000916C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009170:
    // 0x60009170: jal         0x60005678
    // 0x60009174: nop

    ovl_stage_world8_5678(rdram, ctx);
        goto after_31;
    // 0x60009174: nop

    after_31:
    // 0x60009178: b           L_60009498
    // 0x6000917C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000917C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009180:
    // 0x60009180: jal         0x600056E4
    // 0x60009184: nop

    ovl_stage_world8_56E4(rdram, ctx);
        goto after_32;
    // 0x60009184: nop

    after_32:
    // 0x60009188: b           L_60009498
    // 0x6000918C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000918C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009190:
    // 0x60009190: jal         0x60005730
    // 0x60009194: nop

    ovl_stage_world8_5730(rdram, ctx);
        goto after_33;
    // 0x60009194: nop

    after_33:
    // 0x60009198: b           L_60009498
    // 0x6000919C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000919C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600091A0:
    // 0x600091A0: jal         0x600057B8
    // 0x600091A4: nop

    ovl_stage_world8_57B8(rdram, ctx);
        goto after_34;
    // 0x600091A4: nop

    after_34:
    // 0x600091A8: b           L_60009498
    // 0x600091AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x600091AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600091B0:
    // 0x600091B0: jal         0x60005880
    // 0x600091B4: nop

    ovl_stage_world8_5880(rdram, ctx);
        goto after_35;
    // 0x600091B4: nop

    after_35:
    // 0x600091B8: b           L_60009498
    // 0x600091BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x600091BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600091C0:
    // 0x600091C0: jal         0x60005910
    // 0x600091C4: nop

    ovl_stage_world8_5910(rdram, ctx);
        goto after_36;
    // 0x600091C4: nop

    after_36:
    // 0x600091C8: b           L_60009498
    // 0x600091CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x600091CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600091D0:
    // 0x600091D0: jal         0x60005B14
    // 0x600091D4: nop

    ovl_stage_world8_5B14(rdram, ctx);
        goto after_37;
    // 0x600091D4: nop

    after_37:
    // 0x600091D8: b           L_60009498
    // 0x600091DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x600091DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600091E0:
    // 0x600091E0: jal         0x60005C8C
    // 0x600091E4: nop

    ovl_stage_world8_5C8C(rdram, ctx);
        goto after_38;
    // 0x600091E4: nop

    after_38:
    // 0x600091E8: b           L_60009498
    // 0x600091EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x600091EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600091F0:
    // 0x600091F0: jal         0x60005EA0
    // 0x600091F4: nop

    ovl_stage_world8_5EA0(rdram, ctx);
        goto after_39;
    // 0x600091F4: nop

    after_39:
    // 0x600091F8: b           L_60009498
    // 0x600091FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x600091FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009200:
    // 0x60009200: jal         0x60005ED0
    // 0x60009204: nop

    ovl_stage_world8_5ED0(rdram, ctx);
        goto after_40;
    // 0x60009204: nop

    after_40:
    // 0x60009208: b           L_60009498
    // 0x6000920C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000920C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009210:
    // 0x60009210: jal         0x60005F28
    // 0x60009214: nop

    ovl_stage_world8_5F28(rdram, ctx);
        goto after_41;
    // 0x60009214: nop

    after_41:
    // 0x60009218: b           L_60009498
    // 0x6000921C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000921C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009220:
    // 0x60009220: jal         0x6000605C
    // 0x60009224: nop

    ovl_stage_world8_605C(rdram, ctx);
        goto after_42;
    // 0x60009224: nop

    after_42:
    // 0x60009228: b           L_60009498
    // 0x6000922C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000922C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009230:
    // 0x60009230: jal         0x600061B8
    // 0x60009234: nop

    ovl_stage_world8_61B8(rdram, ctx);
        goto after_43;
    // 0x60009234: nop

    after_43:
    // 0x60009238: b           L_60009498
    // 0x6000923C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000923C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009240:
    // 0x60009240: jal         0x600064B0
    // 0x60009244: nop

    ovl_stage_world8_64B0(rdram, ctx);
        goto after_44;
    // 0x60009244: nop

    after_44:
    // 0x60009248: b           L_60009498
    // 0x6000924C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000924C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009250:
    // 0x60009250: jal         0x60006684
    // 0x60009254: nop

    ovl_stage_world8_6684(rdram, ctx);
        goto after_45;
    // 0x60009254: nop

    after_45:
    // 0x60009258: b           L_60009498
    // 0x6000925C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000925C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009260:
    // 0x60009260: jal         0x6000681C
    // 0x60009264: nop

    ovl_stage_world8_681C(rdram, ctx);
        goto after_46;
    // 0x60009264: nop

    after_46:
    // 0x60009268: b           L_60009498
    // 0x6000926C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000926C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009270:
    // 0x60009270: jal         0x60006C8C
    // 0x60009274: nop

    ovl_stage_world8_6C8C(rdram, ctx);
        goto after_47;
    // 0x60009274: nop

    after_47:
    // 0x60009278: b           L_60009498
    // 0x6000927C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000927C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009280:
    // 0x60009280: jal         0x60006D64
    // 0x60009284: nop

    ovl_stage_world8_6D64(rdram, ctx);
        goto after_48;
    // 0x60009284: nop

    after_48:
    // 0x60009288: b           L_60009498
    // 0x6000928C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000928C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009290:
    // 0x60009290: jal         0x60006E94
    // 0x60009294: nop

    ovl_stage_world8_6E94(rdram, ctx);
        goto after_49;
    // 0x60009294: nop

    after_49:
    // 0x60009298: b           L_60009498
    // 0x6000929C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000929C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600092A0:
    // 0x600092A0: jal         0x60007354
    // 0x600092A4: nop

    ovl_stage_world8_7354(rdram, ctx);
        goto after_50;
    // 0x600092A4: nop

    after_50:
    // 0x600092A8: b           L_60009498
    // 0x600092AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x600092AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600092B0:
    // 0x600092B0: jal         0x60007490
    // 0x600092B4: nop

    ovl_stage_world8_7490(rdram, ctx);
        goto after_51;
    // 0x600092B4: nop

    after_51:
    // 0x600092B8: b           L_60009498
    // 0x600092BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x600092BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600092C0:
    // 0x600092C0: jal         0x60007668
    // 0x600092C4: nop

    ovl_stage_world8_7668(rdram, ctx);
        goto after_52;
    // 0x600092C4: nop

    after_52:
    // 0x600092C8: b           L_60009498
    // 0x600092CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x600092CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600092D0:
    // 0x600092D0: jal         0x600078CC
    // 0x600092D4: nop

    ovl_stage_world8_78CC(rdram, ctx);
        goto after_53;
    // 0x600092D4: nop

    after_53:
    // 0x600092D8: b           L_60009498
    // 0x600092DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x600092DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600092E0:
    // 0x600092E0: jal         0x60007BFC
    // 0x600092E4: nop

    ovl_stage_world8_7BFC(rdram, ctx);
        goto after_54;
    // 0x600092E4: nop

    after_54:
    // 0x600092E8: b           L_60009498
    // 0x600092EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x600092EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600092F0:
    // 0x600092F0: jal         0x60007FA4
    // 0x600092F4: nop

    ovl_stage_world8_7FA4(rdram, ctx);
        goto after_55;
    // 0x600092F4: nop

    after_55:
    // 0x600092F8: b           L_60009498
    // 0x600092FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x600092FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009300:
    // 0x60009300: jal         0x60008014
    // 0x60009304: nop

    ovl_stage_world8_8014(rdram, ctx);
        goto after_56;
    // 0x60009304: nop

    after_56:
    // 0x60009308: b           L_60009498
    // 0x6000930C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000930C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009310:
    // 0x60009310: jal         0x600082C8
    // 0x60009314: nop

    ovl_stage_world8_82C8(rdram, ctx);
        goto after_57;
    // 0x60009314: nop

    after_57:
    // 0x60009318: b           L_60009498
    // 0x6000931C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000931C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009320:
    // 0x60009320: jal         0x6000834C
    // 0x60009324: nop

    ovl_stage_world8_834C(rdram, ctx);
        goto after_58;
    // 0x60009324: nop

    after_58:
    // 0x60009328: b           L_60009498
    // 0x6000932C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000932C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009330:
    // 0x60009330: jal         0x600083B8
    // 0x60009334: nop

    ovl_stage_world8_83B8(rdram, ctx);
        goto after_59;
    // 0x60009334: nop

    after_59:
    // 0x60009338: b           L_60009498
    // 0x6000933C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000933C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009340:
    // 0x60009340: jal         0x600083D8
    // 0x60009344: nop

    ovl_stage_world8_83D8(rdram, ctx);
        goto after_60;
    // 0x60009344: nop

    after_60:
    // 0x60009348: b           L_60009498
    // 0x6000934C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000934C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009350:
    // 0x60009350: jal         0x60008418
    // 0x60009354: nop

    ovl_stage_world8_8418(rdram, ctx);
        goto after_61;
    // 0x60009354: nop

    after_61:
    // 0x60009358: b           L_60009498
    // 0x6000935C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000935C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009360:
    // 0x60009360: jal         0x60008480
    // 0x60009364: nop

    ovl_stage_world8_8480(rdram, ctx);
        goto after_62;
    // 0x60009364: nop

    after_62:
    // 0x60009368: b           L_60009498
    // 0x6000936C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000936C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009370:
    // 0x60009370: jal         0x600086A0
    // 0x60009374: nop

    ovl_stage_world8_86A0(rdram, ctx);
        goto after_63;
    // 0x60009374: nop

    after_63:
    // 0x60009378: b           L_60009498
    // 0x6000937C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000937C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009380:
    // 0x60009380: jal         0x6000884C
    // 0x60009384: nop

    ovl_stage_world8_884C(rdram, ctx);
        goto after_64;
    // 0x60009384: nop

    after_64:
    // 0x60009388: b           L_60009498
    // 0x6000938C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000938C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009390:
    // 0x60009390: jal         0x60008A10
    // 0x60009394: nop

    ovl_stage_world8_8A10(rdram, ctx);
        goto after_65;
    // 0x60009394: nop

    after_65:
    // 0x60009398: b           L_60009498
    // 0x6000939C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x6000939C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600093A0:
    // 0x600093A0: jal         0x60000244
    // 0x600093A4: addiu       $a0, $zero, 0x1E0
    ctx->r4 = ADD32(0, 0X1E0);
    ovl_stage_world8_244(rdram, ctx);
        goto after_66;
    // 0x600093A4: addiu       $a0, $zero, 0x1E0
    ctx->r4 = ADD32(0, 0X1E0);
    after_66:
    // 0x600093A8: jal         0x60000BB0
    // 0x600093AC: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_67;
    // 0x600093AC: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    after_67:
    // 0x600093B0: beq         $v0, $zero, L_60009498
    if (ctx->r2 == 0) {
        // 0x600093B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60009498;
    }
    // 0x600093B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600093B8: jal         0x60000BB0
    // 0x600093BC: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_68;
    // 0x600093BC: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
    after_68:
    // 0x600093C0: beq         $v0, $zero, L_60009494
    if (ctx->r2 == 0) {
        // 0x600093C4: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_60009494;
    }
    // 0x600093C4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x600093C8: jal         0x60000F04
    // 0x600093CC: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    ovl_stage_world8_F04(rdram, ctx);
        goto after_69;
    // 0x600093CC: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    after_69:
    // 0x600093D0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x600093D4: jal         0x60000F04
    // 0x600093D8: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    ovl_stage_world8_F04(rdram, ctx);
        goto after_70;
    // 0x600093D8: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    after_70:
    // 0x600093DC: b           L_60009498
    // 0x600093E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x600093E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600093E4:
    // 0x600093E4: jal         0x60008AC8
    // 0x600093E8: nop

    ovl_stage_world8_8AC8(rdram, ctx);
        goto after_71;
    // 0x600093E8: nop

    after_71:
    // 0x600093EC: b           L_60009498
    // 0x600093F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x600093F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600093F4:
    // 0x600093F4: jal         0x60008B54
    // 0x600093F8: nop

    ovl_stage_world8_8B54(rdram, ctx);
        goto after_72;
    // 0x600093F8: nop

    after_72:
    // 0x600093FC: b           L_60009498
    // 0x60009400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x60009400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009404:
    // 0x60009404: jal         0x60008BE0
    // 0x60009408: nop

    ovl_stage_world8_8BE0(rdram, ctx);
        goto after_73;
    // 0x60009408: nop

    after_73:
    // 0x6000940C: b           L_60009498
    // 0x60009410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x60009410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009414:
    // 0x60009414: jal         0x60008BE8
    // 0x60009418: nop

    ovl_stage_world8_8BE8(rdram, ctx);
        goto after_74;
    // 0x60009418: nop

    after_74:
    // 0x6000941C: b           L_60009498
    // 0x60009420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x60009420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009424:
    // 0x60009424: jal         0x600060C0
    // 0x60009428: nop

    ovl_stage_world8_60C0(rdram, ctx);
        goto after_75;
    // 0x60009428: nop

    after_75:
    // 0x6000942C: b           L_60009498
    // 0x60009430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x60009430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009434:
    // 0x60009434: jal         0x600060F8
    // 0x60009438: nop

    ovl_stage_world8_60F8(rdram, ctx);
        goto after_76;
    // 0x60009438: nop

    after_76:
    // 0x6000943C: b           L_60009498
    // 0x60009440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x60009440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009444:
    // 0x60009444: jal         0x60006130
    // 0x60009448: nop

    ovl_stage_world8_6130(rdram, ctx);
        goto after_77;
    // 0x60009448: nop

    after_77:
    // 0x6000944C: b           L_60009498
    // 0x60009450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x60009450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009454:
    // 0x60009454: jal         0x600085B4
    // 0x60009458: nop

    ovl_stage_world8_85B4(rdram, ctx);
        goto after_78;
    // 0x60009458: nop

    after_78:
    // 0x6000945C: b           L_60009498
    // 0x60009460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x60009460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009464:
    // 0x60009464: jal         0x60008EDC
    // 0x60009468: nop

    ovl_stage_world8_8EDC(rdram, ctx);
        goto after_79;
    // 0x60009468: nop

    after_79:
    // 0x6000946C: b           L_60009498
    // 0x60009470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x60009470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009474:
    // 0x60009474: jal         0x60008E5C
    // 0x60009478: nop

    ovl_stage_world8_8E5C(rdram, ctx);
        goto after_80;
    // 0x60009478: nop

    after_80:
L_6000947C:
    // 0x6000947C: jal         0x60008CF0
    // 0x60009480: nop

    ovl_stage_world8_8CF0(rdram, ctx);
        goto after_81;
    // 0x60009480: nop

    after_81:
    // 0x60009484: b           L_60009498
    // 0x60009488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60009498;
    // 0x60009488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000948C:
    // 0x6000948C: jal         0x60000EE0
    // 0x60009490: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_EE0(rdram, ctx);
        goto after_82;
    // 0x60009490: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_82:
L_60009494:
    // 0x60009494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60009498:
    // 0x60009498: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000949C: jr          $ra
    // 0x600094A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x600094A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_801D0000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801D0000: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
    // 0x801D0004: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x801D0008: addiu       $t2, $t2, 0x7910
    ctx->r10 = ADD32(ctx->r10, 0X7910);
    // 0x801D000C: andi        $t1, $t1, 0xFF
    ctx->r9 = ctx->r9 & 0XFF;
    // 0x801D0010: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x801D0014: andi        $t0, $t0, 0xFF00
    ctx->r8 = ctx->r8 & 0XFF00;
    // 0x801D0018: srl         $t0, $t0, 6
    ctx->r8 = S32(U32(ctx->r8) >> 6);
    // 0x801D001C: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x801D0020: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x801D0024: nop

    // 0x801D0028: beq         $t2, $zero, L_801D004C
    if (ctx->r10 == 0) {
        // 0x801D002C: nop
    
            goto L_801D004C;
    }
    // 0x801D002C: nop

    // 0x801D0030: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x801D0034: lw          $t2, 0x0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X0);
    // 0x801D0038: nop

    // 0x801D003C: beq         $t2, $zero, L_801D006C
    if (ctx->r10 == 0) {
        // 0x801D0040: nop
    
            goto L_801D006C;
    }
    // 0x801D0040: nop

    // 0x801D0044: jr          $t2
    // 0x801D0048: nop

    LOOKUP_FUNC(ctx->r10)(rdram, ctx);
    return;
    // 0x801D0048: nop

L_801D004C:
    // 0x801D004C: srl         $t0, $t0, 2
    ctx->r8 = S32(U32(ctx->r8) >> 2);
    // 0x801D0050: srl         $t1, $t1, 2
    ctx->r9 = S32(U32(ctx->r9) >> 2);
    // 0x801D0054: lui         $a0, 0x1000
    ctx->r4 = S32(0X1000 << 16);
    // 0x801D0058: addiu       $a0, $a0, 0xA0
    ctx->r4 = ADD32(ctx->r4, 0XA0);
    // 0x801D005C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x801D0060: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x801D0064: b           L_801D0084
    // 0x801D0068: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
        goto L_801D0084;
    // 0x801D0068: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
L_801D006C:
    // 0x801D006C: srl         $t1, $t1, 2
    ctx->r9 = S32(U32(ctx->r9) >> 2);
    // 0x801D0070: lui         $a0, 0x1000
    ctx->r4 = S32(0X1000 << 16);
    // 0x801D0074: addiu       $a0, $a0, 0xE2
    ctx->r4 = ADD32(ctx->r4, 0XE2);
    // 0x801D0078: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x801D007C: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x801D0080: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
L_801D0084:
    // 0x801D0084: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x801D0088: addiu       $t0, $t0, 0xFA0
    ctx->r8 = ADD32(ctx->r8, 0XFA0);
    // 0x801D008C: jalr        $t0
    // 0x801D0090: nop

    LOOKUP_FUNC(ctx->r8)(rdram, ctx);
        goto after_0;
L_801D0090:
    // 0x801D0090: nop

    after_0:
    // 0x801D0094: b           L_801D0090
    // 0x801D0098: nop

        goto L_801D0090;
    // 0x801D0098: nop

    // 0x801D009C: nop

;}
