#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_actor_main_DA04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000DA04: jr          $ra
    // 0x4000DA08: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x4000DA08: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ovl_actor_main_DA0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000DA0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000DA10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000DA14: lui         $a1, 0x4002
    ctx->r5 = S32(0X4002 << 16);
    // 0x4000DA18: addiu       $a1, $a1, -0x25B0
    ctx->r5 = ADD32(ctx->r5, -0X25B0);
    // 0x4000DA1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4000DA20: jal         0x400095C4
    // 0x4000DA24: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    ovl_actor_main_95C4(rdram, ctx);
        goto after_0;
    // 0x4000DA24: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    after_0:
    // 0x4000DA28: lui         $v0, 0x4002
    ctx->r2 = S32(0X4002 << 16);
    // 0x4000DA2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000DA30: addiu       $v0, $v0, -0x25B0
    ctx->r2 = ADD32(ctx->r2, -0X25B0);
    // 0x4000DA34: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x4000DA38: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x4000DA3C: sw          $t7, 0x2DC($a0)
    MEM_W(0X2DC, ctx->r4) = ctx->r15;
    // 0x4000DA40: sw          $t6, 0x2D4($a0)
    MEM_W(0X2D4, ctx->r4) = ctx->r14;
    // 0x4000DA44: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x4000DA48: jal         0x4000974C
    // 0x4000DA4C: nop

    ovl_actor_main_974C(rdram, ctx);
        goto after_1;
    // 0x4000DA4C: nop

    after_1:
    // 0x4000DA50: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000DA54: lui         $v0, 0x4002
    ctx->r2 = S32(0X4002 << 16);
    // 0x4000DA58: lw          $t8, 0x90($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X90);
    // 0x4000DA5C: nop

    // 0x4000DA60: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x4000DA64: sw          $t9, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r25;
    // 0x4000DA68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000DA6C: lw          $v0, -0x25B0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X25B0);
    // 0x4000DA70: jr          $ra
    // 0x4000DA74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x4000DA74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_actor_main_DA78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000DA78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000DA7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000DA80: beq         $a1, $at, L_4000DA9C
    if (ctx->r5 == ctx->r1) {
        // 0x4000DA84: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4000DA9C;
    }
    // 0x4000DA84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000DA88: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4000DA8C: beq         $a1, $at, L_4000DAD0
    if (ctx->r5 == ctx->r1) {
        // 0x4000DA90: nop
    
            goto L_4000DAD0;
    }
    // 0x4000DA90: nop

    // 0x4000DA94: b           L_4000DAF0
    // 0x4000DA98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4000DAF0;
    // 0x4000DA98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000DA9C:
    // 0x4000DA9C: lw          $t6, 0x2D4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2D4);
    // 0x4000DAA0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000DAA4: bne         $t6, $at, L_4000DAF0
    if (ctx->r14 != ctx->r1) {
        // 0x4000DAA8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000DAF0;
    }
    // 0x4000DAA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000DAAC: jal         0x40009490
    // 0x4000DAB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_9490(rdram, ctx);
        goto after_0;
    // 0x4000DAB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000DAB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000DAB8: beq         $v0, $zero, L_4000DAF0
    if (ctx->r2 == 0) {
        // 0x4000DABC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000DAF0;
    }
    // 0x4000DABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000DAC0: jal         0x4000DA0C
    // 0x4000DAC4: nop

    ovl_actor_main_DA0C(rdram, ctx);
        goto after_1;
    // 0x4000DAC4: nop

    after_1:
    // 0x4000DAC8: b           L_4000DAF0
    // 0x4000DACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4000DAF0;
    // 0x4000DACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000DAD0:
    // 0x4000DAD0: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x4000DAD4: jal         0x40011944
    // 0x4000DAD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_11944(rdram, ctx);
        goto after_2;
    // 0x4000DAD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x4000DADC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000DAE0: nop

    // 0x4000DAE4: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
    // 0x4000DAE8: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    // 0x4000DAEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000DAF0:
    // 0x4000DAF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000DAF4: jr          $ra
    // 0x4000DAF8: nop

    return;
    // 0x4000DAF8: nop

;}
RECOMP_FUNC void ovl_actor_main_DAFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000DAFC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x4000DB00: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x4000DB04: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x4000DB08: jr          $ra
    // 0x4000DB0C: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    return;
    // 0x4000DB0C: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
;}
RECOMP_FUNC void ovl_actor_main_DB10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000DB10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000DB14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000DB18: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x4000DB1C: jal         0x40011944
    // 0x4000DB20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_11944(rdram, ctx);
        goto after_0;
    // 0x4000DB20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000DB24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000DB28: nop

    // 0x4000DB2C: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
    // 0x4000DB30: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    // 0x4000DB34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000DB38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000DB3C: jr          $ra
    // 0x4000DB40: nop

    return;
    // 0x4000DB40: nop

;}
RECOMP_FUNC void ovl_actor_main_DB44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000DB44: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x4000DB48: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x4000DB4C: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x4000DB50: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x4000DB54: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x4000DB58: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x4000DB5C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x4000DB60: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x4000DB64: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x4000DB68: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x4000DB6C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x4000DB70: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x4000DB74: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x4000DB78: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x4000DB7C: addu        $s2, $a0, $t7
    ctx->r18 = ADD32(ctx->r4, ctx->r15);
    // 0x4000DB80: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x4000DB84: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x4000DB88: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x4000DB8C: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    // 0x4000DB90: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x4000DB94: addiu       $s2, $s2, 0xDC
    ctx->r18 = ADD32(ctx->r18, 0XDC);
    // 0x4000DB98: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x4000DB9C: addiu       $s5, $sp, 0x44
    ctx->r21 = ADD32(ctx->r29, 0X44);
    // 0x4000DBA0: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x4000DBA4: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    // 0x4000DBA8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_4000DBAC:
    // 0x4000DBAC: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x4000DBB0: jal         0x40009270
    // 0x4000DBB4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_actor_main_9270(rdram, ctx);
        goto after_0;
    // 0x4000DBB4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_0:
    // 0x4000DBB8: beq         $v0, $s3, L_4000DC58
    if (ctx->r2 == ctx->r19) {
        // 0x4000DBBC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_4000DC58;
    }
    // 0x4000DBBC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x4000DBC0: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x4000DBC4: addu        $t9, $s2, $t8
    ctx->r25 = ADD32(ctx->r18, ctx->r24);
    // 0x4000DBC8: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x4000DBCC: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x4000DBD0: beq         $s3, $t0, L_4000DC54
    if (ctx->r19 == ctx->r8) {
        // 0x4000DBD4: addu        $s1, $s2, $t1
        ctx->r17 = ADD32(ctx->r18, ctx->r9);
            goto L_4000DC54;
    }
    // 0x4000DBD4: addu        $s1, $s2, $t1
    ctx->r17 = ADD32(ctx->r18, ctx->r9);
    // 0x4000DBD8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x4000DBDC: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4000DBE0: jal         0x400006C4
    // 0x4000DBE4: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x4000DBE4: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_1:
    // 0x4000DBE8: bne         $v0, $zero, L_4000DC54
    if (ctx->r2 != 0) {
        // 0x4000DBEC: nop
    
            goto L_4000DC54;
    }
    // 0x4000DBEC: nop

    // 0x4000DBF0: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x4000DBF4: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x4000DBF8: bne         $t2, $s6, L_4000DC54
    if (ctx->r10 != ctx->r22) {
        // 0x4000DBFC: nop
    
            goto L_4000DC54;
    }
    // 0x4000DBFC: nop

    // 0x4000DC00: bne         $t3, $s7, L_4000DC54
    if (ctx->r11 != ctx->r23) {
        // 0x4000DC04: nop
    
            goto L_4000DC54;
    }
    // 0x4000DC04: nop

    // 0x4000DC08: lw          $t4, 0x90($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X90);
    // 0x4000DC0C: nop

    // 0x4000DC10: andi        $t5, $t4, 0x8
    ctx->r13 = ctx->r12 & 0X8;
    // 0x4000DC14: beq         $t5, $zero, L_4000DC30
    if (ctx->r13 == 0) {
        // 0x4000DC18: nop
    
            goto L_4000DC30;
    }
    // 0x4000DC18: nop

    // 0x4000DC1C: lw          $t6, 0x2EC($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X2EC);
    // 0x4000DC20: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x4000DC24: nop

    // 0x4000DC28: beq         $t6, $t7, L_4000DC58
    if (ctx->r14 == ctx->r15) {
        // 0x4000DC2C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_4000DC58;
    }
    // 0x4000DC2C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_4000DC30:
    // 0x4000DC30: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
    // 0x4000DC34: nop

    // 0x4000DC38: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
    // 0x4000DC3C: lw          $t9, 0x2D8($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X2D8);
    // 0x4000DC40: nop

    // 0x4000DC44: bne         $s3, $t9, L_4000DC64
    if (ctx->r19 != ctx->r25) {
        // 0x4000DC48: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_4000DC64;
    }
    // 0x4000DC48: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x4000DC4C: b           L_4000DC60
    // 0x4000DC50: sw          $t8, 0x2D8($s4)
    MEM_W(0X2D8, ctx->r20) = ctx->r24;
        goto L_4000DC60;
    // 0x4000DC50: sw          $t8, 0x2D8($s4)
    MEM_W(0X2D8, ctx->r20) = ctx->r24;
L_4000DC54:
    // 0x4000DC54: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_4000DC58:
    // 0x4000DC58: bne         $s0, $s3, L_4000DBAC
    if (ctx->r16 != ctx->r19) {
        // 0x4000DC5C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_4000DBAC;
    }
    // 0x4000DC5C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_4000DC60:
    // 0x4000DC60: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_4000DC64:
    // 0x4000DC64: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x4000DC68: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x4000DC6C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x4000DC70: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x4000DC74: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x4000DC78: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x4000DC7C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x4000DC80: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x4000DC84: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x4000DC88: jr          $ra
    // 0x4000DC8C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x4000DC8C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_actor_main_DC90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000DC90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000DC94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000DC98: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000DC9C: nop

    // 0x4000DCA0: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x4000DCA4: beq         $t7, $zero, L_4000DCBC
    if (ctx->r15 == 0) {
        // 0x4000DCA8: nop
    
            goto L_4000DCBC;
    }
    // 0x4000DCA8: nop

    // 0x4000DCAC: jal         0x40001A8C
    // 0x4000DCB0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_0;
    // 0x4000DCB0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x4000DCB4: b           L_4000DCC8
    // 0x4000DCB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4000DCC8;
    // 0x4000DCB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000DCBC:
    // 0x4000DCBC: jal         0x4000DB10
    // 0x4000DCC0: nop

    ovl_actor_main_DB10(rdram, ctx);
        goto after_1;
    // 0x4000DCC0: nop

    after_1:
    // 0x4000DCC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000DCC8:
    // 0x4000DCC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000DCCC: jr          $ra
    // 0x4000DCD0: nop

    return;
    // 0x4000DCD0: nop

;}
RECOMP_FUNC void ovl_actor_main_DCD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000DCD4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000DCD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000DCDC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x4000DCE0: jal         0x4000DB44
    // 0x4000DCE4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_DB44(rdram, ctx);
        goto after_0;
    // 0x4000DCE4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000DCE8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x4000DCEC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000DCF0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000DCF4: beq         $v0, $at, L_4000DD24
    if (ctx->r2 == ctx->r1) {
        // 0x4000DCF8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000DD24;
    }
    // 0x4000DCF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000DCFC: lw          $t6, 0x2EC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2EC);
    // 0x4000DD00: nop

    // 0x4000DD04: beq         $v0, $t6, L_4000DD24
    if (ctx->r2 == ctx->r14) {
        // 0x4000DD08: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000DD24;
    }
    // 0x4000DD08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000DD0C: lw          $t7, 0x90($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X90);
    // 0x4000DD10: sw          $v0, 0x2D8($a0)
    MEM_W(0X2D8, ctx->r4) = ctx->r2;
    // 0x4000DD14: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x4000DD18: sw          $t8, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r24;
    // 0x4000DD1C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x4000DD20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000DD24:
    // 0x4000DD24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000DD28: jr          $ra
    // 0x4000DD2C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4000DD2C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_DD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000DD30: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4000DD34: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4000DD38: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000DD3C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000DD40: beq         $a1, $at, L_4000DD74
    if (ctx->r5 == ctx->r1) {
        // 0x4000DD44: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4000DD74;
    }
    // 0x4000DD44: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000DD48: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4000DD4C: beq         $a1, $at, L_4000DD88
    if (ctx->r5 == ctx->r1) {
        // 0x4000DD50: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000DD88;
    }
    // 0x4000DD50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000DD54: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x4000DD58: beq         $a1, $at, L_4000DE28
    if (ctx->r5 == ctx->r1) {
        // 0x4000DD5C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000DE28;
    }
    // 0x4000DD5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000DD60: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x4000DD64: beq         $a1, $at, L_4000DE7C
    if (ctx->r5 == ctx->r1) {
        // 0x4000DD68: nop
    
            goto L_4000DE7C;
    }
    // 0x4000DD68: nop

    // 0x4000DD6C: b           L_4000DE88
    // 0x4000DD70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000DE88;
    // 0x4000DD70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000DD74:
    // 0x4000DD74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000DD78: jal         0x4000BEA8
    // 0x4000DD7C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    ovl_actor_main_BEA8(rdram, ctx);
        goto after_0;
    // 0x4000DD7C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_0:
    // 0x4000DD80: b           L_4000DE88
    // 0x4000DD84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000DE88;
    // 0x4000DD84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000DD88:
    // 0x4000DD88: jal         0x4000DB44
    // 0x4000DD8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_DB44(rdram, ctx);
        goto after_1;
    // 0x4000DD8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x4000DD90: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000DD94: bne         $v0, $at, L_4000DDAC
    if (ctx->r2 != ctx->r1) {
        // 0x4000DD98: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000DDAC;
    }
    // 0x4000DD98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000DD9C: jal         0x4000DC90
    // 0x4000DDA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_DC90(rdram, ctx);
        goto after_2;
    // 0x4000DDA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x4000DDA4: b           L_4000DE88
    // 0x4000DDA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000DE88;
    // 0x4000DDA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000DDAC:
    // 0x4000DDAC: jal         0x40009684
    // 0x4000DDB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_9684(rdram, ctx);
        goto after_3;
    // 0x4000DDB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x4000DDB4: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
    // 0x4000DDB8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x4000DDBC: addiu       $a0, $s0, 0x2D4
    ctx->r4 = ADD32(ctx->r16, 0X2D4);
    // 0x4000DDC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4000DDC4: jal         0x400022A8
    // 0x4000DDC8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_actor_main_22A8(rdram, ctx);
        goto after_4;
    // 0x4000DDC8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_4:
    // 0x4000DDCC: jal         0x40009B20
    // 0x4000DDD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9B20(rdram, ctx);
        goto after_5;
    // 0x4000DDD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x4000DDD4: jal         0x4000947C
    // 0x4000DDD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_947C(rdram, ctx);
        goto after_6;
    // 0x4000DDD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x4000DDDC: lw          $t6, 0x90($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X90);
    // 0x4000DDE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000DDE4: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x4000DDE8: beq         $t7, $zero, L_4000DE10
    if (ctx->r15 == 0) {
        // 0x4000DDEC: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_4000DE10;
    }
    // 0x4000DDEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4000DDF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000DDF4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x4000DDF8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000DDFC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000DE00: jal         0x40008D20
    // 0x4000DE04: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_7;
    // 0x4000DE04: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x4000DE08: b           L_4000DE88
    // 0x4000DE0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000DE88;
    // 0x4000DE0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000DE10:
    // 0x4000DE10: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000DE14: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000DE18: jal         0x40008D20
    // 0x4000DE1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_8;
    // 0x4000DE1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
    // 0x4000DE20: b           L_4000DE88
    // 0x4000DE24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000DE88;
    // 0x4000DE24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000DE28:
    // 0x4000DE28: jal         0x4000DCD4
    // 0x4000DE2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_DCD4(rdram, ctx);
        goto after_9;
    // 0x4000DE2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x4000DE30: bne         $v0, $zero, L_4000DE48
    if (ctx->r2 != 0) {
        // 0x4000DE34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000DE48;
    }
    // 0x4000DE34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000DE38: jal         0x4000DCD4
    // 0x4000DE3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_DCD4(rdram, ctx);
        goto after_10;
    // 0x4000DE3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x4000DE40: beq         $v0, $zero, L_4000DE74
    if (ctx->r2 == 0) {
        // 0x4000DE44: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_4000DE74;
    }
    // 0x4000DE44: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_4000DE48:
    // 0x4000DE48: lui         $a1, 0x4002
    ctx->r5 = S32(0X4002 << 16);
    // 0x4000DE4C: addiu       $a1, $a1, -0x25B0
    ctx->r5 = ADD32(ctx->r5, -0X25B0);
    // 0x4000DE50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000DE54: jal         0x40009830
    // 0x4000DE58: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    ovl_actor_main_9830(rdram, ctx);
        goto after_11;
    // 0x4000DE58: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_11:
    // 0x4000DE5C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4000DE60: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x4000DE64: jal         0x40000CA0
    // 0x4000DE68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_12;
    // 0x4000DE68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x4000DE6C: b           L_4000DE88
    // 0x4000DE70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000DE88;
    // 0x4000DE70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000DE74:
    // 0x4000DE74: b           L_4000DE84
    // 0x4000DE78: sw          $t8, 0x2D8($s0)
    MEM_W(0X2D8, ctx->r16) = ctx->r24;
        goto L_4000DE84;
    // 0x4000DE78: sw          $t8, 0x2D8($s0)
    MEM_W(0X2D8, ctx->r16) = ctx->r24;
L_4000DE7C:
    // 0x4000DE7C: jal         0x4000DC90
    // 0x4000DE80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_DC90(rdram, ctx);
        goto after_13;
    // 0x4000DE80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
L_4000DE84:
    // 0x4000DE84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000DE88:
    // 0x4000DE88: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4000DE8C: jr          $ra
    // 0x4000DE90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x4000DE90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_actor_main_DE94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000DE94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000DE98: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x4000DE9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000DEA0: beq         $a1, $at, L_4000DED8
    if (ctx->r5 == ctx->r1) {
        // 0x4000DEA4: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_4000DED8;
    }
    // 0x4000DEA4: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x4000DEA8: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x4000DEAC: bne         $a1, $at, L_4000DF04
    if (ctx->r5 != ctx->r1) {
        // 0x4000DEB0: slti        $at, $a2, 0x4
        ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
            goto L_4000DF04;
    }
    // 0x4000DEB0: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x4000DEB4: beq         $at, $zero, L_4000DF08
    if (ctx->r1 == 0) {
        // 0x4000DEB8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000DF08;
    }
    // 0x4000DEB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000DEBC: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000DEC0: nop

    // 0x4000DEC4: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x4000DEC8: bne         $t7, $zero, L_4000DF08
    if (ctx->r15 != 0) {
        // 0x4000DECC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000DF08;
    }
    // 0x4000DECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000DED0: b           L_4000DF04
    // 0x4000DED4: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
        goto L_4000DF04;
    // 0x4000DED4: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
L_4000DED8:
    // 0x4000DED8: lw          $t8, 0x90($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X90);
    // 0x4000DEDC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x4000DEE0: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x4000DEE4: beq         $t9, $zero, L_4000DEF4
    if (ctx->r25 == 0) {
        // 0x4000DEE8: nop
    
            goto L_4000DEF4;
    }
    // 0x4000DEE8: nop

    // 0x4000DEEC: b           L_4000DEF4
    // 0x4000DEF0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
        goto L_4000DEF4;
    // 0x4000DEF0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_4000DEF4:
    // 0x4000DEF4: jal         0x4000DB10
    // 0x4000DEF8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_actor_main_DB10(rdram, ctx);
        goto after_0;
    // 0x4000DEF8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x4000DEFC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x4000DF00: nop

L_4000DF04:
    // 0x4000DF04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000DF08:
    // 0x4000DF08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000DF0C: jr          $ra
    // 0x4000DF10: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4000DF10: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_DF14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000DF14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000DF18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000DF1C: lwc1        $f6, 0x48($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X48);
    // 0x4000DF20: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4000DF24: nop

    // 0x4000DF28: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x4000DF2C: nop

    // 0x4000DF30: bc1f        L_4000DF84
    if (!c1cs) {
        // 0x4000DF34: nop
    
            goto L_4000DF84;
    }
    // 0x4000DF34: nop

    // 0x4000DF38: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x4000DF3C: nop

    // 0x4000DF40: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x4000DF44: nop

    // 0x4000DF48: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x4000DF4C: beq         $t8, $zero, L_4000DF84
    if (ctx->r24 == 0) {
        // 0x4000DF50: nop
    
            goto L_4000DF84;
    }
    // 0x4000DF50: nop

    // 0x4000DF54: lw          $t9, 0x90($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X90);
    // 0x4000DF58: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x4000DF5C: sll         $t0, $t9, 10
    ctx->r8 = S32(ctx->r25 << 10);
    // 0x4000DF60: bltz        $t0, L_4000DF84
    if (SIGNED(ctx->r8) < 0) {
        // 0x4000DF64: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_4000DF84;
    }
    // 0x4000DF64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4000DF68: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4000DF6C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x4000DF70: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4000DF74: jal         0x40006EB8
    // 0x4000DF78: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_0;
    // 0x4000DF78: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x4000DF7C: b           L_4000DF90
    // 0x4000DF80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000DF90;
    // 0x4000DF80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000DF84:
    // 0x4000DF84: jal         0x4000DB10
    // 0x4000DF88: nop

    ovl_actor_main_DB10(rdram, ctx);
        goto after_1;
    // 0x4000DF88: nop

    after_1:
    // 0x4000DF8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000DF90:
    // 0x4000DF90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000DF94: jr          $ra
    // 0x4000DF98: nop

    return;
    // 0x4000DF98: nop

;}
RECOMP_FUNC void ovl_actor_main_DF9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000DF9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000DFA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000DFA4: jal         0x4000946C
    // 0x4000DFA8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_946C(rdram, ctx);
        goto after_0;
    // 0x4000DFA8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000DFAC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000DFB0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4000DFB4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000DFB8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x4000DFBC: sw          $t6, 0x2D8($a0)
    MEM_W(0X2D8, ctx->r4) = ctx->r14;
    // 0x4000DFC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4000DFC4: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4000DFC8: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4000DFCC: jal         0x40006EB8
    // 0x4000DFD0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_1;
    // 0x4000DFD0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x4000DFD4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000DFD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4000DFDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4000DFE0: jal         0x400022A8
    // 0x4000DFE4: addiu       $a0, $a0, 0x2D4
    ctx->r4 = ADD32(ctx->r4, 0X2D4);
    ovl_actor_main_22A8(rdram, ctx);
        goto after_2;
    // 0x4000DFE4: addiu       $a0, $a0, 0x2D4
    ctx->r4 = ADD32(ctx->r4, 0X2D4);
    after_2:
    // 0x4000DFE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000DFEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000DFF0: jr          $ra
    // 0x4000DFF4: nop

    return;
    // 0x4000DFF4: nop

