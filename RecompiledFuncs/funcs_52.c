#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_actor_main_11BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40011BE4: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x40011BE8: slt         $at, $a2, $a1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x40011BEC: bne         $at, $zero, L_40011C54
    if (ctx->r1 != 0) {
        // 0x40011BF0: nop
    
            goto L_40011C54;
    }
    // 0x40011BF0: nop

    // 0x40011BF4: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x40011BF8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x40011BFC: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x40011C00: nop

    // 0x40011C04: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x40011C08: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x40011C0C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x40011C10: nop

    // 0x40011C14: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x40011C18: nop

    // 0x40011C1C: bc1f        L_40011C30
    if (!c1cs) {
        // 0x40011C20: nop
    
            goto L_40011C30;
    }
    // 0x40011C20: nop

    // 0x40011C24: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x40011C28: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x40011C2C: nop

L_40011C30:
    // 0x40011C30: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x40011C34: nop

    // 0x40011C38: bc1f        L_40011C48
    if (!c1cs) {
        // 0x40011C3C: nop
    
            goto L_40011C48;
    }
    // 0x40011C3C: nop

    // 0x40011C40: jr          $ra
    // 0x40011C44: sw          $a2, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r6;
    return;
    // 0x40011C44: sw          $a2, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r6;
L_40011C48:
    // 0x40011C48: bne         $a1, $a2, L_40011C54
    if (ctx->r5 != ctx->r6) {
        // 0x40011C4C: addiu       $t6, $a2, -0x1
        ctx->r14 = ADD32(ctx->r6, -0X1);
            goto L_40011C54;
    }
    // 0x40011C4C: addiu       $t6, $a2, -0x1
    ctx->r14 = ADD32(ctx->r6, -0X1);
    // 0x40011C50: sw          $t6, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r14;
L_40011C54:
    // 0x40011C54: jr          $ra
    // 0x40011C58: nop

    return;
    // 0x40011C58: nop

;}
RECOMP_FUNC void ovl_actor_main_11C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40011C5C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x40011C60: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x40011C64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40011C68: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x40011C6C: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x40011C70: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x40011C74: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x40011C78: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x40011C7C: jal         0x400006C4
    // 0x40011C80: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40011C80: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x40011C84: beq         $v0, $zero, L_40011CB0
    if (ctx->r2 == 0) {
        // 0x40011C88: lw          $t8, 0x58($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X58);
            goto L_40011CB0;
    }
    // 0x40011C88: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x40011C8C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x40011C90: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x40011C94: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40011C98: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x40011C9C: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x40011CA0: lwc1        $f6, -0x1290($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1290);
    // 0x40011CA4: b           L_40011D30
    // 0x40011CA8: swc1        $f6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f6.u32l;
        goto L_40011D30;
    // 0x40011CA8: swc1        $f6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f6.u32l;
    // 0x40011CAC: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
L_40011CB0:
    // 0x40011CB0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x40011CB4: lw          $a0, 0x10($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X10);
    // 0x40011CB8: jal         0x400006C4
    // 0x40011CBC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40011CBC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x40011CC0: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x40011CC4: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x40011CC8: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x40011CCC: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x40011CD0: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x40011CD4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x40011CD8: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x40011CDC: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x40011CE0: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x40011CE4: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x40011CE8: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x40011CEC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x40011CF0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x40011CF4: jal         0x40001258
    // 0x40011CF8: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    ovl_actor_main_1258(rdram, ctx);
        goto after_2;
    // 0x40011CF8: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x40011CFC: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x40011D00: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x40011D04: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x40011D08: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x40011D0C: swc1        $f10, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f10.u32l;
    // 0x40011D10: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x40011D14: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x40011D18: jal         0x40001258
    // 0x40011D1C: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    ovl_actor_main_1258(rdram, ctx);
        goto after_3;
    // 0x40011D1C: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x40011D20: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x40011D24: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x40011D28: nop

    // 0x40011D2C: swc1        $f18, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f18.u32l;
L_40011D30:
    // 0x40011D30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40011D34: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x40011D38: jr          $ra
    // 0x40011D3C: nop

    return;
    // 0x40011D3C: nop

;}
RECOMP_FUNC void ovl_actor_main_11D40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40011D40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40011D44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40011D48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x40011D4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x40011D50: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x40011D54: jal         0x40000DE4
    // 0x40011D58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_actor_main_DE4(rdram, ctx);
        goto after_0;
    // 0x40011D58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x40011D5C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40011D60: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x40011D64: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x40011D68: jal         0x40011C5C
    // 0x40011D6C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    ovl_actor_main_11C5C(rdram, ctx);
        goto after_1;
    // 0x40011D6C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x40011D70: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x40011D74: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x40011D78: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x40011D7C: nop

    // 0x40011D80: swc1        $f4, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f4.u32l;
    // 0x40011D84: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x40011D88: nop

    // 0x40011D8C: swc1        $f6, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f6.u32l;
    // 0x40011D90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40011D94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40011D98: jr          $ra
    // 0x40011D9C: nop

    return;
    // 0x40011D9C: nop

;}
RECOMP_FUNC void ovl_actor_main_11DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40011DA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40011DA4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x40011DA8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40011DAC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x40011DB0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x40011DB4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x40011DB8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x40011DBC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40011DC0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40011DC4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40011DC8: jal         0x40008D64
    // 0x40011DCC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40011DCC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40011DD0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x40011DD4: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x40011DD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40011DDC: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    // 0x40011DE0: jal         0x40011D40
    // 0x40011DE4: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    ovl_actor_main_11D40(rdram, ctx);
        goto after_1;
    // 0x40011DE4: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x40011DE8: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x40011DEC: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x40011DF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x40011DF4: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x40011DF8: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x40011DFC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x40011E00: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x40011E04: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x40011E08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40011E0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x40011E10: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x40011E14: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x40011E18: jal         0x40006EEC
    // 0x40011E1C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    ovl_actor_main_6EEC(rdram, ctx);
        goto after_2;
    // 0x40011E1C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x40011E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40011E24: addiu       $a1, $zero, 0x233
    ctx->r5 = ADD32(0, 0X233);
    // 0x40011E28: jal         0x4000115C
    // 0x40011E2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_3;
    // 0x40011E2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x40011E30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40011E34: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x40011E38: jr          $ra
    // 0x40011E3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x40011E3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_11E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40011E40: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40011E44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40011E48: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x40011E4C: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x40011E50: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x40011E54: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x40011E58: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x40011E5C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x40011E60: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x40011E64: jal         0x40000DE4
    // 0x40011E68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_actor_main_DE4(rdram, ctx);
        goto after_0;
    // 0x40011E68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x40011E6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x40011E70: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x40011E74: jal         0x400006C4
    // 0x40011E78: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40011E78: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x40011E7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40011E80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x40011E84: jr          $ra
    // 0x40011E88: nop

    return;
    // 0x40011E88: nop

;}
RECOMP_FUNC void ovl_actor_main_11E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40011E8C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x40011E90: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x40011E94: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x40011E98: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x40011E9C: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x40011EA0: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x40011EA4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x40011EA8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x40011EAC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x40011EB0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x40011EB4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x40011EB8: sw          $t6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r14;
    // 0x40011EBC: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x40011EC0: lw          $t7, 0x18C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X18C);
    // 0x40011EC4: addiu       $v0, $a0, 0x18C
    ctx->r2 = ADD32(ctx->r4, 0X18C);
    // 0x40011EC8: blez        $t7, L_40011F68
    if (SIGNED(ctx->r15) <= 0) {
        // 0x40011ECC: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_40011F68;
    }
    // 0x40011ECC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x40011ED0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x40011ED4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x40011ED8: addiu       $s7, $sp, 0x64
    ctx->r23 = ADD32(ctx->r29, 0X64);
    // 0x40011EDC: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x40011EE0: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x40011EE4: addiu       $s4, $sp, 0x48
    ctx->r20 = ADD32(ctx->r29, 0X48);
    // 0x40011EE8: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
L_40011EEC:
    // 0x40011EEC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x40011EF0: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x40011EF4: beq         $s3, $a0, L_40011F4C
    if (ctx->r19 == ctx->r4) {
        // 0x40011EF8: nop
    
            goto L_40011F4C;
    }
    // 0x40011EF8: nop

    // 0x40011EFC: jal         0x400006C4
    // 0x40011F00: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40011F00: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_0:
    // 0x40011F04: beq         $v0, $zero, L_40011F1C
    if (ctx->r2 == 0) {
        // 0x40011F08: lw          $t8, 0x48($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X48);
            goto L_40011F1C;
    }
    // 0x40011F08: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x40011F0C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x40011F10: b           L_40011F58
    // 0x40011F14: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
        goto L_40011F58;
    // 0x40011F14: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x40011F18: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
L_40011F1C:
    // 0x40011F1C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x40011F20: bne         $t8, $s5, L_40011F4C
    if (ctx->r24 != ctx->r21) {
        // 0x40011F24: nop
    
            goto L_40011F4C;
    }
    // 0x40011F24: nop

    // 0x40011F28: bne         $t9, $s6, L_40011F4C
    if (ctx->r25 != ctx->r22) {
        // 0x40011F2C: addiu       $t1, $zero, 0x4
        ctx->r9 = ADD32(0, 0X4);
            goto L_40011F4C;
    }
    // 0x40011F2C: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x40011F30: lw          $t0, 0x24($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X24);
    // 0x40011F34: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    // 0x40011F38: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x40011F3C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x40011F40: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x40011F44: jal         0x400006C4
    // 0x40011F48: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40011F48: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_1:
L_40011F4C:
    // 0x40011F4C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x40011F50: nop

    // 0x40011F54: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
L_40011F58:
    // 0x40011F58: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x40011F5C: slt         $at, $s1, $v1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x40011F60: bne         $at, $zero, L_40011EEC
    if (ctx->r1 != 0) {
        // 0x40011F64: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_40011EEC;
    }
    // 0x40011F64: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_40011F68:
    // 0x40011F68: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x40011F6C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x40011F70: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x40011F74: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x40011F78: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x40011F7C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x40011F80: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x40011F84: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x40011F88: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x40011F8C: jr          $ra
    // 0x40011F90: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x40011F90: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void ovl_actor_main_11F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40011F94: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x40011F98: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x40011F9C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x40011FA0: addiu       $fp, $a0, 0x18C
    ctx->r30 = ADD32(ctx->r4, 0X18C);
    // 0x40011FA4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x40011FA8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x40011FAC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x40011FB0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x40011FB4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x40011FB8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x40011FBC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x40011FC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x40011FC4: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    // 0x40011FC8: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
    // 0x40011FCC: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x40011FD0: bne         $a1, $zero, L_40011FE0
    if (ctx->r5 != 0) {
        // 0x40011FD4: sw          $zero, 0x64($sp)
        MEM_W(0X64, ctx->r29) = 0;
            goto L_40011FE0;
    }
    // 0x40011FD4: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x40011FD8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40011FDC: sw          $t6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r14;
L_40011FE0:
    // 0x40011FE0: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x40011FE4: beq         $a1, $at, L_40012010
    if (ctx->r5 == ctx->r1) {
        // 0x40011FE8: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_40012010;
    }
    // 0x40011FE8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x40011FEC: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x40011FF0: beq         $a1, $at, L_40012010
    if (ctx->r5 == ctx->r1) {
        // 0x40011FF4: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_40012010;
    }
    // 0x40011FF4: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x40011FF8: beq         $a1, $at, L_40012010
    if (ctx->r5 == ctx->r1) {
        // 0x40011FFC: addiu       $at, $zero, 0x27
        ctx->r1 = ADD32(0, 0X27);
            goto L_40012010;
    }
    // 0x40011FFC: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x40012000: beq         $a1, $at, L_40012010
    if (ctx->r5 == ctx->r1) {
        // 0x40012004: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_40012010;
    }
    // 0x40012004: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x40012008: bne         $a1, $at, L_4001201C
    if (ctx->r5 != ctx->r1) {
        // 0x4001200C: nop
    
            goto L_4001201C;
    }
    // 0x4001200C: nop

L_40012010:
    // 0x40012010: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
    // 0x40012014: b           L_40012024
    // 0x40012018: sw          $a1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r5;
        goto L_40012024;
    // 0x40012018: sw          $a1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r5;
L_4001201C:
    // 0x4001201C: sw          $a1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r5;
    // 0x40012020: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
L_40012024:
    // 0x40012024: lw          $t8, 0x0($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X0);
    // 0x40012028: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x4001202C: blez        $t8, L_4001214C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x40012030: or          $s0, $fp, $zero
        ctx->r16 = ctx->r30 | 0;
            goto L_4001214C;
    }
    // 0x40012030: or          $s0, $fp, $zero
    ctx->r16 = ctx->r30 | 0;
    // 0x40012034: addiu       $s7, $zero, 0xC
    ctx->r23 = ADD32(0, 0XC);
    // 0x40012038: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x4001203C: addiu       $s5, $sp, 0x4C
    ctx->r21 = ADD32(ctx->r29, 0X4C);
    // 0x40012040: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x40012044: addiu       $s2, $sp, 0x70
    ctx->r18 = ADD32(ctx->r29, 0X70);
L_40012048:
    // 0x40012048: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x4001204C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x40012050: beq         $s4, $a0, L_40012134
    if (ctx->r20 == ctx->r4) {
        // 0x40012054: nop
    
            goto L_40012134;
    }
    // 0x40012054: nop

    // 0x40012058: jal         0x400006C4
    // 0x4001205C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4001205C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_0:
    // 0x40012060: beq         $v0, $zero, L_40012078
    if (ctx->r2 == 0) {
        // 0x40012064: lw          $t9, 0x4C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X4C);
            goto L_40012078;
    }
    // 0x40012064: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x40012068: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x4001206C: b           L_40012140
    // 0x40012070: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_40012140;
    // 0x40012070: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x40012074: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
L_40012078:
    // 0x40012078: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x4001207C: bne         $t9, $zero, L_40012134
    if (ctx->r25 != 0) {
        // 0x40012080: nop
    
            goto L_40012134;
    }
    // 0x40012080: nop

    // 0x40012084: bne         $t0, $s6, L_40012134
    if (ctx->r8 != ctx->r22) {
        // 0x40012088: nop
    
            goto L_40012134;
    }
    // 0x40012088: nop

    // 0x4001208C: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x40012090: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x40012094: beq         $t1, $zero, L_400120A4
    if (ctx->r9 == 0) {
        // 0x40012098: addiu       $a1, $zero, 0x24
        ctx->r5 = ADD32(0, 0X24);
            goto L_400120A4;
    }
    // 0x40012098: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x4001209C: b           L_40012154
    // 0x400120A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_40012154;
    // 0x400120A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_400120A4:
    // 0x400120A4: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x400120A8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x400120AC: beq         $t3, $zero, L_4001211C
    if (ctx->r11 == 0) {
        // 0x400120B0: sw          $t2, 0x88($sp)
        MEM_W(0X88, ctx->r29) = ctx->r10;
            goto L_4001211C;
    }
    // 0x400120B0: sw          $t2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r10;
    // 0x400120B4: multu       $s1, $s7
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x400120B8: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x400120BC: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x400120C0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x400120C4: mflo        $t4
    ctx->r12 = lo;
    // 0x400120C8: addu        $v0, $fp, $t4
    ctx->r2 = ADD32(ctx->r30, ctx->r12);
    // 0x400120CC: lwc1        $f4, 0x44($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X44);
    // 0x400120D0: nop

    // 0x400120D4: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x400120D8: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x400120DC: lwc1        $f8, 0x48($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X48);
    // 0x400120E0: nop

    // 0x400120E4: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x400120E8: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x400120EC: lwc1        $f16, 0x4C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x400120F0: nop

    // 0x400120F4: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x400120F8: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    // 0x400120FC: lw          $t5, 0x24($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X24);
    // 0x40012100: sw          $t6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r14;
    // 0x40012104: sw          $t5, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r13;
    // 0x40012108: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x4001210C: jal         0x400006C4
    // 0x40012110: nop

    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40012110: nop

    after_1:
    // 0x40012114: b           L_40012138
    // 0x40012118: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
        goto L_40012138;
    // 0x40012118: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
L_4001211C:
    // 0x4001211C: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x40012120: sw          $t8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r24;
    // 0x40012124: sw          $t7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r15;
    // 0x40012128: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x4001212C: jal         0x400006C4
    // 0x40012130: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_2;
    // 0x40012130: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_2:
L_40012134:
    // 0x40012134: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
L_40012138:
    // 0x40012138: nop

    // 0x4001213C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_40012140:
    // 0x40012140: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x40012144: bne         $at, $zero, L_40012048
    if (ctx->r1 != 0) {
        // 0x40012148: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_40012048;
    }
    // 0x40012148: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_4001214C:
    // 0x4001214C: lw          $v0, 0x88($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X88);
    // 0x40012150: nop

L_40012154:
    // 0x40012154: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x40012158: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4001215C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x40012160: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x40012164: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x40012168: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x4001216C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x40012170: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x40012174: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x40012178: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x4001217C: jr          $ra
    // 0x40012180: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x40012180: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void ovl_actor_main_12184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40012184: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40012188: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4001218C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40012190: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40012194: bne         $a1, $at, L_400121AC
    if (ctx->r5 != ctx->r1) {
        // 0x40012198: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_400121AC;
    }
    // 0x40012198: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001219C: jal         0x400093E4
    // 0x400121A0: nop

    ovl_actor_main_93E4(rdram, ctx);
        goto after_0;
    // 0x400121A0: nop

    after_0:
    // 0x400121A4: b           L_400121CC
    // 0x400121A8: nop

        goto L_400121CC;
    // 0x400121A8: nop

