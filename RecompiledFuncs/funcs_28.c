#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8005C590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C590: jr          $ra
    // 0x8005C594: nop

    return;
    // 0x8005C594: nop

;}
RECOMP_FUNC void func_8005C598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C598: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8005C59C: addiu       $t0, $zero, -0x2
    ctx->r8 = ADD32(0, -0X2);
    // 0x8005C5A0: beq         $a1, $t0, L_8005C5DC
    if (ctx->r5 == ctx->r8) {
        // 0x8005C5A4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8005C5DC;
    }
    // 0x8005C5A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005C5A8: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x8005C5AC: multu       $a0, $t2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005C5B0: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x8005C5B4: addiu       $t1, $t1, -0x28D0
    ctx->r9 = ADD32(ctx->r9, -0X28D0);
    // 0x8005C5B8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8005C5BC: mflo        $t6
    ctx->r14 = lo;
    // 0x8005C5C0: addu        $v0, $t1, $t6
    ctx->r2 = ADD32(ctx->r9, ctx->r14);
    // 0x8005C5C4: beq         $a1, $t3, L_8005C5DC
    if (ctx->r5 == ctx->r11) {
        // 0x8005C5C8: sw          $a1, 0x14($v0)
        MEM_W(0X14, ctx->r2) = ctx->r5;
            goto L_8005C5DC;
    }
    // 0x8005C5C8: sw          $a1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r5;
    // 0x8005C5CC: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x8005C5D0: nop

    // 0x8005C5D4: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x8005C5D8: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
L_8005C5DC:
    // 0x8005C5DC: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x8005C5E0: addiu       $t1, $t1, -0x28D0
    ctx->r9 = ADD32(ctx->r9, -0X28D0);
    // 0x8005C5E4: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x8005C5E8: beq         $a2, $t0, L_8005C600
    if (ctx->r6 == ctx->r8) {
        // 0x8005C5EC: addiu       $t3, $zero, -0x1
        ctx->r11 = ADD32(0, -0X1);
            goto L_8005C600;
    }
    // 0x8005C5EC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8005C5F0: multu       $a0, $t2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005C5F4: mflo        $t9
    ctx->r25 = lo;
    // 0x8005C5F8: addu        $t4, $t1, $t9
    ctx->r12 = ADD32(ctx->r9, ctx->r25);
    // 0x8005C5FC: sw          $a2, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->r6;
L_8005C600:
    // 0x8005C600: beq         $a3, $t0, L_8005C630
    if (ctx->r7 == ctx->r8) {
        // 0x8005C604: lw          $v1, 0x80($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X80);
            goto L_8005C630;
    }
    // 0x8005C604: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x8005C608: multu       $a0, $t2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005C60C: mflo        $t5
    ctx->r13 = lo;
    // 0x8005C610: addu        $v0, $t1, $t5
    ctx->r2 = ADD32(ctx->r9, ctx->r13);
    // 0x8005C614: beq         $a3, $t3, L_8005C62C
    if (ctx->r7 == ctx->r11) {
        // 0x8005C618: sw          $a3, 0x1C($v0)
        MEM_W(0X1C, ctx->r2) = ctx->r7;
            goto L_8005C62C;
    }
    // 0x8005C618: sw          $a3, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r7;
    // 0x8005C61C: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x8005C620: nop

    // 0x8005C624: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x8005C628: sw          $t7, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r15;
L_8005C62C:
    // 0x8005C62C: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
L_8005C630:
    // 0x8005C630: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x8005C634: beq         $v1, $t0, L_8005C664
    if (ctx->r3 == ctx->r8) {
        // 0x8005C638: lw          $t5, 0x84($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X84);
            goto L_8005C664;
    }
    // 0x8005C638: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x8005C63C: multu       $a0, $t2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005C640: mflo        $t8
    ctx->r24 = lo;
    // 0x8005C644: addu        $v0, $t1, $t8
    ctx->r2 = ADD32(ctx->r9, ctx->r24);
    // 0x8005C648: beq         $v1, $t3, L_8005C660
    if (ctx->r3 == ctx->r11) {
        // 0x8005C64C: sw          $v1, 0x20($v0)
        MEM_W(0X20, ctx->r2) = ctx->r3;
            goto L_8005C660;
    }
    // 0x8005C64C: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8005C650: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x8005C654: nop

    // 0x8005C658: ori         $t4, $t9, 0x1
    ctx->r12 = ctx->r25 | 0X1;
    // 0x8005C65C: sw          $t4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r12;
L_8005C660:
    // 0x8005C660: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
L_8005C664:
    // 0x8005C664: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005C668: bne         $t5, $at, L_8005C6C0
    if (ctx->r13 != ctx->r1) {
        // 0x8005C66C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8005C6C0;
    }
    // 0x8005C66C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005C670: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
    // 0x8005C674: jal         0x8002D000
    // 0x8005C678: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x8005C678: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    after_0:
    // 0x8005C67C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x8005C680: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005C684: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x8005C688: jal         0x8004A0A0
    // 0x8005C68C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8005C68C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x8005C690: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8005C694: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8005C698: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x8005C69C: addiu       $t4, $sp, 0x60
    ctx->r12 = ADD32(ctx->r29, 0X60);
    // 0x8005C6A0: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x8005C6A4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8005C6A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005C6AC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8005C6B0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8005C6B4: jal         0x80057CA0
    // 0x8005C6B8: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    func_80057CA0(rdram, ctx);
        goto after_2;
    // 0x8005C6B8: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    after_2:
    // 0x8005C6BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005C6C0:
    // 0x8005C6C0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x8005C6C4: jr          $ra
    // 0x8005C6C8: nop

    return;
    // 0x8005C6C8: nop

;}
RECOMP_FUNC void func_8005C6CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C6CC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8005C6D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005C6D4: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x8005C6D8: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    // 0x8005C6DC: jal         0x8002D000
    // 0x8005C6E0: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x8005C6E0: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    after_0:
    // 0x8005C6E4: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x8005C6E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005C6EC: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x8005C6F0: jal         0x8004A0A0
    // 0x8005C6F4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8005C6F4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x8005C6F8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8005C6FC: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x8005C700: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x8005C704: addiu       $t0, $sp, 0x58
    ctx->r8 = ADD32(ctx->r29, 0X58);
    // 0x8005C708: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8005C70C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8005C710: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005C714: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8005C718: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8005C71C: jal         0x80057CA0
    // 0x8005C720: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    func_80057CA0(rdram, ctx);
        goto after_2;
    // 0x8005C720: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_2:
    // 0x8005C724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005C728: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x8005C72C: jr          $ra
    // 0x8005C730: nop

    return;
    // 0x8005C730: nop

;}
RECOMP_FUNC void func_8005C734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C734: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x8005C738: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8005C73C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8005C740: addiu       $t7, $t7, -0x28D0
    ctx->r15 = ADD32(ctx->r15, -0X28D0);
    // 0x8005C744: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005C748: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8005C74C: lw          $t8, 0x24($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X24);
    // 0x8005C750: nop

    // 0x8005C754: or          $t9, $t8, $a1
    ctx->r25 = ctx->r24 | ctx->r5;
    // 0x8005C758: jr          $ra
    // 0x8005C75C: sw          $t9, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r25;
    return;
    // 0x8005C75C: sw          $t9, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_8005C760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C760: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x8005C764: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8005C768: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8005C76C: addiu       $t7, $t7, -0x28D0
    ctx->r15 = ADD32(ctx->r15, -0X28D0);
    // 0x8005C770: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005C774: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8005C778: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x8005C77C: nop

    // 0x8005C780: or          $t9, $t8, $a1
    ctx->r25 = ctx->r24 | ctx->r5;
    // 0x8005C784: jr          $ra
    // 0x8005C788: sw          $t9, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r25;
    return;
    // 0x8005C788: sw          $t9, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_8005C790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C790: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005C794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005C798: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8005C79C: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x8005C7A0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8005C7A4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8005C7A8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8005C7AC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8005C7B0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8005C7B4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8005C7B8: jal         0x80057CA0
    // 0x8005C7BC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80057CA0(rdram, ctx);
        goto after_0;
    // 0x8005C7BC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x8005C7C0: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8005C7C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005C7C8: beq         $t8, $at, L_8005C7D8
    if (ctx->r24 == ctx->r1) {
        // 0x8005C7CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8005C7D8;
    }
    // 0x8005C7CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005C7D0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8005C7D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005C7D8:
    // 0x8005C7D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8005C7DC: jr          $ra
    // 0x8005C7E0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    return;
    // 0x8005C7E0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
;}
RECOMP_FUNC void func_8005C7E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C7E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005C7E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005C7EC: addiu       $t6, $zero, 0x2D
    ctx->r14 = ADD32(0, 0X2D);
    // 0x8005C7F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005C7F4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8005C7F8: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x8005C7FC: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x8005C800: jal         0x8005C790
    // 0x8005C804: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_8005C790(rdram, ctx);
        goto after_0;
    // 0x8005C804: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_0:
    // 0x8005C808: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005C80C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005C810: jr          $ra
    // 0x8005C814: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8005C814: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8005C818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C818: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005C81C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005C820: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8005C824: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005C828: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x8005C82C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8005C830: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x8005C834: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8005C838: jal         0x8005C790
    // 0x8005C83C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    func_8005C790(rdram, ctx);
        goto after_0;
    // 0x8005C83C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    after_0:
    // 0x8005C840: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8005C844: beq         $v0, $zero, L_8005C854
    if (ctx->r2 == 0) {
        // 0x8005C848: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8005C854;
    }
    // 0x8005C848: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005C84C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8005C850: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8005C854:
    // 0x8005C854: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005C858: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8005C85C: jr          $ra
    // 0x8005C860: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8005C860: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8005C864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C864: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005C868: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005C86C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x8005C870: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005C874: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x8005C878: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8005C87C: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x8005C880: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8005C884: jal         0x8005C790
    // 0x8005C888: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    func_8005C790(rdram, ctx);
        goto after_0;
    // 0x8005C888: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    after_0:
    // 0x8005C88C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8005C890: beq         $v0, $zero, L_8005C8A0
    if (ctx->r2 == 0) {
        // 0x8005C894: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8005C8A0;
    }
    // 0x8005C894: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005C898: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8005C89C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8005C8A0:
    // 0x8005C8A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005C8A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8005C8A8: jr          $ra
    // 0x8005C8AC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8005C8AC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8005C8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C8B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005C8B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005C8B8: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x8005C8BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005C8C0: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x8005C8C4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8005C8C8: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x8005C8CC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8005C8D0: jal         0x8005C790
    // 0x8005C8D4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    func_8005C790(rdram, ctx);
        goto after_0;
    // 0x8005C8D4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    after_0:
    // 0x8005C8D8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8005C8DC: beq         $v0, $zero, L_8005C8EC
    if (ctx->r2 == 0) {
        // 0x8005C8E0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8005C8EC;
    }
    // 0x8005C8E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005C8E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8005C8E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8005C8EC:
    // 0x8005C8EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005C8F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8005C8F4: jr          $ra
    // 0x8005C8F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8005C8F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8005C8FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C8FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005C900: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005C904: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8005C908: addiu       $t7, $sp, 0x34
    ctx->r15 = ADD32(ctx->r29, 0X34);
    // 0x8005C90C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005C910: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8005C914: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x8005C918: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x8005C91C: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x8005C920: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8005C924: jal         0x8005C790
    // 0x8005C928: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    func_8005C790(rdram, ctx);
        goto after_0;
    // 0x8005C928: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    after_0:
    // 0x8005C92C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8005C930: beq         $v0, $zero, L_8005C940
    if (ctx->r2 == 0) {
        // 0x8005C934: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8005C940;
    }
    // 0x8005C934: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005C938: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8005C93C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8005C940:
    // 0x8005C940: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005C944: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8005C948: jr          $ra
    // 0x8005C94C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8005C94C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8005C950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C950: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005C954: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005C958: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x8005C95C: jal         0x8004A0A0
    // 0x8005C960: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005C960: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x8005C964: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x8005C968: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8005C96C: lwc1        $f10, 0x24($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X24);
    // 0x8005C970: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8005C974: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x8005C978: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005C97C: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x8005C980: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8005C984: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    // 0x8005C988: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8005C98C: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x8005C990: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8005C994: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x8005C998: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8005C99C: lwc1        $f4, 0x30($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X30);
    // 0x8005C9A0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8005C9A4: swc1        $f10, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f10.u32l;
    // 0x8005C9A8: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005C9AC: lwc1        $f10, 0x34($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8005C9B0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8005C9B4: swc1        $f8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f8.u32l;
    // 0x8005C9B8: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8005C9BC: nop

    // 0x8005C9C0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8005C9C4: swc1        $f6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f6.u32l;
    // 0x8005C9C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005C9CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8005C9D0: jr          $ra
    // 0x8005C9D4: nop

    return;
    // 0x8005C9D4: nop

;}
RECOMP_FUNC void func_8005C9D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C9D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005C9DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005C9E0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8005C9E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005C9E8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8005C9EC: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x8005C9F0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8005C9F4: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x8005C9F8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8005C9FC: jal         0x8005C790
    // 0x8005CA00: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    func_8005C790(rdram, ctx);
        goto after_0;
    // 0x8005CA00: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    after_0:
    // 0x8005CA04: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8005CA08: beq         $v0, $zero, L_8005CA2C
    if (ctx->r2 == 0) {
        // 0x8005CA0C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8005CA2C;
    }
    // 0x8005CA0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005CA10: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8005CA14: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8005CA18: beq         $t7, $zero, L_8005CA2C
    if (ctx->r15 == 0) {
        // 0x8005CA1C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8005CA2C;
    }
    // 0x8005CA1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005CA20: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8005CA24: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8005CA28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8005CA2C:
    // 0x8005CA2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005CA30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8005CA34: jr          $ra
    // 0x8005CA38: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8005CA38: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8005CA3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005CA3C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8005CA40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005CA44: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x8005CA48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005CA4C: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x8005CA50: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x8005CA54: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x8005CA58: jal         0x8005C9D8
    // 0x8005CA5C: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    func_8005C9D8(rdram, ctx);
        goto after_0;
    // 0x8005CA5C: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    after_0:
    // 0x8005CA60: beq         $v0, $zero, L_8005CAFC
    if (ctx->r2 == 0) {
        // 0x8005CA64: lw          $t8, 0x80($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X80);
            goto L_8005CAFC;
    }
    // 0x8005CA64: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x8005CA68: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x8005CA6C: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x8005CA70: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8005CA74: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8005CA78: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8005CA7C: lw          $t8, 0x8($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X8);
    // 0x8005CA80: jal         0x8003F398
    // 0x8005CA84: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    func_8003F398(rdram, ctx);
        goto after_1;
    // 0x8005CA84: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    after_1:
    // 0x8005CA88: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x8005CA8C: jal         0x8005C950
    // 0x8005CA90: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    func_8005C950(rdram, ctx);
        goto after_2;
    // 0x8005CA90: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x8005CA94: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8005CA98: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x8005CA9C: nop

    // 0x8005CAA0: swc1        $f4, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f4.u32l;
    // 0x8005CAA4: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x8005CAA8: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8005CAAC: nop

    // 0x8005CAB0: swc1        $f6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f6.u32l;
    // 0x8005CAB4: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x8005CAB8: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8005CABC: nop

    // 0x8005CAC0: swc1        $f8, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f8.u32l;
    // 0x8005CAC4: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8005CAC8: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8005CACC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8005CAD0: swc1        $f10, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->f10.u32l;
    // 0x8005CAD4: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x8005CAD8: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8005CADC: nop

    // 0x8005CAE0: swc1        $f4, 0x34($t9)
    MEM_W(0X34, ctx->r25) = ctx->f4.u32l;
    // 0x8005CAE4: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x8005CAE8: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8005CAEC: nop

    // 0x8005CAF0: swc1        $f6, 0x38($t7)
    MEM_W(0X38, ctx->r15) = ctx->f6.u32l;
    // 0x8005CAF4: sw          $t6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r14;
    // 0x8005CAF8: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
L_8005CAFC:
    // 0x8005CAFC: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x8005CB00: beq         $t8, $zero, L_8005CB54
    if (ctx->r24 == 0) {
        // 0x8005CB04: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_8005CB54;
    }
    // 0x8005CB04: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8005CB08: jal         0x8004A0A0
    // 0x8005CB0C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    func_8004A0A0(rdram, ctx);
        goto after_3;
    // 0x8005CB0C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_3:
    // 0x8005CB10: lw          $v1, 0x7C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X7C);
    // 0x8005CB14: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8005CB18: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8005CB1C: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8005CB20: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8005CB24: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x8005CB28: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x8005CB2C: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8005CB30: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8005CB34: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8005CB38: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8005CB3C: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x8005CB40: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8005CB44: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x8005CB48: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8005CB4C: jal         0x8004A0A0
    // 0x8005CB50: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_4;
    // 0x8005CB50: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    after_4:
L_8005CB54:
    // 0x8005CB54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005CB58: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
    // 0x8005CB5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005CB60: jr          $ra
    // 0x8005CB64: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8005CB64: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_8005CB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005CB68: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8005CB6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005CB70: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8005CB74: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005CB78: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8005CB7C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8005CB80: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8005CB84: jal         0x8005C9D8
    // 0x8005CB88: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    func_8005C9D8(rdram, ctx);
        goto after_0;
    // 0x8005CB88: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    after_0:
    // 0x8005CB8C: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x8005CB90: beq         $v0, $zero, L_8005CBF4
    if (ctx->r2 == 0) {
        // 0x8005CB94: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8005CBF4;
    }
    // 0x8005CB94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005CB98: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8005CB9C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x8005CBA0: jal         0x8003F5C0
    // 0x8005CBA4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_8003F5C0(rdram, ctx);
        goto after_1;
    // 0x8005CBA4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_1:
    // 0x8005CBA8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8005CBAC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8005CBB0: jal         0x8005C950
    // 0x8005CBB4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_8005C950(rdram, ctx);
        goto after_2;
    // 0x8005CBB4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    after_2:
    // 0x8005CBB8: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8005CBBC: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x8005CBC0: beq         $t6, $zero, L_8005CBEC
    if (ctx->r14 == 0) {
        // 0x8005CBC4: addiu       $a1, $zero, 0x14
        ctx->r5 = ADD32(0, 0X14);
            goto L_8005CBEC;
    }
    // 0x8005CBC4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8005CBC8: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8005CBCC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8005CBD0: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x8005CBD4: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8005CBD8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x8005CBDC: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x8005CBE0: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8005CBE4: jal         0x8004A0A0
    // 0x8005CBE8: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_3;
    // 0x8005CBE8: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_3:
L_8005CBEC:
    // 0x8005CBEC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8005CBF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8005CBF4:
    // 0x8005CBF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005CBF8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8005CBFC: jr          $ra
    // 0x8005CC00: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8005CC00: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8005CC10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005CC10: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8005CC14: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8005CC18: addiu       $a0, $a0, -0x61E8
    ctx->r4 = ADD32(ctx->r4, -0X61E8);
    // 0x8005CC1C: addiu       $v1, $v1, -0x65A8
    ctx->r3 = ADD32(ctx->r3, -0X65A8);
    // 0x8005CC20: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8005CC24:
    // 0x8005CC24: lw          $t6, 0x2C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X2C);
    // 0x8005CC28: nop

    // 0x8005CC2C: beq         $v0, $t6, L_8005CC44
    if (ctx->r2 == ctx->r14) {
        // 0x8005CC30: nop
    
            goto L_8005CC44;
    }
    // 0x8005CC30: nop

    // 0x8005CC34: lw          $t7, 0x24($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X24);
    // 0x8005CC38: nop

    // 0x8005CC3C: ori         $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 | 0X4000;
    // 0x8005CC40: sw          $t8, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r24;
L_8005CC44:
    // 0x8005CC44: lw          $t9, 0x5C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X5C);
    // 0x8005CC48: nop

    // 0x8005CC4C: beq         $v0, $t9, L_8005CC64
    if (ctx->r2 == ctx->r25) {
        // 0x8005CC50: nop
    
            goto L_8005CC64;
    }
    // 0x8005CC50: nop

    // 0x8005CC54: lw          $t0, 0x54($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X54);
    // 0x8005CC58: nop

    // 0x8005CC5C: ori         $t1, $t0, 0x4000
    ctx->r9 = ctx->r8 | 0X4000;
    // 0x8005CC60: sw          $t1, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r9;
L_8005CC64:
    // 0x8005CC64: lw          $t2, 0x8C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8C);
    // 0x8005CC68: nop

    // 0x8005CC6C: beq         $v0, $t2, L_8005CC84
    if (ctx->r2 == ctx->r10) {
        // 0x8005CC70: nop
    
            goto L_8005CC84;
    }
    // 0x8005CC70: nop

    // 0x8005CC74: lw          $t3, 0x84($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X84);
    // 0x8005CC78: nop

    // 0x8005CC7C: ori         $t4, $t3, 0x4000
    ctx->r12 = ctx->r11 | 0X4000;
    // 0x8005CC80: sw          $t4, 0x84($v1)
    MEM_W(0X84, ctx->r3) = ctx->r12;
L_8005CC84:
    // 0x8005CC84: lw          $t5, 0xBC($v1)
    ctx->r13 = MEM_W(ctx->r3, 0XBC);
    // 0x8005CC88: nop

    // 0x8005CC8C: beq         $v0, $t5, L_8005CCA4
    if (ctx->r2 == ctx->r13) {
        // 0x8005CC90: nop
    
            goto L_8005CCA4;
    }
    // 0x8005CC90: nop

    // 0x8005CC94: lw          $t6, 0xB4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XB4);
    // 0x8005CC98: nop

    // 0x8005CC9C: ori         $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 | 0X4000;
    // 0x8005CCA0: sw          $t7, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = ctx->r15;
L_8005CCA4:
    // 0x8005CCA4: addiu       $v1, $v1, 0xC0
    ctx->r3 = ADD32(ctx->r3, 0XC0);
    // 0x8005CCA8: bne         $v1, $a0, L_8005CC24
    if (ctx->r3 != ctx->r4) {
        // 0x8005CCAC: nop
    
            goto L_8005CC24;
    }
    // 0x8005CCAC: nop

    // 0x8005CCB0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005CCB4: addiu       $v0, $v0, 0x1DB0
    ctx->r2 = ADD32(ctx->r2, 0X1DB0);
    // 0x8005CCB8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8005CCBC: nop

    // 0x8005CCC0: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x8005CCC4: jr          $ra
    // 0x8005CCC8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    return;
    // 0x8005CCC8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_8005CCCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005CCCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005CCD0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8005CCD4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8005CCD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005CCDC: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x8005CCE0: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x8005CCE4: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x8005CCE8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8005CCEC: addiu       $s2, $s2, 0x1DB0
    ctx->r18 = ADD32(ctx->r18, 0X1DB0);
    // 0x8005CCF0: addiu       $s1, $s1, 0x1DAC
    ctx->r17 = ADD32(ctx->r17, 0X1DAC);
    // 0x8005CCF4: addiu       $s0, $s0, 0x1DA4
    ctx->r16 = ADD32(ctx->r16, 0X1DA4);
L_8005CCF8:
    // 0x8005CCF8: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8005CCFC: nop

    // 0x8005CD00: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8005CD04: jal         0x80007AB0
    // 0x8005CD08: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    func_80007AB0(rdram, ctx);
        goto after_0;
    // 0x8005CD08: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    after_0:
    // 0x8005CD0C: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x8005CD10: nop

    // 0x8005CD14: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8005CD18: beq         $t9, $zero, L_8005CCF8
    if (ctx->r25 == 0) {
        // 0x8005CD1C: nop
    
            goto L_8005CCF8;
    }
    // 0x8005CD1C: nop

    // 0x8005CD20: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x8005CD24: nop

    // 0x8005CD28: bne         $t0, $zero, L_8005CCF8
    if (ctx->r8 != 0) {
        // 0x8005CD2C: nop
    
            goto L_8005CCF8;
    }
    // 0x8005CD2C: nop

    // 0x8005CD30: jal         0x80007AE0
    // 0x8005CD34: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    func_80007AE0(rdram, ctx);
        goto after_1;
    // 0x8005CD34: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    after_1:
    // 0x8005CD38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8005CD3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005CD40: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8005CD44: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8005CD48: jr          $ra
    // 0x8005CD4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8005CD4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8005CD50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005CD50: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8005CD54: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8005CD58: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8005CD5C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8005CD60: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x8005CD64: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x8005CD68: sw          $t6, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r14;
    // 0x8005CD6C: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x8005CD70: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x8005CD74: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x8005CD78: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x8005CD7C: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x8005CD80: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x8005CD84: swc1        $f2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f2.u32l;
    // 0x8005CD88: swc1        $f2, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f2.u32l;
    // 0x8005CD8C: jr          $ra
    // 0x8005CD90: swc1        $f2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f2.u32l;
    return;
    // 0x8005CD90: swc1        $f2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f2.u32l;
;}
RECOMP_FUNC void func_8005CD94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005CD94: jr          $ra
    // 0x8005CD98: nop

    return;
    // 0x8005CD98: nop

;}
RECOMP_FUNC void func_8005CD9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005CD9C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8005CDA0: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x8005CDA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005CDA8: addiu       $a2, $a2, -0x61E8
    ctx->r6 = ADD32(ctx->r6, -0X61E8);
    // 0x8005CDAC: addiu       $a1, $a1, -0x65A8
    ctx->r5 = ADD32(ctx->r5, -0X65A8);
    // 0x8005CDB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_8005CDB4:
    // 0x8005CDB4: jal         0x8005CD50
    // 0x8005CDB8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8005CD50(rdram, ctx);
        goto after_0;
    // 0x8005CDB8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8005CDBC: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    // 0x8005CDC0: bne         $a1, $a2, L_8005CDB4
    if (ctx->r5 != ctx->r6) {
        // 0x8005CDC4: nop
    
            goto L_8005CDB4;
    }
    // 0x8005CDC4: nop

    // 0x8005CDC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005CDCC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005CDD0: sw          $zero, 0x1DA8($at)
    MEM_W(0X1DA8, ctx->r1) = 0;
    // 0x8005CDD4: jr          $ra
    // 0x8005CDD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8005CDD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8005CDDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005CDDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005CDE0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8005CDE4: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x8005CDE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005CDEC: addiu       $a2, $a2, -0x61E8
    ctx->r6 = ADD32(ctx->r6, -0X61E8);
    // 0x8005CDF0: addiu       $a1, $a1, -0x65A8
    ctx->r5 = ADD32(ctx->r5, -0X65A8);
L_8005CDF4:
    // 0x8005CDF4: jal         0x8005CD50
    // 0x8005CDF8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8005CD50(rdram, ctx);
        goto after_0;
    // 0x8005CDF8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8005CDFC: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    // 0x8005CE00: bne         $a1, $a2, L_8005CDF4
    if (ctx->r5 != ctx->r6) {
        // 0x8005CE04: nop
    
            goto L_8005CDF4;
    }
    // 0x8005CE04: nop

    // 0x8005CE08: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005CE0C: lui         $a0, 0x8006
    ctx->r4 = S32(0X8006 << 16);
    // 0x8005CE10: sw          $zero, 0x1DA8($at)
    MEM_W(0X1DA8, ctx->r1) = 0;
    // 0x8005CE14: addiu       $a0, $a0, -0x3334
    ctx->r4 = ADD32(ctx->r4, -0X3334);
    // 0x8005CE18: ori         $a1, $zero, 0xFEAF
    ctx->r5 = 0 | 0XFEAF;
    // 0x8005CE1C: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x8005CE20: jal         0x80007C3C
    // 0x8005CE24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_1;
    // 0x8005CE24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x8005CE28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005CE2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005CE30: sw          $v0, -0x2760($at)
    MEM_W(-0X2760, ctx->r1) = ctx->r2;
    // 0x8005CE34: jr          $ra
    // 0x8005CE38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8005CE38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8005CE3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005CE3C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8005CE40: lw          $t6, 0x1DA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1DA0);
    // 0x8005CE44: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8005CE48: bne         $t6, $zero, L_8005CE94
    if (ctx->r14 != 0) {
        // 0x8005CE4C: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_8005CE94;
    }
    // 0x8005CE4C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005CE50: beq         $v0, $at, L_8005CE94
    if (ctx->r2 == ctx->r1) {
        // 0x8005CE54: slti        $at, $v0, 0x15
        ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
            goto L_8005CE94;
    }
    // 0x8005CE54: slti        $at, $v0, 0x15
    ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x8005CE58: beq         $at, $zero, L_8005CE94
    if (ctx->r1 == 0) {
        // 0x8005CE5C: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_8005CE94;
    }
    // 0x8005CE5C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8005CE60: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x8005CE64: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8005CE68: addiu       $t8, $t8, -0x65A8
    ctx->r24 = ADD32(ctx->r24, -0X65A8);
    // 0x8005CE6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8005CE70: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8005CE74: lw          $t9, 0x28($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X28);
    // 0x8005CE78: nop

    // 0x8005CE7C: bne         $a0, $t9, L_8005CE94
    if (ctx->r4 != ctx->r25) {
        // 0x8005CE80: nop
    
            goto L_8005CE94;
    }
    // 0x8005CE80: nop

    // 0x8005CE84: lw          $t0, 0x24($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X24);
    // 0x8005CE88: nop

    // 0x8005CE8C: ori         $t1, $t0, 0x200
    ctx->r9 = ctx->r8 | 0X200;
    // 0x8005CE90: sw          $t1, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r9;
L_8005CE94:
    // 0x8005CE94: jr          $ra
    // 0x8005CE98: nop

    return;
    // 0x8005CE98: nop

;}
RECOMP_FUNC void func_8005CE9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005CE9C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8005CEA0: lw          $t6, 0x1DA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1DA0);
    // 0x8005CEA4: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8005CEA8: bne         $t6, $zero, L_8005CF18
    if (ctx->r14 != 0) {
        // 0x8005CEAC: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_8005CF18;
    }
    // 0x8005CEAC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005CEB0: beq         $v0, $at, L_8005CF18
    if (ctx->r2 == ctx->r1) {
        // 0x8005CEB4: slti        $at, $v0, 0x15
        ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
            goto L_8005CF18;
    }
    // 0x8005CEB4: slti        $at, $v0, 0x15
    ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x8005CEB8: beq         $at, $zero, L_8005CF18
    if (ctx->r1 == 0) {
        // 0x8005CEBC: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_8005CF18;
    }
    // 0x8005CEBC: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8005CEC0: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x8005CEC4: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8005CEC8: addiu       $t8, $t8, -0x65A8
    ctx->r24 = ADD32(ctx->r24, -0X65A8);
    // 0x8005CECC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8005CED0: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8005CED4: lw          $t9, 0x28($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X28);
    // 0x8005CED8: nop

    // 0x8005CEDC: bne         $a0, $t9, L_8005CF18
    if (ctx->r4 != ctx->r25) {
        // 0x8005CEE0: nop
    
            goto L_8005CF18;
    }
    // 0x8005CEE0: nop

    // 0x8005CEE4: lw          $t0, 0x24($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X24);
    // 0x8005CEE8: nop

    // 0x8005CEEC: ori         $t1, $t0, 0x100
    ctx->r9 = ctx->r8 | 0X100;
    // 0x8005CEF0: sw          $t1, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r9;
    // 0x8005CEF4: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8005CEF8: nop

    // 0x8005CEFC: swc1        $f4, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f4.u32l;
    // 0x8005CF00: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8005CF04: nop

    // 0x8005CF08: swc1        $f6, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f6.u32l;
    // 0x8005CF0C: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8005CF10: nop

    // 0x8005CF14: swc1        $f8, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f8.u32l;
L_8005CF18:
    // 0x8005CF18: jr          $ra
    // 0x8005CF1C: nop

    return;
    // 0x8005CF1C: nop

;}
RECOMP_FUNC void func_8005CF20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005CF20: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8005CF24: lw          $t6, 0x1DA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1DA0);
    // 0x8005CF28: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8005CF2C: bne         $t6, $zero, L_8005CF9C
    if (ctx->r14 != 0) {
        // 0x8005CF30: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_8005CF9C;
    }
    // 0x8005CF30: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005CF34: beq         $v0, $at, L_8005CF9C
    if (ctx->r2 == ctx->r1) {
        // 0x8005CF38: slti        $at, $v0, 0x15
        ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
            goto L_8005CF9C;
    }
    // 0x8005CF38: slti        $at, $v0, 0x15
    ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x8005CF3C: beq         $at, $zero, L_8005CF9C
    if (ctx->r1 == 0) {
        // 0x8005CF40: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_8005CF9C;
    }
    // 0x8005CF40: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8005CF44: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x8005CF48: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8005CF4C: addiu       $t8, $t8, -0x65A8
    ctx->r24 = ADD32(ctx->r24, -0X65A8);
    // 0x8005CF50: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8005CF54: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8005CF58: lw          $t9, 0x28($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X28);
    // 0x8005CF5C: nop

    // 0x8005CF60: bne         $a0, $t9, L_8005CF9C
    if (ctx->r4 != ctx->r25) {
        // 0x8005CF64: nop
    
            goto L_8005CF9C;
    }
    // 0x8005CF64: nop

    // 0x8005CF68: lw          $t0, 0x24($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X24);
    // 0x8005CF6C: nop

    // 0x8005CF70: ori         $t1, $t0, 0x400
    ctx->r9 = ctx->r8 | 0X400;
    // 0x8005CF74: sw          $t1, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r9;
    // 0x8005CF78: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8005CF7C: nop

    // 0x8005CF80: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
    // 0x8005CF84: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8005CF88: nop

    // 0x8005CF8C: swc1        $f6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f6.u32l;
    // 0x8005CF90: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8005CF94: nop

    // 0x8005CF98: swc1        $f8, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f8.u32l;
L_8005CF9C:
    // 0x8005CF9C: jr          $ra
    // 0x8005CFA0: nop

    return;
    // 0x8005CFA0: nop

