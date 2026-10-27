#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_enemy_world4_2CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002CD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43002CDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002CE0: lw          $a1, 0x190($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X190);
    // 0x43002CE4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43002CE8: beq         $a1, $at, L_43002D08
    if (ctx->r5 == ctx->r1) {
        // 0x43002CEC: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_43002D08;
    }
    // 0x43002CEC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x43002CF0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x43002CF4: jal         0x43000550
    // 0x43002CF8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_enemy_world4_550(rdram, ctx);
        goto after_0;
    // 0x43002CF8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x43002CFC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x43002D00: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x43002D04: sw          $t6, 0x190($a2)
    MEM_W(0X190, ctx->r6) = ctx->r14;
L_43002D08:
    // 0x43002D08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002D0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43002D10: jr          $ra
    // 0x43002D14: nop

    return;
    // 0x43002D14: nop

;}
RECOMP_FUNC void ovl_enemy_world4_2D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002D18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43002D1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002D20: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x43002D24: nop

    // 0x43002D28: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x43002D2C: beq         $t6, $zero, L_43002D70
    if (ctx->r14 == 0) {
        // 0x43002D30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43002D70;
    }
    // 0x43002D30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002D34: lw          $t7, 0x190($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X190);
    // 0x43002D38: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43002D3C: beq         $t7, $at, L_43002D60
    if (ctx->r15 == ctx->r1) {
        // 0x43002D40: addiu       $at, $zero, -0x11
        ctx->r1 = ADD32(0, -0X11);
            goto L_43002D60;
    }
    // 0x43002D40: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x43002D44: jal         0x43002CD8
    // 0x43002D48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world4_2CD8(rdram, ctx);
        goto after_0;
    // 0x43002D48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43002D4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43002D50: nop

    // 0x43002D54: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x43002D58: nop

    // 0x43002D5C: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
L_43002D60:
    // 0x43002D60: and         $t8, $v0, $at
    ctx->r24 = ctx->r2 & ctx->r1;
    // 0x43002D64: sw          $zero, 0x194($a0)
    MEM_W(0X194, ctx->r4) = 0;
    // 0x43002D68: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
    // 0x43002D6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43002D70:
    // 0x43002D70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43002D74: jr          $ra
    // 0x43002D78: nop

    return;
    // 0x43002D78: nop

;}
RECOMP_FUNC void ovl_enemy_world4_2D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002D7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43002D80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002D84: lw          $v0, 0x19C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X19C);
    // 0x43002D88: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x43002D8C: beq         $v0, $zero, L_43002DE4
    if (ctx->r2 == 0) {
        // 0x43002D90: nop
    
            goto L_43002DE4;
    }
    // 0x43002D90: nop

    // 0x43002D94: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x43002D98: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002D9C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43002DA0: lwc1        $f8, -0x65C4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X65C4);
    // 0x43002DA4: nop

    // 0x43002DA8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x43002DAC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x43002DB0: nop

    // 0x43002DB4: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x43002DB8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43002DBC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43002DC0: nop

    // 0x43002DC4: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x43002DC8: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x43002DCC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x43002DD0: bgez        $t7, L_43002DDC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x43002DD4: sw          $t7, 0x19C($a0)
        MEM_W(0X19C, ctx->r4) = ctx->r15;
            goto L_43002DDC;
    }
    // 0x43002DD4: sw          $t7, 0x19C($a0)
    MEM_W(0X19C, ctx->r4) = ctx->r15;
    // 0x43002DD8: sw          $zero, 0x19C($a0)
    MEM_W(0X19C, ctx->r4) = 0;
L_43002DDC:
    // 0x43002DDC: b           L_43002E3C
    // 0x43002DE0: sw          $t9, 0x194($a0)
    MEM_W(0X194, ctx->r4) = ctx->r25;
        goto L_43002E3C;
    // 0x43002DE0: sw          $t9, 0x194($a0)
    MEM_W(0X194, ctx->r4) = ctx->r25;
L_43002DE4:
    // 0x43002DE4: lw          $v0, 0x194($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X194);
    // 0x43002DE8: nop

    // 0x43002DEC: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x43002DF0: bgtz        $v0, L_43002E08
    if (SIGNED(ctx->r2) > 0) {
        // 0x43002DF4: sw          $t0, 0x194($a0)
        MEM_W(0X194, ctx->r4) = ctx->r8;
            goto L_43002E08;
    }
    // 0x43002DF4: sw          $t0, 0x194($a0)
    MEM_W(0X194, ctx->r4) = ctx->r8;
    // 0x43002DF8: jal         0x43002D18
    // 0x43002DFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world4_2D18(rdram, ctx);
        goto after_0;
    // 0x43002DFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43002E00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43002E04: nop

L_43002E08:
    // 0x43002E08: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x43002E0C: lwc1        $f4, 0x184($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X184);
    // 0x43002E10: nop

    // 0x43002E14: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x43002E18: nop

    // 0x43002E1C: bc1f        L_43002E40
    if (!c1cs) {
        // 0x43002E20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43002E40;
    }
    // 0x43002E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002E24: lw          $t1, 0x19C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X19C);
    // 0x43002E28: nop

    // 0x43002E2C: bgtz        $t1, L_43002E40
    if (SIGNED(ctx->r9) > 0) {
        // 0x43002E30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43002E40;
    }
    // 0x43002E30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002E34: jal         0x43005078
    // 0x43002E38: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    ovl_enemy_world4_5078(rdram, ctx);
        goto after_1;
    // 0x43002E38: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    after_1:
L_43002E3C:
    // 0x43002E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43002E40:
    // 0x43002E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43002E44: jr          $ra
    // 0x43002E48: nop

    return;
    // 0x43002E48: nop

;}
RECOMP_FUNC void ovl_enemy_world4_2E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002E4C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43002E50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002E54: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x43002E58: addiu       $t6, $a0, 0x14
    ctx->r14 = ADD32(ctx->r4, 0X14);
    // 0x43002E5C: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x43002E60: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x43002E64: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43002E68: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43002E6C: jal         0x430006C4
    // 0x43002E70: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    ovl_enemy_world4_6C4(rdram, ctx);
        goto after_0;
    // 0x43002E70: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x43002E74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002E78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43002E7C: jr          $ra
    // 0x43002E80: nop

    return;
    // 0x43002E80: nop

;}
RECOMP_FUNC void ovl_enemy_world4_2E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002E84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43002E88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002E8C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x43002E90: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x43002E94: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x43002E98: jal         0x43005250
    // 0x43002E9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world4_5250(rdram, ctx);
        goto after_0;
    // 0x43002E9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x43002EA0: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x43002EA4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x43002EA8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x43002EAC: beq         $a0, $t6, L_43002ECC
    if (ctx->r4 == ctx->r14) {
        // 0x43002EB0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_43002ECC;
    }
    // 0x43002EB0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x43002EB4: lw          $t7, 0x190($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X190);
    // 0x43002EB8: nop

    // 0x43002EBC: bne         $a2, $t7, L_43002ECC
    if (ctx->r6 != ctx->r15) {
        // 0x43002EC0: nop
    
            goto L_43002ECC;
    }
    // 0x43002EC0: nop

    // 0x43002EC4: b           L_43002FA8
    // 0x43002EC8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43002FA8;
    // 0x43002EC8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43002ECC:
    // 0x43002ECC: addiu       $v1, $v0, 0x268
    ctx->r3 = ADD32(ctx->r2, 0X268);
    // 0x43002ED0: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x43002ED4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x43002ED8: beq         $a0, $t8, L_43002EF8
    if (ctx->r4 == ctx->r24) {
        // 0x43002EDC: addiu       $a1, $zero, 0xA
        ctx->r5 = ADD32(0, 0XA);
            goto L_43002EF8;
    }
    // 0x43002EDC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x43002EE0: lw          $t9, 0x190($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X190);
    // 0x43002EE4: nop

    // 0x43002EE8: bne         $a2, $t9, L_43002EF8
    if (ctx->r6 != ctx->r25) {
        // 0x43002EEC: nop
    
            goto L_43002EF8;
    }
    // 0x43002EEC: nop

    // 0x43002EF0: b           L_43002FA8
    // 0x43002EF4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43002FA8;
    // 0x43002EF4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43002EF8:
    // 0x43002EF8: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
L_43002EFC:
    // 0x43002EFC: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x43002F00: nop

    // 0x43002F04: beq         $a0, $t0, L_43002F24
    if (ctx->r4 == ctx->r8) {
        // 0x43002F08: nop
    
            goto L_43002F24;
    }
    // 0x43002F08: nop

    // 0x43002F0C: lw          $t1, 0x190($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X190);
    // 0x43002F10: nop

    // 0x43002F14: bne         $a2, $t1, L_43002F24
    if (ctx->r6 != ctx->r9) {
        // 0x43002F18: nop
    
            goto L_43002F24;
    }
    // 0x43002F18: nop

    // 0x43002F1C: b           L_43002FA8
    // 0x43002F20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43002FA8;
    // 0x43002F20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43002F24:
    // 0x43002F24: lw          $t2, 0x26C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X26C);
    // 0x43002F28: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43002F2C: beq         $a0, $t2, L_43002F4C
    if (ctx->r4 == ctx->r10) {
        // 0x43002F30: nop
    
            goto L_43002F4C;
    }
    // 0x43002F30: nop

    // 0x43002F34: lw          $t3, 0x190($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X190);
    // 0x43002F38: nop

    // 0x43002F3C: bne         $a2, $t3, L_43002F4C
    if (ctx->r6 != ctx->r11) {
        // 0x43002F40: nop
    
            goto L_43002F4C;
    }
    // 0x43002F40: nop

    // 0x43002F44: b           L_43002FA8
    // 0x43002F48: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43002FA8;
    // 0x43002F48: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43002F4C:
    // 0x43002F4C: lw          $t4, 0x26C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X26C);
    // 0x43002F50: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43002F54: beq         $a0, $t4, L_43002F74
    if (ctx->r4 == ctx->r12) {
        // 0x43002F58: nop
    
            goto L_43002F74;
    }
    // 0x43002F58: nop

    // 0x43002F5C: lw          $t5, 0x190($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X190);
    // 0x43002F60: nop

    // 0x43002F64: bne         $a2, $t5, L_43002F74
    if (ctx->r6 != ctx->r13) {
        // 0x43002F68: nop
    
            goto L_43002F74;
    }
    // 0x43002F68: nop

    // 0x43002F6C: b           L_43002FA8
    // 0x43002F70: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43002FA8;
    // 0x43002F70: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43002F74:
    // 0x43002F74: lw          $t6, 0x26C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X26C);
    // 0x43002F78: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43002F7C: beq         $a0, $t6, L_43002F9C
    if (ctx->r4 == ctx->r14) {
        // 0x43002F80: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_43002F9C;
    }
    // 0x43002F80: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x43002F84: lw          $t7, 0x190($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X190);
    // 0x43002F88: nop

    // 0x43002F8C: bne         $a2, $t7, L_43002F9C
    if (ctx->r6 != ctx->r15) {
        // 0x43002F90: nop
    
            goto L_43002F9C;
    }
    // 0x43002F90: nop

    // 0x43002F94: b           L_43002FA8
    // 0x43002F98: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43002FA8;
    // 0x43002F98: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43002F9C:
    // 0x43002F9C: bne         $v0, $a1, L_43002EFC
    if (ctx->r2 != ctx->r5) {
        // 0x43002FA0: addiu       $v1, $v1, 0x268
        ctx->r3 = ADD32(ctx->r3, 0X268);
            goto L_43002EFC;
    }
    // 0x43002FA0: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43002FA4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_43002FA8:
    // 0x43002FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002FAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43002FB0: jr          $ra
    // 0x43002FB4: nop

    return;
    // 0x43002FB4: nop

;}
RECOMP_FUNC void ovl_enemy_world4_2FB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002FB8: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x43002FBC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x43002FC0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43002FC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43002FC8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43002FCC: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x43002FD0: jal         0x43002E84
    // 0x43002FD4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    ovl_enemy_world4_2E84(rdram, ctx);
        goto after_0;
    // 0x43002FD4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x43002FD8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43002FDC: bne         $v0, $at, L_43002FEC
    if (ctx->r2 != ctx->r1) {
        // 0x43002FE0: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_43002FEC;
    }
    // 0x43002FE0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x43002FE4: b           L_430035E4
    // 0x43002FE8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_430035E4;
    // 0x43002FE8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_43002FEC:
    // 0x43002FEC: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x43002FF0: jal         0x43004880
    // 0x43002FF4: nop

    ovl_enemy_world4_4880(rdram, ctx);
        goto after_1;
    // 0x43002FF4: nop

    after_1:
    // 0x43002FF8: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x43002FFC: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x43003000: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43003004: jal         0x430006C4
    // 0x43003008: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    ovl_enemy_world4_6C4(rdram, ctx);
        goto after_2;
    // 0x43003008: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_2:
    // 0x4300300C: beq         $v0, $zero, L_4300301C
    if (ctx->r2 == 0) {
        // 0x43003010: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_4300301C;
    }
    // 0x43003010: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x43003014: b           L_430035E4
    // 0x43003018: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_430035E4;
    // 0x43003018: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_4300301C:
    // 0x4300301C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43003020: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x43003024: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x43003028: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4300302C: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x43003030: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x43003034: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43003038: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x4300303C: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x43003040: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x43003044: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x43003048: jal         0x43005218
    // 0x4300304C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    ovl_enemy_world4_5218(rdram, ctx);
        goto after_3;
    // 0x4300304C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_3:
    // 0x43003050: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x43003054: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x43003058: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x4300305C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x43003060: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x43003064: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x43003068: lui         $t7, 0xE200
    ctx->r15 = S32(0XE200 << 16);
    // 0x4300306C: lui         $t8, 0x50
    ctx->r24 = S32(0X50 << 16);
    // 0x43003070: ori         $t8, $t8, 0x4240
    ctx->r24 = ctx->r24 | 0X4240;
    // 0x43003074: ori         $t7, $t7, 0x1C
    ctx->r15 = ctx->r15 | 0X1C;
    // 0x43003078: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x4300307C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x43003080: lw          $t0, 0x19C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X19C);
    // 0x43003084: lw          $t9, 0x198($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X198);
    // 0x43003088: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x4300308C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x43003090: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x43003094: lw          $t3, 0x10($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X10);
    // 0x43003098: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x4300309C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x430030A0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x430030A4: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x430030A8: mul.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x430030AC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x430030B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430030B4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x430030B8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x430030BC: lui         $t4, 0x8282
    ctx->r12 = S32(0X8282 << 16);
    // 0x430030C0: lui         $a2, 0xFA00
    ctx->r6 = S32(0XFA00 << 16);
    // 0x430030C4: div.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x430030C8: ori         $t4, $t4, 0xFFB4
    ctx->r12 = ctx->r12 | 0XFFB4;
    // 0x430030CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x430030D0: sw          $t4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r12;
    // 0x430030D4: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x430030D8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x430030DC: lui         $t6, 0xFFFD
    ctx->r14 = S32(0XFFFD << 16);
    // 0x430030E0: lui         $t5, 0xFCFF
    ctx->r13 = S32(0XFCFF << 16);
    // 0x430030E4: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
    // 0x430030E8: ori         $t6, $t6, 0xF6FB
    ctx->r14 = ctx->r14 | 0XF6FB;
    // 0x430030EC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x430030F0: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x430030F4: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x430030F8: lui         $t7, 0xFF10
    ctx->r15 = S32(0XFF10 << 16);
    // 0x430030FC: ori         $t7, $t7, 0x13F
    ctx->r15 = ctx->r15 | 0X13F;
    // 0x43003100: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x43003104: lui         $t8, 0x200
    ctx->r24 = S32(0X200 << 16);
    // 0x43003108: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x4300310C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x43003110: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x43003114: lui         $t0, 0x101
    ctx->r8 = S32(0X101 << 16);
    // 0x43003118: ori         $t0, $t0, 0x101
    ctx->r8 = ctx->r8 | 0X101;
    // 0x4300311C: lui         $t9, 0xF700
    ctx->r25 = S32(0XF700 << 16);
    // 0x43003120: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x43003124: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x43003128: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x4300312C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x43003130: add.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x43003134: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x43003138: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x4300313C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x43003140: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x43003144: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x43003148: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4300314C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x43003150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003154: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x43003158: lui         $a1, 0xF600
    ctx->r5 = S32(0XF600 << 16);
    // 0x4300315C: beq         $t2, $zero, L_430031AC
    if (ctx->r10 == 0) {
        // 0x43003160: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_430031AC;
    }
    // 0x43003160: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x43003164: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x43003168: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4300316C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x43003170: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x43003174: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43003178: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x4300317C: nop

    // 0x43003180: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x43003184: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x43003188: nop

    // 0x4300318C: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x43003190: bne         $t2, $zero, L_430031A4
    if (ctx->r10 != 0) {
        // 0x43003194: nop
    
            goto L_430031A4;
    }
    // 0x43003194: nop

    // 0x43003198: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x4300319C: b           L_430031BC
    // 0x430031A0: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_430031BC;
    // 0x430031A0: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_430031A4:
    // 0x430031A4: b           L_430031BC
    // 0x430031A8: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_430031BC;
    // 0x430031A8: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
