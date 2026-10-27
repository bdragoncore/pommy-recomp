#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_actor_main_BBC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000BBC0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x4000BBC4: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x4000BBC8: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x4000BBCC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x4000BBD0: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x4000BBD4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x4000BBD8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x4000BBDC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x4000BBE0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x4000BBE4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x4000BBE8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x4000BBEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4000BBF0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x4000BBF4: addu        $s4, $a0, $t6
    ctx->r20 = ADD32(ctx->r4, ctx->r14);
    // 0x4000BBF8: lw          $t7, 0xDC($s4)
    ctx->r15 = MEM_W(ctx->r20, 0XDC);
    // 0x4000BBFC: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x4000BC00: blez        $t7, L_4000BC6C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x4000BC04: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_4000BC6C;
    }
    // 0x4000BC04: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x4000BC08: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x4000BC0C: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x4000BC10: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x4000BC14: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x4000BC18: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x4000BC1C: addu        $s0, $a0, $t8
    ctx->r16 = ADD32(ctx->r4, ctx->r24);
    // 0x4000BC20: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_4000BC24:
    // 0x4000BC24: lw          $a1, 0xE0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XE0);
    // 0x4000BC28: nop

    // 0x4000BC2C: beq         $a1, $s2, L_4000BC58
    if (ctx->r5 == ctx->r18) {
        // 0x4000BC30: nop
    
            goto L_4000BC58;
    }
    // 0x4000BC30: nop

    // 0x4000BC34: jal         0x4000B9A8
    // 0x4000BC38: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_actor_main_B9A8(rdram, ctx);
        goto after_0;
    // 0x4000BC38: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x4000BC3C: beq         $v0, $zero, L_4000BC58
    if (ctx->r2 == 0) {
        // 0x4000BC40: nop
    
            goto L_4000BC58;
    }
    // 0x4000BC40: nop

    // 0x4000BC44: jal         0x4000BB68
    // 0x4000BC48: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_actor_main_BB68(rdram, ctx);
        goto after_1;
    // 0x4000BC48: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x4000BC4C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x4000BC50: b           L_4000BC6C
    // 0x4000BC54: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
        goto L_4000BC6C;
    // 0x4000BC54: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_4000BC58:
    // 0x4000BC58: lw          $t0, 0xDC($s4)
    ctx->r8 = MEM_W(ctx->r20, 0XDC);
    // 0x4000BC5C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x4000BC60: slt         $at, $s1, $t0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x4000BC64: bne         $at, $zero, L_4000BC24
    if (ctx->r1 != 0) {
        // 0x4000BC68: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_4000BC24;
    }
    // 0x4000BC68: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_4000BC6C:
    // 0x4000BC6C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x4000BC70: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x4000BC74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4000BC78: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x4000BC7C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x4000BC80: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x4000BC84: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x4000BC88: jr          $ra
    // 0x4000BC8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x4000BC8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_actor_main_BC90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000BC90: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x4000BC94: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x4000BC98: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x4000BC9C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x4000BCA0: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x4000BCA4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x4000BCA8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x4000BCAC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x4000BCB0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x4000BCB4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x4000BCB8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x4000BCBC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x4000BCC0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x4000BCC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4000BCC8: addu        $s6, $a0, $t6
    ctx->r22 = ADD32(ctx->r4, ctx->r14);
    // 0x4000BCCC: lw          $t7, 0xDC($s6)
    ctx->r15 = MEM_W(ctx->r22, 0XDC);
    // 0x4000BCD0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x4000BCD4: blez        $t7, L_4000BD5C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x4000BCD8: sll         $t8, $a1, 2
        ctx->r24 = S32(ctx->r5 << 2);
            goto L_4000BD5C;
    }
    // 0x4000BCD8: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x4000BCDC: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x4000BCE0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x4000BCE4: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x4000BCE8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x4000BCEC: addu        $s0, $a0, $t8
    ctx->r16 = ADD32(ctx->r4, ctx->r24);
    // 0x4000BCF0: addiu       $s5, $sp, 0x4C
    ctx->r21 = ADD32(ctx->r29, 0X4C);
    // 0x4000BCF4: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x4000BCF8: addiu       $s3, $zero, 0x5
    ctx->r19 = ADD32(0, 0X5);
L_4000BCFC:
    // 0x4000BCFC: lw          $a0, 0xE0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE0);
    // 0x4000BD00: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x4000BD04: beq         $s4, $a0, L_4000BD48
    if (ctx->r20 == ctx->r4) {
        // 0x4000BD08: addiu       $a1, $zero, 0x29
        ctx->r5 = ADD32(0, 0X29);
            goto L_4000BD48;
    }
    // 0x4000BD08: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4000BD0C: jal         0x400006C4
    // 0x4000BD10: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4000BD10: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_0:
    // 0x4000BD14: bne         $v0, $zero, L_4000BD38
    if (ctx->r2 != 0) {
        // 0x4000BD18: nop
    
            goto L_4000BD38;
    }
    // 0x4000BD18: nop

    // 0x4000BD1C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x4000BD20: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x4000BD24: bne         $t9, $s3, L_4000BD38
    if (ctx->r25 != ctx->r19) {
        // 0x4000BD28: nop
    
            goto L_4000BD38;
    }
    // 0x4000BD28: nop

    // 0x4000BD2C: bne         $t0, $s3, L_4000BD38
    if (ctx->r8 != ctx->r19) {
        // 0x4000BD30: nop
    
            goto L_4000BD38;
    }
    // 0x4000BD30: nop

    // 0x4000BD34: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_4000BD38:
    // 0x4000BD38: beq         $s1, $zero, L_4000BD48
    if (ctx->r17 == 0) {
        // 0x4000BD3C: nop
    
            goto L_4000BD48;
    }
    // 0x4000BD3C: nop

    // 0x4000BD40: b           L_4000BD60
    // 0x4000BD44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_4000BD60;
    // 0x4000BD44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4000BD48:
    // 0x4000BD48: lw          $t1, 0xDC($s6)
    ctx->r9 = MEM_W(ctx->r22, 0XDC);
    // 0x4000BD4C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x4000BD50: slt         $at, $s2, $t1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x4000BD54: bne         $at, $zero, L_4000BCFC
    if (ctx->r1 != 0) {
        // 0x4000BD58: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_4000BCFC;
    }
    // 0x4000BD58: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_4000BD5C:
    // 0x4000BD5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_4000BD60:
    // 0x4000BD60: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x4000BD64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4000BD68: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x4000BD6C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x4000BD70: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x4000BD74: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x4000BD78: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x4000BD7C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x4000BD80: jr          $ra
    // 0x4000BD84: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x4000BD84: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_actor_main_BD88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000BD88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000BD8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000BD90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4000BD94: lw          $t6, 0x2F4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2F4);
    // 0x4000BD98: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000BD9C: bne         $t6, $zero, L_4000BDC4
    if (ctx->r14 != 0) {
        // 0x4000BDA0: nop
    
            goto L_4000BDC4;
    }
    // 0x4000BDA0: nop

    // 0x4000BDA4: jal         0x4000BBC0
    // 0x4000BDA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_BBC0(rdram, ctx);
        goto after_0;
    // 0x4000BDA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x4000BDAC: bne         $v0, $zero, L_4000BE98
    if (ctx->r2 != 0) {
        // 0x4000BDB0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000BE98;
    }
    // 0x4000BDB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000BDB4: jal         0x4000BBC0
    // 0x4000BDB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_BBC0(rdram, ctx);
        goto after_1;
    // 0x4000BDB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x4000BDBC: bne         $v0, $zero, L_4000BE9C
    if (ctx->r2 != 0) {
        // 0x4000BDC0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4000BE9C;
    }
    // 0x4000BDC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000BDC4:
    // 0x4000BDC4: lw          $t7, 0x2F4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X2F4);
    // 0x4000BDC8: nop

    // 0x4000BDCC: bne         $t7, $zero, L_4000BE6C
    if (ctx->r15 != 0) {
        // 0x4000BDD0: nop
    
            goto L_4000BE6C;
    }
    // 0x4000BDD0: nop

    // 0x4000BDD4: lw          $t8, 0x2EC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X2EC);
    // 0x4000BDD8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000BDDC: bne         $t8, $at, L_4000BE6C
    if (ctx->r24 != ctx->r1) {
        // 0x4000BDE0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000BE6C;
    }
    // 0x4000BDE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000BDE4: jal         0x4000BC90
    // 0x4000BDE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_BC90(rdram, ctx);
        goto after_2;
    // 0x4000BDE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x4000BDEC: bne         $v0, $zero, L_4000BE5C
    if (ctx->r2 != 0) {
        // 0x4000BDF0: nop
    
            goto L_4000BE5C;
    }
    // 0x4000BDF0: nop

    // 0x4000BDF4: jal         0x40009490
    // 0x4000BDF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9490(rdram, ctx);
        goto after_3;
    // 0x4000BDF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x4000BDFC: beq         $v0, $zero, L_4000BE4C
    if (ctx->r2 == 0) {
        // 0x4000BE00: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000BE4C;
    }
    // 0x4000BE00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000BE04: lui         $a1, 0x4002
    ctx->r5 = S32(0X4002 << 16);
    // 0x4000BE08: addiu       $a1, $a1, -0x25B0
    ctx->r5 = ADD32(ctx->r5, -0X25B0);
    // 0x4000BE0C: jal         0x400095C4
    // 0x4000BE10: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    ovl_actor_main_95C4(rdram, ctx);
        goto after_4;
    // 0x4000BE10: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    after_4:
    // 0x4000BE14: lui         $a1, 0x4002
    ctx->r5 = S32(0X4002 << 16);
    // 0x4000BE18: lw          $a1, -0x25B0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X25B0);
    // 0x4000BE1C: jal         0x4000B9A8
    // 0x4000BE20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_B9A8(rdram, ctx);
        goto after_5;
    // 0x4000BE20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x4000BE24: bne         $v0, $zero, L_4000BE3C
    if (ctx->r2 != 0) {
        // 0x4000BE28: nop
    
            goto L_4000BE3C;
    }
    // 0x4000BE28: nop

    // 0x4000BE2C: jal         0x4000BB3C
    // 0x4000BE30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_BB3C(rdram, ctx);
        goto after_6;
    // 0x4000BE30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x4000BE34: b           L_4000BE9C
    // 0x4000BE38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000BE9C;
    // 0x4000BE38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000BE3C:
    // 0x4000BE3C: jal         0x4000BB68
    // 0x4000BE40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_BB68(rdram, ctx);
        goto after_7;
    // 0x4000BE40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x4000BE44: b           L_4000BE9C
    // 0x4000BE48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000BE9C;
    // 0x4000BE48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000BE4C:
    // 0x4000BE4C: jal         0x4000BB3C
    // 0x4000BE50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_BB3C(rdram, ctx);
        goto after_8;
    // 0x4000BE50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x4000BE54: b           L_4000BE9C
    // 0x4000BE58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000BE9C;
    // 0x4000BE58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000BE5C:
    // 0x4000BE5C: jal         0x4000BB3C
    // 0x4000BE60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_BB3C(rdram, ctx);
        goto after_9;
    // 0x4000BE60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x4000BE64: b           L_4000BE9C
    // 0x4000BE68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000BE9C;
    // 0x4000BE68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000BE6C:
    // 0x4000BE6C: lw          $a1, 0x2EC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2EC);
    // 0x4000BE70: jal         0x4000B9A8
    // 0x4000BE74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_B9A8(rdram, ctx);
        goto after_10;
    // 0x4000BE74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x4000BE78: beq         $v0, $zero, L_4000BE90
    if (ctx->r2 == 0) {
        // 0x4000BE7C: nop
    
            goto L_4000BE90;
    }
    // 0x4000BE7C: nop

    // 0x4000BE80: jal         0x4000BB68
    // 0x4000BE84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_BB68(rdram, ctx);
        goto after_11;
    // 0x4000BE84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x4000BE88: b           L_4000BE9C
    // 0x4000BE8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000BE9C;
    // 0x4000BE8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000BE90:
    // 0x4000BE90: jal         0x4000BB3C
    // 0x4000BE94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_BB3C(rdram, ctx);
        goto after_12;
    // 0x4000BE94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
L_4000BE98:
    // 0x4000BE98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000BE9C:
    // 0x4000BE9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4000BEA0: jr          $ra
    // 0x4000BEA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x4000BEA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_actor_main_BEA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000BEA8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x4000BEAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000BEB0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x4000BEB4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x4000BEB8: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x4000BEBC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4000BEC0: jal         0x400006C4
    // 0x4000BEC4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4000BEC4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x4000BEC8: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x4000BECC: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x4000BED0: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x4000BED4: lwc1        $f12, 0x44($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X44);
    // 0x4000BED8: jal         0x40009134
    // 0x4000BEDC: nop

    ovl_actor_main_9134(rdram, ctx);
        goto after_1;
    // 0x4000BEDC: nop

    after_1:
    // 0x4000BEE0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x4000BEE4: bne         $v0, $zero, L_4000BEFC
    if (ctx->r2 != 0) {
        // 0x4000BEE8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_4000BEFC;
    }
    // 0x4000BEE8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x4000BEEC: lw          $t8, 0xCC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XCC);
    // 0x4000BEF0: nop

    // 0x4000BEF4: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x4000BEF8: sw          $t9, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r25;
L_4000BEFC:
    // 0x4000BEFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000BF00: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x4000BF04: jr          $ra
    // 0x4000BF08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4000BF08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_BF0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000BF0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000BF10: slti        $at, $a1, 0xA
    ctx->r1 = SIGNED(ctx->r5) < 0XA ? 1 : 0;
    // 0x4000BF14: beq         $at, $zero, L_4000BF9C
    if (ctx->r1 == 0) {
        // 0x4000BF18: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4000BF9C;
    }
    // 0x4000BF18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000BF1C: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x4000BF20: bne         $at, $zero, L_4000BF68
    if (ctx->r1 != 0) {
        // 0x4000BF24: lui         $at, 0x4002
        ctx->r1 = S32(0X4002 << 16);
            goto L_4000BF68;
    }
    // 0x4000BF24: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000BF28: lwc1        $f4, -0x15D8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X15D8);
    // 0x4000BF2C: lwc1        $f6, 0x44($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X44);
    // 0x4000BF30: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x4000BF34: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x4000BF38: nop

    // 0x4000BF3C: bc1t        L_4000BF68
    if (c1cs) {
        // 0x4000BF40: nop
    
            goto L_4000BF68;
    }
    // 0x4000BF40: nop

    // 0x4000BF44: jal         0x4000BEA8
    // 0x4000BF48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_BEA8(rdram, ctx);
        goto after_0;
    // 0x4000BF48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000BF4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000BF50: beq         $v0, $zero, L_4000BF68
    if (ctx->r2 == 0) {
        // 0x4000BF54: nop
    
            goto L_4000BF68;
    }
    // 0x4000BF54: nop

    // 0x4000BF58: jal         0x4000BD88
    // 0x4000BF5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_BD88(rdram, ctx);
        goto after_1;
    // 0x4000BF5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x4000BF60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000BF64: nop

