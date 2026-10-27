#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_actor_main_1CB14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001CB14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4001CB18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001CB1C: bne         $a1, $at, L_4001CB3C
    if (ctx->r5 != ctx->r1) {
        // 0x4001CB20: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_4001CB3C;
    }
    // 0x4001CB20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4001CB24: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x4001CB28: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x4001CB2C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x4001CB30: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001CB34: jal         0x40008D20
    // 0x4001CB38: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4001CB38: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_0:
L_4001CB3C:
    // 0x4001CB3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001CB40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4001CB44: jr          $ra
    // 0x4001CB48: nop

    return;
    // 0x4001CB48: nop

;}
RECOMP_FUNC void ovl_actor_main_1CB4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001CB4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001CB50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001CB54: jal         0x4000B32C
    // 0x4001CB58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_B32C(rdram, ctx);
        goto after_0;
    // 0x4001CB58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4001CB5C: beq         $v0, $zero, L_4001CB74
    if (ctx->r2 == 0) {
        // 0x4001CB60: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4001CB74;
    }
    // 0x4001CB60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001CB64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4001CB68: jal         0x40009A74
    // 0x4001CB6C: nop

    ovl_actor_main_9A74(rdram, ctx);
        goto after_1;
    // 0x4001CB6C: nop

    after_1:
    // 0x4001CB70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001CB74:
    // 0x4001CB74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001CB78: jr          $ra
    // 0x4001CB7C: nop

    return;
    // 0x4001CB7C: nop

;}
RECOMP_FUNC void ovl_actor_main_1CB80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001CB80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001CB84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001CB88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4001CB8C: jal         0x4000B364
    // 0x4001CB90: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_actor_main_B364(rdram, ctx);
        goto after_0;
    // 0x4001CB90: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x4001CB94: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4001CB98: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001CB9C: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4001CBA0: nop

    // 0x4001CBA4: sll         $t7, $t6, 11
    ctx->r15 = S32(ctx->r14 << 11);
    // 0x4001CBA8: bgez        $t7, L_4001CBC0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x4001CBAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4001CBC0;
    }
    // 0x4001CBAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001CBB0: lwc1        $f4, 0x108($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X108);
    // 0x4001CBB4: nop

    // 0x4001CBB8: swc1        $f4, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f4.u32l;
    // 0x4001CBBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001CBC0:
    // 0x4001CBC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001CBC4: jr          $ra
    // 0x4001CBC8: nop

    return;
    // 0x4001CBC8: nop

;}
RECOMP_FUNC void ovl_actor_main_1CBCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001CBCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4001CBD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001CBD4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4001CBD8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x4001CBDC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4001CBE0: jal         0x4000034C
    // 0x4001CBE4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_actor_main_34C(rdram, ctx);
        goto after_0;
    // 0x4001CBE4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x4001CBE8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x4001CBEC: beq         $v0, $zero, L_4001CC0C
    if (ctx->r2 == 0) {
        // 0x4001CBF0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_4001CC0C;
    }
    // 0x4001CBF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001CBF4: beq         $v0, $at, L_4001CC14
    if (ctx->r2 == ctx->r1) {
        // 0x4001CBF8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_4001CC14;
    }
    // 0x4001CBF8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4001CBFC: beq         $v0, $at, L_4001CC1C
    if (ctx->r2 == ctx->r1) {
        // 0x4001CC00: nop
    
            goto L_4001CC1C;
    }
    // 0x4001CC00: nop

    // 0x4001CC04: b           L_4001CC24
    // 0x4001CC08: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4001CC24;
    // 0x4001CC08: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_4001CC0C:
    // 0x4001CC0C: b           L_4001CC20
    // 0x4001CC10: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
        goto L_4001CC20;
    // 0x4001CC10: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
L_4001CC14:
    // 0x4001CC14: b           L_4001CC20
    // 0x4001CC18: addiu       $a1, $zero, 0xB5
    ctx->r5 = ADD32(0, 0XB5);
        goto L_4001CC20;
    // 0x4001CC18: addiu       $a1, $zero, 0xB5
    ctx->r5 = ADD32(0, 0XB5);
L_4001CC1C:
    // 0x4001CC1C: addiu       $a1, $zero, 0xB6
    ctx->r5 = ADD32(0, 0XB6);
L_4001CC20:
    // 0x4001CC20: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_4001CC24:
    // 0x4001CC24: beq         $a1, $at, L_4001CC3C
    if (ctx->r5 == ctx->r1) {
        // 0x4001CC28: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4001CC3C;
    }
    // 0x4001CC28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001CC2C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4001CC30: jal         0x4000115C
    // 0x4001CC34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_1;
    // 0x4001CC34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x4001CC38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001CC3C:
    // 0x4001CC3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4001CC40: jr          $ra
    // 0x4001CC44: nop

    return;
    // 0x4001CC44: nop

