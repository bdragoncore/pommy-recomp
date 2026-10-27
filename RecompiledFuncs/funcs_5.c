#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80009D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009D90: lwc1        $f4, 0x30($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X30);
    // 0x80009D94: nop

    // 0x80009D98: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80009D9C: lwc1        $f6, 0x34($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X34);
    // 0x80009DA0: nop

    // 0x80009DA4: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x80009DA8: lwc1        $f8, 0x38($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X38);
    // 0x80009DAC: jr          $ra
    // 0x80009DB0: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    return;
    // 0x80009DB0: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80009DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009DB4: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80009DB8: nop

    // 0x80009DBC: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80009DC0: lwc1        $f6, 0x10($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80009DC4: nop

    // 0x80009DC8: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x80009DCC: lwc1        $f8, 0x14($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80009DD0: jr          $ra
    // 0x80009DD4: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    return;
    // 0x80009DD4: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80009DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009DD8: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80009DDC: nop

    // 0x80009DE0: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80009DE4: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80009DE8: nop

    // 0x80009DEC: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x80009DF0: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80009DF4: jr          $ra
    // 0x80009DF8: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    return;
    // 0x80009DF8: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80009DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009DFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80009E00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80009E04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80009E08: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80009E0C: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80009E10: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80009E14: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
    // 0x80009E18: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80009E1C: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    // 0x80009E20: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x80009E24: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x80009E28: nop

    // 0x80009E2C: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    // 0x80009E30: jal         0x800289B4
    // 0x80009E34: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_800289B4(rdram, ctx);
        goto after_0;
    // 0x80009E34: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x80009E38: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80009E3C: nop

    // 0x80009E40: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80009E44: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x80009E48: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80009E4C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80009E50: lwc1        $f10, 0x10($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X10);
    // 0x80009E54: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
    // 0x80009E58: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80009E5C: lwc1        $f8, 0x14($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X14);
    // 0x80009E60: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80009E64: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
    // 0x80009E68: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80009E6C: jal         0x80009B94
    // 0x80009E70: swc1        $f10, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f10.u32l;
    func_80009B94(rdram, ctx);
        goto after_1;
    // 0x80009E70: swc1        $f10, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f10.u32l;
    after_1:
    // 0x80009E74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80009E78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80009E7C: jr          $ra
    // 0x80009E80: nop

    return;
    // 0x80009E80: nop

;}
RECOMP_FUNC void func_80009E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009E84: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80009E88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80009E8C: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80009E90: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80009E94: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
    // 0x80009E98: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80009E9C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80009EA0: swc1        $f6, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f6.u32l;
    // 0x80009EA4: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x80009EA8: jal         0x800289B4
    // 0x80009EAC: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    func_800289B4(rdram, ctx);
        goto after_0;
    // 0x80009EAC: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    after_0:
    // 0x80009EB0: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80009EB4: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80009EB8: addiu       $v0, $t0, 0xC
    ctx->r2 = ADD32(ctx->r8, 0XC);
    // 0x80009EBC: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80009EC0: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80009EC4: add.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x80009EC8: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80009ECC: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80009ED0: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80009ED4: add.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x80009ED8: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x80009EDC: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80009EE0: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80009EE4: add.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x80009EE8: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80009EEC: add.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x80009EF0: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x80009EF4: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80009EF8: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80009EFC: add.s       $f10, $f12, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x80009F00: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80009F04: add.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x80009F08: jal         0x80009B94
    // 0x80009F0C: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    func_80009B94(rdram, ctx);
        goto after_1;
    // 0x80009F0C: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    after_1:
    // 0x80009F10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80009F14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80009F18: jr          $ra
    // 0x80009F1C: nop

    return;
    // 0x80009F1C: nop

;}
RECOMP_FUNC void func_80009F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009F20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80009F24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80009F28: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80009F2C: lw          $t6, 0x44($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X44);
    // 0x80009F30: swc1        $f4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f4.u32l;
    // 0x80009F34: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80009F38: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80009F3C: swc1        $f6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f6.u32l;
    // 0x80009F40: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80009F44: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80009F48: beq         $t7, $zero, L_80009F70
    if (ctx->r15 == 0) {
        // 0x80009F4C: swc1        $f8, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->f8.u32l;
            goto L_80009F70;
    }
    // 0x80009F4C: swc1        $f8, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f8.u32l;
    // 0x80009F50: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x80009F54: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80009F58: addiu       $a2, $t0, 0x30
    ctx->r6 = ADD32(ctx->r8, 0X30);
    // 0x80009F5C: jal         0x80028850
    // 0x80009F60: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_80028850(rdram, ctx);
        goto after_0;
    // 0x80009F60: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_0:
    // 0x80009F64: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80009F68: b           L_80009FC0
    // 0x80009F6C: nop

        goto L_80009FC0;
    // 0x80009F6C: nop

L_80009F70:
    // 0x80009F70: addiu       $a0, $t0, 0x30
    ctx->r4 = ADD32(ctx->r8, 0X30);
    // 0x80009F74: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80009F78: jal         0x800289B4
    // 0x80009F7C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_800289B4(rdram, ctx);
        goto after_1;
    // 0x80009F7C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_1:
    // 0x80009F80: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80009F84: nop

    // 0x80009F88: addiu       $v0, $t0, 0xC
    ctx->r2 = ADD32(ctx->r8, 0XC);
    // 0x80009F8C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80009F90: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80009F94: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80009F98: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80009F9C: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
    // 0x80009FA0: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80009FA4: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80009FA8: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80009FAC: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
    // 0x80009FB0: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80009FB4: nop

    // 0x80009FB8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80009FBC: swc1        $f10, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f10.u32l;
L_80009FC0:
    // 0x80009FC0: jal         0x80009B94
    // 0x80009FC4: nop

    func_80009B94(rdram, ctx);
        goto after_2;
    // 0x80009FC4: nop

    after_2:
    // 0x80009FC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80009FCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80009FD0: jr          $ra
    // 0x80009FD4: nop

    return;
    // 0x80009FD4: nop

;}
RECOMP_FUNC void func_80009FD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009FD8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80009FDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80009FE0: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80009FE4: lw          $t6, 0x44($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X44);
    // 0x80009FE8: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x80009FEC: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80009FF0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80009FF4: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x80009FF8: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80009FFC: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8000A000: beq         $t7, $zero, L_8000A028
    if (ctx->r15 == 0) {
        // 0x8000A004: swc1        $f8, 0x8($a0)
        MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
            goto L_8000A028;
    }
    // 0x8000A004: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    // 0x8000A008: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x8000A00C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8000A010: addiu       $a2, $t0, 0x30
    ctx->r6 = ADD32(ctx->r8, 0X30);
    // 0x8000A014: jal         0x80028850
    // 0x8000A018: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    func_80028850(rdram, ctx);
        goto after_0;
    // 0x8000A018: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    after_0:
    // 0x8000A01C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8000A020: b           L_8000A094
    // 0x8000A024: nop

        goto L_8000A094;
    // 0x8000A024: nop

L_8000A028:
    // 0x8000A028: addiu       $a0, $t0, 0x30
    ctx->r4 = ADD32(ctx->r8, 0X30);
    // 0x8000A02C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x8000A030: jal         0x800289B4
    // 0x8000A034: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    func_800289B4(rdram, ctx);
        goto after_1;
    // 0x8000A034: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    after_1:
    // 0x8000A038: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8000A03C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000A040: addiu       $v0, $t0, 0xC
    ctx->r2 = ADD32(ctx->r8, 0XC);
    // 0x8000A044: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8000A048: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8000A04C: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x8000A050: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8000A054: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x8000A058: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8000A05C: add.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x8000A060: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x8000A064: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000A068: lwc1        $f10, 0x4($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8000A06C: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x8000A070: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8000A074: add.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x8000A078: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x8000A07C: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000A080: lwc1        $f10, 0x8($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8000A084: add.s       $f4, $f12, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x8000A088: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8000A08C: add.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x8000A090: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
L_8000A094:
    // 0x8000A094: jal         0x80009B94
    // 0x8000A098: nop

    func_80009B94(rdram, ctx);
        goto after_2;
    // 0x8000A098: nop

    after_2:
    // 0x8000A09C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000A0A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8000A0A4: jr          $ra
    // 0x8000A0A8: nop

    return;
    // 0x8000A0A8: nop

;}
RECOMP_FUNC void func_8000A0B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000A0B0: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x8000A0B4: nop

    // 0x8000A0B8: blez        $v0, L_8000A0D0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8000A0BC: nop
    
            goto L_8000A0D0;
    }
    // 0x8000A0BC: nop

    // 0x8000A0C0: lh          $v1, 0x6($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X6);
    // 0x8000A0C4: nop

    // 0x8000A0C8: bgtz        $v1, L_8000A0D8
    if (SIGNED(ctx->r3) > 0) {
        // 0x8000A0CC: nop
    
            goto L_8000A0D8;
    }
    // 0x8000A0CC: nop

L_8000A0D0:
    // 0x8000A0D0: jr          $ra
    // 0x8000A0D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8000A0D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000A0D8:
    // 0x8000A0D8: lh          $a1, 0x0($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X0);
    // 0x8000A0DC: nop

    // 0x8000A0E0: slti        $at, $a1, 0x140
    ctx->r1 = SIGNED(ctx->r5) < 0X140 ? 1 : 0;
    // 0x8000A0E4: beq         $at, $zero, L_8000A100
    if (ctx->r1 == 0) {
        // 0x8000A0E8: nop
    
            goto L_8000A100;
    }
    // 0x8000A0E8: nop

    // 0x8000A0EC: lh          $a2, 0x2($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X2);
    // 0x8000A0F0: addu        $t6, $a1, $v0
    ctx->r14 = ADD32(ctx->r5, ctx->r2);
    // 0x8000A0F4: slti        $at, $a2, 0xF0
    ctx->r1 = SIGNED(ctx->r6) < 0XF0 ? 1 : 0;
    // 0x8000A0F8: bne         $at, $zero, L_8000A10C
    if (ctx->r1 != 0) {
        // 0x8000A0FC: slti        $at, $t6, 0x2
        ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
            goto L_8000A10C;
    }
    // 0x8000A0FC: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
L_8000A100:
    // 0x8000A100: jr          $ra
    // 0x8000A104: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8000A104: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000A108: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
L_8000A10C:
    // 0x8000A10C: bne         $at, $zero, L_8000A120
    if (ctx->r1 != 0) {
        // 0x8000A110: addu        $t7, $a2, $v1
        ctx->r15 = ADD32(ctx->r6, ctx->r3);
            goto L_8000A120;
    }
    // 0x8000A110: addu        $t7, $a2, $v1
    ctx->r15 = ADD32(ctx->r6, ctx->r3);
    // 0x8000A114: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x8000A118: beq         $at, $zero, L_8000A128
    if (ctx->r1 == 0) {
        // 0x8000A11C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8000A128;
    }
    // 0x8000A11C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000A120:
    // 0x8000A120: jr          $ra
    // 0x8000A124: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8000A124: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000A128:
    // 0x8000A128: jr          $ra
    // 0x8000A12C: nop

    return;
    // 0x8000A12C: nop

;}
RECOMP_FUNC void func_8000A130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000A130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000A134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000A138: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8000A13C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8000A140: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8000A144: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8000A148: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8000A14C: jal         0x8000A0B0
    // 0x8000A150: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8000A0B0(rdram, ctx);
        goto after_0;
    // 0x8000A150: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x8000A154: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8000A158: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8000A15C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8000A160: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8000A164: bne         $v0, $zero, L_8000A174
    if (ctx->r2 != 0) {
        // 0x8000A168: addiu       $a0, $t0, 0x8
        ctx->r4 = ADD32(ctx->r8, 0X8);
            goto L_8000A174;
    }
    // 0x8000A168: addiu       $a0, $t0, 0x8
    ctx->r4 = ADD32(ctx->r8, 0X8);
    // 0x8000A16C: b           L_8000A25C
    // 0x8000A170: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_8000A25C;
    // 0x8000A170: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_8000A174:
    // 0x8000A174: lh          $v0, 0x0($t2)
    ctx->r2 = MEM_H(ctx->r10, 0X0);
    // 0x8000A178: addiu       $a1, $a0, 0x8
    ctx->r5 = ADD32(ctx->r4, 0X8);
    // 0x8000A17C: bgez        $v0, L_8000A190
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8000A180: andi        $t3, $v0, 0xFFFF
        ctx->r11 = ctx->r2 & 0XFFFF;
            goto L_8000A190;
    }
    // 0x8000A180: andi        $t3, $v0, 0xFFFF
    ctx->r11 = ctx->r2 & 0XFFFF;
    // 0x8000A184: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x8000A188: b           L_8000A190
    // 0x8000A18C: subu        $t4, $t4, $v0
    ctx->r12 = SUB32(ctx->r12, ctx->r2);
        goto L_8000A190;
    // 0x8000A18C: subu        $t4, $t4, $v0
    ctx->r12 = SUB32(ctx->r12, ctx->r2);
L_8000A190:
    // 0x8000A190: lh          $t6, 0x4($t2)
    ctx->r14 = MEM_H(ctx->r10, 0X4);
    // 0x8000A194: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8000A198: addu        $v1, $v0, $t6
    ctx->r3 = ADD32(ctx->r2, ctx->r14);
    // 0x8000A19C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8000A1A0: andi        $t1, $v1, 0xFFFF
    ctx->r9 = ctx->r3 & 0XFFFF;
    // 0x8000A1A4: slti        $at, $t1, 0x140
    ctx->r1 = SIGNED(ctx->r9) < 0X140 ? 1 : 0;
    // 0x8000A1A8: bne         $at, $zero, L_8000A1B4
    if (ctx->r1 != 0) {
        // 0x8000A1AC: nop
    
            goto L_8000A1B4;
    }
    // 0x8000A1AC: nop

    // 0x8000A1B0: addiu       $t1, $zero, 0x13F
    ctx->r9 = ADD32(0, 0X13F);
L_8000A1B4:
    // 0x8000A1B4: lh          $v0, 0x2($t2)
    ctx->r2 = MEM_H(ctx->r10, 0X2);
    // 0x8000A1B8: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x8000A1BC: bgez        $v0, L_8000A1CC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8000A1C0: andi        $t7, $t6, 0xFFF
        ctx->r15 = ctx->r14 & 0XFFF;
            goto L_8000A1CC;
    }
    // 0x8000A1C0: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8000A1C4: b           L_8000A1D0
    // 0x8000A1C8: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
        goto L_8000A1D0;
    // 0x8000A1C8: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
L_8000A1CC:
    // 0x8000A1CC: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
L_8000A1D0:
    // 0x8000A1D0: lh          $t8, 0x6($t2)
    ctx->r24 = MEM_H(ctx->r10, 0X6);
    // 0x8000A1D4: nop

    // 0x8000A1D8: addu        $v1, $v0, $t8
    ctx->r3 = ADD32(ctx->r2, ctx->r24);
    // 0x8000A1DC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8000A1E0: andi        $a2, $v1, 0xFFFF
    ctx->r6 = ctx->r3 & 0XFFFF;
    // 0x8000A1E4: slti        $at, $a2, 0xF0
    ctx->r1 = SIGNED(ctx->r6) < 0XF0 ? 1 : 0;
    // 0x8000A1E8: bne         $at, $zero, L_8000A1F4
    if (ctx->r1 != 0) {
        // 0x8000A1EC: sll         $t8, $t7, 12
        ctx->r24 = S32(ctx->r15 << 12);
            goto L_8000A1F4;
    }
    // 0x8000A1EC: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x8000A1F0: addiu       $a2, $zero, 0xEF
    ctx->r6 = ADD32(0, 0XEF);
L_8000A1F4:
    // 0x8000A1F4: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8000A1F8: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x8000A1FC: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8000A200: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8000A204: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x8000A208: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x8000A20C: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8000A210: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x8000A214: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x8000A218: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x8000A21C: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x8000A220: or          $t9, $t7, $t6
    ctx->r25 = ctx->r15 | ctx->r14;
    // 0x8000A224: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8000A228: lui         $t8, 0xE100
    ctx->r24 = S32(0XE100 << 16);
    // 0x8000A22C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8000A230: sll         $t6, $t5, 5
    ctx->r14 = S32(ctx->r13 << 5);
    // 0x8000A234: andi        $t9, $t6, 0xFFFF
    ctx->r25 = ctx->r14 & 0XFFFF;
    // 0x8000A238: sll         $t8, $t4, 21
    ctx->r24 = S32(ctx->r12 << 21);
    // 0x8000A23C: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x8000A240: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x8000A244: lui         $t8, 0x1000
    ctx->r24 = S32(0X1000 << 16);
    // 0x8000A248: ori         $t8, $t8, 0x400
    ctx->r24 = ctx->r24 | 0X400;
    // 0x8000A24C: lui         $t6, 0xF100
    ctx->r14 = S32(0XF100 << 16);
    // 0x8000A250: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8000A254: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x8000A258: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
L_8000A25C:
    // 0x8000A25C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000A260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000A264: jr          $ra
    // 0x8000A268: nop

    return;
    // 0x8000A268: nop

;}
RECOMP_FUNC void func_8000A26C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000A26C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000A270: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000A274: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8000A278: nop

    // 0x8000A27C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8000A280: nop

    // 0x8000A284: bc1t        L_8000A2A4
    if (c1cs) {
        // 0x8000A288: nop
    
            goto L_8000A2A4;
    }
    // 0x8000A288: nop

    // 0x8000A28C: lwc1        $f2, 0xC($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8000A290: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x8000A294: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x8000A298: nop

    // 0x8000A29C: bc1f        L_8000A2AC
    if (!c1cs) {
        // 0x8000A2A0: nop
    
            goto L_8000A2AC;
    }
    // 0x8000A2A0: nop

L_8000A2A4:
    // 0x8000A2A4: jr          $ra
    // 0x8000A2A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8000A2A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000A2AC:
    // 0x8000A2AC: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8000A2B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000A2B4: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x8000A2B8: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x8000A2BC: nop

    // 0x8000A2C0: bc1t        L_8000A2E4
    if (c1cs) {
        // 0x8000A2C4: nop
    
            goto L_8000A2E4;
    }
    // 0x8000A2C4: nop

    // 0x8000A2C8: lwc1        $f14, 0x4($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8000A2CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000A2D0: nop

    // 0x8000A2D4: c.le.s      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.fl <= ctx->f14.fl;
    // 0x8000A2D8: nop

    // 0x8000A2DC: bc1f        L_8000A2EC
    if (!c1cs) {
        // 0x8000A2E0: nop
    
            goto L_8000A2EC;
    }
    // 0x8000A2E0: nop

L_8000A2E4:
    // 0x8000A2E4: jr          $ra
    // 0x8000A2E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8000A2E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000A2EC:
    // 0x8000A2EC: add.s       $f8, $f12, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x8000A2F0: c.le.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl <= ctx->f16.fl;
    // 0x8000A2F4: nop

    // 0x8000A2F8: bc1t        L_8000A318
    if (c1cs) {
        // 0x8000A2FC: nop
    
            goto L_8000A318;
    }
    // 0x8000A2FC: nop

    // 0x8000A300: add.s       $f10, $f14, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x8000A304: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000A308: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x8000A30C: nop

    // 0x8000A310: bc1f        L_8000A320
    if (!c1cs) {
        // 0x8000A314: nop
    
            goto L_8000A320;
    }
    // 0x8000A314: nop

L_8000A318:
    // 0x8000A318: jr          $ra
    // 0x8000A31C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8000A31C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000A320:
    // 0x8000A320: jr          $ra
    // 0x8000A324: nop

    return;
    // 0x8000A324: nop

;}
RECOMP_FUNC void func_8000A328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000A328: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000A32C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8000A330: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8000A334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000A338: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8000A33C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8000A340: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x8000A344: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8000A348: jal         0x8000A26C
    // 0x8000A34C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8000A26C(rdram, ctx);
        goto after_0;
    // 0x8000A34C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x8000A350: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8000A354: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8000A358: bne         $v0, $zero, L_8000A368
    if (ctx->r2 != 0) {
        // 0x8000A35C: lui         $at, 0x43A0
        ctx->r1 = S32(0X43A0 << 16);
            goto L_8000A368;
    }
    // 0x8000A35C: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x8000A360: b           L_8000A7A0
    // 0x8000A364: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
        goto L_8000A7A0;
    // 0x8000A364: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_8000A368:
    // 0x8000A368: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8000A36C: lwc1        $f0, 0x0($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8000A370: nop

    // 0x8000A374: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8000A378: nop

    // 0x8000A37C: bc1f        L_8000A398
    if (!c1cs) {
        // 0x8000A380: nop
    
            goto L_8000A398;
    }
    // 0x8000A380: nop

    // 0x8000A384: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000A388: mov.s       $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.fl = ctx->f2.fl;
    // 0x8000A38C: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8000A390: b           L_8000A39C
    // 0x8000A394: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
        goto L_8000A39C;
    // 0x8000A394: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
L_8000A398:
    // 0x8000A398: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
L_8000A39C:
    // 0x8000A39C: lwc1        $f8, 0x8($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X8);
    // 0x8000A3A0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8000A3A4: add.s       $f14, $f0, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x8000A3A8: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x8000A3AC: c.le.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl <= ctx->f14.fl;
    // 0x8000A3B0: nop

    // 0x8000A3B4: bc1f        L_8000A3C0
    if (!c1cs) {
        // 0x8000A3B8: nop
    
            goto L_8000A3C0;
    }
    // 0x8000A3B8: nop

    // 0x8000A3BC: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
L_8000A3C0:
    // 0x8000A3C0: lwc1        $f0, 0x4($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X4);
    // 0x8000A3C4: nop

    // 0x8000A3C8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8000A3CC: nop

    // 0x8000A3D0: bc1f        L_8000A3EC
    if (!c1cs) {
        // 0x8000A3D4: nop
    
            goto L_8000A3EC;
    }
    // 0x8000A3D4: nop

    // 0x8000A3D8: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000A3DC: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x8000A3E0: sub.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8000A3E4: b           L_8000A3F0
    // 0x8000A3E8: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
        goto L_8000A3F0;
    // 0x8000A3E8: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
L_8000A3EC:
    // 0x8000A3EC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_8000A3F0:
    // 0x8000A3F0: lwc1        $f6, 0xC($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XC);
    // 0x8000A3F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000A3F8: add.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x8000A3FC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8000A400: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8000A404: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    // 0x8000A408: mul.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8000A40C: bc1f        L_8000A418
    if (!c1cs) {
        // 0x8000A410: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_8000A418;
    }
    // 0x8000A410: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8000A414: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
L_8000A418:
    // 0x8000A418: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8000A41C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8000A420: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x8000A424: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8000A428: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000A42C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8000A430: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x8000A434: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8000A438: beq         $t7, $zero, L_8000A488
    if (ctx->r15 == 0) {
        // 0x8000A43C: addiu       $a2, $a2, 0x8
        ctx->r6 = ADD32(ctx->r6, 0X8);
            goto L_8000A488;
    }
    // 0x8000A43C: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8000A440: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000A444: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000A448: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8000A44C: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8000A450: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000A454: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8000A458: nop

    // 0x8000A45C: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8000A460: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8000A464: nop

    // 0x8000A468: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8000A46C: bne         $t7, $zero, L_8000A480
    if (ctx->r15 != 0) {
        // 0x8000A470: nop
    
            goto L_8000A480;
    }
    // 0x8000A470: nop

    // 0x8000A474: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8000A478: b           L_8000A498
    // 0x8000A47C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8000A498;
    // 0x8000A47C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8000A480:
    // 0x8000A480: b           L_8000A498
    // 0x8000A484: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8000A498;
    // 0x8000A484: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_8000A488:
    // 0x8000A488: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8000A48C: nop

    // 0x8000A490: bltz        $t7, L_8000A480
    if (SIGNED(ctx->r15) < 0) {
        // 0x8000A494: nop
    
            goto L_8000A480;
    }
    // 0x8000A494: nop

L_8000A498:
    // 0x8000A498: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8000A49C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8000A4A0: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8000A4A4: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x8000A4A8: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x8000A4AC: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8000A4B0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8000A4B4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8000A4B8: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x8000A4BC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000A4C0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000A4C4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8000A4C8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8000A4CC: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8000A4D0: beq         $t2, $zero, L_8000A51C
    if (ctx->r10 == 0) {
        // 0x8000A4D4: nop
    
            goto L_8000A51C;
    }
    // 0x8000A4D4: nop

    // 0x8000A4D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000A4DC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8000A4E0: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000A4E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000A4E8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8000A4EC: nop

    // 0x8000A4F0: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8000A4F4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8000A4F8: nop

    // 0x8000A4FC: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x8000A500: bne         $t2, $zero, L_8000A514
    if (ctx->r10 != 0) {
        // 0x8000A504: nop
    
            goto L_8000A514;
    }
    // 0x8000A504: nop

    // 0x8000A508: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x8000A50C: b           L_8000A52C
    // 0x8000A510: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_8000A52C;
    // 0x8000A510: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_8000A514:
    // 0x8000A514: b           L_8000A52C
    // 0x8000A518: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_8000A52C;
    // 0x8000A518: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
L_8000A51C:
    // 0x8000A51C: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x8000A520: nop

    // 0x8000A524: bltz        $t2, L_8000A514
    if (SIGNED(ctx->r10) < 0) {
        // 0x8000A528: nop
    
            goto L_8000A514;
    }
    // 0x8000A528: nop

L_8000A52C:
    // 0x8000A52C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8000A530: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8000A534: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8000A538: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x8000A53C: or          $t4, $t0, $t3
    ctx->r12 = ctx->r8 | ctx->r11;
    // 0x8000A540: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8000A544: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8000A548: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8000A54C: lui         $t3, 0xE100
    ctx->r11 = S32(0XE100 << 16);
    // 0x8000A550: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8000A554: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000A558: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8000A55C: nop

    // 0x8000A560: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8000A564: beq         $t6, $zero, L_8000A5B0
    if (ctx->r14 == 0) {
        // 0x8000A568: nop
    
            goto L_8000A5B0;
    }
    // 0x8000A568: nop

    // 0x8000A56C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000A570: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8000A574: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8000A578: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000A57C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8000A580: nop

    // 0x8000A584: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8000A588: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8000A58C: nop

    // 0x8000A590: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x8000A594: bne         $t6, $zero, L_8000A5A8
    if (ctx->r14 != 0) {
        // 0x8000A598: nop
    
            goto L_8000A5A8;
    }
    // 0x8000A598: nop

    // 0x8000A59C: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x8000A5A0: b           L_8000A5C0
    // 0x8000A5A4: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_8000A5C0;
    // 0x8000A5A4: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_8000A5A8:
    // 0x8000A5A8: b           L_8000A5C0
    // 0x8000A5AC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_8000A5C0;
    // 0x8000A5AC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
L_8000A5B0:
    // 0x8000A5B0: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x8000A5B4: nop

    // 0x8000A5B8: bltz        $t6, L_8000A5A8
    if (SIGNED(ctx->r14) < 0) {
        // 0x8000A5BC: nop
    
            goto L_8000A5A8;
    }
    // 0x8000A5BC: nop

L_8000A5C0:
    // 0x8000A5C0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8000A5C4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8000A5C8: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8000A5CC: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8000A5D0: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x8000A5D4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000A5D8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8000A5DC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8000A5E0: nop

    // 0x8000A5E4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000A5E8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8000A5EC: nop

    // 0x8000A5F0: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8000A5F4: beq         $t1, $zero, L_8000A640
    if (ctx->r9 == 0) {
        // 0x8000A5F8: nop
    
            goto L_8000A640;
    }
    // 0x8000A5F8: nop

    // 0x8000A5FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000A600: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8000A604: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000A608: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000A60C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8000A610: nop

    // 0x8000A614: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8000A618: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8000A61C: nop

    // 0x8000A620: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8000A624: bne         $t1, $zero, L_8000A638
    if (ctx->r9 != 0) {
        // 0x8000A628: nop
    
            goto L_8000A638;
    }
    // 0x8000A628: nop

    // 0x8000A62C: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x8000A630: b           L_8000A650
    // 0x8000A634: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_8000A650;
    // 0x8000A634: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_8000A638:
    // 0x8000A638: b           L_8000A650
    // 0x8000A63C: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_8000A650;
    // 0x8000A63C: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
L_8000A640:
    // 0x8000A640: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x8000A644: nop

    // 0x8000A648: bltz        $t1, L_8000A638
    if (SIGNED(ctx->r9) < 0) {
        // 0x8000A64C: nop
    
            goto L_8000A638;
    }
    // 0x8000A64C: nop

L_8000A650:
    // 0x8000A650: andi        $t2, $t1, 0xFFF
    ctx->r10 = ctx->r9 & 0XFFF;
    // 0x8000A654: or          $t0, $t8, $t2
    ctx->r8 = ctx->r24 | ctx->r10;
    // 0x8000A658: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x8000A65C: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8000A660: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8000A664: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000A668: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8000A66C: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8000A670: lui         $t3, 0x400
    ctx->r11 = S32(0X400 << 16);
    // 0x8000A674: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8000A678: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x8000A67C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8000A680: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8000A684: ori         $t3, $t3, 0x400
    ctx->r11 = ctx->r11 | 0X400;
    // 0x8000A688: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8000A68C: lui         $t0, 0xF100
    ctx->r8 = S32(0XF100 << 16);
    // 0x8000A690: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8000A694: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000A698: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8000A69C: beq         $t5, $zero, L_8000A6E8
    if (ctx->r13 == 0) {
        // 0x8000A6A0: nop
    
            goto L_8000A6E8;
    }
    // 0x8000A6A0: nop

    // 0x8000A6A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000A6A8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8000A6AC: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8000A6B0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000A6B4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8000A6B8: nop

    // 0x8000A6BC: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000A6C0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8000A6C4: nop

    // 0x8000A6C8: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8000A6CC: bne         $t5, $zero, L_8000A6E0
    if (ctx->r13 != 0) {
        // 0x8000A6D0: nop
    
            goto L_8000A6E0;
    }
    // 0x8000A6D0: nop

    // 0x8000A6D4: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x8000A6D8: b           L_8000A6F8
    // 0x8000A6DC: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8000A6F8;
    // 0x8000A6DC: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8000A6E0:
    // 0x8000A6E0: b           L_8000A6F8
    // 0x8000A6E4: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8000A6F8;
    // 0x8000A6E4: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
L_8000A6E8:
    // 0x8000A6E8: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x8000A6EC: nop

    // 0x8000A6F0: bltz        $t5, L_8000A6E0
    if (SIGNED(ctx->r13) < 0) {
        // 0x8000A6F4: nop
    
            goto L_8000A6E0;
    }
    // 0x8000A6F4: nop

L_8000A6F8:
    // 0x8000A6F8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8000A6FC: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000A700: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8000A704: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8000A708: sll         $t7, $t5, 16
    ctx->r15 = S32(ctx->r13 << 16);
    // 0x8000A70C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000A710: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8000A714: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8000A718: nop

    // 0x8000A71C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8000A720: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8000A724: nop

    // 0x8000A728: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8000A72C: beq         $t1, $zero, L_8000A778
    if (ctx->r9 == 0) {
        // 0x8000A730: nop
    
            goto L_8000A778;
    }
    // 0x8000A730: nop

    // 0x8000A734: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000A738: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8000A73C: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8000A740: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000A744: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8000A748: nop

    // 0x8000A74C: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8000A750: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8000A754: nop

    // 0x8000A758: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8000A75C: bne         $t1, $zero, L_8000A770
    if (ctx->r9 != 0) {
        // 0x8000A760: nop
    
            goto L_8000A770;
    }
    // 0x8000A760: nop

    // 0x8000A764: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x8000A768: b           L_8000A788
    // 0x8000A76C: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_8000A788;
    // 0x8000A76C: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_8000A770:
    // 0x8000A770: b           L_8000A788
    // 0x8000A774: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_8000A788;
    // 0x8000A774: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
L_8000A778:
    // 0x8000A778: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x8000A77C: nop

    // 0x8000A780: bltz        $t1, L_8000A770
    if (SIGNED(ctx->r9) < 0) {
        // 0x8000A784: nop
    
            goto L_8000A770;
    }
    // 0x8000A784: nop

L_8000A788:
    // 0x8000A788: andi        $t8, $t1, 0xFFFF
    ctx->r24 = ctx->r9 & 0XFFFF;
    // 0x8000A78C: or          $t2, $t7, $t8
    ctx->r10 = ctx->r15 | ctx->r24;
    // 0x8000A790: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x8000A794: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8000A798: sw          $t3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r11;
    // 0x8000A79C: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
L_8000A7A0:
    // 0x8000A7A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000A7A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000A7A8: jr          $ra
    // 0x8000A7AC: nop

    return;
    // 0x8000A7AC: nop