L_4000BF68:
    // 0x4000BF68: lw          $t6, 0xCC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XCC);
    // 0x4000BF6C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x4000BF70: bne         $t6, $at, L_4000BFB4
    if (ctx->r14 != ctx->r1) {
        // 0x4000BF74: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000BFB4;
    }
    // 0x4000BF74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000BF78: lw          $t7, 0x90($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X90);
    // 0x4000BF7C: nop

    // 0x4000BF80: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x4000BF84: bne         $t8, $zero, L_4000BFB4
    if (ctx->r24 != 0) {
        // 0x4000BF88: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000BFB4;
    }
    // 0x4000BF88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000BF8C: jal         0x40001A8C
    // 0x4000BF90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_2;
    // 0x4000BF90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x4000BF94: b           L_4000BFB4
    // 0x4000BF98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4000BFB4;
    // 0x4000BF98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000BF9C:
    // 0x4000BF9C: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x4000BFA0: bne         $a1, $at, L_4000BFB4
    if (ctx->r5 != ctx->r1) {
        // 0x4000BFA4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000BFB4;
    }
    // 0x4000BFA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000BFA8: jal         0x40001A8C
    // 0x4000BFAC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_3;
    // 0x4000BFAC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_3:
    // 0x4000BFB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000BFB4:
    // 0x4000BFB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000BFB8: jr          $ra
    // 0x4000BFBC: nop

    return;
    // 0x4000BFBC: nop

;}
RECOMP_FUNC void ovl_actor_main_BFC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000BFC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000BFC4: slti        $at, $a2, 0x16
    ctx->r1 = SIGNED(ctx->r6) < 0X16 ? 1 : 0;
    // 0x4000BFC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000BFCC: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x4000BFD0: bne         $at, $zero, L_4000C068
    if (ctx->r1 != 0) {
        // 0x4000BFD4: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_4000C068;
    }
    // 0x4000BFD4: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x4000BFD8: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x4000BFDC: sltiu       $at, $t6, 0x12
    ctx->r1 = ctx->r14 < 0X12 ? 1 : 0;
    // 0x4000BFE0: beq         $at, $zero, L_4000C0A4
    if (ctx->r1 == 0) {
        // 0x4000BFE4: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_4000C0A4;
    }
    // 0x4000BFE4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x4000BFE8: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000BFEC: addu        $at, $at, $t6
    gpr jr_addend_4000BFF8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x4000BFF0: lw          $t6, -0x15D4($at)
    ctx->r14 = ADD32(ctx->r1, -0X15D4);
    // 0x4000BFF4: nop

    // 0x4000BFF8: jr          $t6
    // 0x4000BFFC: nop

    switch (jr_addend_4000BFF8 >> 2) {
        case 0: goto L_4000C03C; break;
        case 1: goto L_4000C0A4; break;
        case 2: goto L_4000C0A4; break;
        case 3: goto L_4000C0A4; break;
        case 4: goto L_4000C000; break;
        case 5: goto L_4000C0A4; break;
        case 6: goto L_4000C0A4; break;
        case 7: goto L_4000C008; break;
        case 8: goto L_4000C028; break;
        case 9: goto L_4000C008; break;
        case 10: goto L_4000C0A4; break;
        case 11: goto L_4000C0A4; break;
        case 12: goto L_4000C0A4; break;
        case 13: goto L_4000C0A4; break;
        case 14: goto L_4000C008; break;
        case 15: goto L_4000C008; break;
        case 16: goto L_4000C010; break;
        case 17: goto L_4000C010; break;
        default: switch_error(__func__, 0x4000BFF8, 0x4001EA2C);
    }
    // 0x4000BFFC: nop

L_4000C000:
    // 0x4000C000: b           L_4000C0A4
    // 0x4000C004: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
        goto L_4000C0A4;
    // 0x4000C004: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_4000C008:
    // 0x4000C008: b           L_4000C0A4
    // 0x4000C00C: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
        goto L_4000C0A4;
    // 0x4000C00C: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_4000C010:
    // 0x4000C010: lw          $t7, 0xC0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC0);
    // 0x4000C014: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x4000C018: beq         $t7, $at, L_4000C0A8
    if (ctx->r15 == ctx->r1) {
        // 0x4000C01C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000C0A8;
    }
    // 0x4000C01C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000C020: b           L_4000C0A4
    // 0x4000C024: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
        goto L_4000C0A4;
    // 0x4000C024: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_4000C028:
    // 0x4000C028: jal         0x400092D4
    // 0x4000C02C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    ovl_actor_main_92D4(rdram, ctx);
        goto after_0;
    // 0x4000C02C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x4000C030: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x4000C034: b           L_4000C0A8
    // 0x4000C038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4000C0A8;
    // 0x4000C038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000C03C:
    // 0x4000C03C: lw          $t8, 0x90($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X90);
    // 0x4000C040: nop

    // 0x4000C044: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x4000C048: bne         $t9, $zero, L_4000C0A8
    if (ctx->r25 != 0) {
        // 0x4000C04C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000C0A8;
    }
    // 0x4000C04C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000C050: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x4000C054: jal         0x40011944
    // 0x4000C058: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    ovl_actor_main_11944(rdram, ctx);
        goto after_1;
    // 0x4000C058: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_1:
    // 0x4000C05C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x4000C060: b           L_4000C0A8
    // 0x4000C064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4000C0A8;
    // 0x4000C064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000C068:
    // 0x4000C068: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000C06C: bne         $a3, $at, L_4000C0A8
    if (ctx->r7 != ctx->r1) {
        // 0x4000C070: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000C0A8;
    }
    // 0x4000C070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000C074: lw          $t0, 0x90($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X90);
    // 0x4000C078: slti        $at, $a2, 0x3
    ctx->r1 = SIGNED(ctx->r6) < 0X3 ? 1 : 0;
    // 0x4000C07C: andi        $t1, $t0, 0x8
    ctx->r9 = ctx->r8 & 0X8;
    // 0x4000C080: bne         $t1, $zero, L_4000C0A8
    if (ctx->r9 != 0) {
        // 0x4000C084: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000C0A8;
    }
    // 0x4000C084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000C088: bne         $at, $zero, L_4000C0A8
    if (ctx->r1 != 0) {
        // 0x4000C08C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000C0A8;
    }
    // 0x4000C08C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000C090: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x4000C094: jal         0x40011944
    // 0x4000C098: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    ovl_actor_main_11944(rdram, ctx);
        goto after_2;
    // 0x4000C098: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_2:
    // 0x4000C09C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x4000C0A0: nop

L_4000C0A4:
    // 0x4000C0A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000C0A8:
    // 0x4000C0A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000C0AC: jr          $ra
    // 0x4000C0B0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4000C0B0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_C0B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000C0B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000C0B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000C0BC: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x4000C0C0: nop

    // 0x4000C0C4: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x4000C0C8: nop

    // 0x4000C0CC: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x4000C0D0: beq         $t8, $zero, L_4000C12C
    if (ctx->r24 == 0) {
        // 0x4000C0D4: nop
    
            goto L_4000C12C;
    }
    // 0x4000C0D4: nop

    // 0x4000C0D8: lw          $t9, 0x90($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X90);
    // 0x4000C0DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4000C0E0: sll         $t0, $t9, 10
    ctx->r8 = S32(ctx->r25 << 10);
    // 0x4000C0E4: bltz        $t0, L_4000C12C
    if (SIGNED(ctx->r8) < 0) {
        // 0x4000C0E8: lui         $a2, 0x42A0
        ctx->r6 = S32(0X42A0 << 16);
            goto L_4000C12C;
    }
    // 0x4000C0E8: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x4000C0EC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x4000C0F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000C0F4: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x4000C0F8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4000C0FC: jal         0x40006EB8
    // 0x4000C100: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_0;
    // 0x4000C100: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x4000C104: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x4000C108: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4000C10C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000C110: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4000C114: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x4000C118: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    // 0x4000C11C: jal         0x40006EB8
    // 0x4000C120: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_1;
    // 0x4000C120: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x4000C124: b           L_4000C13C
    // 0x4000C128: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000C13C;
    // 0x4000C128: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000C12C:
    // 0x4000C12C: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x4000C130: jal         0x40011944
    // 0x4000C134: nop

    ovl_actor_main_11944(rdram, ctx);
        goto after_2;
    // 0x4000C134: nop

    after_2:
    // 0x4000C138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000C13C:
    // 0x4000C13C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000C140: jr          $ra
    // 0x4000C144: nop

    return;
    // 0x4000C144: nop

;}
RECOMP_FUNC void ovl_actor_main_C148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000C148: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000C14C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000C150: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4000C154: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000C158: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    // 0x4000C15C: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
    // 0x4000C160: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4000C164: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4000C168: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4000C16C: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4000C170: jal         0x40006EB8
    // 0x4000C174: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_0;
    // 0x4000C174: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x4000C178: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4000C17C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4000C180: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000C184: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4000C188: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4000C18C: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4000C190: jal         0x40006EB8
    // 0x4000C194: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_1;
    // 0x4000C194: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x4000C198: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000C19C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000C1A0: jr          $ra
    // 0x4000C1A4: nop

    return;
    // 0x4000C1A4: nop

;}
RECOMP_FUNC void ovl_actor_main_C1A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000C1A8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x4000C1AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4000C1B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000C1B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000C1B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000C1BC: beq         $a1, $at, L_4000C1D8
    if (ctx->r5 == ctx->r1) {
        // 0x4000C1C0: sw          $a1, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r5;
            goto L_4000C1D8;
    }
    // 0x4000C1C0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x4000C1C4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x4000C1C8: beq         $a1, $at, L_4000C214
    if (ctx->r5 == ctx->r1) {
        // 0x4000C1CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000C214;
    }
    // 0x4000C1CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000C1D0: b           L_4000C220
    // 0x4000C1D4: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
        goto L_4000C220;
    // 0x4000C1D4: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
L_4000C1D8:
    // 0x4000C1D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000C1DC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x4000C1E0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000C1E4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000C1E8: jal         0x40008D20
    // 0x4000C1EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4000C1EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4000C1F0: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x4000C1F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4000C1F8: bne         $t7, $at, L_4000C21C
    if (ctx->r15 != ctx->r1) {
        // 0x4000C1FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000C21C;
    }
    // 0x4000C1FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000C200: addiu       $a1, $zero, 0x88
    ctx->r5 = ADD32(0, 0X88);
    // 0x4000C204: jal         0x4000115C
    // 0x4000C208: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_1;
    // 0x4000C208: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x4000C20C: b           L_4000C220
    // 0x4000C210: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
        goto L_4000C220;
    // 0x4000C210: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
L_4000C214:
    // 0x4000C214: jal         0x40001A8C
    // 0x4000C218: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_2;
    // 0x4000C218: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_4000C21C:
    // 0x4000C21C: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
L_4000C220:
    // 0x4000C220: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4000C224: slti        $at, $t8, 0xF
    ctx->r1 = SIGNED(ctx->r24) < 0XF ? 1 : 0;
    // 0x4000C228: beq         $at, $zero, L_4000C258
    if (ctx->r1 == 0) {
        // 0x4000C22C: lw          $t9, 0x4C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X4C);
            goto L_4000C258;
    }
    // 0x4000C22C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x4000C230: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x4000C234: jal         0x400006C4
    // 0x4000C238: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_3;
    // 0x4000C238: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x4000C23C: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4000C240: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000C244: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    // 0x4000C248: lwc1        $f6, -0x158C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X158C);
    // 0x4000C24C: nop

    // 0x4000C250: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    // 0x4000C254: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
L_4000C258:
    // 0x4000C258: nop

    // 0x4000C25C: slti        $at, $t9, 0x12
    ctx->r1 = SIGNED(ctx->r25) < 0X12 ? 1 : 0;
    // 0x4000C260: beq         $at, $zero, L_4000C2C8
    if (ctx->r1 == 0) {
        // 0x4000C264: slti        $at, $t9, 0xA
        ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
            goto L_4000C2C8;
    }
    // 0x4000C264: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x4000C268: beq         $at, $zero, L_4000C2B0
    if (ctx->r1 == 0) {
        // 0x4000C26C: nop
    
            goto L_4000C2B0;
    }
    // 0x4000C26C: nop

    // 0x4000C270: lw          $t0, 0x18C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18C);
    // 0x4000C274: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x4000C278: beq         $t0, $zero, L_4000C29C
    if (ctx->r8 == 0) {
        // 0x4000C27C: nop
    
            goto L_4000C29C;
    }
    // 0x4000C27C: nop

    // 0x4000C280: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x4000C284: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4000C288: lwc1        $f8, 0x64($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X64);
    // 0x4000C28C: nop

    // 0x4000C290: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x4000C294: b           L_4000C2B0
    // 0x4000C298: swc1        $f16, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f16.u32l;
        goto L_4000C2B0;
    // 0x4000C298: swc1        $f16, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f16.u32l;
L_4000C29C:
    // 0x4000C29C: lwc1        $f18, 0x64($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X64);
    // 0x4000C2A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000C2A4: nop

    // 0x4000C2A8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x4000C2AC: swc1        $f6, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f6.u32l;
L_4000C2B0:
    // 0x4000C2B0: jal         0x40009414
    // 0x4000C2B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9414(rdram, ctx);
        goto after_4;
    // 0x4000C2B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4000C2B8: lw          $t1, 0x90($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X90);
    // 0x4000C2BC: nop

    // 0x4000C2C0: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x4000C2C4: sw          $t2, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r10;
L_4000C2C8:
    // 0x4000C2C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4000C2CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4000C2D0: jr          $ra
    // 0x4000C2D4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x4000C2D4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_actor_main_C2D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000C2D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000C2DC: bne         $a1, $at, L_4000C2F8
    if (ctx->r5 != ctx->r1) {
        // 0x4000C2E0: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_4000C2F8;
    }
    // 0x4000C2E0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x4000C2E4: slti        $at, $a2, 0x1E
    ctx->r1 = SIGNED(ctx->r6) < 0X1E ? 1 : 0;
    // 0x4000C2E8: bne         $at, $zero, L_4000C2FC
    if (ctx->r1 != 0) {
        // 0x4000C2EC: addiu       $v0, $zero, 0x1F
        ctx->r2 = ADD32(0, 0X1F);
            goto L_4000C2FC;
    }
    // 0x4000C2EC: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x4000C2F0: jr          $ra
    // 0x4000C2F4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x4000C2F4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_4000C2F8:
    // 0x4000C2F8: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
L_4000C2FC:
    // 0x4000C2FC: jr          $ra
    // 0x4000C300: nop

    return;
    // 0x4000C300: nop

;}
RECOMP_FUNC void ovl_actor_main_C304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000C304: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000C308: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000C30C: jal         0x4000947C
    // 0x4000C310: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_947C(rdram, ctx);
        goto after_0;
    // 0x4000C310: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000C314: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x4000C318: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000C31C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000C320: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4000C324: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x4000C328: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x4000C32C: jal         0x40006EB8
    // 0x4000C330: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_1;
    // 0x4000C330: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x4000C334: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000C338: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000C33C: jr          $ra
    // 0x4000C340: nop

    return;
    // 0x4000C340: nop

;}
RECOMP_FUNC void ovl_actor_main_C344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000C344: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000C348: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000C34C: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000C350: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x4000C354: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x4000C358: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
    // 0x4000C35C: jal         0x4000946C
    // 0x4000C360: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_946C(rdram, ctx);
        goto after_0;
    // 0x4000C360: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000C364: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000C368: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000C36C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4000C370: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000C374: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x4000C378: swc1        $f0, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f0.u32l;
    // 0x4000C37C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4000C380: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4000C384: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4000C388: jal         0x40006EB8
    // 0x4000C38C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_1;
    // 0x4000C38C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x4000C390: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000C394: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000C398: jr          $ra
    // 0x4000C39C: nop

    return;
    // 0x4000C39C: nop