L_400121AC:
    // 0x400121AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x400121B0: bne         $a1, $at, L_400121CC
    if (ctx->r5 != ctx->r1) {
        // 0x400121B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400121CC;
    }
    // 0x400121B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400121B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x400121BC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400121C0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400121C4: jal         0x40008D20
    // 0x400121C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_1;
    // 0x400121C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_400121CC:
    // 0x400121CC: jal         0x40009B00
    // 0x400121D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9B00(rdram, ctx);
        goto after_2;
    // 0x400121D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x400121D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400121D8: bne         $v0, $at, L_400121E4
    if (ctx->r2 != ctx->r1) {
        // 0x400121DC: nop
    
            goto L_400121E4;
    }
    // 0x400121DC: nop

    // 0x400121E0: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
L_400121E4:
    // 0x400121E4: jal         0x40009BB0
    // 0x400121E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9BB0(rdram, ctx);
        goto after_3;
    // 0x400121E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x400121EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x400121F0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x400121F4: jr          $ra
    // 0x400121F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x400121F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_121FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400121FC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x40012200: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x40012204: bne         $v0, $at, L_4001223C
    if (ctx->r2 != ctx->r1) {
        // 0x40012208: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_4001223C;
    }
    // 0x40012208: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x4001220C: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x40012210: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x40012214: beq         $v0, $at, L_40012234
    if (ctx->r2 == ctx->r1) {
        // 0x40012218: addiu       $a1, $zero, 0x21
        ctx->r5 = ADD32(0, 0X21);
            goto L_40012234;
    }
    // 0x40012218: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x4001221C: beq         $a1, $v0, L_40012234
    if (ctx->r5 == ctx->r2) {
        // 0x40012220: addiu       $at, $zero, 0x22
        ctx->r1 = ADD32(0, 0X22);
            goto L_40012234;
    }
    // 0x40012220: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x40012224: beq         $v0, $at, L_40012234
    if (ctx->r2 == ctx->r1) {
        // 0x40012228: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_40012234;
    }
    // 0x40012228: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x4001222C: bne         $v0, $at, L_400123E0
    if (ctx->r2 != ctx->r1) {
        // 0x40012230: nop
    
            goto L_400123E0;
    }
    // 0x40012230: nop

L_40012234:
    // 0x40012234: jr          $ra
    // 0x40012238: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x40012238: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4001223C:
    // 0x4001223C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x40012240: bne         $v0, $at, L_4001227C
    if (ctx->r2 != ctx->r1) {
        // 0x40012244: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_4001227C;
    }
    // 0x40012244: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x40012248: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x4001224C: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x40012250: beq         $v0, $at, L_40012270
    if (ctx->r2 == ctx->r1) {
        // 0x40012254: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_40012270;
    }
    // 0x40012254: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x40012258: beq         $v0, $at, L_40012270
    if (ctx->r2 == ctx->r1) {
        // 0x4001225C: addiu       $at, $zero, 0x27
        ctx->r1 = ADD32(0, 0X27);
            goto L_40012270;
    }
    // 0x4001225C: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x40012260: beq         $v0, $at, L_40012270
    if (ctx->r2 == ctx->r1) {
        // 0x40012264: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_40012270;
    }
    // 0x40012264: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x40012268: bne         $v0, $at, L_400123E0
    if (ctx->r2 != ctx->r1) {
        // 0x4001226C: nop
    
            goto L_400123E0;
    }
    // 0x4001226C: nop

L_40012270:
    // 0x40012270: jr          $ra
    // 0x40012274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x40012274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x40012278: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_4001227C:
    // 0x4001227C: bne         $v0, $at, L_400122B8
    if (ctx->r2 != ctx->r1) {
        // 0x40012280: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_400122B8;
    }
    // 0x40012280: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x40012284: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x40012288: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x4001228C: beq         $v0, $at, L_400122AC
    if (ctx->r2 == ctx->r1) {
        // 0x40012290: addiu       $a1, $zero, 0x21
        ctx->r5 = ADD32(0, 0X21);
            goto L_400122AC;
    }
    // 0x40012290: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x40012294: beq         $a1, $v0, L_400122AC
    if (ctx->r5 == ctx->r2) {
        // 0x40012298: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_400122AC;
    }
    // 0x40012298: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x4001229C: beq         $v0, $at, L_400122AC
    if (ctx->r2 == ctx->r1) {
        // 0x400122A0: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_400122AC;
    }
    // 0x400122A0: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x400122A4: bne         $v0, $at, L_400123E0
    if (ctx->r2 != ctx->r1) {
        // 0x400122A8: nop
    
            goto L_400123E0;
    }
    // 0x400122A8: nop

L_400122AC:
    // 0x400122AC: jr          $ra
    // 0x400122B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x400122B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x400122B4: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
L_400122B8:
    // 0x400122B8: beq         $v0, $at, L_400122C8
    if (ctx->r2 == ctx->r1) {
        // 0x400122BC: addiu       $at, $zero, 0x2A
        ctx->r1 = ADD32(0, 0X2A);
            goto L_400122C8;
    }
    // 0x400122BC: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x400122C0: bne         $v0, $at, L_400122FC
    if (ctx->r2 != ctx->r1) {
        // 0x400122C4: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_400122FC;
    }
    // 0x400122C4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_400122C8:
    // 0x400122C8: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x400122CC: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x400122D0: beq         $v0, $at, L_400122F0
    if (ctx->r2 == ctx->r1) {
        // 0x400122D4: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_400122F0;
    }
    // 0x400122D4: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x400122D8: beq         $v0, $at, L_400122F0
    if (ctx->r2 == ctx->r1) {
        // 0x400122DC: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_400122F0;
    }
    // 0x400122DC: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x400122E0: beq         $v0, $at, L_400122F0
    if (ctx->r2 == ctx->r1) {
        // 0x400122E4: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_400122F0;
    }
    // 0x400122E4: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x400122E8: bne         $v0, $at, L_400123E0
    if (ctx->r2 != ctx->r1) {
        // 0x400122EC: nop
    
            goto L_400123E0;
    }
    // 0x400122EC: nop

L_400122F0:
    // 0x400122F0: jr          $ra
    // 0x400122F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x400122F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x400122F8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_400122FC:
    // 0x400122FC: bne         $v0, $at, L_40012334
    if (ctx->r2 != ctx->r1) {
        // 0x40012300: addiu       $a1, $zero, 0x21
        ctx->r5 = ADD32(0, 0X21);
            goto L_40012334;
    }
    // 0x40012300: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x40012304: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x40012308: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x4001230C: beq         $v0, $at, L_4001232C
    if (ctx->r2 == ctx->r1) {
        // 0x40012310: addiu       $a1, $zero, 0x21
        ctx->r5 = ADD32(0, 0X21);
            goto L_4001232C;
    }
    // 0x40012310: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x40012314: beq         $a1, $v0, L_4001232C
    if (ctx->r5 == ctx->r2) {
        // 0x40012318: addiu       $at, $zero, 0x22
        ctx->r1 = ADD32(0, 0X22);
            goto L_4001232C;
    }
    // 0x40012318: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x4001231C: beq         $v0, $at, L_4001232C
    if (ctx->r2 == ctx->r1) {
        // 0x40012320: addiu       $a1, $zero, 0x25
        ctx->r5 = ADD32(0, 0X25);
            goto L_4001232C;
    }
    // 0x40012320: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x40012324: bne         $a1, $v0, L_400123E0
    if (ctx->r5 != ctx->r2) {
        // 0x40012328: nop
    
            goto L_400123E0;
    }
    // 0x40012328: nop

L_4001232C:
    // 0x4001232C: jr          $ra
    // 0x40012330: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x40012330: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_40012334:
    // 0x40012334: bne         $a1, $v0, L_4001236C
    if (ctx->r5 != ctx->r2) {
        // 0x40012338: nop
    
            goto L_4001236C;
    }
    // 0x40012338: nop

    // 0x4001233C: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x40012340: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x40012344: beq         $v0, $at, L_40012364
    if (ctx->r2 == ctx->r1) {
        // 0x40012348: nop
    
            goto L_40012364;
    }
    // 0x40012348: nop

    // 0x4001234C: beq         $a1, $v0, L_40012364
    if (ctx->r5 == ctx->r2) {
        // 0x40012350: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_40012364;
    }
    // 0x40012350: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x40012354: beq         $v0, $at, L_40012364
    if (ctx->r2 == ctx->r1) {
        // 0x40012358: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_40012364;
    }
    // 0x40012358: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x4001235C: bne         $v0, $at, L_400123E0
    if (ctx->r2 != ctx->r1) {
        // 0x40012360: nop
    
            goto L_400123E0;
    }
    // 0x40012360: nop

L_40012364:
    // 0x40012364: jr          $ra
    // 0x40012368: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x40012368: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4001236C:
    // 0x4001236C: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x40012370: bne         $a1, $v0, L_400123A8
    if (ctx->r5 != ctx->r2) {
        // 0x40012374: nop
    
            goto L_400123A8;
    }
    // 0x40012374: nop

    // 0x40012378: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x4001237C: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x40012380: beq         $v0, $at, L_400123A0
    if (ctx->r2 == ctx->r1) {
        // 0x40012384: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_400123A0;
    }
    // 0x40012384: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x40012388: beq         $v0, $at, L_400123A0
    if (ctx->r2 == ctx->r1) {
        // 0x4001238C: nop
    
            goto L_400123A0;
    }
    // 0x4001238C: nop

    // 0x40012390: beq         $a1, $v0, L_400123A0
    if (ctx->r5 == ctx->r2) {
        // 0x40012394: addiu       $at, $zero, 0x2B
        ctx->r1 = ADD32(0, 0X2B);
            goto L_400123A0;
    }
    // 0x40012394: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x40012398: bne         $v0, $at, L_400123E0
    if (ctx->r2 != ctx->r1) {
        // 0x4001239C: nop
    
            goto L_400123E0;
    }
    // 0x4001239C: nop

L_400123A0:
    // 0x400123A0: jr          $ra
    // 0x400123A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x400123A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_400123A8:
    // 0x400123A8: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    // 0x400123AC: bne         $a1, $v0, L_400123E0
    if (ctx->r5 != ctx->r2) {
        // 0x400123B0: nop
    
            goto L_400123E0;
    }
    // 0x400123B0: nop

    // 0x400123B4: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x400123B8: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x400123BC: beq         $a1, $v0, L_400123DC
    if (ctx->r5 == ctx->r2) {
        // 0x400123C0: nop
    
            goto L_400123DC;
    }
    // 0x400123C0: nop

    // 0x400123C4: beq         $v0, $at, L_400123DC
    if (ctx->r2 == ctx->r1) {
        // 0x400123C8: addiu       $at, $zero, 0x31
        ctx->r1 = ADD32(0, 0X31);
            goto L_400123DC;
    }
    // 0x400123C8: addiu       $at, $zero, 0x31
    ctx->r1 = ADD32(0, 0X31);
    // 0x400123CC: beq         $v0, $at, L_400123DC
    if (ctx->r2 == ctx->r1) {
        // 0x400123D0: addiu       $at, $zero, 0x27
        ctx->r1 = ADD32(0, 0X27);
            goto L_400123DC;
    }
    // 0x400123D0: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x400123D4: bne         $v0, $at, L_400123E0
    if (ctx->r2 != ctx->r1) {
        // 0x400123D8: nop
    
            goto L_400123E0;
    }
    // 0x400123D8: nop

L_400123DC:
    // 0x400123DC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_400123E0:
    // 0x400123E0: jr          $ra
    // 0x400123E4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x400123E4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_123E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400123E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x400123EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400123F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x400123F4: jal         0x400121FC
    // 0x400123F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_121FC(rdram, ctx);
        goto after_0;
    // 0x400123F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x400123FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40012400: beq         $v0, $zero, L_40012444
    if (ctx->r2 == 0) {
        // 0x40012404: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40012444;
    }
    // 0x40012404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40012408: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x4001240C: lui         $at, 0xFBFF
    ctx->r1 = S32(0XFBFF << 16);
    // 0x40012410: beq         $t6, $zero, L_4001242C
    if (ctx->r14 == 0) {
        // 0x40012414: nop
    
            goto L_4001242C;
    }
    // 0x40012414: nop

    // 0x40012418: lw          $t7, 0x90($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X90);
    // 0x4001241C: lui         $at, 0x400
    ctx->r1 = S32(0X400 << 16);
    // 0x40012420: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x40012424: b           L_40012440
    // 0x40012428: sw          $t8, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r24;
        goto L_40012440;
    // 0x40012428: sw          $t8, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r24;
L_4001242C:
    // 0x4001242C: lw          $t9, 0x90($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X90);
    // 0x40012430: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x40012434: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x40012438: jal         0x40008F98
    // 0x4001243C: sw          $t0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r8;
    ovl_actor_main_8F98(rdram, ctx);
        goto after_1;
    // 0x4001243C: sw          $t0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r8;
    after_1:
L_40012440:
    // 0x40012440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40012444:
    // 0x40012444: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40012448: jr          $ra
    // 0x4001244C: nop

    return;
    // 0x4001244C: nop

;}
RECOMP_FUNC void ovl_actor_main_12450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40012450: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40012454: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40012458: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4001245C: jal         0x400123E8
    // 0x40012460: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_123E8(rdram, ctx);
        goto after_0;
    // 0x40012460: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x40012464: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40012468: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x4001246C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x40012470: nop

    // 0x40012474: bne         $v0, $at, L_400124BC
    if (ctx->r2 != ctx->r1) {
        // 0x40012478: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_400124BC;
    }
    // 0x40012478: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x4001247C: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x40012480: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x40012484: bne         $v0, $at, L_400124A0
    if (ctx->r2 != ctx->r1) {
        // 0x40012488: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_400124A0;
    }
    // 0x40012488: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x4001248C: jal         0x40014540
    // 0x40012490: nop

    ovl_actor_main_14540(rdram, ctx);
        goto after_1;
    // 0x40012490: nop

    after_1:
    // 0x40012494: b           L_40012544
    // 0x40012498: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40012544;
    // 0x40012498: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001249C: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
L_400124A0:
    // 0x400124A0: bne         $v0, $at, L_40012544
    if (ctx->r2 != ctx->r1) {
        // 0x400124A4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40012544;
    }
    // 0x400124A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400124A8: jal         0x4001458C
    // 0x400124AC: nop

    ovl_actor_main_1458C(rdram, ctx);
        goto after_2;
    // 0x400124AC: nop

    after_2:
    // 0x400124B0: b           L_40012544
    // 0x400124B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40012544;
    // 0x400124B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400124B8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_400124BC:
    // 0x400124BC: bne         $v0, $at, L_40012544
    if (ctx->r2 != ctx->r1) {
        // 0x400124C0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40012544;
    }
    // 0x400124C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400124C4: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x400124C8: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x400124CC: bne         $v0, $at, L_400124E8
    if (ctx->r2 != ctx->r1) {
        // 0x400124D0: addiu       $at, $zero, 0x25
        ctx->r1 = ADD32(0, 0X25);
            goto L_400124E8;
    }
    // 0x400124D0: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x400124D4: jal         0x40012E20
    // 0x400124D8: nop

    ovl_actor_main_12E20(rdram, ctx);
        goto after_3;
    // 0x400124D8: nop

    after_3:
    // 0x400124DC: b           L_40012544
    // 0x400124E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40012544;
    // 0x400124E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400124E4: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
L_400124E8:
    // 0x400124E8: bne         $v0, $at, L_40012504
    if (ctx->r2 != ctx->r1) {
        // 0x400124EC: addiu       $at, $zero, 0x22
        ctx->r1 = ADD32(0, 0X22);
            goto L_40012504;
    }
    // 0x400124EC: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x400124F0: jal         0x40012DCC
    // 0x400124F4: addiu       $a1, $a0, 0x330
    ctx->r5 = ADD32(ctx->r4, 0X330);
    ovl_actor_main_12DCC(rdram, ctx);
        goto after_4;
    // 0x400124F4: addiu       $a1, $a0, 0x330
    ctx->r5 = ADD32(ctx->r4, 0X330);
    after_4:
    // 0x400124F8: b           L_40012544
    // 0x400124FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40012544;
    // 0x400124FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40012500: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
L_40012504:
    // 0x40012504: bne         $v0, $at, L_40012530
    if (ctx->r2 != ctx->r1) {
        // 0x40012508: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_40012530;
    }
    // 0x40012508: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x4001250C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40012510: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x40012514: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40012518: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4001251C: jal         0x40006EEC
    // 0x40012520: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_6EEC(rdram, ctx);
        goto after_5;
    // 0x40012520: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x40012524: b           L_40012544
    // 0x40012528: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40012544;
    // 0x40012528: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001252C: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
L_40012530:
    // 0x40012530: bne         $v0, $at, L_40012544
    if (ctx->r2 != ctx->r1) {
        // 0x40012534: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40012544;
    }
    // 0x40012534: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40012538: jal         0x40016050
    // 0x4001253C: nop

    ovl_actor_main_16050(rdram, ctx);
        goto after_6;
    // 0x4001253C: nop

    after_6:
    // 0x40012540: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40012544:
    // 0x40012544: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40012548: jr          $ra
    // 0x4001254C: nop

    return;
    // 0x4001254C: nop