;}
RECOMP_FUNC void func_8000A7B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000A7B0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8000A7B4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8000A7B8: lbu         $t5, 0x2($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X2);
    // 0x8000A7BC: lui         $t1, 0x8
    ctx->r9 = S32(0X8 << 16);
    // 0x8000A7C0: bne         $t5, $zero, L_8000AA64
    if (ctx->r13 != 0) {
        // 0x8000A7C4: lui         $t2, 0xF500
        ctx->r10 = S32(0XF500 << 16);
            goto L_8000AA64;
    }
    // 0x8000A7C4: lui         $t2, 0xF500
    ctx->r10 = S32(0XF500 << 16);
    // 0x8000A7C8: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x8000A7CC: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8000A7D0: andi        $t7, $t6, 0x7
    ctx->r15 = ctx->r14 & 0X7;
    // 0x8000A7D4: sll         $t8, $t7, 21
    ctx->r24 = S32(ctx->r15 << 21);
    // 0x8000A7D8: lhu         $t7, 0x4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X4);
    // 0x8000A7DC: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8000A7E0: or          $t6, $t9, $t1
    ctx->r14 = ctx->r25 | ctx->r9;
    // 0x8000A7E4: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x8000A7E8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8000A7EC: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x8000A7F0: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8000A7F4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8000A7F8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000A7FC: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x8000A800: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000A804: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8000A808: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x8000A80C: lh          $t0, 0x0($a2)
    ctx->r8 = MEM_H(ctx->r6, 0X0);
    // 0x8000A810: andi        $t7, $t6, 0x7
    ctx->r15 = ctx->r14 & 0X7;
    // 0x8000A814: sll         $t8, $t7, 21
    ctx->r24 = S32(ctx->r15 << 21);
    // 0x8000A818: lh          $t7, 0x4($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X4);
    // 0x8000A81C: or          $t9, $t8, $t2
    ctx->r25 = ctx->r24 | ctx->r10;
    // 0x8000A820: or          $t6, $t9, $t1
    ctx->r14 = ctx->r25 | ctx->r9;
    // 0x8000A824: addu        $t8, $t0, $t7
    ctx->r24 = ADD32(ctx->r8, ctx->r15);
    // 0x8000A828: subu        $t9, $t8, $t0
    ctx->r25 = SUB32(ctx->r24, ctx->r8);
    // 0x8000A82C: sra         $t7, $t9, 1
    ctx->r15 = S32(SIGNED(ctx->r25) >> 1);
    // 0x8000A830: addiu       $t8, $t7, 0x7
    ctx->r24 = ADD32(ctx->r15, 0X7);
    // 0x8000A834: sra         $t9, $t8, 3
    ctx->r25 = S32(SIGNED(ctx->r24) >> 3);
    // 0x8000A838: andi        $t7, $t9, 0x1FF
    ctx->r15 = ctx->r25 & 0X1FF;
    // 0x8000A83C: sll         $t8, $t7, 9
    ctx->r24 = S32(ctx->r15 << 9);
    // 0x8000A840: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x8000A844: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8000A848: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x8000A84C: lhu         $t7, 0x6($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X6);
    // 0x8000A850: lui         $t3, 0x700
    ctx->r11 = S32(0X700 << 16);
    // 0x8000A854: andi        $t6, $t7, 0x3
    ctx->r14 = ctx->r15 & 0X3;
    // 0x8000A858: lhu         $t7, 0xA($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0XA);
    // 0x8000A85C: sll         $t8, $t6, 18
    ctx->r24 = S32(ctx->r14 << 18);
    // 0x8000A860: or          $t9, $t8, $t3
    ctx->r25 = ctx->r24 | ctx->r11;
    // 0x8000A864: andi        $t6, $t7, 0xF
    ctx->r14 = ctx->r15 & 0XF;
    // 0x8000A868: sll         $t8, $t6, 14
    ctx->r24 = S32(ctx->r14 << 14);
    // 0x8000A86C: lhu         $t6, 0xE($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0XE);
    // 0x8000A870: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x8000A874: andi        $t9, $t6, 0xF
    ctx->r25 = ctx->r14 & 0XF;
    // 0x8000A878: sll         $t8, $t9, 10
    ctx->r24 = S32(ctx->r25 << 10);
    // 0x8000A87C: lhu         $t9, 0x4($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X4);
    // 0x8000A880: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x8000A884: andi        $t7, $t9, 0x3
    ctx->r15 = ctx->r25 & 0X3;
    // 0x8000A888: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8000A88C: lhu         $t7, 0x8($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X8);
    // 0x8000A890: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x8000A894: andi        $t6, $t7, 0xF
    ctx->r14 = ctx->r15 & 0XF;
    // 0x8000A898: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x8000A89C: lhu         $t6, 0xC($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0XC);
    // 0x8000A8A0: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x8000A8A4: andi        $t9, $t6, 0xF
    ctx->r25 = ctx->r14 & 0XF;
    // 0x8000A8A8: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x8000A8AC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000A8B0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8000A8B4: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x8000A8B8: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x8000A8BC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000A8C0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8000A8C4: lh          $t7, 0x0($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X0);
    // 0x8000A8C8: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8000A8CC: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x8000A8D0: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x8000A8D4: lh          $t9, 0x2($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X2);
    // 0x8000A8D8: sll         $t6, $t8, 12
    ctx->r14 = S32(ctx->r24 << 12);
    // 0x8000A8DC: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8000A8E0: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8000A8E4: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x8000A8E8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000A8EC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8000A8F0: or          $t9, $t7, $t6
    ctx->r25 = ctx->r15 | ctx->r14;
    // 0x8000A8F4: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x8000A8F8: lh          $t7, 0x4($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X4);
    // 0x8000A8FC: lh          $t8, 0x0($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X0);
    // 0x8000A900: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000A904: addu        $t6, $t8, $t7
    ctx->r14 = ADD32(ctx->r24, ctx->r15);
    // 0x8000A908: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x8000A90C: sll         $t8, $t9, 1
    ctx->r24 = S32(ctx->r25 << 1);
    // 0x8000A910: andi        $t7, $t8, 0xFFF
    ctx->r15 = ctx->r24 & 0XFFF;
    // 0x8000A914: sll         $t6, $t7, 12
    ctx->r14 = S32(ctx->r15 << 12);
    // 0x8000A918: lh          $t7, 0x6($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X6);
    // 0x8000A91C: lh          $t8, 0x2($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X2);
    // 0x8000A920: or          $t9, $t6, $t3
    ctx->r25 = ctx->r14 | ctx->r11;
    // 0x8000A924: addu        $t6, $t8, $t7
    ctx->r14 = ADD32(ctx->r24, ctx->r15);
    // 0x8000A928: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x8000A92C: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x8000A930: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x8000A934: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x8000A938: sw          $t8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r24;
    // 0x8000A93C: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8000A940: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8000A944: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x8000A948: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8000A94C: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x8000A950: lh          $t0, 0x0($a2)
    ctx->r8 = MEM_H(ctx->r6, 0X0);
    // 0x8000A954: andi        $t6, $t9, 0x7
    ctx->r14 = ctx->r25 & 0X7;
    // 0x8000A958: lh          $t9, 0x4($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X4);
    // 0x8000A95C: sll         $t8, $t6, 21
    ctx->r24 = S32(ctx->r14 << 21);
    // 0x8000A960: or          $t7, $t8, $t2
    ctx->r15 = ctx->r24 | ctx->r10;
    // 0x8000A964: addu        $t6, $t0, $t9
    ctx->r14 = ADD32(ctx->r8, ctx->r25);
    // 0x8000A968: subu        $t8, $t6, $t0
    ctx->r24 = SUB32(ctx->r14, ctx->r8);
    // 0x8000A96C: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8000A970: addiu       $t6, $t9, 0x7
    ctx->r14 = ADD32(ctx->r25, 0X7);
    // 0x8000A974: sra         $t8, $t6, 3
    ctx->r24 = S32(SIGNED(ctx->r14) >> 3);
    // 0x8000A978: andi        $t9, $t8, 0x1FF
    ctx->r25 = ctx->r24 & 0X1FF;
    // 0x8000A97C: sll         $t6, $t9, 9
    ctx->r14 = S32(ctx->r25 << 9);
    // 0x8000A980: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000A984: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x8000A988: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x8000A98C: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x8000A990: lhu         $t9, 0x6($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X6);
    // 0x8000A994: lhu         $t8, 0xA($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0XA);
    // 0x8000A998: andi        $t7, $t9, 0x3
    ctx->r15 = ctx->r25 & 0X3;
    // 0x8000A99C: sll         $t6, $t7, 18
    ctx->r14 = S32(ctx->r15 << 18);
    // 0x8000A9A0: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x8000A9A4: sll         $t7, $t9, 14
    ctx->r15 = S32(ctx->r25 << 14);
    // 0x8000A9A8: lhu         $t9, 0xE($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0XE);
    // 0x8000A9AC: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8000A9B0: andi        $t6, $t9, 0xF
    ctx->r14 = ctx->r25 & 0XF;
    // 0x8000A9B4: sll         $t7, $t6, 10
    ctx->r15 = S32(ctx->r14 << 10);
    // 0x8000A9B8: lhu         $t6, 0x4($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X4);
    // 0x8000A9BC: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8000A9C0: andi        $t8, $t6, 0x3
    ctx->r24 = ctx->r14 & 0X3;
    // 0x8000A9C4: sll         $t7, $t8, 8
    ctx->r15 = S32(ctx->r24 << 8);
    // 0x8000A9C8: lhu         $t8, 0x8($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X8);
    // 0x8000A9CC: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x8000A9D0: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x8000A9D4: sll         $t7, $t9, 4
    ctx->r15 = S32(ctx->r25 << 4);
    // 0x8000A9D8: lhu         $t9, 0xC($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0XC);
    // 0x8000A9DC: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8000A9E0: andi        $t6, $t9, 0xF
    ctx->r14 = ctx->r25 & 0XF;
    // 0x8000A9E4: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8000A9E8: sw          $t7, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r15;
    // 0x8000A9EC: lh          $t9, 0x0($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X0);
    // 0x8000A9F0: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8000A9F4: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8000A9F8: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x8000A9FC: lh          $t8, 0x2($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X2);
    // 0x8000AA00: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8000AA04: or          $t9, $t7, $at
    ctx->r25 = ctx->r15 | ctx->r1;
    // 0x8000AA08: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8000AA0C: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8000AA10: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000AA14: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8000AA18: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x8000AA1C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000AA20: lh          $t9, 0x4($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X4);
    // 0x8000AA24: lh          $t6, 0x0($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X0);
    // 0x8000AA28: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000AA2C: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x8000AA30: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8000AA34: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8000AA38: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8000AA3C: lh          $t6, 0x6($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X6);
    // 0x8000AA40: lh          $t8, 0x2($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X2);
    // 0x8000AA44: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x8000AA48: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x8000AA4C: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x8000AA50: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8000AA54: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8000AA58: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x8000AA5C: b           L_8000AD1C
    // 0x8000AA60: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
        goto L_8000AD1C;
    // 0x8000AA60: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
L_8000AA64:
    // 0x8000AA64: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    // 0x8000AA68: lh          $t6, 0x0($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X0);
    // 0x8000AA6C: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8000AA70: sh          $t6, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r14;
    // 0x8000AA74: lh          $t0, 0x2($a2)
    ctx->r8 = MEM_H(ctx->r6, 0X2);
    // 0x8000AA78: andi        $v1, $t6, 0xFFFF
    ctx->r3 = ctx->r14 & 0XFFFF;
    // 0x8000AA7C: sh          $t0, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r8;
    // 0x8000AA80: lh          $t9, 0x4($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X4);
    // 0x8000AA84: nop

    // 0x8000AA88: addu        $t8, $v1, $t9
    ctx->r24 = ADD32(ctx->r3, ctx->r25);
    // 0x8000AA8C: addiu       $t6, $t8, -0x1
    ctx->r14 = ADD32(ctx->r24, -0X1);
    // 0x8000AA90: sh          $t6, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r14;
    // 0x8000AA94: lh          $t7, 0x6($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X6);
    // 0x8000AA98: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8000AA9C: addu        $t9, $t0, $t7
    ctx->r25 = ADD32(ctx->r8, ctx->r15);
    // 0x8000AAA0: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x8000AAA4: sh          $t8, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r24;
    // 0x8000AAA8: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x8000AAAC: andi        $t7, $t5, 0x3
    ctx->r15 = ctx->r13 & 0X3;
    // 0x8000AAB0: sll         $a3, $t7, 19
    ctx->r7 = S32(ctx->r15 << 19);
    // 0x8000AAB4: andi        $t7, $t8, 0x7
    ctx->r15 = ctx->r24 & 0X7;
    // 0x8000AAB8: sll         $t9, $t7, 21
    ctx->r25 = S32(ctx->r15 << 21);
    // 0x8000AABC: or          $t8, $t9, $at
    ctx->r24 = ctx->r25 | ctx->r1;
    // 0x8000AAC0: lhu         $t9, 0x4($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X4);
    // 0x8000AAC4: or          $t7, $t8, $a3
    ctx->r15 = ctx->r24 | ctx->r7;
    // 0x8000AAC8: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x8000AACC: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8000AAD0: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x8000AAD4: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8000AAD8: andi        $t3, $t6, 0xFFFF
    ctx->r11 = ctx->r14 & 0XFFFF;
    // 0x8000AADC: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x8000AAE0: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x8000AAE4: subu        $t4, $t3, $v1
    ctx->r12 = SUB32(ctx->r11, ctx->r3);
    // 0x8000AAE8: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    // 0x8000AAEC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8000AAF0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8000AAF4: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x8000AAF8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8000AAFC: lw          $t9, -0x1498($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1498);
    // 0x8000AB00: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x8000AB04: multu       $t9, $t4
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000AB08: or          $t2, $t8, $zero
    ctx->r10 = ctx->r24 | 0;
    // 0x8000AB0C: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x8000AB10: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000AB14: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x8000AB18: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000AB1C: sll         $a2, $v1, 2
    ctx->r6 = S32(ctx->r3 << 2);
    // 0x8000AB20: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x8000AB24: mflo        $t7
    ctx->r15 = lo;
    // 0x8000AB28: addiu       $t8, $t7, 0x7
    ctx->r24 = ADD32(ctx->r15, 0X7);
    // 0x8000AB2C: sra         $t6, $t8, 3
    ctx->r14 = S32(SIGNED(ctx->r24) >> 3);
    // 0x8000AB30: andi        $t9, $t6, 0x1FF
    ctx->r25 = ctx->r14 & 0X1FF;
    // 0x8000AB34: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x8000AB38: sll         $t7, $t9, 9
    ctx->r15 = S32(ctx->r25 << 9);
    // 0x8000AB3C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8000AB40: andi        $t9, $t6, 0x7
    ctx->r25 = ctx->r14 & 0X7;
    // 0x8000AB44: sll         $t7, $t9, 21
    ctx->r15 = S32(ctx->r25 << 21);
    // 0x8000AB48: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x8000AB4C: or          $t9, $t6, $a3
    ctx->r25 = ctx->r14 | ctx->r7;
    // 0x8000AB50: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x8000AB54: lhu         $t8, 0x6($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X6);
    // 0x8000AB58: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8000AB5C: andi        $t7, $t8, 0x3
    ctx->r15 = ctx->r24 & 0X3;
    // 0x8000AB60: lhu         $t8, 0xA($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0XA);
    // 0x8000AB64: sll         $t6, $t7, 18
    ctx->r14 = S32(ctx->r15 << 18);
    // 0x8000AB68: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x8000AB6C: andi        $t7, $t8, 0xF
    ctx->r15 = ctx->r24 & 0XF;
    // 0x8000AB70: sll         $t6, $t7, 14
    ctx->r14 = S32(ctx->r15 << 14);
    // 0x8000AB74: lhu         $t7, 0xE($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0XE);
    // 0x8000AB78: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x8000AB7C: andi        $t9, $t7, 0xF
    ctx->r25 = ctx->r15 & 0XF;
    // 0x8000AB80: sll         $t6, $t9, 10
    ctx->r14 = S32(ctx->r25 << 10);
    // 0x8000AB84: lhu         $t9, 0x4($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X4);
    // 0x8000AB88: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8000AB8C: andi        $t8, $t9, 0x3
    ctx->r24 = ctx->r25 & 0X3;
    // 0x8000AB90: sll         $t6, $t8, 8
    ctx->r14 = S32(ctx->r24 << 8);
    // 0x8000AB94: lhu         $t8, 0x8($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X8);
    // 0x8000AB98: or          $t9, $t7, $t6
    ctx->r25 = ctx->r15 | ctx->r14;
    // 0x8000AB9C: andi        $t7, $t8, 0xF
    ctx->r15 = ctx->r24 & 0XF;
    // 0x8000ABA0: sll         $t6, $t7, 4
    ctx->r14 = S32(ctx->r15 << 4);
    // 0x8000ABA4: lhu         $t7, 0xC($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0XC);
    // 0x8000ABA8: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x8000ABAC: andi        $t9, $t7, 0xF
    ctx->r25 = ctx->r15 & 0XF;
    // 0x8000ABB0: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x8000ABB4: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
    // 0x8000ABB8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8000ABBC: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8000ABC0: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x8000ABC4: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8000ABC8: andi        $t9, $a2, 0xFFF
    ctx->r25 = ctx->r6 & 0XFFF;
    // 0x8000ABCC: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8000ABD0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000ABD4: sll         $a2, $t9, 12
    ctx->r6 = S32(ctx->r25 << 12);
    // 0x8000ABD8: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8000ABDC: or          $t8, $a2, $at
    ctx->r24 = ctx->r6 | ctx->r1;
    // 0x8000ABE0: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x8000ABE4: andi        $t7, $t5, 0xFFF
    ctx->r15 = ctx->r13 & 0XFFF;
    // 0x8000ABE8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8000ABEC: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8000ABF0: or          $t5, $t7, $zero
    ctx->r13 = ctx->r15 | 0;
    // 0x8000ABF4: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x8000ABF8: sw          $t9, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r25;
    // 0x8000ABFC: lhu         $t6, 0x48($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X48);
    // 0x8000AC00: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x8000AC04: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x8000AC08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000AC0C: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8000AC10: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x8000AC14: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x8000AC18: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8000AC1C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8000AC20: sw          $t8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r24;
    // 0x8000AC24: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x8000AC28: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000AC2C: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x8000AC30: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8000AC34: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x8000AC38: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8000AC3C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8000AC40: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x8000AC44: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8000AC48: addu        $t8, $t8, $t2
    ctx->r24 = ADD32(ctx->r24, ctx->r10);
    // 0x8000AC4C: lw          $t8, -0x1488($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1488);
    // 0x8000AC50: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x8000AC54: multu       $t8, $t4
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000AC58: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000AC5C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8000AC60: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000AC64: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8000AC68: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000AC6C: mflo        $t7
    ctx->r15 = lo;
    // 0x8000AC70: addiu       $t9, $t7, 0x7
    ctx->r25 = ADD32(ctx->r15, 0X7);
    // 0x8000AC74: sra         $t6, $t9, 3
    ctx->r14 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8000AC78: andi        $t8, $t6, 0x1FF
    ctx->r24 = ctx->r14 & 0X1FF;
    // 0x8000AC7C: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x8000AC80: sll         $t7, $t8, 9
    ctx->r15 = S32(ctx->r24 << 9);
    // 0x8000AC84: or          $t9, $t7, $at
    ctx->r25 = ctx->r15 | ctx->r1;
    // 0x8000AC88: andi        $t8, $t6, 0x7
    ctx->r24 = ctx->r14 & 0X7;
    // 0x8000AC8C: sll         $t7, $t8, 21
    ctx->r15 = S32(ctx->r24 << 21);
    // 0x8000AC90: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x8000AC94: or          $t8, $t6, $a3
    ctx->r24 = ctx->r14 | ctx->r7;
    // 0x8000AC98: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000AC9C: lhu         $t9, 0x6($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X6);
    // 0x8000ACA0: lhu         $t8, 0xA($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0XA);
    // 0x8000ACA4: andi        $t7, $t9, 0x3
    ctx->r15 = ctx->r25 & 0X3;
    // 0x8000ACA8: sll         $t6, $t7, 18
    ctx->r14 = S32(ctx->r15 << 18);
    // 0x8000ACAC: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x8000ACB0: sll         $t7, $t9, 14
    ctx->r15 = S32(ctx->r25 << 14);
    // 0x8000ACB4: lhu         $t9, 0xE($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0XE);
    // 0x8000ACB8: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8000ACBC: andi        $t6, $t9, 0xF
    ctx->r14 = ctx->r25 & 0XF;
    // 0x8000ACC0: sll         $t7, $t6, 10
    ctx->r15 = S32(ctx->r14 << 10);
    // 0x8000ACC4: lhu         $t6, 0x4($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X4);
    // 0x8000ACC8: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8000ACCC: andi        $t8, $t6, 0x3
    ctx->r24 = ctx->r14 & 0X3;
    // 0x8000ACD0: sll         $t7, $t8, 8
    ctx->r15 = S32(ctx->r24 << 8);
    // 0x8000ACD4: lhu         $t8, 0x8($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X8);
    // 0x8000ACD8: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x8000ACDC: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x8000ACE0: sll         $t7, $t9, 4
    ctx->r15 = S32(ctx->r25 << 4);
    // 0x8000ACE4: lhu         $t9, 0xC($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0XC);
    // 0x8000ACE8: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8000ACEC: andi        $t6, $t9, 0xF
    ctx->r14 = ctx->r25 & 0XF;
    // 0x8000ACF0: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8000ACF4: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8000ACF8: or          $t9, $a2, $at
    ctx->r25 = ctx->r6 | ctx->r1;
    // 0x8000ACFC: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8000AD00: or          $t8, $t9, $t5
    ctx->r24 = ctx->r25 | ctx->r13;
    // 0x8000AD04: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x8000AD08: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x8000AD0C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8000AD10: nop

    // 0x8000AD14: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x8000AD18: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
L_8000AD1C:
    // 0x8000AD1C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000AD20: jr          $ra
    // 0x8000AD24: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8000AD24: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_8000AD28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000AD28: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    // 0x8000AD2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8000AD30: bne         $t6, $at, L_8000AE74
    if (ctx->r14 != ctx->r1) {
        // 0x8000AD34: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8000AE74;
    }
    // 0x8000AD34: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000AD38: lui         $t7, 0xE300
    ctx->r15 = S32(0XE300 << 16);
    // 0x8000AD3C: ori         $t7, $t7, 0x1001
    ctx->r15 = ctx->r15 | 0X1001;
    // 0x8000AD40: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000AD44: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000AD48: lhu         $t8, 0x8($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X8);
    // 0x8000AD4C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000AD50: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8000AD54: lbu         $t9, 0x2($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X2);
    // 0x8000AD58: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000AD5C: bne         $t9, $at, L_8000ADE4
    if (ctx->r25 != ctx->r1) {
        // 0x8000AD60: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8000ADE4;
    }
    // 0x8000AD60: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000AD64: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000AD68: lui         $t1, 0xFD10
    ctx->r9 = S32(0XFD10 << 16);
    // 0x8000AD6C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x8000AD70: lw          $t2, 0xC($a1)
    ctx->r10 = MEM_W(ctx->r5, 0XC);
    // 0x8000AD74: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x8000AD78: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x8000AD7C: addiu       $a2, $v1, 0x8
    ctx->r6 = ADD32(ctx->r3, 0X8);
    // 0x8000AD80: lui         $t3, 0xE800
    ctx->r11 = S32(0XE800 << 16);
    // 0x8000AD84: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x8000AD88: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8000AD8C: lui         $t4, 0xF500
    ctx->r12 = S32(0XF500 << 16);
    // 0x8000AD90: ori         $t4, $t4, 0x100
    ctx->r12 = ctx->r12 | 0X100;
    // 0x8000AD94: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x8000AD98: lui         $t5, 0x700
    ctx->r13 = S32(0X700 << 16);
    // 0x8000AD9C: sw          $t5, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r13;
    // 0x8000ADA0: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x8000ADA4: addiu       $t0, $a3, 0x8
    ctx->r8 = ADD32(ctx->r7, 0X8);
    // 0x8000ADA8: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x8000ADAC: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x8000ADB0: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x8000ADB4: lui         $t8, 0x73F
    ctx->r24 = S32(0X73F << 16);
    // 0x8000ADB8: ori         $t8, $t8, 0xC000
    ctx->r24 = ctx->r24 | 0XC000;
    // 0x8000ADBC: addiu       $v0, $t0, 0x8
    ctx->r2 = ADD32(ctx->r8, 0X8);
    // 0x8000ADC0: lui         $t7, 0xF000
    ctx->r15 = S32(0XF000 << 16);
    // 0x8000ADC4: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x8000ADC8: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x8000ADCC: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8000ADD0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000ADD4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000ADD8: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x8000ADDC: jr          $ra
    // 0x8000ADE0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8000ADE0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8000ADE4:
    // 0x8000ADE4: lui         $t1, 0xFD10
    ctx->r9 = S32(0XFD10 << 16);
    // 0x8000ADE8: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x8000ADEC: lw          $t2, 0xC($a1)
    ctx->r10 = MEM_W(ctx->r5, 0XC);
    // 0x8000ADF0: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x8000ADF4: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x8000ADF8: lui         $t3, 0xE800
    ctx->r11 = S32(0XE800 << 16);
    // 0x8000ADFC: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x8000AE00: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8000AE04: lbu         $t4, 0x3($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X3);
    // 0x8000AE08: addiu       $a2, $v1, 0x8
    ctx->r6 = ADD32(ctx->r3, 0X8);
    // 0x8000AE0C: andi        $t5, $t4, 0xF
    ctx->r13 = ctx->r12 & 0XF;
    // 0x8000AE10: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x8000AE14: addiu       $t7, $t6, 0x100
    ctx->r15 = ADD32(ctx->r14, 0X100);
    // 0x8000AE18: andi        $t8, $t7, 0x1FF
    ctx->r24 = ctx->r15 & 0X1FF;
    // 0x8000AE1C: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x8000AE20: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8000AE24: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x8000AE28: lui         $t1, 0x700
    ctx->r9 = S32(0X700 << 16);
    // 0x8000AE2C: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x8000AE30: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8000AE34: addiu       $t0, $a3, 0x8
    ctx->r8 = ADD32(ctx->r7, 0X8);
    // 0x8000AE38: lui         $t2, 0xE600
    ctx->r10 = S32(0XE600 << 16);
    // 0x8000AE3C: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x8000AE40: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x8000AE44: lui         $t4, 0x703
    ctx->r12 = S32(0X703 << 16);
    // 0x8000AE48: ori         $t4, $t4, 0xC000
    ctx->r12 = ctx->r12 | 0XC000;
    // 0x8000AE4C: addiu       $v0, $t0, 0x8
    ctx->r2 = ADD32(ctx->r8, 0X8);
    // 0x8000AE50: lui         $t3, 0xF000
    ctx->r11 = S32(0XF000 << 16);
    // 0x8000AE54: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x8000AE58: sw          $t4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r12;
    // 0x8000AE5C: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x8000AE60: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8000AE64: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000AE68: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x8000AE6C: jr          $ra
    // 0x8000AE70: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8000AE70: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8000AE74:
    // 0x8000AE74: lui         $t6, 0xE300
    ctx->r14 = S32(0XE300 << 16);
    // 0x8000AE78: ori         $t6, $t6, 0x1001
    ctx->r14 = ctx->r14 | 0X1001;
    // 0x8000AE7C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8000AE80: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000AE84: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000AE88: jr          $ra
    // 0x8000AE8C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8000AE8C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_8000AE90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000AE90: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x8000AE94: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8000AE98: beq         $v1, $a2, L_8000AEC0
    if (ctx->r3 == ctx->r6) {
        // 0x8000AE9C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8000AEC0;
    }
    // 0x8000AE9C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8000AEA0: bne         $v1, $at, L_8000AED8
    if (ctx->r3 != ctx->r1) {
        // 0x8000AEA4: nop
    
            goto L_8000AED8;
    }
    // 0x8000AEA4: nop

    // 0x8000AEA8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8000AEAC: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x8000AEB0: andi        $t6, $v1, 0xFFFC
    ctx->r14 = ctx->r3 & 0XFFFC;
    // 0x8000AEB4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000AEB8: b           L_8000AF04
    // 0x8000AEBC: andi        $v1, $t7, 0xFFFF
    ctx->r3 = ctx->r15 & 0XFFFF;
        goto L_8000AF04;
    // 0x8000AEBC: andi        $v1, $t7, 0xFFFF
    ctx->r3 = ctx->r15 & 0XFFFF;
L_8000AEC0:
    // 0x8000AEC0: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8000AEC4: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x8000AEC8: andi        $t9, $v1, 0xFFFC
    ctx->r25 = ctx->r3 & 0XFFFC;
    // 0x8000AECC: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8000AED0: b           L_8000AF04
    // 0x8000AED4: andi        $v1, $t0, 0xFFFF
    ctx->r3 = ctx->r8 & 0XFFFF;
        goto L_8000AF04;
    // 0x8000AED4: andi        $v1, $t0, 0xFFFF
    ctx->r3 = ctx->r8 & 0XFFFF;
L_8000AED8:
    // 0x8000AED8: bne         $v1, $zero, L_8000AEF8
    if (ctx->r3 != 0) {
        // 0x8000AEDC: addiu       $at, $zero, -0x10
        ctx->r1 = ADD32(0, -0X10);
            goto L_8000AEF8;
    }
    // 0x8000AEDC: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x8000AEE0: andi        $v1, $a1, 0xFFFF
    ctx->r3 = ctx->r5 & 0XFFFF;
    // 0x8000AEE4: addiu       $v1, $v1, 0xF
    ctx->r3 = ADD32(ctx->r3, 0XF);
    // 0x8000AEE8: and         $t2, $v1, $at
    ctx->r10 = ctx->r3 & ctx->r1;
    // 0x8000AEEC: sra         $t3, $t2, 1
    ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
    // 0x8000AEF0: b           L_8000AF04
    // 0x8000AEF4: andi        $v1, $t3, 0xFFFF
    ctx->r3 = ctx->r11 & 0XFFFF;
        goto L_8000AF04;
    // 0x8000AEF4: andi        $v1, $t3, 0xFFFF
    ctx->r3 = ctx->r11 & 0XFFFF;
L_8000AEF8:
    // 0x8000AEF8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8000AEFC: addiu       $t5, $v1, 0x7
    ctx->r13 = ADD32(ctx->r3, 0X7);
    // 0x8000AF00: andi        $v1, $t5, 0xFFF8
    ctx->r3 = ctx->r13 & 0XFFF8;
L_8000AF04:
    // 0x8000AF04: lhu         $t7, 0x0($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X0);
    // 0x8000AF08: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x8000AF0C: bne         $a2, $t7, L_8000AF1C
    if (ctx->r6 != ctx->r15) {
        // 0x8000AF10: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8000AF1C;
    }
    // 0x8000AF10: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000AF14: b           L_8000AF20
    // 0x8000AF18: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
        goto L_8000AF20;
    // 0x8000AF18: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
L_8000AF1C:
    // 0x8000AF1C: addiu       $a0, $zero, 0x1000
    ctx->r4 = ADD32(0, 0X1000);
L_8000AF20:
    // 0x8000AF20: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x8000AF24: bgez        $v1, L_8000AF3C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8000AF28: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8000AF3C;
    }
    // 0x8000AF28: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000AF2C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8000AF30: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000AF34: nop

    // 0x8000AF38: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_8000AF3C:
    // 0x8000AF3C: nop

    // 0x8000AF40: div.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8000AF44: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8000AF48: nop

    // 0x8000AF4C: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8000AF50: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000AF54: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000AF58: nop

    // 0x8000AF5C: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8000AF60: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x8000AF64: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8000AF68: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x8000AF6C: jr          $ra
    // 0x8000AF70: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    return;
    // 0x8000AF70: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
;}
RECOMP_FUNC void func_8000AF74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000AF74: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8000AF78: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8000AF7C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8000AF80: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8000AF84: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8000AF88: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8000AF8C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8000AF90: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8000AF94: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8000AF98: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8000AF9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000AFA0: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x8000AFA4: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x8000AFA8: lw          $s3, 0x0($a1)
    ctx->r19 = MEM_W(ctx->r5, 0X0);
    // 0x8000AFAC: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8000AFB0: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x8000AFB4: jal         0x8000A0B0
    // 0x8000AFB8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8000A0B0(rdram, ctx);
        goto after_0;
    // 0x8000AFB8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x8000AFBC: lw          $s5, 0x90($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X90);
    // 0x8000AFC0: bne         $v0, $zero, L_8000AFD0
    if (ctx->r2 != 0) {
        // 0x8000AFC4: nop
    
            goto L_8000AFD0;
    }
    // 0x8000AFC4: nop

    // 0x8000AFC8: b           L_8000B204
    // 0x8000AFCC: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
        goto L_8000B204;
    // 0x8000AFCC: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