;}
RECOMP_FUNC void ovl_actor_main_C3A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000C3A0: slti        $at, $a1, 0x4
    ctx->r1 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x4000C3A4: bne         $at, $zero, L_4000C3C8
    if (ctx->r1 != 0) {
        // 0x4000C3A8: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_4000C3C8;
    }
    // 0x4000C3A8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x4000C3AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4000C3B0: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x4000C3B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000C3B8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4000C3BC: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x4000C3C0: swc1        $f8, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f8.u32l;
    // 0x4000C3C4: swc1        $f0, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f0.u32l;
L_4000C3C8:
    // 0x4000C3C8: jr          $ra
    // 0x4000C3CC: nop

    return;
    // 0x4000C3CC: nop

;}
RECOMP_FUNC void ovl_actor_main_C3D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000C3D0: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x4000C3D4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x4000C3D8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x4000C3DC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x4000C3E0: sw          $a1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r5;
    // 0x4000C3E4: addiu       $a0, $a0, 0x230
    ctx->r4 = ADD32(ctx->r4, 0X230);
    // 0x4000C3E8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x4000C3EC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x4000C3F0: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x4000C3F4: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x4000C3F8: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x4000C3FC: jal         0x40009220
    // 0x4000C400: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_actor_main_9220(rdram, ctx);
        goto after_0;
    // 0x4000C400: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_0:
    // 0x4000C404: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000C408: bne         $v0, $at, L_4000C420
    if (ctx->r2 != ctx->r1) {
        // 0x4000C40C: addiu       $a0, $s2, 0xDC
        ctx->r4 = ADD32(ctx->r18, 0XDC);
            goto L_4000C420;
    }
    // 0x4000C40C: addiu       $a0, $s2, 0xDC
    ctx->r4 = ADD32(ctx->r18, 0XDC);
    // 0x4000C410: jal         0x40009220
    // 0x4000C414: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_actor_main_9220(rdram, ctx);
        goto after_1;
    // 0x4000C414: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_1:
    // 0x4000C418: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000C41C: beq         $v0, $at, L_4000C434
    if (ctx->r2 == ctx->r1) {
        // 0x4000C420: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_4000C434;
    }
L_4000C420:
    // 0x4000C420: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x4000C424: jal         0x40001A8C
    // 0x4000C428: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_2;
    // 0x4000C428: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x4000C42C: b           L_4000C8DC
    // 0x4000C430: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_4000C8DC;
    // 0x4000C430: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_4000C434:
    // 0x4000C434: jal         0x40009E78
    // 0x4000C438: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_actor_main_9E78(rdram, ctx);
        goto after_3;
    // 0x4000C438: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
    // 0x4000C43C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x4000C440: addiu       $a0, $s2, 0x18C
    ctx->r4 = ADD32(ctx->r18, 0X18C);
    // 0x4000C444: swc1        $f20, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->f20.u32l;
    // 0x4000C448: lw          $t6, 0xDC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XDC);
    // 0x4000C44C: lw          $t8, 0xDC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XDC);
    // 0x4000C450: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x4000C454: beq         $at, $zero, L_4000C4A8
    if (ctx->r1 == 0) {
        // 0x4000C458: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_4000C4A8;
    }
    // 0x4000C458: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4000C45C: jal         0x40009220
    // 0x4000C460: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    ovl_actor_main_9220(rdram, ctx);
        goto after_4;
    // 0x4000C460: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_4:
    // 0x4000C464: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000C468: bne         $v0, $at, L_4000C47C
    if (ctx->r2 != ctx->r1) {
        // 0x4000C46C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_4000C47C;
    }
    // 0x4000C46C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x4000C470: b           L_4000C47C
    // 0x4000C474: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_4000C47C;
    // 0x4000C474: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x4000C478: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4000C47C:
    // 0x4000C47C: beq         $v0, $zero, L_4000C8DC
    if (ctx->r2 == 0) {
        // 0x4000C480: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_4000C8DC;
    }
    // 0x4000C480: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x4000C484: lw          $t7, 0xDC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XDC);
    // 0x4000C488: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000C48C: beq         $t7, $at, L_4000C8D8
    if (ctx->r15 == ctx->r1) {
        // 0x4000C490: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_4000C8D8;
    }
    // 0x4000C490: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x4000C494: jal         0x40001A8C
    // 0x4000C498: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_5;
    // 0x4000C498: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x4000C49C: b           L_4000C8DC
    // 0x4000C4A0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_4000C8DC;
    // 0x4000C4A0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x4000C4A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_4000C4A8:
    // 0x4000C4A8: bne         $t8, $at, L_4000C52C
    if (ctx->r24 != ctx->r1) {
        // 0x4000C4AC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_4000C52C;
    }
    // 0x4000C4AC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x4000C4B0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x4000C4B4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x4000C4B8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x4000C4BC: jal         0x40008D20
    // 0x4000C4C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_6;
    // 0x4000C4C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x4000C4C4: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x4000C4C8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x4000C4CC: jal         0x40000CA0
    // 0x4000C4D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_7;
    // 0x4000C4D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x4000C4D4: lw          $t9, 0x8($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X8);
    // 0x4000C4D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4000C4DC: bne         $t9, $at, L_4000C4F0
    if (ctx->r25 != ctx->r1) {
        // 0x4000C4E0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_4000C4F0;
    }
    // 0x4000C4E0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x4000C4E4: addiu       $a1, $zero, 0x87
    ctx->r5 = ADD32(0, 0X87);
    // 0x4000C4E8: jal         0x4000115C
    // 0x4000C4EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_8;
    // 0x4000C4EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
L_4000C4F0:
    // 0x4000C4F0: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x4000C4F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4000C4F8: lwc1        $f4, 0x64($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X64);
    // 0x4000C4FC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x4000C500: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4000C504: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4000C508: swc1        $f8, 0x64($s2)
    MEM_W(0X64, ctx->r18) = ctx->f8.u32l;
    // 0x4000C50C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x4000C510: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4000C514: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x4000C518: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x4000C51C: jal         0x40006EEC
    // 0x4000C520: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    ovl_actor_main_6EEC(rdram, ctx);
        goto after_9;
    // 0x4000C520: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x4000C524: b           L_4000C5A0
    // 0x4000C528: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
        goto L_4000C5A0;
    // 0x4000C528: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
L_4000C52C:
    // 0x4000C52C: lw          $t0, 0xDC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XDC);
    // 0x4000C530: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x4000C534: bne         $t0, $at, L_4000C59C
    if (ctx->r8 != ctx->r1) {
        // 0x4000C538: nop
    
            goto L_4000C59C;
    }
    // 0x4000C538: nop

    // 0x4000C53C: lw          $a0, 0x18C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18C);
    // 0x4000C540: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4000C544: blez        $a0, L_4000C584
    if (SIGNED(ctx->r4) <= 0) {
        // 0x4000C548: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_4000C584;
    }
    // 0x4000C548: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x4000C54C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_4000C550:
    // 0x4000C550: lw          $t1, 0x1B0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X1B0);
    // 0x4000C554: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x4000C558: bne         $t1, $at, L_4000C578
    if (ctx->r9 != ctx->r1) {
        // 0x4000C55C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_4000C578;
    }
    // 0x4000C55C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x4000C560: lw          $t2, 0x190($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X190);
    // 0x4000C564: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000C568: beq         $t2, $at, L_4000C57C
    if (ctx->r10 == ctx->r1) {
        // 0x4000C56C: slt         $at, $v1, $a0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_4000C57C;
    }
    // 0x4000C56C: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x4000C570: b           L_4000C584
    // 0x4000C574: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_4000C584;
    // 0x4000C574: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_4000C578:
    // 0x4000C578: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
L_4000C57C:
    // 0x4000C57C: bne         $at, $zero, L_4000C550
    if (ctx->r1 != 0) {
        // 0x4000C580: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_4000C550;
    }
    // 0x4000C580: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_4000C584:
    // 0x4000C584: beq         $a1, $zero, L_4000C59C
    if (ctx->r5 == 0) {
        // 0x4000C588: nop
    
            goto L_4000C59C;
    }
    // 0x4000C588: nop

    // 0x4000C58C: lw          $t3, 0x90($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X90);
    // 0x4000C590: nop

    // 0x4000C594: ori         $t4, $t3, 0x2000
    ctx->r12 = ctx->r11 | 0X2000;
    // 0x4000C598: sw          $t4, 0x90($s2)
    MEM_W(0X90, ctx->r18) = ctx->r12;
L_4000C59C:
    // 0x4000C59C: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
L_4000C5A0:
    // 0x4000C5A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4000C5A4: bne         $v0, $at, L_4000C6B8
    if (ctx->r2 != ctx->r1) {
        // 0x4000C5A8: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_4000C6B8;
    }
    // 0x4000C5A8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x4000C5AC: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x4000C5B0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x4000C5B4: sw          $v0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r2;
    // 0x4000C5B8: lw          $t5, 0x230($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X230);
    // 0x4000C5BC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x4000C5C0: blez        $t5, L_4000C70C
    if (SIGNED(ctx->r13) <= 0) {
        // 0x4000C5C4: nop
    
            goto L_4000C70C;
    }
    // 0x4000C5C4: nop

L_4000C5C8:
    // 0x4000C5C8: lwc1        $f0, 0x44($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
    // 0x4000C5CC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x4000C5D0: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x4000C5D4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x4000C5D8: bc1f        L_4000C5F8
    if (!c1cs) {
        // 0x4000C5DC: addiu       $a2, $sp, 0xB4
        ctx->r6 = ADD32(ctx->r29, 0XB4);
            goto L_4000C5F8;
    }
    // 0x4000C5DC: addiu       $a2, $sp, 0xB4
    ctx->r6 = ADD32(ctx->r29, 0XB4);
    // 0x4000C5E0: lwc1        $f16, 0x4C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x4000C5E4: nop

    // 0x4000C5E8: c.eq.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl == ctx->f16.fl;
    // 0x4000C5EC: nop

    // 0x4000C5F0: bc1t        L_4000C694
    if (c1cs) {
        // 0x4000C5F4: lw          $t6, 0xB0($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XB0);
            goto L_4000C694;
    }
    // 0x4000C5F4: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
L_4000C5F8:
    // 0x4000C5F8: swc1        $f0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f0.u32l;
    // 0x4000C5FC: lwc1        $f18, 0x4C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x4000C600: swc1        $f20, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f20.u32l;
    // 0x4000C604: jal         0x40001258
    // 0x4000C608: swc1        $f18, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f18.u32l;
    ovl_actor_main_1258(rdram, ctx);
        goto after_10;
    // 0x4000C608: swc1        $f18, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f18.u32l;
    after_10:
    // 0x4000C60C: lwc1        $f2, 0xB8($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x4000C610: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x4000C614: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4000C618: addiu       $a2, $sp, 0xB4
    ctx->r6 = ADD32(ctx->r29, 0XB4);
    // 0x4000C61C: jal         0x400006C4
    // 0x4000C620: swc1        $f2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f2.u32l;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_11;
    // 0x4000C620: swc1        $f2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f2.u32l;
    after_11:
    // 0x4000C624: lwc1        $f2, 0xAC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x4000C628: lwc1        $f12, 0xB8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x4000C62C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x4000C630: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x4000C634: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000C638: bc1f        L_4000C64C
    if (!c1cs) {
        // 0x4000C63C: lui         $at, 0x43B4
        ctx->r1 = S32(0X43B4 << 16);
            goto L_4000C64C;
    }
    // 0x4000C63C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x4000C640: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x4000C644: b           L_4000C650
    // 0x4000C648: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_4000C650;
    // 0x4000C648: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_4000C64C:
    // 0x4000C64C: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_4000C650:
    // 0x4000C650: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x4000C654: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x4000C658: bc1f        L_4000C66C
    if (!c1cs) {
        // 0x4000C65C: nop
    
            goto L_4000C66C;
    }
    // 0x4000C65C: nop

    // 0x4000C660: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4000C664: nop

    // 0x4000C668: sub.s       $f0, $f6, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f0.fl;
L_4000C66C:
    // 0x4000C66C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x4000C670: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4000C674: nop

    // 0x4000C678: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x4000C67C: nop

    // 0x4000C680: bc1f        L_4000C694
    if (!c1cs) {
        // 0x4000C684: lw          $t6, 0xB0($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XB0);
            goto L_4000C694;
    }
    // 0x4000C684: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x4000C688: jal         0x40001A8C
    // 0x4000C68C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_12;
    // 0x4000C68C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x4000C690: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
L_4000C694:
    // 0x4000C694: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x4000C698: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x4000C69C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x4000C6A0: slt         $at, $s1, $t7
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x4000C6A4: bne         $at, $zero, L_4000C5C8
    if (ctx->r1 != 0) {
        // 0x4000C6A8: nop
    
            goto L_4000C5C8;
    }
    // 0x4000C6A8: nop

    // 0x4000C6AC: b           L_4000C70C
    // 0x4000C6B0: nop

        goto L_4000C70C;
    // 0x4000C6B0: nop

    // 0x4000C6B4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_4000C6B8:
    // 0x4000C6B8: bne         $v0, $at, L_4000C70C
    if (ctx->r2 != ctx->r1) {
        // 0x4000C6BC: nop
    
            goto L_4000C70C;
    }
    // 0x4000C6BC: nop

    // 0x4000C6C0: lw          $t8, 0xDC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XDC);
    // 0x4000C6C4: addiu       $at, $zero, 0x93
    ctx->r1 = ADD32(0, 0X93);
    // 0x4000C6C8: bne         $t8, $at, L_4000C6EC
    if (ctx->r24 != ctx->r1) {
        // 0x4000C6CC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_4000C6EC;
    }
    // 0x4000C6CC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x4000C6D0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x4000C6D4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x4000C6D8: addiu       $a1, $zero, 0x8F
    ctx->r5 = ADD32(0, 0X8F);
    // 0x4000C6DC: jal         0x4000118C
    // 0x4000C6E0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_13;
    // 0x4000C6E0: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_13:
    // 0x4000C6E4: b           L_4000C70C
    // 0x4000C6E8: nop

        goto L_4000C70C;
    // 0x4000C6E8: nop