L_430031AC:
    // 0x430031AC: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x430031B0: nop

    // 0x430031B4: bltz        $t2, L_430031A4
    if (SIGNED(ctx->r10) < 0) {
        // 0x430031B8: nop
    
            goto L_430031A4;
    }
    // 0x430031B8: nop

L_430031BC:
    // 0x430031BC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x430031C0: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x430031C4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x430031C8: add.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x430031CC: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x430031D0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x430031D4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x430031D8: sll         $t4, $t3, 14
    ctx->r12 = S32(ctx->r11 << 14);
    // 0x430031DC: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x430031E0: or          $t5, $t4, $a1
    ctx->r13 = ctx->r12 | ctx->r5;
    // 0x430031E4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x430031E8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x430031EC: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x430031F0: beq         $t7, $zero, L_4300323C
    if (ctx->r15 == 0) {
        // 0x430031F4: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_4300323C;
    }
    // 0x430031F4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x430031F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x430031FC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x43003200: sub.s       $f10, $f6, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x43003204: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43003208: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x4300320C: nop

    // 0x43003210: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x43003214: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x43003218: nop

    // 0x4300321C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x43003220: bne         $t7, $zero, L_43003234
    if (ctx->r15 != 0) {
        // 0x43003224: nop
    
            goto L_43003234;
    }
    // 0x43003224: nop

    // 0x43003228: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x4300322C: b           L_4300324C
    // 0x43003230: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_4300324C;
    // 0x43003230: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_43003234:
    // 0x43003234: b           L_4300324C
    // 0x43003238: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_4300324C;
    // 0x43003238: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_4300323C:
    // 0x4300323C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x43003240: nop

    // 0x43003244: bltz        $t7, L_43003234
    if (SIGNED(ctx->r15) < 0) {
        // 0x43003248: nop
    
            goto L_43003234;
    }
    // 0x43003248: nop

L_4300324C:
    // 0x4300324C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x43003250: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x43003254: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x43003258: or          $t0, $t5, $t9
    ctx->r8 = ctx->r13 | ctx->r25;
    // 0x4300325C: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x43003260: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x43003264: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x43003268: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x4300326C: lui         $t0, 0xFF00
    ctx->r8 = S32(0XFF00 << 16);
    // 0x43003270: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x43003274: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x43003278: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x4300327C: ori         $t0, $t0, 0x80
    ctx->r8 = ctx->r8 | 0X80;
    // 0x43003280: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x43003284: beq         $t2, $zero, L_430032D0
    if (ctx->r10 == 0) {
        // 0x43003288: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_430032D0;
    }
    // 0x43003288: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x4300328C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x43003290: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x43003294: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x43003298: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x4300329C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x430032A0: nop

    // 0x430032A4: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x430032A8: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x430032AC: nop

    // 0x430032B0: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x430032B4: bne         $t2, $zero, L_430032C8
    if (ctx->r10 != 0) {
        // 0x430032B8: nop
    
            goto L_430032C8;
    }
    // 0x430032B8: nop

    // 0x430032BC: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x430032C0: b           L_430032E0
    // 0x430032C4: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_430032E0;
    // 0x430032C4: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_430032C8:
    // 0x430032C8: b           L_430032E0
    // 0x430032CC: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_430032E0;
    // 0x430032CC: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
L_430032D0:
    // 0x430032D0: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x430032D4: nop

    // 0x430032D8: bltz        $t2, L_430032C8
    if (SIGNED(ctx->r10) < 0) {
        // 0x430032DC: nop
    
            goto L_430032C8;
    }
    // 0x430032DC: nop

L_430032E0:
    // 0x430032E0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x430032E4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x430032E8: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x430032EC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x430032F0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x430032F4: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x430032F8: cvt.w.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_S(ctx->f4.fl);
    // 0x430032FC: sll         $t4, $t3, 14
    ctx->r12 = S32(ctx->r11 << 14);
    // 0x43003300: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x43003304: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x43003308: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x4300330C: beq         $t7, $zero, L_43003358
    if (ctx->r15 == 0) {
        // 0x43003310: nop
    
            goto L_43003358;
    }
    // 0x43003310: nop

    // 0x43003314: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43003318: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x4300331C: sub.s       $f8, $f4, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x43003320: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43003324: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x43003328: nop

    // 0x4300332C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x43003330: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x43003334: nop

    // 0x43003338: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x4300333C: bne         $t7, $zero, L_43003350
    if (ctx->r15 != 0) {
        // 0x43003340: nop
    
            goto L_43003350;
    }
    // 0x43003340: nop

    // 0x43003344: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x43003348: b           L_43003368
    // 0x4300334C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_43003368;
    // 0x4300334C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_43003350:
    // 0x43003350: b           L_43003368
    // 0x43003354: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_43003368;
    // 0x43003354: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_43003358:
    // 0x43003358: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x4300335C: nop

    // 0x43003360: bltz        $t7, L_43003350
    if (SIGNED(ctx->r15) < 0) {
        // 0x43003364: nop
    
            goto L_43003350;
    }
    // 0x43003364: nop

L_43003368:
    // 0x43003368: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x4300336C: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x43003370: c.eq.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl == ctx->f12.fl;
    // 0x43003374: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x43003378: or          $t9, $t4, $t5
    ctx->r25 = ctx->r12 | ctx->r13;
    // 0x4300337C: bc1t        L_430035E0
    if (c1cs) {
        // 0x43003380: sw          $t9, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->r25;
            goto L_430035E0;
    }
    // 0x43003380: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x43003384: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x43003388: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x4300338C: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x43003390: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x43003394: add.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x43003398: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x4300339C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x430033A0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x430033A4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x430033A8: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x430033AC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x430033B0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x430033B4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x430033B8: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x430033BC: beq         $t2, $zero, L_43003408
    if (ctx->r10 == 0) {
        // 0x430033C0: nop
    
            goto L_43003408;
    }
    // 0x430033C0: nop

    // 0x430033C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x430033C8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x430033CC: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x430033D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x430033D4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x430033D8: nop

    // 0x430033DC: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x430033E0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x430033E4: nop

    // 0x430033E8: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x430033EC: bne         $t2, $zero, L_43003400
    if (ctx->r10 != 0) {
        // 0x430033F0: nop
    
            goto L_43003400;
    }
    // 0x430033F0: nop

    // 0x430033F4: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x430033F8: b           L_43003418
    // 0x430033FC: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_43003418;
    // 0x430033FC: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_43003400:
    // 0x43003400: b           L_43003418
    // 0x43003404: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_43003418;
    // 0x43003404: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
L_43003408:
    // 0x43003408: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x4300340C: nop

    // 0x43003410: bltz        $t2, L_43003400
    if (SIGNED(ctx->r10) < 0) {
        // 0x43003414: nop
    
            goto L_43003400;
    }
    // 0x43003414: nop

L_43003418:
    // 0x43003418: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x4300341C: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x43003420: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x43003424: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x43003428: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x4300342C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x43003430: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x43003434: sll         $t6, $t3, 14
    ctx->r14 = S32(ctx->r11 << 14);
    // 0x43003438: cvt.w.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_S(ctx->f4.fl);
    // 0x4300343C: or          $t7, $t6, $a1
    ctx->r15 = ctx->r14 | ctx->r5;
    // 0x43003440: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x43003444: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x43003448: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x4300344C: beq         $t4, $zero, L_43003498
    if (ctx->r12 == 0) {
        // 0x43003450: nop
    
            goto L_43003498;
    }
    // 0x43003450: nop

    // 0x43003454: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43003458: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x4300345C: sub.s       $f8, $f4, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x43003460: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43003464: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x43003468: nop

    // 0x4300346C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x43003470: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x43003474: nop

    // 0x43003478: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x4300347C: bne         $t4, $zero, L_43003490
    if (ctx->r12 != 0) {
        // 0x43003480: nop
    
            goto L_43003490;
    }
    // 0x43003480: nop

    // 0x43003484: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x43003488: b           L_430034A8
    // 0x4300348C: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_430034A8;
    // 0x4300348C: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_43003490:
    // 0x43003490: b           L_430034A8
    // 0x43003494: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_430034A8;
    // 0x43003494: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
L_43003498:
    // 0x43003498: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x4300349C: nop

    // 0x430034A0: bltz        $t4, L_43003490
    if (SIGNED(ctx->r12) < 0) {
        // 0x430034A4: nop
    
            goto L_43003490;
    }
    // 0x430034A4: nop

L_430034A8:
    // 0x430034A8: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x430034AC: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x430034B0: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x430034B4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x430034B8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x430034BC: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x430034C0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x430034C4: add.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x430034C8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x430034CC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x430034D0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x430034D4: nop

    // 0x430034D8: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x430034DC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x430034E0: nop

    // 0x430034E4: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x430034E8: beq         $t2, $zero, L_43003534
    if (ctx->r10 == 0) {
        // 0x430034EC: nop
    
            goto L_43003534;
    }
    // 0x430034EC: nop

    // 0x430034F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x430034F4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x430034F8: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x430034FC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43003500: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x43003504: nop

    // 0x43003508: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x4300350C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x43003510: nop

    // 0x43003514: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x43003518: bne         $t2, $zero, L_4300352C
    if (ctx->r10 != 0) {
        // 0x4300351C: nop
    
            goto L_4300352C;
    }
    // 0x4300351C: nop

    // 0x43003520: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x43003524: b           L_43003544
    // 0x43003528: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_43003544;
    // 0x43003528: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_4300352C:
    // 0x4300352C: b           L_43003544
    // 0x43003530: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_43003544;
    // 0x43003530: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
L_43003534:
    // 0x43003534: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x43003538: nop

    // 0x4300353C: bltz        $t2, L_4300352C
    if (SIGNED(ctx->r10) < 0) {
        // 0x43003540: nop
    
            goto L_4300352C;
    }
    // 0x43003540: nop

L_43003544:
    // 0x43003544: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x43003548: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x4300354C: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x43003550: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x43003554: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x43003558: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x4300355C: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x43003560: sll         $t6, $t3, 14
    ctx->r14 = S32(ctx->r11 << 14);
    // 0x43003564: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x43003568: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x4300356C: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x43003570: beq         $t4, $zero, L_430035BC
    if (ctx->r12 == 0) {
        // 0x43003574: nop
    
            goto L_430035BC;
    }
    // 0x43003574: nop

    // 0x43003578: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4300357C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x43003580: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x43003584: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43003588: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x4300358C: nop

    // 0x43003590: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x43003594: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x43003598: nop

    // 0x4300359C: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x430035A0: bne         $t4, $zero, L_430035B4
    if (ctx->r12 != 0) {
        // 0x430035A4: nop
    
            goto L_430035B4;
    }
    // 0x430035A4: nop

    // 0x430035A8: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x430035AC: b           L_430035CC
    // 0x430035B0: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_430035CC;
    // 0x430035B0: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_430035B4:
    // 0x430035B4: b           L_430035CC
    // 0x430035B8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_430035CC;
    // 0x430035B8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
L_430035BC:
    // 0x430035BC: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x430035C0: nop

    // 0x430035C4: bltz        $t4, L_430035B4
    if (SIGNED(ctx->r12) < 0) {
        // 0x430035C8: nop
    
            goto L_430035B4;
    }
    // 0x430035C8: nop

L_430035CC:
    // 0x430035CC: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x430035D0: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x430035D4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x430035D8: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x430035DC: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
L_430035E0:
    // 0x430035E0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_430035E4:
    // 0x430035E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430035E8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x430035EC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x430035F0: jr          $ra
    // 0x430035F4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x430035F4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_enemy_world4_35F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430035F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430035FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003600: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43003604: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x43003608: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x4300360C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x43003610: nop

    // 0x43003614: bc1f        L_43003654
    if (!c1cs) {
        // 0x43003618: nop
    
            goto L_43003654;
    }
    // 0x43003618: nop

    // 0x4300361C: lwc1        $f6, 0x30($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X30);
    // 0x43003620: nop

    // 0x43003624: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x43003628: nop

    // 0x4300362C: bc1f        L_43003654
    if (!c1cs) {
        // 0x43003630: nop
    
            goto L_43003654;
    }
    // 0x43003630: nop

    // 0x43003634: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x43003638: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x4300363C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x43003640: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
    // 0x43003644: jal         0x430014D8
    // 0x43003648: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world4_14D8(rdram, ctx);
        goto after_0;
    // 0x43003648: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4300364C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43003650: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