L_8000AFD0:
    // 0x8000AFD0: bne         $s0, $zero, L_8000AFE4
    if (ctx->r16 != 0) {
        // 0x8000AFD4: nop
    
            goto L_8000AFE4;
    }
    // 0x8000AFD4: nop

    // 0x8000AFD8: sh          $zero, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = 0;
    // 0x8000AFDC: b           L_8000AFFC
    // 0x8000AFE0: sh          $zero, 0x78($sp)
    MEM_H(0X78, ctx->r29) = 0;
        goto L_8000AFFC;
    // 0x8000AFE0: sh          $zero, 0x78($sp)
    MEM_H(0X78, ctx->r29) = 0;
L_8000AFE4:
    // 0x8000AFE4: lh          $t7, 0x0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X0);
    // 0x8000AFE8: nop

    // 0x8000AFEC: sh          $t7, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r15;
    // 0x8000AFF0: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    // 0x8000AFF4: nop

    // 0x8000AFF8: sh          $t8, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r24;
L_8000AFFC:
    // 0x8000AFFC: lwl         $at, 0x0($s1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r17, 0X0);
    // 0x8000B000: lwr         $at, 0x3($s1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r17, 0X3);
    // 0x8000B004: addiu       $t9, $sp, 0x70
    ctx->r25 = ADD32(ctx->r29, 0X70);
    // 0x8000B008: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x8000B00C: lwl         $t4, 0x4($s1)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r17, 0X4);
    // 0x8000B010: lwr         $t4, 0x7($s1)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r17, 0X7);
    // 0x8000B014: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8000B018: sw          $t4, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r12;
    // 0x8000B01C: lh          $a1, 0x74($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X74);
    // 0x8000B020: jal         0x8000AE90
    // 0x8000B024: nop

    func_8000AE90(rdram, ctx);
        goto after_1;
    // 0x8000B024: nop

    after_1:
    // 0x8000B028: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8000B02C: beq         $at, $zero, L_8000B03C
    if (ctx->r1 == 0) {
        // 0x8000B030: andi        $t0, $v0, 0xFFFF
        ctx->r8 = ctx->r2 & 0XFFFF;
            goto L_8000B03C;
    }
    // 0x8000B030: andi        $t0, $v0, 0xFFFF
    ctx->r8 = ctx->r2 & 0XFFFF;
    // 0x8000B034: b           L_8000B204
    // 0x8000B038: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
        goto L_8000B204;
    // 0x8000B038: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
L_8000B03C:
    // 0x8000B03C: lh          $t1, 0x76($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X76);
    // 0x8000B040: lh          $v1, 0x70($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X70);
    // 0x8000B044: andi        $t5, $v0, 0xFFFF
    ctx->r13 = ctx->r2 & 0XFFFF;
    // 0x8000B048: slt         $at, $t1, $t5
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8000B04C: beq         $at, $zero, L_8000B058
    if (ctx->r1 == 0) {
        // 0x8000B050: andi        $a0, $v1, 0xFFFF
        ctx->r4 = ctx->r3 & 0XFFFF;
            goto L_8000B058;
    }
    // 0x8000B050: andi        $a0, $v1, 0xFFFF
    ctx->r4 = ctx->r3 & 0XFFFF;
    // 0x8000B054: andi        $t0, $t1, 0xFFFF
    ctx->r8 = ctx->r9 & 0XFFFF;
L_8000B058:
    // 0x8000B058: bgez        $v1, L_8000B074
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8000B05C: or          $s4, $t0, $zero
        ctx->r20 = ctx->r8 | 0;
            goto L_8000B074;
    }
    // 0x8000B05C: or          $s4, $t0, $zero
    ctx->r20 = ctx->r8 | 0;
    // 0x8000B060: lh          $t6, 0x78($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X78);
    // 0x8000B064: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8000B068: subu        $t7, $t6, $v1
    ctx->r15 = SUB32(ctx->r14, ctx->r3);
    // 0x8000B06C: b           L_8000B074
    // 0x8000B070: sh          $t7, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r15;
        goto L_8000B074;
    // 0x8000B070: sh          $t7, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r15;
L_8000B074:
    // 0x8000B074: lh          $t8, 0x74($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X74);
    // 0x8000B078: lh          $a2, 0x72($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X72);
    // 0x8000B07C: addu        $v0, $v1, $t8
    ctx->r2 = ADD32(ctx->r3, ctx->r24);
    // 0x8000B080: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8000B084: andi        $t3, $v0, 0xFFFF
    ctx->r11 = ctx->r2 & 0XFFFF;
    // 0x8000B088: slti        $at, $t3, 0x140
    ctx->r1 = SIGNED(ctx->r11) < 0X140 ? 1 : 0;
    // 0x8000B08C: bne         $at, $zero, L_8000B098
    if (ctx->r1 != 0) {
        // 0x8000B090: andi        $a1, $v0, 0xFFFF
        ctx->r5 = ctx->r2 & 0XFFFF;
            goto L_8000B098;
    }
    // 0x8000B090: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x8000B094: addiu       $a1, $zero, 0x13F
    ctx->r5 = ADD32(0, 0X13F);
L_8000B098:
    // 0x8000B098: subu        $t2, $a1, $a0
    ctx->r10 = SUB32(ctx->r5, ctx->r4);
    // 0x8000B09C: addiu       $t9, $t2, 0x1
    ctx->r25 = ADD32(ctx->r10, 0X1);
    // 0x8000B0A0: sh          $t9, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r25;
    // 0x8000B0A4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8000B0A8: bgez        $a2, L_8000B0C4
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8000B0AC: or          $s2, $a0, $zero
        ctx->r18 = ctx->r4 | 0;
            goto L_8000B0C4;
    }
    // 0x8000B0AC: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8000B0B0: lh          $t4, 0x7A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X7A);
    // 0x8000B0B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8000B0B8: subu        $t5, $t4, $a2
    ctx->r13 = SUB32(ctx->r12, ctx->r6);
    // 0x8000B0BC: b           L_8000B0C8
    // 0x8000B0C0: sh          $t5, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r13;
        goto L_8000B0C8;
    // 0x8000B0C0: sh          $t5, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r13;
L_8000B0C4:
    // 0x8000B0C4: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
L_8000B0C8:
    // 0x8000B0C8: addu        $v0, $a2, $t1
    ctx->r2 = ADD32(ctx->r6, ctx->r9);
    // 0x8000B0CC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8000B0D0: andi        $t6, $v0, 0xFFFF
    ctx->r14 = ctx->r2 & 0XFFFF;
    // 0x8000B0D4: slti        $at, $t6, 0xF0
    ctx->r1 = SIGNED(ctx->r14) < 0XF0 ? 1 : 0;
    // 0x8000B0D8: bne         $at, $zero, L_8000B0E4
    if (ctx->r1 != 0) {
        // 0x8000B0DC: andi        $a3, $v0, 0xFFFF
        ctx->r7 = ctx->r2 & 0XFFFF;
            goto L_8000B0E4;
    }
    // 0x8000B0DC: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x8000B0E0: addiu       $a3, $zero, 0xEF
    ctx->r7 = ADD32(0, 0XEF);
L_8000B0E4:
    // 0x8000B0E4: sh          $t0, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r8;
    // 0x8000B0E8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8000B0EC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8000B0F0: sh          $v1, 0x88($sp)
    MEM_H(0X88, ctx->r29) = ctx->r3;
    // 0x8000B0F4: jal         0x8000AD28
    // 0x8000B0F8: sh          $a3, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r7;
    func_8000AD28(rdram, ctx);
        goto after_2;
    // 0x8000B0F8: sh          $a3, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r7;
    after_2:
    // 0x8000B0FC: lhu         $s1, 0x88($sp)
    ctx->r17 = MEM_HU(ctx->r29, 0X88);
    // 0x8000B100: lhu         $a3, 0x84($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X84);
    // 0x8000B104: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8000B108: slt         $at, $a3, $s1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8000B10C: bne         $at, $zero, L_8000B200
    if (ctx->r1 != 0) {
        // 0x8000B110: or          $s3, $a3, $zero
        ctx->r19 = ctx->r7 | 0;
            goto L_8000B200;
    }
    // 0x8000B110: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x8000B114: sll         $s5, $s0, 2
    ctx->r21 = S32(ctx->r16 << 2);
    // 0x8000B118: andi        $t7, $s5, 0xFFF
    ctx->r15 = ctx->r21 & 0XFFF;
    // 0x8000B11C: sll         $s6, $s2, 2
    ctx->r22 = S32(ctx->r18 << 2);
    // 0x8000B120: andi        $t2, $s6, 0xFFF
    ctx->r10 = ctx->r22 & 0XFFF;
    // 0x8000B124: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x8000B128: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8000B12C: or          $s5, $t8, $at
    ctx->r21 = ctx->r24 | ctx->r1;
    // 0x8000B130: sll         $s6, $t2, 12
    ctx->r22 = S32(ctx->r10 << 12);
    // 0x8000B134: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
    // 0x8000B138: lui         $fp, 0xE100
    ctx->r30 = S32(0XE100 << 16);
    // 0x8000B13C: addiu       $s7, $sp, 0x78
    ctx->r23 = ADD32(ctx->r29, 0X78);
L_8000B140:
    // 0x8000B140: addu        $s0, $s1, $s4
    ctx->r16 = ADD32(ctx->r17, ctx->r20);
    // 0x8000B144: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x8000B148: andi        $t4, $s0, 0xFFFF
    ctx->r12 = ctx->r16 & 0XFFFF;
    // 0x8000B14C: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x8000B150: slt         $at, $s3, $t4
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8000B154: beq         $at, $zero, L_8000B16C
    if (ctx->r1 == 0) {
        // 0x8000B158: andi        $s2, $s0, 0xFFFF
        ctx->r18 = ctx->r16 & 0XFFFF;
            goto L_8000B16C;
    }
    // 0x8000B158: andi        $s2, $s0, 0xFFFF
    ctx->r18 = ctx->r16 & 0XFFFF;
    // 0x8000B15C: subu        $t5, $s3, $s1
    ctx->r13 = SUB32(ctx->r19, ctx->r17);
    // 0x8000B160: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8000B164: andi        $s2, $a3, 0xFFFF
    ctx->r18 = ctx->r7 & 0XFFFF;
    // 0x8000B168: sh          $t6, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r14;
L_8000B16C:
    // 0x8000B16C: lw          $a1, 0x94($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X94);
    // 0x8000B170: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x8000B174: jal         0x8000A7B0
    // 0x8000B178: sh          $a3, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r7;
    func_8000A7B0(rdram, ctx);
        goto after_3;
    // 0x8000B178: sh          $a3, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r7;
    after_3:
    // 0x8000B17C: lhu         $a3, 0x84($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X84);
    // 0x8000B180: sll         $t7, $s2, 2
    ctx->r15 = S32(ctx->r18 << 2);
    // 0x8000B184: sll         $t2, $s1, 2
    ctx->r10 = S32(ctx->r17 << 2);
    // 0x8000B188: andi        $t9, $t2, 0xFFF
    ctx->r25 = ctx->r10 & 0XFFF;
    // 0x8000B18C: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x8000B190: or          $t3, $s5, $t8
    ctx->r11 = ctx->r21 | ctx->r24;
    // 0x8000B194: or          $t4, $s6, $t9
    ctx->r12 = ctx->r22 | ctx->r25;
    // 0x8000B198: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8000B19C: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x8000B1A0: sw          $fp, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r30;
    // 0x8000B1A4: lh          $t3, 0x7A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X7A);
    // 0x8000B1A8: lh          $t7, 0x78($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X78);
    // 0x8000B1AC: sll         $t2, $t3, 5
    ctx->r10 = S32(ctx->r11 << 5);
    // 0x8000B1B0: andi        $t9, $t2, 0xFFFF
    ctx->r25 = ctx->r10 & 0XFFFF;
    // 0x8000B1B4: sll         $t8, $t7, 21
    ctx->r24 = S32(ctx->r15 << 21);
    // 0x8000B1B8: or          $t4, $t8, $t9
    ctx->r12 = ctx->r24 | ctx->r25;
    // 0x8000B1BC: sw          $t4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r12;
    // 0x8000B1C0: addiu       $t5, $v0, 0x18
    ctx->r13 = ADD32(ctx->r2, 0X18);
    // 0x8000B1C4: sw          $t5, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r13;
    // 0x8000B1C8: lui         $t7, 0x1000
    ctx->r15 = S32(0X1000 << 16);
    // 0x8000B1CC: ori         $t7, $t7, 0x400
    ctx->r15 = ctx->r15 | 0X400;
    // 0x8000B1D0: lui         $t6, 0xF100
    ctx->r14 = S32(0XF100 << 16);
    // 0x8000B1D4: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
    // 0x8000B1D8: sw          $t7, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r15;
    // 0x8000B1DC: lh          $t3, 0x7A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X7A);
    // 0x8000B1E0: andi        $s1, $s0, 0xFFFF
    ctx->r17 = ctx->r16 & 0XFFFF;
    // 0x8000B1E4: addu        $t2, $t3, $s4
    ctx->r10 = ADD32(ctx->r11, ctx->r20);
    // 0x8000B1E8: addiu       $t8, $t2, -0x1
    ctx->r24 = ADD32(ctx->r10, -0X1);
    // 0x8000B1EC: slt         $at, $s3, $s1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8000B1F0: beq         $at, $zero, L_8000B140
    if (ctx->r1 == 0) {
        // 0x8000B1F4: sh          $t8, 0x7A($sp)
        MEM_H(0X7A, ctx->r29) = ctx->r24;
            goto L_8000B140;
    }
    // 0x8000B1F4: sh          $t8, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r24;
    // 0x8000B1F8: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x8000B1FC: nop

L_8000B200:
    // 0x8000B200: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8000B204:
    // 0x8000B204: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8000B208: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000B20C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000B210: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8000B214: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8000B218: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8000B21C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8000B220: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8000B224: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8000B228: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8000B22C: jr          $ra
    // 0x8000B230: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x8000B230: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_8000B234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000B234: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x8000B238: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8000B23C: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x8000B240: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x8000B244: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x8000B248: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x8000B24C: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x8000B250: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8000B254: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8000B258: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8000B25C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8000B260: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x8000B264: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x8000B268: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8000B26C: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x8000B270: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8000B274: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x8000B278: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8000B27C: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8000B280: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8000B284: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8000B288: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8000B28C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8000B290: sw          $a1, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r5;
    // 0x8000B294: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8000B298: lw          $s1, 0x0($a1)
    ctx->r17 = MEM_W(ctx->r5, 0X0);
    // 0x8000B29C: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x8000B2A0: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x8000B2A4: jal         0x8000A26C
    // 0x8000B2A8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8000A26C(rdram, ctx);
        goto after_0;
    // 0x8000B2A8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x8000B2AC: bne         $v0, $zero, L_8000B2BC
    if (ctx->r2 != 0) {
        // 0x8000B2B0: nop
    
            goto L_8000B2BC;
    }
    // 0x8000B2B0: nop

    // 0x8000B2B4: b           L_8000BC1C
    // 0x8000B2B8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_8000BC1C;
    // 0x8000B2B8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8000B2BC:
    // 0x8000B2BC: bne         $s2, $zero, L_8000B310
    if (ctx->r18 != 0) {
        // 0x8000B2C0: nop
    
            goto L_8000B310;
    }
    // 0x8000B2C0: nop

    // 0x8000B2C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000B2C8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8000B2CC: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    // 0x8000B2D0: swc1        $f6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f6.u32l;
    // 0x8000B2D4: lhu         $t7, 0x4($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X4);
    // 0x8000B2D8: nop

    // 0x8000B2DC: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8000B2E0: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8000B2E4: nop

    // 0x8000B2E8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000B2EC: swc1        $f10, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
    // 0x8000B2F0: lhu         $t9, 0x6($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X6);
    // 0x8000B2F4: nop

    // 0x8000B2F8: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8000B2FC: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8000B300: nop

    // 0x8000B304: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000B308: b           L_8000B340
    // 0x8000B30C: swc1        $f6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f6.u32l;
        goto L_8000B340;
    // 0x8000B30C: swc1        $f6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f6.u32l;
L_8000B310:
    // 0x8000B310: lw          $at, 0x0($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X0);
    // 0x8000B314: addiu       $t1, $sp, 0xC0
    ctx->r9 = ADD32(ctx->r29, 0XC0);
    // 0x8000B318: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x8000B31C: lw          $t4, 0x4($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X4);
    // 0x8000B320: nop

    // 0x8000B324: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x8000B328: lw          $at, 0x8($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X8);
    // 0x8000B32C: nop

    // 0x8000B330: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x8000B334: lw          $t4, 0xC($s2)
    ctx->r12 = MEM_W(ctx->r18, 0XC);
    // 0x8000B338: nop

    // 0x8000B33C: sw          $t4, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r12;
L_8000B340:
    // 0x8000B340: lw          $at, 0x0($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X0);
    // 0x8000B344: addiu       $t5, $sp, 0xB0
    ctx->r13 = ADD32(ctx->r29, 0XB0);
    // 0x8000B348: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x8000B34C: lw          $t8, 0x4($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X4);
    // 0x8000B350: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8000B354: sw          $t8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r24;
    // 0x8000B358: lw          $at, 0x8($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X8);
    // 0x8000B35C: nop

    // 0x8000B360: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x8000B364: lw          $t8, 0xC($s3)
    ctx->r24 = MEM_W(ctx->r19, 0XC);
    // 0x8000B368: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8000B36C: sw          $t8, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r24;
    // 0x8000B370: lwc1        $f8, 0xC8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x8000B374: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000B378: nop

    // 0x8000B37C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8000B380: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8000B384: nop

    // 0x8000B388: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8000B38C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000B390: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000B394: nop

    // 0x8000B398: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000B39C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8000B3A0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8000B3A4: jal         0x8000AE90
    // 0x8000B3A8: nop

    func_8000AE90(rdram, ctx);
        goto after_1;
    // 0x8000B3A8: nop

    after_1:
    // 0x8000B3AC: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8000B3B0: beq         $at, $zero, L_8000B3C0
    if (ctx->r1 == 0) {
        // 0x8000B3B4: andi        $v1, $v0, 0xFFFF
        ctx->r3 = ctx->r2 & 0XFFFF;
            goto L_8000B3C0;
    }
    // 0x8000B3B4: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x8000B3B8: b           L_8000BC1C
    // 0x8000B3BC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_8000BC1C;
    // 0x8000B3BC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8000B3C0:
    // 0x8000B3C0: lwc1        $f14, 0xC8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x8000B3C4: lwc1        $f24, 0xB8($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8000B3C8: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x8000B3CC: div.s       $f18, $f14, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = DIV_S(ctx->f14.fl, ctx->f24.fl);
    // 0x8000B3D0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8000B3D4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8000B3D8: lwc1        $f20, 0xB0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8000B3DC: lwc1        $f26, 0xBC($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x8000B3E0: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x8000B3E4: lwc1        $f30, 0xCC($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x8000B3E8: andi        $t4, $v0, 0xFFFF
    ctx->r12 = ctx->r2 & 0XFFFF;
    // 0x8000B3EC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000B3F0: addiu       $t7, $t4, -0x2
    ctx->r15 = ADD32(ctx->r12, -0X2);
    // 0x8000B3F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8000B3F8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8000B3FC: mul.s       $f8, $f18, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x8000B400: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8000B404: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8000B408: nop

    // 0x8000B40C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8000B410: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8000B414: nop

    // 0x8000B418: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8000B41C: beq         $t3, $zero, L_8000B468
    if (ctx->r11 == 0) {
        // 0x8000B420: nop
    
            goto L_8000B468;
    }
    // 0x8000B420: nop

    // 0x8000B424: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000B428: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8000B42C: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8000B430: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000B434: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8000B438: nop

    // 0x8000B43C: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8000B440: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8000B444: nop

    // 0x8000B448: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8000B44C: bne         $t3, $zero, L_8000B460
    if (ctx->r11 != 0) {
        // 0x8000B450: nop
    
            goto L_8000B460;
    }
    // 0x8000B450: nop

    // 0x8000B454: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8000B458: b           L_8000B478
    // 0x8000B45C: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_8000B478;
    // 0x8000B45C: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_8000B460:
    // 0x8000B460: b           L_8000B478
    // 0x8000B464: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_8000B478;
    // 0x8000B464: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
L_8000B468:
    // 0x8000B468: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8000B46C: nop

    // 0x8000B470: bltz        $t3, L_8000B460
    if (SIGNED(ctx->r11) < 0) {
        // 0x8000B474: nop
    
            goto L_8000B460;
    }
    // 0x8000B474: nop

L_8000B478:
    // 0x8000B478: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8000B47C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8000B480: div.s       $f0, $f30, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f0.fl = DIV_S(ctx->f30.fl, ctx->f26.fl);
    // 0x8000B484: sh          $t3, 0x10A($sp)
    MEM_H(0X10A, ctx->r29) = ctx->r11;
    // 0x8000B488: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000B48C: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8000B490: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8000B494: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8000B498: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8000B49C: nop

    // 0x8000B4A0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000B4A4: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8000B4A8: nop

    // 0x8000B4AC: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8000B4B0: beq         $t1, $zero, L_8000B4FC
    if (ctx->r9 == 0) {
        // 0x8000B4B4: nop
    
            goto L_8000B4FC;
    }
    // 0x8000B4B4: nop

    // 0x8000B4B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000B4BC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8000B4C0: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000B4C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000B4C8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8000B4CC: nop

    // 0x8000B4D0: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8000B4D4: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8000B4D8: nop

    // 0x8000B4DC: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8000B4E0: bne         $t1, $zero, L_8000B4F4
    if (ctx->r9 != 0) {
        // 0x8000B4E4: nop
    
            goto L_8000B4F4;
    }
    // 0x8000B4E4: nop

    // 0x8000B4E8: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x8000B4EC: b           L_8000B50C
    // 0x8000B4F0: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_8000B50C;
    // 0x8000B4F0: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_8000B4F4:
    // 0x8000B4F4: b           L_8000B50C
    // 0x8000B4F8: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_8000B50C;
    // 0x8000B4F8: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
L_8000B4FC:
    // 0x8000B4FC: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x8000B500: nop

    // 0x8000B504: bltz        $t1, L_8000B4F4
    if (SIGNED(ctx->r9) < 0) {
        // 0x8000B508: nop
    
            goto L_8000B4F4;
    }
    // 0x8000B508: nop

L_8000B50C:
    // 0x8000B50C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8000B510: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8000B514: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x8000B518: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000B51C: sh          $t1, 0x108($sp)
    MEM_H(0X108, ctx->r29) = ctx->r9;
    // 0x8000B520: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8000B524: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8000B528: nop

    // 0x8000B52C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8000B530: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000B534: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000B538: nop

    // 0x8000B53C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000B540: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8000B544: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x8000B548: nop

    // 0x8000B54C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8000B550: sh          $t5, 0xD0($sp)
    MEM_H(0XD0, ctx->r29) = ctx->r13;
    // 0x8000B554: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8000B558: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000B55C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000B560: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8000B564: cvt.w.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    ctx->f8.u32l = CVT_W_S(ctx->f14.fl);
    // 0x8000B568: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8000B56C: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x8000B570: c.lt.s      $f20, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f20.fl < ctx->f28.fl;
    // 0x8000B574: addiu       $t0, $t9, 0x2
    ctx->r8 = ADD32(ctx->r25, 0X2);
    // 0x8000B578: bc1f        L_8000B59C
    if (!c1cs) {
        // 0x8000B57C: sh          $t0, 0xD4($sp)
        MEM_H(0XD4, ctx->r29) = ctx->r8;
            goto L_8000B59C;
    }
    // 0x8000B57C: sh          $t0, 0xD4($sp)
    MEM_H(0XD4, ctx->r29) = ctx->r8;
    // 0x8000B580: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000B584: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8000B588: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8000B58C: nop

    // 0x8000B590: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8000B594: b           L_8000B5A8
    // 0x8000B598: swc1        $f6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f6.u32l;
        goto L_8000B5A8;
    // 0x8000B598: swc1        $f6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f6.u32l;
L_8000B59C:
    // 0x8000B59C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8000B5A0: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x8000B5A4: swc1        $f8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
L_8000B5A8:
    // 0x8000B5A8: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x8000B5AC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8000B5B0: add.s       $f0, $f20, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f20.fl + ctx->f24.fl;
    // 0x8000B5B4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8000B5B8: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x8000B5BC: swc1        $f0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f0.u32l;
    // 0x8000B5C0: bc1f        L_8000B5CC
    if (!c1cs) {
        // 0x8000B5C4: nop
    
            goto L_8000B5CC;
    }
    // 0x8000B5C4: nop

    // 0x8000B5C8: swc1        $f2, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f2.u32l;
L_8000B5CC:
    // 0x8000B5CC: lwc1        $f22, 0xB4($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x8000B5D0: nop

    // 0x8000B5D4: c.lt.s      $f22, $f28
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f22.fl < ctx->f28.fl;
    // 0x8000B5D8: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    // 0x8000B5DC: bc1f        L_8000B600
    if (!c1cs) {
        // 0x8000B5E0: add.s       $f0, $f22, $f26
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f0.fl = ctx->f22.fl + ctx->f26.fl;
            goto L_8000B600;
    }
    // 0x8000B5E0: add.s       $f0, $f22, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f0.fl = ctx->f22.fl + ctx->f26.fl;
    // 0x8000B5E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000B5E8: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x8000B5EC: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x8000B5F0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8000B5F4: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8000B5F8: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8000B5FC: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
L_8000B600:
    // 0x8000B600: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x8000B604: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8000B608: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8000B60C: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
    // 0x8000B610: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000B614: bc1f        L_8000B620
    if (!c1cs) {
        // 0x8000B618: nop
    
            goto L_8000B620;
    }
    // 0x8000B618: nop

    // 0x8000B61C: mov.s       $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    ctx->f0.fl = ctx->f24.fl;
L_8000B620:
    // 0x8000B620: lwc1        $f6, 0xC4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x8000B624: sh          $v1, 0xD6($sp)
    MEM_H(0XD6, ctx->r29) = ctx->r3;
    // 0x8000B628: add.s       $f10, $f6, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f30.fl;
    // 0x8000B62C: swc1        $f12, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f12.u32l;
    // 0x8000B630: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8000B634: add.s       $f28, $f10, $f8
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f28.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8000B638: swc1        $f14, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f14.u32l;
    // 0x8000B63C: swc1        $f16, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f16.u32l;
    // 0x8000B640: jal         0x8000AD28
    // 0x8000B644: swc1        $f18, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f18.u32l;
    func_8000AD28(rdram, ctx);
        goto after_2;
    // 0x8000B644: swc1        $f18, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x8000B648: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8000B64C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x8000B650: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x8000B654: lwc1        $f12, 0xFC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x8000B658: lwc1        $f14, 0xF8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x8000B65C: lwc1        $f16, 0xD8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8000B660: lwc1        $f18, 0x100($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X100);
    // 0x8000B664: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8000B668: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8000B66C: addiu       $fp, $zero, 0x1F
    ctx->r30 = ADD32(0, 0X1F);
    // 0x8000B670: lui         $s7, 0xE100
    ctx->r23 = S32(0XE100 << 16);
    // 0x8000B674: addiu       $s6, $sp, 0xD0
    ctx->r22 = ADD32(ctx->r29, 0XD0);
    // 0x8000B678: addiu       $s5, $zero, -0x4
    ctx->r21 = ADD32(0, -0X4);
    // 0x8000B67C: c.lt.s      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.fl < ctx->f20.fl;
    // 0x8000B680: nop

    // 0x8000B684: bc1t        L_8000BC1C
    if (c1cs) {
        // 0x8000B688: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_8000BC1C;
    }
    // 0x8000B688: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8000B68C:
    // 0x8000B68C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8000B690: lwc1        $f4, 0xC4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x8000B694: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8000B698: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000B69C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000B6A0: addiu       $t5, $zero, 0x1F
    ctx->r13 = ADD32(0, 0X1F);
    // 0x8000B6A4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000B6A8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x8000B6AC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8000B6B0: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x8000B6B4: mul.s       $f10, $f14, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f24.fl);
    // 0x8000B6B8: lhu         $t3, 0x10A($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X10A);
    // 0x8000B6BC: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x8000B6C0: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8000B6C4: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8000B6C8: sll         $t2, $t3, 16
    ctx->r10 = S32(ctx->r11 << 16);
    // 0x8000B6CC: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8000B6D0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000B6D4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000B6D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8000B6DC: cvt.w.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8000B6E0: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x8000B6E4: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x8000B6E8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8000B6EC: andi        $t6, $t7, 0x7
    ctx->r14 = ctx->r15 & 0X7;
    // 0x8000B6F0: subu        $t8, $t5, $t6
    ctx->r24 = SUB32(ctx->r13, ctx->r14);
    // 0x8000B6F4: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8000B6F8: lhu         $t4, 0x108($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X108);
    // 0x8000B6FC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000B700: lwc1        $f4, 0xF4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x8000B704: or          $s2, $t2, $t4
    ctx->r18 = ctx->r10 | ctx->r12;
    // 0x8000B708: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8000B70C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8000B710: nop

    // 0x8000B714: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8000B718: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000B71C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000B720: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000B724: cvt.w.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8000B728: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8000B72C: mfc1        $s1, $f8
    ctx->r17 = (int32_t)ctx->f8.u32l;
    // 0x8000B730: mul.s       $f26, $f16, $f12
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f26.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x8000B734: nop

    // 0x8000B738: mul.s       $f6, $f4, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x8000B73C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8000B740: ctc1        $s3, $FpcCsr
    set_cop1_cs(ctx->r19);
    // 0x8000B744: nop

    // 0x8000B748: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8000B74C: cfc1        $s3, $FpcCsr
    ctx->r19 = get_cop1_cs();
    // 0x8000B750: nop

    // 0x8000B754: andi        $s3, $s3, 0x78
    ctx->r19 = ctx->r19 & 0X78;
    // 0x8000B758: beq         $s3, $zero, L_8000B7A4
    if (ctx->r19 == 0) {
        // 0x8000B75C: nop
    
            goto L_8000B7A4;
    }
    // 0x8000B75C: nop

    // 0x8000B760: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000B764: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x8000B768: sub.s       $f10, $f6, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8000B76C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000B770: ctc1        $s3, $FpcCsr
    set_cop1_cs(ctx->r19);
    // 0x8000B774: nop

    // 0x8000B778: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8000B77C: cfc1        $s3, $FpcCsr
    ctx->r19 = get_cop1_cs();
    // 0x8000B780: nop

    // 0x8000B784: andi        $s3, $s3, 0x78
    ctx->r19 = ctx->r19 & 0X78;
    // 0x8000B788: bne         $s3, $zero, L_8000B79C
    if (ctx->r19 != 0) {
        // 0x8000B78C: nop
    
            goto L_8000B79C;
    }
    // 0x8000B78C: nop

    // 0x8000B790: mfc1        $s3, $f10
    ctx->r19 = (int32_t)ctx->f10.u32l;
    // 0x8000B794: b           L_8000B7B4
    // 0x8000B798: or          $s3, $s3, $at
    ctx->r19 = ctx->r19 | ctx->r1;
        goto L_8000B7B4;
    // 0x8000B798: or          $s3, $s3, $at
    ctx->r19 = ctx->r19 | ctx->r1;
L_8000B79C:
    // 0x8000B79C: b           L_8000B7B4
    // 0x8000B7A0: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
        goto L_8000B7B4;
    // 0x8000B7A0: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
L_8000B7A4:
    // 0x8000B7A4: mfc1        $s3, $f10
    ctx->r19 = (int32_t)ctx->f10.u32l;
    // 0x8000B7A8: nop

    // 0x8000B7AC: bltz        $s3, L_8000B79C
    if (SIGNED(ctx->r19) < 0) {
        // 0x8000B7B0: nop
    
            goto L_8000B79C;
    }
    // 0x8000B7B0: nop