L_4000C6EC:
    // 0x4000C6EC: lw          $t9, 0xDC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XDC);
    // 0x4000C6F0: addiu       $at, $zero, 0x99
    ctx->r1 = ADD32(0, 0X99);
    // 0x4000C6F4: bne         $t9, $at, L_4000C70C
    if (ctx->r25 != ctx->r1) {
        // 0x4000C6F8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_4000C70C;
    }
    // 0x4000C6F8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x4000C6FC: jal         0x40001A8C
    // 0x4000C700: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_14;
    // 0x4000C700: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x4000C704: b           L_4000C8DC
    // 0x4000C708: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_4000C8DC;
    // 0x4000C708: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_4000C70C:
    // 0x4000C70C: jal         0x40009414
    // 0x4000C710: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_actor_main_9414(rdram, ctx);
        goto after_15;
    // 0x4000C710: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_15:
    // 0x4000C714: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x4000C718: lw          $t0, 0x18C($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X18C);
    // 0x4000C71C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x4000C720: blez        $t0, L_4000C81C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x4000C724: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_4000C81C;
    }
    // 0x4000C724: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x4000C728: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x4000C72C: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_4000C730:
    // 0x4000C730: lw          $t1, 0x1B0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1B0);
    // 0x4000C734: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x4000C738: bne         $t1, $at, L_4000C808
    if (ctx->r9 != ctx->r1) {
        // 0x4000C73C: nop
    
            goto L_4000C808;
    }
    // 0x4000C73C: nop

    // 0x4000C740: lw          $a0, 0x190($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X190);
    // 0x4000C744: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000C748: beq         $a0, $at, L_4000C808
    if (ctx->r4 == ctx->r1) {
        // 0x4000C74C: addiu       $a1, $zero, 0x29
        ctx->r5 = ADD32(0, 0X29);
            goto L_4000C808;
    }
    // 0x4000C74C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4000C750: jal         0x400006C4
    // 0x4000C754: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_16;
    // 0x4000C754: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    after_16:
    // 0x4000C758: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x4000C75C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x4000C760: bne         $t2, $at, L_4000C808
    if (ctx->r10 != ctx->r1) {
        // 0x4000C764: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_4000C808;
    }
    // 0x4000C764: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x4000C768: sw          $t3, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r11;
    // 0x4000C76C: lw          $t4, 0x90($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X90);
    // 0x4000C770: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x4000C774: andi        $t5, $t4, 0x2000
    ctx->r13 = ctx->r12 & 0X2000;
    // 0x4000C778: beq         $t5, $zero, L_4000C794
    if (ctx->r13 == 0) {
        // 0x4000C77C: addiu       $t6, $zero, 0x5
        ctx->r14 = ADD32(0, 0X5);
            goto L_4000C794;
    }
    // 0x4000C77C: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x4000C780: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x4000C784: jal         0x40001A8C
    // 0x4000C788: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_17;
    // 0x4000C788: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x4000C78C: b           L_4000C80C
    // 0x4000C790: lw          $t1, 0x18C($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X18C);
        goto L_4000C80C;
    // 0x4000C790: lw          $t1, 0x18C($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X18C);
L_4000C794:
    // 0x4000C794: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4000C798: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x4000C79C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4000C7A0: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x4000C7A4: swc1        $f20, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f20.u32l;
    // 0x4000C7A8: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x4000C7AC: sw          $t6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r14;
    // 0x4000C7B0: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x4000C7B4: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    // 0x4000C7B8: sw          $t7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r15;
    // 0x4000C7BC: lw          $t8, 0x190($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X190);
    // 0x4000C7C0: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x4000C7C4: addiu       $t0, $sp, 0x64
    ctx->r8 = ADD32(ctx->r29, 0X64);
    // 0x4000C7C8: sw          $t9, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r25;
    // 0x4000C7CC: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    // 0x4000C7D0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x4000C7D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4000C7D8: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    // 0x4000C7DC: jal         0x40001258
    // 0x4000C7E0: sw          $t8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r24;
    ovl_actor_main_1258(rdram, ctx);
        goto after_18;
    // 0x4000C7E0: sw          $t8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r24;
    after_18:
    // 0x4000C7E4: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x4000C7E8: nop

    // 0x4000C7EC: swc1        $f18, 0x60($s2)
    MEM_W(0X60, ctx->r18) = ctx->f18.u32l;
    // 0x4000C7F0: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x4000C7F4: nop

    // 0x4000C7F8: swc1        $f4, 0x64($s2)
    MEM_W(0X64, ctx->r18) = ctx->f4.u32l;
    // 0x4000C7FC: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x4000C800: nop

    // 0x4000C804: swc1        $f6, 0x68($s2)
    MEM_W(0X68, ctx->r18) = ctx->f6.u32l;
L_4000C808:
    // 0x4000C808: lw          $t1, 0x18C($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X18C);
L_4000C80C:
    // 0x4000C80C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x4000C810: slt         $at, $s1, $t1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x4000C814: bne         $at, $zero, L_4000C730
    if (ctx->r1 != 0) {
        // 0x4000C818: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_4000C730;
    }
    // 0x4000C818: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_4000C81C:
    // 0x4000C81C: lw          $t2, 0xDC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XDC);
    // 0x4000C820: nop

    // 0x4000C824: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x4000C828: bne         $at, $zero, L_4000C86C
    if (ctx->r1 != 0) {
        // 0x4000C82C: lw          $t6, 0xDC($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XDC);
            goto L_4000C86C;
    }
    // 0x4000C82C: lw          $t6, 0xDC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XDC);
    // 0x4000C830: lw          $t3, 0x90($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X90);
    // 0x4000C834: lw          $t5, 0xA0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA0);
    // 0x4000C838: andi        $t4, $t3, 0x2000
    ctx->r12 = ctx->r11 & 0X2000;
    // 0x4000C83C: bne         $t4, $zero, L_4000C84C
    if (ctx->r12 != 0) {
        // 0x4000C840: addiu       $a0, $s2, 0x18C
        ctx->r4 = ADD32(ctx->r18, 0X18C);
            goto L_4000C84C;
    }
    // 0x4000C840: addiu       $a0, $s2, 0x18C
    ctx->r4 = ADD32(ctx->r18, 0X18C);
    // 0x4000C844: beq         $t5, $zero, L_4000C85C
    if (ctx->r13 == 0) {
        // 0x4000C848: nop
    
            goto L_4000C85C;
    }
    // 0x4000C848: nop

L_4000C84C:
    // 0x4000C84C: jal         0x40009220
    // 0x4000C850: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    ovl_actor_main_9220(rdram, ctx);
        goto after_19;
    // 0x4000C850: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_19:
    // 0x4000C854: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000C858: bne         $v0, $at, L_4000C868
    if (ctx->r2 != ctx->r1) {
        // 0x4000C85C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_4000C868;
    }
L_4000C85C:
    // 0x4000C85C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x4000C860: jal         0x40001A8C
    // 0x4000C864: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_20;
    // 0x4000C864: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
L_4000C868:
    // 0x4000C868: lw          $t6, 0xDC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XDC);
L_4000C86C:
    // 0x4000C86C: nop

    // 0x4000C870: slti        $at, $t6, 0xB
    ctx->r1 = SIGNED(ctx->r14) < 0XB ? 1 : 0;
    // 0x4000C874: bne         $at, $zero, L_4000C8D8
    if (ctx->r1 != 0) {
        // 0x4000C878: lui         $at, 0x4002
        ctx->r1 = S32(0X4002 << 16);
            goto L_4000C8D8;
    }
    // 0x4000C878: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000C87C: lwc1        $f8, -0x1588($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1588);
    // 0x4000C880: lwc1        $f10, 0x38($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X38);
    // 0x4000C884: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4000C888: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x4000C88C: nop

    // 0x4000C890: bc1t        L_4000C8DC
    if (c1cs) {
        // 0x4000C894: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_4000C8DC;
    }
    // 0x4000C894: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x4000C898: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x4000C89C: jal         0x400006C4
    // 0x4000C8A0: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_21;
    // 0x4000C8A0: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_21:
    // 0x4000C8A4: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x4000C8A8: lwc1        $f14, 0x38($s2)
    ctx->f14.u32l = MEM_W(ctx->r18, 0X38);
    // 0x4000C8AC: jal         0x40009134
    // 0x4000C8B0: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    ovl_actor_main_9134(rdram, ctx);
        goto after_22;
    // 0x4000C8B0: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    after_22:
    // 0x4000C8B4: beq         $v0, $zero, L_4000C8D0
    if (ctx->r2 == 0) {
        // 0x4000C8B8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_4000C8D0;
    }
    // 0x4000C8B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x4000C8BC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x4000C8C0: jal         0x40001A8C
    // 0x4000C8C4: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_23;
    // 0x4000C8C4: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_23:
    // 0x4000C8C8: b           L_4000C8DC
    // 0x4000C8CC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_4000C8DC;
    // 0x4000C8CC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_4000C8D0:
    // 0x4000C8D0: jal         0x40001A8C
    // 0x4000C8D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_24;
    // 0x4000C8D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_24:
L_4000C8D8:
    // 0x4000C8D8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_4000C8DC:
    // 0x4000C8DC: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x4000C8E0: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x4000C8E4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x4000C8E8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x4000C8EC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x4000C8F0: jr          $ra
    // 0x4000C8F4: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x4000C8F4: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void ovl_actor_main_C8F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000C8F8: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x4000C8FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000C900: sltiu       $at, $t6, 0xE
    ctx->r1 = ctx->r14 < 0XE ? 1 : 0;
    // 0x4000C904: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000C908: beq         $at, $zero, L_4000C940
    if (ctx->r1 == 0) {
        // 0x4000C90C: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_4000C940;
    }
    // 0x4000C90C: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x4000C910: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x4000C914: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000C918: addu        $at, $at, $t6
    gpr jr_addend_4000C924 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x4000C91C: lw          $t6, -0x1584($at)
    ctx->r14 = ADD32(ctx->r1, -0X1584);
    // 0x4000C920: nop

    // 0x4000C924: jr          $t6
    // 0x4000C928: nop

    switch (jr_addend_4000C924 >> 2) {
        case 0: goto L_4000C93C; break;
        case 1: goto L_4000C940; break;
        case 2: goto L_4000C940; break;
        case 3: goto L_4000C934; break;
        case 4: goto L_4000C940; break;
        case 5: goto L_4000C940; break;
        case 6: goto L_4000C940; break;
        case 7: goto L_4000C940; break;
        case 8: goto L_4000C93C; break;
        case 9: goto L_4000C940; break;
        case 10: goto L_4000C93C; break;
        case 11: goto L_4000C940; break;
        case 12: goto L_4000C940; break;
        case 13: goto L_4000C92C; break;
        default: switch_error(__func__, 0x4000C924, 0x4001EA7C);
    }
    // 0x4000C928: nop

L_4000C92C:
    // 0x4000C92C: b           L_4000C940
    // 0x4000C930: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_4000C940;
    // 0x4000C930: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_4000C934:
    // 0x4000C934: b           L_4000C940
    // 0x4000C938: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
        goto L_4000C940;
    // 0x4000C938: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_4000C93C:
    // 0x4000C93C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_4000C940:
    // 0x4000C940: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x4000C944: beq         $v1, $at, L_4000C95C
    if (ctx->r3 == ctx->r1) {
        // 0x4000C948: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_4000C95C;
    }
    // 0x4000C948: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x4000C94C: jal         0x4000C3A0
    // 0x4000C950: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_actor_main_C3A0(rdram, ctx);
        goto after_0;
    // 0x4000C950: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x4000C954: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x4000C958: nop

L_4000C95C:
    // 0x4000C95C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000C960: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000C964: jr          $ra
    // 0x4000C968: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4000C968: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_C96C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000C96C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000C970: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000C974: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000C978: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x4000C97C: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x4000C980: bltz        $t7, L_4000C9B4
    if (SIGNED(ctx->r15) < 0) {
        // 0x4000C984: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_4000C9B4;
    }
    // 0x4000C984: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4000C988: jal         0x40009354
    // 0x4000C98C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_9354(rdram, ctx);
        goto after_0;
    // 0x4000C98C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000C990: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000C994: beq         $v0, $zero, L_4000C9B8
    if (ctx->r2 == 0) {
        // 0x4000C998: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_4000C9B8;
    }
    // 0x4000C998: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x4000C99C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x4000C9A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000C9A4: beq         $v0, $at, L_4000C9B4
    if (ctx->r2 == ctx->r1) {
        // 0x4000C9A8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_4000C9B4;
    }
    // 0x4000C9A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4000C9AC: bne         $v0, $at, L_4000C9C4
    if (ctx->r2 != ctx->r1) {
        // 0x4000C9B0: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_4000C9C4;
    }
    // 0x4000C9B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_4000C9B4:
    // 0x4000C9B4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
L_4000C9B8:
    // 0x4000C9B8: sw          $t8, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r24;
    // 0x4000C9BC: b           L_4000C9EC
    // 0x4000C9C0: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
        goto L_4000C9EC;
    // 0x4000C9C0: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
L_4000C9C4:
    // 0x4000C9C4: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x4000C9C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000C9CC: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x4000C9D0: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    // 0x4000C9D4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4000C9D8: jal         0x40006EEC
    // 0x4000C9DC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EEC(rdram, ctx);
        goto after_1;
    // 0x4000C9DC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x4000C9E0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000C9E4: jal         0x4000947C
    // 0x4000C9E8: nop

    ovl_actor_main_947C(rdram, ctx);
        goto after_2;
    // 0x4000C9E8: nop

    after_2:
L_4000C9EC:
    // 0x4000C9EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000C9F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000C9F4: jr          $ra
    // 0x4000C9F8: nop

    return;
    // 0x4000C9F8: nop

;}
RECOMP_FUNC void ovl_actor_main_C9FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000C9FC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x4000CA00: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4000CA04: bne         $v0, $at, L_4000CA24
    if (ctx->r2 != ctx->r1) {
        // 0x4000CA08: addiu       $t6, $zero, 0xA
        ctx->r14 = ADD32(0, 0XA);
            goto L_4000CA24;
    }
    // 0x4000CA08: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x4000CA0C: lw          $t7, 0x90($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X90);
    // 0x4000CA10: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x4000CA14: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x4000CA18: sw          $t6, 0x36C($a0)
    MEM_W(0X36C, ctx->r4) = ctx->r14;
    // 0x4000CA1C: jr          $ra
    // 0x4000CA20: sw          $t8, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r24;
    return;
    // 0x4000CA20: sw          $t8, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r24;
L_4000CA24:
    // 0x4000CA24: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x4000CA28: bne         $v0, $at, L_4000CA44
    if (ctx->r2 != ctx->r1) {
        // 0x4000CA2C: addiu       $t9, $zero, 0xA
        ctx->r25 = ADD32(0, 0XA);
            goto L_4000CA44;
    }
    // 0x4000CA2C: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x4000CA30: lw          $t0, 0x90($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X90);
    // 0x4000CA34: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x4000CA38: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x4000CA3C: sw          $t9, 0x364($a0)
    MEM_W(0X364, ctx->r4) = ctx->r25;
    // 0x4000CA40: sw          $t1, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r9;
L_4000CA44:
    // 0x4000CA44: jr          $ra
    // 0x4000CA48: nop

    return;
    // 0x4000CA48: nop

;}
RECOMP_FUNC void ovl_actor_main_CA4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000CA4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000CA50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000CA54: jal         0x4000946C
    // 0x4000CA58: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_946C(rdram, ctx);
        goto after_0;
    // 0x4000CA58: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000CA5C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4000CA60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000CA64: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000CA68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4000CA6C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4000CA70: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4000CA74: jal         0x40006EB8
    // 0x4000CA78: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_1;
    // 0x4000CA78: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x4000CA7C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000CA80: addiu       $at, $zero, -0x2001
    ctx->r1 = ADD32(0, -0X2001);
    // 0x4000CA84: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000CA88: nop

    // 0x4000CA8C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x4000CA90: jal         0x4000C9FC
    // 0x4000CA94: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
    ovl_actor_main_C9FC(rdram, ctx);
        goto after_2;
    // 0x4000CA94: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
    after_2:
    // 0x4000CA98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000CA9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000CAA0: jr          $ra
    // 0x4000CAA4: nop

    return;
    // 0x4000CAA4: nop