;}
RECOMP_FUNC void ovl_actor_main_12550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40012550: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40012554: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x40012558: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001255C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x40012560: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x40012564: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x40012568: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x4001256C: jal         0x40001E6C
    // 0x40012570: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    ovl_actor_main_1E6C(rdram, ctx);
        goto after_0;
    // 0x40012570: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x40012574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40012578: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x4001257C: jr          $ra
    // 0x40012580: nop

    return;
    // 0x40012580: nop

;}
RECOMP_FUNC void ovl_actor_main_12584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40012584: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40012588: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x4001258C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40012590: lui         $t6, 0x4002
    ctx->r14 = S32(0X4002 << 16);
    // 0x40012594: lui         $t7, 0x4002
    ctx->r15 = S32(0X4002 << 16);
    // 0x40012598: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x4001259C: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x400125A0: lw          $t6, -0x1D00($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1D00);
    // 0x400125A4: lw          $t7, -0x1CF4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1CF4);
    // 0x400125A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400125AC: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x400125B0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x400125B4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x400125B8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x400125BC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x400125C0: jal         0x40001E48
    // 0x400125C4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    ovl_actor_main_1E48(rdram, ctx);
        goto after_0;
    // 0x400125C4: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_0:
    // 0x400125C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400125CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x400125D0: jr          $ra
    // 0x400125D4: nop

    return;
    // 0x400125D4: nop

;}
RECOMP_FUNC void ovl_actor_main_125D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400125D8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x400125DC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x400125E0: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x400125E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x400125E8: bne         $at, $zero, L_4001261C
    if (ctx->r1 != 0) {
        // 0x400125EC: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4001261C;
    }
    // 0x400125EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x400125F0: addiu       $t6, $a1, -0x1E
    ctx->r14 = ADD32(ctx->r5, -0X1E);
    // 0x400125F4: sltiu       $at, $t6, 0x31
    ctx->r1 = ctx->r14 < 0X31 ? 1 : 0;
    // 0x400125F8: beq         $at, $zero, L_40012750
    if (ctx->r1 == 0) {
        // 0x400125FC: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_40012750;
    }
    // 0x400125FC: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x40012600: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x40012604: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40012608: addu        $at, $at, $t6
    gpr jr_addend_40012614 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x4001260C: lw          $t6, -0x128C($at)
    ctx->r14 = ADD32(ctx->r1, -0X128C);
    // 0x40012610: nop

    // 0x40012614: jr          $t6
    // 0x40012618: nop

    switch (jr_addend_40012614 >> 2) {
        case 0: goto L_40012654; break;
        case 1: goto L_40012750; break;
        case 2: goto L_40012750; break;
        case 3: goto L_40012750; break;
        case 4: goto L_40012750; break;
        case 5: goto L_40012750; break;
        case 6: goto L_40012750; break;
        case 7: goto L_40012750; break;
        case 8: goto L_40012750; break;
        case 9: goto L_40012750; break;
        case 10: goto L_40012750; break;
        case 11: goto L_40012750; break;
        case 12: goto L_40012750; break;
        case 13: goto L_40012750; break;
        case 14: goto L_40012674; break;
        case 15: goto L_40012750; break;
        case 16: goto L_40012750; break;
        case 17: goto L_40012750; break;
        case 18: goto L_40012750; break;
        case 19: goto L_40012750; break;
        case 20: goto L_40012750; break;
        case 21: goto L_40012750; break;
        case 22: goto L_40012750; break;
        case 23: goto L_40012750; break;
        case 24: goto L_40012750; break;
        case 25: goto L_40012674; break;
        case 26: goto L_40012750; break;
        case 27: goto L_40012750; break;
        case 28: goto L_40012750; break;
        case 29: goto L_40012750; break;
        case 30: goto L_40012750; break;
        case 31: goto L_40012750; break;
        case 32: goto L_40012750; break;
        case 33: goto L_40012750; break;
        case 34: goto L_40012750; break;
        case 35: goto L_40012750; break;
        case 36: goto L_40012750; break;
        case 37: goto L_40012674; break;
        case 38: goto L_40012750; break;
        case 39: goto L_40012750; break;
        case 40: goto L_40012750; break;
        case 41: goto L_40012750; break;
        case 42: goto L_40012750; break;
        case 43: goto L_40012750; break;
        case 44: goto L_40012750; break;
        case 45: goto L_40012750; break;
        case 46: goto L_40012750; break;
        case 47: goto L_40012750; break;
        case 48: goto L_40012748; break;
        default: switch_error(__func__, 0x40012614, 0x4001ED74);
    }
    // 0x40012618: nop

L_4001261C:
    // 0x4001261C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40012620: bne         $a1, $at, L_40012750
    if (ctx->r5 != ctx->r1) {
        // 0x40012624: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40012750;
    }
    // 0x40012624: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40012628: addiu       $a1, $zero, 0x586
    ctx->r5 = ADD32(0, 0X586);
    // 0x4001262C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40012630: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40012634: jal         0x40008D64
    // 0x40012638: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40012638: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4001263C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40012640: addiu       $a1, $zero, 0x3A5
    ctx->r5 = ADD32(0, 0X3A5);
    // 0x40012644: jal         0x4000115C
    // 0x40012648: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_1;
    // 0x40012648: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x4001264C: b           L_40012754
    // 0x40012650: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40012754;
    // 0x40012650: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40012654:
    // 0x40012654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40012658: addiu       $a1, $zero, 0x582
    ctx->r5 = ADD32(0, 0X582);
    // 0x4001265C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40012660: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40012664: jal         0x40008D64
    // 0x40012668: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_2;
    // 0x40012668: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x4001266C: b           L_40012754
    // 0x40012670: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40012754;
    // 0x40012670: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40012674:
    // 0x40012674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40012678: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x4001267C: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    // 0x40012680: jal         0x40012550
    // 0x40012684: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    ovl_actor_main_12550(rdram, ctx);
        goto after_3;
    // 0x40012684: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_3:
    // 0x40012688: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x4001268C: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    // 0x40012690: beq         $v0, $at, L_40012710
    if (ctx->r2 == ctx->r1) {
        // 0x40012694: nop
    
            goto L_40012710;
    }
    // 0x40012694: nop

    // 0x40012698: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4001269C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x400126A0: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x400126A4: jal         0x40000DE4
    // 0x400126A8: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_DE4(rdram, ctx);
        goto after_4;
    // 0x400126A8: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x400126AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400126B0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x400126B4: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x400126B8: jal         0x40011C5C
    // 0x400126BC: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    ovl_actor_main_11C5C(rdram, ctx);
        goto after_5;
    // 0x400126BC: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_5:
    // 0x400126C0: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x400126C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x400126C8: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x400126CC: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x400126D0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x400126D4: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x400126D8: bc1f        L_400126E8
    if (!c1cs) {
        // 0x400126DC: nop
    
            goto L_400126E8;
    }
    // 0x400126DC: nop

    // 0x400126E0: b           L_40012708
    // 0x400126E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_40012708;
    // 0x400126E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_400126E8:
    // 0x400126E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x400126EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x400126F0: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x400126F4: nop

    // 0x400126F8: bc1f        L_40012708
    if (!c1cs) {
        // 0x400126FC: nop
    
            goto L_40012708;
    }
    // 0x400126FC: nop

    // 0x40012700: b           L_40012708
    // 0x40012704: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_40012708;
    // 0x40012704: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_40012708:
    // 0x40012708: jal         0x40012584
    // 0x4001270C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_12584(rdram, ctx);
        goto after_6;
    // 0x4001270C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_40012710:
    // 0x40012710: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40012714: lwc1        $f16, -0x11C8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X11C8);
    // 0x40012718: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001271C: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    // 0x40012720: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40012724: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x40012728: jal         0x4000120C
    // 0x4001272C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_7;
    // 0x4001272C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x40012730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40012734: addiu       $a1, $zero, 0x287
    ctx->r5 = ADD32(0, 0X287);
    // 0x40012738: jal         0x4000115C
    // 0x4001273C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_8;
    // 0x4001273C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x40012740: b           L_40012754
    // 0x40012744: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40012754;
    // 0x40012744: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40012748:
    // 0x40012748: jal         0x4000CB84
    // 0x4001274C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_9;
    // 0x4001274C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
L_40012750:
    // 0x40012750: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40012754:
    // 0x40012754: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x40012758: jr          $ra
    // 0x4001275C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x4001275C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_actor_main_12760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40012760: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40012764: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x40012768: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001276C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x40012770: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40012774: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x40012778: bne         $a1, $at, L_400127C0
    if (ctx->r5 != ctx->r1) {
        // 0x4001277C: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_400127C0;
    }
    // 0x4001277C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x40012780: addiu       $a1, $zero, 0x586
    ctx->r5 = ADD32(0, 0X586);
    // 0x40012784: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40012788: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001278C: jal         0x40008D64
    // 0x40012790: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40012790: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40012794: addiu       $s0, $s1, 0x324
    ctx->r16 = ADD32(ctx->r17, 0X324);
    // 0x40012798: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x4001279C: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x400127A0: jal         0x40011D40
    // 0x400127A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_11D40(rdram, ctx);
        goto after_1;
    // 0x400127A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x400127A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400127AC: addiu       $a1, $zero, 0x3A5
    ctx->r5 = ADD32(0, 0X3A5);
    // 0x400127B0: jal         0x4000115C
    // 0x400127B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_2;
    // 0x400127B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x400127B8: b           L_40012854
    // 0x400127BC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
        goto L_40012854;
    // 0x400127BC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
L_400127C0:
    // 0x400127C0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x400127C4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x400127C8: bne         $t7, $at, L_40012834
    if (ctx->r15 != ctx->r1) {
        // 0x400127CC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_40012834;
    }
    // 0x400127CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400127D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x400127D4: addiu       $s0, $s1, 0x324
    ctx->r16 = ADD32(ctx->r17, 0X324);
    // 0x400127D8: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x400127DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x400127E0: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x400127E4: jal         0x40006EEC
    // 0x400127E8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EEC(rdram, ctx);
        goto after_3;
    // 0x400127E8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x400127EC: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400127F0: lwc1        $f6, -0x11C4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X11C4);
    // 0x400127F4: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x400127F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400127FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x40012800: lui         $a3, 0xC3FA
    ctx->r7 = S32(0XC3FA << 16);
    // 0x40012804: jal         0x4000120C
    // 0x40012808: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_4;
    // 0x40012808: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x4001280C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40012810: addiu       $a1, $zero, 0x283
    ctx->r5 = ADD32(0, 0X283);
    // 0x40012814: jal         0x4000115C
    // 0x40012818: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_5;
    // 0x40012818: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x4001281C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40012820: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x40012824: jal         0x40009000
    // 0x40012828: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_6;
    // 0x40012828: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x4001282C: b           L_40012854
    // 0x40012830: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
        goto L_40012854;
    // 0x40012830: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
L_40012834:
    // 0x40012834: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x40012838: nop

    // 0x4001283C: slti        $at, $t8, 0x1E
    ctx->r1 = SIGNED(ctx->r24) < 0X1E ? 1 : 0;
    // 0x40012840: bne         $at, $zero, L_40012854
    if (ctx->r1 != 0) {
        // 0x40012844: lw          $t9, 0x2C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X2C);
            goto L_40012854;
    }
    // 0x40012844: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x40012848: jal         0x4000CB84
    // 0x4001284C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_7;
    // 0x4001284C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x40012850: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
L_40012854:
    // 0x40012854: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40012858: slti        $at, $t9, 0x16
    ctx->r1 = SIGNED(ctx->r25) < 0X16 ? 1 : 0;
    // 0x4001285C: bne         $at, $zero, L_40012870
    if (ctx->r1 != 0) {
        // 0x40012860: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_40012870;
    }
    // 0x40012860: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40012864: jal         0x40011F94
    // 0x40012868: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    ovl_actor_main_11F94(rdram, ctx);
        goto after_8;
    // 0x40012868: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_8:
    // 0x4001286C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40012870:
    // 0x40012870: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x40012874: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x40012878: jr          $ra
    // 0x4001287C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4001287C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_12880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40012880: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x40012884: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x40012888: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x4001288C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40012890: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x40012894: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x40012898: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x4001289C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x400128A0: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x400128A4: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x400128A8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x400128AC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x400128B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x400128B4: addiu       $t8, $sp, 0x18
    ctx->r24 = ADD32(ctx->r29, 0X18);
    // 0x400128B8: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x400128BC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x400128C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x400128C4: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x400128C8: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x400128CC: jal         0x40001258
    // 0x400128D0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_1258(rdram, ctx);
        goto after_0;
    // 0x400128D0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x400128D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400128D8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x400128DC: jr          $ra
    // 0x400128E0: nop

    return;
    // 0x400128E0: nop

;}
RECOMP_FUNC void ovl_actor_main_128E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400128E4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x400128E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400128EC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x400128F0: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x400128F4: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x400128F8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x400128FC: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x40012900: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x40012904: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x40012908: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x4001290C: bc1f        L_40012920
    if (!c1cs) {
        // 0x40012910: nop
    
            goto L_40012920;
    }
    // 0x40012910: nop

    // 0x40012914: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x40012918: nop

    // 0x4001291C: add.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f10.fl;
L_40012920:
    // 0x40012920: lw          $a2, 0x8($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X8);
    // 0x40012924: lw          $a3, 0x4($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X4);
    // 0x40012928: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x4001292C: jal         0x4001A4A0
    // 0x40012930: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_1A4A0(rdram, ctx);
        goto after_0;
    // 0x40012930: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x40012934: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x40012938: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4001293C: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x40012940: jal         0x400006C4
    // 0x40012944: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40012944: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x40012948: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001294C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x40012950: jr          $ra
    // 0x40012954: nop

    return;
    // 0x40012954: nop

;}
RECOMP_FUNC void ovl_actor_main_12958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40012958: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001295C: beq         $a0, $zero, L_40012974
    if (ctx->r4 == 0) {
        // 0x40012960: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_40012974;
    }
    // 0x40012960: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40012964: jal         0x40000DE4
    // 0x40012968: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_actor_main_DE4(rdram, ctx);
        goto after_0;
    // 0x40012968: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x4001296C: b           L_40012978
    // 0x40012970: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
        goto L_40012978;
    // 0x40012970: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_40012974:
    // 0x40012974: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_40012978:
    // 0x40012978: jal         0x40000DF0
    // 0x4001297C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_actor_main_DF0(rdram, ctx);
        goto after_1;
    // 0x4001297C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x40012980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40012984: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40012988: jr          $ra
    // 0x4001298C: nop

    return;
    // 0x4001298C: nop

;}
RECOMP_FUNC void ovl_actor_main_12990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40012990: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x40012994: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x40012998: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001299C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400129A0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x400129A4: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x400129A8: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x400129AC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x400129B0: jal         0x400006C4
    // 0x400129B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x400129B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x400129B8: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x400129BC: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x400129C0: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x400129C4: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x400129C8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x400129CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x400129D0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x400129D4: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x400129D8: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x400129DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400129E0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x400129E4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x400129E8: jal         0x40001258
    // 0x400129EC: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_1258(rdram, ctx);
        goto after_1;
    // 0x400129EC: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x400129F0: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x400129F4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x400129F8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x400129FC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x40012A00: jal         0x400006C4
    // 0x40012A04: swc1        $f6, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f6.u32l;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_2;
    // 0x40012A04: swc1        $f6, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f6.u32l;
    after_2:
    // 0x40012A08: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x40012A0C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x40012A10: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x40012A14: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x40012A18: jal         0x400006C4
    // 0x40012A1C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_3;
    // 0x40012A1C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x40012A20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40012A24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x40012A28: jr          $ra
    // 0x40012A2C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x40012A2C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_actor_main_12A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40012A30: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x40012A34: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x40012A38: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x40012A3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40012A40: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x40012A44: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x40012A48: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x40012A4C: beq         $a1, $at, L_40012A8C
    if (ctx->r5 == ctx->r1) {
        // 0x40012A50: sw          $s0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r16;
            goto L_40012A8C;
    }
    // 0x40012A50: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x40012A54: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x40012A58: beq         $a1, $at, L_40012C50
    if (ctx->r5 == ctx->r1) {
        // 0x40012A5C: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_40012C50;
    }
    // 0x40012A5C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x40012A60: beq         $a1, $at, L_40012B74
    if (ctx->r5 == ctx->r1) {
        // 0x40012A64: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_40012B74;
    }
    // 0x40012A64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40012A68: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x40012A6C: beq         $a1, $at, L_40012B9C
    if (ctx->r5 == ctx->r1) {
        // 0x40012A70: addiu       $at, $zero, 0x3B
        ctx->r1 = ADD32(0, 0X3B);
            goto L_40012B9C;
    }
    // 0x40012A70: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x40012A74: beq         $a1, $at, L_40012C28
    if (ctx->r5 == ctx->r1) {
        // 0x40012A78: addiu       $at, $zero, 0x4D
        ctx->r1 = ADD32(0, 0X4D);
            goto L_40012C28;
    }
    // 0x40012A78: addiu       $at, $zero, 0x4D
    ctx->r1 = ADD32(0, 0X4D);
    // 0x40012A7C: beq         $a1, $at, L_40012C48
    if (ctx->r5 == ctx->r1) {
        // 0x40012A80: nop
    
            goto L_40012C48;
    }
    // 0x40012A80: nop

    // 0x40012A84: b           L_40012C54
    // 0x40012A88: slti        $at, $s2, 0xC
    ctx->r1 = SIGNED(ctx->r18) < 0XC ? 1 : 0;
        goto L_40012C54;
    // 0x40012A88: slti        $at, $s2, 0xC
    ctx->r1 = SIGNED(ctx->r18) < 0XC ? 1 : 0;
