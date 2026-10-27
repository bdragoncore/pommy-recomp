#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_coll_main_4D98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004D98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44004D9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44004DA0: lui         $a2, 0x40C0
    ctx->r6 = S32(0X40C0 << 16);
    // 0x44004DA4: jal         0x44004D18
    // 0x44004DA8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_coll_main_4D18(rdram, ctx);
        goto after_0;
    // 0x44004DA8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_0:
    // 0x44004DAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44004DB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44004DB4: jr          $ra
    // 0x44004DB8: nop

    return;
    // 0x44004DB8: nop

;}
RECOMP_FUNC void ovl_coll_main_4DBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004DBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44004DC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44004DC4: lui         $a2, 0xC0C0
    ctx->r6 = S32(0XC0C0 << 16);
    // 0x44004DC8: jal         0x44004D18
    // 0x44004DCC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_coll_main_4D18(rdram, ctx);
        goto after_0;
    // 0x44004DCC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_0:
    // 0x44004DD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44004DD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44004DD8: jr          $ra
    // 0x44004DDC: nop

    return;
    // 0x44004DDC: nop

;}
RECOMP_FUNC void ovl_coll_main_4DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004DE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44004DE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44004DE8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x44004DEC: jal         0x44004D18
    // 0x44004DF0: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    ovl_coll_main_4D18(rdram, ctx);
        goto after_0;
    // 0x44004DF0: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    after_0:
    // 0x44004DF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44004DF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44004DFC: jr          $ra
    // 0x44004E00: nop

    return;
    // 0x44004E00: nop

;}
RECOMP_FUNC void ovl_coll_main_4E04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004E04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44004E08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44004E0C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x44004E10: jal         0x44004D18
    // 0x44004E14: lui         $a3, 0xC1F0
    ctx->r7 = S32(0XC1F0 << 16);
    ovl_coll_main_4D18(rdram, ctx);
        goto after_0;
    // 0x44004E14: lui         $a3, 0xC1F0
    ctx->r7 = S32(0XC1F0 << 16);
    after_0:
    // 0x44004E18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44004E1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44004E20: jr          $ra
    // 0x44004E24: nop

    return;
    // 0x44004E24: nop

;}
RECOMP_FUNC void ovl_coll_main_4E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004E28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44004E2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44004E30: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x44004E34: jal         0x44004D18
    // 0x44004E38: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_coll_main_4D18(rdram, ctx);
        goto after_0;
    // 0x44004E38: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_0:
    // 0x44004E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44004E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44004E44: jr          $ra
    // 0x44004E48: nop

    return;
    // 0x44004E48: nop

;}
RECOMP_FUNC void ovl_coll_main_4E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004E4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44004E50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44004E54: lui         $a2, 0xC1F0
    ctx->r6 = S32(0XC1F0 << 16);
    // 0x44004E58: jal         0x44004D18
    // 0x44004E5C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_coll_main_4D18(rdram, ctx);
        goto after_0;
    // 0x44004E5C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_0:
    // 0x44004E60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44004E64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44004E68: jr          $ra
    // 0x44004E6C: nop

    return;
    // 0x44004E6C: nop

;}
RECOMP_FUNC void ovl_coll_main_4E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004E70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44004E74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44004E78: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x44004E7C: jal         0x44004D18
    // 0x44004E80: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    ovl_coll_main_4D18(rdram, ctx);
        goto after_0;
    // 0x44004E80: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    after_0:
    // 0x44004E84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44004E88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44004E8C: jr          $ra
    // 0x44004E90: nop

    return;
    // 0x44004E90: nop

;}
RECOMP_FUNC void ovl_coll_main_4E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004E94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44004E98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44004E9C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x44004EA0: jal         0x44004D18
    // 0x44004EA4: lui         $a3, 0xC000
    ctx->r7 = S32(0XC000 << 16);
    ovl_coll_main_4D18(rdram, ctx);
        goto after_0;
    // 0x44004EA4: lui         $a3, 0xC000
    ctx->r7 = S32(0XC000 << 16);
    after_0:
    // 0x44004EA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44004EAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44004EB0: jr          $ra
    // 0x44004EB4: nop

    return;
    // 0x44004EB4: nop

;}
RECOMP_FUNC void ovl_coll_main_4EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004EB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44004EBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44004EC0: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x44004EC4: jal         0x44004D18
    // 0x44004EC8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_coll_main_4D18(rdram, ctx);
        goto after_0;
    // 0x44004EC8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_0:
    // 0x44004ECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44004ED0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44004ED4: jr          $ra
    // 0x44004ED8: nop

    return;
    // 0x44004ED8: nop

;}
RECOMP_FUNC void ovl_coll_main_4EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004EDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44004EE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44004EE4: lui         $a2, 0xC000
    ctx->r6 = S32(0XC000 << 16);
    // 0x44004EE8: jal         0x44004D18
    // 0x44004EEC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_coll_main_4D18(rdram, ctx);
        goto after_0;
    // 0x44004EEC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_0:
    // 0x44004EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44004EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44004EF8: jr          $ra
    // 0x44004EFC: nop

    return;
    // 0x44004EFC: nop

;}
RECOMP_FUNC void ovl_coll_main_4F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004F00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44004F04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44004F08: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x44004F0C: jal         0x44004D18
    // 0x44004F10: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    ovl_coll_main_4D18(rdram, ctx);
        goto after_0;
    // 0x44004F10: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    after_0:
    // 0x44004F14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44004F18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44004F1C: jr          $ra
    // 0x44004F20: nop

    return;
    // 0x44004F20: nop

;}
RECOMP_FUNC void ovl_coll_main_4F24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004F24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44004F28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44004F2C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x44004F30: jal         0x44004D18
    // 0x44004F34: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_coll_main_4D18(rdram, ctx);
        goto after_0;
    // 0x44004F34: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_0:
    // 0x44004F38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44004F3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44004F40: jr          $ra
    // 0x44004F44: nop

    return;
    // 0x44004F44: nop

;}
RECOMP_FUNC void ovl_coll_main_4F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004F48: lui         $t7, 0x4400
    ctx->r15 = S32(0X4400 << 16);
    // 0x44004F4C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x44004F50: addiu       $t7, $t7, 0x5960
    ctx->r15 = ADD32(ctx->r15, 0X5960);
    // 0x44004F54: sw          $t6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r14;
    // 0x44004F58: sw          $t7, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r15;
    // 0x44004F5C: jr          $ra
    // 0x44004F60: sw          $a0, 0x68($a1)
    MEM_W(0X68, ctx->r5) = ctx->r4;
    return;
    // 0x44004F60: sw          $a0, 0x68($a1)
    MEM_W(0X68, ctx->r5) = ctx->r4;
;}
RECOMP_FUNC void ovl_coll_main_4F64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004F64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x44004F68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44004F6C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x44004F70: sw          $zero, 0x18($a1)
    MEM_W(0X18, ctx->r5) = 0;
    // 0x44004F74: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x44004F78: jal         0x440010F4
    // 0x44004F7C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    ovl_coll_main_10F4(rdram, ctx);
        goto after_0;
    // 0x44004F7C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x44004F80: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x44004F84: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x44004F88: beq         $v0, $at, L_44004FAC
    if (ctx->r2 == ctx->r1) {
        // 0x44004F8C: nop
    
            goto L_44004FAC;
    }
    // 0x44004F8C: nop

    // 0x44004F90: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x44004F94: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x44004F98: jal         0x44004F48
    // 0x44004F9C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_coll_main_4F48(rdram, ctx);
        goto after_1;
    // 0x44004F9C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x44004FA0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x44004FA4: b           L_44004FD4
    // 0x44004FA8: sw          $zero, 0x18($a2)
    MEM_W(0X18, ctx->r6) = 0;
        goto L_44004FD4;
    // 0x44004FA8: sw          $zero, 0x18($a2)
    MEM_W(0X18, ctx->r6) = 0;
L_44004FAC:
    // 0x44004FAC: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x44004FB0: jal         0x44001020
    // 0x44004FB4: nop

    ovl_coll_main_1020(rdram, ctx);
        goto after_2;
    // 0x44004FB4: nop

    after_2:
    // 0x44004FB8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x44004FBC: beq         $v0, $at, L_44004FD8
    if (ctx->r2 == ctx->r1) {
        // 0x44004FC0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_44004FD8;
    }
    // 0x44004FC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44004FC4: lw          $t6, 0x14($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X14);
    // 0x44004FC8: nop

    // 0x44004FCC: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x44004FD0: sw          $t7, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r15;
L_44004FD4:
    // 0x44004FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44004FD8:
    // 0x44004FD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x44004FDC: jr          $ra
    // 0x44004FE0: nop

    return;
    // 0x44004FE0: nop

;}
RECOMP_FUNC void ovl_coll_main_4FE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44004FE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x44004FE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44004FEC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x44004FF0: sw          $zero, 0x18($a1)
    MEM_W(0X18, ctx->r5) = 0;
    // 0x44004FF4: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x44004FF8: jal         0x440010F4
    // 0x44004FFC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    ovl_coll_main_10F4(rdram, ctx);
        goto after_0;
    // 0x44004FFC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x44005000: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x44005004: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x44005008: beq         $v0, $at, L_4400502C
    if (ctx->r2 == ctx->r1) {
        // 0x4400500C: nop
    
            goto L_4400502C;
    }
    // 0x4400500C: nop

    // 0x44005010: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x44005014: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x44005018: jal         0x44004F48
    // 0x4400501C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_coll_main_4F48(rdram, ctx);
        goto after_1;
    // 0x4400501C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x44005020: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x44005024: b           L_44005054
    // 0x44005028: sw          $zero, 0x18($a2)
    MEM_W(0X18, ctx->r6) = 0;
        goto L_44005054;
    // 0x44005028: sw          $zero, 0x18($a2)
    MEM_W(0X18, ctx->r6) = 0;