;}
RECOMP_FUNC void func_8005CFA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005CFA4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8005CFA8: lw          $t6, 0x1DA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1DA0);
    // 0x8005CFAC: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8005CFB0: bne         $t6, $zero, L_8005D020
    if (ctx->r14 != 0) {
        // 0x8005CFB4: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_8005D020;
    }
    // 0x8005CFB4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005CFB8: beq         $v0, $at, L_8005D020
    if (ctx->r2 == ctx->r1) {
        // 0x8005CFBC: slti        $at, $v0, 0x15
        ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
            goto L_8005D020;
    }
    // 0x8005CFBC: slti        $at, $v0, 0x15
    ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x8005CFC0: beq         $at, $zero, L_8005D020
    if (ctx->r1 == 0) {
        // 0x8005CFC4: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_8005D020;
    }
    // 0x8005CFC4: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8005CFC8: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x8005CFCC: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8005CFD0: addiu       $t8, $t8, -0x65A8
    ctx->r24 = ADD32(ctx->r24, -0X65A8);
    // 0x8005CFD4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8005CFD8: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8005CFDC: lw          $t9, 0x28($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X28);
    // 0x8005CFE0: nop

    // 0x8005CFE4: bne         $a0, $t9, L_8005D020
    if (ctx->r4 != ctx->r25) {
        // 0x8005CFE8: nop
    
            goto L_8005D020;
    }
    // 0x8005CFE8: nop

    // 0x8005CFEC: lw          $t0, 0x24($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X24);
    // 0x8005CFF0: nop

    // 0x8005CFF4: ori         $t1, $t0, 0x800
    ctx->r9 = ctx->r8 | 0X800;
    // 0x8005CFF8: sw          $t1, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r9;
    // 0x8005CFFC: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8005D000: nop

    // 0x8005D004: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x8005D008: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8005D00C: nop

    // 0x8005D010: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
    // 0x8005D014: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8005D018: nop

    // 0x8005D01C: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
L_8005D020:
    // 0x8005D020: jr          $ra
    // 0x8005D024: nop

    return;
    // 0x8005D024: nop

;}
RECOMP_FUNC void func_8005D028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005D028: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8005D02C: lw          $t6, 0x1DA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1DA0);
    // 0x8005D030: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005D034: bne         $t6, $zero, L_8005D098
    if (ctx->r14 != 0) {
        // 0x8005D038: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8005D098;
    }
    // 0x8005D038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005D03C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8005D040: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005D044: beq         $v1, $at, L_8005D098
    if (ctx->r3 == ctx->r1) {
        // 0x8005D048: slti        $at, $v1, 0x14
        ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
            goto L_8005D098;
    }
    // 0x8005D048: slti        $at, $v1, 0x14
    ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
    // 0x8005D04C: beq         $at, $zero, L_8005D098
    if (ctx->r1 == 0) {
        // 0x8005D050: sll         $t7, $v1, 2
        ctx->r15 = S32(ctx->r3 << 2);
            goto L_8005D098;
    }
    // 0x8005D050: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x8005D054: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x8005D058: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8005D05C: addiu       $t8, $t8, -0x65A8
    ctx->r24 = ADD32(ctx->r24, -0X65A8);
    // 0x8005D060: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8005D064: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8005D068: lw          $t9, 0x28($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X28);
    // 0x8005D06C: nop

    // 0x8005D070: bne         $a0, $t9, L_8005D09C
    if (ctx->r4 != ctx->r25) {
        // 0x8005D074: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8005D09C;
    }
    // 0x8005D074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005D078: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x8005D07C: addiu       $at, $zero, -0x2001
    ctx->r1 = ADD32(0, -0X2001);
    // 0x8005D080: andi        $t0, $v1, 0xA000
    ctx->r8 = ctx->r3 & 0XA000;
    // 0x8005D084: beq         $t0, $zero, L_8005D098
    if (ctx->r8 == 0) {
        // 0x8005D088: and         $t1, $v1, $at
        ctx->r9 = ctx->r3 & ctx->r1;
            goto L_8005D098;
    }
    // 0x8005D088: and         $t1, $v1, $at
    ctx->r9 = ctx->r3 & ctx->r1;
    // 0x8005D08C: lw          $a0, 0x2C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2C);
    // 0x8005D090: jal         0x800073C0
    // 0x8005D094: sw          $t1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r9;
    func_800073C0(rdram, ctx);
        goto after_0;
    // 0x8005D094: sw          $t1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r9;
    after_0:
L_8005D098:
    // 0x8005D098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005D09C:
    // 0x8005D09C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005D0A0: jr          $ra
    // 0x8005D0A4: nop

    return;
    // 0x8005D0A4: nop

;}
RECOMP_FUNC void func_8005D0A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005D0A8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8005D0AC: lw          $t6, 0x1DA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1DA0);
    // 0x8005D0B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005D0B4: bne         $t6, $zero, L_8005D118
    if (ctx->r14 != 0) {
        // 0x8005D0B8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8005D118;
    }
    // 0x8005D0B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005D0BC: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8005D0C0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005D0C4: beq         $v1, $at, L_8005D118
    if (ctx->r3 == ctx->r1) {
        // 0x8005D0C8: slti        $at, $v1, 0x14
        ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
            goto L_8005D118;
    }
    // 0x8005D0C8: slti        $at, $v1, 0x14
    ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
    // 0x8005D0CC: beq         $at, $zero, L_8005D118
    if (ctx->r1 == 0) {
        // 0x8005D0D0: sll         $t7, $v1, 2
        ctx->r15 = S32(ctx->r3 << 2);
            goto L_8005D118;
    }
    // 0x8005D0D0: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x8005D0D4: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x8005D0D8: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8005D0DC: addiu       $t8, $t8, -0x65A8
    ctx->r24 = ADD32(ctx->r24, -0X65A8);
    // 0x8005D0E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8005D0E4: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8005D0E8: lw          $t9, 0x28($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X28);
    // 0x8005D0EC: nop

    // 0x8005D0F0: bne         $a0, $t9, L_8005D11C
    if (ctx->r4 != ctx->r25) {
        // 0x8005D0F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8005D11C;
    }
    // 0x8005D0F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005D0F8: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x8005D0FC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8005D100: andi        $t0, $v1, 0x8000
    ctx->r8 = ctx->r3 & 0X8000;
    // 0x8005D104: beq         $t0, $zero, L_8005D118
    if (ctx->r8 == 0) {
        // 0x8005D108: ori         $t1, $v1, 0x2000
        ctx->r9 = ctx->r3 | 0X2000;
            goto L_8005D118;
    }
    // 0x8005D108: ori         $t1, $v1, 0x2000
    ctx->r9 = ctx->r3 | 0X2000;
    // 0x8005D10C: lw          $a0, 0x2C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2C);
    // 0x8005D110: jal         0x80007684
    // 0x8005D114: sw          $t1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r9;
    func_80007684(rdram, ctx);
        goto after_0;
    // 0x8005D114: sw          $t1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r9;
    after_0:
L_8005D118:
    // 0x8005D118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005D11C:
    // 0x8005D11C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005D120: jr          $ra
    // 0x8005D124: nop

    return;
    // 0x8005D124: nop

;}
RECOMP_FUNC void func_8005D128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005D128: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8005D12C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8005D130: lw          $t6, 0x1DA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1DA0);
    // 0x8005D134: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8005D138: bne         $t6, $zero, L_8005D1A4
    if (ctx->r14 != 0) {
        // 0x8005D13C: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_8005D1A4;
    }
    // 0x8005D13C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8005D140: beq         $v0, $at, L_8005D154
    if (ctx->r2 == ctx->r1) {
        // 0x8005D144: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_8005D154;
    }
    // 0x8005D144: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8005D148: slti        $at, $v0, 0x14
    ctx->r1 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
    // 0x8005D14C: bne         $at, $zero, L_8005D15C
    if (ctx->r1 != 0) {
        // 0x8005D150: sll         $t8, $v0, 2
        ctx->r24 = S32(ctx->r2 << 2);
            goto L_8005D15C;
    }
    // 0x8005D150: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
L_8005D154:
    // 0x8005D154: jr          $ra
    // 0x8005D158: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x8005D158: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
L_8005D15C:
    // 0x8005D15C: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x8005D160: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8005D164: addiu       $t9, $t9, -0x65A8
    ctx->r25 = ADD32(ctx->r25, -0X65A8);
    // 0x8005D168: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8005D16C: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x8005D170: lw          $t0, 0x28($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X28);
    // 0x8005D174: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8005D178: beq         $t0, $v1, L_8005D188
    if (ctx->r8 == ctx->r3) {
        // 0x8005D17C: addiu       $t4, $zero, -0x1
        ctx->r12 = ADD32(0, -0X1);
            goto L_8005D188;
    }
    // 0x8005D17C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8005D180: jr          $ra
    // 0x8005D184: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    return;
    // 0x8005D184: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
L_8005D188:
    // 0x8005D188: lw          $v0, 0x24($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X24);
    // 0x8005D18C: nop

    // 0x8005D190: andi        $t2, $v0, 0x8000
    ctx->r10 = ctx->r2 & 0X8000;
    // 0x8005D194: beq         $t2, $zero, L_8005D1A0
    if (ctx->r10 == 0) {
        // 0x8005D198: ori         $t3, $v0, 0x4000
        ctx->r11 = ctx->r2 | 0X4000;
            goto L_8005D1A0;
    }
    // 0x8005D198: ori         $t3, $v0, 0x4000
    ctx->r11 = ctx->r2 | 0X4000;
    // 0x8005D19C: sw          $t3, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r11;
L_8005D1A0:
    // 0x8005D1A0: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
L_8005D1A4:
    // 0x8005D1A4: jr          $ra
    // 0x8005D1A8: nop

    return;
    // 0x8005D1A8: nop

    // 0x8005D1AC: jr          $ra
    // 0x8005D1B0: nop

    return;
    // 0x8005D1B0: nop

;}
RECOMP_FUNC void func_8005D1B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005D1B4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8005D1B8: lw          $t6, 0x1DA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1DA0);
    // 0x8005D1BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005D1C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005D1C4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8005D1C8: bne         $t6, $zero, L_8005D34C
    if (ctx->r14 != 0) {
        // 0x8005D1CC: or          $t1, $a1, $zero
        ctx->r9 = ctx->r5 | 0;
            goto L_8005D34C;
    }
    // 0x8005D1CC: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
    // 0x8005D1D0: sra         $t7, $a0, 5
    ctx->r15 = S32(SIGNED(ctx->r4) >> 5);
    // 0x8005D1D4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8005D1D8: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8005D1DC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8005D1E0: lw          $t9, 0x27B8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X27B8);
    // 0x8005D1E4: bgez        $a2, L_8005D1F8
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8005D1E8: andi        $t2, $a2, 0x1F
        ctx->r10 = ctx->r6 & 0X1F;
            goto L_8005D1F8;
    }
    // 0x8005D1E8: andi        $t2, $a2, 0x1F
    ctx->r10 = ctx->r6 & 0X1F;
    // 0x8005D1EC: beq         $t2, $zero, L_8005D1F8
    if (ctx->r10 == 0) {
        // 0x8005D1F0: nop
    
            goto L_8005D1F8;
    }
    // 0x8005D1F0: nop

    // 0x8005D1F4: addiu       $t2, $t2, -0x20
    ctx->r10 = ADD32(ctx->r10, -0X20);
L_8005D1F8:
    // 0x8005D1F8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8005D1FC: sllv        $t4, $t3, $t2
    ctx->r12 = S32(ctx->r11 << (ctx->r10 & 31));
    // 0x8005D200: and         $v0, $t9, $t4
    ctx->r2 = ctx->r25 & ctx->r12;
    // 0x8005D204: beq         $v0, $zero, L_8005D248
    if (ctx->r2 == 0) {
        // 0x8005D208: addiu       $v1, $zero, 0xA
        ctx->r3 = ADD32(0, 0XA);
            goto L_8005D248;
    }
    // 0x8005D208: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x8005D20C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8005D210: addiu       $v0, $v0, -0x65A8
    ctx->r2 = ADD32(ctx->r2, -0X65A8);
    // 0x8005D214: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8005D218: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_8005D21C:
    // 0x8005D21C: lw          $t5, 0x24($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X24);
    // 0x8005D220: nop

    // 0x8005D224: bne         $t5, $zero, L_8005D234
    if (ctx->r13 != 0) {
        // 0x8005D228: nop
    
            goto L_8005D234;
    }
    // 0x8005D228: nop

    // 0x8005D22C: b           L_8005D27C
    // 0x8005D230: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8005D27C;
    // 0x8005D230: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8005D234:
    // 0x8005D234: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8005D238: bne         $v1, $a0, L_8005D21C
    if (ctx->r3 != ctx->r4) {
        // 0x8005D23C: addiu       $v0, $v0, 0x30
        ctx->r2 = ADD32(ctx->r2, 0X30);
            goto L_8005D21C;
    }
    // 0x8005D23C: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8005D240: b           L_8005D27C
    // 0x8005D244: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8005D27C;
    // 0x8005D244: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8005D248:
    // 0x8005D248: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8005D24C: addiu       $v0, $v0, -0x63C8
    ctx->r2 = ADD32(ctx->r2, -0X63C8);
    // 0x8005D250: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
L_8005D254:
    // 0x8005D254: lw          $t6, 0x24($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X24);
    // 0x8005D258: nop

    // 0x8005D25C: bne         $t6, $zero, L_8005D26C
    if (ctx->r14 != 0) {
        // 0x8005D260: nop
    
            goto L_8005D26C;
    }
    // 0x8005D260: nop

    // 0x8005D264: b           L_8005D27C
    // 0x8005D268: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8005D27C;
    // 0x8005D268: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8005D26C:
    // 0x8005D26C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8005D270: bne         $v1, $a0, L_8005D254
    if (ctx->r3 != ctx->r4) {
        // 0x8005D274: addiu       $v0, $v0, 0x30
        ctx->r2 = ADD32(ctx->r2, 0X30);
            goto L_8005D254;
    }
    // 0x8005D274: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8005D278: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8005D27C:
    // 0x8005D27C: bgez        $v0, L_8005D28C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8005D280: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_8005D28C;
    }
    // 0x8005D280: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x8005D284: b           L_8005D354
    // 0x8005D288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8005D354;
    // 0x8005D288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005D28C:
    // 0x8005D28C: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x8005D290: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8005D294: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x8005D298: lw          $a0, 0x27D0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X27D0);
    // 0x8005D29C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005D2A0: bne         $a0, $at, L_8005D2B0
    if (ctx->r4 != ctx->r1) {
        // 0x8005D2A4: ori         $a1, $zero, 0xFEAF
        ctx->r5 = 0 | 0XFEAF;
            goto L_8005D2B0;
    }
    // 0x8005D2A4: ori         $a1, $zero, 0xFEAF
    ctx->r5 = 0 | 0XFEAF;
    // 0x8005D2A8: b           L_8005D350
    // 0x8005D2AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8005D350;
    // 0x8005D2AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8005D2B0:
    // 0x8005D2B0: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x8005D2B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8005D2B8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8005D2BC: jal         0x80007C3C
    // 0x8005D2C0: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_80007C3C(rdram, ctx);
        goto after_0;
    // 0x8005D2C0: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_0:
    // 0x8005D2C4: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8005D2C8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8005D2CC: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x8005D2D0: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8005D2D4: subu        $t8, $t8, $t0
    ctx->r24 = SUB32(ctx->r24, ctx->r8);
    // 0x8005D2D8: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8005D2DC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8005D2E0: addiu       $t3, $t3, -0x65A8
    ctx->r11 = ADD32(ctx->r11, -0X65A8);
    // 0x8005D2E4: addu        $v1, $t8, $t3
    ctx->r3 = ADD32(ctx->r24, ctx->r11);
    // 0x8005D2E8: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x8005D2EC: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8005D2F0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8005D2F4: addiu       $a0, $a0, 0x1DA8
    ctx->r4 = ADD32(ctx->r4, 0X1DA8);
    // 0x8005D2F8: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
    // 0x8005D2FC: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x8005D300: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8005D304: lw          $t2, 0x24($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X24);
    // 0x8005D308: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8005D30C: sll         $t7, $t5, 8
    ctx->r15 = S32(ctx->r13 << 8);
    // 0x8005D310: addu        $t8, $t7, $t0
    ctx->r24 = ADD32(ctx->r15, ctx->r8);
    // 0x8005D314: ori         $t9, $t2, 0x8000
    ctx->r25 = ctx->r10 | 0X8000;
    // 0x8005D318: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8005D31C: sw          $t9, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r25;
    // 0x8005D320: sw          $t8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r24;
    // 0x8005D324: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x8005D328: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x8005D32C: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
    // 0x8005D330: addiu       $a1, $a1, 0x1DAC
    ctx->r5 = ADD32(ctx->r5, 0X1DAC);
    // 0x8005D334: sw          $v1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r3;
    // 0x8005D338: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x8005D33C: lw          $v0, 0x28($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X28);
    // 0x8005D340: addiu       $t2, $t3, 0x1
    ctx->r10 = ADD32(ctx->r11, 0X1);
    // 0x8005D344: b           L_8005D350
    // 0x8005D348: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
        goto L_8005D350;
    // 0x8005D348: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
L_8005D34C:
    // 0x8005D34C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8005D350:
    // 0x8005D350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005D354:
    // 0x8005D354: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8005D358: jr          $ra
    // 0x8005D35C: nop

    return;
    // 0x8005D35C: nop

    // 0x8005D360: jr          $ra
    // 0x8005D364: nop

    return;
    // 0x8005D364: nop

    // 0x8005D368: jr          $ra
    // 0x8005D36C: nop

    return;
    // 0x8005D36C: nop

    // 0x8005D370: jr          $ra
    // 0x8005D374: nop

    return;
    // 0x8005D374: nop