;}
RECOMP_FUNC void ovl_actor_main_1CC48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001CC48: jr          $ra
    // 0x4001CC4C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x4001CC4C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ovl_actor_main_1CC50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001CC50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001CC54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001CC58: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x4001CC5C: jal         0x40011944
    // 0x4001CC60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_11944(rdram, ctx);
        goto after_0;
    // 0x4001CC60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4001CC64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4001CC68: nop

    // 0x4001CC6C: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
    // 0x4001CC70: jal         0x4001CC48
    // 0x4001CC74: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    ovl_actor_main_1CC48(rdram, ctx);
        goto after_1;
    // 0x4001CC74: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    after_1:
    // 0x4001CC78: jal         0x40000814
    // 0x4001CC7C: nop

    ovl_actor_main_814(rdram, ctx);
        goto after_2;
    // 0x4001CC7C: nop

    after_2:
    // 0x4001CC80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001CC84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001CC88: jr          $ra
    // 0x4001CC8C: nop

    return;
    // 0x4001CC8C: nop

;}
RECOMP_FUNC void ovl_actor_main_1CC90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001CC90: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
    // 0x4001CC94: jr          $ra
    // 0x4001CC98: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    return;
    // 0x4001CC98: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_actor_main_1CC9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001CC9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001CCA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001CCA4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x4001CCA8: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x4001CCAC: beq         $v0, $at, L_4001CCC4
    if (ctx->r2 == ctx->r1) {
        // 0x4001CCB0: addiu       $at, $zero, 0x2C
        ctx->r1 = ADD32(0, 0X2C);
            goto L_4001CCC4;
    }
    // 0x4001CCB0: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x4001CCB4: beq         $v0, $at, L_4001CCD4
    if (ctx->r2 == ctx->r1) {
        // 0x4001CCB8: nop
    
            goto L_4001CCD4;
    }
    // 0x4001CCB8: nop

    // 0x4001CCBC: b           L_4001CCE0
    // 0x4001CCC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001CCE0;
    // 0x4001CCC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001CCC4:
    // 0x4001CCC4: jal         0x4001BCF8
    // 0x4001CCC8: nop

    ovl_actor_main_1BCF8(rdram, ctx);
        goto after_0;
    // 0x4001CCC8: nop

    after_0:
    // 0x4001CCCC: b           L_4001CCE0
    // 0x4001CCD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001CCE0;
    // 0x4001CCD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001CCD4:
    // 0x4001CCD4: jal         0x4001BF9C
    // 0x4001CCD8: nop

    ovl_actor_main_1BF9C(rdram, ctx);
        goto after_1;
    // 0x4001CCD8: nop

    after_1:
    // 0x4001CCDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001CCE0:
    // 0x4001CCE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001CCE4: jr          $ra
    // 0x4001CCE8: nop

    return;
    // 0x4001CCE8: nop

;}
RECOMP_FUNC void ovl_actor_main_1CCEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001CCEC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4001CCF0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x4001CCF4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x4001CCF8: bne         $a1, $at, L_4001CD04
    if (ctx->r5 != ctx->r1) {
        // 0x4001CCFC: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_4001CD04;
    }
    // 0x4001CCFC: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x4001CD00: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_4001CD04:
    // 0x4001CD04: jr          $ra
    // 0x4001CD08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4001CD08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_1CD0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001CD0C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x4001CD10: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x4001CD14: beq         $v0, $at, L_4001CD2C
    if (ctx->r2 == ctx->r1) {
        // 0x4001CD18: addiu       $at, $zero, 0x2C
        ctx->r1 = ADD32(0, 0X2C);
            goto L_4001CD2C;
    }
    // 0x4001CD18: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x4001CD1C: beq         $v0, $at, L_4001CD2C
    if (ctx->r2 == ctx->r1) {
        // 0x4001CD20: nop
    
            goto L_4001CD2C;
    }
    // 0x4001CD20: nop

    // 0x4001CD24: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
    // 0x4001CD28: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
L_4001CD2C:
    // 0x4001CD2C: jr          $ra
    // 0x4001CD30: nop

    return;
    // 0x4001CD30: nop