L_4400502C:
    // 0x4400502C: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x44005030: jal         0x44001020
    // 0x44005034: nop

    ovl_coll_main_1020(rdram, ctx);
        goto after_2;
    // 0x44005034: nop

    after_2:
    // 0x44005038: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4400503C: beq         $v0, $at, L_44005058
    if (ctx->r2 == ctx->r1) {
        // 0x44005040: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_44005058;
    }
    // 0x44005040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44005044: lw          $t6, 0x14($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X14);
    // 0x44005048: nop

    // 0x4400504C: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x44005050: sw          $t7, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r15;
L_44005054:
    // 0x44005054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44005058:
    // 0x44005058: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4400505C: jr          $ra
    // 0x44005060: nop

    return;
    // 0x44005060: nop

;}
RECOMP_FUNC void ovl_coll_main_5064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44005064: lui         $t7, 0x4400
    ctx->r15 = S32(0X4400 << 16);
    // 0x44005068: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x4400506C: addiu       $t7, $t7, 0x5B28
    ctx->r15 = ADD32(ctx->r15, 0X5B28);
    // 0x44005070: sw          $t6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r14;
    // 0x44005074: sw          $t7, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r15;
    // 0x44005078: sw          $a0, 0x68($a1)
    MEM_W(0X68, ctx->r5) = ctx->r4;
    // 0x4400507C: sw          $a2, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->r6;
    // 0x44005080: jr          $ra
    // 0x44005084: sw          $zero, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = 0;
    return;
    // 0x44005084: sw          $zero, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = 0;
;}
RECOMP_FUNC void ovl_coll_main_5088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44005088: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x4400508C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x44005090: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x44005094: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x44005098: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x4400509C: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x440050A0: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x440050A4: jal         0x440006C4
    // 0x440050A8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x440050A8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x440050AC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x440050B0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x440050B4: beq         $t6, $at, L_440050F8
    if (ctx->r14 == ctx->r1) {
        // 0x440050B8: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_440050F8;
    }
    // 0x440050B8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x440050BC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x440050C0: jal         0x440010F4
    // 0x440050C4: nop

    ovl_coll_main_10F4(rdram, ctx);
        goto after_1;
    // 0x440050C4: nop

    after_1:
    // 0x440050C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x440050CC: beq         $v0, $at, L_440050F0
    if (ctx->r2 == ctx->r1) {
        // 0x440050D0: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_440050F0;
    }
    // 0x440050D0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x440050D4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x440050D8: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x440050DC: jal         0x44005064
    // 0x440050E0: nop

    ovl_coll_main_5064(rdram, ctx);
        goto after_2;
    // 0x440050E0: nop

    after_2:
    // 0x440050E4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x440050E8: b           L_44005118
    // 0x440050EC: sw          $t7, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r15;
        goto L_44005118;
    // 0x440050EC: sw          $t7, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r15;
L_440050F0:
    // 0x440050F0: b           L_44005118
    // 0x440050F4: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
        goto L_44005118;
    // 0x440050F4: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
L_440050F8:
    // 0x440050F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x440050FC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x44005100: lui         $a2, 0x3DCC
    ctx->r6 = S32(0X3DCC << 16);
    // 0x44005104: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x44005108: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4400510C: sw          $t8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r24;
    // 0x44005110: jal         0x44004A74
    // 0x44005114: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    ovl_coll_main_4A74(rdram, ctx);
        goto after_3;
    // 0x44005114: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    after_3:
L_44005118:
    // 0x44005118: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4400511C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x44005120: jr          $ra
    // 0x44005124: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x44005124: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_coll_main_5128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44005128: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4400512C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44005130: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x44005134: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x44005138: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x4400513C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x44005140: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x44005144: jal         0x440006C4
    // 0x44005148: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x44005148: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x4400514C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x44005150: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x44005154: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x44005158: bne         $t6, $at, L_44005168
    if (ctx->r14 != ctx->r1) {
        // 0x4400515C: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_44005168;
    }
    // 0x4400515C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x44005160: b           L_4400516C
    // 0x44005164: sw          $zero, 0x18($a3)
    MEM_W(0X18, ctx->r7) = 0;
        goto L_4400516C;
    // 0x44005164: sw          $zero, 0x18($a3)
    MEM_W(0X18, ctx->r7) = 0;
L_44005168:
    // 0x44005168: sw          $t7, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r15;
L_4400516C:
    // 0x4400516C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44005170: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x44005174: jr          $ra
    // 0x44005178: nop

    return;
    // 0x44005178: nop

;}
RECOMP_FUNC void ovl_coll_main_517C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400517C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x44005180: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44005184: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x44005188: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x4400518C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x44005190: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x44005194: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x44005198: jal         0x440006C4
    // 0x4400519C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4400519C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x440051A0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x440051A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x440051A8: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x440051AC: bne         $t6, $v0, L_440051CC
    if (ctx->r14 != ctx->r2) {
        // 0x440051B0: nop
    
            goto L_440051CC;
    }
    // 0x440051B0: nop

    // 0x440051B4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x440051B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x440051BC: bne         $t7, $at, L_440051CC
    if (ctx->r15 != ctx->r1) {
        // 0x440051C0: nop
    
            goto L_440051CC;
    }
    // 0x440051C0: nop

    // 0x440051C4: b           L_440051D0
    // 0x440051C8: sw          $zero, 0x18($a3)
    MEM_W(0X18, ctx->r7) = 0;
        goto L_440051D0;
    // 0x440051C8: sw          $zero, 0x18($a3)
    MEM_W(0X18, ctx->r7) = 0;
L_440051CC:
    // 0x440051CC: sw          $v0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r2;
L_440051D0:
    // 0x440051D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x440051D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x440051D8: jr          $ra
    // 0x440051DC: nop

    return;
    // 0x440051DC: nop

;}
RECOMP_FUNC void ovl_coll_main_51E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440051E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x440051E4: addiu       $t6, $zero, 0x1C
    ctx->r14 = ADD32(0, 0X1C);
    // 0x440051E8: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x440051EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x440051F0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x440051F4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x440051F8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x440051FC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x44005200: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x44005204: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x44005208: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x4400520C: jal         0x440006C4
    // 0x44005210: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x44005210: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x44005214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44005218: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4400521C: jr          $ra
    // 0x44005220: nop

    return;
    // 0x44005220: nop

;}
RECOMP_FUNC void ovl_coll_main_5224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44005224: lui         $t7, 0x4400
    ctx->r15 = S32(0X4400 << 16);
    // 0x44005228: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x4400522C: addiu       $t7, $t7, 0x62D4
    ctx->r15 = ADD32(ctx->r15, 0X62D4);
    // 0x44005230: sw          $t6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r14;
    // 0x44005234: sw          $t7, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r15;
    // 0x44005238: jr          $ra
    // 0x4400523C: sw          $a0, 0x68($a1)
    MEM_W(0X68, ctx->r5) = ctx->r4;
    return;
    // 0x4400523C: sw          $a0, 0x68($a1)
    MEM_W(0X68, ctx->r5) = ctx->r4;
;}
RECOMP_FUNC void ovl_coll_main_5240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44005240: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x44005244: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44005248: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x4400524C: jal         0x440051E0
    // 0x44005250: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    ovl_coll_main_51E0(rdram, ctx);
        goto after_0;
    // 0x44005250: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x44005254: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x44005258: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4400525C: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x44005260: jal         0x440006C4
    // 0x44005264: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_1;
    // 0x44005264: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x44005268: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x4400526C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x44005270: bne         $t7, $at, L_440052B8
    if (ctx->r15 != ctx->r1) {
        // 0x44005274: lw          $t0, 0x3C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X3C);
            goto L_440052B8;
    }
    // 0x44005274: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x44005278: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x4400527C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x44005280: bne         $t8, $at, L_440052B8
    if (ctx->r24 != ctx->r1) {
        // 0x44005284: lw          $t0, 0x3C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X3C);
            goto L_440052B8;
    }
    // 0x44005284: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x44005288: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x4400528C: nop

    // 0x44005290: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x44005294: jal         0x440010F4
    // 0x44005298: nop

    ovl_coll_main_10F4(rdram, ctx);
        goto after_2;
    // 0x44005298: nop

    after_2:
    // 0x4400529C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x440052A0: beq         $v0, $at, L_440052B4
    if (ctx->r2 == ctx->r1) {
        // 0x440052A4: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_440052B4;
    }
    // 0x440052A4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x440052A8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x440052AC: jal         0x44005224
    // 0x440052B0: nop

    ovl_coll_main_5224(rdram, ctx);
        goto after_3;
    // 0x440052B0: nop

    after_3:
L_440052B4:
    // 0x440052B4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
L_440052B8:
    // 0x440052B8: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x440052BC: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x440052C0: jal         0x440006C4
    // 0x440052C4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_4;
    // 0x440052C4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_4:
    // 0x440052C8: bne         $v0, $zero, L_44005304
    if (ctx->r2 != 0) {
        // 0x440052CC: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_44005304;
    }
    // 0x440052CC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x440052D0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x440052D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x440052D8: sw          $t1, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->r9;
    // 0x440052DC: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x440052E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x440052E4: swc1        $f0, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f0.u32l;
    // 0x440052E8: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x440052EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x440052F0: nop

    // 0x440052F4: swc1        $f4, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f4.u32l;
    // 0x440052F8: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x440052FC: nop

    // 0x44005300: swc1        $f0, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f0.u32l;