;}
RECOMP_FUNC void ovl_actor_main_DFF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000DFF8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x4000DFFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000E000: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4000E004: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000E008: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000E00C: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x4000E010: beq         $t7, $zero, L_4000E0B0
    if (ctx->r15 == 0) {
        // 0x4000E014: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_4000E0B0;
    }
    // 0x4000E014: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x4000E018: lw          $a0, 0x2EC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EC);
    // 0x4000E01C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x4000E020: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4000E024: jal         0x400006C4
    // 0x4000E028: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4000E028: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x4000E02C: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x4000E030: bne         $v0, $zero, L_4000E0B0
    if (ctx->r2 != 0) {
        // 0x4000E034: nop
    
            goto L_4000E0B0;
    }
    // 0x4000E034: nop

    // 0x4000E038: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x4000E03C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x4000E040: beq         $v0, $zero, L_4000E068
    if (ctx->r2 == 0) {
        // 0x4000E044: lui         $at, 0x4002
        ctx->r1 = S32(0X4002 << 16);
            goto L_4000E068;
    }
    // 0x4000E044: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000E048: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000E04C: beq         $v0, $at, L_4000E088
    if (ctx->r2 == ctx->r1) {
        // 0x4000E050: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000E088;
    }
    // 0x4000E050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000E054: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4000E058: beq         $v0, $at, L_4000E0A0
    if (ctx->r2 == ctx->r1) {
        // 0x4000E05C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000E0A0;
    }
    // 0x4000E05C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000E060: b           L_4000E0B0
    // 0x4000E064: nop

        goto L_4000E0B0;
    // 0x4000E064: nop

L_4000E068:
    // 0x4000E068: lui         $a1, 0x4002
    ctx->r5 = S32(0X4002 << 16);
    // 0x4000E06C: sw          $t8, -0x2538($at)
    MEM_W(-0X2538, ctx->r1) = ctx->r24;
    // 0x4000E070: addiu       $a1, $a1, -0x2540
    ctx->r5 = ADD32(ctx->r5, -0X2540);
    // 0x4000E074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000E078: jal         0x40009830
    // 0x4000E07C: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    ovl_actor_main_9830(rdram, ctx);
        goto after_1;
    // 0x4000E07C: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_1:
    // 0x4000E080: b           L_4000E0B0
    // 0x4000E084: nop

        goto L_4000E0B0;
    // 0x4000E084: nop

L_4000E088:
    // 0x4000E088: lui         $a1, 0x4002
    ctx->r5 = S32(0X4002 << 16);
    // 0x4000E08C: addiu       $a1, $a1, -0x2578
    ctx->r5 = ADD32(ctx->r5, -0X2578);
    // 0x4000E090: jal         0x40009830
    // 0x4000E094: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    ovl_actor_main_9830(rdram, ctx);
        goto after_2;
    // 0x4000E094: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_2:
    // 0x4000E098: b           L_4000E0B0
    // 0x4000E09C: nop

        goto L_4000E0B0;
    // 0x4000E09C: nop

L_4000E0A0:
    // 0x4000E0A0: lui         $a1, 0x4002
    ctx->r5 = S32(0X4002 << 16);
    // 0x4000E0A4: addiu       $a1, $a1, -0x255C
    ctx->r5 = ADD32(ctx->r5, -0X255C);
    // 0x4000E0A8: jal         0x40009830
    // 0x4000E0AC: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    ovl_actor_main_9830(rdram, ctx);
        goto after_3;
    // 0x4000E0AC: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_3:
L_4000E0B0:
    // 0x4000E0B0: jal         0x40009B58
    // 0x4000E0B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9B58(rdram, ctx);
        goto after_4;
    // 0x4000E0B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4000E0B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000E0BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4000E0C0: jr          $ra
    // 0x4000E0C4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x4000E0C4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_actor_main_E0C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000E0C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000E0CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000E0D0: jal         0x4000DFF8
    // 0x4000E0D4: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    ovl_actor_main_DFF8(rdram, ctx);
        goto after_0;
    // 0x4000E0D4: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_0:
    // 0x4000E0D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000E0DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000E0E0: jr          $ra
    // 0x4000E0E4: nop

    return;
    // 0x4000E0E4: nop

;}
RECOMP_FUNC void ovl_actor_main_E0E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000E0E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4000E0EC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4000E0F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000E0F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000E0F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000E0FC: beq         $a1, $at, L_4000E120
    if (ctx->r5 == ctx->r1) {
        // 0x4000E100: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_4000E120;
    }
    // 0x4000E100: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x4000E104: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x4000E108: beq         $a1, $at, L_4000E140
    if (ctx->r5 == ctx->r1) {
        // 0x4000E10C: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_4000E140;
    }
    // 0x4000E10C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x4000E110: beq         $a1, $at, L_4000E150
    if (ctx->r5 == ctx->r1) {
        // 0x4000E114: nop
    
            goto L_4000E150;
    }
    // 0x4000E114: nop

    // 0x4000E118: b           L_4000E168
    // 0x4000E11C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
        goto L_4000E168;
    // 0x4000E11C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
L_4000E120:
    // 0x4000E120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000E124: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x4000E128: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000E12C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000E130: jal         0x40008D20
    // 0x4000E134: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4000E134: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4000E138: b           L_4000E168
    // 0x4000E13C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
        goto L_4000E168;
    // 0x4000E13C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
L_4000E140:
    // 0x4000E140: jal         0x4000E0C8
    // 0x4000E144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_E0C8(rdram, ctx);
        goto after_1;
    // 0x4000E144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4000E148: b           L_4000E168
    // 0x4000E14C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
        goto L_4000E168;
    // 0x4000E14C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
L_4000E150:
    // 0x4000E150: lw          $a1, 0xC8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC8);
    // 0x4000E154: jal         0x40011944
    // 0x4000E158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11944(rdram, ctx);
        goto after_2;
    // 0x4000E158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x4000E15C: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x4000E160: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x4000E164: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
L_4000E168:
    // 0x4000E168: addiu       $a0, $s0, 0x2D4
    ctx->r4 = ADD32(ctx->r16, 0X2D4);
    // 0x4000E16C: slti        $at, $t7, 0xD
    ctx->r1 = SIGNED(ctx->r15) < 0XD ? 1 : 0;
    // 0x4000E170: beq         $at, $zero, L_4000E18C
    if (ctx->r1 == 0) {
        // 0x4000E174: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_4000E18C;
    }
    // 0x4000E174: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4000E178: jal         0x400022A8
    // 0x4000E17C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_actor_main_22A8(rdram, ctx);
        goto after_3;
    // 0x4000E17C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x4000E180: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x4000E184: nop

    // 0x4000E188: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
L_4000E18C:
    // 0x4000E18C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4000E190: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4000E194: jr          $ra
    // 0x4000E198: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x4000E198: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_actor_main_E19C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000E19C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000E1A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000E1A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4000E1A8: jal         0x40009684
    // 0x4000E1AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_9684(rdram, ctx);
        goto after_0;
    // 0x4000E1AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x4000E1B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000E1B4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x4000E1B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4000E1BC: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x4000E1C0: jal         0x400022A8
    // 0x4000E1C4: addiu       $a0, $a0, 0x2D4
    ctx->r4 = ADD32(ctx->r4, 0X2D4);
    ovl_actor_main_22A8(rdram, ctx);
        goto after_1;
    // 0x4000E1C4: addiu       $a0, $a0, 0x2D4
    ctx->r4 = ADD32(ctx->r4, 0X2D4);
    after_1:
    // 0x4000E1C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000E1CC: jal         0x40009B20
    // 0x4000E1D0: nop

    ovl_actor_main_9B20(rdram, ctx);
        goto after_2;
    // 0x4000E1D0: nop

    after_2:
    // 0x4000E1D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000E1D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000E1DC: jr          $ra
    // 0x4000E1E0: nop

    return;
    // 0x4000E1E0: nop

;}
RECOMP_FUNC void ovl_actor_main_E1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000E1E4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4000E1E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000E1EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000E1F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000E1F4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4000E1F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4000E1FC: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4000E200: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4000E204: jal         0x40006EB8
    // 0x4000E208: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_0;
    // 0x4000E208: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x4000E20C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000E210: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4000E214: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4000E218: jal         0x400022A8
    // 0x4000E21C: addiu       $a0, $a0, 0x2D4
    ctx->r4 = ADD32(ctx->r4, 0X2D4);
    ovl_actor_main_22A8(rdram, ctx);
        goto after_1;
    // 0x4000E21C: addiu       $a0, $a0, 0x2D4
    ctx->r4 = ADD32(ctx->r4, 0X2D4);
    after_1:
    // 0x4000E220: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000E224: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000E228: jr          $ra
    // 0x4000E22C: nop

    return;
    // 0x4000E22C: nop

;}
RECOMP_FUNC void ovl_actor_main_E230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000E230: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000E234: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000E238: jal         0x4000DFF8
    // 0x4000E23C: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    ovl_actor_main_DFF8(rdram, ctx);
        goto after_0;
    // 0x4000E23C: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_0:
    // 0x4000E240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000E244: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000E248: jr          $ra
    // 0x4000E24C: nop

    return;
    // 0x4000E24C: nop

;}
RECOMP_FUNC void ovl_actor_main_E250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000E250: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x4000E254: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x4000E258: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x4000E25C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x4000E260: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x4000E264: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x4000E268: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x4000E26C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x4000E270: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x4000E274: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x4000E278: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x4000E27C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x4000E280: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x4000E284: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4000E288: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x4000E28C: lw          $t7, 0xDC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XDC);
    // 0x4000E290: addiu       $v1, $v0, 0xDC
    ctx->r3 = ADD32(ctx->r2, 0XDC);
    // 0x4000E294: or          $s3, $v1, $zero
    ctx->r19 = ctx->r3 | 0;
    // 0x4000E298: blez        $t7, L_4000E330
    if (SIGNED(ctx->r15) <= 0) {
        // 0x4000E29C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_4000E330;
    }
    // 0x4000E29C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x4000E2A0: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x4000E2A4: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x4000E2A8: addiu       $s5, $zero, 0x7DD
    ctx->r21 = ADD32(0, 0X7DD);
    // 0x4000E2AC: addiu       $s4, $sp, 0x4C
    ctx->r20 = ADD32(ctx->r29, 0X4C);
    // 0x4000E2B0: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
L_4000E2B4:
    // 0x4000E2B4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x4000E2B8: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4000E2BC: jal         0x400006C4
    // 0x4000E2C0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4000E2C0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_0:
    // 0x4000E2C4: lw          $t8, 0x24($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X24);
    // 0x4000E2C8: nop

    // 0x4000E2CC: beq         $s5, $t8, L_4000E31C
    if (ctx->r21 == ctx->r24) {
        // 0x4000E2D0: nop
    
            goto L_4000E31C;
    }
    // 0x4000E2D0: nop

    // 0x4000E2D4: bne         $v0, $zero, L_4000E2F4
    if (ctx->r2 != 0) {
        // 0x4000E2D8: nop
    
            goto L_4000E2F4;
    }
    // 0x4000E2D8: nop

    // 0x4000E2DC: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x4000E2E0: nop

    // 0x4000E2E4: bne         $v1, $s2, L_4000E2F4
    if (ctx->r3 != ctx->r18) {
        // 0x4000E2E8: nop
    
            goto L_4000E2F4;
    }
    // 0x4000E2E8: nop

    // 0x4000E2EC: beq         $v1, $s2, L_4000E31C
    if (ctx->r3 == ctx->r18) {
        // 0x4000E2F0: nop
    
            goto L_4000E31C;
    }
    // 0x4000E2F0: nop

L_4000E2F4:
    // 0x4000E2F4: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x4000E2F8: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x4000E2FC: beq         $s6, $t9, L_4000E314
    if (ctx->r22 == ctx->r25) {
        // 0x4000E300: nop
    
            goto L_4000E314;
    }
    // 0x4000E300: nop

    // 0x4000E304: bne         $v0, $zero, L_4000E31C
    if (ctx->r2 != 0) {
        // 0x4000E308: nop
    
            goto L_4000E31C;
    }
    // 0x4000E308: nop

    // 0x4000E30C: bne         $v1, $s2, L_4000E31C
    if (ctx->r3 != ctx->r18) {
        // 0x4000E310: nop
    
            goto L_4000E31C;
    }
    // 0x4000E310: nop

L_4000E314:
    // 0x4000E314: b           L_4000E334
    // 0x4000E318: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_4000E334;
    // 0x4000E318: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4000E31C:
    // 0x4000E31C: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x4000E320: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x4000E324: slt         $at, $s1, $t0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x4000E328: bne         $at, $zero, L_4000E2B4
    if (ctx->r1 != 0) {
        // 0x4000E32C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_4000E2B4;
    }
    // 0x4000E32C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_4000E330:
    // 0x4000E330: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_4000E334:
    // 0x4000E334: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x4000E338: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4000E33C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x4000E340: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x4000E344: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x4000E348: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x4000E34C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x4000E350: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x4000E354: jr          $ra
    // 0x4000E358: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x4000E358: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_actor_main_E35C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000E35C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000E360: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000E364: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4000E368: jal         0x4000E250
    // 0x4000E36C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_E250(rdram, ctx);
        goto after_0;
    // 0x4000E36C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x4000E370: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000E374: beq         $v0, $zero, L_4000E39C
    if (ctx->r2 == 0) {
        // 0x4000E378: nop
    
            goto L_4000E39C;
    }
    // 0x4000E378: nop

    // 0x4000E37C: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x4000E380: jal         0x40011944
    // 0x4000E384: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_11944(rdram, ctx);
        goto after_1;
    // 0x4000E384: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x4000E388: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000E38C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x4000E390: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
    // 0x4000E394: b           L_4000E3B4
    // 0x4000E398: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
        goto L_4000E3B4;
    // 0x4000E398: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
L_4000E39C:
    // 0x4000E39C: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000E3A0: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x4000E3A4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x4000E3A8: jal         0x40009B20
    // 0x4000E3AC: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
    ovl_actor_main_9B20(rdram, ctx);
        goto after_2;
    // 0x4000E3AC: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
    after_2:
    // 0x4000E3B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4000E3B4:
    // 0x4000E3B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000E3B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000E3BC: jr          $ra
    // 0x4000E3C0: nop

    return;
    // 0x4000E3C0: nop

;}
RECOMP_FUNC void ovl_actor_main_E3C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000E3C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000E3C8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4000E3CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000E3D0: beq         $a1, $at, L_4000E3EC
    if (ctx->r5 == ctx->r1) {
        // 0x4000E3D4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_4000E3EC;
    }
    // 0x4000E3D4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x4000E3D8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x4000E3DC: beq         $a1, $at, L_4000E3FC
    if (ctx->r5 == ctx->r1) {
        // 0x4000E3E0: nop
    
            goto L_4000E3FC;
    }
    // 0x4000E3E0: nop

    // 0x4000E3E4: b           L_4000E430
    // 0x4000E3E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4000E430;
    // 0x4000E3E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000E3EC:
    // 0x4000E3EC: jal         0x4000E35C
    // 0x4000E3F0: nop

    ovl_actor_main_E35C(rdram, ctx);
        goto after_0;
    // 0x4000E3F0: nop

    after_0:
    // 0x4000E3F4: b           L_4000E42C
    // 0x4000E3F8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_4000E42C;
    // 0x4000E3F8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_4000E3FC:
    // 0x4000E3FC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x4000E400: jal         0x4000E230
    // 0x4000E404: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_E230(rdram, ctx);
        goto after_1;
    // 0x4000E404: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x4000E408: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000E40C: nop

    // 0x4000E410: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x4000E414: jal         0x40011944
    // 0x4000E418: nop

    ovl_actor_main_11944(rdram, ctx);
        goto after_2;
    // 0x4000E418: nop

    after_2:
    // 0x4000E41C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000E420: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x4000E424: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    // 0x4000E428: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
L_4000E42C:
    // 0x4000E42C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000E430:
    // 0x4000E430: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000E434: jr          $ra
    // 0x4000E438: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4000E438: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_E43C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000E43C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000E440: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000E444: jal         0x4000E3C4
    // 0x4000E448: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_E3C4(rdram, ctx);
        goto after_0;
    // 0x4000E448: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000E44C: beq         $v0, $zero, L_4000E468
    if (ctx->r2 == 0) {
        // 0x4000E450: addiu       $a1, $zero, 0x1AC
        ctx->r5 = ADD32(0, 0X1AC);
            goto L_4000E468;
    }
    // 0x4000E450: addiu       $a1, $zero, 0x1AC
    ctx->r5 = ADD32(0, 0X1AC);
    // 0x4000E454: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000E458: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000E45C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000E460: jal         0x40008D64
    // 0x4000E464: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_1;
    // 0x4000E464: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_4000E468:
    // 0x4000E468: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000E46C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000E470: jr          $ra
    // 0x4000E474: nop

    return;
    // 0x4000E474: nop

;}
RECOMP_FUNC void ovl_actor_main_E478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000E478: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000E47C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000E480: lw          $t6, 0x2D4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2D4);
    // 0x4000E484: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000E488: beq         $t6, $at, L_4000E498
    if (ctx->r14 == ctx->r1) {
        // 0x4000E48C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_4000E498;
    }
    // 0x4000E48C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4000E490: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
    // 0x4000E494: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
L_4000E498:
    // 0x4000E498: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x4000E49C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000E4A0: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x4000E4A4: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x4000E4A8: jal         0x40006EB8
    // 0x4000E4AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_0;
    // 0x4000E4AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x4000E4B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000E4B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000E4B8: jr          $ra
    // 0x4000E4BC: nop

    return;
    // 0x4000E4BC: nop

;}
RECOMP_FUNC void ovl_actor_main_E4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000E4C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000E4C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000E4C8: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000E4CC: lui         $at, 0xFFF7
    ctx->r1 = S32(0XFFF7 << 16);
    // 0x4000E4D0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x4000E4D4: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x4000E4D8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4000E4DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000E4E0: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
    // 0x4000E4E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4000E4E8: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4000E4EC: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4000E4F0: jal         0x40006EB8
    // 0x4000E4F4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_0;
    // 0x4000E4F4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x4000E4F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000E4FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000E500: jr          $ra
    // 0x4000E504: nop

    return;
    // 0x4000E504: nop

;}
RECOMP_FUNC void ovl_actor_main_E508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000E508: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000E50C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000E510: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4000E514: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4000E518: jal         0x40001258
    // 0x4000E51C: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    ovl_actor_main_1258(rdram, ctx);
        goto after_0;
    // 0x4000E51C: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_0:
    // 0x4000E520: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000E524: jal         0x40009B20
    // 0x4000E528: nop

    ovl_actor_main_9B20(rdram, ctx);
        goto after_1;
    // 0x4000E528: nop

    after_1:
    // 0x4000E52C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000E530: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000E534: jr          $ra
    // 0x4000E538: nop

    return;
    // 0x4000E538: nop

;}
RECOMP_FUNC void ovl_actor_main_E53C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000E53C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000E540: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000E544: lw          $t6, 0x318($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X318);
    // 0x4000E548: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x4000E54C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x4000E550: lw          $t7, 0x1C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X1C);
    // 0x4000E554: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4000E558: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4000E55C: jal         0x40001258
    // 0x4000E560: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    ovl_actor_main_1258(rdram, ctx);
        goto after_0;
    // 0x4000E560: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_0:
    // 0x4000E564: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x4000E568: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x4000E56C: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
    // 0x4000E570: nop

    // 0x4000E574: bne         $t8, $at, L_4000E5A8
    if (ctx->r24 != ctx->r1) {
        // 0x4000E578: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_4000E5A8;
    }
    // 0x4000E578: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x4000E57C: lw          $t9, 0x318($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X318);
    // 0x4000E580: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x4000E584: bne         $t9, $at, L_4000E5A8
    if (ctx->r25 != ctx->r1) {
        // 0x4000E588: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_4000E5A8;
    }
    // 0x4000E588: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x4000E58C: lw          $a0, 0x1C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1C);
    // 0x4000E590: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x4000E594: jal         0x40000C70
    // 0x4000E598: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    ovl_actor_main_C70(rdram, ctx);
        goto after_1;
    // 0x4000E598: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_1:
    // 0x4000E59C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x4000E5A0: nop

    // 0x4000E5A4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_4000E5A8:
    // 0x4000E5A8: jal         0x40008F28
    // 0x4000E5AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_8F28(rdram, ctx);
        goto after_2;
    // 0x4000E5AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x4000E5B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000E5B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000E5B8: jr          $ra
    // 0x4000E5BC: nop

    return;
    // 0x4000E5BC: nop

;}
RECOMP_FUNC void ovl_actor_main_E5C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000E5C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000E5C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000E5C8: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x4000E5CC: jal         0x40011944
    // 0x4000E5D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_11944(rdram, ctx);
        goto after_0;
    // 0x4000E5D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000E5D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000E5D8: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x4000E5DC: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000E5E0: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
    // 0x4000E5E4: sll         $t7, $t6, 7
    ctx->r15 = S32(ctx->r14 << 7);
    // 0x4000E5E8: bgez        $t7, L_4000E600
    if (SIGNED(ctx->r15) >= 0) {
        // 0x4000E5EC: sw          $zero, 0xCC($a0)
        MEM_W(0XCC, ctx->r4) = 0;
            goto L_4000E600;
    }
    // 0x4000E5EC: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    // 0x4000E5F0: jal         0x40001A8C
    // 0x4000E5F4: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x4000E5F4: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_1:
    // 0x4000E5F8: b           L_4000E60C
    // 0x4000E5FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4000E60C;
    // 0x4000E5FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000E600:
    // 0x4000E600: jal         0x40009000
    // 0x4000E604: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_9000(rdram, ctx);
        goto after_2;
    // 0x4000E604: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x4000E608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000E60C:
    // 0x4000E60C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000E610: jr          $ra
    // 0x4000E614: nop

    return;
    // 0x4000E614: nop

;}
RECOMP_FUNC void ovl_actor_main_E618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000E618: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000E61C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000E620: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x4000E624: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4000E628: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x4000E62C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x4000E630: bne         $v0, $at, L_4000E6A0
    if (ctx->r2 != ctx->r1) {
        // 0x4000E634: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_4000E6A0;
    }
    // 0x4000E634: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4000E638: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x4000E63C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4000E640: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x4000E644: jal         0x4000034C
    // 0x4000E648: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    ovl_actor_main_34C(rdram, ctx);
        goto after_0;
    // 0x4000E648: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x4000E64C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x4000E650: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x4000E654: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x4000E658: beq         $v0, $zero, L_4000E680
    if (ctx->r2 == 0) {
        // 0x4000E65C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_4000E680;
    }
    // 0x4000E65C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000E660: beq         $v0, $at, L_4000E688
    if (ctx->r2 == ctx->r1) {
        // 0x4000E664: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_4000E688;
    }
    // 0x4000E664: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4000E668: beq         $v0, $at, L_4000E690
    if (ctx->r2 == ctx->r1) {
        // 0x4000E66C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_4000E690;
    }
    // 0x4000E66C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4000E670: beq         $v0, $at, L_4000E698
    if (ctx->r2 == ctx->r1) {
        // 0x4000E674: nop
    
            goto L_4000E698;
    }
    // 0x4000E674: nop

    // 0x4000E678: b           L_4000E710
    // 0x4000E67C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4000E710;
    // 0x4000E67C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_4000E680:
    // 0x4000E680: b           L_4000E70C
    // 0x4000E684: addiu       $a1, $zero, 0x67
    ctx->r5 = ADD32(0, 0X67);
        goto L_4000E70C;
    // 0x4000E684: addiu       $a1, $zero, 0x67
    ctx->r5 = ADD32(0, 0X67);
