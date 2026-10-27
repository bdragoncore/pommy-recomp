#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_actor_main_2E38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40002E38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40002E3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40002E40: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x40002E44: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x40002E48: slti        $at, $t6, 0x8
    ctx->r1 = SIGNED(ctx->r14) < 0X8 ? 1 : 0;
    // 0x40002E4C: beq         $at, $zero, L_40002F10
    if (ctx->r1 == 0) {
        // 0x40002E50: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40002F10;
    }
    // 0x40002E50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40002E54: lw          $a1, 0xC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XC);
    // 0x40002E58: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x40002E5C: jal         0x40009220
    // 0x40002E60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_9220(rdram, ctx);
        goto after_0;
    // 0x40002E60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x40002E64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40002E68: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x40002E6C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40002E70: bne         $v0, $at, L_40002F10
    if (ctx->r2 != ctx->r1) {
        // 0x40002E74: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40002F10;
    }
    // 0x40002E74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40002E78: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x40002E7C: lw          $t7, 0xC($a2)
    ctx->r15 = MEM_W(ctx->r6, 0XC);
    // 0x40002E80: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x40002E84: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x40002E88: sw          $t7, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r15;
    // 0x40002E8C: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x40002E90: lw          $t1, 0x8($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X8);
    // 0x40002E94: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x40002E98: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x40002E9C: sw          $t1, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r9;
    // 0x40002EA0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x40002EA4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x40002EA8: multu       $t6, $v0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x40002EAC: lw          $t5, 0x10($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X10);
    // 0x40002EB0: nop

    // 0x40002EB4: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x40002EB8: mflo        $t8
    ctx->r24 = lo;
    // 0x40002EBC: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x40002EC0: swc1        $f4, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f4.u32l;
    // 0x40002EC4: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x40002EC8: lw          $t7, 0x10($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X10);
    // 0x40002ECC: multu       $t0, $v0
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x40002ED0: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x40002ED4: mflo        $t2
    ctx->r10 = lo;
    // 0x40002ED8: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x40002EDC: swc1        $f6, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f6.u32l;
    // 0x40002EE0: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x40002EE4: lw          $t1, 0x10($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X10);
    // 0x40002EE8: multu       $t4, $v0
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x40002EEC: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x40002EF0: mflo        $t5
    ctx->r13 = lo;
    // 0x40002EF4: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x40002EF8: swc1        $f8, 0x4C($t6)
    MEM_W(0X4C, ctx->r14) = ctx->f8.u32l;
    // 0x40002EFC: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x40002F00: nop

    // 0x40002F04: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x40002F08: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x40002F0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40002F10:
    // 0x40002F10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40002F14: jr          $ra
    // 0x40002F18: nop

    return;
    // 0x40002F18: nop

;}
RECOMP_FUNC void ovl_actor_main_2F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40002F1C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x40002F20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40002F24: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x40002F28: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x40002F2C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x40002F30: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x40002F34: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x40002F38: nop

    // 0x40002F3C: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x40002F40: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x40002F44: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x40002F48: jal         0x40001258
    // 0x40002F4C: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    ovl_actor_main_1258(rdram, ctx);
        goto after_0;
    // 0x40002F4C: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x40002F50: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x40002F54: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x40002F58: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x40002F5C: nop

    // 0x40002F60: add.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f10.fl;
    // 0x40002F64: jal         0x40001E0C
    // 0x40002F68: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    ovl_actor_main_1E0C(rdram, ctx);
        goto after_1;
    // 0x40002F68: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x40002F6C: jal         0x40001DD4
    // 0x40002F70: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_actor_main_1DD4(rdram, ctx);
        goto after_2;
    // 0x40002F70: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x40002F74: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x40002F78: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x40002F7C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40002F80: lwc1        $f18, 0x28($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X28);
    // 0x40002F84: lwc1        $f17, -0x1BC0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X1BC0);
    // 0x40002F88: lwc1        $f16, -0x1BBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1BBC);
    // 0x40002F8C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x40002F90: mul.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f4.d);
    // 0x40002F94: lwc1        $f8, 0x2C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x40002F98: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x40002F9C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x40002FA0: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    // 0x40002FA4: add.d       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = ctx->f10.d + ctx->f6.d;
    // 0x40002FA8: jal         0x40009134
    // 0x40002FAC: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    ovl_actor_main_9134(rdram, ctx);
        goto after_3;
    // 0x40002FAC: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_3:
    // 0x40002FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40002FB4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x40002FB8: jr          $ra
    // 0x40002FBC: nop

    return;
    // 0x40002FBC: nop

;}
RECOMP_FUNC void ovl_actor_main_2FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40002FC0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x40002FC4: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x40002FC8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x40002FCC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x40002FD0: addiu       $t9, $zero, 0xE
    ctx->r25 = ADD32(0, 0XE);
    // 0x40002FD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40002FD8: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x40002FDC: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x40002FE0: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x40002FE4: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x40002FE8: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    // 0x40002FEC: lw          $t0, 0x10($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X10);
    // 0x40002FF0: addiu       $t6, $sp, 0x1C
    ctx->r14 = ADD32(ctx->r29, 0X1C);
    // 0x40002FF4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x40002FF8: lw          $t1, 0xC($a1)
    ctx->r9 = MEM_W(ctx->r5, 0XC);
    // 0x40002FFC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x40003000: sra         $t2, $t1, 6
    ctx->r10 = S32(SIGNED(ctx->r9) >> 6);
    // 0x40003004: andi        $t3, $t2, 0xF
    ctx->r11 = ctx->r10 & 0XF;
    // 0x40003008: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x4000300C: lw          $t4, 0x10($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X10);
    // 0x40003010: nop

    // 0x40003014: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x40003018: lw          $t5, 0x8($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X8);
    // 0x4000301C: nop

    // 0x40003020: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x40003024: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x40003028: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x4000302C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x40003030: jal         0x40001258
    // 0x40003034: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_1258(rdram, ctx);
        goto after_0;
    // 0x40003034: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x40003038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000303C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x40003040: jr          $ra
    // 0x40003044: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x40003044: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_actor_main_3048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40003048: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4000304C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40003050: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x40003054: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x40003058: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000305C: andi        $t6, $v1, 0x8000
    ctx->r14 = ctx->r3 & 0X8000;
    // 0x40003060: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x40003064: bne         $t6, $zero, L_40003094
    if (ctx->r14 != 0) {
        // 0x40003068: addiu       $a3, $zero, 0x10
        ctx->r7 = ADD32(0, 0X10);
            goto L_40003094;
    }
    // 0x40003068: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x4000306C: sra         $t7, $v1, 6
    ctx->r15 = S32(SIGNED(ctx->r3) >> 6);
    // 0x40003070: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x40003074: beq         $t8, $zero, L_40003098
    if (ctx->r24 == 0) {
        // 0x40003078: addiu       $at, $zero, 0x17
        ctx->r1 = ADD32(0, 0X17);
            goto L_40003098;
    }
    // 0x40003078: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x4000307C: jal         0x40002FC0
    // 0x40003080: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    ovl_actor_main_2FC0(rdram, ctx);
        goto after_0;
    // 0x40003080: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_0:
    // 0x40003084: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x40003088: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x4000308C: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
    // 0x40003090: nop

L_40003094:
    // 0x40003094: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
L_40003098:
    // 0x40003098: beq         $v1, $at, L_400030AC
    if (ctx->r3 == ctx->r1) {
        // 0x4000309C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400030AC;
    }
    // 0x4000309C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400030A0: addiu       $at, $zero, 0x3D7
    ctx->r1 = ADD32(0, 0X3D7);
    // 0x400030A4: bne         $v1, $at, L_400030F8
    if (ctx->r3 != ctx->r1) {
        // 0x400030A8: addiu       $at, $zero, 0x41D
        ctx->r1 = ADD32(0, 0X41D);
            goto L_400030F8;
    }
    // 0x400030A8: addiu       $at, $zero, 0x41D
    ctx->r1 = ADD32(0, 0X41D);
L_400030AC:
    // 0x400030AC: lw          $a1, 0x10($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X10);
    // 0x400030B0: jal         0x40002F1C
    // 0x400030B4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    ovl_actor_main_2F1C(rdram, ctx);
        goto after_1;
    // 0x400030B4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_1:
    // 0x400030B8: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x400030BC: beq         $v0, $zero, L_400030D8
    if (ctx->r2 == 0) {
        // 0x400030C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400030D8;
    }
    // 0x400030C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400030C4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x400030C8: jal         0x40001A8C
    // 0x400030CC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_2;
    // 0x400030CC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_2:
    // 0x400030D0: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x400030D4: nop

L_400030D8:
    // 0x400030D8: lw          $t9, 0x90($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X90);
    // 0x400030DC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x400030E0: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x400030E4: bne         $t0, $zero, L_40003108
    if (ctx->r8 != 0) {
        // 0x400030E8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40003108;
    }
    // 0x400030E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400030EC: b           L_40003104
    // 0x400030F0: sw          $t1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r9;
        goto L_40003104;
    // 0x400030F0: sw          $t1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r9;
    // 0x400030F4: addiu       $at, $zero, 0x41D
    ctx->r1 = ADD32(0, 0X41D);
L_400030F8:
    // 0x400030F8: bne         $v1, $at, L_40003108
    if (ctx->r3 != ctx->r1) {
        // 0x400030FC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40003108;
    }
    // 0x400030FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40003100: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_40003104:
    // 0x40003104: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40003108:
    // 0x40003108: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4000310C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x40003110: jr          $ra
    // 0x40003114: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x40003114: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
;}
RECOMP_FUNC void ovl_actor_main_3118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40003118: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x4000311C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40003120: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x40003124: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x40003128: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000312C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x40003130: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x40003134: beq         $t7, $zero, L_400031C8
    if (ctx->r15 == 0) {
        // 0x40003138: or          $s1, $a0, $zero
        ctx->r17 = ctx->r4 | 0;
            goto L_400031C8;
    }
    // 0x40003138: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x4000313C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40003140: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x40003144: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x40003148: addiu       $a0, $a0, 0x230
    ctx->r4 = ADD32(ctx->r4, 0X230);
    // 0x4000314C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x40003150: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x40003154: jal         0x40001F60
    // 0x40003158: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_1F60(rdram, ctx);
        goto after_0;
    // 0x40003158: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x4000315C: addiu       $a0, $s1, 0xDC
    ctx->r4 = ADD32(ctx->r17, 0XDC);
    // 0x40003160: jal         0x40001F60
    // 0x40003164: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    ovl_actor_main_1F60(rdram, ctx);
        goto after_1;
    // 0x40003164: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_1:
    // 0x40003168: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x4000316C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40003170: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x40003174: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x40003178: jal         0x40001E90
    // 0x4000317C: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    ovl_actor_main_1E90(rdram, ctx);
        goto after_2;
    // 0x4000317C: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    after_2:
    // 0x40003180: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x40003184: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x40003188: beq         $v0, $at, L_40003198
    if (ctx->r2 == ctx->r1) {
        // 0x4000318C: addiu       $at, $zero, 0x3D7
        ctx->r1 = ADD32(0, 0X3D7);
            goto L_40003198;
    }
    // 0x4000318C: addiu       $at, $zero, 0x3D7
    ctx->r1 = ADD32(0, 0X3D7);
    // 0x40003190: bne         $v0, $at, L_400031B0
    if (ctx->r2 != ctx->r1) {
        // 0x40003194: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_400031B0;
    }
    // 0x40003194: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_40003198:
    // 0x40003198: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x4000319C: jal         0x40001FA0
    // 0x400031A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_1FA0(rdram, ctx);
        goto after_3;
    // 0x400031A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x400031A4: b           L_40003208
    // 0x400031A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40003208;
    // 0x400031A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400031AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_400031B0:
    // 0x400031B0: bne         $v0, $at, L_40003204
    if (ctx->r2 != ctx->r1) {
        // 0x400031B4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_40003204;
    }
    // 0x400031B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400031B8: jal         0x40001A8C
    // 0x400031BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_4;
    // 0x400031BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x400031C0: b           L_40003208
    // 0x400031C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40003208;
    // 0x400031C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400031C8:
    // 0x400031C8: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x400031CC: nop

    // 0x400031D0: andi        $t9, $t8, 0x3C0
    ctx->r25 = ctx->r24 & 0X3C0;
    // 0x400031D4: beq         $t9, $zero, L_400031E4
    if (ctx->r25 == 0) {
        // 0x400031D8: nop
    
            goto L_400031E4;
    }
    // 0x400031D8: nop

    // 0x400031DC: beq         $a2, $zero, L_40003208
    if (ctx->r6 == 0) {
        // 0x400031E0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40003208;
    }
    // 0x400031E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400031E4:
    // 0x400031E4: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x400031E8: jal         0x40001FA0
    // 0x400031EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_1FA0(rdram, ctx);
        goto after_5;
    // 0x400031EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x400031F0: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x400031F4: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x400031F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400031FC: jal         0x40001E90
    // 0x40003200: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_actor_main_1E90(rdram, ctx);
        goto after_6;
    // 0x40003200: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
L_40003204:
    // 0x40003204: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40003208:
    // 0x40003208: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x4000320C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x40003210: jr          $ra
    // 0x40003214: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x40003214: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_actor_main_3218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40003218: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4000321C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40003220: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x40003224: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x40003228: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x4000322C: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x40003230: subu        $v1, $t7, $a1
    ctx->r3 = SUB32(ctx->r15, ctx->r5);
    // 0x40003234: bgez        $v1, L_40003240
    if (SIGNED(ctx->r3) >= 0) {
        // 0x40003238: addiu       $a1, $sp, 0x1C
        ctx->r5 = ADD32(ctx->r29, 0X1C);
            goto L_40003240;
    }
    // 0x40003238: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x4000323C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_40003240:
    // 0x40003240: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x40003244: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x40003248: lw          $a0, 0x1C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X1C);
    // 0x4000324C: jal         0x400007F0
    // 0x40003250: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    ovl_actor_main_7F0(rdram, ctx);
        goto after_0;
    // 0x40003250: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x40003254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40003258: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x4000325C: jr          $ra
    // 0x40003260: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x40003260: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_3264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40003264: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40003268: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000326C: lw          $v0, 0x318($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X318);
    // 0x40003270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x40003274: slti        $at, $v0, 0x2A
    ctx->r1 = SIGNED(ctx->r2) < 0X2A ? 1 : 0;
    // 0x40003278: bne         $at, $zero, L_40003288
    if (ctx->r1 != 0) {
        // 0x4000327C: addiu       $a2, $zero, 0x2
        ctx->r6 = ADD32(0, 0X2);
            goto L_40003288;
    }
    // 0x4000327C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x40003280: slti        $at, $v0, 0x34
    ctx->r1 = SIGNED(ctx->r2) < 0X34 ? 1 : 0;
    // 0x40003284: bne         $at, $zero, L_40003294
    if (ctx->r1 != 0) {
        // 0x40003288: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_40003294;
    }
L_40003288:
    // 0x40003288: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x4000328C: bne         $v0, $at, L_400032A0
    if (ctx->r2 != ctx->r1) {
        // 0x40003290: addiu       $at, $zero, 0x34
        ctx->r1 = ADD32(0, 0X34);
            goto L_400032A0;
    }
    // 0x40003290: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
L_40003294:
    // 0x40003294: b           L_400032EC
    // 0x40003298: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
        goto L_400032EC;
    // 0x40003298: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x4000329C: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
L_400032A0:
    // 0x400032A0: beq         $v0, $at, L_400032B0
    if (ctx->r2 == ctx->r1) {
        // 0x400032A4: addiu       $at, $zero, 0x35
        ctx->r1 = ADD32(0, 0X35);
            goto L_400032B0;
    }
    // 0x400032A4: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
    // 0x400032A8: bne         $v0, $at, L_400032BC
    if (ctx->r2 != ctx->r1) {
        // 0x400032AC: slti        $at, $v0, 0x16
        ctx->r1 = SIGNED(ctx->r2) < 0X16 ? 1 : 0;
            goto L_400032BC;
    }
    // 0x400032AC: slti        $at, $v0, 0x16
    ctx->r1 = SIGNED(ctx->r2) < 0X16 ? 1 : 0;
L_400032B0:
    // 0x400032B0: b           L_400032EC
    // 0x400032B4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
        goto L_400032EC;
    // 0x400032B4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x400032B8: slti        $at, $v0, 0x16
    ctx->r1 = SIGNED(ctx->r2) < 0X16 ? 1 : 0;
L_400032BC:
    // 0x400032BC: bne         $at, $zero, L_400032E8
    if (ctx->r1 != 0) {
        // 0x400032C0: slti        $at, $v0, 0x24
        ctx->r1 = SIGNED(ctx->r2) < 0X24 ? 1 : 0;
            goto L_400032E8;
    }
    // 0x400032C0: slti        $at, $v0, 0x24
    ctx->r1 = SIGNED(ctx->r2) < 0X24 ? 1 : 0;
    // 0x400032C4: beq         $at, $zero, L_400032E8
    if (ctx->r1 == 0) {
        // 0x400032C8: sll         $t6, $v0, 1
        ctx->r14 = S32(ctx->r2 << 1);
            goto L_400032E8;
    }
    // 0x400032C8: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x400032CC: lui         $t7, 0x4002
    ctx->r15 = S32(0X4002 << 16);
    // 0x400032D0: addiu       $t7, $t7, -0x2960
    ctx->r15 = ADD32(ctx->r15, -0X2960);
    // 0x400032D4: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x400032D8: lbu         $a2, -0x2C($v1)
    ctx->r6 = MEM_BU(ctx->r3, -0X2C);
    // 0x400032DC: lbu         $a1, -0x2B($v1)
    ctx->r5 = MEM_BU(ctx->r3, -0X2B);
    // 0x400032E0: b           L_400032EC
    // 0x400032E4: nop

        goto L_400032EC;
    // 0x400032E4: nop

L_400032E8:
    // 0x400032E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_400032EC:
    // 0x400032EC: beq         $a1, $zero, L_40003310
    if (ctx->r5 == 0) {
        // 0x400032F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40003310;
    }
    // 0x400032F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400032F4: jal         0x40003218
    // 0x400032F8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_actor_main_3218(rdram, ctx);
        goto after_0;
    // 0x400032F8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x400032FC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x40003300: bne         $v0, $zero, L_40003310
    if (ctx->r2 != 0) {
        // 0x40003304: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40003310;
    }
    // 0x40003304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40003308: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4000330C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40003310:
    // 0x40003310: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40003314: jr          $ra
    // 0x40003318: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    return;
    // 0x40003318: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
;}
RECOMP_FUNC void ovl_actor_main_331C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000331C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40003320: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40003324: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x40003328: nop

    // 0x4000332C: swc1        $f4, 0x304($a0)
    MEM_W(0X304, ctx->r4) = ctx->f4.u32l;
    // 0x40003330: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x40003334: nop

    // 0x40003338: swc1        $f6, 0x308($a0)
    MEM_W(0X308, ctx->r4) = ctx->f6.u32l;
    // 0x4000333C: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x40003340: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x40003344: jal         0x40001A8C
    // 0x40003348: swc1        $f8, 0x30C($a0)
    MEM_W(0X30C, ctx->r4) = ctx->f8.u32l;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_0;
    // 0x40003348: swc1        $f8, 0x30C($a0)
    MEM_W(0X30C, ctx->r4) = ctx->f8.u32l;
    after_0:
    // 0x4000334C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40003350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40003354: jr          $ra
    // 0x40003358: nop

    return;
    // 0x40003358: nop

;}
RECOMP_FUNC void ovl_actor_main_335C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000335C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40003360: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40003364: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x40003368: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4000336C: jal         0x40007338
    // 0x40003370: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_7338(rdram, ctx);
        goto after_0;
    // 0x40003370: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x40003374: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40003378: jal         0x40006FF8
    // 0x4000337C: nop

    ovl_actor_main_6FF8(rdram, ctx);
        goto after_1;
    // 0x4000337C: nop

    after_1:
    // 0x40003380: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40003384: jal         0x40006CEC
    // 0x40003388: nop

    ovl_actor_main_6CEC(rdram, ctx);
        goto after_2;
    // 0x40003388: nop

    after_2:
    // 0x4000338C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40003390: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40003394: jr          $ra
    // 0x40003398: nop

    return;
    // 0x40003398: nop

;}
RECOMP_FUNC void ovl_actor_main_339C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000339C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x400033A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400033A4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x400033A8: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x400033AC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x400033B0: beq         $t6, $at, L_40003534
    if (ctx->r14 == ctx->r1) {
        // 0x400033B4: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_40003534;
    }
    // 0x400033B4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x400033B8: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x400033BC: nop

    // 0x400033C0: sll         $t7, $v0, 10
    ctx->r15 = S32(ctx->r2 << 10);
    // 0x400033C4: bltz        $t7, L_40003534
    if (SIGNED(ctx->r15) < 0) {
        // 0x400033C8: sll         $t8, $v0, 4
        ctx->r24 = S32(ctx->r2 << 4);
            goto L_40003534;
    }
    // 0x400033C8: sll         $t8, $v0, 4
    ctx->r24 = S32(ctx->r2 << 4);
    // 0x400033CC: bltz        $t8, L_40003534
    if (SIGNED(ctx->r24) < 0) {
        // 0x400033D0: lui         $at, 0xC700
        ctx->r1 = S32(0XC700 << 16);
            goto L_40003534;
    }
    // 0x400033D0: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x400033D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x400033D8: lwc1        $f6, 0x18($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X18);
    // 0x400033DC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x400033E0: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x400033E4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x400033E8: bc1t        L_400034AC
    if (c1cs) {
        // 0x400033EC: lui         $at, 0xC040
        ctx->r1 = S32(0XC040 << 16);
            goto L_400034AC;
    }
    // 0x400033EC: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x400033F0: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x400033F4: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x400033F8: jal         0x400006C4
    // 0x400033FC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x400033FC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x40003400: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x40003404: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x40003408: lw          $t0, 0x8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X8);
    // 0x4000340C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x40003410: beq         $t0, $at, L_40003534
    if (ctx->r8 == ctx->r1) {
        // 0x40003414: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_40003534;
    }
    // 0x40003414: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x40003418: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4000341C: lwc1        $f8, 0x18($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X18);
    // 0x40003420: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x40003424: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x40003428: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x4000342C: nop

    // 0x40003430: bc1f        L_40003538
    if (!c1cs) {
        // 0x40003434: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40003538;
    }
    // 0x40003434: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40003438: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000343C: lwc1        $f4, 0x48($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X48);
    // 0x40003440: nop

    // 0x40003444: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x40003448: nop

    // 0x4000344C: bc1t        L_40003538
    if (c1cs) {
        // 0x40003450: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40003538;
    }
    // 0x40003450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40003454: lwc1        $f6, 0x54($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X54);
    // 0x40003458: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x4000345C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x40003460: nop

    // 0x40003464: bc1f        L_4000349C
    if (!c1cs) {
        // 0x40003468: nop
    
            goto L_4000349C;
    }
    // 0x40003468: nop

    // 0x4000346C: lwc1        $f8, 0x58($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X58);
    // 0x40003470: nop

    // 0x40003474: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x40003478: nop

    // 0x4000347C: bc1f        L_4000349C
    if (!c1cs) {
        // 0x40003480: nop
    
            goto L_4000349C;
    }
    // 0x40003480: nop

    // 0x40003484: lwc1        $f10, 0x5C($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X5C);
    // 0x40003488: nop

    // 0x4000348C: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x40003490: nop

    // 0x40003494: bc1t        L_40003538
    if (c1cs) {
        // 0x40003498: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40003538;
    }
    // 0x40003498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000349C:
    // 0x4000349C: jal         0x40001A8C
    // 0x400034A0: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x400034A0: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_1:
    // 0x400034A4: b           L_40003538
    // 0x400034A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40003538;
    // 0x400034A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400034AC:
    // 0x400034AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x400034B0: lwc1        $f18, 0x14($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X14);
    // 0x400034B4: nop

    // 0x400034B8: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x400034BC: nop

    // 0x400034C0: bc1f        L_40003538
    if (!c1cs) {
        // 0x400034C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40003538;
    }
    // 0x400034C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400034C8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x400034CC: lwc1        $f4, 0x48($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X48);
    // 0x400034D0: nop

    // 0x400034D4: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x400034D8: nop

    // 0x400034DC: bc1t        L_40003538
    if (c1cs) {
        // 0x400034E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40003538;
    }
    // 0x400034E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400034E4: lwc1        $f6, 0x54($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X54);
    // 0x400034E8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x400034EC: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x400034F0: nop

    // 0x400034F4: bc1f        L_4000352C
    if (!c1cs) {
        // 0x400034F8: nop
    
            goto L_4000352C;
    }
    // 0x400034F8: nop

    // 0x400034FC: lwc1        $f8, 0x58($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X58);
    // 0x40003500: nop

    // 0x40003504: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x40003508: nop

    // 0x4000350C: bc1f        L_4000352C
    if (!c1cs) {
        // 0x40003510: nop
    
            goto L_4000352C;
    }
    // 0x40003510: nop

    // 0x40003514: lwc1        $f10, 0x5C($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X5C);
    // 0x40003518: nop

    // 0x4000351C: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x40003520: nop

    // 0x40003524: bc1t        L_40003538
    if (c1cs) {
        // 0x40003528: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40003538;
    }
    // 0x40003528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000352C:
    // 0x4000352C: jal         0x40001A8C
    // 0x40003530: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_2;
    // 0x40003530: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_2:
L_40003534:
    // 0x40003534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40003538:
    // 0x40003538: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x4000353C: jr          $ra
    // 0x40003540: nop

    return;
    // 0x40003540: nop