;}
RECOMP_FUNC void ovl_actor_main_CAA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000CAA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000CAAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000CAB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000CAB4: bne         $a1, $at, L_4000CAD8
    if (ctx->r5 != ctx->r1) {
        // 0x4000CAB8: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_4000CAD8;
    }
    // 0x4000CAB8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4000CABC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x4000CAC0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000CAC4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000CAC8: jal         0x40008D20
    // 0x4000CACC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4000CACC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4000CAD0: b           L_4000CAF4
    // 0x4000CAD4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_4000CAF4;
    // 0x4000CAD4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_4000CAD8:
    // 0x4000CAD8: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x4000CADC: bne         $a1, $at, L_4000CAF4
    if (ctx->r5 != ctx->r1) {
        // 0x4000CAE0: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_4000CAF4;
    }
    // 0x4000CAE0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000CAE4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000CAE8: jal         0x40001A8C
    // 0x4000CAEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x4000CAEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x4000CAF0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_4000CAF4:
    // 0x4000CAF4: jal         0x40009BB0
    // 0x4000CAF8: nop

    ovl_actor_main_9BB0(rdram, ctx);
        goto after_2;
    // 0x4000CAF8: nop

    after_2:
    // 0x4000CAFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000CB00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000CB04: jr          $ra
    // 0x4000CB08: nop

    return;
    // 0x4000CB08: nop

;}
RECOMP_FUNC void ovl_actor_main_CB0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000CB0C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4000CB10: bne         $a1, $at, L_4000CB20
    if (ctx->r5 != ctx->r1) {
        // 0x4000CB14: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_4000CB20;
    }
    // 0x4000CB14: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x4000CB18: slti        $at, $a2, 0x15
    ctx->r1 = SIGNED(ctx->r6) < 0X15 ? 1 : 0;
    // 0x4000CB1C: beq         $at, $zero, L_4000CB2C
    if (ctx->r1 == 0) {
        // 0x4000CB20: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_4000CB2C;
    }
L_4000CB20:
    // 0x4000CB20: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000CB24: bne         $a1, $at, L_4000CB34
    if (ctx->r5 != ctx->r1) {
        // 0x4000CB28: addiu       $v0, $zero, 0x1F
        ctx->r2 = ADD32(0, 0X1F);
            goto L_4000CB34;
    }
    // 0x4000CB28: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
L_4000CB2C:
    // 0x4000CB2C: jr          $ra
    // 0x4000CB30: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x4000CB30: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_4000CB34:
    // 0x4000CB34: jr          $ra
    // 0x4000CB38: nop

    return;
    // 0x4000CB38: nop

;}
RECOMP_FUNC void ovl_actor_main_CB3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000CB3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000CB40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000CB44: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x4000CB48: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4000CB4C: bne         $t6, $at, L_4000CB68
    if (ctx->r14 != ctx->r1) {
        // 0x4000CB50: sw          $zero, 0x314($a0)
        MEM_W(0X314, ctx->r4) = 0;
            goto L_4000CB68;
    }
    // 0x4000CB50: sw          $zero, 0x314($a0)
    MEM_W(0X314, ctx->r4) = 0;
    // 0x4000CB54: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    // 0x4000CB58: jal         0x40009000
    // 0x4000CB5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_9000(rdram, ctx);
        goto after_0;
    // 0x4000CB5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x4000CB60: b           L_4000CB78
    // 0x4000CB64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4000CB78;
    // 0x4000CB64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000CB68:
    // 0x4000CB68: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x4000CB6C: jal         0x40009000
    // 0x4000CB70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_9000(rdram, ctx);
        goto after_1;
    // 0x4000CB70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x4000CB74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000CB78:
    // 0x4000CB78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000CB7C: jr          $ra
    // 0x4000CB80: nop

    return;
    // 0x4000CB80: nop

;}
RECOMP_FUNC void ovl_actor_main_CB84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000CB84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000CB88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000CB8C: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x4000CB90: jal         0x40011944
    // 0x4000CB94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_11944(rdram, ctx);
        goto after_0;
    // 0x4000CB94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000CB98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000CB9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4000CBA0: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
    // 0x4000CBA4: jal         0x40001A8C
    // 0x4000CBA8: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x4000CBA8: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    after_1:
    // 0x4000CBAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000CBB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000CBB4: jr          $ra
    // 0x4000CBB8: nop

    return;
    // 0x4000CBB8: nop

;}
RECOMP_FUNC void ovl_actor_main_CBBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000CBBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000CBC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000CBC4: bne         $a1, $at, L_4000CBE8
    if (ctx->r5 != ctx->r1) {
        // 0x4000CBC8: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_4000CBE8;
    }
    // 0x4000CBC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000CBCC: addiu       $a1, $zero, 0x19B
    ctx->r5 = ADD32(0, 0X19B);
    // 0x4000CBD0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000CBD4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000CBD8: jal         0x40008D64
    // 0x4000CBDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x4000CBDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4000CBE0: b           L_4000CC00
    // 0x4000CBE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000CC00;
    // 0x4000CBE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000CBE8:
    // 0x4000CBE8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x4000CBEC: bne         $a1, $at, L_4000CC00
    if (ctx->r5 != ctx->r1) {
        // 0x4000CBF0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4000CC00;
    }
    // 0x4000CBF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000CBF4: jal         0x4000CB84
    // 0x4000CBF8: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_1;
    // 0x4000CBF8: nop

    after_1:
    // 0x4000CBFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000CC00:
    // 0x4000CC00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000CC04: jr          $ra
    // 0x4000CC08: nop

    return;
    // 0x4000CC08: nop

;}
RECOMP_FUNC void ovl_actor_main_CC0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000CC0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000CC10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000CC14: bne         $a1, $at, L_4000CC38
    if (ctx->r5 != ctx->r1) {
        // 0x4000CC18: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_4000CC38;
    }
    // 0x4000CC18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000CC1C: addiu       $a1, $zero, 0x1A5
    ctx->r5 = ADD32(0, 0X1A5);
    // 0x4000CC20: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000CC24: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000CC28: jal         0x40008D64
    // 0x4000CC2C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x4000CC2C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4000CC30: b           L_4000CC6C
    // 0x4000CC34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000CC6C;
    // 0x4000CC34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000CC38:
    // 0x4000CC38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4000CC3C: bne         $a1, $at, L_4000CC58
    if (ctx->r5 != ctx->r1) {
        // 0x4000CC40: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_4000CC58;
    }
    // 0x4000CC40: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x4000CC44: jal         0x40008EF8
    // 0x4000CC48: addiu       $a1, $zero, 0x5D3
    ctx->r5 = ADD32(0, 0X5D3);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x4000CC48: addiu       $a1, $zero, 0x5D3
    ctx->r5 = ADD32(0, 0X5D3);
    after_1:
    // 0x4000CC4C: b           L_4000CC6C
    // 0x4000CC50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000CC6C;
    // 0x4000CC50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000CC54: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
L_4000CC58:
    // 0x4000CC58: bne         $a1, $at, L_4000CC6C
    if (ctx->r5 != ctx->r1) {
        // 0x4000CC5C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4000CC6C;
    }
    // 0x4000CC5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000CC60: jal         0x4000CB84
    // 0x4000CC64: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_2;
    // 0x4000CC64: nop

    after_2:
    // 0x4000CC68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000CC6C:
    // 0x4000CC6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000CC70: jr          $ra
    // 0x4000CC74: nop

    return;
    // 0x4000CC74: nop

;}
RECOMP_FUNC void ovl_actor_main_CC78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000CC78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000CC7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000CC80: bne         $a1, $at, L_4000CCB8
    if (ctx->r5 != ctx->r1) {
        // 0x4000CC84: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_4000CCB8;
    }
    // 0x4000CC84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000CC88: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x4000CC8C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x4000CC90: addiu       $a1, $zero, 0x189
    ctx->r5 = ADD32(0, 0X189);
    // 0x4000CC94: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000CC98: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000CC9C: jal         0x40008D64
    // 0x4000CCA0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x4000CCA0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000CCA4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000CCA8: jal         0x40008EF8
    // 0x4000CCAC: addiu       $a1, $zero, 0x5D4
    ctx->r5 = ADD32(0, 0X5D4);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x4000CCAC: addiu       $a1, $zero, 0x5D4
    ctx->r5 = ADD32(0, 0X5D4);
    after_1:
    // 0x4000CCB0: b           L_4000CCD0
    // 0x4000CCB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000CCD0;
    // 0x4000CCB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000CCB8:
    // 0x4000CCB8: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x4000CCBC: bne         $a1, $at, L_4000CCD0
    if (ctx->r5 != ctx->r1) {
        // 0x4000CCC0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4000CCD0;
    }
    // 0x4000CCC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000CCC4: jal         0x4000CB84
    // 0x4000CCC8: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_2;
    // 0x4000CCC8: nop

    after_2:
    // 0x4000CCCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000CCD0:
    // 0x4000CCD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000CCD4: jr          $ra
    // 0x4000CCD8: nop

    return;
    // 0x4000CCD8: nop