L_4000E688:
    // 0x4000E688: b           L_4000E70C
    // 0x4000E68C: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
        goto L_4000E70C;
    // 0x4000E68C: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
L_4000E690:
    // 0x4000E690: b           L_4000E70C
    // 0x4000E694: addiu       $a1, $zero, 0x69
    ctx->r5 = ADD32(0, 0X69);
        goto L_4000E70C;
    // 0x4000E694: addiu       $a1, $zero, 0x69
    ctx->r5 = ADD32(0, 0X69);
L_4000E698:
    // 0x4000E698: b           L_4000E70C
    // 0x4000E69C: addiu       $a1, $zero, 0x6A
    ctx->r5 = ADD32(0, 0X6A);
        goto L_4000E70C;
    // 0x4000E69C: addiu       $a1, $zero, 0x6A
    ctx->r5 = ADD32(0, 0X6A);
L_4000E6A0:
    // 0x4000E6A0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4000E6A4: bne         $v0, $at, L_4000E710
    if (ctx->r2 != ctx->r1) {
        // 0x4000E6A8: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_4000E710;
    }
    // 0x4000E6A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000E6AC: lw          $t6, 0x14($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X14);
    // 0x4000E6B0: nop

    // 0x4000E6B4: addiu       $t7, $t6, -0xA
    ctx->r15 = ADD32(ctx->r14, -0XA);
    // 0x4000E6B8: sltiu       $at, $t7, 0x26
    ctx->r1 = ctx->r15 < 0X26 ? 1 : 0;
    // 0x4000E6BC: beq         $at, $zero, L_4000E708
    if (ctx->r1 == 0) {
        // 0x4000E6C0: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_4000E708;
    }
    // 0x4000E6C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x4000E6C4: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000E6C8: addu        $at, $at, $t7
    gpr jr_addend_4000E6D4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x4000E6CC: lw          $t7, -0x1544($at)
    ctx->r15 = ADD32(ctx->r1, -0X1544);
    // 0x4000E6D0: nop

    // 0x4000E6D4: jr          $t7
    // 0x4000E6D8: nop

    switch (jr_addend_4000E6D4 >> 2) {
        case 0: goto L_4000E6E4; break;
        case 1: goto L_4000E708; break;
        case 2: goto L_4000E708; break;
        case 3: goto L_4000E708; break;
        case 4: goto L_4000E708; break;
        case 5: goto L_4000E708; break;
        case 6: goto L_4000E708; break;
        case 7: goto L_4000E6DC; break;
        case 8: goto L_4000E708; break;
        case 9: goto L_4000E6EC; break;
        case 10: goto L_4000E708; break;
        case 11: goto L_4000E708; break;
        case 12: goto L_4000E708; break;
        case 13: goto L_4000E708; break;
        case 14: goto L_4000E708; break;
        case 15: goto L_4000E708; break;
        case 16: goto L_4000E708; break;
        case 17: goto L_4000E708; break;
        case 18: goto L_4000E708; break;
        case 19: goto L_4000E708; break;
        case 20: goto L_4000E708; break;
        case 21: goto L_4000E708; break;
        case 22: goto L_4000E708; break;
        case 23: goto L_4000E6F4; break;
        case 24: goto L_4000E708; break;
        case 25: goto L_4000E708; break;
        case 26: goto L_4000E708; break;
        case 27: goto L_4000E708; break;
        case 28: goto L_4000E708; break;
        case 29: goto L_4000E708; break;
        case 30: goto L_4000E708; break;
        case 31: goto L_4000E708; break;
        case 32: goto L_4000E6FC; break;
        case 33: goto L_4000E708; break;
        case 34: goto L_4000E708; break;
        case 35: goto L_4000E708; break;
        case 36: goto L_4000E708; break;
        case 37: goto L_4000E704; break;
        default: switch_error(__func__, 0x4000E6D4, 0x4001EABC);
    }
    // 0x4000E6D8: nop

L_4000E6DC:
    // 0x4000E6DC: b           L_4000E708
    // 0x4000E6E0: addiu       $a1, $zero, 0x39F
    ctx->r5 = ADD32(0, 0X39F);
        goto L_4000E708;
    // 0x4000E6E0: addiu       $a1, $zero, 0x39F
    ctx->r5 = ADD32(0, 0X39F);
L_4000E6E4:
    // 0x4000E6E4: b           L_4000E708
    // 0x4000E6E8: addiu       $a1, $zero, 0x3C3
    ctx->r5 = ADD32(0, 0X3C3);
        goto L_4000E708;
    // 0x4000E6E8: addiu       $a1, $zero, 0x3C3
    ctx->r5 = ADD32(0, 0X3C3);
L_4000E6EC:
    // 0x4000E6EC: b           L_4000E708
    // 0x4000E6F0: addiu       $a1, $zero, 0x3AD
    ctx->r5 = ADD32(0, 0X3AD);
        goto L_4000E708;
    // 0x4000E6F0: addiu       $a1, $zero, 0x3AD
    ctx->r5 = ADD32(0, 0X3AD);
L_4000E6F4:
    // 0x4000E6F4: b           L_4000E708
    // 0x4000E6F8: addiu       $a1, $zero, 0x3B4
    ctx->r5 = ADD32(0, 0X3B4);
        goto L_4000E708;
    // 0x4000E6F8: addiu       $a1, $zero, 0x3B4
    ctx->r5 = ADD32(0, 0X3B4);
L_4000E6FC:
    // 0x4000E6FC: b           L_4000E708
    // 0x4000E700: addiu       $a1, $zero, 0x3CB
    ctx->r5 = ADD32(0, 0X3CB);
        goto L_4000E708;
    // 0x4000E700: addiu       $a1, $zero, 0x3CB
    ctx->r5 = ADD32(0, 0X3CB);
L_4000E704:
    // 0x4000E704: addiu       $a1, $zero, 0x3D5
    ctx->r5 = ADD32(0, 0X3D5);
L_4000E708:
    // 0x4000E708: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_4000E70C:
    // 0x4000E70C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_4000E710:
    // 0x4000E710: beq         $a1, $at, L_4000E724
    if (ctx->r5 == ctx->r1) {
        // 0x4000E714: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000E724;
    }
    // 0x4000E714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000E718: jal         0x4000115C
    // 0x4000E71C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_1;
    // 0x4000E71C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_1:
    // 0x4000E720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000E724:
    // 0x4000E724: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000E728: jr          $ra
    // 0x4000E72C: nop

    return;
    // 0x4000E72C: nop

;}
RECOMP_FUNC void ovl_actor_main_E730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000E730: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4000E734: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4000E738: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000E73C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000E740: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000E744: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x4000E748: bne         $a1, $at, L_4000E794
    if (ctx->r5 != ctx->r1) {
        // 0x4000E74C: sw          $a2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r6;
            goto L_4000E794;
    }
    // 0x4000E74C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x4000E750: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x4000E754: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000E758: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000E75C: jal         0x40008D20
    // 0x4000E760: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4000E760: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4000E764: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4000E768: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x4000E76C: jal         0x40000CA0
    // 0x4000E770: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_1;
    // 0x4000E770: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x4000E774: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x4000E778: nop

    // 0x4000E77C: beq         $t7, $zero, L_4000E7B4
    if (ctx->r15 == 0) {
        // 0x4000E780: lw          $a1, 0x2C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X2C);
            goto L_4000E7B4;
    }
    // 0x4000E780: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x4000E784: jal         0x4000E618
    // 0x4000E788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_E618(rdram, ctx);
        goto after_2;
    // 0x4000E788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x4000E78C: b           L_4000E7B4
    // 0x4000E790: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
        goto L_4000E7B4;
    // 0x4000E790: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
L_4000E794:
    // 0x4000E794: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x4000E798: nop

    // 0x4000E79C: slti        $at, $t8, 0x24
    ctx->r1 = SIGNED(ctx->r24) < 0X24 ? 1 : 0;
    // 0x4000E7A0: bne         $at, $zero, L_4000E7B4
    if (ctx->r1 != 0) {
        // 0x4000E7A4: lw          $a1, 0x2C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X2C);
            goto L_4000E7B4;
    }
    // 0x4000E7A4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x4000E7A8: jal         0x4000E5C0
    // 0x4000E7AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_E5C0(rdram, ctx);
        goto after_3;
    // 0x4000E7AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x4000E7B0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
L_4000E7B4:
    // 0x4000E7B4: lui         $a2, 0x4189
    ctx->r6 = S32(0X4189 << 16);
    // 0x4000E7B8: ori         $a2, $a2, 0x2492
    ctx->r6 = ctx->r6 | 0X2492;
    // 0x4000E7BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000E7C0: jal         0x40008EC0
    // 0x4000E7C4: addiu       $a3, $zero, 0x15
    ctx->r7 = ADD32(0, 0X15);
    ovl_actor_main_8EC0(rdram, ctx);
        goto after_4;
    // 0x4000E7C4: addiu       $a3, $zero, 0x15
    ctx->r7 = ADD32(0, 0X15);
    after_4:
    // 0x4000E7C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4000E7CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4000E7D0: jr          $ra
    // 0x4000E7D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4000E7D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_E7D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000E7D8: lui         $t7, 0x4002
    ctx->r15 = S32(0X4002 << 16);
    // 0x4000E7DC: addiu       $t7, $t7, -0x266C
    ctx->r15 = ADD32(ctx->r15, -0X266C);
    // 0x4000E7E0: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x4000E7E4: addu        $a3, $t6, $t7
    ctx->r7 = ADD32(ctx->r14, ctx->r15);
    // 0x4000E7E8: lw          $t8, 0x4($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X4);
    // 0x4000E7EC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x4000E7F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000E7F4: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x4000E7F8: beq         $t8, $zero, L_4000EA24
    if (ctx->r24 == 0) {
        // 0x4000E7FC: sw          $a2, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->r6;
            goto L_4000EA24;
    }
    // 0x4000E7FC: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x4000E800: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000E804: bne         $a2, $at, L_4000E8A0
    if (ctx->r6 != ctx->r1) {
        // 0x4000E808: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_4000E8A0;
    }
    // 0x4000E808: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x4000E80C: jal         0x40000DD8
    // 0x4000E810: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    ovl_actor_main_DD8(rdram, ctx);
        goto after_0;
    // 0x4000E810: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x4000E814: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x4000E818: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x4000E81C: addiu       $v1, $v1, 0x348
    ctx->r3 = ADD32(ctx->r3, 0X348);
    // 0x4000E820: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x4000E824: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x4000E828: jal         0x40000D9C
    // 0x4000E82C: addiu       $a1, $v1, 0x4
    ctx->r5 = ADD32(ctx->r3, 0X4);
    ovl_actor_main_D9C(rdram, ctx);
        goto after_1;
    // 0x4000E82C: addiu       $a1, $v1, 0x4
    ctx->r5 = ADD32(ctx->r3, 0X4);
    after_1:
    // 0x4000E830: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x4000E834: jal         0x40000DF0
    // 0x4000E838: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    ovl_actor_main_DF0(rdram, ctx);
        goto after_2;
    // 0x4000E838: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_2:
    // 0x4000E83C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x4000E840: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x4000E844: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x4000E848: jal         0x40000D90
    // 0x4000E84C: nop

    ovl_actor_main_D90(rdram, ctx);
        goto after_3;
    // 0x4000E84C: nop

    after_3:
    // 0x4000E850: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x4000E854: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4000E858: lw          $a0, 0x10($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X10);
    // 0x4000E85C: jal         0x400006C4
    // 0x4000E860: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_4;
    // 0x4000E860: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x4000E864: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x4000E868: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x4000E86C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x4000E870: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x4000E874: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x4000E878: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x4000E87C: jal         0x40000D60
    // 0x4000E880: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    ovl_actor_main_D60(rdram, ctx);
        goto after_5;
    // 0x4000E880: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_5:
    // 0x4000E884: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000E888: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x4000E88C: lwc1        $f8, -0x14AC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X14AC);
    // 0x4000E890: nop

    // 0x4000E894: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
    // 0x4000E898: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x4000E89C: nop

L_4000E8A0:
    // 0x4000E8A0: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x4000E8A4: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x4000E8A8: addiu       $v1, $t1, 0x348
    ctx->r3 = ADD32(ctx->r9, 0X348);
    // 0x4000E8AC: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x4000E8B0: nop

    // 0x4000E8B4: slt         $at, $v0, $t2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x4000E8B8: beq         $at, $zero, L_4000EA24
    if (ctx->r1 == 0) {
        // 0x4000E8BC: sll         $t3, $v0, 4
        ctx->r11 = S32(ctx->r2 << 4);
            goto L_4000EA24;
    }
    // 0x4000E8BC: sll         $t3, $v0, 4
    ctx->r11 = S32(ctx->r2 << 4);
    // 0x4000E8C0: lw          $a0, 0x4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X4);
    // 0x4000E8C4: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x4000E8C8: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x4000E8CC: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x4000E8D0: addiu       $a1, $v1, 0x4
    ctx->r5 = ADD32(ctx->r3, 0X4);
    // 0x4000E8D4: bne         $t4, $t5, L_4000E994
    if (ctx->r12 != ctx->r13) {
        // 0x4000E8D8: lui         $at, 0x43B4
        ctx->r1 = S32(0X43B4 << 16);
            goto L_4000E994;
    }
    // 0x4000E8D8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x4000E8DC: lwc1        $f10, 0x44($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X44);
    // 0x4000E8E0: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x4000E8E4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4000E8E8: add.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x4000E8EC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x4000E8F0: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x4000E8F4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4000E8F8: bc1f        L_4000E904
    if (!c1cs) {
        // 0x4000E8FC: lui         $at, 0x4387
        ctx->r1 = S32(0X4387 << 16);
            goto L_4000E904;
    }
    // 0x4000E8FC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x4000E900: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
L_4000E904:
    // 0x4000E904: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x4000E908: nop

    // 0x4000E90C: bc1f        L_4000E94C
    if (!c1cs) {
        // 0x4000E910: nop
    
            goto L_4000E94C;
    }
    // 0x4000E910: nop

    // 0x4000E914: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000E918: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x4000E91C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x4000E920: nop

    // 0x4000E924: bc1f        L_4000E94C
    if (!c1cs) {
        // 0x4000E928: nop
    
            goto L_4000E94C;
    }
    // 0x4000E928: nop

    // 0x4000E92C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4000E930: nop

    // 0x4000E934: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x4000E938: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x4000E93C: nop

    // 0x4000E940: bc1f        L_4000E94C
    if (!c1cs) {
        // 0x4000E944: nop
    
            goto L_4000E94C;
    }
    // 0x4000E944: nop

    // 0x4000E948: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
L_4000E94C:
    // 0x4000E94C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000E950: lwc1        $f11, -0x14A8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X14A8);
    // 0x4000E954: lwc1        $f10, -0x14A4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X14A4);
    // 0x4000E958: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x4000E95C: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x4000E960: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000E964: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x4000E968: swc1        $f18, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f18.u32l;
    // 0x4000E96C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x4000E970: nop

    // 0x4000E974: bne         $v0, $at, L_4000E988
    if (ctx->r2 != ctx->r1) {
        // 0x4000E978: nop
    
            goto L_4000E988;
    }
    // 0x4000E978: nop

    // 0x4000E97C: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x4000E980: b           L_4000E994
    // 0x4000E984: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
        goto L_4000E994;
    // 0x4000E984: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
L_4000E988:
    // 0x4000E988: beq         $v0, $zero, L_4000E998
    if (ctx->r2 == 0) {
        // 0x4000E98C: lw          $t6, 0x68($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X68);
            goto L_4000E998;
    }
    // 0x4000E98C: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x4000E990: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
L_4000E994:
    // 0x4000E994: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
L_4000E998:
    // 0x4000E998: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x4000E99C: nop

    // 0x4000E9A0: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x4000E9A4: bne         $at, $zero, L_4000EA18
    if (ctx->r1 != 0) {
        // 0x4000E9A8: nop
    
            goto L_4000EA18;
    }
    // 0x4000E9A8: nop

    // 0x4000E9AC: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x4000E9B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000E9B4: beq         $v0, $zero, L_4000EA08
    if (ctx->r2 == 0) {
        // 0x4000E9B8: nop
    
            goto L_4000EA08;
    }
    // 0x4000E9B8: nop

    // 0x4000E9BC: beq         $v0, $at, L_4000EA08
    if (ctx->r2 == ctx->r1) {
        // 0x4000E9C0: nop
    
            goto L_4000EA08;
    }
    // 0x4000E9C0: nop

    // 0x4000E9C4: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x4000E9C8: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x4000E9CC: lw          $t8, 0x14($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X14);
    // 0x4000E9D0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x4000E9D4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x4000E9D8: swc1        $f10, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f10.u32l;
    // 0x4000E9DC: sw          $t9, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r25;
    // 0x4000E9E0: lw          $t2, 0xC($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC);
    // 0x4000E9E4: nop

    // 0x4000E9E8: slt         $at, $t9, $t2
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x4000E9EC: bne         $at, $zero, L_4000EA18
    if (ctx->r1 != 0) {
        // 0x4000E9F0: nop
    
            goto L_4000EA18;
    }
    // 0x4000E9F0: nop

    // 0x4000E9F4: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
    // 0x4000E9F8: nop

    // 0x4000E9FC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x4000EA00: b           L_4000EA18
    // 0x4000EA04: sw          $t4, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r12;
        goto L_4000EA18;
    // 0x4000EA04: sw          $t4, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r12;
L_4000EA08:
    // 0x4000EA08: lw          $t5, 0x10($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X10);
    // 0x4000EA0C: nop

    // 0x4000EA10: addiu       $t1, $t5, 0x1
    ctx->r9 = ADD32(ctx->r13, 0X1);
    // 0x4000EA14: sw          $t1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r9;
L_4000EA18:
    // 0x4000EA18: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x4000EA1C: jal         0x40000D78
    // 0x4000EA20: nop

    ovl_actor_main_D78(rdram, ctx);
        goto after_6;
    // 0x4000EA20: nop

    after_6:
L_4000EA24:
    // 0x4000EA24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000EA28: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x4000EA2C: jr          $ra
    // 0x4000EA30: nop

    return;
    // 0x4000EA30: nop

;}
RECOMP_FUNC void ovl_actor_main_EA34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000EA34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4000EA38: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4000EA3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000EA40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000EA44: bne         $a1, $at, L_4000EA7C
    if (ctx->r5 != ctx->r1) {
        // 0x4000EA48: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4000EA7C;
    }
    // 0x4000EA48: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000EA4C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x4000EA50: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000EA54: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000EA58: jal         0x40008D20
    // 0x4000EA5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4000EA5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4000EA60: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4000EA64: sw          $zero, 0x344($s0)
    MEM_W(0X344, ctx->r16) = 0;
    // 0x4000EA68: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x4000EA6C: jal         0x40000CA0
    // 0x4000EA70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_1;
    // 0x4000EA70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x4000EA74: b           L_4000EB74
    // 0x4000EA78: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
        goto L_4000EB74;
    // 0x4000EA78: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
L_4000EA7C:
    // 0x4000EA7C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x4000EA80: beq         $a1, $at, L_4000EAC4
    if (ctx->r5 == ctx->r1) {
        // 0x4000EA84: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000EAC4;
    }
    // 0x4000EA84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000EA88: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x4000EA8C: beq         $a1, $at, L_4000EAC4
    if (ctx->r5 == ctx->r1) {
        // 0x4000EA90: addiu       $at, $zero, 0x20
        ctx->r1 = ADD32(0, 0X20);
            goto L_4000EAC4;
    }
    // 0x4000EA90: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x4000EA94: beq         $a1, $at, L_4000EAC4
    if (ctx->r5 == ctx->r1) {
        // 0x4000EA98: addiu       $at, $zero, 0x27
        ctx->r1 = ADD32(0, 0X27);
            goto L_4000EAC4;
    }
    // 0x4000EA98: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x4000EA9C: beq         $a1, $at, L_4000EAC4
    if (ctx->r5 == ctx->r1) {
        // 0x4000EAA0: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_4000EAC4;
    }
    // 0x4000EAA0: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x4000EAA4: beq         $a1, $at, L_4000EAC4
    if (ctx->r5 == ctx->r1) {
        // 0x4000EAA8: addiu       $at, $zero, 0x35
        ctx->r1 = ADD32(0, 0X35);
            goto L_4000EAC4;
    }
    // 0x4000EAA8: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
    // 0x4000EAAC: beq         $a1, $at, L_4000EAC4
    if (ctx->r5 == ctx->r1) {
        // 0x4000EAB0: addiu       $at, $zero, 0x43
        ctx->r1 = ADD32(0, 0X43);
            goto L_4000EAC4;
    }
    // 0x4000EAB0: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x4000EAB4: beq         $a1, $at, L_4000EAC4
    if (ctx->r5 == ctx->r1) {
        // 0x4000EAB8: addiu       $at, $zero, 0x5A
        ctx->r1 = ADD32(0, 0X5A);
            goto L_4000EAC4;
    }
    // 0x4000EAB8: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x4000EABC: bne         $a1, $at, L_4000EB0C
    if (ctx->r5 != ctx->r1) {
        // 0x4000EAC0: addiu       $at, $zero, 0x8C
        ctx->r1 = ADD32(0, 0X8C);
            goto L_4000EB0C;
    }
    // 0x4000EAC0: addiu       $at, $zero, 0x8C
    ctx->r1 = ADD32(0, 0X8C);
L_4000EAC4:
    // 0x4000EAC4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000EAC8: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    // 0x4000EACC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4000EAD0: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x4000EAD4: jal         0x4000118C
    // 0x4000EAD8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_2;
    // 0x4000EAD8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x4000EADC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000EAE0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x4000EAE4: jal         0x4001073C
    // 0x4000EAE8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_actor_main_1073C(rdram, ctx);
        goto after_3;
    // 0x4000EAE8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_3:
    // 0x4000EAEC: sw          $zero, 0x344($s0)
    MEM_W(0X344, ctx->r16) = 0;
    // 0x4000EAF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000EAF4: addiu       $a1, $zero, 0x235
    ctx->r5 = ADD32(0, 0X235);
    // 0x4000EAF8: jal         0x4000115C
    // 0x4000EAFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_4;
    // 0x4000EAFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x4000EB00: b           L_4000EB74
    // 0x4000EB04: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
        goto L_4000EB74;
    // 0x4000EB04: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
    // 0x4000EB08: addiu       $at, $zero, 0x8C
    ctx->r1 = ADD32(0, 0X8C);