L_40012A8C:
    // 0x40012A8C: jal         0x40000DE4
    // 0x40012A90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_actor_main_DE4(rdram, ctx);
        goto after_0;
    // 0x40012A90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x40012A94: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x40012A98: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x40012A9C: jal         0x400006C4
    // 0x40012AA0: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40012AA0: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_1:
    // 0x40012AA4: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x40012AA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x40012AAC: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x40012AB0: addiu       $s0, $s1, 0x324
    ctx->r16 = ADD32(ctx->r17, 0X324);
    // 0x40012AB4: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x40012AB8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x40012ABC: bc1f        L_40012AD4
    if (!c1cs) {
        // 0x40012AC0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_40012AD4;
    }
    // 0x40012AC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40012AC4: jal         0x4000CB84
    // 0x40012AC8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_2;
    // 0x40012AC8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x40012ACC: b           L_40012DB8
    // 0x40012AD0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_40012DB8;
    // 0x40012AD0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_40012AD4:
    // 0x40012AD4: sw          $t6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r14;
    // 0x40012AD8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x40012ADC: addiu       $a1, $zero, 0x57B
    ctx->r5 = ADD32(0, 0X57B);
    // 0x40012AE0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40012AE4: jal         0x40008D64
    // 0x40012AE8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_3;
    // 0x40012AE8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_3:
    // 0x40012AEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40012AF0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x40012AF4: jal         0x40011D40
    // 0x40012AF8: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    ovl_actor_main_11D40(rdram, ctx);
        goto after_4;
    // 0x40012AF8: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    after_4:
    // 0x40012AFC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x40012B00: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x40012B04: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x40012B08: swc1        $f8, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f8.u32l;
    // 0x40012B0C: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x40012B10: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x40012B14: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x40012B18: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x40012B1C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x40012B20: swc1        $f18, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f18.u32l;
    // 0x40012B24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40012B28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x40012B2C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x40012B30: lui         $a3, 0x42B4
    ctx->r7 = S32(0X42B4 << 16);
    // 0x40012B34: jal         0x40006EEC
    // 0x40012B38: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EEC(rdram, ctx);
        goto after_5;
    // 0x40012B38: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x40012B3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40012B40: addiu       $a1, $zero, 0x233
    ctx->r5 = ADD32(0, 0X233);
    // 0x40012B44: jal         0x4000115C
    // 0x40012B48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_6;
    // 0x40012B48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x40012B4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40012B50: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x40012B54: jal         0x40009000
    // 0x40012B58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_7;
    // 0x40012B58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x40012B5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40012B60: addiu       $a1, $zero, 0x3A4
    ctx->r5 = ADD32(0, 0X3A4);
    // 0x40012B64: jal         0x4000115C
    // 0x40012B68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_8;
    // 0x40012B68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x40012B6C: b           L_40012C54
    // 0x40012B70: slti        $at, $s2, 0xC
    ctx->r1 = SIGNED(ctx->r18) < 0XC ? 1 : 0;
        goto L_40012C54;
    // 0x40012B70: slti        $at, $s2, 0xC
    ctx->r1 = SIGNED(ctx->r18) < 0XC ? 1 : 0;
L_40012B74:
    // 0x40012B74: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x40012B78: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x40012B7C: jal         0x40011F94
    // 0x40012B80: swc1        $f6, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f6.u32l;
    ovl_actor_main_11F94(rdram, ctx);
        goto after_9;
    // 0x40012B80: swc1        $f6, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f6.u32l;
    after_9:
    // 0x40012B84: bne         $v0, $zero, L_40012C54
    if (ctx->r2 != 0) {
        // 0x40012B88: slti        $at, $s2, 0xC
        ctx->r1 = SIGNED(ctx->r18) < 0XC ? 1 : 0;
            goto L_40012C54;
    }
    // 0x40012B88: slti        $at, $s2, 0xC
    ctx->r1 = SIGNED(ctx->r18) < 0XC ? 1 : 0;
    // 0x40012B8C: jal         0x4000CB84
    // 0x40012B90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_10;
    // 0x40012B90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x40012B94: b           L_40012C54
    // 0x40012B98: slti        $at, $s2, 0xC
    ctx->r1 = SIGNED(ctx->r18) < 0XC ? 1 : 0;
        goto L_40012C54;
    // 0x40012B98: slti        $at, $s2, 0xC
    ctx->r1 = SIGNED(ctx->r18) < 0XC ? 1 : 0;
L_40012B9C:
    // 0x40012B9C: jal         0x40000DE4
    // 0x40012BA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_actor_main_DE4(rdram, ctx);
        goto after_11;
    // 0x40012BA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x40012BA4: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x40012BA8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x40012BAC: addiu       $s0, $s1, 0x324
    ctx->r16 = ADD32(ctx->r17, 0X324);
    // 0x40012BB0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x40012BB4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x40012BB8: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x40012BBC: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    // 0x40012BC0: swc1        $f10, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f10.u32l;
    // 0x40012BC4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x40012BC8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40012BCC: addiu       $a1, $zero, 0x583
    ctx->r5 = ADD32(0, 0X583);
    // 0x40012BD0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40012BD4: jal         0x40008D64
    // 0x40012BD8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_12;
    // 0x40012BD8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_12:
    // 0x40012BDC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x40012BE0: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x40012BE4: jal         0x40000CA0
    // 0x40012BE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_13;
    // 0x40012BE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x40012BEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40012BF0: addiu       $a1, $zero, 0x291
    ctx->r5 = ADD32(0, 0X291);
    // 0x40012BF4: jal         0x4000115C
    // 0x40012BF8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_14;
    // 0x40012BF8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_14:
    // 0x40012BFC: jal         0x40012958
    // 0x40012C00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_actor_main_12958(rdram, ctx);
        goto after_15;
    // 0x40012C00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_15:
    // 0x40012C04: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x40012C08: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x40012C0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40012C10: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x40012C14: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40012C18: jal         0x40012990
    // 0x40012C1C: nop

    ovl_actor_main_12990(rdram, ctx);
        goto after_16;
    // 0x40012C1C: nop

    after_16:
    // 0x40012C20: b           L_40012C54
    // 0x40012C24: slti        $at, $s2, 0xC
    ctx->r1 = SIGNED(ctx->r18) < 0XC ? 1 : 0;
        goto L_40012C54;
    // 0x40012C24: slti        $at, $s2, 0xC
    ctx->r1 = SIGNED(ctx->r18) < 0XC ? 1 : 0;
L_40012C28:
    // 0x40012C28: jal         0x40012958
    // 0x40012C2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_actor_main_12958(rdram, ctx);
        goto after_17;
    // 0x40012C2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_17:
    // 0x40012C30: lw          $a1, 0x330($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X330);
    // 0x40012C34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40012C38: jal         0x40012880
    // 0x40012C3C: lui         $a2, 0x4216
    ctx->r6 = S32(0X4216 << 16);
    ovl_actor_main_12880(rdram, ctx);
        goto after_18;
    // 0x40012C3C: lui         $a2, 0x4216
    ctx->r6 = S32(0X4216 << 16);
    after_18:
    // 0x40012C40: b           L_40012C54
    // 0x40012C44: slti        $at, $s2, 0xC
    ctx->r1 = SIGNED(ctx->r18) < 0XC ? 1 : 0;
        goto L_40012C54;
    // 0x40012C44: slti        $at, $s2, 0xC
    ctx->r1 = SIGNED(ctx->r18) < 0XC ? 1 : 0;
L_40012C48:
    // 0x40012C48: jal         0x4000CB84
    // 0x40012C4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_19;
    // 0x40012C4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_19:
L_40012C50:
    // 0x40012C50: slti        $at, $s2, 0xC
    ctx->r1 = SIGNED(ctx->r18) < 0XC ? 1 : 0;
L_40012C54:
    // 0x40012C54: beq         $at, $zero, L_40012C68
    if (ctx->r1 == 0) {
        // 0x40012C58: slti        $at, $s2, 0xB
        ctx->r1 = SIGNED(ctx->r18) < 0XB ? 1 : 0;
            goto L_40012C68;
    }
    // 0x40012C58: slti        $at, $s2, 0xB
    ctx->r1 = SIGNED(ctx->r18) < 0XB ? 1 : 0;
    // 0x40012C5C: jal         0x40011E8C
    // 0x40012C60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_11E8C(rdram, ctx);
        goto after_20;
    // 0x40012C60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_20:
    // 0x40012C64: slti        $at, $s2, 0xB
    ctx->r1 = SIGNED(ctx->r18) < 0XB ? 1 : 0;
L_40012C68:
    // 0x40012C68: beq         $at, $zero, L_40012C90
    if (ctx->r1 == 0) {
        // 0x40012C6C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_40012C90;
    }
    // 0x40012C6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40012C70: addiu       $t7, $s1, 0x324
    ctx->r15 = ADD32(ctx->r17, 0X324);
    // 0x40012C74: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x40012C78: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x40012C7C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x40012C80: jal         0x40011BE4
    // 0x40012C84: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_actor_main_11BE4(rdram, ctx);
        goto after_21;
    // 0x40012C84: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_21:
    // 0x40012C88: b           L_40012D9C
    // 0x40012C8C: slti        $at, $s2, 0xC
    ctx->r1 = SIGNED(ctx->r18) < 0XC ? 1 : 0;
        goto L_40012D9C;
    // 0x40012C8C: slti        $at, $s2, 0xC
    ctx->r1 = SIGNED(ctx->r18) < 0XC ? 1 : 0;
L_40012C90:
    // 0x40012C90: slti        $at, $s2, 0xC
    ctx->r1 = SIGNED(ctx->r18) < 0XC ? 1 : 0;
    // 0x40012C94: bne         $at, $zero, L_40012CD8
    if (ctx->r1 != 0) {
        // 0x40012C98: slti        $at, $s2, 0x12
        ctx->r1 = SIGNED(ctx->r18) < 0X12 ? 1 : 0;
            goto L_40012CD8;
    }
    // 0x40012C98: slti        $at, $s2, 0x12
    ctx->r1 = SIGNED(ctx->r18) < 0X12 ? 1 : 0;
    // 0x40012C9C: beq         $at, $zero, L_40012CD8
    if (ctx->r1 == 0) {
        // 0x40012CA0: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_40012CD8;
    }
    // 0x40012CA0: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x40012CA4: bne         $s2, $at, L_40012CBC
    if (ctx->r18 != ctx->r1) {
        // 0x40012CA8: addiu       $s0, $s1, 0x324
        ctx->r16 = ADD32(ctx->r17, 0X324);
            goto L_40012CBC;
    }
    // 0x40012CA8: addiu       $s0, $s1, 0x324
    ctx->r16 = ADD32(ctx->r17, 0X324);
    // 0x40012CAC: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x40012CB0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x40012CB4: b           L_40012D98
    // 0x40012CB8: swc1        $f16, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f16.u32l;
        goto L_40012D98;
    // 0x40012CB8: swc1        $f16, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f16.u32l;
L_40012CBC:
    // 0x40012CBC: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40012CC0: lwc1        $f4, -0x11C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X11C0);
    // 0x40012CC4: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x40012CC8: nop

    // 0x40012CCC: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x40012CD0: b           L_40012D98
    // 0x40012CD4: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
        goto L_40012D98;
    // 0x40012CD4: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
L_40012CD8:
    // 0x40012CD8: slti        $at, $s2, 0x12
    ctx->r1 = SIGNED(ctx->r18) < 0X12 ? 1 : 0;
    // 0x40012CDC: bne         $at, $zero, L_40012D44
    if (ctx->r1 != 0) {
        // 0x40012CE0: slti        $at, $s2, 0x34
        ctx->r1 = SIGNED(ctx->r18) < 0X34 ? 1 : 0;
            goto L_40012D44;
    }
    // 0x40012CE0: slti        $at, $s2, 0x34
    ctx->r1 = SIGNED(ctx->r18) < 0X34 ? 1 : 0;
    // 0x40012CE4: beq         $at, $zero, L_40012D44
    if (ctx->r1 == 0) {
        // 0x40012CE8: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_40012D44;
    }
    // 0x40012CE8: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x40012CEC: bne         $s2, $at, L_40012D00
    if (ctx->r18 != ctx->r1) {
        // 0x40012CF0: lui         $at, 0xC316
        ctx->r1 = S32(0XC316 << 16);
            goto L_40012D00;
    }
    // 0x40012CF0: lui         $at, 0xC316
    ctx->r1 = S32(0XC316 << 16);
    // 0x40012CF4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x40012CF8: nop

    // 0x40012CFC: swc1        $f8, 0x33C($s1)
    MEM_W(0X33C, ctx->r17) = ctx->f8.u32l;
L_40012D00:
    // 0x40012D00: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x40012D04: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x40012D08: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40012D0C: lwc1        $f16, -0x11BC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X11BC);
    // 0x40012D10: lwc1        $f10, 0x44($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X44);
    // 0x40012D14: nop

    // 0x40012D18: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x40012D1C: swc1        $f18, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f18.u32l;
    // 0x40012D20: lwc1        $f0, 0x44($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X44);
    // 0x40012D24: nop

    // 0x40012D28: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x40012D2C: nop

    // 0x40012D30: bc1f        L_40012D9C
    if (!c1cs) {
        // 0x40012D34: slti        $at, $s2, 0xC
        ctx->r1 = SIGNED(ctx->r18) < 0XC ? 1 : 0;
            goto L_40012D9C;
    }
    // 0x40012D34: slti        $at, $s2, 0xC
    ctx->r1 = SIGNED(ctx->r18) < 0XC ? 1 : 0;
    // 0x40012D38: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x40012D3C: b           L_40012D98
    // 0x40012D40: swc1        $f4, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f4.u32l;
        goto L_40012D98;
    // 0x40012D40: swc1        $f4, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f4.u32l;
L_40012D44:
    // 0x40012D44: slti        $at, $s2, 0x34
    ctx->r1 = SIGNED(ctx->r18) < 0X34 ? 1 : 0;
    // 0x40012D48: bne         $at, $zero, L_40012D98
    if (ctx->r1 != 0) {
        // 0x40012D4C: slti        $at, $s2, 0x3B
        ctx->r1 = SIGNED(ctx->r18) < 0X3B ? 1 : 0;
            goto L_40012D98;
    }
    // 0x40012D4C: slti        $at, $s2, 0x3B
    ctx->r1 = SIGNED(ctx->r18) < 0X3B ? 1 : 0;
    // 0x40012D50: beq         $at, $zero, L_40012D98
    if (ctx->r1 == 0) {
        // 0x40012D54: addiu       $at, $zero, 0x34
        ctx->r1 = ADD32(0, 0X34);
            goto L_40012D98;
    }
    // 0x40012D54: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x40012D58: bne         $s2, $at, L_40012D70
    if (ctx->r18 != ctx->r1) {
        // 0x40012D5C: addiu       $s0, $s1, 0x324
        ctx->r16 = ADD32(ctx->r17, 0X324);
            goto L_40012D70;
    }
    // 0x40012D5C: addiu       $s0, $s1, 0x324
    ctx->r16 = ADD32(ctx->r17, 0X324);
    // 0x40012D60: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x40012D64: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x40012D68: nop

    // 0x40012D6C: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
L_40012D70:
    // 0x40012D70: lui         $at, 0x41B8
    ctx->r1 = S32(0X41B8 << 16);
    // 0x40012D74: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x40012D78: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x40012D7C: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x40012D80: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x40012D84: lwc1        $f18, 0x14($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X14);
    // 0x40012D88: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x40012D8C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x40012D90: swc1        $f16, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f16.u32l;
    // 0x40012D94: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
L_40012D98:
    // 0x40012D98: slti        $at, $s2, 0xC
    ctx->r1 = SIGNED(ctx->r18) < 0XC ? 1 : 0;
L_40012D9C:
    // 0x40012D9C: bne         $at, $zero, L_40012DB4
    if (ctx->r1 != 0) {
        // 0x40012DA0: slti        $at, $s2, 0x3B
        ctx->r1 = SIGNED(ctx->r18) < 0X3B ? 1 : 0;
            goto L_40012DB4;
    }
    // 0x40012DA0: slti        $at, $s2, 0x3B
    ctx->r1 = SIGNED(ctx->r18) < 0X3B ? 1 : 0;
    // 0x40012DA4: beq         $at, $zero, L_40012DB4
    if (ctx->r1 == 0) {
        // 0x40012DA8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_40012DB4;
    }
    // 0x40012DA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40012DAC: jal         0x400128E4
    // 0x40012DB0: addiu       $a1, $s1, 0x330
    ctx->r5 = ADD32(ctx->r17, 0X330);
    ovl_actor_main_128E4(rdram, ctx);
        goto after_22;
    // 0x40012DB0: addiu       $a1, $s1, 0x330
    ctx->r5 = ADD32(ctx->r17, 0X330);
    after_22:
L_40012DB4:
    // 0x40012DB4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_40012DB8:
    // 0x40012DB8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x40012DBC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x40012DC0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x40012DC4: jr          $ra
    // 0x40012DC8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x40012DC8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_actor_main_12DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40012DCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40012DD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40012DD4: jal         0x40016050
    // 0x40012DD8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_actor_main_16050(rdram, ctx);
        goto after_0;
    // 0x40012DD8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x40012DDC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x40012DE0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40012DE4: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x40012DE8: nop

    // 0x40012DEC: beq         $a0, $at, L_40012E14
    if (ctx->r4 == ctx->r1) {
        // 0x40012DF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40012E14;
    }
    // 0x40012DF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40012DF4: jal         0x400016B4
    // 0x40012DF8: nop

    ovl_actor_main_16B4(rdram, ctx);
        goto after_1;
    // 0x40012DF8: nop

    after_1:
    // 0x40012DFC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40012E00: beq         $v0, $at, L_40012E10
    if (ctx->r2 == ctx->r1) {
        // 0x40012E04: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_40012E10;
    }
    // 0x40012E04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x40012E08: jal         0x40004120
    // 0x40012E0C: nop

    ovl_actor_main_4120(rdram, ctx);
        goto after_2;
    // 0x40012E0C: nop

    after_2:
L_40012E10:
    // 0x40012E10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40012E14:
    // 0x40012E14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40012E18: jr          $ra
    // 0x40012E1C: nop

    return;
    // 0x40012E1C: nop

;}
RECOMP_FUNC void ovl_actor_main_12E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40012E20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40012E24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40012E28: jal         0x40012DCC
    // 0x40012E2C: addiu       $a1, $a0, 0x330
    ctx->r5 = ADD32(ctx->r4, 0X330);
    ovl_actor_main_12DCC(rdram, ctx);
        goto after_0;
    // 0x40012E2C: addiu       $a1, $a0, 0x330
    ctx->r5 = ADD32(ctx->r4, 0X330);
    after_0:
    // 0x40012E30: jal         0x40012958
    // 0x40012E34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_actor_main_12958(rdram, ctx);
        goto after_1;
    // 0x40012E34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x40012E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40012E3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40012E40: jr          $ra
    // 0x40012E44: nop

    return;
    // 0x40012E44: nop

;}
RECOMP_FUNC void ovl_actor_main_12E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40012E48: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x40012E4C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40012E50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40012E54: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x40012E58: beq         $a1, $at, L_40012E74
    if (ctx->r5 == ctx->r1) {
        // 0x40012E5C: sw          $a1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r5;
            goto L_40012E74;
    }
    // 0x40012E5C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x40012E60: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x40012E64: beq         $a1, $at, L_40012E98
    if (ctx->r5 == ctx->r1) {
        // 0x40012E68: lw          $a0, 0x40($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X40);
            goto L_40012E98;
    }
    // 0x40012E68: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x40012E6C: b           L_40012EA4
    // 0x40012E70: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
        goto L_40012EA4;
    // 0x40012E70: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
L_40012E74:
    // 0x40012E74: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x40012E78: addiu       $a1, $zero, 0x583
    ctx->r5 = ADD32(0, 0X583);
    // 0x40012E7C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40012E80: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40012E84: jal         0x40008D64
    // 0x40012E88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40012E88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40012E8C: b           L_40012EA4
    // 0x40012E90: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
        goto L_40012EA4;
    // 0x40012E90: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x40012E94: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
L_40012E98:
    // 0x40012E98: jal         0x4000CB84
    // 0x40012E9C: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_1;
    // 0x40012E9C: nop

    after_1:
    // 0x40012EA0: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
L_40012EA4:
    // 0x40012EA4: nop

    // 0x40012EA8: slti        $at, $t7, 0x6
    ctx->r1 = SIGNED(ctx->r15) < 0X6 ? 1 : 0;
    // 0x40012EAC: bne         $at, $zero, L_40012EF8
    if (ctx->r1 != 0) {
        // 0x40012EB0: slti        $at, $t7, 0x28
        ctx->r1 = SIGNED(ctx->r15) < 0X28 ? 1 : 0;
            goto L_40012EF8;
    }
    // 0x40012EB0: slti        $at, $t7, 0x28
    ctx->r1 = SIGNED(ctx->r15) < 0X28 ? 1 : 0;
    // 0x40012EB4: beq         $at, $zero, L_40012EFC
    if (ctx->r1 == 0) {
        // 0x40012EB8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40012EFC;
    }
    // 0x40012EB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40012EBC: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x40012EC0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x40012EC4: lw          $a0, 0x10($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X10);
    // 0x40012EC8: jal         0x400006C4
    // 0x40012ECC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_2;
    // 0x40012ECC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x40012ED0: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40012ED4: lwc1        $f6, -0x11B8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X11B8);
    // 0x40012ED8: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x40012EDC: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x40012EE0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x40012EE4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x40012EE8: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x40012EEC: lw          $a0, 0x10($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X10);
    // 0x40012EF0: jal         0x400006C4
    // 0x40012EF4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_3;
    // 0x40012EF4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_3:
L_40012EF8:
    // 0x40012EF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40012EFC:
    // 0x40012EFC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x40012F00: jr          $ra
    // 0x40012F04: nop

    return;
    // 0x40012F04: nop

;}
RECOMP_FUNC void ovl_actor_main_12F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40012F08: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x40012F0C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40012F10: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x40012F14: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x40012F18: beq         $at, $zero, L_40013040
    if (ctx->r1 == 0) {
        // 0x40012F1C: subu        $t6, $a0, $a1
        ctx->r14 = SUB32(ctx->r4, ctx->r5);
            goto L_40013040;
    }
    // 0x40012F1C: subu        $t6, $a0, $a1
    ctx->r14 = SUB32(ctx->r4, ctx->r5);
    // 0x40012F20: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x40012F24: lwc1        $f2, 0x4($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X4);
    // 0x40012F28: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x40012F2C: lwc1        $f16, 0x10($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X10);
    // 0x40012F30: lwc1        $f14, 0x8($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X8);
    // 0x40012F34: sub.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x40012F38: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x40012F3C: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x40012F40: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x40012F44: nop

    // 0x40012F48: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x40012F4C: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x40012F50: swc1        $f10, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f10.u32l;
    // 0x40012F54: lwc1        $f4, 0x14($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X14);
    // 0x40012F58: nop

    // 0x40012F5C: sub.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x40012F60: nop

    // 0x40012F64: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x40012F68: add.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x40012F6C: bc1f        L_40012FB4
    if (!c1cs) {
        // 0x40012F70: swc1        $f10, 0x8($a2)
        MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
            goto L_40012FB4;
    }
    // 0x40012F70: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
    // 0x40012F74: lwc1        $f2, 0xC($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0XC);
    // 0x40012F78: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x40012F7C: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x40012F80: nop

    // 0x40012F84: bc1f        L_40012FA8
    if (!c1cs) {
        // 0x40012F88: nop
    
            goto L_40012FA8;
    }
    // 0x40012F88: nop

    // 0x40012F8C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x40012F90: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x40012F94: nop

    // 0x40012F98: sub.s       $f4, $f14, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x40012F9C: add.s       $f12, $f4, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x40012FA0: b           L_40012FEC
    // 0x40012FA4: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_40012FEC;
    // 0x40012FA4: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_40012FA8:
    // 0x40012FA8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x40012FAC: b           L_40012FEC
    // 0x40012FB0: sub.s       $f12, $f16, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f2.fl;
        goto L_40012FEC;
    // 0x40012FB0: sub.s       $f12, $f16, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f2.fl;
L_40012FB4:
    // 0x40012FB4: lwc1        $f2, 0xC($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0XC);
    // 0x40012FB8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x40012FBC: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x40012FC0: nop

    // 0x40012FC4: bc1f        L_40012FE4
    if (!c1cs) {
        // 0x40012FC8: nop
    
            goto L_40012FE4;
    }
    // 0x40012FC8: nop

    // 0x40012FCC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x40012FD0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x40012FD4: nop

    // 0x40012FD8: sub.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x40012FDC: b           L_40012FEC
    // 0x40012FE0: add.s       $f12, $f6, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f16.fl;
        goto L_40012FEC;
    // 0x40012FE0: add.s       $f12, $f6, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f16.fl;
L_40012FE4:
    // 0x40012FE4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x40012FE8: sub.s       $f12, $f16, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f2.fl;
L_40012FEC:
    // 0x40012FEC: nop

    // 0x40012FF0: div.s       $f8, $f12, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x40012FF4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x40012FF8: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x40012FFC: swc1        $f10, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f10.u32l;
    // 0x40013000: lwc1        $f2, 0xC($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0XC);
    // 0x40013004: nop

    // 0x40013008: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x4001300C: nop

    // 0x40013010: bc1f        L_40013028
    if (!c1cs) {
        // 0x40013014: nop
    
            goto L_40013028;
    }
    // 0x40013014: nop

    // 0x40013018: sub.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x4001301C: swc1        $f4, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f4.u32l;
    // 0x40013020: lwc1        $f2, 0xC($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0XC);
    // 0x40013024: nop

L_40013028:
    // 0x40013028: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x4001302C: nop

    // 0x40013030: bc1f        L_40013040
    if (!c1cs) {
        // 0x40013034: nop
    
            goto L_40013040;
    }
    // 0x40013034: nop

    // 0x40013038: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x4001303C: swc1        $f8, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f8.u32l;
L_40013040:
    // 0x40013040: jr          $ra
    // 0x40013044: nop

    return;
    // 0x40013044: nop

;}
RECOMP_FUNC void ovl_actor_main_13048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013048: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4001304C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40013050: bne         $a1, $at, L_4001306C
    if (ctx->r5 != ctx->r1) {
        // 0x40013054: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_4001306C;
    }
    // 0x40013054: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40013058: addiu       $a1, $zero, 0x584
    ctx->r5 = ADD32(0, 0X584);
    // 0x4001305C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40013060: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40013064: jal         0x40008D64
    // 0x40013068: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40013068: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_4001306C:
    // 0x4001306C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40013070: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40013074: jr          $ra
    // 0x40013078: nop

    return;
    // 0x40013078: nop

;}
RECOMP_FUNC void ovl_actor_main_1307C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001307C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40013080: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x40013084: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x40013088: slti        $at, $a1, 0x83
    ctx->r1 = SIGNED(ctx->r5) < 0X83 ? 1 : 0;
    // 0x4001308C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x40013090: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x40013094: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x40013098: bne         $at, $zero, L_400130B4
    if (ctx->r1 != 0) {
        // 0x4001309C: sw          $s0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r16;
            goto L_400130B4;
    }
    // 0x4001309C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x400130A0: addiu       $at, $zero, 0xA1
    ctx->r1 = ADD32(0, 0XA1);
    // 0x400130A4: beq         $s2, $at, L_4001334C
    if (ctx->r18 == ctx->r1) {
        // 0x400130A8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4001334C;
    }
    // 0x400130A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400130AC: b           L_40013364
    // 0x400130B0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
        goto L_40013364;
    // 0x400130B0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
L_400130B4:
    // 0x400130B4: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x400130B8: bne         $at, $zero, L_400130E4
    if (ctx->r1 != 0) {
        // 0x400130BC: addiu       $t6, $s2, -0x3C
        ctx->r14 = ADD32(ctx->r18, -0X3C);
            goto L_400130E4;
    }
    // 0x400130BC: addiu       $t6, $s2, -0x3C
    ctx->r14 = ADD32(ctx->r18, -0X3C);
    // 0x400130C0: sltiu       $at, $t6, 0x47
    ctx->r1 = ctx->r14 < 0X47 ? 1 : 0;
    // 0x400130C4: beq         $at, $zero, L_40013360
    if (ctx->r1 == 0) {
        // 0x400130C8: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_40013360;
    }
    // 0x400130C8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x400130CC: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400130D0: addu        $at, $at, $t6
    gpr jr_addend_400130DC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x400130D4: lw          $t6, -0x11B4($at)
    ctx->r14 = ADD32(ctx->r1, -0X11B4);
    // 0x400130D8: nop

    // 0x400130DC: jr          $t6
    // 0x400130E0: nop

    switch (jr_addend_400130DC >> 2) {
        case 0: goto L_40013168; break;
        case 1: goto L_40013360; break;
        case 2: goto L_400131EC; break;
        case 3: goto L_40013244; break;
        case 4: goto L_40013360; break;
        case 5: goto L_40013360; break;
        case 6: goto L_40013360; break;
        case 7: goto L_40013360; break;
        case 8: goto L_40013360; break;
        case 9: goto L_40013360; break;
        case 10: goto L_40013360; break;
        case 11: goto L_40013360; break;
        case 12: goto L_40013360; break;
        case 13: goto L_40013360; break;
        case 14: goto L_400132C4; break;
        case 15: goto L_40013360; break;
        case 16: goto L_40013360; break;
        case 17: goto L_40013360; break;
        case 18: goto L_40013360; break;
        case 19: goto L_40013360; break;
        case 20: goto L_40013360; break;
        case 21: goto L_40013360; break;
        case 22: goto L_40013360; break;
        case 23: goto L_40013360; break;
        case 24: goto L_40013360; break;
        case 25: goto L_400132C4; break;
        case 26: goto L_40013360; break;
        case 27: goto L_40013360; break;
        case 28: goto L_40013360; break;
        case 29: goto L_40013360; break;
        case 30: goto L_40013360; break;
        case 31: goto L_40013360; break;
        case 32: goto L_40013360; break;
        case 33: goto L_40013360; break;
        case 34: goto L_40013360; break;
        case 35: goto L_40013360; break;
        case 36: goto L_400132C4; break;
        case 37: goto L_40013360; break;
        case 38: goto L_40013360; break;
        case 39: goto L_40013360; break;
        case 40: goto L_40013360; break;
        case 41: goto L_40013360; break;
        case 42: goto L_40013360; break;
        case 43: goto L_40013360; break;
        case 44: goto L_40013360; break;
        case 45: goto L_40013360; break;
        case 46: goto L_40013360; break;
        case 47: goto L_40013360; break;
        case 48: goto L_40013360; break;
        case 49: goto L_400132C4; break;
        case 50: goto L_40013360; break;
        case 51: goto L_40013360; break;
        case 52: goto L_40013360; break;
        case 53: goto L_40013360; break;
        case 54: goto L_40013360; break;
        case 55: goto L_40013360; break;
        case 56: goto L_40013360; break;
        case 57: goto L_40013360; break;
        case 58: goto L_40013360; break;
        case 59: goto L_40013360; break;
        case 60: goto L_40013360; break;
        case 61: goto L_40013360; break;
        case 62: goto L_40013360; break;
        case 63: goto L_40013360; break;
        case 64: goto L_40013360; break;
        case 65: goto L_40013360; break;
        case 66: goto L_40013360; break;
        case 67: goto L_40013360; break;
        case 68: goto L_40013360; break;
        case 69: goto L_40013360; break;
        case 70: goto L_40013324; break;
        default: switch_error(__func__, 0x400130DC, 0x4001EE4C);
    }
    // 0x400130E0: nop

L_400130E4:
    // 0x400130E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400130E8: bne         $s2, $at, L_40013360
    if (ctx->r18 != ctx->r1) {
        // 0x400130EC: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_40013360;
    }
    // 0x400130EC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x400130F0: sw          $t7, 0x330($s1)
    MEM_W(0X330, ctx->r17) = ctx->r15;
    // 0x400130F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x400130F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400130FC: addiu       $a1, $zero, 0x584
    ctx->r5 = ADD32(0, 0X584);
    // 0x40013100: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40013104: jal         0x40008D64
    // 0x40013108: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40013108: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_0:
    // 0x4001310C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40013110: lwc1        $f4, -0x1098($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1098);
    // 0x40013114: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40013118: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001311C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40013120: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x40013124: jal         0x4000120C
    // 0x40013128: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_1;
    // 0x40013128: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x4001312C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x40013130: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40013134: addiu       $a1, $zero, 0x292
    ctx->r5 = ADD32(0, 0X292);
    // 0x40013138: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x4001313C: jal         0x4000115C
    // 0x40013140: swc1        $f6, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f6.u32l;
    ovl_actor_main_115C(rdram, ctx);
        goto after_2;
    // 0x40013140: swc1        $f6, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f6.u32l;
    after_2:
    // 0x40013144: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40013148: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x4001314C: jal         0x40009000
    // 0x40013150: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_3;
    // 0x40013150: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x40013154: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x40013158: jal         0x40000E20
    // 0x4001315C: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    ovl_actor_main_E20(rdram, ctx);
        goto after_4;
    // 0x4001315C: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_4:
    // 0x40013160: b           L_40013364
    // 0x40013164: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
        goto L_40013364;
    // 0x40013164: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
L_40013168:
    // 0x40013168: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4001316C: addiu       $a1, $zero, 0x57B
    ctx->r5 = ADD32(0, 0X57B);
    // 0x40013170: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40013174: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40013178: jal         0x40008D64
    // 0x4001317C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_5;
    // 0x4001317C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x40013180: addiu       $s0, $s1, 0x324
    ctx->r16 = ADD32(ctx->r17, 0X324);
    // 0x40013184: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x40013188: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x4001318C: jal         0x40011D40
    // 0x40013190: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_11D40(rdram, ctx);
        goto after_6;
    // 0x40013190: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x40013194: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x40013198: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4001319C: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x400131A0: swc1        $f8, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f8.u32l;
    // 0x400131A4: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x400131A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x400131AC: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x400131B0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x400131B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x400131B8: swc1        $f18, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f18.u32l;
    // 0x400131BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400131C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x400131C4: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x400131C8: lui         $a3, 0x42B4
    ctx->r7 = S32(0X42B4 << 16);
    // 0x400131CC: jal         0x40006EEC
    // 0x400131D0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EEC(rdram, ctx);
        goto after_7;
    // 0x400131D0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x400131D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400131D8: addiu       $a1, $zero, 0x233
    ctx->r5 = ADD32(0, 0X233);
    // 0x400131DC: jal         0x4000115C
    // 0x400131E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_8;
    // 0x400131E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x400131E4: b           L_40013364
    // 0x400131E8: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
        goto L_40013364;
    // 0x400131E8: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