L_44005304:
    // 0x44005304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44005308: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x4400530C: jr          $ra
    // 0x44005310: nop

    return;
    // 0x44005310: nop

;}
RECOMP_FUNC void ovl_coll_main_5314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44005314: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x44005318: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x4400531C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x44005320: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x44005324: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44005328: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x4400532C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x44005330: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x44005334: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x44005338: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x4400533C: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x44005340: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x44005344: jal         0x440006C4
    // 0x44005348: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x44005348: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x4400534C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44005350: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x44005354: jr          $ra
    // 0x44005358: nop

    return;
    // 0x44005358: nop

;}
RECOMP_FUNC void ovl_coll_main_535C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400535C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x44005360: lui         $t7, 0x4400
    ctx->r15 = S32(0X4400 << 16);
    // 0x44005364: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x44005368: addiu       $t7, $t7, 0x5D20
    ctx->r15 = ADD32(ctx->r15, 0X5D20);
    // 0x4400536C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x44005370: sw          $t6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r14;
    // 0x44005374: sw          $t7, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r15;
    // 0x44005378: sw          $a0, 0x68($a1)
    MEM_W(0X68, ctx->r5) = ctx->r4;
    // 0x4400537C: sw          $t8, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r24;
    // 0x44005380: swc1        $f0, 0x54($a1)
    MEM_W(0X54, ctx->r5) = ctx->f0.u32l;
    // 0x44005384: swc1        $f0, 0x58($a1)
    MEM_W(0X58, ctx->r5) = ctx->f0.u32l;
    // 0x44005388: swc1        $f0, 0x5C($a1)
    MEM_W(0X5C, ctx->r5) = ctx->f0.u32l;
    // 0x4400538C: jr          $ra
    // 0x44005390: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    return;
    // 0x44005390: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
;}
RECOMP_FUNC void ovl_coll_main_5394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44005394: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x44005398: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4400539C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x440053A0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x440053A4: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x440053A8: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x440053AC: jal         0x440006C4
    // 0x440053B0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x440053B0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x440053B4: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x440053B8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x440053BC: beq         $v1, $zero, L_440053DC
    if (ctx->r3 == 0) {
        // 0x440053C0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_440053DC;
    }
    // 0x440053C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x440053C4: beq         $v1, $at, L_440053DC
    if (ctx->r3 == ctx->r1) {
        // 0x440053C8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_440053DC;
    }
    // 0x440053C8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x440053CC: beq         $v1, $at, L_440053DC
    if (ctx->r3 == ctx->r1) {
        // 0x440053D0: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_440053DC;
    }
    // 0x440053D0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x440053D4: bne         $v1, $at, L_4400543C
    if (ctx->r3 != ctx->r1) {
        // 0x440053D8: lw          $t2, 0x3C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X3C);
            goto L_4400543C;
    }
    // 0x440053D8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
L_440053DC:
    // 0x440053DC: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x440053E0: jal         0x440010F4
    // 0x440053E4: nop

    ovl_coll_main_10F4(rdram, ctx);
        goto after_1;
    // 0x440053E4: nop

    after_1:
    // 0x440053E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x440053EC: beq         $v0, $at, L_44005408
    if (ctx->r2 == ctx->r1) {
        // 0x440053F0: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_44005408;
    }
    // 0x440053F0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x440053F4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x440053F8: jal         0x4400535C
    // 0x440053FC: nop

    ovl_coll_main_535C(rdram, ctx);
        goto after_2;
    // 0x440053FC: nop

    after_2:
    // 0x44005400: b           L_4400543C
    // 0x44005404: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
        goto L_4400543C;
    // 0x44005404: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
L_44005408:
    // 0x44005408: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x4400540C: nop

    // 0x44005410: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x44005414: jal         0x44001020
    // 0x44005418: nop

    ovl_coll_main_1020(rdram, ctx);
        goto after_3;
    // 0x44005418: nop

    after_3:
    // 0x4400541C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x44005420: beq         $v0, $at, L_4400543C
    if (ctx->r2 == ctx->r1) {
        // 0x44005424: lw          $t2, 0x3C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X3C);
            goto L_4400543C;
    }
    // 0x44005424: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x44005428: lw          $t9, 0x60($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X60);
    // 0x4400542C: nop

    // 0x44005430: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x44005434: sw          $t0, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r8;
    // 0x44005438: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
L_4400543C:
    // 0x4400543C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x44005440: sw          $t1, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->r9;
    // 0x44005444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44005448: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x4400544C: jr          $ra
    // 0x44005450: nop

    return;
    // 0x44005450: nop

;}
RECOMP_FUNC void ovl_coll_main_5454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44005454: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x44005458: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4400545C: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x44005460: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x44005464: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x44005468: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4400546C: jal         0x440006C4
    // 0x44005470: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x44005470: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x44005474: bne         $v0, $zero, L_44005528
    if (ctx->r2 != 0) {
        // 0x44005478: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_44005528;
    }
    // 0x44005478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4400547C: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x44005480: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x44005484: bne         $t7, $at, L_44005528
    if (ctx->r15 != ctx->r1) {
        // 0x44005488: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_44005528;
    }
    // 0x44005488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4400548C: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x44005490: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x44005494: bne         $t8, $at, L_44005528
    if (ctx->r24 != ctx->r1) {
        // 0x44005498: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_44005528;
    }
    // 0x44005498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4400549C: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x440054A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x440054A4: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x440054A8: jal         0x440006C4
    // 0x440054AC: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_1;
    // 0x440054AC: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x440054B0: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x440054B4: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x440054B8: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x440054BC: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x440054C0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x440054C4: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x440054C8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x440054CC: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x440054D0: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x440054D4: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x440054D8: addiu       $t4, $sp, 0x34
    ctx->r12 = ADD32(ctx->r29, 0X34);
    // 0x440054DC: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x440054E0: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x440054E4: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x440054E8: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x440054EC: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
    // 0x440054F0: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x440054F4: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x440054F8: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x440054FC: lw          $a0, 0x4($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X4);
    // 0x44005500: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x44005504: jal         0x440006C4
    // 0x44005508: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_2;
    // 0x44005508: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_2:
    // 0x4400550C: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x44005510: addiu       $a1, $zero, 0xF6
    ctx->r5 = ADD32(0, 0XF6);
    // 0x44005514: lw          $a0, 0x68($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X68);
    // 0x44005518: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x4400551C: jal         0x44000F50
    // 0x44005520: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    ovl_coll_main_F50(rdram, ctx);
        goto after_3;
    // 0x44005520: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_3:
    // 0x44005524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44005528:
    // 0x44005528: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x4400552C: jr          $ra
    // 0x44005530: nop

    return;
    // 0x44005530: nop

;}
RECOMP_FUNC void ovl_coll_main_5534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44005534: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x44005538: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x4400553C: swc1        $f2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f2.u32l;
    // 0x44005540: lwc1        $f4, 0x6D00($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6D00);
    // 0x44005544: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x44005548: nop

    // 0x4400554C: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x44005550: nop

    // 0x44005554: bc1t        L_44005564
    if (c1cs) {
        // 0x44005558: nop
    
            goto L_44005564;
    }
    // 0x44005558: nop

    // 0x4400555C: b           L_44005570
    // 0x44005560: swc1        $f0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f0.u32l;
        goto L_44005570;
    // 0x44005560: swc1        $f0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f0.u32l;
L_44005564:
    // 0x44005564: lwc1        $f6, 0x10($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X10);
    // 0x44005568: nop

    // 0x4400556C: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
L_44005570:
    // 0x44005570: swc1        $f2, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f2.u32l;
    // 0x44005574: lwc1        $f8, 0xC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XC);
    // 0x44005578: nop

    // 0x4400557C: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x44005580: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
    // 0x44005584: lwc1        $f16, 0x10($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X10);
    // 0x44005588: swc1        $f2, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f2.u32l;
    // 0x4400558C: swc1        $f2, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f2.u32l;
    // 0x44005590: swc1        $f2, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f2.u32l;
    // 0x44005594: swc1        $f16, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f16.u32l;
    // 0x44005598: lwc1        $f18, 0x20($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X20);
    // 0x4400559C: nop

    // 0x440055A0: swc1        $f18, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f18.u32l;
    // 0x440055A4: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x440055A8: nop

    // 0x440055AC: swc1        $f4, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f4.u32l;
    // 0x440055B0: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x440055B4: swc1        $f2, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->f2.u32l;
    // 0x440055B8: swc1        $f2, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->f2.u32l;
    // 0x440055BC: swc1        $f2, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->f2.u32l;
    // 0x440055C0: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
    // 0x440055C4: lw          $t6, 0x38($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X38);
    // 0x440055C8: jr          $ra
    // 0x440055CC: sw          $t6, 0x38($a1)
    MEM_W(0X38, ctx->r5) = ctx->r14;
    return;
    // 0x440055CC: sw          $t6, 0x38($a1)
    MEM_W(0X38, ctx->r5) = ctx->r14;