L_4000EB0C:
    // 0x4000EB0C: bne         $a1, $at, L_4000EB20
    if (ctx->r5 != ctx->r1) {
        // 0x4000EB10: lui         $at, 0x4220
        ctx->r1 = S32(0X4220 << 16);
            goto L_4000EB20;
    }
    // 0x4000EB10: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x4000EB14: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000EB18: b           L_4000EB70
    // 0x4000EB1C: swc1        $f4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f4.u32l;
        goto L_4000EB70;
    // 0x4000EB1C: swc1        $f4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f4.u32l;
L_4000EB20:
    // 0x4000EB20: addiu       $at, $zero, 0x9C
    ctx->r1 = ADD32(0, 0X9C);
    // 0x4000EB24: bne         $a1, $at, L_4000EB5C
    if (ctx->r5 != ctx->r1) {
        // 0x4000EB28: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000EB5C;
    }
    // 0x4000EB28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000EB2C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x4000EB30: addiu       $a1, $zero, 0x7E
    ctx->r5 = ADD32(0, 0X7E);
    // 0x4000EB34: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000EB38: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x4000EB3C: jal         0x4000118C
    // 0x4000EB40: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_5;
    // 0x4000EB40: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x4000EB44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000EB48: addiu       $a1, $zero, 0x23D
    ctx->r5 = ADD32(0, 0X23D);
    // 0x4000EB4C: jal         0x4000115C
    // 0x4000EB50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_6;
    // 0x4000EB50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x4000EB54: b           L_4000EB74
    // 0x4000EB58: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
        goto L_4000EB74;
    // 0x4000EB58: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
L_4000EB5C:
    // 0x4000EB5C: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    // 0x4000EB60: bne         $a1, $at, L_4000EB70
    if (ctx->r5 != ctx->r1) {
        // 0x4000EB64: nop
    
            goto L_4000EB70;
    }
    // 0x4000EB64: nop

    // 0x4000EB68: jal         0x4000E5C0
    // 0x4000EB6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_E5C0(rdram, ctx);
        goto after_7;
    // 0x4000EB6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_4000EB70:
    // 0x4000EB70: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
L_4000EB74:
    // 0x4000EB74: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x4000EB78: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x4000EB7C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4000EB80: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x4000EB84: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x4000EB88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000EB8C: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x4000EB90: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x4000EB94: bc1f        L_4000EBA0
    if (!c1cs) {
        // 0x4000EB98: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_4000EBA0;
    }
    // 0x4000EB98: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x4000EB9C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_4000EBA0:
    // 0x4000EBA0: beq         $v1, $zero, L_4000EBB0
    if (ctx->r3 == 0) {
        // 0x4000EBA4: sw          $t6, 0x344($s0)
        MEM_W(0X344, ctx->r16) = ctx->r14;
            goto L_4000EBB0;
    }
    // 0x4000EBA4: sw          $t6, 0x344($s0)
    MEM_W(0X344, ctx->r16) = ctx->r14;
    // 0x4000EBA8: jal         0x4001073C
    // 0x4000EBAC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_actor_main_1073C(rdram, ctx);
        goto after_8;
    // 0x4000EBAC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_8:
L_4000EBB0:
    // 0x4000EBB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4000EBB4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4000EBB8: jr          $ra
    // 0x4000EBBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4000EBBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_EBC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000EBC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000EBC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000EBC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4000EBCC: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x4000EBD0: jal         0x40011944
    // 0x4000EBD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_11944(rdram, ctx);
        goto after_0;
    // 0x4000EBD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000EBD8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000EBDC: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    // 0x4000EBE0: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
    // 0x4000EBE4: jal         0x40001A8C
    // 0x4000EBE8: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x4000EBE8: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    after_1:
    // 0x4000EBEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000EBF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000EBF4: jr          $ra
    // 0x4000EBF8: nop

    return;
    // 0x4000EBF8: nop

;}
RECOMP_FUNC void ovl_actor_main_EBFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000EBFC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4000EC00: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4000EC04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000EC08: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000EC0C: bne         $a1, $at, L_4000EC44
    if (ctx->r5 != ctx->r1) {
        // 0x4000EC10: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4000EC44;
    }
    // 0x4000EC10: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000EC14: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x4000EC18: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000EC1C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000EC20: jal         0x40008D20
    // 0x4000EC24: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4000EC24: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4000EC28: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4000EC2C: sw          $zero, 0x344($s0)
    MEM_W(0X344, ctx->r16) = 0;
    // 0x4000EC30: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x4000EC34: jal         0x40000CA0
    // 0x4000EC38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_1;
    // 0x4000EC38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x4000EC3C: b           L_4000ED34
    // 0x4000EC40: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
        goto L_4000ED34;
    // 0x4000EC40: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
L_4000EC44:
    // 0x4000EC44: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x4000EC48: beq         $a1, $at, L_4000EC94
    if (ctx->r5 == ctx->r1) {
        // 0x4000EC4C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000EC94;
    }
    // 0x4000EC4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000EC50: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x4000EC54: beq         $a1, $at, L_4000EC94
    if (ctx->r5 == ctx->r1) {
        // 0x4000EC58: addiu       $at, $zero, 0x1D
        ctx->r1 = ADD32(0, 0X1D);
            goto L_4000EC94;
    }
    // 0x4000EC58: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x4000EC5C: beq         $a1, $at, L_4000EC94
    if (ctx->r5 == ctx->r1) {
        // 0x4000EC60: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_4000EC94;
    }
    // 0x4000EC60: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x4000EC64: beq         $a1, $at, L_4000EC94
    if (ctx->r5 == ctx->r1) {
        // 0x4000EC68: addiu       $at, $zero, 0x2F
        ctx->r1 = ADD32(0, 0X2F);
            goto L_4000EC94;
    }
    // 0x4000EC68: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x4000EC6C: beq         $a1, $at, L_4000EC94
    if (ctx->r5 == ctx->r1) {
        // 0x4000EC70: addiu       $at, $zero, 0x3B
        ctx->r1 = ADD32(0, 0X3B);
            goto L_4000EC94;
    }
    // 0x4000EC70: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x4000EC74: beq         $a1, $at, L_4000EC94
    if (ctx->r5 == ctx->r1) {
        // 0x4000EC78: addiu       $at, $zero, 0x46
        ctx->r1 = ADD32(0, 0X46);
            goto L_4000EC94;
    }
    // 0x4000EC78: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
    // 0x4000EC7C: beq         $a1, $at, L_4000EC94
    if (ctx->r5 == ctx->r1) {
        // 0x4000EC80: addiu       $at, $zero, 0x52
        ctx->r1 = ADD32(0, 0X52);
            goto L_4000EC94;
    }
    // 0x4000EC80: addiu       $at, $zero, 0x52
    ctx->r1 = ADD32(0, 0X52);
    // 0x4000EC84: beq         $a1, $at, L_4000EC94
    if (ctx->r5 == ctx->r1) {
        // 0x4000EC88: addiu       $at, $zero, 0x66
        ctx->r1 = ADD32(0, 0X66);
            goto L_4000EC94;
    }
    // 0x4000EC88: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x4000EC8C: bne         $a1, $at, L_4000ECDC
    if (ctx->r5 != ctx->r1) {
        // 0x4000EC90: addiu       $at, $zero, 0x67
        ctx->r1 = ADD32(0, 0X67);
            goto L_4000ECDC;
    }
    // 0x4000EC90: addiu       $at, $zero, 0x67
    ctx->r1 = ADD32(0, 0X67);
L_4000EC94:
    // 0x4000EC94: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4000EC98: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    // 0x4000EC9C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000ECA0: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x4000ECA4: jal         0x4000118C
    // 0x4000ECA8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_2;
    // 0x4000ECA8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x4000ECAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000ECB0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x4000ECB4: jal         0x4001073C
    // 0x4000ECB8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_actor_main_1073C(rdram, ctx);
        goto after_3;
    // 0x4000ECB8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_3:
    // 0x4000ECBC: sw          $zero, 0x344($s0)
    MEM_W(0X344, ctx->r16) = 0;
    // 0x4000ECC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000ECC4: addiu       $a1, $zero, 0x235
    ctx->r5 = ADD32(0, 0X235);
    // 0x4000ECC8: jal         0x4000115C
    // 0x4000ECCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_4;
    // 0x4000ECCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x4000ECD0: b           L_4000ED34
    // 0x4000ECD4: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
        goto L_4000ED34;
    // 0x4000ECD4: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
    // 0x4000ECD8: addiu       $at, $zero, 0x67
    ctx->r1 = ADD32(0, 0X67);
L_4000ECDC:
    // 0x4000ECDC: bne         $a1, $at, L_4000ECFC
    if (ctx->r5 != ctx->r1) {
        // 0x4000ECE0: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_4000ECFC;
    }
    // 0x4000ECE0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x4000ECE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4000ECE8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x4000ECEC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4000ECF0: swc1        $f6, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f6.u32l;
    // 0x4000ECF4: b           L_4000ED30
    // 0x4000ECF8: swc1        $f8, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f8.u32l;
        goto L_4000ED30;
    // 0x4000ECF8: swc1        $f8, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f8.u32l;
L_4000ECFC:
    // 0x4000ECFC: addiu       $at, $zero, 0x9C
    ctx->r1 = ADD32(0, 0X9C);
    // 0x4000ED00: bne         $a1, $at, L_4000ED1C
    if (ctx->r5 != ctx->r1) {
        // 0x4000ED04: lui         $at, 0x4080
        ctx->r1 = S32(0X4080 << 16);
            goto L_4000ED1C;
    }
    // 0x4000ED04: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x4000ED08: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4000ED0C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x4000ED10: swc1        $f10, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f10.u32l;
    // 0x4000ED14: b           L_4000ED30
    // 0x4000ED18: swc1        $f16, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f16.u32l;
        goto L_4000ED30;
    // 0x4000ED18: swc1        $f16, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f16.u32l;
L_4000ED1C:
    // 0x4000ED1C: addiu       $at, $zero, 0xB9
    ctx->r1 = ADD32(0, 0XB9);
    // 0x4000ED20: bne         $a1, $at, L_4000ED30
    if (ctx->r5 != ctx->r1) {
        // 0x4000ED24: nop
    
            goto L_4000ED30;
    }
    // 0x4000ED24: nop

    // 0x4000ED28: jal         0x4000E5C0
    // 0x4000ED2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_E5C0(rdram, ctx);
        goto after_5;
    // 0x4000ED2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_4000ED30:
    // 0x4000ED30: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
L_4000ED34:
    // 0x4000ED34: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x4000ED38: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x4000ED3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4000ED40: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x4000ED44: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x4000ED48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000ED4C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x4000ED50: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x4000ED54: bc1f        L_4000ED60
    if (!c1cs) {
        // 0x4000ED58: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_4000ED60;
    }
    // 0x4000ED58: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x4000ED5C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_4000ED60:
    // 0x4000ED60: beq         $v1, $zero, L_4000ED70
    if (ctx->r3 == 0) {
        // 0x4000ED64: sw          $t6, 0x344($s0)
        MEM_W(0X344, ctx->r16) = ctx->r14;
            goto L_4000ED70;
    }
    // 0x4000ED64: sw          $t6, 0x344($s0)
    MEM_W(0X344, ctx->r16) = ctx->r14;
    // 0x4000ED68: jal         0x4001073C
    // 0x4000ED6C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_actor_main_1073C(rdram, ctx);
        goto after_6;
    // 0x4000ED6C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_6:
L_4000ED70:
    // 0x4000ED70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4000ED74: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4000ED78: jr          $ra
    // 0x4000ED7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4000ED7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_ED80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000ED80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4000ED84: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x4000ED88: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x4000ED8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000ED90: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000ED94: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x4000ED98: bne         $a1, $at, L_4000EDD0
    if (ctx->r5 != ctx->r1) {
        // 0x4000ED9C: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4000EDD0;
    }
    // 0x4000ED9C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000EDA0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x4000EDA4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000EDA8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000EDAC: jal         0x40008D20
    // 0x4000EDB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4000EDB0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4000EDB4: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4000EDB8: sw          $zero, 0x344($s0)
    MEM_W(0X344, ctx->r16) = 0;
    // 0x4000EDBC: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    // 0x4000EDC0: jal         0x40000CA0
    // 0x4000EDC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_1;
    // 0x4000EDC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x4000EDC8: b           L_4000EEFC
    // 0x4000EDCC: addiu       $at, $zero, 0x4D
    ctx->r1 = ADD32(0, 0X4D);
        goto L_4000EEFC;
    // 0x4000EDCC: addiu       $at, $zero, 0x4D
    ctx->r1 = ADD32(0, 0X4D);
L_4000EDD0:
    // 0x4000EDD0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x4000EDD4: beq         $s1, $at, L_4000EE20
    if (ctx->r17 == ctx->r1) {
        // 0x4000EDD8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000EE20;
    }
    // 0x4000EDD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000EDDC: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x4000EDE0: beq         $s1, $at, L_4000EE20
    if (ctx->r17 == ctx->r1) {
        // 0x4000EDE4: addiu       $at, $zero, 0x19
        ctx->r1 = ADD32(0, 0X19);
            goto L_4000EE20;
    }
    // 0x4000EDE4: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x4000EDE8: beq         $s1, $at, L_4000EE20
    if (ctx->r17 == ctx->r1) {
        // 0x4000EDEC: addiu       $at, $zero, 0x21
        ctx->r1 = ADD32(0, 0X21);
            goto L_4000EE20;
    }
    // 0x4000EDEC: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x4000EDF0: beq         $s1, $at, L_4000EE20
    if (ctx->r17 == ctx->r1) {
        // 0x4000EDF4: addiu       $at, $zero, 0x27
        ctx->r1 = ADD32(0, 0X27);
            goto L_4000EE20;
    }
    // 0x4000EDF4: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x4000EDF8: beq         $s1, $at, L_4000EE20
    if (ctx->r17 == ctx->r1) {
        // 0x4000EDFC: addiu       $at, $zero, 0x2F
        ctx->r1 = ADD32(0, 0X2F);
            goto L_4000EE20;
    }
    // 0x4000EDFC: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x4000EE00: beq         $s1, $at, L_4000EE20
    if (ctx->r17 == ctx->r1) {
        // 0x4000EE04: addiu       $at, $zero, 0x37
        ctx->r1 = ADD32(0, 0X37);
            goto L_4000EE20;
    }
    // 0x4000EE04: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    // 0x4000EE08: beq         $s1, $at, L_4000EE20
    if (ctx->r17 == ctx->r1) {
        // 0x4000EE0C: addiu       $at, $zero, 0x40
        ctx->r1 = ADD32(0, 0X40);
            goto L_4000EE20;
    }
    // 0x4000EE0C: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x4000EE10: beq         $s1, $at, L_4000EE20
    if (ctx->r17 == ctx->r1) {
        // 0x4000EE14: addiu       $at, $zero, 0x4A
        ctx->r1 = ADD32(0, 0X4A);
            goto L_4000EE20;
    }
    // 0x4000EE14: addiu       $at, $zero, 0x4A
    ctx->r1 = ADD32(0, 0X4A);
    // 0x4000EE18: bne         $s1, $at, L_4000EE90
    if (ctx->r17 != ctx->r1) {
        // 0x4000EE1C: addiu       $at, $zero, 0x76
        ctx->r1 = ADD32(0, 0X76);
            goto L_4000EE90;
    }
    // 0x4000EE1C: addiu       $at, $zero, 0x76
    ctx->r1 = ADD32(0, 0X76);
L_4000EE20:
    // 0x4000EE20: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000EE24: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    // 0x4000EE28: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4000EE2C: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x4000EE30: jal         0x4000118C
    // 0x4000EE34: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_2;
    // 0x4000EE34: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x4000EE38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000EE3C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x4000EE40: jal         0x4001073C
    // 0x4000EE44: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_actor_main_1073C(rdram, ctx);
        goto after_3;
    // 0x4000EE44: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_3:
    // 0x4000EE48: sw          $zero, 0x344($s0)
    MEM_W(0X344, ctx->r16) = 0;
    // 0x4000EE4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000EE50: addiu       $a1, $zero, 0x235
    ctx->r5 = ADD32(0, 0X235);
    // 0x4000EE54: jal         0x4000115C
    // 0x4000EE58: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_4;
    // 0x4000EE58: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x4000EE5C: addiu       $at, $zero, 0x4A
    ctx->r1 = ADD32(0, 0X4A);
    // 0x4000EE60: bne         $s1, $at, L_4000EEF8
    if (ctx->r17 != ctx->r1) {
        // 0x4000EE64: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000EEF8;
    }
    // 0x4000EE64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000EE68: lui         $at, 0xC100
    ctx->r1 = S32(0XC100 << 16);
    // 0x4000EE6C: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x4000EE70: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4000EE74: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x4000EE78: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    // 0x4000EE7C: jal         0x40001A8C
    // 0x4000EE80: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_5;
    // 0x4000EE80: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    after_5:
    // 0x4000EE84: b           L_4000EEFC
    // 0x4000EE88: addiu       $at, $zero, 0x4D
    ctx->r1 = ADD32(0, 0X4D);
        goto L_4000EEFC;
    // 0x4000EE88: addiu       $at, $zero, 0x4D
    ctx->r1 = ADD32(0, 0X4D);
    // 0x4000EE8C: addiu       $at, $zero, 0x76
    ctx->r1 = ADD32(0, 0X76);
L_4000EE90:
    // 0x4000EE90: bne         $s1, $at, L_4000EEE4
    if (ctx->r17 != ctx->r1) {
        // 0x4000EE94: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000EEE4;
    }
    // 0x4000EE94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000EE98: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4000EE9C: addiu       $a1, $zero, 0x7B
    ctx->r5 = ADD32(0, 0X7B);
    // 0x4000EEA0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000EEA4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x4000EEA8: jal         0x4000118C
    // 0x4000EEAC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_6;
    // 0x4000EEAC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x4000EEB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000EEB4: addiu       $a1, $zero, 0x276
    ctx->r5 = ADD32(0, 0X276);
    // 0x4000EEB8: jal         0x4000115C
    // 0x4000EEBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_7;
    // 0x4000EEBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x4000EEC0: addiu       $t6, $zero, 0xB2
    ctx->r14 = ADD32(0, 0XB2);
    // 0x4000EEC4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x4000EEC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000EECC: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x4000EED0: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x4000EED4: jal         0x4001096C
    // 0x4000EED8: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_actor_main_1096C(rdram, ctx);
        goto after_8;
    // 0x4000EED8: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_8:
    // 0x4000EEDC: b           L_4000EEFC
    // 0x4000EEE0: addiu       $at, $zero, 0x4D
    ctx->r1 = ADD32(0, 0X4D);
        goto L_4000EEFC;
    // 0x4000EEE0: addiu       $at, $zero, 0x4D
    ctx->r1 = ADD32(0, 0X4D);
L_4000EEE4:
    // 0x4000EEE4: addiu       $at, $zero, 0x9B
    ctx->r1 = ADD32(0, 0X9B);
    // 0x4000EEE8: bne         $s1, $at, L_4000EEFC
    if (ctx->r17 != ctx->r1) {
        // 0x4000EEEC: addiu       $at, $zero, 0x4D
        ctx->r1 = ADD32(0, 0X4D);
            goto L_4000EEFC;
    }
    // 0x4000EEEC: addiu       $at, $zero, 0x4D
    ctx->r1 = ADD32(0, 0X4D);
    // 0x4000EEF0: jal         0x4000E5C0
    // 0x4000EEF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_E5C0(rdram, ctx);
        goto after_9;
    // 0x4000EEF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
L_4000EEF8:
    // 0x4000EEF8: addiu       $at, $zero, 0x4D
    ctx->r1 = ADD32(0, 0X4D);
L_4000EEFC:
    // 0x4000EEFC: bne         $s1, $at, L_4000EF0C
    if (ctx->r17 != ctx->r1) {
        // 0x4000EF00: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000EF0C;
    }
    // 0x4000EF00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000EF04: jal         0x40008EF8
    // 0x4000EF08: addiu       $a1, $zero, 0x5C7
    ctx->r5 = ADD32(0, 0X5C7);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_10;
    // 0x4000EF08: addiu       $a1, $zero, 0x5C7
    ctx->r5 = ADD32(0, 0X5C7);
    after_10:
L_4000EF0C:
    // 0x4000EF0C: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
    // 0x4000EF10: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x4000EF14: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x4000EF18: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4000EF1C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x4000EF20: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x4000EF24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000EF28: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x4000EF2C: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x4000EF30: bc1f        L_4000EF3C
    if (!c1cs) {
        // 0x4000EF34: addiu       $t7, $v0, 0x1
        ctx->r15 = ADD32(ctx->r2, 0X1);
            goto L_4000EF3C;
    }
    // 0x4000EF34: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x4000EF38: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_4000EF3C:
    // 0x4000EF3C: beq         $v1, $zero, L_4000EF4C
    if (ctx->r3 == 0) {
        // 0x4000EF40: sw          $t7, 0x344($s0)
        MEM_W(0X344, ctx->r16) = ctx->r15;
            goto L_4000EF4C;
    }
    // 0x4000EF40: sw          $t7, 0x344($s0)
    MEM_W(0X344, ctx->r16) = ctx->r15;
    // 0x4000EF44: jal         0x4001073C
    // 0x4000EF48: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_actor_main_1073C(rdram, ctx);
        goto after_11;
    // 0x4000EF48: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_11:
L_4000EF4C:
    // 0x4000EF4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4000EF50: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x4000EF54: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x4000EF58: jr          $ra
    // 0x4000EF5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4000EF5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_EF60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000EF60: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x4000EF64: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4000EF68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000EF6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000EF70: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000EF74: bne         $a1, $at, L_4000EFB4
    if (ctx->r5 != ctx->r1) {
        // 0x4000EF78: sw          $a1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r5;
            goto L_4000EFB4;
    }
    // 0x4000EF78: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x4000EF7C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x4000EF80: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x4000EF84: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x4000EF88: jal         0x40008D20
    // 0x4000EF8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4000EF8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4000EF90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000EF94: jal         0x40008EF8
    // 0x4000EF98: addiu       $a1, $zero, 0x5C3
    ctx->r5 = ADD32(0, 0X5C3);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x4000EF98: addiu       $a1, $zero, 0x5C3
    ctx->r5 = ADD32(0, 0X5C3);
    after_1:
    // 0x4000EF9C: lw          $t7, 0x90($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X90);
    // 0x4000EFA0: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x4000EFA4: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x4000EFA8: sw          $zero, 0x344($s0)
    MEM_W(0X344, ctx->r16) = 0;
    // 0x4000EFAC: b           L_4000F094
    // 0x4000EFB0: sw          $t8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r24;
        goto L_4000F094;
    // 0x4000EFB0: sw          $t8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r24;