L_8000B7B4:
    // 0x8000B7B4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8000B7B8: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x8000B7BC: mul.s       $f8, $f14, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f30.fl);
    // 0x8000B7C0: or          $t5, $s3, $zero
    ctx->r13 = ctx->r19 | 0;
    // 0x8000B7C4: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x8000B7C8: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x8000B7CC: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8000B7D0: ctc1        $s4, $FpcCsr
    set_cop1_cs(ctx->r20);
    // 0x8000B7D4: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8000B7D8: cvt.w.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8000B7DC: or          $s3, $t8, $at
    ctx->r19 = ctx->r24 | ctx->r1;
    // 0x8000B7E0: cfc1        $s4, $FpcCsr
    ctx->r20 = get_cop1_cs();
    // 0x8000B7E4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000B7E8: andi        $s4, $s4, 0x78
    ctx->r20 = ctx->r20 & 0X78;
    // 0x8000B7EC: beq         $s4, $zero, L_8000B838
    if (ctx->r20 == 0) {
        // 0x8000B7F0: nop
    
            goto L_8000B838;
    }
    // 0x8000B7F0: nop

    // 0x8000B7F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000B7F8: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x8000B7FC: sub.s       $f4, $f8, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8000B800: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000B804: ctc1        $s4, $FpcCsr
    set_cop1_cs(ctx->r20);
    // 0x8000B808: nop

    // 0x8000B80C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000B810: cfc1        $s4, $FpcCsr
    ctx->r20 = get_cop1_cs();
    // 0x8000B814: nop

    // 0x8000B818: andi        $s4, $s4, 0x78
    ctx->r20 = ctx->r20 & 0X78;
    // 0x8000B81C: bne         $s4, $zero, L_8000B830
    if (ctx->r20 != 0) {
        // 0x8000B820: nop
    
            goto L_8000B830;
    }
    // 0x8000B820: nop

    // 0x8000B824: mfc1        $s4, $f4
    ctx->r20 = (int32_t)ctx->f4.u32l;
    // 0x8000B828: b           L_8000B848
    // 0x8000B82C: or          $s4, $s4, $at
    ctx->r20 = ctx->r20 | ctx->r1;
        goto L_8000B848;
    // 0x8000B82C: or          $s4, $s4, $at
    ctx->r20 = ctx->r20 | ctx->r1;
L_8000B830:
    // 0x8000B830: b           L_8000B848
    // 0x8000B834: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
        goto L_8000B848;
    // 0x8000B834: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
L_8000B838:
    // 0x8000B838: mfc1        $s4, $f4
    ctx->r20 = (int32_t)ctx->f4.u32l;
    // 0x8000B83C: nop

    // 0x8000B840: bltz        $s4, L_8000B830
    if (SIGNED(ctx->r20) < 0) {
        // 0x8000B844: nop
    
            goto L_8000B830;
    }
    // 0x8000B844: nop

L_8000B848:
    // 0x8000B848: lh          $t4, 0xD6($sp)
    ctx->r12 = MEM_H(ctx->r29, 0XD6);
    // 0x8000B84C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8000B850: addu        $t7, $v0, $t4
    ctx->r15 = ADD32(ctx->r2, ctx->r12);
    // 0x8000B854: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8000B858: or          $t3, $s4, $zero
    ctx->r11 = ctx->r20 | 0;
    // 0x8000B85C: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000B860: andi        $t1, $t3, 0xFFF
    ctx->r9 = ctx->r11 & 0XFFF;
    // 0x8000B864: sll         $s4, $t1, 12
    ctx->r20 = S32(ctx->r9 << 12);
    // 0x8000B868: c.lt.s      $f28, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f28.fl < ctx->f10.fl;
    // 0x8000B86C: sh          $v0, 0xD2($sp)
    MEM_H(0XD2, ctx->r29) = ctx->r2;
    // 0x8000B870: bc1f        L_8000B8B8
    if (!c1cs) {
        // 0x8000B874: lw          $a1, 0x114($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X114);
            goto L_8000B8B8;
    }
    // 0x8000B874: lw          $a1, 0x114($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X114);
    // 0x8000B878: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8000B87C: sh          $v0, 0xD2($sp)
    MEM_H(0XD2, ctx->r29) = ctx->r2;
    // 0x8000B880: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000B884: sub.s       $f6, $f28, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f28.fl - ctx->f4.fl;
    // 0x8000B888: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8000B88C: nop

    // 0x8000B890: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8000B894: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000B898: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000B89C: nop

    // 0x8000B8A0: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8000B8A4: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x8000B8A8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8000B8AC: sh          $t6, 0xD6($sp)
    MEM_H(0XD6, ctx->r29) = ctx->r14;
    // 0x8000B8B0: nop

    // 0x8000B8B4: lw          $a1, 0x114($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X114);
L_8000B8B8:
    // 0x8000B8B8: swc1        $f12, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f12.u32l;
    // 0x8000B8BC: swc1        $f14, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f14.u32l;
    // 0x8000B8C0: swc1        $f16, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f16.u32l;
    // 0x8000B8C4: jal         0x8000A7B0
    // 0x8000B8C8: swc1        $f18, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f18.u32l;
    func_8000A7B0(rdram, ctx);
        goto after_3;
    // 0x8000B8C8: swc1        $f18, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x8000B8CC: lwc1        $f16, 0xD8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8000B8D0: lwc1        $f12, 0xFC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x8000B8D4: add.s       $f2, $f20, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f20.fl + ctx->f16.fl;
    // 0x8000B8D8: lwc1        $f14, 0xF8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x8000B8DC: c.lt.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl < ctx->f2.fl;
    // 0x8000B8E0: lwc1        $f18, 0x100($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X100);
    // 0x8000B8E4: bc1f        L_8000B8F0
    if (!c1cs) {
        // 0x8000B8E8: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_8000B8F0;
    }
    // 0x8000B8E8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x8000B8EC: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
L_8000B8F0:
    // 0x8000B8F0: mul.s       $f8, $f0, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x8000B8F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8000B8F8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000B8FC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8000B900: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x8000B904: nop

    // 0x8000B908: cvt.w.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8000B90C: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x8000B910: nop

    // 0x8000B914: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x8000B918: beq         $v1, $zero, L_8000B964
    if (ctx->r3 == 0) {
        // 0x8000B91C: nop
    
            goto L_8000B964;
    }
    // 0x8000B91C: nop

    // 0x8000B920: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000B924: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8000B928: sub.s       $f4, $f8, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8000B92C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000B930: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x8000B934: nop

    // 0x8000B938: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000B93C: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x8000B940: nop

    // 0x8000B944: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x8000B948: bne         $v1, $zero, L_8000B95C
    if (ctx->r3 != 0) {
        // 0x8000B94C: nop
    
            goto L_8000B95C;
    }
    // 0x8000B94C: nop

    // 0x8000B950: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x8000B954: b           L_8000B974
    // 0x8000B958: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
        goto L_8000B974;
    // 0x8000B958: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
L_8000B95C:
    // 0x8000B95C: b           L_8000B974
    // 0x8000B960: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_8000B974;
    // 0x8000B960: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_8000B964:
    // 0x8000B964: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x8000B968: nop

    // 0x8000B96C: bltz        $v1, L_8000B95C
    if (SIGNED(ctx->r3) < 0) {
        // 0x8000B970: nop
    
            goto L_8000B95C;
    }
    // 0x8000B970: nop

L_8000B974:
    // 0x8000B974: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8000B978: lwc1        $f6, 0xF0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x8000B97C: c.eq.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl == ctx->f22.fl;
    // 0x8000B980: lwc1        $f10, 0xC0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x8000B984: bc1t        L_8000B99C
    if (c1cs) {
        // 0x8000B988: andi        $a3, $v1, 0xFFFF
        ctx->r7 = ctx->r3 & 0XFFFF;
            goto L_8000B99C;
    }
    // 0x8000B988: andi        $a3, $v1, 0xFFFF
    ctx->r7 = ctx->r3 & 0XFFFF;
    // 0x8000B98C: and         $a3, $v1, $s5
    ctx->r7 = ctx->r3 & ctx->r21;
    // 0x8000B990: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x8000B994: andi        $t0, $a3, 0xFFFF
    ctx->r8 = ctx->r7 & 0XFFFF;
    // 0x8000B998: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
L_8000B99C:
    // 0x8000B99C: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8000B9A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8000B9A4: mul.s       $f4, $f8, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x8000B9A8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000B9AC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8000B9B0: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x8000B9B4: nop

    // 0x8000B9B8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000B9BC: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x8000B9C0: nop

    // 0x8000B9C4: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x8000B9C8: beq         $a1, $zero, L_8000BA14
    if (ctx->r5 == 0) {
        // 0x8000B9CC: nop
    
            goto L_8000BA14;
    }
    // 0x8000B9CC: nop

    // 0x8000B9D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000B9D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8000B9D8: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000B9DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000B9E0: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x8000B9E4: nop

    // 0x8000B9E8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8000B9EC: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x8000B9F0: nop

    // 0x8000B9F4: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x8000B9F8: bne         $a1, $zero, L_8000BA0C
    if (ctx->r5 != 0) {
        // 0x8000B9FC: nop
    
            goto L_8000BA0C;
    }
    // 0x8000B9FC: nop

    // 0x8000BA00: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8000BA04: b           L_8000BA24
    // 0x8000BA08: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_8000BA24;
    // 0x8000BA08: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_8000BA0C:
    // 0x8000BA0C: b           L_8000BA24
    // 0x8000BA10: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_8000BA24;
    // 0x8000BA10: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_8000BA14:
    // 0x8000BA14: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8000BA18: nop

    // 0x8000BA1C: bltz        $a1, L_8000BA0C
    if (SIGNED(ctx->r5) < 0) {
        // 0x8000BA20: nop
    
            goto L_8000BA0C;
    }
    // 0x8000BA20: nop

L_8000BA24:
    // 0x8000BA24: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8000BA28: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8000BA2C: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x8000BA30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8000BA34: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8000BA38: andi        $t1, $a1, 0xFFFF
    ctx->r9 = ctx->r5 & 0XFFFF;
    // 0x8000BA3C: mul.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x8000BA40: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8000BA44: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000BA48: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8000BA4C: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x8000BA50: nop

    // 0x8000BA54: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8000BA58: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x8000BA5C: nop

    // 0x8000BA60: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x8000BA64: beq         $a2, $zero, L_8000BAB0
    if (ctx->r6 == 0) {
        // 0x8000BA68: nop
    
            goto L_8000BAB0;
    }
    // 0x8000BA68: nop

    // 0x8000BA6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000BA70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8000BA74: sub.s       $f10, $f6, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8000BA78: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000BA7C: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x8000BA80: nop

    // 0x8000BA84: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8000BA88: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x8000BA8C: nop

    // 0x8000BA90: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x8000BA94: bne         $a2, $zero, L_8000BAA8
    if (ctx->r6 != 0) {
        // 0x8000BA98: nop
    
            goto L_8000BAA8;
    }
    // 0x8000BA98: nop

    // 0x8000BA9C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8000BAA0: b           L_8000BAC0
    // 0x8000BAA4: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_8000BAC0;
    // 0x8000BAA4: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_8000BAA8:
    // 0x8000BAA8: b           L_8000BAC0
    // 0x8000BAAC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_8000BAC0;
    // 0x8000BAAC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_8000BAB0:
    // 0x8000BAB0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8000BAB4: nop

    // 0x8000BAB8: bltz        $a2, L_8000BAA8
    if (SIGNED(ctx->r6) < 0) {
        // 0x8000BABC: nop
    
            goto L_8000BAA8;
    }
    // 0x8000BABC: nop

L_8000BAC0:
    // 0x8000BAC0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8000BAC4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8000BAC8: mul.s       $f8, $f20, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f30.fl);
    // 0x8000BACC: andi        $t7, $a3, 0xFFF
    ctx->r15 = ctx->r7 & 0XFFF;
    // 0x8000BAD0: andi        $t4, $a2, 0xFFFF
    ctx->r12 = ctx->r6 & 0XFFFF;
    // 0x8000BAD4: or          $t5, $s3, $t7
    ctx->r13 = ctx->r19 | ctx->r15;
    // 0x8000BAD8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8000BADC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8000BAE0: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x8000BAE4: cvt.w.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8000BAE8: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8000BAEC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8000BAF0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8000BAF4: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8000BAF8: beq         $t8, $zero, L_8000BB48
    if (ctx->r24 == 0) {
        // 0x8000BAFC: addiu       $s0, $v0, 0x8
        ctx->r16 = ADD32(ctx->r2, 0X8);
            goto L_8000BB48;
    }
    // 0x8000BAFC: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x8000BB00: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000BB04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000BB08: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8000BB0C: sub.s       $f4, $f8, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8000BB10: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000BB14: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8000BB18: nop

    // 0x8000BB1C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000BB20: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8000BB24: nop

    // 0x8000BB28: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8000BB2C: bne         $t8, $zero, L_8000BB40
    if (ctx->r24 != 0) {
        // 0x8000BB30: nop
    
            goto L_8000BB40;
    }
    // 0x8000BB30: nop

    // 0x8000BB34: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8000BB38: b           L_8000BB58
    // 0x8000BB3C: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8000BB58;
    // 0x8000BB3C: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8000BB40:
    // 0x8000BB40: b           L_8000BB58
    // 0x8000BB44: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8000BB58;
    // 0x8000BB44: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_8000BB48:
    // 0x8000BB48: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8000BB4C: nop

    // 0x8000BB50: bltz        $t8, L_8000BB40
    if (SIGNED(ctx->r24) < 0) {
        // 0x8000BB54: nop
    
            goto L_8000BB40;
    }
    // 0x8000BB54: nop

L_8000BB58:
    // 0x8000BB58: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8000BB5C: or          $t9, $t8, $zero
    ctx->r25 = ctx->r24 | 0;
    // 0x8000BB60: mul.s       $f6, $f20, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x8000BB64: and         $t3, $t9, $s5
    ctx->r11 = ctx->r25 & ctx->r21;
    // 0x8000BB68: andi        $t1, $t3, 0xFFF
    ctx->r9 = ctx->r11 & 0XFFF;
    // 0x8000BB6C: or          $t2, $s4, $t1
    ctx->r10 = ctx->r20 | ctx->r9;
    // 0x8000BB70: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8000BB74: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x8000BB78: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8000BB7C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000BB80: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000BB84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8000BB88: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8000BB8C: addu        $t7, $a1, $s1
    ctx->r15 = ADD32(ctx->r5, ctx->r17);
    // 0x8000BB90: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x8000BB94: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8000BB98: andi        $t9, $t8, 0x1F
    ctx->r25 = ctx->r24 & 0X1F;
    // 0x8000BB9C: subu        $t0, $fp, $t9
    ctx->r8 = SUB32(ctx->r30, ctx->r25);
    // 0x8000BBA0: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x8000BBA4: sll         $t5, $t7, 16
    ctx->r13 = S32(ctx->r15 << 16);
    // 0x8000BBA8: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000BBAC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8000BBB0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8000BBB4: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x8000BBB8: sw          $s7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r23;
    // 0x8000BBBC: lui         $t6, 0xF100
    ctx->r14 = S32(0XF100 << 16);
    // 0x8000BBC0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8000BBC4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8000BBC8: nop

    // 0x8000BBCC: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8000BBD0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000BBD4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000BBD8: nop

    // 0x8000BBDC: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8000BBE0: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x8000BBE4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8000BBE8: addu        $t2, $a2, $t1
    ctx->r10 = ADD32(ctx->r6, ctx->r9);
    // 0x8000BBEC: andi        $t4, $t2, 0xFFFF
    ctx->r12 = ctx->r10 & 0XFFFF;
    // 0x8000BBF0: or          $t7, $t5, $t4
    ctx->r15 = ctx->r13 | ctx->r12;
    // 0x8000BBF4: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x8000BBF8: sw          $s2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r18;
    // 0x8000BBFC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8000BC00: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x8000BC04: c.lt.s      $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f22.fl < ctx->f2.fl;
    // 0x8000BC08: add.s       $f4, $f8, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f26.fl;
    // 0x8000BC0C: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    // 0x8000BC10: bc1f        L_8000B68C
    if (!c1cs) {
        // 0x8000BC14: mov.s       $f20, $f2
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
            goto L_8000B68C;
    }
    // 0x8000BC14: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
    // 0x8000BC18: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8000BC1C:
    // 0x8000BC1C: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x8000BC20: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8000BC24: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000BC28: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8000BC2C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000BC30: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8000BC34: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000BC38: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8000BC3C: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8000BC40: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x8000BC44: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000BC48: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x8000BC4C: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8000BC50: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8000BC54: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8000BC58: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8000BC5C: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x8000BC60: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8000BC64: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x8000BC68: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x8000BC6C: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x8000BC70: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x8000BC74: jr          $ra
    // 0x8000BC78: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    // 0x8000BC78: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_8000BC7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000BC7C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8000BC80: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8000BC84: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x8000BC88: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x8000BC8C: lhu         $v1, 0x2($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X2);
    // 0x8000BC90: sw          $v0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r2;
    // 0x8000BC94: lh          $t3, 0x4($a2)
    ctx->r11 = MEM_H(ctx->r6, 0X4);
    // 0x8000BC98: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x8000BC9C: addu        $t7, $v0, $t3
    ctx->r15 = ADD32(ctx->r2, ctx->r11);
    // 0x8000BCA0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8000BCA4: sh          $t8, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r24;
    // 0x8000BCA8: lh          $t6, 0x6($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X6);
    // 0x8000BCAC: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
    // 0x8000BCB0: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x8000BCB4: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8000BCB8: sh          $t8, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r24;
    // 0x8000BCBC: lbu         $t2, 0x2($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X2);
    // 0x8000BCC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000BCC4: bne         $t2, $zero, L_8000BCE4
    if (ctx->r10 != 0) {
        // 0x8000BCC8: andi        $t1, $t3, 0xFFFF
        ctx->r9 = ctx->r11 & 0XFFFF;
            goto L_8000BCE4;
    }
    // 0x8000BCC8: andi        $t1, $t3, 0xFFFF
    ctx->r9 = ctx->r11 & 0XFFFF;
    // 0x8000BCCC: srl         $t9, $t1, 1
    ctx->r25 = S32(U32(ctx->r9) >> 1);
    // 0x8000BCD0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8000BCD4: andi        $t1, $t9, 0xFFFF
    ctx->r9 = ctx->r25 & 0XFFFF;
    // 0x8000BCD8: sh          $t7, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r15;
    // 0x8000BCDC: b           L_8000BCF0
    // 0x8000BCE0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
        goto L_8000BCF0;
    // 0x8000BCE0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_8000BCE4:
    // 0x8000BCE4: beq         $t2, $at, L_8000BCF0
    if (ctx->r10 == ctx->r1) {
        // 0x8000BCE8: sll         $t8, $t1, 1
        ctx->r24 = S32(ctx->r9 << 1);
            goto L_8000BCF0;
    }
    // 0x8000BCE8: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x8000BCEC: andi        $t1, $t8, 0xFFFF
    ctx->r9 = ctx->r24 & 0XFFFF;
L_8000BCF0:
    // 0x8000BCF0: lhu         $t5, 0x0($t0)
    ctx->r13 = MEM_HU(ctx->r8, 0X0);
    // 0x8000BCF4: addiu       $t1, $t1, 0x7
    ctx->r9 = ADD32(ctx->r9, 0X7);
    // 0x8000BCF8: sra         $t6, $t1, 3
    ctx->r14 = S32(SIGNED(ctx->r9) >> 3);
    // 0x8000BCFC: lhu         $a3, 0x4E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X4E);
    // 0x8000BD00: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8000BD04: andi        $t1, $t6, 0xFFFF
    ctx->r9 = ctx->r14 & 0XFFFF;
    // 0x8000BD08: beq         $t5, $at, L_8000BD20
    if (ctx->r13 == ctx->r1) {
        // 0x8000BD0C: or          $v0, $t5, $zero
        ctx->r2 = ctx->r13 | 0;
            goto L_8000BD20;
    }
    // 0x8000BD0C: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x8000BD10: bne         $v0, $zero, L_8000BD34
    if (ctx->r2 != 0) {
        // 0x8000BD14: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8000BD34;
    }
    // 0x8000BD14: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8000BD18: bne         $t2, $at, L_8000BD38
    if (ctx->r10 != ctx->r1) {
        // 0x8000BD1C: sll         $t9, $a3, 1
        ctx->r25 = S32(ctx->r7 << 1);
            goto L_8000BD38;
    }
    // 0x8000BD1C: sll         $t9, $a3, 1
    ctx->r25 = S32(ctx->r7 << 1);
L_8000BD20:
    // 0x8000BD20: lhu         $a3, 0x4E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X4E);
    // 0x8000BD24: nop

    // 0x8000BD28: addiu       $a3, $a3, 0x6
    ctx->r7 = ADD32(ctx->r7, 0X6);
    // 0x8000BD2C: andi        $t8, $a3, 0xFFFF
    ctx->r24 = ctx->r7 & 0XFFFF;
    // 0x8000BD30: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
L_8000BD34:
    // 0x8000BD34: sll         $t9, $a3, 1
    ctx->r25 = S32(ctx->r7 << 1);
L_8000BD38:
    // 0x8000BD38: andi        $t7, $t5, 0x7
    ctx->r15 = ctx->r13 & 0X7;
    // 0x8000BD3C: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x8000BD40: sll         $t8, $t7, 21
    ctx->r24 = S32(ctx->r15 << 21);
    // 0x8000BD44: addu        $a3, $a3, $t9
    ctx->r7 = ADD32(ctx->r7, ctx->r25);
    // 0x8000BD48: andi        $v1, $t2, 0x3
    ctx->r3 = ctx->r10 & 0X3;
    // 0x8000BD4C: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8000BD50: lhu         $t7, 0x4($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X4);
    // 0x8000BD54: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8000BD58: sll         $t6, $v1, 19
    ctx->r14 = S32(ctx->r3 << 19);
    // 0x8000BD5C: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x8000BD60: or          $t6, $t9, $t6
    ctx->r14 = ctx->r25 | ctx->r14;
    // 0x8000BD64: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8000BD68: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8000BD6C: lhu         $a3, -0x1448($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X1448);
    // 0x8000BD70: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x8000BD74: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000BD78: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000BD7C: lw          $t8, 0x10($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X10);
    // 0x8000BD80: andi        $t3, $t1, 0x1FF
    ctx->r11 = ctx->r9 & 0X1FF;
    // 0x8000BD84: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8000BD88: lhu         $t9, 0x0($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X0);
    // 0x8000BD8C: sll         $t6, $t3, 9
    ctx->r14 = S32(ctx->r11 << 9);
    // 0x8000BD90: andi        $t7, $t9, 0x7
    ctx->r15 = ctx->r25 & 0X7;
    // 0x8000BD94: sll         $t8, $t7, 21
    ctx->r24 = S32(ctx->r15 << 21);
    // 0x8000BD98: or          $t3, $t6, $zero
    ctx->r11 = ctx->r14 | 0;
    // 0x8000BD9C: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x8000BDA0: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x8000BDA4: or          $t9, $t6, $v1
    ctx->r25 = ctx->r14 | ctx->r3;
    // 0x8000BDA8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000BDAC: or          $t7, $t9, $t3
    ctx->r15 = ctx->r25 | ctx->r11;
    // 0x8000BDB0: andi        $t4, $a3, 0x1FF
    ctx->r12 = ctx->r7 & 0X1FF;
    // 0x8000BDB4: or          $t8, $t7, $t4
    ctx->r24 = ctx->r15 | ctx->r12;
    // 0x8000BDB8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8000BDBC: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x8000BDC0: lhu         $t6, 0x6($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X6);
    // 0x8000BDC4: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8000BDC8: andi        $t9, $t6, 0x3
    ctx->r25 = ctx->r14 & 0X3;
    // 0x8000BDCC: lhu         $t6, 0xA($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0XA);
    // 0x8000BDD0: sll         $t7, $t9, 18
    ctx->r15 = S32(ctx->r25 << 18);
    // 0x8000BDD4: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x8000BDD8: andi        $t9, $t6, 0xF
    ctx->r25 = ctx->r14 & 0XF;
    // 0x8000BDDC: sll         $t7, $t9, 14
    ctx->r15 = S32(ctx->r25 << 14);
    // 0x8000BDE0: lhu         $t9, 0xE($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0XE);
    // 0x8000BDE4: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x8000BDE8: andi        $t8, $t9, 0xF
    ctx->r24 = ctx->r25 & 0XF;
    // 0x8000BDEC: sll         $t7, $t8, 10
    ctx->r15 = S32(ctx->r24 << 10);
    // 0x8000BDF0: lhu         $t8, 0x4($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X4);
    // 0x8000BDF4: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x8000BDF8: andi        $t6, $t8, 0x3
    ctx->r14 = ctx->r24 & 0X3;
    // 0x8000BDFC: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x8000BE00: lhu         $t6, 0x8($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X8);
    // 0x8000BE04: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x8000BE08: andi        $t9, $t6, 0xF
    ctx->r25 = ctx->r14 & 0XF;
    // 0x8000BE0C: sll         $t7, $t9, 4
    ctx->r15 = S32(ctx->r25 << 4);
    // 0x8000BE10: lhu         $t9, 0xC($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0XC);
    // 0x8000BE14: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x8000BE18: andi        $t8, $t9, 0xF
    ctx->r24 = ctx->r25 & 0XF;
    // 0x8000BE1C: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x8000BE20: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000BE24: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x8000BE28: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000BE2C: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x8000BE30: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000BE34: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000BE38: lhu         $t6, 0x2A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X2A);
    // 0x8000BE3C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8000BE40: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8000BE44: subu        $a2, $t8, $t6
    ctx->r6 = SUB32(ctx->r24, ctx->r14);
    // 0x8000BE48: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x8000BE4C: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x8000BE50: andi        $t1, $t7, 0xFFF
    ctx->r9 = ctx->r15 & 0XFFF;
    // 0x8000BE54: sllv        $t6, $t8, $a2
    ctx->r14 = S32(ctx->r24 << (ctx->r6 & 31));
    // 0x8000BE58: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8000BE5C: sll         $t9, $t7, 12
    ctx->r25 = S32(ctx->r15 << 12);
    // 0x8000BE60: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8000BE64: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000BE68: or          $t8, $t9, $at
    ctx->r24 = ctx->r25 | ctx->r1;
    // 0x8000BE6C: or          $t6, $t8, $t1
    ctx->r14 = ctx->r24 | ctx->r9;
    // 0x8000BE70: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8000BE74: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000BE78: lhu         $t5, 0x30($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X30);
    // 0x8000BE7C: lhu         $t2, 0x32($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X32);
    // 0x8000BE80: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8000BE84: sllv        $t8, $t2, $a2
    ctx->r24 = S32(ctx->r10 << (ctx->r6 & 31));
    // 0x8000BE88: andi        $t6, $t8, 0xFFF
    ctx->r14 = ctx->r24 & 0XFFF;
    // 0x8000BE8C: andi        $t5, $t7, 0xFFF
    ctx->r13 = ctx->r15 & 0XFFF;
    // 0x8000BE90: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8000BE94: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8000BE98: or          $t9, $t7, $at
    ctx->r25 = ctx->r15 | ctx->r1;
    // 0x8000BE9C: or          $t8, $t9, $t5
    ctx->r24 = ctx->r25 | ctx->r13;
    // 0x8000BEA0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000BEA4: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8000BEA8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8000BEAC: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8000BEB0: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x8000BEB4: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x8000BEB8: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x8000BEBC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000BEC0: beq         $t7, $zero, L_8000BFA8
    if (ctx->r15 == 0) {
        // 0x8000BEC4: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8000BFA8;
    }
    // 0x8000BEC4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000BEC8: lhu         $t9, 0x0($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X0);
    // 0x8000BECC: lui         $at, 0xF500
    ctx->r1 = S32(0XF500 << 16);
    // 0x8000BED0: andi        $t8, $t9, 0x7
    ctx->r24 = ctx->r25 & 0X7;
    // 0x8000BED4: lbu         $t9, 0x2($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X2);
    // 0x8000BED8: sll         $t6, $t8, 21
    ctx->r14 = S32(ctx->r24 << 21);
    // 0x8000BEDC: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8000BEE0: andi        $t8, $t9, 0x3
    ctx->r24 = ctx->r25 & 0X3;
    // 0x8000BEE4: sll         $t6, $t8, 19
    ctx->r14 = S32(ctx->r24 << 19);
    // 0x8000BEE8: or          $t9, $t7, $t6
    ctx->r25 = ctx->r15 | ctx->r14;
    // 0x8000BEEC: or          $t8, $t9, $t3
    ctx->r24 = ctx->r25 | ctx->r11;
    // 0x8000BEF0: or          $t7, $t8, $t4
    ctx->r15 = ctx->r24 | ctx->r12;
    // 0x8000BEF4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000BEF8: lhu         $t8, 0x6($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X6);
    // 0x8000BEFC: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x8000BF00: andi        $t7, $t8, 0x3
    ctx->r15 = ctx->r24 & 0X3;
    // 0x8000BF04: andi        $t6, $v1, 0x7
    ctx->r14 = ctx->r3 & 0X7;
    // 0x8000BF08: sll         $v1, $t6, 24
    ctx->r3 = S32(ctx->r14 << 24);
    // 0x8000BF0C: lhu         $t8, 0xA($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0XA);
    // 0x8000BF10: sll         $t6, $t7, 18
    ctx->r14 = S32(ctx->r15 << 18);
    // 0x8000BF14: or          $t9, $v1, $t6
    ctx->r25 = ctx->r3 | ctx->r14;
    // 0x8000BF18: andi        $t7, $t8, 0xF
    ctx->r15 = ctx->r24 & 0XF;
    // 0x8000BF1C: sll         $t6, $t7, 14
    ctx->r14 = S32(ctx->r15 << 14);
    // 0x8000BF20: lhu         $t7, 0xE($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0XE);
    // 0x8000BF24: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x8000BF28: andi        $t9, $t7, 0xF
    ctx->r25 = ctx->r15 & 0XF;
    // 0x8000BF2C: sll         $t6, $t9, 10
    ctx->r14 = S32(ctx->r25 << 10);
    // 0x8000BF30: lhu         $t9, 0x4($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X4);
    // 0x8000BF34: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8000BF38: andi        $t8, $t9, 0x3
    ctx->r24 = ctx->r25 & 0X3;
    // 0x8000BF3C: sll         $t6, $t8, 8
    ctx->r14 = S32(ctx->r24 << 8);
    // 0x8000BF40: lhu         $t8, 0x8($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X8);
    // 0x8000BF44: or          $t9, $t7, $t6
    ctx->r25 = ctx->r15 | ctx->r14;
    // 0x8000BF48: andi        $t7, $t8, 0xF
    ctx->r15 = ctx->r24 & 0XF;
    // 0x8000BF4C: sll         $t6, $t7, 4
    ctx->r14 = S32(ctx->r15 << 4);
    // 0x8000BF50: lhu         $t7, 0xC($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0XC);
    // 0x8000BF54: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x8000BF58: andi        $t9, $t7, 0xF
    ctx->r25 = ctx->r15 & 0XF;
    // 0x8000BF5C: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x8000BF60: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8000BF64: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x8000BF68: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8000BF6C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8000BF70: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8000BF74: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x8000BF78: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8000BF7C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000BF80: or          $t8, $t7, $t1
    ctx->r24 = ctx->r15 | ctx->r9;
    // 0x8000BF84: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x8000BF88: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x8000BF8C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8000BF90: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x8000BF94: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8000BF98: or          $t8, $v1, $t7
    ctx->r24 = ctx->r3 | ctx->r15;
    // 0x8000BF9C: or          $t9, $t8, $t5
    ctx->r25 = ctx->r24 | ctx->r13;
    // 0x8000BFA0: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x8000BFA4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_8000BFA8:
    // 0x8000BFA8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000BFAC: jr          $ra
    // 0x8000BFB0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8000BFB0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8000BFB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000BFB4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8000BFB8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8000BFBC: lbu         $a2, 0x2($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X2);
    // 0x8000BFC0: lui         $t1, 0xF500
    ctx->r9 = S32(0XF500 << 16);
    // 0x8000BFC4: bne         $a2, $zero, L_8000C23C
    if (ctx->r6 != 0) {
        // 0x8000BFC8: lui         $t2, 0x700
        ctx->r10 = S32(0X700 << 16);
            goto L_8000C23C;
    }
    // 0x8000BFC8: lui         $t2, 0x700
    ctx->r10 = S32(0X700 << 16);
    // 0x8000BFCC: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x8000BFD0: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8000BFD4: andi        $t7, $t6, 0x7
    ctx->r15 = ctx->r14 & 0X7;
    // 0x8000BFD8: sll         $t8, $t7, 21
    ctx->r24 = S32(ctx->r15 << 21);
    // 0x8000BFDC: lui         $t0, 0x10
    ctx->r8 = S32(0X10 << 16);
    // 0x8000BFE0: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8000BFE4: or          $t6, $t9, $t0
    ctx->r14 = ctx->r25 | ctx->r8;
    // 0x8000BFE8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8000BFEC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000BFF0: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x8000BFF4: lui         $t1, 0xF500
    ctx->r9 = S32(0XF500 << 16);
    // 0x8000BFF8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8000BFFC: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x8000C000: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000C004: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x8000C008: sll         $t6, $t9, 21
    ctx->r14 = S32(ctx->r25 << 21);
    // 0x8000C00C: or          $t7, $t6, $t1
    ctx->r15 = ctx->r14 | ctx->r9;
    // 0x8000C010: or          $t8, $t7, $t0
    ctx->r24 = ctx->r15 | ctx->r8;
    // 0x8000C014: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8000C018: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x8000C01C: lhu         $t9, 0x6($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X6);
    // 0x8000C020: lui         $t2, 0x700
    ctx->r10 = S32(0X700 << 16);
    // 0x8000C024: andi        $t6, $t9, 0x3
    ctx->r14 = ctx->r25 & 0X3;
    // 0x8000C028: lhu         $t9, 0xA($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0XA);
    // 0x8000C02C: sll         $t7, $t6, 18
    ctx->r15 = S32(ctx->r14 << 18);
    // 0x8000C030: or          $t8, $t7, $t2
    ctx->r24 = ctx->r15 | ctx->r10;
    // 0x8000C034: andi        $t6, $t9, 0xF
    ctx->r14 = ctx->r25 & 0XF;
    // 0x8000C038: sll         $t7, $t6, 14
    ctx->r15 = S32(ctx->r14 << 14);
    // 0x8000C03C: lhu         $t6, 0xE($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0XE);
    // 0x8000C040: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8000C044: andi        $t8, $t6, 0xF
    ctx->r24 = ctx->r14 & 0XF;
    // 0x8000C048: sll         $t7, $t8, 10
    ctx->r15 = S32(ctx->r24 << 10);
    // 0x8000C04C: lhu         $t8, 0x4($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X4);
    // 0x8000C050: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x8000C054: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x8000C058: sll         $t7, $t9, 8
    ctx->r15 = S32(ctx->r25 << 8);
    // 0x8000C05C: lhu         $t9, 0x8($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X8);
    // 0x8000C060: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8000C064: andi        $t6, $t9, 0xF
    ctx->r14 = ctx->r25 & 0XF;
    // 0x8000C068: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8000C06C: lhu         $t6, 0xC($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0XC);
    // 0x8000C070: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8000C074: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000C078: andi        $t8, $t6, 0xF
    ctx->r24 = ctx->r14 & 0XF;
    // 0x8000C07C: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x8000C080: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8000C084: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x8000C088: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000C08C: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x8000C090: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x8000C094: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8000C098: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x8000C09C: lui         $t9, 0xF300
    ctx->r25 = S32(0XF300 << 16);
    // 0x8000C0A0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8000C0A4: lhu         $t8, 0x6($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X6);
    // 0x8000C0A8: lhu         $t3, 0x4($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X4);
    // 0x8000C0AC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000C0B0: multu       $t3, $t8
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000C0B4: addiu       $a2, $zero, 0x7FF
    ctx->r6 = ADD32(0, 0X7FF);
    // 0x8000C0B8: mflo        $t0
    ctx->r8 = lo;
    // 0x8000C0BC: addiu       $t0, $t0, 0x3
    ctx->r8 = ADD32(ctx->r8, 0X3);
    // 0x8000C0C0: sra         $t7, $t0, 2
    ctx->r15 = S32(SIGNED(ctx->r8) >> 2);
    // 0x8000C0C4: addiu       $t0, $t7, -0x1
    ctx->r8 = ADD32(ctx->r15, -0X1);
    // 0x8000C0C8: slti        $at, $t0, 0x7FF
    ctx->r1 = SIGNED(ctx->r8) < 0X7FF ? 1 : 0;
    // 0x8000C0CC: beq         $at, $zero, L_8000C0DC
    if (ctx->r1 == 0) {
        // 0x8000C0D0: nop
    
            goto L_8000C0DC;
    }
    // 0x8000C0D0: nop

    // 0x8000C0D4: b           L_8000C0DC
    // 0x8000C0D8: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
        goto L_8000C0DC;
    // 0x8000C0D8: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