;}
RECOMP_FUNC void ovl_actor_main_CCDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000CCDC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4000CCE0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4000CCE4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000CCE8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000CCEC: bne         $a1, $at, L_4000D0B4
    if (ctx->r5 != ctx->r1) {
        // 0x4000CCF0: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4000D0B4;
    }
    // 0x4000CCF0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000CCF4: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x4000CCF8: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x4000CCFC: bne         $v0, $at, L_4000CD28
    if (ctx->r2 != ctx->r1) {
        // 0x4000CD00: addiu       $a1, $zero, 0x19F
        ctx->r5 = ADD32(0, 0X19F);
            goto L_4000CD28;
    }
    // 0x4000CD00: addiu       $a1, $zero, 0x19F
    ctx->r5 = ADD32(0, 0X19F);
    // 0x4000CD04: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000CD08: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000CD0C: jal         0x40008D64
    // 0x4000CD10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x4000CD10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4000CD14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CD18: jal         0x40008EF8
    // 0x4000CD1C: addiu       $a1, $zero, 0x5DC
    ctx->r5 = ADD32(0, 0X5DC);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x4000CD1C: addiu       $a1, $zero, 0x5DC
    ctx->r5 = ADD32(0, 0X5DC);
    after_1:
    // 0x4000CD20: b           L_4000D0B8
    // 0x4000CD24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000D0B8;
    // 0x4000CD24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000CD28:
    // 0x4000CD28: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x4000CD2C: bne         $v0, $at, L_4000CD5C
    if (ctx->r2 != ctx->r1) {
        // 0x4000CD30: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000CD5C;
    }
    // 0x4000CD30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CD34: addiu       $a1, $zero, 0x193
    ctx->r5 = ADD32(0, 0X193);
    // 0x4000CD38: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000CD3C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000CD40: jal         0x40008D64
    // 0x4000CD44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_2;
    // 0x4000CD44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x4000CD48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CD4C: jal         0x40008EF8
    // 0x4000CD50: addiu       $a1, $zero, 0x5D4
    ctx->r5 = ADD32(0, 0X5D4);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_3;
    // 0x4000CD50: addiu       $a1, $zero, 0x5D4
    ctx->r5 = ADD32(0, 0X5D4);
    after_3:
    // 0x4000CD54: b           L_4000D0B8
    // 0x4000CD58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000D0B8;
    // 0x4000CD58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000CD5C:
    // 0x4000CD5C: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x4000CD60: bne         $v0, $at, L_4000CD90
    if (ctx->r2 != ctx->r1) {
        // 0x4000CD64: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000CD90;
    }
    // 0x4000CD64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CD68: addiu       $a1, $zero, 0x194
    ctx->r5 = ADD32(0, 0X194);
    // 0x4000CD6C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000CD70: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000CD74: jal         0x40008D64
    // 0x4000CD78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_4;
    // 0x4000CD78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x4000CD7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CD80: jal         0x40008EF8
    // 0x4000CD84: addiu       $a1, $zero, 0x5D5
    ctx->r5 = ADD32(0, 0X5D5);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_5;
    // 0x4000CD84: addiu       $a1, $zero, 0x5D5
    ctx->r5 = ADD32(0, 0X5D5);
    after_5:
    // 0x4000CD88: b           L_4000D0B8
    // 0x4000CD8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000D0B8;
    // 0x4000CD8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000CD90:
    // 0x4000CD90: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x4000CD94: bne         $v0, $at, L_4000CDC4
    if (ctx->r2 != ctx->r1) {
        // 0x4000CD98: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000CDC4;
    }
    // 0x4000CD98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CD9C: addiu       $a1, $zero, 0x196
    ctx->r5 = ADD32(0, 0X196);
    // 0x4000CDA0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000CDA4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000CDA8: jal         0x40008D64
    // 0x4000CDAC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_6;
    // 0x4000CDAC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x4000CDB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CDB4: jal         0x40008EF8
    // 0x4000CDB8: addiu       $a1, $zero, 0x5D4
    ctx->r5 = ADD32(0, 0X5D4);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_7;
    // 0x4000CDB8: addiu       $a1, $zero, 0x5D4
    ctx->r5 = ADD32(0, 0X5D4);
    after_7:
    // 0x4000CDBC: b           L_4000D0B8
    // 0x4000CDC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000D0B8;
    // 0x4000CDC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000CDC4:
    // 0x4000CDC4: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x4000CDC8: bne         $v0, $at, L_4000CDFC
    if (ctx->r2 != ctx->r1) {
        // 0x4000CDCC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000CDFC;
    }
    // 0x4000CDCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CDD0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x4000CDD4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x4000CDD8: addiu       $a1, $zero, 0x197
    ctx->r5 = ADD32(0, 0X197);
    // 0x4000CDDC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000CDE0: jal         0x40008D64
    // 0x4000CDE4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_8;
    // 0x4000CDE4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_8:
    // 0x4000CDE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CDEC: jal         0x40008EF8
    // 0x4000CDF0: addiu       $a1, $zero, 0x5D8
    ctx->r5 = ADD32(0, 0X5D8);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_9;
    // 0x4000CDF0: addiu       $a1, $zero, 0x5D8
    ctx->r5 = ADD32(0, 0X5D8);
    after_9:
    // 0x4000CDF4: b           L_4000D0B8
    // 0x4000CDF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000D0B8;
    // 0x4000CDF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000CDFC:
    // 0x4000CDFC: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x4000CE00: bne         $v0, $at, L_4000CE54
    if (ctx->r2 != ctx->r1) {
        // 0x4000CE04: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000CE54;
    }
    // 0x4000CE04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CE08: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x4000CE0C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x4000CE10: addiu       $a1, $zero, 0x199
    ctx->r5 = ADD32(0, 0X199);
    // 0x4000CE14: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000CE18: jal         0x40008D64
    // 0x4000CE1C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_10;
    // 0x4000CE1C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_10:
    // 0x4000CE20: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4000CE24: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000CE28: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x4000CE2C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4000CE30: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x4000CE34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CE38: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x4000CE3C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4000CE40: swc1        $f10, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f10.u32l;
    // 0x4000CE44: jal         0x40001A8C
    // 0x4000CE48: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_11;
    // 0x4000CE48: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    after_11:
    // 0x4000CE4C: b           L_4000D0B8
    // 0x4000CE50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000D0B8;
    // 0x4000CE50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000CE54:
    // 0x4000CE54: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x4000CE58: bne         $v0, $at, L_4000CE88
    if (ctx->r2 != ctx->r1) {
        // 0x4000CE5C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000CE88;
    }
    // 0x4000CE5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CE60: addiu       $a1, $zero, 0x19A
    ctx->r5 = ADD32(0, 0X19A);
    // 0x4000CE64: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000CE68: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000CE6C: jal         0x40008D64
    // 0x4000CE70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_12;
    // 0x4000CE70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_12:
    // 0x4000CE74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CE78: jal         0x40008EF8
    // 0x4000CE7C: addiu       $a1, $zero, 0x5D9
    ctx->r5 = ADD32(0, 0X5D9);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_13;
    // 0x4000CE7C: addiu       $a1, $zero, 0x5D9
    ctx->r5 = ADD32(0, 0X5D9);
    after_13:
    // 0x4000CE80: b           L_4000D0B8
    // 0x4000CE84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000D0B8;
    // 0x4000CE84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000CE88:
    // 0x4000CE88: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x4000CE8C: bne         $v0, $at, L_4000CEC0
    if (ctx->r2 != ctx->r1) {
        // 0x4000CE90: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000CEC0;
    }
    // 0x4000CE90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CE94: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x4000CE98: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x4000CE9C: addiu       $a1, $zero, 0x1B2
    ctx->r5 = ADD32(0, 0X1B2);
    // 0x4000CEA0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000CEA4: jal         0x40008D64
    // 0x4000CEA8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_14;
    // 0x4000CEA8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_14:
    // 0x4000CEAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CEB0: jal         0x40008EF8
    // 0x4000CEB4: addiu       $a1, $zero, 0x5E2
    ctx->r5 = ADD32(0, 0X5E2);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_15;
    // 0x4000CEB4: addiu       $a1, $zero, 0x5E2
    ctx->r5 = ADD32(0, 0X5E2);
    after_15:
    // 0x4000CEB8: b           L_4000D0B8
    // 0x4000CEBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000D0B8;
    // 0x4000CEBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000CEC0:
    // 0x4000CEC0: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x4000CEC4: bne         $v0, $at, L_4000CEF8
    if (ctx->r2 != ctx->r1) {
        // 0x4000CEC8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000CEF8;
    }
    // 0x4000CEC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CECC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x4000CED0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x4000CED4: addiu       $a1, $zero, 0x1AD
    ctx->r5 = ADD32(0, 0X1AD);
    // 0x4000CED8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000CEDC: jal         0x40008D64
    // 0x4000CEE0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_16;
    // 0x4000CEE0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_16:
    // 0x4000CEE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CEE8: jal         0x40008EF8
    // 0x4000CEEC: addiu       $a1, $zero, 0x5E0
    ctx->r5 = ADD32(0, 0X5E0);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_17;
    // 0x4000CEEC: addiu       $a1, $zero, 0x5E0
    ctx->r5 = ADD32(0, 0X5E0);
    after_17:
    // 0x4000CEF0: b           L_4000D0B8
    // 0x4000CEF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000D0B8;
    // 0x4000CEF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000CEF8:
    // 0x4000CEF8: addiu       $at, $zero, 0x31
    ctx->r1 = ADD32(0, 0X31);
    // 0x4000CEFC: bne         $v0, $at, L_4000CF2C
    if (ctx->r2 != ctx->r1) {
        // 0x4000CF00: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000CF2C;
    }
    // 0x4000CF00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CF04: addiu       $a1, $zero, 0x1A3
    ctx->r5 = ADD32(0, 0X1A3);
    // 0x4000CF08: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000CF0C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000CF10: jal         0x40008D64
    // 0x4000CF14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_18;
    // 0x4000CF14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_18:
    // 0x4000CF18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CF1C: jal         0x40008EF8
    // 0x4000CF20: addiu       $a1, $zero, 0x5DF
    ctx->r5 = ADD32(0, 0X5DF);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_19;
    // 0x4000CF20: addiu       $a1, $zero, 0x5DF
    ctx->r5 = ADD32(0, 0X5DF);
    after_19:
    // 0x4000CF24: b           L_4000D0B8
    // 0x4000CF28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000D0B8;
    // 0x4000CF28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000CF2C:
    // 0x4000CF2C: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x4000CF30: bne         $v0, $at, L_4000CF64
    if (ctx->r2 != ctx->r1) {
        // 0x4000CF34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000CF64;
    }
    // 0x4000CF34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CF38: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x4000CF3C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x4000CF40: addiu       $a1, $zero, 0x19C
    ctx->r5 = ADD32(0, 0X19C);
    // 0x4000CF44: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000CF48: jal         0x40008D64
    // 0x4000CF4C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_20;
    // 0x4000CF4C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_20:
    // 0x4000CF50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CF54: jal         0x40008EF8
    // 0x4000CF58: addiu       $a1, $zero, 0x5DA
    ctx->r5 = ADD32(0, 0X5DA);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_21;
    // 0x4000CF58: addiu       $a1, $zero, 0x5DA
    ctx->r5 = ADD32(0, 0X5DA);
    after_21:
    // 0x4000CF5C: b           L_4000D0B8
    // 0x4000CF60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000D0B8;
    // 0x4000CF60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000CF64:
    // 0x4000CF64: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x4000CF68: bne         $v0, $at, L_4000CF98
    if (ctx->r2 != ctx->r1) {
        // 0x4000CF6C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000CF98;
    }
    // 0x4000CF6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CF70: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x4000CF74: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x4000CF78: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4000CF7C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000CF80: jal         0x40008D20
    // 0x4000CF84: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D20(rdram, ctx);
        goto after_22;
    // 0x4000CF84: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_22:
    // 0x4000CF88: jal         0x40010D48
    // 0x4000CF8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_10D48(rdram, ctx);
        goto after_23;
    // 0x4000CF8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x4000CF90: b           L_4000D0B8
    // 0x4000CF94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000D0B8;
    // 0x4000CF94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000CF98:
    // 0x4000CF98: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
    // 0x4000CF9C: bne         $v0, $at, L_4000CFCC
    if (ctx->r2 != ctx->r1) {
        // 0x4000CFA0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000CFCC;
    }
    // 0x4000CFA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CFA4: addiu       $a1, $zero, 0x19E
    ctx->r5 = ADD32(0, 0X19E);
    // 0x4000CFA8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000CFAC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000CFB0: jal         0x40008D64
    // 0x4000CFB4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_24;
    // 0x4000CFB4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_24:
    // 0x4000CFB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CFBC: jal         0x40008EF8
    // 0x4000CFC0: addiu       $a1, $zero, 0x5DB
    ctx->r5 = ADD32(0, 0X5DB);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_25;
    // 0x4000CFC0: addiu       $a1, $zero, 0x5DB
    ctx->r5 = ADD32(0, 0X5DB);
    after_25:
    // 0x4000CFC4: b           L_4000D0B8
    // 0x4000CFC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000D0B8;
    // 0x4000CFC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000CFCC:
    // 0x4000CFCC: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x4000CFD0: bne         $v0, $at, L_4000CFF4
    if (ctx->r2 != ctx->r1) {
        // 0x4000CFD4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000CFF4;
    }
    // 0x4000CFD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000CFD8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4000CFDC: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x4000CFE0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x4000CFE4: jal         0x40008D20
    // 0x4000CFE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_26;
    // 0x4000CFE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_26:
    // 0x4000CFEC: b           L_4000D0B8
    // 0x4000CFF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000D0B8;
    // 0x4000CFF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000CFF4:
    // 0x4000CFF4: addiu       $at, $zero, 0x3E
    ctx->r1 = ADD32(0, 0X3E);
    // 0x4000CFF8: bne         $v0, $at, L_4000D01C
    if (ctx->r2 != ctx->r1) {
        // 0x4000CFFC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000D01C;
    }
    // 0x4000CFFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000D000: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x4000D004: lui         $a2, 0x41D0
    ctx->r6 = S32(0X41D0 << 16);
    // 0x4000D008: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000D00C: jal         0x40008D20
    // 0x4000D010: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_27;
    // 0x4000D010: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_27:
    // 0x4000D014: b           L_4000D0B8
    // 0x4000D018: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000D0B8;
    // 0x4000D018: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000D01C:
    // 0x4000D01C: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x4000D020: bne         $v0, $at, L_4000D044
    if (ctx->r2 != ctx->r1) {
        // 0x4000D024: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000D044;
    }
    // 0x4000D024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000D028: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4000D02C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000D030: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000D034: jal         0x40008D20
    // 0x4000D038: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_28;
    // 0x4000D038: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_28:
    // 0x4000D03C: b           L_4000D0B8
    // 0x4000D040: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000D0B8;
    // 0x4000D040: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000D044:
    // 0x4000D044: addiu       $at, $zero, 0x41
    ctx->r1 = ADD32(0, 0X41);
    // 0x4000D048: bne         $v0, $at, L_4000D08C
    if (ctx->r2 != ctx->r1) {
        // 0x4000D04C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000D08C;
    }
    // 0x4000D04C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000D050: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x4000D054: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x4000D058: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4000D05C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000D060: jal         0x40008D20
    // 0x4000D064: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D20(rdram, ctx);
        goto after_29;
    // 0x4000D064: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_29:
    // 0x4000D068: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000D06C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000D070: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4000D074: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4000D078: lui         $a3, 0x432A
    ctx->r7 = S32(0X432A << 16);
    // 0x4000D07C: jal         0x40009044
    // 0x4000D080: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_9044(rdram, ctx);
        goto after_30;
    // 0x4000D080: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_30:
    // 0x4000D084: b           L_4000D0B8
    // 0x4000D088: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4000D0B8;
    // 0x4000D088: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000D08C:
    // 0x4000D08C: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x4000D090: bne         $v0, $at, L_4000D0B4
    if (ctx->r2 != ctx->r1) {
        // 0x4000D094: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000D0B4;
    }
    // 0x4000D094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000D098: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000D09C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x4000D0A0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4000D0A4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x4000D0A8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4000D0AC: jal         0x40008D20
    // 0x4000D0B0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D20(rdram, ctx);
        goto after_31;
    // 0x4000D0B0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_31:
L_4000D0B4:
    // 0x4000D0B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000D0B8:
    // 0x4000D0B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4000D0BC: jr          $ra
    // 0x4000D0C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4000D0C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_D0C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D0C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000D0C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000D0CC: bne         $a1, $at, L_4000D100
    if (ctx->r5 != ctx->r1) {
        // 0x4000D0D0: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_4000D100;
    }
    // 0x4000D0D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000D0D4: addiu       $a1, $zero, 0x1A1
    ctx->r5 = ADD32(0, 0X1A1);
    // 0x4000D0D8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000D0DC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000D0E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4000D0E4: jal         0x40008D64
    // 0x4000D0E8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x4000D0E8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000D0EC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000D0F0: jal         0x40008EF8
    // 0x4000D0F4: addiu       $a1, $zero, 0x5DD
    ctx->r5 = ADD32(0, 0X5DD);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x4000D0F4: addiu       $a1, $zero, 0x5DD
    ctx->r5 = ADD32(0, 0X5DD);
    after_1:
    // 0x4000D0F8: b           L_4000D118
    // 0x4000D0FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000D118;
    // 0x4000D0FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000D100:
    // 0x4000D100: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x4000D104: bne         $a1, $at, L_4000D118
    if (ctx->r5 != ctx->r1) {
        // 0x4000D108: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4000D118;
    }
    // 0x4000D108: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000D10C: jal         0x4000CB84
    // 0x4000D110: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_2;
    // 0x4000D110: nop

    after_2:
    // 0x4000D114: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000D118:
    // 0x4000D118: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000D11C: jr          $ra
    // 0x4000D120: nop

    return;
    // 0x4000D120: nop

;}
RECOMP_FUNC void ovl_actor_main_D124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D124: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000D128: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000D12C: bne         $a1, $at, L_4000D160
    if (ctx->r5 != ctx->r1) {
        // 0x4000D130: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_4000D160;
    }
    // 0x4000D130: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000D134: addiu       $a1, $zero, 0x195
    ctx->r5 = ADD32(0, 0X195);
    // 0x4000D138: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000D13C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000D140: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4000D144: jal         0x40008D64
    // 0x4000D148: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x4000D148: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000D14C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000D150: jal         0x40008EF8
    // 0x4000D154: addiu       $a1, $zero, 0x5D6
    ctx->r5 = ADD32(0, 0X5D6);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x4000D154: addiu       $a1, $zero, 0x5D6
    ctx->r5 = ADD32(0, 0X5D6);
    after_1:
    // 0x4000D158: b           L_4000D178
    // 0x4000D15C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000D178;
    // 0x4000D15C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000D160:
    // 0x4000D160: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x4000D164: bne         $a1, $at, L_4000D178
    if (ctx->r5 != ctx->r1) {
        // 0x4000D168: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4000D178;
    }
    // 0x4000D168: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000D16C: jal         0x4000CB84
    // 0x4000D170: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_2;
    // 0x4000D170: nop

    after_2:
    // 0x4000D174: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000D178:
    // 0x4000D178: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000D17C: jr          $ra
    // 0x4000D180: nop

    return;
    // 0x4000D180: nop

;}
RECOMP_FUNC void ovl_actor_main_D184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D184: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000D188: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000D18C: bne         $a1, $at, L_4000D1B0
    if (ctx->r5 != ctx->r1) {
        // 0x4000D190: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_4000D1B0;
    }
    // 0x4000D190: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000D194: addiu       $a1, $zero, 0x1A4
    ctx->r5 = ADD32(0, 0X1A4);
    // 0x4000D198: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000D19C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000D1A0: jal         0x40008D64
    // 0x4000D1A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x4000D1A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4000D1A8: b           L_4000D1C8
    // 0x4000D1AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000D1C8;
    // 0x4000D1AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000D1B0:
    // 0x4000D1B0: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x4000D1B4: bne         $a1, $at, L_4000D1C8
    if (ctx->r5 != ctx->r1) {
        // 0x4000D1B8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4000D1C8;
    }
    // 0x4000D1B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000D1BC: jal         0x4000CB84
    // 0x4000D1C0: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_1;
    // 0x4000D1C0: nop

    after_1:
    // 0x4000D1C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000D1C8:
    // 0x4000D1C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000D1CC: jr          $ra
    // 0x4000D1D0: nop

    return;
    // 0x4000D1D0: nop

;}
RECOMP_FUNC void ovl_actor_main_D1D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D1D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000D1D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000D1DC: lw          $a1, 0xC0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC0);
    // 0x4000D1E0: jal         0x40011944
    // 0x4000D1E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_11944(rdram, ctx);
        goto after_0;
    // 0x4000D1E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000D1E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000D1EC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x4000D1F0: sw          $t6, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r14;
    // 0x4000D1F4: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
    // 0x4000D1F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000D1FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000D200: jr          $ra
    // 0x4000D204: nop

    return;
    // 0x4000D204: nop