;}
RECOMP_FUNC void func_8005D378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005D378: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005D37C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005D380: jal         0x80028AB8
    // 0x8005D384: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    func_80028AB8(rdram, ctx);
        goto after_0;
    // 0x8005D384: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_0:
    // 0x8005D388: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8005D38C: jal         0x80028C2C
    // 0x8005D390: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_80028C2C(rdram, ctx);
        goto after_1;
    // 0x8005D390: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_1:
    // 0x8005D394: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8005D398: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8005D39C: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    // 0x8005D3A0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8005D3A4: jal         0x80028AB8
    // 0x8005D3A8: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    func_80028AB8(rdram, ctx);
        goto after_2;
    // 0x8005D3A8: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    after_2:
    // 0x8005D3AC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8005D3B0: jal         0x80028C2C
    // 0x8005D3B4: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_80028C2C(rdram, ctx);
        goto after_3;
    // 0x8005D3B4: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_3:
    // 0x8005D3B8: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8005D3BC: lwc1        $f8, 0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8005D3C0: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    // 0x8005D3C4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8005D3C8: jal         0x80028AB8
    // 0x8005D3CC: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    func_80028AB8(rdram, ctx);
        goto after_4;
    // 0x8005D3CC: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    after_4:
    // 0x8005D3D0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8005D3D4: jal         0x80028C2C
    // 0x8005D3D8: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_80028C2C(rdram, ctx);
        goto after_5;
    // 0x8005D3D8: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_5:
    // 0x8005D3DC: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8005D3E0: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8005D3E4: nop

    // 0x8005D3E8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8005D3EC: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x8005D3F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005D3F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005D3F8: jr          $ra
    // 0x8005D3FC: nop

    return;
    // 0x8005D3FC: nop

    // 0x8005D400: jr          $ra
    // 0x8005D404: nop

    return;
    // 0x8005D404: nop

    // 0x8005D408: jr          $ra
    // 0x8005D40C: nop

    return;
    // 0x8005D40C: nop

;}
RECOMP_FUNC void func_8005D410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005D410: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005D414: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005D418: addiu       $s2, $sp, 0x1C
    ctx->r18 = ADD32(ctx->r29, 0X1C);
    // 0x8005D41C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8005D420: jal         0x800190A8
    // 0x8005D424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800190A8(rdram, ctx);
        goto after_0;
    // 0x8005D424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8005D428: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x8005D42C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005D430: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005D434: lwc1        $f6, 0x1DCC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1DCC);
    // 0x8005D438: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005D43C: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8005D440: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8005D444: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005D448: bc1f        L_8005D470
    if (!c1cs) {
        // 0x8005D44C: addu        $at, $at, $v0
        ctx->r1 = ADD32(ctx->r1, ctx->r2);
            goto L_8005D470;
    }
    // 0x8005D44C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005D450: lwc1        $f8, 0x1DD8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1DD8);
    // 0x8005D454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005D458: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x8005D45C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8005D460: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8005D464: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8005D468: jal         0x80019114
    // 0x8005D46C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_1;
    // 0x8005D46C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_1:
L_8005D470:
    // 0x8005D470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005D474: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8005D478: jr          $ra
    // 0x8005D47C: nop

    return;
    // 0x8005D47C: nop

    // 0x8005D480: jr          $ra
    // 0x8005D484: nop

    return;
    // 0x8005D484: nop

    // 0x8005D488: jr          $ra
    // 0x8005D48C: nop

    return;
    // 0x8005D48C: nop

;}
RECOMP_FUNC void func_8005D490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005D490: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005D494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005D498: addiu       $s3, $sp, 0x1C
    ctx->r19 = ADD32(ctx->r29, 0X1C);
    // 0x8005D49C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8005D4A0: jal         0x800190A8
    // 0x8005D4A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800190A8(rdram, ctx);
        goto after_0;
    // 0x8005D4A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8005D4A8: slti        $at, $s2, 0x4
    ctx->r1 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x8005D4AC: beq         $at, $zero, L_8005D4E0
    if (ctx->r1 == 0) {
        // 0x8005D4B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8005D4E0;
    }
    // 0x8005D4B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005D4B4: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x8005D4B8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005D4BC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8005D4C0: lwc1        $f4, 0x1E08($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1E08);
    // 0x8005D4C4: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8005D4C8: nop

    // 0x8005D4CC: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x8005D4D0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8005D4D4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8005D4D8: b           L_8005D510
    // 0x8005D4DC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
        goto L_8005D510;
    // 0x8005D4DC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
L_8005D4E0:
    // 0x8005D4E0: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x8005D4E4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005D4E8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8005D4EC: lwc1        $f6, 0x1E08($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1E08);
    // 0x8005D4F0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8005D4F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8005D4F8: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8005D4FC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8005D500: sub.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x8005D504: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8005D508: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8005D50C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
L_8005D510:
    // 0x8005D510: jal         0x80019114
    // 0x8005D514: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019114(rdram, ctx);
        goto after_1;
    // 0x8005D514: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_1:
    // 0x8005D518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005D51C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8005D520: jr          $ra
    // 0x8005D524: nop

    return;
    // 0x8005D524: nop

;}
RECOMP_FUNC void func_8005D528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005D528: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005D52C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005D530: addiu       $s3, $sp, 0x1C
    ctx->r19 = ADD32(ctx->r29, 0X1C);
    // 0x8005D534: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8005D538: jal         0x800190A8
    // 0x8005D53C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800190A8(rdram, ctx);
        goto after_0;
    // 0x8005D53C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8005D540: slti        $at, $s2, 0x3
    ctx->r1 = SIGNED(ctx->r18) < 0X3 ? 1 : 0;
    // 0x8005D544: beq         $at, $zero, L_8005D578
    if (ctx->r1 == 0) {
        // 0x8005D548: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8005D578;
    }
    // 0x8005D548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005D54C: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x8005D550: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005D554: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8005D558: lwc1        $f4, 0x1E14($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1E14);
    // 0x8005D55C: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8005D560: nop

    // 0x8005D564: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x8005D568: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8005D56C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8005D570: b           L_8005D5A0
    // 0x8005D574: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
        goto L_8005D5A0;
    // 0x8005D574: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
L_8005D578:
    // 0x8005D578: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x8005D57C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005D580: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8005D584: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8005D588: lwc1        $f6, 0x1E20($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1E20);
    // 0x8005D58C: nop

    // 0x8005D590: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x8005D594: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8005D598: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8005D59C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
L_8005D5A0:
    // 0x8005D5A0: jal         0x80019114
    // 0x8005D5A4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019114(rdram, ctx);
        goto after_1;
    // 0x8005D5A4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_1:
    // 0x8005D5A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005D5AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8005D5B0: jr          $ra
    // 0x8005D5B4: nop

    return;
    // 0x8005D5B4: nop

    // 0x8005D5B8: jr          $ra
    // 0x8005D5BC: nop

    return;
    // 0x8005D5BC: nop

    // 0x8005D5C0: jr          $ra
    // 0x8005D5C4: nop

    return;
    // 0x8005D5C4: nop

    // 0x8005D5C8: jr          $ra
    // 0x8005D5CC: nop

    return;
    // 0x8005D5CC: nop

    // 0x8005D5D0: jr          $ra
    // 0x8005D5D4: nop

    return;
    // 0x8005D5D4: nop

    // 0x8005D5D8: jr          $ra
    // 0x8005D5DC: nop

    return;
    // 0x8005D5DC: nop

    // 0x8005D5E0: jr          $ra
    // 0x8005D5E4: nop

    return;
    // 0x8005D5E4: nop

;}
RECOMP_FUNC void func_8005D5E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005D5E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005D5EC: bne         $s1, $zero, L_8005D60C
    if (ctx->r17 != 0) {
        // 0x8005D5F0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8005D60C;
    }
    // 0x8005D5F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005D5F4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8005D5F8: nop

    // 0x8005D5FC: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x8005D600: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x8005D604: b           L_8005D6D8
    // 0x8005D608: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
        goto L_8005D6D8;
    // 0x8005D608: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
L_8005D60C:
    // 0x8005D60C: multu       $a0, $s1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005D610: addiu       $s3, $zero, 0x168
    ctx->r19 = ADD32(0, 0X168);
    // 0x8005D614: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x8005D618: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005D61C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8005D620: lwc1        $f4, 0x1DB4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1DB4);
    // 0x8005D624: nop

    // 0x8005D628: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x8005D62C: mflo        $s2
    ctx->r18 = lo;
    // 0x8005D630: sll         $t7, $s2, 1
    ctx->r15 = S32(ctx->r18 << 1);
    // 0x8005D634: nop

    // 0x8005D638: div         $zero, $t7, $s3
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r19)));
    // 0x8005D63C: bne         $s3, $zero, L_8005D648
    if (ctx->r19 != 0) {
        // 0x8005D640: nop
    
            goto L_8005D648;
    }
    // 0x8005D640: nop

    // 0x8005D644: break       7
    do_break(2147866180);
L_8005D648:
    // 0x8005D648: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005D64C: bne         $s3, $at, L_8005D660
    if (ctx->r19 != ctx->r1) {
        // 0x8005D650: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005D660;
    }
    // 0x8005D650: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005D654: bne         $t7, $at, L_8005D660
    if (ctx->r15 != ctx->r1) {
        // 0x8005D658: nop
    
            goto L_8005D660;
    }
    // 0x8005D658: nop

    // 0x8005D65C: break       6
    do_break(2147866204);
L_8005D660:
    // 0x8005D660: mfhi        $t8
    ctx->r24 = hi;
    // 0x8005D664: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8005D668: jal         0x80028C2C
    // 0x8005D66C: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    func_80028C2C(rdram, ctx);
        goto after_0;
    // 0x8005D66C: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_0:
    // 0x8005D670: sll         $t9, $s2, 2
    ctx->r25 = S32(ctx->r18 << 2);
    // 0x8005D674: div         $zero, $t9, $s3
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r19)));
    // 0x8005D678: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8005D67C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8005D680: mtc1        $s1, $f8
    ctx->f8.u32l = ctx->r17;
    // 0x8005D684: mul.s       $f10, $f0, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8005D688: cvt.s.w     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    ctx->f20.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8005D68C: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8005D690: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x8005D694: bne         $s3, $zero, L_8005D6A0
    if (ctx->r19 != 0) {
        // 0x8005D698: nop
    
            goto L_8005D6A0;
    }
    // 0x8005D698: nop

    // 0x8005D69C: break       7
    do_break(2147866268);
L_8005D6A0:
    // 0x8005D6A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005D6A4: bne         $s3, $at, L_8005D6B8
    if (ctx->r19 != ctx->r1) {
        // 0x8005D6A8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005D6B8;
    }
    // 0x8005D6A8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005D6AC: bne         $t9, $at, L_8005D6B8
    if (ctx->r25 != ctx->r1) {
        // 0x8005D6B0: nop
    
            goto L_8005D6B8;
    }
    // 0x8005D6B0: nop

    // 0x8005D6B4: break       6
    do_break(2147866292);
L_8005D6B8:
    // 0x8005D6B8: mfhi        $t6
    ctx->r14 = hi;
    // 0x8005D6BC: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8005D6C0: jal         0x80028C2C
    // 0x8005D6C4: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    func_80028C2C(rdram, ctx);
        goto after_1;
    // 0x8005D6C4: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_1:
    // 0x8005D6C8: mul.s       $f8, $f0, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8005D6CC: nop

    // 0x8005D6D0: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x8005D6D4: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
L_8005D6D8:
    // 0x8005D6D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005D6DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005D6E0: jr          $ra
    // 0x8005D6E4: nop

    return;
    // 0x8005D6E4: nop

    // 0x8005D6E8: jr          $ra
    // 0x8005D6EC: nop

    return;
    // 0x8005D6EC: nop

    // 0x8005D6F0: jr          $ra
    // 0x8005D6F4: nop

    return;
    // 0x8005D6F4: nop

    // 0x8005D6F8: jr          $ra
    // 0x8005D6FC: nop

    return;
    // 0x8005D6FC: nop

    // 0x8005D700: jr          $ra
    // 0x8005D704: nop

    return;
    // 0x8005D704: nop

    // 0x8005D708: jr          $ra
    // 0x8005D70C: nop

    return;
    // 0x8005D70C: nop

    // 0x8005D710: jr          $ra
    // 0x8005D714: nop

    return;
    // 0x8005D714: nop

    // 0x8005D718: jr          $ra
    // 0x8005D71C: nop

    return;
    // 0x8005D71C: nop

    // 0x8005D720: jr          $ra
    // 0x8005D724: nop

    return;
    // 0x8005D724: nop

    // 0x8005D728: jr          $ra
    // 0x8005D72C: nop

    return;
    // 0x8005D72C: nop

;}
RECOMP_FUNC void func_8005D730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005D730: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x8005D734: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8005D738: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8005D73C: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8005D740: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8005D744: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8005D748: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8005D74C: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x8005D750: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x8005D754: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8005D758: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x8005D75C: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8005D760: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x8005D764: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8005D768: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8005D76C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8005D770: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8005D774: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005D778: jal         0x80007774
    // 0x8005D77C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8005D77C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8005D780: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8005D784: addiu       $t6, $t6, 0x1E90
    ctx->r14 = ADD32(ctx->r14, 0X1E90);
    // 0x8005D788: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8005D78C: addiu       $s4, $sp, 0x94
    ctx->r20 = ADD32(ctx->r29, 0X94);
    // 0x8005D790: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x8005D794: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x8005D798: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8005D79C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8005D7A0: sw          $t9, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r25;
    // 0x8005D7A4: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8005D7A8: addiu       $t8, $t8, 0x1E9C
    ctx->r24 = ADD32(ctx->r24, 0X1E9C);
    // 0x8005D7AC: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    // 0x8005D7B0: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8005D7B4: addiu       $s0, $sp, 0x88
    ctx->r16 = ADD32(ctx->r29, 0X88);
    // 0x8005D7B8: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x8005D7BC: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8005D7C0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8005D7C4: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x8005D7C8: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x8005D7CC: addiu       $a0, $zero, 0x710
    ctx->r4 = ADD32(0, 0X710);
    // 0x8005D7D0: sw          $at, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r1;
    // 0x8005D7D4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8005D7D8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8005D7DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005D7E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005D7E4: jal         0x8001D138
    // 0x8005D7E8: mov.s       $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    ctx->f24.fl = ctx->f20.fl;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8005D7E8: mov.s       $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    ctx->f24.fl = ctx->f20.fl;
    after_1:
    // 0x8005D7EC: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x8005D7F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005D7F4: jal         0x80019164
    // 0x8005D7F8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8005D7F8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8005D7FC: lw          $a0, 0xA4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA4);
    // 0x8005D800: jal         0x80019114
    // 0x8005D804: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019114(rdram, ctx);
        goto after_3;
    // 0x8005D804: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x8005D808: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8005D80C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005D810: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x8005D814: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8005D818: lwc1        $f30, 0x6300($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X6300);
    // 0x8005D81C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005D820: lwc1        $f28, 0x6304($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X6304);
    // 0x8005D824: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    // 0x8005D828: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8005D82C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005D830: lwc1        $f26, 0x6308($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X6308);
    // 0x8005D834: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8005D838: addiu       $s3, $zero, 0x28
    ctx->r19 = ADD32(0, 0X28);
    // 0x8005D83C: addiu       $s2, $zero, 0x1E
    ctx->r18 = ADD32(0, 0X1E);
    // 0x8005D840: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
L_8005D844:
    // 0x8005D844: lw          $t6, 0x24($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X24);
    // 0x8005D848: lw          $a0, 0xA4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA4);
    // 0x8005D84C: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x8005D850: bne         $t7, $zero, L_8005D968
    if (ctx->r15 != 0) {
        // 0x8005D854: nop
    
            goto L_8005D968;
    }
    // 0x8005D854: nop

    // 0x8005D858: bne         $s0, $s2, L_8005D86C
    if (ctx->r16 != ctx->r18) {
        // 0x8005D85C: slti        $at, $s0, 0x1C
        ctx->r1 = SIGNED(ctx->r16) < 0X1C ? 1 : 0;
            goto L_8005D86C;
    }
    // 0x8005D85C: slti        $at, $s0, 0x1C
    ctx->r1 = SIGNED(ctx->r16) < 0X1C ? 1 : 0;
    // 0x8005D860: jal         0x8001918C
    // 0x8005D864: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001918C(rdram, ctx);
        goto after_4;
    // 0x8005D864: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x8005D868: slti        $at, $s0, 0x1C
    ctx->r1 = SIGNED(ctx->r16) < 0X1C ? 1 : 0;