L_4000EFB4:
    // 0x4000EFB4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x4000EFB8: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x4000EFBC: bne         $t9, $at, L_4000F07C
    if (ctx->r25 != ctx->r1) {
        // 0x4000EFC0: addiu       $v0, $s0, 0x348
        ctx->r2 = ADD32(ctx->r16, 0X348);
            goto L_4000F07C;
    }
    // 0x4000EFC0: addiu       $v0, $s0, 0x348
    ctx->r2 = ADD32(ctx->r16, 0X348);
    // 0x4000EFC4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x4000EFC8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000EFCC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x4000EFD0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4000EFD4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x4000EFD8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x4000EFDC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4000EFE0: lwc1        $f16, 0x44($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X44);
    // 0x4000EFE4: swc1        $f4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f4.u32l;
    // 0x4000EFE8: swc1        $f8, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f8.u32l;
    // 0x4000EFEC: swc1        $f6, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f6.u32l;
    // 0x4000EFF0: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
    // 0x4000EFF4: swc1        $f16, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f16.u32l;
    // 0x4000EFF8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x4000EFFC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x4000F000: jal         0x40000D90
    // 0x4000F004: addiu       $a1, $v0, 0x18
    ctx->r5 = ADD32(ctx->r2, 0X18);
    ovl_actor_main_D90(rdram, ctx);
        goto after_2;
    // 0x4000F004: addiu       $a1, $v0, 0x18
    ctx->r5 = ADD32(ctx->r2, 0X18);
    after_2:
    // 0x4000F008: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x4000F00C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4000F010: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x4000F014: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x4000F018: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4000F01C: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x4000F020: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000F024: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x4000F028: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x4000F02C: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x4000F030: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x4000F034: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    // 0x4000F038: swc1        $f8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f8.u32l;
    // 0x4000F03C: lwc1        $f10, -0x14A0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X14A0);
    // 0x4000F040: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000F044: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x4000F048: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x4000F04C: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x4000F050: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x4000F054: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    // 0x4000F058: lwc1        $f6, -0x149C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X149C);
    // 0x4000F05C: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x4000F060: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x4000F064: nop

    // 0x4000F068: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x4000F06C: jal         0x40000D78
    // 0x4000F070: swc1        $f16, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f16.u32l;
    ovl_actor_main_D78(rdram, ctx);
        goto after_3;
    // 0x4000F070: swc1        $f16, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f16.u32l;
    after_3:
    // 0x4000F074: b           L_4000F098
    // 0x4000F078: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
        goto L_4000F098;
    // 0x4000F078: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
L_4000F07C:
    // 0x4000F07C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x4000F080: addiu       $at, $zero, 0x70
    ctx->r1 = ADD32(0, 0X70);
    // 0x4000F084: bne         $t0, $at, L_4000F098
    if (ctx->r8 != ctx->r1) {
        // 0x4000F088: lw          $t1, 0x44($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X44);
            goto L_4000F098;
    }
    // 0x4000F088: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x4000F08C: jal         0x4000E5C0
    // 0x4000F090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_E5C0(rdram, ctx);
        goto after_4;
    // 0x4000F090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_4000F094:
    // 0x4000F094: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
L_4000F098:
    // 0x4000F098: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x4000F09C: slti        $at, $t1, 0x43
    ctx->r1 = SIGNED(ctx->r9) < 0X43 ? 1 : 0;
    // 0x4000F0A0: beq         $at, $zero, L_4000F0BC
    if (ctx->r1 == 0) {
        // 0x4000F0A4: slti        $at, $t2, 0x70
        ctx->r1 = SIGNED(ctx->r10) < 0X70 ? 1 : 0;
            goto L_4000F0BC;
    }
    // 0x4000F0A4: slti        $at, $t2, 0x70
    ctx->r1 = SIGNED(ctx->r10) < 0X70 ? 1 : 0;
    // 0x4000F0A8: jal         0x40009414
    // 0x4000F0AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9414(rdram, ctx);
        goto after_5;
    // 0x4000F0AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x4000F0B0: b           L_4000F1A4
    // 0x4000F0B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000F1A4;
    // 0x4000F0B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4000F0B8: slti        $at, $t2, 0x70
    ctx->r1 = SIGNED(ctx->r10) < 0X70 ? 1 : 0;
L_4000F0BC:
    // 0x4000F0BC: beq         $at, $zero, L_4000F1A0
    if (ctx->r1 == 0) {
        // 0x4000F0C0: addiu       $v0, $s0, 0x348
        ctx->r2 = ADD32(ctx->r16, 0X348);
            goto L_4000F1A0;
    }
    // 0x4000F0C0: addiu       $v0, $s0, 0x348
    ctx->r2 = ADD32(ctx->r16, 0X348);
    // 0x4000F0C4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x4000F0C8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x4000F0CC: jal         0x40000D90
    // 0x4000F0D0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    ovl_actor_main_D90(rdram, ctx);
        goto after_6;
    // 0x4000F0D0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_6:
    // 0x4000F0D4: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x4000F0D8: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4000F0DC: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x4000F0E0: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x4000F0E4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4000F0E8: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x4000F0EC: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x4000F0F0: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x4000F0F4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x4000F0F8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x4000F0FC: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x4000F100: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x4000F104: nop

    // 0x4000F108: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4000F10C: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x4000F110: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x4000F114: jal         0x40000D60
    // 0x4000F118: nop

    ovl_actor_main_D60(rdram, ctx);
        goto after_7;
    // 0x4000F118: nop

    after_7:
    // 0x4000F11C: lw          $v0, 0x90($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X90);
    // 0x4000F120: nop

    // 0x4000F124: andi        $t3, $v0, 0x400
    ctx->r11 = ctx->r2 & 0X400;
    // 0x4000F128: bne         $t3, $zero, L_4000F1A4
    if (ctx->r11 != 0) {
        // 0x4000F12C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_4000F1A4;
    }
    // 0x4000F12C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4000F130: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x4000F134: lwc1        $f16, 0x58($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X58);
    // 0x4000F138: ori         $t4, $v0, 0x400
    ctx->r12 = ctx->r2 | 0X400;
    // 0x4000F13C: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x4000F140: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    // 0x4000F144: bc1t        L_4000F1A0
    if (c1cs) {
        // 0x4000F148: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_4000F1A0;
    }
    // 0x4000F148: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4000F14C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4000F150: jal         0x40000CA0
    // 0x4000F154: sw          $t4, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r12;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_8;
    // 0x4000F154: sw          $t4, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r12;
    after_8:
    // 0x4000F158: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000F15C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F160: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4000F164: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4000F168: addiu       $a1, $zero, 0x6A
    ctx->r5 = ADD32(0, 0X6A);
    // 0x4000F16C: jal         0x4000118C
    // 0x4000F170: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_9;
    // 0x4000F170: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_9:
    // 0x4000F174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F178: addiu       $a1, $zero, 0x289
    ctx->r5 = ADD32(0, 0X289);
    // 0x4000F17C: jal         0x4000115C
    // 0x4000F180: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_10;
    // 0x4000F180: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x4000F184: addiu       $t5, $zero, 0xB2
    ctx->r13 = ADD32(0, 0XB2);
    // 0x4000F188: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x4000F18C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F190: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x4000F194: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x4000F198: jal         0x4001096C
    // 0x4000F19C: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_actor_main_1096C(rdram, ctx);
        goto after_11;
    // 0x4000F19C: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_11:
L_4000F1A0:
    // 0x4000F1A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000F1A4:
    // 0x4000F1A4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4000F1A8: jr          $ra
    // 0x4000F1AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x4000F1AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_actor_main_F1B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000F1B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4000F1B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4000F1B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000F1BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000F1C0: bne         $a1, $at, L_4000F1F8
    if (ctx->r5 != ctx->r1) {
        // 0x4000F1C4: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4000F1F8;
    }
    // 0x4000F1C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000F1C8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x4000F1CC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000F1D0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000F1D4: jal         0x40008D20
    // 0x4000F1D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4000F1D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4000F1DC: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4000F1E0: sw          $zero, 0x344($s0)
    MEM_W(0X344, ctx->r16) = 0;
    // 0x4000F1E4: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x4000F1E8: jal         0x40000CA0
    // 0x4000F1EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_1;
    // 0x4000F1EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x4000F1F0: b           L_4000F348
    // 0x4000F1F4: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
        goto L_4000F348;
    // 0x4000F1F4: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
L_4000F1F8:
    // 0x4000F1F8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x4000F1FC: beq         $a1, $at, L_4000F268
    if (ctx->r5 == ctx->r1) {
        // 0x4000F200: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000F268;
    }
    // 0x4000F200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F204: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x4000F208: beq         $a1, $at, L_4000F268
    if (ctx->r5 == ctx->r1) {
        // 0x4000F20C: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_4000F268;
    }
    // 0x4000F20C: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x4000F210: beq         $a1, $at, L_4000F268
    if (ctx->r5 == ctx->r1) {
        // 0x4000F214: addiu       $at, $zero, 0x1A
        ctx->r1 = ADD32(0, 0X1A);
            goto L_4000F268;
    }
    // 0x4000F214: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x4000F218: beq         $a1, $at, L_4000F268
    if (ctx->r5 == ctx->r1) {
        // 0x4000F21C: addiu       $at, $zero, 0x21
        ctx->r1 = ADD32(0, 0X21);
            goto L_4000F268;
    }
    // 0x4000F21C: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x4000F220: beq         $a1, $at, L_4000F268
    if (ctx->r5 == ctx->r1) {
        // 0x4000F224: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_4000F268;
    }
    // 0x4000F224: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x4000F228: beq         $a1, $at, L_4000F268
    if (ctx->r5 == ctx->r1) {
        // 0x4000F22C: addiu       $at, $zero, 0x2F
        ctx->r1 = ADD32(0, 0X2F);
            goto L_4000F268;
    }
    // 0x4000F22C: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x4000F230: beq         $a1, $at, L_4000F268
    if (ctx->r5 == ctx->r1) {
        // 0x4000F234: addiu       $at, $zero, 0x36
        ctx->r1 = ADD32(0, 0X36);
            goto L_4000F268;
    }
    // 0x4000F234: addiu       $at, $zero, 0x36
    ctx->r1 = ADD32(0, 0X36);
    // 0x4000F238: beq         $a1, $at, L_4000F268
    if (ctx->r5 == ctx->r1) {
        // 0x4000F23C: addiu       $at, $zero, 0x3D
        ctx->r1 = ADD32(0, 0X3D);
            goto L_4000F268;
    }
    // 0x4000F23C: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x4000F240: beq         $a1, $at, L_4000F268
    if (ctx->r5 == ctx->r1) {
        // 0x4000F244: addiu       $at, $zero, 0x44
        ctx->r1 = ADD32(0, 0X44);
            goto L_4000F268;
    }
    // 0x4000F244: addiu       $at, $zero, 0x44
    ctx->r1 = ADD32(0, 0X44);
    // 0x4000F248: beq         $a1, $at, L_4000F268
    if (ctx->r5 == ctx->r1) {
        // 0x4000F24C: addiu       $at, $zero, 0x4B
        ctx->r1 = ADD32(0, 0X4B);
            goto L_4000F268;
    }
    // 0x4000F24C: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
    // 0x4000F250: beq         $a1, $at, L_4000F268
    if (ctx->r5 == ctx->r1) {
        // 0x4000F254: addiu       $at, $zero, 0x52
        ctx->r1 = ADD32(0, 0X52);
            goto L_4000F268;
    }
    // 0x4000F254: addiu       $at, $zero, 0x52
    ctx->r1 = ADD32(0, 0X52);
    // 0x4000F258: beq         $a1, $at, L_4000F268
    if (ctx->r5 == ctx->r1) {
        // 0x4000F25C: addiu       $at, $zero, 0x75
        ctx->r1 = ADD32(0, 0X75);
            goto L_4000F268;
    }
    // 0x4000F25C: addiu       $at, $zero, 0x75
    ctx->r1 = ADD32(0, 0X75);
    // 0x4000F260: bne         $a1, $at, L_4000F2AC
    if (ctx->r5 != ctx->r1) {
        // 0x4000F264: addiu       $at, $zero, 0x76
        ctx->r1 = ADD32(0, 0X76);
            goto L_4000F2AC;
    }
    // 0x4000F264: addiu       $at, $zero, 0x76
    ctx->r1 = ADD32(0, 0X76);
L_4000F268:
    // 0x4000F268: addiu       $a1, $zero, 0x235
    ctx->r5 = ADD32(0, 0X235);
    // 0x4000F26C: jal         0x4000115C
    // 0x4000F270: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_2;
    // 0x4000F270: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x4000F274: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4000F278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F27C: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    // 0x4000F280: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000F284: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x4000F288: jal         0x4000118C
    // 0x4000F28C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_3;
    // 0x4000F28C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x4000F290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F294: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x4000F298: jal         0x4001073C
    // 0x4000F29C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_actor_main_1073C(rdram, ctx);
        goto after_4;
    // 0x4000F29C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_4:
    // 0x4000F2A0: b           L_4000F344
    // 0x4000F2A4: sw          $zero, 0x344($s0)
    MEM_W(0X344, ctx->r16) = 0;
        goto L_4000F344;
    // 0x4000F2A4: sw          $zero, 0x344($s0)
    MEM_W(0X344, ctx->r16) = 0;
    // 0x4000F2A8: addiu       $at, $zero, 0x76
    ctx->r1 = ADD32(0, 0X76);
L_4000F2AC:
    // 0x4000F2AC: bne         $a1, $at, L_4000F2C0
    if (ctx->r5 != ctx->r1) {
        // 0x4000F2B0: lui         $at, 0x4220
        ctx->r1 = S32(0X4220 << 16);
            goto L_4000F2C0;
    }
    // 0x4000F2B0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x4000F2B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4000F2B8: b           L_4000F344
    // 0x4000F2BC: swc1        $f6, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f6.u32l;
        goto L_4000F344;
    // 0x4000F2BC: swc1        $f6, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f6.u32l;
L_4000F2C0:
    // 0x4000F2C0: addiu       $at, $zero, 0x7A
    ctx->r1 = ADD32(0, 0X7A);
    // 0x4000F2C4: bne         $a1, $at, L_4000F2E4
    if (ctx->r5 != ctx->r1) {
        // 0x4000F2C8: addiu       $at, $zero, 0x96
        ctx->r1 = ADD32(0, 0X96);
            goto L_4000F2E4;
    }
    // 0x4000F2C8: addiu       $at, $zero, 0x96
    ctx->r1 = ADD32(0, 0X96);
    // 0x4000F2CC: lwc1        $f8, 0x50($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X50);
    // 0x4000F2D0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x4000F2D4: swc1        $f8, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f8.u32l;
    // 0x4000F2D8: b           L_4000F344
    // 0x4000F2DC: swc1        $f10, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f10.u32l;
        goto L_4000F344;
    // 0x4000F2DC: swc1        $f10, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f10.u32l;
    // 0x4000F2E0: addiu       $at, $zero, 0x96
    ctx->r1 = ADD32(0, 0X96);
L_4000F2E4:
    // 0x4000F2E4: bne         $a1, $at, L_4000F30C
    if (ctx->r5 != ctx->r1) {
        // 0x4000F2E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000F30C;
    }
    // 0x4000F2E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F2EC: addiu       $t6, $zero, 0xB2
    ctx->r14 = ADD32(0, 0XB2);
    // 0x4000F2F0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x4000F2F4: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x4000F2F8: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x4000F2FC: jal         0x4001096C
    // 0x4000F300: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_actor_main_1096C(rdram, ctx);
        goto after_5;
    // 0x4000F300: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_5:
    // 0x4000F304: b           L_4000F348
    // 0x4000F308: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
        goto L_4000F348;
    // 0x4000F308: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
L_4000F30C:
    // 0x4000F30C: addiu       $at, $zero, 0xA5
    ctx->r1 = ADD32(0, 0XA5);
    // 0x4000F310: bne         $a1, $at, L_4000F328
    if (ctx->r5 != ctx->r1) {
        // 0x4000F314: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000F328;
    }
    // 0x4000F314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F318: jal         0x40008F28
    // 0x4000F31C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_8F28(rdram, ctx);
        goto after_6;
    // 0x4000F31C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x4000F320: b           L_4000F348
    // 0x4000F324: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
        goto L_4000F348;
    // 0x4000F324: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
L_4000F328:
    // 0x4000F328: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x4000F32C: bne         $a1, $at, L_4000F344
    if (ctx->r5 != ctx->r1) {
        // 0x4000F330: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000F344;
    }
    // 0x4000F330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F334: jal         0x40006458
    // 0x4000F338: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_6458(rdram, ctx);
        goto after_7;
    // 0x4000F338: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x4000F33C: jal         0x4000E5C0
    // 0x4000F340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_E5C0(rdram, ctx);
        goto after_8;
    // 0x4000F340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_4000F344:
    // 0x4000F344: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
L_4000F348:
    // 0x4000F348: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x4000F34C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x4000F350: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000F354: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x4000F358: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x4000F35C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F360: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x4000F364: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x4000F368: bc1f        L_4000F374
    if (!c1cs) {
        // 0x4000F36C: addiu       $t7, $v0, 0x1
        ctx->r15 = ADD32(ctx->r2, 0X1);
            goto L_4000F374;
    }
    // 0x4000F36C: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x4000F370: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_4000F374:
    // 0x4000F374: beq         $v1, $zero, L_4000F384
    if (ctx->r3 == 0) {
        // 0x4000F378: sw          $t7, 0x344($s0)
        MEM_W(0X344, ctx->r16) = ctx->r15;
            goto L_4000F384;
    }
    // 0x4000F378: sw          $t7, 0x344($s0)
    MEM_W(0X344, ctx->r16) = ctx->r15;
    // 0x4000F37C: jal         0x4001073C
    // 0x4000F380: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_actor_main_1073C(rdram, ctx);
        goto after_9;
    // 0x4000F380: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_9:
L_4000F384:
    // 0x4000F384: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4000F388: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4000F38C: jr          $ra
    // 0x4000F390: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4000F390: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_F394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000F394: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x4000F398: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4000F39C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000F3A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000F3A4: beq         $a1, $at, L_4000F3C0
    if (ctx->r5 == ctx->r1) {
        // 0x4000F3A8: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4000F3C0;
    }
    // 0x4000F3A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000F3AC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x4000F3B0: beq         $a1, $at, L_4000F3F0
    if (ctx->r5 == ctx->r1) {
        // 0x4000F3B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000F3F0;
    }
    // 0x4000F3B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F3B8: b           L_4000F400
    // 0x4000F3BC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
        goto L_4000F400;
    // 0x4000F3BC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_4000F3C0:
    // 0x4000F3C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F3C4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x4000F3C8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000F3CC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000F3D0: jal         0x40008D20
    // 0x4000F3D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4000F3D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4000F3D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F3DC: addiu       $a1, $zero, 0x2B0
    ctx->r5 = ADD32(0, 0X2B0);
    // 0x4000F3E0: jal         0x4000115C
    // 0x4000F3E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_1;
    // 0x4000F3E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x4000F3E8: b           L_4000F3FC
    // 0x4000F3EC: sw          $zero, 0x344($s0)
    MEM_W(0X344, ctx->r16) = 0;
        goto L_4000F3FC;
    // 0x4000F3EC: sw          $zero, 0x344($s0)
    MEM_W(0X344, ctx->r16) = 0;
L_4000F3F0:
    // 0x4000F3F0: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x4000F3F4: jal         0x4001073C
    // 0x4000F3F8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_actor_main_1073C(rdram, ctx);
        goto after_2;
    // 0x4000F3F8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_2:
L_4000F3FC:
    // 0x4000F3FC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_4000F400:
    // 0x4000F400: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4000F404: jal         0x400006C4
    // 0x4000F408: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_3;
    // 0x4000F408: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x4000F40C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x4000F410: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4000F414: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x4000F418: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4000F41C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000F420: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x4000F424: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x4000F428: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x4000F42C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x4000F430: bc1f        L_4000F440
    if (!c1cs) {
        // 0x4000F434: nop
    
            goto L_4000F440;
    }
    // 0x4000F434: nop

    // 0x4000F438: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x4000F43C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