L_400131EC:
    // 0x400131EC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x400131F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400131F4: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x400131F8: jal         0x40011F94
    // 0x400131FC: swc1        $f6, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f6.u32l;
    ovl_actor_main_11F94(rdram, ctx);
        goto after_9;
    // 0x400131FC: swc1        $f6, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f6.u32l;
    after_9:
    // 0x40013200: beq         $v0, $zero, L_40013234
    if (ctx->r2 == 0) {
        // 0x40013204: nop
    
            goto L_40013234;
    }
    // 0x40013204: nop

    // 0x40013208: jal         0x40011B50
    // 0x4001320C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_11B50(rdram, ctx);
        goto after_10;
    // 0x4001320C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x40013210: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x40013214: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x40013218: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4001321C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x40013220: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40013224: jal         0x40012990
    // 0x40013228: nop

    ovl_actor_main_12990(rdram, ctx);
        goto after_11;
    // 0x40013228: nop

    after_11:
    // 0x4001322C: b           L_40013364
    // 0x40013230: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
        goto L_40013364;
    // 0x40013230: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
L_40013234:
    // 0x40013234: jal         0x4000CB84
    // 0x40013238: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_12;
    // 0x40013238: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x4001323C: b           L_40013364
    // 0x40013240: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
        goto L_40013364;
    // 0x40013240: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
L_40013244:
    // 0x40013244: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40013248: addiu       $a1, $zero, 0x585
    ctx->r5 = ADD32(0, 0X585);
    // 0x4001324C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40013250: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40013254: jal         0x40008D64
    // 0x40013258: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_13;
    // 0x40013258: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_13:
    // 0x4001325C: jal         0x40012958
    // 0x40013260: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_actor_main_12958(rdram, ctx);
        goto after_14;
    // 0x40013260: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_14:
    // 0x40013264: jal         0x40000DE4
    // 0x40013268: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_actor_main_DE4(rdram, ctx);
        goto after_15;
    // 0x40013268: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_15:
    // 0x4001326C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x40013270: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x40013274: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x40013278: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4001327C: addiu       $s0, $s1, 0x324
    ctx->r16 = ADD32(ctx->r17, 0X324);
    // 0x40013280: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x40013284: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x40013288: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x4001328C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x40013290: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    // 0x40013294: swc1        $f8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f8.u32l;
    // 0x40013298: jal         0x400016B4
    // 0x4001329C: swc1        $f10, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f10.u32l;
    ovl_actor_main_16B4(rdram, ctx);
        goto after_16;
    // 0x4001329C: swc1        $f10, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f10.u32l;
    after_16:
    // 0x400132A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x400132A4: beq         $v0, $at, L_40013364
    if (ctx->r2 == ctx->r1) {
        // 0x400132A8: lui         $at, 0x4316
        ctx->r1 = S32(0X4316 << 16);
            goto L_40013364;
    }
    // 0x400132A8: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x400132AC: lwc1        $f16, 0x44($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X44);
    // 0x400132B0: nop

    // 0x400132B4: swc1        $f16, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f16.u32l;
    // 0x400132B8: lwc1        $f18, 0x44($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X44);
    // 0x400132BC: b           L_40013360
    // 0x400132C0: swc1        $f18, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f18.u32l;
        goto L_40013360;
    // 0x400132C0: swc1        $f18, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f18.u32l;
L_400132C4:
    // 0x400132C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400132C8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x400132CC: jal         0x40012550
    // 0x400132D0: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    ovl_actor_main_12550(rdram, ctx);
        goto after_17;
    // 0x400132D0: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    after_17:
    // 0x400132D4: addiu       $s0, $s1, 0x324
    ctx->r16 = ADD32(ctx->r17, 0X324);
    // 0x400132D8: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x400132DC: lwc1        $f4, 0x44($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X44);
    // 0x400132E0: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x400132E4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x400132E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400132EC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x400132F0: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x400132F4: jal         0x4000120C
    // 0x400132F8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_actor_main_120C(rdram, ctx);
        goto after_18;
    // 0x400132F8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_18:
    // 0x400132FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x40013300: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    // 0x40013304: jal         0x40000CA0
    // 0x40013308: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_19;
    // 0x40013308: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_19:
    // 0x4001330C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40013310: addiu       $a1, $zero, 0x287
    ctx->r5 = ADD32(0, 0X287);
    // 0x40013314: jal         0x4000115C
    // 0x40013318: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_20;
    // 0x40013318: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_20:
    // 0x4001331C: b           L_40013364
    // 0x40013320: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
        goto L_40013364;
    // 0x40013320: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
L_40013324:
    // 0x40013324: lw          $a1, 0x330($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X330);
    // 0x40013328: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4001332C: jal         0x40012880
    // 0x40013330: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    ovl_actor_main_12880(rdram, ctx);
        goto after_21;
    // 0x40013330: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    after_21:
    // 0x40013334: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40013338: addiu       $a1, $zero, 0x3A5
    ctx->r5 = ADD32(0, 0X3A5);
    // 0x4001333C: jal         0x4000115C
    // 0x40013340: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_22;
    // 0x40013340: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_22:
    // 0x40013344: b           L_40013364
    // 0x40013348: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
        goto L_40013364;
    // 0x40013348: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
L_4001334C:
    // 0x4001334C: addiu       $a1, $zero, 0x587
    ctx->r5 = ADD32(0, 0X587);
    // 0x40013350: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40013354: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40013358: jal         0x40008D64
    // 0x4001335C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_23;
    // 0x4001335C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_23:
L_40013360:
    // 0x40013360: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
L_40013364:
    // 0x40013364: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x40013368: slti        $at, $s2, 0x3E
    ctx->r1 = SIGNED(ctx->r18) < 0X3E ? 1 : 0;
    // 0x4001336C: beq         $at, $zero, L_4001338C
    if (ctx->r1 == 0) {
        // 0x40013370: slti        $at, $s2, 0x3C
        ctx->r1 = SIGNED(ctx->r18) < 0X3C ? 1 : 0;
            goto L_4001338C;
    }
    // 0x40013370: slti        $at, $s2, 0x3C
    ctx->r1 = SIGNED(ctx->r18) < 0X3C ? 1 : 0;
    // 0x40013374: jal         0x40011E8C
    // 0x40013378: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_11E8C(rdram, ctx);
        goto after_24;
    // 0x40013378: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_24:
    // 0x4001337C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x40013380: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x40013384: nop

    // 0x40013388: slti        $at, $s2, 0x3C
    ctx->r1 = SIGNED(ctx->r18) < 0X3C ? 1 : 0;
L_4001338C:
    // 0x4001338C: bne         $at, $zero, L_400133C0
    if (ctx->r1 != 0) {
        // 0x40013390: slti        $at, $s2, 0x3E
        ctx->r1 = SIGNED(ctx->r18) < 0X3E ? 1 : 0;
            goto L_400133C0;
    }
    // 0x40013390: slti        $at, $s2, 0x3E
    ctx->r1 = SIGNED(ctx->r18) < 0X3E ? 1 : 0;
    // 0x40013394: beq         $at, $zero, L_400133C0
    if (ctx->r1 == 0) {
        // 0x40013398: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_400133C0;
    }
    // 0x40013398: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4001339C: addiu       $t8, $s1, 0x324
    ctx->r24 = ADD32(ctx->r17, 0X324);
    // 0x400133A0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x400133A4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x400133A8: addiu       $a2, $zero, 0x3D
    ctx->r6 = ADD32(0, 0X3D);
    // 0x400133AC: jal         0x40011BE4
    // 0x400133B0: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_actor_main_11BE4(rdram, ctx);
        goto after_25;
    // 0x400133B0: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_25:
    // 0x400133B4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x400133B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x400133BC: nop

L_400133C0:
    // 0x400133C0: slti        $at, $s2, 0x40
    ctx->r1 = SIGNED(ctx->r18) < 0X40 ? 1 : 0;
    // 0x400133C4: bne         $at, $zero, L_40013824
    if (ctx->r1 != 0) {
        // 0x400133C8: slti        $at, $s2, 0x82
        ctx->r1 = SIGNED(ctx->r18) < 0X82 ? 1 : 0;
            goto L_40013824;
    }
    // 0x400133C8: slti        $at, $s2, 0x82
    ctx->r1 = SIGNED(ctx->r18) < 0X82 ? 1 : 0;
    // 0x400133CC: beq         $at, $zero, L_40013824
    if (ctx->r1 == 0) {
        // 0x400133D0: slti        $at, $s2, 0x44
        ctx->r1 = SIGNED(ctx->r18) < 0X44 ? 1 : 0;
            goto L_40013824;
    }
    // 0x400133D0: slti        $at, $s2, 0x44
    ctx->r1 = SIGNED(ctx->r18) < 0X44 ? 1 : 0;
    // 0x400133D4: beq         $at, $zero, L_4001341C
    if (ctx->r1 == 0) {
        // 0x400133D8: addiu       $s0, $s1, 0x324
        ctx->r16 = ADD32(ctx->r17, 0X324);
            goto L_4001341C;
    }
    // 0x400133D8: addiu       $s0, $s1, 0x324
    ctx->r16 = ADD32(ctx->r17, 0X324);
    // 0x400133DC: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400133E0: lwc1        $f10, -0x1094($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1094);
    // 0x400133E4: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x400133E8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x400133EC: lui         $a3, 0x41FC
    ctx->r7 = S32(0X41FC << 16);
    // 0x400133F0: addiu       $t9, $zero, 0x44
    ctx->r25 = ADD32(0, 0X44);
    // 0x400133F4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x400133F8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x400133FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40013400: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x40013404: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    // 0x40013408: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x4001340C: jal         0x40012F08
    // 0x40013410: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    ovl_actor_main_12F08(rdram, ctx);
        goto after_26;
    // 0x40013410: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_26:
    // 0x40013414: b           L_4001381C
    // 0x40013418: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_4001381C;
    // 0x40013418: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_4001341C:
    // 0x4001341C: slti        $at, $s2, 0x48
    ctx->r1 = SIGNED(ctx->r18) < 0X48 ? 1 : 0;
    // 0x40013420: beq         $at, $zero, L_4001345C
    if (ctx->r1 == 0) {
        // 0x40013424: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4001345C;
    }
    // 0x40013424: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40013428: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001342C: lwc1        $f18, -0x1090($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1090);
    // 0x40013430: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x40013434: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x40013438: addiu       $t0, $zero, 0x48
    ctx->r8 = ADD32(0, 0X48);
    // 0x4001343C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x40013440: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x40013444: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    // 0x40013448: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x4001344C: jal         0x40012F08
    // 0x40013450: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_12F08(rdram, ctx);
        goto after_27;
    // 0x40013450: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_27:
    // 0x40013454: b           L_4001381C
    // 0x40013458: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_4001381C;
    // 0x40013458: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_4001345C:
    // 0x4001345C: slti        $at, $s2, 0x4C
    ctx->r1 = SIGNED(ctx->r18) < 0X4C ? 1 : 0;
    // 0x40013460: beq         $at, $zero, L_400134A0
    if (ctx->r1 == 0) {
        // 0x40013464: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_400134A0;
    }
    // 0x40013464: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40013468: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x4001346C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x40013470: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x40013474: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x40013478: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4001347C: addiu       $t1, $zero, 0x4C
    ctx->r9 = ADD32(0, 0X4C);
    // 0x40013480: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x40013484: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x40013488: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    // 0x4001348C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x40013490: jal         0x40012F08
    // 0x40013494: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    ovl_actor_main_12F08(rdram, ctx);
        goto after_28;
    // 0x40013494: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_28:
    // 0x40013498: b           L_4001381C
    // 0x4001349C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_4001381C;
    // 0x4001349C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_400134A0:
    // 0x400134A0: slti        $at, $s2, 0x4F
    ctx->r1 = SIGNED(ctx->r18) < 0X4F ? 1 : 0;
    // 0x400134A4: beq         $at, $zero, L_400134E8
    if (ctx->r1 == 0) {
        // 0x400134A8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_400134E8;
    }
    // 0x400134A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400134AC: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x400134B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x400134B4: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x400134B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x400134BC: lui         $a3, 0x41FC
    ctx->r7 = S32(0X41FC << 16);
    // 0x400134C0: addiu       $t2, $zero, 0x4F
    ctx->r10 = ADD32(0, 0X4F);
    // 0x400134C4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x400134C8: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x400134CC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x400134D0: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    // 0x400134D4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x400134D8: jal         0x40012F08
    // 0x400134DC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    ovl_actor_main_12F08(rdram, ctx);
        goto after_29;
    // 0x400134DC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_29:
    // 0x400134E0: b           L_4001381C
    // 0x400134E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_4001381C;
    // 0x400134E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_400134E8:
    // 0x400134E8: slti        $at, $s2, 0x53
    ctx->r1 = SIGNED(ctx->r18) < 0X53 ? 1 : 0;
    // 0x400134EC: beq         $at, $zero, L_4001352C
    if (ctx->r1 == 0) {
        // 0x400134F0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4001352C;
    }
    // 0x400134F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400134F4: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400134F8: lwc1        $f18, -0x108C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X108C);
    // 0x400134FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x40013500: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    // 0x40013504: addiu       $t3, $zero, 0x53
    ctx->r11 = ADD32(0, 0X53);
    // 0x40013508: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x4001350C: ori         $a3, $a3, 0x4CCD
    ctx->r7 = ctx->r7 | 0X4CCD;
    // 0x40013510: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x40013514: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    // 0x40013518: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x4001351C: jal         0x40012F08
    // 0x40013520: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_12F08(rdram, ctx);
        goto after_30;
    // 0x40013520: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_30:
    // 0x40013524: b           L_4001381C
    // 0x40013528: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_4001381C;
    // 0x40013528: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_4001352C:
    // 0x4001352C: slti        $at, $s2, 0x57
    ctx->r1 = SIGNED(ctx->r18) < 0X57 ? 1 : 0;
    // 0x40013530: beq         $at, $zero, L_40013570
    if (ctx->r1 == 0) {
        // 0x40013534: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_40013570;
    }
    // 0x40013534: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40013538: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x4001353C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x40013540: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x40013544: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x40013548: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4001354C: addiu       $t4, $zero, 0x57
    ctx->r12 = ADD32(0, 0X57);
    // 0x40013550: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x40013554: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x40013558: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    // 0x4001355C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x40013560: jal         0x40012F08
    // 0x40013564: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    ovl_actor_main_12F08(rdram, ctx);
        goto after_31;
    // 0x40013564: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_31:
    // 0x40013568: b           L_4001381C
    // 0x4001356C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_4001381C;
    // 0x4001356C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_40013570:
    // 0x40013570: slti        $at, $s2, 0x5A
    ctx->r1 = SIGNED(ctx->r18) < 0X5A ? 1 : 0;
    // 0x40013574: beq         $at, $zero, L_400135B8
    if (ctx->r1 == 0) {
        // 0x40013578: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_400135B8;
    }
    // 0x40013578: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4001357C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40013580: lwc1        $f10, -0x1088($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1088);
    // 0x40013584: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x40013588: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4001358C: lui         $a3, 0x41FC
    ctx->r7 = S32(0X41FC << 16);
    // 0x40013590: addiu       $t5, $zero, 0x5A
    ctx->r13 = ADD32(0, 0X5A);
    // 0x40013594: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x40013598: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x4001359C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x400135A0: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    // 0x400135A4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x400135A8: jal         0x40012F08
    // 0x400135AC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    ovl_actor_main_12F08(rdram, ctx);
        goto after_32;
    // 0x400135AC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_32:
    // 0x400135B0: b           L_4001381C
    // 0x400135B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_4001381C;
    // 0x400135B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_400135B8:
    // 0x400135B8: slti        $at, $s2, 0x5E
    ctx->r1 = SIGNED(ctx->r18) < 0X5E ? 1 : 0;
    // 0x400135BC: beq         $at, $zero, L_400135F8
    if (ctx->r1 == 0) {
        // 0x400135C0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_400135F8;
    }
    // 0x400135C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400135C4: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400135C8: lwc1        $f18, -0x1084($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1084);
    // 0x400135CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x400135D0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x400135D4: addiu       $t6, $zero, 0x5E
    ctx->r14 = ADD32(0, 0X5E);
    // 0x400135D8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x400135DC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x400135E0: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    // 0x400135E4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x400135E8: jal         0x40012F08
    // 0x400135EC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_12F08(rdram, ctx);
        goto after_33;
    // 0x400135EC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_33:
    // 0x400135F0: b           L_4001381C
    // 0x400135F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_4001381C;
    // 0x400135F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_400135F8:
    // 0x400135F8: slti        $at, $s2, 0x62
    ctx->r1 = SIGNED(ctx->r18) < 0X62 ? 1 : 0;
    // 0x400135FC: beq         $at, $zero, L_4001363C
    if (ctx->r1 == 0) {
        // 0x40013600: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4001363C;
    }
    // 0x40013600: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40013604: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x40013608: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4001360C: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x40013610: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x40013614: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x40013618: addiu       $t7, $zero, 0x62
    ctx->r15 = ADD32(0, 0X62);
    // 0x4001361C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x40013620: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x40013624: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    // 0x40013628: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x4001362C: jal         0x40012F08
    // 0x40013630: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    ovl_actor_main_12F08(rdram, ctx);
        goto after_34;
    // 0x40013630: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_34:
    // 0x40013634: b           L_4001381C
    // 0x40013638: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_4001381C;
    // 0x40013638: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_4001363C:
    // 0x4001363C: slti        $at, $s2, 0x66
    ctx->r1 = SIGNED(ctx->r18) < 0X66 ? 1 : 0;
    // 0x40013640: beq         $at, $zero, L_40013684
    if (ctx->r1 == 0) {
        // 0x40013644: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_40013684;
    }
    // 0x40013644: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40013648: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x4001364C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x40013650: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x40013654: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x40013658: lui         $a3, 0x41FC
    ctx->r7 = S32(0X41FC << 16);
    // 0x4001365C: addiu       $t8, $zero, 0x66
    ctx->r24 = ADD32(0, 0X66);
    // 0x40013660: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x40013664: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x40013668: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x4001366C: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    // 0x40013670: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x40013674: jal         0x40012F08
    // 0x40013678: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    ovl_actor_main_12F08(rdram, ctx);
        goto after_35;
    // 0x40013678: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_35:
    // 0x4001367C: b           L_4001381C
    // 0x40013680: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_4001381C;
    // 0x40013680: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_40013684:
    // 0x40013684: slti        $at, $s2, 0x6B
    ctx->r1 = SIGNED(ctx->r18) < 0X6B ? 1 : 0;
    // 0x40013688: beq         $at, $zero, L_400136C8
    if (ctx->r1 == 0) {
        // 0x4001368C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_400136C8;
    }
    // 0x4001368C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40013690: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40013694: lwc1        $f18, -0x1080($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1080);
    // 0x40013698: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4001369C: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    // 0x400136A0: addiu       $t9, $zero, 0x6B
    ctx->r25 = ADD32(0, 0X6B);
    // 0x400136A4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x400136A8: ori         $a3, $a3, 0x4CCD
    ctx->r7 = ctx->r7 | 0X4CCD;
    // 0x400136AC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x400136B0: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    // 0x400136B4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x400136B8: jal         0x40012F08
    // 0x400136BC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_12F08(rdram, ctx);
        goto after_36;
    // 0x400136BC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_36:
    // 0x400136C0: b           L_4001381C
    // 0x400136C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_4001381C;
    // 0x400136C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_400136C8:
    // 0x400136C8: slti        $at, $s2, 0x6F
    ctx->r1 = SIGNED(ctx->r18) < 0X6F ? 1 : 0;
    // 0x400136CC: beq         $at, $zero, L_4001370C
    if (ctx->r1 == 0) {
        // 0x400136D0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4001370C;
    }
    // 0x400136D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400136D4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x400136D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x400136DC: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x400136E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x400136E4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x400136E8: addiu       $t0, $zero, 0x6F
    ctx->r8 = ADD32(0, 0X6F);
    // 0x400136EC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x400136F0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x400136F4: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    // 0x400136F8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x400136FC: jal         0x40012F08
    // 0x40013700: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    ovl_actor_main_12F08(rdram, ctx);
        goto after_37;
    // 0x40013700: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_37:
    // 0x40013704: b           L_4001381C
    // 0x40013708: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_4001381C;
    // 0x40013708: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_4001370C:
    // 0x4001370C: slti        $at, $s2, 0x71
    ctx->r1 = SIGNED(ctx->r18) < 0X71 ? 1 : 0;
    // 0x40013710: beq         $at, $zero, L_40013750
    if (ctx->r1 == 0) {
        // 0x40013714: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_40013750;
    }
    // 0x40013714: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40013718: lui         $at, 0x4366
    ctx->r1 = S32(0X4366 << 16);
    // 0x4001371C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x40013720: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x40013724: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x40013728: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4001372C: addiu       $t1, $zero, 0x71
    ctx->r9 = ADD32(0, 0X71);
    // 0x40013730: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x40013734: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x40013738: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    // 0x4001373C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x40013740: jal         0x40012F08
    // 0x40013744: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    ovl_actor_main_12F08(rdram, ctx);
        goto after_38;
    // 0x40013744: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_38:
    // 0x40013748: b           L_4001381C
    // 0x4001374C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_4001381C;
    // 0x4001374C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_40013750:
    // 0x40013750: slti        $at, $s2, 0x79
    ctx->r1 = SIGNED(ctx->r18) < 0X79 ? 1 : 0;
    // 0x40013754: beq         $at, $zero, L_40013794
    if (ctx->r1 == 0) {
        // 0x40013758: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_40013794;
    }
    // 0x40013758: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4001375C: lui         $at, 0x433E
    ctx->r1 = S32(0X433E << 16);
    // 0x40013760: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x40013764: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x40013768: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4001376C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x40013770: addiu       $t2, $zero, 0x79
    ctx->r10 = ADD32(0, 0X79);
    // 0x40013774: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x40013778: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x4001377C: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    // 0x40013780: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x40013784: jal         0x40012F08
    // 0x40013788: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_12F08(rdram, ctx);
        goto after_39;
    // 0x40013788: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_39:
    // 0x4001378C: b           L_4001381C
    // 0x40013790: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_4001381C;
    // 0x40013790: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_40013794:
    // 0x40013794: slti        $at, $s2, 0x7A
    ctx->r1 = SIGNED(ctx->r18) < 0X7A ? 1 : 0;
    // 0x40013798: beq         $at, $zero, L_400137D8
    if (ctx->r1 == 0) {
        // 0x4001379C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_400137D8;
    }
    // 0x4001379C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400137A0: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x400137A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x400137A8: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x400137AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x400137B0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x400137B4: addiu       $t3, $zero, 0x7A
    ctx->r11 = ADD32(0, 0X7A);
    // 0x400137B8: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x400137BC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x400137C0: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    // 0x400137C4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x400137C8: jal         0x40012F08
    // 0x400137CC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    ovl_actor_main_12F08(rdram, ctx);
        goto after_40;
    // 0x400137CC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_40:
    // 0x400137D0: b           L_4001381C
    // 0x400137D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_4001381C;
    // 0x400137D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_400137D8:
    // 0x400137D8: slti        $at, $s2, 0x7E
    ctx->r1 = SIGNED(ctx->r18) < 0X7E ? 1 : 0;
    // 0x400137DC: beq         $at, $zero, L_40013818
    if (ctx->r1 == 0) {
        // 0x400137E0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_40013818;
    }
    // 0x400137E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400137E4: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x400137E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x400137EC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x400137F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x400137F4: lui         $a3, 0x41FC
    ctx->r7 = S32(0X41FC << 16);
    // 0x400137F8: addiu       $t4, $zero, 0x7E
    ctx->r12 = ADD32(0, 0X7E);
    // 0x400137FC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x40013800: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x40013804: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x40013808: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    // 0x4001380C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x40013810: jal         0x40012F08
    // 0x40013814: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    ovl_actor_main_12F08(rdram, ctx);
        goto after_41;
    // 0x40013814: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_41:
L_40013818:
    // 0x40013818: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_4001381C:
    // 0x4001381C: jal         0x400128E4
    // 0x40013820: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    ovl_actor_main_128E4(rdram, ctx);
        goto after_42;
    // 0x40013820: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    after_42:
L_40013824:
    // 0x40013824: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x40013828: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x4001382C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x40013830: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x40013834: jr          $ra
    // 0x40013838: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x40013838: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_actor_main_1383C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001383C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40013840: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40013844: bne         $a1, $at, L_40013860
    if (ctx->r5 != ctx->r1) {
        // 0x40013848: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40013860;
    }
    // 0x40013848: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4001384C: addiu       $a1, $zero, 0x587
    ctx->r5 = ADD32(0, 0X587);
    // 0x40013850: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40013854: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40013858: jal         0x40008D64
    // 0x4001385C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x4001385C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_40013860:
    // 0x40013860: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40013864: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40013868: jr          $ra
    // 0x4001386C: nop

    return;
    // 0x4001386C: nop

;}
RECOMP_FUNC void ovl_actor_main_13870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013870: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40013874: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40013878: beq         $a1, $at, L_40013894
    if (ctx->r5 == ctx->r1) {
        // 0x4001387C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40013894;
    }
    // 0x4001387C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40013880: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x40013884: beq         $a1, $at, L_400138B0
    if (ctx->r5 == ctx->r1) {
        // 0x40013888: nop
    
            goto L_400138B0;
    }
    // 0x40013888: nop

    // 0x4001388C: b           L_400138FC
    // 0x40013890: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_400138FC;
    // 0x40013890: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40013894:
    // 0x40013894: addiu       $a1, $zero, 0x588
    ctx->r5 = ADD32(0, 0X588);
    // 0x40013898: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001389C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400138A0: jal         0x40008D64
    // 0x400138A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x400138A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x400138A8: b           L_400138FC
    // 0x400138AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_400138FC;
    // 0x400138AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400138B0:
    // 0x400138B0: lhu         $t6, 0x20($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X20);
    // 0x400138B4: addiu       $a1, $zero, 0x588
    ctx->r5 = ADD32(0, 0X588);
    // 0x400138B8: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x400138BC: bne         $t7, $zero, L_400138EC
    if (ctx->r15 != 0) {
        // 0x400138C0: lui         $a2, 0xBF80
        ctx->r6 = S32(0XBF80 << 16);
            goto L_400138EC;
    }
    // 0x400138C0: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    // 0x400138C4: lw          $t8, 0xCC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XCC);
    // 0x400138C8: addiu       $a1, $zero, 0x588
    ctx->r5 = ADD32(0, 0X588);
    // 0x400138CC: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x400138D0: sw          $t9, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r25;
    // 0x400138D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x400138D8: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    // 0x400138DC: jal         0x40008D64
    // 0x400138E0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_1;
    // 0x400138E0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_1:
    // 0x400138E4: b           L_400138FC
    // 0x400138E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_400138FC;
    // 0x400138E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400138EC:
    // 0x400138EC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400138F0: jal         0x40008D64
    // 0x400138F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_2;
    // 0x400138F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x400138F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400138FC:
    // 0x400138FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40013900: jr          $ra
    // 0x40013904: nop

    return;
    // 0x40013904: nop

;}
RECOMP_FUNC void ovl_actor_main_13908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013908: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4001390C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40013910: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40013914: bne         $a1, $at, L_40013930
    if (ctx->r5 != ctx->r1) {
        // 0x40013918: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_40013930;
    }
    // 0x40013918: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4001391C: addiu       $a1, $zero, 0x57B
    ctx->r5 = ADD32(0, 0X57B);
    // 0x40013920: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40013924: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40013928: jal         0x40008D64
    // 0x4001392C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x4001392C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_40013930:
    // 0x40013930: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40013934: jal         0x40009E78
    // 0x40013938: nop

    ovl_actor_main_9E78(rdram, ctx);
        goto after_1;
    // 0x40013938: nop

    after_1:
    // 0x4001393C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40013940: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40013944: jr          $ra
    // 0x40013948: nop

    return;
    // 0x40013948: nop

;}
RECOMP_FUNC void ovl_actor_main_1394C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001394C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40013950: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40013954: beq         $a1, $at, L_40013970
    if (ctx->r5 == ctx->r1) {
        // 0x40013958: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40013970;
    }
    // 0x40013958: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4001395C: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x40013960: beq         $a1, $at, L_400139C0
    if (ctx->r5 == ctx->r1) {
        // 0x40013964: nop
    
            goto L_400139C0;
    }
    // 0x40013964: nop

    // 0x40013968: b           L_400139CC
    // 0x4001396C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_400139CC;
    // 0x4001396C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40013970:
    // 0x40013970: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x40013974: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40013978: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001397C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x40013980: jal         0x40008D20
    // 0x40013984: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x40013984: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x40013988: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4001398C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x40013990: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x40013994: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x40013998: bne         $t6, $at, L_400139B0
    if (ctx->r14 != ctx->r1) {
        // 0x4001399C: addiu       $a1, $zero, 0x3A6
        ctx->r5 = ADD32(0, 0X3A6);
            goto L_400139B0;
    }
    // 0x4001399C: addiu       $a1, $zero, 0x3A6
    ctx->r5 = ADD32(0, 0X3A6);
    // 0x400139A0: jal         0x4000115C
    // 0x400139A4: addiu       $a1, $zero, 0x3BB
    ctx->r5 = ADD32(0, 0X3BB);
    ovl_actor_main_115C(rdram, ctx);
        goto after_1;
    // 0x400139A4: addiu       $a1, $zero, 0x3BB
    ctx->r5 = ADD32(0, 0X3BB);
    after_1:
    // 0x400139A8: b           L_400139CC
    // 0x400139AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_400139CC;
    // 0x400139AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400139B0:
    // 0x400139B0: jal         0x4000115C
    // 0x400139B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_2;
    // 0x400139B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x400139B8: b           L_400139CC
    // 0x400139BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_400139CC;
    // 0x400139BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400139C0:
    // 0x400139C0: jal         0x4000E5C0
    // 0x400139C4: nop

    ovl_actor_main_E5C0(rdram, ctx);
        goto after_3;
    // 0x400139C4: nop

    after_3:
    // 0x400139C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400139CC:
    // 0x400139CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x400139D0: jr          $ra
    // 0x400139D4: nop

    return;
    // 0x400139D4: nop

;}
RECOMP_FUNC void ovl_actor_main_139D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400139D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x400139DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400139E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400139E4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x400139E8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x400139EC: beq         $a1, $at, L_40013A08
    if (ctx->r5 == ctx->r1) {
        // 0x400139F0: sw          $a2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r6;
            goto L_40013A08;
    }
    // 0x400139F0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x400139F4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x400139F8: beq         $a1, $at, L_40013A34
    if (ctx->r5 == ctx->r1) {
        // 0x400139FC: addiu       $a2, $zero, 0x0
        ctx->r6 = ADD32(0, 0X0);
            goto L_40013A34;
    }
    // 0x400139FC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40013A00: b           L_40013A50
    // 0x40013A04: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
        goto L_40013A50;
    // 0x40013A04: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
L_40013A08:
    // 0x40013A08: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40013A0C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x40013A10: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40013A14: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40013A18: jal         0x40008D20
    // 0x40013A1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x40013A1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40013A20: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40013A24: jal         0x40001A8C
    // 0x40013A28: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x40013A28: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_1:
    // 0x40013A2C: b           L_40013A50
    // 0x40013A30: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
        goto L_40013A50;
    // 0x40013A30: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
L_40013A34:
    // 0x40013A34: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40013A38: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x40013A3C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x40013A40: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x40013A44: jal         0x40008D20
    // 0x40013A48: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D20(rdram, ctx);
        goto after_2;
    // 0x40013A48: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
    // 0x40013A4C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
L_40013A50:
    // 0x40013A50: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40013A54: slti        $at, $t8, 0xF
    ctx->r1 = SIGNED(ctx->r24) < 0XF ? 1 : 0;
    // 0x40013A58: bne         $at, $zero, L_40013A70
    if (ctx->r1 != 0) {
        // 0x40013A5C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40013A70;
    }
    // 0x40013A5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40013A60: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x40013A64: jal         0x40010A44
    // 0x40013A68: nop

    ovl_actor_main_10A44(rdram, ctx);
        goto after_3;
    // 0x40013A68: nop

    after_3:
    // 0x40013A6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40013A70:
    // 0x40013A70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40013A74: jr          $ra
    // 0x40013A78: nop

    return;
    // 0x40013A78: nop

;}
RECOMP_FUNC void ovl_actor_main_13A7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013A7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40013A80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40013A84: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x40013A88: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    // 0x40013A8C: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
    // 0x40013A90: jal         0x40001A8C
    // 0x40013A94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_0;
    // 0x40013A94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x40013A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40013A9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40013AA0: jr          $ra
    // 0x40013AA4: nop

    return;
    // 0x40013AA4: nop

;}
RECOMP_FUNC void ovl_actor_main_13AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013AA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40013AAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40013AB0: jal         0x400139D8
    // 0x40013AB4: addiu       $a2, $zero, 0xF0
    ctx->r6 = ADD32(0, 0XF0);
    ovl_actor_main_139D8(rdram, ctx);
        goto after_0;
    // 0x40013AB4: addiu       $a2, $zero, 0xF0
    ctx->r6 = ADD32(0, 0XF0);
    after_0:
    // 0x40013AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40013ABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40013AC0: jr          $ra
    // 0x40013AC4: nop

    return;
    // 0x40013AC4: nop

;}
RECOMP_FUNC void ovl_actor_main_13AC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013AC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40013ACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40013AD0: jal         0x40013A7C
    // 0x40013AD4: addiu       $a1, $zero, 0x3000
    ctx->r5 = ADD32(0, 0X3000);
    ovl_actor_main_13A7C(rdram, ctx);
        goto after_0;
    // 0x40013AD4: addiu       $a1, $zero, 0x3000
    ctx->r5 = ADD32(0, 0X3000);
    after_0:
    // 0x40013AD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40013ADC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40013AE0: jr          $ra
    // 0x40013AE4: nop

    return;
    // 0x40013AE4: nop