;}
RECOMP_FUNC void ovl_actor_main_3544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40003544: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40003548: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000354C: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x40003550: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x40003554: andi        $t6, $v0, 0x800
    ctx->r14 = ctx->r2 & 0X800;
    // 0x40003558: beq         $t6, $zero, L_40003588
    if (ctx->r14 == 0) {
        // 0x4000355C: addiu       $at, $zero, -0x801
        ctx->r1 = ADD32(0, -0X801);
            goto L_40003588;
    }
    // 0x4000355C: addiu       $at, $zero, -0x801
    ctx->r1 = ADD32(0, -0X801);
    // 0x40003560: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x40003564: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
    // 0x40003568: lw          $a0, 0x1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1C);
    // 0x4000356C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x40003570: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x40003574: jal         0x40000CA0
    // 0x40003578: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_0;
    // 0x40003578: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x4000357C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x40003580: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x40003584: sw          $t8, 0x8C($a3)
    MEM_W(0X8C, ctx->r7) = ctx->r24;
L_40003588:
    // 0x40003588: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000358C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40003590: jr          $ra
    // 0x40003594: nop

    return;
    // 0x40003594: nop

;}
RECOMP_FUNC void ovl_actor_main_3598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40003598: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000359C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400035A0: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x400035A4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x400035A8: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x400035AC: beq         $t7, $zero, L_400036D0
    if (ctx->r15 == 0) {
        // 0x400035B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_400036D0;
    }
    // 0x400035B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400035B4: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x400035B8: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x400035BC: addiu       $t0, $t9, 0x40
    ctx->r8 = ADD32(ctx->r25, 0X40);
    // 0x400035C0: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x400035C4: ori         $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 | 0X8000;
    // 0x400035C8: slt         $at, $t8, $t2
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x400035CC: bne         $at, $zero, L_400035DC
    if (ctx->r1 != 0) {
        // 0x400035D0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_400035DC;
    }
    // 0x400035D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x400035D4: b           L_400035DC
    // 0x400035D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_400035DC;
    // 0x400035D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_400035DC:
    // 0x400035DC: bne         $v0, $zero, L_400036CC
    if (ctx->r2 != 0) {
        // 0x400035E0: lui         $at, 0x4002
        ctx->r1 = S32(0X4002 << 16);
            goto L_400036CC;
    }
    // 0x400035E0: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400035E4: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x400035E8: lwc1        $f4, -0x1BB8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1BB8);
    // 0x400035EC: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x400035F0: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400035F4: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x400035F8: nop

    // 0x400035FC: bc1f        L_400036B0
    if (!c1cs) {
        // 0x40003600: nop
    
            goto L_400036B0;
    }
    // 0x40003600: nop

    // 0x40003604: lwc1        $f6, -0x1BB4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1BB4);
    // 0x40003608: nop

    // 0x4000360C: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x40003610: nop

    // 0x40003614: bc1f        L_400036B0
    if (!c1cs) {
        // 0x40003618: nop
    
            goto L_400036B0;
    }
    // 0x40003618: nop

    // 0x4000361C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x40003620: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x40003624: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x40003628: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x4000362C: nop

    // 0x40003630: bc1f        L_40003650
    if (!c1cs) {
        // 0x40003634: nop
    
            goto L_40003650;
    }
    // 0x40003634: nop

    // 0x40003638: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x4000363C: nop

    // 0x40003640: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
    // 0x40003644: nop

    // 0x40003648: bc1t        L_400036B0
    if (c1cs) {
        // 0x4000364C: nop
    
            goto L_400036B0;
    }
    // 0x4000364C: nop

L_40003650:
    // 0x40003650: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x40003654: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x40003658: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x4000365C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x40003660: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x40003664: jal         0x40007924
    // 0x40003668: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    ovl_actor_main_7924(rdram, ctx);
        goto after_0;
    // 0x40003668: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x4000366C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x40003670: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x40003674: lwc1        $f14, 0x74($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X74);
    // 0x40003678: jal         0x40009134
    // 0x4000367C: lui         $a2, 0x42B2
    ctx->r6 = S32(0X42B2 << 16);
    ovl_actor_main_9134(rdram, ctx);
        goto after_1;
    // 0x4000367C: lui         $a2, 0x42B2
    ctx->r6 = S32(0X42B2 << 16);
    after_1:
    // 0x40003680: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x40003684: beq         $v0, $zero, L_400036B0
    if (ctx->r2 == 0) {
        // 0x40003688: addiu       $at, $zero, -0x801
        ctx->r1 = ADD32(0, -0X801);
            goto L_400036B0;
    }
    // 0x40003688: addiu       $at, $zero, -0x801
    ctx->r1 = ADD32(0, -0X801);
    // 0x4000368C: lw          $t3, 0x90($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X90);
    // 0x40003690: lw          $a0, 0x1C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1C);
    // 0x40003694: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x40003698: sw          $t4, 0x90($a3)
    MEM_W(0X90, ctx->r7) = ctx->r12;
    // 0x4000369C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x400036A0: jal         0x40000CA0
    // 0x400036A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_2;
    // 0x400036A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x400036A8: b           L_400036D0
    // 0x400036AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_400036D0;
    // 0x400036AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400036B0:
    // 0x400036B0: lw          $t5, 0x8C($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X8C);
    // 0x400036B4: nop

    // 0x400036B8: slti        $at, $t5, 0x78
    ctx->r1 = SIGNED(ctx->r13) < 0X78 ? 1 : 0;
    // 0x400036BC: bne         $at, $zero, L_400036D0
    if (ctx->r1 != 0) {
        // 0x400036C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_400036D0;
    }
    // 0x400036C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400036C4: jal         0x40003544
    // 0x400036C8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_actor_main_3544(rdram, ctx);
        goto after_3;
    // 0x400036C8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_3:
L_400036CC:
    // 0x400036CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400036D0:
    // 0x400036D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x400036D4: jr          $ra
    // 0x400036D8: nop

    return;
    // 0x400036D8: nop

;}
RECOMP_FUNC void ovl_actor_main_36DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400036DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x400036E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400036E4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x400036E8: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x400036EC: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x400036F0: addiu       $t8, $t7, 0x40
    ctx->r24 = ADD32(ctx->r15, 0X40);
    // 0x400036F4: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x400036F8: ori         $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 | 0X8000;
    // 0x400036FC: slt         $at, $t6, $t0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x40003700: bne         $at, $zero, L_40003710
    if (ctx->r1 != 0) {
        // 0x40003704: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_40003710;
    }
    // 0x40003704: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x40003708: b           L_40003714
    // 0x4000370C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_40003714;
    // 0x4000370C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_40003710:
    // 0x40003710: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_40003714:
    // 0x40003714: bne         $v0, $zero, L_40003744
    if (ctx->r2 != 0) {
        // 0x40003718: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40003744;
    }
    // 0x40003718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000371C: jal         0x40003048
    // 0x40003720: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_actor_main_3048(rdram, ctx);
        goto after_0;
    // 0x40003720: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x40003724: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x40003728: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x4000372C: beq         $v0, $at, L_40003744
    if (ctx->r2 == ctx->r1) {
        // 0x40003730: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40003744;
    }
    // 0x40003730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40003734: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x40003738: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x4000373C: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x40003740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40003744:
    // 0x40003744: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40003748: jr          $ra
    // 0x4000374C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4000374C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_3750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40003750: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x40003754: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40003758: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x4000375C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x40003760: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x40003764: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x40003768: nop

    // 0x4000376C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x40003770: jal         0x400016B4
    // 0x40003774: nop

    ovl_actor_main_16B4(rdram, ctx);
        goto after_0;
    // 0x40003774: nop

    after_0:
    // 0x40003778: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x4000377C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x40003780: lw          $s0, 0xC($v1)
    ctx->r16 = MEM_W(ctx->r3, 0XC);
    // 0x40003784: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40003788: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x4000378C: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x40003790: beq         $v0, $at, L_400037AC
    if (ctx->r2 == ctx->r1) {
        // 0x40003794: sw          $zero, 0x44($sp)
        MEM_W(0X44, ctx->r29) = 0;
            goto L_400037AC;
    }
    // 0x40003794: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x40003798: lw          $t8, 0x90($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X90);
    // 0x4000379C: nop

    // 0x400037A0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x400037A4: bgez        $t9, L_400037B4
    if (SIGNED(ctx->r25) >= 0) {
        // 0x400037A8: nop
    
            goto L_400037B4;
    }
    // 0x400037A8: nop

L_400037AC:
    // 0x400037AC: b           L_400039B0
    // 0x400037B0: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
        goto L_400039B0;
    // 0x400037B0: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
L_400037B4:
    // 0x400037B4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x400037B8: jal         0x40002DFC
    // 0x400037BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_2DFC(rdram, ctx);
        goto after_1;
    // 0x400037BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x400037C0: beq         $v0, $zero, L_400037F4
    if (ctx->r2 == 0) {
        // 0x400037C4: addiu       $a0, $s1, 0x230
        ctx->r4 = ADD32(ctx->r17, 0X230);
            goto L_400037F4;
    }
    // 0x400037C4: addiu       $a0, $s1, 0x230
    ctx->r4 = ADD32(ctx->r17, 0X230);
    // 0x400037C8: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x400037CC: subu        $t0, $t0, $v0
    ctx->r8 = SUB32(ctx->r8, ctx->r2);
    // 0x400037D0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x400037D4: subu        $t0, $t0, $v0
    ctx->r8 = SUB32(ctx->r8, ctx->r2);
    // 0x400037D8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x400037DC: addu        $a0, $s1, $t0
    ctx->r4 = ADD32(ctx->r17, ctx->r8);
    // 0x400037E0: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    // 0x400037E4: jal         0x40002E38
    // 0x400037E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_actor_main_2E38(rdram, ctx);
        goto after_2;
    // 0x400037E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x400037EC: b           L_40003800
    // 0x400037F0: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
        goto L_40003800;
    // 0x400037F0: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
L_400037F4:
    // 0x400037F4: jal         0x40002E38
    // 0x400037F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_actor_main_2E38(rdram, ctx);
        goto after_3;
    // 0x400037F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x400037FC: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
L_40003800:
    // 0x40003800: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40003804: andi        $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 & 0X8000;
    // 0x40003808: bne         $t2, $zero, L_4000384C
    if (ctx->r10 != 0) {
        // 0x4000380C: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_4000384C;
    }
    // 0x4000380C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x40003810: jal         0x400036DC
    // 0x40003814: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    ovl_actor_main_36DC(rdram, ctx);
        goto after_4;
    // 0x40003814: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_4:
    // 0x40003818: beq         $v0, $zero, L_40003830
    if (ctx->r2 == 0) {
        // 0x4000381C: sw          $v0, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r2;
            goto L_40003830;
    }
    // 0x4000381C: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x40003820: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x40003824: nop

    // 0x40003828: beq         $t3, $zero, L_4000384C
    if (ctx->r11 == 0) {
        // 0x4000382C: nop
    
            goto L_4000384C;
    }
    // 0x4000382C: nop

L_40003830:
    // 0x40003830: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x40003834: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40003838: jal         0x40003118
    // 0x4000383C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_actor_main_3118(rdram, ctx);
        goto after_5;
    // 0x4000383C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x40003840: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40003844: jal         0x40003598
    // 0x40003848: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_actor_main_3598(rdram, ctx);
        goto after_6;
    // 0x40003848: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
L_4000384C:
    // 0x4000384C: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x40003850: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40003854: beq         $t4, $at, L_4000387C
    if (ctx->r12 == ctx->r1) {
        // 0x40003858: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4000387C;
    }
    // 0x40003858: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4000385C: jal         0x40002B78
    // 0x40003860: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_actor_main_2B78(rdram, ctx);
        goto after_7;
    // 0x40003860: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
    // 0x40003864: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x40003868: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4000386C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x40003870: jal         0x400036DC
    // 0x40003874: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    ovl_actor_main_36DC(rdram, ctx);
        goto after_8;
    // 0x40003874: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_8:
    // 0x40003878: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
L_4000387C:
    // 0x4000387C: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x40003880: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x40003884: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
    // 0x40003888: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4000388C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x40003890: nop

    // 0x40003894: bc1f        L_400038AC
    if (!c1cs) {
        // 0x40003898: nop
    
            goto L_400038AC;
    }
    // 0x40003898: nop

    // 0x4000389C: jal         0x4000335C
    // 0x400038A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_actor_main_335C(rdram, ctx);
        goto after_9;
    // 0x400038A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x400038A4: b           L_400038D4
    // 0x400038A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_400038D4;
    // 0x400038A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_400038AC:
    // 0x400038AC: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x400038B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x400038B4: beq         $t5, $at, L_400038D0
    if (ctx->r13 == ctx->r1) {
        // 0x400038B8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_400038D0;
    }
    // 0x400038B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400038BC: jal         0x400028A8
    // 0x400038C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_actor_main_28A8(rdram, ctx);
        goto after_10;
    // 0x400038C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x400038C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400038C8: jal         0x40002748
    // 0x400038CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_actor_main_2748(rdram, ctx);
        goto after_11;
    // 0x400038CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
L_400038D0:
    // 0x400038D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_400038D4:
    // 0x400038D4: jal         0x4000339C
    // 0x400038D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_actor_main_339C(rdram, ctx);
        goto after_12;
    // 0x400038D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_12:
    // 0x400038DC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x400038E0: nop

    // 0x400038E4: bne         $t6, $zero, L_4000396C
    if (ctx->r14 != 0) {
        // 0x400038E8: nop
    
            goto L_4000396C;
    }
    // 0x400038E8: nop

    // 0x400038EC: lw          $v0, 0x90($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X90);
    // 0x400038F0: nop

    // 0x400038F4: andi        $t7, $v0, 0x10
    ctx->r15 = ctx->r2 & 0X10;
    // 0x400038F8: beq         $t7, $zero, L_4000396C
    if (ctx->r15 == 0) {
        // 0x400038FC: nop
    
            goto L_4000396C;
    }
    // 0x400038FC: nop

    // 0x40003900: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x40003904: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x40003908: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x4000390C: bne         $t9, $zero, L_40003960
    if (ctx->r25 != 0) {
        // 0x40003910: andi        $t3, $v0, 0x40
        ctx->r11 = ctx->r2 & 0X40;
            goto L_40003960;
    }
    // 0x40003910: andi        $t3, $v0, 0x40
    ctx->r11 = ctx->r2 & 0X40;
    // 0x40003914: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    // 0x40003918: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x4000391C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40003920: beq         $a0, $at, L_4000396C
    if (ctx->r4 == ctx->r1) {
        // 0x40003924: addiu       $a1, $zero, 0x29
        ctx->r5 = ADD32(0, 0X29);
            goto L_4000396C;
    }
    // 0x40003924: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x40003928: jal         0x400006C4
    // 0x4000392C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_13;
    // 0x4000392C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_13:
    // 0x40003930: bne         $v0, $zero, L_4000396C
    if (ctx->r2 != 0) {
        // 0x40003934: nop
    
            goto L_4000396C;
    }
    // 0x40003934: nop

    // 0x40003938: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x4000393C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x40003940: bne         $t1, $at, L_4000396C
    if (ctx->r9 != ctx->r1) {
        // 0x40003944: nop
    
            goto L_4000396C;
    }
    // 0x40003944: nop

    // 0x40003948: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x4000394C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x40003950: bne         $t2, $at, L_4000396C
    if (ctx->r10 != ctx->r1) {
        // 0x40003954: nop
    
            goto L_4000396C;
    }
    // 0x40003954: nop

    // 0x40003958: b           L_4000396C
    // 0x4000395C: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
        goto L_4000396C;
    // 0x4000395C: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
L_40003960:
    // 0x40003960: bne         $t3, $zero, L_4000396C
    if (ctx->r11 != 0) {
        // 0x40003964: nop
    
            goto L_4000396C;
    }
    // 0x40003964: nop

    // 0x40003968: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
L_4000396C:
    // 0x4000396C: lw          $t5, 0x14($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X14);
    // 0x40003970: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x40003974: addiu       $t6, $t5, 0x40
    ctx->r14 = ADD32(ctx->r13, 0X40);
    // 0x40003978: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x4000397C: ori         $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 | 0X8000;
    // 0x40003980: slt         $at, $t4, $t8
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x40003984: bne         $at, $zero, L_40003994
    if (ctx->r1 != 0) {
        // 0x40003988: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_40003994;
    }
    // 0x40003988: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x4000398C: b           L_40003994
    // 0x40003990: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_40003994;
    // 0x40003990: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_40003994:
    // 0x40003994: beq         $v0, $zero, L_400039A4
    if (ctx->r2 == 0) {
        // 0x40003998: lw          $t9, 0x48($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X48);
            goto L_400039A4;
    }
    // 0x40003998: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x4000399C: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x400039A0: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
L_400039A4:
    // 0x400039A4: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x400039A8: nop

    // 0x400039AC: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
L_400039B0:
    // 0x400039B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400039B4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x400039B8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x400039BC: jr          $ra
    // 0x400039C0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x400039C0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_actor_main_39C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400039C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x400039C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400039CC: lw          $t6, 0x2EC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2EC);
    // 0x400039D0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x400039D4: bne         $a1, $t6, L_400039EC
    if (ctx->r5 != ctx->r14) {
        // 0x400039D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_400039EC;
    }
    // 0x400039D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400039DC: jal         0x4000BB3C
    // 0x400039E0: nop

    ovl_actor_main_BB3C(rdram, ctx);
        goto after_0;
    // 0x400039E0: nop

    after_0:
    // 0x400039E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x400039E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400039EC:
    // 0x400039EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x400039F0: jr          $ra
    // 0x400039F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x400039F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_39F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400039F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x400039FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40003A00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x40003A04: lw          $a1, 0x1C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X1C);
    // 0x40003A08: jal         0x40001D48
    // 0x40003A0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_1D48(rdram, ctx);
        goto after_0;
    // 0x40003A0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x40003A10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40003A14: nop

    // 0x40003A18: sw          $v0, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r2;
    // 0x40003A1C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x40003A20: jal         0x400039C4
    // 0x40003A24: nop

    ovl_actor_main_39C4(rdram, ctx);
        goto after_1;
    // 0x40003A24: nop

    after_1:
    // 0x40003A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40003A2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40003A30: jr          $ra
    // 0x40003A34: nop

    return;
    // 0x40003A34: nop

;}
RECOMP_FUNC void ovl_actor_main_3A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40003A38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40003A3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40003A40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x40003A44: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x40003A48: jal         0x400016B4
    // 0x40003A4C: nop

    ovl_actor_main_16B4(rdram, ctx);
        goto after_0;
    // 0x40003A4C: nop

    after_0:
    // 0x40003A50: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x40003A54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x40003A58: lw          $a1, 0x8($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X8);
    // 0x40003A5C: jal         0x400039F8
    // 0x40003A60: nop

    ovl_actor_main_39F8(rdram, ctx);
        goto after_1;
    // 0x40003A60: nop

    after_1:
    // 0x40003A64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40003A68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40003A6C: jr          $ra
    // 0x40003A70: nop

    return;
    // 0x40003A70: nop

;}
RECOMP_FUNC void ovl_actor_main_3A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40003A74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40003A78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40003A7C: lw          $a2, 0xC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC);
    // 0x40003A80: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x40003A84: jal         0x400016B4
    // 0x40003A88: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_actor_main_16B4(rdram, ctx);
        goto after_0;
    // 0x40003A88: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x40003A8C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x40003A90: addiu       $t6, $v0, 0x34
    ctx->r14 = ADD32(ctx->r2, 0X34);
    // 0x40003A94: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x40003A98: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x40003A9C: jal         0x40001258
    // 0x40003AA0: sw          $t6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r14;
    ovl_actor_main_1258(rdram, ctx);
        goto after_1;
    // 0x40003AA0: sw          $t6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r14;
    after_1:
    // 0x40003AA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40003AA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40003AAC: jr          $ra
    // 0x40003AB0: nop

    return;
    // 0x40003AB0: nop

;}
RECOMP_FUNC void ovl_actor_main_3AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40003AB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40003AB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40003ABC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x40003AC0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x40003AC4: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x40003AC8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40003ACC: bne         $t6, $at, L_40003AFC
    if (ctx->r14 != ctx->r1) {
        // 0x40003AD0: slti        $at, $a3, 0x8
        ctx->r1 = SIGNED(ctx->r7) < 0X8 ? 1 : 0;
            goto L_40003AFC;
    }
    // 0x40003AD0: slti        $at, $a3, 0x8
    ctx->r1 = SIGNED(ctx->r7) < 0X8 ? 1 : 0;
    // 0x40003AD4: beq         $at, $zero, L_40003AFC
    if (ctx->r1 == 0) {
        // 0x40003AD8: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_40003AFC;
    }
    // 0x40003AD8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x40003ADC: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x40003AE0: lui         $a1, 0x4002
    ctx->r5 = S32(0X4002 << 16);
    // 0x40003AE4: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x40003AE8: lw          $a1, -0x2944($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2944);
    // 0x40003AEC: jal         0x40000C40
    // 0x40003AF0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    ovl_actor_main_C40(rdram, ctx);
        goto after_0;
    // 0x40003AF0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x40003AF4: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x40003AF8: nop

L_40003AFC:
    // 0x40003AFC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40003B00: jal         0x40000C58
    // 0x40003B04: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    ovl_actor_main_C58(rdram, ctx);
        goto after_1;
    // 0x40003B04: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x40003B08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40003B0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40003B10: jr          $ra
    // 0x40003B14: nop

    return;
    // 0x40003B14: nop

;}
RECOMP_FUNC void ovl_actor_main_3B18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40003B18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40003B1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40003B20: blez        $a1, L_40003B50
    if (SIGNED(ctx->r5) <= 0) {
        // 0x40003B24: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_40003B50;
    }
    // 0x40003B24: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x40003B28: slti        $at, $a1, 0xF
    ctx->r1 = SIGNED(ctx->r5) < 0XF ? 1 : 0;
    // 0x40003B2C: beq         $at, $zero, L_40003B50
    if (ctx->r1 == 0) {
        // 0x40003B30: sll         $t6, $a1, 2
        ctx->r14 = S32(ctx->r5 << 2);
            goto L_40003B50;
    }
    // 0x40003B30: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x40003B34: lui         $a1, 0x4002
    ctx->r5 = S32(0X4002 << 16);
    // 0x40003B38: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x40003B3C: lw          $a1, -0x2928($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2928);
    // 0x40003B40: jal         0x4000115C
    // 0x40003B44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_0;
    // 0x40003B44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x40003B48: b           L_40003C30
    // 0x40003B4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40003C30;
    // 0x40003B4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40003B50:
    // 0x40003B50: slti        $at, $a3, 0xF
    ctx->r1 = SIGNED(ctx->r7) < 0XF ? 1 : 0;
    // 0x40003B54: bne         $at, $zero, L_40003B74
    if (ctx->r1 != 0) {
        // 0x40003B58: slti        $at, $a3, 0x27
        ctx->r1 = SIGNED(ctx->r7) < 0X27 ? 1 : 0;
            goto L_40003B74;
    }
    // 0x40003B58: slti        $at, $a3, 0x27
    ctx->r1 = SIGNED(ctx->r7) < 0X27 ? 1 : 0;
    // 0x40003B5C: beq         $at, $zero, L_40003B74
    if (ctx->r1 == 0) {
        // 0x40003B60: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_40003B74;
    }
    // 0x40003B60: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x40003B64: jal         0x4000115C
    // 0x40003B68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_1;
    // 0x40003B68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x40003B6C: b           L_40003C30
    // 0x40003B70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40003C30;
    // 0x40003B70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40003B74:
    // 0x40003B74: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x40003B78: bne         $a3, $at, L_40003B90
    if (ctx->r7 != ctx->r1) {
        // 0x40003B7C: addiu       $a1, $zero, 0x35
        ctx->r5 = ADD32(0, 0X35);
            goto L_40003B90;
    }
    // 0x40003B7C: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    // 0x40003B80: jal         0x4000115C
    // 0x40003B84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_2;
    // 0x40003B84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x40003B88: b           L_40003C30
    // 0x40003B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40003C30;
    // 0x40003B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40003B90:
    // 0x40003B90: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x40003B94: bne         $a3, $at, L_40003BAC
    if (ctx->r7 != ctx->r1) {
        // 0x40003B98: addiu       $a1, $zero, 0x384
        ctx->r5 = ADD32(0, 0X384);
            goto L_40003BAC;
    }
    // 0x40003B98: addiu       $a1, $zero, 0x384
    ctx->r5 = ADD32(0, 0X384);
    // 0x40003B9C: jal         0x4000115C
    // 0x40003BA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_3;
    // 0x40003BA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x40003BA4: b           L_40003C30
    // 0x40003BA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40003C30;
    // 0x40003BA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40003BAC:
    // 0x40003BAC: addiu       $at, $zero, 0x69
    ctx->r1 = ADD32(0, 0X69);
    // 0x40003BB0: beq         $a3, $at, L_40003BC4
    if (ctx->r7 == ctx->r1) {
        // 0x40003BB4: addiu       $a1, $zero, 0x34
        ctx->r5 = ADD32(0, 0X34);
            goto L_40003BC4;
    }
    // 0x40003BB4: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x40003BB8: addiu       $at, $zero, 0x6A
    ctx->r1 = ADD32(0, 0X6A);
    // 0x40003BBC: bne         $a3, $at, L_40003BD8
    if (ctx->r7 != ctx->r1) {
        // 0x40003BC0: addiu       $at, $zero, 0x6B
        ctx->r1 = ADD32(0, 0X6B);
            goto L_40003BD8;
    }
    // 0x40003BC0: addiu       $at, $zero, 0x6B
    ctx->r1 = ADD32(0, 0X6B);
L_40003BC4:
    // 0x40003BC4: jal         0x4000115C
    // 0x40003BC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_4;
    // 0x40003BC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x40003BCC: b           L_40003C30
    // 0x40003BD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40003C30;
    // 0x40003BD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40003BD4: addiu       $at, $zero, 0x6B
    ctx->r1 = ADD32(0, 0X6B);