L_8005D86C:
    // 0x8005D86C: beq         $at, $zero, L_8005D8D0
    if (ctx->r1 == 0) {
        // 0x8005D870: nop
    
            goto L_8005D8D0;
    }
    // 0x8005D870: nop

    // 0x8005D874: jal         0x8007A800
    // 0x8005D878: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    __cosf_recomp(rdram, ctx);
        goto after_5;
    // 0x8005D878: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_5:
    // 0x8005D87C: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x8005D880: mul.s       $f4, $f10, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x8005D884: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8005D888: lwc1        $f10, 0x98($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8005D88C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8005D890: add.s       $f4, $f10, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f24.fl;
    // 0x8005D894: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    // 0x8005D898: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x8005D89C: jal         0x8007A640
    // 0x8005D8A0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    __sinf_recomp(rdram, ctx);
        goto after_6;
    // 0x8005D8A0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_6:
    // 0x8005D8A4: mul.s       $f6, $f0, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8005D8A8: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8005D8AC: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x8005D8B0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8005D8B4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005D8B8: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    // 0x8005D8BC: mul.s       $f8, $f6, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f28.fl);
    // 0x8005D8C0: add.s       $f24, $f24, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f26.fl;
    // 0x8005D8C4: add.s       $f20, $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f8.fl;
    // 0x8005D8C8: b           L_8005D940
    // 0x8005D8CC: add.s       $f22, $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f30.fl;
        goto L_8005D940;
    // 0x8005D8CC: add.s       $f22, $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f30.fl;
L_8005D8D0:
    // 0x8005D8D0: jal         0x8007A800
    // 0x8005D8D4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    __cosf_recomp(rdram, ctx);
        goto after_7;
    // 0x8005D8D4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_7:
    // 0x8005D8D8: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x8005D8DC: mul.s       $f4, $f10, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x8005D8E0: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8005D8E4: lwc1        $f10, 0x98($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8005D8E8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8005D8EC: add.s       $f4, $f10, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f24.fl;
    // 0x8005D8F0: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    // 0x8005D8F4: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x8005D8F8: jal         0x8007A640
    // 0x8005D8FC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    __sinf_recomp(rdram, ctx);
        goto after_8;
    // 0x8005D8FC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_8:
    // 0x8005D900: mul.s       $f6, $f0, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8005D904: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8005D908: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005D90C: lwc1        $f4, 0x630C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X630C);
    // 0x8005D910: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8005D914: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x8005D918: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    // 0x8005D91C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8005D920: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005D924: lwc1        $f10, 0x6310($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6310);
    // 0x8005D928: add.s       $f24, $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f4.fl;
    // 0x8005D92C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8005D930: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8005D934: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8005D938: add.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f4.fl;
    // 0x8005D93C: add.s       $f22, $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f6.fl;
L_8005D940:
    // 0x8005D940: lw          $a0, 0xA4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA4);
    // 0x8005D944: jal         0x80019164
    // 0x8005D948: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019164(rdram, ctx);
        goto after_9;
    // 0x8005D948: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_9:
    // 0x8005D94C: jal         0x800072B0
    // 0x8005D950: nop

    func_800072B0(rdram, ctx);
        goto after_10;
    // 0x8005D950: nop

    after_10:
    // 0x8005D954: jal         0x80007AB0
    // 0x8005D958: nop

    func_80007AB0(rdram, ctx);
        goto after_11;
    // 0x8005D958: nop

    after_11:
    // 0x8005D95C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8005D960: bne         $s0, $s3, L_8005D844
    if (ctx->r16 != ctx->r19) {
        // 0x8005D964: nop
    
            goto L_8005D844;
    }
    // 0x8005D964: nop

L_8005D968:
    // 0x8005D968: addiu       $s0, $sp, 0xA4
    ctx->r16 = ADD32(ctx->r29, 0XA4);
    // 0x8005D96C: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_8005D970:
    // 0x8005D970: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005D974: jal         0x8001C568
    // 0x8005D978: nop

    func_8001C568(rdram, ctx);
        goto after_12;
    // 0x8005D978: nop

    after_12:
    // 0x8005D97C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8005D980: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x8005D984: bne         $at, $zero, L_8005D970
    if (ctx->r1 != 0) {
        // 0x8005D988: nop
    
            goto L_8005D970;
    }
    // 0x8005D988: nop

    // 0x8005D98C: jal         0x8005CD50
    // 0x8005D990: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_13;
    // 0x8005D990: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x8005D994: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005D998: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8005D99C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8005D9A0: nop

    // 0x8005D9A4: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x8005D9A8: jal         0x80007AE0
    // 0x8005D9AC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_14;
    // 0x8005D9AC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_14:
    // 0x8005D9B0: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8005D9B4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8005D9B8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005D9BC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8005D9C0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8005D9C4: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8005D9C8: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005D9CC: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8005D9D0: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8005D9D4: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x8005D9D8: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8005D9DC: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x8005D9E0: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8005D9E4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8005D9E8: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8005D9EC: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8005D9F0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x8005D9F4: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8005D9F8: jr          $ra
    // 0x8005D9FC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x8005D9FC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_8005DA00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005DA00: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x8005DA04: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8005DA08: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x8005DA0C: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x8005DA10: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x8005DA14: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x8005DA18: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8005DA1C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8005DA20: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8005DA24: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8005DA28: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005DA2C: jal         0x80007774
    // 0x8005DA30: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8005DA30: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8005DA34: lw          $s7, 0x1C($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X1C);
    // 0x8005DA38: addiu       $a0, $zero, 0x791
    ctx->r4 = ADD32(0, 0X791);
    // 0x8005DA3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005DA40: jal         0x8001D138
    // 0x8005DA44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8005DA44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8005DA48: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8005DA4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005DA50: jal         0x80019164
    // 0x8005DA54: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8005DA54: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_2:
    // 0x8005DA58: sw          $s0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r16;
    // 0x8005DA5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005DA60: jal         0x8001C468
    // 0x8005DA64: addiu       $a1, $zero, 0x791
    ctx->r5 = ADD32(0, 0X791);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8005DA64: addiu       $a1, $zero, 0x791
    ctx->r5 = ADD32(0, 0X791);
    after_3:
    // 0x8005DA68: lw          $a0, 0xDC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XDC);
    // 0x8005DA6C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8005DA70: jal         0x800192E8
    // 0x8005DA74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x8005DA74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8005DA78: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8005DA7C: lw          $a0, 0xDC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XDC);
    // 0x8005DA80: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    // 0x8005DA84: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x8005DA88: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x8005DA8C: jal         0x80019114
    // 0x8005DA90: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x8005DA90: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x8005DA94: lw          $s0, 0xDC($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XDC);
    // 0x8005DA98: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005DA9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005DAA0: jal         0x80018658
    // 0x8005DAA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80018658(rdram, ctx);
        goto after_6;
    // 0x8005DAA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8005DAA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005DAAC: jal         0x80018604
    // 0x8005DAB0: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    func_80018604(rdram, ctx);
        goto after_7;
    // 0x8005DAB0: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    after_7:
    // 0x8005DAB4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005DAB8: lwc1        $f20, 0x6314($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6314);
    // 0x8005DABC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8005DAC0: addiu       $s6, $sp, 0xD0
    ctx->r22 = ADD32(ctx->r29, 0XD0);
    // 0x8005DAC4: addiu       $s5, $zero, 0x3C
    ctx->r21 = ADD32(0, 0X3C);
    // 0x8005DAC8: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
L_8005DACC:
    // 0x8005DACC: lw          $t6, 0x24($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X24);
    // 0x8005DAD0: slti        $at, $s0, 0xF
    ctx->r1 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x8005DAD4: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x8005DAD8: bne         $t7, $zero, L_8005DBD4
    if (ctx->r15 != 0) {
        // 0x8005DADC: addiu       $t8, $s0, 0x1
        ctx->r24 = ADD32(ctx->r16, 0X1);
            goto L_8005DBD4;
    }
    // 0x8005DADC: addiu       $t8, $s0, 0x1
    ctx->r24 = ADD32(ctx->r16, 0X1);
    // 0x8005DAE0: beq         $at, $zero, L_8005DB18
    if (ctx->r1 == 0) {
        // 0x8005DAE4: slti        $at, $s0, 0x12
        ctx->r1 = SIGNED(ctx->r16) < 0X12 ? 1 : 0;
            goto L_8005DB18;
    }
    // 0x8005DAE4: slti        $at, $s0, 0x12
    ctx->r1 = SIGNED(ctx->r16) < 0X12 ? 1 : 0;
    // 0x8005DAE8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8005DAEC: lw          $a0, 0xDC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XDC);
    // 0x8005DAF0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005DAF4: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x8005DAF8: mul.s       $f0, $f6, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x8005DAFC: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x8005DB00: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x8005DB04: jal         0x80019114
    // 0x8005DB08: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_8;
    // 0x8005DB08: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x8005DB0C: b           L_8005DB4C
    // 0x8005DB10: nop

        goto L_8005DB4C;
    // 0x8005DB10: nop

    // 0x8005DB14: slti        $at, $s0, 0x12
    ctx->r1 = SIGNED(ctx->r16) < 0X12 ? 1 : 0;
L_8005DB18:
    // 0x8005DB18: beq         $at, $zero, L_8005DB4C
    if (ctx->r1 == 0) {
        // 0x8005DB1C: nop
    
            goto L_8005DB4C;
    }
    // 0x8005DB1C: nop

    // 0x8005DB20: lw          $a0, 0xDC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XDC);
    // 0x8005DB24: jal         0x800190A8
    // 0x8005DB28: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_800190A8(rdram, ctx);
        goto after_9;
    // 0x8005DB28: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_9:
    // 0x8005DB2C: lwc1        $f0, 0xD8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x8005DB30: lw          $a0, 0xDC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XDC);
    // 0x8005DB34: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x8005DB38: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x8005DB3C: swc1        $f0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f0.u32l;
    // 0x8005DB40: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x8005DB44: jal         0x80019114
    // 0x8005DB48: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_10;
    // 0x8005DB48: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    after_10:
L_8005DB4C:
    // 0x8005DB4C: jal         0x80007AB0
    // 0x8005DB50: addiu       $s3, $s0, 0x1
    ctx->r19 = ADD32(ctx->r16, 0X1);
    func_80007AB0(rdram, ctx);
        goto after_11;
    // 0x8005DB50: addiu       $s3, $s0, 0x1
    ctx->r19 = ADD32(ctx->r16, 0X1);
    after_11:
    // 0x8005DB54: slti        $at, $s0, 0x32
    ctx->r1 = SIGNED(ctx->r16) < 0X32 ? 1 : 0;
    // 0x8005DB58: bne         $at, $zero, L_8005DBCC
    if (ctx->r1 != 0) {
        // 0x8005DB5C: subu        $v0, $s5, $s0
        ctx->r2 = SUB32(ctx->r21, ctx->r16);
            goto L_8005DBCC;
    }
    // 0x8005DB5C: subu        $v0, $s5, $s0
    ctx->r2 = SUB32(ctx->r21, ctx->r16);
    // 0x8005DB60: sll         $s2, $v0, 2
    ctx->r18 = S32(ctx->r2 << 2);
    // 0x8005DB64: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x8005DB68: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x8005DB6C: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x8005DB70: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x8005DB74: lw          $s1, 0xDC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XDC);
    // 0x8005DB78: bne         $s4, $v0, L_8005DB90
    if (ctx->r20 != ctx->r2) {
        // 0x8005DB7C: subu        $s2, $s2, $v0
        ctx->r18 = SUB32(ctx->r18, ctx->r2);
            goto L_8005DB90;
    }
    // 0x8005DB7C: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x8005DB80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8005DB84: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005DB88: jal         0x80018658
    // 0x8005DB8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_12;
    // 0x8005DB8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
L_8005DB90:
    // 0x8005DB90: div         $zero, $s2, $s4
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r20)));
    // 0x8005DB94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8005DB98: bne         $s4, $zero, L_8005DBA4
    if (ctx->r20 != 0) {
        // 0x8005DB9C: nop
    
            goto L_8005DBA4;
    }
    // 0x8005DB9C: nop

    // 0x8005DBA0: break       7
    do_break(2147867552);
L_8005DBA4:
    // 0x8005DBA4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005DBA8: bne         $s4, $at, L_8005DBBC
    if (ctx->r20 != ctx->r1) {
        // 0x8005DBAC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005DBBC;
    }
    // 0x8005DBAC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005DBB0: bne         $s2, $at, L_8005DBBC
    if (ctx->r18 != ctx->r1) {
        // 0x8005DBB4: nop
    
            goto L_8005DBBC;
    }
    // 0x8005DBB4: nop

    // 0x8005DBB8: break       6
    do_break(2147867576);
L_8005DBBC:
    // 0x8005DBBC: mflo        $a1
    ctx->r5 = lo;
    // 0x8005DBC0: andi        $t9, $a1, 0xFF
    ctx->r25 = ctx->r5 & 0XFF;
    // 0x8005DBC4: jal         0x80018604
    // 0x8005DBC8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_80018604(rdram, ctx);
        goto after_13;
    // 0x8005DBC8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_13:
L_8005DBCC:
    // 0x8005DBCC: bne         $s3, $s5, L_8005DACC
    if (ctx->r19 != ctx->r21) {
        // 0x8005DBD0: or          $s0, $s3, $zero
        ctx->r16 = ctx->r19 | 0;
            goto L_8005DACC;
    }
    // 0x8005DBD0: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
L_8005DBD4:
    // 0x8005DBD4: addiu       $s0, $sp, 0xDC
    ctx->r16 = ADD32(ctx->r29, 0XDC);
    // 0x8005DBD8: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_8005DBDC:
    // 0x8005DBDC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005DBE0: jal         0x8001C568
    // 0x8005DBE4: nop

    func_8001C568(rdram, ctx);
        goto after_14;
    // 0x8005DBE4: nop

    after_14:
    // 0x8005DBE8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8005DBEC: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8005DBF0: bne         $at, $zero, L_8005DBDC
    if (ctx->r1 != 0) {
        // 0x8005DBF4: nop
    
            goto L_8005DBDC;
    }
    // 0x8005DBF4: nop

    // 0x8005DBF8: jal         0x8005CD50
    // 0x8005DBFC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8005CD50(rdram, ctx);
        goto after_15;
    // 0x8005DBFC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_15:
    // 0x8005DC00: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005DC04: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8005DC08: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8005DC0C: nop

    // 0x8005DC10: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8005DC14: jal         0x80007AE0
    // 0x8005DC18: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_16;
    // 0x8005DC18: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_16:
    // 0x8005DC1C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8005DC20: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8005DC24: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8005DC28: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8005DC2C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8005DC30: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8005DC34: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8005DC38: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x8005DC3C: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x8005DC40: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x8005DC44: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x8005DC48: jr          $ra
    // 0x8005DC4C: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x8005DC4C: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_8005DC50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005DC50: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x8005DC54: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8005DC58: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8005DC5C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8005DC60: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8005DC64: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8005DC68: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8005DC6C: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8005DC70: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8005DC74: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8005DC78: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8005DC7C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005DC80: jal         0x80007774
    // 0x8005DC84: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8005DC84: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8005DC88: lw          $s4, 0x1C($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X1C);
    // 0x8005DC8C: addiu       $a0, $zero, 0x1DB
    ctx->r4 = ADD32(0, 0X1DB);
    // 0x8005DC90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005DC94: jal         0x8001D138
    // 0x8005DC98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8005DC98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8005DC9C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8005DCA0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005DCA4: jal         0x80019164
    // 0x8005DCA8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8005DCA8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_2:
    // 0x8005DCAC: sw          $s0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r16;
    // 0x8005DCB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005DCB4: jal         0x8001C468
    // 0x8005DCB8: addiu       $a1, $zero, 0x1DC
    ctx->r5 = ADD32(0, 0X1DC);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8005DCB8: addiu       $a1, $zero, 0x1DC
    ctx->r5 = ADD32(0, 0X1DC);
    after_3:
    // 0x8005DCBC: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x8005DCC0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8005DCC4: jal         0x800192E8
    // 0x8005DCC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x8005DCC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8005DCCC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8005DCD0: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x8005DCD4: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x8005DCD8: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x8005DCDC: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x8005DCE0: jal         0x80019114
    // 0x8005DCE4: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x8005DCE4: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x8005DCE8: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x8005DCEC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8005DCF0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8005DCF4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8005DCF8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8005DCFC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8005DD00: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8005DD04: addiu       $s3, $zero, 0x1E
    ctx->r19 = ADD32(0, 0X1E);
    // 0x8005DD08: addiu       $s2, $sp, 0x9C
    ctx->r18 = ADD32(ctx->r29, 0X9C);
    // 0x8005DD0C: addiu       $s1, $sp, 0x90
    ctx->r17 = ADD32(ctx->r29, 0X90);
L_8005DD10:
    // 0x8005DD10: lw          $t6, 0x24($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X24);
    // 0x8005DD14: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x8005DD18: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x8005DD1C: bne         $t7, $zero, L_8005DDCC
    if (ctx->r15 != 0) {
        // 0x8005DD20: slti        $at, $s0, 0x10
        ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
            goto L_8005DDCC;
    }
    // 0x8005DD20: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x8005DD24: beq         $at, $zero, L_8005DD60
    if (ctx->r1 == 0) {
        // 0x8005DD28: slti        $at, $s0, 0x19
        ctx->r1 = SIGNED(ctx->r16) < 0X19 ? 1 : 0;
            goto L_8005DD60;
    }
    // 0x8005DD28: slti        $at, $s0, 0x19
    ctx->r1 = SIGNED(ctx->r16) < 0X19 ? 1 : 0;
    // 0x8005DD2C: jal         0x800190A8
    // 0x8005DD30: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800190A8(rdram, ctx);
        goto after_6;
    // 0x8005DD30: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x8005DD34: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x8005DD38: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x8005DD3C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005DD40: swc1        $f20, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f20.u32l;
    // 0x8005DD44: swc1        $f20, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f20.u32l;
    // 0x8005DD48: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
    // 0x8005DD4C: jal         0x80019114
    // 0x8005DD50: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019114(rdram, ctx);
        goto after_7;
    // 0x8005DD50: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x8005DD54: b           L_8005DDB8
    // 0x8005DD58: nop

        goto L_8005DDB8;
    // 0x8005DD58: nop

    // 0x8005DD5C: slti        $at, $s0, 0x19
    ctx->r1 = SIGNED(ctx->r16) < 0X19 ? 1 : 0;