L_43003654:
    // 0x43003654: jal         0x430096A4
    // 0x43003658: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world4_96A4(rdram, ctx);
        goto after_1;
    // 0x43003658: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_1:
    // 0x4300365C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003660: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43003664: jr          $ra
    // 0x43003668: nop

    return;
    // 0x43003668: nop

;}
RECOMP_FUNC void ovl_enemy_world4_366C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300366C: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x43003670: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x43003674: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43003678: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x4300367C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003680: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x43003684: lw          $v1, 0x70($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X70);
    // 0x43003688: sw          $zero, 0x78($v0)
    MEM_W(0X78, ctx->r2) = 0;
    // 0x4300368C: sra         $t0, $v1, 24
    ctx->r8 = S32(SIGNED(ctx->r3) >> 24);
    // 0x43003690: andi        $t7, $t0, 0xFF
    ctx->r15 = ctx->r8 & 0XFF;
    // 0x43003694: bltz        $t7, L_430037A0
    if (SIGNED(ctx->r15) < 0) {
        // 0x43003698: sw          $v1, 0x7C($v0)
        MEM_W(0X7C, ctx->r2) = ctx->r3;
            goto L_430037A0;
    }
    // 0x43003698: sw          $v1, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r3;
    // 0x4300369C: slti        $at, $t7, 0x6
    ctx->r1 = SIGNED(ctx->r15) < 0X6 ? 1 : 0;
    // 0x430036A0: beq         $at, $zero, L_430037A0
    if (ctx->r1 == 0) {
        // 0x430036A4: sll         $v1, $t7, 2
        ctx->r3 = S32(ctx->r15 << 2);
            goto L_430037A0;
    }
    // 0x430036A4: sll         $v1, $t7, 2
    ctx->r3 = S32(ctx->r15 << 2);
    // 0x430036A8: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x430036AC: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x430036B0: lw          $t9, -0x688C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X688C);
    // 0x430036B4: lui         $a3, 0x4301
    ctx->r7 = S32(0X4301 << 16);
    // 0x430036B8: sw          $t9, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r25;
    // 0x430036BC: addu        $a3, $a3, $v1
    ctx->r7 = ADD32(ctx->r7, ctx->r3);
    // 0x430036C0: lw          $a3, -0x68A4($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X68A4);
    // 0x430036C4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x430036C8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x430036CC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x430036D0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x430036D4: addiu       $a2, $v0, 0x68
    ctx->r6 = ADD32(ctx->r2, 0X68);
    // 0x430036D8: jal         0x43005218
    // 0x430036DC: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    ovl_enemy_world4_5218(rdram, ctx);
        goto after_0;
    // 0x430036DC: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x430036E0: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x430036E4: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x430036E8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x430036EC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x430036F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x430036F4: beq         $a3, $at, L_43003718
    if (ctx->r7 == ctx->r1) {
        // 0x430036F8: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_43003718;
    }
    // 0x430036F8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x430036FC: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x43003700: beq         $a3, $v1, L_43003750
    if (ctx->r7 == ctx->r3) {
        // 0x43003704: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_43003750;
    }
    // 0x43003704: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x43003708: beq         $a3, $at, L_43003764
    if (ctx->r7 == ctx->r1) {
        // 0x4300370C: nop
    
            goto L_43003764;
    }
    // 0x4300370C: nop

    // 0x43003710: b           L_430037A4
    // 0x43003714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_430037A4;
    // 0x43003714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43003718:
    // 0x43003718: lw          $t2, 0x78($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X78);
    // 0x4300371C: nop

    // 0x43003720: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x43003724: beq         $t3, $zero, L_43003734
    if (ctx->r11 == 0) {
        // 0x43003728: nop
    
            goto L_43003734;
    }
    // 0x43003728: nop

    // 0x4300372C: b           L_43003734
    // 0x43003730: nop

        goto L_43003734;
    // 0x43003730: nop

L_43003734:
    // 0x43003734: bne         $v1, $t0, L_430037A4
    if (ctx->r3 != ctx->r8) {
        // 0x43003738: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430037A4;
    }
    // 0x43003738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300373C: lw          $t4, 0x54($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X54);
    // 0x43003740: nop

    // 0x43003744: ori         $t5, $t4, 0x20
    ctx->r13 = ctx->r12 | 0X20;
    // 0x43003748: b           L_430037A0
    // 0x4300374C: sw          $t5, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r13;
        goto L_430037A0;
    // 0x4300374C: sw          $t5, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r13;
L_43003750:
    // 0x43003750: lw          $t6, 0x70($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X70);
    // 0x43003754: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x43003758: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x4300375C: b           L_430037A0
    // 0x43003760: sw          $t7, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->r15;
        goto L_430037A0;
    // 0x43003760: sw          $t7, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->r15;
L_43003764:
    // 0x43003764: lw          $t8, 0x78($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X78);
    // 0x43003768: nop

    // 0x4300376C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x43003770: beq         $t9, $zero, L_430037A0
    if (ctx->r25 == 0) {
        // 0x43003774: nop
    
            goto L_430037A0;
    }
    // 0x43003774: nop

    // 0x43003778: lw          $t1, 0x70($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X70);
    // 0x4300377C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x43003780: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x43003784: bne         $v1, $t0, L_430037A0
    if (ctx->r3 != ctx->r8) {
        // 0x43003788: sw          $t2, 0x70($v0)
        MEM_W(0X70, ctx->r2) = ctx->r10;
            goto L_430037A0;
    }
    // 0x43003788: sw          $t2, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->r10;
    // 0x4300378C: lw          $t3, 0x54($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X54);
    // 0x43003790: nop

    // 0x43003794: ori         $t4, $t3, 0x20
    ctx->r12 = ctx->r11 | 0X20;
    // 0x43003798: b           L_430037A0
    // 0x4300379C: sw          $t4, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r12;
        goto L_430037A0;
    // 0x4300379C: sw          $t4, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r12;
L_430037A0:
    // 0x430037A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430037A4:
    // 0x430037A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x430037A8: jr          $ra
    // 0x430037AC: nop

    return;
    // 0x430037AC: nop

;}
RECOMP_FUNC void ovl_enemy_world4_37B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430037B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430037B4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x430037B8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x430037BC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x430037C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x430037C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x430037C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430037CC: lw          $v1, 0x64($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X64);
    // 0x430037D0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x430037D4: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x430037D8: blez        $v1, L_43003820
    if (SIGNED(ctx->r3) <= 0) {
        // 0x430037DC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_43003820;
    }
    // 0x430037DC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x430037E0: lui         $s3, 0xFF
    ctx->r19 = S32(0XFF << 16);
    // 0x430037E4: ori         $s3, $s3, 0xFFFF
    ctx->r19 = ctx->r19 | 0XFFFF;
    // 0x430037E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_430037EC:
    // 0x430037EC: lw          $v0, 0x70($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X70);
    // 0x430037F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x430037F4: and         $t6, $v0, $s3
    ctx->r14 = ctx->r2 & ctx->r19;
    // 0x430037F8: bne         $s4, $t6, L_43003810
    if (ctx->r20 != ctx->r14) {
        // 0x430037FC: nop
    
            goto L_43003810;
    }
    // 0x430037FC: nop

    // 0x43003800: jal         0x4300366C
    // 0x43003804: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_enemy_world4_366C(rdram, ctx);
        goto after_0;
    // 0x43003804: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x43003808: lw          $v1, 0x64($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X64);
    // 0x4300380C: nop

L_43003810:
    // 0x43003810: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43003814: slt         $at, $s1, $v1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x43003818: bne         $at, $zero, L_430037EC
    if (ctx->r1 != 0) {
        // 0x4300381C: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_430037EC;
    }
    // 0x4300381C: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
L_43003820:
    // 0x43003820: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43003824: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43003828: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x4300382C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43003830: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x43003834: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x43003838: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4300383C: jr          $ra
    // 0x43003840: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x43003840: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_enemy_world4_3844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003844: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43003848: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300384C: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x43003850: jal         0x43004880
    // 0x43003854: nop

    ovl_enemy_world4_4880(rdram, ctx);
        goto after_0;
    // 0x43003854: nop

    after_0:
    // 0x43003858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300385C: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x43003860: jr          $ra
    // 0x43003864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x43003864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_enemy_world4_3868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003868: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x4300386C: lui         $at, 0xE9F9
    ctx->r1 = S32(0XE9F9 << 16);
    // 0x43003870: ori         $at, $at, 0x57FF
    ctx->r1 = ctx->r1 | 0X57FF;
    // 0x43003874: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x43003878: jr          $ra
    // 0x4300387C: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
    return;
    // 0x4300387C: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void ovl_enemy_world4_3880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003880: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43003884: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003888: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x4300388C: nop

    // 0x43003890: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x43003894: beq         $t6, $zero, L_43003A54
    if (ctx->r14 == 0) {
        // 0x43003898: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43003A54;
    }
    // 0x43003898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300389C: lw          $v1, 0x58($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X58);
    // 0x430038A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x430038A4: addiu       $t7, $v1, -0x17
    ctx->r15 = ADD32(ctx->r3, -0X17);
    // 0x430038A8: sltiu       $at, $t7, 0x18
    ctx->r1 = ctx->r15 < 0X18 ? 1 : 0;
    // 0x430038AC: beq         $at, $zero, L_43003A04
    if (ctx->r1 == 0) {
        // 0x430038B0: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_43003A04;
    }
    // 0x430038B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x430038B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x430038B8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430038BC: addu        $at, $at, $t7
    gpr jr_addend_430038C8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x430038C0: lw          $t7, -0x65C0($at)
    ctx->r15 = ADD32(ctx->r1, -0X65C0);
    // 0x430038C4: nop

    // 0x430038C8: jr          $t7
    // 0x430038CC: nop

    switch (jr_addend_430038C8 >> 2) {
        case 0: goto L_43003950; break;
        case 1: goto L_43003978; break;
        case 2: goto L_43003A04; break;
        case 3: goto L_43003A04; break;
        case 4: goto L_43003A04; break;
        case 5: goto L_43003A04; break;
        case 6: goto L_43003A04; break;
        case 7: goto L_43003A04; break;
        case 8: goto L_43003A04; break;
        case 9: goto L_43003A04; break;
        case 10: goto L_43003A04; break;
        case 11: goto L_43003A04; break;
        case 12: goto L_43003A04; break;
        case 13: goto L_43003A04; break;
        case 14: goto L_430038D0; break;
        case 15: goto L_4300390C; break;
        case 16: goto L_43003A04; break;
        case 17: goto L_43003A04; break;
        case 18: goto L_43003A04; break;
        case 19: goto L_430039A0; break;
        case 20: goto L_430039A0; break;
        case 21: goto L_430039A0; break;
        case 22: goto L_430039A0; break;
        case 23: goto L_430039A0; break;
        default: switch_error(__func__, 0x430038C8, 0x43009A40);
    }
    // 0x430038CC: nop

L_430038D0:
    // 0x430038D0: andi        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 & 0X2;
    // 0x430038D4: bne         $t8, $zero, L_43003904
    if (ctx->r24 != 0) {
        // 0x430038D8: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_43003904;
    }
    // 0x430038D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x430038DC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x430038E0: jal         0x430037B0
    // 0x430038E4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    ovl_enemy_world4_37B0(rdram, ctx);
        goto after_0;
    // 0x430038E4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x430038E8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x430038EC: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x430038F0: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x430038F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x430038F8: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x430038FC: b           L_43003A04
    // 0x43003900: sw          $t0, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r8;
        goto L_43003A04;
    // 0x43003900: sw          $t0, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r8;
L_43003904:
    // 0x43003904: b           L_43003A04
    // 0x43003908: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_43003A04;
    // 0x43003908: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_4300390C:
    // 0x4300390C: lw          $t1, 0x5C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X5C);
    // 0x43003910: sll         $t3, $v0, 6
    ctx->r11 = S32(ctx->r2 << 6);
    // 0x43003914: bne         $v1, $t1, L_43003938
    if (ctx->r3 != ctx->r9) {
        // 0x43003918: nop
    
            goto L_43003938;
    }
    // 0x43003918: nop

    // 0x4300391C: lw          $t2, 0x60($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X60);
    // 0x43003920: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43003924: slti        $at, $t2, 0xA
    ctx->r1 = SIGNED(ctx->r10) < 0XA ? 1 : 0;
    // 0x43003928: bne         $at, $zero, L_43003A04
    if (ctx->r1 != 0) {
        // 0x4300392C: nop
    
            goto L_43003A04;
    }
    // 0x4300392C: nop

    // 0x43003930: b           L_43003A04
    // 0x43003934: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
        goto L_43003A04;
    // 0x43003934: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
L_43003938:
    // 0x43003938: bgez        $t3, L_43003948
    if (SIGNED(ctx->r11) >= 0) {
        // 0x4300393C: nop
    
            goto L_43003948;
    }
    // 0x4300393C: nop

    // 0x43003940: b           L_43003A04
    // 0x43003944: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_43003A04;
    // 0x43003944: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_43003948:
    // 0x43003948: b           L_43003A04
    // 0x4300394C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_43003A04;
    // 0x4300394C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_43003950:
    // 0x43003950: sll         $t4, $v0, 13
    ctx->r12 = S32(ctx->r2 << 13);
    // 0x43003954: bltz        $t4, L_43003970
    if (SIGNED(ctx->r12) < 0) {
        // 0x43003958: addiu       $t5, $zero, 0x3
        ctx->r13 = ADD32(0, 0X3);
            goto L_43003970;
    }
    // 0x43003958: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x4300395C: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x43003960: lw          $t6, 0x1DC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1DC);
    // 0x43003964: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x43003968: b           L_43003A04
    // 0x4300396C: sw          $t6, 0x1E0($a0)
    MEM_W(0X1E0, ctx->r4) = ctx->r14;
        goto L_43003A04;
    // 0x4300396C: sw          $t6, 0x1E0($a0)
    MEM_W(0X1E0, ctx->r4) = ctx->r14;