L_40003BD8:
    // 0x40003BD8: bne         $a3, $at, L_40003BF0
    if (ctx->r7 != ctx->r1) {
        // 0x40003BDC: addiu       $a1, $zero, 0x29
        ctx->r5 = ADD32(0, 0X29);
            goto L_40003BF0;
    }
    // 0x40003BDC: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x40003BE0: jal         0x4000115C
    // 0x40003BE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_5;
    // 0x40003BE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x40003BE8: b           L_40003C30
    // 0x40003BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40003C30;
    // 0x40003BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40003BF0:
    // 0x40003BF0: slti        $at, $a3, 0x29
    ctx->r1 = SIGNED(ctx->r7) < 0X29 ? 1 : 0;
    // 0x40003BF4: bne         $at, $zero, L_40003C00
    if (ctx->r1 != 0) {
        // 0x40003BF8: slti        $at, $a3, 0x69
        ctx->r1 = SIGNED(ctx->r7) < 0X69 ? 1 : 0;
            goto L_40003C00;
    }
    // 0x40003BF8: slti        $at, $a3, 0x69
    ctx->r1 = SIGNED(ctx->r7) < 0X69 ? 1 : 0;
    // 0x40003BFC: bne         $at, $zero, L_40003C20
    if (ctx->r1 != 0) {
        // 0x40003C00: addiu       $at, $zero, 0x6C
        ctx->r1 = ADD32(0, 0X6C);
            goto L_40003C20;
    }
L_40003C00:
    // 0x40003C00: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
    // 0x40003C04: beq         $a3, $at, L_40003C20
    if (ctx->r7 == ctx->r1) {
        // 0x40003C08: addiu       $at, $zero, 0x6D
        ctx->r1 = ADD32(0, 0X6D);
            goto L_40003C20;
    }
    // 0x40003C08: addiu       $at, $zero, 0x6D
    ctx->r1 = ADD32(0, 0X6D);
    // 0x40003C0C: beq         $a3, $at, L_40003C20
    if (ctx->r7 == ctx->r1) {
        // 0x40003C10: addiu       $at, $zero, 0x6E
        ctx->r1 = ADD32(0, 0X6E);
            goto L_40003C20;
    }
    // 0x40003C10: addiu       $at, $zero, 0x6E
    ctx->r1 = ADD32(0, 0X6E);
    // 0x40003C14: beq         $a3, $at, L_40003C20
    if (ctx->r7 == ctx->r1) {
        // 0x40003C18: addiu       $at, $zero, 0x6F
        ctx->r1 = ADD32(0, 0X6F);
            goto L_40003C20;
    }
    // 0x40003C18: addiu       $at, $zero, 0x6F
    ctx->r1 = ADD32(0, 0X6F);
    // 0x40003C1C: bne         $a3, $at, L_40003C2C
    if (ctx->r7 != ctx->r1) {
        // 0x40003C20: addiu       $a1, $zero, 0x2C
        ctx->r5 = ADD32(0, 0X2C);
            goto L_40003C2C;
    }
L_40003C20:
    // 0x40003C20: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x40003C24: jal         0x4000115C
    // 0x40003C28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_6;
    // 0x40003C28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
L_40003C2C:
    // 0x40003C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40003C30:
    // 0x40003C30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40003C34: jr          $ra
    // 0x40003C38: nop

    return;
    // 0x40003C38: nop

;}
RECOMP_FUNC void ovl_actor_main_3C3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40003C3C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x40003C40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40003C44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x40003C48: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x40003C4C: lw          $a2, 0x1C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X1C);
    // 0x40003C50: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x40003C54: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x40003C58: bne         $t6, $at, L_40003C64
    if (ctx->r14 != ctx->r1) {
        // 0x40003C5C: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_40003C64;
    }
    // 0x40003C5C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x40003C60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_40003C64:
    // 0x40003C64: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x40003C68: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x40003C6C: jal         0x400007E4
    // 0x40003C70: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    ovl_actor_main_7E4(rdram, ctx);
        goto after_0;
    // 0x40003C70: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    after_0:
    // 0x40003C74: slti        $at, $s0, 0x29
    ctx->r1 = SIGNED(ctx->r16) < 0X29 ? 1 : 0;
    // 0x40003C78: bne         $at, $zero, L_40003C84
    if (ctx->r1 != 0) {
        // 0x40003C7C: slti        $at, $s0, 0x69
        ctx->r1 = SIGNED(ctx->r16) < 0X69 ? 1 : 0;
            goto L_40003C84;
    }
    // 0x40003C7C: slti        $at, $s0, 0x69
    ctx->r1 = SIGNED(ctx->r16) < 0X69 ? 1 : 0;
    // 0x40003C80: bne         $at, $zero, L_40003CA8
    if (ctx->r1 != 0) {
        // 0x40003C84: addiu       $at, $zero, 0x6C
        ctx->r1 = ADD32(0, 0X6C);
            goto L_40003CA8;
    }
L_40003C84:
    // 0x40003C84: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
    // 0x40003C88: beq         $s0, $at, L_40003CA8
    if (ctx->r16 == ctx->r1) {
        // 0x40003C8C: addiu       $at, $zero, 0x6D
        ctx->r1 = ADD32(0, 0X6D);
            goto L_40003CA8;
    }
    // 0x40003C8C: addiu       $at, $zero, 0x6D
    ctx->r1 = ADD32(0, 0X6D);
    // 0x40003C90: beq         $s0, $at, L_40003CA8
    if (ctx->r16 == ctx->r1) {
        // 0x40003C94: addiu       $at, $zero, 0x6E
        ctx->r1 = ADD32(0, 0X6E);
            goto L_40003CA8;
    }
    // 0x40003C94: addiu       $at, $zero, 0x6E
    ctx->r1 = ADD32(0, 0X6E);
    // 0x40003C98: beq         $s0, $at, L_40003CA8
    if (ctx->r16 == ctx->r1) {
        // 0x40003C9C: addiu       $at, $zero, 0x6F
        ctx->r1 = ADD32(0, 0X6F);
            goto L_40003CA8;
    }
    // 0x40003C9C: addiu       $at, $zero, 0x6F
    ctx->r1 = ADD32(0, 0X6F);
    // 0x40003CA0: bne         $s0, $at, L_40003CB8
    if (ctx->r16 != ctx->r1) {
        // 0x40003CA4: addiu       $t7, $zero, 0x12
        ctx->r15 = ADD32(0, 0X12);
            goto L_40003CB8;
    }
    // 0x40003CA4: addiu       $t7, $zero, 0x12
    ctx->r15 = ADD32(0, 0X12);
L_40003CA8:
    // 0x40003CA8: jal         0x40000CB8
    // 0x40003CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB8(rdram, ctx);
        goto after_1;
    // 0x40003CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x40003CB0: b           L_40004004
    // 0x40003CB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40004004;
    // 0x40003CB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40003CB8:
    // 0x40003CB8: slti        $at, $s0, 0x6A
    ctx->r1 = SIGNED(ctx->r16) < 0X6A ? 1 : 0;
    // 0x40003CBC: bne         $at, $zero, L_40003CE4
    if (ctx->r1 != 0) {
        // 0x40003CC0: sw          $t7, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r15;
            goto L_40003CE4;
    }
    // 0x40003CC0: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x40003CC4: addiu       $at, $zero, 0x6A
    ctx->r1 = ADD32(0, 0X6A);
    // 0x40003CC8: beq         $s0, $at, L_40003D74
    if (ctx->r16 == ctx->r1) {
        // 0x40003CCC: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_40003D74;
    }
    // 0x40003CCC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40003CD0: addiu       $at, $zero, 0x6B
    ctx->r1 = ADD32(0, 0X6B);
    // 0x40003CD4: beq         $s0, $at, L_40003D8C
    if (ctx->r16 == ctx->r1) {
        // 0x40003CD8: addiu       $t9, $zero, 0x3
        ctx->r25 = ADD32(0, 0X3);
            goto L_40003D8C;
    }
    // 0x40003CD8: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x40003CDC: b           L_40003F20
    // 0x40003CE0: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
        goto L_40003F20;
    // 0x40003CE0: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
L_40003CE4:
    // 0x40003CE4: slti        $at, $s0, 0x29
    ctx->r1 = SIGNED(ctx->r16) < 0X29 ? 1 : 0;
    // 0x40003CE8: bne         $at, $zero, L_40003D04
    if (ctx->r1 != 0) {
        // 0x40003CEC: addiu       $t8, $s0, -0x1
        ctx->r24 = ADD32(ctx->r16, -0X1);
            goto L_40003D04;
    }
    // 0x40003CEC: addiu       $t8, $s0, -0x1
    ctx->r24 = ADD32(ctx->r16, -0X1);
    // 0x40003CF0: addiu       $at, $zero, 0x69
    ctx->r1 = ADD32(0, 0X69);
    // 0x40003CF4: beq         $s0, $at, L_40003D5C
    if (ctx->r16 == ctx->r1) {
        // 0x40003CF8: nop
    
            goto L_40003D5C;
    }
    // 0x40003CF8: nop

    // 0x40003CFC: b           L_40003F20
    // 0x40003D00: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
        goto L_40003F20;
    // 0x40003D00: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
L_40003D04:
    // 0x40003D04: sltiu       $at, $t8, 0x28
    ctx->r1 = ctx->r24 < 0X28 ? 1 : 0;
    // 0x40003D08: beq         $at, $zero, L_40003F1C
    if (ctx->r1 == 0) {
        // 0x40003D0C: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_40003F1C;
    }
    // 0x40003D0C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x40003D10: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40003D14: addu        $at, $at, $t8
    gpr jr_addend_40003D20 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x40003D18: lw          $t8, -0x1BB0($at)
    ctx->r24 = ADD32(ctx->r1, -0X1BB0);
    // 0x40003D1C: nop

    // 0x40003D20: jr          $t8
    // 0x40003D24: nop

    switch (jr_addend_40003D20 >> 2) {
        case 0: goto L_40003D28; break;
        case 1: goto L_40003D40; break;
        case 2: goto L_40003D98; break;
        case 3: goto L_40003DC4; break;
        case 4: goto L_40003DE0; break;
        case 5: goto L_40003E00; break;
        case 6: goto L_40003E20; break;
        case 7: goto L_40003E40; break;
        case 8: goto L_40003E5C; break;
        case 9: goto L_40003F1C; break;
        case 10: goto L_40003F1C; break;
        case 11: goto L_40003F1C; break;
        case 12: goto L_40003F1C; break;
        case 13: goto L_40003EB4; break;
        case 14: goto L_40003F1C; break;
        case 15: goto L_40003F1C; break;
        case 16: goto L_40003F1C; break;
        case 17: goto L_40003F1C; break;
        case 18: goto L_40003F1C; break;
        case 19: goto L_40003F1C; break;
        case 20: goto L_40003F1C; break;
        case 21: goto L_40003F1C; break;
        case 22: goto L_40003F1C; break;
        case 23: goto L_40003F1C; break;
        case 24: goto L_40003F1C; break;
        case 25: goto L_40003F1C; break;
        case 26: goto L_40003F1C; break;
        case 27: goto L_40003F1C; break;
        case 28: goto L_40003F1C; break;
        case 29: goto L_40003F1C; break;
        case 30: goto L_40003F1C; break;
        case 31: goto L_40003F1C; break;
        case 32: goto L_40003F1C; break;
        case 33: goto L_40003F1C; break;
        case 34: goto L_40003F1C; break;
        case 35: goto L_40003F1C; break;
        case 36: goto L_40003F1C; break;
        case 37: goto L_40003F1C; break;
        case 38: goto L_40003F00; break;
        case 39: goto L_40003F14; break;
        default: switch_error(__func__, 0x40003D20, 0x4001E450);
    }
    // 0x40003D24: nop

L_40003D28:
    // 0x40003D28: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x40003D2C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x40003D30: nop

    // 0x40003D34: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x40003D38: b           L_40003F1C
    // 0x40003D3C: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
        goto L_40003F1C;
    // 0x40003D3C: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
L_40003D40:
    // 0x40003D40: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x40003D44: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x40003D48: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x40003D4C: nop

    // 0x40003D50: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x40003D54: b           L_40003F1C
    // 0x40003D58: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
        goto L_40003F1C;
    // 0x40003D58: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
L_40003D5C:
    // 0x40003D5C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x40003D60: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x40003D64: nop

    // 0x40003D68: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x40003D6C: b           L_40003F1C
    // 0x40003D70: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
        goto L_40003F1C;
    // 0x40003D70: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
L_40003D74:
    // 0x40003D74: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x40003D78: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x40003D7C: nop

    // 0x40003D80: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x40003D84: b           L_40003F1C
    // 0x40003D88: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
        goto L_40003F1C;
    // 0x40003D88: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
L_40003D8C:
    // 0x40003D8C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x40003D90: b           L_40003F1C
    // 0x40003D94: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
        goto L_40003F1C;
    // 0x40003D94: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
L_40003D98:
    // 0x40003D98: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
    // 0x40003D9C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x40003DA0: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x40003DA4: beq         $at, $zero, L_40003F20
    if (ctx->r1 == 0) {
        // 0x40003DA8: slti        $at, $s0, 0xA
        ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
            goto L_40003F20;
    }
    // 0x40003DA8: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x40003DAC: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x40003DB0: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x40003DB4: nop

    // 0x40003DB8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x40003DBC: b           L_40003F1C
    // 0x40003DC0: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
        goto L_40003F1C;
    // 0x40003DC0: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
L_40003DC4:
    // 0x40003DC4: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x40003DC8: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x40003DCC: lw          $t5, 0xC($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XC);
    // 0x40003DD0: nop

    // 0x40003DD4: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x40003DD8: b           L_40003F1C
    // 0x40003DDC: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
        goto L_40003F1C;
    // 0x40003DDC: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
L_40003DE0:
    // 0x40003DE0: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x40003DE4: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x40003DE8: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x40003DEC: nop

    // 0x40003DF0: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x40003DF4: ori         $t0, $t8, 0x2
    ctx->r8 = ctx->r24 | 0X2;
    // 0x40003DF8: b           L_40003F1C
    // 0x40003DFC: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
        goto L_40003F1C;
    // 0x40003DFC: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
L_40003E00:
    // 0x40003E00: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x40003E04: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x40003E08: lw          $t2, 0x10($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X10);
    // 0x40003E0C: nop

    // 0x40003E10: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x40003E14: ori         $t4, $t2, 0x1
    ctx->r12 = ctx->r10 | 0X1;
    // 0x40003E18: b           L_40003F1C
    // 0x40003E1C: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
        goto L_40003F1C;
    // 0x40003E1C: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
L_40003E20:
    // 0x40003E20: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x40003E24: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x40003E28: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x40003E2C: nop

    // 0x40003E30: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x40003E34: ori         $t8, $t6, 0x4
    ctx->r24 = ctx->r14 | 0X4;
    // 0x40003E38: b           L_40003F1C
    // 0x40003E3C: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
        goto L_40003F1C;
    // 0x40003E3C: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
L_40003E40:
    // 0x40003E40: addiu       $t9, $zero, 0xE
    ctx->r25 = ADD32(0, 0XE);
    // 0x40003E44: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x40003E48: lw          $t0, 0x2C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X2C);
    // 0x40003E4C: nop

    // 0x40003E50: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x40003E54: b           L_40003F1C
    // 0x40003E58: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
        goto L_40003F1C;
    // 0x40003E58: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
L_40003E5C:
    // 0x40003E5C: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x40003E60: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x40003E64: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x40003E68: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x40003E6C: bne         $t3, $at, L_40003EA4
    if (ctx->r11 != ctx->r1) {
        // 0x40003E70: addiu       $a1, $zero, 0xF0
        ctx->r5 = ADD32(0, 0XF0);
            goto L_40003EA4;
    }
    // 0x40003E70: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x40003E74: jal         0x40000DE4
    // 0x40003E78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_actor_main_DE4(rdram, ctx);
        goto after_2;
    // 0x40003E78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x40003E7C: jal         0x400016B4
    // 0x40003E80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_actor_main_16B4(rdram, ctx);
        goto after_3;
    // 0x40003E80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x40003E84: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40003E88: beq         $v0, $at, L_40003F1C
    if (ctx->r2 == ctx->r1) {
        // 0x40003E8C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_40003F1C;
    }
    // 0x40003E8C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x40003E90: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x40003E94: jal         0x40009000
    // 0x40003E98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_9000(rdram, ctx);
        goto after_4;
    // 0x40003E98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x40003E9C: b           L_40003F20
    // 0x40003EA0: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
        goto L_40003F20;
    // 0x40003EA0: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
L_40003EA4:
    // 0x40003EA4: jal         0x40009000
    // 0x40003EA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_9000(rdram, ctx);
        goto after_5;
    // 0x40003EA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x40003EAC: b           L_40003F20
    // 0x40003EB0: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
        goto L_40003F20;
    // 0x40003EB0: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
L_40003EB4:
    // 0x40003EB4: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x40003EB8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40003EBC: lw          $t4, 0x8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X8);
    // 0x40003EC0: nop

    // 0x40003EC4: bne         $t4, $at, L_40003EF0
    if (ctx->r12 != ctx->r1) {
        // 0x40003EC8: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_40003EF0;
    }
    // 0x40003EC8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x40003ECC: lw          $t5, 0x90($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X90);
    // 0x40003ED0: lui         $at, 0x400
    ctx->r1 = S32(0X400 << 16);
    // 0x40003ED4: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x40003ED8: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x40003EDC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x40003EE0: sw          $t6, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r14;
    // 0x40003EE4: sw          $zero, 0x360($v0)
    MEM_W(0X360, ctx->r2) = 0;
    // 0x40003EE8: swc1        $f4, 0x35C($v0)
    MEM_W(0X35C, ctx->r2) = ctx->f4.u32l;
    // 0x40003EEC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
L_40003EF0:
    // 0x40003EF0: jal         0x40000C4C
    // 0x40003EF4: nop

    ovl_actor_main_C4C(rdram, ctx);
        goto after_6;
    // 0x40003EF4: nop

    after_6:
    // 0x40003EF8: b           L_40003F20
    // 0x40003EFC: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
        goto L_40003F20;
    // 0x40003EFC: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
L_40003F00:
    // 0x40003F00: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x40003F04: jal         0x40000C88
    // 0x40003F08: nop

    ovl_actor_main_C88(rdram, ctx);
        goto after_7;
    // 0x40003F08: nop

    after_7:
    // 0x40003F0C: b           L_40003F20
    // 0x40003F10: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
        goto L_40003F20;
    // 0x40003F10: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
L_40003F14:
    // 0x40003F14: jal         0x40000C94
    // 0x40003F18: nop

    ovl_actor_main_C94(rdram, ctx);
        goto after_8;
    // 0x40003F18: nop

    after_8:
L_40003F1C:
    // 0x40003F1C: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
L_40003F20:
    // 0x40003F20: bne         $at, $zero, L_40003F68
    if (ctx->r1 != 0) {
        // 0x40003F24: slti        $at, $s0, 0xE
        ctx->r1 = SIGNED(ctx->r16) < 0XE ? 1 : 0;
            goto L_40003F68;
    }
    // 0x40003F24: slti        $at, $s0, 0xE
    ctx->r1 = SIGNED(ctx->r16) < 0XE ? 1 : 0;
    // 0x40003F28: beq         $at, $zero, L_40003F68
    if (ctx->r1 == 0) {
        // 0x40003F2C: lui         $a1, 0x4002
        ctx->r5 = S32(0X4002 << 16);
            goto L_40003F68;
    }
    // 0x40003F2C: lui         $a1, 0x4002
    ctx->r5 = S32(0X4002 << 16);
    // 0x40003F30: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x40003F34: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40003F38: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x40003F3C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x40003F40: bne         $t8, $at, L_40003F4C
    if (ctx->r24 != ctx->r1) {
        // 0x40003F44: addiu       $v0, $s0, -0xA
        ctx->r2 = ADD32(ctx->r16, -0XA);
            goto L_40003F4C;
    }
    // 0x40003F44: addiu       $v0, $s0, -0xA
    ctx->r2 = ADD32(ctx->r16, -0XA);
    // 0x40003F48: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_40003F4C:
    // 0x40003F4C: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x40003F50: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x40003F54: lw          $a1, -0x28EC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X28EC);
    // 0x40003F58: jal         0x40000C40
    // 0x40003F5C: nop

    ovl_actor_main_C40(rdram, ctx);
        goto after_9;
    // 0x40003F5C: nop

    after_9:
    // 0x40003F60: b           L_40003FE8
    // 0x40003F64: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
        goto L_40003FE8;
    // 0x40003F64: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
L_40003F68:
    // 0x40003F68: slti        $at, $s0, 0xF
    ctx->r1 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x40003F6C: bne         $at, $zero, L_40003F94
    if (ctx->r1 != 0) {
        // 0x40003F70: slti        $at, $s0, 0x17
        ctx->r1 = SIGNED(ctx->r16) < 0X17 ? 1 : 0;
            goto L_40003F94;
    }
    // 0x40003F70: slti        $at, $s0, 0x17
    ctx->r1 = SIGNED(ctx->r16) < 0X17 ? 1 : 0;
    // 0x40003F74: beq         $at, $zero, L_40003F94
    if (ctx->r1 == 0) {
        // 0x40003F78: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_40003F94;
    }
    // 0x40003F78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x40003F7C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x40003F80: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x40003F84: jal         0x40003AB4
    // 0x40003F88: addiu       $a3, $s0, -0xF
    ctx->r7 = ADD32(ctx->r16, -0XF);
    ovl_actor_main_3AB4(rdram, ctx);
        goto after_10;
    // 0x40003F88: addiu       $a3, $s0, -0xF
    ctx->r7 = ADD32(ctx->r16, -0XF);
    after_10:
    // 0x40003F8C: b           L_40003FE8
    // 0x40003F90: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
        goto L_40003FE8;
    // 0x40003F90: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
L_40003F94:
    // 0x40003F94: slti        $at, $s0, 0x17
    ctx->r1 = SIGNED(ctx->r16) < 0X17 ? 1 : 0;
    // 0x40003F98: bne         $at, $zero, L_40003FC0
    if (ctx->r1 != 0) {
        // 0x40003F9C: slti        $at, $s0, 0x1F
        ctx->r1 = SIGNED(ctx->r16) < 0X1F ? 1 : 0;
            goto L_40003FC0;
    }
    // 0x40003F9C: slti        $at, $s0, 0x1F
    ctx->r1 = SIGNED(ctx->r16) < 0X1F ? 1 : 0;
    // 0x40003FA0: beq         $at, $zero, L_40003FC0
    if (ctx->r1 == 0) {
        // 0x40003FA4: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_40003FC0;
    }
    // 0x40003FA4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x40003FA8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x40003FAC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x40003FB0: jal         0x40003AB4
    // 0x40003FB4: addiu       $a3, $s0, -0x17
    ctx->r7 = ADD32(ctx->r16, -0X17);
    ovl_actor_main_3AB4(rdram, ctx);
        goto after_11;
    // 0x40003FB4: addiu       $a3, $s0, -0x17
    ctx->r7 = ADD32(ctx->r16, -0X17);
    after_11:
    // 0x40003FB8: b           L_40003FE8
    // 0x40003FBC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
        goto L_40003FE8;
    // 0x40003FBC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
L_40003FC0:
    // 0x40003FC0: slti        $at, $s0, 0x1F
    ctx->r1 = SIGNED(ctx->r16) < 0X1F ? 1 : 0;
    // 0x40003FC4: bne         $at, $zero, L_40003FE4
    if (ctx->r1 != 0) {
        // 0x40003FC8: slti        $at, $s0, 0x27
        ctx->r1 = SIGNED(ctx->r16) < 0X27 ? 1 : 0;
            goto L_40003FE4;
    }
    // 0x40003FC8: slti        $at, $s0, 0x27
    ctx->r1 = SIGNED(ctx->r16) < 0X27 ? 1 : 0;
    // 0x40003FCC: beq         $at, $zero, L_40003FE4
    if (ctx->r1 == 0) {
        // 0x40003FD0: addiu       $a2, $zero, 0x2
        ctx->r6 = ADD32(0, 0X2);
            goto L_40003FE4;
    }
    // 0x40003FD0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x40003FD4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x40003FD8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x40003FDC: jal         0x40003AB4
    // 0x40003FE0: addiu       $a3, $s0, -0x1F
    ctx->r7 = ADD32(ctx->r16, -0X1F);
    ovl_actor_main_3AB4(rdram, ctx);
        goto after_12;
    // 0x40003FE0: addiu       $a3, $s0, -0x1F
    ctx->r7 = ADD32(ctx->r16, -0X1F);
    after_12:
L_40003FE4:
    // 0x40003FE4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