L_8000C0DC:
    // 0x8000C0DC: bgez        $t3, L_8000C0EC
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8000C0E0: sra         $a3, $t3, 4
        ctx->r7 = S32(SIGNED(ctx->r11) >> 4);
            goto L_8000C0EC;
    }
    // 0x8000C0E0: sra         $a3, $t3, 4
    ctx->r7 = S32(SIGNED(ctx->r11) >> 4);
    // 0x8000C0E4: addiu       $at, $t3, 0xF
    ctx->r1 = ADD32(ctx->r11, 0XF);
    // 0x8000C0E8: sra         $a3, $at, 4
    ctx->r7 = S32(SIGNED(ctx->r1) >> 4);
L_8000C0EC:
    // 0x8000C0EC: bgtz        $a3, L_8000C0FC
    if (SIGNED(ctx->r7) > 0) {
        // 0x8000C0F0: or          $t3, $a3, $zero
        ctx->r11 = ctx->r7 | 0;
            goto L_8000C0FC;
    }
    // 0x8000C0F0: or          $t3, $a3, $zero
    ctx->r11 = ctx->r7 | 0;
    // 0x8000C0F4: b           L_8000C0FC
    // 0x8000C0F8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
        goto L_8000C0FC;
    // 0x8000C0F8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_8000C0FC:
    // 0x8000C0FC: bgtz        $a3, L_8000C10C
    if (SIGNED(ctx->r7) > 0) {
        // 0x8000C100: addiu       $t6, $t3, 0x7FF
        ctx->r14 = ADD32(ctx->r11, 0X7FF);
            goto L_8000C10C;
    }
    // 0x8000C100: addiu       $t6, $t3, 0x7FF
    ctx->r14 = ADD32(ctx->r11, 0X7FF);
    // 0x8000C104: b           L_8000C110
    // 0x8000C108: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
        goto L_8000C110;
    // 0x8000C108: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
L_8000C10C:
    // 0x8000C10C: or          $t4, $a3, $zero
    ctx->r12 = ctx->r7 | 0;
L_8000C110:
    // 0x8000C110: div         $zero, $t6, $t4
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r12)));
    // 0x8000C114: bne         $t4, $zero, L_8000C120
    if (ctx->r12 != 0) {
        // 0x8000C118: nop
    
            goto L_8000C120;
    }
    // 0x8000C118: nop

    // 0x8000C11C: break       7
    do_break(2147533084);
L_8000C120:
    // 0x8000C120: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8000C124: bne         $t4, $at, L_8000C138
    if (ctx->r12 != ctx->r1) {
        // 0x8000C128: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8000C138;
    }
    // 0x8000C128: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000C12C: bne         $t6, $at, L_8000C138
    if (ctx->r14 != ctx->r1) {
        // 0x8000C130: nop
    
            goto L_8000C138;
    }
    // 0x8000C130: nop

    // 0x8000C134: break       6
    do_break(2147533108);
L_8000C138:
    // 0x8000C138: andi        $t6, $a2, 0xFFF
    ctx->r14 = ctx->r6 & 0XFFF;
    // 0x8000C13C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8000C140: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000C144: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8000C148: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000C14C: mflo        $t9
    ctx->r25 = lo;
    // 0x8000C150: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x8000C154: or          $t7, $t8, $t2
    ctx->r15 = ctx->r24 | ctx->r10;
    // 0x8000C158: sll         $t9, $t6, 12
    ctx->r25 = S32(ctx->r14 << 12);
    // 0x8000C15C: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x8000C160: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8000C164: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8000C168: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x8000C16C: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x8000C170: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x8000C174: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8000C178: andi        $t9, $t7, 0x7
    ctx->r25 = ctx->r15 & 0X7;
    // 0x8000C17C: lhu         $t7, 0x4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X4);
    // 0x8000C180: sll         $t8, $t9, 21
    ctx->r24 = S32(ctx->r25 << 21);
    // 0x8000C184: or          $t6, $t8, $t1
    ctx->r14 = ctx->r24 | ctx->r9;
    // 0x8000C188: sra         $t9, $t7, 1
    ctx->r25 = S32(SIGNED(ctx->r15) >> 1);
    // 0x8000C18C: addiu       $t8, $t9, 0x7
    ctx->r24 = ADD32(ctx->r25, 0X7);
    // 0x8000C190: sra         $t7, $t8, 3
    ctx->r15 = S32(SIGNED(ctx->r24) >> 3);
    // 0x8000C194: andi        $t9, $t7, 0x1FF
    ctx->r25 = ctx->r15 & 0X1FF;
    // 0x8000C198: sll         $t8, $t9, 9
    ctx->r24 = S32(ctx->r25 << 9);
    // 0x8000C19C: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x8000C1A0: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x8000C1A4: lhu         $t9, 0x6($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X6);
    // 0x8000C1A8: lhu         $t7, 0xA($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0XA);
    // 0x8000C1AC: andi        $t6, $t9, 0x3
    ctx->r14 = ctx->r25 & 0X3;
    // 0x8000C1B0: sll         $t8, $t6, 18
    ctx->r24 = S32(ctx->r14 << 18);
    // 0x8000C1B4: andi        $t9, $t7, 0xF
    ctx->r25 = ctx->r15 & 0XF;
    // 0x8000C1B8: sll         $t6, $t9, 14
    ctx->r14 = S32(ctx->r25 << 14);
    // 0x8000C1BC: lhu         $t9, 0xE($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0XE);
    // 0x8000C1C0: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8000C1C4: andi        $t8, $t9, 0xF
    ctx->r24 = ctx->r25 & 0XF;
    // 0x8000C1C8: sll         $t6, $t8, 10
    ctx->r14 = S32(ctx->r24 << 10);
    // 0x8000C1CC: lhu         $t8, 0x4($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X4);
    // 0x8000C1D0: or          $t9, $t7, $t6
    ctx->r25 = ctx->r15 | ctx->r14;
    // 0x8000C1D4: andi        $t7, $t8, 0x3
    ctx->r15 = ctx->r24 & 0X3;
    // 0x8000C1D8: sll         $t6, $t7, 8
    ctx->r14 = S32(ctx->r15 << 8);
    // 0x8000C1DC: lhu         $t7, 0x8($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X8);
    // 0x8000C1E0: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x8000C1E4: andi        $t9, $t7, 0xF
    ctx->r25 = ctx->r15 & 0XF;
    // 0x8000C1E8: sll         $t6, $t9, 4
    ctx->r14 = S32(ctx->r25 << 4);
    // 0x8000C1EC: lhu         $t9, 0xC($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0XC);
    // 0x8000C1F0: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8000C1F4: andi        $t8, $t9, 0xF
    ctx->r24 = ctx->r25 & 0XF;
    // 0x8000C1F8: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x8000C1FC: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
    // 0x8000C200: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x8000C204: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8000C208: lhu         $t7, 0x4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X4);
    // 0x8000C20C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000C210: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8000C214: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8000C218: lhu         $t8, 0x6($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X6);
    // 0x8000C21C: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8000C220: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x8000C224: addiu       $t6, $t8, -0x1
    ctx->r14 = ADD32(ctx->r24, -0X1);
    // 0x8000C228: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8000C22C: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x8000C230: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x8000C234: b           L_8000C530
    // 0x8000C238: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
        goto L_8000C530;
    // 0x8000C238: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
L_8000C23C:
    // 0x8000C23C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8000C240: addiu       $t9, $t9, -0x1478
    ctx->r25 = ADD32(ctx->r25, -0X1478);
    // 0x8000C244: sll         $v1, $a2, 2
    ctx->r3 = S32(ctx->r6 << 2);
    // 0x8000C248: addu        $t3, $v1, $t9
    ctx->r11 = ADD32(ctx->r3, ctx->r25);
    // 0x8000C24C: lw          $t7, 0x0($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X0);
    // 0x8000C250: lui         $at, 0xFD00
    ctx->r1 = S32(0XFD00 << 16);
    // 0x8000C254: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x8000C258: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x8000C25C: sll         $t6, $t8, 19
    ctx->r14 = S32(ctx->r24 << 19);
    // 0x8000C260: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x8000C264: andi        $t8, $t7, 0x7
    ctx->r24 = ctx->r15 & 0X7;
    // 0x8000C268: sll         $t6, $t8, 21
    ctx->r14 = S32(ctx->r24 << 21);
    // 0x8000C26C: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x8000C270: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8000C274: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x8000C278: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x8000C27C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000C280: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x8000C284: lw          $t9, 0x0($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X0);
    // 0x8000C288: or          $t4, $a0, $zero
    ctx->r12 = ctx->r4 | 0;
    // 0x8000C28C: andi        $t6, $t9, 0x3
    ctx->r14 = ctx->r25 & 0X3;
    // 0x8000C290: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x8000C294: sll         $t7, $t6, 19
    ctx->r15 = S32(ctx->r14 << 19);
    // 0x8000C298: or          $t8, $t7, $t1
    ctx->r24 = ctx->r15 | ctx->r9;
    // 0x8000C29C: andi        $t6, $t9, 0x7
    ctx->r14 = ctx->r25 & 0X7;
    // 0x8000C2A0: sll         $t7, $t6, 21
    ctx->r15 = S32(ctx->r14 << 21);
    // 0x8000C2A4: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8000C2A8: sw          $t9, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r25;
    // 0x8000C2AC: lhu         $t6, 0x6($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X6);
    // 0x8000C2B0: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x8000C2B4: andi        $t8, $t6, 0x3
    ctx->r24 = ctx->r14 & 0X3;
    // 0x8000C2B8: lhu         $t6, 0xA($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0XA);
    // 0x8000C2BC: sll         $t7, $t8, 18
    ctx->r15 = S32(ctx->r24 << 18);
    // 0x8000C2C0: or          $t9, $t7, $t2
    ctx->r25 = ctx->r15 | ctx->r10;
    // 0x8000C2C4: andi        $t8, $t6, 0xF
    ctx->r24 = ctx->r14 & 0XF;
    // 0x8000C2C8: sll         $t7, $t8, 14
    ctx->r15 = S32(ctx->r24 << 14);
    // 0x8000C2CC: lhu         $t8, 0xE($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0XE);
    // 0x8000C2D0: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x8000C2D4: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x8000C2D8: sll         $t7, $t9, 10
    ctx->r15 = S32(ctx->r25 << 10);
    // 0x8000C2DC: lhu         $t9, 0x4($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X4);
    // 0x8000C2E0: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8000C2E4: andi        $t6, $t9, 0x3
    ctx->r14 = ctx->r25 & 0X3;
    // 0x8000C2E8: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x8000C2EC: lhu         $t6, 0x8($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X8);
    // 0x8000C2F0: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8000C2F4: andi        $t8, $t6, 0xF
    ctx->r24 = ctx->r14 & 0XF;
    // 0x8000C2F8: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x8000C2FC: lhu         $t8, 0xC($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0XC);
    // 0x8000C300: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x8000C304: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000C308: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x8000C30C: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x8000C310: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8000C314: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
    // 0x8000C318: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000C31C: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x8000C320: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x8000C324: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x8000C328: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8000C32C: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x8000C330: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x8000C334: lhu         $t9, 0x6($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X6);
    // 0x8000C338: lhu         $t3, 0x4($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X4);
    // 0x8000C33C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8000C340: multu       $t3, $t9
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000C344: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8000C348: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x8000C34C: lw          $t8, -0x1458($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1458);
    // 0x8000C350: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x8000C354: lw          $t9, -0x1468($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1468);
    // 0x8000C358: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000C35C: addiu       $a2, $zero, 0x7FF
    ctx->r6 = ADD32(0, 0X7FF);
    // 0x8000C360: mflo        $t7
    ctx->r15 = lo;
    // 0x8000C364: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x8000C368: srav        $t4, $t6, $t9
    ctx->r12 = S32(SIGNED(ctx->r14) >> (ctx->r25 & 31));
    // 0x8000C36C: addiu       $t4, $t4, -0x1
    ctx->r12 = ADD32(ctx->r12, -0X1);
    // 0x8000C370: slti        $at, $t4, 0x7FF
    ctx->r1 = SIGNED(ctx->r12) < 0X7FF ? 1 : 0;
    // 0x8000C374: beq         $at, $zero, L_8000C384
    if (ctx->r1 == 0) {
        // 0x8000C378: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_8000C384;
    }
    // 0x8000C378: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8000C37C: b           L_8000C384
    // 0x8000C380: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
        goto L_8000C384;
    // 0x8000C380: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
L_8000C384:
    // 0x8000C384: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x8000C388: lw          $t7, -0x14A8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X14A8);
    // 0x8000C38C: nop

    // 0x8000C390: multu       $t7, $t3
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000C394: mflo        $t5
    ctx->r13 = lo;
    // 0x8000C398: bgez        $t5, L_8000C3A8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8000C39C: sra         $t8, $t5, 3
        ctx->r24 = S32(SIGNED(ctx->r13) >> 3);
            goto L_8000C3A8;
    }
    // 0x8000C39C: sra         $t8, $t5, 3
    ctx->r24 = S32(SIGNED(ctx->r13) >> 3);
    // 0x8000C3A0: addiu       $at, $t5, 0x7
    ctx->r1 = ADD32(ctx->r13, 0X7);
    // 0x8000C3A4: sra         $t8, $at, 3
    ctx->r24 = S32(SIGNED(ctx->r1) >> 3);
L_8000C3A8:
    // 0x8000C3A8: bgtz        $t8, L_8000C3B8
    if (SIGNED(ctx->r24) > 0) {
        // 0x8000C3AC: or          $t5, $t8, $zero
        ctx->r13 = ctx->r24 | 0;
            goto L_8000C3B8;
    }
    // 0x8000C3AC: or          $t5, $t8, $zero
    ctx->r13 = ctx->r24 | 0;
    // 0x8000C3B0: b           L_8000C3BC
    // 0x8000C3B4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
        goto L_8000C3BC;
    // 0x8000C3B4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_8000C3B8:
    // 0x8000C3B8: or          $t3, $t5, $zero
    ctx->r11 = ctx->r13 | 0;
L_8000C3BC:
    // 0x8000C3BC: bgtz        $t5, L_8000C3CC
    if (SIGNED(ctx->r13) > 0) {
        // 0x8000C3C0: addiu       $t6, $t3, 0x7FF
        ctx->r14 = ADD32(ctx->r11, 0X7FF);
            goto L_8000C3CC;
    }
    // 0x8000C3C0: addiu       $t6, $t3, 0x7FF
    ctx->r14 = ADD32(ctx->r11, 0X7FF);
    // 0x8000C3C4: b           L_8000C3D0
    // 0x8000C3C8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
        goto L_8000C3D0;
    // 0x8000C3C8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
L_8000C3CC:
    // 0x8000C3CC: or          $t4, $t5, $zero
    ctx->r12 = ctx->r13 | 0;
L_8000C3D0:
    // 0x8000C3D0: div         $zero, $t6, $t4
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r12)));
    // 0x8000C3D4: bne         $t4, $zero, L_8000C3E0
    if (ctx->r12 != 0) {
        // 0x8000C3D8: nop
    
            goto L_8000C3E0;
    }
    // 0x8000C3D8: nop

    // 0x8000C3DC: break       7
    do_break(2147533788);
L_8000C3E0:
    // 0x8000C3E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8000C3E4: bne         $t4, $at, L_8000C3F8
    if (ctx->r12 != ctx->r1) {
        // 0x8000C3E8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8000C3F8;
    }
    // 0x8000C3E8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000C3EC: bne         $t6, $at, L_8000C3F8
    if (ctx->r14 != ctx->r1) {
        // 0x8000C3F0: nop
    
            goto L_8000C3F8;
    }
    // 0x8000C3F0: nop

    // 0x8000C3F4: break       6
    do_break(2147533812);
L_8000C3F8:
    // 0x8000C3F8: andi        $t6, $a2, 0xFFF
    ctx->r14 = ctx->r6 & 0XFFF;
    // 0x8000C3FC: or          $t5, $a0, $zero
    ctx->r13 = ctx->r4 | 0;
    // 0x8000C400: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000C404: mflo        $t9
    ctx->r25 = lo;
    // 0x8000C408: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x8000C40C: or          $t8, $t7, $t2
    ctx->r24 = ctx->r15 | ctx->r10;
    // 0x8000C410: sll         $t9, $t6, 12
    ctx->r25 = S32(ctx->r14 << 12);
    // 0x8000C414: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x8000C418: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x8000C41C: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8000C420: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x8000C424: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8000C428: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8000C42C: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x8000C430: sw          $a0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r4;
    // 0x8000C434: lhu         $t9, 0x4($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X4);
    // 0x8000C438: lw          $t8, -0x1488($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1488);
    // 0x8000C43C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000C440: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000C444: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8000C448: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000C44C: mflo        $t7
    ctx->r15 = lo;
    // 0x8000C450: addiu       $t6, $t7, 0x7
    ctx->r14 = ADD32(ctx->r15, 0X7);
    // 0x8000C454: sra         $t8, $t6, 3
    ctx->r24 = S32(SIGNED(ctx->r14) >> 3);
    // 0x8000C458: andi        $t9, $t8, 0x1FF
    ctx->r25 = ctx->r24 & 0X1FF;
    // 0x8000C45C: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x8000C460: sll         $t7, $t9, 9
    ctx->r15 = S32(ctx->r25 << 9);
    // 0x8000C464: or          $t6, $t7, $t1
    ctx->r14 = ctx->r15 | ctx->r9;
    // 0x8000C468: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x8000C46C: sll         $t7, $t9, 21
    ctx->r15 = S32(ctx->r25 << 21);
    // 0x8000C470: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8000C474: andi        $t9, $a3, 0x3
    ctx->r25 = ctx->r7 & 0X3;
    // 0x8000C478: sll         $t6, $t9, 19
    ctx->r14 = S32(ctx->r25 << 19);
    // 0x8000C47C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8000C480: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8000C484: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x8000C488: lhu         $t8, 0x6($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X6);
    // 0x8000C48C: nop

    // 0x8000C490: andi        $t6, $t8, 0x3
    ctx->r14 = ctx->r24 & 0X3;
    // 0x8000C494: lhu         $t8, 0xA($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0XA);
    // 0x8000C498: sll         $t7, $t6, 18
    ctx->r15 = S32(ctx->r14 << 18);
    // 0x8000C49C: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x8000C4A0: sll         $t8, $t6, 14
    ctx->r24 = S32(ctx->r14 << 14);
    // 0x8000C4A4: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x8000C4A8: lhu         $t7, 0xE($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0XE);
    // 0x8000C4AC: nop

    // 0x8000C4B0: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x8000C4B4: sll         $t7, $t8, 10
    ctx->r15 = S32(ctx->r24 << 10);
    // 0x8000C4B8: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8000C4BC: lhu         $t6, 0x4($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X4);
    // 0x8000C4C0: nop

    // 0x8000C4C4: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x8000C4C8: sll         $t6, $t7, 8
    ctx->r14 = S32(ctx->r15 << 8);
    // 0x8000C4CC: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8000C4D0: lhu         $t8, 0x8($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X8);
    // 0x8000C4D4: nop

    // 0x8000C4D8: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x8000C4DC: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x8000C4E0: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x8000C4E4: lhu         $t7, 0xC($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0XC);
    // 0x8000C4E8: nop

    // 0x8000C4EC: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x8000C4F0: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x8000C4F4: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x8000C4F8: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x8000C4FC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000C500: lhu         $t8, 0x4($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X4);
    // 0x8000C504: nop

    // 0x8000C508: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x8000C50C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8000C510: lhu         $t7, 0x6($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X6);
    // 0x8000C514: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x8000C518: sll         $t8, $t6, 12
    ctx->r24 = S32(ctx->r14 << 12);
    // 0x8000C51C: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x8000C520: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8000C524: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x8000C528: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x8000C52C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
L_8000C530:
    // 0x8000C530: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000C534: jr          $ra
    // 0x8000C538: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8000C538: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8000C540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C540: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x8000C544: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x8000C548: addiu       $a2, $a2, 0x6260
    ctx->r6 = ADD32(ctx->r6, 0X6260);
    // 0x8000C54C: addiu       $v1, $v1, 0x6268
    ctx->r3 = ADD32(ctx->r3, 0X6268);
    // 0x8000C550: addiu       $t7, $a1, -0x1
    ctx->r15 = ADD32(ctx->r5, -0X1);
    // 0x8000C554: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8000C558: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    // 0x8000C55C: srl         $t8, $t7, 3
    ctx->r24 = S32(U32(ctx->r15) >> 3);
    // 0x8000C560: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x8000C564: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x8000C568: sll         $t1, $t9, 3
    ctx->r9 = S32(ctx->r25 << 3);
    // 0x8000C56C: addiu       $a3, $a3, 0x6264
    ctx->r7 = ADD32(ctx->r7, 0X6264);
    // 0x8000C570: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x8000C574: sh          $t8, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r24;
    // 0x8000C578: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8000C57C: addu        $t2, $t1, $a0
    ctx->r10 = ADD32(ctx->r9, ctx->r4);
    // 0x8000C580: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8000C584: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x8000C588: sh          $t0, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r8;
    // 0x8000C58C: sh          $t0, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r8;
    // 0x8000C590: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x8000C594: jr          $ra
    // 0x8000C598: sw          $t3, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r11;
    return;
    // 0x8000C598: sw          $t3, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r11;
;}
RECOMP_FUNC void func_8000C59C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C59C: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x8000C5A0: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x8000C5A4: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x8000C5A8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8000C5AC: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x8000C5B0: addiu       $a1, $a1, 0x6264
    ctx->r5 = ADD32(ctx->r5, 0X6264);
    // 0x8000C5B4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8000C5B8: lw          $v0, 0x6260($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6260);
    // 0x8000C5BC: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8000C5C0: nop

    // 0x8000C5C4: sltu        $at, $v0, $t6
    ctx->r1 = ctx->r2 < ctx->r14 ? 1 : 0;
    // 0x8000C5C8: beq         $at, $zero, L_8000C648
    if (ctx->r1 == 0) {
        // 0x8000C5CC: nop
    
            goto L_8000C648;
    }
    // 0x8000C5CC: nop

L_8000C5D0:
    // 0x8000C5D0: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x8000C5D4: lhu         $v1, 0x2($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X2);
    // 0x8000C5D8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8000C5DC: beq         $t8, $zero, L_8000C60C
    if (ctx->r24 == 0) {
        // 0x8000C5E0: nop
    
            goto L_8000C60C;
    }
    // 0x8000C5E0: nop

    // 0x8000C5E4: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8000C5E8: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8000C5EC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8000C5F0: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
    // 0x8000C5F4: lhu         $t2, 0x2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X2);
    // 0x8000C5F8: nop

    // 0x8000C5FC: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8000C600: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8000C604: b           L_8000C630
    // 0x8000C608: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
        goto L_8000C630;
    // 0x8000C608: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
L_8000C60C:
    // 0x8000C60C: lw          $t5, 0xC($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XC);
    // 0x8000C610: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8000C614: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8000C618: sw          $t6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r14;
    // 0x8000C61C: lhu         $t8, 0x2($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X2);
    // 0x8000C620: nop

    // 0x8000C624: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8000C628: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8000C62C: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
L_8000C630:
    // 0x8000C630: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x8000C634: sll         $t2, $v1, 3
    ctx->r10 = S32(ctx->r3 << 3);
    // 0x8000C638: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x8000C63C: sltu        $at, $v0, $t1
    ctx->r1 = ctx->r2 < ctx->r9 ? 1 : 0;
    // 0x8000C640: bne         $at, $zero, L_8000C5D0
    if (ctx->r1 != 0) {
        // 0x8000C644: nop
    
            goto L_8000C5D0;
    }
    // 0x8000C644: nop

L_8000C648:
    // 0x8000C648: jr          $ra
    // 0x8000C64C: nop

    return;
    // 0x8000C64C: nop

    // 0x8000C650: jr          $ra
    // 0x8000C654: nop

    return;
    // 0x8000C654: nop

;}
RECOMP_FUNC void func_8000C658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C658: beq         $a0, $zero, L_8000C724
    if (ctx->r4 == 0) {
        // 0x8000C65C: lui         $t6, 0x800A
        ctx->r14 = S32(0X800A << 16);
            goto L_8000C724;
    }
    // 0x8000C65C: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x8000C660: lw          $t6, 0x6260($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6260);
    // 0x8000C664: addiu       $v1, $a0, -0x8
    ctx->r3 = ADD32(ctx->r4, -0X8);
    // 0x8000C668: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8000C66C: beq         $a0, $t7, L_8000C6A8
    if (ctx->r4 == ctx->r15) {
        // 0x8000C670: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8000C6A8;
    }
    // 0x8000C670: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8000C674: lhu         $t8, 0x0($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X0);
    // 0x8000C678: nop

    // 0x8000C67C: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x8000C680: bne         $t9, $zero, L_8000C6A8
    if (ctx->r25 != 0) {
        // 0x8000C684: nop
    
            goto L_8000C6A8;
    }
    // 0x8000C684: nop

    // 0x8000C688: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x8000C68C: lhu         $t1, 0x2($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X2);
    // 0x8000C690: lhu         $t0, 0x2($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X2);
    // 0x8000C694: nop

    // 0x8000C698: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8000C69C: sh          $t2, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r10;
    // 0x8000C6A0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x8000C6A4: nop

L_8000C6A8:
    // 0x8000C6A8: lhu         $v1, 0x2($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X2);
    // 0x8000C6AC: nop

    // 0x8000C6B0: sll         $t3, $v1, 3
    ctx->r11 = S32(ctx->r3 << 3);
    // 0x8000C6B4: addu        $a0, $t3, $v0
    ctx->r4 = ADD32(ctx->r11, ctx->r2);
    // 0x8000C6B8: lhu         $t4, 0x0($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X0);
    // 0x8000C6BC: nop

    // 0x8000C6C0: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x8000C6C4: bne         $t5, $zero, L_8000C6DC
    if (ctx->r13 != 0) {
        // 0x8000C6C8: nop
    
            goto L_8000C6DC;
    }
    // 0x8000C6C8: nop

    // 0x8000C6CC: lhu         $t6, 0x2($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X2);
    // 0x8000C6D0: nop

    // 0x8000C6D4: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x8000C6D8: sh          $t7, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r15;
L_8000C6DC:
    // 0x8000C6DC: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x8000C6E0: addiu       $v1, $v1, 0x6268
    ctx->r3 = ADD32(ctx->r3, 0X6268);
    // 0x8000C6E4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8000C6E8: nop

    // 0x8000C6EC: sltu        $at, $v0, $t8
    ctx->r1 = ctx->r2 < ctx->r24 ? 1 : 0;
    // 0x8000C6F0: beq         $at, $zero, L_8000C6FC
    if (ctx->r1 == 0) {
        // 0x8000C6F4: nop
    
            goto L_8000C6FC;
    }
    // 0x8000C6F4: nop

    // 0x8000C6F8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_8000C6FC:
    // 0x8000C6FC: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x8000C700: lhu         $t1, 0x2($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X2);
    // 0x8000C704: andi        $t0, $t9, 0xFFFE
    ctx->r8 = ctx->r25 & 0XFFFE;
    // 0x8000C708: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x8000C70C: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    // 0x8000C710: addu        $a0, $t2, $v0
    ctx->r4 = ADD32(ctx->r10, ctx->r2);
    // 0x8000C714: lhu         $t3, 0x0($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X0);
    // 0x8000C718: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x8000C71C: andi        $t4, $t3, 0xFFFD
    ctx->r12 = ctx->r11 & 0XFFFD;
    // 0x8000C720: sh          $t4, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r12;
L_8000C724:
    // 0x8000C724: jr          $ra
    // 0x8000C728: nop

    return;
    // 0x8000C728: nop

    // 0x8000C72C: jr          $ra
    // 0x8000C730: nop

    return;
    // 0x8000C730: nop

;}
RECOMP_FUNC void func_8000C734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C734: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x8000C738: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x8000C73C: addiu       $a3, $a3, 0x6268
    ctx->r7 = ADD32(ctx->r7, 0X6268);
    // 0x8000C740: lw          $a1, 0x6264($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6264);
    // 0x8000C744: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x8000C748: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8000C74C: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x8000C750: beq         $at, $zero, L_8000C79C
    if (ctx->r1 == 0) {
        // 0x8000C754: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8000C79C;
    }
    // 0x8000C754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_8000C758:
    // 0x8000C758: lhu         $t6, 0x0($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X0);
    // 0x8000C75C: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x8000C760: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8000C764: bne         $t7, $zero, L_8000C784
    if (ctx->r15 != 0) {
        // 0x8000C768: addiu       $t8, $a0, 0x7
        ctx->r24 = ADD32(ctx->r4, 0X7);
            goto L_8000C784;
    }
    // 0x8000C768: addiu       $t8, $a0, 0x7
    ctx->r24 = ADD32(ctx->r4, 0X7);
    // 0x8000C76C: sra         $t9, $t8, 3
    ctx->r25 = S32(SIGNED(ctx->r24) >> 3);
    // 0x8000C770: slt         $at, $t9, $v0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8000C774: beq         $at, $zero, L_8000C788
    if (ctx->r1 == 0) {
        // 0x8000C778: sll         $t0, $v0, 3
        ctx->r8 = S32(ctx->r2 << 3);
            goto L_8000C788;
    }
    // 0x8000C778: sll         $t0, $v0, 3
    ctx->r8 = S32(ctx->r2 << 3);
    // 0x8000C77C: b           L_8000C79C
    // 0x8000C780: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
        goto L_8000C79C;
    // 0x8000C780: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_8000C784:
    // 0x8000C784: sll         $t0, $v0, 3
    ctx->r8 = S32(ctx->r2 << 3);