L_43003970:
    // 0x43003970: b           L_43003A04
    // 0x43003974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_43003A04;
    // 0x43003974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_43003978:
    // 0x43003978: sll         $t7, $v0, 13
    ctx->r15 = S32(ctx->r2 << 13);
    // 0x4300397C: bltz        $t7, L_43003998
    if (SIGNED(ctx->r15) < 0) {
        // 0x43003980: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_43003998;
    }
    // 0x43003980: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x43003984: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x43003988: lw          $t9, 0x1DC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X1DC);
    // 0x4300398C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x43003990: b           L_43003A04
    // 0x43003994: sw          $t9, 0x1E0($a0)
    MEM_W(0X1E0, ctx->r4) = ctx->r25;
        goto L_43003A04;
    // 0x43003994: sw          $t9, 0x1E0($a0)
    MEM_W(0X1E0, ctx->r4) = ctx->r25;
L_43003998:
    // 0x43003998: b           L_43003A04
    // 0x4300399C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_43003A04;
    // 0x4300399C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_430039A0:
    // 0x430039A0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x430039A4: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x430039A8: jal         0x43003844
    // 0x430039AC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    ovl_enemy_world4_3844(rdram, ctx);
        goto after_1;
    // 0x430039AC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_1:
    // 0x430039B0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x430039B4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x430039B8: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x430039BC: beq         $v0, $zero, L_43003A00
    if (ctx->r2 == 0) {
        // 0x430039C0: nop
    
            goto L_43003A00;
    }
    // 0x430039C0: nop

    // 0x430039C4: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x430039C8: nop

    // 0x430039CC: sll         $t0, $v0, 7
    ctx->r8 = S32(ctx->r2 << 7);
    // 0x430039D0: bltz        $t0, L_43003A00
    if (SIGNED(ctx->r8) < 0) {
        // 0x430039D4: sll         $t1, $v0, 13
        ctx->r9 = S32(ctx->r2 << 13);
            goto L_43003A00;
    }
    // 0x430039D4: sll         $t1, $v0, 13
    ctx->r9 = S32(ctx->r2 << 13);
    // 0x430039D8: bgez        $t1, L_430039F8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x430039DC: nop
    
            goto L_430039F8;
    }
    // 0x430039DC: nop

    // 0x430039E0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x430039E4: jal         0x43004D80
    // 0x430039E8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    ovl_enemy_world4_4D80(rdram, ctx);
        goto after_2;
    // 0x430039E8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_2:
    // 0x430039EC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x430039F0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x430039F4: nop

L_430039F8:
    // 0x430039F8: b           L_43003A04
    // 0x430039FC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
        goto L_43003A04;
    // 0x430039FC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
L_43003A00:
    // 0x43003A00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_43003A04:
    // 0x43003A04: beq         $a1, $zero, L_43003A34
    if (ctx->r5 == 0) {
        // 0x43003A08: nop
    
            goto L_43003A34;
    }
    // 0x43003A08: nop

    // 0x43003A0C: lw          $t2, 0x58($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X58);
    // 0x43003A10: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
    // 0x43003A14: beq         $a3, $zero, L_43003A34
    if (ctx->r7 == 0) {
        // 0x43003A18: sw          $t2, 0x5C($a0)
        MEM_W(0X5C, ctx->r4) = ctx->r10;
            goto L_43003A34;
    }
    // 0x43003A18: sw          $t2, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r10;
    // 0x43003A1C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x43003A20: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x43003A24: jal         0x430096A4
    // 0x43003A28: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    ovl_enemy_world4_96A4(rdram, ctx);
        goto after_3;
    // 0x43003A28: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_3:
    // 0x43003A2C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x43003A30: nop

L_43003A34:
    // 0x43003A34: lw          $t4, 0x54($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X54);
    // 0x43003A38: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x43003A3C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x43003A40: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x43003A44: sw          $zero, 0x58($a0)
    MEM_W(0X58, ctx->r4) = 0;
    // 0x43003A48: sw          $t3, 0x1DC($a0)
    MEM_W(0X1DC, ctx->r4) = ctx->r11;
    // 0x43003A4C: sw          $t5, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r13;
    // 0x43003A50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43003A54:
    // 0x43003A54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x43003A58: jr          $ra
    // 0x43003A5C: nop

    return;
    // 0x43003A5C: nop

;}
RECOMP_FUNC void ovl_enemy_world4_3A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003A60: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43003A64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003A68: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43003A6C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43003A70: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43003A74: jal         0x430006C4
    // 0x43003A78: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world4_6C4(rdram, ctx);
        goto after_0;
    // 0x43003A78: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x43003A7C: lui         $at, 0xC5FA
    ctx->r1 = S32(0XC5FA << 16);
    // 0x43003A80: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43003A84: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43003A88: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x43003A8C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x43003A90: nop

    // 0x43003A94: bc1f        L_43003AA8
    if (!c1cs) {
        // 0x43003A98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43003AA8;
    }
    // 0x43003A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003A9C: jal         0x43005078
    // 0x43003AA0: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    ovl_enemy_world4_5078(rdram, ctx);
        goto after_1;
    // 0x43003AA0: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    after_1:
    // 0x43003AA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43003AA8:
    // 0x43003AA8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43003AAC: jr          $ra
    // 0x43003AB0: nop

    return;
    // 0x43003AB0: nop

;}
RECOMP_FUNC void ovl_enemy_world4_3AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003AB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43003AB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003ABC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43003AC0: lui         $a1, 0x4300
    ctx->r5 = S32(0X4300 << 16);
    // 0x43003AC4: addiu       $a1, $a1, 0x2FB8
    ctx->r5 = ADD32(ctx->r5, 0X2FB8);
    // 0x43003AC8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x43003ACC: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x43003AD0: jal         0x43000544
    // 0x43003AD4: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    ovl_enemy_world4_544(rdram, ctx);
        goto after_0;
    // 0x43003AD4: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_0:
    // 0x43003AD8: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x43003ADC: bne         $v0, $zero, L_43003AEC
    if (ctx->r2 != 0) {
        // 0x43003AE0: sw          $v0, 0x190($v1)
        MEM_W(0X190, ctx->r3) = ctx->r2;
            goto L_43003AEC;
    }
    // 0x43003AE0: sw          $v0, 0x190($v1)
    MEM_W(0X190, ctx->r3) = ctx->r2;
    // 0x43003AE4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x43003AE8: sw          $t6, 0x190($v1)
    MEM_W(0X190, ctx->r3) = ctx->r14;
L_43003AEC:
    // 0x43003AEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003AF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43003AF4: jr          $ra
    // 0x43003AF8: nop

    return;
    // 0x43003AF8: nop

;}
RECOMP_FUNC void ovl_enemy_world4_3AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003AFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43003B00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003B04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43003B08: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x43003B0C: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x43003B10: beq         $v0, $at, L_43003B88
    if (ctx->r2 == ctx->r1) {
        // 0x43003B14: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_43003B88;
    }
    // 0x43003B14: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x43003B18: beq         $v0, $at, L_43003B88
    if (ctx->r2 == ctx->r1) {
        // 0x43003B1C: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_43003B88;
    }
    // 0x43003B1C: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x43003B20: beq         $v0, $at, L_43003B88
    if (ctx->r2 == ctx->r1) {
        // 0x43003B24: addiu       $at, $zero, 0x33
        ctx->r1 = ADD32(0, 0X33);
            goto L_43003B88;
    }
    // 0x43003B24: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x43003B28: beq         $v0, $at, L_43003B88
    if (ctx->r2 == ctx->r1) {
        // 0x43003B2C: addiu       $at, $zero, 0x35
        ctx->r1 = ADD32(0, 0X35);
            goto L_43003B88;
    }
    // 0x43003B2C: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
    // 0x43003B30: beq         $v0, $at, L_43003B8C
    if (ctx->r2 == ctx->r1) {
        // 0x43003B34: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43003B8C;
    }
    // 0x43003B34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003B38: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x43003B3C: nop

    // 0x43003B40: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x43003B44: bne         $t6, $zero, L_43003B80
    if (ctx->r14 != 0) {
        // 0x43003B48: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_43003B80;
    }
    // 0x43003B48: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x43003B4C: lw          $t7, 0x190($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X190);
    // 0x43003B50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43003B54: bne         $t7, $at, L_43003B78
    if (ctx->r15 != ctx->r1) {
        // 0x43003B58: ori         $t8, $v0, 0x10
        ctx->r24 = ctx->r2 | 0X10;
            goto L_43003B78;
    }
    // 0x43003B58: ori         $t8, $v0, 0x10
    ctx->r24 = ctx->r2 | 0X10;
    // 0x43003B5C: jal         0x43003AB4
    // 0x43003B60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world4_3AB4(rdram, ctx);
        goto after_0;
    // 0x43003B60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43003B64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43003B68: nop

    // 0x43003B6C: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x43003B70: nop

    // 0x43003B74: ori         $t8, $v0, 0x10
    ctx->r24 = ctx->r2 | 0X10;
L_43003B78:
    // 0x43003B78: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
    // 0x43003B7C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
L_43003B80:
    // 0x43003B80: nop

    // 0x43003B84: sw          $t9, 0x194($a0)
    MEM_W(0X194, ctx->r4) = ctx->r25;
L_43003B88:
    // 0x43003B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43003B8C:
    // 0x43003B8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43003B90: jr          $ra
    // 0x43003B94: nop

    return;
    // 0x43003B94: nop

;}
RECOMP_FUNC void ovl_enemy_world4_3B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003B98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43003B9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003BA0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x43003BA4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x43003BA8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x43003BAC: jal         0x43005250
    // 0x43003BB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world4_5250(rdram, ctx);
        goto after_0;
    // 0x43003BB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x43003BB4: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x43003BB8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x43003BBC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x43003BC0: beq         $a0, $t6, L_43003BE0
    if (ctx->r4 == ctx->r14) {
        // 0x43003BC4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_43003BE0;
    }
    // 0x43003BC4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x43003BC8: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x43003BCC: nop

    // 0x43003BD0: bne         $a2, $t7, L_43003BE0
    if (ctx->r6 != ctx->r15) {
        // 0x43003BD4: nop
    
            goto L_43003BE0;
    }
    // 0x43003BD4: nop

    // 0x43003BD8: b           L_43003CBC
    // 0x43003BDC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43003CBC;
    // 0x43003BDC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43003BE0:
    // 0x43003BE0: addiu       $v1, $v0, 0x268
    ctx->r3 = ADD32(ctx->r2, 0X268);
    // 0x43003BE4: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x43003BE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x43003BEC: beq         $a0, $t8, L_43003C0C
    if (ctx->r4 == ctx->r24) {
        // 0x43003BF0: addiu       $a1, $zero, 0xA
        ctx->r5 = ADD32(0, 0XA);
            goto L_43003C0C;
    }
    // 0x43003BF0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x43003BF4: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x43003BF8: nop

    // 0x43003BFC: bne         $a2, $t9, L_43003C0C
    if (ctx->r6 != ctx->r25) {
        // 0x43003C00: nop
    
            goto L_43003C0C;
    }
    // 0x43003C00: nop

    // 0x43003C04: b           L_43003CBC
    // 0x43003C08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43003CBC;
    // 0x43003C08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43003C0C:
    // 0x43003C0C: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
L_43003C10:
    // 0x43003C10: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x43003C14: nop

    // 0x43003C18: beq         $a0, $t0, L_43003C38
    if (ctx->r4 == ctx->r8) {
        // 0x43003C1C: nop
    
            goto L_43003C38;
    }
    // 0x43003C1C: nop

    // 0x43003C20: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x43003C24: nop

    // 0x43003C28: bne         $a2, $t1, L_43003C38
    if (ctx->r6 != ctx->r9) {
        // 0x43003C2C: nop
    
            goto L_43003C38;
    }
    // 0x43003C2C: nop

    // 0x43003C30: b           L_43003CBC
    // 0x43003C34: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43003CBC;
    // 0x43003C34: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43003C38:
    // 0x43003C38: lw          $t2, 0x26C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X26C);
    // 0x43003C3C: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003C40: beq         $a0, $t2, L_43003C60
    if (ctx->r4 == ctx->r10) {
        // 0x43003C44: nop
    
            goto L_43003C60;
    }
    // 0x43003C44: nop

    // 0x43003C48: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x43003C4C: nop

    // 0x43003C50: bne         $a2, $t3, L_43003C60
    if (ctx->r6 != ctx->r11) {
        // 0x43003C54: nop
    
            goto L_43003C60;
    }
    // 0x43003C54: nop

    // 0x43003C58: b           L_43003CBC
    // 0x43003C5C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43003CBC;
    // 0x43003C5C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43003C60:
    // 0x43003C60: lw          $t4, 0x26C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X26C);
    // 0x43003C64: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003C68: beq         $a0, $t4, L_43003C88
    if (ctx->r4 == ctx->r12) {
        // 0x43003C6C: nop
    
            goto L_43003C88;
    }
    // 0x43003C6C: nop

    // 0x43003C70: lw          $t5, 0x8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X8);
    // 0x43003C74: nop

    // 0x43003C78: bne         $a2, $t5, L_43003C88
    if (ctx->r6 != ctx->r13) {
        // 0x43003C7C: nop
    
            goto L_43003C88;
    }
    // 0x43003C7C: nop

    // 0x43003C80: b           L_43003CBC
    // 0x43003C84: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43003CBC;
    // 0x43003C84: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43003C88:
    // 0x43003C88: lw          $t6, 0x26C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X26C);
    // 0x43003C8C: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003C90: beq         $a0, $t6, L_43003CB0
    if (ctx->r4 == ctx->r14) {
        // 0x43003C94: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_43003CB0;
    }
    // 0x43003C94: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x43003C98: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x43003C9C: nop

    // 0x43003CA0: bne         $a2, $t7, L_43003CB0
    if (ctx->r6 != ctx->r15) {
        // 0x43003CA4: nop
    
            goto L_43003CB0;
    }
    // 0x43003CA4: nop

    // 0x43003CA8: b           L_43003CBC
    // 0x43003CAC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43003CBC;
    // 0x43003CAC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43003CB0:
    // 0x43003CB0: bne         $v0, $a1, L_43003C10
    if (ctx->r2 != ctx->r5) {
        // 0x43003CB4: addiu       $v1, $v1, 0x268
        ctx->r3 = ADD32(ctx->r3, 0X268);
            goto L_43003C10;
    }
    // 0x43003CB4: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003CB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_43003CBC:
    // 0x43003CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003CC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43003CC4: jr          $ra
    // 0x43003CC8: nop

    return;
    // 0x43003CC8: nop