;}
RECOMP_FUNC void ovl_coll_main_55D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440055D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x440055D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x440055D8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x440055DC: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x440055E0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x440055E4: jal         0x440006C4
    // 0x440055E8: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x440055E8: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_0:
    // 0x440055EC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x440055F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x440055F4: bne         $t7, $at, L_4400560C
    if (ctx->r15 != ctx->r1) {
        // 0x440055F8: addiu       $t9, $zero, 0x15
        ctx->r25 = ADD32(0, 0X15);
            goto L_4400560C;
    }
    // 0x440055F8: addiu       $t9, $zero, 0x15
    ctx->r25 = ADD32(0, 0X15);
    // 0x440055FC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x44005600: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x44005604: beq         $t8, $at, L_44005630
    if (ctx->r24 == ctx->r1) {
        // 0x44005608: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_44005630;
    }
    // 0x44005608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4400560C:
    // 0x4400560C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x44005610: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x44005614: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x44005618: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x4400561C: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    // 0x44005620: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x44005624: jal         0x440006C4
    // 0x44005628: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_1;
    // 0x44005628: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x4400562C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44005630:
    // 0x44005630: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x44005634: jr          $ra
    // 0x44005638: nop

    return;
    // 0x44005638: nop

;}
RECOMP_FUNC void ovl_coll_main_563C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400563C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x44005640: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44005644: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x44005648: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x4400564C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x44005650: jal         0x440006C4
    // 0x44005654: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x44005654: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_0:
    // 0x44005658: bne         $v0, $zero, L_440056C8
    if (ctx->r2 != 0) {
        // 0x4400565C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_440056C8;
    }
    // 0x4400565C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44005660: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x44005664: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x44005668: beq         $t7, $at, L_440056C8
    if (ctx->r15 == ctx->r1) {
        // 0x4400566C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_440056C8;
    }
    // 0x4400566C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44005670: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x44005674: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x44005678: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    // 0x4400567C: jal         0x440006C4
    // 0x44005680: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_1;
    // 0x44005680: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x44005684: bne         $v0, $zero, L_440056C4
    if (ctx->r2 != 0) {
        // 0x44005688: addiu       $t9, $zero, 0x180
        ctx->r25 = ADD32(0, 0X180);
            goto L_440056C4;
    }
    // 0x44005688: addiu       $t9, $zero, 0x180
    ctx->r25 = ADD32(0, 0X180);
    // 0x4400568C: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x44005690: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x44005694: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x44005698: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x4400569C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x440056A0: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x440056A4: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x440056A8: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x440056AC: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x440056B0: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x440056B4: lw          $a0, 0x68($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X68);
    // 0x440056B8: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x440056BC: jal         0x440013E8
    // 0x440056C0: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_coll_main_13E8(rdram, ctx);
        goto after_2;
    // 0x440056C0: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_2:
L_440056C4:
    // 0x440056C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_440056C8:
    // 0x440056C8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x440056CC: jr          $ra
    // 0x440056D0: nop

    return;
    // 0x440056D0: nop

;}
RECOMP_FUNC void ovl_coll_main_56D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440056D4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x440056D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x440056DC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x440056E0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x440056E4: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x440056E8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x440056EC: jal         0x440006C4
    // 0x440056F0: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x440056F0: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_0:
    // 0x440056F4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x440056F8: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x440056FC: bne         $t7, $zero, L_44005718
    if (ctx->r15 != 0) {
        // 0x44005700: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_44005718;
    }
    // 0x44005700: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x44005704: bne         $t8, $at, L_44005718
    if (ctx->r24 != ctx->r1) {
        // 0x44005708: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_44005718;
    }
    // 0x44005708: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x4400570C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x44005710: jal         0x4400124C
    // 0x44005714: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    ovl_coll_main_124C(rdram, ctx);
        goto after_1;
    // 0x44005714: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    after_1:
L_44005718:
    // 0x44005718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4400571C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x44005720: jr          $ra
    // 0x44005724: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x44005724: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_coll_main_5728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44005728: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x4400572C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x44005730: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x44005734: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x44005738: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4400573C: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x44005740: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x44005744: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x44005748: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x4400574C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x44005750: jal         0x440006C4
    // 0x44005754: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x44005754: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    after_0:
    // 0x44005758: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x4400575C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x44005760: bne         $t7, $zero, L_4400577C
    if (ctx->r15 != 0) {
        // 0x44005764: lw          $t8, 0x2C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X2C);
            goto L_4400577C;
    }
    // 0x44005764: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x44005768: jal         0x44005454
    // 0x4400576C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_coll_main_5454(rdram, ctx);
        goto after_1;
    // 0x4400576C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x44005770: jal         0x4400563C
    // 0x44005774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_563C(rdram, ctx);
        goto after_2;
    // 0x44005774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x44005778: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4400577C:
    // 0x4400577C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x44005780: bne         $t8, $zero, L_440057B4
    if (ctx->r24 != 0) {
        // 0x44005784: addiu       $a1, $zero, 0x29
        ctx->r5 = ADD32(0, 0X29);
            goto L_440057B4;
    }
    // 0x44005784: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x44005788: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x4400578C: jal         0x440006C4
    // 0x44005790: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_3;
    // 0x44005790: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x44005794: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x44005798: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4400579C: beq         $t9, $at, L_44005874
    if (ctx->r25 == ctx->r1) {
        // 0x440057A0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_44005874;
    }
    // 0x440057A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x440057A4: jal         0x4400124C
    // 0x440057A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_124C(rdram, ctx);
        goto after_4;
    // 0x440057A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x440057AC: b           L_44005874
    // 0x440057B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_44005874;
    // 0x440057B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_440057B4:
    // 0x440057B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x440057B8: addiu       $a3, $s0, 0x14
    ctx->r7 = ADD32(ctx->r16, 0X14);
    // 0x440057BC: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x440057C0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x440057C4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x440057C8: swc1        $f0, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f0.u32l;
    // 0x440057CC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x440057D0: jal         0x44005534
    // 0x440057D4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    ovl_coll_main_5534(rdram, ctx);
        goto after_5;
    // 0x440057D4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_5:
    // 0x440057D8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x440057DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x440057E0: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x440057E4: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x440057E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x440057EC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x440057F0: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x440057F4: swc1        $f10, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f10.u32l;
    // 0x440057F8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x440057FC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x44005800: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x44005804: jal         0x440006C4
    // 0x44005808: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_6;
    // 0x44005808: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_6:
    // 0x4400580C: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x44005810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x44005814: bne         $v0, $zero, L_4400583C
    if (ctx->r2 != 0) {
        // 0x44005818: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_4400583C;
    }
    // 0x44005818: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4400581C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x44005820: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x44005824: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x44005828: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4400582C: jal         0x44004B98
    // 0x44005830: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    ovl_coll_main_4B98(rdram, ctx);
        goto after_7;
    // 0x44005830: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x44005834: b           L_44005874
    // 0x44005838: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_44005874;
    // 0x44005838: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4400583C:
    // 0x4400583C: bne         $v0, $at, L_44005860
    if (ctx->r2 != ctx->r1) {
        // 0x44005840: addiu       $at, $zero, 0x12C
        ctx->r1 = ADD32(0, 0X12C);
            goto L_44005860;
    }
    // 0x44005840: addiu       $at, $zero, 0x12C
    ctx->r1 = ADD32(0, 0X12C);
    // 0x44005844: jal         0x440055D0
    // 0x44005848: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_55D0(rdram, ctx);
        goto after_8;
    // 0x44005848: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x4400584C: jal         0x440056D4
    // 0x44005850: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_56D4(rdram, ctx);
        goto after_9;
    // 0x44005850: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x44005854: b           L_44005874
    // 0x44005858: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_44005874;
    // 0x44005858: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4400585C: addiu       $at, $zero, 0x12C
    ctx->r1 = ADD32(0, 0X12C);
L_44005860:
    // 0x44005860: bne         $v0, $at, L_44005874
    if (ctx->r2 != ctx->r1) {
        // 0x44005864: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_44005874;
    }
    // 0x44005864: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x44005868: jal         0x4400124C
    // 0x4400586C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_124C(rdram, ctx);
        goto after_10;
    // 0x4400586C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x44005870: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_44005874:
    // 0x44005874: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x44005878: jr          $ra
    // 0x4400587C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x4400587C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_coll_main_5880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44005880: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x44005884: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x44005888: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4400588C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x44005890: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x44005894: addiu       $a1, $zero, 0x5B
    ctx->r5 = ADD32(0, 0X5B);
    // 0x44005898: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4400589C: jal         0x44004B98
    // 0x440058A0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_coll_main_4B98(rdram, ctx);
        goto after_0;
    // 0x440058A0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x440058A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x440058A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x440058AC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x440058B0: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x440058B4: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x440058B8: jal         0x44004B98
    // 0x440058BC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_coll_main_4B98(rdram, ctx);
        goto after_1;
    // 0x440058BC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x440058C0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x440058C4: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x440058C8: sw          $t6, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->r14;
    // 0x440058CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x440058D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x440058D4: jr          $ra
    // 0x440058D8: nop

    return;
    // 0x440058D8: nop