L_8000C788:
    // 0x8000C788: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x8000C78C: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x8000C790: bne         $at, $zero, L_8000C758
    if (ctx->r1 != 0) {
        // 0x8000C794: nop
    
            goto L_8000C758;
    }
    // 0x8000C794: nop

    // 0x8000C798: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_8000C79C:
    // 0x8000C79C: addiu       $a2, $a0, 0x7
    ctx->r6 = ADD32(ctx->r4, 0X7);
    // 0x8000C7A0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8000C7A4: sra         $t1, $a2, 3
    ctx->r9 = S32(SIGNED(ctx->r6) >> 3);
    // 0x8000C7A8: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x8000C7AC: bne         $at, $zero, L_8000C7E0
    if (ctx->r1 != 0) {
        // 0x8000C7B0: addiu       $a2, $t1, 0x1
        ctx->r6 = ADD32(ctx->r9, 0X1);
            goto L_8000C7E0;
    }
    // 0x8000C7B0: addiu       $a2, $t1, 0x1
    ctx->r6 = ADD32(ctx->r9, 0X1);
    // 0x8000C7B4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8000C7B8: addiu       $a0, $a0, 0x4DB0
    ctx->r4 = ADD32(ctx->r4, 0X4DB0);
    // 0x8000C7BC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8000C7C0: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x8000C7C4: jal         0x80000FBC
    // 0x8000C7C8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x8000C7C8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x8000C7CC: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x8000C7D0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8000C7D4: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x8000C7D8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8000C7DC: addiu       $a3, $a3, 0x6268
    ctx->r7 = ADD32(ctx->r7, 0X6268);
L_8000C7E0:
    // 0x8000C7E0: addiu       $t2, $a2, 0x1
    ctx->r10 = ADD32(ctx->r6, 0X1);
    // 0x8000C7E4: slt         $at, $t2, $v0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8000C7E8: beq         $at, $zero, L_8000C814
    if (ctx->r1 == 0) {
        // 0x8000C7EC: sll         $t3, $a2, 3
        ctx->r11 = S32(ctx->r6 << 3);
            goto L_8000C814;
    }
    // 0x8000C7EC: sll         $t3, $a2, 3
    ctx->r11 = S32(ctx->r6 << 3);
    // 0x8000C7F0: addu        $a0, $t3, $v1
    ctx->r4 = ADD32(ctx->r11, ctx->r3);
    // 0x8000C7F4: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x8000C7F8: lhu         $t4, 0x2($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X2);
    // 0x8000C7FC: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x8000C800: subu        $t5, $t4, $a2
    ctx->r13 = SUB32(ctx->r12, ctx->r6);
    // 0x8000C804: sh          $t5, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r13;
    // 0x8000C808: sh          $a2, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r6;
    // 0x8000C80C: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x8000C810: sw          $a0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r4;
L_8000C814:
    // 0x8000C814: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x8000C818: lhu         $a0, 0x2($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X2);
    // 0x8000C81C: bne         $v1, $t8, L_8000C834
    if (ctx->r3 != ctx->r24) {
        // 0x8000C820: sll         $t9, $a0, 3
        ctx->r25 = S32(ctx->r4 << 3);
            goto L_8000C834;
    }
    // 0x8000C820: sll         $t9, $a0, 3
    ctx->r25 = S32(ctx->r4 << 3);
    // 0x8000C824: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x8000C828: sw          $t0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r8;
    // 0x8000C82C: lhu         $a0, 0x2($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X2);
    // 0x8000C830: nop

L_8000C834:
    // 0x8000C834: lhu         $t1, 0x0($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X0);
    // 0x8000C838: sll         $t3, $a0, 3
    ctx->r11 = S32(ctx->r4 << 3);
    // 0x8000C83C: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x8000C840: sh          $t2, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r10;
    // 0x8000C844: addu        $v0, $t3, $v1
    ctx->r2 = ADD32(ctx->r11, ctx->r3);
    // 0x8000C848: lhu         $t4, 0x0($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X0);
    // 0x8000C84C: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x8000C850: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x8000C854: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
    // 0x8000C858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000C85C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8000C860: jr          $ra
    // 0x8000C864: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8000C864: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8000C870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C870: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8000C874: andi        $t7, $a1, 0x1
    ctx->r15 = ctx->r5 & 0X1;
    // 0x8000C878: beq         $t7, $zero, L_8000C8AC
    if (ctx->r15 == 0) {
        // 0x8000C87C: subu        $v0, $t6, $a3
        ctx->r2 = SUB32(ctx->r14, ctx->r7);
            goto L_8000C8AC;
    }
    // 0x8000C87C: subu        $v0, $t6, $a3
    ctx->r2 = SUB32(ctx->r14, ctx->r7);
    // 0x8000C880: lbu         $t8, 0x0($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X0);
    // 0x8000C884: lbu         $t1, 0x0($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X0);
    // 0x8000C888: multu       $t8, $v0
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000C88C: mflo        $t9
    ctx->r25 = lo;
    // 0x8000C890: nop

    // 0x8000C894: nop

    // 0x8000C898: multu       $t1, $a3
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000C89C: mflo        $t2
    ctx->r10 = lo;
    // 0x8000C8A0: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x8000C8A4: sra         $t4, $t3, 8
    ctx->r12 = S32(SIGNED(ctx->r11) >> 8);
    // 0x8000C8A8: sb          $t4, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r12;
L_8000C8AC:
    // 0x8000C8AC: sll         $t5, $a1, 30
    ctx->r13 = S32(ctx->r5 << 30);
    // 0x8000C8B0: bgez        $t5, L_8000C8E4
    if (SIGNED(ctx->r13) >= 0) {
        // 0x8000C8B4: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_8000C8E4;
    }
    // 0x8000C8B4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8000C8B8: lbu         $t6, 0x1($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X1);
    // 0x8000C8BC: lbu         $t8, 0x1($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X1);
    // 0x8000C8C0: multu       $t6, $v0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000C8C4: mflo        $t7
    ctx->r15 = lo;
    // 0x8000C8C8: nop

    // 0x8000C8CC: nop

    // 0x8000C8D0: multu       $t8, $a3
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000C8D4: mflo        $t1
    ctx->r9 = lo;
    // 0x8000C8D8: addu        $t9, $t7, $t1
    ctx->r25 = ADD32(ctx->r15, ctx->r9);
    // 0x8000C8DC: sra         $t2, $t9, 8
    ctx->r10 = S32(SIGNED(ctx->r25) >> 8);
    // 0x8000C8E0: sb          $t2, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r10;
L_8000C8E4:
    // 0x8000C8E4: sll         $t3, $v1, 1
    ctx->r11 = S32(ctx->r3 << 1);
    // 0x8000C8E8: and         $t4, $a1, $t3
    ctx->r12 = ctx->r5 & ctx->r11;
    // 0x8000C8EC: beq         $t4, $zero, L_8000C920
    if (ctx->r12 == 0) {
        // 0x8000C8F0: or          $v1, $t3, $zero
        ctx->r3 = ctx->r11 | 0;
            goto L_8000C920;
    }
    // 0x8000C8F0: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x8000C8F4: lbu         $t5, 0x2($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X2);
    // 0x8000C8F8: lbu         $t8, 0x2($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X2);
    // 0x8000C8FC: multu       $t5, $v0
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000C900: mflo        $t6
    ctx->r14 = lo;
    // 0x8000C904: nop

    // 0x8000C908: nop

    // 0x8000C90C: multu       $t8, $a3
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000C910: mflo        $t7
    ctx->r15 = lo;
    // 0x8000C914: addu        $t1, $t6, $t7
    ctx->r9 = ADD32(ctx->r14, ctx->r15);
    // 0x8000C918: sra         $t9, $t1, 8
    ctx->r25 = S32(SIGNED(ctx->r9) >> 8);
    // 0x8000C91C: sb          $t9, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r25;
L_8000C920:
    // 0x8000C920: sll         $t2, $v1, 1
    ctx->r10 = S32(ctx->r3 << 1);
    // 0x8000C924: and         $t3, $a1, $t2
    ctx->r11 = ctx->r5 & ctx->r10;
    // 0x8000C928: beq         $t3, $zero, L_8000C95C
    if (ctx->r11 == 0) {
        // 0x8000C92C: nop
    
            goto L_8000C95C;
    }
    // 0x8000C92C: nop

    // 0x8000C930: lbu         $t4, 0x3($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0X3);
    // 0x8000C934: lbu         $t8, 0x3($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X3);
    // 0x8000C938: multu       $t4, $v0
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000C93C: mflo        $t5
    ctx->r13 = lo;
    // 0x8000C940: nop

    // 0x8000C944: nop

    // 0x8000C948: multu       $t8, $a3
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000C94C: mflo        $t6
    ctx->r14 = lo;
    // 0x8000C950: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8000C954: sra         $t1, $t7, 8
    ctx->r9 = S32(SIGNED(ctx->r15) >> 8);
    // 0x8000C958: sb          $t1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r9;
L_8000C95C:
    // 0x8000C95C: jr          $ra
    // 0x8000C960: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8000C960: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_8000C964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C964: andi        $t6, $a1, 0x8
    ctx->r14 = ctx->r5 & 0X8;
    // 0x8000C968: beq         $t6, $zero, L_8000C98C
    if (ctx->r14 == 0) {
        // 0x8000C96C: sll         $t1, $a1, 29
        ctx->r9 = S32(ctx->r5 << 29);
            goto L_8000C98C;
    }
    // 0x8000C96C: sll         $t1, $a1, 29
    ctx->r9 = S32(ctx->r5 << 29);
    // 0x8000C970: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x8000C974: nop

    // 0x8000C978: multu       $t7, $a2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000C97C: mflo        $t8
    ctx->r24 = lo;
    // 0x8000C980: srl         $t9, $t8, 8
    ctx->r25 = S32(U32(ctx->r24) >> 8);
    // 0x8000C984: addu        $t0, $t9, $a3
    ctx->r8 = ADD32(ctx->r25, ctx->r7);
    // 0x8000C988: sb          $t0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r8;
L_8000C98C:
    // 0x8000C98C: bgez        $t1, L_8000C9B0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8000C990: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8000C9B0;
    }
    // 0x8000C990: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8000C994: lbu         $t2, 0x1($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X1);
    // 0x8000C998: nop

    // 0x8000C99C: multu       $t2, $a2
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000C9A0: mflo        $t3
    ctx->r11 = lo;
    // 0x8000C9A4: srl         $t4, $t3, 8
    ctx->r12 = S32(U32(ctx->r11) >> 8);
    // 0x8000C9A8: addu        $t5, $t4, $a3
    ctx->r13 = ADD32(ctx->r12, ctx->r7);
    // 0x8000C9AC: sb          $t5, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r13;
L_8000C9B0:
    // 0x8000C9B0: sra         $t6, $v0, 1
    ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8000C9B4: and         $t7, $a1, $t6
    ctx->r15 = ctx->r5 & ctx->r14;
    // 0x8000C9B8: beq         $t7, $zero, L_8000C9DC
    if (ctx->r15 == 0) {
        // 0x8000C9BC: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8000C9DC;
    }
    // 0x8000C9BC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8000C9C0: lbu         $t8, 0x2($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X2);
    // 0x8000C9C4: nop

    // 0x8000C9C8: multu       $t8, $a2
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000C9CC: mflo        $t9
    ctx->r25 = lo;
    // 0x8000C9D0: srl         $t0, $t9, 8
    ctx->r8 = S32(U32(ctx->r25) >> 8);
    // 0x8000C9D4: addu        $t1, $t0, $a3
    ctx->r9 = ADD32(ctx->r8, ctx->r7);
    // 0x8000C9D8: sb          $t1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r9;
L_8000C9DC:
    // 0x8000C9DC: sra         $t2, $v0, 1
    ctx->r10 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8000C9E0: and         $t3, $a1, $t2
    ctx->r11 = ctx->r5 & ctx->r10;
    // 0x8000C9E4: beq         $t3, $zero, L_8000CA08
    if (ctx->r11 == 0) {
        // 0x8000C9E8: nop
    
            goto L_8000CA08;
    }
    // 0x8000C9E8: nop

    // 0x8000C9EC: lbu         $t4, 0x3($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X3);
    // 0x8000C9F0: nop

    // 0x8000C9F4: multu       $t4, $a2
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000C9F8: mflo        $t5
    ctx->r13 = lo;
    // 0x8000C9FC: srl         $t6, $t5, 8
    ctx->r14 = S32(U32(ctx->r13) >> 8);
    // 0x8000CA00: addu        $t7, $t6, $a3
    ctx->r15 = ADD32(ctx->r14, ctx->r7);
    // 0x8000CA04: sb          $t7, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r15;
L_8000CA08:
    // 0x8000CA08: jr          $ra
    // 0x8000CA0C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8000CA0C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_8000CA10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CA10: andi        $t7, $a0, 0xF100
    ctx->r15 = ctx->r4 & 0XF100;
    // 0x8000CA14: andi        $t9, $a0, 0x7C0
    ctx->r25 = ctx->r4 & 0X7C0;
    // 0x8000CA18: sll         $t0, $t9, 13
    ctx->r8 = S32(ctx->r25 << 13);
    // 0x8000CA1C: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8000CA20: andi        $t2, $a0, 0x3E
    ctx->r10 = ctx->r4 & 0X3E;
    // 0x8000CA24: sll         $t3, $t2, 10
    ctx->r11 = S32(ctx->r10 << 10);
    // 0x8000CA28: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x8000CA2C: andi        $t5, $a0, 0x1
    ctx->r13 = ctx->r4 & 0X1;
    // 0x8000CA30: sll         $t6, $t5, 7
    ctx->r14 = S32(ctx->r13 << 7);
    // 0x8000CA34: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x8000CA38: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8000CA3C: jr          $ra
    // 0x8000CA40: or          $v0, $t4, $t6
    ctx->r2 = ctx->r12 | ctx->r14;
    return;
    // 0x8000CA40: or          $v0, $t4, $t6
    ctx->r2 = ctx->r12 | ctx->r14;
;}
RECOMP_FUNC void func_8000CA44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CA44: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x8000CA48: and         $t6, $a0, $at
    ctx->r14 = ctx->r4 & ctx->r1;
    // 0x8000CA4C: lui         $at, 0xF8
    ctx->r1 = S32(0XF8 << 16);
    // 0x8000CA50: and         $t8, $a0, $at
    ctx->r24 = ctx->r4 & ctx->r1;
    // 0x8000CA54: srl         $t9, $t8, 13
    ctx->r25 = S32(U32(ctx->r24) >> 13);
    // 0x8000CA58: srl         $t7, $t6, 16
    ctx->r15 = S32(U32(ctx->r14) >> 16);
    // 0x8000CA5C: andi        $t1, $a0, 0xF800
    ctx->r9 = ctx->r4 & 0XF800;
    // 0x8000CA60: srl         $t2, $t1, 10
    ctx->r10 = S32(U32(ctx->r9) >> 10);
    // 0x8000CA64: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x8000CA68: andi        $t4, $a0, 0x80
    ctx->r12 = ctx->r4 & 0X80;
    // 0x8000CA6C: srl         $t5, $t4, 7
    ctx->r13 = S32(U32(ctx->r12) >> 7);
    // 0x8000CA70: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x8000CA74: or          $v0, $t3, $t5
    ctx->r2 = ctx->r11 | ctx->r13;
    // 0x8000CA78: andi        $t6, $v0, 0xFFFF
    ctx->r14 = ctx->r2 & 0XFFFF;
    // 0x8000CA7C: jr          $ra
    // 0x8000CA80: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    return;
    // 0x8000CA80: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void func_8000CA84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CA84: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8000CA88: addiu       $t6, $t6, -0x1430
    ctx->r14 = ADD32(ctx->r14, -0X1430);
    // 0x8000CA8C: addiu       $t9, $t6, 0x24
    ctx->r25 = ADD32(ctx->r14, 0X24);
    // 0x8000CA90: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
L_8000CA94:
    // 0x8000CA94: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8000CA98: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8000CA9C: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x8000CAA0: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x8000CAA4: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8000CAA8: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x8000CAAC: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x8000CAB0: bne         $t6, $t9, L_8000CA94
    if (ctx->r14 != ctx->r25) {
        // 0x8000CAB4: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_8000CA94;
    }
    // 0x8000CAB4: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x8000CAB8: jr          $ra
    // 0x8000CABC: nop

    return;
    // 0x8000CABC: nop

;}
RECOMP_FUNC void func_8000CAC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CAC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000CAC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000CAC8: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8000CACC: lwc1        $f14, 0x4($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8000CAD0: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8000CAD4: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8000CAD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8000CADC: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8000CAE0: nop

    // 0x8000CAE4: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8000CAE8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8000CAEC: jal         0x8007A500
    // 0x8000CAF0: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x8000CAF0: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    after_0:
    // 0x8000CAF4: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x8000CAF8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8000CAFC: cvt.d.s     $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.d = CVT_D_S(ctx->f0.fl);
    // 0x8000CB00: c.eq.d      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.d == ctx->f12.d;
    // 0x8000CB04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8000CB08: bc1t        L_8000CB4C
    if (c1cs) {
        // 0x8000CB0C: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_8000CB4C;
    }
    // 0x8000CB0C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x8000CB10: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8000CB14: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8000CB18: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8000CB1C: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8000CB20: div.d       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f12.d);
    // 0x8000CB24: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8000CB28: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8000CB2C: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
    // 0x8000CB30: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8000CB34: nop

    // 0x8000CB38: mul.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8000CB3C: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
    // 0x8000CB40: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8000CB44: swc1        $f16, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f16.u32l;
    // 0x8000CB48: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
L_8000CB4C:
    // 0x8000CB4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000CB50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000CB54: jr          $ra
    // 0x8000CB58: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    return;
    // 0x8000CB58: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
;}
RECOMP_FUNC void func_8000CB5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CB5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000CB60: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x8000CB64: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8000CB68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000CB6C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8000CB70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000CB74: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8000CB78: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
L_8000CB7C:
    // 0x8000CB7C: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8000CB80: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8000CB84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8000CB88: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000CB8C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000CB90: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x8000CB94: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8000CB98: bne         $v0, $a0, L_8000CB7C
    if (ctx->r2 != ctx->r4) {
        // 0x8000CB9C: swc1        $f8, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->f8.u32l;
            goto L_8000CB7C;
    }
    // 0x8000CB9C: swc1        $f8, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f8.u32l;
    // 0x8000CBA0: jal         0x8000CAC0
    // 0x8000CBA4: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_8000CAC0(rdram, ctx);
        goto after_0;
    // 0x8000CBA4: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_0:
    // 0x8000CBA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000CBAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000CBB0: jr          $ra
    // 0x8000CBB4: nop

    return;
    // 0x8000CBB4: nop

;}
RECOMP_FUNC void func_8000CBB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CBB8: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8000CBBC: swc1        $f29, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8000CBC0: swc1        $f28, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f28.u32l;
    // 0x8000CBC4: swc1        $f27, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8000CBC8: swc1        $f26, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f26.u32l;
    // 0x8000CBCC: swc1        $f25, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8000CBD0: swc1        $f24, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f24.u32l;
    // 0x8000CBD4: swc1        $f23, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8000CBD8: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    // 0x8000CBDC: swc1        $f21, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8000CBE0: swc1        $f20, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f20.u32l;
    // 0x8000CBE4: lwc1        $f20, 0x14($a1)
    ctx->f20.u32l = MEM_W(ctx->r5, 0X14);
    // 0x8000CBE8: lwc1        $f28, 0x28($a1)
    ctx->f28.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8000CBEC: lwc1        $f22, 0x18($a1)
    ctx->f22.u32l = MEM_W(ctx->r5, 0X18);
    // 0x8000CBF0: mul.s       $f4, $f20, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f28.fl);
    // 0x8000CBF4: lwc1        $f26, 0x24($a1)
    ctx->f26.u32l = MEM_W(ctx->r5, 0X24);
    // 0x8000CBF8: lwc1        $f24, 0x20($a1)
    ctx->f24.u32l = MEM_W(ctx->r5, 0X20);
    // 0x8000CBFC: lwc1        $f18, 0x10($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X10);
    // 0x8000CC00: mul.s       $f6, $f22, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f26.fl);
    // 0x8000CC04: lwc1        $f2, 0x0($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8000CC08: lwc1        $f12, 0x4($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8000CC0C: lwc1        $f14, 0x8($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8000CC10: mul.s       $f10, $f22, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f24.fl);
    // 0x8000CC14: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000CC18: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8000CC1C: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x8000CC20: mul.s       $f4, $f18, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f28.fl);
    // 0x8000CC24: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000CC28: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8000CC2C: mul.s       $f10, $f18, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f26.fl);
    // 0x8000CC30: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x8000CC34: mul.s       $f4, $f20, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x8000CC38: sub.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8000CC3C: mul.s       $f4, $f2, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8000CC40: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x8000CC44: mul.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x8000CC48: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8000CC4C: mul.s       $f4, $f14, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x8000CC50: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8000CC54: c.eq.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl == ctx->f8.fl;
    // 0x8000CC58: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x8000CC5C: bc1f        L_8000CC6C
    if (!c1cs) {
        // 0x8000CC60: nop
    
            goto L_8000CC6C;
    }
    // 0x8000CC60: nop

    // 0x8000CC64: b           L_8000CD4C
    // 0x8000CC68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000CD4C;
    // 0x8000CC68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000CC6C:
    // 0x8000CC6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000CC70: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8000CC74: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8000CC78: div.s       $f0, $f10, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x8000CC7C: swc1        $f16, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f16.u32l;
    // 0x8000CC80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000CC84: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8000CC88: nop

    // 0x8000CC8C: mul.s       $f10, $f14, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f26.fl);
    // 0x8000CC90: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x8000CC94: mul.s       $f6, $f12, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f28.fl);
    // 0x8000CC98: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x8000CC9C: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8000CCA0: nop

    // 0x8000CCA4: mul.s       $f10, $f12, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f22.fl);
    // 0x8000CCA8: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
    // 0x8000CCAC: mul.s       $f6, $f14, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x8000CCB0: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x8000CCB4: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8000CCB8: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    // 0x8000CCBC: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000CCC0: swc1        $f16, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f16.u32l;
    // 0x8000CCC4: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8000CCC8: nop

    // 0x8000CCCC: mul.s       $f4, $f2, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f28.fl);
    // 0x8000CCD0: swc1        $f6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f6.u32l;
    // 0x8000CCD4: mul.s       $f8, $f14, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f24.fl);
    // 0x8000CCD8: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8000CCDC: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8000CCE0: nop

    // 0x8000CCE4: mul.s       $f4, $f14, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x8000CCE8: swc1        $f6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f6.u32l;
    // 0x8000CCEC: mul.s       $f8, $f2, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x8000CCF0: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8000CCF4: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8000CCF8: swc1        $f6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f6.u32l;
    // 0x8000CCFC: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000CD00: swc1        $f16, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f16.u32l;
    // 0x8000CD04: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8000CD08: swc1        $f16, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f16.u32l;
    // 0x8000CD0C: swc1        $f16, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f16.u32l;
    // 0x8000CD10: swc1        $f16, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f16.u32l;
    // 0x8000CD14: mul.s       $f10, $f12, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f24.fl);
    // 0x8000CD18: swc1        $f8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f8.u32l;
    // 0x8000CD1C: mul.s       $f6, $f2, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f26.fl);
    // 0x8000CD20: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x8000CD24: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8000CD28: nop

    // 0x8000CD2C: mul.s       $f10, $f2, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8000CD30: swc1        $f8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f8.u32l;
    // 0x8000CD34: mul.s       $f6, $f12, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x8000CD38: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x8000CD3C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000CD40: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8000CD44: swc1        $f10, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f10.u32l;
    // 0x8000CD48: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
L_8000CD4C:
    // 0x8000CD4C: lwc1        $f21, 0x8($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X8);
    // 0x8000CD50: lwc1        $f20, 0xC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8000CD54: lwc1        $f23, 0x10($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8000CD58: lwc1        $f22, 0x14($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8000CD5C: lwc1        $f25, 0x18($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8000CD60: lwc1        $f24, 0x1C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000CD64: lwc1        $f27, 0x20($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8000CD68: lwc1        $f26, 0x24($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000CD6C: lwc1        $f29, 0x28($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8000CD70: lwc1        $f28, 0x2C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000CD74: jr          $ra
    // 0x8000CD78: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8000CD78: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_8000CD7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CD7C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8000CD80: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8000CD84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000CD88: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8000CD8C: jal         0x8007A640
    // 0x8000CD90: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    __sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x8000CD90: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8000CD94: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000CD98: jal         0x8007A800
    // 0x8000CD9C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    __cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x8000CD9C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x8000CDA0: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x8000CDA4: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000CDA8: addiu       $v0, $sp, 0x24
    ctx->r2 = ADD32(ctx->r29, 0X24);
    // 0x8000CDAC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8000CDB0: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_8000CDB4:
    // 0x8000CDB4: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8000CDB8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8000CDBC: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x8000CDC0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000CDC4: bne         $at, $zero, L_8000CDB4
    if (ctx->r1 != 0) {
        // 0x8000CDC8: swc1        $f4, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
            goto L_8000CDB4;
    }
    // 0x8000CDC8: swc1        $f4, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
    // 0x8000CDCC: addiu       $v0, $sp, 0x24
    ctx->r2 = ADD32(ctx->r29, 0X24);
    // 0x8000CDD0: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8000CDD4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8000CDD8: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8000CDDC: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8000CDE0: mul.s       $f16, $f18, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x8000CDE4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8000CDE8: mul.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8000CDEC: beq         $v0, $a0, L_8000CE38
    if (ctx->r2 == ctx->r4) {
        // 0x8000CDF0: nop
    
            goto L_8000CE38;
    }
    // 0x8000CDF0: nop

L_8000CDF4:
    // 0x8000CDF4: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8000CDF8: add.s       $f8, $f16, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x8000CDFC: lwc1        $f18, 0x14($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X14);
    // 0x8000CE00: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    // 0x8000CE04: lwc1        $f8, -0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, -0X4);
    // 0x8000CE08: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8000CE0C: neg.s       $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = -ctx->f8.fl;
    // 0x8000CE10: mul.s       $f8, $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x8000CE14: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000CE18: mul.s       $f16, $f18, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x8000CE1C: add.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8000CE20: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x8000CE24: lwc1        $f8, -0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, -0X4);
    // 0x8000CE28: nop

    // 0x8000CE2C: mul.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8000CE30: bne         $v0, $a0, L_8000CDF4
    if (ctx->r2 != ctx->r4) {
        // 0x8000CE34: nop
    
            goto L_8000CDF4;
    }
    // 0x8000CE34: nop

L_8000CE38:
    // 0x8000CE38: add.s       $f8, $f16, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x8000CE3C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000CE40: swc1        $f8, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f8.u32l;
    // 0x8000CE44: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8000CE48: lwc1        $f8, -0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, -0X4);
    // 0x8000CE4C: nop

    // 0x8000CE50: neg.s       $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = -ctx->f8.fl;
    // 0x8000CE54: mul.s       $f8, $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x8000CE58: add.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8000CE5C: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x8000CE60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000CE64: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8000CE68: jr          $ra
    // 0x8000CE6C: nop

    return;
    // 0x8000CE6C: nop

;}
RECOMP_FUNC void func_8000CE70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CE70: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8000CE74: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8000CE78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000CE7C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8000CE80: jal         0x8007A640
    // 0x8000CE84: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    __sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x8000CE84: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8000CE88: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000CE8C: jal         0x8007A800
    // 0x8000CE90: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    __cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x8000CE90: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x8000CE94: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x8000CE98: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000CE9C: addiu       $v0, $sp, 0x24
    ctx->r2 = ADD32(ctx->r29, 0X24);
    // 0x8000CEA0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8000CEA4: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_8000CEA8:
    // 0x8000CEA8: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8000CEAC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8000CEB0: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x8000CEB4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000CEB8: bne         $at, $zero, L_8000CEA8
    if (ctx->r1 != 0) {
        // 0x8000CEBC: swc1        $f4, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
            goto L_8000CEA8;
    }
    // 0x8000CEBC: swc1        $f4, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
    // 0x8000CEC0: addiu       $v0, $sp, 0x24
    ctx->r2 = ADD32(ctx->r29, 0X24);
    // 0x8000CEC4: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8000CEC8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8000CECC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8000CED0: lwc1        $f18, 0x20($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X20);
    // 0x8000CED4: beq         $v0, $a0, L_8000CF14
    if (ctx->r2 == ctx->r4) {
        // 0x8000CED8: nop
    
            goto L_8000CF14;
    }
    // 0x8000CED8: nop

L_8000CEDC:
    // 0x8000CEDC: mul.s       $f16, $f18, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x8000CEE0: lwc1        $f12, -0x4($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, -0X4);
    // 0x8000CEE4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8000CEE8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000CEEC: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8000CEF0: sub.s       $f16, $f12, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f16.fl;
    // 0x8000CEF4: mul.s       $f12, $f18, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8000CEF8: swc1        $f16, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f16.u32l;
    // 0x8000CEFC: lwc1        $f16, -0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0X8);
    // 0x8000CF00: lwc1        $f18, 0x20($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X20);
    // 0x8000CF04: mul.s       $f16, $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x8000CF08: add.s       $f16, $f12, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f16.fl;
    // 0x8000CF0C: bne         $v0, $a0, L_8000CEDC
    if (ctx->r2 != ctx->r4) {
        // 0x8000CF10: swc1        $f16, 0x1C($v1)
        MEM_W(0X1C, ctx->r3) = ctx->f16.u32l;
            goto L_8000CEDC;
    }
    // 0x8000CF10: swc1        $f16, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f16.u32l;
L_8000CF14:
    // 0x8000CF14: mul.s       $f16, $f18, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x8000CF18: lwc1        $f12, -0x4($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, -0X4);
    // 0x8000CF1C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000CF20: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8000CF24: sub.s       $f16, $f12, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f16.fl;
    // 0x8000CF28: mul.s       $f12, $f18, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8000CF2C: swc1        $f16, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f16.u32l;
    // 0x8000CF30: lwc1        $f16, -0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0X4);
    // 0x8000CF34: nop

    // 0x8000CF38: mul.s       $f16, $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x8000CF3C: add.s       $f16, $f12, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f16.fl;
    // 0x8000CF40: swc1        $f16, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f16.u32l;
    // 0x8000CF44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000CF48: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8000CF4C: jr          $ra
    // 0x8000CF50: nop

    return;
    // 0x8000CF50: nop

;}
RECOMP_FUNC void func_8000CF54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CF54: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8000CF58: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8000CF5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000CF60: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8000CF64: jal         0x8007A640
    // 0x8000CF68: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    __sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x8000CF68: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8000CF6C: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000CF70: jal         0x8007A800
    // 0x8000CF74: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    __cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x8000CF74: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x8000CF78: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x8000CF7C: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000CF80: addiu       $v0, $sp, 0x24
    ctx->r2 = ADD32(ctx->r29, 0X24);
    // 0x8000CF84: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8000CF88: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_8000CF8C:
    // 0x8000CF8C: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8000CF90: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8000CF94: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x8000CF98: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000CF9C: bne         $at, $zero, L_8000CF8C
    if (ctx->r1 != 0) {
        // 0x8000CFA0: swc1        $f4, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
            goto L_8000CF8C;
    }
    // 0x8000CFA0: swc1        $f4, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
    // 0x8000CFA4: addiu       $v0, $sp, 0x24
    ctx->r2 = ADD32(ctx->r29, 0X24);
    // 0x8000CFA8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8000CFAC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8000CFB0: lwc1        $f18, 0x20($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X20);
    // 0x8000CFB4: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8000CFB8: mul.s       $f16, $f18, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x8000CFBC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8000CFC0: mul.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8000CFC4: beq         $v0, $a0, L_8000D010
    if (ctx->r2 == ctx->r4) {
        // 0x8000CFC8: nop
    
            goto L_8000D010;
    }
    // 0x8000CFC8: nop

L_8000CFCC:
    // 0x8000CFCC: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8000CFD0: add.s       $f8, $f16, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x8000CFD4: lwc1        $f18, 0x24($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X24);
    // 0x8000CFD8: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
    // 0x8000CFDC: lwc1        $f8, -0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, -0X4);
    // 0x8000CFE0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8000CFE4: neg.s       $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = -ctx->f8.fl;
    // 0x8000CFE8: mul.s       $f8, $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x8000CFEC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000CFF0: mul.s       $f16, $f18, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x8000CFF4: add.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8000CFF8: swc1        $f8, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f8.u32l;
    // 0x8000CFFC: lwc1        $f8, -0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, -0X4);
    // 0x8000D000: nop

    // 0x8000D004: mul.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8000D008: bne         $v0, $a0, L_8000CFCC
    if (ctx->r2 != ctx->r4) {
        // 0x8000D00C: nop
    
            goto L_8000CFCC;
    }
    // 0x8000D00C: nop