L_8005DD60:
    // 0x8005DD60: bne         $at, $zero, L_8005DDB8
    if (ctx->r1 != 0) {
        // 0x8005DD64: nop
    
            goto L_8005DDB8;
    }
    // 0x8005DD64: nop

    // 0x8005DD68: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x8005DD6C: jal         0x800190A8
    // 0x8005DD70: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800190A8(rdram, ctx);
        goto after_8;
    // 0x8005DD70: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_8:
    // 0x8005DD74: lwc1        $f8, 0x94($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
    // 0x8005DD78: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x8005DD7C: sub.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f22.fl;
    // 0x8005DD80: swc1        $f20, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f20.u32l;
    // 0x8005DD84: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x8005DD88: swc1        $f20, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f20.u32l;
    // 0x8005DD8C: jal         0x80019114
    // 0x8005DD90: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019114(rdram, ctx);
        goto after_9;
    // 0x8005DD90: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_9:
    // 0x8005DD94: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x8005DD98: jal         0x800190F0
    // 0x8005DD9C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800190F0(rdram, ctx);
        goto after_10;
    // 0x8005DD9C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_10:
    // 0x8005DDA0: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8005DDA4: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x8005DDA8: add.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f24.fl;
    // 0x8005DDAC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8005DDB0: jal         0x80019164
    // 0x8005DDB4: swc1        $f6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
    func_80019164(rdram, ctx);
        goto after_11;
    // 0x8005DDB4: swc1        $f6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
    after_11:
L_8005DDB8:
    // 0x8005DDB8: jal         0x80007AB0
    // 0x8005DDBC: nop

    func_80007AB0(rdram, ctx);
        goto after_12;
    // 0x8005DDBC: nop

    after_12:
    // 0x8005DDC0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8005DDC4: bne         $s0, $s3, L_8005DD10
    if (ctx->r16 != ctx->r19) {
        // 0x8005DDC8: nop
    
            goto L_8005DD10;
    }
    // 0x8005DDC8: nop

L_8005DDCC:
    // 0x8005DDCC: addiu       $s0, $sp, 0xAC
    ctx->r16 = ADD32(ctx->r29, 0XAC);
    // 0x8005DDD0: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_8005DDD4:
    // 0x8005DDD4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005DDD8: jal         0x8001C568
    // 0x8005DDDC: nop

    func_8001C568(rdram, ctx);
        goto after_13;
    // 0x8005DDDC: nop

    after_13:
    // 0x8005DDE0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8005DDE4: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8005DDE8: bne         $at, $zero, L_8005DDD4
    if (ctx->r1 != 0) {
        // 0x8005DDEC: nop
    
            goto L_8005DDD4;
    }
    // 0x8005DDEC: nop

    // 0x8005DDF0: jal         0x8005CD50
    // 0x8005DDF4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_8005CD50(rdram, ctx);
        goto after_14;
    // 0x8005DDF4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_14:
    // 0x8005DDF8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005DDFC: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8005DE00: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8005DE04: nop

    // 0x8005DE08: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x8005DE0C: jal         0x80007AE0
    // 0x8005DE10: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_15;
    // 0x8005DE10: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_15:
    // 0x8005DE14: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8005DE18: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8005DE1C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005DE20: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8005DE24: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8005DE28: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8005DE2C: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005DE30: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8005DE34: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8005DE38: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8005DE3C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8005DE40: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8005DE44: jr          $ra
    // 0x8005DE48: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x8005DE48: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_8005DE4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005DE4C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8005DE50: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8005DE54: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8005DE58: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8005DE5C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8005DE60: jal         0x80007774
    // 0x8005DE64: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8005DE64: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8005DE68: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x8005DE6C: addiu       $a0, $zero, 0x75F
    ctx->r4 = ADD32(0, 0X75F);
    // 0x8005DE70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005DE74: jal         0x8001D138
    // 0x8005DE78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8005DE78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8005DE7C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8005DE80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005DE84: jal         0x80019164
    // 0x8005DE88: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8005DE88: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8005DE8C: sw          $s0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r16;
    // 0x8005DE90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005DE94: jal         0x8001C468
    // 0x8005DE98: addiu       $a1, $zero, 0x75F
    ctx->r5 = ADD32(0, 0X75F);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8005DE98: addiu       $a1, $zero, 0x75F
    ctx->r5 = ADD32(0, 0X75F);
    after_3:
    // 0x8005DE9C: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x8005DEA0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8005DEA4: jal         0x800192E8
    // 0x8005DEA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x8005DEA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8005DEAC: addiu       $s0, $zero, -0x801
    ctx->r16 = ADD32(0, -0X801);
    // 0x8005DEB0: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
L_8005DEB4:
    // 0x8005DEB4: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x8005DEB8: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8005DEBC: bne         $t6, $zero, L_8005DEFC
    if (ctx->r14 != 0) {
        // 0x8005DEC0: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_8005DEFC;
    }
    // 0x8005DEC0: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x8005DEC4: beq         $t7, $zero, L_8005DEE4
    if (ctx->r15 == 0) {
        // 0x8005DEC8: nop
    
            goto L_8005DEE4;
    }
    // 0x8005DEC8: nop

    // 0x8005DECC: jal         0x80019164
    // 0x8005DED0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_5;
    // 0x8005DED0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x8005DED4: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x8005DED8: nop

    // 0x8005DEDC: and         $t9, $t8, $s0
    ctx->r25 = ctx->r24 & ctx->r16;
    // 0x8005DEE0: sw          $t9, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r25;
L_8005DEE4:
    // 0x8005DEE4: jal         0x800072B0
    // 0x8005DEE8: nop

    func_800072B0(rdram, ctx);
        goto after_6;
    // 0x8005DEE8: nop

    after_6:
    // 0x8005DEEC: jal         0x80007AB0
    // 0x8005DEF0: nop

    func_80007AB0(rdram, ctx);
        goto after_7;
    // 0x8005DEF0: nop

    after_7:
    // 0x8005DEF4: b           L_8005DEB4
    // 0x8005DEF8: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
        goto L_8005DEB4;
    // 0x8005DEF8: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
L_8005DEFC:
    // 0x8005DEFC: addiu       $s0, $sp, 0x54
    ctx->r16 = ADD32(ctx->r29, 0X54);
    // 0x8005DF00: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_8005DF04:
    // 0x8005DF04: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005DF08: jal         0x8001C568
    // 0x8005DF0C: nop

    func_8001C568(rdram, ctx);
        goto after_8;
    // 0x8005DF0C: nop

    after_8:
    // 0x8005DF10: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8005DF14: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x8005DF18: bne         $at, $zero, L_8005DF04
    if (ctx->r1 != 0) {
        // 0x8005DF1C: nop
    
            goto L_8005DF04;
    }
    // 0x8005DF1C: nop

    // 0x8005DF20: jal         0x8005CD50
    // 0x8005DF24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_9;
    // 0x8005DF24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x8005DF28: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005DF2C: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8005DF30: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8005DF34: nop

    // 0x8005DF38: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8005DF3C: jal         0x80007AE0
    // 0x8005DF40: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_10;
    // 0x8005DF40: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_10:
    // 0x8005DF44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8005DF48: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8005DF4C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8005DF50: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8005DF54: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8005DF58: jr          $ra
    // 0x8005DF5C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8005DF5C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8005DF60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005DF60: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x8005DF64: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8005DF68: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x8005DF6C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x8005DF70: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x8005DF74: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8005DF78: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8005DF7C: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8005DF80: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x8005DF84: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8005DF88: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x8005DF8C: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8005DF90: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8005DF94: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8005DF98: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8005DF9C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005DFA0: jal         0x80007774
    // 0x8005DFA4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8005DFA4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8005DFA8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8005DFAC: addiu       $t7, $t7, 0x1EA8
    ctx->r15 = ADD32(ctx->r15, 0X1EA8);
    // 0x8005DFB0: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8005DFB4: lw          $s4, 0x1C($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X1C);
    // 0x8005DFB8: addiu       $t6, $sp, 0xB4
    ctx->r14 = ADD32(ctx->r29, 0XB4);
    // 0x8005DFBC: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x8005DFC0: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x8005DFC4: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x8005DFC8: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8005DFCC: addiu       $t8, $t8, 0x1EB4
    ctx->r24 = ADD32(ctx->r24, 0X1EB4);
    // 0x8005DFD0: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x8005DFD4: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x8005DFD8: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8005DFDC: addiu       $s2, $sp, 0xA8
    ctx->r18 = ADD32(ctx->r29, 0XA8);
    // 0x8005DFE0: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x8005DFE4: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8005DFE8: addiu       $a0, $zero, 0x1D9
    ctx->r4 = ADD32(0, 0X1D9);
    // 0x8005DFEC: sw          $t9, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r25;
    // 0x8005DFF0: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x8005DFF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005DFF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005DFFC: jal         0x8001D138
    // 0x8005E000: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8005E000: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    after_1:
    // 0x8005E004: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8005E008: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005E00C: jal         0x80019164
    // 0x8005E010: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8005E010: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_2:
    // 0x8005E014: sw          $s0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r16;
    // 0x8005E018: lwc1        $f4, 0x0($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X0);
    // 0x8005E01C: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8005E020: swc1        $f4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f4.u32l;
    // 0x8005E024: lwc1        $f6, 0x4($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X4);
    // 0x8005E028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005E02C: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    // 0x8005E030: lwc1        $f8, 0x8($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X8);
    // 0x8005E034: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005E038: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005E03C: jal         0x80018658
    // 0x8005E040: swc1        $f8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f8.u32l;
    func_80018658(rdram, ctx);
        goto after_3;
    // 0x8005E040: swc1        $f8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x8005E044: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8005E048: jal         0x80018604
    // 0x8005E04C: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    func_80018604(rdram, ctx);
        goto after_4;
    // 0x8005E04C: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    after_4:
    // 0x8005E050: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8005E054: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8005E058: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8005E05C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8005E060: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x8005E064: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8005E068: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8005E06C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8005E070: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x8005E074: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8005E078: addiu       $s3, $zero, 0xE
    ctx->r19 = ADD32(0, 0XE);
L_8005E07C:
    // 0x8005E07C: lw          $t7, 0x24($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X24);
    // 0x8005E080: lwc1        $f0, 0xA8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x8005E084: andi        $t6, $t7, 0x4000
    ctx->r14 = ctx->r15 & 0X4000;
    // 0x8005E088: bne         $t6, $zero, L_8005E228
    if (ctx->r14 != 0) {
        // 0x8005E08C: slti        $at, $s1, 0x6
        ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
            goto L_8005E228;
    }
    // 0x8005E08C: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
    // 0x8005E090: beq         $at, $zero, L_8005E0C4
    if (ctx->r1 == 0) {
        // 0x8005E094: slti        $at, $s1, 0xF
        ctx->r1 = SIGNED(ctx->r17) < 0XF ? 1 : 0;
            goto L_8005E0C4;
    }
    // 0x8005E094: slti        $at, $s1, 0xF
    ctx->r1 = SIGNED(ctx->r17) < 0XF ? 1 : 0;
    // 0x8005E098: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8005E09C: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8005E0A0: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    // 0x8005E0A4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8005E0A8: mul.s       $f4, $f10, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x8005E0AC: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x8005E0B0: jal         0x80019114
    // 0x8005E0B4: swc1        $f4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f4.u32l;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x8005E0B4: swc1        $f4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x8005E0B8: b           L_8005E17C
    // 0x8005E0BC: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
        goto L_8005E17C;
    // 0x8005E0BC: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    // 0x8005E0C0: slti        $at, $s1, 0xF
    ctx->r1 = SIGNED(ctx->r17) < 0XF ? 1 : 0;
L_8005E0C4:
    // 0x8005E0C4: beq         $at, $zero, L_8005E138
    if (ctx->r1 == 0) {
        // 0x8005E0C8: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_8005E138;
    }
    // 0x8005E0C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8005E0CC: lwc1        $f0, 0xA8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x8005E0D0: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8005E0D4: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x8005E0D8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005E0DC: bc1f        L_8005E0F8
    if (!c1cs) {
        // 0x8005E0E0: nop
    
            goto L_8005E0F8;
    }
    // 0x8005E0E0: nop

    // 0x8005E0E4: sub.s       $f0, $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f24.fl;
    // 0x8005E0E8: sub.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f24.fl;
    // 0x8005E0EC: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x8005E0F0: b           L_8005E100
    // 0x8005E0F4: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
        goto L_8005E100;
    // 0x8005E0F4: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
L_8005E0F8:
    // 0x8005E0F8: swc1        $f20, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f20.u32l;
    // 0x8005E0FC: swc1        $f20, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f20.u32l;
L_8005E100:
    // 0x8005E100: lwc1        $f0, 0xAC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x8005E104: lwc1        $f10, 0x6318($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6318);
    // 0x8005E108: nop

    // 0x8005E10C: mul.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8005E110: c.lt.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl < ctx->f0.fl;
    // 0x8005E114: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x8005E118: bc1f        L_8005E128
    if (!c1cs) {
        // 0x8005E11C: lw          $a0, 0xC4($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XC4);
            goto L_8005E128;
    }
    // 0x8005E11C: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    // 0x8005E120: swc1        $f26, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f26.u32l;
    // 0x8005E124: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
L_8005E128:
    // 0x8005E128: jal         0x80019114
    // 0x8005E12C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019114(rdram, ctx);
        goto after_6;
    // 0x8005E12C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_6:
    // 0x8005E130: b           L_8005E17C
    // 0x8005E134: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
        goto L_8005E17C;
    // 0x8005E134: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
L_8005E138:
    // 0x8005E138: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8005E13C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8005E140: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x8005E144: lwc1        $f0, 0xAC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x8005E148: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8005E14C: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8005E150: sub.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x8005E154: c.lt.s      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f0.fl < ctx->f28.fl;
    // 0x8005E158: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8005E15C: bc1f        L_8005E16C
    if (!c1cs) {
        // 0x8005E160: swc1        $f8, 0xB8($sp)
        MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
            goto L_8005E16C;
    }
    // 0x8005E160: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
    // 0x8005E164: b           L_8005E228
    // 0x8005E168: swc1        $f28, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f28.u32l;
        goto L_8005E228;
    // 0x8005E168: swc1        $f28, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f28.u32l;
L_8005E16C:
    // 0x8005E16C: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    // 0x8005E170: jal         0x80019114
    // 0x8005E174: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_7;
    // 0x8005E174: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x8005E178: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
L_8005E17C:
    // 0x8005E17C: jal         0x80019164
    // 0x8005E180: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    func_80019164(rdram, ctx);
        goto after_8;
    // 0x8005E180: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    after_8:
    // 0x8005E184: slti        $at, $s1, 0x15
    ctx->r1 = SIGNED(ctx->r17) < 0X15 ? 1 : 0;
    // 0x8005E188: bne         $at, $zero, L_8005E210
    if (ctx->r1 != 0) {
        // 0x8005E18C: addiu       $t8, $zero, 0x22
        ctx->r24 = ADD32(0, 0X22);
            goto L_8005E210;
    }
    // 0x8005E18C: addiu       $t8, $zero, 0x22
    ctx->r24 = ADD32(0, 0X22);
    // 0x8005E190: subu        $v0, $t8, $s1
    ctx->r2 = SUB32(ctx->r24, ctx->r17);
    // 0x8005E194: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8005E198: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8005E19C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8005E1A0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005E1A4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8005E1A8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8005E1AC: lw          $s0, 0xC4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC4);
    // 0x8005E1B0: bne         $s3, $v0, L_8005E1D4
    if (ctx->r19 != ctx->r2) {
        // 0x8005E1B4: sll         $v1, $v1, 2
        ctx->r3 = S32(ctx->r3 << 2);
            goto L_8005E1D4;
    }
    // 0x8005E1B4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8005E1B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005E1BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005E1C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005E1C4: jal         0x80018658
    // 0x8005E1C8: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    func_80018658(rdram, ctx);
        goto after_9;
    // 0x8005E1C8: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    after_9:
    // 0x8005E1CC: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x8005E1D0: nop

L_8005E1D4:
    // 0x8005E1D4: div         $zero, $v1, $s3
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r19)));
    // 0x8005E1D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005E1DC: bne         $s3, $zero, L_8005E1E8
    if (ctx->r19 != 0) {
        // 0x8005E1E0: nop
    
            goto L_8005E1E8;
    }
    // 0x8005E1E0: nop

    // 0x8005E1E4: break       7
    do_break(2147869156);
L_8005E1E8:
    // 0x8005E1E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005E1EC: bne         $s3, $at, L_8005E200
    if (ctx->r19 != ctx->r1) {
        // 0x8005E1F0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005E200;
    }
    // 0x8005E1F0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005E1F4: bne         $v1, $at, L_8005E200
    if (ctx->r3 != ctx->r1) {
        // 0x8005E1F8: nop
    
            goto L_8005E200;
    }
    // 0x8005E1F8: nop

    // 0x8005E1FC: break       6
    do_break(2147869180);