;}
RECOMP_FUNC void ovl_actor_main_D208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D208: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4000D20C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4000D210: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000D214: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000D218: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000D21C: beq         $a1, $at, L_4000D238
    if (ctx->r5 == ctx->r1) {
        // 0x4000D220: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_4000D238;
    }
    // 0x4000D220: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x4000D224: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x4000D228: beq         $a1, $at, L_4000D264
    if (ctx->r5 == ctx->r1) {
        // 0x4000D22C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000D264;
    }
    // 0x4000D22C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000D230: b           L_4000D274
    // 0x4000D234: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
        goto L_4000D274;
    // 0x4000D234: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_4000D238:
    // 0x4000D238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000D23C: addiu       $a1, $zero, 0x1A0
    ctx->r5 = ADD32(0, 0X1A0);
    // 0x4000D240: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000D244: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000D248: jal         0x40008D64
    // 0x4000D24C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x4000D24C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4000D250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000D254: jal         0x40008EF8
    // 0x4000D258: addiu       $a1, $zero, 0x5D4
    ctx->r5 = ADD32(0, 0X5D4);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x4000D258: addiu       $a1, $zero, 0x5D4
    ctx->r5 = ADD32(0, 0X5D4);
    after_1:
    // 0x4000D25C: b           L_4000D274
    // 0x4000D260: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
        goto L_4000D274;
    // 0x4000D260: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_4000D264:
    // 0x4000D264: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x4000D268: jal         0x4001073C
    // 0x4000D26C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_actor_main_1073C(rdram, ctx);
        goto after_2;
    // 0x4000D26C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_2:
    // 0x4000D270: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_4000D274:
    // 0x4000D274: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x4000D278: bne         $t7, $at, L_4000D2B4
    if (ctx->r15 != ctx->r1) {
        // 0x4000D27C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_4000D2B4;
    }
    // 0x4000D27C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4000D280: lhu         $t8, 0x20($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X20);
    // 0x4000D284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000D288: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x4000D28C: bne         $t9, $zero, L_4000D2A8
    if (ctx->r25 != 0) {
        // 0x4000D290: lui         $a1, 0xBF80
        ctx->r5 = S32(0XBF80 << 16);
            goto L_4000D2A8;
    }
    // 0x4000D290: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x4000D294: lw          $t0, 0xCC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XCC);
    // 0x4000D298: nop

    // 0x4000D29C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x4000D2A0: b           L_4000D2B0
    // 0x4000D2A4: sw          $t1, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->r9;
        goto L_4000D2B0;
    // 0x4000D2A4: sw          $t1, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->r9;
L_4000D2A8:
    // 0x4000D2A8: jal         0x4001073C
    // 0x4000D2AC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_actor_main_1073C(rdram, ctx);
        goto after_3;
    // 0x4000D2AC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_3:
L_4000D2B0:
    // 0x4000D2B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000D2B4:
    // 0x4000D2B4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4000D2B8: jr          $ra
    // 0x4000D2BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4000D2BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_D2C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D2C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000D2C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x4000D2C8: beq         $a1, $v0, L_4000D2EC
    if (ctx->r5 == ctx->r2) {
        // 0x4000D2CC: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_4000D2EC;
    }
    // 0x4000D2CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000D2D0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4000D2D4: beq         $a1, $at, L_4000D318
    if (ctx->r5 == ctx->r1) {
        // 0x4000D2D8: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_4000D318;
    }
    // 0x4000D2D8: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x4000D2DC: beq         $a1, $at, L_4000D344
    if (ctx->r5 == ctx->r1) {
        // 0x4000D2E0: nop
    
            goto L_4000D344;
    }
    // 0x4000D2E0: nop

    // 0x4000D2E4: b           L_4000D358
    // 0x4000D2E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000D358;
    // 0x4000D2E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000D2EC:
    // 0x4000D2EC: addiu       $a1, $zero, 0x19D
    ctx->r5 = ADD32(0, 0X19D);
    // 0x4000D2F0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000D2F4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000D2F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4000D2FC: jal         0x40008D64
    // 0x4000D300: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x4000D300: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000D304: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000D308: jal         0x40008EF8
    // 0x4000D30C: addiu       $a1, $zero, 0x5E1
    ctx->r5 = ADD32(0, 0X5E1);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x4000D30C: addiu       $a1, $zero, 0x5E1
    ctx->r5 = ADD32(0, 0X5E1);
    after_1:
    // 0x4000D310: b           L_4000D358
    // 0x4000D314: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000D358;
    // 0x4000D314: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000D318:
    // 0x4000D318: lui         $at, 0x4048
    ctx->r1 = S32(0X4048 << 16);
    // 0x4000D31C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4000D320: lwc1        $f6, 0x40($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X40);
    // 0x4000D324: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x4000D328: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x4000D32C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4000D330: swc1        $f10, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f10.u32l;
    // 0x4000D334: jal         0x40001A8C
    // 0x4000D338: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_2;
    // 0x4000D338: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x4000D33C: b           L_4000D358
    // 0x4000D340: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000D358;
    // 0x4000D340: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000D344:
    // 0x4000D344: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x4000D348: sw          $v0, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r2;
    // 0x4000D34C: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
    // 0x4000D350: swc1        $f16, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f16.u32l;
    // 0x4000D354: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000D358:
    // 0x4000D358: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000D35C: jr          $ra
    // 0x4000D360: nop

    return;
    // 0x4000D360: nop

;}
RECOMP_FUNC void ovl_actor_main_D364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D364: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000D368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000D36C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4000D370: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x4000D374: sw          $t6, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r14;
    // 0x4000D378: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
    // 0x4000D37C: jal         0x4000DA04
    // 0x4000D380: swc1        $f4, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f4.u32l;
    ovl_actor_main_DA04(rdram, ctx);
        goto after_0;
    // 0x4000D380: swc1        $f4, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f4.u32l;
    after_0:
    // 0x4000D384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000D388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000D38C: jr          $ra
    // 0x4000D390: nop

    return;
    // 0x4000D390: nop

;}
RECOMP_FUNC void ovl_actor_main_D394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D394: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000D398: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000D39C: jal         0x40010EF8
    // 0x4000D3A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_10EF8(rdram, ctx);
        goto after_0;
    // 0x4000D3A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000D3A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000D3A8: jal         0x4000DA04
    // 0x4000D3AC: nop

    ovl_actor_main_DA04(rdram, ctx);
        goto after_1;
    // 0x4000D3AC: nop

    after_1:
    // 0x4000D3B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000D3B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000D3B8: jr          $ra
    // 0x4000D3BC: nop

    return;
    // 0x4000D3BC: nop

;}
RECOMP_FUNC void ovl_actor_main_D3C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D3C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000D3C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4000D3C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000D3CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000D3D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000D3D4: beq         $a1, $at, L_4000D3F0
    if (ctx->r5 == ctx->r1) {
        // 0x4000D3D8: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_4000D3F0;
    }
    // 0x4000D3D8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x4000D3DC: addiu       $at, $zero, 0xCC
    ctx->r1 = ADD32(0, 0XCC);
    // 0x4000D3E0: beq         $a1, $at, L_4000D424
    if (ctx->r5 == ctx->r1) {
        // 0x4000D3E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000D424;
    }
    // 0x4000D3E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000D3E8: b           L_4000D43C
    // 0x4000D3EC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
        goto L_4000D43C;
    // 0x4000D3EC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
L_4000D3F0:
    // 0x4000D3F0: lui         $a1, 0x4002
    ctx->r5 = S32(0X4002 << 16);
    // 0x4000D3F4: addiu       $a1, $a1, -0x25B0
    ctx->r5 = ADD32(ctx->r5, -0X25B0);
    // 0x4000D3F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000D3FC: jal         0x400095C4
    // 0x4000D400: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    ovl_actor_main_95C4(rdram, ctx);
        goto after_0;
    // 0x4000D400: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    after_0:
    // 0x4000D404: lui         $a1, 0x4002
    ctx->r5 = S32(0X4002 << 16);
    // 0x4000D408: lw          $a1, -0x25B0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X25B0);
    // 0x4000D40C: jal         0x4000B9A8
    // 0x4000D410: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_B9A8(rdram, ctx);
        goto after_1;
    // 0x4000D410: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4000D414: jal         0x4000BB68
    // 0x4000D418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_BB68(rdram, ctx);
        goto after_2;
    // 0x4000D418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x4000D41C: b           L_4000D43C
    // 0x4000D420: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
        goto L_4000D43C;
    // 0x4000D420: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
L_4000D424:
    // 0x4000D424: lw          $t7, 0x90($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X90);
    // 0x4000D428: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x4000D42C: ori         $t8, $t7, 0x8
    ctx->r24 = ctx->r15 | 0X8;
    // 0x4000D430: jal         0x40001A8C
    // 0x4000D434: sw          $t8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r24;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_3;
    // 0x4000D434: sw          $t8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r24;
    after_3:
    // 0x4000D438: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
L_4000D43C:
    // 0x4000D43C: nop

    // 0x4000D440: slti        $at, $t9, 0x16
    ctx->r1 = SIGNED(ctx->r25) < 0X16 ? 1 : 0;
    // 0x4000D444: bne         $at, $zero, L_4000D45C
    if (ctx->r1 != 0) {
        // 0x4000D448: slti        $at, $t9, 0xCD
        ctx->r1 = SIGNED(ctx->r25) < 0XCD ? 1 : 0;
            goto L_4000D45C;
    }
    // 0x4000D448: slti        $at, $t9, 0xCD
    ctx->r1 = SIGNED(ctx->r25) < 0XCD ? 1 : 0;
    // 0x4000D44C: beq         $at, $zero, L_4000D45C
    if (ctx->r1 == 0) {
        // 0x4000D450: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000D45C;
    }
    // 0x4000D450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000D454: jal         0x4000A9BC
    // 0x4000D458: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_A9BC(rdram, ctx);
        goto after_4;
    // 0x4000D458: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_4000D45C:
    // 0x4000D45C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000D460: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4000D464: jr          $ra
    // 0x4000D468: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x4000D468: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_actor_main_D46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D46C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4000D470: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x4000D474: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x4000D478: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000D47C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000D480: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x4000D484: beq         $a1, $at, L_4000D4B4
    if (ctx->r5 == ctx->r1) {
        // 0x4000D488: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4000D4B4;
    }
    // 0x4000D488: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000D48C: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x4000D490: beq         $a1, $at, L_4000D520
    if (ctx->r5 == ctx->r1) {
        // 0x4000D494: addiu       $at, $zero, 0x72
        ctx->r1 = ADD32(0, 0X72);
            goto L_4000D520;
    }
    // 0x4000D494: addiu       $at, $zero, 0x72
    ctx->r1 = ADD32(0, 0X72);
    // 0x4000D498: beq         $a1, $at, L_4000D4E8
    if (ctx->r5 == ctx->r1) {
        // 0x4000D49C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000D4E8;
    }
    // 0x4000D49C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000D4A0: addiu       $at, $zero, 0x7B
    ctx->r1 = ADD32(0, 0X7B);
    // 0x4000D4A4: beq         $a1, $at, L_4000D510
    if (ctx->r5 == ctx->r1) {
        // 0x4000D4A8: nop
    
            goto L_4000D510;
    }
    // 0x4000D4A8: nop

    // 0x4000D4AC: b           L_4000D524
    // 0x4000D4B0: slti        $at, $s1, 0x16
    ctx->r1 = SIGNED(ctx->r17) < 0X16 ? 1 : 0;
        goto L_4000D524;
    // 0x4000D4B0: slti        $at, $s1, 0x16
    ctx->r1 = SIGNED(ctx->r17) < 0X16 ? 1 : 0;
L_4000D4B4:
    // 0x4000D4B4: lui         $a1, 0x4002
    ctx->r5 = S32(0X4002 << 16);
    // 0x4000D4B8: addiu       $a1, $a1, -0x25B0
    ctx->r5 = ADD32(ctx->r5, -0X25B0);
    // 0x4000D4BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000D4C0: jal         0x400095C4
    // 0x4000D4C4: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    ovl_actor_main_95C4(rdram, ctx);
        goto after_0;
    // 0x4000D4C4: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    after_0:
    // 0x4000D4C8: lui         $a1, 0x4002
    ctx->r5 = S32(0X4002 << 16);
    // 0x4000D4CC: lw          $a1, -0x25B0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X25B0);
    // 0x4000D4D0: jal         0x4000B9A8
    // 0x4000D4D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_B9A8(rdram, ctx);
        goto after_1;
    // 0x4000D4D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4000D4D8: jal         0x4000BB68
    // 0x4000D4DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_BB68(rdram, ctx);
        goto after_2;
    // 0x4000D4DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x4000D4E0: b           L_4000D524
    // 0x4000D4E4: slti        $at, $s1, 0x16
    ctx->r1 = SIGNED(ctx->r17) < 0X16 ? 1 : 0;
        goto L_4000D524;
    // 0x4000D4E4: slti        $at, $s1, 0x16
    ctx->r1 = SIGNED(ctx->r17) < 0X16 ? 1 : 0;
L_4000D4E8:
    // 0x4000D4E8: addiu       $a1, $zero, 0x1AC
    ctx->r5 = ADD32(0, 0X1AC);
    // 0x4000D4EC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000D4F0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000D4F4: jal         0x40008D64
    // 0x4000D4F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_3;
    // 0x4000D4F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x4000D4FC: lw          $t6, 0x90($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X90);
    // 0x4000D500: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x4000D504: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x4000D508: b           L_4000D520
    // 0x4000D50C: sw          $t7, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r15;
        goto L_4000D520;
    // 0x4000D50C: sw          $t7, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r15;
L_4000D510:
    // 0x4000D510: jal         0x4000E230
    // 0x4000D514: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_E230(rdram, ctx);
        goto after_4;
    // 0x4000D514: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4000D518: jal         0x4000CB84
    // 0x4000D51C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_5;
    // 0x4000D51C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_4000D520:
    // 0x4000D520: slti        $at, $s1, 0x16
    ctx->r1 = SIGNED(ctx->r17) < 0X16 ? 1 : 0;
L_4000D524:
    // 0x4000D524: bne         $at, $zero, L_4000D53C
    if (ctx->r1 != 0) {
        // 0x4000D528: slti        $at, $s1, 0x73
        ctx->r1 = SIGNED(ctx->r17) < 0X73 ? 1 : 0;
            goto L_4000D53C;
    }
    // 0x4000D528: slti        $at, $s1, 0x73
    ctx->r1 = SIGNED(ctx->r17) < 0X73 ? 1 : 0;
    // 0x4000D52C: beq         $at, $zero, L_4000D53C
    if (ctx->r1 == 0) {
        // 0x4000D530: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000D53C;
    }
    // 0x4000D530: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000D534: jal         0x4000A9BC
    // 0x4000D538: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_A9BC(rdram, ctx);
        goto after_6;
    // 0x4000D538: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
L_4000D53C:
    // 0x4000D53C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4000D540: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x4000D544: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x4000D548: jr          $ra
    // 0x4000D54C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4000D54C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_D550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000D554: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000D558: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000D55C: lui         $at, 0xFFF7
    ctx->r1 = S32(0XFFF7 << 16);
    // 0x4000D560: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x4000D564: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x4000D568: jal         0x4000DA04
    // 0x4000D56C: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
    ovl_actor_main_DA04(rdram, ctx);
        goto after_0;
    // 0x4000D56C: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
    after_0:
    // 0x4000D570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000D574: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000D578: jr          $ra
    // 0x4000D57C: nop

    return;
    // 0x4000D57C: nop

;}
RECOMP_FUNC void ovl_actor_main_D580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D580: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000D584: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000D588: bne         $a1, $at, L_4000D5A8
    if (ctx->r5 != ctx->r1) {
        // 0x4000D58C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_4000D5A8;
    }
    // 0x4000D58C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000D590: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4000D594: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x4000D598: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4000D59C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4000D5A0: jal         0x40008D20
    // 0x4000D5A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4000D5A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_4000D5A8:
    // 0x4000D5A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000D5AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000D5B0: jr          $ra
    // 0x4000D5B4: nop

    return;
    // 0x4000D5B4: nop