L_8000D010:
    // 0x8000D010: add.s       $f8, $f16, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x8000D014: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000D018: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x8000D01C: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8000D020: lwc1        $f8, -0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, -0X4);
    // 0x8000D024: nop

    // 0x8000D028: neg.s       $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = -ctx->f8.fl;
    // 0x8000D02C: mul.s       $f8, $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x8000D030: add.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8000D034: swc1        $f8, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f8.u32l;
    // 0x8000D038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000D03C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8000D040: jr          $ra
    // 0x8000D044: nop

    return;
    // 0x8000D044: nop

;}
RECOMP_FUNC void func_8000D048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D048: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8000D04C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8000D050: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8000D054: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x8000D058: addiu       $t4, $sp, 0x3C
    ctx->r12 = ADD32(ctx->r29, 0X3C);
    // 0x8000D05C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8000D060: addiu       $t3, $zero, 0xC
    ctx->r11 = ADD32(0, 0XC);
    // 0x8000D064: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
L_8000D068:
    // 0x8000D068: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8000D06C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
L_8000D070:
    // 0x8000D070: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x8000D074: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000D078: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x8000D07C: addu        $t1, $t0, $a0
    ctx->r9 = ADD32(ctx->r8, ctx->r4);
L_8000D080:
    // 0x8000D080: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8000D084: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8000D088: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8000D08C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8000D090: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8000D094: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x8000D098: addiu       $t1, $t1, 0x10
    ctx->r9 = ADD32(ctx->r9, 0X10);
    // 0x8000D09C: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8000D0A0: bne         $v0, $t2, L_8000D080
    if (ctx->r2 != ctx->r10) {
        // 0x8000D0A4: swc1        $f16, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
            goto L_8000D080;
    }
    // 0x8000D0A4: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
    // 0x8000D0A8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8000D0AC: bne         $a0, $t3, L_8000D070
    if (ctx->r4 != ctx->r11) {
        // 0x8000D0B0: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_8000D070;
    }
    // 0x8000D0B0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8000D0B4: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x8000D0B8: sltu        $at, $v1, $t4
    ctx->r1 = ctx->r3 < ctx->r12 ? 1 : 0;
    // 0x8000D0BC: bne         $at, $zero, L_8000D068
    if (ctx->r1 != 0) {
        // 0x8000D0C0: addiu       $a2, $a2, 0xC
        ctx->r6 = ADD32(ctx->r6, 0XC);
            goto L_8000D068;
    }
    // 0x8000D0C0: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x8000D0C4: addiu       $v1, $sp, 0x18
    ctx->r3 = ADD32(ctx->r29, 0X18);
    // 0x8000D0C8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8000D0CC: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
L_8000D0D0:
    // 0x8000D0D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000D0D4: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x8000D0D8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
L_8000D0DC:
    // 0x8000D0DC: lwc1        $f18, 0x0($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8000D0E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8000D0E4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8000D0E8: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8000D0EC: bne         $v0, $t2, L_8000D0DC
    if (ctx->r2 != ctx->r10) {
        // 0x8000D0F0: swc1        $f18, -0x4($a2)
        MEM_W(-0X4, ctx->r6) = ctx->f18.u32l;
            goto L_8000D0DC;
    }
    // 0x8000D0F0: swc1        $f18, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->f18.u32l;
    // 0x8000D0F4: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x8000D0F8: bne         $v1, $a3, L_8000D0D0
    if (ctx->r3 != ctx->r7) {
        // 0x8000D0FC: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_8000D0D0;
    }
    // 0x8000D0FC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8000D100: jr          $ra
    // 0x8000D104: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8000D104: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8000D108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D108: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8000D10C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8000D110: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x8000D114: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000D118: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8000D11C: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x8000D120: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x8000D124: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x8000D128: jal         0x8007A640
    // 0x8000D12C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    __sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x8000D12C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x8000D130: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x8000D134: jal         0x8007A800
    // 0x8000D138: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    __cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x8000D138: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x8000D13C: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8000D140: jal         0x8007A640
    // 0x8000D144: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    __sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x8000D144: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_2:
    // 0x8000D148: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8000D14C: jal         0x8007A800
    // 0x8000D150: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    __cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x8000D150: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x8000D154: lwc1        $f12, 0x74($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8000D158: jal         0x8007A640
    // 0x8000D15C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    __sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x8000D15C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x8000D160: lwc1        $f12, 0x74($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8000D164: jal         0x8007A800
    // 0x8000D168: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    __cosf_recomp(rdram, ctx);
        goto after_5;
    // 0x8000D168: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x8000D16C: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000D170: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8000D174: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8000D178: mul.s       $f12, $f4, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8000D17C: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000D180: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x8000D184: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x8000D188: mul.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8000D18C: nop

    // 0x8000D190: mul.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8000D194: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8000D198: mul.s       $f6, $f20, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8000D19C: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x8000D1A0: neg.s       $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = -ctx->f0.fl;
    // 0x8000D1A4: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8000D1A8: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x8000D1AC: mul.s       $f6, $f14, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x8000D1B0: nop

    // 0x8000D1B4: mul.s       $f16, $f0, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8000D1B8: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8000D1BC: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x8000D1C0: mul.s       $f10, $f2, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8000D1C4: nop

    // 0x8000D1C8: mul.s       $f6, $f14, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x8000D1CC: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x8000D1D0: mul.s       $f10, $f20, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8000D1D4: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x8000D1D8: mul.s       $f6, $f14, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x8000D1DC: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x8000D1E0: mul.s       $f8, $f2, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8000D1E4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8000D1E8: mul.s       $f6, $f20, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x8000D1EC: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x8000D1F0: neg.s       $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = -ctx->f4.fl;
    // 0x8000D1F4: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x8000D1F8: mul.s       $f10, $f20, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8000D1FC: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x8000D200: jal         0x8000D048
    // 0x8000D204: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    func_8000D048(rdram, ctx);
        goto after_6;
    // 0x8000D204: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x8000D208: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000D20C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8000D210: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8000D214: jr          $ra
    // 0x8000D218: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8000D218: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8000D21C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D21C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8000D220: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8000D224: mtc1        $a1, $f22
    ctx->f22.u32l = ctx->r5;
    // 0x8000D228: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000D22C: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8000D230: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8000D234: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8000D238: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x8000D23C: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x8000D240: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x8000D244: jal         0x8007A640
    // 0x8000D248: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    __sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x8000D248: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_0:
    // 0x8000D24C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8000D250: jal         0x8007A800
    // 0x8000D254: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    __cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x8000D254: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_1:
    // 0x8000D258: lwc1        $f12, 0x78($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8000D25C: jal         0x8007A640
    // 0x8000D260: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    __sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x8000D260: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_2:
    // 0x8000D264: lwc1        $f12, 0x78($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8000D268: jal         0x8007A800
    // 0x8000D26C: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    __cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x8000D26C: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x8000D270: lwc1        $f12, 0x7C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8000D274: jal         0x8007A640
    // 0x8000D278: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    __sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x8000D278: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x8000D27C: lwc1        $f12, 0x7C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8000D280: jal         0x8007A800
    // 0x8000D284: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    __cosf_recomp(rdram, ctx);
        goto after_5;
    // 0x8000D284: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x8000D288: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000D28C: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8000D290: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8000D294: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000D298: neg.s       $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = -ctx->f18.fl;
    // 0x8000D29C: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x8000D2A0: mul.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8000D2A4: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x8000D2A8: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x8000D2AC: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x8000D2B0: mul.s       $f8, $f20, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x8000D2B4: nop

    // 0x8000D2B8: mul.s       $f10, $f22, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f16.fl);
    // 0x8000D2BC: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8000D2C0: neg.s       $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = -ctx->f22.fl;
    // 0x8000D2C4: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8000D2C8: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x8000D2CC: mul.s       $f4, $f20, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8000D2D0: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8000D2D4: mul.s       $f10, $f14, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x8000D2D8: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x8000D2DC: mul.s       $f12, $f6, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8000D2E0: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x8000D2E4: mul.s       $f4, $f22, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x8000D2E8: nop

    // 0x8000D2EC: mul.s       $f8, $f20, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f12.fl);
    // 0x8000D2F0: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8000D2F4: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8000D2F8: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x8000D2FC: mul.s       $f8, $f22, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f12.fl);
    // 0x8000D300: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8000D304: mul.s       $f4, $f14, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x8000D308: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x8000D30C: mul.s       $f8, $f22, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f18.fl);
    // 0x8000D310: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x8000D314: jal         0x8000D048
    // 0x8000D318: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    func_8000D048(rdram, ctx);
        goto after_6;
    // 0x8000D318: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x8000D31C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8000D320: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8000D324: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8000D328: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8000D32C: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000D330: jr          $ra
    // 0x8000D334: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8000D334: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_8000D338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D338: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8000D33C: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8000D340: mtc1        $a1, $f22
    ctx->f22.u32l = ctx->r5;
    // 0x8000D344: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000D348: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8000D34C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8000D350: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8000D354: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x8000D358: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x8000D35C: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x8000D360: jal         0x8007A640
    // 0x8000D364: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    __sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x8000D364: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_0:
    // 0x8000D368: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8000D36C: jal         0x8007A800
    // 0x8000D370: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    __cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x8000D370: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_1:
    // 0x8000D374: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8000D378: jal         0x8007A640
    // 0x8000D37C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    __sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x8000D37C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_2:
    // 0x8000D380: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8000D384: jal         0x8007A800
    // 0x8000D388: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    __cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x8000D388: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x8000D38C: lwc1        $f12, 0x74($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8000D390: jal         0x8007A640
    // 0x8000D394: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    __sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x8000D394: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x8000D398: lwc1        $f12, 0x74($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8000D39C: jal         0x8007A800
    // 0x8000D3A0: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    __cosf_recomp(rdram, ctx);
        goto after_5;
    // 0x8000D3A0: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x8000D3A4: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000D3A8: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000D3AC: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8000D3B0: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000D3B4: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x8000D3B8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x8000D3BC: mul.s       $f6, $f16, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x8000D3C0: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x8000D3C4: neg.s       $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = -ctx->f18.fl;
    // 0x8000D3C8: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x8000D3CC: mul.s       $f12, $f20, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x8000D3D0: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x8000D3D4: mul.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8000D3D8: nop

    // 0x8000D3DC: mul.s       $f4, $f22, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x8000D3E0: nop

    // 0x8000D3E4: mul.s       $f8, $f12, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x8000D3E8: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8000D3EC: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x8000D3F0: mul.s       $f10, $f22, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x8000D3F4: nop

    // 0x8000D3F8: mul.s       $f6, $f20, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8000D3FC: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8000D400: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x8000D404: mul.s       $f14, $f22, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f22.fl, ctx->f18.fl);
    // 0x8000D408: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x8000D40C: mul.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8000D410: nop

    // 0x8000D414: mul.s       $f10, $f20, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x8000D418: nop

    // 0x8000D41C: mul.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x8000D420: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8000D424: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x8000D428: mul.s       $f8, $f20, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8000D42C: nop

    // 0x8000D430: mul.s       $f4, $f22, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f16.fl);
    // 0x8000D434: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8000D438: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x8000D43C: jal         0x8000D048
    // 0x8000D440: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    func_8000D048(rdram, ctx);
        goto after_6;
    // 0x8000D440: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x8000D444: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8000D448: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8000D44C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8000D450: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8000D454: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000D458: jr          $ra
    // 0x8000D45C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8000D45C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8000D460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D460: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8000D464: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000D468: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x8000D46C: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x8000D470: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x8000D474: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x8000D478: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    // 0x8000D47C: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    // 0x8000D480: jal         0x8007A5B0
    // 0x8000D484: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    guNormalize(rdram, ctx);
        goto after_0;
    // 0x8000D484: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    after_0:
    // 0x8000D488: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8000D48C: jal         0x8007A640
    // 0x8000D490: nop

    __sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x8000D490: nop

    after_1:
    // 0x8000D494: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8000D498: jal         0x8007A800
    // 0x8000D49C: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    __cosf_recomp(rdram, ctx);
        goto after_2;
    // 0x8000D49C: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x8000D4A0: lwc1        $f2, 0x70($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8000D4A4: lwc1        $f12, 0x74($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8000D4A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000D4AC: mul.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8000D4B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000D4B4: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x8000D4B8: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x8000D4BC: sub.s       $f14, $f8, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x8000D4C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000D4C4: mul.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8000D4C8: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x8000D4CC: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8000D4D0: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x8000D4D4: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x8000D4D8: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x8000D4DC: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000D4E0: nop

    // 0x8000D4E4: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8000D4E8: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8000D4EC: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8000D4F0: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8000D4F4: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x8000D4F8: mul.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x8000D4FC: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8000D500: nop

    // 0x8000D504: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x8000D508: mul.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8000D50C: nop

    // 0x8000D510: mul.s       $f10, $f2, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x8000D514: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x8000D518: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000D51C: nop

    // 0x8000D520: sub.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x8000D524: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x8000D528: add.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8000D52C: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8000D530: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x8000D534: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000D538: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x8000D53C: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000D540: nop

    // 0x8000D544: sub.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8000D548: mul.s       $f6, $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8000D54C: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8000D550: mul.s       $f10, $f12, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x8000D554: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x8000D558: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000D55C: mul.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8000D560: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x8000D564: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000D568: mul.s       $f18, $f6, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x8000D56C: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8000D570: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000D574: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x8000D578: sub.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x8000D57C: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8000D580: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x8000D584: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000D588: nop

    // 0x8000D58C: sub.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8000D590: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x8000D594: mul.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8000D598: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8000D59C: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000D5A0: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8000D5A4: mul.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8000D5A8: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x8000D5AC: sub.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8000D5B0: add.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x8000D5B4: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x8000D5B8: jal         0x8000D048
    // 0x8000D5BC: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    func_8000D048(rdram, ctx);
        goto after_3;
    // 0x8000D5BC: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x8000D5C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000D5C4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x8000D5C8: jr          $ra
    // 0x8000D5CC: nop

    return;
    // 0x8000D5CC: nop

;}
RECOMP_FUNC void func_8000D5D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D5D0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8000D5D4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8000D5D8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8000D5DC: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x8000D5E0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8000D5E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000D5E8: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8000D5EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8000D5F0: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8000D5F4: lwc1        $f8, 0x20($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X20);
    // 0x8000D5F8: mul.s       $f18, $f4, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8000D5FC: beq         $v0, $a0, L_8000D634
    if (ctx->r2 == ctx->r4) {
        // 0x8000D600: nop
    
            goto L_8000D634;
    }
    // 0x8000D600: nop

L_8000D604:
    // 0x8000D604: mul.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8000D608: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8000D60C: lwc1        $f10, 0x14($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X14);
    // 0x8000D610: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8000D614: mul.s       $f2, $f8, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8000D618: lwc1        $f8, 0x24($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X24);
    // 0x8000D61C: swc1        $f18, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
    // 0x8000D620: swc1        $f6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
    // 0x8000D624: mul.s       $f18, $f4, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8000D628: swc1        $f2, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f2.u32l;
    // 0x8000D62C: bne         $v0, $a0, L_8000D604
    if (ctx->r2 != ctx->r4) {
        // 0x8000D630: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8000D604;
    }
    // 0x8000D630: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_8000D634:
    // 0x8000D634: mul.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8000D638: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000D63C: swc1        $f18, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f18.u32l;
    // 0x8000D640: mul.s       $f2, $f8, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8000D644: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x8000D648: swc1        $f2, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f2.u32l;
    // 0x8000D64C: jr          $ra
    // 0x8000D650: nop

    return;
    // 0x8000D650: nop

;}
RECOMP_FUNC void func_8000D654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D654: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8000D658: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8000D65C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8000D660: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8000D664: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8000D668: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x8000D66C: lwc1        $f4, 0x20($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8000D670: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x8000D674: nop

    // 0x8000D678: mul.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8000D67C: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8000D680: lwc1        $f10, 0x30($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X30);
    // 0x8000D684: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x8000D688: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8000D68C: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8000D690: lwc1        $f10, 0x14($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8000D694: mul.s       $f8, $f18, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x8000D698: lwc1        $f18, 0x24($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8000D69C: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
    // 0x8000D6A0: mul.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x8000D6A4: nop

    // 0x8000D6A8: mul.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x8000D6AC: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8000D6B0: lwc1        $f6, 0x34($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X34);
    // 0x8000D6B4: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8000D6B8: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8000D6BC: add.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8000D6C0: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8000D6C4: mul.s       $f10, $f4, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8000D6C8: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8000D6CC: swc1        $f18, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f18.u32l;
    // 0x8000D6D0: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x8000D6D4: nop

    // 0x8000D6D8: mul.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8000D6DC: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8000D6E0: lwc1        $f8, 0x38($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X38);
    // 0x8000D6E4: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x8000D6E8: lwc1        $f18, 0xC($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8000D6EC: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8000D6F0: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x8000D6F4: mul.s       $f6, $f18, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x8000D6F8: lwc1        $f18, 0x2C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x8000D6FC: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
    // 0x8000D700: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x8000D704: nop

    // 0x8000D708: mul.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x8000D70C: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8000D710: lwc1        $f10, 0x3C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x8000D714: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8000D718: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8000D71C: jr          $ra
    // 0x8000D720: swc1        $f18, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f18.u32l;
    return;
    // 0x8000D720: swc1        $f18, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_8000D730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D730: lhu         $a1, 0x0($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X0);
    // 0x8000D734: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8000D738: andi        $t6, $a1, 0x8000
    ctx->r14 = ctx->r5 & 0X8000;
    // 0x8000D73C: beq         $t6, $zero, L_8000D754
    if (ctx->r14 == 0) {
        // 0x8000D740: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8000D754;
    }
    // 0x8000D740: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000D744: andi        $t7, $a1, 0xBFFF
    ctx->r15 = ctx->r5 & 0XBFFF;
    // 0x8000D748: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x8000D74C: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x8000D750: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8000D754:
    // 0x8000D754: lhu         $a1, 0x38($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X38);
    // 0x8000D758: addiu       $a3, $zero, -0x4001
    ctx->r7 = ADD32(0, -0X4001);
    // 0x8000D75C: andi        $t8, $a1, 0x8000
    ctx->r24 = ctx->r5 & 0X8000;
    // 0x8000D760: beq         $t8, $zero, L_8000D778
    if (ctx->r24 == 0) {
        // 0x8000D764: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_8000D778;
    }
    // 0x8000D764: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8000D768: sh          $v1, 0x3A($v0)
    MEM_H(0X3A, ctx->r2) = ctx->r3;
    // 0x8000D76C: and         $t9, $a1, $a3
    ctx->r25 = ctx->r5 & ctx->r7;
    // 0x8000D770: sh          $t9, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r25;
    // 0x8000D774: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8000D778:
    // 0x8000D778: lhu         $a1, 0x70($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X70);
    // 0x8000D77C: nop

    // 0x8000D780: andi        $t0, $a1, 0x8000
    ctx->r8 = ctx->r5 & 0X8000;
    // 0x8000D784: beq         $t0, $zero, L_8000D798
    if (ctx->r8 == 0) {
        // 0x8000D788: and         $t1, $a1, $a3
        ctx->r9 = ctx->r5 & ctx->r7;
            goto L_8000D798;
    }
    // 0x8000D788: and         $t1, $a1, $a3
    ctx->r9 = ctx->r5 & ctx->r7;
    // 0x8000D78C: sh          $v1, 0x72($v0)
    MEM_H(0X72, ctx->r2) = ctx->r3;
    // 0x8000D790: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8000D794: sh          $t1, 0x70($v0)
    MEM_H(0X70, ctx->r2) = ctx->r9;
L_8000D798:
    // 0x8000D798: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8000D79C: sll         $t2, $v0, 3
    ctx->r10 = S32(ctx->r2 << 3);
    // 0x8000D7A0: subu        $t2, $t2, $v0
    ctx->r10 = SUB32(ctx->r10, ctx->r2);
    // 0x8000D7A4: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8000D7A8: addu        $a1, $a0, $t2
    ctx->r5 = ADD32(ctx->r4, ctx->r10);
    // 0x8000D7AC: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x8000D7B0: nop

    // 0x8000D7B4: andi        $t3, $a2, 0x8000
    ctx->r11 = ctx->r6 & 0X8000;
    // 0x8000D7B8: beq         $t3, $zero, L_8000D7CC
    if (ctx->r11 == 0) {
        // 0x8000D7BC: and         $t4, $a2, $a3
        ctx->r12 = ctx->r6 & ctx->r7;
            goto L_8000D7CC;
    }
    // 0x8000D7BC: and         $t4, $a2, $a3
    ctx->r12 = ctx->r6 & ctx->r7;
    // 0x8000D7C0: sh          $v1, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r3;
    // 0x8000D7C4: sh          $t4, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r12;
    // 0x8000D7C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8000D7CC:
    // 0x8000D7CC: lhu         $v0, 0x38($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X38);
    // 0x8000D7D0: nop

    // 0x8000D7D4: andi        $t5, $v0, 0x8000
    ctx->r13 = ctx->r2 & 0X8000;
    // 0x8000D7D8: beq         $t5, $zero, L_8000D7EC
    if (ctx->r13 == 0) {
        // 0x8000D7DC: and         $t6, $v0, $a3
        ctx->r14 = ctx->r2 & ctx->r7;
            goto L_8000D7EC;
    }
    // 0x8000D7DC: and         $t6, $v0, $a3
    ctx->r14 = ctx->r2 & ctx->r7;
    // 0x8000D7E0: sh          $v1, 0x3A($a1)
    MEM_H(0X3A, ctx->r5) = ctx->r3;
    // 0x8000D7E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8000D7E8: sh          $t6, 0x38($a1)
    MEM_H(0X38, ctx->r5) = ctx->r14;
L_8000D7EC:
    // 0x8000D7EC: lhu         $v0, 0x70($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X70);
    // 0x8000D7F0: nop

    // 0x8000D7F4: andi        $t7, $v0, 0x8000
    ctx->r15 = ctx->r2 & 0X8000;
    // 0x8000D7F8: beq         $t7, $zero, L_8000D80C
    if (ctx->r15 == 0) {
        // 0x8000D7FC: and         $t8, $v0, $a3
        ctx->r24 = ctx->r2 & ctx->r7;
            goto L_8000D80C;
    }
    // 0x8000D7FC: and         $t8, $v0, $a3
    ctx->r24 = ctx->r2 & ctx->r7;
    // 0x8000D800: sh          $v1, 0x72($a1)
    MEM_H(0X72, ctx->r5) = ctx->r3;
    // 0x8000D804: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8000D808: sh          $t8, 0x70($a1)
    MEM_H(0X70, ctx->r5) = ctx->r24;
L_8000D80C:
    // 0x8000D80C: lhu         $v0, 0xA8($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XA8);
    // 0x8000D810: nop

    // 0x8000D814: andi        $t9, $v0, 0x8000
    ctx->r25 = ctx->r2 & 0X8000;
    // 0x8000D818: beq         $t9, $zero, L_8000D82C
    if (ctx->r25 == 0) {
        // 0x8000D81C: and         $t0, $v0, $a3
        ctx->r8 = ctx->r2 & ctx->r7;
            goto L_8000D82C;
    }
    // 0x8000D81C: and         $t0, $v0, $a3
    ctx->r8 = ctx->r2 & ctx->r7;
    // 0x8000D820: sh          $v1, 0xAA($a1)
    MEM_H(0XAA, ctx->r5) = ctx->r3;
    // 0x8000D824: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8000D828: sh          $t0, 0xA8($a1)
    MEM_H(0XA8, ctx->r5) = ctx->r8;
L_8000D82C:
    // 0x8000D82C: sb          $zero, 0x193($a0)
    MEM_B(0X193, ctx->r4) = 0;
    // 0x8000D830: sb          $zero, 0x192($a0)
    MEM_B(0X192, ctx->r4) = 0;
    // 0x8000D834: sw          $zero, 0x6278($at)
    MEM_W(0X6278, ctx->r1) = 0;
    // 0x8000D838: sh          $v1, 0x190($a0)
    MEM_H(0X190, ctx->r4) = ctx->r3;
    // 0x8000D83C: jr          $ra
    // 0x8000D840: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    return;
    // 0x8000D840: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
;}
RECOMP_FUNC void func_8000D844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D844: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000D848: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8000D84C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000D850: sw          $a1, 0x6274($at)
    MEM_W(0X6274, ctx->r1) = ctx->r5;
    // 0x8000D854: lhu         $t7, 0x60($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X60);
    // 0x8000D858: lhu         $t6, 0x62($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X62);
    // 0x8000D85C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8000D860: beq         $t6, $t7, L_8000D948
    if (ctx->r14 == ctx->r15) {
        // 0x8000D864: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_8000D948;
    }
    // 0x8000D864: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8000D868: lui         $t8, 0xDB08
    ctx->r24 = S32(0XDB08 << 16);
    // 0x8000D86C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8000D870: lhu         $t9, 0x62($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X62);
    // 0x8000D874: lhu         $v0, 0x60($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X60);
    // 0x8000D878: addiu       $a2, $a0, 0x8
    ctx->r6 = ADD32(ctx->r4, 0X8);
    // 0x8000D87C: lui         $t0, 0x1
    ctx->r8 = S32(0X1 << 16);
    // 0x8000D880: ori         $t0, $t0, 0xF400
    ctx->r8 = ctx->r8 | 0XF400;
    // 0x8000D884: subu        $a0, $t9, $v0
    ctx->r4 = SUB32(ctx->r25, ctx->r2);
    // 0x8000D888: div         $zero, $t0, $a0
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r4)));
    // 0x8000D88C: negu        $t4, $v0
    ctx->r12 = SUB32(0, ctx->r2);
    // 0x8000D890: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x8000D894: addu        $t6, $t5, $t0
    ctx->r14 = ADD32(ctx->r13, ctx->r8);
    // 0x8000D898: bne         $a0, $zero, L_8000D8A4
    if (ctx->r4 != 0) {
        // 0x8000D89C: nop
    
            goto L_8000D8A4;
    }
    // 0x8000D89C: nop

    // 0x8000D8A0: break       7
    do_break(2147539104);
L_8000D8A4:
    // 0x8000D8A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8000D8A8: bne         $a0, $at, L_8000D8BC
    if (ctx->r4 != ctx->r1) {
        // 0x8000D8AC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8000D8BC;
    }
    // 0x8000D8AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000D8B0: bne         $t0, $at, L_8000D8BC
    if (ctx->r8 != ctx->r1) {
        // 0x8000D8B4: nop
    
            goto L_8000D8BC;
    }
    // 0x8000D8B4: nop

    // 0x8000D8B8: break       6
    do_break(2147539128);
L_8000D8BC:
    // 0x8000D8BC: addu        $at, $t0, $zero
    ctx->r1 = ADD32(ctx->r8, 0);
    // 0x8000D8C0: lui         $t0, 0xF800
    ctx->r8 = S32(0XF800 << 16);
    // 0x8000D8C4: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x8000D8C8: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8000D8CC: mflo        $t1
    ctx->r9 = lo;
    // 0x8000D8D0: or          $t2, $t1, $zero
    ctx->r10 = ctx->r9 | 0;
    // 0x8000D8D4: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x8000D8D8: div         $zero, $t6, $a0
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r4)));
    // 0x8000D8DC: bne         $a0, $zero, L_8000D8E8
    if (ctx->r4 != 0) {
        // 0x8000D8E0: nop
    
            goto L_8000D8E8;
    }
    // 0x8000D8E0: nop

    // 0x8000D8E4: break       7
    do_break(2147539172);
L_8000D8E8:
    // 0x8000D8E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8000D8EC: bne         $a0, $at, L_8000D900
    if (ctx->r4 != ctx->r1) {
        // 0x8000D8F0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8000D900;
    }
    // 0x8000D8F0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000D8F4: bne         $t6, $at, L_8000D900
    if (ctx->r14 != ctx->r1) {
        // 0x8000D8F8: nop
    
            goto L_8000D900;
    }
    // 0x8000D8F8: nop

    // 0x8000D8FC: break       6
    do_break(2147539196);
L_8000D900:
    // 0x8000D900: mflo        $t7
    ctx->r15 = lo;
    // 0x8000D904: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x8000D908: or          $t9, $t3, $t8
    ctx->r25 = ctx->r11 | ctx->r24;
    // 0x8000D90C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8000D910: sw          $t0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r8;
    // 0x8000D914: lbu         $t2, 0x64($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X64);
    // 0x8000D918: lbu         $t8, 0x66($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X66);
    // 0x8000D91C: lbu         $t6, 0x65($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X65);
    // 0x8000D920: sll         $t4, $t2, 24
    ctx->r12 = S32(ctx->r10 << 24);
    // 0x8000D924: lbu         $t2, 0x67($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X67);
    // 0x8000D928: or          $t9, $t8, $zero
    ctx->r25 = ctx->r24 | 0;
    // 0x8000D92C: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x8000D930: or          $t3, $t4, $t7
    ctx->r11 = ctx->r12 | ctx->r15;
    // 0x8000D934: sll         $t0, $t9, 8
    ctx->r8 = S32(ctx->r25 << 8);
    // 0x8000D938: or          $t1, $t3, $t0
    ctx->r9 = ctx->r11 | ctx->r8;
    // 0x8000D93C: or          $t5, $t2, $zero
    ctx->r13 = ctx->r10 | 0;
    // 0x8000D940: or          $t6, $t1, $t5
    ctx->r14 = ctx->r9 | ctx->r13;
    // 0x8000D944: sw          $t6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r14;
L_8000D948:
    // 0x8000D948: addiu       $a0, $a1, 0x9C
    ctx->r4 = ADD32(ctx->r5, 0X9C);
    // 0x8000D94C: jal         0x8000D730
    // 0x8000D950: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8000D730(rdram, ctx);
        goto after_0;
    // 0x8000D950: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8000D954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000D958: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8000D95C: jr          $ra
    // 0x8000D960: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8000D960: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8000D964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D964: lhu         $t6, 0xA($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0XA);
    // 0x8000D968: lui         $t2, 0xDB06
    ctx->r10 = S32(0XDB06 << 16);
    // 0x8000D96C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000D970: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x8000D974: or          $t9, $t8, $t2
    ctx->r25 = ctx->r24 | ctx->r10;
    // 0x8000D978: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000D97C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000D980: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
    // 0x8000D984: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000D988: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x8000D98C: lhu         $v1, 0x2C($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X2C);
    // 0x8000D990: lhu         $a3, 0x2E($a1)
    ctx->r7 = MEM_HU(ctx->r5, 0X2E);
    // 0x8000D994: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8000D998: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
L_8000D99C:
    // 0x8000D99C: lw          $t4, 0xC($t1)
    ctx->r12 = MEM_W(ctx->r9, 0XC);
    // 0x8000D9A0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000D9A4: beq         $t4, $zero, L_8000D9C8
    if (ctx->r12 == 0) {
        // 0x8000D9A8: addu        $t5, $v1, $t0
        ctx->r13 = ADD32(ctx->r3, ctx->r8);
            goto L_8000D9C8;
    }
    // 0x8000D9A8: addu        $t5, $v1, $t0
    ctx->r13 = ADD32(ctx->r3, ctx->r8);
    // 0x8000D9AC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8000D9B0: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x8000D9B4: or          $t8, $t7, $t2
    ctx->r24 = ctx->r15 | ctx->r10;
    // 0x8000D9B8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000D9BC: lw          $t9, 0xC($t1)
    ctx->r25 = MEM_W(ctx->r9, 0XC);
    // 0x8000D9C0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000D9C4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
L_8000D9C8:
    // 0x8000D9C8: lw          $t3, 0x1C($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X1C);
    // 0x8000D9CC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000D9D0: beq         $t3, $zero, L_8000D9F4
    if (ctx->r11 == 0) {
        // 0x8000D9D4: addu        $t4, $a3, $t0
        ctx->r12 = ADD32(ctx->r7, ctx->r8);
            goto L_8000D9F4;
    }
    // 0x8000D9D4: addu        $t4, $a3, $t0
    ctx->r12 = ADD32(ctx->r7, ctx->r8);
    // 0x8000D9D8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8000D9DC: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x8000D9E0: or          $t7, $t6, $t2
    ctx->r15 = ctx->r14 | ctx->r10;
    // 0x8000D9E4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000D9E8: lw          $t8, 0x1C($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X1C);
    // 0x8000D9EC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000D9F0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
L_8000D9F4:
    // 0x8000D9F4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8000D9F8: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x8000D9FC: bne         $at, $zero, L_8000D99C
    if (ctx->r1 != 0) {
        // 0x8000DA00: addiu       $t1, $t1, 0x4
        ctx->r9 = ADD32(ctx->r9, 0X4);
            goto L_8000D99C;
    }
    // 0x8000DA00: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x8000DA04: beq         $a2, $zero, L_8000DB3C
    if (ctx->r6 == 0) {
        // 0x8000DA08: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8000DB3C;
    }
    // 0x8000DA08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000DA0C: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x8000DA10: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