L_8005E200:
    // 0x8005E200: mflo        $a1
    ctx->r5 = lo;
    // 0x8005E204: andi        $t9, $a1, 0xFF
    ctx->r25 = ctx->r5 & 0XFF;
    // 0x8005E208: jal         0x80018604
    // 0x8005E20C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_80018604(rdram, ctx);
        goto after_10;
    // 0x8005E20C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_10:
L_8005E210:
    // 0x8005E210: jal         0x80007AB0
    // 0x8005E214: nop

    func_80007AB0(rdram, ctx);
        goto after_11;
    // 0x8005E214: nop

    after_11:
    // 0x8005E218: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8005E21C: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x8005E220: bne         $s1, $at, L_8005E07C
    if (ctx->r17 != ctx->r1) {
        // 0x8005E224: nop
    
            goto L_8005E07C;
    }
    // 0x8005E224: nop

L_8005E228:
    // 0x8005E228: addiu       $s0, $sp, 0xC4
    ctx->r16 = ADD32(ctx->r29, 0XC4);
    // 0x8005E22C: addiu       $v0, $s0, 0x4
    ctx->r2 = ADD32(ctx->r16, 0X4);
L_8005E230:
    // 0x8005E230: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005E234: jal         0x8001C568
    // 0x8005E238: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    func_8001C568(rdram, ctx);
        goto after_12;
    // 0x8005E238: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    after_12:
    // 0x8005E23C: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x8005E240: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8005E244: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x8005E248: bne         $at, $zero, L_8005E230
    if (ctx->r1 != 0) {
        // 0x8005E24C: nop
    
            goto L_8005E230;
    }
    // 0x8005E24C: nop

    // 0x8005E250: jal         0x8005CD50
    // 0x8005E254: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_8005CD50(rdram, ctx);
        goto after_13;
    // 0x8005E254: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_13:
    // 0x8005E258: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005E25C: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8005E260: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8005E264: nop

    // 0x8005E268: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x8005E26C: jal         0x80007AE0
    // 0x8005E270: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_14;
    // 0x8005E270: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_14:
    // 0x8005E274: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8005E278: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8005E27C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005E280: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8005E284: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8005E288: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8005E28C: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005E290: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8005E294: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8005E298: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x8005E29C: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8005E2A0: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8005E2A4: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8005E2A8: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8005E2AC: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8005E2B0: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x8005E2B4: jr          $ra
    // 0x8005E2B8: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x8005E2B8: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_8005E2BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005E2BC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8005E2C0: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8005E2C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005E2C8: lw          $v0, 0x24($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X24);
    // 0x8005E2CC: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x8005E2D0: andi        $s1, $v0, 0x6
    ctx->r17 = ctx->r2 & 0X6;
    // 0x8005E2D4: sra         $t7, $s1, 1
    ctx->r15 = S32(SIGNED(ctx->r17) >> 1);
    // 0x8005E2D8: addiu       $s1, $t7, -0x1
    ctx->r17 = ADD32(ctx->r15, -0X1);
    // 0x8005E2DC: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x8005E2E0: bne         $t8, $zero, L_8005E440
    if (ctx->r24 != 0) {
        // 0x8005E2E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8005E440;
    }
    // 0x8005E2E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005E2E8: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
L_8005E2EC:
    // 0x8005E2EC: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x8005E2F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8005E2F4: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x8005E2F8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8005E2FC: blez        $t6, L_8005E3F0
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8005E300: or          $s6, $zero, $zero
        ctx->r22 = 0 | 0;
            goto L_8005E3F0;
    }
    // 0x8005E300: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8005E304: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x8005E308: or          $s4, $t9, $zero
    ctx->r20 = ctx->r25 | 0;
L_8005E30C:
    // 0x8005E30C: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8005E310: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x8005E314: slt         $at, $fp, $v0
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8005E318: bne         $at, $zero, L_8005E3DC
    if (ctx->r1 != 0) {
        // 0x8005E31C: sll         $t8, $s1, 2
        ctx->r24 = S32(ctx->r17 << 2);
            goto L_8005E3DC;
    }
    // 0x8005E31C: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x8005E320: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8005E324: addiu       $t6, $t6, 0x1DE4
    ctx->r14 = ADD32(ctx->r14, 0X1DE4);
    // 0x8005E328: addu        $s2, $t8, $t6
    ctx->r18 = ADD32(ctx->r24, ctx->r14);
    // 0x8005E32C: bne         $fp, $v0, L_8005E35C
    if (ctx->r30 != ctx->r2) {
        // 0x8005E330: addu        $s0, $t7, $s7
        ctx->r16 = ADD32(ctx->r15, ctx->r23);
            goto L_8005E35C;
    }
    // 0x8005E330: addu        $s0, $t7, $s7
    ctx->r16 = ADD32(ctx->r15, ctx->r23);
    // 0x8005E334: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005E338: jal         0x800191D4
    // 0x8005E33C: nop

    func_800191D4(rdram, ctx);
        goto after_0;
    // 0x8005E33C: nop

    after_0:
    // 0x8005E340: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005E344: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x8005E348: jal         0x8001C468
    // 0x8005E34C: nop

    func_8001C468(rdram, ctx);
        goto after_1;
    // 0x8005E34C: nop

    after_1:
    // 0x8005E350: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8005E354: b           L_8005E380
    // 0x8005E358: lw          $s3, 0x0($s0)
    ctx->r19 = MEM_W(ctx->r16, 0X0);
        goto L_8005E380;
    // 0x8005E358: lw          $s3, 0x0($s0)
    ctx->r19 = MEM_W(ctx->r16, 0X0);
L_8005E35C:
    // 0x8005E35C: addiu       $t9, $v0, 0x14
    ctx->r25 = ADD32(ctx->r2, 0X14);
    // 0x8005E360: bne         $fp, $t9, L_8005E37C
    if (ctx->r30 != ctx->r25) {
        // 0x8005E364: nop
    
            goto L_8005E37C;
    }
    // 0x8005E364: nop

    // 0x8005E368: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005E36C: jal         0x800191C0
    // 0x8005E370: nop

    func_800191C0(rdram, ctx);
        goto after_2;
    // 0x8005E370: nop

    after_2:
    // 0x8005E374: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8005E378: nop

L_8005E37C:
    // 0x8005E37C: lw          $s3, 0x0($s0)
    ctx->r19 = MEM_W(ctx->r16, 0X0);
L_8005E380:
    // 0x8005E380: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8005E384: addiu       $a1, $a1, -0x2758
    ctx->r5 = ADD32(ctx->r5, -0X2758);
    // 0x8005E388: subu        $s5, $fp, $v0
    ctx->r21 = SUB32(ctx->r30, ctx->r2);
    // 0x8005E38C: jal         0x800190F0
    // 0x8005E390: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800190F0(rdram, ctx);
        goto after_3;
    // 0x8005E390: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x8005E394: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x8005E398: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8005E39C: jal         0x8005D410
    // 0x8005E3A0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_8005D410(rdram, ctx);
        goto after_4;
    // 0x8005E3A0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_4:
    // 0x8005E3A4: mtc1        $s5, $f4
    ctx->f4.u32l = ctx->r21;
    // 0x8005E3A8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8005E3AC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005E3B0: lwc1        $f8, 0x0($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X0);
    // 0x8005E3B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005E3B8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8005E3BC: lwc1        $f4, -0x2754($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2754);
    // 0x8005E3C0: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8005E3C4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8005E3C8: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8005E3CC: addiu       $a1, $a1, -0x2758
    ctx->r5 = ADD32(ctx->r5, -0X2758);
    // 0x8005E3D0: swc1        $f6, -0x2754($at)
    MEM_W(-0X2754, ctx->r1) = ctx->f6.u32l;
    // 0x8005E3D4: jal         0x80019164
    // 0x8005E3D8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_5;
    // 0x8005E3D8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_5:
L_8005E3DC:
    // 0x8005E3DC: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x8005E3E0: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8005E3E4: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x8005E3E8: bne         $s6, $t7, L_8005E30C
    if (ctx->r22 != ctx->r15) {
        // 0x8005E3EC: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_8005E30C;
    }
    // 0x8005E3EC: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_8005E3F0:
    // 0x8005E3F0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8005E3F4: nop

    // 0x8005E3F8: lw          $t6, -0x4($t8)
    ctx->r14 = MEM_W(ctx->r24, -0X4);
    // 0x8005E3FC: nop

    // 0x8005E400: addiu       $t9, $t6, 0x14
    ctx->r25 = ADD32(ctx->r14, 0X14);
    // 0x8005E404: slt         $v0, $t9, $fp
    ctx->r2 = SIGNED(ctx->r25) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x8005E408: bne         $v0, $zero, L_8005E43C
    if (ctx->r2 != 0) {
        // 0x8005E40C: addiu       $fp, $fp, 0x1
        ctx->r30 = ADD32(ctx->r30, 0X1);
            goto L_8005E43C;
    }
    // 0x8005E40C: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x8005E410: jal         0x800072B0
    // 0x8005E414: nop

    func_800072B0(rdram, ctx);
        goto after_6;
    // 0x8005E414: nop

    after_6:
    // 0x8005E418: jal         0x80007AB0
    // 0x8005E41C: nop

    func_80007AB0(rdram, ctx);
        goto after_7;
    // 0x8005E41C: nop

    after_7:
    // 0x8005E420: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x8005E424: nop

    // 0x8005E428: lw          $v0, 0x24($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X24);
    // 0x8005E42C: nop

    // 0x8005E430: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x8005E434: beq         $t8, $zero, L_8005E2EC
    if (ctx->r24 == 0) {
        // 0x8005E438: lw          $t6, 0x54($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X54);
            goto L_8005E2EC;
    }
    // 0x8005E438: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
L_8005E43C:
    // 0x8005E43C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005E440:
    // 0x8005E440: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8005E444: jr          $ra
    // 0x8005E448: nop

    return;
    // 0x8005E448: nop

    // 0x8005E44C: jr          $ra
    // 0x8005E450: nop

    return;
    // 0x8005E450: nop

;}
RECOMP_FUNC void func_8005E454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005E454: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x8005E458: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005E45C: jal         0x80007774
    // 0x8005E460: nop

    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8005E460: nop

    after_0:
    // 0x8005E464: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x8005E468: addiu       $v0, $sp, 0xE0
    ctx->r2 = ADD32(ctx->r29, 0XE0);
    // 0x8005E46C: addiu       $s2, $sp, 0xC4
    ctx->r18 = ADD32(ctx->r29, 0XC4);
    // 0x8005E470: sw          $t6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r14;
L_8005E474:
    // 0x8005E474: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8005E478: sltu        $at, $s2, $v0
    ctx->r1 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x8005E47C: bne         $at, $zero, L_8005E474
    if (ctx->r1 != 0) {
        // 0x8005E480: sw          $zero, -0x4($s2)
        MEM_W(-0X4, ctx->r18) = 0;
            goto L_8005E474;
    }
    // 0x8005E480: sw          $zero, -0x4($s2)
    MEM_W(-0X4, ctx->r18) = 0;
    // 0x8005E484: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8005E488: addiu       $t7, $t7, 0x1ECC
    ctx->r15 = ADD32(ctx->r15, 0X1ECC);
    // 0x8005E48C: sll         $s7, $s0, 2
    ctx->r23 = S32(ctx->r16 << 2);
    // 0x8005E490: addu        $t8, $s7, $t7
    ctx->r24 = ADD32(ctx->r23, ctx->r15);
    // 0x8005E494: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x8005E498: lw          $t6, 0x0($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X0);
    // 0x8005E49C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8005E4A0: blez        $t6, L_8005E5AC
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8005E4A4: addiu       $s2, $sp, 0xC4
        ctx->r18 = ADD32(ctx->r29, 0XC4);
            goto L_8005E5AC;
    }
    // 0x8005E4A4: addiu       $s2, $sp, 0xC4
    ctx->r18 = ADD32(ctx->r29, 0XC4);
    // 0x8005E4A8: addiu       $t7, $s0, 0x1
    ctx->r15 = ADD32(ctx->r16, 0X1);
    // 0x8005E4AC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8005E4B0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8005E4B4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005E4B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8005E4BC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005E4C0: lwc1        $f24, 0x631C($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X631C);
    // 0x8005E4C4: mul.s       $f22, $f6, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8005E4C8: addiu       $s5, $sp, 0x74
    ctx->r21 = ADD32(ctx->r29, 0X74);
    // 0x8005E4CC: addiu       $s4, $sp, 0xB4
    ctx->r20 = ADD32(ctx->r29, 0XB4);
L_8005E4D0:
    // 0x8005E4D0: beq         $s6, $zero, L_8005E540
    if (ctx->r22 == 0) {
        // 0x8005E4D4: or          $s0, $s4, $zero
        ctx->r16 = ctx->r20 | 0;
            goto L_8005E540;
    }
    // 0x8005E4D4: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x8005E4D8: jal         0x80028AB8
    // 0x8005E4DC: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    func_80028AB8(rdram, ctx);
        goto after_1;
    // 0x8005E4DC: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_1:
    // 0x8005E4E0: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x8005E4E4: jal         0x80028C2C
    // 0x8005E4E8: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    func_80028C2C(rdram, ctx);
        goto after_2;
    // 0x8005E4E8: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_2:
    // 0x8005E4EC: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8005E4F0: lw          $t8, 0xE0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE0);
    // 0x8005E4F4: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    // 0x8005E4F8: lwc1        $f6, 0x0($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8005E4FC: nop

    // 0x8005E500: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8005E504: swc1        $f8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f8.u32l;
    // 0x8005E508: lwc1        $f10, 0x4($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8005E50C: jal         0x80028AB8
    // 0x8005E510: swc1        $f10, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f10.u32l;
    func_80028AB8(rdram, ctx);
        goto after_3;
    // 0x8005E510: swc1        $f10, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x8005E514: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8005E518: jal         0x80028C2C
    // 0x8005E51C: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_80028C2C(rdram, ctx);
        goto after_4;
    // 0x8005E51C: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_4:
    // 0x8005E520: mul.s       $f6, $f0, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8005E524: lw          $t9, 0xE0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE0);
    // 0x8005E528: nop

    // 0x8005E52C: lwc1        $f8, 0x8($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X8);
    // 0x8005E530: nop

    // 0x8005E534: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8005E538: b           L_8005E54C
    // 0x8005E53C: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
        goto L_8005E54C;
    // 0x8005E53C: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
L_8005E540:
    // 0x8005E540: lw          $s1, 0xE0($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XE0);
    // 0x8005E544: jal         0x8005D378
    // 0x8005E548: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    func_8005D378(rdram, ctx);
        goto after_5;
    // 0x8005E548: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    after_5:
L_8005E54C:
    // 0x8005E54C: addiu       $a0, $zero, 0x761
    ctx->r4 = ADD32(0, 0X761);
    // 0x8005E550: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005E554: jal         0x8001D138
    // 0x8005E558: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_6;
    // 0x8005E558: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x8005E55C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8005E560: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005E564: jal         0x80019164
    // 0x8005E568: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019164(rdram, ctx);
        goto after_7;
    // 0x8005E568: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_7:
    // 0x8005E56C: sw          $s0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r16;
    // 0x8005E570: jal         0x800191C0
    // 0x8005E574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800191C0(rdram, ctx);
        goto after_8;
    // 0x8005E574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8005E578: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8005E57C: swc1        $f24, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f24.u32l;
    // 0x8005E580: swc1        $f24, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f24.u32l;
    // 0x8005E584: swc1        $f24, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f24.u32l;
    // 0x8005E588: jal         0x80019114
    // 0x8005E58C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019114(rdram, ctx);
        goto after_9;
    // 0x8005E58C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_9:
    // 0x8005E590: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8005E594: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8005E598: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8005E59C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8005E5A0: slt         $at, $s3, $t7
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8005E5A4: bne         $at, $zero, L_8005E4D0
    if (ctx->r1 != 0) {
        // 0x8005E5A8: nop
    
            goto L_8005E4D0;
    }
    // 0x8005E5A8: nop