L_4000F440:
    // 0x4000F440: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x4000F444: jal         0x400006C4
    // 0x4000F448: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_4;
    // 0x4000F448: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x4000F44C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x4000F450: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x4000F454: jal         0x400006C4
    // 0x4000F458: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_5;
    // 0x4000F458: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_5:
    // 0x4000F45C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000F460: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4000F464: lwc1        $f6, -0x1498($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1498);
    // 0x4000F468: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x4000F46C: sub.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x4000F470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F474: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x4000F478: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x4000F47C: bc1f        L_4000F494
    if (!c1cs) {
        // 0x4000F480: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_4000F494;
    }
    // 0x4000F480: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4000F484: jal         0x40006458
    // 0x4000F488: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    ovl_actor_main_6458(rdram, ctx);
        goto after_6;
    // 0x4000F488: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    after_6:
    // 0x4000F48C: jal         0x4000E5C0
    // 0x4000F490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_E5C0(rdram, ctx);
        goto after_7;
    // 0x4000F490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_4000F494:
    // 0x4000F494: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4000F498: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x4000F49C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x4000F4A0: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x4000F4A4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x4000F4A8: jal         0x400006C4
    // 0x4000F4AC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_8;
    // 0x4000F4AC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_8:
    // 0x4000F4B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4000F4B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4000F4B8: lwc1        $f10, 0x64($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X64);
    // 0x4000F4BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F4C0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x4000F4C4: jal         0x40009414
    // 0x4000F4C8: swc1        $f18, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f18.u32l;
    ovl_actor_main_9414(rdram, ctx);
        goto after_9;
    // 0x4000F4C8: swc1        $f18, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f18.u32l;
    after_9:
    // 0x4000F4CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4000F4D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4000F4D4: jr          $ra
    // 0x4000F4D8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x4000F4D8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_actor_main_F4DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000F4DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4000F4E0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x4000F4E4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x4000F4E8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x4000F4EC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x4000F4F0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x4000F4F4: beq         $a1, $at, L_4000F548
    if (ctx->r5 == ctx->r1) {
        // 0x4000F4F8: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4000F548;
    }
    // 0x4000F4F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000F4FC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x4000F500: beq         $a1, $at, L_4000F548
    if (ctx->r5 == ctx->r1) {
        // 0x4000F504: addiu       $at, $zero, 0x1A
        ctx->r1 = ADD32(0, 0X1A);
            goto L_4000F548;
    }
    // 0x4000F504: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x4000F508: beq         $a1, $at, L_4000F548
    if (ctx->r5 == ctx->r1) {
        // 0x4000F50C: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_4000F548;
    }
    // 0x4000F50C: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x4000F510: beq         $a1, $at, L_4000F548
    if (ctx->r5 == ctx->r1) {
        // 0x4000F514: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_4000F548;
    }
    // 0x4000F514: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x4000F518: beq         $a1, $at, L_4000F548
    if (ctx->r5 == ctx->r1) {
        // 0x4000F51C: addiu       $at, $zero, 0x38
        ctx->r1 = ADD32(0, 0X38);
            goto L_4000F548;
    }
    // 0x4000F51C: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x4000F520: beq         $a1, $at, L_4000F548
    if (ctx->r5 == ctx->r1) {
        // 0x4000F524: addiu       $at, $zero, 0x42
        ctx->r1 = ADD32(0, 0X42);
            goto L_4000F548;
    }
    // 0x4000F524: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x4000F528: beq         $a1, $at, L_4000F548
    if (ctx->r5 == ctx->r1) {
        // 0x4000F52C: addiu       $at, $zero, 0x4C
        ctx->r1 = ADD32(0, 0X4C);
            goto L_4000F548;
    }
    // 0x4000F52C: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    // 0x4000F530: beq         $a1, $at, L_4000F548
    if (ctx->r5 == ctx->r1) {
        // 0x4000F534: addiu       $at, $zero, 0x56
        ctx->r1 = ADD32(0, 0X56);
            goto L_4000F548;
    }
    // 0x4000F534: addiu       $at, $zero, 0x56
    ctx->r1 = ADD32(0, 0X56);
    // 0x4000F538: beq         $a1, $at, L_4000F548
    if (ctx->r5 == ctx->r1) {
        // 0x4000F53C: addiu       $at, $zero, 0x60
        ctx->r1 = ADD32(0, 0X60);
            goto L_4000F548;
    }
    // 0x4000F53C: addiu       $at, $zero, 0x60
    ctx->r1 = ADD32(0, 0X60);
    // 0x4000F540: bne         $a1, $at, L_4000F58C
    if (ctx->r5 != ctx->r1) {
        // 0x4000F544: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_4000F58C;
    }
    // 0x4000F544: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_4000F548:
    // 0x4000F548: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000F54C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4000F550: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4000F554: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    // 0x4000F558: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x4000F55C: jal         0x4000118C
    // 0x4000F560: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_0;
    // 0x4000F560: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x4000F564: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4000F568: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x4000F56C: jal         0x4001073C
    // 0x4000F570: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_actor_main_1073C(rdram, ctx);
        goto after_1;
    // 0x4000F570: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_1:
    // 0x4000F574: sw          $zero, 0x344($s1)
    MEM_W(0X344, ctx->r17) = 0;
    // 0x4000F578: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4000F57C: addiu       $a1, $zero, 0x235
    ctx->r5 = ADD32(0, 0X235);
    // 0x4000F580: jal         0x4000115C
    // 0x4000F584: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_2;
    // 0x4000F584: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x4000F588: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_4000F58C:
    // 0x4000F58C: beq         $s0, $at, L_4000F5D4
    if (ctx->r16 == ctx->r1) {
        // 0x4000F590: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4000F5D4;
    }
    // 0x4000F590: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4000F594: addiu       $at, $zero, 0x76
    ctx->r1 = ADD32(0, 0X76);
    // 0x4000F598: beq         $s0, $at, L_4000F604
    if (ctx->r16 == ctx->r1) {
        // 0x4000F59C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4000F604;
    }
    // 0x4000F59C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4000F5A0: addiu       $at, $zero, 0x7E
    ctx->r1 = ADD32(0, 0X7E);
    // 0x4000F5A4: beq         $s0, $at, L_4000F604
    if (ctx->r16 == ctx->r1) {
        // 0x4000F5A8: addiu       $at, $zero, 0xA9
        ctx->r1 = ADD32(0, 0XA9);
            goto L_4000F604;
    }
    // 0x4000F5A8: addiu       $at, $zero, 0xA9
    ctx->r1 = ADD32(0, 0XA9);
    // 0x4000F5AC: beq         $s0, $at, L_4000F648
    if (ctx->r16 == ctx->r1) {
        // 0x4000F5B0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4000F648;
    }
    // 0x4000F5B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4000F5B4: addiu       $at, $zero, 0xBE
    ctx->r1 = ADD32(0, 0XBE);
    // 0x4000F5B8: beq         $s0, $at, L_4000F678
    if (ctx->r16 == ctx->r1) {
        // 0x4000F5BC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4000F678;
    }
    // 0x4000F5BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4000F5C0: addiu       $at, $zero, 0xD7
    ctx->r1 = ADD32(0, 0XD7);
    // 0x4000F5C4: beq         $s0, $at, L_4000F688
    if (ctx->r16 == ctx->r1) {
        // 0x4000F5C8: nop
    
            goto L_4000F688;
    }
    // 0x4000F5C8: nop

    // 0x4000F5CC: b           L_4000F694
    // 0x4000F5D0: lw          $v0, 0x344($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X344);
        goto L_4000F694;
    // 0x4000F5D0: lw          $v0, 0x344($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X344);
L_4000F5D4:
    // 0x4000F5D4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x4000F5D8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000F5DC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000F5E0: jal         0x40008D20
    // 0x4000F5E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_3;
    // 0x4000F5E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x4000F5E8: lw          $a0, 0x1C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1C);
    // 0x4000F5EC: sw          $zero, 0x344($s1)
    MEM_W(0X344, ctx->r17) = 0;
    // 0x4000F5F0: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    // 0x4000F5F4: jal         0x40000CA0
    // 0x4000F5F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_4;
    // 0x4000F5F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x4000F5FC: b           L_4000F694
    // 0x4000F600: lw          $v0, 0x344($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X344);
        goto L_4000F694;
    // 0x4000F600: lw          $v0, 0x344($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X344);
L_4000F604:
    // 0x4000F604: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000F608: addiu       $a1, $zero, 0x86
    ctx->r5 = ADD32(0, 0X86);
    // 0x4000F60C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4000F610: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x4000F614: jal         0x4000118C
    // 0x4000F618: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_5;
    // 0x4000F618: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x4000F61C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4000F620: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x4000F624: jal         0x4001073C
    // 0x4000F628: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_actor_main_1073C(rdram, ctx);
        goto after_6;
    // 0x4000F628: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_6:
    // 0x4000F62C: sw          $zero, 0x344($s1)
    MEM_W(0X344, ctx->r17) = 0;
    // 0x4000F630: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4000F634: addiu       $a1, $zero, 0x235
    ctx->r5 = ADD32(0, 0X235);
    // 0x4000F638: jal         0x4000115C
    // 0x4000F63C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_7;
    // 0x4000F63C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x4000F640: b           L_4000F694
    // 0x4000F644: lw          $v0, 0x344($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X344);
        goto L_4000F694;
    // 0x4000F644: lw          $v0, 0x344($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X344);
L_4000F648:
    // 0x4000F648: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000F64C: addiu       $a1, $zero, 0x71
    ctx->r5 = ADD32(0, 0X71);
    // 0x4000F650: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4000F654: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x4000F658: jal         0x4000118C
    // 0x4000F65C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_8;
    // 0x4000F65C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x4000F660: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4000F664: addiu       $a1, $zero, 0x2A8
    ctx->r5 = ADD32(0, 0X2A8);
    // 0x4000F668: jal         0x4000115C
    // 0x4000F66C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_9;
    // 0x4000F66C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x4000F670: b           L_4000F694
    // 0x4000F674: lw          $v0, 0x344($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X344);
        goto L_4000F694;
    // 0x4000F674: lw          $v0, 0x344($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X344);
L_4000F678:
    // 0x4000F678: jal         0x40006458
    // 0x4000F67C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_6458(rdram, ctx);
        goto after_10;
    // 0x4000F67C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x4000F680: b           L_4000F694
    // 0x4000F684: lw          $v0, 0x344($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X344);
        goto L_4000F694;
    // 0x4000F684: lw          $v0, 0x344($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X344);
L_4000F688:
    // 0x4000F688: jal         0x4000E5C0
    // 0x4000F68C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_E5C0(rdram, ctx);
        goto after_11;
    // 0x4000F68C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x4000F690: lw          $v0, 0x344($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X344);
L_4000F694:
    // 0x4000F694: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x4000F698: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x4000F69C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4000F6A0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x4000F6A4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x4000F6A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4000F6AC: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x4000F6B0: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x4000F6B4: bc1f        L_4000F6C0
    if (!c1cs) {
        // 0x4000F6B8: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_4000F6C0;
    }
    // 0x4000F6B8: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x4000F6BC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_4000F6C0:
    // 0x4000F6C0: beq         $v1, $zero, L_4000F6D0
    if (ctx->r3 == 0) {
        // 0x4000F6C4: sw          $t6, 0x344($s1)
        MEM_W(0X344, ctx->r17) = ctx->r14;
            goto L_4000F6D0;
    }
    // 0x4000F6C4: sw          $t6, 0x344($s1)
    MEM_W(0X344, ctx->r17) = ctx->r14;
    // 0x4000F6C8: jal         0x4001073C
    // 0x4000F6CC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_actor_main_1073C(rdram, ctx);
        goto after_12;
    // 0x4000F6CC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_12:
L_4000F6D0:
    // 0x4000F6D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4000F6D4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x4000F6D8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x4000F6DC: jr          $ra
    // 0x4000F6E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4000F6E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_F6E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000F6E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4000F6E8: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x4000F6EC: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x4000F6F0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x4000F6F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000F6F8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x4000F6FC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x4000F700: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x4000F704: beq         $a1, $at, L_4000F748
    if (ctx->r5 == ctx->r1) {
        // 0x4000F708: swc1        $f20, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
            goto L_4000F748;
    }
    // 0x4000F708: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x4000F70C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x4000F710: beq         $a1, $at, L_4000F748
    if (ctx->r5 == ctx->r1) {
        // 0x4000F714: addiu       $at, $zero, 0x1F
        ctx->r1 = ADD32(0, 0X1F);
            goto L_4000F748;
    }
    // 0x4000F714: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x4000F718: beq         $a1, $at, L_4000F748
    if (ctx->r5 == ctx->r1) {
        // 0x4000F71C: addiu       $at, $zero, 0x2A
        ctx->r1 = ADD32(0, 0X2A);
            goto L_4000F748;
    }
    // 0x4000F71C: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x4000F720: beq         $a1, $at, L_4000F748
    if (ctx->r5 == ctx->r1) {
        // 0x4000F724: addiu       $at, $zero, 0x35
        ctx->r1 = ADD32(0, 0X35);
            goto L_4000F748;
    }
    // 0x4000F724: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
    // 0x4000F728: beq         $a1, $at, L_4000F748
    if (ctx->r5 == ctx->r1) {
        // 0x4000F72C: addiu       $at, $zero, 0x3F
        ctx->r1 = ADD32(0, 0X3F);
            goto L_4000F748;
    }
    // 0x4000F72C: addiu       $at, $zero, 0x3F
    ctx->r1 = ADD32(0, 0X3F);
    // 0x4000F730: beq         $a1, $at, L_4000F748
    if (ctx->r5 == ctx->r1) {
        // 0x4000F734: addiu       $at, $zero, 0x4D
        ctx->r1 = ADD32(0, 0X4D);
            goto L_4000F748;
    }
    // 0x4000F734: addiu       $at, $zero, 0x4D
    ctx->r1 = ADD32(0, 0X4D);
    // 0x4000F738: beq         $a1, $at, L_4000F748
    if (ctx->r5 == ctx->r1) {
        // 0x4000F73C: addiu       $at, $zero, 0x5A
        ctx->r1 = ADD32(0, 0X5A);
            goto L_4000F748;
    }
    // 0x4000F73C: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x4000F740: bne         $a1, $at, L_4000F7B0
    if (ctx->r5 != ctx->r1) {
        // 0x4000F744: nop
    
            goto L_4000F7B0;
    }
    // 0x4000F744: nop

L_4000F748:
    // 0x4000F748: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x4000F74C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F750: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x4000F754: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    // 0x4000F758: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x4000F75C: jal         0x4000118C
    // 0x4000F760: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_0;
    // 0x4000F760: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x4000F764: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x4000F768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F76C: jal         0x4001073C
    // 0x4000F770: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_actor_main_1073C(rdram, ctx);
        goto after_1;
    // 0x4000F770: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_1:
    // 0x4000F774: sw          $zero, 0x344($s0)
    MEM_W(0X344, ctx->r16) = 0;
    // 0x4000F778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F77C: addiu       $a1, $zero, 0x235
    ctx->r5 = ADD32(0, 0X235);
    // 0x4000F780: jal         0x4000115C
    // 0x4000F784: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_2;
    // 0x4000F784: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x4000F788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F78C: addiu       $a1, $zero, 0x2E4
    ctx->r5 = ADD32(0, 0X2E4);
    // 0x4000F790: jal         0x4000115C
    // 0x4000F794: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_3;
    // 0x4000F794: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x4000F798: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x4000F79C: bne         $s1, $at, L_4000F7B0
    if (ctx->r17 != ctx->r1) {
        // 0x4000F7A0: addiu       $a1, $zero, 0x3D
        ctx->r5 = ADD32(0, 0X3D);
            goto L_4000F7B0;
    }
    // 0x4000F7A0: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    // 0x4000F7A4: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4000F7A8: jal         0x40000CA0
    // 0x4000F7AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_4;
    // 0x4000F7AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_4000F7B0:
    // 0x4000F7B0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x4000F7B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000F7B8: beq         $s1, $at, L_4000F7FC
    if (ctx->r17 == ctx->r1) {
        // 0x4000F7BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000F7FC;
    }
    // 0x4000F7BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F7C0: addiu       $at, $zero, 0x5B
    ctx->r1 = ADD32(0, 0X5B);
    // 0x4000F7C4: beq         $s1, $at, L_4000F824
    if (ctx->r17 == ctx->r1) {
        // 0x4000F7C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000F824;
    }
    // 0x4000F7C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F7CC: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x4000F7D0: beq         $s1, $at, L_4000F850
    if (ctx->r17 == ctx->r1) {
        // 0x4000F7D4: addiu       $at, $zero, 0x87
        ctx->r1 = ADD32(0, 0X87);
            goto L_4000F850;
    }
    // 0x4000F7D4: addiu       $at, $zero, 0x87
    ctx->r1 = ADD32(0, 0X87);
    // 0x4000F7D8: beq         $s1, $at, L_4000F86C
    if (ctx->r17 == ctx->r1) {
        // 0x4000F7DC: addiu       $at, $zero, 0xB9
        ctx->r1 = ADD32(0, 0XB9);
            goto L_4000F86C;
    }
    // 0x4000F7DC: addiu       $at, $zero, 0xB9
    ctx->r1 = ADD32(0, 0XB9);
    // 0x4000F7E0: beq         $s1, $at, L_4000F87C
    if (ctx->r17 == ctx->r1) {
        // 0x4000F7E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000F87C;
    }
    // 0x4000F7E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F7E8: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    // 0x4000F7EC: beq         $s1, $at, L_4000F8E0
    if (ctx->r17 == ctx->r1) {
        // 0x4000F7F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000F8E0;
    }
    // 0x4000F7F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F7F4: b           L_4000F90C
    // 0x4000F7F8: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
        goto L_4000F90C;
    // 0x4000F7F8: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
L_4000F7FC:
    // 0x4000F7FC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x4000F800: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x4000F804: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000F808: jal         0x40008D20
    // 0x4000F80C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_5;
    // 0x4000F80C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x4000F810: lw          $t6, 0x90($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X90);
    // 0x4000F814: sw          $zero, 0x344($s0)
    MEM_W(0X344, ctx->r16) = 0;
    // 0x4000F818: ori         $t7, $t6, 0x400
    ctx->r15 = ctx->r14 | 0X400;
    // 0x4000F81C: b           L_4000F908
    // 0x4000F820: sw          $t7, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r15;
        goto L_4000F908;
    // 0x4000F820: sw          $t7, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r15;
L_4000F824:
    // 0x4000F824: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x4000F828: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x4000F82C: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x4000F830: jal         0x4000118C
    // 0x4000F834: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_6;
    // 0x4000F834: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_6:
    // 0x4000F838: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x4000F83C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F840: jal         0x4001073C
    // 0x4000F844: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_actor_main_1073C(rdram, ctx);
        goto after_7;
    // 0x4000F844: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_7:
    // 0x4000F848: b           L_4000F908
    // 0x4000F84C: sw          $zero, 0x344($s0)
    MEM_W(0X344, ctx->r16) = 0;
        goto L_4000F908;
    // 0x4000F84C: sw          $zero, 0x344($s0)
    MEM_W(0X344, ctx->r16) = 0;
L_4000F850:
    // 0x4000F850: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x4000F854: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000F858: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x4000F85C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4000F860: swc1        $f4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f4.u32l;
    // 0x4000F864: b           L_4000F908
    // 0x4000F868: swc1        $f6, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f6.u32l;
        goto L_4000F908;
    // 0x4000F868: swc1        $f6, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f6.u32l;
L_4000F86C:
    // 0x4000F86C: lwc1        $f8, 0x50($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X50);
    // 0x4000F870: swc1        $f20, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f20.u32l;
    // 0x4000F874: b           L_4000F908
    // 0x4000F878: swc1        $f8, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f8.u32l;
        goto L_4000F908;
    // 0x4000F878: swc1        $f8, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f8.u32l;
L_4000F87C:
    // 0x4000F87C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x4000F880: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4000F884: addiu       $a1, $zero, 0x49
    ctx->r5 = ADD32(0, 0X49);
    // 0x4000F888: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4000F88C: lui         $a3, 0xC120
    ctx->r7 = S32(0XC120 << 16);
    // 0x4000F890: jal         0x4000118C
    // 0x4000F894: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_8;
    // 0x4000F894: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x4000F898: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x4000F89C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4000F8A0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x4000F8A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F8A8: addiu       $a1, $zero, 0x49
    ctx->r5 = ADD32(0, 0X49);
    // 0x4000F8AC: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    // 0x4000F8B0: jal         0x4000118C
    // 0x4000F8B4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_9;
    // 0x4000F8B4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x4000F8B8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x4000F8BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4000F8C0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x4000F8C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F8C8: addiu       $a1, $zero, 0x49
    ctx->r5 = ADD32(0, 0X49);
    // 0x4000F8CC: lui         $a2, 0xC1F0
    ctx->r6 = S32(0XC1F0 << 16);
    // 0x4000F8D0: jal         0x4000118C
    // 0x4000F8D4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_10;
    // 0x4000F8D4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_10:
    // 0x4000F8D8: b           L_4000F90C
    // 0x4000F8DC: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
        goto L_4000F90C;
    // 0x4000F8DC: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
L_4000F8E0:
    // 0x4000F8E0: swc1        $f20, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f20.u32l;
    // 0x4000F8E4: swc1        $f20, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f20.u32l;
    // 0x4000F8E8: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000F8EC: lwc1        $f18, -0x1494($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1494);
    // 0x4000F8F0: lw          $t8, 0x90($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X90);
    // 0x4000F8F4: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x4000F8F8: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x4000F8FC: sw          $t9, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r25;
    // 0x4000F900: jal         0x4000E5C0
    // 0x4000F904: swc1        $f18, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f18.u32l;
    ovl_actor_main_E5C0(rdram, ctx);
        goto after_11;
    // 0x4000F904: swc1        $f18, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f18.u32l;
    after_11:
L_4000F908:
    // 0x4000F908: lw          $v0, 0x344($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X344);
L_4000F90C:
    // 0x4000F90C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x4000F910: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x4000F914: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4000F918: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x4000F91C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x4000F920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F924: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x4000F928: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x4000F92C: bc1f        L_4000F938
    if (!c1cs) {
        // 0x4000F930: nop
    
            goto L_4000F938;
    }
    // 0x4000F930: nop

    // 0x4000F934: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_4000F938:
    // 0x4000F938: beq         $v1, $zero, L_4000F94C
    if (ctx->r3 == 0) {
        // 0x4000F93C: sw          $t0, 0x344($s0)
        MEM_W(0X344, ctx->r16) = ctx->r8;
            goto L_4000F94C;
    }
    // 0x4000F93C: sw          $t0, 0x344($s0)
    MEM_W(0X344, ctx->r16) = ctx->r8;
    // 0x4000F940: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x4000F944: jal         0x4001073C
    // 0x4000F948: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    ovl_actor_main_1073C(rdram, ctx);
        goto after_12;
    // 0x4000F948: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    after_12:
L_4000F94C:
    // 0x4000F94C: lw          $v0, 0x90($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X90);
    // 0x4000F950: nop

    // 0x4000F954: andi        $t1, $v0, 0x400
    ctx->r9 = ctx->r2 & 0X400;
    // 0x4000F958: bne         $t1, $zero, L_4000F984
    if (ctx->r9 != 0) {
        // 0x4000F95C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_4000F984;
    }
    // 0x4000F95C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x4000F960: lwc1        $f10, 0x58($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X58);
    // 0x4000F964: ori         $t2, $v0, 0x400
    ctx->r10 = ctx->r2 | 0X400;
    // 0x4000F968: c.eq.s      $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f20.fl == ctx->f10.fl;
    // 0x4000F96C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000F970: bc1t        L_4000F984
    if (c1cs) {
        // 0x4000F974: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_4000F984;
    }
    // 0x4000F974: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x4000F978: jal         0x4000E5C0
    // 0x4000F97C: sw          $t2, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r10;
    ovl_actor_main_E5C0(rdram, ctx);
        goto after_13;
    // 0x4000F97C: sw          $t2, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r10;
    after_13:
    // 0x4000F980: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_4000F984:
    // 0x4000F984: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x4000F988: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x4000F98C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x4000F990: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x4000F994: jr          $ra
    // 0x4000F998: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x4000F998: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_actor_main_F99C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000F99C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x4000F9A0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x4000F9A4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x4000F9A8: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x4000F9AC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x4000F9B0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x4000F9B4: beq         $a1, $at, L_4000FA08
    if (ctx->r5 == ctx->r1) {
        // 0x4000F9B8: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4000FA08;
    }
    // 0x4000F9B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000F9BC: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x4000F9C0: beq         $a1, $at, L_4000FA08
    if (ctx->r5 == ctx->r1) {
        // 0x4000F9C4: addiu       $at, $zero, 0x1F
        ctx->r1 = ADD32(0, 0X1F);
            goto L_4000FA08;
    }
    // 0x4000F9C4: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x4000F9C8: beq         $a1, $at, L_4000FA08
    if (ctx->r5 == ctx->r1) {
        // 0x4000F9CC: addiu       $at, $zero, 0x27
        ctx->r1 = ADD32(0, 0X27);
            goto L_4000FA08;
    }
    // 0x4000F9CC: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x4000F9D0: beq         $a1, $at, L_4000FA08
    if (ctx->r5 == ctx->r1) {
        // 0x4000F9D4: addiu       $at, $zero, 0x2F
        ctx->r1 = ADD32(0, 0X2F);
            goto L_4000FA08;
    }
    // 0x4000F9D4: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x4000F9D8: beq         $a1, $at, L_4000FA08
    if (ctx->r5 == ctx->r1) {
        // 0x4000F9DC: addiu       $at, $zero, 0x37
        ctx->r1 = ADD32(0, 0X37);
            goto L_4000FA08;
    }
    // 0x4000F9DC: addiu       $at, $zero, 0x37
    ctx->r1 = ADD32(0, 0X37);
    // 0x4000F9E0: beq         $a1, $at, L_4000FA08
    if (ctx->r5 == ctx->r1) {
        // 0x4000F9E4: addiu       $at, $zero, 0x3F
        ctx->r1 = ADD32(0, 0X3F);
            goto L_4000FA08;
    }
    // 0x4000F9E4: addiu       $at, $zero, 0x3F
    ctx->r1 = ADD32(0, 0X3F);
    // 0x4000F9E8: beq         $a1, $at, L_4000FA08
    if (ctx->r5 == ctx->r1) {
        // 0x4000F9EC: addiu       $at, $zero, 0x47
        ctx->r1 = ADD32(0, 0X47);
            goto L_4000FA08;
    }
    // 0x4000F9EC: addiu       $at, $zero, 0x47
    ctx->r1 = ADD32(0, 0X47);
    // 0x4000F9F0: beq         $a1, $at, L_4000FA08
    if (ctx->r5 == ctx->r1) {
        // 0x4000F9F4: addiu       $at, $zero, 0x4F
        ctx->r1 = ADD32(0, 0X4F);
            goto L_4000FA08;
    }
    // 0x4000F9F4: addiu       $at, $zero, 0x4F
    ctx->r1 = ADD32(0, 0X4F);
    // 0x4000F9F8: beq         $a1, $at, L_4000FA08
    if (ctx->r5 == ctx->r1) {
        // 0x4000F9FC: addiu       $at, $zero, 0x61
        ctx->r1 = ADD32(0, 0X61);
            goto L_4000FA08;
    }
    // 0x4000F9FC: addiu       $at, $zero, 0x61
    ctx->r1 = ADD32(0, 0X61);
    // 0x4000FA00: bne         $a1, $at, L_4000FA4C
    if (ctx->r5 != ctx->r1) {
        // 0x4000FA04: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_4000FA4C;
    }
    // 0x4000FA04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_4000FA08:
    // 0x4000FA08: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000FA0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4000FA10: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4000FA14: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    // 0x4000FA18: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x4000FA1C: jal         0x4000118C
    // 0x4000FA20: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_0;
    // 0x4000FA20: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x4000FA24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4000FA28: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x4000FA2C: jal         0x4001073C
    // 0x4000FA30: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_actor_main_1073C(rdram, ctx);
        goto after_1;
    // 0x4000FA30: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_1:
    // 0x4000FA34: sw          $zero, 0x344($s1)
    MEM_W(0X344, ctx->r17) = 0;
    // 0x4000FA38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4000FA3C: addiu       $a1, $zero, 0x235
    ctx->r5 = ADD32(0, 0X235);
    // 0x4000FA40: jal         0x4000115C
    // 0x4000FA44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_2;
    // 0x4000FA44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x4000FA48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_4000FA4C:
    // 0x4000FA4C: beq         $s0, $at, L_4000FA74
    if (ctx->r16 == ctx->r1) {
        // 0x4000FA50: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4000FA74;
    }
    // 0x4000FA50: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4000FA54: addiu       $at, $zero, 0xBA
    ctx->r1 = ADD32(0, 0XBA);
    // 0x4000FA58: beq         $s0, $at, L_4000FAA4
    if (ctx->r16 == ctx->r1) {
        // 0x4000FA5C: addiu       $v0, $s1, 0x348
        ctx->r2 = ADD32(ctx->r17, 0X348);
            goto L_4000FAA4;
    }
    // 0x4000FA5C: addiu       $v0, $s1, 0x348
    ctx->r2 = ADD32(ctx->r17, 0X348);
    // 0x4000FA60: addiu       $at, $zero, 0xDD
    ctx->r1 = ADD32(0, 0XDD);
    // 0x4000FA64: beq         $s0, $at, L_4000FB44
    if (ctx->r16 == ctx->r1) {
        // 0x4000FA68: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4000FB44;
    }
    // 0x4000FA68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4000FA6C: b           L_4000FB68
    // 0x4000FA70: slti        $at, $s0, 0xBA
    ctx->r1 = SIGNED(ctx->r16) < 0XBA ? 1 : 0;
        goto L_4000FB68;
    // 0x4000FA70: slti        $at, $s0, 0xBA
    ctx->r1 = SIGNED(ctx->r16) < 0XBA ? 1 : 0;
L_4000FA74:
    // 0x4000FA74: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x4000FA78: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000FA7C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000FA80: jal         0x40008D20
    // 0x4000FA84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_3;
    // 0x4000FA84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x4000FA88: lw          $a0, 0x1C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1C);
    // 0x4000FA8C: sw          $zero, 0x344($s1)
    MEM_W(0X344, ctx->r17) = 0;
    // 0x4000FA90: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
    // 0x4000FA94: jal         0x40000CA0
    // 0x4000FA98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_4;
    // 0x4000FA98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x4000FA9C: b           L_4000FB68
    // 0x4000FAA0: slti        $at, $s0, 0xBA
    ctx->r1 = SIGNED(ctx->r16) < 0XBA ? 1 : 0;
        goto L_4000FB68;
    // 0x4000FAA0: slti        $at, $s0, 0xBA
    ctx->r1 = SIGNED(ctx->r16) < 0XBA ? 1 : 0;
L_4000FAA4:
    // 0x4000FAA4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x4000FAA8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x4000FAAC: jal         0x40000D90
    // 0x4000FAB0: addiu       $a1, $v0, 0x18
    ctx->r5 = ADD32(ctx->r2, 0X18);
    ovl_actor_main_D90(rdram, ctx);
        goto after_5;
    // 0x4000FAB0: addiu       $a1, $v0, 0x18
    ctx->r5 = ADD32(ctx->r2, 0X18);
    after_5:
    // 0x4000FAB4: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x4000FAB8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4000FABC: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x4000FAC0: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x4000FAC4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000FAC8: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x4000FACC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x4000FAD0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4000FAD4: lwc1        $f18, 0x1C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x4000FAD8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x4000FADC: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000FAE0: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x4000FAE4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x4000FAE8: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x4000FAEC: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    // 0x4000FAF0: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x4000FAF4: swc1        $f10, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f10.u32l;
    // 0x4000FAF8: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x4000FAFC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4000FB00: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    // 0x4000FB04: lwc1        $f8, -0x1490($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1490);
    // 0x4000FB08: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x4000FB0C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x4000FB10: nop

    // 0x4000FB14: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x4000FB18: jal         0x40000D78
    // 0x4000FB1C: swc1        $f18, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f18.u32l;
    ovl_actor_main_D78(rdram, ctx);
        goto after_6;
    // 0x4000FB1C: swc1        $f18, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f18.u32l;
    after_6:
    // 0x4000FB20: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x4000FB24: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x4000FB28: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x4000FB2C: nop

    // 0x4000FB30: lw          $t6, 0x44($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X44);
    // 0x4000FB34: nop

    // 0x4000FB38: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x4000FB3C: b           L_4000FB64
    // 0x4000FB40: sw          $t7, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r15;
        goto L_4000FB64;
    // 0x4000FB40: sw          $t7, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r15;
L_4000FB44:
    // 0x4000FB44: addiu       $t8, $zero, 0xB2
    ctx->r24 = ADD32(0, 0XB2);
    // 0x4000FB48: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x4000FB4C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x4000FB50: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x4000FB54: jal         0x4001096C
    // 0x4000FB58: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_actor_main_1096C(rdram, ctx);
        goto after_7;
    // 0x4000FB58: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_7:
    // 0x4000FB5C: jal         0x4000E5C0
    // 0x4000FB60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_E5C0(rdram, ctx);
        goto after_8;
    // 0x4000FB60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
L_4000FB64:
    // 0x4000FB64: slti        $at, $s0, 0xBA
    ctx->r1 = SIGNED(ctx->r16) < 0XBA ? 1 : 0;
L_4000FB68:
    // 0x4000FB68: bne         $at, $zero, L_4000FBD4
    if (ctx->r1 != 0) {
        // 0x4000FB6C: slti        $at, $s0, 0xC9
        ctx->r1 = SIGNED(ctx->r16) < 0XC9 ? 1 : 0;
            goto L_4000FBD4;
    }
    // 0x4000FB6C: slti        $at, $s0, 0xC9
    ctx->r1 = SIGNED(ctx->r16) < 0XC9 ? 1 : 0;
    // 0x4000FB70: beq         $at, $zero, L_4000FBD4
    if (ctx->r1 == 0) {
        // 0x4000FB74: addiu       $s0, $sp, 0x38
        ctx->r16 = ADD32(ctx->r29, 0X38);
            goto L_4000FBD4;
    }
    // 0x4000FB74: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x4000FB78: addiu       $v0, $s1, 0x348
    ctx->r2 = ADD32(ctx->r17, 0X348);
    // 0x4000FB7C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x4000FB80: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x4000FB84: jal         0x40000D90
    // 0x4000FB88: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_actor_main_D90(rdram, ctx);
        goto after_9;
    // 0x4000FB88: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x4000FB8C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x4000FB90: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x4000FB94: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x4000FB98: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x4000FB9C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x4000FBA0: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x4000FBA4: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x4000FBA8: lwc1        $f18, 0x1C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x4000FBAC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x4000FBB0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x4000FBB4: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x4000FBB8: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x4000FBBC: nop

    // 0x4000FBC0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x4000FBC4: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x4000FBC8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x4000FBCC: jal         0x40000D60
    // 0x4000FBD0: nop

    ovl_actor_main_D60(rdram, ctx);
        goto after_10;
    // 0x4000FBD0: nop

    after_10:
L_4000FBD4:
    // 0x4000FBD4: lw          $v0, 0x344($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X344);
    // 0x4000FBD8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x4000FBDC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x4000FBE0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000FBE4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x4000FBE8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x4000FBEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4000FBF0: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x4000FBF4: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x4000FBF8: bc1f        L_4000FC04
    if (!c1cs) {
        // 0x4000FBFC: addiu       $t9, $v0, 0x1
        ctx->r25 = ADD32(ctx->r2, 0X1);
            goto L_4000FC04;
    }
    // 0x4000FBFC: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x4000FC00: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_4000FC04:
    // 0x4000FC04: beq         $v1, $zero, L_4000FC14
    if (ctx->r3 == 0) {
        // 0x4000FC08: sw          $t9, 0x344($s1)
        MEM_W(0X344, ctx->r17) = ctx->r25;
            goto L_4000FC14;
    }
    // 0x4000FC08: sw          $t9, 0x344($s1)
    MEM_W(0X344, ctx->r17) = ctx->r25;
    // 0x4000FC0C: jal         0x4001073C
    // 0x4000FC10: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_actor_main_1073C(rdram, ctx);
        goto after_11;
    // 0x4000FC10: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_11:
L_4000FC14:
    // 0x4000FC14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4000FC18: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x4000FC1C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x4000FC20: jr          $ra
    // 0x4000FC24: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x4000FC24: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_actor_main_FC28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000FC28: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x4000FC2C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4000FC30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000FC34: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000FC38: beq         $a1, $at, L_4000FC54
    if (ctx->r5 == ctx->r1) {
        // 0x4000FC3C: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4000FC54;
    }
    // 0x4000FC3C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000FC40: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x4000FC44: beq         $a1, $at, L_4000FC74
    if (ctx->r5 == ctx->r1) {
        // 0x4000FC48: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000FC74;
    }
    // 0x4000FC48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000FC4C: b           L_4000FC84
    // 0x4000FC50: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
        goto L_4000FC84;
    // 0x4000FC50: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_4000FC54:
    // 0x4000FC54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000FC58: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x4000FC5C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000FC60: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000FC64: jal         0x40008D20
    // 0x4000FC68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4000FC68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4000FC6C: b           L_4000FC80
    // 0x4000FC70: sw          $zero, 0x344($s0)
    MEM_W(0X344, ctx->r16) = 0;
        goto L_4000FC80;
    // 0x4000FC70: sw          $zero, 0x344($s0)
    MEM_W(0X344, ctx->r16) = 0;
L_4000FC74:
    // 0x4000FC74: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x4000FC78: jal         0x4001073C
    // 0x4000FC7C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_actor_main_1073C(rdram, ctx);
        goto after_1;
    // 0x4000FC7C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_1:
L_4000FC80:
    // 0x4000FC80: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_4000FC84:
    // 0x4000FC84: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4000FC88: jal         0x400006C4
    // 0x4000FC8C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_2;
    // 0x4000FC8C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x4000FC90: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x4000FC94: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4000FC98: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x4000FC9C: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4000FCA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000FCA4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x4000FCA8: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x4000FCAC: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x4000FCB0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x4000FCB4: bc1f        L_4000FCC4
    if (!c1cs) {
        // 0x4000FCB8: nop
    
            goto L_4000FCC4;
    }
    // 0x4000FCB8: nop

    // 0x4000FCBC: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x4000FCC0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
L_4000FCC4:
    // 0x4000FCC4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x4000FCC8: jal         0x400006C4
    // 0x4000FCCC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_3;
    // 0x4000FCCC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x4000FCD0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x4000FCD4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x4000FCD8: jal         0x400006C4
    // 0x4000FCDC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_4;
    // 0x4000FCDC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x4000FCE0: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000FCE4: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4000FCE8: lwc1        $f6, -0x148C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X148C);
    // 0x4000FCEC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4000FCF0: sub.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x4000FCF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000FCF8: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x4000FCFC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x4000FD00: bc1f        L_4000FD1C
    if (!c1cs) {
        // 0x4000FD04: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_4000FD1C;
    }
    // 0x4000FD04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4000FD08: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000FD0C: jal         0x40006458
    // 0x4000FD10: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_6458(rdram, ctx);
        goto after_5;
    // 0x4000FD10: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x4000FD14: jal         0x4000E5C0
    // 0x4000FD18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_E5C0(rdram, ctx);
        goto after_6;
    // 0x4000FD18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_4000FD1C:
    // 0x4000FD1C: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4000FD20: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x4000FD24: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x4000FD28: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x4000FD2C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x4000FD30: jal         0x400006C4
    // 0x4000FD34: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_7;
    // 0x4000FD34: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_7:
    // 0x4000FD38: lw          $t6, 0x90($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X90);
    // 0x4000FD3C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x4000FD40: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x4000FD44: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4000FD48: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x4000FD4C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x4000FD50: sw          $t7, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r15;
    // 0x4000FD54: swc1        $f16, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f16.u32l;
    // 0x4000FD58: swc1        $f18, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f18.u32l;
    // 0x4000FD5C: swc1        $f4, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f4.u32l;
    // 0x4000FD60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4000FD64: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4000FD68: jr          $ra
    // 0x4000FD6C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x4000FD6C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_actor_main_FD70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000FD70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4000FD74: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4000FD78: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000FD7C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000FD80: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x4000FD84: lui         $a1, 0x4200
    ctx->r5 = S32(0X4200 << 16);
    // 0x4000FD88: jal         0x40000E20
    // 0x4000FD8C: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    ovl_actor_main_E20(rdram, ctx);
        goto after_0;
    // 0x4000FD8C: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_0:
    // 0x4000FD90: jal         0x40009B20
    // 0x4000FD94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9B20(rdram, ctx);
        goto after_1;
    // 0x4000FD94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4000FD98: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x4000FD9C: jal         0x40003218
    // 0x4000FDA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_3218(rdram, ctx);
        goto after_2;
    // 0x4000FDA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x4000FDA4: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4000FDA8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x4000FDAC: jal         0x40000CA0
    // 0x4000FDB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_3;
    // 0x4000FDB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x4000FDB4: jal         0x4000E618
    // 0x4000FDB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_E618(rdram, ctx);
        goto after_4;
    // 0x4000FDB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4000FDBC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000FDC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000FDC4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4000FDC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4000FDCC: lui         $a3, 0x432A
    ctx->r7 = S32(0X432A << 16);
    // 0x4000FDD0: jal         0x4000118C
    // 0x4000FDD4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_5;
    // 0x4000FDD4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x4000FDD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4000FDDC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4000FDE0: jr          $ra
    // 0x4000FDE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4000FDE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_FDE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000FDE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000FDEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000FDF0: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x4000FDF4: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x4000FDF8: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x4000FDFC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x4000FE00: beq         $t7, $zero, L_4000FE1C
    if (ctx->r15 == 0) {
        // 0x4000FE04: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_4000FE1C;
    }
    // 0x4000FE04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x4000FE08: lw          $t8, 0x90($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X90);
    // 0x4000FE0C: sw          $zero, 0x318($a0)
    MEM_W(0X318, ctx->r4) = 0;
    // 0x4000FE10: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x4000FE14: b           L_4000FE28
    // 0x4000FE18: sw          $t9, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r25;
        goto L_4000FE28;
    // 0x4000FE18: sw          $t9, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r25;
L_4000FE1C:
    // 0x4000FE1C: jal         0x4000E5C0
    // 0x4000FE20: nop

    ovl_actor_main_E5C0(rdram, ctx);
        goto after_0;
    // 0x4000FE20: nop

    after_0:
    // 0x4000FE24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_4000FE28:
    // 0x4000FE28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000FE2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000FE30: jr          $ra
    // 0x4000FE34: nop

    return;
    // 0x4000FE34: nop

;}
RECOMP_FUNC void ovl_actor_main_FE38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000FE38: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x4000FE3C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4000FE40: slti        $at, $a1, 0x12C
    ctx->r1 = SIGNED(ctx->r5) < 0X12C ? 1 : 0;
    // 0x4000FE44: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000FE48: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000FE4C: beq         $at, $zero, L_4000FFDC
    if (ctx->r1 == 0) {
        // 0x4000FE50: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_4000FFDC;
    }
    // 0x4000FE50: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x4000FE54: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x4000FE58: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x4000FE5C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4000FE60: jal         0x400006C4
    // 0x4000FE64: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4000FE64: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x4000FE68: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x4000FE6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000FE70: bne         $t6, $at, L_4000FE9C
    if (ctx->r14 != ctx->r1) {
        // 0x4000FE74: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000FE9C;
    }
    // 0x4000FE74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000FE78: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000FE7C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x4000FE80: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4000FE84: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000FE88: jal         0x40008D20
    // 0x4000FE8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_1;
    // 0x4000FE8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x4000FE90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000FE94: jal         0x40008EF8
    // 0x4000FE98: addiu       $a1, $zero, 0x5C3
    ctx->r5 = ADD32(0, 0X5C3);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_2;
    // 0x4000FE98: addiu       $a1, $zero, 0x5C3
    ctx->r5 = ADD32(0, 0X5C3);
    after_2:
L_4000FE9C:
    // 0x4000FE9C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x4000FEA0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4000FEA4: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4000FEA8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x4000FEAC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4000FEB0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000FEB4: slti        $at, $t7, 0x2F
    ctx->r1 = SIGNED(ctx->r15) < 0X2F ? 1 : 0;
    // 0x4000FEB8: beq         $at, $zero, L_4000FEE0
    if (ctx->r1 == 0) {
        // 0x4000FEBC: swc1        $f8, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
            goto L_4000FEE0;
    }
    // 0x4000FEBC: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x4000FEC0: jal         0x40009414
    // 0x4000FEC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9414(rdram, ctx);
        goto after_3;
    // 0x4000FEC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x4000FEC8: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x4000FECC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4000FED0: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4000FED4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000FED8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x4000FEDC: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
L_4000FEE0:
    // 0x4000FEE0: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x4000FEE4: nop

    // 0x4000FEE8: slti        $at, $t8, 0x2F
    ctx->r1 = SIGNED(ctx->r24) < 0X2F ? 1 : 0;
    // 0x4000FEEC: bne         $at, $zero, L_4000FFC4
    if (ctx->r1 != 0) {
        // 0x4000FEF0: nop
    
            goto L_4000FFC4;
    }
    // 0x4000FEF0: nop

    // 0x4000FEF4: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x4000FEF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000FEFC: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x4000FF00: nop

    // 0x4000FF04: bc1f        L_4000FF3C
    if (!c1cs) {
        // 0x4000FF08: nop
    
            goto L_4000FF3C;
    }
    // 0x4000FF08: nop

    // 0x4000FF0C: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
    // 0x4000FF10: nop

    // 0x4000FF14: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x4000FF18: nop

    // 0x4000FF1C: bc1f        L_4000FF3C
    if (!c1cs) {
        // 0x4000FF20: nop
    
            goto L_4000FF3C;
    }
    // 0x4000FF20: nop

    // 0x4000FF24: lwc1        $f8, 0x5C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x4000FF28: nop

    // 0x4000FF2C: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x4000FF30: nop

    // 0x4000FF34: bc1t        L_4000FFC4
    if (c1cs) {
        // 0x4000FF38: nop
    
            goto L_4000FFC4;
    }
    // 0x4000FF38: nop

L_4000FF3C:
    // 0x4000FF3C: jal         0x4000FD70
    // 0x4000FF40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_FD70(rdram, ctx);
        goto after_4;
    // 0x4000FF40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x4000FF44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4000FF48: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4000FF4C: lwc1        $f16, 0x58($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X58);
    // 0x4000FF50: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000FF54: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x4000FF58: addiu       $t0, $zero, 0x1F4
    ctx->r8 = ADD32(0, 0X1F4);
    // 0x4000FF5C: bc1f        L_4000FF9C
    if (!c1cs) {
        // 0x4000FF60: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000FF9C;
    }
    // 0x4000FF60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000FF64: addiu       $t9, $zero, 0x12C
    ctx->r25 = ADD32(0, 0X12C);
    // 0x4000FF68: sw          $t9, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->r25;
    // 0x4000FF6C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4000FF70: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4000FF74: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x4000FF78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000FF7C: jal         0x4000118C
    // 0x4000FF80: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    ovl_actor_main_118C(rdram, ctx);
        goto after_5;
    // 0x4000FF80: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    after_5:
    // 0x4000FF84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000FF88: addiu       $a1, $zero, 0x287
    ctx->r5 = ADD32(0, 0X287);
    // 0x4000FF8C: jal         0x4000115C
    // 0x4000FF90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_6;
    // 0x4000FF90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x4000FF94: b           L_4000FFC8
    // 0x4000FF98: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
        goto L_4000FFC8;
    // 0x4000FF98: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_4000FF9C:
    // 0x4000FF9C: sw          $t0, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->r8;
    // 0x4000FFA0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4000FFA4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x4000FFA8: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    // 0x4000FFAC: jal         0x4000118C
    // 0x4000FFB0: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    ovl_actor_main_118C(rdram, ctx);
        goto after_7;
    // 0x4000FFB0: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    after_7:
    // 0x4000FFB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000FFB8: addiu       $a1, $zero, 0x254
    ctx->r5 = ADD32(0, 0X254);
    // 0x4000FFBC: jal         0x4000115C
    // 0x4000FFC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_8;
    // 0x4000FFC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
L_4000FFC4:
    // 0x4000FFC4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