L_8000DA14:
    // 0x8000DA14: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x8000DA18: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8000DA1C: beq         $a1, $zero, L_8000DAA4
    if (ctx->r5 == 0) {
        // 0x8000DA20: nop
    
            goto L_8000DAA4;
    }
    // 0x8000DA20: nop

    // 0x8000DA24: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x8000DA28: nop

    // 0x8000DA2C: beq         $t9, $zero, L_8000DA68
    if (ctx->r25 == 0) {
        // 0x8000DA30: nop
    
            goto L_8000DA68;
    }
    // 0x8000DA30: nop

    // 0x8000DA34: lbu         $t3, 0xC($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0XC);
    // 0x8000DA38: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8000DA3C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8000DA40: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x8000DA44: or          $t6, $t5, $t2
    ctx->r14 = ctx->r13 | ctx->r10;
    // 0x8000DA48: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x8000DA4C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8000DA50: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000DA54: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x8000DA58: nop

    // 0x8000DA5C: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x8000DA60: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x8000DA64: nop

L_8000DA68:
    // 0x8000DA68: lw          $t9, 0x8($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X8);
    // 0x8000DA6C: nop

    // 0x8000DA70: beq         $t9, $zero, L_8000DAA4
    if (ctx->r25 == 0) {
        // 0x8000DA74: nop
    
            goto L_8000DAA4;
    }
    // 0x8000DA74: nop

    // 0x8000DA78: lbu         $t3, 0xD($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0XD);
    // 0x8000DA7C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8000DA80: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8000DA84: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x8000DA88: or          $t6, $t5, $t2
    ctx->r14 = ctx->r13 | ctx->r10;
    // 0x8000DA8C: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x8000DA90: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8000DA94: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000DA98: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8000DA9C: nop

    // 0x8000DAA0: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
L_8000DAA4:
    // 0x8000DAA4: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x8000DAA8: nop

    // 0x8000DAAC: beq         $a1, $zero, L_8000DB34
    if (ctx->r5 == 0) {
        // 0x8000DAB0: nop
    
            goto L_8000DB34;
    }
    // 0x8000DAB0: nop

    // 0x8000DAB4: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x8000DAB8: nop

    // 0x8000DABC: beq         $t9, $zero, L_8000DAF8
    if (ctx->r25 == 0) {
        // 0x8000DAC0: nop
    
            goto L_8000DAF8;
    }
    // 0x8000DAC0: nop

    // 0x8000DAC4: lbu         $t3, 0xC($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0XC);
    // 0x8000DAC8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8000DACC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8000DAD0: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x8000DAD4: or          $t6, $t5, $t2
    ctx->r14 = ctx->r13 | ctx->r10;
    // 0x8000DAD8: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x8000DADC: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x8000DAE0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000DAE4: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x8000DAE8: nop

    // 0x8000DAEC: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x8000DAF0: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x8000DAF4: nop

L_8000DAF8:
    // 0x8000DAF8: lw          $t9, 0x8($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X8);
    // 0x8000DAFC: nop

    // 0x8000DB00: beq         $t9, $zero, L_8000DB34
    if (ctx->r25 == 0) {
        // 0x8000DB04: nop
    
            goto L_8000DB34;
    }
    // 0x8000DB04: nop

    // 0x8000DB08: lbu         $t3, 0xD($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0XD);
    // 0x8000DB0C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8000DB10: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8000DB14: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x8000DB18: or          $t6, $t5, $t2
    ctx->r14 = ctx->r13 | ctx->r10;
    // 0x8000DB1C: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x8000DB20: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x8000DB24: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000DB28: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8000DB2C: nop

    // 0x8000DB30: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
L_8000DB34:
    // 0x8000DB34: bne         $v0, $a3, L_8000DA14
    if (ctx->r2 != ctx->r7) {
        // 0x8000DB38: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_8000DA14;
    }
    // 0x8000DB38: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_8000DB3C:
    // 0x8000DB3C: jr          $ra
    // 0x8000DB40: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8000DB40: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_8000DB44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000DB44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000DB48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000DB4C: jal         0x8000D964
    // 0x8000DB50: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8000D964(rdram, ctx);
        goto after_0;
    // 0x8000DB50: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8000DB54: lui         $t6, 0xDE00
    ctx->r14 = S32(0XDE00 << 16);
    // 0x8000DB58: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8000DB5C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DB60: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8000DB64: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8000DB68: nop

    // 0x8000DB6C: sw          $t8, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r24;
    // 0x8000DB70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000DB74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000DB78: jr          $ra
    // 0x8000DB7C: nop

    return;
    // 0x8000DB7C: nop

;}
RECOMP_FUNC void func_8000DB80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000DB80: sltiu       $at, $a1, 0x8
    ctx->r1 = ctx->r5 < 0X8 ? 1 : 0;
    // 0x8000DB84: beq         $at, $zero, L_8000DD20
    if (ctx->r1 == 0) {
        // 0x8000DB88: sll         $t6, $a1, 2
        ctx->r14 = S32(ctx->r5 << 2);
            goto L_8000DD20;
    }
    // 0x8000DB88: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8000DB8C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000DB90: addu        $at, $at, $t6
    gpr jr_addend_8000DB9C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8000DB94: lw          $t6, 0x4DD0($at)
    ctx->r14 = ADD32(ctx->r1, 0X4DD0);
    // 0x8000DB98: nop

    // 0x8000DB9C: jr          $t6
    // 0x8000DBA0: nop

    switch (jr_addend_8000DB9C >> 2) {
        case 0: goto L_8000DBA4; break;
        case 1: goto L_8000DBD0; break;
        case 2: goto L_8000DC00; break;
        case 3: goto L_8000DC30; break;
        case 4: goto L_8000DC60; break;
        case 5: goto L_8000DC90; break;
        case 6: goto L_8000DCC0; break;
        case 7: goto L_8000DCF0; break;
        default: switch_error(__func__, 0x8000DB9C, 0x80094DD0);
    }
    // 0x8000DBA0: nop

L_8000DBA4:
    // 0x8000DBA4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000DBA8: lui         $t7, 0xDB0A
    ctx->r15 = S32(0XDB0A << 16);
    // 0x8000DBAC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000DBB0: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x8000DBB4: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x8000DBB8: lui         $t8, 0xDB0A
    ctx->r24 = S32(0XDB0A << 16);
    // 0x8000DBBC: ori         $t8, $t8, 0x4
    ctx->r24 = ctx->r24 | 0X4;
    // 0x8000DBC0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000DBC4: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8000DBC8: jr          $ra
    // 0x8000DBCC: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    return;
    // 0x8000DBCC: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
L_8000DBD0:
    // 0x8000DBD0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000DBD4: lui         $t9, 0xDB0A
    ctx->r25 = S32(0XDB0A << 16);
    // 0x8000DBD8: ori         $t9, $t9, 0x18
    ctx->r25 = ctx->r25 | 0X18;
    // 0x8000DBDC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000DBE0: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x8000DBE4: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x8000DBE8: lui         $t0, 0xDB0A
    ctx->r8 = S32(0XDB0A << 16);
    // 0x8000DBEC: ori         $t0, $t0, 0x1C
    ctx->r8 = ctx->r8 | 0X1C;
    // 0x8000DBF0: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x8000DBF4: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8000DBF8: jr          $ra
    // 0x8000DBFC: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    return;
    // 0x8000DBFC: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
L_8000DC00:
    // 0x8000DC00: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000DC04: lui         $t1, 0xDB0A
    ctx->r9 = S32(0XDB0A << 16);
    // 0x8000DC08: ori         $t1, $t1, 0x30
    ctx->r9 = ctx->r9 | 0X30;
    // 0x8000DC0C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x8000DC10: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x8000DC14: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x8000DC18: lui         $t2, 0xDB0A
    ctx->r10 = S32(0XDB0A << 16);
    // 0x8000DC1C: ori         $t2, $t2, 0x34
    ctx->r10 = ctx->r10 | 0X34;
    // 0x8000DC20: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x8000DC24: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8000DC28: jr          $ra
    // 0x8000DC2C: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    return;
    // 0x8000DC2C: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
L_8000DC30:
    // 0x8000DC30: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000DC34: lui         $t3, 0xDB0A
    ctx->r11 = S32(0XDB0A << 16);
    // 0x8000DC38: ori         $t3, $t3, 0x48
    ctx->r11 = ctx->r11 | 0X48;
    // 0x8000DC3C: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x8000DC40: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x8000DC44: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x8000DC48: lui         $t4, 0xDB0A
    ctx->r12 = S32(0XDB0A << 16);
    // 0x8000DC4C: ori         $t4, $t4, 0x4C
    ctx->r12 = ctx->r12 | 0X4C;
    // 0x8000DC50: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8000DC54: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8000DC58: jr          $ra
    // 0x8000DC5C: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    return;
    // 0x8000DC5C: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
L_8000DC60:
    // 0x8000DC60: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000DC64: lui         $t5, 0xDB0A
    ctx->r13 = S32(0XDB0A << 16);
    // 0x8000DC68: ori         $t5, $t5, 0x60
    ctx->r13 = ctx->r13 | 0X60;
    // 0x8000DC6C: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8000DC70: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x8000DC74: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x8000DC78: lui         $t6, 0xDB0A
    ctx->r14 = S32(0XDB0A << 16);
    // 0x8000DC7C: ori         $t6, $t6, 0x64
    ctx->r14 = ctx->r14 | 0X64;
    // 0x8000DC80: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000DC84: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8000DC88: jr          $ra
    // 0x8000DC8C: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    return;
    // 0x8000DC8C: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
L_8000DC90:
    // 0x8000DC90: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000DC94: lui         $t7, 0xDB0A
    ctx->r15 = S32(0XDB0A << 16);
    // 0x8000DC98: ori         $t7, $t7, 0x78
    ctx->r15 = ctx->r15 | 0X78;
    // 0x8000DC9C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000DCA0: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x8000DCA4: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x8000DCA8: lui         $t8, 0xDB0A
    ctx->r24 = S32(0XDB0A << 16);
    // 0x8000DCAC: ori         $t8, $t8, 0x7C
    ctx->r24 = ctx->r24 | 0X7C;
    // 0x8000DCB0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000DCB4: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8000DCB8: jr          $ra
    // 0x8000DCBC: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    return;
    // 0x8000DCBC: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
L_8000DCC0:
    // 0x8000DCC0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000DCC4: lui         $t9, 0xDB0A
    ctx->r25 = S32(0XDB0A << 16);
    // 0x8000DCC8: ori         $t9, $t9, 0x90
    ctx->r25 = ctx->r25 | 0X90;
    // 0x8000DCCC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000DCD0: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x8000DCD4: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x8000DCD8: lui         $t0, 0xDB0A
    ctx->r8 = S32(0XDB0A << 16);
    // 0x8000DCDC: ori         $t0, $t0, 0x94
    ctx->r8 = ctx->r8 | 0X94;
    // 0x8000DCE0: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x8000DCE4: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8000DCE8: jr          $ra
    // 0x8000DCEC: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    return;
    // 0x8000DCEC: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
L_8000DCF0:
    // 0x8000DCF0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000DCF4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000DCF8: lui         $t1, 0xDB0A
    ctx->r9 = S32(0XDB0A << 16);
    // 0x8000DCFC: ori         $t1, $t1, 0xA8
    ctx->r9 = ctx->r9 | 0XA8;
    // 0x8000DD00: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8000DD04: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x8000DD08: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x8000DD0C: lui         $t2, 0xDB0A
    ctx->r10 = S32(0XDB0A << 16);
    // 0x8000DD10: ori         $t2, $t2, 0xAC
    ctx->r10 = ctx->r10 | 0XAC;
    // 0x8000DD14: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x8000DD18: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x8000DD1C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_8000DD20:
    // 0x8000DD20: jr          $ra
    // 0x8000DD24: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8000DD24: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_8000DD28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000DD28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000DD2C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000DD30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8000DD34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000DD38: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8000DD3C: beq         $a3, $zero, L_8000DDE8
    if (ctx->r7 == 0) {
        // 0x8000DD40: sw          $a2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r6;
            goto L_8000DDE8;
    }
    // 0x8000DD40: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8000DD44: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8000DD48: jal         0x800046F0
    // 0x8000DD4C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_800046F0(rdram, ctx);
        goto after_0;
    // 0x8000DD4C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x8000DD50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8000DD54: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8000DD58: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8000DD5C: jal         0x80076BF8
    // 0x8000DD60: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8000DD60: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x8000DD64: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8000DD68: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8000DD6C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8000DD70: jal         0x80076BF8
    // 0x8000DD74: addiu       $a0, $v1, 0x4
    ctx->r4 = ADD32(ctx->r3, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8000DD74: addiu       $a0, $v1, 0x4
    ctx->r4 = ADD32(ctx->r3, 0X4);
    after_2:
    // 0x8000DD78: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8000DD7C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8000DD80: lb          $t6, 0x0($a3)
    ctx->r14 = MEM_B(ctx->r7, 0X0);
    // 0x8000DD84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8000DD88: sb          $t6, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r14;
    // 0x8000DD8C: lb          $t7, 0x1($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X1);
    // 0x8000DD90: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8000DD94: sb          $t7, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r15;
    // 0x8000DD98: lb          $t8, 0x2($a3)
    ctx->r24 = MEM_B(ctx->r7, 0X2);
    // 0x8000DD9C: nop

    // 0x8000DDA0: sb          $t8, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r24;
    // 0x8000DDA4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DDA8: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x8000DDAC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8000DDB0: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8000DDB4: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8000DDB8: addiu       $t1, $t0, 0x30
    ctx->r9 = ADD32(ctx->r8, 0X30);
    // 0x8000DDBC: bgez        $t1, L_8000DDCC
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8000DDC0: sra         $t2, $t1, 3
        ctx->r10 = S32(SIGNED(ctx->r9) >> 3);
            goto L_8000DDCC;
    }
    // 0x8000DDC0: sra         $t2, $t1, 3
    ctx->r10 = S32(SIGNED(ctx->r9) >> 3);
    // 0x8000DDC4: addiu       $at, $t1, 0x7
    ctx->r1 = ADD32(ctx->r9, 0X7);
    // 0x8000DDC8: sra         $t2, $at, 3
    ctx->r10 = S32(SIGNED(ctx->r1) >> 3);
L_8000DDCC:
    // 0x8000DDCC: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x8000DDD0: sll         $t4, $t3, 8
    ctx->r12 = S32(ctx->r11 << 8);
    // 0x8000DDD4: lui         $at, 0xDC08
    ctx->r1 = S32(0XDC08 << 16);
    // 0x8000DDD8: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x8000DDDC: ori         $t6, $t5, 0xA
    ctx->r14 = ctx->r13 | 0XA;
    // 0x8000DDE0: b           L_8000DDFC
    // 0x8000DDE4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
        goto L_8000DDFC;
    // 0x8000DDE4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
L_8000DDE8:
    // 0x8000DDE8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DDEC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8000DDF0: jal         0x8000DB80
    // 0x8000DDF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000DB80(rdram, ctx);
        goto after_3;
    // 0x8000DDF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8000DDF8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8000DDFC:
    // 0x8000DDFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DE00: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8000DE04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000DE08: jr          $ra
    // 0x8000DE0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8000DE0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8000DE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000DE10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000DE14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000DE18: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x8000DE1C: jal         0x8000DD28
    // 0x8000DE20: addiu       $a3, $a3, -0x13F8
    ctx->r7 = ADD32(ctx->r7, -0X13F8);
    func_8000DD28(rdram, ctx);
        goto after_0;
    // 0x8000DE20: addiu       $a3, $a3, -0x13F8
    ctx->r7 = ADD32(ctx->r7, -0X13F8);
    after_0:
    // 0x8000DE24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000DE28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000DE2C: jr          $ra
    // 0x8000DE30: nop

    return;
    // 0x8000DE30: nop

;}
RECOMP_FUNC void func_8000DE34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000DE34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000DE38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000DE3C: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8000DE40: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x8000DE44: and         $t6, $a2, $at
    ctx->r14 = ctx->r6 & ctx->r1;
    // 0x8000DE48: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    // 0x8000DE4C: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x8000DE50: beq         $t7, $zero, L_8000DEC0
    if (ctx->r15 == 0) {
        // 0x8000DE54: or          $a2, $t6, $zero
        ctx->r6 = ctx->r14 | 0;
            goto L_8000DEC0;
    }
    // 0x8000DE54: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8000DE58: lb          $t8, 0x8($a1)
    ctx->r24 = MEM_B(ctx->r5, 0X8);
    // 0x8000DE5C: lb          $t9, 0x0($a3)
    ctx->r25 = MEM_B(ctx->r7, 0X0);
    // 0x8000DE60: nop

    // 0x8000DE64: bne         $t8, $t9, L_8000DEC0
    if (ctx->r24 != ctx->r25) {
        // 0x8000DE68: nop
    
            goto L_8000DEC0;
    }
    // 0x8000DE68: nop

    // 0x8000DE6C: lb          $t1, 0x9($a1)
    ctx->r9 = MEM_B(ctx->r5, 0X9);
    // 0x8000DE70: lb          $t2, 0x1($a3)
    ctx->r10 = MEM_B(ctx->r7, 0X1);
    // 0x8000DE74: nop

    // 0x8000DE78: bne         $t1, $t2, L_8000DEC0
    if (ctx->r9 != ctx->r10) {
        // 0x8000DE7C: nop
    
            goto L_8000DEC0;
    }
    // 0x8000DE7C: nop

    // 0x8000DE80: lb          $t3, 0xA($a1)
    ctx->r11 = MEM_B(ctx->r5, 0XA);
    // 0x8000DE84: lb          $t4, 0x2($a3)
    ctx->r12 = MEM_B(ctx->r7, 0X2);
    // 0x8000DE88: nop

    // 0x8000DE8C: bne         $t3, $t4, L_8000DEC0
    if (ctx->r11 != ctx->r12) {
        // 0x8000DE90: nop
    
            goto L_8000DEC0;
    }
    // 0x8000DE90: nop

    // 0x8000DE94: lw          $t5, 0x4($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X4);
    // 0x8000DE98: nop

    // 0x8000DE9C: bne         $t6, $t5, L_8000DEAC
    if (ctx->r14 != ctx->r13) {
        // 0x8000DEA0: nop
    
            goto L_8000DEAC;
    }
    // 0x8000DEA0: nop

    // 0x8000DEA4: b           L_8000DEEC
    // 0x8000DEA8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_8000DEEC;
    // 0x8000DEA8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8000DEAC:
    // 0x8000DEAC: lhu         $a1, 0x2($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X2);
    // 0x8000DEB0: jal         0x8000DB80
    // 0x8000DEB4: sw          $a2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r6;
    func_8000DB80(rdram, ctx);
        goto after_0;
    // 0x8000DEB4: sw          $a2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r6;
    after_0:
    // 0x8000DEB8: b           L_8000DEF0
    // 0x8000DEBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8000DEF0;
    // 0x8000DEBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000DEC0:
    // 0x8000DEC0: lb          $t6, 0x0($a3)
    ctx->r14 = MEM_B(ctx->r7, 0X0);
    // 0x8000DEC4: ori         $t9, $v0, 0x4000
    ctx->r25 = ctx->r2 | 0X4000;
    // 0x8000DEC8: sb          $t6, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r14;
    // 0x8000DECC: lb          $t7, 0x1($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X1);
    // 0x8000DED0: lhu         $a1, 0x2($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X2);
    // 0x8000DED4: sb          $t7, 0x9($t0)
    MEM_B(0X9, ctx->r8) = ctx->r15;
    // 0x8000DED8: lb          $t8, 0x2($a3)
    ctx->r24 = MEM_B(ctx->r7, 0X2);
    // 0x8000DEDC: sw          $a2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r6;
    // 0x8000DEE0: sh          $t9, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r25;
    // 0x8000DEE4: jal         0x8000DD28
    // 0x8000DEE8: sb          $t8, 0xA($t0)
    MEM_B(0XA, ctx->r8) = ctx->r24;
    func_8000DD28(rdram, ctx);
        goto after_1;
    // 0x8000DEE8: sb          $t8, 0xA($t0)
    MEM_B(0XA, ctx->r8) = ctx->r24;
    after_1:
L_8000DEEC:
    // 0x8000DEEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000DEF0:
    // 0x8000DEF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000DEF4: jr          $ra
    // 0x8000DEF8: nop

    return;
    // 0x8000DEF8: nop

;}
RECOMP_FUNC void func_8000DEFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000DEFC: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8000DF00: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8000DF04: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8000DF08: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000DF0C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8000DF10: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8000DF14: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8000DF18: bc1f        L_8000DF24
    if (!c1cs) {
        // 0x8000DF1C: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_8000DF24;
    }
    // 0x8000DF1C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000DF20: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8000DF24:
    // 0x8000DF24: lwc1        $f13, 0x4DF0($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X4DF0);
    // 0x8000DF28: lwc1        $f12, 0x4DF4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4DF4);
    // 0x8000DF2C: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8000DF30: c.lt.d      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.d < ctx->f8.d;
    // 0x8000DF34: nop

    // 0x8000DF38: bc1f        L_8000DF48
    if (!c1cs) {
        // 0x8000DF3C: nop
    
            goto L_8000DF48;
    }
    // 0x8000DF3C: nop

    // 0x8000DF40: jr          $ra
    // 0x8000DF44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8000DF44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000DF48:
    // 0x8000DF48: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8000DF4C: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8000DF50: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8000DF54: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8000DF58: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8000DF5C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8000DF60: nop

    // 0x8000DF64: bc1f        L_8000DF70
    if (!c1cs) {
        // 0x8000DF68: nop
    
            goto L_8000DF70;
    }
    // 0x8000DF68: nop

    // 0x8000DF6C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8000DF70:
    // 0x8000DF70: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x8000DF74: c.lt.d      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.d < ctx->f18.d;
    // 0x8000DF78: nop

    // 0x8000DF7C: bc1f        L_8000DF8C
    if (!c1cs) {
        // 0x8000DF80: nop
    
            goto L_8000DF8C;
    }
    // 0x8000DF80: nop

    // 0x8000DF84: jr          $ra
    // 0x8000DF88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8000DF88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000DF8C:
    // 0x8000DF8C: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8000DF90: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8000DF94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000DF98: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000DF9C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8000DFA0: nop

    // 0x8000DFA4: bc1f        L_8000DFB0
    if (!c1cs) {
        // 0x8000DFA8: nop
    
            goto L_8000DFB0;
    }
    // 0x8000DFA8: nop

    // 0x8000DFAC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8000DFB0:
    // 0x8000DFB0: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8000DFB4: c.lt.d      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.d < ctx->f8.d;
    // 0x8000DFB8: nop

    // 0x8000DFBC: bc1f        L_8000DFCC
    if (!c1cs) {
        // 0x8000DFC0: nop
    
            goto L_8000DFCC;
    }
    // 0x8000DFC0: nop

    // 0x8000DFC4: jr          $ra
    // 0x8000DFC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8000DFC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000DFCC:
    // 0x8000DFCC: jr          $ra
    // 0x8000DFD0: nop

    return;
    // 0x8000DFD0: nop

;}
RECOMP_FUNC void func_8000DFD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000DFD4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8000DFD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000DFDC: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8000DFE0: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8000DFE4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000DFE8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8000DFEC: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x8000DFF0: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x8000DFF4: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x8000DFF8: beq         $t6, $zero, L_8000E108
    if (ctx->r14 == 0) {
        // 0x8000DFFC: mov.s       $f14, $f12
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
            goto L_8000E108;
    }
    // 0x8000DFFC: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x8000E000: bne         $a0, $zero, L_8000E010
    if (ctx->r4 != 0) {
        // 0x8000E004: addiu       $a1, $t0, 0x1C
        ctx->r5 = ADD32(ctx->r8, 0X1C);
            goto L_8000E010;
    }
    // 0x8000E004: addiu       $a1, $t0, 0x1C
    ctx->r5 = ADD32(ctx->r8, 0X1C);
    // 0x8000E008: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8000E00C: addiu       $t1, $t1, -0x13F4
    ctx->r9 = ADD32(ctx->r9, -0X13F4);
L_8000E010:
    // 0x8000E010: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8000E014: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x8000E018: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8000E01C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8000E020: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    // 0x8000E024: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x8000E028: jal         0x8000DEFC
    // 0x8000E02C: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    func_8000DEFC(rdram, ctx);
        goto after_0;
    // 0x8000E02C: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x8000E030: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x8000E034: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E038: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x8000E03C: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x8000E040: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x8000E044: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000E048: bne         $v0, $zero, L_8000E058
    if (ctx->r2 != 0) {
        // 0x8000E04C: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_8000E058;
    }
    // 0x8000E04C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8000E050: b           L_8000E2E0
    // 0x8000E054: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000E2E0;
    // 0x8000E054: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000E058:
    // 0x8000E058: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8000E05C: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x8000E060: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8000E064: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    // 0x8000E068: jal         0x8000CB5C
    // 0x8000E06C: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    func_8000CB5C(rdram, ctx);
        goto after_1;
    // 0x8000E06C: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    after_1:
    // 0x8000E070: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x8000E074: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x8000E078: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x8000E07C: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000E080: andi        $t7, $v1, 0x4
    ctx->r15 = ctx->r3 & 0X4;
    // 0x8000E084: beq         $t7, $zero, L_8000E138
    if (ctx->r15 == 0) {
        // 0x8000E088: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_8000E138;
    }
    // 0x8000E088: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8000E08C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8000E090: lwc1        $f6, 0x10($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X10);
    // 0x8000E094: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000E098: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8000E09C: lwc1        $f16, 0x14($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X14);
    // 0x8000E0A0: lwc1        $f6, 0x18($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X18);
    // 0x8000E0A4: lwc1        $f2, 0x30($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X30);
    // 0x8000E0A8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8000E0AC: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000E0B0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8000E0B4: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8000E0B8: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8000E0BC: add.s       $f0, $f16, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8000E0C0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8000E0C4: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x8000E0C8: nop

    // 0x8000E0CC: bc1f        L_8000E0DC
    if (!c1cs) {
        // 0x8000E0D0: nop
    
            goto L_8000E0DC;
    }
    // 0x8000E0D0: nop

    // 0x8000E0D4: b           L_8000E2E0
    // 0x8000E0D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000E2E0;
    // 0x8000E0D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000E0DC:
    // 0x8000E0DC: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8000E0E0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8000E0E4: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8000E0E8: sub.d       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f8.d - ctx->f18.d;
    // 0x8000E0EC: lwc1        $f4, 0x34($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X34);
    // 0x8000E0F0: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x8000E0F4: add.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f6.d + ctx->f10.d;
    // 0x8000E0F8: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x8000E0FC: mul.d       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f8.d);
    // 0x8000E100: b           L_8000E138
    // 0x8000E104: cvt.s.d     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f14.fl = CVT_S_D(ctx->f18.d);
        goto L_8000E138;
    // 0x8000E104: cvt.s.d     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f14.fl = CVT_S_D(ctx->f18.d);
L_8000E108:
    // 0x8000E108: lwc1        $f6, 0x10($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X10);
    // 0x8000E10C: nop

    // 0x8000E110: neg.s       $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = -ctx->f6.fl;
    // 0x8000E114: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x8000E118: lwc1        $f4, 0x14($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X14);
    // 0x8000E11C: nop

    // 0x8000E120: neg.s       $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = -ctx->f4.fl;
    // 0x8000E124: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x8000E128: lwc1        $f8, 0x18($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X18);
    // 0x8000E12C: nop

    // 0x8000E130: neg.s       $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = -ctx->f8.fl;
    // 0x8000E134: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
L_8000E138:
    // 0x8000E138: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000E13C: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8000E140: lwc1        $f1, 0x4DF8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X4DF8);
    // 0x8000E144: lwc1        $f0, 0x4DFC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4DFC);
    // 0x8000E148: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x8000E14C: mul.d       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x8000E150: andi        $t6, $v1, 0x2
    ctx->r14 = ctx->r3 & 0X2;
    // 0x8000E154: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    // 0x8000E158: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8000E15C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8000E160: nop

    // 0x8000E164: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8000E168: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000E16C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000E170: nop

    // 0x8000E174: cvt.w.d     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.u32l = CVT_W_D(ctx->f4.d);
    // 0x8000E178: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x8000E17C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8000E180: sb          $t9, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r25;
    // 0x8000E184: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000E188: nop

    // 0x8000E18C: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x8000E190: mul.d       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x8000E194: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8000E198: nop

    // 0x8000E19C: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8000E1A0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000E1A4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000E1A8: nop

    // 0x8000E1AC: cvt.w.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_D(ctx->f6.d);
    // 0x8000E1B0: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8000E1B4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8000E1B8: sb          $t3, 0x1($a3)
    MEM_B(0X1, ctx->r7) = ctx->r11;
    // 0x8000E1BC: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000E1C0: nop

    // 0x8000E1C4: cvt.d.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.d = CVT_D_S(ctx->f4.fl);
    // 0x8000E1C8: mul.d       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x8000E1CC: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8000E1D0: nop

    // 0x8000E1D4: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8000E1D8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000E1DC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000E1E0: nop

    // 0x8000E1E4: cvt.w.d     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = CVT_W_D(ctx->f8.d);
    // 0x8000E1E8: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x8000E1EC: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8000E1F0: beq         $t6, $zero, L_8000E264
    if (ctx->r14 == 0) {
        // 0x8000E1F4: sb          $t5, 0x2($a3)
        MEM_B(0X2, ctx->r7) = ctx->r13;
            goto L_8000E264;
    }
    // 0x8000E1F4: sb          $t5, 0x2($a3)
    MEM_B(0X2, ctx->r7) = ctx->r13;
    // 0x8000E1F8: lwc1        $f0, 0x28($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X28);
    // 0x8000E1FC: nop

    // 0x8000E200: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8000E204: nop

    // 0x8000E208: bc1f        L_8000E218
    if (!c1cs) {
        // 0x8000E20C: nop
    
            goto L_8000E218;
    }
    // 0x8000E20C: nop

    // 0x8000E210: b           L_8000E2E0
    // 0x8000E214: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000E2E0;
    // 0x8000E214: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000E218:
    // 0x8000E218: lwc1        $f2, 0x2C($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x8000E21C: nop

    // 0x8000E220: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8000E224: nop

    // 0x8000E228: bc1f        L_8000E238
    if (!c1cs) {
        // 0x8000E22C: nop
    
            goto L_8000E238;
    }
    // 0x8000E22C: nop

    // 0x8000E230: b           L_8000E2E0
    // 0x8000E234: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000E2E0;
    // 0x8000E234: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000E238:
    // 0x8000E238: sub.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8000E23C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8000E240: sub.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x8000E244: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8000E248: div.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8000E24C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8000E250: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x8000E254: cvt.d.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.d = CVT_D_S(ctx->f4.fl);
    // 0x8000E258: sub.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f8.d - ctx->f16.d;
    // 0x8000E25C: mul.d       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f18.d);
    // 0x8000E260: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
L_8000E264:
    // 0x8000E264: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8000E268: jal         0x80076BF8
    // 0x8000E26C: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8000E26C: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    after_2:
    // 0x8000E270: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000E274: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000E278: lwc1        $f9, 0x4E00($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4E00);
    // 0x8000E27C: lwc1        $f8, 0x4E04($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4E04);
    // 0x8000E280: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x8000E284: mul.d       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x8000E288: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8000E28C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x8000E290: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8000E294: nop

    // 0x8000E298: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8000E29C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000E2A0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000E2A4: nop

    // 0x8000E2A8: cvt.w.d     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.u32l = CVT_W_D(ctx->f16.d);
    // 0x8000E2AC: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x8000E2B0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8000E2B4: bgtz        $v1, L_8000E2C4
    if (SIGNED(ctx->r3) > 0) {
        // 0x8000E2B8: slti        $at, $v1, 0x100
        ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
            goto L_8000E2C4;
    }
    // 0x8000E2B8: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x8000E2BC: b           L_8000E2E0
    // 0x8000E2C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000E2E0;
    // 0x8000E2C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000E2C4:
    // 0x8000E2C4: bne         $at, $zero, L_8000E2D4
    if (ctx->r1 != 0) {
        // 0x8000E2C8: or          $a2, $v1, $zero
        ctx->r6 = ctx->r3 | 0;
            goto L_8000E2D4;
    }
    // 0x8000E2C8: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x8000E2CC: b           L_8000E2D4
    // 0x8000E2D0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
        goto L_8000E2D4;
    // 0x8000E2D0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
L_8000E2D4:
    // 0x8000E2D4: jal         0x8000C964
    // 0x8000E2D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8000C964(rdram, ctx);
        goto after_3;
    // 0x8000E2D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x8000E2DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000E2E0:
    // 0x8000E2E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E2E4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8000E2E8: jr          $ra
    // 0x8000E2EC: nop

    return;
    // 0x8000E2EC: nop

;}