L_8005E5AC:
    // 0x8005E5AC: lw          $t8, 0xE0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE0);
    // 0x8005E5B0: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8005E5B4: addu        $t6, $t6, $s7
    ctx->r14 = ADD32(ctx->r14, ctx->r23);
    // 0x8005E5B8: lw          $t6, 0x1EC0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1EC0);
    // 0x8005E5BC: lw          $t9, 0x24($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X24);
    // 0x8005E5C0: nop

    // 0x8005E5C4: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x8005E5C8: beq         $s6, $zero, L_8005E614
    if (ctx->r22 == 0) {
        // 0x8005E5CC: sw          $t7, 0x24($t8)
        MEM_W(0X24, ctx->r24) = ctx->r15;
            goto L_8005E614;
    }
    // 0x8005E5CC: sw          $t7, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->r15;
    // 0x8005E5D0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8005E5D4: sw          $t8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r24;
    // 0x8005E5D8: lw          $t6, 0x0($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X0);
    // 0x8005E5DC: lw          $t9, 0xEC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XEC);
    // 0x8005E5E0: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8005E5E4: addiu       $t8, $t8, 0x1ED8
    ctx->r24 = ADD32(ctx->r24, 0X1ED8);
    // 0x8005E5E8: addiu       $t7, $sp, 0xC4
    ctx->r15 = ADD32(ctx->r29, 0XC4);
    // 0x8005E5EC: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    // 0x8005E5F0: sw          $t8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r24;
    // 0x8005E5F4: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8005E5F8: jal         0x8005E2BC
    // 0x8005E5FC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_8005E2BC(rdram, ctx);
        goto after_10;
    // 0x8005E5FC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_10:
    // 0x8005E600: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8005E604: nop

    // 0x8005E608: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    // 0x8005E60C: b           L_8005E744
    // 0x8005E610: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
        goto L_8005E744;
    // 0x8005E610: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8005E614:
    // 0x8005E614: lw          $t8, 0xE0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE0);
    // 0x8005E618: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8005E61C: lw          $v0, 0x24($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X24);
    // 0x8005E620: lw          $s7, 0x0($t7)
    ctx->r23 = MEM_W(ctx->r15, 0X0);
    // 0x8005E624: andi        $fp, $v0, 0x6
    ctx->r30 = ctx->r2 & 0X6;
    // 0x8005E628: sra         $t9, $fp, 1
    ctx->r25 = S32(SIGNED(ctx->r30) >> 1);
    // 0x8005E62C: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8005E630: addiu       $fp, $t9, -0x1
    ctx->r30 = ADD32(ctx->r25, -0X1);
    // 0x8005E634: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
L_8005E638:
    // 0x8005E638: beq         $t6, $zero, L_8005E654
    if (ctx->r14 == 0) {
        // 0x8005E63C: sll         $t8, $s7, 2
        ctx->r24 = S32(ctx->r23 << 2);
            goto L_8005E654;
    }
    // 0x8005E63C: sll         $t8, $s7, 2
    ctx->r24 = S32(ctx->r23 << 2);
    // 0x8005E640: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8005E644: nop

    // 0x8005E648: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x8005E64C: b           L_8005E744
    // 0x8005E650: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
        goto L_8005E744;
    // 0x8005E650: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8005E654:
    // 0x8005E654: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8005E658: addiu       $t9, $t9, 0x1ED8
    ctx->r25 = ADD32(ctx->r25, 0X1ED8);
    // 0x8005E65C: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x8005E660: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8005E664: blez        $s7, L_8005E6E8
    if (SIGNED(ctx->r23) <= 0) {
        // 0x8005E668: or          $s5, $zero, $zero
        ctx->r21 = 0 | 0;
            goto L_8005E6E8;
    }
    // 0x8005E668: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8005E66C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8005E670: or          $s4, $t9, $zero
    ctx->r20 = ctx->r25 | 0;
L_8005E674:
    // 0x8005E674: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8005E678: addiu       $t7, $sp, 0xC4
    ctx->r15 = ADD32(ctx->r29, 0XC4);
    // 0x8005E67C: slt         $at, $s6, $v0
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8005E680: bne         $at, $zero, L_8005E6D8
    if (ctx->r1 != 0) {
        // 0x8005E684: nop
    
            goto L_8005E6D8;
    }
    // 0x8005E684: nop

    // 0x8005E688: bne         $s6, $v0, L_8005E6B4
    if (ctx->r22 != ctx->r2) {
        // 0x8005E68C: addu        $s2, $s3, $t7
        ctx->r18 = ADD32(ctx->r19, ctx->r15);
            goto L_8005E6B4;
    }
    // 0x8005E68C: addu        $s2, $s3, $t7
    ctx->r18 = ADD32(ctx->r19, ctx->r15);
    // 0x8005E690: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8005E694: jal         0x800191D4
    // 0x8005E698: nop

    func_800191D4(rdram, ctx);
        goto after_11;
    // 0x8005E698: nop

    after_11:
    // 0x8005E69C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8005E6A0: lw          $a1, 0xEC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XEC);
    // 0x8005E6A4: jal         0x8001C468
    // 0x8005E6A8: nop

    func_8001C468(rdram, ctx);
        goto after_12;
    // 0x8005E6A8: nop

    after_12:
    // 0x8005E6AC: b           L_8005E6D0
    // 0x8005E6B0: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
        goto L_8005E6D0;
    // 0x8005E6B0: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
L_8005E6B4:
    // 0x8005E6B4: addiu       $t8, $v0, 0x14
    ctx->r24 = ADD32(ctx->r2, 0X14);
    // 0x8005E6B8: bne         $s6, $t8, L_8005E6CC
    if (ctx->r22 != ctx->r24) {
        // 0x8005E6BC: nop
    
            goto L_8005E6CC;
    }
    // 0x8005E6BC: nop

    // 0x8005E6C0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8005E6C4: jal         0x800191C0
    // 0x8005E6C8: nop

    func_800191C0(rdram, ctx);
        goto after_13;
    // 0x8005E6C8: nop

    after_13:
L_8005E6CC:
    // 0x8005E6CC: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
L_8005E6D0:
    // 0x8005E6D0: jal         0x8005D410
    // 0x8005E6D4: or          $s1, $fp, $zero
    ctx->r17 = ctx->r30 | 0;
    func_8005D410(rdram, ctx);
        goto after_14;
    // 0x8005E6D4: or          $s1, $fp, $zero
    ctx->r17 = ctx->r30 | 0;
    after_14:
L_8005E6D8:
    // 0x8005E6D8: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8005E6DC: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8005E6E0: bne         $s5, $s7, L_8005E674
    if (ctx->r21 != ctx->r23) {
        // 0x8005E6E4: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_8005E674;
    }
    // 0x8005E6E4: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_8005E6E8:
    // 0x8005E6E8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8005E6EC: nop

    // 0x8005E6F0: lw          $t9, -0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, -0X4);
    // 0x8005E6F4: nop

    // 0x8005E6F8: addiu       $t7, $t9, 0x14
    ctx->r15 = ADD32(ctx->r25, 0X14);
    // 0x8005E6FC: slt         $v0, $t7, $s6
    ctx->r2 = SIGNED(ctx->r15) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x8005E700: beq         $v0, $zero, L_8005E71C
    if (ctx->r2 == 0) {
        // 0x8005E704: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_8005E71C;
    }
    // 0x8005E704: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8005E708: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8005E70C: nop

    // 0x8005E710: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x8005E714: b           L_8005E744
    // 0x8005E718: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
        goto L_8005E744;
    // 0x8005E718: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8005E71C:
    // 0x8005E71C: jal         0x800072B0
    // 0x8005E720: nop

    func_800072B0(rdram, ctx);
        goto after_15;
    // 0x8005E720: nop

    after_15:
    // 0x8005E724: jal         0x80007AB0
    // 0x8005E728: nop

    func_80007AB0(rdram, ctx);
        goto after_16;
    // 0x8005E728: nop

    after_16:
    // 0x8005E72C: lw          $t6, 0xE0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE0);
    // 0x8005E730: nop

    // 0x8005E734: lw          $v0, 0x24($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X24);
    // 0x8005E738: b           L_8005E638
    // 0x8005E73C: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
        goto L_8005E638;
    // 0x8005E73C: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8005E740: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8005E744:
    // 0x8005E744: blez        $v0, L_8005E768
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8005E748: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8005E768;
    }
    // 0x8005E748: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8005E74C: addiu       $s1, $sp, 0xC4
    ctx->r17 = ADD32(ctx->r29, 0XC4);
L_8005E750:
    // 0x8005E750: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8005E754: jal         0x8001C568
    // 0x8005E758: nop

    func_8001C568(rdram, ctx);
        goto after_17;
    // 0x8005E758: nop

    after_17:
    // 0x8005E75C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8005E760: bne         $s0, $s2, L_8005E750
    if (ctx->r16 != ctx->r18) {
        // 0x8005E764: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8005E750;
    }
    // 0x8005E764: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_8005E768:
    // 0x8005E768: lw          $a0, 0xE0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE0);
    // 0x8005E76C: jal         0x8005CD50
    // 0x8005E770: nop

    func_8005CD50(rdram, ctx);
        goto after_18;
    // 0x8005E770: nop

    after_18:
    // 0x8005E774: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005E778: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8005E77C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8005E780: nop

    // 0x8005E784: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x8005E788: jal         0x80007AE0
    // 0x8005E78C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_19;
    // 0x8005E78C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_19:
    // 0x8005E790: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005E794: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    // 0x8005E798: jr          $ra
    // 0x8005E79C: nop

    return;
    // 0x8005E79C: nop

;}
RECOMP_FUNC void func_8005E7A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005E7A0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8005E7A4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8005E7A8: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8005E7AC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8005E7B0: addiu       $t6, $zero, 0x7C5
    ctx->r14 = ADD32(0, 0X7C5);
    // 0x8005E7B4: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8005E7B8: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8005E7BC: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8005E7C0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8005E7C4: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8005E7C8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8005E7CC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8005E7D0: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8005E7D4: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8005E7D8: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8005E7DC: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8005E7E0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005E7E4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8005E7E8: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8005E7EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8005E7F0: jal         0x8005E454
    // 0x8005E7F4: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    func_8005E454(rdram, ctx);
        goto after_0;
    // 0x8005E7F4: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    after_0:
    // 0x8005E7F8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8005E7FC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8005E800: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005E804: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8005E808: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8005E80C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8005E810: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005E814: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8005E818: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8005E81C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8005E820: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8005E824: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8005E828: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8005E82C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8005E830: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8005E834: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8005E838: jr          $ra
    // 0x8005E83C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8005E83C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8005E840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005E840: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8005E844: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8005E848: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8005E84C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8005E850: addiu       $t6, $zero, 0x7C5
    ctx->r14 = ADD32(0, 0X7C5);
    // 0x8005E854: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8005E858: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8005E85C: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8005E860: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8005E864: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8005E868: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8005E86C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8005E870: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8005E874: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8005E878: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8005E87C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8005E880: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005E884: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8005E888: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8005E88C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8005E890: jal         0x8005E454
    // 0x8005E894: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    func_8005E454(rdram, ctx);
        goto after_0;
    // 0x8005E894: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    after_0:
    // 0x8005E898: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8005E89C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8005E8A0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005E8A4: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8005E8A8: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8005E8AC: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8005E8B0: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005E8B4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8005E8B8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8005E8BC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8005E8C0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8005E8C4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8005E8C8: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8005E8CC: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8005E8D0: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8005E8D4: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8005E8D8: jr          $ra
    // 0x8005E8DC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8005E8DC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8005E8E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005E8E0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8005E8E4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8005E8E8: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8005E8EC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8005E8F0: addiu       $t6, $zero, 0x7C5
    ctx->r14 = ADD32(0, 0X7C5);
    // 0x8005E8F4: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8005E8F8: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8005E8FC: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8005E900: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8005E904: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8005E908: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8005E90C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8005E910: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8005E914: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8005E918: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8005E91C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8005E920: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005E924: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8005E928: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8005E92C: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x8005E930: jal         0x8005E454
    // 0x8005E934: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    func_8005E454(rdram, ctx);
        goto after_0;
    // 0x8005E934: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    after_0:
    // 0x8005E938: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8005E93C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8005E940: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005E944: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8005E948: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8005E94C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8005E950: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005E954: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8005E958: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8005E95C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8005E960: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8005E964: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8005E968: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8005E96C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8005E970: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8005E974: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8005E978: jr          $ra
    // 0x8005E97C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8005E97C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8005E980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005E980: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8005E984: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8005E988: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8005E98C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8005E990: addiu       $t6, $zero, 0x7C5
    ctx->r14 = ADD32(0, 0X7C5);
    // 0x8005E994: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8005E998: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8005E99C: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8005E9A0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8005E9A4: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8005E9A8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8005E9AC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8005E9B0: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8005E9B4: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8005E9B8: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8005E9BC: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8005E9C0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005E9C4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8005E9C8: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8005E9CC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8005E9D0: jal         0x8005E454
    // 0x8005E9D4: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    func_8005E454(rdram, ctx);
        goto after_0;
    // 0x8005E9D4: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    after_0:
    // 0x8005E9D8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8005E9DC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8005E9E0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005E9E4: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8005E9E8: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8005E9EC: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8005E9F0: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005E9F4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8005E9F8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8005E9FC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8005EA00: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8005EA04: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8005EA08: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8005EA0C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8005EA10: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8005EA14: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8005EA18: jr          $ra
    // 0x8005EA1C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8005EA1C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8005EA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005EA20: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8005EA24: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8005EA28: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8005EA2C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8005EA30: addiu       $t6, $zero, 0x7C5
    ctx->r14 = ADD32(0, 0X7C5);
    // 0x8005EA34: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8005EA38: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8005EA3C: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8005EA40: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8005EA44: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8005EA48: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8005EA4C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8005EA50: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8005EA54: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8005EA58: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8005EA5C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8005EA60: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005EA64: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8005EA68: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8005EA6C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8005EA70: jal         0x8005E454
    // 0x8005EA74: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    func_8005E454(rdram, ctx);
        goto after_0;
    // 0x8005EA74: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    after_0:
    // 0x8005EA78: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8005EA7C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8005EA80: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005EA84: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8005EA88: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8005EA8C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8005EA90: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005EA94: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8005EA98: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8005EA9C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8005EAA0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8005EAA4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8005EAA8: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8005EAAC: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8005EAB0: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8005EAB4: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8005EAB8: jr          $ra
    // 0x8005EABC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8005EABC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8005EAC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005EAC0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8005EAC4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8005EAC8: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8005EACC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8005EAD0: addiu       $t6, $zero, 0x7C5
    ctx->r14 = ADD32(0, 0X7C5);
    // 0x8005EAD4: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8005EAD8: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8005EADC: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8005EAE0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8005EAE4: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8005EAE8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8005EAEC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8005EAF0: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8005EAF4: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8005EAF8: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8005EAFC: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8005EB00: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005EB04: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8005EB08: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8005EB0C: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x8005EB10: jal         0x8005E454
    // 0x8005EB14: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    func_8005E454(rdram, ctx);
        goto after_0;
    // 0x8005EB14: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    after_0:
    // 0x8005EB18: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8005EB1C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8005EB20: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005EB24: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8005EB28: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8005EB2C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8005EB30: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005EB34: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8005EB38: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8005EB3C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8005EB40: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8005EB44: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8005EB48: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8005EB4C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8005EB50: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8005EB54: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8005EB58: jr          $ra
    // 0x8005EB5C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8005EB5C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8005EB60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005EB60: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8005EB64: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8005EB68: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8005EB6C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8005EB70: addiu       $t6, $zero, 0x7C4
    ctx->r14 = ADD32(0, 0X7C4);
    // 0x8005EB74: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8005EB78: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8005EB7C: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8005EB80: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8005EB84: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8005EB88: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8005EB8C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8005EB90: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8005EB94: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8005EB98: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8005EB9C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8005EBA0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005EBA4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8005EBA8: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8005EBAC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8005EBB0: jal         0x8005E454
    // 0x8005EBB4: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    func_8005E454(rdram, ctx);
        goto after_0;
    // 0x8005EBB4: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    after_0:
    // 0x8005EBB8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8005EBBC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8005EBC0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005EBC4: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8005EBC8: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8005EBCC: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8005EBD0: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005EBD4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8005EBD8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8005EBDC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8005EBE0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8005EBE4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8005EBE8: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8005EBEC: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8005EBF0: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8005EBF4: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8005EBF8: jr          $ra
    // 0x8005EBFC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8005EBFC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8005EC00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005EC00: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8005EC04: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8005EC08: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8005EC0C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8005EC10: addiu       $t6, $zero, 0x7C4
    ctx->r14 = ADD32(0, 0X7C4);
    // 0x8005EC14: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8005EC18: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8005EC1C: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8005EC20: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8005EC24: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8005EC28: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8005EC2C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8005EC30: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8005EC34: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8005EC38: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8005EC3C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8005EC40: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005EC44: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8005EC48: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8005EC4C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8005EC50: jal         0x8005E454
    // 0x8005EC54: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    func_8005E454(rdram, ctx);
        goto after_0;
    // 0x8005EC54: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    after_0:
    // 0x8005EC58: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8005EC5C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8005EC60: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005EC64: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8005EC68: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8005EC6C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8005EC70: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005EC74: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8005EC78: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8005EC7C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8005EC80: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8005EC84: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8005EC88: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8005EC8C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8005EC90: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8005EC94: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8005EC98: jr          $ra
    // 0x8005EC9C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8005EC9C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8005ECA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005ECA0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8005ECA4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8005ECA8: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8005ECAC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8005ECB0: addiu       $t6, $zero, 0x7C4
    ctx->r14 = ADD32(0, 0X7C4);
    // 0x8005ECB4: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8005ECB8: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8005ECBC: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8005ECC0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8005ECC4: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8005ECC8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8005ECCC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8005ECD0: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8005ECD4: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8005ECD8: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8005ECDC: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8005ECE0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005ECE4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8005ECE8: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8005ECEC: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x8005ECF0: jal         0x8005E454
    // 0x8005ECF4: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    func_8005E454(rdram, ctx);
        goto after_0;
    // 0x8005ECF4: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    after_0:
    // 0x8005ECF8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8005ECFC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8005ED00: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005ED04: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8005ED08: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8005ED0C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8005ED10: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005ED14: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8005ED18: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8005ED1C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8005ED20: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8005ED24: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8005ED28: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8005ED2C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8005ED30: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8005ED34: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8005ED38: jr          $ra
    // 0x8005ED3C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8005ED3C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