;}
RECOMP_FUNC void ovl_coll_main_58DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440058DC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x440058E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x440058E4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x440058E8: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x440058EC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x440058F0: jal         0x440006C4
    // 0x440058F4: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x440058F4: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_0:
    // 0x440058F8: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x440058FC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x44005900: bne         $t7, $zero, L_44005944
    if (ctx->r15 != 0) {
        // 0x44005904: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_44005944;
    }
    // 0x44005904: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x44005908: bne         $t8, $at, L_44005948
    if (ctx->r24 != ctx->r1) {
        // 0x4400590C: lw          $t3, 0x50($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X50);
            goto L_44005948;
    }
    // 0x4400590C: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x44005910: jal         0x4400034C
    // 0x44005914: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_coll_main_34C(rdram, ctx);
        goto after_1;
    // 0x44005914: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x44005918: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x4400591C: lui         $t0, 0x4400
    ctx->r8 = S32(0X4400 << 16);
    // 0x44005920: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x44005924: lw          $t0, 0x6C80($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6C80);
    // 0x44005928: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x4400592C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x44005930: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x44005934: lw          $a0, 0x68($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X68);
    // 0x44005938: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x4400593C: jal         0x440013E8
    // 0x44005940: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_coll_main_13E8(rdram, ctx);
        goto after_2;
    // 0x44005940: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
L_44005944:
    // 0x44005944: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
L_44005948:
    // 0x44005948: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x4400594C: sw          $t2, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->r10;
    // 0x44005950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44005954: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x44005958: jr          $ra
    // 0x4400595C: nop

    return;
    // 0x4400595C: nop

;}
RECOMP_FUNC void ovl_coll_main_5960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44005960: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x44005964: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x44005968: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4400596C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x44005970: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x44005974: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x44005978: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x4400597C: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x44005980: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x44005984: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x44005988: jal         0x440006C4
    // 0x4400598C: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4400598C: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    after_0:
    // 0x44005990: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x44005994: nop

    // 0x44005998: bne         $t7, $zero, L_440059AC
    if (ctx->r15 != 0) {
        // 0x4400599C: lw          $t8, 0x24($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X24);
            goto L_440059AC;
    }
    // 0x4400599C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x440059A0: jal         0x44005880
    // 0x440059A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_5880(rdram, ctx);
        goto after_1;
    // 0x440059A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x440059A8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
L_440059AC:
    // 0x440059AC: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x440059B0: bne         $t8, $zero, L_440059E4
    if (ctx->r24 != 0) {
        // 0x440059B4: nop
    
            goto L_440059E4;
    }
    // 0x440059B4: nop

    // 0x440059B8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x440059BC: jal         0x440006C4
    // 0x440059C0: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_2;
    // 0x440059C0: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x440059C4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x440059C8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x440059CC: beq         $t9, $at, L_44005AFC
    if (ctx->r25 == ctx->r1) {
        // 0x440059D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_44005AFC;
    }
    // 0x440059D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x440059D4: jal         0x4400124C
    // 0x440059D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_124C(rdram, ctx);
        goto after_3;
    // 0x440059D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x440059DC: b           L_44005AFC
    // 0x440059E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_44005AFC;
    // 0x440059E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_440059E4:
    // 0x440059E4: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x440059E8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x440059EC: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x440059F0: beq         $t0, $zero, L_44005A00
    if (ctx->r8 == 0) {
        // 0x440059F4: and         $t1, $v0, $at
        ctx->r9 = ctx->r2 & ctx->r1;
            goto L_44005A00;
    }
    // 0x440059F4: and         $t1, $v0, $at
    ctx->r9 = ctx->r2 & ctx->r1;
    // 0x440059F8: b           L_44005A10
    // 0x440059FC: sw          $t1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r9;
        goto L_44005A10;
    // 0x440059FC: sw          $t1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r9;
L_44005A00:
    // 0x44005A00: jal         0x4400124C
    // 0x44005A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_124C(rdram, ctx);
        goto after_4;
    // 0x44005A04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x44005A08: b           L_44005AFC
    // 0x44005A0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_44005AFC;
    // 0x44005A0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_44005A10:
    // 0x44005A10: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x44005A14: nop

    // 0x44005A18: beq         $v0, $zero, L_44005A24
    if (ctx->r2 == 0) {
        // 0x44005A1C: addiu       $t2, $v0, -0x1
        ctx->r10 = ADD32(ctx->r2, -0X1);
            goto L_44005A24;
    }
    // 0x44005A1C: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x44005A20: sw          $t2, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r10;
L_44005A24:
    // 0x44005A24: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x44005A28: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x44005A2C: lwc1        $f6, 0xC($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0XC);
    // 0x44005A30: nop

    // 0x44005A34: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x44005A38: nop

    // 0x44005A3C: bc1t        L_44005AC0
    if (c1cs) {
        // 0x44005A40: nop
    
            goto L_44005AC0;
    }
    // 0x44005A40: nop

    // 0x44005A44: lw          $t4, 0x18($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X18);
    // 0x44005A48: nop

    // 0x44005A4C: bne         $t4, $zero, L_44005A68
    if (ctx->r12 != 0) {
        // 0x44005A50: nop
    
            goto L_44005A68;
    }
    // 0x44005A50: nop

    // 0x44005A54: jal         0x44005880
    // 0x44005A58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_5880(rdram, ctx);
        goto after_5;
    // 0x44005A58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x44005A5C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x44005A60: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x44005A64: sw          $t5, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->r13;
L_44005A68:
    // 0x44005A68: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x44005A6C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x44005A70: beq         $v0, $zero, L_44005AA0
    if (ctx->r2 == 0) {
        // 0x44005A74: addiu       $t7, $v0, -0x1
        ctx->r15 = ADD32(ctx->r2, -0X1);
            goto L_44005AA0;
    }
    // 0x44005A74: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x44005A78: sw          $t7, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r15;
    // 0x44005A7C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x44005A80: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x44005A84: lwc1        $f8, 0xC($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0XC);
    // 0x44005A88: addiu       $t0, $t7, -0x1
    ctx->r8 = ADD32(ctx->r15, -0X1);
    // 0x44005A8C: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x44005A90: nop

    // 0x44005A94: bc1f        L_44005AA0
    if (!c1cs) {
        // 0x44005A98: nop
    
            goto L_44005AA0;
    }
    // 0x44005A98: nop

    // 0x44005A9C: sw          $t0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r8;
L_44005AA0:
    // 0x44005AA0: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x44005AA4: nop

    // 0x44005AA8: bgtz        $t1, L_44005AFC
    if (SIGNED(ctx->r9) > 0) {
        // 0x44005AAC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_44005AFC;
    }
    // 0x44005AAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x44005AB0: jal         0x440058DC
    // 0x44005AB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_58DC(rdram, ctx);
        goto after_6;
    // 0x44005AB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x44005AB8: b           L_44005AFC
    // 0x44005ABC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_44005AFC;
    // 0x44005ABC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_44005AC0:
    // 0x44005AC0: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x44005AC4: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x44005AC8: nop

    // 0x44005ACC: slti        $at, $t2, 0x64
    ctx->r1 = SIGNED(ctx->r10) < 0X64 ? 1 : 0;
    // 0x44005AD0: bne         $at, $zero, L_44005AFC
    if (ctx->r1 != 0) {
        // 0x44005AD4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_44005AFC;
    }
    // 0x44005AD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x44005AD8: lw          $t3, 0x18($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X18);
    // 0x44005ADC: nop

    // 0x44005AE0: bne         $t3, $zero, L_44005AFC
    if (ctx->r11 != 0) {
        // 0x44005AE4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_44005AFC;
    }
    // 0x44005AE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x44005AE8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x44005AEC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x44005AF0: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x44005AF4: sw          $t4, 0x38($t5)
    MEM_W(0X38, ctx->r13) = ctx->r12;
    // 0x44005AF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_44005AFC:
    // 0x44005AFC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x44005B00: jr          $ra
    // 0x44005B04: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x44005B04: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_coll_main_5B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44005B08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44005B0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44005B10: jal         0x44005960
    // 0x44005B14: nop

    ovl_coll_main_5960(rdram, ctx);
        goto after_0;
    // 0x44005B14: nop

    after_0:
    // 0x44005B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44005B1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44005B20: jr          $ra
    // 0x44005B24: nop

    return;
    // 0x44005B24: nop