;}
RECOMP_FUNC void ovl_enemy_world4_3CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003CCC: sw          $zero, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = 0;
    // 0x43003CD0: jr          $ra
    // 0x43003CD4: sw          $zero, 0x58($a0)
    MEM_W(0X58, ctx->r4) = 0;
    return;
    // 0x43003CD4: sw          $zero, 0x58($a0)
    MEM_W(0X58, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_enemy_world4_3CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003CD8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43003CDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43003CE0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43003CE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43003CE8: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x43003CEC: jal         0x43004880
    // 0x43003CF0: nop

    ovl_enemy_world4_4880(rdram, ctx);
        goto after_0;
    // 0x43003CF0: nop

    after_0:
    // 0x43003CF4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x43003CF8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x43003CFC: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x43003D00: jal         0x430006C4
    // 0x43003D04: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_enemy_world4_6C4(rdram, ctx);
        goto after_1;
    // 0x43003D04: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x43003D08: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x43003D0C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x43003D10: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x43003D14: ori         $t0, $t7, 0x1
    ctx->r8 = ctx->r15 | 0X1;
    // 0x43003D18: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x43003D1C: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x43003D20: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x43003D24: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x43003D28: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x43003D2C: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x43003D30: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x43003D34: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x43003D38: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x43003D3C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x43003D40: jal         0x430006C4
    // 0x43003D44: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_enemy_world4_6C4(rdram, ctx);
        goto after_2;
    // 0x43003D44: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x43003D48: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43003D4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43003D50: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43003D54: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x43003D58: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x43003D5C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x43003D60: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x43003D64: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x43003D68: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x43003D6C: jal         0x430006C4
    // 0x43003D70: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_enemy_world4_6C4(rdram, ctx);
        goto after_3;
    // 0x43003D70: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x43003D74: jal         0x430016D8
    // 0x43003D78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_16D8(rdram, ctx);
        goto after_4;
    // 0x43003D78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x43003D7C: addiu       $t4, $zero, 0xC8
    ctx->r12 = ADD32(0, 0XC8);
    // 0x43003D80: sw          $zero, 0x1C0($s0)
    MEM_W(0X1C0, ctx->r16) = 0;
    // 0x43003D84: sw          $zero, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = 0;
    // 0x43003D88: sw          $zero, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = 0;
    // 0x43003D8C: sw          $t4, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->r12;
    // 0x43003D90: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x43003D94: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x43003D98: lw          $v0, 0x4($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X4);
    // 0x43003D9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003DA0: beq         $v0, $at, L_43003DC0
    if (ctx->r2 == ctx->r1) {
        // 0x43003DA4: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_43003DC0;
    }
    // 0x43003DA4: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x43003DA8: beq         $v0, $at, L_43003DC0
    if (ctx->r2 == ctx->r1) {
        // 0x43003DAC: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_43003DC0;
    }
    // 0x43003DAC: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x43003DB0: beq         $v0, $at, L_43003DD4
    if (ctx->r2 == ctx->r1) {
        // 0x43003DB4: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_43003DD4;
    }
    // 0x43003DB4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x43003DB8: b           L_43003DE4
    // 0x43003DBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43003DE4;
    // 0x43003DBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43003DC0:
    // 0x43003DC0: jal         0x430015C0
    // 0x43003DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world4_15C0(rdram, ctx);
        goto after_5;
    // 0x43003DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x43003DC8: b           L_43003DE4
    // 0x43003DCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43003DE4;
    // 0x43003DCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43003DD0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
L_43003DD4:
    // 0x43003DD4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43003DD8: nop

    // 0x43003DDC: swc1        $f8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f8.u32l;
    // 0x43003DE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43003DE4:
    // 0x43003DE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43003DE8: jr          $ra
    // 0x43003DEC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x43003DEC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_enemy_world4_3DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003DF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43003DF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003DF8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x43003DFC: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x43003E00: jal         0x43004880
    // 0x43003E04: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    ovl_enemy_world4_4880(rdram, ctx);
        goto after_0;
    // 0x43003E04: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x43003E08: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x43003E0C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43003E10: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x43003E14: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x43003E18: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43003E1C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x43003E20: jal         0x43001D10
    // 0x43003E24: nop

    ovl_enemy_world4_1D10(rdram, ctx);
        goto after_1;
    // 0x43003E24: nop

    after_1:
    // 0x43003E28: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x43003E2C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x43003E30: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43003E34: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x43003E38: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x43003E3C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x43003E40: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x43003E44: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x43003E48: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003E4C: swc1        $f10, 0x1AC($a2)
    MEM_W(0X1AC, ctx->r6) = ctx->f10.u32l;
    // 0x43003E50: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x43003E54: lwc1        $f8, 0x1AC($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X1AC);
    // 0x43003E58: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x43003E5C: swc1        $f8, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f8.u32l;
    // 0x43003E60: swc1        $f4, 0x1D0($a2)
    MEM_W(0X1D0, ctx->r6) = ctx->f4.u32l;
    // 0x43003E64: lwc1        $f6, 0x1D0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X1D0);
    // 0x43003E68: nop

    // 0x43003E6C: swc1        $f6, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f6.u32l;
    // 0x43003E70: lwc1        $f10, -0x6560($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6560);
    // 0x43003E74: nop

    // 0x43003E78: swc1        $f10, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->f10.u32l;
    // 0x43003E7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003E80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43003E84: jr          $ra
    // 0x43003E88: nop

    return;
    // 0x43003E88: nop

;}
RECOMP_FUNC void ovl_enemy_world4_3E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003E8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43003E90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003E94: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x43003E98: jal         0x43005250
    // 0x43003E9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world4_5250(rdram, ctx);
        goto after_0;
    // 0x43003E9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x43003EA0: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x43003EA4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43003EA8: bne         $a1, $t6, L_43003EC8
    if (ctx->r5 != ctx->r14) {
        // 0x43003EAC: lui         $v1, 0x4301
        ctx->r3 = S32(0X4301 << 16);
            goto L_43003EC8;
    }
    // 0x43003EAC: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43003EB0: addiu       $v1, $v1, -0x6070
    ctx->r3 = ADD32(ctx->r3, -0X6070);
    // 0x43003EB4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x43003EB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43003EBC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x43003EC0: b           L_43003FC4
    // 0x43003EC4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_43003FC4;
    // 0x43003EC4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_43003EC8:
    // 0x43003EC8: addiu       $v1, $v0, 0x268
    ctx->r3 = ADD32(ctx->r2, 0X268);
    // 0x43003ECC: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x43003ED0: nop

    // 0x43003ED4: bne         $a1, $t9, L_43003EFC
    if (ctx->r5 != ctx->r25) {
        // 0x43003ED8: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_43003EFC;
    }
    // 0x43003ED8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x43003EDC: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43003EE0: addiu       $v1, $v1, -0x6070
    ctx->r3 = ADD32(ctx->r3, -0X6070);
    // 0x43003EE4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x43003EE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43003EEC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x43003EF0: b           L_43003FC4
    // 0x43003EF4: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_43003FC4;
    // 0x43003EF4: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x43003EF8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_43003EFC:
    // 0x43003EFC: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003F00: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_43003F04:
    // 0x43003F04: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x43003F08: nop

    // 0x43003F0C: bne         $a1, $t2, L_43003F30
    if (ctx->r5 != ctx->r10) {
        // 0x43003F10: nop
    
            goto L_43003F30;
    }
    // 0x43003F10: nop

    // 0x43003F14: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43003F18: addiu       $v1, $v1, -0x6070
    ctx->r3 = ADD32(ctx->r3, -0X6070);
    // 0x43003F1C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x43003F20: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x43003F24: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x43003F28: b           L_43003FC4
    // 0x43003F2C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
        goto L_43003FC4;
    // 0x43003F2C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_43003F30:
    // 0x43003F30: lw          $t5, 0x26C($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X26C);
    // 0x43003F34: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003F38: bne         $a1, $t5, L_43003F5C
    if (ctx->r5 != ctx->r13) {
        // 0x43003F3C: nop
    
            goto L_43003F5C;
    }
    // 0x43003F3C: nop

    // 0x43003F40: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43003F44: addiu       $v1, $v1, -0x6070
    ctx->r3 = ADD32(ctx->r3, -0X6070);
    // 0x43003F48: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x43003F4C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x43003F50: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x43003F54: b           L_43003FC4
    // 0x43003F58: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
        goto L_43003FC4;
    // 0x43003F58: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_43003F5C:
    // 0x43003F5C: lw          $t8, 0x26C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X26C);
    // 0x43003F60: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003F64: bne         $a1, $t8, L_43003F88
    if (ctx->r5 != ctx->r24) {
        // 0x43003F68: nop
    
            goto L_43003F88;
    }
    // 0x43003F68: nop

    // 0x43003F6C: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43003F70: addiu       $v1, $v1, -0x6070
    ctx->r3 = ADD32(ctx->r3, -0X6070);
    // 0x43003F74: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x43003F78: addiu       $v0, $a0, 0x2
    ctx->r2 = ADD32(ctx->r4, 0X2);
    // 0x43003F7C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x43003F80: b           L_43003FC4
    // 0x43003F84: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
        goto L_43003FC4;
    // 0x43003F84: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_43003F88:
    // 0x43003F88: lw          $t1, 0x26C($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X26C);
    // 0x43003F8C: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003F90: bne         $a1, $t1, L_43003FB4
    if (ctx->r5 != ctx->r9) {
        // 0x43003F94: nop
    
            goto L_43003FB4;
    }
    // 0x43003F94: nop

    // 0x43003F98: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43003F9C: addiu       $v1, $v1, -0x6070
    ctx->r3 = ADD32(ctx->r3, -0X6070);
    // 0x43003FA0: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x43003FA4: addiu       $v0, $a0, 0x3
    ctx->r2 = ADD32(ctx->r4, 0X3);
    // 0x43003FA8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x43003FAC: b           L_43003FC4
    // 0x43003FB0: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
        goto L_43003FC4;
    // 0x43003FB0: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_43003FB4:
    // 0x43003FB4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x43003FB8: bne         $a0, $v0, L_43003F04
    if (ctx->r4 != ctx->r2) {
        // 0x43003FBC: addiu       $v1, $v1, 0x268
        ctx->r3 = ADD32(ctx->r3, 0X268);
            goto L_43003F04;
    }
    // 0x43003FBC: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003FC0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_43003FC4:
    // 0x43003FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003FC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43003FCC: jr          $ra
    // 0x43003FD0: nop

    return;
    // 0x43003FD0: nop

;}
RECOMP_FUNC void ovl_enemy_world4_3FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003FD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43003FD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003FDC: jal         0x43004880
    // 0x43003FE0: nop

    ovl_enemy_world4_4880(rdram, ctx);
        goto after_0;
    // 0x43003FE0: nop

    after_0:
    // 0x43003FE4: lw          $t6, 0x14($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X14);
    // 0x43003FE8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43003FEC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x43003FF0: sltiu       $at, $t7, 0xA
    ctx->r1 = ctx->r15 < 0XA ? 1 : 0;
    // 0x43003FF4: beq         $at, $zero, L_43004048
    if (ctx->r1 == 0) {
        // 0x43003FF8: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_43004048;
    }
    // 0x43003FF8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x43003FFC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004000: addu        $at, $at, $t7
    gpr jr_addend_4300400C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x43004004: lw          $t7, -0x655C($at)
    ctx->r15 = ADD32(ctx->r1, -0X655C);
    // 0x43004008: nop

    // 0x4300400C: jr          $t7
    // 0x43004010: nop

    switch (jr_addend_4300400C >> 2) {
        case 0: goto L_43004014; break;
        case 1: goto L_4300401C; break;
        case 2: goto L_43004048; break;
        case 3: goto L_43004048; break;
        case 4: goto L_43004048; break;
        case 5: goto L_43004024; break;
        case 6: goto L_4300402C; break;
        case 7: goto L_43004034; break;
        case 8: goto L_4300403C; break;
        case 9: goto L_43004044; break;
        default: switch_error(__func__, 0x4300400C, 0x43009AA4);
    }
    // 0x43004010: nop

L_43004014:
    // 0x43004014: b           L_43004048
    // 0x43004018: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
        goto L_43004048;
    // 0x43004018: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
L_4300401C:
    // 0x4300401C: b           L_43004048
    // 0x43004020: addiu       $v1, $zero, 0x2000
    ctx->r3 = ADD32(0, 0X2000);
        goto L_43004048;
    // 0x43004020: addiu       $v1, $zero, 0x2000
    ctx->r3 = ADD32(0, 0X2000);
L_43004024:
    // 0x43004024: b           L_43004048
    // 0x43004028: addiu       $v1, $zero, 0x3000
    ctx->r3 = ADD32(0, 0X3000);
        goto L_43004048;
    // 0x43004028: addiu       $v1, $zero, 0x3000
    ctx->r3 = ADD32(0, 0X3000);
L_4300402C:
    // 0x4300402C: b           L_43004048
    // 0x43004030: addiu       $v1, $zero, 0x4000
    ctx->r3 = ADD32(0, 0X4000);
        goto L_43004048;
    // 0x43004030: addiu       $v1, $zero, 0x4000
    ctx->r3 = ADD32(0, 0X4000);
L_43004034:
    // 0x43004034: b           L_43004048
    // 0x43004038: addiu       $v1, $zero, 0x5000
    ctx->r3 = ADD32(0, 0X5000);
        goto L_43004048;
    // 0x43004038: addiu       $v1, $zero, 0x5000
    ctx->r3 = ADD32(0, 0X5000);
L_4300403C:
    // 0x4300403C: b           L_43004048
    // 0x43004040: addiu       $v1, $zero, 0x6000
    ctx->r3 = ADD32(0, 0X6000);
        goto L_43004048;
    // 0x43004040: addiu       $v1, $zero, 0x6000
    ctx->r3 = ADD32(0, 0X6000);
L_43004044:
    // 0x43004044: addiu       $v1, $zero, 0x7000
    ctx->r3 = ADD32(0, 0X7000);