L_40003FE8:
    // 0x40003FE8: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x40003FEC: beq         $t0, $at, L_40004004
    if (ctx->r8 == ctx->r1) {
        // 0x40003FF0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40004004;
    }
    // 0x40003FF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40003FF4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x40003FF8: jal         0x400007F0
    // 0x40003FFC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    ovl_actor_main_7F0(rdram, ctx);
        goto after_13;
    // 0x40003FFC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_13:
    // 0x40004000: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40004004:
    // 0x40004004: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x40004008: jr          $ra
    // 0x4000400C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x4000400C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_actor_main_4010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40004010: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x40004014: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x40004018: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x4000401C: bne         $t7, $zero, L_4000404C
    if (ctx->r15 != 0) {
        // 0x40004020: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_4000404C;
    }
    // 0x40004020: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x40004024: beq         $v0, $at, L_4000404C
    if (ctx->r2 == ctx->r1) {
        // 0x40004028: addiu       $at, $zero, 0x16
        ctx->r1 = ADD32(0, 0X16);
            goto L_4000404C;
    }
    // 0x40004028: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x4000402C: beq         $v0, $at, L_4000404C
    if (ctx->r2 == ctx->r1) {
        // 0x40004030: addiu       $at, $zero, 0x17
        ctx->r1 = ADD32(0, 0X17);
            goto L_4000404C;
    }
    // 0x40004030: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x40004034: beq         $v0, $at, L_4000404C
    if (ctx->r2 == ctx->r1) {
        // 0x40004038: addiu       $at, $zero, 0x18
        ctx->r1 = ADD32(0, 0X18);
            goto L_4000404C;
    }
    // 0x40004038: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x4000403C: beq         $v0, $at, L_4000404C
    if (ctx->r2 == ctx->r1) {
        // 0x40004040: addiu       $at, $zero, 0x19
        ctx->r1 = ADD32(0, 0X19);
            goto L_4000404C;
    }
    // 0x40004040: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x40004044: bne         $v0, $at, L_40004058
    if (ctx->r2 != ctx->r1) {
        // 0x40004048: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_40004058;
    }
    // 0x40004048: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4000404C:
    // 0x4000404C: jr          $ra
    // 0x40004050: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x40004050: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x40004054: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_40004058:
    // 0x40004058: jr          $ra
    // 0x4000405C: nop

    return;
    // 0x4000405C: nop

;}
RECOMP_FUNC void ovl_actor_main_4060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40004060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40004064: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40004068: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x4000406C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40004070: beq         $v0, $at, L_4000407C
    if (ctx->r2 == ctx->r1) {
        // 0x40004074: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_4000407C;
    }
    // 0x40004074: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x40004078: bne         $v0, $at, L_40004090
    if (ctx->r2 != ctx->r1) {
        // 0x4000407C: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_40004090;
    }
L_4000407C:
    // 0x4000407C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x40004080: beq         $a1, $at, L_40004090
    if (ctx->r5 == ctx->r1) {
        // 0x40004084: nop
    
            goto L_40004090;
    }
    // 0x40004084: nop

    // 0x40004088: b           L_40004110
    // 0x4000408C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_40004110;
    // 0x4000408C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_40004090:
    // 0x40004090: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x40004094: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x40004098: bne         $t6, $at, L_4000410C
    if (ctx->r14 != ctx->r1) {
        // 0x4000409C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_4000410C;
    }
    // 0x4000409C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x400040A0: jal         0x40000DE4
    // 0x400040A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_actor_main_DE4(rdram, ctx);
        goto after_0;
    // 0x400040A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x400040A8: jal         0x400016B4
    // 0x400040AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_actor_main_16B4(rdram, ctx);
        goto after_1;
    // 0x400040AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x400040B0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x400040B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x400040B8: beq         $v0, $at, L_40004104
    if (ctx->r2 == ctx->r1) {
        // 0x400040BC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_40004104;
    }
    // 0x400040BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x400040C0: jal         0x40004010
    // 0x400040C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_actor_main_4010(rdram, ctx);
        goto after_2;
    // 0x400040C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_2:
    // 0x400040C8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x400040CC: beq         $v0, $zero, L_40004104
    if (ctx->r2 == 0) {
        // 0x400040D0: slti        $at, $a1, 0x29
        ctx->r1 = SIGNED(ctx->r5) < 0X29 ? 1 : 0;
            goto L_40004104;
    }
    // 0x400040D0: slti        $at, $a1, 0x29
    ctx->r1 = SIGNED(ctx->r5) < 0X29 ? 1 : 0;
    // 0x400040D4: bne         $at, $zero, L_400040E0
    if (ctx->r1 != 0) {
        // 0x400040D8: slti        $at, $a1, 0x69
        ctx->r1 = SIGNED(ctx->r5) < 0X69 ? 1 : 0;
            goto L_400040E0;
    }
    // 0x400040D8: slti        $at, $a1, 0x69
    ctx->r1 = SIGNED(ctx->r5) < 0X69 ? 1 : 0;
    // 0x400040DC: bne         $at, $zero, L_40004104
    if (ctx->r1 != 0) {
        // 0x400040E0: addiu       $at, $zero, 0x6C
        ctx->r1 = ADD32(0, 0X6C);
            goto L_40004104;
    }
L_400040E0:
    // 0x400040E0: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
    // 0x400040E4: beq         $a1, $at, L_40004104
    if (ctx->r5 == ctx->r1) {
        // 0x400040E8: addiu       $at, $zero, 0x6D
        ctx->r1 = ADD32(0, 0X6D);
            goto L_40004104;
    }
    // 0x400040E8: addiu       $at, $zero, 0x6D
    ctx->r1 = ADD32(0, 0X6D);
    // 0x400040EC: beq         $a1, $at, L_40004104
    if (ctx->r5 == ctx->r1) {
        // 0x400040F0: addiu       $at, $zero, 0x6E
        ctx->r1 = ADD32(0, 0X6E);
            goto L_40004104;
    }
    // 0x400040F0: addiu       $at, $zero, 0x6E
    ctx->r1 = ADD32(0, 0X6E);
    // 0x400040F4: beq         $a1, $at, L_40004104
    if (ctx->r5 == ctx->r1) {
        // 0x400040F8: addiu       $at, $zero, 0x6F
        ctx->r1 = ADD32(0, 0X6F);
            goto L_40004104;
    }
    // 0x400040F8: addiu       $at, $zero, 0x6F
    ctx->r1 = ADD32(0, 0X6F);
    // 0x400040FC: bne         $a1, $at, L_40004110
    if (ctx->r5 != ctx->r1) {
        // 0x40004100: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_40004110;
    }
    // 0x40004100: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_40004104:
    // 0x40004104: b           L_40004110
    // 0x40004108: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_40004110;
    // 0x40004108: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_4000410C:
    // 0x4000410C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_40004110:
    // 0x40004110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40004118: jr          $ra
    // 0x4000411C: nop

    return;
    // 0x4000411C: nop

;}
RECOMP_FUNC void ovl_actor_main_4120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40004120: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x40004124: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40004128: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x4000412C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x40004130: andi        $t6, $v0, 0x200
    ctx->r14 = ctx->r2 & 0X200;
    // 0x40004134: beq         $t6, $zero, L_400041D4
    if (ctx->r14 == 0) {
        // 0x40004138: addiu       $at, $zero, -0x201
        ctx->r1 = ADD32(0, -0X201);
            goto L_400041D4;
    }
    // 0x40004138: addiu       $at, $zero, -0x201
    ctx->r1 = ADD32(0, -0X201);
    // 0x4000413C: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x40004140: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
    // 0x40004144: sw          $zero, 0x3FC($a0)
    MEM_W(0X3FC, ctx->r4) = 0;
    // 0x40004148: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x4000414C: sw          $a3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r7;
    // 0x40004150: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x40004154: jal         0x400006C4
    // 0x40004158: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40004158: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x4000415C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x40004160: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x40004164: jal         0x400006C4
    // 0x40004168: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40004168: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x4000416C: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x40004170: bne         $v0, $zero, L_400041D8
    if (ctx->r2 != 0) {
        // 0x40004174: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_400041D8;
    }
    // 0x40004174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004178: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x4000417C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x40004180: beq         $v0, $zero, L_40004190
    if (ctx->r2 == 0) {
        // 0x40004184: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_40004190;
    }
    // 0x40004184: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x40004188: bne         $v0, $at, L_400041D8
    if (ctx->r2 != ctx->r1) {
        // 0x4000418C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_400041D8;
    }
    // 0x4000418C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40004190:
    // 0x40004190: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x40004194: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x40004198: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x4000419C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x400041A0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x400041A4: bne         $v0, $zero, L_400041B8
    if (ctx->r2 != 0) {
        // 0x400041A8: sw          $t9, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r25;
            goto L_400041B8;
    }
    // 0x400041A8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x400041AC: addiu       $t0, $zero, 0x16
    ctx->r8 = ADD32(0, 0X16);
    // 0x400041B0: b           L_400041C0
    // 0x400041B4: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
        goto L_400041C0;
    // 0x400041B4: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
L_400041B8:
    // 0x400041B8: addiu       $t1, $zero, 0x24
    ctx->r9 = ADD32(0, 0X24);
    // 0x400041BC: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
L_400041C0:
    // 0x400041C0: lw          $t2, 0x10($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X10);
    // 0x400041C4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x400041C8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x400041CC: jal         0x40001258
    // 0x400041D0: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    ovl_actor_main_1258(rdram, ctx);
        goto after_2;
    // 0x400041D0: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    after_2:
L_400041D4:
    // 0x400041D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400041D8:
    // 0x400041D8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x400041DC: jr          $ra
    // 0x400041E0: nop

    return;
    // 0x400041E0: nop

;}
RECOMP_FUNC void ovl_actor_main_41E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400041E4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x400041E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x400041EC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x400041F0: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x400041F4: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x400041F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x400041FC: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x40004200: bne         $t6, $zero, L_40004448
    if (ctx->r14 != 0) {
        // 0x40004204: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_40004448;
    }
    // 0x40004204: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x40004208: andi        $t7, $v0, 0x40
    ctx->r15 = ctx->r2 & 0X40;
    // 0x4000420C: bne         $t7, $zero, L_40004448
    if (ctx->r15 != 0) {
        // 0x40004210: andi        $t8, $v0, 0x1000
        ctx->r24 = ctx->r2 & 0X1000;
            goto L_40004448;
    }
    // 0x40004210: andi        $t8, $v0, 0x1000
    ctx->r24 = ctx->r2 & 0X1000;
    // 0x40004214: bne         $t8, $zero, L_4000444C
    if (ctx->r24 != 0) {
        // 0x40004218: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_4000444C;
    }
    // 0x40004218: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4000421C: lw          $a1, 0x318($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X318);
    // 0x40004220: jal         0x4000587C
    // 0x40004224: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    ovl_actor_main_587C(rdram, ctx);
        goto after_0;
    // 0x40004224: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    after_0:
    // 0x40004228: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x4000422C: bne         $v0, $zero, L_40004448
    if (ctx->r2 != 0) {
        // 0x40004230: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40004448;
    }
    // 0x40004230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40004234: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x40004238: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x4000423C: jal         0x40001258
    // 0x40004240: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    ovl_actor_main_1258(rdram, ctx);
        goto after_1;
    // 0x40004240: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    after_1:
    // 0x40004244: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x40004248: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x4000424C: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x40004250: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x40004254: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x40004258: beq         $t1, $zero, L_40004448
    if (ctx->r9 == 0) {
        // 0x4000425C: addiu       $t3, $zero, -0x1
        ctx->r11 = ADD32(0, -0X1);
            goto L_40004448;
    }
    // 0x4000425C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x40004260: addiu       $t4, $zero, 0x12
    ctx->r12 = ADD32(0, 0X12);
    // 0x40004264: slti        $at, $a3, 0x10
    ctx->r1 = SIGNED(ctx->r7) < 0X10 ? 1 : 0;
    // 0x40004268: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x4000426C: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x40004270: bne         $at, $zero, L_400042A0
    if (ctx->r1 != 0) {
        // 0x40004274: sw          $t4, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r12;
            goto L_400042A0;
    }
    // 0x40004274: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x40004278: slti        $at, $a3, 0x18
    ctx->r1 = SIGNED(ctx->r7) < 0X18 ? 1 : 0;
    // 0x4000427C: beq         $at, $zero, L_400042A0
    if (ctx->r1 == 0) {
        // 0x40004280: sll         $t5, $a3, 2
        ctx->r13 = S32(ctx->r7 << 2);
            goto L_400042A0;
    }
    // 0x40004280: sll         $t5, $a3, 2
    ctx->r13 = S32(ctx->r7 << 2);
    // 0x40004284: lui         $t6, 0x4002
    ctx->r14 = S32(0X4002 << 16);
    // 0x40004288: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x4000428C: lw          $t6, -0x290C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X290C);
    // 0x40004290: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x40004294: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    // 0x40004298: b           L_400043B4
    // 0x4000429C: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
        goto L_400043B4;
    // 0x4000429C: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
L_400042A0:
    // 0x400042A0: addiu       $t8, $a3, -0x19
    ctx->r24 = ADD32(ctx->r7, -0X19);
    // 0x400042A4: sltiu       $at, $t8, 0x7
    ctx->r1 = ctx->r24 < 0X7 ? 1 : 0;
    // 0x400042A8: beq         $at, $zero, L_400043B4
    if (ctx->r1 == 0) {
        // 0x400042AC: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_400043B4;
    }
    // 0x400042AC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x400042B0: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400042B4: addu        $at, $at, $t8
    gpr jr_addend_400042C0 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x400042B8: lw          $t8, -0x1B10($at)
    ctx->r24 = ADD32(ctx->r1, -0X1B10);
    // 0x400042BC: nop

    // 0x400042C0: jr          $t8
    // 0x400042C4: nop

    switch (jr_addend_400042C0 >> 2) {
        case 0: goto L_400042C8; break;
        case 1: goto L_400042E4; break;
        case 2: goto L_40004304; break;
        case 3: goto L_40004328; break;
        case 4: goto L_400042C8; break;
        case 5: goto L_400042E4; break;
        case 6: goto L_40004398; break;
        default: switch_error(__func__, 0x400042C0, 0x4001E4F0);
    }
    // 0x400042C4: nop

L_400042C8:
    // 0x400042C8: addiu       $t9, $zero, 0x54
    ctx->r25 = ADD32(0, 0X54);
    // 0x400042CC: addiu       $t0, $zero, 0x2B
    ctx->r8 = ADD32(0, 0X2B);
    // 0x400042D0: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x400042D4: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x400042D8: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x400042DC: b           L_400043B4
    // 0x400042E0: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
        goto L_400043B4;
    // 0x400042E0: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
L_400042E4:
    // 0x400042E4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x400042E8: addiu       $t2, $zero, 0x55
    ctx->r10 = ADD32(0, 0X55);
    // 0x400042EC: addiu       $t3, $zero, 0x2B
    ctx->r11 = ADD32(0, 0X2B);
    // 0x400042F0: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x400042F4: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x400042F8: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x400042FC: b           L_400043B4
    // 0x40004300: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
        goto L_400043B4;
    // 0x40004300: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
L_40004304:
    // 0x40004304: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x40004308: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x4000430C: addiu       $t6, $zero, 0x56
    ctx->r14 = ADD32(0, 0X56);
    // 0x40004310: addiu       $t7, $zero, 0x2B
    ctx->r15 = ADD32(0, 0X2B);
    // 0x40004314: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x40004318: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
    // 0x4000431C: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x40004320: b           L_400043B4
    // 0x40004324: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
        goto L_400043B4;
    // 0x40004324: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
L_40004328:
    // 0x40004328: jal         0x40000C1C
    // 0x4000432C: nop

    ovl_actor_main_C1C(rdram, ctx);
        goto after_2;
    // 0x4000432C: nop

    after_2:
    // 0x40004330: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x40004334: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40004338: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x4000433C: lwc1        $f6, -0x1AF4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1AF4);
    // 0x40004340: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x40004344: mul.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x40004348: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x4000434C: nop

    // 0x40004350: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x40004354: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x40004358: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x4000435C: nop

    // 0x40004360: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x40004364: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x40004368: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x4000436C: slti        $at, $a1, 0x9C5
    ctx->r1 = SIGNED(ctx->r5) < 0X9C5 ? 1 : 0;
    // 0x40004370: bne         $at, $zero, L_4000437C
    if (ctx->r1 != 0) {
        // 0x40004374: nop
    
            goto L_4000437C;
    }
    // 0x40004374: nop

    // 0x40004378: addiu       $a1, $zero, 0x9C4
    ctx->r5 = ADD32(0, 0X9C4);
L_4000437C:
    // 0x4000437C: jal         0x40000C34
    // 0x40004380: negu        $a0, $a1
    ctx->r4 = SUB32(0, ctx->r5);
    ovl_actor_main_C34(rdram, ctx);
        goto after_3;
    // 0x40004380: negu        $a0, $a1
    ctx->r4 = SUB32(0, ctx->r5);
    after_3:
    // 0x40004384: addiu       $t0, $zero, 0x5C
    ctx->r8 = ADD32(0, 0X5C);
    // 0x40004388: addiu       $t1, $zero, 0xB2
    ctx->r9 = ADD32(0, 0XB2);
    // 0x4000438C: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x40004390: b           L_400043B4
    // 0x40004394: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
        goto L_400043B4;
    // 0x40004394: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
L_40004398:
    // 0x40004398: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x4000439C: addiu       $t3, $zero, 0x56
    ctx->r11 = ADD32(0, 0X56);
    // 0x400043A0: addiu       $t4, $zero, 0x2B
    ctx->r12 = ADD32(0, 0X2B);
    // 0x400043A4: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x400043A8: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x400043AC: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x400043B0: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
L_400043B4:
    // 0x400043B4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x400043B8: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x400043BC: beq         $t5, $at, L_400043D4
    if (ctx->r13 == ctx->r1) {
        // 0x400043C0: lw          $t6, 0x40($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X40);
            goto L_400043D4;
    }
    // 0x400043C0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x400043C4: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x400043C8: jal         0x400007F0
    // 0x400043CC: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    ovl_actor_main_7F0(rdram, ctx);
        goto after_4;
    // 0x400043CC: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_4:
    // 0x400043D0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
L_400043D4:
    // 0x400043D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x400043D8: beq         $t6, $at, L_400043F8
    if (ctx->r14 == ctx->r1) {
        // 0x400043DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400043F8;
    }
    // 0x400043DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400043E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x400043E4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x400043E8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x400043EC: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x400043F0: jal         0x4000118C
    // 0x400043F4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_5;
    // 0x400043F4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_5:
L_400043F8:
    // 0x400043F8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x400043FC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40004400: beq         $t7, $at, L_40004414
    if (ctx->r15 == ctx->r1) {
        // 0x40004404: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40004414;
    }
    // 0x40004404: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40004408: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x4000440C: jal         0x4000115C
    // 0x40004410: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_6;
    // 0x40004410: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
L_40004414:
    // 0x40004414: lw          $t8, 0x90($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X90);
    // 0x40004418: nop

    // 0x4000441C: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x40004420: beq         $t9, $zero, L_40004434
    if (ctx->r25 == 0) {
        // 0x40004424: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40004434;
    }
    // 0x40004424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40004428: jal         0x40010A10
    // 0x4000442C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_10A10(rdram, ctx);
        goto after_7;
    // 0x4000442C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x40004430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_40004434:
    // 0x40004434: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x40004438: jal         0x40009000
    // 0x4000443C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_9000(rdram, ctx);
        goto after_8;
    // 0x4000443C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x40004440: jal         0x40003544
    // 0x40004444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_3544(rdram, ctx);
        goto after_9;
    // 0x40004444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
L_40004448:
    // 0x40004448: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000444C:
    // 0x4000444C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x40004450: jr          $ra
    // 0x40004454: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x40004454: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_actor_main_4458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40004458: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000445C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40004460: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x40004464: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40004468: bne         $t6, $at, L_400044BC
    if (ctx->r14 != ctx->r1) {
        // 0x4000446C: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_400044BC;
    }
    // 0x4000446C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x40004470: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x40004474: nop

    // 0x40004478: sll         $t7, $v0, 9
    ctx->r15 = S32(ctx->r2 << 9);
    // 0x4000447C: bgez        $t7, L_400044BC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x40004480: sll         $t8, $v0, 10
        ctx->r24 = S32(ctx->r2 << 10);
            goto L_400044BC;
    }
    // 0x40004480: sll         $t8, $v0, 10
    ctx->r24 = S32(ctx->r2 << 10);
    // 0x40004484: bltz        $t8, L_400044C0
    if (SIGNED(ctx->r24) < 0) {
        // 0x40004488: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_400044C0;
    }
    // 0x40004488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000448C: lw          $a1, 0x350($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X350);
    // 0x40004490: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40004494: beq         $a1, $at, L_400044BC
    if (ctx->r5 == ctx->r1) {
        // 0x40004498: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_400044BC;
    }
    // 0x40004498: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x4000449C: jal         0x400016B4
    // 0x400044A0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_actor_main_16B4(rdram, ctx);
        goto after_0;
    // 0x400044A0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x400044A4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x400044A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x400044AC: beq         $v0, $at, L_400044C0
    if (ctx->r2 == ctx->r1) {
        // 0x400044B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_400044C0;
    }
    // 0x400044B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400044B4: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x400044B8: nop

L_400044BC:
    // 0x400044BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400044C0:
    // 0x400044C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x400044C4: jr          $ra
    // 0x400044C8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x400044C8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_44CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400044CC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x400044D0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x400044D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400044D8: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x400044DC: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x400044E0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x400044E4: jal         0x400006C4
    // 0x400044E8: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x400044E8: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_0:
    // 0x400044EC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x400044F0: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x400044F4: jal         0x400006C4
    // 0x400044F8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x400044F8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x400044FC: bne         $v0, $zero, L_40004544
    if (ctx->r2 != 0) {
        // 0x40004500: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40004544;
    }
    // 0x40004500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004504: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x40004508: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x4000450C: bne         $t7, $zero, L_40004540
    if (ctx->r15 != 0) {
        // 0x40004510: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_40004540;
    }
    // 0x40004510: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40004514: bne         $t8, $at, L_40004544
    if (ctx->r24 != ctx->r1) {
        // 0x40004518: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40004544;
    }
    // 0x40004518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000451C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x40004520: jal         0x400016B4
    // 0x40004524: nop

    ovl_actor_main_16B4(rdram, ctx);
        goto after_2;
    // 0x40004524: nop

    after_2:
    // 0x40004528: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000452C: beq         $v0, $at, L_40004544
    if (ctx->r2 == ctx->r1) {
        // 0x40004530: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40004544;
    }
    // 0x40004530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004534: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x40004538: nop

    // 0x4000453C: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
L_40004540:
    // 0x40004540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40004544:
    // 0x40004544: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x40004548: jr          $ra
    // 0x4000454C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x4000454C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_actor_main_4550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40004550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40004554: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40004558: beq         $a0, $at, L_400045C8
    if (ctx->r4 == ctx->r1) {
        // 0x4000455C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_400045C8;
    }
    // 0x4000455C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40004560: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x40004564: nop

    // 0x40004568: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x4000456C: beq         $t7, $zero, L_4000458C
    if (ctx->r15 == 0) {
        // 0x40004570: nop
    
            goto L_4000458C;
    }
    // 0x40004570: nop

    // 0x40004574: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x40004578: jal         0x40004120
    // 0x4000457C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_actor_main_4120(rdram, ctx);
        goto after_0;
    // 0x4000457C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x40004580: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40004584: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x40004588: nop

L_4000458C:
    // 0x4000458C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40004590: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x40004594: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
    // 0x40004598: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
    // 0x4000459C: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x400045A0: nop

    // 0x400045A4: swc1        $f6, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f6.u32l;
    // 0x400045A8: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x400045AC: nop

    // 0x400045B0: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x400045B4: nop

    // 0x400045B8: bc1t        L_400045CC
    if (c1cs) {
        // 0x400045BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_400045CC;
    }
    // 0x400045BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400045C0: jal         0x40001A8C
    // 0x400045C4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x400045C4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_1:
L_400045C8:
    // 0x400045C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400045CC:
    // 0x400045CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x400045D0: jr          $ra
    // 0x400045D4: nop

    return;
    // 0x400045D4: nop

;}
RECOMP_FUNC void ovl_actor_main_45D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400045D8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x400045DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x400045E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x400045E4: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x400045E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x400045EC: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x400045F0: lw          $t7, 0x90($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X90);
    // 0x400045F4: lw          $t9, 0x10($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X10);
    // 0x400045F8: ori         $t8, $t7, 0x200
    ctx->r24 = ctx->r15 | 0X200;
    // 0x400045FC: sw          $t8, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r24;
    // 0x40004600: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x40004604: sw          $zero, 0x3FC($a0)
    MEM_W(0X3FC, ctx->r4) = 0;
    // 0x40004608: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x4000460C: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x40004610: jal         0x400006C4
    // 0x40004614: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40004614: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x40004618: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x4000461C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x40004620: bne         $t0, $at, L_4000465C
    if (ctx->r8 != ctx->r1) {
        // 0x40004624: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_4000465C;
    }
    // 0x40004624: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40004628: jal         0x40009B00
    // 0x4000462C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9B00(rdram, ctx);
        goto after_1;
    // 0x4000462C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x40004630: beq         $v0, $zero, L_40004644
    if (ctx->r2 == 0) {
        // 0x40004634: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40004644;
    }
    // 0x40004634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40004638: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x4000463C: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x40004640: bne         $t1, $at, L_40004658
    if (ctx->r9 != ctx->r1) {
        // 0x40004644: addiu       $a1, $zero, 0xE
        ctx->r5 = ADD32(0, 0XE);
            goto L_40004658;
    }
L_40004644:
    // 0x40004644: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x40004648: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000464C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40004650: jal         0x40008D20
    // 0x40004654: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_2;
    // 0x40004654: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_40004658:
    // 0x40004658: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000465C:
    // 0x4000465C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x40004660: jr          $ra
    // 0x40004664: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x40004664: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_actor_main_4668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40004668: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000466C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40004670: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40004674: beq         $a0, $at, L_400046AC
    if (ctx->r4 == ctx->r1) {
        // 0x40004678: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_400046AC;
    }
    // 0x40004678: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4000467C: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x40004680: nop

    // 0x40004684: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x40004688: beq         $t7, $zero, L_400046A4
    if (ctx->r15 == 0) {
        // 0x4000468C: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_400046A4;
    }
    // 0x4000468C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x40004690: jal         0x40004120
    // 0x40004694: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_4120(rdram, ctx);
        goto after_0;
    // 0x40004694: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x40004698: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000469C: nop

    // 0x400046A0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
L_400046A4:
    // 0x400046A4: jal         0x400045D8
    // 0x400046A8: nop

    ovl_actor_main_45D8(rdram, ctx);
        goto after_1;
    // 0x400046A8: nop

    after_1:
L_400046AC:
    // 0x400046AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400046B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x400046B4: jr          $ra
    // 0x400046B8: nop

    return;
    // 0x400046B8: nop

;}
RECOMP_FUNC void ovl_actor_main_46BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400046BC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x400046C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x400046C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400046C8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x400046CC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x400046D0: beq         $a0, $at, L_4000481C
    if (ctx->r4 == ctx->r1) {
        // 0x400046D4: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_4000481C;
    }
    // 0x400046D4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x400046D8: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x400046DC: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x400046E0: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x400046E4: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x400046E8: jal         0x400006C4
    // 0x400046EC: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x400046EC: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x400046F0: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x400046F4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x400046F8: lw          $v1, 0x90($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X90);
    // 0x400046FC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x40004700: andi        $t7, $v1, 0x200
    ctx->r15 = ctx->r3 & 0X200;
    // 0x40004704: beq         $t7, $zero, L_40004720
    if (ctx->r15 == 0) {
        // 0x40004708: nop
    
            goto L_40004720;
    }
    // 0x40004708: nop

    // 0x4000470C: jal         0x40004120
    // 0x40004710: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    ovl_actor_main_4120(rdram, ctx);
        goto after_1;
    // 0x40004710: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    after_1:
    // 0x40004714: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x40004718: b           L_4000481C
    // 0x4000471C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
        goto L_4000481C;
    // 0x4000471C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_40004720:
    // 0x40004720: lw          $v0, 0x8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X8);
    // 0x40004724: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x40004728: beq         $a0, $v0, L_40004750
    if (ctx->r4 == ctx->r2) {
        // 0x4000472C: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_40004750;
    }
    // 0x4000472C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40004730: bne         $v0, $at, L_40004794
    if (ctx->r2 != ctx->r1) {
        // 0x40004734: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_40004794;
    }
    // 0x40004734: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x40004738: lw          $v0, 0x1C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X1C);
    // 0x4000473C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40004740: beq         $a0, $v0, L_40004750
    if (ctx->r4 == ctx->r2) {
        // 0x40004744: nop
    
            goto L_40004750;
    }
    // 0x40004744: nop

    // 0x40004748: bne         $v0, $at, L_40004794
    if (ctx->r2 != ctx->r1) {
        // 0x4000474C: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_40004794;
    }
    // 0x4000474C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
L_40004750:
    // 0x40004750: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x40004754: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x40004758: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x4000475C: jal         0x40003544
    // 0x40004760: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    ovl_actor_main_3544(rdram, ctx);
        goto after_2;
    // 0x40004760: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    after_2:
    // 0x40004764: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x40004768: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x4000476C: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
    // 0x40004770: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40004774: bne         $t8, $at, L_4000481C
    if (ctx->r24 != ctx->r1) {
        // 0x40004778: nop
    
            goto L_4000481C;
    }
    // 0x40004778: nop

    // 0x4000477C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40004780: nop

    // 0x40004784: swc1        $f0, 0x48($a3)
    MEM_W(0X48, ctx->r7) = ctx->f0.u32l;
    // 0x40004788: b           L_4000481C
    // 0x4000478C: swc1        $f0, 0x50($a3)
    MEM_W(0X50, ctx->r7) = ctx->f0.u32l;
        goto L_4000481C;
    // 0x4000478C: swc1        $f0, 0x50($a3)
    MEM_W(0X50, ctx->r7) = ctx->f0.u32l;
    // 0x40004790: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
L_40004794:
    // 0x40004794: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x40004798: bne         $t9, $zero, L_4000480C
    if (ctx->r25 != 0) {
        // 0x4000479C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_4000480C;
    }
    // 0x4000479C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x400047A0: bne         $t1, $at, L_40004810
    if (ctx->r9 != ctx->r1) {
        // 0x400047A4: andi        $t5, $v1, 0x20
        ctx->r13 = ctx->r3 & 0X20;
            goto L_40004810;
    }
    // 0x400047A4: andi        $t5, $v1, 0x20
    ctx->r13 = ctx->r3 & 0X20;
    // 0x400047A8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x400047AC: nop

    // 0x400047B0: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x400047B4: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x400047B8: jal         0x400016B4
    // 0x400047BC: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    ovl_actor_main_16B4(rdram, ctx);
        goto after_3;
    // 0x400047BC: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    after_3:
    // 0x400047C0: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x400047C4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x400047C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x400047CC: beq         $v0, $at, L_4000481C
    if (ctx->r2 == ctx->r1) {
        // 0x400047D0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_4000481C;
    }
    // 0x400047D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x400047D4: lw          $t3, 0x90($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X90);
    // 0x400047D8: nop

    // 0x400047DC: andi        $t4, $t3, 0x20
    ctx->r12 = ctx->r11 & 0X20;
    // 0x400047E0: bne         $t4, $zero, L_40004804
    if (ctx->r12 != 0) {
        // 0x400047E4: nop
    
            goto L_40004804;
    }
    // 0x400047E4: nop

    // 0x400047E8: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x400047EC: jal         0x400121FC
    // 0x400047F0: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    ovl_actor_main_121FC(rdram, ctx);
        goto after_4;
    // 0x400047F0: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    after_4:
    // 0x400047F4: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x400047F8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x400047FC: beq         $v0, $zero, L_4000481C
    if (ctx->r2 == 0) {
        // 0x40004800: nop
    
            goto L_4000481C;
    }
    // 0x40004800: nop

L_40004804:
    // 0x40004804: b           L_4000481C
    // 0x40004808: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
        goto L_4000481C;
    // 0x40004808: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_4000480C:
    // 0x4000480C: andi        $t5, $v1, 0x20
    ctx->r13 = ctx->r3 & 0X20;
L_40004810:
    // 0x40004810: beq         $t5, $zero, L_4000481C
    if (ctx->r13 == 0) {
        // 0x40004814: nop
    
            goto L_4000481C;
    }
    // 0x40004814: nop

    // 0x40004818: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_4000481C:
    // 0x4000481C: beq         $t0, $zero, L_4000483C
    if (ctx->r8 == 0) {
        // 0x40004820: lw          $t7, 0x44($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X44);
            goto L_4000483C;
    }
    // 0x40004820: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x40004824: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x40004828: jal         0x400045D8
    // 0x4000482C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_actor_main_45D8(rdram, ctx);
        goto after_5;
    // 0x4000482C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_5:
    // 0x40004830: b           L_40004848
    // 0x40004834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40004848;
    // 0x40004834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004838: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
L_4000483C:
    // 0x4000483C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x40004840: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x40004844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40004848:
    // 0x40004848: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x4000484C: jr          $ra
    // 0x40004850: nop

    return;
    // 0x40004850: nop

;}
RECOMP_FUNC void ovl_actor_main_4854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40004854: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40004858: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000485C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x40004860: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x40004864: lw          $t6, 0xC($a1)
    ctx->r14 = MEM_W(ctx->r5, 0XC);
    // 0x40004868: addiu       $t8, $t7, 0x40
    ctx->r24 = ADD32(ctx->r15, 0X40);
    // 0x4000486C: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x40004870: ori         $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 | 0X8000;
    // 0x40004874: slt         $at, $t6, $t0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x40004878: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x4000487C: bne         $at, $zero, L_4000488C
    if (ctx->r1 != 0) {
        // 0x40004880: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_4000488C;
    }
    // 0x40004880: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x40004884: b           L_40004890
    // 0x40004888: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_40004890;
    // 0x40004888: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4000488C:
    // 0x4000488C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_40004890:
    // 0x40004890: bne         $v0, $zero, L_40004954
    if (ctx->r2 != 0) {
        // 0x40004894: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40004954;
    }
    // 0x40004894: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40004898: lw          $v0, 0x90($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X90);
    // 0x4000489C: nop

    // 0x400048A0: andi        $t1, $v0, 0x800
    ctx->r9 = ctx->r2 & 0X800;
    // 0x400048A4: bne         $t1, $zero, L_40004954
    if (ctx->r9 != 0) {
        // 0x400048A8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40004954;
    }
    // 0x400048A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400048AC: lw          $t2, 0x8C($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X8C);
    // 0x400048B0: sll         $t3, $v0, 7
    ctx->r11 = S32(ctx->r2 << 7);
    // 0x400048B4: bne         $t2, $zero, L_40004954
    if (ctx->r10 != 0) {
        // 0x400048B8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40004954;
    }
    // 0x400048B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400048BC: bltz        $t3, L_40004950
    if (SIGNED(ctx->r11) < 0) {
        // 0x400048C0: andi        $t4, $v0, 0x200
        ctx->r12 = ctx->r2 & 0X200;
            goto L_40004950;
    }
    // 0x400048C0: andi        $t4, $v0, 0x200
    ctx->r12 = ctx->r2 & 0X200;
    // 0x400048C4: bne         $t4, $zero, L_40004950
    if (ctx->r12 != 0) {
        // 0x400048C8: ori         $t5, $v0, 0x800
        ctx->r13 = ctx->r2 | 0X800;
            goto L_40004950;
    }
    // 0x400048C8: ori         $t5, $v0, 0x800
    ctx->r13 = ctx->r2 | 0X800;
    // 0x400048CC: sw          $t5, 0x90($a3)
    MEM_W(0X90, ctx->r7) = ctx->r13;
    // 0x400048D0: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x400048D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x400048D8: swc1        $f4, 0x74($a3)
    MEM_W(0X74, ctx->r7) = ctx->f4.u32l;
    // 0x400048DC: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x400048E0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x400048E4: swc1        $f6, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f6.u32l;
    // 0x400048E8: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x400048EC: swc1        $f0, 0x80($a3)
    MEM_W(0X80, ctx->r7) = ctx->f0.u32l;
    // 0x400048F0: swc1        $f0, 0x88($a3)
    MEM_W(0X88, ctx->r7) = ctx->f0.u32l;
    // 0x400048F4: swc1        $f8, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->f8.u32l;
    // 0x400048F8: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x400048FC: sw          $zero, 0x8C($a3)
    MEM_W(0X8C, ctx->r7) = 0;
    // 0x40004900: swc1        $f10, 0x84($a3)
    MEM_W(0X84, ctx->r7) = ctx->f10.u32l;
    // 0x40004904: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x40004908: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x4000490C: jal         0x40001258
    // 0x40004910: addiu       $a2, $a3, 0x80
    ctx->r6 = ADD32(ctx->r7, 0X80);
    ovl_actor_main_1258(rdram, ctx);
        goto after_0;
    // 0x40004910: addiu       $a2, $a3, 0x80
    ctx->r6 = ADD32(ctx->r7, 0X80);
    after_0:
    // 0x40004914: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x40004918: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x4000491C: lw          $a0, 0x1C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1C);
    // 0x40004920: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x40004924: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x40004928: jal         0x40000CA0
    // 0x4000492C: swc1        $f16, 0x84($a3)
    MEM_W(0X84, ctx->r7) = ctx->f16.u32l;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_1;
    // 0x4000492C: swc1        $f16, 0x84($a3)
    MEM_W(0X84, ctx->r7) = ctx->f16.u32l;
    after_1:
    // 0x40004930: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x40004934: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x40004938: lw          $t7, 0x8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X8);
    // 0x4000493C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x40004940: bne         $t7, $at, L_40004954
    if (ctx->r15 != ctx->r1) {
        // 0x40004944: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40004954;
    }
    // 0x40004944: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40004948: jal         0x40001A8C
    // 0x4000494C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_2;
    // 0x4000494C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_2:
L_40004950:
    // 0x40004950: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40004954:
    // 0x40004954: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x40004958: jr          $ra
    // 0x4000495C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x4000495C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_actor_main_4960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40004960: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40004964: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40004968: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x4000496C: jal         0x40006428
    // 0x40004970: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    ovl_actor_main_6428(rdram, ctx);
        goto after_0;
    // 0x40004970: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x40004974: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x40004978: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x4000497C: lw          $a0, 0x90($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X90);
    // 0x40004980: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x40004984: andi        $t6, $a0, 0x80
    ctx->r14 = ctx->r4 & 0X80;
    // 0x40004988: bne         $t6, $zero, L_400049D8
    if (ctx->r14 != 0) {
        // 0x4000498C: sll         $t7, $a0, 10
        ctx->r15 = S32(ctx->r4 << 10);
            goto L_400049D8;
    }
    // 0x4000498C: sll         $t7, $a0, 10
    ctx->r15 = S32(ctx->r4 << 10);
    // 0x40004990: bltz        $t7, L_400049D8
    if (SIGNED(ctx->r15) < 0) {
        // 0x40004994: nop
    
            goto L_400049D8;
    }
    // 0x40004994: nop

    // 0x40004998: lw          $v1, 0x4($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X4);
    // 0x4000499C: nop

    // 0x400049A0: lw          $t8, 0x34($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X34);
    // 0x400049A4: nop

    // 0x400049A8: bne         $t8, $zero, L_400049D8
    if (ctx->r24 != 0) {
        // 0x400049AC: nop
    
            goto L_400049D8;
    }
    // 0x400049AC: nop

    // 0x400049B0: lw          $t9, 0x38($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X38);
    // 0x400049B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x400049B8: beq         $a1, $t9, L_400049D8
    if (ctx->r5 == ctx->r25) {
        // 0x400049BC: nop
    
            goto L_400049D8;
    }
    // 0x400049BC: nop

    // 0x400049C0: beq         $v0, $zero, L_400049E0
    if (ctx->r2 == 0) {
        // 0x400049C4: nop
    
            goto L_400049E0;
    }
    // 0x400049C4: nop

    // 0x400049C8: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x400049CC: nop

    // 0x400049D0: bne         $a1, $t0, L_400049E0
    if (ctx->r5 != ctx->r8) {
        // 0x400049D4: nop
    
            goto L_400049E0;
    }
    // 0x400049D4: nop

L_400049D8:
    // 0x400049D8: b           L_40004AA0
    // 0x400049DC: sw          $t1, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r9;
        goto L_40004AA0;
    // 0x400049DC: sw          $t1, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r9;
L_400049E0:
    // 0x400049E0: lw          $v0, 0x14($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X14);
    // 0x400049E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400049E8: beq         $v0, $at, L_40004A54
    if (ctx->r2 == ctx->r1) {
        // 0x400049EC: addiu       $v1, $zero, 0xC
        ctx->r3 = ADD32(0, 0XC);
            goto L_40004A54;
    }
    // 0x400049EC: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x400049F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x400049F4: beq         $v0, $at, L_40004A54
    if (ctx->r2 == ctx->r1) {
        // 0x400049F8: andi        $t3, $a0, 0x100
        ctx->r11 = ctx->r4 & 0X100;
            goto L_40004A54;
    }
    // 0x400049F8: andi        $t3, $a0, 0x100
    ctx->r11 = ctx->r4 & 0X100;
    // 0x400049FC: beq         $t3, $zero, L_40004A4C
    if (ctx->r11 == 0) {
        // 0x40004A00: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_40004A4C;
    }
    // 0x40004A00: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x40004A04: addiu       $a1, $a3, 0x324
    ctx->r5 = ADD32(ctx->r7, 0X324);
    // 0x40004A08: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x40004A0C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x40004A10: beq         $v0, $at, L_40004A20
    if (ctx->r2 == ctx->r1) {
        // 0x40004A14: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_40004A20;
    }
    // 0x40004A14: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x40004A18: bne         $v0, $at, L_40004A28
    if (ctx->r2 != ctx->r1) {
        // 0x40004A1C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_40004A28;
    }
    // 0x40004A1C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_40004A20:
    // 0x40004A20: b           L_40004A54
    // 0x40004A24: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
        goto L_40004A54;
    // 0x40004A24: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
L_40004A28:
    // 0x40004A28: lw          $t4, 0x4($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X4);
    // 0x40004A2C: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x40004A30: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x40004A34: jal         0x40007BF8
    // 0x40004A38: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    ovl_actor_main_7BF8(rdram, ctx);
        goto after_1;
    // 0x40004A38: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    after_1:
    // 0x40004A3C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x40004A40: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x40004A44: b           L_40004A58
    // 0x40004A48: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
        goto L_40004A58;
    // 0x40004A48: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
L_40004A4C:
    // 0x40004A4C: b           L_40004A54
    // 0x40004A50: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
        goto L_40004A54;
    // 0x40004A50: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_40004A54:
    // 0x40004A54: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
L_40004A58:
    // 0x40004A58: beq         $v1, $at, L_40004A90
    if (ctx->r3 == ctx->r1) {
        // 0x40004A5C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_40004A90;
    }
    // 0x40004A5C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x40004A60: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x40004A64: addiu       $a2, $a3, 0x324
    ctx->r6 = ADD32(ctx->r7, 0X324);
    // 0x40004A68: lw          $a1, 0x8($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X8);
    // 0x40004A6C: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x40004A70: jal         0x40006500
    // 0x40004A74: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    ovl_actor_main_6500(rdram, ctx);
        goto after_2;
    // 0x40004A74: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_2:
    // 0x40004A78: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x40004A7C: addiu       $a1, $zero, 0x367
    ctx->r5 = ADD32(0, 0X367);
    // 0x40004A80: jal         0x4000115C
    // 0x40004A84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_3;
    // 0x40004A84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x40004A88: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x40004A8C: nop

L_40004A90:
    // 0x40004A90: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x40004A94: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x40004A98: sw          $v1, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r3;
    // 0x40004A9C: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
L_40004AA0:
    // 0x40004AA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004AA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x40004AA8: jr          $ra
    // 0x40004AAC: nop

    return;
    // 0x40004AAC: nop

;}
RECOMP_FUNC void ovl_actor_main_4AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40004AB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40004AB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40004AB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x40004ABC: jal         0x400063F0
    // 0x40004AC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_actor_main_63F0(rdram, ctx);
        goto after_0;
    // 0x40004AC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x40004AC4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x40004AC8: beq         $v0, $zero, L_40004AF8
    if (ctx->r2 == 0) {
        // 0x40004ACC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40004AF8;
    }
    // 0x40004ACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004AD0: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x40004AD4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x40004AD8: bne         $t6, $at, L_40004AF8
    if (ctx->r14 != ctx->r1) {
        // 0x40004ADC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40004AF8;
    }
    // 0x40004ADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004AE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40004AE4: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x40004AE8: lw          $a2, 0x4($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X4);
    // 0x40004AEC: jal         0x40007D24
    // 0x40004AF0: nop

    ovl_actor_main_7D24(rdram, ctx);
        goto after_1;
    // 0x40004AF0: nop

    after_1:
    // 0x40004AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40004AF8:
    // 0x40004AF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40004AFC: jr          $ra
    // 0x40004B00: nop

    return;
    // 0x40004B00: nop

;}
RECOMP_FUNC void ovl_actor_main_4B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40004B04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40004B08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40004B0C: jal         0x400092D4
    // 0x40004B10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_92D4(rdram, ctx);
        goto after_0;
    // 0x40004B10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x40004B14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40004B18: jal         0x4000BB3C
    // 0x40004B1C: nop

    ovl_actor_main_BB3C(rdram, ctx);
        goto after_1;
    // 0x40004B1C: nop

    after_1:
    // 0x40004B20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40004B24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x40004B28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x40004B2C: jal         0x400022A8
    // 0x40004B30: addiu       $a0, $a0, 0x2D4
    ctx->r4 = ADD32(ctx->r4, 0X2D4);
    ovl_actor_main_22A8(rdram, ctx);
        goto after_2;
    // 0x40004B30: addiu       $a0, $a0, 0x2D4
    ctx->r4 = ADD32(ctx->r4, 0X2D4);
    after_2:
    // 0x40004B34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004B38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40004B3C: jr          $ra
    // 0x40004B40: nop

    return;
    // 0x40004B40: nop

;}
RECOMP_FUNC void ovl_actor_main_4B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40004B44: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x40004B48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40004B4C: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x40004B50: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x40004B54: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    // 0x40004B58: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x40004B5C: beq         $a3, $a1, L_40004B78
    if (ctx->r7 == ctx->r5) {
        // 0x40004B60: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_40004B78;
    }
    // 0x40004B60: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x40004B64: jal         0x400016B4
    // 0x40004B68: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    ovl_actor_main_16B4(rdram, ctx);
        goto after_0;
    // 0x40004B68: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_0:
    // 0x40004B6C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x40004B70: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x40004B74: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_40004B78:
    // 0x40004B78: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x40004B7C: nop

    // 0x40004B80: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x40004B84: beq         $at, $zero, L_40005004
    if (ctx->r1 == 0) {
        // 0x40004B88: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_40005004;
    }
    // 0x40004B88: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x40004B8C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40004B90: addu        $at, $at, $t6
    gpr jr_addend_40004B9C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x40004B94: lw          $t6, -0x1AF0($at)
    ctx->r14 = ADD32(ctx->r1, -0X1AF0);
    // 0x40004B98: nop

    // 0x40004B9C: jr          $t6
    // 0x40004BA0: nop

    switch (jr_addend_40004B9C >> 2) {
        case 0: goto L_40004BA4; break;
        case 1: goto L_40004D2C; break;
        case 2: goto L_40004ED8; break;
        case 3: goto L_40004F04; break;
        case 4: goto L_40005004; break;
        case 5: goto L_40004FE8; break;
        default: switch_error(__func__, 0x40004B9C, 0x4001E510);
    }
    // 0x40004BA0: nop

L_40004BA4:
    // 0x40004BA4: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x40004BA8: nop

    // 0x40004BAC: addiu       $t8, $t7, -0x14
    ctx->r24 = ADD32(ctx->r15, -0X14);
    // 0x40004BB0: sltiu       $at, $t8, 0x14
    ctx->r1 = ctx->r24 < 0X14 ? 1 : 0;
    // 0x40004BB4: beq         $at, $zero, L_40005004
    if (ctx->r1 == 0) {
        // 0x40004BB8: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_40005004;
    }
    // 0x40004BB8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x40004BBC: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40004BC0: addu        $at, $at, $t8
    gpr jr_addend_40004BCC = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x40004BC4: lw          $t8, -0x1AD8($at)
    ctx->r24 = ADD32(ctx->r1, -0X1AD8);
    // 0x40004BC8: nop

    // 0x40004BCC: jr          $t8
    // 0x40004BD0: nop

    switch (jr_addend_40004BCC >> 2) {
        case 0: goto L_40004BE8; break;
        case 1: goto L_40004BD4; break;
        case 2: goto L_40004BFC; break;
        case 3: goto L_40005004; break;
        case 4: goto L_40005004; break;
        case 5: goto L_40005004; break;
        case 6: goto L_40005004; break;
        case 7: goto L_40004C7C; break;
        case 8: goto L_40005004; break;
        case 9: goto L_40005004; break;
        case 10: goto L_40005004; break;
        case 11: goto L_40005004; break;
        case 12: goto L_40005004; break;
        case 13: goto L_40005004; break;
        case 14: goto L_40005004; break;
        case 15: goto L_40005004; break;
        case 16: goto L_40005004; break;
        case 17: goto L_40005004; break;
        case 18: goto L_40004C9C; break;
        case 19: goto L_40004CE8; break;
        default: switch_error(__func__, 0x40004BCC, 0x4001E528);
    }
    // 0x40004BD0: nop