;}
RECOMP_FUNC void ovl_actor_main_1CD34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001CD34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001CD38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001CD3C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x4001CD40: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x4001CD44: beq         $v0, $at, L_4001CD54
    if (ctx->r2 == ctx->r1) {
        // 0x4001CD48: addiu       $at, $zero, 0x2C
        ctx->r1 = ADD32(0, 0X2C);
            goto L_4001CD54;
    }
    // 0x4001CD48: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x4001CD4C: bne         $v0, $at, L_4001CD60
    if (ctx->r2 != ctx->r1) {
        // 0x4001CD50: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4001CD60;
    }
    // 0x4001CD50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001CD54:
    // 0x4001CD54: jal         0x4001C37C
    // 0x4001CD58: nop

    ovl_actor_main_1C37C(rdram, ctx);
        goto after_0;
    // 0x4001CD58: nop

    after_0:
    // 0x4001CD5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001CD60:
    // 0x4001CD60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001CD64: jr          $ra
    // 0x4001CD68: nop

    return;
    // 0x4001CD68: nop

;}
RECOMP_FUNC void ovl_actor_main_1CD6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001CD6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4001CD70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4001CD74: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4001CD78: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001CD7C: jal         0x4000A1B8
    // 0x4001CD80: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    ovl_actor_main_A1B8(rdram, ctx);
        goto after_0;
    // 0x4001CD80: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x4001CD84: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x4001CD88: jal         0x40009E78
    // 0x4001CD8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9E78(rdram, ctx);
        goto after_1;
    // 0x4001CD8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4001CD90: jal         0x4001A888
    // 0x4001CD94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1A888(rdram, ctx);
        goto after_2;
    // 0x4001CD94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x4001CD98: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x4001CD9C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x4001CDA0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x4001CDA4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x4001CDA8: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x4001CDAC: bc1t        L_4001CDC4
    if (c1cs) {
        // 0x4001CDB0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001CDC4;
    }
    // 0x4001CDB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001CDB4: jal         0x4000A1F8
    // 0x4001CDB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_A1F8(rdram, ctx);
        goto after_3;
    // 0x4001CDB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x4001CDBC: b           L_4001CDD0
    // 0x4001CDC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4001CDD0;
    // 0x4001CDC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4001CDC4:
    // 0x4001CDC4: jal         0x40001A8C
    // 0x4001CDC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_4;
    // 0x4001CDC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x4001CDCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4001CDD0:
    // 0x4001CDD0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4001CDD4: jr          $ra
    // 0x4001CDD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4001CDD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_1CDDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001CDDC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4001CDE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001CDE4: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x4001CDE8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x4001CDEC: addiu       $t7, $t6, -0x3
    ctx->r15 = ADD32(ctx->r14, -0X3);
    // 0x4001CDF0: sltiu       $at, $t7, 0x2C
    ctx->r1 = ctx->r15 < 0X2C ? 1 : 0;
    // 0x4001CDF4: beq         $at, $zero, L_4001CE3C
    if (ctx->r1 == 0) {
        // 0x4001CDF8: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_4001CE3C;
    }
    // 0x4001CDF8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x4001CDFC: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001CE00: addu        $at, $at, $t7
    gpr jr_addend_4001CE0C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x4001CE04: lw          $t7, 0x10C($at)
    ctx->r15 = ADD32(ctx->r1, 0X10C);
    // 0x4001CE08: nop

    // 0x4001CE0C: jr          $t7
    // 0x4001CE10: nop

    switch (jr_addend_4001CE0C >> 2) {
        case 0: goto L_4001CE1C; break;
        case 1: goto L_4001CE14; break;
        case 2: goto L_4001CE3C; break;
        case 3: goto L_4001CE3C; break;
        case 4: goto L_4001CE3C; break;
        case 5: goto L_4001CE3C; break;
        case 6: goto L_4001CE3C; break;
        case 7: goto L_4001CE3C; break;
        case 8: goto L_4001CE1C; break;
        case 9: goto L_4001CE3C; break;
        case 10: goto L_4001CE1C; break;
        case 11: goto L_4001CE3C; break;
        case 12: goto L_4001CE3C; break;
        case 13: goto L_4001CE3C; break;
        case 14: goto L_4001CE3C; break;
        case 15: goto L_4001CE3C; break;
        case 16: goto L_4001CE3C; break;
        case 17: goto L_4001CE3C; break;
        case 18: goto L_4001CE3C; break;
        case 19: goto L_4001CE3C; break;
        case 20: goto L_4001CE3C; break;
        case 21: goto L_4001CE3C; break;
        case 22: goto L_4001CE3C; break;
        case 23: goto L_4001CE3C; break;
        case 24: goto L_4001CE3C; break;
        case 25: goto L_4001CE3C; break;
        case 26: goto L_4001CE1C; break;
        case 27: goto L_4001CE3C; break;
        case 28: goto L_4001CE3C; break;
        case 29: goto L_4001CE28; break;
        case 30: goto L_4001CE3C; break;
        case 31: goto L_4001CE28; break;
        case 32: goto L_4001CE28; break;
        case 33: goto L_4001CE34; break;
        case 34: goto L_4001CE3C; break;
        case 35: goto L_4001CE1C; break;
        case 36: goto L_4001CE28; break;
        case 37: goto L_4001CE34; break;
        case 38: goto L_4001CE28; break;
        case 39: goto L_4001CE3C; break;
        case 40: goto L_4001CE34; break;
        case 41: goto L_4001CE28; break;
        case 42: goto L_4001CE28; break;
        case 43: goto L_4001CE1C; break;
        default: switch_error(__func__, 0x4001CE0C, 0x4002010C);
    }
    // 0x4001CE10: nop