L_43004048:
    // 0x43004048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300404C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004050: jr          $ra
    // 0x43004054: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x43004054: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world4_4058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004058: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x4300405C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x43004060: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x43004064: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x43004068: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x4300406C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x43004070: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x43004074: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x43004078: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x4300407C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x43004080: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x43004084: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43004088: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x4300408C: jal         0x43004880
    // 0x43004090: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_enemy_world4_4880(rdram, ctx);
        goto after_0;
    // 0x43004090: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x43004094: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x43004098: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x4300409C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x430040A0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x430040A4: lw          $t8, -0x67A4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X67A4);
    // 0x430040A8: sll         $t1, $s5, 2
    ctx->r9 = S32(ctx->r21 << 2);
    // 0x430040AC: addu        $t1, $t1, $s5
    ctx->r9 = ADD32(ctx->r9, ctx->r21);
    // 0x430040B0: lui         $t2, 0x4301
    ctx->r10 = S32(0X4301 << 16);
    // 0x430040B4: addiu       $t2, $t2, -0x6050
    ctx->r10 = ADD32(ctx->r10, -0X6050);
    // 0x430040B8: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x430040BC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x430040C0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x430040C4: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x430040C8: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x430040CC: sw          $t9, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r25;
    // 0x430040D0: sw          $t0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r8;
    // 0x430040D4: sw          $v1, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r3;
    // 0x430040D8: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x430040DC: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x430040E0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x430040E4: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x430040E8: lw          $t3, 0x10($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X10);
    // 0x430040EC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x430040F0: swc1        $f20, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f20.u32l;
    // 0x430040F4: lw          $t4, 0x10($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X10);
    // 0x430040F8: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x430040FC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43004100: swc1        $f6, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f6.u32l;
    // 0x43004104: lw          $t5, 0x10($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X10);
    // 0x43004108: jal         0x43003FD4
    // 0x4300410C: swc1        $f20, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f20.u32l;
    ovl_enemy_world4_3FD4(rdram, ctx);
        goto after_1;
    // 0x4300410C: swc1        $f20, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f20.u32l;
    after_1:
    // 0x43004110: lw          $t8, 0x10($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X10);
    // 0x43004114: andi        $s4, $s3, 0xFF
    ctx->r20 = ctx->r19 & 0XFF;
    // 0x43004118: ori         $t6, $v0, 0x8300
    ctx->r14 = ctx->r2 | 0X8300;
    // 0x4300411C: or          $t7, $t6, $s4
    ctx->r15 = ctx->r14 | ctx->r20;
    // 0x43004120: sw          $t7, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r15;
    // 0x43004124: lw          $t9, 0x10($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X10);
    // 0x43004128: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x4300412C: swc1        $f20, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f20.u32l;
    // 0x43004130: lw          $t0, 0x10($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X10);
    // 0x43004134: sll         $t7, $s5, 2
    ctx->r15 = S32(ctx->r21 << 2);
    // 0x43004138: swc1        $f20, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f20.u32l;
    // 0x4300413C: lw          $t1, 0x10($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X10);
    // 0x43004140: ori         $t3, $zero, 0x8000
    ctx->r11 = 0 | 0X8000;
    // 0x43004144: swc1        $f20, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f20.u32l;
    // 0x43004148: lw          $t2, 0x10($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X10);
    // 0x4300414C: addiu       $t6, $t6, -0x5DF8
    ctx->r14 = ADD32(ctx->r14, -0X5DF8);
    // 0x43004150: swc1        $f20, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f20.u32l;
    // 0x43004154: lw          $t4, 0x10($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X10);
    // 0x43004158: sll         $t5, $s5, 3
    ctx->r13 = S32(ctx->r21 << 3);
    // 0x4300415C: addu        $t7, $t7, $s5
    ctx->r15 = ADD32(ctx->r15, ctx->r21);
    // 0x43004160: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43004164: addu        $v1, $t5, $t6
    ctx->r3 = ADD32(ctx->r13, ctx->r14);
    // 0x43004168: addiu       $t8, $t8, -0x5EC0
    ctx->r24 = ADD32(ctx->r24, -0X5EC0);
    // 0x4300416C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x43004170: sw          $t3, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->r11;
    // 0x43004174: sw          $v1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r3;
    // 0x43004178: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x4300417C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x43004180: lw          $t1, 0x14($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X14);
    // 0x43004184: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x43004188: addiu       $s5, $zero, 0x14
    ctx->r21 = ADD32(0, 0X14);
    // 0x4300418C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43004190: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
L_43004194:
    // 0x43004194: lw          $t2, 0x14($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X14);
    // 0x43004198: lwc1        $f8, 0x20($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X20);
    // 0x4300419C: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x430041A0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x430041A4: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x430041A8: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
    // 0x430041AC: lw          $t5, 0x14($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X14);
    // 0x430041B0: nop

    // 0x430041B4: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x430041B8: nop

    // 0x430041BC: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x430041C0: swc1        $f20, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f20.u32l;
    // 0x430041C4: lw          $t8, 0x14($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X14);
    // 0x430041C8: lwc1        $f10, 0x1C($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x430041CC: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x430041D0: nop

    // 0x430041D4: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x430041D8: swc1        $f10, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f10.u32l;
    // 0x430041DC: lw          $t1, 0x14($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X14);
    // 0x430041E0: nop

    // 0x430041E4: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x430041E8: nop

    // 0x430041EC: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x430041F0: jal         0x43003FD4
    // 0x430041F4: swc1        $f20, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f20.u32l;
    ovl_enemy_world4_3FD4(rdram, ctx);
        goto after_2;
    // 0x430041F4: swc1        $f20, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f20.u32l;
    after_2:
    // 0x430041F8: lw          $t6, 0x14($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X14);
    // 0x430041FC: ori         $t4, $v0, 0x8A00
    ctx->r12 = ctx->r2 | 0X8A00;
    // 0x43004200: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x43004204: or          $t5, $t4, $s4
    ctx->r13 = ctx->r12 | ctx->r20;
    // 0x43004208: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x4300420C: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x43004210: bne         $s0, $s5, L_43004194
    if (ctx->r16 != ctx->r21) {
        // 0x43004214: sw          $t5, 0x10($t8)
        MEM_W(0X10, ctx->r24) = ctx->r13;
            goto L_43004194;
    }
    // 0x43004214: sw          $t5, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r13;
    // 0x43004218: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x4300421C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x43004220: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x43004224: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x43004228: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x4300422C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x43004230: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x43004234: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x43004238: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x4300423C: jr          $ra
    // 0x43004240: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x43004240: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_enemy_world4_4244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004244: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43004248: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x4300424C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43004250: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43004254: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x43004258: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x4300425C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x43004260: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x43004264: sw          $t7, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r15;
    // 0x43004268: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x4300426C: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x43004270: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x43004274: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x43004278: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x4300427C: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x43004280: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x43004284: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x43004288: jr          $ra
    // 0x4300428C: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x4300428C: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void ovl_enemy_world4_4290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004290: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43004294: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x43004298: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x4300429C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x430042A0: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x430042A4: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x430042A8: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x430042AC: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x430042B0: jr          $ra
    // 0x430042B4: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x430042B4: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void ovl_enemy_world4_42B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430042B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430042BC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x430042C0: sw          $zero, 0x18C($a0)
    MEM_W(0X18C, ctx->r4) = 0;
    // 0x430042C4: sw          $t6, 0x190($a0)
    MEM_W(0X190, ctx->r4) = ctx->r14;
    // 0x430042C8: sw          $zero, 0x194($a0)
    MEM_W(0X194, ctx->r4) = 0;
    // 0x430042CC: sw          $zero, 0x198($a0)
    MEM_W(0X198, ctx->r4) = 0;
    // 0x430042D0: sw          $zero, 0x19C($a0)
    MEM_W(0X19C, ctx->r4) = 0;
    // 0x430042D4: swc1        $f0, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->f0.u32l;
    // 0x430042D8: jr          $ra
    // 0x430042DC: swc1        $f0, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x430042DC: swc1        $f0, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void ovl_enemy_world4_42E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430042E0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x430042E4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x430042E8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x430042EC: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x430042F0: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x430042F4: sw          $t1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r9;
    // 0x430042F8: sw          $t1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r9;
    // 0x430042FC: sw          $t0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r8;
    // 0x43004300: sw          $t0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r8;
    // 0x43004304: sw          $a3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r7;
    // 0x43004308: sw          $a3, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r7;
    // 0x4300430C: sw          $a2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r6;
    // 0x43004310: sw          $a2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r6;
    // 0x43004314: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x43004318: sw          $zero, 0x30($a0)
    MEM_W(0X30, ctx->r4) = 0;
    // 0x4300431C: addiu       $v1, $a0, 0x38
    ctx->r3 = ADD32(ctx->r4, 0X38);
    // 0x43004320: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x43004324: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_43004328:
    // 0x43004328: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x4300432C: sw          $a2, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r6;
    // 0x43004330: sw          $a3, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r7;
    // 0x43004334: sw          $t0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r8;
    // 0x43004338: sw          $t1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r9;
    // 0x4300433C: sw          $zero, 0x30($v1)
    MEM_W(0X30, ctx->r3) = 0;
    // 0x43004340: sw          $a2, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r6;
    // 0x43004344: sw          $a3, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r7;
    // 0x43004348: sw          $t0, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r8;
    // 0x4300434C: sw          $t1, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r9;
    // 0x43004350: sw          $zero, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = 0;
    // 0x43004354: sw          $a2, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r6;
    // 0x43004358: sw          $a3, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = ctx->r7;
    // 0x4300435C: sw          $t0, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r8;
    // 0x43004360: sw          $t1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r9;
    // 0x43004364: sw          $zero, 0x68($v1)
    MEM_W(0X68, ctx->r3) = 0;
    // 0x43004368: addiu       $v1, $v1, 0x70
    ctx->r3 = ADD32(ctx->r3, 0X70);
    // 0x4300436C: sw          $a2, -0x6C($v1)
    MEM_W(-0X6C, ctx->r3) = ctx->r6;
    // 0x43004370: sw          $a3, -0x68($v1)
    MEM_W(-0X68, ctx->r3) = ctx->r7;
    // 0x43004374: sw          $t0, -0x64($v1)
    MEM_W(-0X64, ctx->r3) = ctx->r8;
    // 0x43004378: sw          $t1, -0x60($v1)
    MEM_W(-0X60, ctx->r3) = ctx->r9;
    // 0x4300437C: bne         $v0, $a0, L_43004328
    if (ctx->r2 != ctx->r4) {
        // 0x43004380: sw          $zero, -0x5C($v1)
        MEM_W(-0X5C, ctx->r3) = 0;
            goto L_43004328;
    }
    // 0x43004380: sw          $zero, -0x5C($v1)
    MEM_W(-0X5C, ctx->r3) = 0;
    // 0x43004384: jr          $ra
    // 0x43004388: nop

    return;
    // 0x43004388: nop

;}
RECOMP_FUNC void ovl_enemy_world4_438C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300438C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43004390: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43004394: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x43004398: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x4300439C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x430043A0: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    // 0x430043A4: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x430043A8: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
    // 0x430043AC: sw          $a1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r5;
    // 0x430043B0: sw          $a1, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r5;
    // 0x430043B4: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x430043B8: jr          $ra
    // 0x430043BC: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    return;
    // 0x430043BC: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_enemy_world4_43C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430043C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x430043C4: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x430043C8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x430043CC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x430043D0: jr          $ra
    // 0x430043D4: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    return;
    // 0x430043D4: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void ovl_enemy_world4_43D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430043D8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430043DC: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x430043E0: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x430043E4: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x430043E8: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x430043EC: jr          $ra
    // 0x430043F0: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x430043F0: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void ovl_enemy_world4_43F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430043F4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430043F8: nop

    // 0x430043FC: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x43004400: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x43004404: jr          $ra
    // 0x43004408: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x43004408: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void ovl_enemy_world4_440C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300440C: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x43004410: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
    // 0x43004414: sh          $zero, 0x2($a0)
    MEM_H(0X2, ctx->r4) = 0;
    // 0x43004418: jr          $ra
    // 0x4300441C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    return;
    // 0x4300441C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_enemy_world4_4420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004420: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x43004424: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x43004428: jr          $ra
    // 0x4300442C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    return;
    // 0x4300442C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_enemy_world4_4430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004430: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43004434: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43004438: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4300443C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43004440: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43004444: jal         0x43005218
    // 0x43004448: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    ovl_enemy_world4_5218(rdram, ctx);
        goto after_0;
    // 0x43004448: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_0:
    // 0x4300444C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43004450: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x43004454: jal         0x43005218
    // 0x43004458: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    ovl_enemy_world4_5218(rdram, ctx);
        goto after_1;
    // 0x43004458: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x4300445C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x43004460: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x43004464: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x43004468: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
    // 0x4300446C: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
    // 0x43004470: sw          $v0, 0x180($s0)
    MEM_W(0X180, ctx->r16) = ctx->r2;
    // 0x43004474: sw          $v0, 0x21C($s0)
    MEM_W(0X21C, ctx->r16) = ctx->r2;
    // 0x43004478: jal         0x430042E0
    // 0x4300447C: addiu       $a0, $s0, 0x64
    ctx->r4 = ADD32(ctx->r16, 0X64);
    ovl_enemy_world4_42E0(rdram, ctx);
        goto after_2;
    // 0x4300447C: addiu       $a0, $s0, 0x64
    ctx->r4 = ADD32(ctx->r16, 0X64);
    after_2:
    // 0x43004480: jal         0x430042B8
    // 0x43004484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_42B8(rdram, ctx);
        goto after_3;
    // 0x43004484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43004488: jal         0x43004290
    // 0x4300448C: addiu       $a0, $s0, 0x1F8
    ctx->r4 = ADD32(ctx->r16, 0X1F8);
    ovl_enemy_world4_4290(rdram, ctx);
        goto after_4;
    // 0x4300448C: addiu       $a0, $s0, 0x1F8
    ctx->r4 = ADD32(ctx->r16, 0X1F8);
    after_4:
    // 0x43004490: jal         0x43004244
    // 0x43004494: addiu       $a0, $s0, 0x1A0
    ctx->r4 = ADD32(ctx->r16, 0X1A0);
    ovl_enemy_world4_4244(rdram, ctx);
        goto after_5;
    // 0x43004494: addiu       $a0, $s0, 0x1A0
    ctx->r4 = ADD32(ctx->r16, 0X1A0);
    after_5:
    // 0x43004498: jal         0x4300438C
    // 0x4300449C: addiu       $a0, $s0, 0x22C
    ctx->r4 = ADD32(ctx->r16, 0X22C);
    ovl_enemy_world4_438C(rdram, ctx);
        goto after_6;
    // 0x4300449C: addiu       $a0, $s0, 0x22C
    ctx->r4 = ADD32(ctx->r16, 0X22C);
    after_6:
    // 0x430044A0: jal         0x430043F4
    // 0x430044A4: addiu       $a0, $s0, 0x220
    ctx->r4 = ADD32(ctx->r16, 0X220);
    ovl_enemy_world4_43F4(rdram, ctx);
        goto after_7;
    // 0x430044A4: addiu       $a0, $s0, 0x220
    ctx->r4 = ADD32(ctx->r16, 0X220);
    after_7:
    // 0x430044A8: jal         0x430043C0
    // 0x430044AC: addiu       $a0, $s0, 0x1D4
    ctx->r4 = ADD32(ctx->r16, 0X1D4);
    ovl_enemy_world4_43C0(rdram, ctx);
        goto after_8;
    // 0x430044AC: addiu       $a0, $s0, 0x1D4
    ctx->r4 = ADD32(ctx->r16, 0X1D4);
    after_8:
    // 0x430044B0: jal         0x430043D8
    // 0x430044B4: addiu       $a0, $s0, 0x1E4
    ctx->r4 = ADD32(ctx->r16, 0X1E4);
    ovl_enemy_world4_43D8(rdram, ctx);
        goto after_9;
    // 0x430044B4: addiu       $a0, $s0, 0x1E4
    ctx->r4 = ADD32(ctx->r16, 0X1E4);
    after_9:
    // 0x430044B8: jal         0x4300440C
    // 0x430044BC: addiu       $a0, $s0, 0x260
    ctx->r4 = ADD32(ctx->r16, 0X260);
    ovl_enemy_world4_440C(rdram, ctx);
        goto after_10;
    // 0x430044BC: addiu       $a0, $s0, 0x260
    ctx->r4 = ADD32(ctx->r16, 0X260);
    after_10:
    // 0x430044C0: jal         0x43004420
    // 0x430044C4: addiu       $a0, $s0, 0x214
    ctx->r4 = ADD32(ctx->r16, 0X214);
    ovl_enemy_world4_4420(rdram, ctx);
        goto after_11;
    // 0x430044C4: addiu       $a0, $s0, 0x214
    ctx->r4 = ADD32(ctx->r16, 0X214);
    after_11:
    // 0x430044C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430044CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430044D0: jr          $ra
    // 0x430044D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x430044D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world4_44D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430044D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430044DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430044E0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x430044E4: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x430044E8: jal         0x43004880
    // 0x430044EC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    ovl_enemy_world4_4880(rdram, ctx);
        goto after_0;
    // 0x430044EC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x430044F0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x430044F4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x430044F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x430044FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43004500: swc1        $f4, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->f4.u32l;
    // 0x43004504: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
    // 0x43004508: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x4300450C: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x43004510: bne         $t6, $at, L_43004524
    if (ctx->r14 != ctx->r1) {
        // 0x43004514: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_43004524;
    }
    // 0x43004514: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x43004518: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4300451C: b           L_43004534
    // 0x43004520: swc1        $f8, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->f8.u32l;
        goto L_43004534;
    // 0x43004520: swc1        $f8, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->f8.u32l;