;}
RECOMP_FUNC void ovl_actor_main_13AE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013AE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40013AEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40013AF0: jal         0x400139D8
    // 0x40013AF4: addiu       $a2, $zero, 0xB4
    ctx->r6 = ADD32(0, 0XB4);
    ovl_actor_main_139D8(rdram, ctx);
        goto after_0;
    // 0x40013AF4: addiu       $a2, $zero, 0xB4
    ctx->r6 = ADD32(0, 0XB4);
    after_0:
    // 0x40013AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40013AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40013B00: jr          $ra
    // 0x40013B04: nop

    return;
    // 0x40013B04: nop

;}
RECOMP_FUNC void ovl_actor_main_13B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013B08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40013B0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40013B10: jal         0x40013A7C
    // 0x40013B14: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    ovl_actor_main_13A7C(rdram, ctx);
        goto after_0;
    // 0x40013B14: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    after_0:
    // 0x40013B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40013B1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40013B20: jr          $ra
    // 0x40013B24: nop

    return;
    // 0x40013B24: nop

;}
RECOMP_FUNC void ovl_actor_main_13B28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013B28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40013B2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40013B30: jal         0x400139D8
    // 0x40013B34: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    ovl_actor_main_139D8(rdram, ctx);
        goto after_0;
    // 0x40013B34: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_0:
    // 0x40013B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40013B3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40013B40: jr          $ra
    // 0x40013B44: nop

    return;
    // 0x40013B44: nop

;}
RECOMP_FUNC void ovl_actor_main_13B48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013B48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40013B4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40013B50: jal         0x40013A7C
    // 0x40013B54: addiu       $a1, $zero, 0x5000
    ctx->r5 = ADD32(0, 0X5000);
    ovl_actor_main_13A7C(rdram, ctx);
        goto after_0;
    // 0x40013B54: addiu       $a1, $zero, 0x5000
    ctx->r5 = ADD32(0, 0X5000);
    after_0:
    // 0x40013B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40013B5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40013B60: jr          $ra
    // 0x40013B64: nop

    return;
    // 0x40013B64: nop

;}
RECOMP_FUNC void ovl_actor_main_13B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013B68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40013B6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40013B70: jal         0x400139D8
    // 0x40013B74: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    ovl_actor_main_139D8(rdram, ctx);
        goto after_0;
    // 0x40013B74: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_0:
    // 0x40013B78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40013B7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40013B80: jr          $ra
    // 0x40013B84: nop

    return;
    // 0x40013B84: nop

;}
RECOMP_FUNC void ovl_actor_main_13B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013B88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40013B8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40013B90: jal         0x40013A7C
    // 0x40013B94: addiu       $a1, $zero, 0x6000
    ctx->r5 = ADD32(0, 0X6000);
    ovl_actor_main_13A7C(rdram, ctx);
        goto after_0;
    // 0x40013B94: addiu       $a1, $zero, 0x6000
    ctx->r5 = ADD32(0, 0X6000);
    after_0:
    // 0x40013B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40013B9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40013BA0: jr          $ra
    // 0x40013BA4: nop

    return;
    // 0x40013BA4: nop

;}
RECOMP_FUNC void ovl_actor_main_13BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013BA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40013BAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40013BB0: beq         $a1, $at, L_40013BCC
    if (ctx->r5 == ctx->r1) {
        // 0x40013BB4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_40013BCC;
    }
    // 0x40013BB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40013BB8: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x40013BBC: beq         $a1, $at, L_40013BDC
    if (ctx->r5 == ctx->r1) {
        // 0x40013BC0: nop
    
            goto L_40013BDC;
    }
    // 0x40013BC0: nop

    // 0x40013BC4: b           L_40013BE8
    // 0x40013BC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40013BE8;
    // 0x40013BC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40013BCC:
    // 0x40013BCC: jal         0x40001A8C
    // 0x40013BD0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_0;
    // 0x40013BD0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_0:
    // 0x40013BD4: b           L_40013BE8
    // 0x40013BD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40013BE8;
    // 0x40013BD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40013BDC:
    // 0x40013BDC: jal         0x40010A10
    // 0x40013BE0: nop

    ovl_actor_main_10A10(rdram, ctx);
        goto after_1;
    // 0x40013BE0: nop

    after_1:
    // 0x40013BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40013BE8:
    // 0x40013BE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40013BEC: jr          $ra
    // 0x40013BF0: nop

    return;
    // 0x40013BF0: nop

;}
RECOMP_FUNC void ovl_actor_main_13BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013BF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40013BF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40013BFC: jal         0x40013A7C
    // 0x40013C00: addiu       $a1, $zero, 0x7000
    ctx->r5 = ADD32(0, 0X7000);
    ovl_actor_main_13A7C(rdram, ctx);
        goto after_0;
    // 0x40013C00: addiu       $a1, $zero, 0x7000
    ctx->r5 = ADD32(0, 0X7000);
    after_0:
    // 0x40013C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40013C08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40013C0C: jr          $ra
    // 0x40013C10: nop

    return;
    // 0x40013C10: nop

;}
RECOMP_FUNC void ovl_actor_main_13C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013C14: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40013C18: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x40013C1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40013C20: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40013C24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40013C28: beq         $a1, $at, L_40013C5C
    if (ctx->r5 == ctx->r1) {
        // 0x40013C2C: sw          $a2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r6;
            goto L_40013C5C;
    }
    // 0x40013C2C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x40013C30: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x40013C34: beq         $a1, $at, L_40013C8C
    if (ctx->r5 == ctx->r1) {
        // 0x40013C38: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40013C8C;
    }
    // 0x40013C38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40013C3C: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x40013C40: beq         $a1, $at, L_40013CD8
    if (ctx->r5 == ctx->r1) {
        // 0x40013C44: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40013CD8;
    }
    // 0x40013C44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40013C48: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    // 0x40013C4C: beq         $a1, $at, L_40013CF4
    if (ctx->r5 == ctx->r1) {
        // 0x40013C50: nop
    
            goto L_40013CF4;
    }
    // 0x40013C50: nop

    // 0x40013C54: b           L_40013D00
    // 0x40013C58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40013D00;
    // 0x40013C58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40013C5C:
    // 0x40013C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40013C60: addiu       $a1, $zero, 0x565
    ctx->r5 = ADD32(0, 0X565);
    // 0x40013C64: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40013C68: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40013C6C: jal         0x40008D64
    // 0x40013C70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40013C70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40013C74: addiu       $a1, $s0, 0x324
    ctx->r5 = ADD32(ctx->r16, 0X324);
    // 0x40013C78: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    // 0x40013C7C: jal         0x40011D40
    // 0x40013C80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11D40(rdram, ctx);
        goto after_1;
    // 0x40013C80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x40013C84: b           L_40013D00
    // 0x40013C88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40013D00;
    // 0x40013C88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40013C8C:
    // 0x40013C8C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40013C90: lwc1        $f4, -0x107C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X107C);
    // 0x40013C94: lui         $a2, 0x4325
    ctx->r6 = S32(0X4325 << 16);
    // 0x40013C98: lui         $a3, 0x4302
    ctx->r7 = S32(0X4302 << 16);
    // 0x40013C9C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x40013CA0: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x40013CA4: addiu       $a1, $zero, 0x7D
    ctx->r5 = ADD32(0, 0X7D);
    // 0x40013CA8: jal         0x4000120C
    // 0x40013CAC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_2;
    // 0x40013CAC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x40013CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40013CB4: addiu       $a1, $zero, 0x257
    ctx->r5 = ADD32(0, 0X257);
    // 0x40013CB8: jal         0x4000115C
    // 0x40013CBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_3;
    // 0x40013CBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x40013CC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40013CC4: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x40013CC8: jal         0x40009000
    // 0x40013CCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_4;
    // 0x40013CCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x40013CD0: b           L_40013D00
    // 0x40013CD4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40013D00;
    // 0x40013CD4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40013CD8:
    // 0x40013CD8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x40013CDC: lui         $a3, 0x4325
    ctx->r7 = S32(0X4325 << 16);
    // 0x40013CE0: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x40013CE4: jal         0x4001A598
    // 0x40013CE8: lui         $a2, 0x42A1
    ctx->r6 = S32(0X42A1 << 16);
    ovl_actor_main_1A598(rdram, ctx);
        goto after_5;
    // 0x40013CE8: lui         $a2, 0x42A1
    ctx->r6 = S32(0X42A1 << 16);
    after_5:
    // 0x40013CEC: b           L_40013D00
    // 0x40013CF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40013D00;
    // 0x40013CF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40013CF4:
    // 0x40013CF4: jal         0x4000CB84
    // 0x40013CF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_6;
    // 0x40013CF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x40013CFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40013D00:
    // 0x40013D00: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x40013D04: jr          $ra
    // 0x40013D08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x40013D08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_13D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013D0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40013D10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40013D14: jal         0x40013C14
    // 0x40013D18: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    ovl_actor_main_13C14(rdram, ctx);
        goto after_0;
    // 0x40013D18: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_0:
    // 0x40013D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40013D20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40013D24: jr          $ra
    // 0x40013D28: nop

    return;
    // 0x40013D28: nop

;}
RECOMP_FUNC void ovl_actor_main_13D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013D2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40013D30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40013D34: bne         $a1, $at, L_40013D50
    if (ctx->r5 != ctx->r1) {
        // 0x40013D38: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40013D50;
    }
    // 0x40013D38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40013D3C: addiu       $a1, $zero, 0x566
    ctx->r5 = ADD32(0, 0X566);
    // 0x40013D40: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40013D44: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40013D48: jal         0x40008D64
    // 0x40013D4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40013D4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_40013D50:
    // 0x40013D50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40013D54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40013D58: jr          $ra
    // 0x40013D5C: nop

    return;
    // 0x40013D5C: nop

;}
RECOMP_FUNC void ovl_actor_main_13D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013D60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40013D64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40013D68: beq         $a1, $at, L_40013D8C
    if (ctx->r5 == ctx->r1) {
        // 0x40013D6C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40013D8C;
    }
    // 0x40013D6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40013D70: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x40013D74: beq         $a1, $at, L_40013DB0
    if (ctx->r5 == ctx->r1) {
        // 0x40013D78: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_40013DB0;
    }
    // 0x40013D78: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x40013D7C: beq         $a1, $at, L_40013DA8
    if (ctx->r5 == ctx->r1) {
        // 0x40013D80: nop
    
            goto L_40013DA8;
    }
    // 0x40013D80: nop

    // 0x40013D84: b           L_40013DB4
    // 0x40013D88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40013DB4;
    // 0x40013D88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40013D8C:
    // 0x40013D8C: addiu       $a1, $zero, 0x567
    ctx->r5 = ADD32(0, 0X567);
    // 0x40013D90: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40013D94: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40013D98: jal         0x40008D64
    // 0x40013D9C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40013D9C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40013DA0: b           L_40013DB4
    // 0x40013DA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40013DB4;
    // 0x40013DA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40013DA8:
    // 0x40013DA8: jal         0x4000CB84
    // 0x40013DAC: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_1;
    // 0x40013DAC: nop

    after_1:
L_40013DB0:
    // 0x40013DB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40013DB4:
    // 0x40013DB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40013DB8: jr          $ra
    // 0x40013DBC: nop

    return;
    // 0x40013DBC: nop

;}
RECOMP_FUNC void ovl_actor_main_13DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013DC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40013DC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40013DC8: beq         $a1, $at, L_40013DE4
    if (ctx->r5 == ctx->r1) {
        // 0x40013DCC: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40013DE4;
    }
    // 0x40013DCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40013DD0: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x40013DD4: beq         $a1, $at, L_40013E00
    if (ctx->r5 == ctx->r1) {
        // 0x40013DD8: nop
    
            goto L_40013E00;
    }
    // 0x40013DD8: nop

    // 0x40013DDC: b           L_40013E0C
    // 0x40013DE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40013E0C;
    // 0x40013DE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40013DE4:
    // 0x40013DE4: addiu       $a1, $zero, 0x568
    ctx->r5 = ADD32(0, 0X568);
    // 0x40013DE8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40013DEC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40013DF0: jal         0x40008D64
    // 0x40013DF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40013DF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40013DF8: b           L_40013E0C
    // 0x40013DFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40013E0C;
    // 0x40013DFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40013E00:
    // 0x40013E00: jal         0x4000CB84
    // 0x40013E04: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_1;
    // 0x40013E04: nop

    after_1:
    // 0x40013E08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40013E0C:
    // 0x40013E0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40013E10: jr          $ra
    // 0x40013E14: nop

    return;
    // 0x40013E14: nop

;}
RECOMP_FUNC void ovl_actor_main_13E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013E18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40013E1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40013E20: beq         $a1, $at, L_40013E3C
    if (ctx->r5 == ctx->r1) {
        // 0x40013E24: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40013E3C;
    }
    // 0x40013E24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40013E28: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x40013E2C: beq         $a1, $at, L_40013E58
    if (ctx->r5 == ctx->r1) {
        // 0x40013E30: nop
    
            goto L_40013E58;
    }
    // 0x40013E30: nop

    // 0x40013E34: b           L_40013EA4
    // 0x40013E38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40013EA4;
    // 0x40013E38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40013E3C:
    // 0x40013E3C: addiu       $a1, $zero, 0x569
    ctx->r5 = ADD32(0, 0X569);
    // 0x40013E40: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40013E44: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40013E48: jal         0x40008D64
    // 0x40013E4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40013E4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40013E50: b           L_40013EA4
    // 0x40013E54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40013EA4;
    // 0x40013E54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40013E58:
    // 0x40013E58: lhu         $t6, 0x20($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X20);
    // 0x40013E5C: addiu       $a1, $zero, 0x569
    ctx->r5 = ADD32(0, 0X569);
    // 0x40013E60: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x40013E64: bne         $t7, $zero, L_40013E94
    if (ctx->r15 != 0) {
        // 0x40013E68: lui         $a2, 0xBF80
        ctx->r6 = S32(0XBF80 << 16);
            goto L_40013E94;
    }
    // 0x40013E68: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    // 0x40013E6C: lw          $t8, 0xCC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XCC);
    // 0x40013E70: addiu       $a1, $zero, 0x569
    ctx->r5 = ADD32(0, 0X569);
    // 0x40013E74: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x40013E78: sw          $t9, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r25;
    // 0x40013E7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x40013E80: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    // 0x40013E84: jal         0x40008D64
    // 0x40013E88: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_1;
    // 0x40013E88: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_1:
    // 0x40013E8C: b           L_40013EA4
    // 0x40013E90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40013EA4;
    // 0x40013E90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40013E94:
    // 0x40013E94: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40013E98: jal         0x40008D64
    // 0x40013E9C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_2;
    // 0x40013E9C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x40013EA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40013EA4:
    // 0x40013EA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40013EA8: jr          $ra
    // 0x40013EAC: nop

    return;
    // 0x40013EAC: nop

;}
RECOMP_FUNC void ovl_actor_main_13EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013EB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40013EB4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40013EB8: bne         $a1, $at, L_40013ED4
    if (ctx->r5 != ctx->r1) {
        // 0x40013EBC: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40013ED4;
    }
    // 0x40013EBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40013EC0: addiu       $a1, $zero, 0x56A
    ctx->r5 = ADD32(0, 0X56A);
    // 0x40013EC4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40013EC8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40013ECC: jal         0x40008D64
    // 0x40013ED0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40013ED0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_40013ED4:
    // 0x40013ED4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40013ED8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40013EDC: jr          $ra
    // 0x40013EE0: nop

    return;
    // 0x40013EE0: nop

;}
RECOMP_FUNC void ovl_actor_main_13EE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40013EE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40013EE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40013EEC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x40013EF0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x40013EF4: jal         0x40013C14
    // 0x40013EF8: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    ovl_actor_main_13C14(rdram, ctx);
        goto after_0;
    // 0x40013EF8: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    after_0:
    // 0x40013EFC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x40013F00: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x40013F04: bne         $t6, $at, L_40013F6C
    if (ctx->r14 != ctx->r1) {
        // 0x40013F08: addiu       $a1, $zero, 0x1D
        ctx->r5 = ADD32(0, 0X1D);
            goto L_40013F6C;
    }
    // 0x40013F08: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x40013F0C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x40013F10: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x40013F14: addiu       $v0, $a0, 0x324
    ctx->r2 = ADD32(ctx->r4, 0X324);
    // 0x40013F18: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x40013F1C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x40013F20: lui         $a3, 0x4325
    ctx->r7 = S32(0X4325 << 16);
    // 0x40013F24: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x40013F28: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x40013F2C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x40013F30: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x40013F34: jal         0x4001A534
    // 0x40013F38: lui         $a2, 0x42A1
    ctx->r6 = S32(0X42A1 << 16);
    ovl_actor_main_1A534(rdram, ctx);
        goto after_1;
    // 0x40013F38: lui         $a2, 0x42A1
    ctx->r6 = S32(0X42A1 << 16);
    after_1:
    // 0x40013F3C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x40013F40: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x40013F44: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x40013F48: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x40013F4C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x40013F50: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x40013F54: lui         $a3, 0x4325
    ctx->r7 = S32(0X4325 << 16);
    // 0x40013F58: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x40013F5C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x40013F60: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x40013F64: jal         0x4001A534
    // 0x40013F68: lui         $a2, 0x42A1
    ctx->r6 = S32(0X42A1 << 16);
    ovl_actor_main_1A534(rdram, ctx);
        goto after_2;
    // 0x40013F68: lui         $a2, 0x42A1
    ctx->r6 = S32(0X42A1 << 16);
    after_2:
L_40013F6C:
    // 0x40013F6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40013F70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x40013F74: jr          $ra
    // 0x40013F78: nop

    return;
    // 0x40013F78: nop

;}