L_4001CE14:
    // 0x4001CE14: b           L_4001CE3C
    // 0x4001CE18: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
        goto L_4001CE3C;
    // 0x4001CE18: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_4001CE1C:
    // 0x4001CE1C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x4001CE20: b           L_4001CE3C
    // 0x4001CE24: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
        goto L_4001CE3C;
    // 0x4001CE24: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_4001CE28:
    // 0x4001CE28: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x4001CE2C: b           L_4001CE3C
    // 0x4001CE30: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_4001CE3C;
    // 0x4001CE30: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_4001CE34:
    // 0x4001CE34: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x4001CE38: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
L_4001CE3C:
    // 0x4001CE3C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x4001CE40: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x4001CE44: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x4001CE48: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x4001CE4C: lw          $a0, 0x1C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X1C);
    // 0x4001CE50: jal         0x400007F0
    // 0x4001CE54: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    ovl_actor_main_7F0(rdram, ctx);
        goto after_0;
    // 0x4001CE54: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x4001CE58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001CE5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x4001CE60: jr          $ra
    // 0x4001CE64: nop

    return;
    // 0x4001CE64: nop

;}
RECOMP_FUNC void ovl_actor_main_1CE68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001CE68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001CE6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001CE70: jal         0x4001CDDC
    // 0x4001CE74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_1CDDC(rdram, ctx);
        goto after_0;
    // 0x4001CE74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4001CE78: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4001CE7C: jal         0x4001A66C
    // 0x4001CE80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A66C(rdram, ctx);
        goto after_1;
    // 0x4001CE80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x4001CE84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4001CE88: beq         $v0, $zero, L_4001CEA0
    if (ctx->r2 == 0) {
        // 0x4001CE8C: nop
    
            goto L_4001CEA0;
    }
    // 0x4001CE8C: nop

    // 0x4001CE90: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4001CE94: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x4001CE98: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x4001CE9C: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
L_4001CEA0:
    // 0x4001CEA0: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x4001CEA4: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x4001CEA8: bne         $t8, $at, L_4001CEB8
    if (ctx->r24 != ctx->r1) {
        // 0x4001CEAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4001CEB8;
    }
    // 0x4001CEAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001CEB0: sw          $zero, 0x324($a0)
    MEM_W(0X324, ctx->r4) = 0;
    // 0x4001CEB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001CEB8:
    // 0x4001CEB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001CEBC: jr          $ra
    // 0x4001CEC0: nop

    return;
    // 0x4001CEC0: nop

;}
RECOMP_FUNC void ovl_item_main_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000000: lui         $v0, 0x4100
    ctx->r2 = S32(0X4100 << 16);
    // 0x41000004: jr          $ra
    // 0x41000008: addiu       $v0, $v0, 0xF50
    ctx->r2 = ADD32(ctx->r2, 0XF50);
    return;
    // 0x41000008: addiu       $v0, $v0, 0xF50
    ctx->r2 = ADD32(ctx->r2, 0XF50);
    // 0x4100000C: nop

;}
RECOMP_FUNC void ovl_item_main_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000010: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000014: jr          $t1
    // 0x41000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
;}
RECOMP_FUNC void ovl_item_main_1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100001C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000020: jr          $t1
    // 0x41000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
;}
RECOMP_FUNC void ovl_item_main_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000028: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4100002C: jr          $t1
    // 0x41000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
;}
RECOMP_FUNC void ovl_item_main_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000034: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000038: jr          $t1
    // 0x4100003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4100003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
;}
RECOMP_FUNC void ovl_item_main_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000040: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000044: jr          $t1
    // 0x41000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
;}
RECOMP_FUNC void ovl_item_main_4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100004C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000050: jr          $t1
    // 0x41000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