;}
RECOMP_FUNC void ovl_actor_main_D5B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D5B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000D5BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000D5C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000D5C4: beq         $a1, $at, L_4000D5E0
    if (ctx->r5 == ctx->r1) {
        // 0x4000D5C8: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_4000D5E0;
    }
    // 0x4000D5C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4000D5CC: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x4000D5D0: beq         $a1, $at, L_4000D60C
    if (ctx->r5 == ctx->r1) {
        // 0x4000D5D4: addiu       $a2, $zero, 0x0
        ctx->r6 = ADD32(0, 0X0);
            goto L_4000D60C;
    }
    // 0x4000D5D4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000D5D8: b           L_4000D634
    // 0x4000D5DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000D634;
    // 0x4000D5DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000D5E0:
    // 0x4000D5E0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000D5E4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4000D5E8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000D5EC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000D5F0: jal         0x40008D20
    // 0x4000D5F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4000D5F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4000D5F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000D5FC: jal         0x40008EF8
    // 0x4000D600: addiu       $a1, $zero, 0x5DB
    ctx->r5 = ADD32(0, 0X5DB);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x4000D600: addiu       $a1, $zero, 0x5DB
    ctx->r5 = ADD32(0, 0X5DB);
    after_1:
    // 0x4000D604: b           L_4000D634
    // 0x4000D608: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000D634;
    // 0x4000D608: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000D60C:
    // 0x4000D60C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000D610: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x4000D614: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x4000D618: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x4000D61C: jal         0x40008D20
    // 0x4000D620: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    ovl_actor_main_8D20(rdram, ctx);
        goto after_2;
    // 0x4000D620: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    after_2:
    // 0x4000D624: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000D628: jal         0x40008EF8
    // 0x4000D62C: addiu       $a1, $zero, 0x5DB
    ctx->r5 = ADD32(0, 0X5DB);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_3;
    // 0x4000D62C: addiu       $a1, $zero, 0x5DB
    ctx->r5 = ADD32(0, 0X5DB);
    after_3:
    // 0x4000D630: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000D634:
    // 0x4000D634: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000D638: jr          $ra
    // 0x4000D63C: nop

    return;
    // 0x4000D63C: nop

;}
RECOMP_FUNC void ovl_actor_main_D640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D640: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000D644: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000D648: jal         0x40009B20
    // 0x4000D64C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_9B20(rdram, ctx);
        goto after_0;
    // 0x4000D64C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000D650: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000D654: jal         0x4000947C
    // 0x4000D658: nop

    ovl_actor_main_947C(rdram, ctx);
        goto after_1;
    // 0x4000D658: nop

    after_1:
    // 0x4000D65C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000D660: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x4000D664: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x4000D668: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x4000D66C: bne         $t6, $at, L_4000D694
    if (ctx->r14 != ctx->r1) {
        // 0x4000D670: addiu       $a2, $zero, 0x1E
        ctx->r6 = ADD32(0, 0X1E);
            goto L_4000D694;
    }
    // 0x4000D670: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x4000D674: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000D678: lwc1        $f4, -0x154C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X154C);
    // 0x4000D67C: sw          $zero, 0x314($a0)
    MEM_W(0X314, ctx->r4) = 0;
    // 0x4000D680: addiu       $t7, $zero, 0xB2
    ctx->r15 = ADD32(0, 0XB2);
    // 0x4000D684: swc1        $f4, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f4.u32l;
    // 0x4000D688: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x4000D68C: jal         0x4001096C
    // 0x4000D690: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_actor_main_1096C(rdram, ctx);
        goto after_2;
    // 0x4000D690: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_2:
L_4000D694:
    // 0x4000D694: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000D698: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000D69C: jr          $ra
    // 0x4000D6A0: nop

    return;
    // 0x4000D6A0: nop

;}
RECOMP_FUNC void ovl_actor_main_D6A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D6A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000D6A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000D6AC: jal         0x4000946C
    // 0x4000D6B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_946C(rdram, ctx);
        goto after_0;
    // 0x4000D6B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000D6B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000D6B8: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x4000D6BC: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x4000D6C0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x4000D6C4: bne         $t6, $at, L_4000D6DC
    if (ctx->r14 != ctx->r1) {
        // 0x4000D6C8: addiu       $a2, $zero, -0x1
        ctx->r6 = ADD32(0, -0X1);
            goto L_4000D6DC;
    }
    // 0x4000D6C8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x4000D6CC: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000D6D0: lwc1        $f4, -0x1548($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1548);
    // 0x4000D6D4: jal         0x40010934
    // 0x4000D6D8: swc1        $f4, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f4.u32l;
    ovl_actor_main_10934(rdram, ctx);
        goto after_1;
    // 0x4000D6D8: swc1        $f4, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f4.u32l;
    after_1:
L_4000D6DC:
    // 0x4000D6DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000D6E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000D6E4: jr          $ra
    // 0x4000D6E8: nop

    return;
    // 0x4000D6E8: nop

;}
RECOMP_FUNC void ovl_actor_main_D6EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D6EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000D6F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000D6F4: jal         0x4000E730
    // 0x4000D6F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_E730(rdram, ctx);
        goto after_0;
    // 0x4000D6F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x4000D6FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000D700: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000D704: jr          $ra
    // 0x4000D708: nop

    return;
    // 0x4000D708: nop

;}
RECOMP_FUNC void ovl_actor_main_D70C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D70C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000D710: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000D714: jal         0x4001077C
    // 0x4000D718: nop

    ovl_actor_main_1077C(rdram, ctx);
        goto after_0;
    // 0x4000D718: nop

    after_0:
    // 0x4000D71C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000D720: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000D724: jr          $ra
    // 0x4000D728: nop

    return;
    // 0x4000D728: nop

;}
RECOMP_FUNC void ovl_actor_main_D72C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D72C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x4000D730: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4000D734: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000D738: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000D73C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000D740: beq         $a1, $at, L_4000D75C
    if (ctx->r5 == ctx->r1) {
        // 0x4000D744: sw          $a1, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r5;
            goto L_4000D75C;
    }
    // 0x4000D744: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x4000D748: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x4000D74C: beq         $a1, $at, L_4000D7F8
    if (ctx->r5 == ctx->r1) {
        // 0x4000D750: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000D7F8;
    }
    // 0x4000D750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000D754: b           L_4000D820
    // 0x4000D758: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
        goto L_4000D820;
    // 0x4000D758: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
L_4000D75C:
    // 0x4000D75C: lui         $a1, 0x4002
    ctx->r5 = S32(0X4002 << 16);
    // 0x4000D760: addiu       $a1, $a1, -0x25B0
    ctx->r5 = ADD32(ctx->r5, -0X25B0);
    // 0x4000D764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000D768: jal         0x400095C4
    // 0x4000D76C: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    ovl_actor_main_95C4(rdram, ctx);
        goto after_0;
    // 0x4000D76C: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    after_0:
    // 0x4000D770: lui         $a1, 0x4002
    ctx->r5 = S32(0X4002 << 16);
    // 0x4000D774: lw          $a1, -0x25B0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X25B0);
    // 0x4000D778: jal         0x4000B9A8
    // 0x4000D77C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_B9A8(rdram, ctx);
        goto after_1;
    // 0x4000D77C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4000D780: jal         0x4000BB68
    // 0x4000D784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_BB68(rdram, ctx);
        goto after_2;
    // 0x4000D784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x4000D788: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x4000D78C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000D790: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x4000D794: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4000D798: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x4000D79C: jal         0x400006C4
    // 0x4000D7A0: swc1        $f4, 0x2F8($s0)
    MEM_W(0X2F8, ctx->r16) = ctx->f4.u32l;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_3;
    // 0x4000D7A0: swc1        $f4, 0x2F8($s0)
    MEM_W(0X2F8, ctx->r16) = ctx->f4.u32l;
    after_3:
    // 0x4000D7A4: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x4000D7A8: lwc1        $f8, 0x2FC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2FC);
    // 0x4000D7AC: lui         $a0, 0x4002
    ctx->r4 = S32(0X4002 << 16);
    // 0x4000D7B0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x4000D7B4: lw          $a0, -0x25B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X25B0);
    // 0x4000D7B8: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x4000D7BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4000D7C0: jal         0x400006C4
    // 0x4000D7C4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_4;
    // 0x4000D7C4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x4000D7C8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x4000D7CC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x4000D7D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000D7D4: addiu       $a1, $zero, 0x1B2
    ctx->r5 = ADD32(0, 0X1B2);
    // 0x4000D7D8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000D7DC: jal         0x40008D64
    // 0x4000D7E0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_5;
    // 0x4000D7E0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_5:
    // 0x4000D7E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000D7E8: jal         0x40008EF8
    // 0x4000D7EC: addiu       $a1, $zero, 0x5E2
    ctx->r5 = ADD32(0, 0X5E2);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_6;
    // 0x4000D7EC: addiu       $a1, $zero, 0x5E2
    ctx->r5 = ADD32(0, 0X5E2);
    after_6:
    // 0x4000D7F0: b           L_4000D820
    // 0x4000D7F4: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
        goto L_4000D820;
    // 0x4000D7F4: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
L_4000D7F8:
    // 0x4000D7F8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x4000D7FC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x4000D800: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x4000D804: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000D808: jal         0x40008D20
    // 0x4000D80C: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    ovl_actor_main_8D20(rdram, ctx);
        goto after_7;
    // 0x4000D80C: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    after_7:
    // 0x4000D810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000D814: jal         0x40008EF8
    // 0x4000D818: addiu       $a1, $zero, 0x5E2
    ctx->r5 = ADD32(0, 0X5E2);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_8;
    // 0x4000D818: addiu       $a1, $zero, 0x5E2
    ctx->r5 = ADD32(0, 0X5E2);
    after_8:
    // 0x4000D81C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
L_4000D820:
    // 0x4000D820: nop

    // 0x4000D824: slti        $at, $t9, 0x2D
    ctx->r1 = SIGNED(ctx->r25) < 0X2D ? 1 : 0;
    // 0x4000D828: bne         $at, $zero, L_4000D83C
    if (ctx->r1 != 0) {
        // 0x4000D82C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_4000D83C;
    }
    // 0x4000D82C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4000D830: jal         0x40009E78
    // 0x4000D834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9E78(rdram, ctx);
        goto after_9;
    // 0x4000D834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x4000D838: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4000D83C:
    // 0x4000D83C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4000D840: jr          $ra
    // 0x4000D844: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x4000D844: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_actor_main_D848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D848: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000D84C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000D850: beq         $a1, $at, L_4000D86C
    if (ctx->r5 == ctx->r1) {
        // 0x4000D854: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_4000D86C;
    }
    // 0x4000D854: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000D858: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x4000D85C: beq         $a1, $at, L_4000D888
    if (ctx->r5 == ctx->r1) {
        // 0x4000D860: nop
    
            goto L_4000D888;
    }
    // 0x4000D860: nop

    // 0x4000D864: b           L_4000D894
    // 0x4000D868: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000D894;
    // 0x4000D868: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000D86C:
    // 0x4000D86C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x4000D870: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000D874: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000D878: jal         0x40008D20
    // 0x4000D87C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4000D87C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4000D880: b           L_4000D894
    // 0x4000D884: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000D894;
    // 0x4000D884: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000D888:
    // 0x4000D888: jal         0x4000CB84
    // 0x4000D88C: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_1;
    // 0x4000D88C: nop

    after_1:
    // 0x4000D890: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000D894:
    // 0x4000D894: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000D898: jr          $ra
    // 0x4000D89C: nop

    return;
    // 0x4000D89C: nop

;}
RECOMP_FUNC void ovl_actor_main_D8A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D8A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000D8A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000D8A8: beq         $a1, $at, L_4000D8C4
    if (ctx->r5 == ctx->r1) {
        // 0x4000D8AC: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_4000D8C4;
    }
    // 0x4000D8AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000D8B0: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x4000D8B4: beq         $a1, $at, L_4000D908
    if (ctx->r5 == ctx->r1) {
        // 0x4000D8B8: nop
    
            goto L_4000D908;
    }
    // 0x4000D8B8: nop

    // 0x4000D8BC: b           L_4000D914
    // 0x4000D8C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000D914;
    // 0x4000D8C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000D8C4:
    // 0x4000D8C4: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000D8C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4000D8CC: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x4000D8D0: beq         $t7, $zero, L_4000D8F4
    if (ctx->r15 == 0) {
        // 0x4000D8D4: addiu       $a2, $zero, 0x0
        ctx->r6 = ADD32(0, 0X0);
            goto L_4000D8F4;
    }
    // 0x4000D8D4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000D8D8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x4000D8DC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000D8E0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000D8E4: jal         0x40008D20
    // 0x4000D8E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4000D8E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4000D8EC: b           L_4000D914
    // 0x4000D8F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000D914;
    // 0x4000D8F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000D8F4:
    // 0x4000D8F4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4000D8F8: jal         0x40008D20
    // 0x4000D8FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_1;
    // 0x4000D8FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x4000D900: b           L_4000D914
    // 0x4000D904: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4000D914;
    // 0x4000D904: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000D908:
    // 0x4000D908: jal         0x4000CB84
    // 0x4000D90C: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_2;
    // 0x4000D90C: nop

    after_2:
    // 0x4000D910: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000D914:
    // 0x4000D914: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000D918: jr          $ra
    // 0x4000D91C: nop

    return;
    // 0x4000D91C: nop

;}
RECOMP_FUNC void ovl_actor_main_D920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D920: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000D924: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000D928: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4000D92C: bne         $a1, $at, L_4000D94C
    if (ctx->r5 != ctx->r1) {
        // 0x4000D930: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_4000D94C;
    }
    // 0x4000D930: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4000D934: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x4000D938: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x4000D93C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4000D940: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000D944: jal         0x40008D20
    // 0x4000D948: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4000D948: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_0:
L_4000D94C:
    // 0x4000D94C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000D950: jal         0x40009BB0
    // 0x4000D954: nop

    ovl_actor_main_9BB0(rdram, ctx);
        goto after_1;
    // 0x4000D954: nop

    after_1:
    // 0x4000D958: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000D95C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4000D960: jr          $ra
    // 0x4000D964: nop

    return;
    // 0x4000D964: nop

;}
RECOMP_FUNC void ovl_actor_main_D968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D968: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000D96C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000D970: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4000D974: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x4000D978: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x4000D97C: jal         0x40011944
    // 0x4000D980: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_11944(rdram, ctx);
        goto after_0;
    // 0x4000D980: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000D984: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000D988: nop

    // 0x4000D98C: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
    // 0x4000D990: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    // 0x4000D994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000D998: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x4000D99C: jr          $ra
    // 0x4000D9A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x4000D9A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_actor_main_D9A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D9A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4000D9A8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x4000D9AC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4000D9B0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x4000D9B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4000D9B8: beq         $a1, $at, L_4000D9EC
    if (ctx->r5 == ctx->r1) {
        // 0x4000D9BC: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_4000D9EC;
    }
    // 0x4000D9BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4000D9C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4000D9C4: beq         $a1, $at, L_4000D9F0
    if (ctx->r5 == ctx->r1) {
        // 0x4000D9C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000D9F0;
    }
    // 0x4000D9C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000D9CC: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x4000D9D0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x4000D9D4: jal         0x40011944
    // 0x4000D9D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_11944(rdram, ctx);
        goto after_0;
    // 0x4000D9D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4000D9DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4000D9E0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x4000D9E4: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    // 0x4000D9E8: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
L_4000D9EC:
    // 0x4000D9EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000D9F0:
    // 0x4000D9F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4000D9F4: jr          $ra
    // 0x4000D9F8: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    return;
    // 0x4000D9F8: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
;}
RECOMP_FUNC void ovl_actor_main_D9FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000D9FC: jr          $ra
    // 0x4000DA00: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x4000DA00: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