L_43004524:
    // 0x43004524: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004528: lwc1        $f10, -0x6534($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6534);
    // 0x4300452C: nop

    // 0x43004530: swc1        $f10, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->f10.u32l;
L_43004534:
    // 0x43004534: lw          $t7, 0x54($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X54);
    // 0x43004538: nop

    // 0x4300453C: ori         $t8, $t7, 0x8
    ctx->r24 = ctx->r15 | 0X8;
    // 0x43004540: sw          $t8, 0x54($a1)
    MEM_W(0X54, ctx->r5) = ctx->r24;
    // 0x43004544: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004548: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300454C: jr          $ra
    // 0x43004550: nop

    return;
    // 0x43004550: nop

;}
RECOMP_FUNC void ovl_enemy_world4_4554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004554: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43004558: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300455C: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x43004560: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43004564: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x43004568: bne         $t7, $zero, L_43004604
    if (ctx->r15 != 0) {
        // 0x4300456C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004604;
    }
    // 0x4300456C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004570: lw          $v0, 0x1E4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1E4);
    // 0x43004574: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x43004578: beq         $v0, $at, L_43004588
    if (ctx->r2 == ctx->r1) {
        // 0x4300457C: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_43004588;
    }
    // 0x4300457C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x43004580: bne         $v0, $at, L_43004604
    if (ctx->r2 != ctx->r1) {
        // 0x43004584: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004604;
    }
    // 0x43004584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004588:
    // 0x43004588: lw          $a0, 0xC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XC);
    // 0x4300458C: jal         0x43004880
    // 0x43004590: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    ovl_enemy_world4_4880(rdram, ctx);
        goto after_0;
    // 0x43004590: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x43004594: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x43004598: lw          $a1, 0x70($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X70);
    // 0x4300459C: lw          $t8, 0x54($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X54);
    // 0x430045A0: lw          $t0, 0x1E4($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X1E4);
    // 0x430045A4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x430045A8: ori         $t9, $t8, 0x400
    ctx->r25 = ctx->r24 | 0X400;
    // 0x430045AC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x430045B0: beq         $t0, $at, L_430045E0
    if (ctx->r8 == ctx->r1) {
        // 0x430045B4: sw          $t9, 0x54($a3)
        MEM_W(0X54, ctx->r7) = ctx->r25;
            goto L_430045E0;
    }
    // 0x430045B4: sw          $t9, 0x54($a3)
    MEM_W(0X54, ctx->r7) = ctx->r25;
    // 0x430045B8: addiu       $a0, $a1, -0x1
    ctx->r4 = ADD32(ctx->r5, -0X1);
    // 0x430045BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430045C0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x430045C4: jal         0x4300034C
    // 0x430045C8: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    ovl_enemy_world4_34C(rdram, ctx);
        goto after_1;
    // 0x430045C8: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_1:
    // 0x430045CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x430045D0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x430045D4: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x430045D8: bne         $v0, $a0, L_430045EC
    if (ctx->r2 != ctx->r4) {
        // 0x430045DC: nop
    
            goto L_430045EC;
    }
    // 0x430045DC: nop

L_430045E0:
    // 0x430045E0: lw          $a1, 0x6C($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X6C);
    // 0x430045E4: b           L_430045F8
    // 0x430045E8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
        goto L_430045F8;
    // 0x430045E8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_430045EC:
    // 0x430045EC: lw          $a1, 0x68($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X68);
    // 0x430045F0: nop

    // 0x430045F4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_430045F8:
    // 0x430045F8: jal         0x43004FFC
    // 0x430045FC: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    ovl_enemy_world4_4FFC(rdram, ctx);
        goto after_2;
    // 0x430045FC: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    after_2:
    // 0x43004600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004604:
    // 0x43004604: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43004608: jr          $ra
    // 0x4300460C: nop

    return;
    // 0x4300460C: nop

;}
RECOMP_FUNC void ovl_enemy_world4_4610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004610: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x43004614: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43004618: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300461C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43004620: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x43004624: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x43004628: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x4300462C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43004630: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x43004634: jal         0x430006C4
    // 0x43004638: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_enemy_world4_6C4(rdram, ctx);
        goto after_0;
    // 0x43004638: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x4300463C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43004640: lwc1        $f2, 0x78($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X78);
    // 0x43004644: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x43004648: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x4300464C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x43004650: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x43004654: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x43004658: bc1f        L_43004678
    if (!c1cs) {
        // 0x4300465C: swc1        $f4, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
            goto L_43004678;
    }
    // 0x4300465C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x43004660: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x43004664: nop

    // 0x43004668: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x4300466C: nop

    // 0x43004670: bc1t        L_4300470C
    if (c1cs) {
        // 0x43004674: lw          $t6, 0x74($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X74);
            goto L_4300470C;
    }
    // 0x43004674: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
L_43004678:
    // 0x43004678: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x4300467C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x43004680: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x43004684: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x43004688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300468C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x43004690: jal         0x43005218
    // 0x43004694: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    ovl_enemy_world4_5218(rdram, ctx);
        goto after_1;
    // 0x43004694: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x43004698: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4300469C: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x430046A0: lwc1        $f16, 0x80($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X80);
    // 0x430046A4: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x430046A8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x430046AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430046B0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x430046B4: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x430046B8: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x430046BC: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x430046C0: jal         0x43005218
    // 0x430046C4: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    ovl_enemy_world4_5218(rdram, ctx);
        goto after_2;
    // 0x430046C4: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x430046C8: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x430046CC: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x430046D0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x430046D4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x430046D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430046DC: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x430046E0: jal         0x43005218
    // 0x430046E4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    ovl_enemy_world4_5218(rdram, ctx);
        goto after_3;
    // 0x430046E4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_3:
    // 0x430046E8: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x430046EC: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x430046F0: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x430046F4: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x430046F8: nop

    // 0x430046FC: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x43004700: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x43004704: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x43004708: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
L_4300470C:
    // 0x4300470C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x43004710: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x43004714: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x43004718: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4300471C: jal         0x430006C4
    // 0x43004720: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    ovl_enemy_world4_6C4(rdram, ctx);
        goto after_4;
    // 0x43004720: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_4:
    // 0x43004724: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x43004728: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4300472C: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x43004730: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x43004734: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x43004738: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x4300473C: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x43004740: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x43004744: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43004748: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x4300474C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x43004750: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x43004754: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x43004758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300475C: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    // 0x43004760: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x43004764: jal         0x43005218
    // 0x43004768: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    ovl_enemy_world4_5218(rdram, ctx);
        goto after_5;
    // 0x43004768: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x4300476C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43004770: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43004774: jr          $ra
    // 0x43004778: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x43004778: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_enemy_world4_477C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300477C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43004780: beq         $a0, $at, L_43004798
    if (ctx->r4 == ctx->r1) {
        // 0x43004784: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_43004798;
    }
    // 0x43004784: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x43004788: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x4300478C: lw          $v1, -0x6060($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6060);
    // 0x43004790: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x43004794: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
L_43004798:
    // 0x43004798: jr          $ra
    // 0x4300479C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4300479C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world4_47A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430047A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430047A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430047A8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x430047AC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x430047B0: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x430047B4: jal         0x43004880
    // 0x430047B8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    ovl_enemy_world4_4880(rdram, ctx);
        goto after_0;
    // 0x430047B8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x430047BC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x430047C0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x430047C4: addiu       $t7, $t6, -0x3
    ctx->r15 = ADD32(ctx->r14, -0X3);
    // 0x430047C8: sltiu       $at, $t7, 0x9
    ctx->r1 = ctx->r15 < 0X9 ? 1 : 0;
    // 0x430047CC: beq         $at, $zero, L_43004858
    if (ctx->r1 == 0) {
        // 0x430047D0: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_43004858;
    }
    // 0x430047D0: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x430047D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x430047D8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430047DC: addu        $at, $at, $t7
    gpr jr_addend_430047E8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x430047E0: lw          $t7, -0x6530($at)
    ctx->r15 = ADD32(ctx->r1, -0X6530);
    // 0x430047E4: nop

    // 0x430047E8: jr          $t7
    // 0x430047EC: nop

    switch (jr_addend_430047E8 >> 2) {
        case 0: goto L_430047F0; break;
        case 1: goto L_430047FC; break;
        case 2: goto L_43004808; break;
        case 3: goto L_43004814; break;
        case 4: goto L_43004820; break;
        case 5: goto L_4300482C; break;
        case 6: goto L_43004838; break;
        case 7: goto L_43004844; break;
        case 8: goto L_43004850; break;
        default: switch_error(__func__, 0x430047E8, 0x43009AD0);
    }
    // 0x430047EC: nop

L_430047F0:
    // 0x430047F0: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x430047F4: b           L_4300485C
    // 0x430047F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x430047F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_430047FC:
    // 0x430047FC: lw          $v1, 0x28($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X28);
    // 0x43004800: b           L_4300485C
    // 0x43004804: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x43004804: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43004808:
    // 0x43004808: lw          $v1, 0x30($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X30);
    // 0x4300480C: b           L_4300485C
    // 0x43004810: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x43004810: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43004814:
    // 0x43004814: lw          $v1, 0x38($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X38);
    // 0x43004818: b           L_4300485C
    // 0x4300481C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x4300481C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43004820:
    // 0x43004820: lw          $v1, 0x40($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X40);
    // 0x43004824: b           L_4300485C
    // 0x43004828: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x43004828: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_4300482C:
    // 0x4300482C: lw          $v1, 0x48($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X48);
    // 0x43004830: b           L_4300485C
    // 0x43004834: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x43004834: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43004838:
    // 0x43004838: lw          $v1, 0x50($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X50);
    // 0x4300483C: b           L_4300485C
    // 0x43004840: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x43004840: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43004844:
    // 0x43004844: lw          $v1, 0x58($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X58);
    // 0x43004848: b           L_4300485C
    // 0x4300484C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x4300484C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43004850:
    // 0x43004850: lw          $v1, 0x60($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X60);
    // 0x43004854: nop

L_43004858:
    // 0x43004858: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_4300485C:
    // 0x4300485C: beq         $v1, $at, L_43004874
    if (ctx->r3 == ctx->r1) {
        // 0x43004860: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004874;
    }
    // 0x43004860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004864: jal         0x4300477C
    // 0x43004868: addiu       $a0, $v1, -0x1
    ctx->r4 = ADD32(ctx->r3, -0X1);
    ovl_enemy_world4_477C(rdram, ctx);
        goto after_1;
    // 0x43004868: addiu       $a0, $v1, -0x1
    ctx->r4 = ADD32(ctx->r3, -0X1);
    after_1:
    // 0x4300486C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x43004870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004874:
    // 0x43004874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43004878: jr          $ra
    // 0x4300487C: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x4300487C: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
;}
RECOMP_FUNC void ovl_enemy_world4_4880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004880: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x43004884: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x43004888: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x4300488C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43004890: lw          $v1, -0x6064($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6064);
    // 0x43004894: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x43004898: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x4300489C: jr          $ra
    // 0x430048A0: addu        $v0, $v1, $t6
    ctx->r2 = ADD32(ctx->r3, ctx->r14);
    return;
    // 0x430048A0: addu        $v0, $v1, $t6
    ctx->r2 = ADD32(ctx->r3, ctx->r14);