;}
RECOMP_FUNC void ovl_coll_main_5B28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44005B28: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x44005B2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x44005B30: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x44005B34: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x44005B38: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x44005B3C: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x44005B40: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x44005B44: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x44005B48: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x44005B4C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x44005B50: jal         0x440006C4
    // 0x44005B54: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x44005B54: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    after_0:
    // 0x44005B58: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x44005B5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x44005B60: bne         $t7, $zero, L_44005B74
    if (ctx->r15 != 0) {
        // 0x44005B64: lw          $t8, 0x2C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X2C);
            goto L_44005B74;
    }
    // 0x44005B64: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x44005B68: jal         0x44005454
    // 0x44005B6C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    ovl_coll_main_5454(rdram, ctx);
        goto after_1;
    // 0x44005B6C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_1:
    // 0x44005B70: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_44005B74:
    // 0x44005B74: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x44005B78: bne         $t8, $zero, L_44005BAC
    if (ctx->r24 != 0) {
        // 0x44005B7C: addiu       $a1, $zero, 0x29
        ctx->r5 = ADD32(0, 0X29);
            goto L_44005BAC;
    }
    // 0x44005B7C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x44005B80: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x44005B84: jal         0x440006C4
    // 0x44005B88: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_2;
    // 0x44005B88: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x44005B8C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x44005B90: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x44005B94: beq         $t9, $at, L_44005C94
    if (ctx->r25 == ctx->r1) {
        // 0x44005B98: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_44005C94;
    }
    // 0x44005B98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x44005B9C: jal         0x4400124C
    // 0x44005BA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_124C(rdram, ctx);
        goto after_3;
    // 0x44005BA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x44005BA4: b           L_44005C94
    // 0x44005BA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_44005C94;
    // 0x44005BA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_44005BAC:
    // 0x44005BAC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x44005BB0: addiu       $a3, $s0, 0x14
    ctx->r7 = ADD32(ctx->r16, 0X14);
    // 0x44005BB4: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x44005BB8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x44005BBC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x44005BC0: swc1        $f0, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f0.u32l;
    // 0x44005BC4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x44005BC8: jal         0x44005534
    // 0x44005BCC: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    ovl_coll_main_5534(rdram, ctx);
        goto after_4;
    // 0x44005BCC: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_4:
    // 0x44005BD0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x44005BD4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x44005BD8: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x44005BDC: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x44005BE0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x44005BE4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x44005BE8: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x44005BEC: swc1        $f10, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f10.u32l;
    // 0x44005BF0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x44005BF4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x44005BF8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x44005BFC: jal         0x440006C4
    // 0x44005C00: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_5;
    // 0x44005C00: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_5:
    // 0x44005C04: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x44005C08: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x44005C0C: bne         $v1, $zero, L_44005C5C
    if (ctx->r3 != 0) {
        // 0x44005C10: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_44005C5C;
    }
    // 0x44005C10: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x44005C14: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x44005C18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x44005C1C: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    // 0x44005C20: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x44005C24: jal         0x44004B98
    // 0x44005C28: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_coll_main_4B98(rdram, ctx);
        goto after_6;
    // 0x44005C28: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x44005C2C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x44005C30: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x44005C34: jal         0x440006C4
    // 0x44005C38: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_7;
    // 0x44005C38: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_7:
    // 0x44005C3C: bne         $v0, $zero, L_44005C90
    if (ctx->r2 != 0) {
        // 0x44005C40: addiu       $a1, $zero, 0xF8
        ctx->r5 = ADD32(0, 0XF8);
            goto L_44005C90;
    }
    // 0x44005C40: addiu       $a1, $zero, 0xF8
    ctx->r5 = ADD32(0, 0XF8);
    // 0x44005C44: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    // 0x44005C48: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x44005C4C: jal         0x44000F50
    // 0x44005C50: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    ovl_coll_main_F50(rdram, ctx);
        goto after_8;
    // 0x44005C50: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_8:
    // 0x44005C54: b           L_44005C94
    // 0x44005C58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_44005C94;
    // 0x44005C58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_44005C5C:
    // 0x44005C5C: bne         $v1, $at, L_44005C80
    if (ctx->r3 != ctx->r1) {
        // 0x44005C60: addiu       $at, $zero, 0x12C
        ctx->r1 = ADD32(0, 0X12C);
            goto L_44005C80;
    }
    // 0x44005C60: addiu       $at, $zero, 0x12C
    ctx->r1 = ADD32(0, 0X12C);
    // 0x44005C64: jal         0x440055D0
    // 0x44005C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_55D0(rdram, ctx);
        goto after_9;
    // 0x44005C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x44005C6C: jal         0x440056D4
    // 0x44005C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_56D4(rdram, ctx);
        goto after_10;
    // 0x44005C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x44005C74: b           L_44005C94
    // 0x44005C78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_44005C94;
    // 0x44005C78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x44005C7C: addiu       $at, $zero, 0x12C
    ctx->r1 = ADD32(0, 0X12C);
L_44005C80:
    // 0x44005C80: bne         $v1, $at, L_44005C94
    if (ctx->r3 != ctx->r1) {
        // 0x44005C84: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_44005C94;
    }
    // 0x44005C84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x44005C88: jal         0x4400124C
    // 0x44005C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_124C(rdram, ctx);
        goto after_11;
    // 0x44005C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
L_44005C90:
    // 0x44005C90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_44005C94:
    // 0x44005C94: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x44005C98: jr          $ra
    // 0x44005C9C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x44005C9C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_coll_main_5CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44005CA0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x44005CA4: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x44005CA8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x44005CAC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x44005CB0: nop

    // 0x44005CB4: bc1f        L_44005CE4
    if (!c1cs) {
        // 0x44005CB8: nop
    
            goto L_44005CE4;
    }
    // 0x44005CB8: nop

    // 0x44005CBC: sub.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x44005CC0: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x44005CC4: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x44005CC8: nop

    // 0x44005CCC: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x44005CD0: nop

    // 0x44005CD4: bc1f        L_44005D18
    if (!c1cs) {
        // 0x44005CD8: nop
    
            goto L_44005D18;
    }
    // 0x44005CD8: nop

    // 0x44005CDC: jr          $ra
    // 0x44005CE0: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
    return;
    // 0x44005CE0: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
L_44005CE4:
    // 0x44005CE4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x44005CE8: nop

    // 0x44005CEC: bc1f        L_44005D18
    if (!c1cs) {
        // 0x44005CF0: nop
    
            goto L_44005D18;
    }
    // 0x44005CF0: nop

    // 0x44005CF4: add.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x44005CF8: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x44005CFC: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x44005D00: nop

    // 0x44005D04: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x44005D08: nop

    // 0x44005D0C: bc1f        L_44005D18
    if (!c1cs) {
        // 0x44005D10: nop
    
            goto L_44005D18;
    }
    // 0x44005D10: nop

    // 0x44005D14: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
L_44005D18:
    // 0x44005D18: jr          $ra
    // 0x44005D1C: nop

    return;
    // 0x44005D1C: nop

;}
RECOMP_FUNC void ovl_coll_main_5D20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44005D20: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x44005D24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x44005D28: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x44005D2C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x44005D30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x44005D34: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x44005D38: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x44005D3C: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x44005D40: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x44005D44: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x44005D48: jal         0x440006C4
    // 0x44005D4C: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x44005D4C: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    after_0:
    // 0x44005D50: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x44005D54: nop

    // 0x44005D58: beq         $t7, $zero, L_44005D74
    if (ctx->r15 == 0) {
        // 0x44005D5C: nop
    
            goto L_44005D74;
    }
    // 0x44005D5C: nop

    // 0x44005D60: lw          $t8, 0x3C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X3C);
    // 0x44005D64: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x44005D68: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x44005D6C: beq         $t9, $zero, L_44005D84
    if (ctx->r25 == 0) {
        // 0x44005D70: nop
    
            goto L_44005D84;
    }
    // 0x44005D70: nop

L_44005D74:
    // 0x44005D74: jal         0x4400124C
    // 0x44005D78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_124C(rdram, ctx);
        goto after_1;
    // 0x44005D78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x44005D7C: b           L_440062C8
    // 0x44005D80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_440062C8;
    // 0x44005D80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_44005D84:
    // 0x44005D84: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x44005D88: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x44005D8C: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x44005D90: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x44005D94: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x44005D98: bc1f        L_44005DD4
    if (!c1cs) {
        // 0x44005D9C: lui         $at, 0x4400
        ctx->r1 = S32(0X4400 << 16);
            goto L_44005DD4;
    }
    // 0x44005D9C: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x44005DA0: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x44005DA4: lwc1        $f6, 0x6D04($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6D04);
    // 0x44005DA8: lwc1        $f0, 0x4($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X4);
    // 0x44005DAC: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x44005DB0: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x44005DB4: nop

    // 0x44005DB8: bc1t        L_44005DC8
    if (c1cs) {
        // 0x44005DBC: nop
    
            goto L_44005DC8;
    }
    // 0x44005DBC: nop

    // 0x44005DC0: b           L_44005EBC
    // 0x44005DC4: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
        goto L_44005EBC;
    // 0x44005DC4: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
L_44005DC8:
    // 0x44005DC8: lwc1        $f8, 0x10($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X10);
    // 0x44005DCC: b           L_44005EBC
    // 0x44005DD0: swc1        $f8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f8.u32l;
        goto L_44005EBC;
    // 0x44005DD0: swc1        $f8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f8.u32l;
L_44005DD4:
    // 0x44005DD4: lwc1        $f0, 0x4($t2)
    ctx->f0.u32l = MEM_W(ctx->r10, 0X4);
    // 0x44005DD8: lwc1        $f10, 0x6D08($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6D08);
    // 0x44005DDC: nop

    // 0x44005DE0: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x44005DE4: nop

    // 0x44005DE8: bc1t        L_44005EBC
    if (c1cs) {
        // 0x44005DEC: nop
    
            goto L_44005EBC;
    }
    // 0x44005DEC: nop

    // 0x44005DF0: lwc1        $f2, 0x18($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
    // 0x44005DF4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x44005DF8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x44005DFC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x44005E00: bc1f        L_44005E3C
    if (!c1cs) {
        // 0x44005E04: nop
    
            goto L_44005E3C;
    }
    // 0x44005E04: nop

    // 0x44005E08: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x44005E0C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x44005E10: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x44005E14: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x44005E18: nop

    // 0x44005E1C: bc1f        L_44005E30
    if (!c1cs) {
        // 0x44005E20: nop
    
            goto L_44005E30;
    }
    // 0x44005E20: nop

    // 0x44005E24: sub.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x44005E28: b           L_44005E6C
    // 0x44005E2C: swc1        $f8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f8.u32l;
        goto L_44005E6C;
    // 0x44005E2C: swc1        $f8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f8.u32l;
L_44005E30:
    // 0x44005E30: add.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x44005E34: b           L_44005E6C
    // 0x44005E38: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
        goto L_44005E6C;
    // 0x44005E38: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