L_4000FFC8:
    // 0x4000FFC8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x4000FFCC: jal         0x400006C4
    // 0x4000FFD0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_9;
    // 0x4000FFD0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_9:
    // 0x4000FFD4: b           L_40010068
    // 0x4000FFD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40010068;
    // 0x4000FFD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000FFDC:
    // 0x4000FFDC: slti        $at, $a3, 0x1F4
    ctx->r1 = SIGNED(ctx->r7) < 0X1F4 ? 1 : 0;
    // 0x4000FFE0: beq         $at, $zero, L_40010018
    if (ctx->r1 == 0) {
        // 0x4000FFE4: slti        $at, $a3, 0x13B
        ctx->r1 = SIGNED(ctx->r7) < 0X13B ? 1 : 0;
            goto L_40010018;
    }
    // 0x4000FFE4: slti        $at, $a3, 0x13B
    ctx->r1 = SIGNED(ctx->r7) < 0X13B ? 1 : 0;
    // 0x4000FFE8: bne         $at, $zero, L_40010064
    if (ctx->r1 != 0) {
        // 0x4000FFEC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40010064;
    }
    // 0x4000FFEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000FFF0: jal         0x40001A8C
    // 0x4000FFF4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_10;
    // 0x4000FFF4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_10:
    // 0x4000FFF8: jal         0x4000FDE8
    // 0x4000FFFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_FDE8(rdram, ctx);
        goto after_11;
    // 0x4000FFFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x40010000: beq         $v0, $zero, L_40010068
    if (ctx->r2 == 0) {
        // 0x40010004: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_40010068;
    }
    // 0x40010004: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40010008: jal         0x4000E5C0
    // 0x4001000C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_E5C0(rdram, ctx);
        goto after_12;
    // 0x4001000C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x40010010: b           L_40010068
    // 0x40010014: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40010068;
    // 0x40010014: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40010018:
    // 0x40010018: slti        $at, $a3, 0x1F9
    ctx->r1 = SIGNED(ctx->r7) < 0X1F9 ? 1 : 0;
    // 0x4001001C: beq         $at, $zero, L_40010034
    if (ctx->r1 == 0) {
        // 0x40010020: nop
    
            goto L_40010034;
    }
    // 0x40010020: nop

    // 0x40010024: jal         0x40009414
    // 0x40010028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9414(rdram, ctx);
        goto after_13;
    // 0x40010028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x4001002C: b           L_40010068
    // 0x40010030: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40010068;
    // 0x40010030: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40010034:
    // 0x40010034: jal         0x4000FDE8
    // 0x40010038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_FDE8(rdram, ctx);
        goto after_14;
    // 0x40010038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x4001003C: beq         $v0, $zero, L_40010064
    if (ctx->r2 == 0) {
        // 0x40010040: addiu       $t1, $zero, 0x19
        ctx->r9 = ADD32(0, 0X19);
            goto L_40010064;
    }
    // 0x40010040: addiu       $t1, $zero, 0x19
    ctx->r9 = ADD32(0, 0X19);
    // 0x40010044: sw          $t1, 0x318($s0)
    MEM_W(0X318, ctx->r16) = ctx->r9;
    // 0x40010048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001004C: jal         0x40001A8C
    // 0x40010050: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_15;
    // 0x40010050: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    after_15:
    // 0x40010054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40010058: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x4001005C: jal         0x40009000
    // 0x40010060: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_9000(rdram, ctx);
        goto after_16;
    // 0x40010060: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_16:
L_40010064:
    // 0x40010064: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40010068:
    // 0x40010068: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4001006C: jr          $ra
    // 0x40010070: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x40010070: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_actor_main_10074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010074: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40010078: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4001007C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40010080: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40010084: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40010088: bne         $a1, $at, L_400100B8
    if (ctx->r5 != ctx->r1) {
        // 0x4001008C: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_400100B8;
    }
    // 0x4001008C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x40010090: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x40010094: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40010098: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001009C: jal         0x40008D20
    // 0x400100A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x400100A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x400100A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400100A8: jal         0x40008EF8
    // 0x400100AC: addiu       $a1, $zero, 0x5C3
    ctx->r5 = ADD32(0, 0X5C3);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x400100AC: addiu       $a1, $zero, 0x5C3
    ctx->r5 = ADD32(0, 0X5C3);
    after_1:
    // 0x400100B0: b           L_400100D4
    // 0x400100B4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_400100D4;
    // 0x400100B4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_400100B8:
    // 0x400100B8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x400100BC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x400100C0: bne         $t7, $at, L_400100D4
    if (ctx->r15 != ctx->r1) {
        // 0x400100C4: lw          $t8, 0x2C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X2C);
            goto L_400100D4;
    }
    // 0x400100C4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x400100C8: jal         0x40009400
    // 0x400100CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9400(rdram, ctx);
        goto after_2;
    // 0x400100CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x400100D0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_400100D4:
    // 0x400100D4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x400100D8: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x400100DC: beq         $at, $zero, L_400100F8
    if (ctx->r1 == 0) {
        // 0x400100E0: slti        $at, $t9, 0x1F4
        ctx->r1 = SIGNED(ctx->r25) < 0X1F4 ? 1 : 0;
            goto L_400100F8;
    }
    // 0x400100E0: slti        $at, $t9, 0x1F4
    ctx->r1 = SIGNED(ctx->r25) < 0X1F4 ? 1 : 0;
    // 0x400100E4: jal         0x40009414
    // 0x400100E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9414(rdram, ctx);
        goto after_3;
    // 0x400100E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x400100EC: b           L_4001018C
    // 0x400100F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001018C;
    // 0x400100F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x400100F4: slti        $at, $t9, 0x1F4
    ctx->r1 = SIGNED(ctx->r25) < 0X1F4 ? 1 : 0;
L_400100F8:
    // 0x400100F8: beq         $at, $zero, L_4001018C
    if (ctx->r1 == 0) {
        // 0x400100FC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_4001018C;
    }
    // 0x400100FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40010100: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x40010104: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
    // 0x40010108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001010C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x40010110: nop

    // 0x40010114: bc1t        L_4001018C
    if (c1cs) {
        // 0x40010118: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_4001018C;
    }
    // 0x40010118: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4001011C: jal         0x4000FD70
    // 0x40010120: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_actor_main_FD70(rdram, ctx);
        goto after_4;
    // 0x40010120: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x40010124: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x40010128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001012C: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x40010130: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40010134: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x40010138: jal         0x4000118C
    // 0x4001013C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_5;
    // 0x4001013C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x40010140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40010144: addiu       $a1, $zero, 0x29A
    ctx->r5 = ADD32(0, 0X29A);
    // 0x40010148: jal         0x4000115C
    // 0x4001014C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_6;
    // 0x4001014C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x40010150: jal         0x4000FDE8
    // 0x40010154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_FDE8(rdram, ctx);
        goto after_7;
    // 0x40010154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x40010158: beq         $v0, $zero, L_40010188
    if (ctx->r2 == 0) {
        // 0x4001015C: addiu       $t0, $zero, 0x1F4
        ctx->r8 = ADD32(0, 0X1F4);
            goto L_40010188;
    }
    // 0x4001015C: addiu       $t0, $zero, 0x1F4
    ctx->r8 = ADD32(0, 0X1F4);
    // 0x40010160: addiu       $t1, $zero, 0x1F
    ctx->r9 = ADD32(0, 0X1F);
    // 0x40010164: sw          $t0, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->r8;
    // 0x40010168: sw          $t1, 0x318($s0)
    MEM_W(0X318, ctx->r16) = ctx->r9;
    // 0x4001016C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40010170: jal         0x40001A8C
    // 0x40010174: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_8;
    // 0x40010174: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_8:
    // 0x40010178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001017C: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x40010180: jal         0x40009000
    // 0x40010184: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_9000(rdram, ctx);
        goto after_9;
    // 0x40010184: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
L_40010188:
    // 0x40010188: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001018C:
    // 0x4001018C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x40010190: jr          $ra
    // 0x40010194: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x40010194: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_10198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010198: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4001019C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400101A0: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x400101A4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x400101A8: sll         $t7, $t6, 7
    ctx->r15 = S32(ctx->r14 << 7);
    // 0x400101AC: bltz        $t7, L_400101C4
    if (SIGNED(ctx->r15) < 0) {
        // 0x400101B0: nop
    
            goto L_400101C4;
    }
    // 0x400101B0: nop

    // 0x400101B4: jal         0x4000E730
    // 0x400101B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_E730(rdram, ctx);
        goto after_0;
    // 0x400101B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x400101BC: b           L_40010280
    // 0x400101C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40010280;
    // 0x400101C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400101C4:
    // 0x400101C4: lw          $v0, 0x340($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X340);
    // 0x400101C8: nop

    // 0x400101CC: slti        $at, $v0, 0x2A
    ctx->r1 = SIGNED(ctx->r2) < 0X2A ? 1 : 0;
    // 0x400101D0: bne         $at, $zero, L_40010220
    if (ctx->r1 != 0) {
        // 0x400101D4: slti        $at, $v0, 0x34
        ctx->r1 = SIGNED(ctx->r2) < 0X34 ? 1 : 0;
            goto L_40010220;
    }
    // 0x400101D4: slti        $at, $v0, 0x34
    ctx->r1 = SIGNED(ctx->r2) < 0X34 ? 1 : 0;
    // 0x400101D8: beq         $at, $zero, L_40010220
    if (ctx->r1 == 0) {
        // 0x400101DC: addiu       $a1, $v0, -0x2A
        ctx->r5 = ADD32(ctx->r2, -0X2A);
            goto L_40010220;
    }
    // 0x400101DC: addiu       $a1, $v0, -0x2A
    ctx->r5 = ADD32(ctx->r2, -0X2A);
    // 0x400101E0: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x400101E4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x400101E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x400101EC: jal         0x4000E7D8
    // 0x400101F0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    ovl_actor_main_E7D8(rdram, ctx);
        goto after_1;
    // 0x400101F0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_1:
    // 0x400101F4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x400101F8: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400101FC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x40010200: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x40010204: lw          $t9, -0x261C($at)
    ctx->r25 = MEM_W(ctx->r1, -0X261C);
    // 0x40010208: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x4001020C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x40010210: jalr        $t9
    // 0x40010214: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x40010214: nop

    after_2:
    // 0x40010218: b           L_40010280
    // 0x4001021C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40010280;
    // 0x4001021C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40010220:
    // 0x40010220: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x40010224: bne         $v0, $at, L_40010240
    if (ctx->r2 != ctx->r1) {
        // 0x40010228: addiu       $at, $zero, 0x34
        ctx->r1 = ADD32(0, 0X34);
            goto L_40010240;
    }
    // 0x40010228: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x4001022C: jal         0x4000FC28
    // 0x40010230: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    ovl_actor_main_FC28(rdram, ctx);
        goto after_3;
    // 0x40010230: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_3:
    // 0x40010234: b           L_40010280
    // 0x40010238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40010280;
    // 0x40010238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001023C: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
L_40010240:
    // 0x40010240: bne         $v0, $at, L_4001025C
    if (ctx->r2 != ctx->r1) {
        // 0x40010244: addiu       $at, $zero, 0x35
        ctx->r1 = ADD32(0, 0X35);
            goto L_4001025C;
    }
    // 0x40010244: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
    // 0x40010248: jal         0x4000FE38
    // 0x4001024C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    ovl_actor_main_FE38(rdram, ctx);
        goto after_4;
    // 0x4001024C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_4:
    // 0x40010250: b           L_40010280
    // 0x40010254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40010280;
    // 0x40010254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40010258: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
L_4001025C:
    // 0x4001025C: bne         $v0, $at, L_40010274
    if (ctx->r2 != ctx->r1) {
        // 0x40010260: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_40010274;
    }
    // 0x40010260: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x40010264: jal         0x40010074
    // 0x40010268: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    ovl_actor_main_10074(rdram, ctx);
        goto after_5;
    // 0x40010268: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_5:
    // 0x4001026C: b           L_40010280
    // 0x40010270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40010280;
    // 0x40010270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40010274:
    // 0x40010274: jal         0x4000E730
    // 0x40010278: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_E730(rdram, ctx);
        goto after_6;
    // 0x40010278: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x4001027C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40010280:
    // 0x40010280: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x40010284: jr          $ra
    // 0x40010288: nop

    return;
    // 0x40010288: nop

;}
RECOMP_FUNC void ovl_actor_main_1028C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001028C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x40010290: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x40010294: bne         $a1, $at, L_400102B4
    if (ctx->r5 != ctx->r1) {
        // 0x40010298: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_400102B4;
    }
    // 0x40010298: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x4001029C: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x400102A0: nop

    // 0x400102A4: sll         $t7, $t6, 7
    ctx->r15 = S32(ctx->r14 << 7);
    // 0x400102A8: bgez        $t7, L_400102B4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x400102AC: nop
    
            goto L_400102B4;
    }
    // 0x400102AC: nop

    // 0x400102B0: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_400102B4:
    // 0x400102B4: jr          $ra
    // 0x400102B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x400102B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_102BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400102BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x400102C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400102C4: jal         0x400063F0
    // 0x400102C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_63F0(rdram, ctx);
        goto after_0;
    // 0x400102C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x400102CC: beq         $v0, $zero, L_40010300
    if (ctx->r2 == 0) {
        // 0x400102D0: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_40010300;
    }
    // 0x400102D0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x400102D4: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x400102D8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x400102DC: bne         $t6, $at, L_400102F4
    if (ctx->r14 != ctx->r1) {
        // 0x400102E0: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_400102F4;
    }
    // 0x400102E0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x400102E4: jal         0x4000073C
    // 0x400102E8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_actor_main_73C(rdram, ctx);
        goto after_1;
    // 0x400102E8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x400102EC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x400102F0: nop

L_400102F4:
    // 0x400102F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x400102F8: jal         0x40007BF8
    // 0x400102FC: nop

    ovl_actor_main_7BF8(rdram, ctx);
        goto after_2;
    // 0x400102FC: nop

    after_2:
L_40010300:
    // 0x40010300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40010304: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40010308: jr          $ra
    // 0x4001030C: nop

    return;
    // 0x4001030C: nop

;}
RECOMP_FUNC void ovl_actor_main_10310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40010314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40010318: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x4001031C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40010320: bne         $t6, $at, L_40010364
    if (ctx->r14 != ctx->r1) {
        // 0x40010324: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40010364;
    }
    // 0x40010324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40010328: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x4001032C: nop

    // 0x40010330: sll         $t7, $v0, 9
    ctx->r15 = S32(ctx->r2 << 9);
    // 0x40010334: bgez        $t7, L_40010360
    if (SIGNED(ctx->r15) >= 0) {
        // 0x40010338: sll         $t8, $v0, 10
        ctx->r24 = S32(ctx->r2 << 10);
            goto L_40010360;
    }
    // 0x40010338: sll         $t8, $v0, 10
    ctx->r24 = S32(ctx->r2 << 10);
    // 0x4001033C: bgez        $t8, L_40010358
    if (SIGNED(ctx->r24) >= 0) {
        // 0x40010340: nop
    
            goto L_40010358;
    }
    // 0x40010340: nop

    // 0x40010344: lw          $a1, 0x34C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X34C);
    // 0x40010348: jal         0x40002630
    // 0x4001034C: nop

    ovl_actor_main_2630(rdram, ctx);
        goto after_0;
    // 0x4001034C: nop

    after_0:
    // 0x40010350: b           L_40010364
    // 0x40010354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40010364;
    // 0x40010354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40010358:
    // 0x40010358: jal         0x40005FD0
    // 0x4001035C: nop

    ovl_actor_main_5FD0(rdram, ctx);
        goto after_1;
    // 0x4001035C: nop

    after_1:
L_40010360:
    // 0x40010360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40010364:
    // 0x40010364: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40010368: jr          $ra
    // 0x4001036C: nop

    return;
    // 0x4001036C: nop

;}
RECOMP_FUNC void ovl_actor_main_10370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40010370: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40010374: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40010378: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4001037C: jal         0x400102BC
    // 0x40010380: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_actor_main_102BC(rdram, ctx);
        goto after_0;
    // 0x40010380: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x40010384: jal         0x40010310
    // 0x40010388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_10310(rdram, ctx);
        goto after_1;
    // 0x40010388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4001038C: jal         0x40009B20
    // 0x40010390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9B20(rdram, ctx);
        goto after_2;
    // 0x40010390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x40010394: jal         0x4000947C
    // 0x40010398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_947C(rdram, ctx);
        goto after_3;
    // 0x40010398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x4001039C: jal         0x400092D4
    // 0x400103A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_92D4(rdram, ctx);
        goto after_4;
    // 0x400103A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x400103A4: jal         0x40004120
    // 0x400103A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_4120(rdram, ctx);
        goto after_5;
    // 0x400103A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x400103AC: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x400103B0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x400103B4: bne         $t6, $at, L_400103C8
    if (ctx->r14 != ctx->r1) {
        // 0x400103B8: nop
    
            goto L_400103C8;
    }
    // 0x400103B8: nop

    // 0x400103BC: lw          $a1, 0x31C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X31C);
    // 0x400103C0: jal         0x400057DC
    // 0x400103C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_57DC(rdram, ctx);
        goto after_6;
    // 0x400103C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_400103C8:
    // 0x400103C8: jal         0x40003264
    // 0x400103CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_3264(rdram, ctx);
        goto after_7;
    // 0x400103CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x400103D0: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x400103D4: beq         $at, $zero, L_40010528
    if (ctx->r1 == 0) {
        // 0x400103D8: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_40010528;
    }
    // 0x400103D8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x400103DC: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400103E0: addu        $at, $at, $t7
    gpr jr_addend_400103EC = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x400103E4: lw          $t7, -0x1488($at)
    ctx->r15 = ADD32(ctx->r1, -0X1488);
    // 0x400103E8: nop

    // 0x400103EC: jr          $t7
    // 0x400103F0: nop

    switch (jr_addend_400103EC >> 2) {
        case 0: goto L_400103F4; break;
        case 1: goto L_40010464; break;
        case 2: goto L_400104D0; break;
        case 3: goto L_40010420; break;
        case 4: goto L_40010500; break;
        default: switch_error(__func__, 0x400103EC, 0x4001EB78);
    }
    // 0x400103F0: nop

L_400103F4:
    // 0x400103F4: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x400103F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x400103FC: bne         $t8, $at, L_40010410
    if (ctx->r24 != ctx->r1) {
        // 0x40010400: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40010410;
    }
    // 0x40010400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40010404: lw          $t9, 0x318($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X318);
    // 0x40010408: nop

    // 0x4001040C: sw          $t9, 0x340($s0)
    MEM_W(0X340, ctx->r16) = ctx->r25;
L_40010410:
    // 0x40010410: jal         0x40001A8C
    // 0x40010414: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_8;
    // 0x40010414: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_8:
    // 0x40010418: b           L_4001052C
    // 0x4001041C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001052C;
    // 0x4001041C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40010420:
    // 0x40010420: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x40010424: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x40010428: bne         $t0, $at, L_40010454
    if (ctx->r8 != ctx->r1) {
        // 0x4001042C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40010454;
    }
    // 0x4001042C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40010430: lw          $t1, 0x90($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X90);
    // 0x40010434: lw          $t3, 0x318($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X318);
    // 0x40010438: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x4001043C: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x40010440: sw          $t2, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r10;
    // 0x40010444: sw          $zero, 0x358($s0)
    MEM_W(0X358, ctx->r16) = 0;
    // 0x40010448: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x4001044C: b           L_40010528
    // 0x40010450: sw          $t3, 0x340($s0)
    MEM_W(0X340, ctx->r16) = ctx->r11;
        goto L_40010528;
    // 0x40010450: sw          $t3, 0x340($s0)
    MEM_W(0X340, ctx->r16) = ctx->r11;
L_40010454:
    // 0x40010454: jal         0x40001A8C
    // 0x40010458: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_9;
    // 0x40010458: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_9:
    // 0x4001045C: b           L_4001052C
    // 0x40010460: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001052C;
    // 0x40010460: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40010464:
    // 0x40010464: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40010468: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001046C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40010470: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x40010474: lui         $a3, 0x432A
    ctx->r7 = S32(0X432A << 16);
    // 0x40010478: jal         0x4000118C
    // 0x4001047C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_10;
    // 0x4001047C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_10:
    // 0x40010480: jal         0x4000E618
    // 0x40010484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_E618(rdram, ctx);
        goto after_11;
    // 0x40010484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x40010488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001048C: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x40010490: jal         0x40009000
    // 0x40010494: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_9000(rdram, ctx);
        goto after_12;
    // 0x40010494: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_12:
    // 0x40010498: lw          $v0, 0x318($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X318);
    // 0x4001049C: nop

    // 0x400104A0: slti        $at, $v0, 0x17
    ctx->r1 = SIGNED(ctx->r2) < 0X17 ? 1 : 0;
    // 0x400104A4: bne         $at, $zero, L_40010528
    if (ctx->r1 != 0) {
        // 0x400104A8: slti        $at, $v0, 0x22
        ctx->r1 = SIGNED(ctx->r2) < 0X22 ? 1 : 0;
            goto L_40010528;
    }
    // 0x400104A8: slti        $at, $v0, 0x22
    ctx->r1 = SIGNED(ctx->r2) < 0X22 ? 1 : 0;
    // 0x400104AC: beq         $at, $zero, L_40010528
    if (ctx->r1 == 0) {
        // 0x400104B0: sll         $t4, $v0, 2
        ctx->r12 = S32(ctx->r2 << 2);
            goto L_40010528;
    }
    // 0x400104B0: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x400104B4: lui         $a1, 0x4002
    ctx->r5 = S32(0X4002 << 16);
    // 0x400104B8: addu        $a1, $a1, $t4
    ctx->r5 = ADD32(ctx->r5, ctx->r12);
    // 0x400104BC: lw          $a1, -0x2650($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2650);
    // 0x400104C0: jal         0x40001A8C
    // 0x400104C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_13;
    // 0x400104C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x400104C8: b           L_4001052C
    // 0x400104CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001052C;
    // 0x400104CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_400104D0:
    // 0x400104D0: lw          $t5, 0x90($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X90);
    // 0x400104D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x400104D8: ori         $t6, $t5, 0x1010
    ctx->r14 = ctx->r13 | 0X1010;
    // 0x400104DC: sw          $t6, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r14;
    // 0x400104E0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x400104E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400104E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x400104EC: lui         $a3, 0x432A
    ctx->r7 = S32(0X432A << 16);
    // 0x400104F0: jal         0x4000118C
    // 0x400104F4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_14;
    // 0x400104F4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_14:
    // 0x400104F8: b           L_4001052C
    // 0x400104FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001052C;
    // 0x400104FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40010500:
    // 0x40010500: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x40010504: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x40010508: bne         $t7, $at, L_4001052C
    if (ctx->r15 != ctx->r1) {
        // 0x4001050C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_4001052C;
    }
    // 0x4001050C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40010510: lw          $t8, 0x90($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X90);
    // 0x40010514: lw          $t0, 0x318($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X318);
    // 0x40010518: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x4001051C: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x40010520: sw          $t9, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r25;
    // 0x40010524: sw          $t0, 0x340($s0)
    MEM_W(0X340, ctx->r16) = ctx->r8;
L_40010528:
    // 0x40010528: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001052C:
    // 0x4001052C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x40010530: jr          $ra
    // 0x40010534: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x40010534: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