;}
RECOMP_FUNC void ovl_enemy_world4_48A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430048A4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x430048A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430048AC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x430048B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430048B4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x430048B8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x430048BC: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x430048C0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x430048C4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x430048C8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x430048CC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x430048D0: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x430048D4: jal         0x43005218
    // 0x430048D8: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    ovl_enemy_world4_5218(rdram, ctx);
        goto after_0;
    // 0x430048D8: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x430048DC: lwc1        $f0, 0x4C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x430048E0: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x430048E4: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x430048E8: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x430048EC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x430048F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x430048F4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x430048F8: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x430048FC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x43004900: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x43004904: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x43004908: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x4300490C: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x43004910: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x43004914: jal         0x43005218
    // 0x43004918: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    ovl_enemy_world4_5218(rdram, ctx);
        goto after_1;
    // 0x43004918: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x4300491C: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x43004920: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43004924: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43004928: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x4300492C: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x43004930: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x43004934: bc1t        L_4300499C
    if (c1cs) {
        // 0x43004938: andi        $t9, $t8, 0x7000
        ctx->r25 = ctx->r24 & 0X7000;
            goto L_4300499C;
    }
    // 0x43004938: andi        $t9, $t8, 0x7000
    ctx->r25 = ctx->r24 & 0X7000;
    // 0x4300493C: addiu       $at, $zero, 0x1000
    ctx->r1 = ADD32(0, 0X1000);
    // 0x43004940: beq         $t9, $at, L_4300499C
    if (ctx->r25 == ctx->r1) {
        // 0x43004944: nop
    
            goto L_4300499C;
    }
    // 0x43004944: nop

    // 0x43004948: lw          $t0, 0x1C8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X1C8);
    // 0x4300494C: nop

    // 0x43004950: andi        $t1, $t0, 0x20
    ctx->r9 = ctx->r8 & 0X20;
    // 0x43004954: beq         $t1, $zero, L_430049A4
    if (ctx->r9 == 0) {
        // 0x43004958: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430049A4;
    }
    // 0x43004958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300495C: lwc1        $f0, 0x1BC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X1BC);
    // 0x43004960: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43004964: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x43004968: nop

    // 0x4300496C: bc1f        L_43004980
    if (!c1cs) {
        // 0x43004970: nop
    
            goto L_43004980;
    }
    // 0x43004970: nop

    // 0x43004974: sub.s       $f2, $f18, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x43004978: b           L_43004984
    // 0x4300497C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_43004984;
    // 0x4300497C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_43004980:
    // 0x43004980: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
L_43004984:
    // 0x43004984: lwc1        $f8, 0x1C4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C4);
    // 0x43004988: nop

    // 0x4300498C: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x43004990: nop

    // 0x43004994: bc1f        L_430049A4
    if (!c1cs) {
        // 0x43004998: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430049A4;
    }
    // 0x43004998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4300499C:
    // 0x4300499C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x430049A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430049A4:
    // 0x430049A4: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x430049A8: jr          $ra
    // 0x430049AC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x430049AC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_enemy_world4_49B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430049B0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x430049B4: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x430049B8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x430049BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430049C0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x430049C4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x430049C8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x430049CC: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x430049D0: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x430049D4: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x430049D8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x430049DC: jal         0x430006C4
    // 0x430049E0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world4_6C4(rdram, ctx);
        goto after_0;
    // 0x430049E0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x430049E4: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x430049E8: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x430049EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x430049F0: lwc1        $f2, 0x1BC($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X1BC);
    // 0x430049F4: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x430049F8: c.eq.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl == ctx->f2.fl;
    // 0x430049FC: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x43004A00: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x43004A04: bc1f        L_43004A14
    if (!c1cs) {
        // 0x43004A08: nop
    
            goto L_43004A14;
    }
    // 0x43004A08: nop

    // 0x43004A0C: b           L_43004A98
    // 0x43004A10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_43004A98;
    // 0x43004A10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_43004A14:
    // 0x43004A14: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x43004A18: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43004A1C: add.s       $f0, $f2, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x43004A20: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43004A24: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x43004A28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43004A2C: bc1f        L_43004A58
    if (!c1cs) {
        // 0x43004A30: addiu       $a2, $sp, 0x24
        ctx->r6 = ADD32(ctx->r29, 0X24);
            goto L_43004A58;
    }
    // 0x43004A30: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x43004A34: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x43004A38: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x43004A3C: nop

    // 0x43004A40: bc1f        L_43004A78
    if (!c1cs) {
        // 0x43004A44: nop
    
            goto L_43004A78;
    }
    // 0x43004A44: nop

    // 0x43004A48: add.s       $f16, $f8, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x43004A4C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x43004A50: b           L_43004A78
    // 0x43004A54: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
        goto L_43004A78;
    // 0x43004A54: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
L_43004A58:
    // 0x43004A58: sub.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x43004A5C: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x43004A60: nop

    // 0x43004A64: bc1f        L_43004A78
    if (!c1cs) {
        // 0x43004A68: nop
    
            goto L_43004A78;
    }
    // 0x43004A68: nop

    // 0x43004A6C: sub.s       $f6, $f18, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f14.fl;
    // 0x43004A70: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x43004A74: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
L_43004A78:
    // 0x43004A78: beq         $v1, $zero, L_43004A98
    if (ctx->r3 == 0) {
        // 0x43004A7C: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_43004A98;
    }
    // 0x43004A7C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x43004A80: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x43004A84: jal         0x430006C4
    // 0x43004A88: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    ovl_enemy_world4_6C4(rdram, ctx);
        goto after_1;
    // 0x43004A88: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_1:
    // 0x43004A8C: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x43004A90: nop

    // 0x43004A94: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43004A98:
    // 0x43004A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004A9C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x43004AA0: jr          $ra
    // 0x43004AA4: nop

    return;
    // 0x43004AA4: nop

;}
RECOMP_FUNC void ovl_enemy_world4_4AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004AA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43004AAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43004AB0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43004AB4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x43004AB8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43004ABC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x43004AC0: jal         0x43000F34
    // 0x43004AC4: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    ovl_enemy_world4_F34(rdram, ctx);
        goto after_0;
    // 0x43004AC4: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    after_0:
    // 0x43004AC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43004ACC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43004AD0: jr          $ra
    // 0x43004AD4: nop

    return;
    // 0x43004AD4: nop

;}
RECOMP_FUNC void ovl_enemy_world4_4AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004AD8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43004ADC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004AE0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43004AE4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x43004AE8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43004AEC: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x43004AF0: jal         0x430006C4
    // 0x43004AF4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world4_6C4(rdram, ctx);
        goto after_0;
    // 0x43004AF4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x43004AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004AFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43004B00: jr          $ra
    // 0x43004B04: nop

    return;
    // 0x43004B04: nop

;}
RECOMP_FUNC void ovl_enemy_world4_4B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004B08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004B0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004B10: lw          $v0, 0x18C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18C);
    // 0x43004B14: nop

    // 0x43004B18: blez        $v0, L_43004B78
    if (SIGNED(ctx->r2) <= 0) {
        // 0x43004B1C: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_43004B78;
    }
    // 0x43004B1C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x43004B20: sw          $t6, 0x18C($a0)
    MEM_W(0X18C, ctx->r4) = ctx->r14;
    // 0x43004B24: bne         $t6, $zero, L_43004B64
    if (ctx->r14 != 0) {
        // 0x43004B28: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_43004B64;
    }
    // 0x43004B28: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x43004B2C: sw          $zero, 0x18C($a0)
    MEM_W(0X18C, ctx->r4) = 0;
    // 0x43004B30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43004B34: jal         0x43001468
    // 0x43004B38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world4_1468(rdram, ctx);
        goto after_0;
    // 0x43004B38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x43004B3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43004B40: addiu       $at, $zero, -0x4001
    ctx->r1 = ADD32(0, -0X4001);
    // 0x43004B44: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x43004B48: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x43004B4C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x43004B50: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x43004B54: jal         0x430096A4
    // 0x43004B58: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
    ovl_enemy_world4_96A4(rdram, ctx);
        goto after_1;
    // 0x43004B58: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
    after_1:
    // 0x43004B5C: b           L_43004B7C
    // 0x43004B60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43004B7C;
    // 0x43004B60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004B64:
    // 0x43004B64: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x43004B68: bne         $v0, $at, L_43004B7C
    if (ctx->r2 != ctx->r1) {
        // 0x43004B6C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004B7C;
    }
    // 0x43004B6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004B70: jal         0x43001468
    // 0x43004B74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world4_1468(rdram, ctx);
        goto after_2;
    // 0x43004B74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_43004B78:
    // 0x43004B78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004B7C:
    // 0x43004B7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004B80: jr          $ra
    // 0x43004B84: nop

    return;
    // 0x43004B84: nop

;}
RECOMP_FUNC void ovl_enemy_world4_4B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004B88: lw          $t6, 0x19C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X19C);
    // 0x43004B8C: nop

    // 0x43004B90: beq         $t6, $zero, L_43004BC4
    if (ctx->r14 == 0) {
        // 0x43004B94: nop
    
            goto L_43004BC4;
    }
    // 0x43004B94: nop

    // 0x43004B98: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43004B9C: lwc1        $f4, 0x188($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X188);
    // 0x43004BA0: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x43004BA4: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x43004BA8: ori         $at, $at, 0x7FFF
    ctx->r1 = ctx->r1 | 0X7FFF;
    // 0x43004BAC: bc1f        L_43004BC4
    if (!c1cs) {
        // 0x43004BB0: nop
    
            goto L_43004BC4;
    }
    // 0x43004BB0: nop

    // 0x43004BB4: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x43004BB8: swc1        $f0, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->f0.u32l;
    // 0x43004BBC: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x43004BC0: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
L_43004BC4:
    // 0x43004BC4: jr          $ra
    // 0x43004BC8: nop

    return;
    // 0x43004BC8: nop

;}
RECOMP_FUNC void ovl_enemy_world4_4BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004BCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004BD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004BD4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x43004BD8: jal         0x430096A4
    // 0x43004BDC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world4_96A4(rdram, ctx);
        goto after_0;
    // 0x43004BDC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_0:
    // 0x43004BE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004BE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004BE8: jr          $ra
    // 0x43004BEC: nop

    return;
    // 0x43004BEC: nop

;}
RECOMP_FUNC void ovl_enemy_world4_4BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004BF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43004BF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004BF8: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x43004BFC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43004C00: jal         0x43003844
    // 0x43004C04: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    ovl_enemy_world4_3844(rdram, ctx);
        goto after_0;
    // 0x43004C04: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x43004C08: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43004C0C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43004C10: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x43004C14: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x43004C18: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x43004C1C: bne         $t8, $zero, L_43004C30
    if (ctx->r24 != 0) {
        // 0x43004C20: lui         $t1, 0x4301
        ctx->r9 = S32(0X4301 << 16);
            goto L_43004C30;
    }
    // 0x43004C20: lui         $t1, 0x4301
    ctx->r9 = S32(0X4301 << 16);
    // 0x43004C24: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43004C28: nop

    // 0x43004C2C: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
L_43004C30:
    // 0x43004C30: lwc1        $f8, 0x20($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X20);
    // 0x43004C34: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x43004C38: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x43004C3C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x43004C40: bc1f        L_43004C68
    if (!c1cs) {
        // 0x43004C44: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004C68;
    }
    // 0x43004C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004C48: lw          $t1, -0x6874($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X6874);
    // 0x43004C4C: nop

    // 0x43004C50: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x43004C54: bne         $at, $zero, L_43004C68
    if (ctx->r1 != 0) {
        // 0x43004C58: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004C68;
    }
    // 0x43004C58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004C5C: jal         0x43004BCC
    // 0x43004C60: nop

    ovl_enemy_world4_4BCC(rdram, ctx);
        goto after_1;
    // 0x43004C60: nop

    after_1:
    // 0x43004C64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004C68:
    // 0x43004C68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43004C6C: jr          $ra
    // 0x43004C70: nop

    return;
    // 0x43004C70: nop

;}
RECOMP_FUNC void ovl_enemy_world4_4C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004C74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004C78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004C7C: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x43004C80: nop

    // 0x43004C84: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x43004C88: bne         $t7, $zero, L_43004CA4
    if (ctx->r15 != 0) {
        // 0x43004C8C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_43004CA4;
    }
    // 0x43004C8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43004C90: jal         0x43001F1C
    // 0x43004C94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world4_1F1C(rdram, ctx);
        goto after_0;
    // 0x43004C94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43004C98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43004C9C: nop

    // 0x43004CA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_43004CA4:
    // 0x43004CA4: jal         0x43001EC8
    // 0x43004CA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world4_1EC8(rdram, ctx);
        goto after_1;
    // 0x43004CA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x43004CAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43004CB0: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x43004CB4: lw          $t8, 0x54($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X54);
    // 0x43004CB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43004CBC: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x43004CC0: addiu       $at, $zero, -0x801
    ctx->r1 = ADD32(0, -0X801);
    // 0x43004CC4: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x43004CC8: sw          $t9, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r25;
    // 0x43004CCC: sw          $t1, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r9;
    // 0x43004CD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004CD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004CD8: jr          $ra
    // 0x43004CDC: nop

    return;
    // 0x43004CDC: nop

;}
RECOMP_FUNC void ovl_enemy_world4_4CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004CE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43004CE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43004CE8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43004CEC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x43004CF0: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x43004CF4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43004CF8: ori         $t7, $t6, 0x2800
    ctx->r15 = ctx->r14 | 0X2800;
    // 0x43004CFC: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
    // 0x43004D00: jal         0x430022E4
    // 0x43004D04: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
    ovl_enemy_world4_22E4(rdram, ctx);
        goto after_0;
    // 0x43004D04: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
    after_0:
    // 0x43004D08: lw          $t8, 0x54($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X54);
    // 0x43004D0C: nop

    // 0x43004D10: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x43004D14: bne         $t9, $zero, L_43004D24
    if (ctx->r25 != 0) {
        // 0x43004D18: nop
    
            goto L_43004D24;
    }
    // 0x43004D18: nop

    // 0x43004D1C: jal         0x430044D8
    // 0x43004D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_44D8(rdram, ctx);
        goto after_1;
    // 0x43004D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_43004D24:
    // 0x43004D24: jal         0x43002040
    // 0x43004D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_2040(rdram, ctx);
        goto after_2;
    // 0x43004D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x43004D2C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x43004D30: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43004D34: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x43004D38: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43004D3C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43004D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43004D44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43004D48: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x43004D4C: jal         0x43001F94
    // 0x43004D50: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_enemy_world4_1F94(rdram, ctx);
        goto after_3;
    // 0x43004D50: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x43004D54: jal         0x43004554
    // 0x43004D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world4_4554(rdram, ctx);
        goto after_4;
    // 0x43004D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x43004D5C: lw          $t1, 0x54($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X54);
    // 0x43004D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43004D64: ori         $t2, $t1, 0x40
    ctx->r10 = ctx->r9 | 0X40;
    // 0x43004D68: jal         0x43001DB0
    // 0x43004D6C: sw          $t2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r10;
    ovl_enemy_world4_1DB0(rdram, ctx);
        goto after_5;
    // 0x43004D6C: sw          $t2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r10;
    after_5:
    // 0x43004D70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43004D74: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43004D78: jr          $ra
    // 0x43004D7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43004D7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_enemy_world4_4D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004D80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004D84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004D88: jal         0x43001F1C
    // 0x43004D8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world4_1F1C(rdram, ctx);
        goto after_0;
    // 0x43004D8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43004D90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43004D94: lui         $at, 0xF9FB
    ctx->r1 = S32(0XF9FB << 16);
    // 0x43004D98: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x43004D9C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x43004DA0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x43004DA4: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
    // 0x43004DA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004DAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004DB0: jr          $ra
    // 0x43004DB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x43004DB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