L_44005E3C:
    // 0x44005E3C: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x44005E40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x44005E44: nop

    // 0x44005E48: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x44005E4C: nop

    // 0x44005E50: bc1f        L_44005E64
    if (!c1cs) {
        // 0x44005E54: nop
    
            goto L_44005E64;
    }
    // 0x44005E54: nop

    // 0x44005E58: add.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x44005E5C: b           L_44005E6C
    // 0x44005E60: swc1        $f8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f8.u32l;
        goto L_44005E6C;
    // 0x44005E60: swc1        $f8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f8.u32l;
L_44005E64:
    // 0x44005E64: sub.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x44005E68: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
L_44005E6C:
    // 0x44005E6C: lwc1        $f2, 0x18($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
    // 0x44005E70: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x44005E74: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x44005E78: nop

    // 0x44005E7C: bc1f        L_44005E9C
    if (!c1cs) {
        // 0x44005E80: nop
    
            goto L_44005E9C;
    }
    // 0x44005E80: nop

    // 0x44005E84: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x44005E88: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x44005E8C: nop

    // 0x44005E90: add.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x44005E94: b           L_44005EBC
    // 0x44005E98: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
        goto L_44005EBC;
    // 0x44005E98: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
L_44005E9C:
    // 0x44005E9C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x44005EA0: nop

    // 0x44005EA4: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x44005EA8: nop

    // 0x44005EAC: bc1f        L_44005EBC
    if (!c1cs) {
        // 0x44005EB0: nop
    
            goto L_44005EBC;
    }
    // 0x44005EB0: nop

    // 0x44005EB4: sub.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x44005EB8: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
L_44005EBC:
    // 0x44005EBC: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x44005EC0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x44005EC4: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x44005EC8: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    // 0x44005ECC: jal         0x440013E8
    // 0x44005ED0: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    ovl_coll_main_13E8(rdram, ctx);
        goto after_2;
    // 0x44005ED0: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_2:
    // 0x44005ED4: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x44005ED8: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x44005EDC: lwc1        $f10, 0x6D0C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6D0C);
    // 0x44005EE0: lwc1        $f0, 0x4($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0X4);
    // 0x44005EE4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x44005EE8: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x44005EEC: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x44005EF0: bc1t        L_44005F54
    if (c1cs) {
        // 0x44005EF4: nop
    
            goto L_44005F54;
    }
    // 0x44005EF4: nop

    // 0x44005EF8: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x44005EFC: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    // 0x44005F00: jal         0x440013E8
    // 0x44005F04: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    ovl_coll_main_13E8(rdram, ctx);
        goto after_3;
    // 0x44005F04: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_3:
    // 0x44005F08: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x44005F0C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x44005F10: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x44005F14: lwc1        $f4, 0xC($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0XC);
    // 0x44005F18: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x44005F1C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x44005F20: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x44005F24: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x44005F28: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x44005F2C: swc1        $f4, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f4.u32l;
    // 0x44005F30: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x44005F34: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x44005F38: lwc1        $f6, 0xC($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0XC);
    // 0x44005F3C: nop

    // 0x44005F40: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x44005F44: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x44005F48: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x44005F4C: b           L_44005F5C
    // 0x44005F50: swc1        $f6, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f6.u32l;
        goto L_44005F5C;
    // 0x44005F50: swc1        $f6, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f6.u32l;
L_44005F54:
    // 0x44005F54: swc1        $f16, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f16.u32l;
    // 0x44005F58: swc1        $f16, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f16.u32l;
L_44005F5C:
    // 0x44005F5C: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x44005F60: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x44005F64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x44005F68: lwc1        $f0, 0x24($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X24);
    // 0x44005F6C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x44005F70: c.eq.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl == ctx->f0.fl;
    // 0x44005F74: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    // 0x44005F78: bc1f        L_44005F94
    if (!c1cs) {
        // 0x44005F7C: lui         $a1, 0x3DAE
        ctx->r5 = S32(0X3DAE << 16);
            goto L_44005F94;
    }
    // 0x44005F7C: lui         $a1, 0x3DAE
    ctx->r5 = S32(0X3DAE << 16);
    // 0x44005F80: swc1        $f16, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f16.u32l;
    // 0x44005F84: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x44005F88: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x44005F8C: b           L_44006078
    // 0x44005F90: swc1        $f16, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f16.u32l;
        goto L_44006078;
    // 0x44005F90: swc1        $f16, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f16.u32l;
L_44005F94:
    // 0x44005F94: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x44005F98: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x44005F9C: bc1f        L_44005FB0
    if (!c1cs) {
        // 0x44005FA0: lui         $at, 0x4170
        ctx->r1 = S32(0X4170 << 16);
            goto L_44005FB0;
    }
    // 0x44005FA0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x44005FA4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x44005FA8: b           L_44006078
    // 0x44005FAC: swc1        $f16, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f16.u32l;
        goto L_44006078;
    // 0x44005FAC: swc1        $f16, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f16.u32l;
L_44005FB0:
    // 0x44005FB0: swc1        $f16, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f16.u32l;
    // 0x44005FB4: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x44005FB8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x44005FBC: lwc1        $f10, 0x18($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X18);
    // 0x44005FC0: nop

    // 0x44005FC4: swc1        $f10, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f10.u32l;
    // 0x44005FC8: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x44005FCC: nop

    // 0x44005FD0: lwc1        $f0, 0x20($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X20);
    // 0x44005FD4: nop

    // 0x44005FD8: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x44005FDC: nop

    // 0x44005FE0: bc1f        L_44006000
    if (!c1cs) {
        // 0x44005FE4: nop
    
            goto L_44006000;
    }
    // 0x44005FE4: nop

    // 0x44005FE8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x44005FEC: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x44005FF0: nop

    // 0x44005FF4: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x44005FF8: b           L_44006024
    // 0x44005FFC: swc1        $f6, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f6.u32l;
        goto L_44006024;
    // 0x44005FFC: swc1        $f6, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f6.u32l;
L_44006000:
    // 0x44006000: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x44006004: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x44006008: bc1f        L_44006028
    if (!c1cs) {
        // 0x4400600C: lw          $t1, 0x5C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X5C);
            goto L_44006028;
    }
    // 0x4400600C: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x44006010: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x44006014: lwc1        $f8, 0x54($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X54);
    // 0x44006018: nop

    // 0x4400601C: sub.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x44006020: swc1        $f10, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f10.u32l;
L_44006024:
    // 0x44006024: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
L_44006028:
    // 0x44006028: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x4400602C: lwc1        $f0, 0x28($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X28);
    // 0x44006030: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x44006034: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x44006038: nop

    // 0x4400603C: bc1f        L_44006058
    if (!c1cs) {
        // 0x44006040: nop
    
            goto L_44006058;
    }
    // 0x44006040: nop

    // 0x44006044: lwc1        $f4, 0x58($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X58);
    // 0x44006048: nop

    // 0x4400604C: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x44006050: b           L_44006078
    // 0x44006054: swc1        $f6, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f6.u32l;
        goto L_44006078;
    // 0x44006054: swc1        $f6, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f6.u32l;
L_44006058:
    // 0x44006058: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x4400605C: nop

    // 0x44006060: bc1f        L_4400607C
    if (!c1cs) {
        // 0x44006064: lw          $t2, 0x5C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X5C);
            goto L_4400607C;
    }
    // 0x44006064: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x44006068: lwc1        $f8, 0x58($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X58);
    // 0x4400606C: nop

    // 0x44006070: sub.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x44006074: swc1        $f10, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f10.u32l;
L_44006078:
    // 0x44006078: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
L_4400607C:
    // 0x4400607C: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x44006080: lwc1        $f14, 0xC($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0XC);
    // 0x44006084: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x44006088: c.eq.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl == ctx->f14.fl;
    // 0x4400608C: nop

    // 0x44006090: bc1f        L_440060B0
    if (!c1cs) {
        // 0x44006094: nop
    
            goto L_440060B0;
    }
    // 0x44006094: nop

    // 0x44006098: jal         0x44005CA0
    // 0x4400609C: ori         $a1, $a1, 0x147B
    ctx->r5 = ctx->r5 | 0X147B;
    ovl_coll_main_5CA0(rdram, ctx);
        goto after_4;
    // 0x4400609C: ori         $a1, $a1, 0x147B
    ctx->r5 = ctx->r5 | 0X147B;
    after_4:
    // 0x440060A0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x440060A4: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x440060A8: b           L_44006190
    // 0x440060AC: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
        goto L_44006190;
    // 0x440060AC: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
L_440060B0:
    // 0x440060B0: lwc1        $f0, 0x4($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0X4);
    // 0x440060B4: lwc1        $f2, 0x18($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
    // 0x440060B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x440060BC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x440060C0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x440060C4: bc1f        L_440060D8
    if (!c1cs) {
        // 0x440060C8: nop
    
            goto L_440060D8;
    }
    // 0x440060C8: nop

    // 0x440060CC: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x440060D0: b           L_440060DC
    // 0x440060D4: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_440060DC;
    // 0x440060D4: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_440060D8:
    // 0x440060D8: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_440060DC:
    // 0x440060DC: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x440060E0: nop

    // 0x440060E4: bc1f        L_440060F8
    if (!c1cs) {
        // 0x440060E8: nop
    
            goto L_440060F8;
    }
    // 0x440060E8: nop

    // 0x440060EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x440060F0: nop

    // 0x440060F4: sub.s       $f12, $f6, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f12.fl;