L_40004BD4:
    // 0x40004BD4: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x40004BD8: jal         0x400046BC
    // 0x40004BDC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_actor_main_46BC(rdram, ctx);
        goto after_1;
    // 0x40004BDC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x40004BE0: b           L_40005008
    // 0x40004BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40005008;
    // 0x40004BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40004BE8:
    // 0x40004BE8: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x40004BEC: jal         0x40004550
    // 0x40004BF0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_actor_main_4550(rdram, ctx);
        goto after_2;
    // 0x40004BF0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x40004BF4: b           L_40005008
    // 0x40004BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40005008;
    // 0x40004BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40004BFC:
    // 0x40004BFC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40004C00: beq         $a2, $at, L_40005008
    if (ctx->r6 == ctx->r1) {
        // 0x40004C04: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004C08: lw          $t9, 0x90($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X90);
    // 0x40004C0C: nop

    // 0x40004C10: andi        $t0, $t9, 0x8
    ctx->r8 = ctx->r25 & 0X8;
    // 0x40004C14: beq         $t0, $zero, L_40005008
    if (ctx->r8 == 0) {
        // 0x40004C18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004C18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004C1C: lw          $t1, 0xC8($a2)
    ctx->r9 = MEM_W(ctx->r6, 0XC8);
    // 0x40004C20: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x40004C24: beq         $t1, $at, L_40004C44
    if (ctx->r9 == ctx->r1) {
        // 0x40004C28: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_40004C44;
    }
    // 0x40004C28: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x40004C2C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x40004C30: jal         0x400092D4
    // 0x40004C34: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    ovl_actor_main_92D4(rdram, ctx);
        goto after_3;
    // 0x40004C34: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_3:
    // 0x40004C38: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x40004C3C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x40004C40: nop

L_40004C44:
    // 0x40004C44: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x40004C48: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x40004C4C: jal         0x400039C4
    // 0x40004C50: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_actor_main_39C4(rdram, ctx);
        goto after_4;
    // 0x40004C50: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_4:
    // 0x40004C54: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x40004C58: nop

    // 0x40004C5C: lw          $a1, 0xC0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC0);
    // 0x40004C60: jal         0x40011944
    // 0x40004C64: nop

    ovl_actor_main_11944(rdram, ctx);
        goto after_5;
    // 0x40004C64: nop

    after_5:
    // 0x40004C68: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x40004C6C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x40004C70: sw          $t2, 0xC0($a2)
    MEM_W(0XC0, ctx->r6) = ctx->r10;
    // 0x40004C74: b           L_40005004
    // 0x40004C78: sw          $zero, 0xC4($a2)
    MEM_W(0XC4, ctx->r6) = 0;
        goto L_40005004;
    // 0x40004C78: sw          $zero, 0xC4($a2)
    MEM_W(0XC4, ctx->r6) = 0;
L_40004C7C:
    // 0x40004C7C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40004C80: beq         $a2, $at, L_40005008
    if (ctx->r6 == ctx->r1) {
        // 0x40004C84: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004C84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004C88: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x40004C8C: jal         0x40004960
    // 0x40004C90: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_actor_main_4960(rdram, ctx);
        goto after_6;
    // 0x40004C90: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_6:
    // 0x40004C94: b           L_40005008
    // 0x40004C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40005008;
    // 0x40004C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40004C9C:
    // 0x40004C9C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40004CA0: beq         $a2, $at, L_40005008
    if (ctx->r6 == ctx->r1) {
        // 0x40004CA4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004CA8: lw          $v0, 0x90($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X90);
    // 0x40004CAC: nop

    // 0x40004CB0: andi        $t3, $v0, 0x80
    ctx->r11 = ctx->r2 & 0X80;
    // 0x40004CB4: bne         $t3, $zero, L_40005008
    if (ctx->r11 != 0) {
        // 0x40004CB8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004CBC: lw          $t4, 0x358($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X358);
    // 0x40004CC0: sll         $t5, $v0, 10
    ctx->r13 = S32(ctx->r2 << 10);
    // 0x40004CC4: bne         $t4, $zero, L_40005008
    if (ctx->r12 != 0) {
        // 0x40004CC8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004CC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004CCC: bltz        $t5, L_40005004
    if (SIGNED(ctx->r13) < 0) {
        // 0x40004CD0: sll         $t6, $v0, 9
        ctx->r14 = S32(ctx->r2 << 9);
            goto L_40005004;
    }
    // 0x40004CD0: sll         $t6, $v0, 9
    ctx->r14 = S32(ctx->r2 << 9);
    // 0x40004CD4: bltz        $t6, L_40005008
    if (SIGNED(ctx->r14) < 0) {
        // 0x40004CD8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004CD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004CDC: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x40004CE0: b           L_40005004
    // 0x40004CE4: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
        goto L_40005004;
    // 0x40004CE4: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
L_40004CE8:
    // 0x40004CE8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40004CEC: beq         $a2, $at, L_40005008
    if (ctx->r6 == ctx->r1) {
        // 0x40004CF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004CF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004CF4: lw          $v0, 0x90($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X90);
    // 0x40004CF8: nop

    // 0x40004CFC: sll         $t7, $v0, 10
    ctx->r15 = S32(ctx->r2 << 10);
    // 0x40004D00: bgez        $t7, L_40005004
    if (SIGNED(ctx->r15) >= 0) {
        // 0x40004D04: sll         $t8, $v0, 9
        ctx->r24 = S32(ctx->r2 << 9);
            goto L_40005004;
    }
    // 0x40004D04: sll         $t8, $v0, 9
    ctx->r24 = S32(ctx->r2 << 9);
    // 0x40004D08: bgez        $t8, L_40005008
    if (SIGNED(ctx->r24) >= 0) {
        // 0x40004D0C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004D0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004D10: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x40004D14: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x40004D18: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x40004D1C: jal         0x40002630
    // 0x40004D20: nop

    ovl_actor_main_2630(rdram, ctx);
        goto after_7;
    // 0x40004D20: nop

    after_7:
    // 0x40004D24: b           L_40005008
    // 0x40004D28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40005008;
    // 0x40004D28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40004D2C:
    // 0x40004D2C: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x40004D30: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x40004D34: beq         $v0, $at, L_40004D64
    if (ctx->r2 == ctx->r1) {
        // 0x40004D38: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_40004D64;
    }
    // 0x40004D38: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x40004D3C: beq         $v0, $at, L_40004E10
    if (ctx->r2 == ctx->r1) {
        // 0x40004D40: addiu       $at, $zero, 0x2A
        ctx->r1 = ADD32(0, 0X2A);
            goto L_40004E10;
    }
    // 0x40004D40: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x40004D44: beq         $v0, $at, L_40004E24
    if (ctx->r2 == ctx->r1) {
        // 0x40004D48: addiu       $at, $zero, 0x2C
        ctx->r1 = ADD32(0, 0X2C);
            goto L_40004E24;
    }
    // 0x40004D48: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x40004D4C: beq         $v0, $at, L_40004E74
    if (ctx->r2 == ctx->r1) {
        // 0x40004D50: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_40004E74;
    }
    // 0x40004D50: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x40004D54: beq         $v0, $at, L_40004E98
    if (ctx->r2 == ctx->r1) {
        // 0x40004D58: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_40004E98;
    }
    // 0x40004D58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40004D5C: b           L_40005008
    // 0x40004D60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40005008;
    // 0x40004D60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40004D64:
    // 0x40004D64: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40004D68: beq         $a2, $at, L_40005008
    if (ctx->r6 == ctx->r1) {
        // 0x40004D6C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004D6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004D70: lw          $t0, 0x14($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X14);
    // 0x40004D74: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x40004D78: addiu       $t1, $t0, 0x40
    ctx->r9 = ADD32(ctx->r8, 0X40);
    // 0x40004D7C: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x40004D80: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x40004D84: ori         $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 | 0X8000;
    // 0x40004D88: slt         $at, $t9, $t3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x40004D8C: bne         $at, $zero, L_40004D9C
    if (ctx->r1 != 0) {
        // 0x40004D90: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_40004D9C;
    }
    // 0x40004D90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x40004D94: b           L_40004D9C
    // 0x40004D98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_40004D9C;
    // 0x40004D98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_40004D9C:
    // 0x40004D9C: bne         $v0, $zero, L_40005004
    if (ctx->r2 != 0) {
        // 0x40004DA0: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_40005004;
    }
    // 0x40004DA0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x40004DA4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x40004DA8: jal         0x40004010
    // 0x40004DAC: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    ovl_actor_main_4010(rdram, ctx);
        goto after_8;
    // 0x40004DAC: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_8:
    // 0x40004DB0: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x40004DB4: beq         $v0, $zero, L_40005008
    if (ctx->r2 == 0) {
        // 0x40004DB8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004DB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004DBC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x40004DC0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x40004DC4: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x40004DC8: jal         0x40004060
    // 0x40004DCC: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    ovl_actor_main_4060(rdram, ctx);
        goto after_9;
    // 0x40004DCC: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_9:
    // 0x40004DD0: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x40004DD4: beq         $v0, $zero, L_40005008
    if (ctx->r2 == 0) {
        // 0x40004DD8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004DDC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x40004DE0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x40004DE4: lw          $a1, 0x0($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X0);
    // 0x40004DE8: jal         0x40003C3C
    // 0x40004DEC: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    ovl_actor_main_3C3C(rdram, ctx);
        goto after_10;
    // 0x40004DEC: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_10:
    // 0x40004DF0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x40004DF4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x40004DF8: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x40004DFC: jal         0x40003B18
    // 0x40004E00: nop

    ovl_actor_main_3B18(rdram, ctx);
        goto after_11;
    // 0x40004E00: nop

    after_11:
    // 0x40004E04: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x40004E08: b           L_40005004
    // 0x40004E0C: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
        goto L_40005004;
    // 0x40004E0C: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
L_40004E10:
    // 0x40004E10: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x40004E14: jal         0x400039F8
    // 0x40004E18: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_actor_main_39F8(rdram, ctx);
        goto after_12;
    // 0x40004E18: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_12:
    // 0x40004E1C: b           L_40005008
    // 0x40004E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40005008;
    // 0x40004E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40004E24:
    // 0x40004E24: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40004E28: beq         $a2, $at, L_40005008
    if (ctx->r6 == ctx->r1) {
        // 0x40004E2C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004E2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004E30: lw          $t8, 0x90($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X90);
    // 0x40004E34: nop

    // 0x40004E38: sll         $t0, $t8, 12
    ctx->r8 = S32(ctx->r24 << 12);
    // 0x40004E3C: bgez        $t0, L_40005008
    if (SIGNED(ctx->r8) >= 0) {
        // 0x40004E40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004E44: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x40004E48: lw          $t1, 0x2EC($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X2EC);
    // 0x40004E4C: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x40004E50: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x40004E54: bne         $t1, $t2, L_40005008
    if (ctx->r9 != ctx->r10) {
        // 0x40004E58: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004E58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004E5C: jal         0x40004B04
    // 0x40004E60: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    ovl_actor_main_4B04(rdram, ctx);
        goto after_13;
    // 0x40004E60: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_13:
    // 0x40004E64: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x40004E68: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x40004E6C: b           L_40005004
    // 0x40004E70: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
        goto L_40005004;
    // 0x40004E70: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
L_40004E74:
    // 0x40004E74: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40004E78: beq         $a2, $at, L_40005008
    if (ctx->r6 == ctx->r1) {
        // 0x40004E7C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004E7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004E80: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x40004E84: jal         0x40004AB0
    // 0x40004E88: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_actor_main_4AB0(rdram, ctx);
        goto after_14;
    // 0x40004E88: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_14:
    // 0x40004E8C: b           L_40005008
    // 0x40004E90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40005008;
    // 0x40004E90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004E94: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_40004E98:
    // 0x40004E98: beq         $a2, $at, L_40005008
    if (ctx->r6 == ctx->r1) {
        // 0x40004E9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004E9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004EA0: lw          $v0, 0x90($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X90);
    // 0x40004EA4: nop

    // 0x40004EA8: sll         $t9, $v0, 10
    ctx->r25 = S32(ctx->r2 << 10);
    // 0x40004EAC: bgez        $t9, L_40005004
    if (SIGNED(ctx->r25) >= 0) {
        // 0x40004EB0: sll         $t3, $v0, 9
        ctx->r11 = S32(ctx->r2 << 9);
            goto L_40005004;
    }
    // 0x40004EB0: sll         $t3, $v0, 9
    ctx->r11 = S32(ctx->r2 << 9);
    // 0x40004EB4: bgez        $t3, L_40005008
    if (SIGNED(ctx->r11) >= 0) {
        // 0x40004EB8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004EBC: lw          $t4, 0x14($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X14);
    // 0x40004EC0: lw          $t5, 0x34C($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X34C);
    // 0x40004EC4: nop

    // 0x40004EC8: bne         $t4, $t5, L_40005008
    if (ctx->r12 != ctx->r13) {
        // 0x40004ECC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004ECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004ED0: b           L_40005004
    // 0x40004ED4: sw          $a3, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r7;
        goto L_40005004;
    // 0x40004ED4: sw          $a3, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r7;
L_40004ED8:
    // 0x40004ED8: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    // 0x40004EDC: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x40004EE0: bne         $t6, $at, L_40005004
    if (ctx->r14 != ctx->r1) {
        // 0x40004EE4: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_40005004;
    }
    // 0x40004EE4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40004EE8: beq         $a2, $at, L_40005008
    if (ctx->r6 == ctx->r1) {
        // 0x40004EEC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004EEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004EF0: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x40004EF4: jal         0x40004854
    // 0x40004EF8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_actor_main_4854(rdram, ctx);
        goto after_15;
    // 0x40004EF8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_15:
    // 0x40004EFC: b           L_40005008
    // 0x40004F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40005008;
    // 0x40004F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40004F04:
    // 0x40004F04: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x40004F08: nop

    // 0x40004F0C: addiu       $t8, $t7, -0xC
    ctx->r24 = ADD32(ctx->r15, -0XC);
    // 0x40004F10: sltiu       $at, $t8, 0x20
    ctx->r1 = ctx->r24 < 0X20 ? 1 : 0;
    // 0x40004F14: beq         $at, $zero, L_40005004
    if (ctx->r1 == 0) {
        // 0x40004F18: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_40005004;
    }
    // 0x40004F18: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x40004F1C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40004F20: addu        $at, $at, $t8
    gpr jr_addend_40004F2C = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x40004F24: lw          $t8, -0x1A88($at)
    ctx->r24 = ADD32(ctx->r1, -0X1A88);
    // 0x40004F28: nop

    // 0x40004F2C: jr          $t8
    // 0x40004F30: nop

    switch (jr_addend_40004F2C >> 2) {
        case 0: goto L_40004F34; break;
        case 1: goto L_40005004; break;
        case 2: goto L_40005004; break;
        case 3: goto L_40005004; break;
        case 4: goto L_40005004; break;
        case 5: goto L_40005004; break;
        case 6: goto L_40005004; break;
        case 7: goto L_40005004; break;
        case 8: goto L_40005004; break;
        case 9: goto L_40005004; break;
        case 10: goto L_40005004; break;
        case 11: goto L_40005004; break;
        case 12: goto L_40005004; break;
        case 13: goto L_40005004; break;
        case 14: goto L_40005004; break;
        case 15: goto L_40005004; break;
        case 16: goto L_40005004; break;
        case 17: goto L_40005004; break;
        case 18: goto L_40005004; break;
        case 19: goto L_40005004; break;
        case 20: goto L_40004F54; break;
        case 21: goto L_40005004; break;
        case 22: goto L_40004F68; break;
        case 23: goto L_40005004; break;
        case 24: goto L_40005004; break;
        case 25: goto L_40005004; break;
        case 26: goto L_40005004; break;
        case 27: goto L_40005004; break;
        case 28: goto L_40005004; break;
        case 29: goto L_40004F7C; break;
        case 30: goto L_40005004; break;
        case 31: goto L_40004FB8; break;
        default: switch_error(__func__, 0x40004F2C, 0x4001E578);
    }
    // 0x40004F30: nop

L_40004F34:
    // 0x40004F34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40004F38: beq         $a2, $at, L_40005008
    if (ctx->r6 == ctx->r1) {
        // 0x40004F3C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004F3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004F40: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x40004F44: jal         0x400039C4
    // 0x40004F48: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_actor_main_39C4(rdram, ctx);
        goto after_16;
    // 0x40004F48: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_16:
    // 0x40004F4C: b           L_40005008
    // 0x40004F50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40005008;
    // 0x40004F50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40004F54:
    // 0x40004F54: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x40004F58: jal         0x40004668
    // 0x40004F5C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_actor_main_4668(rdram, ctx);
        goto after_17;
    // 0x40004F5C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_17:
    // 0x40004F60: b           L_40005008
    // 0x40004F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40005008;
    // 0x40004F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40004F68:
    // 0x40004F68: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x40004F6C: jal         0x40004550
    // 0x40004F70: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_actor_main_4550(rdram, ctx);
        goto after_18;
    // 0x40004F70: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_18:
    // 0x40004F74: b           L_40005008
    // 0x40004F78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40005008;
    // 0x40004F78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40004F7C:
    // 0x40004F7C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40004F80: beq         $a2, $at, L_40005008
    if (ctx->r6 == ctx->r1) {
        // 0x40004F84: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004F84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004F88: lw          $t0, 0x4($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X4);
    // 0x40004F8C: nop

    // 0x40004F90: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x40004F94: nop

    // 0x40004F98: andi        $t2, $t1, 0x400
    ctx->r10 = ctx->r9 & 0X400;
    // 0x40004F9C: bne         $t2, $zero, L_40005008
    if (ctx->r10 != 0) {
        // 0x40004FA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004FA4: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x40004FA8: jal         0x400041E4
    // 0x40004FAC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_actor_main_41E4(rdram, ctx);
        goto after_19;
    // 0x40004FAC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_19:
    // 0x40004FB0: b           L_40005008
    // 0x40004FB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40005008;
    // 0x40004FB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40004FB8:
    // 0x40004FB8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40004FBC: beq         $a2, $at, L_40005008
    if (ctx->r6 == ctx->r1) {
        // 0x40004FC0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004FC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004FC4: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x40004FC8: lw          $t3, 0x2EC($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X2EC);
    // 0x40004FCC: nop

    // 0x40004FD0: bne         $t9, $t3, L_40005008
    if (ctx->r25 != ctx->r11) {
        // 0x40004FD4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004FD8: jal         0x40004B04
    // 0x40004FDC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_actor_main_4B04(rdram, ctx);
        goto after_20;
    // 0x40004FDC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_20:
    // 0x40004FE0: b           L_40005008
    // 0x40004FE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40005008;
    // 0x40004FE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40004FE8:
    // 0x40004FE8: lw          $t4, 0x10($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X10);
    // 0x40004FEC: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x40004FF0: bne         $t4, $at, L_40005008
    if (ctx->r12 != ctx->r1) {
        // 0x40004FF4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005008;
    }
    // 0x40004FF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40004FF8: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x40004FFC: jal         0x40004550
    // 0x40005000: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_actor_main_4550(rdram, ctx);
        goto after_21;
    // 0x40005000: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_21:
L_40005004:
    // 0x40005004: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40005008:
    // 0x40005008: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4000500C: jr          $ra
    // 0x40005010: nop

    return;
    // 0x40005010: nop

;}
RECOMP_FUNC void ovl_actor_main_5014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40005014: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40005018: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000501C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x40005020: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40005024: jal         0x40001804
    // 0x40005028: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    ovl_actor_main_1804(rdram, ctx);
        goto after_0;
    // 0x40005028: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_0:
    // 0x4000502C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x40005030: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40005034: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x40005038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000503C: beq         $v1, $at, L_40005054
    if (ctx->r3 == ctx->r1) {
        // 0x40005040: sll         $a1, $v1, 2
        ctx->r5 = S32(ctx->r3 << 2);
            goto L_40005054;
    }
    // 0x40005040: sll         $a1, $v1, 2
    ctx->r5 = S32(ctx->r3 << 2);
    // 0x40005044: jal         0x40001804
    // 0x40005048: addiu       $a1, $a1, 0x3E7
    ctx->r5 = ADD32(ctx->r5, 0X3E7);
    ovl_actor_main_1804(rdram, ctx);
        goto after_1;
    // 0x40005048: addiu       $a1, $a1, 0x3E7
    ctx->r5 = ADD32(ctx->r5, 0X3E7);
    after_1:
    // 0x4000504C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x40005050: nop

L_40005054:
    // 0x40005054: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x40005058: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000505C: beq         $v1, $at, L_40005078
    if (ctx->r3 == ctx->r1) {
        // 0x40005060: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40005078;
    }
    // 0x40005060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40005064: sll         $a1, $v1, 2
    ctx->r5 = S32(ctx->r3 << 2);
    // 0x40005068: jal         0x40001804
    // 0x4000506C: addiu       $a1, $a1, 0x3E8
    ctx->r5 = ADD32(ctx->r5, 0X3E8);
    ovl_actor_main_1804(rdram, ctx);
        goto after_2;
    // 0x4000506C: addiu       $a1, $a1, 0x3E8
    ctx->r5 = ADD32(ctx->r5, 0X3E8);
    after_2:
    // 0x40005070: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x40005074: nop

L_40005078:
    // 0x40005078: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x4000507C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40005080: beq         $v1, $at, L_4000509C
    if (ctx->r3 == ctx->r1) {
        // 0x40005084: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000509C;
    }
    // 0x40005084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40005088: sll         $a1, $v1, 2
    ctx->r5 = S32(ctx->r3 << 2);
    // 0x4000508C: jal         0x40001804
    // 0x40005090: addiu       $a1, $a1, 0x3E9
    ctx->r5 = ADD32(ctx->r5, 0X3E9);
    ovl_actor_main_1804(rdram, ctx);
        goto after_3;
    // 0x40005090: addiu       $a1, $a1, 0x3E9
    ctx->r5 = ADD32(ctx->r5, 0X3E9);
    after_3:
    // 0x40005094: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x40005098: nop

L_4000509C:
    // 0x4000509C: lw          $v1, 0x20($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X20);
    // 0x400050A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x400050A4: beq         $v1, $at, L_400050B8
    if (ctx->r3 == ctx->r1) {
        // 0x400050A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400050B8;
    }
    // 0x400050A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400050AC: sll         $a1, $v1, 2
    ctx->r5 = S32(ctx->r3 << 2);
    // 0x400050B0: jal         0x40001804
    // 0x400050B4: addiu       $a1, $a1, 0x3EA
    ctx->r5 = ADD32(ctx->r5, 0X3EA);
    ovl_actor_main_1804(rdram, ctx);
        goto after_4;
    // 0x400050B4: addiu       $a1, $a1, 0x3EA
    ctx->r5 = ADD32(ctx->r5, 0X3EA);
    after_4:
L_400050B8:
    // 0x400050B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400050BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x400050C0: jr          $ra
    // 0x400050C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x400050C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_actor_main_50C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400050C8: lw          $a1, 0xC0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC0);
    // 0x400050CC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x400050D0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x400050D4: beq         $a1, $at, L_400050E8
    if (ctx->r5 == ctx->r1) {
        // 0x400050D8: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_400050E8;
    }
    // 0x400050D8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x400050DC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x400050E0: bne         $v0, $at, L_400050EC
    if (ctx->r2 != ctx->r1) {
        // 0x400050E4: nop
    
            goto L_400050EC;
    }
    // 0x400050E4: nop

L_400050E8:
    // 0x400050E8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_400050EC:
    // 0x400050EC: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x400050F0: nop

    // 0x400050F4: slti        $at, $v0, 0x13
    ctx->r1 = SIGNED(ctx->r2) < 0X13 ? 1 : 0;
    // 0x400050F8: bne         $at, $zero, L_40005104
    if (ctx->r1 != 0) {
        // 0x400050FC: slti        $at, $v0, 0x1F
        ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
            goto L_40005104;
    }
    // 0x400050FC: slti        $at, $v0, 0x1F
    ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x40005100: bne         $at, $zero, L_40005110
    if (ctx->r1 != 0) {
        // 0x40005104: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_40005110;
    }
L_40005104:
    // 0x40005104: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x40005108: bne         $a1, $at, L_40005114
    if (ctx->r5 != ctx->r1) {
        // 0x4000510C: nop
    
            goto L_40005114;
    }
    // 0x4000510C: nop

L_40005110:
    // 0x40005110: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_40005114:
    // 0x40005114: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x40005118: nop

    // 0x4000511C: sll         $t6, $v0, 11
    ctx->r14 = S32(ctx->r2 << 11);
    // 0x40005120: bltz        $t6, L_40005160
    if (SIGNED(ctx->r14) < 0) {
        // 0x40005124: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_40005160;
    }
    // 0x40005124: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x40005128: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000512C: lwc1        $f4, 0x48($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X48);
    // 0x40005130: nop

    // 0x40005134: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x40005138: nop

    // 0x4000513C: bc1f        L_4000515C
    if (!c1cs) {
        // 0x40005140: nop
    
            goto L_4000515C;
    }
    // 0x40005140: nop

    // 0x40005144: lwc1        $f6, 0x50($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X50);
    // 0x40005148: nop

    // 0x4000514C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x40005150: nop

    // 0x40005154: bc1t        L_40005160
    if (c1cs) {
        // 0x40005158: nop
    
            goto L_40005160;
    }
    // 0x40005158: nop

L_4000515C:
    // 0x4000515C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_40005160:
    // 0x40005160: beq         $t7, $zero, L_4000516C
    if (ctx->r15 == 0) {
        // 0x40005164: nop
    
            goto L_4000516C;
    }
    // 0x40005164: nop

    // 0x40005168: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_4000516C:
    // 0x4000516C: jr          $ra
    // 0x40005170: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x40005170: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_5174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40005174: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40005178: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000517C: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x40005180: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x40005184: nop

    // 0x40005188: andi        $t6, $v0, 0x20
    ctx->r14 = ctx->r2 & 0X20;
    // 0x4000518C: beq         $t6, $zero, L_4000519C
    if (ctx->r14 == 0) {
        // 0x40005190: ori         $t8, $zero, 0x1
        ctx->r24 = 0 | 0X1;
            goto L_4000519C;
    }
    // 0x40005190: ori         $t8, $zero, 0x1
    ctx->r24 = 0 | 0X1;
    // 0x40005194: b           L_400051B8
    // 0x40005198: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
        goto L_400051B8;
    // 0x40005198: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
L_4000519C:
    // 0x4000519C: andi        $t9, $v0, 0x1000
    ctx->r25 = ctx->r2 & 0X1000;
    // 0x400051A0: beq         $t9, $zero, L_400051B8
    if (ctx->r25 == 0) {
        // 0x400051A4: nop
    
            goto L_400051B8;
    }
    // 0x400051A4: nop

    // 0x400051A8: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x400051AC: nop

    // 0x400051B0: ori         $t1, $t0, 0x10
    ctx->r9 = ctx->r8 | 0X10;
    // 0x400051B4: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
L_400051B8:
    // 0x400051B8: lw          $t2, 0xC0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC0);
    // 0x400051BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400051C0: bne         $t2, $at, L_400051F4
    if (ctx->r10 != ctx->r1) {
        // 0x400051C4: nop
    
            goto L_400051F4;
    }
    // 0x400051C4: nop

    // 0x400051C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x400051CC: jal         0x40009B00
    // 0x400051D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_actor_main_9B00(rdram, ctx);
        goto after_0;
    // 0x400051D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x400051D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x400051D8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x400051DC: bne         $v0, $zero, L_400051F4
    if (ctx->r2 != 0) {
        // 0x400051E0: nop
    
            goto L_400051F4;
    }
    // 0x400051E0: nop

    // 0x400051E4: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x400051E8: nop

    // 0x400051EC: ori         $t4, $t3, 0x40
    ctx->r12 = ctx->r11 | 0X40;
    // 0x400051F0: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
L_400051F4:
    // 0x400051F4: lw          $t5, 0xC0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XC0);
    // 0x400051F8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x400051FC: bne         $t5, $at, L_40005214
    if (ctx->r13 != ctx->r1) {
        // 0x40005200: nop
    
            goto L_40005214;
    }
    // 0x40005200: nop

    // 0x40005204: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x40005208: nop

    // 0x4000520C: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x40005210: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
L_40005214:
    // 0x40005214: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x40005218: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000521C: andi        $t8, $v0, 0x8
    ctx->r24 = ctx->r2 & 0X8;
    // 0x40005220: beq         $t8, $zero, L_40005244
    if (ctx->r24 == 0) {
        // 0x40005224: andi        $t1, $v0, 0x200
        ctx->r9 = ctx->r2 & 0X200;
            goto L_40005244;
    }
    // 0x40005224: andi        $t1, $v0, 0x200
    ctx->r9 = ctx->r2 & 0X200;
    // 0x40005228: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x4000522C: nop

    // 0x40005230: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x40005234: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x40005238: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x4000523C: nop

    // 0x40005240: andi        $t1, $v0, 0x200
    ctx->r9 = ctx->r2 & 0X200;
L_40005244:
    // 0x40005244: beq         $t1, $zero, L_40005268
    if (ctx->r9 == 0) {
        // 0x40005248: andi        $t4, $v0, 0x40
        ctx->r12 = ctx->r2 & 0X40;
            goto L_40005268;
    }
    // 0x40005248: andi        $t4, $v0, 0x40
    ctx->r12 = ctx->r2 & 0X40;
    // 0x4000524C: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x40005250: nop

    // 0x40005254: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x40005258: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x4000525C: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x40005260: nop

    // 0x40005264: andi        $t4, $v0, 0x40
    ctx->r12 = ctx->r2 & 0X40;
L_40005268:
    // 0x40005268: beq         $t4, $zero, L_4000528C
    if (ctx->r12 == 0) {
        // 0x4000526C: andi        $t7, $v0, 0x80
        ctx->r15 = ctx->r2 & 0X80;
            goto L_4000528C;
    }
    // 0x4000526C: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
    // 0x40005270: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x40005274: nop

    // 0x40005278: ori         $t6, $t5, 0x8
    ctx->r14 = ctx->r13 | 0X8;
    // 0x4000527C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x40005280: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x40005284: nop

    // 0x40005288: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
L_4000528C:
    // 0x4000528C: beq         $t7, $zero, L_400052B0
    if (ctx->r15 == 0) {
        // 0x40005290: andi        $t0, $v0, 0x4
        ctx->r8 = ctx->r2 & 0X4;
            goto L_400052B0;
    }
    // 0x40005290: andi        $t0, $v0, 0x4
    ctx->r8 = ctx->r2 & 0X4;
    // 0x40005294: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x40005298: nop

    // 0x4000529C: ori         $t9, $t8, 0x80
    ctx->r25 = ctx->r24 | 0X80;
    // 0x400052A0: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x400052A4: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x400052A8: nop

    // 0x400052AC: andi        $t0, $v0, 0x4
    ctx->r8 = ctx->r2 & 0X4;
L_400052B0:
    // 0x400052B0: beq         $t0, $zero, L_400052C8
    if (ctx->r8 == 0) {
        // 0x400052B4: nop
    
            goto L_400052C8;
    }
    // 0x400052B4: nop

    // 0x400052B8: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x400052BC: nop

    // 0x400052C0: ori         $t2, $t1, 0x100
    ctx->r10 = ctx->r9 | 0X100;
    // 0x400052C4: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
L_400052C8:
    // 0x400052C8: lwc1        $f4, 0x48($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X48);
    // 0x400052CC: nop

    // 0x400052D0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x400052D4: nop

    // 0x400052D8: bc1f        L_400052F8
    if (!c1cs) {
        // 0x400052DC: nop
    
            goto L_400052F8;
    }
    // 0x400052DC: nop

    // 0x400052E0: lwc1        $f6, 0x50($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X50);
    // 0x400052E4: nop

    // 0x400052E8: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x400052EC: nop

    // 0x400052F0: bc1t        L_40005308
    if (c1cs) {
        // 0x400052F4: nop
    
            goto L_40005308;
    }
    // 0x400052F4: nop

L_400052F8:
    // 0x400052F8: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x400052FC: nop

    // 0x40005300: ori         $t4, $t3, 0x200
    ctx->r12 = ctx->r11 | 0X200;
    // 0x40005304: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
L_40005308:
    // 0x40005308: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x4000530C: nop

    // 0x40005310: andi        $t5, $v0, 0x100
    ctx->r13 = ctx->r2 & 0X100;
    // 0x40005314: beq         $t5, $zero, L_40005338
    if (ctx->r13 == 0) {
        // 0x40005318: sll         $t8, $v0, 15
        ctx->r24 = S32(ctx->r2 << 15);
            goto L_40005338;
    }
    // 0x40005318: sll         $t8, $v0, 15
    ctx->r24 = S32(ctx->r2 << 15);
    // 0x4000531C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x40005320: nop

    // 0x40005324: ori         $t7, $t6, 0x400
    ctx->r15 = ctx->r14 | 0X400;
    // 0x40005328: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x4000532C: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x40005330: nop

    // 0x40005334: sll         $t8, $v0, 15
    ctx->r24 = S32(ctx->r2 << 15);
L_40005338:
    // 0x40005338: bgez        $t8, L_4000535C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x4000533C: sll         $t1, $v0, 10
        ctx->r9 = S32(ctx->r2 << 10);
            goto L_4000535C;
    }
    // 0x4000533C: sll         $t1, $v0, 10
    ctx->r9 = S32(ctx->r2 << 10);
    // 0x40005340: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x40005344: nop

    // 0x40005348: ori         $t0, $t9, 0x800
    ctx->r8 = ctx->r25 | 0X800;
    // 0x4000534C: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x40005350: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x40005354: nop

    // 0x40005358: sll         $t1, $v0, 10
    ctx->r9 = S32(ctx->r2 << 10);
L_4000535C:
    // 0x4000535C: bgez        $t1, L_40005380
    if (SIGNED(ctx->r9) >= 0) {
        // 0x40005360: sll         $t4, $v0, 9
        ctx->r12 = S32(ctx->r2 << 9);
            goto L_40005380;
    }
    // 0x40005360: sll         $t4, $v0, 9
    ctx->r12 = S32(ctx->r2 << 9);
    // 0x40005364: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x40005368: nop

    // 0x4000536C: ori         $t3, $t2, 0x1000
    ctx->r11 = ctx->r10 | 0X1000;
    // 0x40005370: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x40005374: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x40005378: nop

    // 0x4000537C: sll         $t4, $v0, 9
    ctx->r12 = S32(ctx->r2 << 9);
L_40005380:
    // 0x40005380: bgez        $t4, L_400053A4
    if (SIGNED(ctx->r12) >= 0) {
        // 0x40005384: sll         $t7, $v0, 7
        ctx->r15 = S32(ctx->r2 << 7);
            goto L_400053A4;
    }
    // 0x40005384: sll         $t7, $v0, 7
    ctx->r15 = S32(ctx->r2 << 7);
    // 0x40005388: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x4000538C: nop

    // 0x40005390: ori         $t6, $t5, 0x2000
    ctx->r14 = ctx->r13 | 0X2000;
    // 0x40005394: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x40005398: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x4000539C: nop

    // 0x400053A0: sll         $t7, $v0, 7
    ctx->r15 = S32(ctx->r2 << 7);
L_400053A4:
    // 0x400053A4: bgez        $t7, L_400053BC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x400053A8: nop
    
            goto L_400053BC;
    }
    // 0x400053A8: nop

    // 0x400053AC: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x400053B0: nop

    // 0x400053B4: ori         $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 | 0X4000;
    // 0x400053B8: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
L_400053BC:
    // 0x400053BC: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x400053C0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x400053C4: bne         $t0, $at, L_400053F4
    if (ctx->r8 != ctx->r1) {
        // 0x400053C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_400053F4;
    }
    // 0x400053C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400053CC: lw          $t1, 0x90($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X90);
    // 0x400053D0: nop

    // 0x400053D4: sll         $t2, $t1, 5
    ctx->r10 = S32(ctx->r9 << 5);
    // 0x400053D8: bgez        $t2, L_400053F4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x400053DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_400053F4;
    }
    // 0x400053DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400053E0: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x400053E4: nop

    // 0x400053E8: ori         $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 | 0X8000;
    // 0x400053EC: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x400053F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400053F4:
    // 0x400053F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x400053F8: jr          $ra
    // 0x400053FC: nop

    return;
    // 0x400053FC: nop

;}
RECOMP_FUNC void ovl_actor_main_5400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40005400: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40005404: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40005408: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000540C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x40005410: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x40005414: beq         $t7, $zero, L_400054CC
    if (ctx->r15 == 0) {
        // 0x40005418: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_400054CC;
    }
    // 0x40005418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000541C: lw          $v0, 0x2EC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2EC);
    // 0x40005420: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40005424: beq         $v0, $at, L_400054C8
    if (ctx->r2 == ctx->r1) {
        // 0x40005428: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_400054C8;
    }
    // 0x40005428: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x4000542C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x40005430: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x40005434: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x40005438: jal         0x400006C4
    // 0x4000543C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4000543C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x40005440: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x40005444: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x40005448: bne         $v1, $zero, L_40005484
    if (ctx->r3 != 0) {
        // 0x4000544C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_40005484;
    }
    // 0x4000544C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x40005450: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x40005454: jal         0x400016B4
    // 0x40005458: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    ovl_actor_main_16B4(rdram, ctx);
        goto after_1;
    // 0x40005458: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_1:
    // 0x4000545C: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x40005460: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40005464: bne         $v0, $at, L_40005474
    if (ctx->r2 != ctx->r1) {
        // 0x40005468: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_40005474;
    }
    // 0x40005468: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x4000546C: b           L_400054C8
    // 0x40005470: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
        goto L_400054C8;
    // 0x40005470: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
L_40005474:
    // 0x40005474: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x40005478: lw          $t9, 0x1C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1C);
    // 0x4000547C: b           L_400054C8
    // 0x40005480: sw          $t9, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r25;
        goto L_400054C8;
    // 0x40005480: sw          $t9, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r25;
L_40005484:
    // 0x40005484: bne         $v1, $v0, L_400054B0
    if (ctx->r3 != ctx->r2) {
        // 0x40005488: nop
    
            goto L_400054B0;
    }
    // 0x40005488: nop

    // 0x4000548C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x40005490: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x40005494: bne         $t0, $v1, L_400054A8
    if (ctx->r8 != ctx->r3) {
        // 0x40005498: nop
    
            goto L_400054A8;
    }
    // 0x40005498: nop

    // 0x4000549C: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    // 0x400054A0: b           L_400054C8
    // 0x400054A4: sw          $zero, 0x8($a3)
    MEM_W(0X8, ctx->r7) = 0;
        goto L_400054C8;
    // 0x400054A4: sw          $zero, 0x8($a3)
    MEM_W(0X8, ctx->r7) = 0;
L_400054A8:
    // 0x400054A8: b           L_400054C8
    // 0x400054AC: sw          $v1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r3;
        goto L_400054C8;
    // 0x400054AC: sw          $v1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r3;
L_400054B0:
    // 0x400054B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x400054B4: bne         $v1, $v0, L_400054C4
    if (ctx->r3 != ctx->r2) {
        // 0x400054B8: addiu       $t1, $zero, 0x4
        ctx->r9 = ADD32(0, 0X4);
            goto L_400054C4;
    }
    // 0x400054B8: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x400054BC: b           L_400054C8
    // 0x400054C0: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
        goto L_400054C8;
    // 0x400054C0: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
L_400054C4:
    // 0x400054C4: sw          $t1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r9;
L_400054C8:
    // 0x400054C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400054CC:
    // 0x400054CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x400054D0: jr          $ra
    // 0x400054D4: nop

    return;
    // 0x400054D4: nop

;}
RECOMP_FUNC void ovl_actor_main_54D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400054D8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x400054DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400054E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x400054E4: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x400054E8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x400054EC: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x400054F0: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    // 0x400054F4: jal         0x400016B4
    // 0x400054F8: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    ovl_actor_main_16B4(rdram, ctx);
        goto after_0;
    // 0x400054F8: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    after_0:
    // 0x400054FC: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x40005500: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x40005504: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40005508: bne         $v0, $at, L_4000551C
    if (ctx->r2 != ctx->r1) {
        // 0x4000550C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_4000551C;
    }
    // 0x4000550C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x40005510: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x40005514: b           L_40005744
    // 0x40005518: sw          $t6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r14;
        goto L_40005744;
    // 0x40005518: sw          $t6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r14;
L_4000551C:
    // 0x4000551C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x40005520: nop

    // 0x40005524: addiu       $t8, $t7, -0x7
    ctx->r24 = ADD32(ctx->r15, -0X7);
    // 0x40005528: sltiu       $at, $t8, 0x21
    ctx->r1 = ctx->r24 < 0X21 ? 1 : 0;
    // 0x4000552C: beq         $at, $zero, L_40005744
    if (ctx->r1 == 0) {
        // 0x40005530: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_40005744;
    }
    // 0x40005530: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x40005534: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40005538: addu        $at, $at, $t8
    gpr jr_addend_40005544 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x4000553C: lw          $t8, -0x1A08($at)
    ctx->r24 = ADD32(ctx->r1, -0X1A08);
    // 0x40005540: nop

    // 0x40005544: jr          $t8
    // 0x40005548: nop

    switch (jr_addend_40005544 >> 2) {
        case 0: goto L_4000554C; break;
        case 1: goto L_40005744; break;
        case 2: goto L_40005568; break;
        case 3: goto L_40005578; break;
        case 4: goto L_40005744; break;
        case 5: goto L_40005744; break;
        case 6: goto L_4000558C; break;
        case 7: goto L_40005744; break;
        case 8: goto L_40005744; break;
        case 9: goto L_400055A0; break;
        case 10: goto L_40005744; break;
        case 11: goto L_40005744; break;
        case 12: goto L_40005744; break;
        case 13: goto L_400055B4; break;
        case 14: goto L_400055E4; break;
        case 15: goto L_40005624; break;
        case 16: goto L_40005744; break;
        case 17: goto L_40005744; break;
        case 18: goto L_40005744; break;
        case 19: goto L_40005744; break;
        case 20: goto L_40005744; break;
        case 21: goto L_40005744; break;
        case 22: goto L_40005744; break;
        case 23: goto L_40005634; break;
        case 24: goto L_40005744; break;
        case 25: goto L_40005744; break;
        case 26: goto L_40005650; break;
        case 27: goto L_40005694; break;
        case 28: goto L_40005744; break;
        case 29: goto L_40005744; break;
        case 30: goto L_40005744; break;
        case 31: goto L_400056FC; break;
        case 32: goto L_40005718; break;
        default: switch_error(__func__, 0x40005544, 0x4001E5F8);
    }
    // 0x40005548: nop

L_4000554C:
    // 0x4000554C: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x40005550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40005554: jal         0x400050C8
    // 0x40005558: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    ovl_actor_main_50C8(rdram, ctx);
        goto after_1;
    // 0x40005558: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    after_1:
    // 0x4000555C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x40005560: b           L_40005744
    // 0x40005564: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
        goto L_40005744;
    // 0x40005564: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
L_40005568:
    // 0x40005568: jal         0x40005014
    // 0x4000556C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_5014(rdram, ctx);
        goto after_2;
    // 0x4000556C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x40005570: b           L_40005748
    // 0x40005574: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40005748;
    // 0x40005574: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40005578:
    // 0x40005578: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x4000557C: nop

    // 0x40005580: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x40005584: b           L_40005744
    // 0x40005588: sw          $t1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r9;
        goto L_40005744;
    // 0x40005588: sw          $t1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r9;
L_4000558C:
    // 0x4000558C: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x40005590: jal         0x40005174
    // 0x40005594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_5174(rdram, ctx);
        goto after_3;
    // 0x40005594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x40005598: b           L_40005748
    // 0x4000559C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40005748;
    // 0x4000559C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400055A0:
    // 0x400055A0: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x400055A4: jal         0x40005400
    // 0x400055A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_5400(rdram, ctx);
        goto after_4;
    // 0x400055A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x400055AC: b           L_40005748
    // 0x400055B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40005748;
    // 0x400055B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400055B4:
    // 0x400055B4: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x400055B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400055BC: jal         0x400063F0
    // 0x400055C0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    ovl_actor_main_63F0(rdram, ctx);
        goto after_5;
    // 0x400055C0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_5:
    // 0x400055C4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x400055C8: beq         $v0, $zero, L_400055DC
    if (ctx->r2 == 0) {
        // 0x400055CC: nop
    
            goto L_400055DC;
    }
    // 0x400055CC: nop

    // 0x400055D0: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x400055D4: b           L_40005744
    // 0x400055D8: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
        goto L_40005744;
    // 0x400055D8: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
L_400055DC:
    // 0x400055DC: b           L_40005744
    // 0x400055E0: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
        goto L_40005744;
    // 0x400055E0: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
L_400055E4:
    // 0x400055E4: lw          $t3, 0x90($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X90);
    // 0x400055E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400055EC: sll         $t4, $t3, 15
    ctx->r12 = S32(ctx->r11 << 15);
    // 0x400055F0: bgez        $t4, L_40005748
    if (SIGNED(ctx->r12) >= 0) {
        // 0x400055F4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40005748;
    }
    // 0x400055F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400055F8: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x400055FC: jal         0x40006428
    // 0x40005600: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    ovl_actor_main_6428(rdram, ctx);
        goto after_6;
    // 0x40005600: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_6:
    // 0x40005604: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x40005608: beq         $v0, $zero, L_4000561C
    if (ctx->r2 == 0) {
        // 0x4000560C: nop
    
            goto L_4000561C;
    }
    // 0x4000560C: nop

    // 0x40005610: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x40005614: b           L_40005744
    // 0x40005618: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
        goto L_40005744;
    // 0x40005618: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
L_4000561C:
    // 0x4000561C: b           L_40005744
    // 0x40005620: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
        goto L_40005744;
    // 0x40005620: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
L_40005624:
    // 0x40005624: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x40005628: addiu       $t6, $v0, 0x34
    ctx->r14 = ADD32(ctx->r2, 0X34);
    // 0x4000562C: b           L_40005744
    // 0x40005630: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
        goto L_40005744;
    // 0x40005630: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
L_40005634:
    // 0x40005634: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x40005638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000563C: jal         0x4000DA0C
    // 0x40005640: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    ovl_actor_main_DA0C(rdram, ctx);
        goto after_7;
    // 0x40005640: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_7:
    // 0x40005644: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x40005648: b           L_40005744
    // 0x4000564C: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
        goto L_40005744;
    // 0x4000564C: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
L_40005650:
    // 0x40005650: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x40005654: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x40005658: bne         $t9, $at, L_40005744
    if (ctx->r25 != ctx->r1) {
        // 0x4000565C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40005744;
    }
    // 0x4000565C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40005660: addiu       $a1, $zero, 0xCF
    ctx->r5 = ADD32(0, 0XCF);
    // 0x40005664: jal         0x4000115C
    // 0x40005668: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_8;
    // 0x40005668: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x4000566C: jal         0x40003544
    // 0x40005670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_3544(rdram, ctx);
        goto after_9;
    // 0x40005670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x40005674: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40005678: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000567C: swc1        $f0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f0.u32l;
    // 0x40005680: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
    // 0x40005684: swc1        $f0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f0.u32l;
    // 0x40005688: lwc1        $f4, -0x1984($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1984);
    // 0x4000568C: b           L_40005744
    // 0x40005690: swc1        $f4, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f4.u32l;
        goto L_40005744;
    // 0x40005690: swc1        $f4, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f4.u32l;
L_40005694:
    // 0x40005694: jal         0x40004B04
    // 0x40005698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_4B04(rdram, ctx);
        goto after_10;
    // 0x40005698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x4000569C: jal         0x40003544
    // 0x400056A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_3544(rdram, ctx);
        goto after_11;
    // 0x400056A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x400056A4: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x400056A8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x400056AC: jal         0x40000CA0
    // 0x400056B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_12;
    // 0x400056B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x400056B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x400056B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400056BC: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
    // 0x400056C0: swc1        $f0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f0.u32l;
    // 0x400056C4: swc1        $f0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f0.u32l;
    // 0x400056C8: jal         0x40007748
    // 0x400056CC: swc1        $f0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f0.u32l;
    ovl_actor_main_7748(rdram, ctx);
        goto after_13;
    // 0x400056CC: swc1        $f0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f0.u32l;
    after_13:
    // 0x400056D0: jal         0x400064C4
    // 0x400056D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_64C4(rdram, ctx);
        goto after_14;
    // 0x400056D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x400056D8: jal         0x4000595C
    // 0x400056DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_595C(rdram, ctx);
        goto after_15;
    // 0x400056DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x400056E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400056E4: jal         0x40008F28
    // 0x400056E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_8F28(rdram, ctx);
        goto after_16;
    // 0x400056E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x400056EC: jal         0x400008D4
    // 0x400056F0: nop

    ovl_actor_main_8D4(rdram, ctx);
        goto after_17;
    // 0x400056F0: nop

    after_17:
    // 0x400056F4: b           L_40005748
    // 0x400056F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40005748;
    // 0x400056F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400056FC:
    // 0x400056FC: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x40005700: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40005704: jal         0x40004458
    // 0x40005708: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    ovl_actor_main_4458(rdram, ctx);
        goto after_18;
    // 0x40005708: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_18:
    // 0x4000570C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x40005710: b           L_40005744
    // 0x40005714: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
        goto L_40005744;
    // 0x40005714: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
L_40005718:
    // 0x40005718: lw          $t2, 0x90($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X90);
    // 0x4000571C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40005720: andi        $t3, $t2, 0x200
    ctx->r11 = ctx->r10 & 0X200;
    // 0x40005724: beq         $t3, $zero, L_40005748
    if (ctx->r11 == 0) {
        // 0x40005728: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40005748;
    }
    // 0x40005728: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000572C: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x40005730: jal         0x400044CC
    // 0x40005734: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    ovl_actor_main_44CC(rdram, ctx);
        goto after_19;
    // 0x40005734: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    after_19:
    // 0x40005738: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x4000573C: nop

    // 0x40005740: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
L_40005744:
    // 0x40005744: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40005748:
    // 0x40005748: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4000574C: jr          $ra
    // 0x40005750: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x40005750: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_actor_main_5754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40005754: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40005758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000575C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x40005760: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x40005764: jal         0x400016B4
    // 0x40005768: nop

    ovl_actor_main_16B4(rdram, ctx);
        goto after_0;
    // 0x40005768: nop

    after_0:
    // 0x4000576C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x40005770: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40005774: lw          $v1, 0xC($t7)
    ctx->r3 = MEM_W(ctx->r15, 0XC);
    // 0x40005778: beq         $v0, $at, L_400057CC
    if (ctx->r2 == ctx->r1) {
        // 0x4000577C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_400057CC;
    }
    // 0x4000577C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x40005780: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x40005784: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    // 0x40005788: bne         $t8, $zero, L_400057A4
    if (ctx->r24 != 0) {
        // 0x4000578C: nop
    
            goto L_400057A4;
    }
    // 0x4000578C: nop

    // 0x40005790: lw          $t9, 0x90($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X90);
    // 0x40005794: nop

    // 0x40005798: andi        $t0, $t9, 0x10
    ctx->r8 = ctx->r25 & 0X10;
    // 0x4000579C: bne         $t0, $zero, L_400057D0
    if (ctx->r8 != 0) {
        // 0x400057A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_400057D0;
    }
    // 0x400057A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400057A4:
    // 0x400057A4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x400057A8: jal         0x40001A8C
    // 0x400057AC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x400057AC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x400057B0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x400057B4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x400057B8: lw          $t2, 0x90($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X90);
    // 0x400057BC: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x400057C0: ori         $t3, $t2, 0x4000
    ctx->r11 = ctx->r10 | 0X4000;
    // 0x400057C4: sw          $t3, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r11;
    // 0x400057C8: sw          $t1, 0x318($a0)
    MEM_W(0X318, ctx->r4) = ctx->r9;
L_400057CC:
    // 0x400057CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400057D0:
    // 0x400057D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x400057D4: jr          $ra
    // 0x400057D8: nop

    return;
    // 0x400057D8: nop

;}
RECOMP_FUNC void ovl_actor_main_57DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400057DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x400057E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400057E4: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x400057E8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x400057EC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x400057F0: sltiu       $at, $t7, 0x1F
    ctx->r1 = ctx->r15 < 0X1F ? 1 : 0;
    // 0x400057F4: beq         $at, $zero, L_4000586C
    if (ctx->r1 == 0) {
        // 0x400057F8: addiu       $a2, $zero, -0x1
        ctx->r6 = ADD32(0, -0X1);
            goto L_4000586C;
    }
    // 0x400057F8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x400057FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x40005800: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40005804: addu        $at, $at, $t7
    gpr jr_addend_40005810 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x40005808: lw          $t7, -0x1980($at)
    ctx->r15 = ADD32(ctx->r1, -0X1980);
    // 0x4000580C: nop

    // 0x40005810: jr          $t7
    // 0x40005814: nop

    switch (jr_addend_40005810 >> 2) {
        case 0: goto L_40005818; break;
        case 1: goto L_40005818; break;
        case 2: goto L_4000586C; break;
        case 3: goto L_4000586C; break;
        case 4: goto L_4000586C; break;
        case 5: goto L_40005818; break;
        case 6: goto L_40005818; break;
        case 7: goto L_40005818; break;
        case 8: goto L_40005818; break;
        case 9: goto L_4000586C; break;
        case 10: goto L_4000586C; break;
        case 11: goto L_4000586C; break;
        case 12: goto L_4000586C; break;
        case 13: goto L_40005818; break;
        case 14: goto L_40005818; break;
        case 15: goto L_40005818; break;
        case 16: goto L_4000586C; break;
        case 17: goto L_40005818; break;
        case 18: goto L_4000586C; break;
        case 19: goto L_40005818; break;
        case 20: goto L_40005818; break;
        case 21: goto L_40005818; break;
        case 22: goto L_40005818; break;
        case 23: goto L_40005818; break;
        case 24: goto L_40005818; break;
        case 25: goto L_40005818; break;
        case 26: goto L_40005818; break;
        case 27: goto L_40005818; break;
        case 28: goto L_4000586C; break;
        case 29: goto L_40005818; break;
        case 30: goto L_40005818; break;
        default: switch_error(__func__, 0x40005810, 0x4001E680);
    }
    // 0x40005814: nop

L_40005818:
    // 0x40005818: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x4000581C: beq         $a1, $at, L_40005844
    if (ctx->r5 == ctx->r1) {
        // 0x40005820: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_40005844;
    }
    // 0x40005820: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x40005824: beq         $a1, $at, L_4000584C
    if (ctx->r5 == ctx->r1) {
        // 0x40005828: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_4000584C;
    }
    // 0x40005828: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x4000582C: beq         $a1, $at, L_40005854
    if (ctx->r5 == ctx->r1) {
        // 0x40005830: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_40005854;
    }
    // 0x40005830: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x40005834: beq         $a1, $at, L_4000585C
    if (ctx->r5 == ctx->r1) {
        // 0x40005838: nop
    
            goto L_4000585C;
    }
    // 0x40005838: nop

    // 0x4000583C: b           L_40005864
    // 0x40005840: lw          $a0, 0x1C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1C);
        goto L_40005864;
    // 0x40005840: lw          $a0, 0x1C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1C);
L_40005844:
    // 0x40005844: b           L_40005860
    // 0x40005848: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_40005860;
    // 0x40005848: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_4000584C:
    // 0x4000584C: b           L_40005860
    // 0x40005850: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_40005860;
    // 0x40005850: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_40005854:
    // 0x40005854: b           L_40005860
    // 0x40005858: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_40005860;
    // 0x40005858: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_4000585C:
    // 0x4000585C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
L_40005860:
    // 0x40005860: lw          $a0, 0x1C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1C);
L_40005864:
    // 0x40005864: jal         0x40000C70
    // 0x40005868: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    ovl_actor_main_C70(rdram, ctx);
        goto after_0;
    // 0x40005868: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
L_4000586C:
    // 0x4000586C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40005870: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40005874: jr          $ra
    // 0x40005878: nop

    return;
    // 0x40005878: nop

;}
RECOMP_FUNC void ovl_actor_main_587C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000587C: slti        $at, $a1, 0x2A
    ctx->r1 = SIGNED(ctx->r5) < 0X2A ? 1 : 0;
    // 0x40005880: bne         $at, $zero, L_4000588C
    if (ctx->r1 != 0) {
        // 0x40005884: slti        $at, $a1, 0x34
        ctx->r1 = SIGNED(ctx->r5) < 0X34 ? 1 : 0;
            goto L_4000588C;
    }
    // 0x40005884: slti        $at, $a1, 0x34
    ctx->r1 = SIGNED(ctx->r5) < 0X34 ? 1 : 0;
    // 0x40005888: bne         $at, $zero, L_400058BC
    if (ctx->r1 != 0) {
        // 0x4000588C: addiu       $at, $zero, 0x34
        ctx->r1 = ADD32(0, 0X34);
            goto L_400058BC;
    }
L_4000588C:
    // 0x4000588C: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x40005890: beq         $a1, $at, L_400058BC
    if (ctx->r5 == ctx->r1) {
        // 0x40005894: addiu       $at, $zero, 0x35
        ctx->r1 = ADD32(0, 0X35);
            goto L_400058BC;
    }
    // 0x40005894: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
    // 0x40005898: beq         $a1, $at, L_400058BC
    if (ctx->r5 == ctx->r1) {
        // 0x4000589C: nop
    
            goto L_400058BC;
    }
    // 0x4000589C: nop

    // 0x400058A0: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x400058A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x400058A8: bne         $t6, $at, L_400058C4
    if (ctx->r14 != ctx->r1) {
        // 0x400058AC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_400058C4;
    }
    // 0x400058AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x400058B0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x400058B4: bne         $a1, $at, L_400058C4
    if (ctx->r5 != ctx->r1) {
        // 0x400058B8: nop
    
            goto L_400058C4;
    }
    // 0x400058B8: nop

L_400058BC:
    // 0x400058BC: jr          $ra
    // 0x400058C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x400058C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_400058C4:
    // 0x400058C4: jr          $ra
    // 0x400058C8: nop

    return;
    // 0x400058C8: nop

;}
RECOMP_FUNC void ovl_actor_main_58CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400058CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x400058D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x400058D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x400058D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400058DC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x400058E0: lw          $a1, 0x318($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X318);
    // 0x400058E4: jal         0x4000587C
    // 0x400058E8: nop

    ovl_actor_main_587C(rdram, ctx);
        goto after_0;
    // 0x400058E8: nop

    after_0:
    // 0x400058EC: bne         $v0, $zero, L_4000594C
    if (ctx->r2 != 0) {
        // 0x400058F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000594C;
    }
    // 0x400058F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400058F4: jal         0x40001A8C
    // 0x400058F8: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x400058F8: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    after_1:
    // 0x400058FC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x40005900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40005904: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x40005908: nop

    // 0x4000590C: sw          $t6, 0x318($s0)
    MEM_W(0X318, ctx->r16) = ctx->r14;
    // 0x40005910: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x40005914: jal         0x40003544
    // 0x40005918: sw          $t7, 0x31C($s0)
    MEM_W(0X31C, ctx->r16) = ctx->r15;
    ovl_actor_main_3544(rdram, ctx);
        goto after_2;
    // 0x40005918: sw          $t7, 0x31C($s0)
    MEM_W(0X31C, ctx->r16) = ctx->r15;
    after_2:
    // 0x4000591C: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x40005920: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x40005924: bne         $t8, $at, L_40005950
    if (ctx->r24 != ctx->r1) {
        // 0x40005928: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40005950;
    }
    // 0x40005928: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000592C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x40005930: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x40005934: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x40005938: nop

    // 0x4000593C: bne         $t0, $at, L_40005950
    if (ctx->r8 != ctx->r1) {
        // 0x40005940: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40005950;
    }
    // 0x40005940: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40005944: jal         0x400007CC
    // 0x40005948: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_actor_main_7CC(rdram, ctx);
        goto after_3;
    // 0x40005948: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
L_4000594C:
    // 0x4000594C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40005950:
    // 0x40005950: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x40005954: jr          $ra
    // 0x40005958: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x40005958: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_actor_main_595C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000595C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40005960: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40005964: lw          $a1, 0xC0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC0);
    // 0x40005968: jal         0x40011944
    // 0x4000596C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_11944(rdram, ctx);
        goto after_0;
    // 0x4000596C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x40005970: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40005974: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40005978: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x4000597C: sw          $t6, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r14;
    // 0x40005980: jal         0x40011944
    // 0x40005984: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
    ovl_actor_main_11944(rdram, ctx);
        goto after_1;
    // 0x40005984: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
    after_1:
    // 0x40005988: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000598C: addiu       $v1, $zero, 0x57
    ctx->r3 = ADD32(0, 0X57);
    // 0x40005990: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x40005994: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x40005998: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
    // 0x4000599C: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    // 0x400059A0: sw          $zero, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = 0;
    // 0x400059A4: sw          $v1, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r3;
    // 0x400059A8: sw          $v1, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r3;
    // 0x400059AC: sw          $v1, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->r3;
    // 0x400059B0: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x400059B4: sw          $v1, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r3;
    // 0x400059B8: sw          $v1, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r3;
    // 0x400059BC: sw          $v1, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r3;
    // 0x400059C0: sw          $v1, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r3;
    // 0x400059C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400059C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x400059CC: jr          $ra
    // 0x400059D0: nop

    return;
    // 0x400059D0: nop

;}
RECOMP_FUNC void ovl_actor_main_59D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400059D4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x400059D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400059DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x400059E0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x400059E4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x400059E8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x400059EC: jal         0x400016B4
    // 0x400059F0: nop

    ovl_actor_main_16B4(rdram, ctx);
        goto after_0;
    // 0x400059F0: nop

    after_0:
    // 0x400059F4: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x400059F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x400059FC: lw          $a2, 0xC($t7)
    ctx->r6 = MEM_W(ctx->r15, 0XC);
    // 0x40005A00: beq         $v0, $at, L_40005B2C
    if (ctx->r2 == ctx->r1) {
        // 0x40005A04: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_40005B2C;
    }
    // 0x40005A04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x40005A08: lw          $v1, 0x90($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X90);
    // 0x40005A0C: nop

    // 0x40005A10: sll         $t8, $v1, 7
    ctx->r24 = S32(ctx->r3 << 7);
    // 0x40005A14: bltz        $t8, L_40005B2C
    if (SIGNED(ctx->r24) < 0) {
        // 0x40005A18: andi        $t9, $v1, 0x80
        ctx->r25 = ctx->r3 & 0X80;
            goto L_40005B2C;
    }
    // 0x40005A18: andi        $t9, $v1, 0x80
    ctx->r25 = ctx->r3 & 0X80;
    // 0x40005A1C: bne         $t9, $zero, L_40005B30
    if (ctx->r25 != 0) {
        // 0x40005A20: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40005B30;
    }
    // 0x40005A20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40005A24: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x40005A28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x40005A2C: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x40005A30: nop

    // 0x40005A34: andi        $t2, $t1, 0x400
    ctx->r10 = ctx->r9 & 0X400;
    // 0x40005A38: bne         $t2, $zero, L_40005B30
    if (ctx->r10 != 0) {
        // 0x40005A3C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40005B30;
    }
    // 0x40005A3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40005A40: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x40005A44: jal         0x4000587C
    // 0x40005A48: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    ovl_actor_main_587C(rdram, ctx);
        goto after_1;
    // 0x40005A48: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_1:
    // 0x40005A4C: beq         $v0, $zero, L_40005A8C
    if (ctx->r2 == 0) {
        // 0x40005A50: nop
    
            goto L_40005A8C;
    }
    // 0x40005A50: nop

    // 0x40005A54: lw          $a1, 0x318($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X318);
    // 0x40005A58: jal         0x4000587C
    // 0x40005A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_587C(rdram, ctx);
        goto after_2;
    // 0x40005A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x40005A60: bne         $v0, $zero, L_40005A8C
    if (ctx->r2 != 0) {
        // 0x40005A64: nop
    
            goto L_40005A8C;
    }
    // 0x40005A64: nop

    // 0x40005A68: jal         0x4000595C
    // 0x40005A6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_595C(rdram, ctx);
        goto after_3;
    // 0x40005A6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x40005A70: jal         0x40008F98
    // 0x40005A74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_8F98(rdram, ctx);
        goto after_4;
    // 0x40005A74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x40005A78: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x40005A7C: jal         0x400058CC
    // 0x40005A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_58CC(rdram, ctx);
        goto after_5;
    // 0x40005A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x40005A84: b           L_40005B30
    // 0x40005A88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40005B30;
    // 0x40005A88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40005A8C:
    // 0x40005A8C: lw          $v0, 0x90($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X90);
    // 0x40005A90: nop

    // 0x40005A94: andi        $t3, $v0, 0x1000
    ctx->r11 = ctx->r2 & 0X1000;
    // 0x40005A98: bne         $t3, $zero, L_40005B2C
    if (ctx->r11 != 0) {
        // 0x40005A9C: andi        $t4, $v0, 0x800
        ctx->r12 = ctx->r2 & 0X800;
            goto L_40005B2C;
    }
    // 0x40005A9C: andi        $t4, $v0, 0x800
    ctx->r12 = ctx->r2 & 0X800;
    // 0x40005AA0: bne         $t4, $zero, L_40005AD8
    if (ctx->r12 != 0) {
        // 0x40005AA4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40005AD8;
    }
    // 0x40005AA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40005AA8: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x40005AAC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x40005AB0: addiu       $t8, $t7, 0x40
    ctx->r24 = ADD32(ctx->r15, 0X40);
    // 0x40005AB4: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x40005AB8: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x40005ABC: ori         $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 | 0X8000;
    // 0x40005AC0: slt         $at, $t6, $t0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x40005AC4: bne         $at, $zero, L_40005AD4
    if (ctx->r1 != 0) {
        // 0x40005AC8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_40005AD4;
    }
    // 0x40005AC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x40005ACC: b           L_40005AD4
    // 0x40005AD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_40005AD4;
    // 0x40005AD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_40005AD4:
    // 0x40005AD4: bne         $v0, $zero, L_40005B2C
    if (ctx->r2 != 0) {
        // 0x40005AD8: addiu       $a1, $zero, 0xC
        ctx->r5 = ADD32(0, 0XC);
            goto L_40005B2C;
    }
L_40005AD8:
    // 0x40005AD8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x40005ADC: jal         0x40001258
    // 0x40005AE0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_actor_main_1258(rdram, ctx);
        goto after_6;
    // 0x40005AE0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_6:
    // 0x40005AE4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x40005AE8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x40005AEC: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x40005AF0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x40005AF4: bne         $t2, $zero, L_40005B24
    if (ctx->r10 != 0) {
        // 0x40005AF8: nop
    
            goto L_40005B24;
    }
    // 0x40005AF8: nop

    // 0x40005AFC: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x40005B00: nop

    // 0x40005B04: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x40005B08: beq         $t5, $zero, L_40005B30
    if (ctx->r13 == 0) {
        // 0x40005B0C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40005B30;
    }
    // 0x40005B0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40005B10: lw          $t7, 0x90($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X90);
    // 0x40005B14: nop

    // 0x40005B18: andi        $t8, $t7, 0x10
    ctx->r24 = ctx->r15 & 0X10;
    // 0x40005B1C: bne         $t8, $zero, L_40005B30
    if (ctx->r24 != 0) {
        // 0x40005B20: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40005B30;
    }
    // 0x40005B20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40005B24:
    // 0x40005B24: jal         0x400058CC
    // 0x40005B28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_58CC(rdram, ctx);
        goto after_7;
    // 0x40005B28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_40005B2C:
    // 0x40005B2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40005B30:
    // 0x40005B30: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x40005B34: jr          $ra
    // 0x40005B38: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x40005B38: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_actor_main_5B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40005B3C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x40005B40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40005B44: lw          $t6, 0x14($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X14);
    // 0x40005B48: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x40005B4C: bne         $t6, $at, L_40005BDC
    if (ctx->r14 != ctx->r1) {
        // 0x40005B50: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_40005BDC;
    }
    // 0x40005B50: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x40005B54: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x40005B58: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x40005B5C: beq         $t7, $at, L_40005BDC
    if (ctx->r15 == ctx->r1) {
        // 0x40005B60: addiu       $a2, $sp, 0x30
        ctx->r6 = ADD32(ctx->r29, 0X30);
            goto L_40005BDC;
    }
    // 0x40005B60: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x40005B64: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x40005B68: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x40005B6C: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x40005B70: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x40005B74: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x40005B78: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x40005B7C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x40005B80: jal         0x40001258
    // 0x40005B84: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_1258(rdram, ctx);
        goto after_0;
    // 0x40005B84: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x40005B88: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x40005B8C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x40005B90: lw          $a0, 0x10($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X10);
    // 0x40005B94: jal         0x400006C4
    // 0x40005B98: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40005B98: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x40005B9C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x40005BA0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x40005BA4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x40005BA8: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x40005BAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x40005BB0: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x40005BB4: add.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f10.fl;
    // 0x40005BB8: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    // 0x40005BBC: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x40005BC0: nop

    // 0x40005BC4: bc1f        L_40005BD0
    if (!c1cs) {
        // 0x40005BC8: nop
    
            goto L_40005BD0;
    }
    // 0x40005BC8: nop

    // 0x40005BCC: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
L_40005BD0:
    // 0x40005BD0: jal         0x40009134
    // 0x40005BD4: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    ovl_actor_main_9134(rdram, ctx);
        goto after_2;
    // 0x40005BD4: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    after_2:
    // 0x40005BD8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_40005BDC:
    // 0x40005BDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40005BE0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x40005BE4: jr          $ra
    // 0x40005BE8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x40005BE8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_5BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40005BEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40005BF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40005BF4: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x40005BF8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x40005BFC: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x40005C00: bgez        $t7, L_40005C50
    if (SIGNED(ctx->r15) >= 0) {
        // 0x40005C04: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005C50;
    }
    // 0x40005C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40005C08: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x40005C0C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40005C10: beq         $v0, $at, L_40005C20
    if (ctx->r2 == ctx->r1) {
        // 0x40005C14: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_40005C20;
    }
    // 0x40005C14: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x40005C18: bne         $v0, $at, L_40005C50
    if (ctx->r2 != ctx->r1) {
        // 0x40005C1C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005C50;
    }
    // 0x40005C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40005C20:
    // 0x40005C20: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x40005C24: jal         0x40008DB4
    // 0x40005C28: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_8DB4(rdram, ctx);
        goto after_0;
    // 0x40005C28: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x40005C2C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40005C30: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x40005C34: lw          $t8, 0x90($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X90);
    // 0x40005C38: nop

    // 0x40005C3C: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x40005C40: bgez        $t9, L_40005C50
    if (SIGNED(ctx->r25) >= 0) {
        // 0x40005C44: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005C50;
    }
    // 0x40005C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40005C48: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x40005C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40005C50:
    // 0x40005C50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40005C54: jr          $ra
    // 0x40005C58: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x40005C58: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_5C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40005C5C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x40005C60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40005C64: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x40005C68: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x40005C6C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x40005C70: jal         0x400016B4
    // 0x40005C74: nop

    ovl_actor_main_16B4(rdram, ctx);
        goto after_0;
    // 0x40005C74: nop

    after_0:
    // 0x40005C78: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x40005C7C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40005C80: lw          $a3, 0xC($t7)
    ctx->r7 = MEM_W(ctx->r15, 0XC);
    // 0x40005C84: beq         $v0, $at, L_40005DF4
    if (ctx->r2 == ctx->r1) {
        // 0x40005C88: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_40005DF4;
    }
    // 0x40005C88: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x40005C8C: lw          $v1, 0x90($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X90);
    // 0x40005C90: nop

    // 0x40005C94: andi        $t8, $v1, 0x20
    ctx->r24 = ctx->r3 & 0X20;
    // 0x40005C98: bne         $t8, $zero, L_40005DF4
    if (ctx->r24 != 0) {
        // 0x40005C9C: andi        $t9, $v1, 0x800
        ctx->r25 = ctx->r3 & 0X800;
            goto L_40005DF4;
    }
    // 0x40005C9C: andi        $t9, $v1, 0x800
    ctx->r25 = ctx->r3 & 0X800;
    // 0x40005CA0: bne         $t9, $zero, L_40005CD4
    if (ctx->r25 != 0) {
        // 0x40005CA4: addiu       $a1, $zero, 0xC
        ctx->r5 = ADD32(0, 0XC);
            goto L_40005CD4;
    }
    // 0x40005CA4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x40005CA8: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x40005CAC: lw          $t0, 0x10($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X10);
    // 0x40005CB0: addiu       $t2, $t1, 0x40
    ctx->r10 = ADD32(ctx->r9, 0X40);
    // 0x40005CB4: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x40005CB8: ori         $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 | 0X8000;
    // 0x40005CBC: slt         $at, $t0, $t4
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x40005CC0: bne         $at, $zero, L_40005CD0
    if (ctx->r1 != 0) {
        // 0x40005CC4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_40005CD0;
    }
    // 0x40005CC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x40005CC8: b           L_40005CD0
    // 0x40005CCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_40005CD0;
    // 0x40005CCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_40005CD0:
    // 0x40005CD0: bne         $v0, $zero, L_40005DF4
    if (ctx->r2 != 0) {
        // 0x40005CD4: addiu       $a2, $sp, 0x2C
        ctx->r6 = ADD32(ctx->r29, 0X2C);
            goto L_40005DF4;
    }
L_40005CD4:
    // 0x40005CD4: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x40005CD8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x40005CDC: jal         0x40001258
    // 0x40005CE0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    ovl_actor_main_1258(rdram, ctx);
        goto after_1;
    // 0x40005CE0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_1:
    // 0x40005CE4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x40005CE8: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x40005CEC: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x40005CF0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x40005CF4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x40005CF8: beq         $t7, $zero, L_40005DF4
    if (ctx->r15 == 0) {
        // 0x40005CFC: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_40005DF4;
    }
    // 0x40005CFC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x40005D00: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x40005D04: jal         0x40005B3C
    // 0x40005D08: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    ovl_actor_main_5B3C(rdram, ctx);
        goto after_2;
    // 0x40005D08: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_2:
    // 0x40005D0C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x40005D10: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x40005D14: bne         $v0, $zero, L_40005DF4
    if (ctx->r2 != 0) {
        // 0x40005D18: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_40005DF4;
    }
    // 0x40005D18: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x40005D1C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x40005D20: jal         0x40005BEC
    // 0x40005D24: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    ovl_actor_main_5BEC(rdram, ctx);
        goto after_3;
    // 0x40005D24: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_3:
    // 0x40005D28: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x40005D2C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x40005D30: bne         $v0, $zero, L_40005DF8
    if (ctx->r2 != 0) {
        // 0x40005D34: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005DF8;
    }
    // 0x40005D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40005D38: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x40005D3C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40005D40: bne         $t8, $at, L_40005D54
    if (ctx->r24 != ctx->r1) {
        // 0x40005D44: nop
    
            goto L_40005D54;
    }
    // 0x40005D44: nop

    // 0x40005D48: lw          $t9, 0x14($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X14);
    // 0x40005D4C: nop

    // 0x40005D50: sw          $t9, 0x31C($a0)
    MEM_W(0X31C, ctx->r4) = ctx->r25;
L_40005D54:
    // 0x40005D54: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x40005D58: jal         0x40003544
    // 0x40005D5C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    ovl_actor_main_3544(rdram, ctx);
        goto after_4;
    // 0x40005D5C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_4:
    // 0x40005D60: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x40005D64: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x40005D68: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    // 0x40005D6C: nop

    // 0x40005D70: addiu       $t2, $t1, -0x24
    ctx->r10 = ADD32(ctx->r9, -0X24);
    // 0x40005D74: sltiu       $at, $t2, 0x5
    ctx->r1 = ctx->r10 < 0X5 ? 1 : 0;
    // 0x40005D78: beq         $at, $zero, L_40005DF4
    if (ctx->r1 == 0) {
        // 0x40005D7C: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_40005DF4;
    }
    // 0x40005D7C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x40005D80: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40005D84: addu        $at, $at, $t2
    gpr jr_addend_40005D90 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x40005D88: lw          $t2, -0x1904($at)
    ctx->r10 = ADD32(ctx->r1, -0X1904);
    // 0x40005D8C: nop

    // 0x40005D90: jr          $t2
    // 0x40005D94: nop

    switch (jr_addend_40005D90 >> 2) {
        case 0: goto L_40005D98; break;
        case 1: goto L_40005DAC; break;
        case 2: goto L_40005DC0; break;
        case 3: goto L_40005DD4; break;
        case 4: goto L_40005DE8; break;
        default: switch_error(__func__, 0x40005D90, 0x4001E6FC);
    }
    // 0x40005D94: nop

L_40005D98:
    // 0x40005D98: addiu       $a1, $a3, 0x4
    ctx->r5 = ADD32(ctx->r7, 0X4);
    // 0x40005D9C: jal         0x4000331C
    // 0x40005DA0: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    ovl_actor_main_331C(rdram, ctx);
        goto after_5;
    // 0x40005DA0: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_5:
    // 0x40005DA4: b           L_40005DF8
    // 0x40005DA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40005DF8;
    // 0x40005DA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40005DAC:
    // 0x40005DAC: addiu       $a1, $a3, 0x4
    ctx->r5 = ADD32(ctx->r7, 0X4);
    // 0x40005DB0: jal         0x4000331C
    // 0x40005DB4: addiu       $a2, $zero, 0x2B
    ctx->r6 = ADD32(0, 0X2B);
    ovl_actor_main_331C(rdram, ctx);
        goto after_6;
    // 0x40005DB4: addiu       $a2, $zero, 0x2B
    ctx->r6 = ADD32(0, 0X2B);
    after_6:
    // 0x40005DB8: b           L_40005DF8
    // 0x40005DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40005DF8;
    // 0x40005DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40005DC0:
    // 0x40005DC0: addiu       $a1, $a3, 0x4
    ctx->r5 = ADD32(ctx->r7, 0X4);
    // 0x40005DC4: jal         0x4000331C
    // 0x40005DC8: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    ovl_actor_main_331C(rdram, ctx);
        goto after_7;
    // 0x40005DC8: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    after_7:
    // 0x40005DCC: b           L_40005DF8
    // 0x40005DD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40005DF8;
    // 0x40005DD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40005DD4:
    // 0x40005DD4: addiu       $a1, $a3, 0x4
    ctx->r5 = ADD32(ctx->r7, 0X4);
    // 0x40005DD8: jal         0x4000331C
    // 0x40005DDC: addiu       $a2, $zero, 0x2D
    ctx->r6 = ADD32(0, 0X2D);
    ovl_actor_main_331C(rdram, ctx);
        goto after_8;
    // 0x40005DDC: addiu       $a2, $zero, 0x2D
    ctx->r6 = ADD32(0, 0X2D);
    after_8:
    // 0x40005DE0: b           L_40005DF8
    // 0x40005DE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40005DF8;
    // 0x40005DE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40005DE8:
    // 0x40005DE8: addiu       $a1, $a3, 0x4
    ctx->r5 = ADD32(ctx->r7, 0X4);
    // 0x40005DEC: jal         0x4000331C
    // 0x40005DF0: addiu       $a2, $zero, 0x2E
    ctx->r6 = ADD32(0, 0X2E);
    ovl_actor_main_331C(rdram, ctx);
        goto after_9;
    // 0x40005DF0: addiu       $a2, $zero, 0x2E
    ctx->r6 = ADD32(0, 0X2E);
    after_9:
L_40005DF4:
    // 0x40005DF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40005DF8:
    // 0x40005DF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x40005DFC: jr          $ra
    // 0x40005E00: nop

    return;
    // 0x40005E00: nop

;}