;}
RECOMP_FUNC void ovl_item_main_58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000058: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4100005C: jr          $t1
    // 0x41000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
;}
RECOMP_FUNC void ovl_item_main_64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000064: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000068: jr          $t1
    // 0x4100006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4100006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
;}
RECOMP_FUNC void ovl_item_main_70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000070: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000074: jr          $t1
    // 0x41000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
;}
RECOMP_FUNC void ovl_item_main_7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100007C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000080: jr          $t1
    // 0x41000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
;}
RECOMP_FUNC void ovl_item_main_88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000088: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4100008C: jr          $t1
    // 0x41000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
;}
RECOMP_FUNC void ovl_item_main_94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000094: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000098: jr          $t1
    // 0x4100009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4100009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
;}
RECOMP_FUNC void ovl_item_main_A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410000A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410000A4: jr          $t1
    // 0x410000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
;}
RECOMP_FUNC void ovl_item_main_AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410000AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410000B0: jr          $t1
    // 0x410000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
;}
RECOMP_FUNC void ovl_item_main_B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410000B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410000BC: jr          $t1
    // 0x410000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
;}
RECOMP_FUNC void ovl_item_main_C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410000C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410000C8: jr          $t1
    // 0x410000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
;}
RECOMP_FUNC void ovl_item_main_D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410000D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410000D4: jr          $t1
    // 0x410000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
;}
RECOMP_FUNC void ovl_item_main_DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410000DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410000E0: jr          $t1
    // 0x410000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
;}
RECOMP_FUNC void ovl_item_main_E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410000E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410000EC: jr          $t1
    // 0x410000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
;}
RECOMP_FUNC void ovl_item_main_F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410000F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410000F8: jr          $t1
    // 0x410000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
;}
RECOMP_FUNC void ovl_item_main_100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000100: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000104: jr          $t1
    // 0x41000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
;}
RECOMP_FUNC void ovl_item_main_10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100010C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000110: jr          $t1
    // 0x41000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
;}
RECOMP_FUNC void ovl_item_main_118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000118: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4100011C: jr          $t1
    // 0x41000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
;}
RECOMP_FUNC void ovl_item_main_124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000124: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000128: jr          $t1
    // 0x4100012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4100012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
;}
RECOMP_FUNC void ovl_item_main_130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000130: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000134: jr          $t1
    // 0x41000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
;}
RECOMP_FUNC void ovl_item_main_13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100013C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000140: jr          $t1
    // 0x41000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
;}
RECOMP_FUNC void ovl_item_main_148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000148: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4100014C: jr          $t1
    // 0x41000150: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000150: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
;}
RECOMP_FUNC void ovl_item_main_154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000154: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000158: jr          $t1
    // 0x4100015C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4100015C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
;}
RECOMP_FUNC void ovl_item_main_160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000160: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000164: jr          $t1
    // 0x41000168: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000168: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
;}
RECOMP_FUNC void ovl_item_main_16C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100016C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000170: jr          $t1
    // 0x41000174: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000174: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
;}
RECOMP_FUNC void ovl_item_main_178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000178: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4100017C: jr          $t1
    // 0x41000180: addiu       $t0, $zero, 0x605
    ctx->r8 = ADD32(0, 0X605);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000180: addiu       $t0, $zero, 0x605
    ctx->r8 = ADD32(0, 0X605);
;}
RECOMP_FUNC void ovl_item_main_184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000184: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000188: jr          $t1
    // 0x4100018C: addiu       $t0, $zero, 0x606
    ctx->r8 = ADD32(0, 0X606);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4100018C: addiu       $t0, $zero, 0x606
    ctx->r8 = ADD32(0, 0X606);
;}
RECOMP_FUNC void ovl_item_main_190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41000190: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x41000194: jr          $t1
    // 0x41000198: addiu       $t0, $zero, 0x607
    ctx->r8 = ADD32(0, 0X607);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x41000198: addiu       $t0, $zero, 0x607
    ctx->r8 = ADD32(0, 0X607);
;}
RECOMP_FUNC void ovl_item_main_19C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100019C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410001A0: jr          $t1
    // 0x410001A4: addiu       $t0, $zero, 0x608
    ctx->r8 = ADD32(0, 0X608);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410001A4: addiu       $t0, $zero, 0x608
    ctx->r8 = ADD32(0, 0X608);
;}
RECOMP_FUNC void ovl_item_main_1A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410001A8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x410001AC: jr          $t1
    // 0x410001B0: addiu       $t0, $zero, 0x609
    ctx->r8 = ADD32(0, 0X609);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x410001B0: addiu       $t0, $zero, 0x609
    ctx->r8 = ADD32(0, 0X609);
;}