L_440060F8:
    // 0x440060F8: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
    // 0x440060FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x44006100: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x44006104: c.le.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl <= ctx->f8.fl;
    // 0x44006108: nop

    // 0x4400610C: bc1f        L_44006154
    if (!c1cs) {
        // 0x44006110: nop
    
            goto L_44006154;
    }
    // 0x44006110: nop

    // 0x44006114: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x44006118: lwc1        $f4, 0x6D10($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6D10);
    // 0x4400611C: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x44006120: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x44006124: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x44006128: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x4400612C: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x44006130: nop

    // 0x44006134: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x44006138: nop

    // 0x4400613C: bc1f        L_4400618C
    if (!c1cs) {
        // 0x44006140: nop
    
            goto L_4400618C;
    }
    // 0x44006140: nop

    // 0x44006144: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
    // 0x44006148: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x4400614C: b           L_44006190
    // 0x44006150: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
        goto L_44006190;
    // 0x44006150: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
L_44006154:
    // 0x44006154: lwc1        $f10, 0x6D14($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6D14);
    // 0x44006158: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x4400615C: mul.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x44006160: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x44006164: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x44006168: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x4400616C: nop

    // 0x44006170: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x44006174: nop

    // 0x44006178: bc1f        L_4400618C
    if (!c1cs) {
        // 0x4400617C: nop
    
            goto L_4400618C;
    }
    // 0x4400617C: nop

    // 0x44006180: swc1        $f16, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f16.u32l;
    // 0x44006184: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x44006188: nop

L_4400618C:
    // 0x4400618C: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
L_44006190:
    // 0x44006190: lwc1        $f10, 0x54($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X54);
    // 0x44006194: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x44006198: lwc1        $f4, 0x58($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X58);
    // 0x4400619C: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x440061A0: swc1        $f8, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f8.u32l;
    // 0x440061A4: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x440061A8: nop

    // 0x440061AC: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x440061B0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x440061B4: swc1        $f8, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f8.u32l;
    // 0x440061B8: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
    // 0x440061BC: nop

    // 0x440061C0: slti        $at, $t4, 0x8
    ctx->r1 = SIGNED(ctx->r12) < 0X8 ? 1 : 0;
    // 0x440061C4: bne         $at, $zero, L_44006274
    if (ctx->r1 != 0) {
        // 0x440061C8: lw          $t6, 0x5C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X5C);
            goto L_44006274;
    }
    // 0x440061C8: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x440061CC: lwc1        $f10, 0x5C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x440061D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x440061D4: sub.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x440061D8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x440061DC: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x440061E0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x440061E4: bc1f        L_440061F4
    if (!c1cs) {
        // 0x440061E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_440061F4;
    }
    // 0x440061E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x440061EC: b           L_440061F8
    // 0x440061F0: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_440061F8;
    // 0x440061F0: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_440061F4:
    // 0x440061F4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_440061F8:
    // 0x440061F8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x440061FC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x44006200: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x44006204: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x44006208: bc1t        L_44006250
    if (c1cs) {
        // 0x4400620C: nop
    
            goto L_44006250;
    }
    // 0x4400620C: nop

    // 0x44006210: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x44006214: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x44006218: bc1f        L_44006268
    if (!c1cs) {
        // 0x4400621C: nop
    
            goto L_44006268;
    }
    // 0x4400621C: nop

    // 0x44006220: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x44006224: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x44006228: c.le.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl <= ctx->f12.fl;
    // 0x4400622C: nop

    // 0x44006230: bc1f        L_44006268
    if (!c1cs) {
        // 0x44006234: nop
    
            goto L_44006268;
    }
    // 0x44006234: nop

    // 0x44006238: lwc1        $f8, 0xC($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0XC);
    // 0x4400623C: nop

    // 0x44006240: c.eq.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl == ctx->f8.fl;
    // 0x44006244: nop

    // 0x44006248: bc1f        L_44006268
    if (!c1cs) {
        // 0x4400624C: nop
    
            goto L_44006268;
    }
    // 0x4400624C: nop

L_44006250:
    // 0x44006250: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x44006254: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x44006258: jal         0x44004B98
    // 0x4400625C: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    ovl_coll_main_4B98(rdram, ctx);
        goto after_5;
    // 0x4400625C: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    after_5:
    // 0x44006260: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x44006264: nop

L_44006268:
    // 0x44006268: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x4400626C: swc1        $f12, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f12.u32l;
    // 0x44006270: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
L_44006274:
    // 0x44006274: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x44006278: lwc1        $f10, 0x2C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x4400627C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x44006280: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x44006284: swc1        $f6, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f6.u32l;
    // 0x44006288: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x4400628C: lwc1        $f10, 0x58($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X58);
    // 0x44006290: lwc1        $f8, 0x34($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X34);
    // 0x44006294: nop

    // 0x44006298: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x4400629C: swc1        $f4, 0x34($t7)
    MEM_W(0X34, ctx->r15) = ctx->f4.u32l;
    // 0x440062A0: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x440062A4: nop

    // 0x440062A8: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x440062AC: beq         $t8, $zero, L_440062BC
    if (ctx->r24 == 0) {
        // 0x440062B0: and         $t9, $v0, $at
        ctx->r25 = ctx->r2 & ctx->r1;
            goto L_440062BC;
    }
    // 0x440062B0: and         $t9, $v0, $at
    ctx->r25 = ctx->r2 & ctx->r1;
    // 0x440062B4: b           L_440062C4
    // 0x440062B8: sw          $t9, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r25;
        goto L_440062C4;
    // 0x440062B8: sw          $t9, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r25;
L_440062BC:
    // 0x440062BC: jal         0x4400124C
    // 0x440062C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_124C(rdram, ctx);
        goto after_6;
    // 0x440062C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_440062C4:
    // 0x440062C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_440062C8:
    // 0x440062C8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x440062CC: jr          $ra
    // 0x440062D0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x440062D0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void ovl_coll_main_62D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440062D4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x440062D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x440062DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x440062E0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x440062E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x440062E8: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x440062EC: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x440062F0: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x440062F4: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x440062F8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x440062FC: jal         0x440006C4
    // 0x44006300: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_0;
    // 0x44006300: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    after_0:
    // 0x44006304: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x44006308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4400630C: bne         $t7, $zero, L_44006320
    if (ctx->r15 != 0) {
        // 0x44006310: lw          $t8, 0x24($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X24);
            goto L_44006320;
    }
    // 0x44006310: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x44006314: jal         0x44005454
    // 0x44006318: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_coll_main_5454(rdram, ctx);
        goto after_1;
    // 0x44006318: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x4400631C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
L_44006320:
    // 0x44006320: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x44006324: bne         $t8, $zero, L_4400635C
    if (ctx->r24 != 0) {
        // 0x44006328: addiu       $at, $zero, 0x12C
        ctx->r1 = ADD32(0, 0X12C);
            goto L_4400635C;
    }
    // 0x44006328: addiu       $at, $zero, 0x12C
    ctx->r1 = ADD32(0, 0X12C);
    // 0x4400632C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x44006330: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x44006334: jal         0x440006C4
    // 0x44006338: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    ovl_coll_main_6C4(rdram, ctx);
        goto after_2;
    // 0x44006338: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x4400633C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x44006340: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x44006344: beq         $t9, $at, L_44006370
    if (ctx->r25 == ctx->r1) {
        // 0x44006348: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_44006370;
    }
    // 0x44006348: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4400634C: jal         0x4400124C
    // 0x44006350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_124C(rdram, ctx);
        goto after_3;
    // 0x44006350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x44006354: b           L_44006370
    // 0x44006358: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_44006370;
    // 0x44006358: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4400635C:
    // 0x4400635C: bne         $t0, $at, L_44006370
    if (ctx->r8 != ctx->r1) {
        // 0x44006360: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_44006370;
    }
    // 0x44006360: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x44006364: jal         0x4400124C
    // 0x44006368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_coll_main_124C(rdram, ctx);
        goto after_4;
    // 0x44006368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4400636C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_44006370:
    // 0x44006370: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x44006374: jr          $ra
    // 0x44006378: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x44006378: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_mobj_main_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000000: lui         $v0, 0x4500
    ctx->r2 = S32(0X4500 << 16);
    // 0x45000004: jr          $ra
    // 0x45000008: addiu       $v0, $v0, 0x3F00
    ctx->r2 = ADD32(ctx->r2, 0X3F00);
    return;
    // 0x45000008: addiu       $v0, $v0, 0x3F00
    ctx->r2 = ADD32(ctx->r2, 0X3F00);
    // 0x4500000C: nop

;}
RECOMP_FUNC void ovl_mobj_main_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000010: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000014: jr          $t1
    // 0x45000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
;}
RECOMP_FUNC void ovl_mobj_main_1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500001C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000020: jr          $t1
    // 0x45000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
;}
RECOMP_FUNC void ovl_mobj_main_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000028: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4500002C: jr          $t1
    // 0x45000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
;}
RECOMP_FUNC void ovl_mobj_main_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000034: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000038: jr          $t1
    // 0x4500003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4500003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
;}
RECOMP_FUNC void ovl_mobj_main_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000040: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000044: jr          $t1
    // 0x45000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
;}
RECOMP_FUNC void ovl_mobj_main_4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500004C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000050: jr          $t1
    // 0x45000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
;}
RECOMP_FUNC void ovl_mobj_main_58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000058: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4500005C: jr          $t1
    // 0x45000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
;}
RECOMP_FUNC void ovl_mobj_main_64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000064: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000068: jr          $t1
    // 0x4500006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4500006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
;}
RECOMP_FUNC void ovl_mobj_main_70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45000070: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000074: jr          $t1
    // 0x45000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
;}
RECOMP_FUNC void ovl_mobj_main_7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500007C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x45000080: jr          $t1
    // 0x45000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x45000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
;}
