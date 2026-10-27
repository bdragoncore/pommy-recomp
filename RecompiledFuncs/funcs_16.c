#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800305C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800305C4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800305C8: jr          $ra
    // 0x800305CC: addiu       $v0, $v0, -0x42C0
    ctx->r2 = ADD32(ctx->r2, -0X42C0);
    return;
    // 0x800305CC: addiu       $v0, $v0, -0x42C0
    ctx->r2 = ADD32(ctx->r2, -0X42C0);
;}
RECOMP_FUNC void func_800305D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800305D0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800305D4: addiu       $v0, $v0, -0x42C0
    ctx->r2 = ADD32(ctx->r2, -0X42C0);
    // 0x800305D8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800305DC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800305E0: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x800305E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800305E8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800305EC: sw          $a0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r4;
    // 0x800305F0: sw          $a1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r5;
    // 0x800305F4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800305F8: jal         0x80051DE4
    // 0x800305FC: sw          $a2, -0x750($at)
    MEM_W(-0X750, ctx->r1) = ctx->r6;
    func_80051DE4(rdram, ctx);
        goto after_0;
    // 0x800305FC: sw          $a2, -0x750($at)
    MEM_W(-0X750, ctx->r1) = ctx->r6;
    after_0:
    // 0x80030600: jal         0x8002D000
    // 0x80030604: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002D000(rdram, ctx);
        goto after_1;
    // 0x80030604: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80030608: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003060C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x80030610: jal         0x8004A0A0
    // 0x80030614: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x80030614: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x80030618: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8003061C: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x80030620: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80030624: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x80030628: jal         0x8002D000
    // 0x8003062C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002D000(rdram, ctx);
        goto after_3;
    // 0x8003062C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80030630: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80030634: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80030638: jal         0x8004A0A0
    // 0x8003063C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_8004A0A0(rdram, ctx);
        goto after_4;
    // 0x8003063C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_4:
    // 0x80030640: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80030644: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80030648: jr          $ra
    // 0x8003064C: nop

    return;
    // 0x8003064C: nop

;}
RECOMP_FUNC void func_80030650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030650: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80030654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80030658: jal         0x8002D000
    // 0x8003065C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x8003065C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80030660: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80030664: jal         0x8005C3A8
    // 0x80030668: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005C3A8(rdram, ctx);
        goto after_1;
    // 0x80030668: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8003066C: lw          $t6, 0x2C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X2C);
    // 0x80030670: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80030674: beq         $t6, $zero, L_800306BC
    if (ctx->r14 == 0) {
        // 0x80030678: addiu       $v0, $v0, -0x42C0
        ctx->r2 = ADD32(ctx->r2, -0X42C0);
            goto L_800306BC;
    }
    // 0x80030678: addiu       $v0, $v0, -0x42C0
    ctx->r2 = ADD32(ctx->r2, -0X42C0);
    // 0x8003067C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80030680: nop

    // 0x80030684: ori         $t8, $t7, 0x200
    ctx->r24 = ctx->r15 | 0X200;
    // 0x80030688: jal         0x80051DE4
    // 0x8003068C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80051DE4(rdram, ctx);
        goto after_2;
    // 0x8003068C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_2:
    // 0x80030690: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80030694: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x80030698: jal         0x8004A0A0
    // 0x8003069C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_8004A0A0(rdram, ctx);
        goto after_3;
    // 0x8003069C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x800306A0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800306A4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800306A8: ori         $t0, $t9, 0x8
    ctx->r8 = ctx->r25 | 0X8;
    // 0x800306AC: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x800306B0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x800306B4: jal         0x8004A0A0
    // 0x800306B8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_8004A0A0(rdram, ctx);
        goto after_4;
    // 0x800306B8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_4:
L_800306BC:
    // 0x800306BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800306C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800306C4: jr          $ra
    // 0x800306C8: nop

    return;
    // 0x800306C8: nop

;}
RECOMP_FUNC void func_800306CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800306CC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800306D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800306D4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800306D8: jal         0x8002D000
    // 0x800306DC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x800306DC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    after_0:
    // 0x800306E0: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x800306E4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800306E8: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x800306EC: beq         $a3, $at, L_8003071C
    if (ctx->r7 == ctx->r1) {
        // 0x800306F0: sw          $v0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r2;
            goto L_8003071C;
    }
    // 0x800306F0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800306F4: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x800306F8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x800306FC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80030700: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80030704: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80030708: jal         0x8005BE2C
    // 0x8003070C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    func_8005BE2C(rdram, ctx);
        goto after_1;
    // 0x8003070C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    after_1:
    // 0x80030710: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80030714: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x80030718: nop

L_8003071C:
    // 0x8003071C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80030720: addiu       $v1, $v1, -0x42C0
    ctx->r3 = ADD32(ctx->r3, -0X42C0);
    // 0x80030724: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80030728: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x8003072C: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x80030730: beq         $t7, $zero, L_8003076C
    if (ctx->r15 == 0) {
        // 0x80030734: nop
    
            goto L_8003076C;
    }
    // 0x80030734: nop

    // 0x80030738: beq         $at, $zero, L_80030758
    if (ctx->r1 == 0) {
        // 0x8003073C: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_80030758;
    }
    // 0x8003073C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80030740: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x80030744: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80030748: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8003074C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80030750: b           L_800307A8
    // 0x80030754: sw          $t8, -0x41D0($at)
    MEM_W(-0X41D0, ctx->r1) = ctx->r24;
        goto L_800307A8;
    // 0x80030754: sw          $t8, -0x41D0($at)
    MEM_W(-0X41D0, ctx->r1) = ctx->r24;
L_80030758:
    // 0x80030758: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x8003075C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80030760: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80030764: b           L_800307A8
    // 0x80030768: sw          $t0, -0x4198($at)
    MEM_W(-0X4198, ctx->r1) = ctx->r8;
        goto L_800307A8;
    // 0x80030768: sw          $t0, -0x4198($at)
    MEM_W(-0X4198, ctx->r1) = ctx->r8;
L_8003076C:
    // 0x8003076C: beq         $a0, $zero, L_80030780
    if (ctx->r4 == 0) {
        // 0x80030770: addiu       $at, $zero, 0x33
        ctx->r1 = ADD32(0, 0X33);
            goto L_80030780;
    }
    // 0x80030770: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x80030774: ori         $t2, $v0, 0x2000
    ctx->r10 = ctx->r2 | 0X2000;
    // 0x80030778: b           L_8003088C
    // 0x8003077C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
        goto L_8003088C;
    // 0x8003077C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_80030780:
    // 0x80030780: bne         $a3, $at, L_80030794
    if (ctx->r7 != ctx->r1) {
        // 0x80030784: ori         $t4, $v0, 0x2
        ctx->r12 = ctx->r2 | 0X2;
            goto L_80030794;
    }
    // 0x80030784: ori         $t4, $v0, 0x2
    ctx->r12 = ctx->r2 | 0X2;
    // 0x80030788: ori         $t3, $v0, 0x2000
    ctx->r11 = ctx->r2 | 0X2000;
    // 0x8003078C: b           L_8003088C
    // 0x80030790: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
        goto L_8003088C;
    // 0x80030790: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_80030794:
    // 0x80030794: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80030798: jal         0x80051D4C
    // 0x8003079C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    func_80051D4C(rdram, ctx);
        goto after_2;
    // 0x8003079C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    after_2:
    // 0x800307A0: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x800307A4: nop

L_800307A8:
    // 0x800307A8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800307AC: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x800307B0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x800307B4: jal         0x8004A0A0
    // 0x800307B8: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    func_8004A0A0(rdram, ctx);
        goto after_3;
    // 0x800307B8: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    after_3:
    // 0x800307BC: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800307C0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800307C4: ori         $t6, $t5, 0x8
    ctx->r14 = ctx->r13 | 0X8;
    // 0x800307C8: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x800307CC: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x800307D0: jal         0x8004A0A0
    // 0x800307D4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_8004A0A0(rdram, ctx);
        goto after_4;
    // 0x800307D4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x800307D8: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x800307DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800307E0: beq         $a3, $at, L_800307F8
    if (ctx->r7 == ctx->r1) {
        // 0x800307E4: addiu       $a1, $zero, 0x13
        ctx->r5 = ADD32(0, 0X13);
            goto L_800307F8;
    }
    // 0x800307E4: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x800307E8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800307EC: beq         $a3, $at, L_800307F8
    if (ctx->r7 == ctx->r1) {
        // 0x800307F0: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_800307F8;
    }
    // 0x800307F0: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x800307F4: bne         $a3, $at, L_80030804
    if (ctx->r7 != ctx->r1) {
        // 0x800307F8: addiu       $t7, $zero, 0x14
        ctx->r15 = ADD32(0, 0X14);
            goto L_80030804;
    }
L_800307F8:
    // 0x800307F8: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x800307FC: b           L_80030880
    // 0x80030800: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
        goto L_80030880;
    // 0x80030800: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
L_80030804:
    // 0x80030804: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x80030808: beq         $a3, $at, L_80030874
    if (ctx->r7 == ctx->r1) {
        // 0x8003080C: addiu       $t8, $zero, 0x15
        ctx->r24 = ADD32(0, 0X15);
            goto L_80030874;
    }
    // 0x8003080C: addiu       $t8, $zero, 0x15
    ctx->r24 = ADD32(0, 0X15);
    // 0x80030810: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x80030814: beq         $a3, $at, L_80030874
    if (ctx->r7 == ctx->r1) {
        // 0x80030818: addiu       $at, $zero, 0x2C
        ctx->r1 = ADD32(0, 0X2C);
            goto L_80030874;
    }
    // 0x80030818: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x8003081C: beq         $a3, $at, L_80030874
    if (ctx->r7 == ctx->r1) {
        // 0x80030820: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_80030874;
    }
    // 0x80030820: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x80030824: beq         $a3, $at, L_80030874
    if (ctx->r7 == ctx->r1) {
        // 0x80030828: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_80030874;
    }
    // 0x80030828: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x8003082C: beq         $a3, $at, L_80030874
    if (ctx->r7 == ctx->r1) {
        // 0x80030830: addiu       $at, $zero, 0x2F
        ctx->r1 = ADD32(0, 0X2F);
            goto L_80030874;
    }
    // 0x80030830: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x80030834: beq         $a3, $at, L_80030874
    if (ctx->r7 == ctx->r1) {
        // 0x80030838: addiu       $at, $zero, 0x30
        ctx->r1 = ADD32(0, 0X30);
            goto L_80030874;
    }
    // 0x80030838: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x8003083C: beq         $a3, $at, L_80030874
    if (ctx->r7 == ctx->r1) {
        // 0x80030840: addiu       $at, $zero, 0x31
        ctx->r1 = ADD32(0, 0X31);
            goto L_80030874;
    }
    // 0x80030840: addiu       $at, $zero, 0x31
    ctx->r1 = ADD32(0, 0X31);
    // 0x80030844: beq         $a3, $at, L_80030874
    if (ctx->r7 == ctx->r1) {
        // 0x80030848: addiu       $at, $zero, 0x32
        ctx->r1 = ADD32(0, 0X32);
            goto L_80030874;
    }
    // 0x80030848: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x8003084C: beq         $a3, $at, L_80030874
    if (ctx->r7 == ctx->r1) {
        // 0x80030850: addiu       $at, $zero, 0x33
        ctx->r1 = ADD32(0, 0X33);
            goto L_80030874;
    }
    // 0x80030850: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x80030854: beq         $a3, $at, L_80030874
    if (ctx->r7 == ctx->r1) {
        // 0x80030858: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_80030874;
    }
    // 0x80030858: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x8003085C: beq         $a3, $at, L_80030874
    if (ctx->r7 == ctx->r1) {
        // 0x80030860: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_80030874;
    }
    // 0x80030860: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80030864: beq         $a3, $at, L_80030874
    if (ctx->r7 == ctx->r1) {
        // 0x80030868: addiu       $at, $zero, 0x15
        ctx->r1 = ADD32(0, 0X15);
            goto L_80030874;
    }
    // 0x80030868: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x8003086C: bne         $a3, $at, L_8003087C
    if (ctx->r7 != ctx->r1) {
        // 0x80030870: addiu       $t9, $zero, 0x12
        ctx->r25 = ADD32(0, 0X12);
            goto L_8003087C;
    }
    // 0x80030870: addiu       $t9, $zero, 0x12
    ctx->r25 = ADD32(0, 0X12);
L_80030874:
    // 0x80030874: b           L_80030880
    // 0x80030878: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
        goto L_80030880;
    // 0x80030878: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
L_8003087C:
    // 0x8003087C: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
L_80030880:
    // 0x80030880: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80030884: jal         0x8004A0A0
    // 0x80030888: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_8004A0A0(rdram, ctx);
        goto after_5;
    // 0x80030888: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_5:
L_8003088C:
    // 0x8003088C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80030890: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80030894: jr          $ra
    // 0x80030898: nop

    return;
    // 0x80030898: nop

;}
RECOMP_FUNC void func_8003089C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003089C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800308A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800308A4: jal         0x8003E4D4
    // 0x800308A8: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    func_8003E4D4(rdram, ctx);
        goto after_0;
    // 0x800308A8: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    after_0:
    // 0x800308AC: beq         $v0, $zero, L_800308BC
    if (ctx->r2 == 0) {
        // 0x800308B0: addiu       $s2, $zero, -0x1
        ctx->r18 = ADD32(0, -0X1);
            goto L_800308BC;
    }
    // 0x800308B0: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x800308B4: b           L_800308BC
    // 0x800308B8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_800308BC;
    // 0x800308B8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_800308BC:
    // 0x800308BC: jal         0x8003E4D4
    // 0x800308C0: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    func_8003E4D4(rdram, ctx);
        goto after_1;
    // 0x800308C0: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    after_1:
    // 0x800308C4: beq         $v0, $zero, L_800308D4
    if (ctx->r2 == 0) {
        // 0x800308C8: addiu       $s1, $zero, -0x1
        ctx->r17 = ADD32(0, -0X1);
            goto L_800308D4;
    }
    // 0x800308C8: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x800308CC: b           L_800308D4
    // 0x800308D0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_800308D4;
    // 0x800308D0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_800308D4:
    // 0x800308D4: jal         0x8003E4D4
    // 0x800308D8: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    func_8003E4D4(rdram, ctx);
        goto after_2;
    // 0x800308D8: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    after_2:
    // 0x800308DC: beq         $v0, $zero, L_800308EC
    if (ctx->r2 == 0) {
        // 0x800308E0: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_800308EC;
    }
    // 0x800308E0: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x800308E4: b           L_800308EC
    // 0x800308E8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_800308EC;
    // 0x800308E8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800308EC:
    // 0x800308EC: jal         0x8003E4D4
    // 0x800308F0: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    func_8003E4D4(rdram, ctx);
        goto after_3;
    // 0x800308F0: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    after_3:
    // 0x800308F4: beq         $v0, $zero, L_80030904
    if (ctx->r2 == 0) {
        // 0x800308F8: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80030904;
    }
    // 0x800308F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800308FC: b           L_80030908
    // 0x80030900: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_80030908;
    // 0x80030900: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80030904:
    // 0x80030904: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_80030908:
    // 0x80030908: beq         $s3, $zero, L_80030918
    if (ctx->r19 == 0) {
        // 0x8003090C: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_80030918;
    }
    // 0x8003090C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80030910: b           L_8003091C
    // 0x80030914: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003091C;
    // 0x80030914: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80030918:
    // 0x80030918: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003091C:
    // 0x8003091C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80030920: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x80030924: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80030928: jal         0x8005C598
    // 0x8003092C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8005C598(rdram, ctx);
        goto after_4;
    // 0x8003092C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_4:
    // 0x80030930: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80030934: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80030938: jr          $ra
    // 0x8003093C: nop

    return;
    // 0x8003093C: nop

;}
RECOMP_FUNC void func_80030940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030940: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80030944: slti        $at, $a0, 0x6C
    ctx->r1 = SIGNED(ctx->r4) < 0X6C ? 1 : 0;
    // 0x80030948: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003094C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80030950: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80030954: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80030958: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003095C: bne         $at, $zero, L_80030A68
    if (ctx->r1 != 0) {
        // 0x80030960: sw          $a0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r4;
            goto L_80030A68;
    }
    // 0x80030960: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80030964: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80030968: lw          $v0, -0x42B8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X42B8);
    // 0x8003096C: addiu       $at, $zero, 0x8B4
    ctx->r1 = ADD32(0, 0X8B4);
    // 0x80030970: bne         $v0, $at, L_8003098C
    if (ctx->r2 != ctx->r1) {
        // 0x80030974: addiu       $at, $zero, 0x861
        ctx->r1 = ADD32(0, 0X861);
            goto L_8003098C;
    }
    // 0x80030974: addiu       $at, $zero, 0x861
    ctx->r1 = ADD32(0, 0X861);
    // 0x80030978: jal         0x8003E530
    // 0x8003097C: addiu       $a0, $zero, 0xF7
    ctx->r4 = ADD32(0, 0XF7);
    func_8003E530(rdram, ctx);
        goto after_0;
    // 0x8003097C: addiu       $a0, $zero, 0xF7
    ctx->r4 = ADD32(0, 0XF7);
    after_0:
    // 0x80030980: b           L_800309D4
    // 0x80030984: nop

        goto L_800309D4;
    // 0x80030984: nop

    // 0x80030988: addiu       $at, $zero, 0x861
    ctx->r1 = ADD32(0, 0X861);
L_8003098C:
    // 0x8003098C: bne         $v0, $at, L_800309A8
    if (ctx->r2 != ctx->r1) {
        // 0x80030990: addiu       $at, $zero, 0x8AA
        ctx->r1 = ADD32(0, 0X8AA);
            goto L_800309A8;
    }
    // 0x80030990: addiu       $at, $zero, 0x8AA
    ctx->r1 = ADD32(0, 0X8AA);
    // 0x80030994: jal         0x8003E530
    // 0x80030998: addiu       $a0, $zero, 0xF8
    ctx->r4 = ADD32(0, 0XF8);
    func_8003E530(rdram, ctx);
        goto after_1;
    // 0x80030998: addiu       $a0, $zero, 0xF8
    ctx->r4 = ADD32(0, 0XF8);
    after_1:
    // 0x8003099C: b           L_800309D4
    // 0x800309A0: nop

        goto L_800309D4;
    // 0x800309A0: nop

    // 0x800309A4: addiu       $at, $zero, 0x8AA
    ctx->r1 = ADD32(0, 0X8AA);
L_800309A8:
    // 0x800309A8: bne         $v0, $at, L_800309C4
    if (ctx->r2 != ctx->r1) {
        // 0x800309AC: addiu       $at, $zero, 0x8AB
        ctx->r1 = ADD32(0, 0X8AB);
            goto L_800309C4;
    }
    // 0x800309AC: addiu       $at, $zero, 0x8AB
    ctx->r1 = ADD32(0, 0X8AB);
    // 0x800309B0: jal         0x8003E530
    // 0x800309B4: addiu       $a0, $zero, 0xF9
    ctx->r4 = ADD32(0, 0XF9);
    func_8003E530(rdram, ctx);
        goto after_2;
    // 0x800309B4: addiu       $a0, $zero, 0xF9
    ctx->r4 = ADD32(0, 0XF9);
    after_2:
    // 0x800309B8: b           L_800309D4
    // 0x800309BC: nop

        goto L_800309D4;
    // 0x800309BC: nop

    // 0x800309C0: addiu       $at, $zero, 0x8AB
    ctx->r1 = ADD32(0, 0X8AB);
L_800309C4:
    // 0x800309C4: bne         $v0, $at, L_800309D4
    if (ctx->r2 != ctx->r1) {
        // 0x800309C8: nop
    
            goto L_800309D4;
    }
    // 0x800309C8: nop

    // 0x800309CC: jal         0x8003E530
    // 0x800309D0: addiu       $a0, $zero, 0xFA
    ctx->r4 = ADD32(0, 0XFA);
    func_8003E530(rdram, ctx);
        goto after_3;
    // 0x800309D0: addiu       $a0, $zero, 0xFA
    ctx->r4 = ADD32(0, 0XFA);
    after_3:
L_800309D4:
    // 0x800309D4: jal         0x8003E4D4
    // 0x800309D8: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    func_8003E4D4(rdram, ctx);
        goto after_4;
    // 0x800309D8: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    after_4:
    // 0x800309DC: bne         $v0, $zero, L_800309F4
    if (ctx->r2 != 0) {
        // 0x800309E0: nop
    
            goto L_800309F4;
    }
    // 0x800309E0: nop

    // 0x800309E4: jal         0x80051D94
    // 0x800309E8: addiu       $a0, $zero, 0xB31
    ctx->r4 = ADD32(0, 0XB31);
    func_80051D94(rdram, ctx);
        goto after_5;
    // 0x800309E8: addiu       $a0, $zero, 0xB31
    ctx->r4 = ADD32(0, 0XB31);
    after_5:
    // 0x800309EC: b           L_80030A50
    // 0x800309F0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
        goto L_80030A50;
    // 0x800309F0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_800309F4:
    // 0x800309F4: jal         0x8003E4D4
    // 0x800309F8: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    func_8003E4D4(rdram, ctx);
        goto after_6;
    // 0x800309F8: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    after_6:
    // 0x800309FC: bne         $v0, $zero, L_80030A14
    if (ctx->r2 != 0) {
        // 0x80030A00: nop
    
            goto L_80030A14;
    }
    // 0x80030A00: nop

    // 0x80030A04: jal         0x80051D94
    // 0x80030A08: addiu       $a0, $zero, 0xB32
    ctx->r4 = ADD32(0, 0XB32);
    func_80051D94(rdram, ctx);
        goto after_7;
    // 0x80030A08: addiu       $a0, $zero, 0xB32
    ctx->r4 = ADD32(0, 0XB32);
    after_7:
    // 0x80030A0C: b           L_80030A50
    // 0x80030A10: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
        goto L_80030A50;
    // 0x80030A10: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_80030A14:
    // 0x80030A14: jal         0x8003E4D4
    // 0x80030A18: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    func_8003E4D4(rdram, ctx);
        goto after_8;
    // 0x80030A18: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    after_8:
    // 0x80030A1C: bne         $v0, $zero, L_80030A34
    if (ctx->r2 != 0) {
        // 0x80030A20: nop
    
            goto L_80030A34;
    }
    // 0x80030A20: nop

    // 0x80030A24: jal         0x80051D94
    // 0x80030A28: addiu       $a0, $zero, 0xB33
    ctx->r4 = ADD32(0, 0XB33);
    func_80051D94(rdram, ctx);
        goto after_9;
    // 0x80030A28: addiu       $a0, $zero, 0xB33
    ctx->r4 = ADD32(0, 0XB33);
    after_9:
    // 0x80030A2C: b           L_80030A50
    // 0x80030A30: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
        goto L_80030A50;
    // 0x80030A30: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_80030A34:
    // 0x80030A34: jal         0x8003E4D4
    // 0x80030A38: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    func_8003E4D4(rdram, ctx);
        goto after_10;
    // 0x80030A38: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    after_10:
    // 0x80030A3C: bne         $v0, $zero, L_80030A50
    if (ctx->r2 != 0) {
        // 0x80030A40: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_80030A50;
    }
    // 0x80030A40: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80030A44: jal         0x80051D94
    // 0x80030A48: addiu       $a0, $zero, 0xB34
    ctx->r4 = ADD32(0, 0XB34);
    func_80051D94(rdram, ctx);
        goto after_11;
    // 0x80030A48: addiu       $a0, $zero, 0xB34
    ctx->r4 = ADD32(0, 0XB34);
    after_11:
    // 0x80030A4C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_80030A50:
    // 0x80030A50: jal         0x8003E530
    // 0x80030A54: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    func_8003E530(rdram, ctx);
        goto after_12;
    // 0x80030A54: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    after_12:
    // 0x80030A58: jal         0x8003089C
    // 0x80030A5C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    func_8003089C(rdram, ctx);
        goto after_13;
    // 0x80030A5C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    after_13:
    // 0x80030A60: b           L_80030A78
    // 0x80030A64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80030A78;
    // 0x80030A64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80030A68:
    // 0x80030A68: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80030A6C: jal         0x8003E530
    // 0x80030A70: addiu       $a0, $a0, 0x8C
    ctx->r4 = ADD32(ctx->r4, 0X8C);
    func_8003E530(rdram, ctx);
        goto after_14;
    // 0x80030A70: addiu       $a0, $a0, 0x8C
    ctx->r4 = ADD32(ctx->r4, 0X8C);
    after_14:
    // 0x80030A74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80030A78:
    // 0x80030A78: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80030A7C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80030A80: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80030A84: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80030A88: jr          $ra
    // 0x80030A8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80030A8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80030A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030A90: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80030A94: addiu       $t6, $t6, -0x42C0
    ctx->r14 = ADD32(ctx->r14, -0X42C0);
    // 0x80030A98: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x80030A9C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80030AA0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80030AA4: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x80030AA8: lbu         $t7, 0x21($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X21);
    // 0x80030AAC: lw          $t9, 0x28($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X28);
    // 0x80030AB0: nop

    // 0x80030AB4: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80030AB8: jr          $ra
    // 0x80030ABC: sb          $t0, 0x21($v0)
    MEM_B(0X21, ctx->r2) = ctx->r8;
    return;
    // 0x80030ABC: sb          $t0, 0x21($v0)
    MEM_B(0X21, ctx->r2) = ctx->r8;
;}
RECOMP_FUNC void func_80030AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030AC0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80030AC4: addiu       $v1, $v1, -0x42C0
    ctx->r3 = ADD32(ctx->r3, -0X42C0);
    // 0x80030AC8: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    // 0x80030ACC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80030AD0: ori         $at, $at, 0x86A0
    ctx->r1 = ctx->r1 | 0X86A0;
    // 0x80030AD4: addu        $v0, $t6, $a0
    ctx->r2 = ADD32(ctx->r14, ctx->r4);
    // 0x80030AD8: slt         $at, $v0, $at
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80030ADC: bne         $at, $zero, L_80030AF4
    if (ctx->r1 != 0) {
        // 0x80030AE0: sw          $v0, 0x10($v1)
        MEM_W(0X10, ctx->r3) = ctx->r2;
            goto L_80030AF4;
    }
    // 0x80030AE0: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x80030AE4: lui         $t8, 0x1
    ctx->r24 = S32(0X1 << 16);
    // 0x80030AE8: ori         $t8, $t8, 0x869F
    ctx->r24 = ctx->r24 | 0X869F;
    // 0x80030AEC: jr          $ra
    // 0x80030AF0: sw          $t8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r24;
    return;
    // 0x80030AF0: sw          $t8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r24;
L_80030AF4:
    // 0x80030AF4: bgez        $v0, L_80030B00
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80030AF8: nop
    
            goto L_80030B00;
    }
    // 0x80030AF8: nop

    // 0x80030AFC: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
L_80030B00:
    // 0x80030B00: jr          $ra
    // 0x80030B04: nop

    return;
    // 0x80030B04: nop

;}
RECOMP_FUNC void func_80030B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030B08: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80030B0C: addiu       $v1, $v1, -0x42C0
    ctx->r3 = ADD32(ctx->r3, -0X42C0);
    // 0x80030B10: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80030B14: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80030B18: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x80030B1C: beq         $t7, $zero, L_80030B6C
    if (ctx->r15 == 0) {
        // 0x80030B20: lui         $at, 0x1
        ctx->r1 = S32(0X1 << 16);
            goto L_80030B6C;
    }
    // 0x80030B20: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80030B24: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80030B28: addiu       $t9, $t9, -0x4298
    ctx->r25 = ADD32(ctx->r25, -0X4298);
    // 0x80030B2C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x80030B30: lw          $t0, 0xA4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XA4);
    // 0x80030B34: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80030B38: ori         $at, $at, 0x86A0
    ctx->r1 = ctx->r1 | 0X86A0;
    // 0x80030B3C: addu        $v1, $t0, $a1
    ctx->r3 = ADD32(ctx->r8, ctx->r5);
    // 0x80030B40: slt         $at, $v1, $at
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80030B44: bne         $at, $zero, L_80030B5C
    if (ctx->r1 != 0) {
        // 0x80030B48: sw          $v1, 0xA4($v0)
        MEM_W(0XA4, ctx->r2) = ctx->r3;
            goto L_80030B5C;
    }
    // 0x80030B48: sw          $v1, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r3;
    // 0x80030B4C: lui         $t2, 0x1
    ctx->r10 = S32(0X1 << 16);
    // 0x80030B50: ori         $t2, $t2, 0x869F
    ctx->r10 = ctx->r10 | 0X869F;
    // 0x80030B54: jr          $ra
    // 0x80030B58: sw          $t2, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r10;
    return;
    // 0x80030B58: sw          $t2, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r10;
L_80030B5C:
    // 0x80030B5C: bgez        $v1, L_80030BA0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80030B60: nop
    
            goto L_80030BA0;
    }
    // 0x80030B60: nop

    // 0x80030B64: jr          $ra
    // 0x80030B68: sw          $zero, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = 0;
    return;
    // 0x80030B68: sw          $zero, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = 0;
L_80030B6C:
    // 0x80030B6C: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
    // 0x80030B70: ori         $at, $at, 0x86A0
    ctx->r1 = ctx->r1 | 0X86A0;
    // 0x80030B74: addu        $v0, $t3, $a1
    ctx->r2 = ADD32(ctx->r11, ctx->r5);
    // 0x80030B78: slt         $at, $v0, $at
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80030B7C: bne         $at, $zero, L_80030B94
    if (ctx->r1 != 0) {
        // 0x80030B80: sw          $v0, 0x10($v1)
        MEM_W(0X10, ctx->r3) = ctx->r2;
            goto L_80030B94;
    }
    // 0x80030B80: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x80030B84: lui         $t5, 0x1
    ctx->r13 = S32(0X1 << 16);
    // 0x80030B88: ori         $t5, $t5, 0x869F
    ctx->r13 = ctx->r13 | 0X869F;
    // 0x80030B8C: jr          $ra
    // 0x80030B90: sw          $t5, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r13;
    return;
    // 0x80030B90: sw          $t5, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r13;
L_80030B94:
    // 0x80030B94: bgez        $v0, L_80030BA0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80030B98: nop
    
            goto L_80030BA0;
    }
    // 0x80030B98: nop

    // 0x80030B9C: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
L_80030BA0:
    // 0x80030BA0: jr          $ra
    // 0x80030BA4: nop

    return;
    // 0x80030BA4: nop

;}
RECOMP_FUNC void func_80030BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030BA8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80030BAC: jr          $ra
    // 0x80030BB0: sw          $a0, -0x3DC8($at)
    MEM_W(-0X3DC8, ctx->r1) = ctx->r4;
    return;
    // 0x80030BB0: sw          $a0, -0x3DC8($at)
    MEM_W(-0X3DC8, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_80030BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030BB4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80030BB8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80030BBC: addiu       $a2, $a0, 0x8
    ctx->r6 = ADD32(ctx->r4, 0X8);
    // 0x80030BC0: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x80030BC4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80030BC8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80030BCC: lui         $t7, 0xE200
    ctx->r15 = S32(0XE200 << 16);
    // 0x80030BD0: ori         $t7, $t7, 0x1D00
    ctx->r15 = ctx->r15 | 0X1D00;
    // 0x80030BD4: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80030BD8: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x80030BDC: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80030BE0: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x80030BE4: lui         $t9, 0xEE00
    ctx->r25 = S32(0XEE00 << 16);
    // 0x80030BE8: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x80030BEC: lw          $t2, 0x40($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X40);
    // 0x80030BF0: addiu       $t0, $a3, 0x8
    ctx->r8 = ADD32(ctx->r7, 0X8);
    // 0x80030BF4: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x80030BF8: sw          $t3, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r11;
    // 0x80030BFC: lui         $t4, 0xE200
    ctx->r12 = S32(0XE200 << 16);
    // 0x80030C00: lui         $t5, 0x50
    ctx->r13 = S32(0X50 << 16);
    // 0x80030C04: ori         $t5, $t5, 0x4A50
    ctx->r13 = ctx->r13 | 0X4A50;
    // 0x80030C08: ori         $t4, $t4, 0x1C
    ctx->r12 = ctx->r12 | 0X1C;
    // 0x80030C0C: addiu       $a0, $t0, 0x8
    ctx->r4 = ADD32(ctx->r8, 0X8);
    // 0x80030C10: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x80030C14: sw          $t5, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r13;
    // 0x80030C18: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80030C1C: lui         $t6, 0xFA00
    ctx->r14 = S32(0XFA00 << 16);
    // 0x80030C20: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80030C24: lw          $v1, 0x3C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X3C);
    // 0x80030C28: addiu       $a2, $a0, 0x8
    ctx->r6 = ADD32(ctx->r4, 0X8);
    // 0x80030C2C: sra         $t8, $v1, 24
    ctx->r24 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80030C30: sra         $t2, $v1, 16
    ctx->r10 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80030C34: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x80030C38: sll         $t9, $t8, 24
    ctx->r25 = S32(ctx->r24 << 24);
    // 0x80030C3C: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x80030C40: sra         $t7, $v1, 8
    ctx->r15 = S32(SIGNED(ctx->r3) >> 8);
    // 0x80030C44: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x80030C48: or          $t5, $t9, $t4
    ctx->r13 = ctx->r25 | ctx->r12;
    // 0x80030C4C: sll         $t1, $t8, 8
    ctx->r9 = S32(ctx->r24 << 8);
    // 0x80030C50: or          $t2, $t5, $t1
    ctx->r10 = ctx->r13 | ctx->r9;
    // 0x80030C54: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x80030C58: or          $t4, $t2, $t9
    ctx->r12 = ctx->r10 | ctx->r25;
    // 0x80030C5C: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x80030C60: lui         $t7, 0xFFFD
    ctx->r15 = S32(0XFFFD << 16);
    // 0x80030C64: lui         $t6, 0xFCFF
    ctx->r14 = S32(0XFCFF << 16);
    // 0x80030C68: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80030C6C: ori         $t6, $t6, 0xFFFF
    ctx->r14 = ctx->r14 | 0XFFFF;
    // 0x80030C70: ori         $t7, $t7, 0xF6FB
    ctx->r15 = ctx->r15 | 0XF6FB;
    // 0x80030C74: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x80030C78: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80030C7C: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x80030C80: lui         $t5, 0x1
    ctx->r13 = S32(0X1 << 16);
    // 0x80030C84: ori         $t5, $t5, 0x1
    ctx->r13 = ctx->r13 | 0X1;
    // 0x80030C88: lui         $t8, 0xF700
    ctx->r24 = S32(0XF700 << 16);
    // 0x80030C8C: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80030C90: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x80030C94: sw          $t5, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r13;
    // 0x80030C98: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80030C9C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80030CA0: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x80030CA4: lw          $t2, 0x4C($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X4C);
    // 0x80030CA8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80030CAC: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x80030CB0: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x80030CB4: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80030CB8: addu        $t9, $t3, $t2
    ctx->r25 = ADD32(ctx->r11, ctx->r10);
    // 0x80030CBC: addiu       $t4, $t9, -0x1
    ctx->r12 = ADD32(ctx->r25, -0X1);
    // 0x80030CC0: andi        $t6, $t4, 0x3FF
    ctx->r14 = ctx->r12 & 0X3FF;
    // 0x80030CC4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80030CC8: sll         $t7, $t6, 14
    ctx->r15 = S32(ctx->r14 << 14);
    // 0x80030CCC: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80030CD0: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80030CD4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80030CD8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80030CDC: lwc1        $f8, 0x20($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X20);
    // 0x80030CE0: lw          $t3, 0x50($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X50);
    // 0x80030CE4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80030CE8: addiu       $t0, $a3, 0x8
    ctx->r8 = ADD32(ctx->r7, 0X8);
    // 0x80030CEC: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x80030CF0: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80030CF4: addu        $t2, $t1, $t3
    ctx->r10 = ADD32(ctx->r9, ctx->r11);
    // 0x80030CF8: addiu       $t9, $t2, -0x1
    ctx->r25 = ADD32(ctx->r10, -0X1);
    // 0x80030CFC: andi        $t4, $t9, 0x3FF
    ctx->r12 = ctx->r25 & 0X3FF;
    // 0x80030D00: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80030D04: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x80030D08: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x80030D0C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80030D10: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80030D14: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80030D18: lwc1        $f16, 0x1C($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x80030D1C: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x80030D20: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80030D24: addiu       $v0, $t0, 0x8
    ctx->r2 = ADD32(ctx->r8, 0X8);
    // 0x80030D28: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80030D2C: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x80030D30: nop

    // 0x80030D34: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80030D38: andi        $t3, $t1, 0x3FF
    ctx->r11 = ctx->r9 & 0X3FF;
    // 0x80030D3C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80030D40: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80030D44: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80030D48: sll         $t2, $t3, 14
    ctx->r10 = S32(ctx->r11 << 14);
    // 0x80030D4C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80030D50: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x80030D54: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80030D58: andi        $t8, $t4, 0x3FF
    ctx->r24 = ctx->r12 & 0X3FF;
    // 0x80030D5C: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x80030D60: or          $t7, $t2, $t6
    ctx->r15 = ctx->r10 | ctx->r14;
    // 0x80030D64: jr          $ra
    // 0x80030D68: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    return;
    // 0x80030D68: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
;}
RECOMP_FUNC void func_80030D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030D6C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80030D70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80030D74: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80030D78: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x80030D7C: jal         0x8004A0A0
    // 0x80030D80: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x80030D80: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_0:
    // 0x80030D84: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80030D88: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x80030D8C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80030D90: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80030D94: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80030D98: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80030D9C: jal         0x8004A0A0
    // 0x80030DA0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x80030DA0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x80030DA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80030DA8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80030DAC: jr          $ra
    // 0x80030DB0: nop

    return;
    // 0x80030DB0: nop

;}
RECOMP_FUNC void func_80030DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030DB4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80030DB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80030DBC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80030DC0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x80030DC4: jal         0x8004A0A0
    // 0x80030DC8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x80030DC8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_0:
    // 0x80030DCC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80030DD0: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x80030DD4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80030DD8: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80030DDC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80030DE0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80030DE4: jal         0x8004A0A0
    // 0x80030DE8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x80030DE8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x80030DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80030DF0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80030DF4: jr          $ra
    // 0x80030DF8: nop

    return;
    // 0x80030DF8: nop

;}
RECOMP_FUNC void func_80030DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030DFC: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80030E00: addiu       $s0, $s0, -0x42C0
    ctx->r16 = ADD32(ctx->r16, -0X42C0);
    // 0x80030E04: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80030E08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80030E0C: sll         $t7, $t6, 15
    ctx->r15 = S32(ctx->r14 << 15);
    // 0x80030E10: bltz        $t7, L_80030ECC
    if (SIGNED(ctx->r15) < 0) {
        // 0x80030E14: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80030ECC;
    }
    // 0x80030E14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80030E18: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80030E1C: addiu       $at, $zero, 0x8AF
    ctx->r1 = ADD32(0, 0X8AF);
    // 0x80030E20: bne         $v0, $at, L_80030E3C
    if (ctx->r2 != ctx->r1) {
        // 0x80030E24: addiu       $at, $zero, 0x8BB
        ctx->r1 = ADD32(0, 0X8BB);
            goto L_80030E3C;
    }
    // 0x80030E24: addiu       $at, $zero, 0x8BB
    ctx->r1 = ADD32(0, 0X8BB);
    // 0x80030E28: jal         0x80027CEC
    // 0x80030E2C: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    func_80027CEC(rdram, ctx);
        goto after_0;
    // 0x80030E2C: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    after_0:
    // 0x80030E30: b           L_80030ED0
    // 0x80030E34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80030ED0;
    // 0x80030E34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80030E38: addiu       $at, $zero, 0x8BB
    ctx->r1 = ADD32(0, 0X8BB);
L_80030E3C:
    // 0x80030E3C: bne         $v0, $at, L_80030E64
    if (ctx->r2 != ctx->r1) {
        // 0x80030E40: nop
    
            goto L_80030E64;
    }
    // 0x80030E40: nop

    // 0x80030E44: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x80030E48: nop

    // 0x80030E4C: bne         $t8, $zero, L_80030E64
    if (ctx->r24 != 0) {
        // 0x80030E50: nop
    
            goto L_80030E64;
    }
    // 0x80030E50: nop

    // 0x80030E54: jal         0x80027CEC
    // 0x80030E58: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    func_80027CEC(rdram, ctx);
        goto after_1;
    // 0x80030E58: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_1:
    // 0x80030E5C: b           L_80030ED0
    // 0x80030E60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80030ED0;
    // 0x80030E60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80030E64:
    // 0x80030E64: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80030E68: jal         0x8003E4D4
    // 0x80030E6C: addiu       $a0, $a0, 0x88
    ctx->r4 = ADD32(ctx->r4, 0X88);
    func_8003E4D4(rdram, ctx);
        goto after_2;
    // 0x80030E6C: addiu       $a0, $a0, 0x88
    ctx->r4 = ADD32(ctx->r4, 0X88);
    after_2:
    // 0x80030E70: beq         $v0, $zero, L_80030E88
    if (ctx->r2 == 0) {
        // 0x80030E74: nop
    
            goto L_80030E88;
    }
    // 0x80030E74: nop

    // 0x80030E78: jal         0x8003E4D4
    // 0x80030E7C: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    func_8003E4D4(rdram, ctx);
        goto after_3;
    // 0x80030E7C: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    after_3:
    // 0x80030E80: bne         $v0, $zero, L_80030E9C
    if (ctx->r2 != 0) {
        // 0x80030E84: nop
    
            goto L_80030E9C;
    }
    // 0x80030E84: nop

L_80030E88:
    // 0x80030E88: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80030E8C: jal         0x8003E4D4
    // 0x80030E90: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_8003E4D4(rdram, ctx);
        goto after_4;
    // 0x80030E90: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_4:
    // 0x80030E94: beq         $v0, $zero, L_80030EA8
    if (ctx->r2 == 0) {
        // 0x80030E98: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80030EA8;
    }
    // 0x80030E98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80030E9C:
    // 0x80030E9C: b           L_80030EA8
    // 0x80030EA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80030EA8;
    // 0x80030EA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80030EA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80030EA8:
    // 0x80030EA8: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x80030EAC: sll         $t9, $v0, 5
    ctx->r25 = S32(ctx->r2 << 5);
    // 0x80030EB0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80030EB4: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x80030EB8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80030EBC: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x80030EC0: lw          $a0, -0x174($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X174);
    // 0x80030EC4: jal         0x80027CEC
    // 0x80030EC8: nop

    func_80027CEC(rdram, ctx);
        goto after_5;
    // 0x80030EC8: nop

    after_5:
L_80030ECC:
    // 0x80030ECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80030ED0:
    // 0x80030ED0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80030ED4: jr          $ra
    // 0x80030ED8: nop

    return;
    // 0x80030ED8: nop

;}
RECOMP_FUNC void func_80030EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030EDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80030EE0: beq         $a0, $zero, L_80030F18
    if (ctx->r4 == 0) {
        // 0x80030EE4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80030F18;
    }
    // 0x80030EE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80030EE8: jal         0x80001190
    // 0x80030EEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80001190(rdram, ctx);
        goto after_0;
    // 0x80030EEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80030EF0: ori         $a0, $zero, 0xFC30
    ctx->r4 = 0 | 0XFC30;
    // 0x80030EF4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x80030EF8: jal         0x800076C0
    // 0x80030EFC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_800076C0(rdram, ctx);
        goto after_1;
    // 0x80030EFC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_1:
    // 0x80030F00: ori         $a0, $zero, 0xF7FE
    ctx->r4 = 0 | 0XF7FE;
    // 0x80030F04: ori         $a1, $zero, 0xF7FE
    ctx->r5 = 0 | 0XF7FE;
    // 0x80030F08: jal         0x800076C0
    // 0x80030F0C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_800076C0(rdram, ctx);
        goto after_2;
    // 0x80030F0C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_2:
    // 0x80030F10: b           L_80030F48
    // 0x80030F14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80030F48;
    // 0x80030F14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80030F18:
    // 0x80030F18: ori         $a0, $zero, 0xFEAF
    ctx->r4 = 0 | 0XFEAF;
    // 0x80030F1C: jal         0x80007404
    // 0x80030F20: ori         $a1, $zero, 0xFEAF
    ctx->r5 = 0 | 0XFEAF;
    func_80007404(rdram, ctx);
        goto after_3;
    // 0x80030F20: ori         $a1, $zero, 0xFEAF
    ctx->r5 = 0 | 0XFEAF;
    after_3:
    // 0x80030F24: ori         $a0, $zero, 0xFC30
    ctx->r4 = 0 | 0XFC30;
    // 0x80030F28: jal         0x80007404
    // 0x80030F2C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    func_80007404(rdram, ctx);
        goto after_4;
    // 0x80030F2C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    after_4:
    // 0x80030F30: ori         $a0, $zero, 0xF7FE
    ctx->r4 = 0 | 0XF7FE;
    // 0x80030F34: jal         0x80007404
    // 0x80030F38: ori         $a1, $zero, 0xF7FE
    ctx->r5 = 0 | 0XF7FE;
    func_80007404(rdram, ctx);
        goto after_5;
    // 0x80030F38: ori         $a1, $zero, 0xF7FE
    ctx->r5 = 0 | 0XF7FE;
    after_5:
    // 0x80030F3C: jal         0x80001190
    // 0x80030F40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80001190(rdram, ctx);
        goto after_6;
    // 0x80030F40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x80030F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80030F48:
    // 0x80030F48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80030F4C: jr          $ra
    // 0x80030F50: nop

    return;
    // 0x80030F50: nop

;}
RECOMP_FUNC void func_80030F54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030F54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80030F58: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80030F5C: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80030F60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80030F64: addiu       $s1, $s1, -0x4020
    ctx->r17 = ADD32(ctx->r17, -0X4020);
    // 0x80030F68: addiu       $s0, $s0, -0x4058
    ctx->r16 = ADD32(ctx->r16, -0X4058);
L_80030F6C:
    // 0x80030F6C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80030F70: nop

    // 0x80030F74: beq         $a0, $zero, L_80030F84
    if (ctx->r4 == 0) {
        // 0x80030F78: nop
    
            goto L_80030F84;
    }
    // 0x80030F78: nop

    // 0x80030F7C: jal         0x80014BF4
    // 0x80030F80: nop

    func_80014BF4(rdram, ctx);
        goto after_0;
    // 0x80030F80: nop

    after_0:
L_80030F84:
    // 0x80030F84: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80030F88: bne         $s0, $s1, L_80030F6C
    if (ctx->r16 != ctx->r17) {
        // 0x80030F8C: nop
    
            goto L_80030F6C;
    }
    // 0x80030F8C: nop

    // 0x80030F90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80030F94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80030F98: jr          $ra
    // 0x80030F9C: nop

    return;
    // 0x80030F9C: nop

;}
RECOMP_FUNC void func_80030FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030FA0: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80030FA4: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x80030FA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80030FAC: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x80030FB0: beq         $t7, $zero, L_80030FC0
    if (ctx->r15 == 0) {
        // 0x80030FB4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80030FC0;
    }
    // 0x80030FB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80030FB8: b           L_80030FC4
    // 0x80030FBC: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
        goto L_80030FC4;
    // 0x80030FBC: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_80030FC0:
    // 0x80030FC0: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80030FC4:
    // 0x80030FC4: jal         0x80056924
    // 0x80030FC8: nop

    func_80056924(rdram, ctx);
        goto after_0;
    // 0x80030FC8: nop

    after_0:
    // 0x80030FCC: blez        $s1, L_80030FF0
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80030FD0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80030FF0;
    }
    // 0x80030FD0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80030FD4: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
L_80030FD8:
    // 0x80030FD8: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80030FDC: jal         0x80006248
    // 0x80030FE0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80006248(rdram, ctx);
        goto after_1;
    // 0x80030FE0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_1:
    // 0x80030FE4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80030FE8: bne         $s0, $s1, L_80030FD8
    if (ctx->r16 != ctx->r17) {
        // 0x80030FEC: sll         $a0, $s0, 16
        ctx->r4 = S32(ctx->r16 << 16);
            goto L_80030FD8;
    }
    // 0x80030FEC: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
L_80030FF0:
    // 0x80030FF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80030FF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80030FF8: jr          $ra
    // 0x80030FFC: nop

    return;
    // 0x80030FFC: nop

;}
RECOMP_FUNC void func_80031000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80031000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80031004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80031008: jal         0x80030FA0
    // 0x8003100C: nop

    func_80030FA0(rdram, ctx);
        goto after_0;
    // 0x8003100C: nop

    after_0:
    // 0x80031010: jal         0x80027C40
    // 0x80031014: nop

    func_80027C40(rdram, ctx);
        goto after_1;
    // 0x80031014: nop

    after_1:
    // 0x80031018: jal         0x8002DE54
    // 0x8003101C: nop

    func_8002DE54(rdram, ctx);
        goto after_2;
    // 0x8003101C: nop

    after_2:
    // 0x80031020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80031024: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80031028: sw          $zero, -0x15C0($at)
    MEM_W(-0X15C0, ctx->r1) = 0;
    // 0x8003102C: jr          $ra
    // 0x80031030: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80031030: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80031034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80031034: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80031038: jr          $ra
    // 0x8003103C: sw          $a0, -0xCF0($at)
    MEM_W(-0XCF0, ctx->r1) = ctx->r4;
    return;
    // 0x8003103C: sw          $a0, -0xCF0($at)
    MEM_W(-0XCF0, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_80031040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80031040: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80031044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80031048: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
    // 0x8003104C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80031050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80031054: jal         0x8004A0A0
    // 0x80031058: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x80031058: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_0:
    // 0x8003105C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80031060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80031064: ori         $t7, $t6, 0x8
    ctx->r15 = ctx->r14 | 0X8;
    // 0x80031068: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8003106C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80031070: jal         0x8004A0A0
    // 0x80031074: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x80031074: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_1:
    // 0x80031078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003107C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80031080: jr          $ra
    // 0x80031084: nop

    return;
    // 0x80031084: nop

;}
RECOMP_FUNC void func_80031088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80031088: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8003108C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80031090: addiu       $v0, $v0, -0x42BD
    ctx->r2 = ADD32(ctx->r2, -0X42BD);
    // 0x80031094: addiu       $v1, $v1, -0x42C0
    ctx->r3 = ADD32(ctx->r3, -0X42C0);
L_80031098:
    // 0x80031098: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003109C: bne         $v1, $v0, L_80031098
    if (ctx->r3 != ctx->r2) {
        // 0x800310A0: sb          $zero, 0x20($v1)
        MEM_B(0X20, ctx->r3) = 0;
            goto L_80031098;
    }
    // 0x800310A0: sb          $zero, 0x20($v1)
    MEM_B(0X20, ctx->r3) = 0;
    // 0x800310A4: jr          $ra
    // 0x800310A8: nop

    return;
    // 0x800310A8: nop

;}
RECOMP_FUNC void func_800310AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800310AC: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x800310B0: addiu       $v1, $v1, -0x74C
    ctx->r3 = ADD32(ctx->r3, -0X74C);
    // 0x800310B4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800310B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800310BC: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x800310C0: beq         $t6, $zero, L_800310E0
    if (ctx->r14 == 0) {
        // 0x800310C4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800310E0;
    }
    // 0x800310C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800310C8: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x800310CC: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x800310D0: jal         0x8005C550
    // 0x800310D4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    func_8005C550(rdram, ctx);
        goto after_0;
    // 0x800310D4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    after_0:
    // 0x800310D8: b           L_8003112C
    // 0x800310DC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_8003112C;
    // 0x800310DC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800310E0:
    // 0x800310E0: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x800310E4: lw          $t8, -0x42C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X42C0);
    // 0x800310E8: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x800310EC: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x800310F0: bgez        $t9, L_8003110C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800310F4: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_8003110C;
    }
    // 0x800310F4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800310F8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800310FC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80031100: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80031104: jal         0x8005BE2C
    // 0x80031108: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_8005BE2C(rdram, ctx);
        goto after_1;
    // 0x80031108: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_1:
L_8003110C:
    // 0x8003110C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80031110: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
L_80031114:
    // 0x80031114: jal         0x8005C478
    // 0x80031118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005C478(rdram, ctx);
        goto after_2;
    // 0x80031118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8003111C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80031120: bne         $s0, $s1, L_80031114
    if (ctx->r16 != ctx->r17) {
        // 0x80031124: nop
    
            goto L_80031114;
    }
    // 0x80031124: nop

    // 0x80031128: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8003112C:
    // 0x8003112C: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
L_80031130:
    // 0x80031130: jal         0x8003E4D4
    // 0x80031134: addiu       $a0, $s0, 0x61
    ctx->r4 = ADD32(ctx->r16, 0X61);
    func_8003E4D4(rdram, ctx);
        goto after_3;
    // 0x80031134: addiu       $a0, $s0, 0x61
    ctx->r4 = ADD32(ctx->r16, 0X61);
    after_3:
    // 0x80031138: beq         $v0, $zero, L_8003114C
    if (ctx->r2 == 0) {
        // 0x8003113C: nop
    
            goto L_8003114C;
    }
    // 0x8003113C: nop

    // 0x80031140: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80031144: bne         $s0, $s1, L_80031130
    if (ctx->r16 != ctx->r17) {
        // 0x80031148: nop
    
            goto L_80031130;
    }
    // 0x80031148: nop

L_8003114C:
    // 0x8003114C: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x80031150: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x80031154: addiu       $s2, $s0, 0x5
    ctx->r18 = ADD32(ctx->r16, 0X5);
    // 0x80031158: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8003115C: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80031160: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80031164: jal         0x8005BE2C
    // 0x80031168: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_4;
    // 0x80031168: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x8003116C: addiu       $t9, $zero, 0xE
    ctx->r25 = ADD32(0, 0XE);
    // 0x80031170: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x80031174: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80031178: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003117C: jal         0x8005BE2C
    // 0x80031180: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_5;
    // 0x80031180: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x80031184: jal         0x8003E4D4
    // 0x80031188: addiu       $a0, $zero, 0xF6
    ctx->r4 = ADD32(0, 0XF6);
    func_8003E4D4(rdram, ctx);
        goto after_6;
    // 0x80031188: addiu       $a0, $zero, 0xF6
    ctx->r4 = ADD32(0, 0XF6);
    after_6:
    // 0x8003118C: beq         $v0, $zero, L_80031244
    if (ctx->r2 == 0) {
        // 0x80031190: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80031244;
    }
    // 0x80031190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80031194: jal         0x8003E4FC
    // 0x80031198: addiu       $a0, $zero, 0xF6
    ctx->r4 = ADD32(0, 0XF6);
    func_8003E4FC(rdram, ctx);
        goto after_7;
    // 0x80031198: addiu       $a0, $zero, 0xF6
    ctx->r4 = ADD32(0, 0XF6);
    after_7:
    // 0x8003119C: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x800311A0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800311A4: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x800311A8: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x800311AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800311B0: jal         0x8005BE2C
    // 0x800311B4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_8;
    // 0x800311B4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_8:
    // 0x800311B8: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x800311BC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800311C0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x800311C4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800311C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800311CC: jal         0x8005BE2C
    // 0x800311D0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_9;
    // 0x800311D0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_9:
    // 0x800311D4: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x800311D8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800311DC: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x800311E0: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x800311E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800311E8: jal         0x8005BE2C
    // 0x800311EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_10;
    // 0x800311EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_10:
    // 0x800311F0: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x800311F4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800311F8: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x800311FC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80031200: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80031204: jal         0x8005BE2C
    // 0x80031208: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_11;
    // 0x80031208: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_11:
    // 0x8003120C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80031210: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x80031214: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80031218: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003121C: jal         0x8005BE2C
    // 0x80031220: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_12;
    // 0x80031220: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_12:
    // 0x80031224: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80031228: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8003122C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80031230: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x80031234: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80031238: jal         0x8005BE2C
    // 0x8003123C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_13;
    // 0x8003123C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_13:
    // 0x80031240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80031244:
    // 0x80031244: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80031248: jr          $ra
    // 0x8003124C: nop

    return;
    // 0x8003124C: nop

;}
RECOMP_FUNC void func_80031250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80031250: jr          $ra
    // 0x80031254: nop

    return;
    // 0x80031254: nop

;}
RECOMP_FUNC void func_80031260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80031260: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x80031264: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80031268: jal         0x80030EDC
    // 0x8003126C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80030EDC(rdram, ctx);
        goto after_0;
    // 0x8003126C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80031270: jal         0x80002F88
    // 0x80031274: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    func_80002F88(rdram, ctx);
        goto after_1;
    // 0x80031274: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    after_1:
    // 0x80031278: jal         0x80007AB0
    // 0x8003127C: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
    func_80007AB0(rdram, ctx);
        goto after_2;
    // 0x8003127C: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
    after_2:
    // 0x80031280: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80031284: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80031288: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003128C: jal         0x80009A84
    // 0x80031290: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80009A84(rdram, ctx);
        goto after_3;
    // 0x80031290: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_3:
    // 0x80031294: jal         0x80027C94
    // 0x80031298: nop

    func_80027C94(rdram, ctx);
        goto after_4;
    // 0x80031298: nop

    after_4:
    // 0x8003129C: jal         0x80027C40
    // 0x800312A0: nop

    func_80027C40(rdram, ctx);
        goto after_5;
    // 0x800312A0: nop

    after_5:
    // 0x800312A4: addiu       $a0, $zero, 0x927
    ctx->r4 = ADD32(0, 0X927);
    // 0x800312A8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x800312AC: jal         0x80015784
    // 0x800312B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_6;
    // 0x800312B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x800312B4: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x800312B8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800312BC: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800312C0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x800312C4: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x800312C8: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x800312CC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800312D0: jal         0x80014B64
    // 0x800312D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_7;
    // 0x800312D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_7:
    // 0x800312D8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800312DC: jal         0x80014AC4
    // 0x800312E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_8;
    // 0x800312E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_8:
    // 0x800312E4: or          $s4, $s2, $zero
    ctx->r20 = ctx->r18 | 0;
    // 0x800312E8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800312EC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_800312F0:
    // 0x800312F0: jal         0x80014A7C
    // 0x800312F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80014A7C(rdram, ctx);
        goto after_9;
    // 0x800312F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_9:
    // 0x800312F8: jal         0x80007AB0
    // 0x800312FC: nop

    func_80007AB0(rdram, ctx);
        goto after_10;
    // 0x800312FC: nop

    after_10:
    // 0x80031300: addiu       $s1, $s1, 0x6
    ctx->r17 = ADD32(ctx->r17, 0X6);
    // 0x80031304: slti        $at, $s1, 0xF0
    ctx->r1 = SIGNED(ctx->r17) < 0XF0 ? 1 : 0;
    // 0x80031308: bne         $at, $zero, L_800312F0
    if (ctx->r1 != 0) {
        // 0x8003130C: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_800312F0;
    }
    // 0x8003130C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80031310: jal         0x80027CEC
    // 0x80031314: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    func_80027CEC(rdram, ctx);
        goto after_11;
    // 0x80031314: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    after_11:
    // 0x80031318: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8003131C: jal         0x80014A7C
    // 0x80031320: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_80014A7C(rdram, ctx);
        goto after_12;
    // 0x80031320: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_12:
    // 0x80031324: jal         0x8000797C
    // 0x80031328: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    func_8000797C(rdram, ctx);
        goto after_13;
    // 0x80031328: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_13:
    // 0x8003132C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80031330: addiu       $a0, $a0, 0xBB4
    ctx->r4 = ADD32(ctx->r4, 0XBB4);
    // 0x80031334: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80031338: jal         0x8001574C
    // 0x8003133C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001574C(rdram, ctx);
        goto after_14;
    // 0x8003133C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
    // 0x80031340: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x80031344: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80031348: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8003134C: addiu       $t6, $zero, 0x130
    ctx->r14 = ADD32(0, 0X130);
    // 0x80031350: addiu       $t7, $zero, 0xE0
    ctx->r15 = ADD32(0, 0XE0);
    // 0x80031354: sw          $t6, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r14;
    // 0x80031358: sw          $t7, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r15;
    // 0x8003135C: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x80031360: sw          $zero, 0x40($v0)
    MEM_W(0X40, ctx->r2) = 0;
    // 0x80031364: addiu       $a0, $zero, 0x928
    ctx->r4 = ADD32(0, 0X928);
    // 0x80031368: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8003136C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80031370: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x80031374: jal         0x80015784
    // 0x80031378: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    func_80015784(rdram, ctx);
        goto after_15;
    // 0x80031378: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    after_15:
    // 0x8003137C: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x80031380: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x80031384: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80031388: jal         0x80014B64
    // 0x8003138C: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    func_80014B64(rdram, ctx);
        goto after_16;
    // 0x8003138C: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    after_16:
    // 0x80031390: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80031394: jal         0x80014AC4
    // 0x80031398: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_17;
    // 0x80031398: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_17:
    // 0x8003139C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800313A0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800313A4: addiu       $s2, $zero, 0xFF
    ctx->r18 = ADD32(0, 0XFF);
    // 0x800313A8: sw          $s5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r21;
    // 0x800313AC: addiu       $s0, $zero, 0xF
    ctx->r16 = ADD32(0, 0XF);
L_800313B0:
    // 0x800313B0: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x800313B4: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x800313B8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800313BC: jal         0x80014A7C
    // 0x800313C0: sw          $s3, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->r19;
    func_80014A7C(rdram, ctx);
        goto after_18;
    // 0x800313C0: sw          $s3, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->r19;
    after_18:
    // 0x800313C4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800313C8: jal         0x80014A7C
    // 0x800313CC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80014A7C(rdram, ctx);
        goto after_19;
    // 0x800313CC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_19:
    // 0x800313D0: jal         0x80007AB0
    // 0x800313D4: nop

    func_80007AB0(rdram, ctx);
        goto after_20;
    // 0x800313D4: nop

    after_20:
    // 0x800313D8: addiu       $s2, $s2, -0x6
    ctx->r18 = ADD32(ctx->r18, -0X6);
    // 0x800313DC: addiu       $s1, $s1, 0x6
    ctx->r17 = ADD32(ctx->r17, 0X6);
    // 0x800313E0: bne         $s0, $s2, L_800313B0
    if (ctx->r16 != ctx->r18) {
        // 0x800313E4: addiu       $s3, $s3, 0x3
        ctx->r19 = ADD32(ctx->r19, 0X3);
            goto L_800313B0;
    }
    // 0x800313E4: addiu       $s3, $s3, 0x3
    ctx->r19 = ADD32(ctx->r19, 0X3);
    // 0x800313E8: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x800313EC: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x800313F0: sw          $t9, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->r25;
    // 0x800313F4: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x800313F8: jal         0x80014A7C
    // 0x800313FC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_80014A7C(rdram, ctx);
        goto after_21;
    // 0x800313FC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_21:
    // 0x80031400: jal         0x80014BF4
    // 0x80031404: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_80014BF4(rdram, ctx);
        goto after_22;
    // 0x80031404: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_22:
    // 0x80031408: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8003140C: addiu       $v1, $v1, -0x74C
    ctx->r3 = ADD32(ctx->r3, -0X74C);
    // 0x80031410: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80031414: addiu       $s5, $zero, 0x9
    ctx->r21 = ADD32(0, 0X9);
    // 0x80031418: addiu       $v0, $t7, -0x1
    ctx->r2 = ADD32(ctx->r15, -0X1);
    // 0x8003141C: bgez        $v0, L_8003142C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80031420: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_8003142C;
    }
    // 0x80031420: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80031424: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80031428: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003142C:
    // 0x8003142C: andi        $t9, $v0, 0xF
    ctx->r25 = ctx->r2 & 0XF;
    // 0x80031430: bne         $t9, $zero, L_80031454
    if (ctx->r25 != 0) {
        // 0x80031434: addiu       $s4, $zero, 0x5A
        ctx->r20 = ADD32(0, 0X5A);
            goto L_80031454;
    }
    // 0x80031434: addiu       $s4, $zero, 0x5A
    ctx->r20 = ADD32(0, 0X5A);
    // 0x80031438: addiu       $t6, $zero, 0x27
    ctx->r14 = ADD32(0, 0X27);
    // 0x8003143C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80031440: sw          $t6, -0x460($at)
    MEM_W(-0X460, ctx->r1) = ctx->r14;
    // 0x80031444: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x80031448: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8003144C: b           L_80031468
    // 0x80031450: sw          $zero, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = 0;
        goto L_80031468;
    // 0x80031450: sw          $zero, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = 0;
L_80031454:
    // 0x80031454: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x80031458: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003145C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80031460: sw          $t8, -0x460($at)
    MEM_W(-0X460, ctx->r1) = ctx->r24;
    // 0x80031464: sw          $t9, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r25;
L_80031468:
    // 0x80031468: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x8003146C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80031470: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80031474: addiu       $s7, $t7, -0x430
    ctx->r23 = ADD32(ctx->r15, -0X430);
    // 0x80031478: addiu       $t6, $t6, -0x6B3C
    ctx->r14 = ADD32(ctx->r14, -0X6B3C);
    // 0x8003147C: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80031480: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80031484: addiu       $s3, $s3, -0x3F78
    ctx->r19 = ADD32(ctx->r19, -0X3F78);
    // 0x80031488: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x8003148C: or          $fp, $s7, $zero
    ctx->r30 = ctx->r23 | 0;
    // 0x80031490: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_80031494:
    // 0x80031494: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80031498: lw          $t8, -0x3C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C0);
    // 0x8003149C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800314A0: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x800314A4: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x800314A8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800314AC: addiu       $a2, $a2, -0x3F3C
    ctx->r6 = ADD32(ctx->r6, -0X3F3C);
    // 0x800314B0: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x800314B4: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x800314B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800314BC: jal         0x80029898
    // 0x800314C0: sw          $t8, -0x3F3C($at)
    MEM_W(-0X3F3C, ctx->r1) = ctx->r24;
    func_80029898(rdram, ctx);
        goto after_23;
    // 0x800314C0: sw          $t8, -0x3F3C($at)
    MEM_W(-0X3F3C, ctx->r1) = ctx->r24;
    after_23:
    // 0x800314C4: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x800314C8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800314CC: beq         $t6, $zero, L_80031508
    if (ctx->r14 == 0) {
        // 0x800314D0: sw          $v0, -0x3F74($at)
        MEM_W(-0X3F74, ctx->r1) = ctx->r2;
            goto L_80031508;
    }
    // 0x800314D0: sw          $v0, -0x3F74($at)
    MEM_W(-0X3F74, ctx->r1) = ctx->r2;
    // 0x800314D4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800314D8: lw          $v0, -0x74C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X74C);
    // 0x800314DC: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    // 0x800314E0: andi        $t7, $v0, 0xF
    ctx->r15 = ctx->r2 & 0XF;
    // 0x800314E4: beq         $t7, $zero, L_80031508
    if (ctx->r15 == 0) {
        // 0x800314E8: addiu       $a1, $zero, 0xA0
        ctx->r5 = ADD32(0, 0XA0);
            goto L_80031508;
    }
    // 0x800314E8: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x800314EC: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x800314F0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800314F4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800314F8: addiu       $a3, $t7, 0x29
    ctx->r7 = ADD32(ctx->r15, 0X29);
    // 0x800314FC: jal         0x8002A278
    // 0x80031500: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8002A278(rdram, ctx);
        goto after_24;
    // 0x80031500: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_24:
    // 0x80031504: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
L_80031508:
    // 0x80031508: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x8003150C: addiu       $s1, $s1, -0x460
    ctx->r17 = ADD32(ctx->r17, -0X460);
L_80031510:
    // 0x80031510: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80031514: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x80031518: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8003151C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80031520: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80031524: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80031528: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8003152C: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x80031530: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80031534: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x80031538: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x8003153C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80031540: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80031544: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80031548: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8003154C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80031550: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80031554: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80031558: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8003155C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80031560: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80031564: jal         0x8002A278
    // 0x80031568: nop

    func_8002A278(rdram, ctx);
        goto after_25;
    // 0x80031568: nop

    after_25:
    // 0x8003156C: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x80031570: bne         $s1, $s7, L_80031510
    if (ctx->r17 != ctx->r23) {
        // 0x80031574: sw          $v0, -0x4($s1)
        MEM_W(-0X4, ctx->r17) = ctx->r2;
            goto L_80031510;
    }
    // 0x80031574: sw          $v0, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->r2;
    // 0x80031578: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    // 0x8003157C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80031580: jal         0x80015784
    // 0x80031584: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_26;
    // 0x80031584: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_26:
    // 0x80031588: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x8003158C: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80031590: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80031594: jal         0x80014B64
    // 0x80031598: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_27;
    // 0x80031598: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_27:
    // 0x8003159C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800315A0: jal         0x80014AC4
    // 0x800315A4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_28;
    // 0x800315A4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_28:
    // 0x800315A8: or          $s6, $s0, $zero
    ctx->r22 = ctx->r16 | 0;
    // 0x800315AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800315B0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x800315B4: jal         0x80015898
    // 0x800315B8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80015898(rdram, ctx);
        goto after_29;
    // 0x800315B8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_29:
    // 0x800315BC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x800315C0: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x800315C4: jal         0x80015950
    // 0x800315C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_30;
    // 0x800315C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_30:
    // 0x800315CC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x800315D0: jal         0x800157DC
    // 0x800315D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800157DC(rdram, ctx);
        goto after_31;
    // 0x800315D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_31:
    // 0x800315D8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x800315DC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x800315E0: jal         0x80014B38
    // 0x800315E4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_80014B38(rdram, ctx);
        goto after_32;
    // 0x800315E4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_32:
    // 0x800315E8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x800315EC: jal         0x80014AB0
    // 0x800315F0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AB0(rdram, ctx);
        goto after_33;
    // 0x800315F0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_33:
    // 0x800315F4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800315F8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x800315FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80031600: jal         0x80007C3C
    // 0x80031604: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_34;
    // 0x80031604: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_34:
    // 0x80031608: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8003160C: bne         $s2, $s2, L_8003169C
    if (ctx->r18 != ctx->r18) {
        // 0x80031610: sw          $s2, 0x0($s3)
        MEM_W(0X0, ctx->r19) = ctx->r18;
            goto L_8003169C;
    }
    // 0x80031610: sw          $s2, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r18;
    // 0x80031614: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80031618:
    // 0x80031618: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x8003161C: nop

    // 0x80031620: beq         $s2, $t9, L_80031630
    if (ctx->r18 == ctx->r25) {
        // 0x80031624: nop
    
            goto L_80031630;
    }
    // 0x80031624: nop

    // 0x80031628: b           L_800316A0
    // 0x8003162C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_800316A0;
    // 0x8003162C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80031630:
    // 0x80031630: jal         0x80007AB0
    // 0x80031634: nop

    func_80007AB0(rdram, ctx);
        goto after_35;
    // 0x80031634: nop

    after_35:
    // 0x80031638: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003163C: bne         $s0, $s4, L_80031618
    if (ctx->r16 != ctx->r20) {
        // 0x80031640: nop
    
            goto L_80031618;
    }
    // 0x80031640: nop

    // 0x80031644: bne         $s5, $zero, L_80031658
    if (ctx->r21 != 0) {
        // 0x80031648: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_80031658;
    }
    // 0x80031648: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8003164C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80031650: b           L_8003169C
    // 0x80031654: sw          $t6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r14;
        goto L_8003169C;
    // 0x80031654: sw          $t6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r14;
L_80031658:
    // 0x80031658: negu        $a1, $s5
    ctx->r5 = SUB32(0, ctx->r21);
    // 0x8003165C: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x80031660: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80031664: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80031668: jal         0x80015950
    // 0x8003166C: sll         $s0, $s5, 4
    ctx->r16 = S32(ctx->r21 << 4);
    func_80015950(rdram, ctx);
        goto after_36;
    // 0x8003166C: sll         $s0, $s5, 4
    ctx->r16 = S32(ctx->r21 << 4);
    after_36:
    // 0x80031670: jal         0x80027874
    // 0x80031674: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
    func_80027874(rdram, ctx);
        goto after_37;
    // 0x80031674: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
    after_37:
    // 0x80031678: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x8003167C: addiu       $a1, $s0, -0x10
    ctx->r5 = ADD32(ctx->r16, -0X10);
    // 0x80031680: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80031684: jal         0x80015950
    // 0x80031688: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_38;
    // 0x80031688: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_38:
    // 0x8003168C: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x80031690: nop

    // 0x80031694: beq         $s2, $t8, L_80031618
    if (ctx->r18 == ctx->r24) {
        // 0x80031698: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80031618;
    }
    // 0x80031698: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8003169C:
    // 0x8003169C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800316A0:
    // 0x800316A0: jal         0x800075A0
    // 0x800316A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800075A0(rdram, ctx);
        goto after_39;
    // 0x800316A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_39:
    // 0x800316A8: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x800316AC: addiu       $s1, $s1, -0x460
    ctx->r17 = ADD32(ctx->r17, -0X460);
L_800316B0:
    // 0x800316B0: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x800316B4: jal         0x8002A310
    // 0x800316B8: nop

    func_8002A310(rdram, ctx);
        goto after_40;
    // 0x800316B8: nop

    after_40:
    // 0x800316BC: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x800316C0: bne         $s1, $fp, L_800316B0
    if (ctx->r17 != ctx->r30) {
        // 0x800316C4: nop
    
            goto L_800316B0;
    }
    // 0x800316C4: nop

    // 0x800316C8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800316CC: lw          $a0, -0x3F74($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3F74);
    // 0x800316D0: jal         0x8002A310
    // 0x800316D4: nop

    func_8002A310(rdram, ctx);
        goto after_41;
    // 0x800316D4: nop

    after_41:
    // 0x800316D8: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x800316DC: nop

    // 0x800316E0: beq         $t9, $zero, L_800316F0
    if (ctx->r25 == 0) {
        // 0x800316E4: nop
    
            goto L_800316F0;
    }
    // 0x800316E4: nop

    // 0x800316E8: jal         0x8002A310
    // 0x800316EC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_8002A310(rdram, ctx);
        goto after_42;
    // 0x800316EC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_42:
L_800316F0:
    // 0x800316F0: jal         0x80014BF4
    // 0x800316F4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_80014BF4(rdram, ctx);
        goto after_43;
    // 0x800316F4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_43:
    // 0x800316F8: jal         0x8000797C
    // 0x800316FC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8000797C(rdram, ctx);
        goto after_44;
    // 0x800316FC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_44:
    // 0x80031700: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x80031704: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80031708: bne         $t6, $at, L_800317D4
    if (ctx->r14 != ctx->r1) {
        // 0x8003170C: nop
    
            goto L_800317D4;
    }
    // 0x8003170C: nop

    // 0x80031710: jal         0x8003E4D4
    // 0x80031714: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    func_8003E4D4(rdram, ctx);
        goto after_45;
    // 0x80031714: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_45:
    // 0x80031718: beq         $v0, $zero, L_800317D4
    if (ctx->r2 == 0) {
        // 0x8003171C: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_800317D4;
    }
    // 0x8003171C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80031720: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x80031724: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80031728: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8003172C: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
    // 0x80031730: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x80031734: jal         0x8002A278
    // 0x80031738: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8002A278(rdram, ctx);
        goto after_46;
    // 0x80031738: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_46:
    // 0x8003173C: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x80031740: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80031744: jal         0x80014B78
    // 0x80031748: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    func_80014B78(rdram, ctx);
        goto after_47;
    // 0x80031748: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    after_47:
    // 0x8003174C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80031750: lw          $t8, -0x3BC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3BC);
    // 0x80031754: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80031758: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8003175C: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x80031760: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80031764: addiu       $a2, $a2, -0x3F38
    ctx->r6 = ADD32(ctx->r6, -0X3F38);
    // 0x80031768: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8003176C: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    // 0x80031770: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80031774: jal         0x80029898
    // 0x80031778: sw          $t8, -0x3F38($at)
    MEM_W(-0X3F38, ctx->r1) = ctx->r24;
    func_80029898(rdram, ctx);
        goto after_48;
    // 0x80031778: sw          $t8, -0x3F38($at)
    MEM_W(-0X3F38, ctx->r1) = ctx->r24;
    after_48:
    // 0x8003177C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80031780: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80031784: addiu       $a0, $a0, -0x430
    ctx->r4 = ADD32(ctx->r4, -0X430);
    // 0x80031788: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003178C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80031790: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80031794: jal         0x8002A9C0
    // 0x80031798: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8002A9C0(rdram, ctx);
        goto after_49;
    // 0x80031798: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_49:
    // 0x8003179C: jal         0x8002A98C
    // 0x800317A0: nop

    func_8002A98C(rdram, ctx);
        goto after_50;
    // 0x800317A0: nop

    after_50:
    // 0x800317A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800317A8: jal         0x8002A310
    // 0x800317AC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8002A310(rdram, ctx);
        goto after_51;
    // 0x800317AC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_51:
    // 0x800317B0: jal         0x8002A310
    // 0x800317B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8002A310(rdram, ctx);
        goto after_52;
    // 0x800317B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_52:
    // 0x800317B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800317BC: beq         $s0, $at, L_8003189C
    if (ctx->r16 == ctx->r1) {
        // 0x800317C0: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_8003189C;
    }
    // 0x800317C0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800317C4: jal         0x8000797C
    // 0x800317C8: addiu       $s5, $zero, 0x9
    ctx->r21 = ADD32(0, 0X9);
    func_8000797C(rdram, ctx);
        goto after_53;
    // 0x800317C8: addiu       $s5, $zero, 0x9
    ctx->r21 = ADD32(0, 0X9);
    after_53:
    // 0x800317CC: b           L_80031494
    // 0x800317D0: nop

        goto L_80031494;
    // 0x800317D0: nop

L_800317D4:
    // 0x800317D4: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x800317D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800317DC: bne         $t6, $at, L_8003189C
    if (ctx->r14 != ctx->r1) {
        // 0x800317E0: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8003189C;
    }
    // 0x800317E0: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x800317E4: beq         $s5, $zero, L_8003189C
    if (ctx->r21 == 0) {
        // 0x800317E8: addiu       $a1, $zero, 0x98
        ctx->r5 = ADD32(0, 0X98);
            goto L_8003189C;
    }
    // 0x800317E8: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
    // 0x800317EC: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x800317F0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800317F4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800317F8: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x800317FC: jal         0x8002A278
    // 0x80031800: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8002A278(rdram, ctx);
        goto after_54;
    // 0x80031800: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_54:
    // 0x80031804: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x80031808: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003180C: jal         0x80014B78
    // 0x80031810: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    func_80014B78(rdram, ctx);
        goto after_55;
    // 0x80031810: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    after_55:
    // 0x80031814: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80031818: lw          $t8, -0x3BC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3BC);
    // 0x8003181C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80031820: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80031824: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x80031828: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8003182C: addiu       $a2, $a2, -0x3F38
    ctx->r6 = ADD32(ctx->r6, -0X3F38);
    // 0x80031830: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80031834: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x80031838: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8003183C: jal         0x80029898
    // 0x80031840: sw          $t8, -0x3F38($at)
    MEM_W(-0X3F38, ctx->r1) = ctx->r24;
    func_80029898(rdram, ctx);
        goto after_56;
    // 0x80031840: sw          $t8, -0x3F38($at)
    MEM_W(-0X3F38, ctx->r1) = ctx->r24;
    after_56:
    // 0x80031844: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80031848: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8003184C: addiu       $a0, $a0, -0x3F8
    ctx->r4 = ADD32(ctx->r4, -0X3F8);
    // 0x80031850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80031854: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80031858: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x8003185C: jal         0x8002A9C0
    // 0x80031860: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8002A9C0(rdram, ctx);
        goto after_57;
    // 0x80031860: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_57:
    // 0x80031864: jal         0x8002A98C
    // 0x80031868: nop

    func_8002A98C(rdram, ctx);
        goto after_58;
    // 0x80031868: nop

    after_58:
    // 0x8003186C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80031870: jal         0x8002A310
    // 0x80031874: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8002A310(rdram, ctx);
        goto after_59;
    // 0x80031874: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_59:
    // 0x80031878: jal         0x8002A310
    // 0x8003187C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8002A310(rdram, ctx);
        goto after_60;
    // 0x8003187C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_60:
    // 0x80031880: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80031884: beq         $s0, $at, L_8003189C
    if (ctx->r16 == ctx->r1) {
        // 0x80031888: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_8003189C;
    }
    // 0x80031888: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8003188C: jal         0x8000797C
    // 0x80031890: addiu       $s5, $zero, 0x9
    ctx->r21 = ADD32(0, 0X9);
    func_8000797C(rdram, ctx);
        goto after_61;
    // 0x80031890: addiu       $s5, $zero, 0x9
    ctx->r21 = ADD32(0, 0X9);
    after_61:
    // 0x80031894: b           L_80031494
    // 0x80031898: nop

        goto L_80031494;
    // 0x80031898: nop

L_8003189C:
    // 0x8003189C: jal         0x80027C94
    // 0x800318A0: nop

    func_80027C94(rdram, ctx);
        goto after_62;
    // 0x800318A0: nop

    after_62:
    // 0x800318A4: jal         0x8000797C
    // 0x800318A8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8000797C(rdram, ctx);
        goto after_63;
    // 0x800318A8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_63:
    // 0x800318AC: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x800318B0: jal         0x80014BF4
    // 0x800318B4: nop

    func_80014BF4(rdram, ctx);
        goto after_64;
    // 0x800318B4: nop

    after_64:
    // 0x800318B8: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x800318BC: jal         0x80014BF4
    // 0x800318C0: nop

    func_80014BF4(rdram, ctx);
        goto after_65;
    // 0x800318C0: nop

    after_65:
    // 0x800318C4: jal         0x80002D08
    // 0x800318C8: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    func_80002D08(rdram, ctx);
        goto after_66;
    // 0x800318C8: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    after_66:
    // 0x800318CC: jal         0x8000797C
    // 0x800318D0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8000797C(rdram, ctx);
        goto after_67;
    // 0x800318D0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_67:
    // 0x800318D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800318D8: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x800318DC: jr          $ra
    // 0x800318E0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x800318E0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_800318E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800318E4: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x800318E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800318EC: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x800318F0: jal         0x8005C3A8
    // 0x800318F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005C3A8(rdram, ctx);
        goto after_0;
    // 0x800318F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800318F8: lw          $s0, 0x8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X8);
    // 0x800318FC: jal         0x8002D000
    // 0x80031900: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002D000(rdram, ctx);
        goto after_1;
    // 0x80031900: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80031904: jal         0x8005B494
    // 0x80031908: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8005B494(rdram, ctx);
        goto after_2;
    // 0x80031908: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x8003190C: beq         $v0, $zero, L_80032090
    if (ctx->r2 == 0) {
        // 0x80031910: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80032090;
    }
    // 0x80031910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80031914: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x80031918: addiu       $fp, $fp, -0x134
    ctx->r30 = ADD32(ctx->r30, -0X134);
    // 0x8003191C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80031920: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80031924:
    // 0x80031924: jal         0x8003E4D4
    // 0x80031928: addiu       $a0, $s4, 0x88
    ctx->r4 = ADD32(ctx->r20, 0X88);
    func_8003E4D4(rdram, ctx);
        goto after_3;
    // 0x80031928: addiu       $a0, $s4, 0x88
    ctx->r4 = ADD32(ctx->r20, 0X88);
    after_3:
    // 0x8003192C: bne         $v0, $zero, L_80031938
    if (ctx->r2 != 0) {
        // 0x80031930: sll         $t6, $s3, 2
        ctx->r14 = S32(ctx->r19 << 2);
            goto L_80031938;
    }
    // 0x80031930: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x80031934: bne         $s4, $zero, L_80031960
    if (ctx->r20 != 0) {
        // 0x80031938: addu        $t7, $sp, $t6
        ctx->r15 = ADD32(ctx->r29, ctx->r14);
            goto L_80031960;
    }
L_80031938:
    // 0x80031938: addu        $t7, $sp, $t6
    ctx->r15 = ADD32(ctx->r29, ctx->r14);
    // 0x8003193C: sll         $t8, $s4, 2
    ctx->r24 = S32(ctx->r20 << 2);
    // 0x80031940: sw          $s4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->r20;
    // 0x80031944: addu        $t9, $fp, $t8
    ctx->r25 = ADD32(ctx->r30, ctx->r24);
    // 0x80031948: lw          $t6, 0x0($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X0);
    // 0x8003194C: nop

    // 0x80031950: bne         $s0, $t6, L_8003195C
    if (ctx->r16 != ctx->r14) {
        // 0x80031954: nop
    
            goto L_8003195C;
    }
    // 0x80031954: nop

    // 0x80031958: or          $s6, $s3, $zero
    ctx->r22 = ctx->r19 | 0;
L_8003195C:
    // 0x8003195C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_80031960:
    // 0x80031960: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80031964: slti        $at, $s4, 0x7
    ctx->r1 = SIGNED(ctx->r20) < 0X7 ? 1 : 0;
    // 0x80031968: bne         $at, $zero, L_80031924
    if (ctx->r1 != 0) {
        // 0x8003196C: nop
    
            goto L_80031924;
    }
    // 0x8003196C: nop

    // 0x80031970: slti        $at, $s3, 0x2
    ctx->r1 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
    // 0x80031974: bne         $at, $zero, L_8003208C
    if (ctx->r1 != 0) {
        // 0x80031978: addiu       $a0, $zero, -0x1
        ctx->r4 = ADD32(0, -0X1);
            goto L_8003208C;
    }
    // 0x80031978: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8003197C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80031980: jal         0x80030524
    // 0x80031984: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80030524(rdram, ctx);
        goto after_4;
    // 0x80031984: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80031988: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8003198C: lw          $t7, -0x42C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X42C0);
    // 0x80031990: lui         $at, 0x6
    ctx->r1 = S32(0X6 << 16);
    // 0x80031994: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80031998: bne         $t8, $zero, L_800319A8
    if (ctx->r24 != 0) {
        // 0x8003199C: nop
    
            goto L_800319A8;
    }
    // 0x8003199C: nop

    // 0x800319A0: jal         0x80030EDC
    // 0x800319A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80030EDC(rdram, ctx);
        goto after_5;
    // 0x800319A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
L_800319A8:
    // 0x800319A8: jal         0x80007AB0
    // 0x800319AC: nop

    func_80007AB0(rdram, ctx);
        goto after_6;
    // 0x800319AC: nop

    after_6:
    // 0x800319B0: jal         0x80027874
    // 0x800319B4: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    func_80027874(rdram, ctx);
        goto after_7;
    // 0x800319B4: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    after_7:
    // 0x800319B8: mtc1        $s3, $f6
    ctx->f6.u32l = ctx->r19;
    // 0x800319BC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800319C0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800319C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800319C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800319CC: div.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x800319D0: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x800319D4: jal         0x8002D000
    // 0x800319D8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_8002D000(rdram, ctx);
        goto after_8;
    // 0x800319D8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x800319DC: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x800319E0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x800319E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800319E8: jal         0x8004A0A0
    // 0x800319EC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004A0A0(rdram, ctx);
        goto after_9;
    // 0x800319EC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_9:
    // 0x800319F0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800319F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800319F8: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x800319FC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80031A00: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80031A04: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80031A08: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80031A0C: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80031A10: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80031A14: lw          $a0, 0x120($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X120);
    // 0x80031A18: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x80031A1C: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x80031A20: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80031A24: jal         0x8000809C
    // 0x80031A28: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    func_8000809C(rdram, ctx);
        goto after_10;
    // 0x80031A28: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    after_10:
    // 0x80031A2C: blez        $s3, L_80031AC0
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80031A30: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_80031AC0;
    }
    // 0x80031A30: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80031A34: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x80031A38: lui         $s2, 0x9090
    ctx->r18 = S32(0X9090 << 16);
    // 0x80031A3C: ori         $s2, $s2, 0x90C0
    ctx->r18 = ctx->r18 | 0X90C0;
    // 0x80031A40: addiu       $s7, $s7, -0xE8
    ctx->r23 = ADD32(ctx->r23, -0XE8);
    // 0x80031A44: addiu       $s5, $sp, 0x44
    ctx->r21 = ADD32(ctx->r29, 0X44);
    // 0x80031A48: addiu       $s1, $sp, 0xBC
    ctx->r17 = ADD32(ctx->r29, 0XBC);
L_80031A4C:
    // 0x80031A4C: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x80031A50: lwc1        $f20, 0x88($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80031A54: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80031A58: addu        $t7, $fp, $t6
    ctx->r15 = ADD32(ctx->r30, ctx->r14);
    // 0x80031A5C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80031A60: lwc1        $f22, 0x8C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80031A64: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80031A68: addu        $t6, $s7, $t9
    ctx->r14 = ADD32(ctx->r23, ctx->r25);
    // 0x80031A6C: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x80031A70: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80031A74: jal         0x80015784
    // 0x80031A78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_11;
    // 0x80031A78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x80031A7C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80031A80: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80031A84: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80031A88: jal         0x80014B64
    // 0x80031A8C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_12;
    // 0x80031A8C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_12:
    // 0x80031A90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80031A94: jal         0x80014AC4
    // 0x80031A98: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_13;
    // 0x80031A98: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_13:
    // 0x80031A9C: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x80031AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80031AA4: jal         0x80014A60
    // 0x80031AA8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80014A60(rdram, ctx);
        goto after_14;
    // 0x80031AA8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_14:
    // 0x80031AAC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80031AB0: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x80031AB4: bne         $s4, $s3, L_80031A4C
    if (ctx->r20 != ctx->r19) {
        // 0x80031AB8: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80031A4C;
    }
    // 0x80031AB8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80031ABC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80031AC0:
    // 0x80031AC0: mtc1        $s6, $f4
    ctx->f4.u32l = ctx->r22;
    // 0x80031AC4: lwc1        $f0, 0xA8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80031AC8: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80031ACC: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x80031AD0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80031AD4: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80031AD8: lui         $s2, 0x9090
    ctx->r18 = S32(0X9090 << 16);
    // 0x80031ADC: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x80031AE0: ori         $s2, $s2, 0x90C0
    ctx->r18 = ctx->r18 | 0X90C0;
    // 0x80031AE4: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x80031AE8: add.s       $f24, $f10, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80031AEC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
L_80031AF0:
    // 0x80031AF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80031AF4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80031AF8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80031AFC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80031B00: add.s       $f24, $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f4.fl;
    // 0x80031B04: blez        $s3, L_80031B84
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80031B08: add.s       $f30, $f30, $f8
        CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f30.fl = ctx->f30.fl + ctx->f8.fl;
            goto L_80031B84;
    }
    // 0x80031B08: add.s       $f30, $f30, $f8
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f30.fl = ctx->f30.fl + ctx->f8.fl;
    // 0x80031B0C: addiu       $s0, $sp, 0xBC
    ctx->r16 = ADD32(ctx->r29, 0XBC);
L_80031B10:
    // 0x80031B10: mtc1        $s1, $f10
    ctx->f10.u32l = ctx->r17;
    // 0x80031B14: lwc1        $f0, 0xA8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80031B18: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80031B1C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80031B20: lwc1        $f7, 0x59B0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X59B0);
    // 0x80031B24: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80031B28: lwc1        $f6, 0x59B4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X59B4);
    // 0x80031B2C: sub.s       $f8, $f24, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f24.fl - ctx->f4.fl;
    // 0x80031B30: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80031B34: mul.d       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f6.d);
    // 0x80031B38: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
    // 0x80031B3C: jal         0x8007A640
    // 0x80031B40: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    __sinf_recomp(rdram, ctx);
        goto after_15;
    // 0x80031B40: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_15:
    // 0x80031B44: mul.s       $f22, $f0, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x80031B48: jal         0x8007A800
    // 0x80031B4C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    __cosf_recomp(rdram, ctx);
        goto after_16;
    // 0x80031B4C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_16:
    // 0x80031B50: mul.s       $f4, $f0, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x80031B54: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80031B58: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80031B5C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80031B60: add.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x80031B64: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80031B68: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80031B6C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80031B70: jal         0x80014B64
    // 0x80031B74: nop

    func_80014B64(rdram, ctx);
        goto after_17;
    // 0x80031B74: nop

    after_17:
    // 0x80031B78: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80031B7C: bne         $s1, $s3, L_80031B10
    if (ctx->r17 != ctx->r19) {
        // 0x80031B80: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80031B10;
    }
    // 0x80031B80: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_80031B84:
    // 0x80031B84: jal         0x80007AB0
    // 0x80031B88: nop

    func_80007AB0(rdram, ctx);
        goto after_18;
    // 0x80031B88: nop

    after_18:
    // 0x80031B8C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80031B90: bne         $s4, $s5, L_80031AF0
    if (ctx->r20 != ctx->r21) {
        // 0x80031B94: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_80031AF0;
    }
    // 0x80031B94: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80031B98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80031B9C: sw          $zero, -0x3DC8($at)
    MEM_W(-0X3DC8, ctx->r1) = 0;
    // 0x80031BA0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80031BA4: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x80031BA8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x80031BAC: lui         $s7, 0x800A
    ctx->r23 = S32(0X800A << 16);
    // 0x80031BB0: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80031BB4: addiu       $s7, $s7, 0x2C8
    ctx->r23 = ADD32(ctx->r23, 0X2C8);
L_80031BB8:
    // 0x80031BB8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80031BBC: lw          $a1, -0x42C0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X42C0);
    // 0x80031BC0: lui         $at, 0x6
    ctx->r1 = S32(0X6 << 16);
    // 0x80031BC4: and         $a0, $a1, $at
    ctx->r4 = ctx->r5 & ctx->r1;
    // 0x80031BC8: beq         $a0, $zero, L_80031BE4
    if (ctx->r4 == 0) {
        // 0x80031BCC: andi        $t8, $a1, 0x4000
        ctx->r24 = ctx->r5 & 0X4000;
            goto L_80031BE4;
    }
    // 0x80031BCC: andi        $t8, $a1, 0x4000
    ctx->r24 = ctx->r5 & 0X4000;
    // 0x80031BD0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80031BD4: lw          $v1, -0x3DC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3DC8);
    // 0x80031BD8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80031BDC: b           L_80031BF4
    // 0x80031BE0: sw          $zero, -0x3DC8($at)
    MEM_W(-0X3DC8, ctx->r1) = 0;
        goto L_80031BF4;
    // 0x80031BE0: sw          $zero, -0x3DC8($at)
    MEM_W(-0X3DC8, ctx->r1) = 0;
L_80031BE4:
    // 0x80031BE4: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80031BE8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80031BEC: lhu         $v1, 0x52A8($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X52A8);
    // 0x80031BF0: sw          $zero, -0x3DC8($at)
    MEM_W(-0X3DC8, ctx->r1) = 0;
L_80031BF4:
    // 0x80031BF4: beq         $a0, $zero, L_80031C04
    if (ctx->r4 == 0) {
        // 0x80031BF8: nop
    
            goto L_80031C04;
    }
    // 0x80031BF8: nop

    // 0x80031BFC: b           L_80031C0C
    // 0x80031C00: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80031C0C;
    // 0x80031C00: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80031C04:
    // 0x80031C04: lhu         $v0, 0x0($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X0);
    // 0x80031C08: nop

L_80031C0C:
    // 0x80031C0C: andi        $t7, $v0, 0x400F
    ctx->r15 = ctx->r2 & 0X400F;
    // 0x80031C10: bne         $t7, $zero, L_80031C20
    if (ctx->r15 != 0) {
        // 0x80031C14: nop
    
            goto L_80031C20;
    }
    // 0x80031C14: nop

    // 0x80031C18: beq         $t8, $zero, L_80031C4C
    if (ctx->r24 == 0) {
        // 0x80031C1C: andi        $t7, $v1, 0x200
        ctx->r15 = ctx->r3 & 0X200;
            goto L_80031C4C;
    }
    // 0x80031C1C: andi        $t7, $v1, 0x200
    ctx->r15 = ctx->r3 & 0X200;
L_80031C20:
    // 0x80031C20: mtc1        $s6, $f10
    ctx->f10.u32l = ctx->r22;
    // 0x80031C24: lwc1        $f4, 0xA8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80031C28: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80031C2C: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x80031C30: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80031C34: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80031C38: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x80031C3C: jal         0x80027874
    // 0x80031C40: add.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f8.fl + ctx->f10.fl;
    func_80027874(rdram, ctx);
        goto after_19;
    // 0x80031C40: add.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f8.fl + ctx->f10.fl;
    after_19:
    // 0x80031C44: b           L_80031F68
    // 0x80031C48: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
        goto L_80031F68;
    // 0x80031C48: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80031C4C:
    // 0x80031C4C: beq         $a0, $zero, L_80031C5C
    if (ctx->r4 == 0) {
        // 0x80031C50: andi        $t8, $v1, 0x100
        ctx->r24 = ctx->r3 & 0X100;
            goto L_80031C5C;
    }
    // 0x80031C50: andi        $t8, $v1, 0x100
    ctx->r24 = ctx->r3 & 0X100;
    // 0x80031C54: b           L_80031C64
    // 0x80031C58: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80031C64;
    // 0x80031C58: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80031C5C:
    // 0x80031C5C: lhu         $v0, 0x0($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X0);
    // 0x80031C60: nop

L_80031C64:
    // 0x80031C64: andi        $t9, $v0, 0x8000
    ctx->r25 = ctx->r2 & 0X8000;
    // 0x80031C68: beq         $t9, $zero, L_80031CCC
    if (ctx->r25 == 0) {
        // 0x80031C6C: lui         $at, 0x3E80
        ctx->r1 = S32(0X3E80 << 16);
            goto L_80031CCC;
    }
    // 0x80031C6C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80031C70: mtc1        $s6, $f6
    ctx->f6.u32l = ctx->r22;
    // 0x80031C74: sll         $t6, $s6, 2
    ctx->r14 = S32(ctx->r22 << 2);
    // 0x80031C78: addu        $t7, $sp, $t6
    ctx->r15 = ADD32(ctx->r29, ctx->r14);
    // 0x80031C7C: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80031C80: lw          $t7, 0x44($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X44);
    // 0x80031C84: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80031C88: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80031C8C: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80031C90: addu        $t9, $fp, $t8
    ctx->r25 = ADD32(ctx->r30, ctx->r24);
    // 0x80031C94: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x80031C98: lw          $s0, 0x0($t9)
    ctx->r16 = MEM_W(ctx->r25, 0X0);
    // 0x80031C9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80031CA0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80031CA4: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
    // 0x80031CA8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80031CAC: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x80031CB0: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
    // 0x80031CB4: jal         0x8005BE2C
    // 0x80031CB8: add.s       $f20, $f10, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f10.fl + ctx->f6.fl;
    func_8005BE2C(rdram, ctx);
        goto after_20;
    // 0x80031CB8: add.s       $f20, $f10, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f10.fl + ctx->f6.fl;
    after_20:
    // 0x80031CBC: jal         0x80027874
    // 0x80031CC0: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    func_80027874(rdram, ctx);
        goto after_21;
    // 0x80031CC0: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_21:
    // 0x80031CC4: b           L_80031F68
    // 0x80031CC8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
        goto L_80031F68;
    // 0x80031CC8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80031CCC:
    // 0x80031CCC: beq         $t7, $zero, L_80031DF4
    if (ctx->r15 == 0) {
        // 0x80031CD0: nop
    
            goto L_80031DF4;
    }
    // 0x80031CD0: nop

    // 0x80031CD4: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80031CD8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80031CDC: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x80031CE0: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80031CE4: jal         0x80027874
    // 0x80031CE8: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    func_80027874(rdram, ctx);
        goto after_22;
    // 0x80031CE8: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_22:
    // 0x80031CEC: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x80031CF0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80031CF4:
    // 0x80031CF4: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80031CF8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80031CFC: blez        $s3, L_80031DC8
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80031D00: add.s       $f30, $f30, $f6
        CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f30.fl = ctx->f30.fl + ctx->f6.fl;
            goto L_80031DC8;
    }
    // 0x80031D00: add.s       $f30, $f30, $f6
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f30.fl = ctx->f30.fl + ctx->f6.fl;
    // 0x80031D04: mtc1        $s6, $f4
    ctx->f4.u32l = ctx->r22;
    // 0x80031D08: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80031D0C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80031D10: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80031D14: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80031D18: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80031D1C: addiu       $s0, $sp, 0xBC
    ctx->r16 = ADD32(ctx->r29, 0XBC);
    // 0x80031D20: add.s       $f24, $f6, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f24.fl = ctx->f6.fl + ctx->f4.fl;
L_80031D24:
    // 0x80031D24: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80031D28: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x80031D2C: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x80031D30: jal         0x80014B38
    // 0x80031D34: nop

    func_80014B38(rdram, ctx);
        goto after_23;
    // 0x80031D34: nop

    after_23:
    // 0x80031D38: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80031D3C: jal         0x80014A60
    // 0x80031D40: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80014A60(rdram, ctx);
        goto after_24;
    // 0x80031D40: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_24:
    // 0x80031D44: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80031D48: jal         0x80014AC4
    // 0x80031D4C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_25;
    // 0x80031D4C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_25:
    // 0x80031D50: mtc1        $s1, $f8
    ctx->f8.u32l = ctx->r17;
    // 0x80031D54: lwc1        $f6, 0xA8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80031D58: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80031D5C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80031D60: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80031D64: lwc1        $f5, 0x59B8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X59B8);
    // 0x80031D68: sub.s       $f8, $f24, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f24.fl - ctx->f4.fl;
    // 0x80031D6C: lwc1        $f4, 0x59BC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X59BC);
    // 0x80031D70: add.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f30.fl;
    // 0x80031D74: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x80031D78: mul.d       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f4.d);
    // 0x80031D7C: cvt.s.d     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f20.fl = CVT_S_D(ctx->f8.d);
    // 0x80031D80: jal         0x8007A640
    // 0x80031D84: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    __sinf_recomp(rdram, ctx);
        goto after_26;
    // 0x80031D84: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_26:
    // 0x80031D88: mul.s       $f22, $f0, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x80031D8C: jal         0x8007A800
    // 0x80031D90: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    __cosf_recomp(rdram, ctx);
        goto after_27;
    // 0x80031D90: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_27:
    // 0x80031D94: mul.s       $f8, $f0, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x80031D98: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80031D9C: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80031DA0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80031DA4: add.s       $f6, $f10, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f22.fl;
    // 0x80031DA8: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80031DAC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80031DB0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80031DB4: jal         0x80014B64
    // 0x80031DB8: nop

    func_80014B64(rdram, ctx);
        goto after_28;
    // 0x80031DB8: nop

    after_28:
    // 0x80031DBC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80031DC0: bne         $s1, $s3, L_80031D24
    if (ctx->r17 != ctx->r19) {
        // 0x80031DC4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80031D24;
    }
    // 0x80031DC4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_80031DC8:
    // 0x80031DC8: jal         0x80007AB0
    // 0x80031DCC: nop

    func_80007AB0(rdram, ctx);
        goto after_29;
    // 0x80031DCC: nop

    after_29:
    // 0x80031DD0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80031DD4: bne         $s4, $s5, L_80031CF4
    if (ctx->r20 != ctx->r21) {
        // 0x80031DD8: nop
    
            goto L_80031CF4;
    }
    // 0x80031DD8: nop

    // 0x80031DDC: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x80031DE0: slt         $at, $s6, $s3
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80031DE4: bne         $at, $zero, L_80031F18
    if (ctx->r1 != 0) {
        // 0x80031DE8: sll         $t9, $s6, 2
        ctx->r25 = S32(ctx->r22 << 2);
            goto L_80031F18;
    }
    // 0x80031DE8: sll         $t9, $s6, 2
    ctx->r25 = S32(ctx->r22 << 2);
    // 0x80031DEC: b           L_80031F14
    // 0x80031DF0: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
        goto L_80031F14;
    // 0x80031DF0: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
L_80031DF4:
    // 0x80031DF4: beq         $t8, $zero, L_80031F14
    if (ctx->r24 == 0) {
        // 0x80031DF8: lui         $at, 0x3E80
        ctx->r1 = S32(0X3E80 << 16);
            goto L_80031F14;
    }
    // 0x80031DF8: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80031DFC: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80031E00: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80031E04: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x80031E08: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80031E0C: jal         0x80027874
    // 0x80031E10: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_80027874(rdram, ctx);
        goto after_30;
    // 0x80031E10: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_30:
    // 0x80031E14: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x80031E18: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80031E1C:
    // 0x80031E1C: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80031E20: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80031E24: blez        $s3, L_80031EF0
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80031E28: sub.s       $f30, $f30, $f10
        CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f30.fl = ctx->f30.fl - ctx->f10.fl;
            goto L_80031EF0;
    }
    // 0x80031E28: sub.s       $f30, $f30, $f10
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f30.fl = ctx->f30.fl - ctx->f10.fl;
    // 0x80031E2C: mtc1        $s6, $f6
    ctx->f6.u32l = ctx->r22;
    // 0x80031E30: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80031E34: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80031E38: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80031E3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80031E40: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80031E44: addiu       $s0, $sp, 0xBC
    ctx->r16 = ADD32(ctx->r29, 0XBC);
    // 0x80031E48: add.s       $f24, $f10, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = ctx->f10.fl + ctx->f6.fl;
L_80031E4C:
    // 0x80031E4C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80031E50: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x80031E54: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x80031E58: jal         0x80014B38
    // 0x80031E5C: nop

    func_80014B38(rdram, ctx);
        goto after_31;
    // 0x80031E5C: nop

    after_31:
    // 0x80031E60: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80031E64: jal         0x80014AC4
    // 0x80031E68: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_32;
    // 0x80031E68: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_32:
    // 0x80031E6C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80031E70: jal         0x80014A60
    // 0x80031E74: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80014A60(rdram, ctx);
        goto after_33;
    // 0x80031E74: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_33:
    // 0x80031E78: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x80031E7C: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80031E80: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80031E84: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80031E88: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80031E8C: lwc1        $f7, 0x59C0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X59C0);
    // 0x80031E90: sub.s       $f4, $f24, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f24.fl - ctx->f6.fl;
    // 0x80031E94: lwc1        $f6, 0x59C4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X59C4);
    // 0x80031E98: add.s       $f8, $f4, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f30.fl;
    // 0x80031E9C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80031EA0: mul.d       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f6.d);
    // 0x80031EA4: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
    // 0x80031EA8: jal         0x8007A640
    // 0x80031EAC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    __sinf_recomp(rdram, ctx);
        goto after_34;
    // 0x80031EAC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_34:
    // 0x80031EB0: mul.s       $f22, $f0, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x80031EB4: jal         0x8007A800
    // 0x80031EB8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    __cosf_recomp(rdram, ctx);
        goto after_35;
    // 0x80031EB8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_35:
    // 0x80031EBC: mul.s       $f4, $f0, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x80031EC0: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80031EC4: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80031EC8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80031ECC: add.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x80031ED0: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80031ED4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80031ED8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80031EDC: jal         0x80014B64
    // 0x80031EE0: nop

    func_80014B64(rdram, ctx);
        goto after_36;
    // 0x80031EE0: nop

    after_36:
    // 0x80031EE4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80031EE8: bne         $s1, $s3, L_80031E4C
    if (ctx->r17 != ctx->r19) {
        // 0x80031EEC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80031E4C;
    }
    // 0x80031EEC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_80031EF0:
    // 0x80031EF0: jal         0x80007AB0
    // 0x80031EF4: nop

    func_80007AB0(rdram, ctx);
        goto after_37;
    // 0x80031EF4: nop

    after_37:
    // 0x80031EF8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80031EFC: bne         $s4, $s5, L_80031E1C
    if (ctx->r20 != ctx->r21) {
        // 0x80031F00: nop
    
            goto L_80031E1C;
    }
    // 0x80031F00: nop

    // 0x80031F04: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
    // 0x80031F08: bgez        $s6, L_80031F18
    if (SIGNED(ctx->r22) >= 0) {
        // 0x80031F0C: sll         $t9, $s6, 2
        ctx->r25 = S32(ctx->r22 << 2);
            goto L_80031F18;
    }
    // 0x80031F0C: sll         $t9, $s6, 2
    ctx->r25 = S32(ctx->r22 << 2);
    // 0x80031F10: addiu       $s6, $s3, -0x1
    ctx->r22 = ADD32(ctx->r19, -0X1);
L_80031F14:
    // 0x80031F14: sll         $t9, $s6, 2
    ctx->r25 = S32(ctx->r22 << 2);
L_80031F18:
    // 0x80031F18: addiu       $t6, $sp, 0xBC
    ctx->r14 = ADD32(ctx->r29, 0XBC);
    // 0x80031F1C: addu        $s0, $t9, $t6
    ctx->r16 = ADD32(ctx->r25, ctx->r14);
    // 0x80031F20: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80031F24: jal         0x80014A60
    // 0x80031F28: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_80014A60(rdram, ctx);
        goto after_38;
    // 0x80031F28: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_38:
    // 0x80031F2C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80031F30: lwc1        $f0, 0x59C8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X59C8);
    // 0x80031F34: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80031F38: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80031F3C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80031F40: jal         0x80014B38
    // 0x80031F44: nop

    func_80014B38(rdram, ctx);
        goto after_39;
    // 0x80031F44: nop

    after_39:
    // 0x80031F48: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80031F4C: jal         0x80014AB0
    // 0x80031F50: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AB0(rdram, ctx);
        goto after_40;
    // 0x80031F50: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_40:
    // 0x80031F54: jal         0x80007AB0
    // 0x80031F58: nop

    func_80007AB0(rdram, ctx);
        goto after_41;
    // 0x80031F58: nop

    after_41:
    // 0x80031F5C: b           L_80031BB8
    // 0x80031F60: nop

        goto L_80031BB8;
    // 0x80031F60: nop

    // 0x80031F64: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80031F68:
    // 0x80031F68: mov.s       $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    ctx->f24.fl = ctx->f20.fl;
    // 0x80031F6C: mov.s       $f30, $f26
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 26);
    ctx->f30.fl = ctx->f26.fl;
    // 0x80031F70: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
L_80031F74:
    // 0x80031F74: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80031F78: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80031F7C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80031F80: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80031F84: add.s       $f24, $f24, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f10.fl;
    // 0x80031F88: blez        $s3, L_80032028
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80031F8C: sub.s       $f30, $f30, $f6
        CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f30.fl = ctx->f30.fl - ctx->f6.fl;
            goto L_80032028;
    }
    // 0x80031F8C: sub.s       $f30, $f30, $f6
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f30.fl = ctx->f30.fl - ctx->f6.fl;
    // 0x80031F90: addiu       $s0, $sp, 0xBC
    ctx->r16 = ADD32(ctx->r29, 0XBC);
L_80031F94:
    // 0x80031F94: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x80031F98: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80031F9C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80031FA0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80031FA4: lwc1        $f11, 0x59D0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X59D0);
    // 0x80031FA8: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80031FAC: lwc1        $f10, 0x59D4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X59D4);
    // 0x80031FB0: add.s       $f4, $f6, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f24.fl;
    // 0x80031FB4: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x80031FB8: mul.d       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80031FBC: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
    // 0x80031FC0: jal         0x8007A640
    // 0x80031FC4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    __sinf_recomp(rdram, ctx);
        goto after_42;
    // 0x80031FC4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_42:
    // 0x80031FC8: mul.s       $f22, $f0, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x80031FCC: jal         0x8007A800
    // 0x80031FD0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    __cosf_recomp(rdram, ctx);
        goto after_43;
    // 0x80031FD0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_43:
    // 0x80031FD4: mul.s       $f20, $f0, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x80031FD8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80031FDC: jal         0x80014A60
    // 0x80031FE0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80014A60(rdram, ctx);
        goto after_44;
    // 0x80031FE0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_44:
    // 0x80031FE4: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80031FE8: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80031FEC: add.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x80031FF0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80031FF4: add.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x80031FF8: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80031FFC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80032000: jal         0x80014B64
    // 0x80032004: nop

    func_80014B64(rdram, ctx);
        goto after_45;
    // 0x80032004: nop

    after_45:
    // 0x80032008: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8003200C: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x80032010: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x80032014: jal         0x80014B38
    // 0x80032018: nop

    func_80014B38(rdram, ctx);
        goto after_46;
    // 0x80032018: nop

    after_46:
    // 0x8003201C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80032020: bne         $s1, $s3, L_80031F94
    if (ctx->r17 != ctx->r19) {
        // 0x80032024: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80031F94;
    }
    // 0x80032024: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_80032028:
    // 0x80032028: jal         0x80007AB0
    // 0x8003202C: nop

    func_80007AB0(rdram, ctx);
        goto after_47;
    // 0x8003202C: nop

    after_47:
    // 0x80032030: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80032034: slti        $at, $s4, 0x4
    ctx->r1 = SIGNED(ctx->r20) < 0X4 ? 1 : 0;
    // 0x80032038: bne         $at, $zero, L_80031F74
    if (ctx->r1 != 0) {
        // 0x8003203C: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_80031F74;
    }
    // 0x8003203C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80032040: blez        $s3, L_80032064
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80032044: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_80032064;
    }
    // 0x80032044: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80032048: addiu       $s1, $sp, 0xBC
    ctx->r17 = ADD32(ctx->r29, 0XBC);
L_8003204C:
    // 0x8003204C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80032050: jal         0x80014BF4
    // 0x80032054: nop

    func_80014BF4(rdram, ctx);
        goto after_48;
    // 0x80032054: nop

    after_48:
    // 0x80032058: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8003205C: bne         $s4, $s3, L_8003204C
    if (ctx->r20 != ctx->r19) {
        // 0x80032060: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8003204C;
    }
    // 0x80032060: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_80032064:
    // 0x80032064: jal         0x80007AB0
    // 0x80032068: nop

    func_80007AB0(rdram, ctx);
        goto after_49;
    // 0x80032068: nop

    after_49:
    // 0x8003206C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80032070: lw          $t7, -0x42C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X42C0);
    // 0x80032074: lui         $at, 0x6
    ctx->r1 = S32(0X6 << 16);
    // 0x80032078: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x8003207C: bne         $t8, $zero, L_80032090
    if (ctx->r24 != 0) {
        // 0x80032080: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80032090;
    }
    // 0x80032080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80032084: jal         0x80030EDC
    // 0x80032088: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80030EDC(rdram, ctx);
        goto after_50;
    // 0x80032088: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_50:
L_8003208C:
    // 0x8003208C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80032090:
    // 0x80032090: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    // 0x80032094: jr          $ra
    // 0x80032098: nop

    return;
    // 0x80032098: nop

    // 0x8003209C: jr          $ra
    // 0x800320A0: nop

    return;
    // 0x800320A0: nop

;}
RECOMP_FUNC void func_800320A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800320A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800320A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800320AC: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x800320B0: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x800320B4: addiu       $t3, $zero, 0x3E
    ctx->r11 = ADD32(0, 0X3E);
    // 0x800320B8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800320BC:
    // 0x800320BC: addu        $v0, $t0, $a3
    ctx->r2 = ADD32(ctx->r8, ctx->r7);
    // 0x800320C0: addu        $t2, $t0, $a3
    ctx->r10 = ADD32(ctx->r8, ctx->r7);
L_800320C4:
    // 0x800320C4: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x800320C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800320CC: sra         $t6, $t1, 4
    ctx->r14 = S32(SIGNED(ctx->r9) >> 4);
    // 0x800320D0: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x800320D4: addu        $t8, $a2, $t7
    ctx->r24 = ADD32(ctx->r6, ctx->r15);
    // 0x800320D8: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x800320DC: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x800320E0: beq         $t3, $t9, L_800320F8
    if (ctx->r11 == ctx->r25) {
        // 0x800320E4: sll         $t6, $v1, 1
        ctx->r14 = S32(ctx->r3 << 1);
            goto L_800320F8;
    }
    // 0x800320E4: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x800320E8: srav        $t8, $t7, $t6
    ctx->r24 = S32(SIGNED(ctx->r15) >> (ctx->r14 & 31));
    // 0x800320EC: or          $a0, $a0, $t8
    ctx->r4 = ctx->r4 | ctx->r24;
    // 0x800320F0: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x800320F4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
L_800320F8:
    // 0x800320F8: andi        $t7, $t1, 0xF
    ctx->r15 = ctx->r9 & 0XF;
    // 0x800320FC: sll         $t6, $t7, 1
    ctx->r14 = S32(ctx->r15 << 1);
    // 0x80032100: addu        $t8, $a2, $t6
    ctx->r24 = ADD32(ctx->r6, ctx->r14);
    // 0x80032104: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x80032108: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x8003210C: beq         $t3, $t9, L_80032128
    if (ctx->r11 == ctx->r25) {
        // 0x80032110: addiu       $t6, $t7, 0x1
        ctx->r14 = ADD32(ctx->r15, 0X1);
            goto L_80032128;
    }
    // 0x80032110: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x80032114: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x80032118: srav        $t9, $t8, $t6
    ctx->r25 = S32(SIGNED(ctx->r24) >> (ctx->r14 & 31));
    // 0x8003211C: or          $a0, $a0, $t9
    ctx->r4 = ctx->r4 | ctx->r25;
    // 0x80032120: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x80032124: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_80032128:
    // 0x80032128: lbu         $t1, 0x7($t2)
    ctx->r9 = MEM_BU(ctx->r10, 0X7);
    // 0x8003212C: nop

    // 0x80032130: andi        $t8, $t1, 0xF
    ctx->r24 = ctx->r9 & 0XF;
    // 0x80032134: sll         $t6, $t8, 1
    ctx->r14 = S32(ctx->r24 << 1);
    // 0x80032138: addu        $t9, $a2, $t6
    ctx->r25 = ADD32(ctx->r6, ctx->r14);
    // 0x8003213C: lhu         $t7, 0x0($t9)
    ctx->r15 = MEM_HU(ctx->r25, 0X0);
    // 0x80032140: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80032144: beq         $t3, $t7, L_8003215C
    if (ctx->r11 == ctx->r15) {
        // 0x80032148: sll         $t8, $v1, 1
        ctx->r24 = S32(ctx->r3 << 1);
            goto L_8003215C;
    }
    // 0x80032148: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x8003214C: sllv        $t9, $t6, $t8
    ctx->r25 = S32(ctx->r14 << (ctx->r24 & 31));
    // 0x80032150: or          $a1, $a1, $t9
    ctx->r5 = ctx->r5 | ctx->r25;
    // 0x80032154: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x80032158: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
L_8003215C:
    // 0x8003215C: sra         $t6, $t1, 4
    ctx->r14 = S32(SIGNED(ctx->r9) >> 4);
    // 0x80032160: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x80032164: addu        $t9, $a2, $t8
    ctx->r25 = ADD32(ctx->r6, ctx->r24);
    // 0x80032168: lhu         $t7, 0x0($t9)
    ctx->r15 = MEM_HU(ctx->r25, 0X0);
    // 0x8003216C: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x80032170: beq         $t3, $t7, L_8003218C
    if (ctx->r11 == ctx->r15) {
        // 0x80032174: addiu       $t8, $t6, 0x1
        ctx->r24 = ADD32(ctx->r14, 0X1);
            goto L_8003218C;
    }
    // 0x80032174: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x80032178: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8003217C: sllv        $t7, $t9, $t8
    ctx->r15 = S32(ctx->r25 << (ctx->r24 & 31));
    // 0x80032180: or          $a1, $a1, $t7
    ctx->r5 = ctx->r5 | ctx->r15;
    // 0x80032184: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80032188: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
L_8003218C:
    // 0x8003218C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80032190: bne         $v1, $t4, L_800320C4
    if (ctx->r3 != ctx->r12) {
        // 0x80032194: addiu       $t2, $t2, -0x1
        ctx->r10 = ADD32(ctx->r10, -0X1);
            goto L_800320C4;
    }
    // 0x80032194: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x80032198: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x8003219C: slti        $at, $t0, 0x80
    ctx->r1 = SIGNED(ctx->r8) < 0X80 ? 1 : 0;
    // 0x800321A0: bne         $at, $zero, L_800320BC
    if (ctx->r1 != 0) {
        // 0x800321A4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800320BC;
    }
    // 0x800321A4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800321A8: andi        $t9, $a0, 0x80
    ctx->r25 = ctx->r4 & 0X80;
    // 0x800321AC: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x800321B0: bne         $t9, $zero, L_800321D8
    if (ctx->r25 != 0) {
        // 0x800321B4: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_800321D8;
    }
    // 0x800321B4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800321B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x800321BC: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
L_800321C0:
    // 0x800321C0: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x800321C4: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
    // 0x800321C8: bne         $t7, $zero, L_800321D8
    if (ctx->r15 != 0) {
        // 0x800321CC: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_800321D8;
    }
    // 0x800321CC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x800321D0: bne         $t0, $a2, L_800321C0
    if (ctx->r8 != ctx->r6) {
        // 0x800321D4: sll         $a0, $v0, 1
        ctx->r4 = S32(ctx->r2 << 1);
            goto L_800321C0;
    }
    // 0x800321D4: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
L_800321D8:
    // 0x800321D8: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x800321DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x800321E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800321E4: bne         $t6, $zero, L_80032208
    if (ctx->r14 != 0) {
        // 0x800321E8: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_80032208;
    }
    // 0x800321E8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x800321EC: srl         $a1, $v1, 1
    ctx->r5 = S32(U32(ctx->r3) >> 1);
L_800321F0:
    // 0x800321F0: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x800321F4: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x800321F8: bne         $t8, $zero, L_80032208
    if (ctx->r24 != 0) {
        // 0x800321FC: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_80032208;
    }
    // 0x800321FC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80032200: bne         $a0, $a2, L_800321F0
    if (ctx->r4 != ctx->r6) {
        // 0x80032204: srl         $a1, $v1, 1
        ctx->r5 = S32(U32(ctx->r3) >> 1);
            goto L_800321F0;
    }
    // 0x80032204: srl         $a1, $v1, 1
    ctx->r5 = S32(U32(ctx->r3) >> 1);
L_80032208:
    // 0x80032208: bne         $v0, $zero, L_80032220
    if (ctx->r2 != 0) {
        // 0x8003220C: addiu       $t3, $zero, 0x10
        ctx->r11 = ADD32(0, 0X10);
            goto L_80032220;
    }
    // 0x8003220C: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x80032210: bne         $v1, $zero, L_80032224
    if (ctx->r3 != 0) {
        // 0x80032214: subu        $t7, $t3, $t0
        ctx->r15 = SUB32(ctx->r11, ctx->r8);
            goto L_80032224;
    }
    // 0x80032214: subu        $t7, $t3, $t0
    ctx->r15 = SUB32(ctx->r11, ctx->r8);
    // 0x80032218: jr          $ra
    // 0x8003221C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    // 0x8003221C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80032220:
    // 0x80032220: subu        $t7, $t3, $t0
    ctx->r15 = SUB32(ctx->r11, ctx->r8);
L_80032224:
    // 0x80032224: subu        $t4, $t7, $a0
    ctx->r12 = SUB32(ctx->r15, ctx->r4);
    // 0x80032228: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x8003222C: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x80032230: andi        $t2, $t0, 0x1
    ctx->r10 = ctx->r8 & 0X1;
    // 0x80032234: sra         $a1, $t0, 1
    ctx->r5 = S32(SIGNED(ctx->r8) >> 1);
L_80032238:
    // 0x80032238: beq         $t2, $zero, L_800322A8
    if (ctx->r10 == 0) {
        // 0x8003223C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800322A8;
    }
    // 0x8003223C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80032240: sll         $t6, $t1, 3
    ctx->r14 = S32(ctx->r9 << 3);
    // 0x80032244: addu        $v0, $t6, $a3
    ctx->r2 = ADD32(ctx->r14, ctx->r7);
L_80032248:
    // 0x80032248: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x8003224C: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x80032250: lbu         $t5, 0x2($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X2);
    // 0x80032254: sra         $t9, $t0, 4
    ctx->r25 = S32(SIGNED(ctx->r8) >> 4);
    // 0x80032258: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x8003225C: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x80032260: sll         $t9, $t0, 4
    ctx->r25 = S32(ctx->r8 << 4);
    // 0x80032264: sra         $t8, $t5, 4
    ctx->r24 = S32(SIGNED(ctx->r13) >> 4);
    // 0x80032268: lbu         $s0, 0x3($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X3);
    // 0x8003226C: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x80032270: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x80032274: sll         $t8, $t5, 4
    ctx->r24 = S32(ctx->r13 << 4);
    // 0x80032278: sra         $t6, $s0, 4
    ctx->r14 = S32(SIGNED(ctx->r16) >> 4);
    // 0x8003227C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80032280: sb          $t7, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r15;
    // 0x80032284: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x80032288: sb          $t9, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r25;
    // 0x8003228C: sll         $t8, $s0, 4
    ctx->r24 = S32(ctx->r16 << 4);
    // 0x80032290: sra         $t6, $t7, 4
    ctx->r14 = S32(SIGNED(ctx->r15) >> 4);
    // 0x80032294: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80032298: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8003229C: sb          $t9, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r25;
    // 0x800322A0: bne         $v1, $a2, L_80032248
    if (ctx->r3 != ctx->r6) {
        // 0x800322A4: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80032248;
    }
    // 0x800322A4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_800322A8:
    // 0x800322A8: beq         $a1, $zero, L_800323A0
    if (ctx->r5 == 0) {
        // 0x800322AC: nop
    
            goto L_800323A0;
    }
    // 0x800322AC: nop

    // 0x800322B0: subu        $s0, $a2, $a1
    ctx->r16 = SUB32(ctx->r6, ctx->r5);
    // 0x800322B4: blez        $s0, L_8003233C
    if (SIGNED(ctx->r16) <= 0) {
        // 0x800322B8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8003233C;
    }
    // 0x800322B8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800322BC: andi        $s2, $s0, 0x3
    ctx->r18 = ctx->r16 & 0X3;
    // 0x800322C0: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x800322C4: beq         $s2, $zero, L_800322FC
    if (ctx->r18 == 0) {
        // 0x800322C8: sll         $t0, $t1, 3
        ctx->r8 = S32(ctx->r9 << 3);
            goto L_800322FC;
    }
    // 0x800322C8: sll         $t0, $t1, 3
    ctx->r8 = S32(ctx->r9 << 3);
    // 0x800322CC: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x800322D0: addu        $t5, $t0, $zero
    ctx->r13 = ADD32(ctx->r8, 0);
    // 0x800322D4: addu        $v0, $t0, $a3
    ctx->r2 = ADD32(ctx->r8, ctx->r7);
L_800322D8:
    // 0x800322D8: addu        $t7, $t5, $a1
    ctx->r15 = ADD32(ctx->r13, ctx->r5);
    // 0x800322DC: addu        $t6, $t7, $a3
    ctx->r14 = ADD32(ctx->r15, ctx->r7);
    // 0x800322E0: lbu         $t8, 0x0($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X0);
    // 0x800322E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800322E8: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x800322EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800322F0: bne         $s1, $v1, L_800322D8
    if (ctx->r17 != ctx->r3) {
        // 0x800322F4: sb          $t8, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r24;
            goto L_800322D8;
    }
    // 0x800322F4: sb          $t8, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r24;
    // 0x800322F8: beq         $v1, $s0, L_8003233C
    if (ctx->r3 == ctx->r16) {
        // 0x800322FC: addu        $t5, $t0, $v1
        ctx->r13 = ADD32(ctx->r8, ctx->r3);
            goto L_8003233C;
    }
L_800322FC:
    // 0x800322FC: addu        $t5, $t0, $v1
    ctx->r13 = ADD32(ctx->r8, ctx->r3);
    // 0x80032300: addu        $v0, $t5, $a3
    ctx->r2 = ADD32(ctx->r13, ctx->r7);
L_80032304:
    // 0x80032304: addu        $t9, $t5, $a1
    ctx->r25 = ADD32(ctx->r13, ctx->r5);
    // 0x80032308: addu        $t0, $t9, $a3
    ctx->r8 = ADD32(ctx->r25, ctx->r7);
    // 0x8003230C: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x80032310: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80032314: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x80032318: lbu         $t6, 0x1($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X1);
    // 0x8003231C: addiu       $t5, $t5, 0x4
    ctx->r13 = ADD32(ctx->r13, 0X4);
    // 0x80032320: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
    // 0x80032324: lbu         $t8, 0x2($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X2);
    // 0x80032328: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8003232C: sb          $t8, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r24;
    // 0x80032330: lbu         $t9, 0x3($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X3);
    // 0x80032334: bne         $v1, $s0, L_80032304
    if (ctx->r3 != ctx->r16) {
        // 0x80032338: sb          $t9, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r25;
            goto L_80032304;
    }
    // 0x80032338: sb          $t9, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r25;
L_8003233C:
    // 0x8003233C: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x80032340: beq         $at, $zero, L_800323A0
    if (ctx->r1 == 0) {
        // 0x80032344: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_800323A0;
    }
    // 0x80032344: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80032348: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8003234C: subu        $s1, $t6, $s0
    ctx->r17 = SUB32(ctx->r14, ctx->r16);
    // 0x80032350: andi        $t8, $s1, 0x3
    ctx->r24 = ctx->r17 & 0X3;
    // 0x80032354: sll         $t7, $t1, 3
    ctx->r15 = S32(ctx->r9 << 3);
    // 0x80032358: addu        $v0, $a3, $t7
    ctx->r2 = ADD32(ctx->r7, ctx->r15);
    // 0x8003235C: beq         $t8, $zero, L_80032380
    if (ctx->r24 == 0) {
        // 0x80032360: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_80032380;
    }
    // 0x80032360: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x80032364: addu        $t5, $t8, $s0
    ctx->r13 = ADD32(ctx->r24, ctx->r16);
    // 0x80032368: addu        $t0, $v0, $v1
    ctx->r8 = ADD32(ctx->r2, ctx->r3);
L_8003236C:
    // 0x8003236C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80032370: sb          $a0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r4;
    // 0x80032374: bne         $t5, $v1, L_8003236C
    if (ctx->r13 != ctx->r3) {
        // 0x80032378: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_8003236C;
    }
    // 0x80032378: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8003237C: beq         $v1, $a2, L_800323A0
    if (ctx->r3 == ctx->r6) {
        // 0x80032380: addu        $t0, $v0, $v1
        ctx->r8 = ADD32(ctx->r2, ctx->r3);
            goto L_800323A0;
    }
L_80032380:
    // 0x80032380: addu        $t0, $v0, $v1
    ctx->r8 = ADD32(ctx->r2, ctx->r3);
L_80032384:
    // 0x80032384: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80032388: sb          $a0, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r4;
    // 0x8003238C: sb          $a0, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r4;
    // 0x80032390: sb          $a0, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r4;
    // 0x80032394: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80032398: bne         $v1, $a2, L_80032384
    if (ctx->r3 != ctx->r6) {
        // 0x8003239C: sb          $a0, -0x4($t0)
        MEM_B(-0X4, ctx->r8) = ctx->r4;
            goto L_80032384;
    }
    // 0x8003239C: sb          $a0, -0x4($t0)
    MEM_B(-0X4, ctx->r8) = ctx->r4;
L_800323A0:
    // 0x800323A0: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x800323A4: bne         $t1, $t3, L_80032238
    if (ctx->r9 != ctx->r11) {
        // 0x800323A8: nop
    
            goto L_80032238;
    }
    // 0x800323A8: nop

    // 0x800323AC: jr          $ra
    // 0x800323B0: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    return;
    // 0x800323B0: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
;}
RECOMP_FUNC void func_800323B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800323B4: jr          $ra
    // 0x800323B8: nop

    return;
    // 0x800323B8: nop

;}
RECOMP_FUNC void func_800323BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800323BC: andi        $v1, $a0, 0xF00
    ctx->r3 = ctx->r4 & 0XF00;
    // 0x800323C0: sra         $t7, $v1, 8
    ctx->r15 = S32(SIGNED(ctx->r3) >> 8);
    // 0x800323C4: sll         $a2, $t7, 2
    ctx->r6 = S32(ctx->r15 << 2);
    // 0x800323C8: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x800323CC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800323D0: addiu       $t9, $t9, -0x1F8
    ctx->r25 = ADD32(ctx->r25, -0X1F8);
    // 0x800323D4: addu        $t6, $a2, $t9
    ctx->r14 = ADD32(ctx->r6, ctx->r25);
    // 0x800323D8: addu        $t8, $a3, $a2
    ctx->r24 = ADD32(ctx->r7, ctx->r6);
    // 0x800323DC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x800323E0: lw          $t7, -0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, -0X8);
    // 0x800323E4: lw          $t0, -0x8($t8)
    ctx->r8 = MEM_W(ctx->r24, -0X8);
    // 0x800323E8: andi        $t8, $a0, 0xF0
    ctx->r24 = ctx->r4 & 0XF0;
    // 0x800323EC: sra         $t6, $t8, 4
    ctx->r14 = S32(SIGNED(ctx->r24) >> 4);
    // 0x800323F0: multu       $t7, $t6
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800323F4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x800323F8: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x800323FC: or          $t3, $t2, $zero
    ctx->r11 = ctx->r10 | 0;
    // 0x80032400: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x80032404: mflo        $t8
    ctx->r24 = lo;
    // 0x80032408: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x8003240C: lw          $t8, 0x4($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X4);
    // 0x80032410: addu        $t6, $t7, $t0
    ctx->r14 = ADD32(ctx->r15, ctx->r8);
    // 0x80032414: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x80032418: andi        $t6, $a0, 0xF
    ctx->r14 = ctx->r4 & 0XF;
    // 0x8003241C: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x80032420: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x80032424: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x80032428: addiu       $t7, $t6, -0x8
    ctx->r15 = ADD32(ctx->r14, -0X8);
    // 0x8003242C: addu        $t5, $t7, $t9
    ctx->r13 = ADD32(ctx->r15, ctx->r25);
L_80032430:
    // 0x80032430: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x80032434: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x80032438: multu       $t8, $t1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003243C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80032440: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80032444: mflo        $t6
    ctx->r14 = lo;
    // 0x80032448: addu        $v1, $t6, $a1
    ctx->r3 = ADD32(ctx->r14, ctx->r5);
    // 0x8003244C: nop

L_80032450:
    // 0x80032450: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x80032454: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80032458: slt         $at, $a0, $t4
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8003245C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80032460: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80032464: bne         $at, $zero, L_80032450
    if (ctx->r1 != 0) {
        // 0x80032468: sb          $t7, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r15;
            goto L_80032450;
    }
    // 0x80032468: sb          $t7, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r15;
    // 0x8003246C: bne         $t1, $a2, L_80032430
    if (ctx->r9 != ctx->r6) {
        // 0x80032470: addiu       $t3, $t3, 0x8
        ctx->r11 = ADD32(ctx->r11, 0X8);
            goto L_80032430;
    }
    // 0x80032470: addiu       $t3, $t3, 0x8
    ctx->r11 = ADD32(ctx->r11, 0X8);
    // 0x80032474: jr          $ra
    // 0x80032478: nop

    return;
    // 0x80032478: nop

    // 0x8003247C: jr          $ra
    // 0x80032480: nop

    return;
    // 0x80032480: nop

;}
RECOMP_FUNC void func_80032484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80032484: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x80032488: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003248C: addiu       $s0, $sp, 0xA0
    ctx->r16 = ADD32(ctx->r29, 0XA0);
    // 0x80032490: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_80032494:
    // 0x80032494: jal         0x80002F88
    // 0x80032498: addiu       $a0, $s7, 0x91A
    ctx->r4 = ADD32(ctx->r23, 0X91A);
    func_80002F88(rdram, ctx);
        goto after_0;
    // 0x80032498: addiu       $a0, $s7, 0x91A
    ctx->r4 = ADD32(ctx->r23, 0X91A);
    after_0:
    // 0x8003249C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x800324A0: slti        $at, $s7, 0x2
    ctx->r1 = SIGNED(ctx->r23) < 0X2 ? 1 : 0;
    // 0x800324A4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800324A8: bne         $at, $zero, L_80032494
    if (ctx->r1 != 0) {
        // 0x800324AC: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_80032494;
    }
    // 0x800324AC: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x800324B0: jal         0x80002F88
    // 0x800324B4: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    func_80002F88(rdram, ctx);
        goto after_1;
    // 0x800324B4: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    after_1:
    // 0x800324B8: sw          $v0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r2;
    // 0x800324BC: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x800324C0: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x800324C4: andi        $t6, $v1, 0xF00
    ctx->r14 = ctx->r3 & 0XF00;
    // 0x800324C8: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x800324CC: addiu       $t8, $t7, -0x2
    ctx->r24 = ADD32(ctx->r15, -0X2);
    // 0x800324D0: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x800324D4: sw          $t8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r24;
    // 0x800324D8: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x800324DC: beq         $v1, $at, L_80032550
    if (ctx->r3 == ctx->r1) {
        // 0x800324E0: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80032550;
    }
    // 0x800324E0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800324E4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800324E8: addiu       $t6, $sp, 0xA0
    ctx->r14 = ADD32(ctx->r29, 0XA0);
    // 0x800324EC: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x800324F0: lhu         $a0, 0x0($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X0);
    // 0x800324F4: addiu       $s5, $s5, -0x3E58
    ctx->r21 = ADD32(ctx->r21, -0X3E58);
    // 0x800324F8: addu        $fp, $t9, $t6
    ctx->r30 = ADD32(ctx->r25, ctx->r14);
    // 0x800324FC: or          $s4, $s2, $zero
    ctx->r20 = ctx->r18 | 0;
L_80032500:
    // 0x80032500: or          $t2, $s5, $zero
    ctx->r10 = ctx->r21 | 0;
    // 0x80032504: jal         0x800323BC
    // 0x80032508: addiu       $a3, $sp, 0xA0
    ctx->r7 = ADD32(ctx->r29, 0XA0);
    func_800323BC(rdram, ctx);
        goto after_2;
    // 0x80032508: addiu       $a3, $sp, 0xA0
    ctx->r7 = ADD32(ctx->r29, 0XA0);
    after_2:
    // 0x8003250C: lw          $v1, 0x0($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X0);
    // 0x80032510: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x80032514: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x80032518: sw          $s2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r18;
    // 0x8003251C: jal         0x800320A4
    // 0x80032520: addu        $a2, $t7, $v1
    ctx->r6 = ADD32(ctx->r15, ctx->r3);
    func_800320A4(rdram, ctx);
        goto after_3;
    // 0x80032520: addu        $a2, $t7, $v1
    ctx->r6 = ADD32(ctx->r15, ctx->r3);
    after_3:
    // 0x80032524: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
    // 0x80032528: lw          $s2, 0xC8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC8);
    // 0x8003252C: slt         $at, $s6, $s3
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80032530: beq         $at, $zero, L_8003253C
    if (ctx->r1 == 0) {
        // 0x80032534: nop
    
            goto L_8003253C;
    }
    // 0x80032534: nop

    // 0x80032538: or          $s6, $s3, $zero
    ctx->r22 = ctx->r19 | 0;
L_8003253C:
    // 0x8003253C: lhu         $a0, 0x2($s4)
    ctx->r4 = MEM_HU(ctx->r20, 0X2);
    // 0x80032540: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80032544: bne         $a0, $at, L_80032500
    if (ctx->r4 != ctx->r1) {
        // 0x80032548: addiu       $s4, $s4, 0x2
        ctx->r20 = ADD32(ctx->r20, 0X2);
            goto L_80032500;
    }
    // 0x80032548: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    // 0x8003254C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_80032550:
    // 0x80032550: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    // 0x80032554: addiu       $t6, $sp, 0xA0
    ctx->r14 = ADD32(ctx->r29, 0XA0);
    // 0x80032558: andi        $t7, $s6, 0x1
    ctx->r15 = ctx->r22 & 0X1;
    // 0x8003255C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80032560: beq         $t7, $zero, L_8003256C
    if (ctx->r15 == 0) {
        // 0x80032564: addu        $fp, $t9, $t6
        ctx->r30 = ADD32(ctx->r25, ctx->r14);
            goto L_8003256C;
    }
    // 0x80032564: addu        $fp, $t9, $t6
    ctx->r30 = ADD32(ctx->r25, ctx->r14);
    // 0x80032568: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_8003256C:
    // 0x8003256C: sll         $s0, $s6, 4
    ctx->r16 = S32(ctx->r22 << 4);
    // 0x80032570: sra         $s3, $s0, 1
    ctx->r19 = S32(SIGNED(ctx->r16) >> 1);
    // 0x80032574: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x80032578: jal         0x80006DFC
    // 0x8003257C: addiu       $a0, $s3, 0x40
    ctx->r4 = ADD32(ctx->r19, 0X40);
    func_80006DFC(rdram, ctx);
        goto after_4;
    // 0x8003257C: addiu       $a0, $s3, 0x40
    ctx->r4 = ADD32(ctx->r19, 0X40);
    after_4:
    // 0x80032580: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x80032584: addiu       $t0, $s3, 0x20
    ctx->r8 = ADD32(ctx->r19, 0X20);
    // 0x80032588: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x8003258C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80032590: sw          $t0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r8;
    // 0x80032594: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x80032598: lw          $v1, 0x0($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X0);
    // 0x8003259C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800325A0: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x800325A4: addu        $a0, $v0, $t0
    ctx->r4 = ADD32(ctx->r2, ctx->r8);
    // 0x800325A8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x800325AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800325B0: addu        $a1, $t7, $v1
    ctx->r5 = ADD32(ctx->r15, ctx->r3);
L_800325B4:
    // 0x800325B4: lbu         $t8, 0x0($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X0);
    // 0x800325B8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800325BC: slt         $at, $a2, $a3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x800325C0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800325C4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800325C8: bne         $at, $zero, L_800325B4
    if (ctx->r1 != 0) {
        // 0x800325CC: sb          $t8, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r24;
            goto L_800325B4;
    }
    // 0x800325CC: sb          $t8, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r24;
    // 0x800325D0: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x800325D4: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x800325D8: sw          $s6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r22;
    // 0x800325DC: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x800325E0: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x800325E4: blez        $s0, L_80032634
    if (SIGNED(ctx->r16) <= 0) {
        // 0x800325E8: addu        $s4, $v0, $t9
        ctx->r20 = ADD32(ctx->r2, ctx->r25);
            goto L_80032634;
    }
    // 0x800325E8: addu        $s4, $v0, $t9
    ctx->r20 = ADD32(ctx->r2, ctx->r25);
    // 0x800325EC: andi        $a0, $s0, 0x3
    ctx->r4 = ctx->r16 & 0X3;
    // 0x800325F0: beq         $a0, $zero, L_80032610
    if (ctx->r4 == 0) {
        // 0x800325F4: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_80032610;
    }
    // 0x800325F4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x800325F8: addu        $v0, $s4, $s7
    ctx->r2 = ADD32(ctx->r20, ctx->r23);
L_800325FC:
    // 0x800325FC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80032600: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80032604: bne         $v1, $s7, L_800325FC
    if (ctx->r3 != ctx->r23) {
        // 0x80032608: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_800325FC;
    }
    // 0x80032608: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003260C: beq         $s7, $s0, L_80032630
    if (ctx->r23 == ctx->r16) {
        // 0x80032610: addu        $v0, $s4, $s7
        ctx->r2 = ADD32(ctx->r20, ctx->r23);
            goto L_80032630;
    }
L_80032610:
    // 0x80032610: addu        $v0, $s4, $s7
    ctx->r2 = ADD32(ctx->r20, ctx->r23);
L_80032614:
    // 0x80032614: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x80032618: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x8003261C: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x80032620: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x80032624: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80032628: bne         $s7, $s0, L_80032614
    if (ctx->r23 != ctx->r16) {
        // 0x8003262C: sb          $zero, -0x4($v0)
        MEM_B(-0X4, ctx->r2) = 0;
            goto L_80032614;
    }
    // 0x8003262C: sb          $zero, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = 0;
L_80032630:
    // 0x80032630: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_80032634:
    // 0x80032634: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x80032638: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x8003263C: blez        $t6, L_80032894
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80032640: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80032894;
    }
    // 0x80032640: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80032644: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80032648: addiu       $s6, $zero, 0x10
    ctx->r22 = ADD32(0, 0X10);
L_8003264C:
    // 0x8003264C: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x80032650: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x80032654: lw          $s5, 0x10($s1)
    ctx->r21 = MEM_W(ctx->r17, 0X10);
    // 0x80032658: addiu       $t2, $t2, -0x3ED8
    ctx->r10 = ADD32(ctx->r10, -0X3ED8);
    // 0x8003265C: addiu       $a3, $sp, 0xA0
    ctx->r7 = ADD32(ctx->r29, 0XA0);
    // 0x80032660: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x80032664: jal         0x800323BC
    // 0x80032668: addu        $s0, $s1, $t7
    ctx->r16 = ADD32(ctx->r17, ctx->r15);
    func_800323BC(rdram, ctx);
        goto after_5;
    // 0x80032668: addu        $s0, $s1, $t7
    ctx->r16 = ADD32(ctx->r17, ctx->r15);
    after_5:
    // 0x8003266C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80032670: addiu       $a3, $a3, -0x3ED8
    ctx->r7 = ADD32(ctx->r7, -0X3ED8);
    // 0x80032674: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80032678: sw          $s1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r17;
    // 0x8003267C: jal         0x800320A4
    // 0x80032680: sw          $s2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r18;
    func_800320A4(rdram, ctx);
        goto after_6;
    // 0x80032680: sw          $s2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r18;
    after_6:
    // 0x80032684: lw          $s1, 0xAC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XAC);
    // 0x80032688: lw          $s2, 0xC8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC8);
    // 0x8003268C: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x80032690: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
L_80032694:
    // 0x80032694: blez        $v0, L_80032864
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80032698: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80032864;
    }
    // 0x80032698: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003269C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x800326A0: addiu       $t9, $t9, -0x3ED8
    ctx->r25 = ADD32(ctx->r25, -0X3ED8);
    // 0x800326A4: sll         $t8, $t3, 3
    ctx->r24 = S32(ctx->r11 << 3);
    // 0x800326A8: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x800326AC: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x800326B0: beq         $v1, $zero, L_80032728
    if (ctx->r3 == 0) {
        // 0x800326B4: sra         $t2, $s5, 1
        ctx->r10 = S32(SIGNED(ctx->r21) >> 1);
            goto L_80032728;
    }
    // 0x800326B4: sra         $t2, $s5, 1
    ctx->r10 = S32(SIGNED(ctx->r21) >> 1);
    // 0x800326B8: lbu         $a0, 0x0($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X0);
    // 0x800326BC: sra         $t6, $s3, 1
    ctx->r14 = S32(SIGNED(ctx->r19) >> 1);
    // 0x800326C0: andi        $a2, $s3, 0x1
    ctx->r6 = ctx->r19 & 0X1;
    // 0x800326C4: sra         $t7, $a0, 4
    ctx->r15 = S32(SIGNED(ctx->r4) >> 4);
    // 0x800326C8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x800326CC: beq         $a2, $zero, L_800326F8
    if (ctx->r6 == 0) {
        // 0x800326D0: addu        $a1, $s4, $t6
        ctx->r5 = ADD32(ctx->r20, ctx->r14);
            goto L_800326F8;
    }
    // 0x800326D0: addu        $a1, $s4, $t6
    ctx->r5 = ADD32(ctx->r20, ctx->r14);
    // 0x800326D4: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800326D8: mflo        $t8
    ctx->r24 = lo;
    // 0x800326DC: addu        $v1, $a1, $t8
    ctx->r3 = ADD32(ctx->r5, ctx->r24);
    // 0x800326E0: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x800326E4: nop

    // 0x800326E8: andi        $t6, $t9, 0xF0
    ctx->r14 = ctx->r25 & 0XF0;
    // 0x800326EC: or          $t7, $t6, $t7
    ctx->r15 = ctx->r14 | ctx->r15;
    // 0x800326F0: b           L_8003271C
    // 0x800326F4: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
        goto L_8003271C;
    // 0x800326F4: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
L_800326F8:
    // 0x800326F8: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800326FC: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x80032700: mflo        $t8
    ctx->r24 = lo;
    // 0x80032704: addu        $v1, $a1, $t8
    ctx->r3 = ADD32(ctx->r5, ctx->r24);
    // 0x80032708: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x8003270C: nop

    // 0x80032710: andi        $t6, $t9, 0xF
    ctx->r14 = ctx->r25 & 0XF;
    // 0x80032714: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80032718: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
L_8003271C:
    // 0x8003271C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80032720: beq         $a1, $v0, L_80032864
    if (ctx->r5 == ctx->r2) {
        // 0x80032724: nop
    
            goto L_80032864;
    }
    // 0x80032724: nop

L_80032728:
    // 0x80032728: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003272C: addu        $a2, $s3, $a1
    ctx->r6 = ADD32(ctx->r19, ctx->r5);
    // 0x80032730: addiu       $a3, $a2, 0x1
    ctx->r7 = ADD32(ctx->r6, 0X1);
    // 0x80032734: mflo        $t0
    ctx->r8 = lo;
    // 0x80032738: nop

    // 0x8003273C: nop

L_80032740:
    // 0x80032740: andi        $t9, $a1, 0x1
    ctx->r25 = ctx->r5 & 0X1;
    // 0x80032744: beq         $t9, $zero, L_80032764
    if (ctx->r25 == 0) {
        // 0x80032748: sra         $t6, $a1, 1
        ctx->r14 = S32(SIGNED(ctx->r5) >> 1);
            goto L_80032764;
    }
    // 0x80032748: sra         $t6, $a1, 1
    ctx->r14 = S32(SIGNED(ctx->r5) >> 1);
    // 0x8003274C: addu        $t7, $t1, $t6
    ctx->r15 = ADD32(ctx->r9, ctx->r14);
    // 0x80032750: lbu         $a0, 0x0($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X0);
    // 0x80032754: nop

    // 0x80032758: andi        $t8, $a0, 0xF
    ctx->r24 = ctx->r4 & 0XF;
    // 0x8003275C: b           L_8003277C
    // 0x80032760: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
        goto L_8003277C;
    // 0x80032760: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
L_80032764:
    // 0x80032764: sra         $t9, $a1, 1
    ctx->r25 = S32(SIGNED(ctx->r5) >> 1);
    // 0x80032768: addu        $t6, $t1, $t9
    ctx->r14 = ADD32(ctx->r9, ctx->r25);
    // 0x8003276C: lbu         $a0, 0x0($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X0);
    // 0x80032770: nop

    // 0x80032774: sra         $t7, $a0, 4
    ctx->r15 = S32(SIGNED(ctx->r4) >> 4);
    // 0x80032778: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_8003277C:
    // 0x8003277C: andi        $t8, $a2, 0x1
    ctx->r24 = ctx->r6 & 0X1;
    // 0x80032780: beq         $t8, $zero, L_800327AC
    if (ctx->r24 == 0) {
        // 0x80032784: sra         $t6, $a2, 1
        ctx->r14 = S32(SIGNED(ctx->r6) >> 1);
            goto L_800327AC;
    }
    // 0x80032784: sra         $t6, $a2, 1
    ctx->r14 = S32(SIGNED(ctx->r6) >> 1);
    // 0x80032788: sra         $t9, $a2, 1
    ctx->r25 = S32(SIGNED(ctx->r6) >> 1);
    // 0x8003278C: addu        $t6, $s4, $t9
    ctx->r14 = ADD32(ctx->r20, ctx->r25);
    // 0x80032790: addu        $v1, $t6, $t0
    ctx->r3 = ADD32(ctx->r14, ctx->r8);
    // 0x80032794: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x80032798: nop

    // 0x8003279C: andi        $t8, $t7, 0xF0
    ctx->r24 = ctx->r15 & 0XF0;
    // 0x800327A0: or          $t9, $t8, $a0
    ctx->r25 = ctx->r24 | ctx->r4;
    // 0x800327A4: b           L_800327C8
    // 0x800327A8: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
        goto L_800327C8;
    // 0x800327A8: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
L_800327AC:
    // 0x800327AC: addu        $t7, $s4, $t6
    ctx->r15 = ADD32(ctx->r20, ctx->r14);
    // 0x800327B0: addu        $v1, $t7, $t0
    ctx->r3 = ADD32(ctx->r15, ctx->r8);
    // 0x800327B4: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x800327B8: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x800327BC: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x800327C0: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x800327C4: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
L_800327C8:
    // 0x800327C8: addiu       $v1, $a1, 0x1
    ctx->r3 = ADD32(ctx->r5, 0X1);
    // 0x800327CC: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x800327D0: beq         $t8, $zero, L_800327F4
    if (ctx->r24 == 0) {
        // 0x800327D4: addiu       $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_800327F4;
    }
    // 0x800327D4: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x800327D8: sra         $t9, $v1, 1
    ctx->r25 = S32(SIGNED(ctx->r3) >> 1);
    // 0x800327DC: addu        $t6, $t1, $t9
    ctx->r14 = ADD32(ctx->r9, ctx->r25);
    // 0x800327E0: lbu         $a0, 0x0($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X0);
    // 0x800327E4: nop

    // 0x800327E8: andi        $t7, $a0, 0xF
    ctx->r15 = ctx->r4 & 0XF;
    // 0x800327EC: b           L_8003280C
    // 0x800327F0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
        goto L_8003280C;
    // 0x800327F0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_800327F4:
    // 0x800327F4: sra         $t8, $v1, 1
    ctx->r24 = S32(SIGNED(ctx->r3) >> 1);
    // 0x800327F8: addu        $t9, $t1, $t8
    ctx->r25 = ADD32(ctx->r9, ctx->r24);
    // 0x800327FC: lbu         $a0, 0x0($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X0);
    // 0x80032800: nop

    // 0x80032804: sra         $t6, $a0, 4
    ctx->r14 = S32(SIGNED(ctx->r4) >> 4);
    // 0x80032808: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
L_8003280C:
    // 0x8003280C: andi        $t7, $a3, 0x1
    ctx->r15 = ctx->r7 & 0X1;
    // 0x80032810: beq         $t7, $zero, L_8003283C
    if (ctx->r15 == 0) {
        // 0x80032814: addiu       $a2, $a2, 0x2
        ctx->r6 = ADD32(ctx->r6, 0X2);
            goto L_8003283C;
    }
    // 0x80032814: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80032818: sra         $t8, $a3, 1
    ctx->r24 = S32(SIGNED(ctx->r7) >> 1);
    // 0x8003281C: addu        $t9, $s4, $t8
    ctx->r25 = ADD32(ctx->r20, ctx->r24);
    // 0x80032820: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x80032824: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x80032828: nop

    // 0x8003282C: andi        $t7, $t6, 0xF0
    ctx->r15 = ctx->r14 & 0XF0;
    // 0x80032830: or          $t8, $t7, $a0
    ctx->r24 = ctx->r15 | ctx->r4;
    // 0x80032834: b           L_8003285C
    // 0x80032838: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
        goto L_8003285C;
    // 0x80032838: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
L_8003283C:
    // 0x8003283C: sra         $t9, $a3, 1
    ctx->r25 = S32(SIGNED(ctx->r7) >> 1);
    // 0x80032840: addu        $t6, $s4, $t9
    ctx->r14 = ADD32(ctx->r20, ctx->r25);
    // 0x80032844: addu        $v1, $t6, $t0
    ctx->r3 = ADD32(ctx->r14, ctx->r8);
    // 0x80032848: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x8003284C: sll         $t9, $a0, 4
    ctx->r25 = S32(ctx->r4 << 4);
    // 0x80032850: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x80032854: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x80032858: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
L_8003285C:
    // 0x8003285C: bne         $a1, $t4, L_80032740
    if (ctx->r5 != ctx->r12) {
        // 0x80032860: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_80032740;
    }
    // 0x80032860: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
L_80032864:
    // 0x80032864: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x80032868: bne         $t3, $s6, L_80032694
    if (ctx->r11 != ctx->r22) {
        // 0x8003286C: nop
    
            goto L_80032694;
    }
    // 0x8003286C: nop

    // 0x80032870: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x80032874: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80032878: addu        $s3, $s3, $t4
    ctx->r19 = ADD32(ctx->r19, ctx->r12);
    // 0x8003287C: beq         $v0, $at, L_80032894
    if (ctx->r2 == ctx->r1) {
        // 0x80032880: addiu       $s2, $s2, 0x2
        ctx->r18 = ADD32(ctx->r18, 0X2);
            goto L_80032894;
    }
    // 0x80032880: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x80032884: lw          $t7, 0xCC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XCC);
    // 0x80032888: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x8003288C: bne         $fp, $t7, L_8003264C
    if (ctx->r30 != ctx->r15) {
        // 0x80032890: nop
    
            goto L_8003264C;
    }
    // 0x80032890: nop

L_80032894:
    // 0x80032894: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
L_80032898:
    // 0x80032898: jal         0x80002D08
    // 0x8003289C: addiu       $a0, $s7, 0x91A
    ctx->r4 = ADD32(ctx->r23, 0X91A);
    func_80002D08(rdram, ctx);
        goto after_7;
    // 0x8003289C: addiu       $a0, $s7, 0x91A
    ctx->r4 = ADD32(ctx->r23, 0X91A);
    after_7:
    // 0x800328A0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x800328A4: bne         $s7, $s0, L_80032898
    if (ctx->r23 != ctx->r16) {
        // 0x800328A8: nop
    
            goto L_80032898;
    }
    // 0x800328A8: nop

    // 0x800328AC: jal         0x80002D08
    // 0x800328B0: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    func_80002D08(rdram, ctx);
        goto after_8;
    // 0x800328B0: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    after_8:
    // 0x800328B4: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
    // 0x800328B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800328BC: sll         $t8, $a1, 8
    ctx->r24 = S32(ctx->r5 << 8);
    // 0x800328C0: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x800328C4: jal         0x80075580
    // 0x800328C8: addiu       $a1, $t9, 0x40
    ctx->r5 = ADD32(ctx->r25, 0X40);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_9;
    // 0x800328C8: addiu       $a1, $t9, 0x40
    ctx->r5 = ADD32(ctx->r25, 0X40);
    after_9:
    // 0x800328CC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x800328D0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800328D4: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x800328D8: jal         0x800154E8
    // 0x800328DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800154E8(rdram, ctx);
        goto after_10;
    // 0x800328DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x800328E0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x800328E4: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x800328E8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800328EC: jal         0x80014B64
    // 0x800328F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_11;
    // 0x800328F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_11:
    // 0x800328F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800328F8: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    // 0x800328FC: jr          $ra
    // 0x80032900: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    return;
    // 0x80032900: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
;}
RECOMP_FUNC void func_80032904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80032904: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80032908: addiu       $s3, $s3, -0x3D60
    ctx->r19 = ADD32(ctx->r19, -0X3D60);
    // 0x8003290C: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x80032910: lbu         $t6, 0x0($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X0);
    // 0x80032914: lbu         $t7, 0x1($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X1);
    // 0x80032918: lbu         $t8, 0x2($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X2);
    // 0x8003291C: lbu         $t9, 0x9($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X9);
    // 0x80032920: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80032924: addiu       $a0, $zero, 0x936
    ctx->r4 = ADD32(0, 0X936);
    // 0x80032928: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8003292C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80032930: sb          $t6, 0xBF($sp)
    MEM_B(0XBF, ctx->r29) = ctx->r14;
    // 0x80032934: sb          $t7, 0xBE($sp)
    MEM_B(0XBE, ctx->r29) = ctx->r15;
    // 0x80032938: sb          $t8, 0xBD($sp)
    MEM_B(0XBD, ctx->r29) = ctx->r24;
    // 0x8003293C: jal         0x80015784
    // 0x80032940: sb          $t9, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r25;
    func_80015784(rdram, ctx);
        goto after_0;
    // 0x80032940: sb          $t9, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r25;
    after_0:
    // 0x80032944: lui         $at, 0x431C
    ctx->r1 = S32(0X431C << 16);
    // 0x80032948: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8003294C: lui         $at, 0x42CC
    ctx->r1 = S32(0X42CC << 16);
    // 0x80032950: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x80032954: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80032958: mfc1        $a2, $f30
    ctx->r6 = (int32_t)ctx->f30.u32l;
    // 0x8003295C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80032960: jal         0x80014B64
    // 0x80032964: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_1;
    // 0x80032964: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80032968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003296C: jal         0x80014AC4
    // 0x80032970: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_2;
    // 0x80032970: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
    // 0x80032974: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    // 0x80032978: addiu       $a0, $zero, 0x936
    ctx->r4 = ADD32(0, 0X936);
    // 0x8003297C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80032980: jal         0x80015784
    // 0x80032984: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_3;
    // 0x80032984: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80032988: lui         $at, 0x4304
    ctx->r1 = S32(0X4304 << 16);
    // 0x8003298C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x80032990: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80032994: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x80032998: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8003299C: jal         0x80014B64
    // 0x800329A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_4;
    // 0x800329A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x800329A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800329A8: jal         0x80014AC4
    // 0x800329AC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_5;
    // 0x800329AC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_5:
    // 0x800329B0: sw          $s0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r16;
    // 0x800329B4: addiu       $a0, $zero, 0x937
    ctx->r4 = ADD32(0, 0X937);
    // 0x800329B8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x800329BC: jal         0x80015784
    // 0x800329C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_6;
    // 0x800329C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x800329C4: lui         $at, 0x438C
    ctx->r1 = S32(0X438C << 16);
    // 0x800329C8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800329CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800329D0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x800329D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800329D8: jal         0x80014B64
    // 0x800329DC: lui         $a2, 0x42BC
    ctx->r6 = S32(0X42BC << 16);
    func_80014B64(rdram, ctx);
        goto after_7;
    // 0x800329DC: lui         $a2, 0x42BC
    ctx->r6 = S32(0X42BC << 16);
    after_7:
    // 0x800329E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800329E4: jal         0x80014AC4
    // 0x800329E8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_8;
    // 0x800329E8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_8:
    // 0x800329EC: sw          $s0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r16;
    // 0x800329F0: addiu       $a0, $zero, 0x937
    ctx->r4 = ADD32(0, 0X937);
    // 0x800329F4: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x800329F8: jal         0x80015784
    // 0x800329FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_9;
    // 0x800329FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x80032A00: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80032A04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80032A08: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80032A0C: jal         0x80014B64
    // 0x80032A10: lui         $a2, 0x42F8
    ctx->r6 = S32(0X42F8 << 16);
    func_80014B64(rdram, ctx);
        goto after_10;
    // 0x80032A10: lui         $a2, 0x42F8
    ctx->r6 = S32(0X42F8 << 16);
    after_10:
    // 0x80032A14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80032A18: jal         0x80014AC4
    // 0x80032A1C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_11;
    // 0x80032A1C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_11:
    // 0x80032A20: lui         $at, 0x4290
    ctx->r1 = S32(0X4290 << 16);
    // 0x80032A24: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80032A28: lui         $at, 0x4330
    ctx->r1 = S32(0X4330 << 16);
    // 0x80032A2C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80032A30: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x80032A34: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80032A38: sw          $s0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r16;
    // 0x80032A3C: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x80032A40: addiu       $s2, $s2, -0x224
    ctx->r18 = ADD32(ctx->r18, -0X224);
    // 0x80032A44: jal         0x80032484
    // 0x80032A48: mov.s       $f22, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    ctx->f22.fl = ctx->f26.fl;
    func_80032484(rdram, ctx);
        goto after_12;
    // 0x80032A48: mov.s       $f22, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    ctx->f22.fl = ctx->f26.fl;
    after_12:
    // 0x80032A4C: lui         $at, 0x4375
    ctx->r1 = S32(0X4375 << 16);
    // 0x80032A50: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80032A54: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x80032A58: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80032A5C: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
    // 0x80032A60: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x80032A64: addiu       $s2, $s2, -0x214
    ctx->r18 = ADD32(ctx->r18, -0X214);
    // 0x80032A68: jal         0x80032484
    // 0x80032A6C: mov.s       $f22, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    ctx->f22.fl = ctx->f26.fl;
    func_80032484(rdram, ctx);
        goto after_13;
    // 0x80032A6C: mov.s       $f22, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    ctx->f22.fl = ctx->f26.fl;
    after_13:
    // 0x80032A70: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80032A74: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80032A78: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x80032A7C: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80032A80: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
    // 0x80032A84: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x80032A88: addiu       $s2, $s2, -0x258
    ctx->r18 = ADD32(ctx->r18, -0X258);
    // 0x80032A8C: mov.s       $f22, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    ctx->f22.fl = ctx->f26.fl;
    // 0x80032A90: jal         0x80032484
    // 0x80032A94: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
    func_80032484(rdram, ctx);
        goto after_14;
    // 0x80032A94: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
    after_14:
    // 0x80032A98: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x80032A9C: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x80032AA0: sw          $v0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r2;
    // 0x80032AA4: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80032AA8: addiu       $s2, $s2, -0x24C
    ctx->r18 = ADD32(ctx->r18, -0X24C);
    // 0x80032AAC: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
    // 0x80032AB0: jal         0x80032484
    // 0x80032AB4: mov.s       $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    ctx->f22.fl = ctx->f30.fl;
    func_80032484(rdram, ctx);
        goto after_15;
    // 0x80032AB4: mov.s       $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    ctx->f22.fl = ctx->f30.fl;
    after_15:
    // 0x80032AB8: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x80032ABC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80032AC0: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    // 0x80032AC4: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x80032AC8: addiu       $s2, $s2, -0x240
    ctx->r18 = ADD32(ctx->r18, -0X240);
    // 0x80032ACC: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
    // 0x80032AD0: jal         0x80032484
    // 0x80032AD4: mov.s       $f22, $f28
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 28);
    ctx->f22.fl = ctx->f28.fl;
    func_80032484(rdram, ctx);
        goto after_16;
    // 0x80032AD4: mov.s       $f22, $f28
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 28);
    ctx->f22.fl = ctx->f28.fl;
    after_16:
    // 0x80032AD8: lui         $at, 0x4322
    ctx->r1 = S32(0X4322 << 16);
    // 0x80032ADC: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80032AE0: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x80032AE4: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x80032AE8: sw          $v0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r2;
    // 0x80032AEC: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x80032AF0: addiu       $s2, $s2, -0x238
    ctx->r18 = ADD32(ctx->r18, -0X238);
    // 0x80032AF4: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
    // 0x80032AF8: jal         0x80032484
    // 0x80032AFC: mov.s       $f22, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    ctx->f22.fl = ctx->f26.fl;
    func_80032484(rdram, ctx);
        goto after_17;
    // 0x80032AFC: mov.s       $f22, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    ctx->f22.fl = ctx->f26.fl;
    after_17:
    // 0x80032B00: lui         $at, 0x4336
    ctx->r1 = S32(0X4336 << 16);
    // 0x80032B04: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80032B08: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x80032B0C: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x80032B10: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x80032B14: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x80032B18: addiu       $s2, $s2, -0x208
    ctx->r18 = ADD32(ctx->r18, -0X208);
    // 0x80032B1C: jal         0x80032484
    // 0x80032B20: mov.s       $f22, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    ctx->f22.fl = ctx->f26.fl;
    func_80032484(rdram, ctx);
        goto after_18;
    // 0x80032B20: mov.s       $f22, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    ctx->f22.fl = ctx->f26.fl;
    after_18:
    // 0x80032B24: lui         $at, 0x436E
    ctx->r1 = S32(0X436E << 16);
    // 0x80032B28: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80032B2C: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x80032B30: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80032B34: sw          $v0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r2;
    // 0x80032B38: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80032B3C: addiu       $s2, $s2, -0x200
    ctx->r18 = ADD32(ctx->r18, -0X200);
    // 0x80032B40: jal         0x80032484
    // 0x80032B44: mov.s       $f22, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    ctx->f22.fl = ctx->f26.fl;
    func_80032484(rdram, ctx);
        goto after_19;
    // 0x80032B44: mov.s       $f22, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    ctx->f22.fl = ctx->f26.fl;
    after_19:
    // 0x80032B48: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80032B4C: addiu       $s3, $s3, -0x3D60
    ctx->r19 = ADD32(ctx->r19, -0X3D60);
    // 0x80032B50: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
    // 0x80032B54: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80032B58: sw          $v0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r2;
    // 0x80032B5C: jal         0x80015898
    // 0x80032B60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_80015898(rdram, ctx);
        goto after_20;
    // 0x80032B60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_20:
    // 0x80032B64: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x80032B68: lbu         $a1, 0x2($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X2);
    // 0x80032B6C: jal         0x80015898
    // 0x80032B70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_80015898(rdram, ctx);
        goto after_21;
    // 0x80032B70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_21:
    // 0x80032B74: lbu         $t6, 0x1($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X1);
    // 0x80032B78: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80032B7C: addiu       $t7, $t6, 0x98
    ctx->r15 = ADD32(ctx->r14, 0X98);
    // 0x80032B80: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80032B84: lui         $a2, 0x42BC
    ctx->r6 = S32(0X42BC << 16);
    // 0x80032B88: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80032B8C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80032B90: jal         0x80014B64
    // 0x80032B94: nop

    func_80014B64(rdram, ctx);
        goto after_22;
    // 0x80032B94: nop

    after_22:
    // 0x80032B98: lbu         $t8, 0x2($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X2);
    // 0x80032B9C: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x80032BA0: addiu       $t9, $t8, 0x98
    ctx->r25 = ADD32(ctx->r24, 0X98);
    // 0x80032BA4: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80032BA8: lui         $a2, 0x42F8
    ctx->r6 = S32(0X42F8 << 16);
    // 0x80032BAC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80032BB0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80032BB4: jal         0x80014B64
    // 0x80032BB8: nop

    func_80014B64(rdram, ctx);
        goto after_23;
    // 0x80032BB8: nop

    after_23:
    // 0x80032BBC: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80032BC0: jal         0x80014A7C
    // 0x80032BC4: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    func_80014A7C(rdram, ctx);
        goto after_24;
    // 0x80032BC4: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    after_24:
    // 0x80032BC8: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x80032BCC: jal         0x80014A7C
    // 0x80032BD0: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    func_80014A7C(rdram, ctx);
        goto after_25;
    // 0x80032BD0: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    after_25:
    // 0x80032BD4: lbu         $t6, 0x9($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X9);
    // 0x80032BD8: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x80032BDC: bne         $s6, $t6, L_80032BF4
    if (ctx->r22 != ctx->r14) {
        // 0x80032BE0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80032BF4;
    }
    // 0x80032BE0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80032BE4: lw          $s0, 0xA8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA8);
    // 0x80032BE8: lw          $s1, 0xAC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XAC);
    // 0x80032BEC: b           L_80032C04
    // 0x80032BF0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
        goto L_80032C04;
    // 0x80032BF0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
L_80032BF4:
    // 0x80032BF4: lw          $s0, 0xAC($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XAC);
    // 0x80032BF8: lw          $s1, 0xA8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA8);
    // 0x80032BFC: nop

    // 0x80032C00: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
L_80032C04:
    // 0x80032C04: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80032C08: lwc1        $f28, 0x59D8($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X59D8);
    // 0x80032C0C: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80032C10: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x80032C14: jal         0x80014B38
    // 0x80032C18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80014B38(rdram, ctx);
        goto after_26;
    // 0x80032C18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x80032C1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80032C20: jal         0x80014A7C
    // 0x80032C24: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_80014A7C(rdram, ctx);
        goto after_27;
    // 0x80032C24: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_27:
    // 0x80032C28: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
    // 0x80032C2C: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x80032C30: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80032C34: jal         0x80014B38
    // 0x80032C38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80014B38(rdram, ctx);
        goto after_28;
    // 0x80032C38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_28:
    // 0x80032C3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80032C40: jal         0x80014A7C
    // 0x80032C44: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_80014A7C(rdram, ctx);
        goto after_29;
    // 0x80032C44: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_29:
    // 0x80032C48: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80032C4C: lui         $s7, 0x800A
    ctx->r23 = S32(0X800A << 16);
    // 0x80032C50: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x80032C54: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x80032C58: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x80032C5C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80032C60: addiu       $s4, $s4, 0x2D8
    ctx->r20 = ADD32(ctx->r20, 0X2D8);
    // 0x80032C64: addiu       $s7, $s7, 0x2B8
    ctx->r23 = ADD32(ctx->r23, 0X2B8);
    // 0x80032C68: addiu       $fp, $zero, 0x7F
    ctx->r30 = ADD32(0, 0X7F);
    // 0x80032C6C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_80032C70:
    // 0x80032C70: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80032C74: lwc1        $f11, 0x59E0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X59E0);
    // 0x80032C78: lwc1        $f10, 0x59E4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X59E4);
    // 0x80032C7C: cvt.d.s     $f8, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); 
    ctx->f8.d = CVT_D_S(ctx->f26.fl);
    // 0x80032C80: mul.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80032C84: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x80032C88: lhu         $s1, 0x52A0($s1)
    ctx->r17 = MEM_HU(ctx->r17, 0X52A0);
    // 0x80032C8C: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
    // 0x80032C90: jal         0x8007A640
    // 0x80032C94: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    __sinf_recomp(rdram, ctx);
        goto after_30;
    // 0x80032C94: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_30:
    // 0x80032C98: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80032C9C: lwc1        $f6, 0x59E8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X59E8);
    // 0x80032CA0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80032CA4: mul.s       $f22, $f0, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80032CA8: jal         0x8007A800
    // 0x80032CAC: nop

    __cosf_recomp(rdram, ctx);
        goto after_31;
    // 0x80032CAC: nop

    after_31:
    // 0x80032CB0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80032CB4: lwc1        $f8, 0x59EC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X59EC);
    // 0x80032CB8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80032CBC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80032CC0: sll         $t7, $s2, 2
    ctx->r15 = S32(ctx->r18 << 2);
    // 0x80032CC4: add.s       $f2, $f26, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f26.fl + ctx->f10.fl;
    // 0x80032CC8: addiu       $t8, $sp, 0x80
    ctx->r24 = ADD32(ctx->r29, 0X80);
    // 0x80032CCC: c.le.s      $f30, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f30.fl <= ctx->f2.fl;
    // 0x80032CD0: mul.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80032CD4: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x80032CD8: bc1f        L_80032CE8
    if (!c1cs) {
        // 0x80032CDC: addu        $s0, $t7, $t8
        ctx->r16 = ADD32(ctx->r15, ctx->r24);
            goto L_80032CE8;
    }
    // 0x80032CDC: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x80032CE0: b           L_80032D10
    // 0x80032CE4: sub.s       $f26, $f2, $f30
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f26.fl = ctx->f2.fl - ctx->f30.fl;
        goto L_80032D10;
    // 0x80032CE4: sub.s       $f26, $f2, $f30
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f26.fl = ctx->f2.fl - ctx->f30.fl;
L_80032CE8:
    // 0x80032CE8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80032CEC: nop

    // 0x80032CF0: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x80032CF4: nop

    // 0x80032CF8: bc1f        L_80032D08
    if (!c1cs) {
        // 0x80032CFC: nop
    
            goto L_80032D08;
    }
    // 0x80032CFC: nop

    // 0x80032D00: b           L_80032D0C
    // 0x80032D04: add.s       $f0, $f2, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f30.fl;
        goto L_80032D0C;
    // 0x80032D04: add.s       $f0, $f2, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f30.fl;
L_80032D08:
    // 0x80032D08: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80032D0C:
    // 0x80032D0C: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
L_80032D10:
    // 0x80032D10: bne         $s1, $at, L_80032D2C
    if (ctx->r17 != ctx->r1) {
        // 0x80032D14: addiu       $at, $zero, 0x4000
        ctx->r1 = ADD32(0, 0X4000);
            goto L_80032D2C;
    }
    // 0x80032D14: addiu       $at, $zero, 0x4000
    ctx->r1 = ADD32(0, 0X4000);
    // 0x80032D18: jal         0x80027874
    // 0x80032D1C: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    func_80027874(rdram, ctx);
        goto after_32;
    // 0x80032D1C: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_32:
    // 0x80032D20: b           L_80033200
    // 0x80032D24: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_80033200;
    // 0x80032D24: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80032D28: addiu       $at, $zero, 0x4000
    ctx->r1 = ADD32(0, 0X4000);
L_80032D2C:
    // 0x80032D2C: bne         $s1, $at, L_80032D8C
    if (ctx->r17 != ctx->r1) {
        // 0x80032D30: addiu       $at, $zero, 0x1000
        ctx->r1 = ADD32(0, 0X1000);
            goto L_80032D8C;
    }
    // 0x80032D30: addiu       $at, $zero, 0x1000
    ctx->r1 = ADD32(0, 0X1000);
    // 0x80032D34: jal         0x80027874
    // 0x80032D38: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    func_80027874(rdram, ctx);
        goto after_33;
    // 0x80032D38: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_33:
    // 0x80032D3C: lbu         $t8, 0xBE($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XBE);
    // 0x80032D40: lbu         $t7, 0xBF($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XBF);
    // 0x80032D44: lbu         $t9, 0xBD($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XBD);
    // 0x80032D48: lbu         $t6, 0xBC($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XBC);
    // 0x80032D4C: sb          $t8, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r24;
    // 0x80032D50: lb          $a0, 0x1($s3)
    ctx->r4 = MEM_B(ctx->r19, 0X1);
    // 0x80032D54: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x80032D58: sb          $t7, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r15;
    // 0x80032D5C: sb          $t9, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r25;
    // 0x80032D60: jal         0x80027140
    // 0x80032D64: sb          $t6, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r14;
    func_80027140(rdram, ctx);
        goto after_34;
    // 0x80032D64: sb          $t6, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r14;
    after_34:
    // 0x80032D68: lb          $a0, 0x2($s3)
    ctx->r4 = MEM_B(ctx->r19, 0X2);
    // 0x80032D6C: jal         0x800270D8
    // 0x80032D70: nop

    func_800270D8(rdram, ctx);
        goto after_35;
    // 0x80032D70: nop

    after_35:
    // 0x80032D74: lbu         $a0, 0x0($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X0);
    // 0x80032D78: jal         0x80024FEC
    // 0x80032D7C: nop

    func_80024FEC(rdram, ctx);
        goto after_36;
    // 0x80032D7C: nop

    after_36:
    // 0x80032D80: b           L_80033204
    // 0x80032D84: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
        goto L_80033204;
    // 0x80032D84: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80032D88: addiu       $at, $zero, 0x1000
    ctx->r1 = ADD32(0, 0X1000);
L_80032D8C:
    // 0x80032D8C: bne         $s1, $at, L_80032D9C
    if (ctx->r17 != ctx->r1) {
        // 0x80032D90: nop
    
            goto L_80032D9C;
    }
    // 0x80032D90: nop

    // 0x80032D94: b           L_80033200
    // 0x80032D98: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
        goto L_80033200;
    // 0x80032D98: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_80032D9C:
    // 0x80032D9C: add.s       $f6, $f22, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f22.fl + ctx->f24.fl;
    // 0x80032DA0: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x80032DA4: add.s       $f8, $f12, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f24.fl;
    // 0x80032DA8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80032DAC: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80032DB0: jal         0x80014B38
    // 0x80032DB4: nop

    func_80014B38(rdram, ctx);
        goto after_37;
    // 0x80032DB4: nop

    after_37:
    // 0x80032DB8: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
    // 0x80032DBC: bne         $s1, $at, L_80032E0C
    if (ctx->r17 != ctx->r1) {
        // 0x80032DC0: addiu       $at, $zero, 0x800
        ctx->r1 = ADD32(0, 0X800);
            goto L_80032E0C;
    }
    // 0x80032DC0: addiu       $at, $zero, 0x800
    ctx->r1 = ADD32(0, 0X800);
    // 0x80032DC4: lb          $t9, 0x0($s4)
    ctx->r25 = MEM_B(ctx->r20, 0X0);
    // 0x80032DC8: nop

    // 0x80032DCC: bne         $t9, $zero, L_80032E0C
    if (ctx->r25 != 0) {
        // 0x80032DD0: addiu       $at, $zero, 0x800
        ctx->r1 = ADD32(0, 0X800);
            goto L_80032E0C;
    }
    // 0x80032DD0: addiu       $at, $zero, 0x800
    ctx->r1 = ADD32(0, 0X800);
    // 0x80032DD4: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x80032DD8: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x80032DDC: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80032DE0: jal         0x80014B38
    // 0x80032DE4: nop

    func_80014B38(rdram, ctx);
        goto after_38;
    // 0x80032DE4: nop

    after_38:
    // 0x80032DE8: jal         0x80027874
    // 0x80032DEC: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    func_80027874(rdram, ctx);
        goto after_39;
    // 0x80032DEC: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_39:
    // 0x80032DF0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80032DF4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80032DF8: bne         $s2, $at, L_80032E50
    if (ctx->r18 != ctx->r1) {
        // 0x80032DFC: nop
    
            goto L_80032E50;
    }
    // 0x80032DFC: nop

    // 0x80032E00: b           L_80032E50
    // 0x80032E04: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80032E50;
    // 0x80032E04: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80032E08: addiu       $at, $zero, 0x800
    ctx->r1 = ADD32(0, 0X800);
L_80032E0C:
    // 0x80032E0C: bne         $s1, $at, L_80032E50
    if (ctx->r17 != ctx->r1) {
        // 0x80032E10: nop
    
            goto L_80032E50;
    }
    // 0x80032E10: nop

    // 0x80032E14: lb          $t6, 0x0($s4)
    ctx->r14 = MEM_B(ctx->r20, 0X0);
    // 0x80032E18: nop

    // 0x80032E1C: bne         $t6, $zero, L_80032E50
    if (ctx->r14 != 0) {
        // 0x80032E20: nop
    
            goto L_80032E50;
    }
    // 0x80032E20: nop

    // 0x80032E24: jal         0x80027874
    // 0x80032E28: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    func_80027874(rdram, ctx);
        goto after_40;
    // 0x80032E28: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_40:
    // 0x80032E2C: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x80032E30: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x80032E34: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80032E38: jal         0x80014B38
    // 0x80032E3C: nop

    func_80014B38(rdram, ctx);
        goto after_41;
    // 0x80032E3C: nop

    after_41:
    // 0x80032E40: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80032E44: bgez        $s2, L_80032E50
    if (SIGNED(ctx->r18) >= 0) {
        // 0x80032E48: nop
    
            goto L_80032E50;
    }
    // 0x80032E48: nop

    // 0x80032E4C: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
L_80032E50:
    // 0x80032E50: beq         $s2, $zero, L_80032E78
    if (ctx->r18 == 0) {
        // 0x80032E54: andi        $t7, $s1, 0x200
        ctx->r15 = ctx->r17 & 0X200;
            goto L_80032E78;
    }
    // 0x80032E54: andi        $t7, $s1, 0x200
    ctx->r15 = ctx->r17 & 0X200;
    // 0x80032E58: beq         $s2, $s6, L_80032F48
    if (ctx->r18 == ctx->r22) {
        // 0x80032E5C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80032F48;
    }
    // 0x80032E5C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80032E60: beq         $s2, $at, L_80033044
    if (ctx->r18 == ctx->r1) {
        // 0x80032E64: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80033044;
    }
    // 0x80032E64: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80032E68: beq         $s2, $at, L_80033140
    if (ctx->r18 == ctx->r1) {
        // 0x80032E6C: andi        $t6, $s1, 0x200
        ctx->r14 = ctx->r17 & 0X200;
            goto L_80033140;
    }
    // 0x80032E6C: andi        $t6, $s1, 0x200
    ctx->r14 = ctx->r17 & 0X200;
    // 0x80032E70: b           L_800331F0
    // 0x80032E74: nop

        goto L_800331F0;
    // 0x80032E74: nop

L_80032E78:
    // 0x80032E78: beq         $t7, $zero, L_80032EB0
    if (ctx->r15 == 0) {
        // 0x80032E7C: andi        $t9, $s1, 0x100
        ctx->r25 = ctx->r17 & 0X100;
            goto L_80032EB0;
    }
    // 0x80032E7C: andi        $t9, $s1, 0x100
    ctx->r25 = ctx->r17 & 0X100;
    // 0x80032E80: lbu         $t8, 0x0($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X0);
    // 0x80032E84: nop

    // 0x80032E88: bne         $s6, $t8, L_80032EB0
    if (ctx->r22 != ctx->r24) {
        // 0x80032E8C: nop
    
            goto L_80032EB0;
    }
    // 0x80032E8C: nop

    // 0x80032E90: jal         0x80027874
    // 0x80032E94: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    func_80027874(rdram, ctx);
        goto after_42;
    // 0x80032E94: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_42:
    // 0x80032E98: sb          $zero, 0x0($s3)
    MEM_B(0X0, ctx->r19) = 0;
    // 0x80032E9C: jal         0x80024FEC
    // 0x80032EA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80024FEC(rdram, ctx);
        goto after_43;
    // 0x80032EA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_43:
    // 0x80032EA4: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80032EA8: b           L_80032EE0
    // 0x80032EAC: nop

        goto L_80032EE0;
    // 0x80032EAC: nop

L_80032EB0:
    // 0x80032EB0: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80032EB4: beq         $t9, $zero, L_80032EE0
    if (ctx->r25 == 0) {
        // 0x80032EB8: nop
    
            goto L_80032EE0;
    }
    // 0x80032EB8: nop

    // 0x80032EBC: bne         $v0, $zero, L_80032EE0
    if (ctx->r2 != 0) {
        // 0x80032EC0: nop
    
            goto L_80032EE0;
    }
    // 0x80032EC0: nop

    // 0x80032EC4: jal         0x80027874
    // 0x80032EC8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    func_80027874(rdram, ctx);
        goto after_44;
    // 0x80032EC8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_44:
    // 0x80032ECC: sb          $s5, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r21;
    // 0x80032ED0: jal         0x80024FEC
    // 0x80032ED4: andi        $a0, $s5, 0xFF
    ctx->r4 = ctx->r21 & 0XFF;
    func_80024FEC(rdram, ctx);
        goto after_45;
    // 0x80032ED4: andi        $a0, $s5, 0xFF
    ctx->r4 = ctx->r21 & 0XFF;
    after_45:
    // 0x80032ED8: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80032EDC: nop

L_80032EE0:
    // 0x80032EE0: bne         $v0, $zero, L_80032EFC
    if (ctx->r2 != 0) {
        // 0x80032EE4: lw          $s0, 0x94($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X94);
            goto L_80032EFC;
    }
    // 0x80032EE4: lw          $s0, 0x94($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X94);
    // 0x80032EE8: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x80032EEC: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x80032EF0: b           L_80032F08
    // 0x80032EF4: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
        goto L_80032F08;
    // 0x80032EF4: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x80032EF8: lw          $s0, 0x94($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X94);
L_80032EFC:
    // 0x80032EFC: lw          $s1, 0x90($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X90);
    // 0x80032F00: nop

    // 0x80032F04: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
L_80032F08:
    // 0x80032F08: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80032F0C: jal         0x80014B38
    // 0x80032F10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80014B38(rdram, ctx);
        goto after_46;
    // 0x80032F10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_46:
    // 0x80032F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80032F18: jal         0x80014A7C
    // 0x80032F1C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_80014A7C(rdram, ctx);
        goto after_47;
    // 0x80032F1C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_47:
    // 0x80032F20: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
    // 0x80032F24: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x80032F28: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80032F2C: jal         0x80014B38
    // 0x80032F30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80014B38(rdram, ctx);
        goto after_48;
    // 0x80032F30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_48:
    // 0x80032F34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80032F38: jal         0x80014A7C
    // 0x80032F3C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_80014A7C(rdram, ctx);
        goto after_49;
    // 0x80032F3C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_49:
    // 0x80032F40: b           L_800331F0
    // 0x80032F44: nop

        goto L_800331F0;
    // 0x80032F44: nop

L_80032F48:
    // 0x80032F48: lhu         $v0, 0x0($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X0);
    // 0x80032F4C: nop

    // 0x80032F50: andi        $t6, $v0, 0x200
    ctx->r14 = ctx->r2 & 0X200;
    // 0x80032F54: beq         $t6, $zero, L_80032F64
    if (ctx->r14 == 0) {
        // 0x80032F58: andi        $t7, $v0, 0x100
        ctx->r15 = ctx->r2 & 0X100;
            goto L_80032F64;
    }
    // 0x80032F58: andi        $t7, $v0, 0x100
    ctx->r15 = ctx->r2 & 0X100;
    // 0x80032F5C: b           L_80032FC0
    // 0x80032F60: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
        goto L_80032FC0;
    // 0x80032F60: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_80032F64:
    // 0x80032F64: beq         $t7, $zero, L_80032F74
    if (ctx->r15 == 0) {
        // 0x80032F68: nop
    
            goto L_80032F74;
    }
    // 0x80032F68: nop

    // 0x80032F6C: b           L_80032FC0
    // 0x80032F70: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80032FC0;
    // 0x80032F70: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80032F74:
    // 0x80032F74: lb          $v0, 0x0($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X0);
    // 0x80032F78: nop

    // 0x80032F7C: beq         $v0, $zero, L_80032FC0
    if (ctx->r2 == 0) {
        // 0x80032F80: slti        $at, $v0, 0x1F
        ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
            goto L_80032FC0;
    }
    // 0x80032F80: slti        $at, $v0, 0x1F
    ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x80032F84: bne         $at, $zero, L_80032F94
    if (ctx->r1 != 0) {
        // 0x80032F88: nop
    
            goto L_80032F94;
    }
    // 0x80032F88: nop

    // 0x80032F8C: b           L_80032FC0
    // 0x80032F90: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80032FC0;
    // 0x80032F90: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80032F94:
    // 0x80032F94: blez        $v0, L_80032FA4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80032F98: slti        $at, $v0, -0x1E
        ctx->r1 = SIGNED(ctx->r2) < -0X1E ? 1 : 0;
            goto L_80032FA4;
    }
    // 0x80032F98: slti        $at, $v0, -0x1E
    ctx->r1 = SIGNED(ctx->r2) < -0X1E ? 1 : 0;
    // 0x80032F9C: b           L_80032FC0
    // 0x80032FA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80032FC0;
    // 0x80032FA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80032FA4:
    // 0x80032FA4: beq         $at, $zero, L_80032FB4
    if (ctx->r1 == 0) {
        // 0x80032FA8: nop
    
            goto L_80032FB4;
    }
    // 0x80032FA8: nop

    // 0x80032FAC: b           L_80032FC0
    // 0x80032FB0: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
        goto L_80032FC0;
    // 0x80032FB0: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
L_80032FB4:
    // 0x80032FB4: bgez        $v0, L_80032FC0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80032FB8: nop
    
            goto L_80032FC0;
    }
    // 0x80032FB8: nop

    // 0x80032FBC: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_80032FC0:
    // 0x80032FC0: beq         $v0, $zero, L_800331F0
    if (ctx->r2 == 0) {
        // 0x80032FC4: nop
    
            goto L_800331F0;
    }
    // 0x80032FC4: nop

    // 0x80032FC8: lbu         $t8, 0x1($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X1);
    // 0x80032FCC: nop

    // 0x80032FD0: addu        $v1, $t8, $v0
    ctx->r3 = ADD32(ctx->r24, ctx->r2);
    // 0x80032FD4: bgtz        $v1, L_80032FE4
    if (SIGNED(ctx->r3) > 0) {
        // 0x80032FD8: slti        $at, $v1, 0x80
        ctx->r1 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
            goto L_80032FE4;
    }
    // 0x80032FD8: slti        $at, $v1, 0x80
    ctx->r1 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
    // 0x80032FDC: b           L_80032FFC
    // 0x80032FE0: sb          $s5, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r21;
        goto L_80032FFC;
    // 0x80032FE0: sb          $s5, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r21;
L_80032FE4:
    // 0x80032FE4: bne         $at, $zero, L_80032FF4
    if (ctx->r1 != 0) {
        // 0x80032FE8: addiu       $a0, $zero, 0x22
        ctx->r4 = ADD32(0, 0X22);
            goto L_80032FF4;
    }
    // 0x80032FE8: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x80032FEC: b           L_80032FFC
    // 0x80032FF0: sb          $fp, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r30;
        goto L_80032FFC;
    // 0x80032FF0: sb          $fp, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r30;
L_80032FF4:
    // 0x80032FF4: jal         0x80027874
    // 0x80032FF8: sb          $v1, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r3;
    func_80027874(rdram, ctx);
        goto after_50;
    // 0x80032FF8: sb          $v1, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r3;
    after_50:
L_80032FFC:
    // 0x80032FFC: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80033000: lbu         $a1, 0x1($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X1);
    // 0x80033004: jal         0x80015898
    // 0x80033008: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_80015898(rdram, ctx);
        goto after_51;
    // 0x80033008: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_51:
    // 0x8003300C: lbu         $t9, 0x1($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X1);
    // 0x80033010: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80033014: addiu       $t6, $t9, 0x98
    ctx->r14 = ADD32(ctx->r25, 0X98);
    // 0x80033018: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8003301C: lui         $a2, 0x42BC
    ctx->r6 = S32(0X42BC << 16);
    // 0x80033020: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80033024: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80033028: jal         0x80014B64
    // 0x8003302C: nop

    func_80014B64(rdram, ctx);
        goto after_52;
    // 0x8003302C: nop

    after_52:
    // 0x80033030: lb          $a0, 0x1($s3)
    ctx->r4 = MEM_B(ctx->r19, 0X1);
    // 0x80033034: jal         0x80027140
    // 0x80033038: nop

    func_80027140(rdram, ctx);
        goto after_53;
    // 0x80033038: nop

    after_53:
    // 0x8003303C: b           L_800331F0
    // 0x80033040: nop

        goto L_800331F0;
    // 0x80033040: nop

L_80033044:
    // 0x80033044: lhu         $v0, 0x0($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X0);
    // 0x80033048: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x8003304C: bne         $v0, $at, L_80033060
    if (ctx->r2 != ctx->r1) {
        // 0x80033050: addiu       $at, $zero, 0x100
        ctx->r1 = ADD32(0, 0X100);
            goto L_80033060;
    }
    // 0x80033050: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x80033054: b           L_800330BC
    // 0x80033058: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
        goto L_800330BC;
    // 0x80033058: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x8003305C: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
L_80033060:
    // 0x80033060: bne         $v0, $at, L_80033070
    if (ctx->r2 != ctx->r1) {
        // 0x80033064: nop
    
            goto L_80033070;
    }
    // 0x80033064: nop

    // 0x80033068: b           L_800330BC
    // 0x8003306C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_800330BC;
    // 0x8003306C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80033070:
    // 0x80033070: lb          $v0, 0x0($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X0);
    // 0x80033074: nop

    // 0x80033078: beq         $v0, $zero, L_800330BC
    if (ctx->r2 == 0) {
        // 0x8003307C: slti        $at, $v0, 0x1F
        ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
            goto L_800330BC;
    }
    // 0x8003307C: slti        $at, $v0, 0x1F
    ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x80033080: bne         $at, $zero, L_80033090
    if (ctx->r1 != 0) {
        // 0x80033084: nop
    
            goto L_80033090;
    }
    // 0x80033084: nop

    // 0x80033088: b           L_800330BC
    // 0x8003308C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_800330BC;
    // 0x8003308C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80033090:
    // 0x80033090: blez        $v0, L_800330A0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80033094: slti        $at, $v0, -0x1E
        ctx->r1 = SIGNED(ctx->r2) < -0X1E ? 1 : 0;
            goto L_800330A0;
    }
    // 0x80033094: slti        $at, $v0, -0x1E
    ctx->r1 = SIGNED(ctx->r2) < -0X1E ? 1 : 0;
    // 0x80033098: b           L_800330BC
    // 0x8003309C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_800330BC;
    // 0x8003309C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800330A0:
    // 0x800330A0: beq         $at, $zero, L_800330B0
    if (ctx->r1 == 0) {
        // 0x800330A4: nop
    
            goto L_800330B0;
    }
    // 0x800330A4: nop

    // 0x800330A8: b           L_800330BC
    // 0x800330AC: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
        goto L_800330BC;
    // 0x800330AC: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
L_800330B0:
    // 0x800330B0: bgez        $v0, L_800330BC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800330B4: nop
    
            goto L_800330BC;
    }
    // 0x800330B4: nop

    // 0x800330B8: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_800330BC:
    // 0x800330BC: beq         $v0, $zero, L_800331F0
    if (ctx->r2 == 0) {
        // 0x800330C0: nop
    
            goto L_800331F0;
    }
    // 0x800330C0: nop

    // 0x800330C4: lbu         $t7, 0x2($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X2);
    // 0x800330C8: nop

    // 0x800330CC: addu        $v1, $t7, $v0
    ctx->r3 = ADD32(ctx->r15, ctx->r2);
    // 0x800330D0: bgtz        $v1, L_800330E0
    if (SIGNED(ctx->r3) > 0) {
        // 0x800330D4: slti        $at, $v1, 0x80
        ctx->r1 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
            goto L_800330E0;
    }
    // 0x800330D4: slti        $at, $v1, 0x80
    ctx->r1 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
    // 0x800330D8: b           L_800330F8
    // 0x800330DC: sb          $s5, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r21;
        goto L_800330F8;
    // 0x800330DC: sb          $s5, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r21;
L_800330E0:
    // 0x800330E0: bne         $at, $zero, L_800330F0
    if (ctx->r1 != 0) {
        // 0x800330E4: addiu       $a0, $zero, 0x22
        ctx->r4 = ADD32(0, 0X22);
            goto L_800330F0;
    }
    // 0x800330E4: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x800330E8: b           L_800330F8
    // 0x800330EC: sb          $fp, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r30;
        goto L_800330F8;
    // 0x800330EC: sb          $fp, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r30;
L_800330F0:
    // 0x800330F0: jal         0x80027874
    // 0x800330F4: sb          $v1, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r3;
    func_80027874(rdram, ctx);
        goto after_54;
    // 0x800330F4: sb          $v1, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r3;
    after_54:
L_800330F8:
    // 0x800330F8: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x800330FC: lbu         $a1, 0x2($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X2);
    // 0x80033100: jal         0x80015898
    // 0x80033104: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_80015898(rdram, ctx);
        goto after_55;
    // 0x80033104: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_55:
    // 0x80033108: lbu         $t8, 0x2($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X2);
    // 0x8003310C: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x80033110: addiu       $t9, $t8, 0x98
    ctx->r25 = ADD32(ctx->r24, 0X98);
    // 0x80033114: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80033118: lui         $a2, 0x42F8
    ctx->r6 = S32(0X42F8 << 16);
    // 0x8003311C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80033120: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80033124: jal         0x80014B64
    // 0x80033128: nop

    func_80014B64(rdram, ctx);
        goto after_56;
    // 0x80033128: nop

    after_56:
    // 0x8003312C: lb          $a0, 0x2($s3)
    ctx->r4 = MEM_B(ctx->r19, 0X2);
    // 0x80033130: jal         0x800270D8
    // 0x80033134: nop

    func_800270D8(rdram, ctx);
        goto after_57;
    // 0x80033134: nop

    after_57:
    // 0x80033138: b           L_800331F0
    // 0x8003313C: nop

        goto L_800331F0;
    // 0x8003313C: nop

L_80033140:
    // 0x80033140: beq         $t6, $zero, L_8003316C
    if (ctx->r14 == 0) {
        // 0x80033144: andi        $t8, $s1, 0x100
        ctx->r24 = ctx->r17 & 0X100;
            goto L_8003316C;
    }
    // 0x80033144: andi        $t8, $s1, 0x100
    ctx->r24 = ctx->r17 & 0X100;
    // 0x80033148: lbu         $t7, 0x9($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X9);
    // 0x8003314C: nop

    // 0x80033150: bne         $t7, $zero, L_8003316C
    if (ctx->r15 != 0) {
        // 0x80033154: nop
    
            goto L_8003316C;
    }
    // 0x80033154: nop

    // 0x80033158: jal         0x80027874
    // 0x8003315C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    func_80027874(rdram, ctx);
        goto after_58;
    // 0x8003315C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_58:
    // 0x80033160: sb          $s5, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r21;
    // 0x80033164: b           L_80033190
    // 0x80033168: andi        $v1, $s5, 0xFF
    ctx->r3 = ctx->r21 & 0XFF;
        goto L_80033190;
    // 0x80033168: andi        $v1, $s5, 0xFF
    ctx->r3 = ctx->r21 & 0XFF;
L_8003316C:
    // 0x8003316C: lbu         $v1, 0x9($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X9);
    // 0x80033170: beq         $t8, $zero, L_80033190
    if (ctx->r24 == 0) {
        // 0x80033174: nop
    
            goto L_80033190;
    }
    // 0x80033174: nop

    // 0x80033178: bne         $s6, $v1, L_80033190
    if (ctx->r22 != ctx->r3) {
        // 0x8003317C: nop
    
            goto L_80033190;
    }
    // 0x8003317C: nop

    // 0x80033180: jal         0x80027874
    // 0x80033184: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    func_80027874(rdram, ctx);
        goto after_59;
    // 0x80033184: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_59:
    // 0x80033188: sb          $zero, 0x9($s3)
    MEM_B(0X9, ctx->r19) = 0;
    // 0x8003318C: andi        $v1, $zero, 0xFF
    ctx->r3 = 0 & 0XFF;
L_80033190:
    // 0x80033190: bne         $s6, $v1, L_800331AC
    if (ctx->r22 != ctx->r3) {
        // 0x80033194: lw          $s0, 0xAC($sp)
        ctx->r16 = MEM_W(ctx->r29, 0XAC);
            goto L_800331AC;
    }
    // 0x80033194: lw          $s0, 0xAC($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XAC);
    // 0x80033198: lw          $s0, 0xA8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA8);
    // 0x8003319C: lw          $s1, 0xAC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XAC);
    // 0x800331A0: b           L_800331B8
    // 0x800331A4: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
        goto L_800331B8;
    // 0x800331A4: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x800331A8: lw          $s0, 0xAC($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XAC);
L_800331AC:
    // 0x800331AC: lw          $s1, 0xA8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA8);
    // 0x800331B0: nop

    // 0x800331B4: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
L_800331B8:
    // 0x800331B8: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x800331BC: jal         0x80014B38
    // 0x800331C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80014B38(rdram, ctx);
        goto after_60;
    // 0x800331C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_60:
    // 0x800331C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800331C8: jal         0x80014A7C
    // 0x800331CC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_80014A7C(rdram, ctx);
        goto after_61;
    // 0x800331CC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_61:
    // 0x800331D0: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
    // 0x800331D4: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x800331D8: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x800331DC: jal         0x80014B38
    // 0x800331E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80014B38(rdram, ctx);
        goto after_62;
    // 0x800331E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_62:
    // 0x800331E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800331E8: jal         0x80014A7C
    // 0x800331EC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_80014A7C(rdram, ctx);
        goto after_63;
    // 0x800331EC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_63:
L_800331F0:
    // 0x800331F0: jal         0x80007AB0
    // 0x800331F4: nop

    func_80007AB0(rdram, ctx);
        goto after_64;
    // 0x800331F4: nop

    after_64:
    // 0x800331F8: b           L_80032C70
    // 0x800331FC: nop

        goto L_80032C70;
    // 0x800331FC: nop

L_80033200:
    // 0x80033200: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_80033204:
    // 0x80033204: beq         $s2, $at, L_80033220
    if (ctx->r18 == ctx->r1) {
        // 0x80033208: addiu       $s0, $sp, 0x80
        ctx->r16 = ADD32(ctx->r29, 0X80);
            goto L_80033220;
    }
    // 0x80033208: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
    // 0x8003320C: jal         0x8003E9C4
    // 0x80033210: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003E9C4(rdram, ctx);
        goto after_65;
    // 0x80033210: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_65:
    // 0x80033214: jal         0x8003E690
    // 0x80033218: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8003E690(rdram, ctx);
        goto after_66;
    // 0x80033218: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_66:
    // 0x8003321C: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
L_80033220:
    // 0x80033220: addiu       $s1, $sp, 0xB0
    ctx->r17 = ADD32(ctx->r29, 0XB0);
L_80033224:
    // 0x80033224: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80033228: jal         0x80014BF4
    // 0x8003322C: nop

    func_80014BF4(rdram, ctx);
        goto after_67;
    // 0x8003322C: nop

    after_67:
    // 0x80033230: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80033234: bne         $s0, $s1, L_80033224
    if (ctx->r16 != ctx->r17) {
        // 0x80033238: nop
    
            goto L_80033224;
    }
    // 0x80033238: nop

    // 0x8003323C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80033240: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    // 0x80033244: jr          $ra
    // 0x80033248: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    return;
    // 0x80033248: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
;}
RECOMP_FUNC void func_8003324C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003324C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80033250: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80033254: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80033258: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x8003325C: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x80033260: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80033264: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80033268: bne         $a1, $zero, L_80033288
    if (ctx->r5 != 0) {
        // 0x8003326C: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_80033288;
    }
    // 0x8003326C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80033270: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80033274: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    // 0x80033278: jal         0x80012304
    // 0x8003327C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80012304(rdram, ctx);
        goto after_0;
    // 0x8003327C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80033280: b           L_800332E8
    // 0x80033284: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_800332E8;
    // 0x80033284: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80033288:
    // 0x80033288: lw          $s0, 0x8($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X8);
    // 0x8003328C: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80033290: beq         $s0, $zero, L_800332E4
    if (ctx->r16 == 0) {
        // 0x80033294: addiu       $s1, $s1, -0x3EE0
        ctx->r17 = ADD32(ctx->r17, -0X3EE0);
            goto L_800332E4;
    }
    // 0x80033294: addiu       $s1, $s1, -0x3EE0
    ctx->r17 = ADD32(ctx->r17, -0X3EE0);
L_80033298:
    // 0x80033298: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8003329C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800332A0: bne         $s2, $v0, L_800332BC
    if (ctx->r18 != ctx->r2) {
        // 0x800332A4: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_800332BC;
    }
    // 0x800332A4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x800332A8: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    // 0x800332AC: jal         0x80012304
    // 0x800332B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80012304(rdram, ctx);
        goto after_1;
    // 0x800332B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x800332B4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x800332B8: nop

L_800332BC:
    // 0x800332BC: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x800332C0: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x800332C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800332C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800332CC: jal         0x8003324C
    // 0x800332D0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_8003324C(rdram, ctx);
        goto after_2;
    // 0x800332D0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_2:
    // 0x800332D4: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x800332D8: nop

    // 0x800332DC: bne         $s0, $zero, L_80033298
    if (ctx->r16 != 0) {
        // 0x800332E0: nop
    
            goto L_80033298;
    }
    // 0x800332E0: nop

L_800332E4:
    // 0x800332E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800332E8:
    // 0x800332E8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800332EC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800332F0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800332F4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800332F8: jr          $ra
    // 0x800332FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800332FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80033300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80033300: addiu       $sp, $sp, -0x140
    ctx->r29 = ADD32(ctx->r29, -0X140);
    // 0x80033304: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80033308: jal         0x80027874
    // 0x8003330C: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
    func_80027874(rdram, ctx);
        goto after_0;
    // 0x8003330C: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
    after_0:
    // 0x80033310: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80033314: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80033318: jal         0x80030524
    // 0x8003331C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80030524(rdram, ctx);
        goto after_1;
    // 0x8003331C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80033320: jal         0x80030EDC
    // 0x80033324: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80030EDC(rdram, ctx);
        goto after_2;
    // 0x80033324: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x80033328: jal         0x80002F88
    // 0x8003332C: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    func_80002F88(rdram, ctx);
        goto after_3;
    // 0x8003332C: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    after_3:
    // 0x80033330: jal         0x80007AB0
    // 0x80033334: sw          $v0, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r2;
    func_80007AB0(rdram, ctx);
        goto after_4;
    // 0x80033334: sw          $v0, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r2;
    after_4:
    // 0x80033338: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003333C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80033340: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80033344: jal         0x80009A84
    // 0x80033348: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80009A84(rdram, ctx);
        goto after_5;
    // 0x80033348: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_5:
    // 0x8003334C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80033350: lw          $v0, -0x42C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X42C0);
    // 0x80033354: nop

    // 0x80033358: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x8003335C: beq         $t6, $zero, L_8003341C
    if (ctx->r14 == 0) {
        // 0x80033360: andi        $t7, $v0, 0x20
        ctx->r15 = ctx->r2 & 0X20;
            goto L_8003341C;
    }
    // 0x80033360: andi        $t7, $v0, 0x20
    ctx->r15 = ctx->r2 & 0X20;
    // 0x80033364: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80033368: addiu       $a0, $a0, -0x6BD4
    ctx->r4 = ADD32(ctx->r4, -0X6BD4);
    // 0x8003336C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80033370: jal         0x8001574C
    // 0x80033374: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001574C(rdram, ctx);
        goto after_6;
    // 0x80033374: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80033378: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8003337C: addiu       $a0, $zero, 0x923
    ctx->r4 = ADD32(0, 0X923);
    // 0x80033380: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80033384: jal         0x80015784
    // 0x80033388: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_7;
    // 0x80033388: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x8003338C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80033390: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80033394: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    // 0x80033398: jal         0x80014B64
    // 0x8003339C: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    func_80014B64(rdram, ctx);
        goto after_8;
    // 0x8003339C: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    after_8:
    // 0x800333A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800333A4: jal         0x80014AC4
    // 0x800333A8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_9;
    // 0x800333A8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_9:
    // 0x800333AC: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x800333B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800333B4: lui         $a1, 0x4298
    ctx->r5 = S32(0X4298 << 16);
    // 0x800333B8: jal         0x800157C8
    // 0x800333BC: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    func_800157C8(rdram, ctx);
        goto after_10;
    // 0x800333BC: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    after_10:
    // 0x800333C0: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x800333C4: addiu       $s0, $s0, 0x2C8
    ctx->r16 = ADD32(ctx->r16, 0X2C8);
    // 0x800333C8: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x800333CC: lhu         $t7, 0x6($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X6);
L_800333D0:
    // 0x800333D0: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
    // 0x800333D4: lhu         $t6, 0x2($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X2);
    // 0x800333D8: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x800333DC: lhu         $t8, 0x4($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X4);
    // 0x800333E0: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x800333E4: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x800333E8: andi        $t6, $t9, 0x1000
    ctx->r14 = ctx->r25 & 0X1000;
    // 0x800333EC: bne         $t6, $zero, L_80033404
    if (ctx->r14 != 0) {
        // 0x800333F0: nop
    
            goto L_80033404;
    }
    // 0x800333F0: nop

    // 0x800333F4: jal         0x80007AB0
    // 0x800333F8: nop

    func_80007AB0(rdram, ctx);
        goto after_11;
    // 0x800333F8: nop

    after_11:
    // 0x800333FC: b           L_800333D0
    // 0x80033400: lhu         $t7, 0x6($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X6);
        goto L_800333D0;
    // 0x80033400: lhu         $t7, 0x6($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X6);
L_80033404:
    // 0x80033404: jal         0x80014BF4
    // 0x80033408: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80014BF4(rdram, ctx);
        goto after_12;
    // 0x80033408: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_12:
    // 0x8003340C: jal         0x80014BF4
    // 0x80033410: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80014BF4(rdram, ctx);
        goto after_13;
    // 0x80033410: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x80033414: b           L_80033F8C
    // 0x80033418: nop

        goto L_80033F8C;
    // 0x80033418: nop

L_8003341C:
    // 0x8003341C: bne         $t7, $zero, L_8003342C
    if (ctx->r15 != 0) {
        // 0x80033420: nop
    
            goto L_8003342C;
    }
    // 0x80033420: nop

    // 0x80033424: jal         0x80059708
    // 0x80033428: nop

    func_80059708(rdram, ctx);
        goto after_14;
    // 0x80033428: nop

    after_14:
L_8003342C:
    // 0x8003342C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80033430: lw          $a0, -0x42BC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X42BC);
    // 0x80033434: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x80033438: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003343C: jal         0x8001D138
    // 0x80033440: addiu       $a0, $a0, 0x8FB
    ctx->r4 = ADD32(ctx->r4, 0X8FB);
    func_8001D138(rdram, ctx);
        goto after_15;
    // 0x80033440: addiu       $a0, $a0, 0x8FB
    ctx->r4 = ADD32(ctx->r4, 0X8FB);
    after_15:
    // 0x80033444: sw          $v0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r2;
    // 0x80033448: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003344C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80033450: jal         0x80018658
    // 0x80033454: lui         $a2, 0xFF00
    ctx->r6 = S32(0XFF00 << 16);
    func_80018658(rdram, ctx);
        goto after_16;
    // 0x80033454: lui         $a2, 0xFF00
    ctx->r6 = S32(0XFF00 << 16);
    after_16:
    // 0x80033458: lw          $s0, 0xD8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD8);
    // 0x8003345C: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80033460: addiu       $s1, $s1, -0x3F30
    ctx->r17 = ADD32(ctx->r17, -0X3F30);
    // 0x80033464: addiu       $s0, $s0, 0x58
    ctx->r16 = ADD32(ctx->r16, 0X58);
    // 0x80033468: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8003346C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80033470: jal         0x80076BF8
    // 0x80033474: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x80033474: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_17:
    // 0x80033478: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x8003347C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80033480: jal         0x80018658
    // 0x80033484: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_18;
    // 0x80033484: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_18:
    // 0x80033488: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8003348C: addiu       $a0, $a0, -0x3F10
    ctx->r4 = ADD32(ctx->r4, -0X3F10);
    // 0x80033490: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80033494: jal         0x80076BF8
    // 0x80033498: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_19;
    // 0x80033498: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_19:
    // 0x8003349C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800334A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800334A4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800334A8: lw          $a0, -0x42B8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X42B8);
    // 0x800334AC: sw          $t8, -0x3EE0($at)
    MEM_W(-0X3EE0, ctx->r1) = ctx->r24;
    // 0x800334B0: addiu       $at, $zero, 0x8BC
    ctx->r1 = ADD32(0, 0X8BC);
    // 0x800334B4: beq         $a0, $at, L_800334C4
    if (ctx->r4 == ctx->r1) {
        // 0x800334B8: addiu       $at, $zero, 0x8BD
        ctx->r1 = ADD32(0, 0X8BD);
            goto L_800334C4;
    }
    // 0x800334B8: addiu       $at, $zero, 0x8BD
    ctx->r1 = ADD32(0, 0X8BD);
    // 0x800334BC: bne         $a0, $at, L_800334E0
    if (ctx->r4 != ctx->r1) {
        // 0x800334C0: lui         $t6, 0x800B
        ctx->r14 = S32(0X800B << 16);
            goto L_800334E0;
    }
    // 0x800334C0: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
L_800334C4:
    // 0x800334C4: lw          $t9, 0xD8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD8);
    // 0x800334C8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x800334CC: lw          $a0, 0x98($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X98);
    // 0x800334D0: jal         0x8003324C
    // 0x800334D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8003324C(rdram, ctx);
        goto after_20;
    // 0x800334D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_20:
    // 0x800334D8: b           L_80033544
    // 0x800334DC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80033544;
    // 0x800334DC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_800334E0:
    // 0x800334E0: lw          $t6, -0x42BC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42BC);
    // 0x800334E4: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x800334E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800334EC: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x800334F0: lw          $a1, -0x278($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X278);
    // 0x800334F4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800334F8: lhu         $t8, 0x0($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X0);
    // 0x800334FC: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80033500: beq         $t8, $zero, L_80033544
    if (ctx->r24 == 0) {
        // 0x80033504: andi        $v1, $t8, 0xFFFF
        ctx->r3 = ctx->r24 & 0XFFFF;
            goto L_80033544;
    }
    // 0x80033504: andi        $v1, $t8, 0xFFFF
    ctx->r3 = ctx->r24 & 0XFFFF;
L_80033508:
    // 0x80033508: bne         $a0, $v1, L_80033530
    if (ctx->r4 != ctx->r3) {
        // 0x8003350C: nop
    
            goto L_80033530;
    }
    // 0x8003350C: nop

    // 0x80033510: lw          $t9, 0xD8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD8);
    // 0x80033514: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80033518: lw          $a0, 0x98($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X98);
    // 0x8003351C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80033520: jal         0x8003324C
    // 0x80033524: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8003324C(rdram, ctx);
        goto after_21;
    // 0x80033524: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_21:
    // 0x80033528: b           L_80033544
    // 0x8003352C: nop

        goto L_80033544;
    // 0x8003352C: nop

L_80033530:
    // 0x80033530: lhu         $v1, 0x2($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X2);
    // 0x80033534: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80033538: bne         $v1, $zero, L_80033508
    if (ctx->r3 != 0) {
        // 0x8003353C: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_80033508;
    }
    // 0x8003353C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80033540: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80033544:
    // 0x80033544: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80033548: lwc1        $f0, 0x59F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X59F0);
    // 0x8003354C: addiu       $s0, $sp, 0xC8
    ctx->r16 = ADD32(ctx->r29, 0XC8);
    // 0x80033550: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x80033554: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80033558: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x8003355C: swc1        $f0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f0.u32l;
    // 0x80033560: jal         0x80019164
    // 0x80033564: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    func_80019164(rdram, ctx);
        goto after_22;
    // 0x80033564: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    after_22:
    // 0x80033568: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8003356C: lwc1        $f4, -0x3B8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3B8);
    // 0x80033570: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80033574: lwc1        $f9, 0x59F8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X59F8);
    // 0x80033578: lwc1        $f8, 0x59FC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X59FC);
    // 0x8003357C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80033580: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80033584: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80033588: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x8003358C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80033590: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x80033594: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x80033598: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x8003359C: jal         0x8001913C
    // 0x800335A0: swc1        $f4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f4.u32l;
    func_8001913C(rdram, ctx);
        goto after_23;
    // 0x800335A0: swc1        $f4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f4.u32l;
    after_23:
    // 0x800335A4: jal         0x80008FBC
    // 0x800335A8: nop

    func_80008FBC(rdram, ctx);
        goto after_24;
    // 0x800335A8: nop

    after_24:
    // 0x800335AC: sw          $v0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r2;
    // 0x800335B0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800335B4: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x800335B8: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x800335BC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800335C0: lw          $a1, 0x128($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X128);
    // 0x800335C4: jal         0x80008E84
    // 0x800335C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80008E84(rdram, ctx);
        goto after_25;
    // 0x800335C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_25:
    // 0x800335CC: lw          $a0, 0xB8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB8);
    // 0x800335D0: addiu       $t8, $zero, 0xFA
    ctx->r24 = ADD32(0, 0XFA);
    // 0x800335D4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800335D8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x800335DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800335E0: jal         0x80008F90
    // 0x800335E4: addiu       $a3, $zero, 0x12B
    ctx->r7 = ADD32(0, 0X12B);
    func_80008F90(rdram, ctx);
        goto after_26;
    // 0x800335E4: addiu       $a3, $zero, 0x12B
    ctx->r7 = ADD32(0, 0X12B);
    after_26:
    // 0x800335E8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800335EC: lwc1        $f0, 0x5A00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5A00);
    // 0x800335F0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800335F4: lwc1        $f2, 0x5A04($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X5A04);
    // 0x800335F8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800335FC: lwc1        $f12, 0x5A08($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5A08);
    // 0x80033600: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80033604: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80033608: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8003360C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80033610: lw          $v0, -0x42BC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X42BC);
    // 0x80033614: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80033618: swc1        $f0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f0.u32l;
    // 0x8003361C: swc1        $f0, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f0.u32l;
    // 0x80033620: swc1        $f0, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f0.u32l;
    // 0x80033624: swc1        $f2, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f2.u32l;
    // 0x80033628: swc1        $f2, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f2.u32l;
    // 0x8003362C: swc1        $f12, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f12.u32l;
    // 0x80033630: swc1        $f14, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f14.u32l;
    // 0x80033634: swc1        $f14, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f14.u32l;
    // 0x80033638: beq         $v0, $at, L_80033648
    if (ctx->r2 == ctx->r1) {
        // 0x8003363C: swc1        $f6, 0x104($sp)
        MEM_W(0X104, ctx->r29) = ctx->f6.u32l;
            goto L_80033648;
    }
    // 0x8003363C: swc1        $f6, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f6.u32l;
    // 0x80033640: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80033644: bne         $v0, $at, L_80033668
    if (ctx->r2 != ctx->r1) {
        // 0x80033648: lui         $at, 0x4316
        ctx->r1 = S32(0X4316 << 16);
            goto L_80033668;
    }
L_80033648:
    // 0x80033648: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x8003364C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80033650: nop

    // 0x80033654: add.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x80033658: add.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x8003365C: swc1        $f8, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f8.u32l;
    // 0x80033660: b           L_80033684
    // 0x80033664: swc1        $f10, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f10.u32l;
        goto L_80033684;
    // 0x80033664: swc1        $f10, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f10.u32l;
L_80033668:
    // 0x80033668: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8003366C: bne         $v0, $at, L_80033684
    if (ctx->r2 != ctx->r1) {
        // 0x80033670: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_80033684;
    }
    // 0x80033670: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80033674: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80033678: nop

    // 0x8003367C: sub.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x80033680: swc1        $f6, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f6.u32l;
L_80033684:
    // 0x80033684: lw          $a0, 0xB8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB8);
    // 0x80033688: addiu       $a1, $sp, 0x118
    ctx->r5 = ADD32(ctx->r29, 0X118);
    // 0x8003368C: addiu       $a2, $sp, 0x10C
    ctx->r6 = ADD32(ctx->r29, 0X10C);
    // 0x80033690: jal         0x80009C2C
    // 0x80033694: addiu       $a3, $sp, 0x100
    ctx->r7 = ADD32(ctx->r29, 0X100);
    func_80009C2C(rdram, ctx);
        goto after_27;
    // 0x80033694: addiu       $a3, $sp, 0x100
    ctx->r7 = ADD32(ctx->r29, 0X100);
    after_27:
    // 0x80033698: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x8003369C: addiu       $t0, $t0, -0x3EF0
    ctx->r8 = ADD32(ctx->r8, -0X3EF0);
    // 0x800336A0: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x800336A4: lw          $t9, 0x44($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X44);
    // 0x800336A8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x800336AC: ori         $t6, $t9, 0x1
    ctx->r14 = ctx->r25 | 0X1;
    // 0x800336B0: sw          $t6, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r14;
    // 0x800336B4: lw          $t7, -0x1EC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1EC);
    // 0x800336B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800336BC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x800336C0: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x800336C4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800336C8: addiu       $a2, $a2, -0x3DD8
    ctx->r6 = ADD32(ctx->r6, -0X3DD8);
    // 0x800336CC: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x800336D0: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x800336D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800336D8: jal         0x80029898
    // 0x800336DC: sw          $t7, -0x3DD8($at)
    MEM_W(-0X3DD8, ctx->r1) = ctx->r15;
    func_80029898(rdram, ctx);
        goto after_28;
    // 0x800336DC: sw          $t7, -0x3DD8($at)
    MEM_W(-0X3DD8, ctx->r1) = ctx->r15;
    after_28:
    // 0x800336E0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800336E4: sw          $v0, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r2;
    // 0x800336E8: addiu       $a0, $a0, -0x1E8
    ctx->r4 = ADD32(ctx->r4, -0X1E8);
    // 0x800336EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800336F0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800336F4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x800336F8: jal         0x8002A9C0
    // 0x800336FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8002A9C0(rdram, ctx);
        goto after_29;
    // 0x800336FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_29:
    // 0x80033700: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80033704: lw          $t9, -0x42C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X42C0);
    // 0x80033708: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8003370C: andi        $t6, $t9, 0x1000
    ctx->r14 = ctx->r25 & 0X1000;
    // 0x80033710: beq         $t6, $zero, L_80033720
    if (ctx->r14 == 0) {
        // 0x80033714: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_80033720;
    }
    // 0x80033714: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80033718: b           L_80033724
    // 0x8003371C: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
        goto L_80033724;
    // 0x8003371C: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
L_80033720:
    // 0x80033720: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
L_80033724:
    // 0x80033724: sll         $a1, $fp, 2
    ctx->r5 = S32(ctx->r30 << 2);
    // 0x80033728: lw          $t7, -0x178($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X178);
    // 0x8003372C: addu        $a1, $a1, $fp
    ctx->r5 = ADD32(ctx->r5, ctx->r30);
    // 0x80033730: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80033734: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80033738: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x8003373C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80033740: addiu       $a2, $a2, -0x3DD4
    ctx->r6 = ADD32(ctx->r6, -0X3DD4);
    // 0x80033744: addiu       $a1, $a1, 0x2B
    ctx->r5 = ADD32(ctx->r5, 0X2B);
    // 0x80033748: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    // 0x8003374C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80033750: jal         0x80029898
    // 0x80033754: sw          $t7, -0x3DD4($at)
    MEM_W(-0X3DD4, ctx->r1) = ctx->r15;
    func_80029898(rdram, ctx);
        goto after_30;
    // 0x80033754: sw          $t7, -0x3DD4($at)
    MEM_W(-0X3DD4, ctx->r1) = ctx->r15;
    after_30:
    // 0x80033758: sw          $v0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r2;
    // 0x8003375C: addiu       $a0, $zero, 0x92B
    ctx->r4 = ADD32(0, 0X92B);
    // 0x80033760: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80033764: jal         0x80015784
    // 0x80033768: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_31;
    // 0x80033768: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_31:
    // 0x8003376C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80033770: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80033774: lui         $a1, 0x4342
    ctx->r5 = S32(0X4342 << 16);
    // 0x80033778: jal         0x80014B64
    // 0x8003377C: lui         $a2, 0x4254
    ctx->r6 = S32(0X4254 << 16);
    func_80014B64(rdram, ctx);
        goto after_32;
    // 0x8003377C: lui         $a2, 0x4254
    ctx->r6 = S32(0X4254 << 16);
    after_32:
    // 0x80033780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80033784: jal         0x80014AC4
    // 0x80033788: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_33;
    // 0x80033788: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_33:
    // 0x8003378C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80033790: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80033794: jal         0x80014AC4
    // 0x80033798: sw          $s0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r16;
    func_80014AC4(rdram, ctx);
        goto after_34;
    // 0x80033798: sw          $s0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r16;
    after_34:
    // 0x8003379C: addiu       $a0, $zero, 0x92C
    ctx->r4 = ADD32(0, 0X92C);
    // 0x800337A0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x800337A4: jal         0x80015784
    // 0x800337A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_35;
    // 0x800337A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_35:
    // 0x800337AC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800337B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800337B4: lui         $a1, 0x4382
    ctx->r5 = S32(0X4382 << 16);
    // 0x800337B8: jal         0x80014B64
    // 0x800337BC: lui         $a2, 0x422C
    ctx->r6 = S32(0X422C << 16);
    func_80014B64(rdram, ctx);
        goto after_36;
    // 0x800337BC: lui         $a2, 0x422C
    ctx->r6 = S32(0X422C << 16);
    after_36:
    // 0x800337C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800337C4: jal         0x80014AC4
    // 0x800337C8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_37;
    // 0x800337C8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_37:
    // 0x800337CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800337D0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x800337D4: jal         0x80014AC4
    // 0x800337D8: sw          $s0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r16;
    func_80014AC4(rdram, ctx);
        goto after_38;
    // 0x800337D8: sw          $s0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r16;
    after_38:
    // 0x800337DC: addiu       $a0, $zero, 0x92D
    ctx->r4 = ADD32(0, 0X92D);
    // 0x800337E0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x800337E4: jal         0x80015784
    // 0x800337E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_39;
    // 0x800337E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_39:
    // 0x800337EC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800337F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800337F4: lui         $a1, 0x4382
    ctx->r5 = S32(0X4382 << 16);
    // 0x800337F8: jal         0x80014B64
    // 0x800337FC: lui         $a2, 0x427C
    ctx->r6 = S32(0X427C << 16);
    func_80014B64(rdram, ctx);
        goto after_40;
    // 0x800337FC: lui         $a2, 0x427C
    ctx->r6 = S32(0X427C << 16);
    after_40:
    // 0x80033800: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80033804: jal         0x80014AC4
    // 0x80033808: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_41;
    // 0x80033808: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_41:
    // 0x8003380C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80033810: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80033814: jal         0x80014AC4
    // 0x80033818: sw          $s0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r16;
    func_80014AC4(rdram, ctx);
        goto after_42;
    // 0x80033818: sw          $s0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r16;
    after_42:
    // 0x8003381C: addiu       $a0, $zero, 0x1B4
    ctx->r4 = ADD32(0, 0X1B4);
    // 0x80033820: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80033824: jal         0x80015784
    // 0x80033828: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_43;
    // 0x80033828: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_43:
    // 0x8003382C: lui         $at, 0x4343
    ctx->r1 = S32(0X4343 << 16);
    // 0x80033830: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80033834: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80033838: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8003383C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80033840: jal         0x80014B64
    // 0x80033844: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_80014B64(rdram, ctx);
        goto after_44;
    // 0x80033844: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_44:
    // 0x80033848: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003384C: jal         0x80014AC4
    // 0x80033850: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_45;
    // 0x80033850: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_45:
    // 0x80033854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80033858: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8003385C: jal         0x80014AC4
    // 0x80033860: sw          $s0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r16;
    func_80014AC4(rdram, ctx);
        goto after_46;
    // 0x80033860: sw          $s0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r16;
    after_46:
    // 0x80033864: addiu       $a0, $zero, 0x1B3
    ctx->r4 = ADD32(0, 0X1B3);
    // 0x80033868: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8003386C: jal         0x80015784
    // 0x80033870: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_47;
    // 0x80033870: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_47:
    // 0x80033874: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80033878: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8003387C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80033880: jal         0x80014B64
    // 0x80033884: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    func_80014B64(rdram, ctx);
        goto after_48;
    // 0x80033884: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    after_48:
    // 0x80033888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003388C: jal         0x80014AC4
    // 0x80033890: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_49;
    // 0x80033890: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_49:
    // 0x80033894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80033898: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8003389C: jal         0x80014AC4
    // 0x800338A0: sw          $s0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r16;
    func_80014AC4(rdram, ctx);
        goto after_50;
    // 0x800338A0: sw          $s0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r16;
    after_50:
    // 0x800338A4: addiu       $a0, $zero, 0x949
    ctx->r4 = ADD32(0, 0X949);
    // 0x800338A8: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    // 0x800338AC: jal         0x80015784
    // 0x800338B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_51;
    // 0x800338B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_51:
    // 0x800338B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800338B8: lui         $a1, 0x4388
    ctx->r5 = S32(0X4388 << 16);
    // 0x800338BC: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x800338C0: jal         0x80014B64
    // 0x800338C4: sw          $v0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r2;
    func_80014B64(rdram, ctx);
        goto after_52;
    // 0x800338C4: sw          $v0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r2;
    after_52:
    // 0x800338C8: lw          $a0, 0xF8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF8);
    // 0x800338CC: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x800338D0: jal         0x80015898
    // 0x800338D4: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    func_80015898(rdram, ctx);
        goto after_53;
    // 0x800338D4: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_53:
    // 0x800338D8: lw          $a0, 0xF8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF8);
    // 0x800338DC: jal         0x800157DC
    // 0x800338E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800157DC(rdram, ctx);
        goto after_54;
    // 0x800338E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_54:
    // 0x800338E4: lw          $a0, 0xF8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF8);
    // 0x800338E8: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x800338EC: jal         0x80015950
    // 0x800338F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_55;
    // 0x800338F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_55:
    // 0x800338F4: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x800338F8: lw          $s3, -0x74C($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X74C);
    // 0x800338FC: lui         $at, 0x4250
    ctx->r1 = S32(0X4250 << 16);
    // 0x80033900: andi        $t9, $s3, 0xF
    ctx->r25 = ctx->r19 & 0XF;
    // 0x80033904: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80033908: addiu       $s3, $t9, -0x1
    ctx->r19 = ADD32(ctx->r25, -0X1);
    // 0x8003390C: addiu       $s0, $sp, 0xA8
    ctx->r16 = ADD32(ctx->r29, 0XA8);
    // 0x80033910: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
L_80033914:
    // 0x80033914: slt         $at, $s2, $s3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80033918: beq         $at, $zero, L_8003398C
    if (ctx->r1 == 0) {
        // 0x8003391C: addiu       $a0, $zero, 0x912
        ctx->r4 = ADD32(0, 0X912);
            goto L_8003398C;
    }
    // 0x8003391C: addiu       $a0, $zero, 0x912
    ctx->r4 = ADD32(0, 0X912);
    // 0x80033920: sll         $t6, $s3, 3
    ctx->r14 = S32(ctx->r19 << 3);
    // 0x80033924: addiu       $t7, $zero, 0x60
    ctx->r15 = ADD32(0, 0X60);
    // 0x80033928: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x8003392C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80033930: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    // 0x80033934: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80033938: sll         $s1, $s2, 4
    ctx->r17 = S32(ctx->r18 << 4);
    // 0x8003393C: jal         0x80015784
    // 0x80033940: cvt.s.w     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    ctx->f20.fl = CVT_S_W(ctx->f8.u32l);
    func_80015784(rdram, ctx);
        goto after_56;
    // 0x80033940: cvt.s.w     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    ctx->f20.fl = CVT_S_W(ctx->f8.u32l);
    after_56:
    // 0x80033944: mtc1        $s1, $f10
    ctx->f10.u32l = ctx->r17;
    // 0x80033948: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x8003394C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80033950: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80033954: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80033958: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x8003395C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80033960: jal         0x80014B64
    // 0x80033964: nop

    func_80014B64(rdram, ctx);
        goto after_57;
    // 0x80033964: nop

    after_57:
    // 0x80033968: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8003396C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80033970: jal         0x80015898
    // 0x80033974: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80015898(rdram, ctx);
        goto after_58;
    // 0x80033974: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_58:
    // 0x80033978: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8003397C: jal         0x800157DC
    // 0x80033980: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800157DC(rdram, ctx);
        goto after_59;
    // 0x80033980: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_59:
    // 0x80033984: b           L_80033994
    // 0x80033988: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_80033994;
    // 0x80033988: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8003398C:
    // 0x8003398C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80033990: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80033994:
    // 0x80033994: bne         $s2, $s4, L_80033914
    if (ctx->r18 != ctx->r20) {
        // 0x80033998: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80033914;
    }
    // 0x80033998: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8003399C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800339A0: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x800339A4: addiu       $a0, $a0, -0x6FF0
    ctx->r4 = ADD32(ctx->r4, -0X6FF0);
    // 0x800339A8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x800339AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800339B0: jal         0x80007C3C
    // 0x800339B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_60;
    // 0x800339B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_60:
    // 0x800339B8: lw          $t9, 0xD8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD8);
    // 0x800339BC: sw          $v0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r2;
    // 0x800339C0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800339C4: sw          $t9, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r25;
    // 0x800339C8: lwc1        $f30, 0x5A0C($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X5A0C);
    // 0x800339CC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800339D0: lwc1        $f28, 0x5A10($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X5A10);
    // 0x800339D4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800339D8: addiu       $s4, $sp, 0xB4
    ctx->r20 = ADD32(ctx->r29, 0XB4);
    // 0x800339DC: addiu       $s3, $sp, 0xFC
    ctx->r19 = ADD32(ctx->r29, 0XFC);
    // 0x800339E0: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x800339E4: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x800339E8: or          $s5, $s3, $zero
    ctx->r21 = ctx->r19 | 0;
    // 0x800339EC: or          $s6, $s4, $zero
    ctx->r22 = ctx->r20 | 0;
L_800339F0:
    // 0x800339F0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800339F4: lwc1        $f11, 0x5A18($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X5A18);
    // 0x800339F8: lwc1        $f10, 0x5A1C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5A1C);
    // 0x800339FC: cvt.d.s     $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f8.d = CVT_D_S(ctx->f24.fl);
    // 0x80033A00: mul.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80033A04: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x80033A08: lhu         $s1, 0x52A0($s1)
    ctx->r17 = MEM_HU(ctx->r17, 0X52A0);
    // 0x80033A0C: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
    // 0x80033A10: jal         0x8007A640
    // 0x80033A14: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    __sinf_recomp(rdram, ctx);
        goto after_61;
    // 0x80033A14: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_61:
    // 0x80033A18: mul.s       $f22, $f0, $f28
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f22.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x80033A1C: jal         0x8007A800
    // 0x80033A20: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    __cosf_recomp(rdram, ctx);
        goto after_62;
    // 0x80033A20: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_62:
    // 0x80033A24: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80033A28: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80033A2C: add.s       $f10, $f22, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f22.fl + ctx->f30.fl;
    // 0x80033A30: add.s       $f2, $f24, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f24.fl + ctx->f6.fl;
    // 0x80033A34: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80033A38: c.le.s      $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f26.fl <= ctx->f2.fl;
    // 0x80033A3C: mul.s       $f12, $f0, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x80033A40: bc1f        L_80033A50
    if (!c1cs) {
        // 0x80033A44: nop
    
            goto L_80033A50;
    }
    // 0x80033A44: nop

    // 0x80033A48: b           L_80033A78
    // 0x80033A4C: sub.s       $f24, $f2, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f24.fl = ctx->f2.fl - ctx->f26.fl;
        goto L_80033A78;
    // 0x80033A4C: sub.s       $f24, $f2, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f24.fl = ctx->f2.fl - ctx->f26.fl;
L_80033A50:
    // 0x80033A50: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80033A54: nop

    // 0x80033A58: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x80033A5C: nop

    // 0x80033A60: bc1f        L_80033A70
    if (!c1cs) {
        // 0x80033A64: nop
    
            goto L_80033A70;
    }
    // 0x80033A64: nop

    // 0x80033A68: b           L_80033A74
    // 0x80033A6C: add.s       $f0, $f2, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f26.fl;
        goto L_80033A74;
    // 0x80033A6C: add.s       $f0, $f2, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f26.fl;
L_80033A70:
    // 0x80033A70: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80033A74:
    // 0x80033A74: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
L_80033A78:
    // 0x80033A78: add.s       $f4, $f12, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f12.fl + ctx->f30.fl;
    // 0x80033A7C: lw          $a0, 0xF8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF8);
    // 0x80033A80: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80033A84: jal         0x80014B38
    // 0x80033A88: nop

    func_80014B38(rdram, ctx);
        goto after_63;
    // 0x80033A88: nop

    after_63:
    // 0x80033A8C: andi        $t8, $s1, 0x10
    ctx->r24 = ctx->r17 & 0X10;
    // 0x80033A90: beq         $t8, $zero, L_80033BC4
    if (ctx->r24 == 0) {
        // 0x80033A94: andi        $t6, $s1, 0x4000
        ctx->r14 = ctx->r17 & 0X4000;
            goto L_80033BC4;
    }
    // 0x80033A94: andi        $t6, $s1, 0x4000
    ctx->r14 = ctx->r17 & 0X4000;
    // 0x80033A98: jal         0x80027874
    // 0x80033A9C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    func_80027874(rdram, ctx);
        goto after_64;
    // 0x80033A9C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_64:
    // 0x80033AA0: addiu       $s0, $sp, 0xE0
    ctx->r16 = ADD32(ctx->r29, 0XE0);
L_80033AA4:
    // 0x80033AA4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80033AA8: jal         0x80014AC4
    // 0x80033AAC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80014AC4(rdram, ctx);
        goto after_65;
    // 0x80033AAC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_65:
    // 0x80033AB0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80033AB4: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x80033AB8: bne         $at, $zero, L_80033AA4
    if (ctx->r1 != 0) {
        // 0x80033ABC: nop
    
            goto L_80033AA4;
    }
    // 0x80033ABC: nop

    // 0x80033AC0: addiu       $s0, $sp, 0xA8
    ctx->r16 = ADD32(ctx->r29, 0XA8);
L_80033AC4:
    // 0x80033AC4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80033AC8: nop

    // 0x80033ACC: beq         $a0, $zero, L_80033ADC
    if (ctx->r4 == 0) {
        // 0x80033AD0: nop
    
            goto L_80033ADC;
    }
    // 0x80033AD0: nop

    // 0x80033AD4: jal         0x80014AC4
    // 0x80033AD8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80014AC4(rdram, ctx);
        goto after_66;
    // 0x80033AD8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_66:
L_80033ADC:
    // 0x80033ADC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80033AE0: sltu        $at, $s0, $s4
    ctx->r1 = ctx->r16 < ctx->r20 ? 1 : 0;
    // 0x80033AE4: bne         $at, $zero, L_80033AC4
    if (ctx->r1 != 0) {
        // 0x80033AE8: nop
    
            goto L_80033AC4;
    }
    // 0x80033AE8: nop

    // 0x80033AEC: lw          $a0, 0x138($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X138);
    // 0x80033AF0: jal         0x80014AC4
    // 0x80033AF4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80014AC4(rdram, ctx);
        goto after_67;
    // 0x80033AF4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_67:
    // 0x80033AF8: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x80033AFC: jal         0x800191E8
    // 0x80033B00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800191E8(rdram, ctx);
        goto after_68;
    // 0x80033B00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_68:
    // 0x80033B04: sw          $s1, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r17;
    // 0x80033B08: sw          $s7, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r23;
    // 0x80033B0C: sw          $fp, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r30;
    // 0x80033B10: jal         0x80032904
    // 0x80033B14: swc1        $f24, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f24.u32l;
    func_80032904(rdram, ctx);
        goto after_69;
    // 0x80033B14: swc1        $f24, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f24.u32l;
    after_69:
    // 0x80033B18: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80033B1C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80033B20: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80033B24: lwc1        $f28, 0x5A20($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X5A20);
    // 0x80033B28: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80033B2C: lwc1        $f30, 0x5A24($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X5A24);
    // 0x80033B30: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80033B34: lw          $s1, 0xC0($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC0);
    // 0x80033B38: addiu       $s5, $sp, 0xFC
    ctx->r21 = ADD32(ctx->r29, 0XFC);
    // 0x80033B3C: addiu       $s6, $sp, 0xB4
    ctx->r22 = ADD32(ctx->r29, 0XB4);
    // 0x80033B40: lw          $s7, 0x128($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X128);
    // 0x80033B44: lw          $fp, 0xC4($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XC4);
    // 0x80033B48: lwc1        $f24, 0x9C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80033B4C: or          $s4, $s6, $zero
    ctx->r20 = ctx->r22 | 0;
    // 0x80033B50: bne         $v0, $at, L_80033B60
    if (ctx->r2 != ctx->r1) {
        // 0x80033B54: or          $s3, $s5, $zero
        ctx->r19 = ctx->r21 | 0;
            goto L_80033B60;
    }
    // 0x80033B54: or          $s3, $s5, $zero
    ctx->r19 = ctx->r21 | 0;
    // 0x80033B58: b           L_80033BC0
    // 0x80033B5C: addiu       $s1, $zero, 0x1000
    ctx->r17 = ADD32(0, 0X1000);
        goto L_80033BC0;
    // 0x80033B5C: addiu       $s1, $zero, 0x1000
    ctx->r17 = ADD32(0, 0X1000);
L_80033B60:
    // 0x80033B60: addiu       $s0, $sp, 0xE0
    ctx->r16 = ADD32(ctx->r29, 0XE0);
L_80033B64:
    // 0x80033B64: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80033B68: jal         0x80014AB0
    // 0x80033B6C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80014AB0(rdram, ctx);
        goto after_70;
    // 0x80033B6C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_70:
    // 0x80033B70: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80033B74: sltu        $at, $s0, $s5
    ctx->r1 = ctx->r16 < ctx->r21 ? 1 : 0;
    // 0x80033B78: bne         $at, $zero, L_80033B64
    if (ctx->r1 != 0) {
        // 0x80033B7C: nop
    
            goto L_80033B64;
    }
    // 0x80033B7C: nop

    // 0x80033B80: addiu       $s0, $sp, 0xA8
    ctx->r16 = ADD32(ctx->r29, 0XA8);
L_80033B84:
    // 0x80033B84: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80033B88: nop

    // 0x80033B8C: beq         $a0, $zero, L_80033B9C
    if (ctx->r4 == 0) {
        // 0x80033B90: nop
    
            goto L_80033B9C;
    }
    // 0x80033B90: nop

    // 0x80033B94: jal         0x80014AB0
    // 0x80033B98: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80014AB0(rdram, ctx);
        goto after_71;
    // 0x80033B98: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_71:
L_80033B9C:
    // 0x80033B9C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80033BA0: bne         $s0, $s6, L_80033B84
    if (ctx->r16 != ctx->r22) {
        // 0x80033BA4: nop
    
            goto L_80033B84;
    }
    // 0x80033BA4: nop

    // 0x80033BA8: lw          $a0, 0x138($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X138);
    // 0x80033BAC: jal         0x80014AB0
    // 0x80033BB0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80014AB0(rdram, ctx);
        goto after_72;
    // 0x80033BB0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_72:
    // 0x80033BB4: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x80033BB8: jal         0x800191E8
    // 0x80033BBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800191E8(rdram, ctx);
        goto after_73;
    // 0x80033BBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_73:
L_80033BC0:
    // 0x80033BC0: andi        $t6, $s1, 0x4000
    ctx->r14 = ctx->r17 & 0X4000;
L_80033BC4:
    // 0x80033BC4: beq         $t6, $zero, L_80033BE0
    if (ctx->r14 == 0) {
        // 0x80033BC8: andi        $t8, $s1, 0x9000
        ctx->r24 = ctx->r17 & 0X9000;
            goto L_80033BE0;
    }
    // 0x80033BC8: andi        $t8, $s1, 0x9000
    ctx->r24 = ctx->r17 & 0X9000;
    // 0x80033BCC: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x80033BD0: jal         0x80027874
    // 0x80033BD4: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    func_80027874(rdram, ctx);
        goto after_74;
    // 0x80033BD4: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    after_74:
    // 0x80033BD8: b           L_80033DD0
    // 0x80033BDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
        goto L_80033DD0;
    // 0x80033BDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_80033BE0:
    // 0x80033BE0: beq         $t8, $zero, L_80033C84
    if (ctx->r24 == 0) {
        // 0x80033BE4: sll         $t6, $s7, 3
        ctx->r14 = S32(ctx->r23 << 3);
            goto L_80033C84;
    }
    // 0x80033BE4: sll         $t6, $s7, 3
    ctx->r14 = S32(ctx->r23 << 3);
    // 0x80033BE8: jal         0x80027874
    // 0x80033BEC: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    func_80027874(rdram, ctx);
        goto after_75;
    // 0x80033BEC: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_75:
    // 0x80033BF0: andi        $t9, $s1, 0x1000
    ctx->r25 = ctx->r17 & 0X1000;
    // 0x80033BF4: beq         $t9, $zero, L_80033C00
    if (ctx->r25 == 0) {
        // 0x80033BF8: lui         $t7, 0x800B
        ctx->r15 = S32(0X800B << 16);
            goto L_80033C00;
    }
    // 0x80033BF8: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80033BFC: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
L_80033C00:
    // 0x80033C00: beq         $fp, $zero, L_80033C34
    if (ctx->r30 == 0) {
        // 0x80033C04: lui         $v0, 0x800B
        ctx->r2 = S32(0X800B << 16);
            goto L_80033C34;
    }
    // 0x80033C04: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80033C08: lw          $t7, -0x42C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X42C0);
    // 0x80033C0C: nop

    // 0x80033C10: andi        $t6, $t7, 0x1000
    ctx->r14 = ctx->r15 & 0X1000;
    // 0x80033C14: bne         $t6, $zero, L_80033C34
    if (ctx->r14 != 0) {
        // 0x80033C18: nop
    
            goto L_80033C34;
    }
    // 0x80033C18: nop

    // 0x80033C1C: jal         0x80040678
    // 0x80033C20: nop

    func_80040678(rdram, ctx);
        goto after_76;
    // 0x80033C20: nop

    after_76:
    // 0x80033C24: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80033C28: lw          $v0, -0x42C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X42C0);
    // 0x80033C2C: b           L_80033C5C
    // 0x80033C30: nop

        goto L_80033C5C;
    // 0x80033C30: nop

L_80033C34:
    // 0x80033C34: lw          $v0, -0x42C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X42C0);
    // 0x80033C38: bne         $fp, $zero, L_80033C5C
    if (ctx->r30 != 0) {
        // 0x80033C3C: andi        $t8, $v0, 0x1000
        ctx->r24 = ctx->r2 & 0X1000;
            goto L_80033C5C;
    }
    // 0x80033C3C: andi        $t8, $v0, 0x1000
    ctx->r24 = ctx->r2 & 0X1000;
    // 0x80033C40: beq         $t8, $zero, L_80033C5C
    if (ctx->r24 == 0) {
        // 0x80033C44: nop
    
            goto L_80033C5C;
    }
    // 0x80033C44: nop

    // 0x80033C48: jal         0x800406EC
    // 0x80033C4C: nop

    func_800406EC(rdram, ctx);
        goto after_77;
    // 0x80033C4C: nop

    after_77:
    // 0x80033C50: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80033C54: lw          $v0, -0x42C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X42C0);
    // 0x80033C58: nop

L_80033C5C:
    // 0x80033C5C: beq         $fp, $zero, L_80033C74
    if (ctx->r30 == 0) {
        // 0x80033C60: addiu       $at, $zero, -0x1001
        ctx->r1 = ADD32(0, -0X1001);
            goto L_80033C74;
    }
    // 0x80033C60: addiu       $at, $zero, -0x1001
    ctx->r1 = ADD32(0, -0X1001);
    // 0x80033C64: ori         $t9, $v0, 0x1000
    ctx->r25 = ctx->r2 | 0X1000;
    // 0x80033C68: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80033C6C: b           L_80033DCC
    // 0x80033C70: sw          $t9, -0x42C0($at)
    MEM_W(-0X42C0, ctx->r1) = ctx->r25;
        goto L_80033DCC;
    // 0x80033C70: sw          $t9, -0x42C0($at)
    MEM_W(-0X42C0, ctx->r1) = ctx->r25;
L_80033C74:
    // 0x80033C74: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x80033C78: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80033C7C: b           L_80033DCC
    // 0x80033C80: sw          $t7, -0x42C0($at)
    MEM_W(-0X42C0, ctx->r1) = ctx->r15;
        goto L_80033DCC;
    // 0x80033C80: sw          $t7, -0x42C0($at)
    MEM_W(-0X42C0, ctx->r1) = ctx->r15;
L_80033C84:
    // 0x80033C84: subu        $t6, $t6, $s7
    ctx->r14 = SUB32(ctx->r14, ctx->r23);
    // 0x80033C88: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80033C8C: addiu       $t8, $t8, -0x1E8
    ctx->r24 = ADD32(ctx->r24, -0X1E8);
    // 0x80033C90: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80033C94: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x80033C98: bne         $s1, $at, L_80033CD4
    if (ctx->r17 != ctx->r1) {
        // 0x80033C9C: addu        $s0, $t6, $t8
        ctx->r16 = ADD32(ctx->r14, ctx->r24);
            goto L_80033CD4;
    }
    // 0x80033C9C: addu        $s0, $t6, $t8
    ctx->r16 = ADD32(ctx->r14, ctx->r24);
    // 0x80033CA0: lw          $t9, 0x10($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10);
    // 0x80033CA4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80033CA8: beq         $t9, $at, L_80033CD8
    if (ctx->r25 == ctx->r1) {
        // 0x80033CAC: addiu       $at, $zero, 0x100
        ctx->r1 = ADD32(0, 0X100);
            goto L_80033CD8;
    }
    // 0x80033CAC: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x80033CB0: jal         0x80027874
    // 0x80033CB4: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    func_80027874(rdram, ctx);
        goto after_78;
    // 0x80033CB4: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_78:
    // 0x80033CB8: lw          $s7, 0x10($s0)
    ctx->r23 = MEM_W(ctx->r16, 0X10);
    // 0x80033CBC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80033CC0: sll         $t7, $s7, 3
    ctx->r15 = S32(ctx->r23 << 3);
    // 0x80033CC4: subu        $t7, $t7, $s7
    ctx->r15 = SUB32(ctx->r15, ctx->r23);
    // 0x80033CC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80033CCC: addiu       $t6, $t6, -0x1E8
    ctx->r14 = ADD32(ctx->r14, -0X1E8);
    // 0x80033CD0: addu        $s0, $t7, $t6
    ctx->r16 = ADD32(ctx->r15, ctx->r14);
L_80033CD4:
    // 0x80033CD4: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
L_80033CD8:
    // 0x80033CD8: bne         $s1, $at, L_80033D1C
    if (ctx->r17 != ctx->r1) {
        // 0x80033CDC: addiu       $at, $zero, 0x800
        ctx->r1 = ADD32(0, 0X800);
            goto L_80033D1C;
    }
    // 0x80033CDC: addiu       $at, $zero, 0x800
    ctx->r1 = ADD32(0, 0X800);
    // 0x80033CE0: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x80033CE4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80033CE8: beq         $t8, $at, L_80033D1C
    if (ctx->r24 == ctx->r1) {
        // 0x80033CEC: addiu       $at, $zero, 0x800
        ctx->r1 = ADD32(0, 0X800);
            goto L_80033D1C;
    }
    // 0x80033CEC: addiu       $at, $zero, 0x800
    ctx->r1 = ADD32(0, 0X800);
    // 0x80033CF0: jal         0x80027874
    // 0x80033CF4: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    func_80027874(rdram, ctx);
        goto after_79;
    // 0x80033CF4: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_79:
    // 0x80033CF8: lw          $s7, 0x14($s0)
    ctx->r23 = MEM_W(ctx->r16, 0X14);
    // 0x80033CFC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80033D00: sll         $t9, $s7, 3
    ctx->r25 = S32(ctx->r23 << 3);
    // 0x80033D04: subu        $t9, $t9, $s7
    ctx->r25 = SUB32(ctx->r25, ctx->r23);
    // 0x80033D08: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80033D0C: addiu       $t7, $t7, -0x1E8
    ctx->r15 = ADD32(ctx->r15, -0X1E8);
    // 0x80033D10: b           L_80033D90
    // 0x80033D14: addu        $s0, $t9, $t7
    ctx->r16 = ADD32(ctx->r25, ctx->r15);
        goto L_80033D90;
    // 0x80033D14: addu        $s0, $t9, $t7
    ctx->r16 = ADD32(ctx->r25, ctx->r15);
    // 0x80033D18: addiu       $at, $zero, 0x800
    ctx->r1 = ADD32(0, 0X800);
L_80033D1C:
    // 0x80033D1C: bne         $s1, $at, L_80033D5C
    if (ctx->r17 != ctx->r1) {
        // 0x80033D20: addiu       $at, $zero, 0x400
        ctx->r1 = ADD32(0, 0X400);
            goto L_80033D5C;
    }
    // 0x80033D20: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
    // 0x80033D24: beq         $fp, $zero, L_80033D58
    if (ctx->r30 == 0) {
        // 0x80033D28: addiu       $a0, $zero, 0x22
        ctx->r4 = ADD32(0, 0X22);
            goto L_80033D58;
    }
    // 0x80033D28: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x80033D2C: addiu       $t6, $zero, 0x2B
    ctx->r14 = ADD32(0, 0X2B);
    // 0x80033D30: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80033D34: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x80033D38: jal         0x80027874
    // 0x80033D3C: cvt.s.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = CVT_S_W(ctx->f6.u32l);
    func_80027874(rdram, ctx);
        goto after_80;
    // 0x80033D3C: cvt.s.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = CVT_S_W(ctx->f6.u32l);
    after_80:
    // 0x80033D40: lw          $a0, 0xEC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XEC);
    // 0x80033D44: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80033D48: jal         0x80014B64
    // 0x80033D4C: lui         $a1, 0x4382
    ctx->r5 = S32(0X4382 << 16);
    func_80014B64(rdram, ctx);
        goto after_81;
    // 0x80033D4C: lui         $a1, 0x4382
    ctx->r5 = S32(0X4382 << 16);
    after_81:
    // 0x80033D50: b           L_80033D94
    // 0x80033D54: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
        goto L_80033D94;
    // 0x80033D54: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
L_80033D58:
    // 0x80033D58: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
L_80033D5C:
    // 0x80033D5C: bne         $s1, $at, L_80033D90
    if (ctx->r17 != ctx->r1) {
        // 0x80033D60: nop
    
            goto L_80033D90;
    }
    // 0x80033D60: nop

    // 0x80033D64: bne         $fp, $zero, L_80033D90
    if (ctx->r30 != 0) {
        // 0x80033D68: addiu       $a0, $zero, 0x22
        ctx->r4 = ADD32(0, 0X22);
            goto L_80033D90;
    }
    // 0x80033D68: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x80033D6C: addiu       $t8, $zero, 0x3F
    ctx->r24 = ADD32(0, 0X3F);
    // 0x80033D70: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80033D74: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x80033D78: jal         0x80027874
    // 0x80033D7C: cvt.s.w     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    ctx->f20.fl = CVT_S_W(ctx->f8.u32l);
    func_80027874(rdram, ctx);
        goto after_82;
    // 0x80033D7C: cvt.s.w     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    ctx->f20.fl = CVT_S_W(ctx->f8.u32l);
    after_82:
    // 0x80033D80: lw          $a0, 0xEC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XEC);
    // 0x80033D84: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80033D88: jal         0x80014B64
    // 0x80033D8C: lui         $a1, 0x4382
    ctx->r5 = S32(0X4382 << 16);
    func_80014B64(rdram, ctx);
        goto after_83;
    // 0x80033D8C: lui         $a1, 0x4382
    ctx->r5 = S32(0X4382 << 16);
    after_83:
L_80033D90:
    // 0x80033D90: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
L_80033D94:
    // 0x80033D94: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x80033D98: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80033D9C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80033DA0: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80033DA4: lw          $a0, 0x138($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X138);
    // 0x80033DA8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80033DAC: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80033DB0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80033DB4: jal         0x80014B64
    // 0x80033DB8: nop

    func_80014B64(rdram, ctx);
        goto after_84;
    // 0x80033DB8: nop

    after_84:
    // 0x80033DBC: jal         0x80007AB0
    // 0x80033DC0: nop

    func_80007AB0(rdram, ctx);
        goto after_85;
    // 0x80033DC0: nop

    after_85:
    // 0x80033DC4: b           L_800339F0
    // 0x80033DC8: nop

        goto L_800339F0;
    // 0x80033DC8: nop

L_80033DCC:
    // 0x80033DCC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_80033DD0:
    // 0x80033DD0: bne         $s7, $at, L_80033ECC
    if (ctx->r23 != ctx->r1) {
        // 0x80033DD4: lw          $a0, 0x138($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X138);
            goto L_80033ECC;
    }
    // 0x80033DD4: lw          $a0, 0x138($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X138);
    // 0x80033DD8: lw          $a0, 0xF8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF8);
    // 0x80033DDC: jal         0x80014AC4
    // 0x80033DE0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80014AC4(rdram, ctx);
        goto after_86;
    // 0x80033DE0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_86:
    // 0x80033DE4: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x80033DE8: jal         0x800191E8
    // 0x80033DEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800191E8(rdram, ctx);
        goto after_87;
    // 0x80033DEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_87:
    // 0x80033DF0: lw          $a2, 0x13C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X13C);
    // 0x80033DF4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80033DF8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80033DFC: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80033E00: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x80033E04: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x80033E08: jal         0x8002A278
    // 0x80033E0C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8002A278(rdram, ctx);
        goto after_88;
    // 0x80033E0C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_88:
    // 0x80033E10: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80033E14: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80033E18: jal         0x80014B78
    // 0x80033E1C: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    func_80014B78(rdram, ctx);
        goto after_89;
    // 0x80033E1C: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    after_89:
    // 0x80033E20: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80033E24: lw          $t8, -0x178($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X178);
    // 0x80033E28: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80033E2C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80033E30: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x80033E34: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80033E38: addiu       $a2, $a2, -0x3DD0
    ctx->r6 = ADD32(ctx->r6, -0X3DD0);
    // 0x80033E3C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80033E40: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x80033E44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80033E48: jal         0x80029898
    // 0x80033E4C: sw          $t8, -0x3DD0($at)
    MEM_W(-0X3DD0, ctx->r1) = ctx->r24;
    func_80029898(rdram, ctx);
        goto after_90;
    // 0x80033E4C: sw          $t8, -0x3DD0($at)
    MEM_W(-0X3DD0, ctx->r1) = ctx->r24;
    after_90:
    // 0x80033E50: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80033E54: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80033E58: addiu       $a0, $a0, -0x1B0
    ctx->r4 = ADD32(ctx->r4, -0X1B0);
    // 0x80033E5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80033E60: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80033E64: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80033E68: jal         0x8002A9C0
    // 0x80033E6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8002A9C0(rdram, ctx);
        goto after_91;
    // 0x80033E6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_91:
    // 0x80033E70: jal         0x8002A98C
    // 0x80033E74: nop

    func_8002A98C(rdram, ctx);
        goto after_92;
    // 0x80033E74: nop

    after_92:
    // 0x80033E78: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80033E7C: jal         0x8002A310
    // 0x80033E80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8002A310(rdram, ctx);
        goto after_93;
    // 0x80033E80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_93:
    // 0x80033E84: jal         0x8002A310
    // 0x80033E88: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8002A310(rdram, ctx);
        goto after_94;
    // 0x80033E88: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_94:
    // 0x80033E8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80033E90: beq         $s0, $at, L_80033EB0
    if (ctx->r16 == ctx->r1) {
        // 0x80033E94: nop
    
            goto L_80033EB0;
    }
    // 0x80033E94: nop

    // 0x80033E98: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x80033E9C: jal         0x800191E8
    // 0x80033EA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800191E8(rdram, ctx);
        goto after_95;
    // 0x80033EA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_95:
    // 0x80033EA4: lw          $a0, 0xF8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF8);
    // 0x80033EA8: jal         0x80014AB0
    // 0x80033EAC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80014AB0(rdram, ctx);
        goto after_96;
    // 0x80033EAC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_96:
L_80033EB0:
    // 0x80033EB0: jal         0x8000797C
    // 0x80033EB4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8000797C(rdram, ctx);
        goto after_97;
    // 0x80033EB4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_97:
    // 0x80033EB8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80033EBC: bne         $s0, $at, L_800339F0
    if (ctx->r16 != ctx->r1) {
        // 0x80033EC0: nop
    
            goto L_800339F0;
    }
    // 0x80033EC0: nop

    // 0x80033EC4: or          $s7, $s0, $zero
    ctx->r23 = ctx->r16 | 0;
    // 0x80033EC8: lw          $a0, 0x138($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X138);
L_80033ECC:
    // 0x80033ECC: jal         0x8002A310
    // 0x80033ED0: nop

    func_8002A310(rdram, ctx);
        goto after_98;
    // 0x80033ED0: nop

    after_98:
    // 0x80033ED4: addiu       $s0, $sp, 0xE0
    ctx->r16 = ADD32(ctx->r29, 0XE0);
    // 0x80033ED8: addiu       $s1, $sp, 0xEC
    ctx->r17 = ADD32(ctx->r29, 0XEC);
L_80033EDC:
    // 0x80033EDC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80033EE0: jal         0x80014BF4
    // 0x80033EE4: nop

    func_80014BF4(rdram, ctx);
        goto after_99;
    // 0x80033EE4: nop

    after_99:
    // 0x80033EE8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80033EEC: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x80033EF0: bne         $at, $zero, L_80033EDC
    if (ctx->r1 != 0) {
        // 0x80033EF4: nop
    
            goto L_80033EDC;
    }
    // 0x80033EF4: nop

    // 0x80033EF8: lw          $a0, 0xEC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XEC);
    // 0x80033EFC: jal         0x8002A310
    // 0x80033F00: nop

    func_8002A310(rdram, ctx);
        goto after_100;
    // 0x80033F00: nop

    after_100:
    // 0x80033F04: addiu       $s0, $sp, 0xF0
    ctx->r16 = ADD32(ctx->r29, 0XF0);
    // 0x80033F08: addiu       $s1, $sp, 0xFC
    ctx->r17 = ADD32(ctx->r29, 0XFC);
L_80033F0C:
    // 0x80033F0C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80033F10: jal         0x80014BF4
    // 0x80033F14: nop

    func_80014BF4(rdram, ctx);
        goto after_101;
    // 0x80033F14: nop

    after_101:
    // 0x80033F18: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80033F1C: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x80033F20: bne         $at, $zero, L_80033F0C
    if (ctx->r1 != 0) {
        // 0x80033F24: nop
    
            goto L_80033F0C;
    }
    // 0x80033F24: nop

    // 0x80033F28: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80033F2C: addiu       $s0, $sp, 0xA8
    ctx->r16 = ADD32(ctx->r29, 0XA8);
    // 0x80033F30: addiu       $s1, $sp, 0xB4
    ctx->r17 = ADD32(ctx->r29, 0XB4);
L_80033F34:
    // 0x80033F34: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80033F38: nop

    // 0x80033F3C: beq         $a0, $zero, L_80033F4C
    if (ctx->r4 == 0) {
        // 0x80033F40: nop
    
            goto L_80033F4C;
    }
    // 0x80033F40: nop

    // 0x80033F44: jal         0x80014BF4
    // 0x80033F48: nop

    func_80014BF4(rdram, ctx);
        goto after_102;
    // 0x80033F48: nop

    after_102:
L_80033F4C:
    // 0x80033F4C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80033F50: bne         $s0, $s1, L_80033F34
    if (ctx->r16 != ctx->r17) {
        // 0x80033F54: nop
    
            goto L_80033F34;
    }
    // 0x80033F54: nop

    // 0x80033F58: lw          $a0, 0xD4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD4);
    // 0x80033F5C: jal         0x800075A0
    // 0x80033F60: nop

    func_800075A0(rdram, ctx);
        goto after_103;
    // 0x80033F60: nop

    after_103:
    // 0x80033F64: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x80033F68: jal         0x8001C568
    // 0x80033F6C: nop

    func_8001C568(rdram, ctx);
        goto after_104;
    // 0x80033F6C: nop

    after_104:
    // 0x80033F70: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80033F74: lw          $a0, -0x3EF0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3EF0);
    // 0x80033F78: jal         0x80009D28
    // 0x80033F7C: nop

    func_80009D28(rdram, ctx);
        goto after_105;
    // 0x80033F7C: nop

    after_105:
    // 0x80033F80: lw          $a0, 0xB8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB8);
    // 0x80033F84: jal         0x80008FA8
    // 0x80033F88: nop

    func_80008FA8(rdram, ctx);
        goto after_106;
    // 0x80033F88: nop

    after_106:
L_80033F8C:
    // 0x80033F8C: jal         0x80002D08
    // 0x80033F90: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    func_80002D08(rdram, ctx);
        goto after_107;
    // 0x80033F90: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    after_107:
    // 0x80033F94: jal         0x8000797C
    // 0x80033F98: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8000797C(rdram, ctx);
        goto after_108;
    // 0x80033F98: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_108:
    // 0x80033F9C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80033FA0: bne         $s7, $at, L_80033FBC
    if (ctx->r23 != ctx->r1) {
        // 0x80033FA4: ori         $a0, $zero, 0xFC30
        ctx->r4 = 0 | 0XFC30;
            goto L_80033FBC;
    }
    // 0x80033FA4: ori         $a0, $zero, 0xFC30
    ctx->r4 = 0 | 0XFC30;
    // 0x80033FA8: ori         $a0, $zero, 0xFEAF
    ctx->r4 = 0 | 0XFEAF;
    // 0x80033FAC: jal         0x80007404
    // 0x80033FB0: ori         $a1, $zero, 0xFEAF
    ctx->r5 = 0 | 0XFEAF;
    func_80007404(rdram, ctx);
        goto after_109;
    // 0x80033FB0: ori         $a1, $zero, 0xFEAF
    ctx->r5 = 0 | 0XFEAF;
    after_109:
    // 0x80033FB4: b           L_80033FD0
    // 0x80033FB8: nop

        goto L_80033FD0;
    // 0x80033FB8: nop

L_80033FBC:
    // 0x80033FBC: jal         0x80007404
    // 0x80033FC0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    func_80007404(rdram, ctx);
        goto after_110;
    // 0x80033FC0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    after_110:
    // 0x80033FC4: ori         $a0, $zero, 0xF7FE
    ctx->r4 = 0 | 0XF7FE;
    // 0x80033FC8: jal         0x80007404
    // 0x80033FCC: ori         $a1, $zero, 0xF7FE
    ctx->r5 = 0 | 0XF7FE;
    func_80007404(rdram, ctx);
        goto after_111;
    // 0x80033FCC: ori         $a1, $zero, 0xF7FE
    ctx->r5 = 0 | 0XF7FE;
    after_111:
L_80033FD0:
    // 0x80033FD0: jal         0x80001190
    // 0x80033FD4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80001190(rdram, ctx);
        goto after_112;
    // 0x80033FD4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_112:
    // 0x80033FD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80033FDC: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
    // 0x80033FE0: jr          $ra
    // 0x80033FE4: or          $v0, $s7, $zero
    ctx->r2 = ctx->r23 | 0;
    return;
    // 0x80033FE4: or          $v0, $s7, $zero
    ctx->r2 = ctx->r23 | 0;
;}
RECOMP_FUNC void func_80033FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80033FE8: jr          $ra
    // 0x80033FEC: nop

    return;
    // 0x80033FEC: nop

;}
RECOMP_FUNC void func_80033FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80033FF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80033FF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80033FF8: jal         0x8000797C
    // 0x80033FFC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    func_8000797C(rdram, ctx);
        goto after_0;
    // 0x80033FFC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_0:
    // 0x80034000: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x80034004: addiu       $s0, $s0, -0x74C
    ctx->r16 = ADD32(ctx->r16, -0X74C);
    // 0x80034008: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8003400C: nop

    // 0x80034010: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80034014: bne         $t7, $zero, L_80034034
    if (ctx->r15 != 0) {
        // 0x80034018: nop
    
            goto L_80034034;
    }
    // 0x80034018: nop

    // 0x8003401C: jal         0x8005C3DC
    // 0x80034020: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005C3DC(rdram, ctx);
        goto after_1;
    // 0x80034020: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80034024: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80034028: nop

    // 0x8003402C: ori         $t9, $t8, 0x80
    ctx->r25 = ctx->r24 | 0X80;
    // 0x80034030: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
L_80034034:
    // 0x80034034: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80034038: addiu       $v0, $v0, -0x42C0
    ctx->r2 = ADD32(ctx->r2, -0X42C0);
    // 0x8003403C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80034040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034044: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x80034048: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8003404C: jr          $ra
    // 0x80034050: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80034050: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80034054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034054: jr          $ra
    // 0x80034058: nop

    return;
    // 0x80034058: nop

;}
RECOMP_FUNC void func_80034064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034064: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80034068: addiu       $v0, $v0, -0x700
    ctx->r2 = ADD32(ctx->r2, -0X700);
    // 0x8003406C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80034070: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034074: beq         $a0, $t6, L_800340F0
    if (ctx->r4 == ctx->r14) {
        // 0x80034078: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800340F0;
    }
    // 0x80034078: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003407C: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80034080: addiu       $s1, $s1, -0x4058
    ctx->r17 = ADD32(ctx->r17, -0X4058);
    // 0x80034084: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x80034088: lw          $s2, 0x4($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X4);
    // 0x8003408C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x80034090: beq         $a0, $s5, L_800340E0
    if (ctx->r4 == ctx->r21) {
        // 0x80034094: sw          $zero, 0x4($s1)
        MEM_W(0X4, ctx->r17) = 0;
            goto L_800340E0;
    }
    // 0x80034094: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x80034098: addiu       $a0, $zero, 0x907
    ctx->r4 = ADD32(0, 0X907);
    // 0x8003409C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x800340A0: jal         0x80015784
    // 0x800340A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_0;
    // 0x800340A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800340A8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800340AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800340B0: lui         $a1, 0x4260
    ctx->r5 = S32(0X4260 << 16);
    // 0x800340B4: jal         0x80014B64
    // 0x800340B8: lui         $a2, 0x41C0
    ctx->r6 = S32(0X41C0 << 16);
    func_80014B64(rdram, ctx);
        goto after_1;
    // 0x800340B8: lui         $a2, 0x41C0
    ctx->r6 = S32(0X41C0 << 16);
    after_1:
    // 0x800340BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800340C0: jal         0x80014AC4
    // 0x800340C4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_2;
    // 0x800340C4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
    // 0x800340C8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800340CC: sw          $s0, -0x4054($at)
    MEM_W(-0X4054, ctx->r1) = ctx->r16;
    // 0x800340D0: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x800340D4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x800340D8: jal         0x80015898
    // 0x800340DC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80015898(rdram, ctx);
        goto after_3;
    // 0x800340DC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
L_800340E0:
    // 0x800340E0: beq         $s2, $zero, L_800340F0
    if (ctx->r18 == 0) {
        // 0x800340E4: nop
    
            goto L_800340F0;
    }
    // 0x800340E4: nop

    // 0x800340E8: jal         0x80014BF4
    // 0x800340EC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80014BF4(rdram, ctx);
        goto after_4;
    // 0x800340EC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
L_800340F0:
    // 0x800340F0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800340F4: addiu       $v0, $v0, -0x6FC
    ctx->r2 = ADD32(ctx->r2, -0X6FC);
    // 0x800340F8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800340FC: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80034100: addiu       $s1, $s1, -0x4058
    ctx->r17 = ADD32(ctx->r17, -0X4058);
    // 0x80034104: beq         $s3, $t7, L_80034194
    if (ctx->r19 == ctx->r15) {
        // 0x80034108: addiu       $s5, $zero, -0x1
        ctx->r21 = ADD32(0, -0X1);
            goto L_80034194;
    }
    // 0x80034108: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x8003410C: lw          $s2, 0x8($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X8);
    // 0x80034110: sw          $s3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r19;
    // 0x80034114: beq         $s3, $s5, L_80034184
    if (ctx->r19 == ctx->r21) {
        // 0x80034118: sw          $zero, 0x8($s1)
        MEM_W(0X8, ctx->r17) = 0;
            goto L_80034184;
    }
    // 0x80034118: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x8003411C: addiu       $a0, $zero, 0x904
    ctx->r4 = ADD32(0, 0X904);
    // 0x80034120: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80034124: jal         0x80015784
    // 0x80034128: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_5;
    // 0x80034128: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8003412C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80034130: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80034134: lui         $a1, 0x42B0
    ctx->r5 = S32(0X42B0 << 16);
    // 0x80034138: jal         0x80014B64
    // 0x8003413C: lui         $a2, 0x41C0
    ctx->r6 = S32(0X41C0 << 16);
    func_80014B64(rdram, ctx);
        goto after_6;
    // 0x8003413C: lui         $a2, 0x41C0
    ctx->r6 = S32(0X41C0 << 16);
    after_6:
    // 0x80034140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80034144: jal         0x80014AC4
    // 0x80034148: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_7;
    // 0x80034148: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_7:
    // 0x8003414C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80034150: sw          $s0, -0x4050($at)
    MEM_W(-0X4050, ctx->r1) = ctx->r16;
    // 0x80034154: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x80034158: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8003415C: jal         0x80015898
    // 0x80034160: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80015898(rdram, ctx);
        goto after_8;
    // 0x80034160: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_8:
    // 0x80034164: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x80034168: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x8003416C: jal         0x800157C8
    // 0x80034170: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_800157C8(rdram, ctx);
        goto after_9;
    // 0x80034170: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_9:
    // 0x80034174: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x80034178: sll         $a1, $s3, 3
    ctx->r5 = S32(ctx->r19 << 3);
    // 0x8003417C: jal         0x80015950
    // 0x80034180: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_10;
    // 0x80034180: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
L_80034184:
    // 0x80034184: beq         $s2, $zero, L_80034194
    if (ctx->r18 == 0) {
        // 0x80034188: nop
    
            goto L_80034194;
    }
    // 0x80034188: nop

    // 0x8003418C: jal         0x80014BF4
    // 0x80034190: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80014BF4(rdram, ctx);
        goto after_11;
    // 0x80034190: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_11:
L_80034194:
    // 0x80034194: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80034198: addiu       $v0, $v0, -0x6F8
    ctx->r2 = ADD32(ctx->r2, -0X6F8);
    // 0x8003419C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800341A0: nop

    // 0x800341A4: beq         $s4, $t8, L_80034238
    if (ctx->r20 == ctx->r24) {
        // 0x800341A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80034238;
    }
    // 0x800341A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800341AC: lw          $s2, 0xC($s1)
    ctx->r18 = MEM_W(ctx->r17, 0XC);
    // 0x800341B0: sw          $s4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r20;
    // 0x800341B4: beq         $s4, $s5, L_80034224
    if (ctx->r20 == ctx->r21) {
        // 0x800341B8: sw          $zero, 0xC($s1)
        MEM_W(0XC, ctx->r17) = 0;
            goto L_80034224;
    }
    // 0x800341B8: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    // 0x800341BC: addiu       $a0, $zero, 0x904
    ctx->r4 = ADD32(0, 0X904);
    // 0x800341C0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x800341C4: jal         0x80015784
    // 0x800341C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_12;
    // 0x800341C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x800341CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800341D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800341D4: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    // 0x800341D8: jal         0x80014B64
    // 0x800341DC: lui         $a2, 0x41C0
    ctx->r6 = S32(0X41C0 << 16);
    func_80014B64(rdram, ctx);
        goto after_13;
    // 0x800341DC: lui         $a2, 0x41C0
    ctx->r6 = S32(0X41C0 << 16);
    after_13:
    // 0x800341E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800341E4: jal         0x80014AC4
    // 0x800341E8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_14;
    // 0x800341E8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_14:
    // 0x800341EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800341F0: sw          $s0, -0x404C($at)
    MEM_W(-0X404C, ctx->r1) = ctx->r16;
    // 0x800341F4: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x800341F8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x800341FC: jal         0x80015898
    // 0x80034200: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80015898(rdram, ctx);
        goto after_15;
    // 0x80034200: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_15:
    // 0x80034204: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x80034208: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x8003420C: jal         0x800157C8
    // 0x80034210: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_800157C8(rdram, ctx);
        goto after_16;
    // 0x80034210: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_16:
    // 0x80034214: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x80034218: sll         $a1, $s4, 3
    ctx->r5 = S32(ctx->r20 << 3);
    // 0x8003421C: jal         0x80015950
    // 0x80034220: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_17;
    // 0x80034220: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
L_80034224:
    // 0x80034224: beq         $s2, $zero, L_80034238
    if (ctx->r18 == 0) {
        // 0x80034228: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80034238;
    }
    // 0x80034228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003422C: jal         0x80014BF4
    // 0x80034230: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80014BF4(rdram, ctx);
        goto after_18;
    // 0x80034230: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_18:
    // 0x80034234: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80034238:
    // 0x80034238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003423C: jr          $ra
    // 0x80034240: nop

    return;
    // 0x80034240: nop

    // 0x80034244: jr          $ra
    // 0x80034248: nop

    return;
    // 0x80034248: nop

;}
RECOMP_FUNC void func_8003424C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003424C: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80034250: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034254: jal         0x8005C3A8
    // 0x80034258: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005C3A8(rdram, ctx);
        goto after_0;
    // 0x80034258: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8003425C: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x80034260: addiu       $s7, $s7, -0x42C0
    ctx->r23 = ADD32(ctx->r23, -0X42C0);
    // 0x80034264: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
    // 0x80034268: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8003426C: ori         $at, $at, 0x800
    ctx->r1 = ctx->r1 | 0X800;
    // 0x80034270: and         $t6, $v1, $at
    ctx->r14 = ctx->r3 & ctx->r1;
    // 0x80034274: beq         $t6, $zero, L_800342DC
    if (ctx->r14 == 0) {
        // 0x80034278: sw          $v0, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->r2;
            goto L_800342DC;
    }
    // 0x80034278: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    // 0x8003427C: sll         $t7, $v1, 14
    ctx->r15 = S32(ctx->r3 << 14);
    // 0x80034280: bltz        $t7, L_800342DC
    if (SIGNED(ctx->r15) < 0) {
        // 0x80034284: lui         $v1, 0x800B
        ctx->r3 = S32(0X800B << 16);
            goto L_800342DC;
    }
    // 0x80034284: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80034288: addiu       $v1, $v1, -0x3F34
    ctx->r3 = ADD32(ctx->r3, -0X3F34);
    // 0x8003428C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80034290: nop

    // 0x80034294: beq         $t8, $zero, L_80034684
    if (ctx->r24 == 0) {
        // 0x80034298: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80034684;
    }
    // 0x80034298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003429C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x800342A0: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x800342A4: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x800342A8: addiu       $s1, $s1, -0x4020
    ctx->r17 = ADD32(ctx->r17, -0X4020);
    // 0x800342AC: addiu       $s0, $s0, -0x4058
    ctx->r16 = ADD32(ctx->r16, -0X4058);
L_800342B0:
    // 0x800342B0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800342B4: nop

    // 0x800342B8: beq         $a0, $zero, L_800342C8
    if (ctx->r4 == 0) {
        // 0x800342BC: nop
    
            goto L_800342C8;
    }
    // 0x800342BC: nop

    // 0x800342C0: jal         0x80014AC4
    // 0x800342C4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80014AC4(rdram, ctx);
        goto after_1;
    // 0x800342C4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_1:
L_800342C8:
    // 0x800342C8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800342CC: bne         $s0, $s1, L_800342B0
    if (ctx->r16 != ctx->r17) {
        // 0x800342D0: nop
    
            goto L_800342B0;
    }
    // 0x800342D0: nop

    // 0x800342D4: b           L_80034684
    // 0x800342D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80034684;
    // 0x800342D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800342DC:
    // 0x800342DC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800342E0: addiu       $v1, $v1, -0x3F34
    ctx->r3 = ADD32(ctx->r3, -0X3F34);
    // 0x800342E4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x800342E8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800342EC: bne         $t9, $zero, L_80034328
    if (ctx->r25 != 0) {
        // 0x800342F0: lui         $s1, 0x800B
        ctx->r17 = S32(0X800B << 16);
            goto L_80034328;
    }
    // 0x800342F0: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x800342F4: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x800342F8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800342FC: addiu       $s0, $s0, -0x4058
    ctx->r16 = ADD32(ctx->r16, -0X4058);
    // 0x80034300: addiu       $s1, $s1, -0x4020
    ctx->r17 = ADD32(ctx->r17, -0X4020);
L_80034304:
    // 0x80034304: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80034308: nop

    // 0x8003430C: beq         $a0, $zero, L_8003431C
    if (ctx->r4 == 0) {
        // 0x80034310: nop
    
            goto L_8003431C;
    }
    // 0x80034310: nop

    // 0x80034314: jal         0x80014AB0
    // 0x80034318: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80014AB0(rdram, ctx);
        goto after_2;
    // 0x80034318: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_2:
L_8003431C:
    // 0x8003431C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80034320: bne         $s0, $s1, L_80034304
    if (ctx->r16 != ctx->r17) {
        // 0x80034324: nop
    
            goto L_80034304;
    }
    // 0x80034324: nop

L_80034328:
    // 0x80034328: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x8003432C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80034330: addiu       $v1, $v1, -0x704
    ctx->r3 = ADD32(ctx->r3, -0X704);
    // 0x80034334: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80034338: lw          $v0, 0x8($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X8);
    // 0x8003433C: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80034340: beq         $v0, $t8, L_800343C4
    if (ctx->r2 == ctx->r24) {
        // 0x80034344: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_800343C4;
    }
    // 0x80034344: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80034348: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8003434C: lw          $s1, -0x4058($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X4058);
    // 0x80034350: sw          $zero, -0x4058($at)
    MEM_W(-0X4058, ctx->r1) = 0;
    // 0x80034354: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80034358: beq         $v0, $at, L_800343B4
    if (ctx->r2 == ctx->r1) {
        // 0x8003435C: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_800343B4;
    }
    // 0x8003435C: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80034360: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80034364: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x80034368: lw          $a0, -0x720($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X720);
    // 0x8003436C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80034370: jal         0x80015784
    // 0x80034374: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_3;
    // 0x80034374: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80034378: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8003437C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80034380: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x80034384: jal         0x80014B64
    // 0x80034388: lui         $a2, 0x41C0
    ctx->r6 = S32(0X41C0 << 16);
    func_80014B64(rdram, ctx);
        goto after_4;
    // 0x80034388: lui         $a2, 0x41C0
    ctx->r6 = S32(0X41C0 << 16);
    after_4:
    // 0x8003438C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80034390: jal         0x80014AC4
    // 0x80034394: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_5;
    // 0x80034394: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_5:
    // 0x80034398: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003439C: sw          $s0, -0x4058($at)
    MEM_W(-0X4058, ctx->r1) = ctx->r16;
    // 0x800343A0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800343A4: lw          $a0, -0x4058($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4058);
    // 0x800343A8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x800343AC: jal         0x80015898
    // 0x800343B0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80015898(rdram, ctx);
        goto after_6;
    // 0x800343B0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_6:
L_800343B4:
    // 0x800343B4: beq         $s1, $zero, L_800343C8
    if (ctx->r17 == 0) {
        // 0x800343B8: lw          $t6, 0x9C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X9C);
            goto L_800343C8;
    }
    // 0x800343B8: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x800343BC: jal         0x80014BF4
    // 0x800343C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80014BF4(rdram, ctx);
        goto after_7;
    // 0x800343C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
L_800343C4:
    // 0x800343C4: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
L_800343C8:
    // 0x800343C8: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x800343CC: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x800343D0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x800343D4: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x800343D8: beq         $t8, $zero, L_800343E8
    if (ctx->r24 == 0) {
        // 0x800343DC: nop
    
            goto L_800343E8;
    }
    // 0x800343DC: nop

    // 0x800343E0: b           L_800343E8
    // 0x800343E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_800343E8;
    // 0x800343E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_800343E8:
    // 0x800343E8: lw          $s3, 0x0($t9)
    ctx->r19 = MEM_W(ctx->r25, 0X0);
    // 0x800343EC: lw          $s4, 0x4($t9)
    ctx->r20 = MEM_W(ctx->r25, 0X4);
    // 0x800343F0: jal         0x80034064
    // 0x800343F4: nop

    func_80034064(rdram, ctx);
        goto after_8;
    // 0x800343F4: nop

    after_8:
    // 0x800343F8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800343FC: addiu       $v0, $v0, -0x6EC
    ctx->r2 = ADD32(ctx->r2, -0X6EC);
    // 0x80034400: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80034404: lw          $s6, 0x10($s7)
    ctx->r22 = MEM_W(ctx->r23, 0X10);
    // 0x80034408: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8003440C: beq         $s6, $t6, L_80034510
    if (ctx->r22 == ctx->r14) {
        // 0x80034410: addiu       $a1, $a1, 0x5890
        ctx->r5 = ADD32(ctx->r5, 0X5890);
            goto L_80034510;
    }
    // 0x80034410: addiu       $a1, $a1, 0x5890
    ctx->r5 = ADD32(ctx->r5, 0X5890);
    // 0x80034414: addiu       $s7, $sp, 0x6C
    ctx->r23 = ADD32(ctx->r29, 0X6C);
    // 0x80034418: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x8003441C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80034420: jal         0x800768B0
    // 0x80034424: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    sprintf_recomp(rdram, ctx);
        goto after_9;
    // 0x80034424: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_9:
    // 0x80034428: lui         $at, 0x4358
    ctx->r1 = S32(0X4358 << 16);
    // 0x8003442C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80034430: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80034434: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80034438: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8003443C: addiu       $s1, $s1, -0x4058
    ctx->r17 = ADD32(ctx->r17, -0X4058);
    // 0x80034440: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80034444: addiu       $fp, $zero, 0x20
    ctx->r30 = ADD32(0, 0X20);
L_80034448:
    // 0x80034448: lw          $s5, 0x10($s1)
    ctx->r21 = MEM_W(ctx->r17, 0X10);
    // 0x8003444C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80034450: beq         $s6, $at, L_800344F0
    if (ctx->r22 == ctx->r1) {
        // 0x80034454: sw          $zero, 0x10($s1)
        MEM_W(0X10, ctx->r17) = 0;
            goto L_800344F0;
    }
    // 0x80034454: sw          $zero, 0x10($s1)
    MEM_W(0X10, ctx->r17) = 0;
    // 0x80034458: addu        $s3, $s7, $s2
    ctx->r19 = ADD32(ctx->r23, ctx->r18);
    // 0x8003445C: lbu         $t7, 0x0($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X0);
    // 0x80034460: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    // 0x80034464: beq         $fp, $t7, L_800344F0
    if (ctx->r30 == ctx->r15) {
        // 0x80034468: addiu       $a1, $zero, 0x100
        ctx->r5 = ADD32(0, 0X100);
            goto L_800344F0;
    }
    // 0x80034468: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8003446C: sll         $s4, $s2, 3
    ctx->r20 = S32(ctx->r18 << 3);
    // 0x80034470: subu        $s4, $s4, $s2
    ctx->r20 = SUB32(ctx->r20, ctx->r18);
    // 0x80034474: sll         $s4, $s4, 1
    ctx->r20 = S32(ctx->r20 << 1);
    // 0x80034478: addiu       $s4, $s4, 0xE6
    ctx->r20 = ADD32(ctx->r20, 0XE6);
    // 0x8003447C: jal         0x80015784
    // 0x80034480: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_10;
    // 0x80034480: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x80034484: mtc1        $s4, $f4
    ctx->f4.u32l = ctx->r20;
    // 0x80034488: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x8003448C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80034490: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80034494: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80034498: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8003449C: jal         0x80014B64
    // 0x800344A0: nop

    func_80014B64(rdram, ctx);
        goto after_11;
    // 0x800344A0: nop

    after_11:
    // 0x800344A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800344A8: jal         0x80014AC4
    // 0x800344AC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_12;
    // 0x800344AC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_12:
    // 0x800344B0: sw          $s0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r16;
    // 0x800344B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800344B8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x800344BC: jal         0x80015898
    // 0x800344C0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80015898(rdram, ctx);
        goto after_13;
    // 0x800344C0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_13:
    // 0x800344C4: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x800344C8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x800344CC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x800344D0: jal         0x800157C8
    // 0x800344D4: nop

    func_800157C8(rdram, ctx);
        goto after_14;
    // 0x800344D4: nop

    after_14:
    // 0x800344D8: lbu         $a1, 0x0($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X0);
    // 0x800344DC: lw          $a0, 0x10($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X10);
    // 0x800344E0: sll         $t8, $a1, 4
    ctx->r24 = S32(ctx->r5 << 4);
    // 0x800344E4: addiu       $a1, $t8, -0x300
    ctx->r5 = ADD32(ctx->r24, -0X300);
    // 0x800344E8: jal         0x80015950
    // 0x800344EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_15;
    // 0x800344EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
L_800344F0:
    // 0x800344F0: beq         $s5, $zero, L_80034500
    if (ctx->r21 == 0) {
        // 0x800344F4: nop
    
            goto L_80034500;
    }
    // 0x800344F4: nop

    // 0x800344F8: jal         0x80014BF4
    // 0x800344FC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80014BF4(rdram, ctx);
        goto after_16;
    // 0x800344FC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_16:
L_80034500:
    // 0x80034500: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80034504: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80034508: bne         $s2, $at, L_80034448
    if (ctx->r18 != ctx->r1) {
        // 0x8003450C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80034448;
    }
    // 0x8003450C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_80034510:
    // 0x80034510: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x80034514: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80034518: addiu       $v0, $v0, -0x6F0
    ctx->r2 = ADD32(ctx->r2, -0X6F0);
    // 0x8003451C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80034520: lw          $s3, 0x30($t9)
    ctx->r19 = MEM_W(ctx->r25, 0X30);
    // 0x80034524: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80034528: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8003452C: lw          $s1, 0x2C($t9)
    ctx->r17 = MEM_W(ctx->r25, 0X2C);
    // 0x80034530: bne         $s3, $t6, L_80034544
    if (ctx->r19 != ctx->r14) {
        // 0x80034534: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_80034544;
    }
    // 0x80034534: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80034538: lw          $t7, -0x6F4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X6F4);
    // 0x8003453C: nop

    // 0x80034540: beq         $s1, $t7, L_80034680
    if (ctx->r17 == ctx->r15) {
        // 0x80034544: lui         $v1, 0x800B
        ctx->r3 = S32(0X800B << 16);
            goto L_80034680;
    }
L_80034544:
    // 0x80034544: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80034548: sw          $s3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r19;
    // 0x8003454C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80034550: addiu       $v1, $v1, -0x4058
    ctx->r3 = ADD32(ctx->r3, -0X4058);
    // 0x80034554: sw          $s1, -0x6F4($at)
    MEM_W(-0X6F4, ctx->r1) = ctx->r17;
    // 0x80034558: lw          $s2, 0x24($v1)
    ctx->r18 = MEM_W(ctx->r3, 0X24);
    // 0x8003455C: beq         $s1, $zero, L_800345D0
    if (ctx->r17 == 0) {
        // 0x80034560: sw          $zero, 0x24($v1)
        MEM_W(0X24, ctx->r3) = 0;
            goto L_800345D0;
    }
    // 0x80034560: sw          $zero, 0x24($v1)
    MEM_W(0X24, ctx->r3) = 0;
    // 0x80034564: addiu       $a0, $zero, 0x905
    ctx->r4 = ADD32(0, 0X905);
    // 0x80034568: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8003456C: jal         0x80015784
    // 0x80034570: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_17;
    // 0x80034570: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
    // 0x80034574: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80034578: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003457C: lui         $a1, 0x4308
    ctx->r5 = S32(0X4308 << 16);
    // 0x80034580: jal         0x80014B64
    // 0x80034584: lui         $a2, 0x41C0
    ctx->r6 = S32(0X41C0 << 16);
    func_80014B64(rdram, ctx);
        goto after_18;
    // 0x80034584: lui         $a2, 0x41C0
    ctx->r6 = S32(0X41C0 << 16);
    after_18:
    // 0x80034588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003458C: jal         0x80014AC4
    // 0x80034590: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_19;
    // 0x80034590: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_19:
    // 0x80034594: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80034598: sw          $s0, -0x4034($at)
    MEM_W(-0X4034, ctx->r1) = ctx->r16;
    // 0x8003459C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800345A0: lw          $a0, -0x4034($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4034);
    // 0x800345A4: sll         $a1, $s1, 4
    ctx->r5 = S32(ctx->r17 << 4);
    // 0x800345A8: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x800345AC: jal         0x80015898
    // 0x800345B0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80015898(rdram, ctx);
        goto after_20;
    // 0x800345B0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_20:
    // 0x800345B4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800345B8: lw          $a0, -0x4034($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4034);
    // 0x800345BC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x800345C0: jal         0x800157C8
    // 0x800345C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_800157C8(rdram, ctx);
        goto after_21;
    // 0x800345C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_21:
    // 0x800345C8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800345CC: addiu       $v1, $v1, -0x4058
    ctx->r3 = ADD32(ctx->r3, -0X4058);
L_800345D0:
    // 0x800345D0: beq         $s2, $zero, L_800345E8
    if (ctx->r18 == 0) {
        // 0x800345D4: nop
    
            goto L_800345E8;
    }
    // 0x800345D4: nop

    // 0x800345D8: jal         0x80014BF4
    // 0x800345DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80014BF4(rdram, ctx);
        goto after_22;
    // 0x800345DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_22:
    // 0x800345E0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800345E4: addiu       $v1, $v1, -0x4058
    ctx->r3 = ADD32(ctx->r3, -0X4058);
L_800345E8:
    // 0x800345E8: lw          $s2, 0x28($v1)
    ctx->r18 = MEM_W(ctx->r3, 0X28);
    // 0x800345EC: subu        $s4, $s3, $s1
    ctx->r20 = SUB32(ctx->r19, ctx->r17);
    // 0x800345F0: beq         $s4, $zero, L_80034670
    if (ctx->r20 == 0) {
        // 0x800345F4: sw          $zero, 0x28($v1)
        MEM_W(0X28, ctx->r3) = 0;
            goto L_80034670;
    }
    // 0x800345F4: sw          $zero, 0x28($v1)
    MEM_W(0X28, ctx->r3) = 0;
    // 0x800345F8: addiu       $a0, $zero, 0x906
    ctx->r4 = ADD32(0, 0X906);
    // 0x800345FC: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80034600: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80034604: jal         0x80015784
    // 0x80034608: sll         $s3, $s1, 4
    ctx->r19 = S32(ctx->r17 << 4);
    func_80015784(rdram, ctx);
        goto after_23;
    // 0x80034608: sll         $s3, $s1, 4
    ctx->r19 = S32(ctx->r17 << 4);
    after_23:
    // 0x8003460C: addiu       $t8, $s3, 0x88
    ctx->r24 = ADD32(ctx->r19, 0X88);
    // 0x80034610: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80034614: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80034618: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8003461C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80034620: lui         $a2, 0x41C0
    ctx->r6 = S32(0X41C0 << 16);
    // 0x80034624: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80034628: jal         0x80014B64
    // 0x8003462C: nop

    func_80014B64(rdram, ctx);
        goto after_24;
    // 0x8003462C: nop

    after_24:
    // 0x80034630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80034634: jal         0x80014AC4
    // 0x80034638: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_25;
    // 0x80034638: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_25:
    // 0x8003463C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80034640: sw          $s0, -0x4030($at)
    MEM_W(-0X4030, ctx->r1) = ctx->r16;
    // 0x80034644: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80034648: lw          $a0, -0x4030($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4030);
    // 0x8003464C: sll         $a1, $s4, 4
    ctx->r5 = S32(ctx->r20 << 4);
    // 0x80034650: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80034654: jal         0x80015898
    // 0x80034658: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80015898(rdram, ctx);
        goto after_26;
    // 0x80034658: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_26:
    // 0x8003465C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80034660: lw          $a0, -0x4030($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4030);
    // 0x80034664: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80034668: jal         0x800157C8
    // 0x8003466C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_800157C8(rdram, ctx);
        goto after_27;
    // 0x8003466C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_27:
L_80034670:
    // 0x80034670: beq         $s2, $zero, L_80034684
    if (ctx->r18 == 0) {
        // 0x80034674: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80034684;
    }
    // 0x80034674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034678: jal         0x80014BF4
    // 0x8003467C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80014BF4(rdram, ctx);
        goto after_28;
    // 0x8003467C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_28:
L_80034680:
    // 0x80034680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80034684:
    // 0x80034684: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x80034688: jr          $ra
    // 0x8003468C: nop

    return;
    // 0x8003468C: nop

    // 0x80034690: jr          $ra
    // 0x80034694: nop

    return;
    // 0x80034694: nop

;}
RECOMP_FUNC void func_80034698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034698: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8003469C: addiu       $s0, $s0, -0x42C0
    ctx->r16 = ADD32(ctx->r16, -0X42C0);
    // 0x800346A0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x800346A4: lui         $at, 0xFF6F
    ctx->r1 = S32(0XFF6F << 16);
    // 0x800346A8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800346AC: ori         $at, $at, 0x98D0
    ctx->r1 = ctx->r1 | 0X98D0;
    // 0x800346B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800346B4: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x800346B8: jal         0x800406E0
    // 0x800346BC: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    func_800406E0(rdram, ctx);
        goto after_0;
    // 0x800346BC: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    after_0:
    // 0x800346C0: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x800346C4: nop

    // 0x800346C8: slti        $at, $v0, 0x8BB
    ctx->r1 = SIGNED(ctx->r2) < 0X8BB ? 1 : 0;
    // 0x800346CC: bne         $at, $zero, L_800346FC
    if (ctx->r1 != 0) {
        // 0x800346D0: slti        $at, $v0, 0x8BE
        ctx->r1 = SIGNED(ctx->r2) < 0X8BE ? 1 : 0;
            goto L_800346FC;
    }
    // 0x800346D0: slti        $at, $v0, 0x8BE
    ctx->r1 = SIGNED(ctx->r2) < 0X8BE ? 1 : 0;
    // 0x800346D4: beq         $at, $zero, L_800346FC
    if (ctx->r1 == 0) {
        // 0x800346D8: nop
    
            goto L_800346FC;
    }
    // 0x800346D8: nop

    // 0x800346DC: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x800346E0: nop

    // 0x800346E4: bne         $t8, $zero, L_800346FC
    if (ctx->r24 != 0) {
        // 0x800346E8: nop
    
            goto L_800346FC;
    }
    // 0x800346E8: nop

    // 0x800346EC: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x800346F0: nop

    // 0x800346F4: ori         $t6, $t9, 0x20
    ctx->r14 = ctx->r25 | 0X20;
    // 0x800346F8: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
L_800346FC:
    // 0x800346FC: jal         0x8002E0C4
    // 0x80034700: nop

    func_8002E0C4(rdram, ctx);
        goto after_1;
    // 0x80034700: nop

    after_1:
    // 0x80034704: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80034708: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8003470C: ori         $at, $at, 0x820
    ctx->r1 = ctx->r1 | 0X820;
    // 0x80034710: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x80034714: bne         $t7, $zero, L_80034730
    if (ctx->r15 != 0) {
        // 0x80034718: sll         $t8, $v0, 13
        ctx->r24 = S32(ctx->r2 << 13);
            goto L_80034730;
    }
    // 0x80034718: sll         $t8, $v0, 13
    ctx->r24 = S32(ctx->r2 << 13);
    // 0x8003471C: jal         0x8005A3DC
    // 0x80034720: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8005A3DC(rdram, ctx);
        goto after_2;
    // 0x80034720: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x80034724: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80034728: nop

    // 0x8003472C: sll         $t8, $v0, 13
    ctx->r24 = S32(ctx->r2 << 13);
L_80034730:
    // 0x80034730: bgez        $t8, L_800347C0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80034734: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800347C0;
    }
    // 0x80034734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034738: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8003473C: addiu       $at, $zero, 0x874
    ctx->r1 = ADD32(0, 0X874);
    // 0x80034740: beq         $v0, $at, L_80034758
    if (ctx->r2 == ctx->r1) {
        // 0x80034744: addiu       $t9, $zero, 0x2
        ctx->r25 = ADD32(0, 0X2);
            goto L_80034758;
    }
    // 0x80034744: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80034748: addiu       $at, $zero, 0x893
    ctx->r1 = ADD32(0, 0X893);
    // 0x8003474C: beq         $v0, $at, L_80034758
    if (ctx->r2 == ctx->r1) {
        // 0x80034750: addiu       $at, $zero, 0x835
        ctx->r1 = ADD32(0, 0X835);
            goto L_80034758;
    }
    // 0x80034750: addiu       $at, $zero, 0x835
    ctx->r1 = ADD32(0, 0X835);
    // 0x80034754: bne         $v0, $at, L_80034778
    if (ctx->r2 != ctx->r1) {
        // 0x80034758: addiu       $t6, $zero, 0x3
        ctx->r14 = ADD32(0, 0X3);
            goto L_80034778;
    }
L_80034758:
    // 0x80034758: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8003475C: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x80034760: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80034764: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80034768: jal         0x8005BE2C
    // 0x8003476C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8005BE2C(rdram, ctx);
        goto after_3;
    // 0x8003476C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x80034770: b           L_800347C0
    // 0x80034774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800347C0;
    // 0x80034774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80034778:
    // 0x80034778: addiu       $at, $zero, 0x892
    ctx->r1 = ADD32(0, 0X892);
    // 0x8003477C: bne         $v0, $at, L_800347A8
    if (ctx->r2 != ctx->r1) {
        // 0x80034780: addiu       $t9, $zero, 0x2
        ctx->r25 = ADD32(0, 0X2);
            goto L_800347A8;
    }
    // 0x80034780: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80034784: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80034788: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8003478C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80034790: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x80034794: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80034798: jal         0x8005BE2C
    // 0x8003479C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8005BE2C(rdram, ctx);
        goto after_4;
    // 0x8003479C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x800347A0: b           L_800347C0
    // 0x800347A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800347C0;
    // 0x800347A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800347A8:
    // 0x800347A8: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x800347AC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x800347B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800347B4: jal         0x8005BE2C
    // 0x800347B8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8005BE2C(rdram, ctx);
        goto after_5;
    // 0x800347B8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_5:
    // 0x800347BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800347C0:
    // 0x800347C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800347C4: jr          $ra
    // 0x800347C8: nop

    return;
    // 0x800347C8: nop

;}
RECOMP_FUNC void func_800347CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800347CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800347D0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800347D4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800347D8: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x800347DC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800347E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800347E4: sw          $t6, -0x3F34($at)
    MEM_W(-0X3F34, ctx->r1) = ctx->r14;
    // 0x800347E8: addiu       $v0, $v0, -0x4020
    ctx->r2 = ADD32(ctx->r2, -0X4020);
    // 0x800347EC: addiu       $s0, $s0, -0x4058
    ctx->r16 = ADD32(ctx->r16, -0X4058);
L_800347F0:
    // 0x800347F0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800347F4: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800347F8: bne         $at, $zero, L_800347F0
    if (ctx->r1 != 0) {
        // 0x800347FC: sw          $zero, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = 0;
            goto L_800347F0;
    }
    // 0x800347FC: sw          $zero, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = 0;
    // 0x80034800: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80034804: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80034808: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8003480C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80034810: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80034814: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80034818: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x8003481C: addiu       $a3, $a3, -0x700
    ctx->r7 = ADD32(ctx->r7, -0X700);
    // 0x80034820: addiu       $a2, $a2, -0x6FC
    ctx->r6 = ADD32(ctx->r6, -0X6FC);
    // 0x80034824: addiu       $a1, $a1, -0x6F8
    ctx->r5 = ADD32(ctx->r5, -0X6F8);
    // 0x80034828: addiu       $a0, $a0, -0x6F4
    ctx->r4 = ADD32(ctx->r4, -0X6F4);
    // 0x8003482C: addiu       $v1, $v1, -0x6F0
    ctx->r3 = ADD32(ctx->r3, -0X6F0);
    // 0x80034830: addiu       $v0, $v0, -0x6EC
    ctx->r2 = ADD32(ctx->r2, -0X6EC);
    // 0x80034834: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80034838: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8003483C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80034840: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80034844: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80034848: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x8003484C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80034850: jal         0x8003424C
    // 0x80034854: sw          $t7, -0x704($at)
    MEM_W(-0X704, ctx->r1) = ctx->r15;
    func_8003424C(rdram, ctx);
        goto after_0;
    // 0x80034854: sw          $t7, -0x704($at)
    MEM_W(-0X704, ctx->r1) = ctx->r15;
    after_0:
    // 0x80034858: addiu       $a0, $zero, 0x908
    ctx->r4 = ADD32(0, 0X908);
    // 0x8003485C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80034860: jal         0x80015784
    // 0x80034864: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_1;
    // 0x80034864: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80034868: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x8003486C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80034870: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80034874: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80034878: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003487C: jal         0x80014B64
    // 0x80034880: lui         $a1, 0x4290
    ctx->r5 = S32(0X4290 << 16);
    func_80014B64(rdram, ctx);
        goto after_2;
    // 0x80034880: lui         $a1, 0x4290
    ctx->r5 = S32(0X4290 << 16);
    after_2:
    // 0x80034884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80034888: jal         0x80014AC4
    // 0x8003488C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_3;
    // 0x8003488C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_3:
    // 0x80034890: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80034894: sw          $s0, -0x402C($at)
    MEM_W(-0X402C, ctx->r1) = ctx->r16;
    // 0x80034898: addiu       $a0, $zero, 0x909
    ctx->r4 = ADD32(0, 0X909);
    // 0x8003489C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x800348A0: jal         0x80015784
    // 0x800348A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_4;
    // 0x800348A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x800348A8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x800348AC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800348B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800348B4: jal         0x80014B64
    // 0x800348B8: lui         $a1, 0x42D0
    ctx->r5 = S32(0X42D0 << 16);
    func_80014B64(rdram, ctx);
        goto after_5;
    // 0x800348B8: lui         $a1, 0x42D0
    ctx->r5 = S32(0X42D0 << 16);
    after_5:
    // 0x800348BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800348C0: jal         0x80014AC4
    // 0x800348C4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_6;
    // 0x800348C4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_6:
    // 0x800348C8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800348CC: sw          $s0, -0x4028($at)
    MEM_W(-0X4028, ctx->r1) = ctx->r16;
    // 0x800348D0: addiu       $a0, $zero, 0x911
    ctx->r4 = ADD32(0, 0X911);
    // 0x800348D4: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x800348D8: jal         0x80015784
    // 0x800348DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_7;
    // 0x800348DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x800348E0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800348E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800348E8: lui         $a1, 0x4356
    ctx->r5 = S32(0X4356 << 16);
    // 0x800348EC: jal         0x80014B64
    // 0x800348F0: lui         $a2, 0x4358
    ctx->r6 = S32(0X4358 << 16);
    func_80014B64(rdram, ctx);
        goto after_8;
    // 0x800348F0: lui         $a2, 0x4358
    ctx->r6 = S32(0X4358 << 16);
    after_8:
    // 0x800348F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800348F8: jal         0x80014AC4
    // 0x800348FC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_9;
    // 0x800348FC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_9:
    // 0x80034900: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80034904: sw          $s0, -0x4024($at)
    MEM_W(-0X4024, ctx->r1) = ctx->r16;
    // 0x80034908: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003490C: lw          $v0, -0x42C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X42C0);
    // 0x80034910: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80034914: ori         $at, $at, 0x800
    ctx->r1 = ctx->r1 | 0X800;
    // 0x80034918: and         $t6, $v0, $at
    ctx->r14 = ctx->r2 & ctx->r1;
    // 0x8003491C: beq         $t6, $zero, L_80034960
    if (ctx->r14 == 0) {
        // 0x80034920: sll         $t7, $v0, 14
        ctx->r15 = S32(ctx->r2 << 14);
            goto L_80034960;
    }
    // 0x80034920: sll         $t7, $v0, 14
    ctx->r15 = S32(ctx->r2 << 14);
    // 0x80034924: bltz        $t7, L_80034964
    if (SIGNED(ctx->r15) < 0) {
        // 0x80034928: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80034964;
    }
    // 0x80034928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003492C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80034930: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80034934: addiu       $s1, $s1, -0x4020
    ctx->r17 = ADD32(ctx->r17, -0X4020);
    // 0x80034938: addiu       $s0, $s0, -0x402C
    ctx->r16 = ADD32(ctx->r16, -0X402C);
L_8003493C:
    // 0x8003493C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80034940: nop

    // 0x80034944: beq         $a0, $zero, L_80034954
    if (ctx->r4 == 0) {
        // 0x80034948: nop
    
            goto L_80034954;
    }
    // 0x80034948: nop

    // 0x8003494C: jal         0x80014AC4
    // 0x80034950: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80014AC4(rdram, ctx);
        goto after_10;
    // 0x80034950: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_10:
L_80034954:
    // 0x80034954: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80034958: bne         $s0, $s1, L_8003493C
    if (ctx->r16 != ctx->r17) {
        // 0x8003495C: nop
    
            goto L_8003493C;
    }
    // 0x8003495C: nop

L_80034960:
    // 0x80034960: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80034964:
    // 0x80034964: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80034968: jr          $ra
    // 0x8003496C: nop

    return;
    // 0x8003496C: nop

;}
RECOMP_FUNC void func_80034970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034978: jal         0x8003E3BC
    // 0x8003497C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_8003E3BC(rdram, ctx);
        goto after_0;
    // 0x8003497C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_0:
    // 0x80034980: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80034984: addiu       $s3, $s3, -0x42C0
    ctx->r19 = ADD32(ctx->r19, -0X42C0);
    // 0x80034988: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x8003498C: lui         $at, 0xFF6F
    ctx->r1 = S32(0XFF6F << 16);
    // 0x80034990: ori         $at, $at, 0x98D0
    ctx->r1 = ctx->r1 | 0X98D0;
    // 0x80034994: addiu       $t8, $zero, 0x808
    ctx->r24 = ADD32(0, 0X808);
    // 0x80034998: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8003499C: sw          $t7, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r15;
    // 0x800349A0: sw          $zero, 0x4($s3)
    MEM_W(0X4, ctx->r19) = 0;
    // 0x800349A4: sw          $t8, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r24;
    // 0x800349A8: jal         0x800310AC
    // 0x800349AC: sw          $zero, 0xC($s3)
    MEM_W(0XC, ctx->r19) = 0;
    func_800310AC(rdram, ctx);
        goto after_1;
    // 0x800349AC: sw          $zero, 0xC($s3)
    MEM_W(0XC, ctx->r19) = 0;
    after_1:
    // 0x800349B0: sb          $zero, 0x20($s3)
    MEM_B(0X20, ctx->r19) = 0;
    // 0x800349B4: jal         0x80031088
    // 0x800349B8: sw          $zero, 0x10($s3)
    MEM_W(0X10, ctx->r19) = 0;
    func_80031088(rdram, ctx);
        goto after_2;
    // 0x800349B8: sw          $zero, 0x10($s3)
    MEM_W(0X10, ctx->r19) = 0;
    after_2:
    // 0x800349BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800349C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800349C4: jr          $ra
    // 0x800349C8: nop

    return;
    // 0x800349C8: nop

;}
RECOMP_FUNC void func_800349CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800349CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800349D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800349D4: jal         0x80030FA0
    // 0x800349D8: nop

    func_80030FA0(rdram, ctx);
        goto after_0;
    // 0x800349D8: nop

    after_0:
    // 0x800349DC: jal         0x80027C40
    // 0x800349E0: nop

    func_80027C40(rdram, ctx);
        goto after_1;
    // 0x800349E0: nop

    after_1:
    // 0x800349E4: jal         0x8002B204
    // 0x800349E8: nop

    func_8002B204(rdram, ctx);
        goto after_2;
    // 0x800349E8: nop

    after_2:
    // 0x800349EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800349F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800349F4: jr          $ra
    // 0x800349F8: nop

    return;
    // 0x800349F8: nop

;}
RECOMP_FUNC void func_800349FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800349FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034A00: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80034A04: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80034A08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034A0C: addiu       $s1, $s1, -0x3F78
    ctx->r17 = ADD32(ctx->r17, -0X3F78);
    // 0x80034A10: addiu       $s0, $s0, -0x4020
    ctx->r16 = ADD32(ctx->r16, -0X4020);
L_80034A14:
    // 0x80034A14: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80034A18: nop

    // 0x80034A1C: beq         $a0, $zero, L_80034A30
    if (ctx->r4 == 0) {
        // 0x80034A20: nop
    
            goto L_80034A30;
    }
    // 0x80034A20: nop

    // 0x80034A24: jal         0x80014BF4
    // 0x80034A28: nop

    func_80014BF4(rdram, ctx);
        goto after_0;
    // 0x80034A28: nop

    after_0:
    // 0x80034A2C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_80034A30:
    // 0x80034A30: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80034A34: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x80034A38: bne         $at, $zero, L_80034A14
    if (ctx->r1 != 0) {
        // 0x80034A3C: nop
    
            goto L_80034A14;
    }
    // 0x80034A3C: nop

    // 0x80034A40: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80034A44: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80034A48: addiu       $s1, $s1, -0x3F3C
    ctx->r17 = ADD32(ctx->r17, -0X3F3C);
    // 0x80034A4C: addiu       $s0, $s0, -0x3F70
    ctx->r16 = ADD32(ctx->r16, -0X3F70);
L_80034A50:
    // 0x80034A50: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80034A54: nop

    // 0x80034A58: beq         $a0, $zero, L_80034A6C
    if (ctx->r4 == 0) {
        // 0x80034A5C: nop
    
            goto L_80034A6C;
    }
    // 0x80034A5C: nop

    // 0x80034A60: jal         0x80014BF4
    // 0x80034A64: nop

    func_80014BF4(rdram, ctx);
        goto after_1;
    // 0x80034A64: nop

    after_1:
    // 0x80034A68: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_80034A6C:
    // 0x80034A6C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80034A70: bne         $s0, $s1, L_80034A50
    if (ctx->r16 != ctx->r17) {
        // 0x80034A74: nop
    
            goto L_80034A50;
    }
    // 0x80034A74: nop

    // 0x80034A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034A7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80034A80: jr          $ra
    // 0x80034A84: nop

    return;
    // 0x80034A84: nop

;}
RECOMP_FUNC void func_80034A88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034A88: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x80034A8C: addiu       $s7, $s7, -0x4170
    ctx->r23 = ADD32(ctx->r23, -0X4170);
    // 0x80034A90: lw          $v0, 0x14($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X14);
    // 0x80034A94: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80034A98: slti        $at, $v0, 0x258
    ctx->r1 = SIGNED(ctx->r2) < 0X258 ? 1 : 0;
    // 0x80034A9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034AA0: beq         $at, $zero, L_80034B08
    if (ctx->r1 == 0) {
        // 0x80034AA4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80034B08;
    }
    // 0x80034AA4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80034AA8: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x80034AAC: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x80034AB0: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80034AB4: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80034AB8: addiu       $a1, $a1, 0x58AC
    ctx->r5 = ADD32(ctx->r5, 0X58AC);
    // 0x80034ABC: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80034AC0: bne         $v1, $zero, L_80034ACC
    if (ctx->r3 != 0) {
        // 0x80034AC4: nop
    
            goto L_80034ACC;
    }
    // 0x80034AC4: nop

    // 0x80034AC8: break       7
    do_break(2147699400);
L_80034ACC:
    // 0x80034ACC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80034AD0: bne         $v1, $at, L_80034AE4
    if (ctx->r3 != ctx->r1) {
        // 0x80034AD4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80034AE4;
    }
    // 0x80034AD4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80034AD8: bne         $v0, $at, L_80034AE4
    if (ctx->r2 != ctx->r1) {
        // 0x80034ADC: nop
    
            goto L_80034AE4;
    }
    // 0x80034ADC: nop

    // 0x80034AE0: break       6
    do_break(2147699424);
L_80034AE4:
    // 0x80034AE4: mfhi        $t6
    ctx->r14 = hi;
    // 0x80034AE8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80034AEC: addu        $a3, $a3, $t7
    ctx->r7 = ADD32(ctx->r7, ctx->r15);
    // 0x80034AF0: lw          $a3, -0x5E4($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X5E4);
    // 0x80034AF4: mflo        $a2
    ctx->r6 = lo;
    // 0x80034AF8: jal         0x800768B0
    // 0x80034AFC: nop

    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x80034AFC: nop

    after_0:
    // 0x80034B00: b           L_80034B50
    // 0x80034B04: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
        goto L_80034B50;
    // 0x80034B04: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
L_80034B08:
    // 0x80034B08: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x80034B0C: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x80034B10: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80034B14: addiu       $a1, $a1, 0x58B8
    ctx->r5 = ADD32(ctx->r5, 0X58B8);
    // 0x80034B18: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80034B1C: bne         $v1, $zero, L_80034B28
    if (ctx->r3 != 0) {
        // 0x80034B20: nop
    
            goto L_80034B28;
    }
    // 0x80034B20: nop

    // 0x80034B24: break       7
    do_break(2147699492);
L_80034B28:
    // 0x80034B28: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80034B2C: bne         $v1, $at, L_80034B40
    if (ctx->r3 != ctx->r1) {
        // 0x80034B30: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80034B40;
    }
    // 0x80034B30: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80034B34: bne         $v0, $at, L_80034B40
    if (ctx->r2 != ctx->r1) {
        // 0x80034B38: nop
    
            goto L_80034B40;
    }
    // 0x80034B38: nop

    // 0x80034B3C: break       6
    do_break(2147699516);
L_80034B40:
    // 0x80034B40: mflo        $a2
    ctx->r6 = lo;
    // 0x80034B44: jal         0x800768B0
    // 0x80034B48: nop

    sprintf_recomp(rdram, ctx);
        goto after_1;
    // 0x80034B48: nop

    after_1:
    // 0x80034B4C: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
L_80034B50:
    // 0x80034B50: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80034B54: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80034B58: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80034B5C: addiu       $t9, $t9, -0x4020
    ctx->r25 = ADD32(ctx->r25, -0X4020);
    // 0x80034B60: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x80034B64: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80034B68: addu        $s1, $t8, $t9
    ctx->r17 = ADD32(ctx->r24, ctx->r25);
    // 0x80034B6C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80034B70: addiu       $s3, $sp, 0x4C
    ctx->r19 = ADD32(ctx->r29, 0X4C);
    // 0x80034B74: addiu       $s6, $zero, 0x20
    ctx->r22 = ADD32(0, 0X20);
L_80034B78:
    // 0x80034B78: lbu         $t6, 0x0($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X0);
    // 0x80034B7C: lw          $s5, 0x0($s1)
    ctx->r21 = MEM_W(ctx->r17, 0X0);
    // 0x80034B80: beq         $s6, $t6, L_80034C14
    if (ctx->r22 == ctx->r14) {
        // 0x80034B84: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_80034C14;
    }
    // 0x80034B84: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x80034B88: sll         $s4, $s2, 3
    ctx->r20 = S32(ctx->r18 << 3);
    // 0x80034B8C: subu        $s4, $s4, $s2
    ctx->r20 = SUB32(ctx->r20, ctx->r18);
    // 0x80034B90: sll         $s4, $s4, 1
    ctx->r20 = S32(ctx->r20 << 1);
    // 0x80034B94: addiu       $s4, $s4, 0x98
    ctx->r20 = ADD32(ctx->r20, 0X98);
    // 0x80034B98: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    // 0x80034B9C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80034BA0: jal         0x80015784
    // 0x80034BA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_2;
    // 0x80034BA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80034BA8: mtc1        $s4, $f4
    ctx->f4.u32l = ctx->r20;
    // 0x80034BAC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80034BB0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80034BB4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80034BB8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80034BBC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80034BC0: jal         0x80014B64
    // 0x80034BC4: nop

    func_80014B64(rdram, ctx);
        goto after_3;
    // 0x80034BC4: nop

    after_3:
    // 0x80034BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80034BCC: jal         0x80014AC4
    // 0x80034BD0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_4;
    // 0x80034BD0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_4:
    // 0x80034BD4: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x80034BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80034BDC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x80034BE0: jal         0x80015898
    // 0x80034BE4: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80015898(rdram, ctx);
        goto after_5;
    // 0x80034BE4: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_5:
    // 0x80034BE8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80034BEC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80034BF0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80034BF4: jal         0x800157C8
    // 0x80034BF8: nop

    func_800157C8(rdram, ctx);
        goto after_6;
    // 0x80034BF8: nop

    after_6:
    // 0x80034BFC: lbu         $a1, 0x0($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X0);
    // 0x80034C00: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80034C04: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x80034C08: addiu       $a1, $t7, -0x300
    ctx->r5 = ADD32(ctx->r15, -0X300);
    // 0x80034C0C: jal         0x80015950
    // 0x80034C10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_7;
    // 0x80034C10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
L_80034C14:
    // 0x80034C14: beq         $s5, $zero, L_80034C24
    if (ctx->r21 == 0) {
        // 0x80034C18: nop
    
            goto L_80034C24;
    }
    // 0x80034C18: nop

    // 0x80034C1C: jal         0x80014BF4
    // 0x80034C20: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80014BF4(rdram, ctx);
        goto after_8;
    // 0x80034C20: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_8:
L_80034C24:
    // 0x80034C24: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80034C28: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x80034C2C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80034C30: bne         $at, $zero, L_80034B78
    if (ctx->r1 != 0) {
        // 0x80034C34: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80034B78;
    }
    // 0x80034C34: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80034C38: lw          $t8, 0x14($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X14);
    // 0x80034C3C: nop

    // 0x80034C40: slti        $at, $t8, 0x258
    ctx->r1 = SIGNED(ctx->r24) < 0X258 ? 1 : 0;
    // 0x80034C44: beq         $at, $zero, L_80034D2C
    if (ctx->r1 == 0) {
        // 0x80034C48: lui         $at, 0x41E0
        ctx->r1 = S32(0X41E0 << 16);
            goto L_80034D2C;
    }
    // 0x80034C48: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80034C4C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80034C50: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80034C54: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80034C58: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80034C5C: addiu       $s3, $sp, 0x4C
    ctx->r19 = ADD32(ctx->r29, 0X4C);
    // 0x80034C60: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
L_80034C64:
    // 0x80034C64: lbu         $t9, 0x2($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X2);
    // 0x80034C68: lw          $s5, 0x0($s1)
    ctx->r21 = MEM_W(ctx->r17, 0X0);
    // 0x80034C6C: beq         $s6, $t9, L_80034D0C
    if (ctx->r22 == ctx->r25) {
        // 0x80034C70: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_80034D0C;
    }
    // 0x80034C70: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x80034C74: sll         $s4, $s2, 3
    ctx->r20 = S32(ctx->r18 << 3);
    // 0x80034C78: addiu       $s4, $s4, 0xAC
    ctx->r20 = ADD32(ctx->r20, 0XAC);
    // 0x80034C7C: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    // 0x80034C80: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80034C84: jal         0x80015784
    // 0x80034C88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_9;
    // 0x80034C88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x80034C8C: mtc1        $s4, $f6
    ctx->f6.u32l = ctx->r20;
    // 0x80034C90: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80034C94: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80034C98: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80034C9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80034CA0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80034CA4: jal         0x80014B64
    // 0x80034CA8: nop

    func_80014B64(rdram, ctx);
        goto after_10;
    // 0x80034CA8: nop

    after_10:
    // 0x80034CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80034CB0: jal         0x80014AC4
    // 0x80034CB4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_11;
    // 0x80034CB4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_11:
    // 0x80034CB8: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x80034CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80034CC0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x80034CC4: jal         0x80015898
    // 0x80034CC8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80015898(rdram, ctx);
        goto after_12;
    // 0x80034CC8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_12:
    // 0x80034CCC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80034CD0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80034CD4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80034CD8: jal         0x800157C8
    // 0x80034CDC: nop

    func_800157C8(rdram, ctx);
        goto after_13;
    // 0x80034CDC: nop

    after_13:
    // 0x80034CE0: lbu         $a1, 0x2($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X2);
    // 0x80034CE4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80034CE8: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x80034CEC: addiu       $a1, $t6, -0x300
    ctx->r5 = ADD32(ctx->r14, -0X300);
    // 0x80034CF0: jal         0x80015950
    // 0x80034CF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_14;
    // 0x80034CF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
    // 0x80034CF8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80034CFC: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x80034D00: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80034D04: jal         0x80014B38
    // 0x80034D08: nop

    func_80014B38(rdram, ctx);
        goto after_15;
    // 0x80034D08: nop

    after_15:
L_80034D0C:
    // 0x80034D0C: beq         $s5, $zero, L_80034D1C
    if (ctx->r21 == 0) {
        // 0x80034D10: nop
    
            goto L_80034D1C;
    }
    // 0x80034D10: nop

    // 0x80034D14: jal         0x80014BF4
    // 0x80034D18: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80014BF4(rdram, ctx);
        goto after_16;
    // 0x80034D18: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_16:
L_80034D1C:
    // 0x80034D1C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80034D20: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80034D24: bne         $s2, $s7, L_80034C64
    if (ctx->r18 != ctx->r23) {
        // 0x80034D28: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80034C64;
    }
    // 0x80034D28: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_80034D2C:
    // 0x80034D2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034D30: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80034D34: jr          $ra
    // 0x80034D38: nop

    return;
    // 0x80034D38: nop

    // 0x80034D3C: jr          $ra
    // 0x80034D40: nop

    return;
    // 0x80034D40: nop

    // 0x80034D44: jr          $ra
    // 0x80034D48: nop

    return;
    // 0x80034D48: nop

    // 0x80034D4C: jr          $ra
    // 0x80034D50: nop

    return;
    // 0x80034D50: nop

;}
RECOMP_FUNC void func_80034D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034D54: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80034D58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034D5C: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80034D60: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x80034D64: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x80034D68: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x80034D6C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80034D70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034D74: addiu       $s6, $s6, -0x6D4
    ctx->r22 = ADD32(ctx->r22, -0X6D4);
    // 0x80034D78: addiu       $s7, $s7, -0x4020
    ctx->r23 = ADD32(ctx->r23, -0X4020);
    // 0x80034D7C: addiu       $fp, $fp, -0x694
    ctx->r30 = ADD32(ctx->r30, -0X694);
    // 0x80034D80: addiu       $s3, $s3, -0x4298
    ctx->r19 = ADD32(ctx->r19, -0X4298);
    // 0x80034D84: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80034D88: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80034D8C:
    // 0x80034D8C: lw          $t6, 0x4($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X4);
    // 0x80034D90: addu        $v1, $s6, $s4
    ctx->r3 = ADD32(ctx->r22, ctx->r20);
    // 0x80034D94: beq         $t6, $zero, L_80034E90
    if (ctx->r14 == 0) {
        // 0x80034D98: nop
    
            goto L_80034E90;
    }
    // 0x80034D98: nop

    // 0x80034D9C: lw          $a3, 0xC8($s3)
    ctx->r7 = MEM_W(ctx->r19, 0XC8);
    // 0x80034DA0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80034DA4: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x80034DA8: beq         $t7, $a3, L_80034E90
    if (ctx->r15 == ctx->r7) {
        // 0x80034DAC: sll         $t9, $s2, 3
        ctx->r25 = S32(ctx->r18 << 3);
            goto L_80034E90;
    }
    // 0x80034DAC: sll         $t9, $s2, 3
    ctx->r25 = S32(ctx->r18 << 3);
    // 0x80034DB0: addu        $v0, $fp, $t9
    ctx->r2 = ADD32(ctx->r30, ctx->r25);
    // 0x80034DB4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80034DB8: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80034DBC: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x80034DC0: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x80034DC4: addu        $s1, $s7, $t8
    ctx->r17 = ADD32(ctx->r23, ctx->r24);
    // 0x80034DC8: cvt.s.w     $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80034DCC: lw          $s5, 0x70($s1)
    ctx->r21 = MEM_W(ctx->r17, 0X70);
    // 0x80034DD0: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x80034DD4: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80034DD8: sw          $zero, 0x70($s1)
    MEM_W(0X70, ctx->r17) = 0;
    // 0x80034DDC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80034DE0: addu        $a0, $a0, $s4
    ctx->r4 = ADD32(ctx->r4, ctx->r20);
    // 0x80034DE4: lw          $a0, -0x5F4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5F4);
    // 0x80034DE8: addiu       $s1, $s1, 0x70
    ctx->r17 = ADD32(ctx->r17, 0X70);
    // 0x80034DEC: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80034DF0: jal         0x80015784
    // 0x80034DF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_0;
    // 0x80034DF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80034DF8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80034DFC: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80034E00: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80034E04: jal         0x80014B64
    // 0x80034E08: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_1;
    // 0x80034E08: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80034E0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80034E10: jal         0x80014AC4
    // 0x80034E14: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_2;
    // 0x80034E14: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
    // 0x80034E18: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x80034E1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80034E20: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80034E24: jal         0x80015898
    // 0x80034E28: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80015898(rdram, ctx);
        goto after_3;
    // 0x80034E28: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x80034E2C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80034E30: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x80034E34: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80034E38: jal         0x800157C8
    // 0x80034E3C: nop

    func_800157C8(rdram, ctx);
        goto after_4;
    // 0x80034E3C: nop

    after_4:
    // 0x80034E40: lw          $t8, 0xC8($s3)
    ctx->r24 = MEM_W(ctx->r19, 0XC8);
    // 0x80034E44: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80034E48: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80034E4C: beq         $t9, $zero, L_80034E74
    if (ctx->r25 == 0) {
        // 0x80034E50: nop
    
            goto L_80034E74;
    }
    // 0x80034E50: nop

    // 0x80034E54: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80034E58: jal         0x80015950
    // 0x80034E5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_5;
    // 0x80034E5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80034E60: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80034E64: jal         0x80014A7C
    // 0x80034E68: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    func_80014A7C(rdram, ctx);
        goto after_6;
    // 0x80034E68: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_6:
    // 0x80034E6C: b           L_80034E80
    // 0x80034E70: nop

        goto L_80034E80;
    // 0x80034E70: nop

L_80034E74:
    // 0x80034E74: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80034E78: jal         0x80014A7C
    // 0x80034E7C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_80014A7C(rdram, ctx);
        goto after_7;
    // 0x80034E7C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_7:
L_80034E80:
    // 0x80034E80: beq         $s5, $zero, L_80034E90
    if (ctx->r21 == 0) {
        // 0x80034E84: nop
    
            goto L_80034E90;
    }
    // 0x80034E84: nop

    // 0x80034E88: jal         0x80014BF4
    // 0x80034E8C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80014BF4(rdram, ctx);
        goto after_8;
    // 0x80034E8C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_8:
L_80034E90:
    // 0x80034E90: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80034E94: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80034E98: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x80034E9C: bne         $s2, $at, L_80034D8C
    if (ctx->r18 != ctx->r1) {
        // 0x80034EA0: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_80034D8C;
    }
    // 0x80034EA0: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80034EA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034EA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80034EAC: jr          $ra
    // 0x80034EB0: nop

    return;
    // 0x80034EB0: nop

;}
RECOMP_FUNC void func_80034EB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034EB4: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x80034EB8: addiu       $s4, $s4, -0x4020
    ctx->r20 = ADD32(ctx->r20, -0X4020);
    // 0x80034EBC: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x80034EC0: addu        $v1, $s4, $v0
    ctx->r3 = ADD32(ctx->r20, ctx->r2);
    // 0x80034EC4: lw          $s2, 0x80($v1)
    ctx->r18 = MEM_W(ctx->r3, 0X80);
    // 0x80034EC8: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80034ECC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80034ED0: sw          $zero, 0x80($v1)
    MEM_W(0X80, ctx->r3) = 0;
    // 0x80034ED4: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80034ED8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034EDC: lw          $a2, -0x41E0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X41E0);
    // 0x80034EE0: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80034EE4: addiu       $s3, $s0, 0x20
    ctx->r19 = ADD32(ctx->r16, 0X20);
    // 0x80034EE8: addiu       $a1, $a1, 0x589C
    ctx->r5 = ADD32(ctx->r5, 0X589C);
    // 0x80034EEC: jal         0x800768B0
    // 0x80034EF0: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x80034EF0: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_0:
    // 0x80034EF4: lbu         $t6, 0x3C($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X3C);
    // 0x80034EF8: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x80034EFC: beq         $t6, $at, L_80034FBC
    if (ctx->r14 == ctx->r1) {
        // 0x80034F00: sll         $t7, $s0, 3
        ctx->r15 = S32(ctx->r16 << 3);
            goto L_80034FBC;
    }
    // 0x80034F00: sll         $t7, $s0, 3
    ctx->r15 = S32(ctx->r16 << 3);
    // 0x80034F04: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80034F08: addiu       $t8, $t8, -0x694
    ctx->r24 = ADD32(ctx->r24, -0X694);
    // 0x80034F0C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80034F10: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80034F14: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80034F18: addiu       $t6, $t9, 0x10
    ctx->r14 = ADD32(ctx->r25, 0X10);
    // 0x80034F1C: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x80034F20: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x80034F24: cvt.s.w     $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80034F28: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    // 0x80034F2C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80034F30: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80034F34: jal         0x80015784
    // 0x80034F38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_1;
    // 0x80034F38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80034F3C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80034F40: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80034F44: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80034F48: jal         0x80014B64
    // 0x80034F4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_2;
    // 0x80034F4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80034F50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80034F54: jal         0x80014AC4
    // 0x80034F58: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_3;
    // 0x80034F58: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_3:
    // 0x80034F5C: sll         $t8, $s3, 2
    ctx->r24 = S32(ctx->r19 << 2);
    // 0x80034F60: addu        $s1, $s4, $t8
    ctx->r17 = ADD32(ctx->r20, ctx->r24);
    // 0x80034F64: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x80034F68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80034F6C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x80034F70: jal         0x80015898
    // 0x80034F74: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80015898(rdram, ctx);
        goto after_4;
    // 0x80034F74: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_4:
    // 0x80034F78: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80034F7C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80034F80: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80034F84: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80034F88: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80034F8C: jal         0x800157C8
    // 0x80034F90: nop

    func_800157C8(rdram, ctx);
        goto after_5;
    // 0x80034F90: nop

    after_5:
    // 0x80034F94: lbu         $a1, 0x3C($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X3C);
    // 0x80034F98: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80034F9C: sll         $t9, $a1, 4
    ctx->r25 = S32(ctx->r5 << 4);
    // 0x80034FA0: addiu       $a1, $t9, -0x300
    ctx->r5 = ADD32(ctx->r25, -0X300);
    // 0x80034FA4: jal         0x80015950
    // 0x80034FA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_6;
    // 0x80034FA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80034FAC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80034FB0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80034FB4: jal         0x80015898
    // 0x80034FB8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80015898(rdram, ctx);
        goto after_7;
    // 0x80034FB8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
L_80034FBC:
    // 0x80034FBC: beq         $s2, $zero, L_80034FD0
    if (ctx->r18 == 0) {
        // 0x80034FC0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80034FD0;
    }
    // 0x80034FC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034FC4: jal         0x80014BF4
    // 0x80034FC8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80014BF4(rdram, ctx);
        goto after_8;
    // 0x80034FC8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_8:
    // 0x80034FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80034FD0:
    // 0x80034FD0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80034FD4: jr          $ra
    // 0x80034FD8: nop

    return;
    // 0x80034FD8: nop

;}
RECOMP_FUNC void func_80034FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034FDC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80034FE0: lw          $s0, 0x6C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X6C);
    // 0x80034FE4: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80034FE8: lw          $t7, -0x4298($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4298);
    // 0x80034FEC: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x80034FF0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80034FF4: addu        $t6, $t6, $s0
    ctx->r14 = ADD32(ctx->r14, ctx->r16);
    // 0x80034FF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034FFC: bne         $t7, $at, L_80035020
    if (ctx->r15 != ctx->r1) {
        // 0x80035000: addiu       $s0, $t6, 0x8
        ctx->r16 = ADD32(ctx->r14, 0X8);
            goto L_80035020;
    }
    // 0x80035000: addiu       $s0, $t6, 0x8
    ctx->r16 = ADD32(ctx->r14, 0X8);
    // 0x80035004: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80035008: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x8003500C: addiu       $a1, $a1, 0x58D4
    ctx->r5 = ADD32(ctx->r5, 0X58D4);
    // 0x80035010: jal         0x800768B0
    // 0x80035014: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x80035014: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    after_0:
    // 0x80035018: b           L_80035038
    // 0x8003501C: addiu       $s5, $zero, 0x5
    ctx->r21 = ADD32(0, 0X5);
        goto L_80035038;
    // 0x8003501C: addiu       $s5, $zero, 0x5
    ctx->r21 = ADD32(0, 0X5);
L_80035020:
    // 0x80035020: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80035024: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x80035028: addiu       $a1, $a1, 0x58DC
    ctx->r5 = ADD32(ctx->r5, 0X58DC);
    // 0x8003502C: jal         0x800768B0
    // 0x80035030: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    sprintf_recomp(rdram, ctx);
        goto after_1;
    // 0x80035030: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    after_1:
    // 0x80035034: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
L_80035038:
    // 0x80035038: blez        $s5, L_800351C4
    if (SIGNED(ctx->r21) <= 0) {
        // 0x8003503C: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_800351C4;
    }
    // 0x8003503C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80035040: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80035044: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80035048: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8003504C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80035050: addiu       $t9, $t9, -0x4020
    ctx->r25 = ADD32(ctx->r25, -0X4020);
    // 0x80035054: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x80035058: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x8003505C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80035060: addiu       $fp, $fp, -0x6B4
    ctx->r30 = ADD32(ctx->r30, -0X6B4);
    // 0x80035064: addu        $s1, $t8, $t9
    ctx->r17 = ADD32(ctx->r24, ctx->r25);
    // 0x80035068: addiu       $s7, $zero, 0x20
    ctx->r23 = ADD32(0, 0X20);
    // 0x8003506C: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
L_80035070:
    // 0x80035070: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x80035074: lw          $s4, 0x0($s1)
    ctx->r20 = MEM_W(ctx->r17, 0X0);
    // 0x80035078: beq         $t6, $s6, L_800351A8
    if (ctx->r14 == ctx->r22) {
        // 0x8003507C: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_800351A8;
    }
    // 0x8003507C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x80035080: addiu       $t7, $sp, 0x5C
    ctx->r15 = ADD32(ctx->r29, 0X5C);
    // 0x80035084: addu        $s3, $s2, $t7
    ctx->r19 = ADD32(ctx->r18, ctx->r15);
    // 0x80035088: lbu         $t8, 0x0($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X0);
    // 0x8003508C: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x80035090: beq         $s7, $t8, L_800351A8
    if (ctx->r23 == ctx->r24) {
        // 0x80035094: sll         $t9, $v1, 3
        ctx->r25 = S32(ctx->r3 << 3);
            goto L_800351A8;
    }
    // 0x80035094: sll         $t9, $v1, 3
    ctx->r25 = S32(ctx->r3 << 3);
    // 0x80035098: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8003509C: lw          $t6, -0x4298($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4298);
    // 0x800350A0: sll         $a3, $s2, 3
    ctx->r7 = S32(ctx->r18 << 3);
    // 0x800350A4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800350A8: subu        $a3, $a3, $s2
    ctx->r7 = SUB32(ctx->r7, ctx->r18);
    // 0x800350AC: bne         $t6, $at, L_8003510C
    if (ctx->r14 != ctx->r1) {
        // 0x800350B0: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_8003510C;
    }
    // 0x800350B0: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x800350B4: addu        $v0, $fp, $t9
    ctx->r2 = ADD32(ctx->r30, ctx->r25);
    // 0x800350B8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800350BC: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x800350C0: addu        $t8, $t7, $a3
    ctx->r24 = ADD32(ctx->r15, ctx->r7);
    // 0x800350C4: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x800350C8: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x800350CC: cvt.s.w     $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800350D0: addiu       $a0, $zero, 0x904
    ctx->r4 = ADD32(0, 0X904);
    // 0x800350D4: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x800350D8: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800350DC: jal         0x80015784
    // 0x800350E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_2;
    // 0x800350E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800350E4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x800350E8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x800350EC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800350F0: jal         0x80014B64
    // 0x800350F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_3;
    // 0x800350F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x800350F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800350FC: jal         0x80014AC4
    // 0x80035100: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_4;
    // 0x80035100: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_4:
    // 0x80035104: b           L_8003516C
    // 0x80035108: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
        goto L_8003516C;
    // 0x80035108: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
L_8003510C:
    // 0x8003510C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80035110: addiu       $t6, $t6, -0x654
    ctx->r14 = ADD32(ctx->r14, -0X654);
    // 0x80035114: addu        $v0, $v1, $t6
    ctx->r2 = ADD32(ctx->r3, ctx->r14);
    // 0x80035118: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8003511C: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x80035120: addu        $t8, $t7, $a3
    ctx->r24 = ADD32(ctx->r15, ctx->r7);
    // 0x80035124: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x80035128: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x8003512C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80035130: cvt.s.w     $f22, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    ctx->f22.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80035134: addiu       $a0, $zero, 0x904
    ctx->r4 = ADD32(0, 0X904);
    // 0x80035138: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8003513C: cvt.s.w     $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    ctx->f20.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80035140: jal         0x80015784
    // 0x80035144: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_5;
    // 0x80035144: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80035148: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8003514C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80035150: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80035154: jal         0x80014B64
    // 0x80035158: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_6;
    // 0x80035158: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x8003515C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80035160: jal         0x80014AC4
    // 0x80035164: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_7;
    // 0x80035164: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_7:
    // 0x80035168: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
L_8003516C:
    // 0x8003516C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80035170: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80035174: jal         0x80015898
    // 0x80035178: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80015898(rdram, ctx);
        goto after_8;
    // 0x80035178: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_8:
    // 0x8003517C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80035180: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x80035184: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x80035188: jal         0x800157C8
    // 0x8003518C: nop

    func_800157C8(rdram, ctx);
        goto after_9;
    // 0x8003518C: nop

    after_9:
    // 0x80035190: lbu         $a1, 0x0($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X0);
    // 0x80035194: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80035198: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x8003519C: addiu       $a1, $t7, -0x180
    ctx->r5 = ADD32(ctx->r15, -0X180);
    // 0x800351A0: jal         0x80015950
    // 0x800351A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_10;
    // 0x800351A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
L_800351A8:
    // 0x800351A8: beq         $s4, $zero, L_800351B8
    if (ctx->r20 == 0) {
        // 0x800351AC: nop
    
            goto L_800351B8;
    }
    // 0x800351AC: nop

    // 0x800351B0: jal         0x80014BF4
    // 0x800351B4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_80014BF4(rdram, ctx);
        goto after_11;
    // 0x800351B4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_11:
L_800351B8:
    // 0x800351B8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800351BC: bne         $s2, $s5, L_80035070
    if (ctx->r18 != ctx->r21) {
        // 0x800351C0: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80035070;
    }
    // 0x800351C0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_800351C4:
    // 0x800351C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800351C8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x800351CC: jr          $ra
    // 0x800351D0: nop

    return;
    // 0x800351D0: nop

;}
RECOMP_FUNC void func_800351D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800351D4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800351D8: lw          $t6, -0x6E8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X6E8);
    // 0x800351DC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800351E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800351E4: bgez        $t6, L_80035218
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800351E8: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_80035218;
    }
    // 0x800351E8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x800351EC: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800351F0: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x800351F4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800351F8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800351FC: lw          $t9, -0x41F4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X41F4);
    // 0x80035200: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80035204: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x80035208: jal         0x80034FDC
    // 0x8003520C: sw          $t9, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r25;
    func_80034FDC(rdram, ctx);
        goto after_0;
    // 0x8003520C: sw          $t9, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r25;
    after_0:
    // 0x80035210: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80035214: nop

L_80035218:
    // 0x80035218: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x8003521C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80035220: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80035224: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80035228: addiu       $a3, $a3, -0x4170
    ctx->r7 = ADD32(ctx->r7, -0X4170);
    // 0x8003522C: addiu       $t8, $t8, -0x4298
    ctx->r24 = ADD32(ctx->r24, -0X4298);
    // 0x80035230: addu        $a1, $t6, $t8
    ctx->r5 = ADD32(ctx->r14, ctx->r24);
    // 0x80035234: addu        $a0, $a3, $t6
    ctx->r4 = ADD32(ctx->r7, ctx->r14);
    // 0x80035238: lw          $t9, 0x38($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X38);
    // 0x8003523C: lw          $v1, 0xA4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XA4);
    // 0x80035240: nop

    // 0x80035244: beq         $t9, $v1, L_80035254
    if (ctx->r25 == ctx->r3) {
        // 0x80035248: nop
    
            goto L_80035254;
    }
    // 0x80035248: nop

    // 0x8003524C: b           L_800352D0
    // 0x80035250: sw          $v1, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r3;
        goto L_800352D0;
    // 0x80035250: sw          $v1, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r3;
L_80035254:
    // 0x80035254: lw          $v0, 0x48($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X48);
    // 0x80035258: nop

    // 0x8003525C: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80035260: beq         $at, $zero, L_80035298
    if (ctx->r1 == 0) {
        // 0x80035264: addiu       $t7, $v0, 0x1
        ctx->r15 = ADD32(ctx->r2, 0X1);
            goto L_80035298;
    }
    // 0x80035264: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x80035268: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8003526C: sw          $t7, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r15;
    // 0x80035270: sw          $t7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r15;
    // 0x80035274: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80035278: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8003527C: jal         0x80034FDC
    // 0x80035280: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    func_80034FDC(rdram, ctx);
        goto after_1;
    // 0x80035280: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    after_1:
    // 0x80035284: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80035288: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8003528C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80035290: b           L_800352D0
    // 0x80035294: addiu       $a3, $a3, -0x4170
    ctx->r7 = ADD32(ctx->r7, -0X4170);
        goto L_800352D0;
    // 0x80035294: addiu       $a3, $a3, -0x4170
    ctx->r7 = ADD32(ctx->r7, -0X4170);
L_80035298:
    // 0x80035298: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003529C: beq         $at, $zero, L_800352D0
    if (ctx->r1 == 0) {
        // 0x800352A0: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_800352D0;
    }
    // 0x800352A0: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x800352A4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800352A8: sw          $t9, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r25;
    // 0x800352AC: sw          $t9, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r25;
    // 0x800352B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800352B4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x800352B8: jal         0x80034FDC
    // 0x800352BC: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    func_80034FDC(rdram, ctx);
        goto after_2;
    // 0x800352BC: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    after_2:
    // 0x800352C0: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x800352C4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800352C8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x800352CC: addiu       $a3, $a3, -0x4170
    ctx->r7 = ADD32(ctx->r7, -0X4170);
L_800352D0:
    // 0x800352D0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800352D4: addiu       $s3, $zero, 0x5
    ctx->r19 = ADD32(0, 0X5);
    // 0x800352D8: multu       $t8, $s3
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800352DC: lw          $v0, 0xAC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XAC);
    // 0x800352E0: lw          $a0, 0xA8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XA8);
    // 0x800352E4: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x800352E8: addiu       $t7, $t7, -0x4020
    ctx->r15 = ADD32(ctx->r15, -0X4020);
    // 0x800352EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800352F0: mflo        $a2
    ctx->r6 = lo;
    // 0x800352F4: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x800352F8: beq         $v0, $a0, L_80035330
    if (ctx->r2 == ctx->r4) {
        // 0x800352FC: sll         $t9, $a2, 2
        ctx->r25 = S32(ctx->r6 << 2);
            goto L_80035330;
    }
    // 0x800352FC: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x80035300: lw          $v1, 0xA4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XA4);
    // 0x80035304: lui         $s2, 0xFFFF
    ctx->r18 = S32(0XFFFF << 16);
    // 0x80035308: bne         $a0, $v1, L_8003531C
    if (ctx->r4 != ctx->r3) {
        // 0x8003530C: ori         $s2, $s2, 0x44FF
        ctx->r18 = ctx->r18 | 0X44FF;
            goto L_8003531C;
    }
    // 0x8003530C: ori         $s2, $s2, 0x44FF
    ctx->r18 = ctx->r18 | 0X44FF;
    // 0x80035310: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x80035314: b           L_80035330
    // 0x80035318: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
        goto L_80035330;
    // 0x80035318: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
L_8003531C:
    // 0x8003531C: bne         $v0, $v1, L_80035330
    if (ctx->r2 != ctx->r3) {
        // 0x80035320: lui         $s2, 0xFF44
        ctx->r18 = S32(0XFF44 << 16);
            goto L_80035330;
    }
    // 0x80035320: lui         $s2, 0xFF44
    ctx->r18 = S32(0XFF44 << 16);
    // 0x80035324: ori         $s2, $s2, 0x44FF
    ctx->r18 = ctx->r18 | 0X44FF;
    // 0x80035328: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8003532C: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_80035330:
    // 0x80035330: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80035334: addu        $s1, $t9, $t7
    ctx->r17 = ADD32(ctx->r25, ctx->r15);
L_80035338:
    // 0x80035338: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8003533C: nop

    // 0x80035340: beq         $a0, $zero, L_80035368
    if (ctx->r4 == 0) {
        // 0x80035344: nop
    
            goto L_80035368;
    }
    // 0x80035344: nop

    // 0x80035348: beq         $s4, $zero, L_80035360
    if (ctx->r20 == 0) {
        // 0x8003534C: nop
    
            goto L_80035360;
    }
    // 0x8003534C: nop

    // 0x80035350: jal         0x80014A60
    // 0x80035354: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80014A60(rdram, ctx);
        goto after_3;
    // 0x80035354: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_3:
    // 0x80035358: b           L_8003536C
    // 0x8003535C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8003536C;
    // 0x8003535C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80035360:
    // 0x80035360: jal         0x80014A60
    // 0x80035364: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_80014A60(rdram, ctx);
        goto after_4;
    // 0x80035364: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_4:
L_80035368:
    // 0x80035368: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8003536C:
    // 0x8003536C: bne         $s0, $s3, L_80035338
    if (ctx->r16 != ctx->r19) {
        // 0x80035370: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80035338;
    }
    // 0x80035370: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80035374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035378: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8003537C: jr          $ra
    // 0x80035380: nop

    return;
    // 0x80035380: nop

    // 0x80035384: jr          $ra
    // 0x80035388: nop

    return;
    // 0x80035388: nop

    // 0x8003538C: jr          $ra
    // 0x80035390: nop

    return;
    // 0x80035390: nop

    // 0x80035394: jr          $ra
    // 0x80035398: nop

    return;
    // 0x80035398: nop

    // 0x8003539C: jr          $ra
    // 0x800353A0: nop

    return;
    // 0x800353A0: nop

;}
RECOMP_FUNC void func_800353A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800353A4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800353A8: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800353AC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800353B0: addiu       $t6, $t6, -0x4298
    ctx->r14 = ADD32(ctx->r14, -0X4298);
    // 0x800353B4: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x800353B8: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x800353BC: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x800353C0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x800353C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800353C8: addiu       $s6, $s6, -0x3EE8
    ctx->r22 = ADD32(ctx->r22, -0X3EE8);
    // 0x800353CC: addiu       $s7, $s7, -0x6D4
    ctx->r23 = ADD32(ctx->r23, -0X6D4);
    // 0x800353D0: addiu       $fp, $fp, -0x4020
    ctx->r30 = ADD32(ctx->r30, -0X4020);
    // 0x800353D4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800353D8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_800353DC:
    // 0x800353DC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800353E0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800353E4: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x800353E8: addu        $t6, $s7, $t9
    ctx->r14 = ADD32(ctx->r23, ctx->r25);
    // 0x800353EC: beq         $t8, $zero, L_800355CC
    if (ctx->r24 == 0) {
        // 0x800353F0: nop
    
            goto L_800355CC;
    }
    // 0x800353F0: nop

    // 0x800353F4: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x800353F8: lw          $t9, 0xC8($t7)
    ctx->r25 = MEM_W(ctx->r15, 0XC8);
    // 0x800353FC: nop

    // 0x80035400: beq         $t8, $t9, L_800355D0
    if (ctx->r24 == ctx->r25) {
        // 0x80035404: lw          $t6, 0x20($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X20);
            goto L_800355D0;
    }
    // 0x80035404: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80035408: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x8003540C: sw          $zero, 0x4($s6)
    MEM_W(0X4, ctx->r22) = 0;
    // 0x80035410: sw          $zero, 0x0($s6)
    MEM_W(0X0, ctx->r22) = 0;
    // 0x80035414: addiu       $s3, $s3, -0x4298
    ctx->r19 = ADD32(ctx->r19, -0X4298);
    // 0x80035418: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8003541C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80035420:
    // 0x80035420: lw          $t7, 0x4($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X4);
    // 0x80035424: addu        $t9, $s7, $s4
    ctx->r25 = ADD32(ctx->r23, ctx->r20);
    // 0x80035428: beq         $t7, $zero, L_800355B8
    if (ctx->r15 == 0) {
        // 0x8003542C: addu        $v0, $fp, $s4
        ctx->r2 = ADD32(ctx->r30, ctx->r20);
            goto L_800355B8;
    }
    // 0x8003542C: addu        $v0, $fp, $s4
    ctx->r2 = ADD32(ctx->r30, ctx->r20);
    // 0x80035430: lw          $t8, 0xC8($s3)
    ctx->r24 = MEM_W(ctx->r19, 0XC8);
    // 0x80035434: sll         $t6, $s2, 2
    ctx->r14 = S32(ctx->r18 << 2);
    // 0x80035438: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8003543C: lw          $v1, 0x94($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X94);
    // 0x80035440: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80035444: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80035448: lw          $s5, 0x70($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X70);
    // 0x8003544C: addiu       $t9, $t9, -0x5F4
    ctx->r25 = ADD32(ctx->r25, -0X5F4);
    // 0x80035450: addiu       $t8, $t8, -0x694
    ctx->r24 = ADD32(ctx->r24, -0X694);
    // 0x80035454: addu        $s1, $fp, $t6
    ctx->r17 = ADD32(ctx->r30, ctx->r14);
    // 0x80035458: sll         $t7, $s2, 3
    ctx->r15 = S32(ctx->r18 << 3);
    // 0x8003545C: sw          $zero, 0x70($v0)
    MEM_W(0X70, ctx->r2) = 0;
    // 0x80035460: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    // 0x80035464: addiu       $s1, $s1, 0x70
    ctx->r17 = ADD32(ctx->r17, 0X70);
    // 0x80035468: beq         $v1, $zero, L_800354D4
    if (ctx->r3 == 0) {
        // 0x8003546C: addu        $t0, $s4, $t9
        ctx->r8 = ADD32(ctx->r20, ctx->r25);
            goto L_800354D4;
    }
    // 0x8003546C: addu        $t0, $s4, $t9
    ctx->r8 = ADD32(ctx->r20, ctx->r25);
    // 0x80035470: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x80035474: addu        $t7, $s6, $t6
    ctx->r15 = ADD32(ctx->r22, ctx->r14);
    // 0x80035478: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8003547C: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x80035480: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x80035484: lw          $t8, 0x4($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X4);
    // 0x80035488: subu        $t7, $t6, $t9
    ctx->r15 = SUB32(ctx->r14, ctx->r25);
    // 0x8003548C: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80035490: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x80035494: cvt.s.w     $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80035498: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x8003549C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x800354A0: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800354A4: jal         0x80015784
    // 0x800354A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_0;
    // 0x800354A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800354AC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x800354B0: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x800354B4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800354B8: jal         0x80014B64
    // 0x800354BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_1;
    // 0x800354BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800354C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800354C4: jal         0x80014AC4
    // 0x800354C8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_2;
    // 0x800354C8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
    // 0x800354CC: b           L_80035530
    // 0x800354D0: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
        goto L_80035530;
    // 0x800354D0: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
L_800354D4:
    // 0x800354D4: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x800354D8: addu        $t9, $s6, $t6
    ctx->r25 = ADD32(ctx->r22, ctx->r14);
    // 0x800354DC: lw          $t7, 0x0($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X0);
    // 0x800354E0: lw          $t9, 0x4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4);
    // 0x800354E4: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x800354E8: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x800354EC: addiu       $t6, $t8, 0x40
    ctx->r14 = ADD32(ctx->r24, 0X40);
    // 0x800354F0: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x800354F4: cvt.s.w     $f22, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    ctx->f22.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800354F8: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x800354FC: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80035500: cvt.s.w     $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    ctx->f20.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80035504: jal         0x80015784
    // 0x80035508: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_3;
    // 0x80035508: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8003550C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80035510: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80035514: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80035518: jal         0x80014B64
    // 0x8003551C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_4;
    // 0x8003551C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x80035520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80035524: jal         0x80014AC4
    // 0x80035528: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_5;
    // 0x80035528: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_5:
    // 0x8003552C: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
L_80035530:
    // 0x80035530: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80035534: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80035538: jal         0x80015898
    // 0x8003553C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80015898(rdram, ctx);
        goto after_6;
    // 0x8003553C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x80035540: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80035544: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x80035548: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x8003554C: jal         0x800157C8
    // 0x80035550: nop

    func_800157C8(rdram, ctx);
        goto after_7;
    // 0x80035550: nop

    after_7:
    // 0x80035554: lw          $t7, 0x94($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X94);
    // 0x80035558: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8003555C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80035560: addu        $v0, $s6, $t8
    ctx->r2 = ADD32(ctx->r22, ctx->r24);
    // 0x80035564: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80035568: lw          $t7, 0xC8($s3)
    ctx->r15 = MEM_W(ctx->r19, 0XC8);
    // 0x8003556C: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x80035570: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x80035574: beq         $t8, $zero, L_8003559C
    if (ctx->r24 == 0) {
        // 0x80035578: sw          $t9, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r25;
            goto L_8003559C;
    }
    // 0x80035578: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8003557C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80035580: jal         0x80015950
    // 0x80035584: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_8;
    // 0x80035584: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x80035588: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8003558C: jal         0x80014A7C
    // 0x80035590: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    func_80014A7C(rdram, ctx);
        goto after_9;
    // 0x80035590: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_9:
    // 0x80035594: b           L_800355A8
    // 0x80035598: nop

        goto L_800355A8;
    // 0x80035598: nop

L_8003559C:
    // 0x8003559C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800355A0: jal         0x80014A7C
    // 0x800355A4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_80014A7C(rdram, ctx);
        goto after_10;
    // 0x800355A4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_10:
L_800355A8:
    // 0x800355A8: beq         $s5, $zero, L_800355B8
    if (ctx->r21 == 0) {
        // 0x800355AC: nop
    
            goto L_800355B8;
    }
    // 0x800355AC: nop

    // 0x800355B0: jal         0x80014BF4
    // 0x800355B4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80014BF4(rdram, ctx);
        goto after_11;
    // 0x800355B4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_11:
L_800355B8:
    // 0x800355B8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800355BC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800355C0: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x800355C4: bne         $s2, $at, L_80035420
    if (ctx->r18 != ctx->r1) {
        // 0x800355C8: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_80035420;
    }
    // 0x800355C8: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
L_800355CC:
    // 0x800355CC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
L_800355D0:
    // 0x800355D0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800355D4: addiu       $t9, $t6, 0x4
    ctx->r25 = ADD32(ctx->r14, 0X4);
    // 0x800355D8: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800355DC: addiu       $t6, $t6, -0x4288
    ctx->r14 = ADD32(ctx->r14, -0X4288);
    // 0x800355E0: addiu       $t8, $t7, 0x4
    ctx->r24 = ADD32(ctx->r15, 0X4);
    // 0x800355E4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800355E8: bne         $t8, $t6, L_800353DC
    if (ctx->r24 != ctx->r14) {
        // 0x800355EC: sw          $t9, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r25;
            goto L_800353DC;
    }
    // 0x800355EC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x800355F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800355F4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x800355F8: jr          $ra
    // 0x800355FC: nop

    return;
    // 0x800355FC: nop

;}
RECOMP_FUNC void func_80035600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035600: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x80035604: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035608: jal         0x800353A4
    // 0x8003560C: nop

    func_800353A4(rdram, ctx);
        goto after_0;
    // 0x8003560C: nop

    after_0:
    // 0x80035610: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80035614: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x80035618: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8003561C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80035620: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80035624: addiu       $t7, $t7, -0x6DC
    ctx->r15 = ADD32(ctx->r15, -0X6DC);
    // 0x80035628: addiu       $t6, $t6, -0x4170
    ctx->r14 = ADD32(ctx->r14, -0X4170);
    // 0x8003562C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80035630: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x80035634: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80035638: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8003563C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80035640: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_80035644:
    // 0x80035644: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80035648: lw          $t8, -0x6E0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X6E0);
    // 0x8003564C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80035650: bgez        $t8, L_800357D8
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80035654: lui         $t6, 0x800B
        ctx->r14 = S32(0X800B << 16);
            goto L_800357D8;
    }
    // 0x80035654: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80035658: addiu       $t6, $t6, -0x4020
    ctx->r14 = ADD32(ctx->r14, -0X4020);
    // 0x8003565C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80035660: addu        $s7, $t9, $t6
    ctx->r23 = ADD32(ctx->r25, ctx->r14);
    // 0x80035664: lw          $s3, 0x80($s7)
    ctx->r19 = MEM_W(ctx->r23, 0X80);
    // 0x80035668: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8003566C: sw          $zero, 0x80($s7)
    MEM_W(0X80, ctx->r23) = 0;
    // 0x80035670: addu        $a2, $a2, $t7
    ctx->r6 = ADD32(ctx->r6, ctx->r15);
    // 0x80035674: lw          $a2, -0x41E0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X41E0);
    // 0x80035678: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8003567C: addiu       $a1, $a1, 0x5894
    ctx->r5 = ADD32(ctx->r5, 0X5894);
    // 0x80035680: jal         0x800768B0
    // 0x80035684: addiu       $a0, $sp, 0xBC
    ctx->r4 = ADD32(ctx->r29, 0XBC);
    sprintf_recomp(rdram, ctx);
        goto after_1;
    // 0x80035684: addiu       $a0, $sp, 0xBC
    ctx->r4 = ADD32(ctx->r29, 0XBC);
    after_1:
    // 0x80035688: lbu         $t8, 0xBC($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XBC);
    // 0x8003568C: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x80035690: beq         $t8, $at, L_800357C8
    if (ctx->r24 == ctx->r1) {
        // 0x80035694: sll         $t9, $s2, 2
        ctx->r25 = S32(ctx->r18 << 2);
            goto L_800357C8;
    }
    // 0x80035694: sll         $t9, $s2, 2
    ctx->r25 = S32(ctx->r18 << 2);
    // 0x80035698: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8003569C: addiu       $t7, $t7, -0x4020
    ctx->r15 = ADD32(ctx->r15, -0X4020);
    // 0x800356A0: addiu       $t6, $t9, 0x80
    ctx->r14 = ADD32(ctx->r25, 0X80);
    // 0x800356A4: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    // 0x800356A8: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800356AC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x800356B0: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x800356B4: addiu       $t9, $t9, -0x3EE8
    ctx->r25 = ADD32(ctx->r25, -0X3EE8);
    // 0x800356B8: addiu       $t7, $t7, -0x694
    ctx->r15 = ADD32(ctx->r15, -0X694);
    // 0x800356BC: sll         $t6, $s2, 3
    ctx->r14 = S32(ctx->r18 << 3);
    // 0x800356C0: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800356C4: beq         $s2, $zero, L_80035728
    if (ctx->r18 == 0) {
        // 0x800356C8: addu        $v0, $t8, $t9
        ctx->r2 = ADD32(ctx->r24, ctx->r25);
            goto L_80035728;
    }
    // 0x800356C8: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x800356CC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800356D0: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x800356D4: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x800356D8: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x800356DC: subu        $t7, $t6, $t9
    ctx->r15 = SUB32(ctx->r14, ctx->r25);
    // 0x800356E0: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x800356E4: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x800356E8: cvt.s.w     $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800356EC: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    // 0x800356F0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x800356F4: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800356F8: jal         0x80015784
    // 0x800356FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_2;
    // 0x800356FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80035700: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80035704: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80035708: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8003570C: jal         0x80014B64
    // 0x80035710: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_3;
    // 0x80035710: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x80035714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80035718: jal         0x80014AC4
    // 0x8003571C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_4;
    // 0x8003571C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_4:
    // 0x80035720: b           L_8003577C
    // 0x80035724: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
        goto L_8003577C;
    // 0x80035724: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
L_80035728:
    // 0x80035728: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8003572C: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x80035730: sll         $t9, $t6, 4
    ctx->r25 = S32(ctx->r14 << 4);
    // 0x80035734: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x80035738: addiu       $t7, $t9, 0x40
    ctx->r15 = ADD32(ctx->r25, 0X40);
    // 0x8003573C: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x80035740: cvt.s.w     $f22, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    ctx->f22.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80035744: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    // 0x80035748: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8003574C: cvt.s.w     $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    ctx->f20.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80035750: jal         0x80015784
    // 0x80035754: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_5;
    // 0x80035754: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80035758: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8003575C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80035760: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80035764: jal         0x80014B64
    // 0x80035768: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_6;
    // 0x80035768: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x8003576C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80035770: jal         0x80014AC4
    // 0x80035774: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_7;
    // 0x80035774: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_7:
    // 0x80035778: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
L_8003577C:
    // 0x8003577C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80035780: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x80035784: jal         0x80015898
    // 0x80035788: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80015898(rdram, ctx);
        goto after_8;
    // 0x80035788: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_8:
    // 0x8003578C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80035790: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x80035794: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80035798: jal         0x800157C8
    // 0x8003579C: nop

    func_800157C8(rdram, ctx);
        goto after_9;
    // 0x8003579C: nop

    after_9:
    // 0x800357A0: lbu         $a1, 0xBC($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XBC);
    // 0x800357A4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800357A8: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x800357AC: addiu       $a1, $t6, -0x300
    ctx->r5 = ADD32(ctx->r14, -0X300);
    // 0x800357B0: jal         0x80015950
    // 0x800357B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015950(rdram, ctx);
        goto after_10;
    // 0x800357B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x800357B8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800357BC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x800357C0: jal         0x80015898
    // 0x800357C4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80015898(rdram, ctx);
        goto after_11;
    // 0x800357C4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_11:
L_800357C8:
    // 0x800357C8: beq         $s3, $zero, L_800357D8
    if (ctx->r19 == 0) {
        // 0x800357CC: nop
    
            goto L_800357D8;
    }
    // 0x800357CC: nop

    // 0x800357D0: jal         0x80014BF4
    // 0x800357D4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80014BF4(rdram, ctx);
        goto after_12;
    // 0x800357D4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_12:
L_800357D8:
    // 0x800357D8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800357DC: lw          $v0, -0x418C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X418C);
    // 0x800357E0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800357E4: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x800357E8: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x800357EC: lw          $t8, -0x6F0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X6F0);
    // 0x800357F0: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x800357F4: addiu       $v0, $t9, 0x4
    ctx->r2 = ADD32(ctx->r25, 0X4);
    // 0x800357F8: lw          $s6, 0xE0($t7)
    ctx->r22 = MEM_W(ctx->r15, 0XE0);
    // 0x800357FC: bne         $v0, $t8, L_80035820
    if (ctx->r2 != ctx->r24) {
        // 0x80035800: lw          $t7, 0x38($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X38);
            goto L_80035820;
    }
    // 0x80035800: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80035804: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80035808: nop

    // 0x8003580C: lw          $t9, 0x0($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X0);
    // 0x80035810: nop

    // 0x80035814: beq         $s6, $t9, L_80035AE8
    if (ctx->r22 == ctx->r25) {
        // 0x80035818: lw          $t8, 0x38($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X38);
            goto L_80035AE8;
    }
    // 0x80035818: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8003581C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
L_80035820:
    // 0x80035820: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80035824: addiu       $t8, $t8, -0x4020
    ctx->r24 = ADD32(ctx->r24, -0X4020);
    // 0x80035828: sll         $t6, $s2, 2
    ctx->r14 = S32(ctx->r18 << 2);
    // 0x8003582C: addiu       $t9, $t6, 0x90
    ctx->r25 = ADD32(ctx->r14, 0X90);
    // 0x80035830: addu        $s7, $t7, $t8
    ctx->r23 = ADD32(ctx->r15, ctx->r24);
    // 0x80035834: addu        $t7, $t9, $t8
    ctx->r15 = ADD32(ctx->r25, ctx->r24);
    // 0x80035838: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003583C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80035840: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x80035844: lw          $t7, 0x0($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X0);
    // 0x80035848: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8003584C: addiu       $t6, $t6, -0x604
    ctx->r14 = ADD32(ctx->r14, -0X604);
    // 0x80035850: sll         $s5, $s2, 3
    ctx->r21 = S32(ctx->r18 << 3);
    // 0x80035854: beq         $s6, $t7, L_8003590C
    if (ctx->r22 == ctx->r15) {
        // 0x80035858: addu        $fp, $s5, $t6
        ctx->r30 = ADD32(ctx->r21, ctx->r14);
            goto L_8003590C;
    }
    // 0x80035858: addu        $fp, $s5, $t6
    ctx->r30 = ADD32(ctx->r21, ctx->r14);
    // 0x8003585C: sll         $t9, $s2, 3
    ctx->r25 = S32(ctx->r18 << 3);
    // 0x80035860: addiu       $t7, $t9, 0x98
    ctx->r15 = ADD32(ctx->r25, 0X98);
    // 0x80035864: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80035868: addiu       $t6, $t6, -0x614
    ctx->r14 = ADD32(ctx->r14, -0X614);
    // 0x8003586C: addu        $v0, $s5, $t6
    ctx->r2 = ADD32(ctx->r21, ctx->r14);
    // 0x80035870: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80035874: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
    // 0x80035878: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8003587C: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80035880: cvt.s.w     $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80035884: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80035888: lw          $s3, 0x0($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X0);
    // 0x8003588C: cvt.s.w     $f22, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    ctx->f22.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80035890: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x80035894: addiu       $a0, $zero, 0x905
    ctx->r4 = ADD32(0, 0X905);
    // 0x80035898: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8003589C: jal         0x80015784
    // 0x800358A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_13;
    // 0x800358A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x800358A4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x800358A8: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x800358AC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800358B0: jal         0x80014B64
    // 0x800358B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_14;
    // 0x800358B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_14:
    // 0x800358B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800358BC: jal         0x80014AC4
    // 0x800358C0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_15;
    // 0x800358C0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_15:
    // 0x800358C4: sll         $a2, $s6, 4
    ctx->r6 = S32(ctx->r22 << 4);
    // 0x800358C8: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x800358CC: subu        $a2, $a2, $s6
    ctx->r6 = SUB32(ctx->r6, ctx->r22);
    // 0x800358D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800358D4: jal         0x80015898
    // 0x800358D8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80015898(rdram, ctx);
        goto after_16;
    // 0x800358D8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_16:
    // 0x800358DC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800358E0: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x800358E4: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x800358E8: jal         0x800157C8
    // 0x800358EC: nop

    func_800157C8(rdram, ctx);
        goto after_17;
    // 0x800358EC: nop

    after_17:
    // 0x800358F0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800358F4: jal         0x80014A7C
    // 0x800358F8: addiu       $a1, $zero, 0xA6
    ctx->r5 = ADD32(0, 0XA6);
    func_80014A7C(rdram, ctx);
        goto after_18;
    // 0x800358F8: addiu       $a1, $zero, 0xA6
    ctx->r5 = ADD32(0, 0XA6);
    after_18:
    // 0x800358FC: beq         $s3, $zero, L_80035910
    if (ctx->r19 == 0) {
        // 0x80035900: lw          $v0, 0x8C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X8C);
            goto L_80035910;
    }
    // 0x80035900: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x80035904: jal         0x80014BF4
    // 0x80035908: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80014BF4(rdram, ctx);
        goto after_19;
    // 0x80035908: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_19:
L_8003590C:
    // 0x8003590C: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
L_80035910:
    // 0x80035910: sll         $v1, $s2, 1
    ctx->r3 = S32(ctx->r18 << 1);
    // 0x80035914: subu        $s4, $v0, $s6
    ctx->r20 = SUB32(ctx->r2, ctx->r22);
    // 0x80035918: beq         $s4, $zero, L_800359E0
    if (ctx->r20 == 0) {
        // 0x8003591C: addiu       $v1, $v1, 0x27
        ctx->r3 = ADD32(ctx->r3, 0X27);
            goto L_800359E0;
    }
    // 0x8003591C: addiu       $v1, $v1, 0x27
    ctx->r3 = ADD32(ctx->r3, 0X27);
    // 0x80035920: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80035924: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x80035928: addiu       $t6, $t6, -0x4020
    ctx->r14 = ADD32(ctx->r14, -0X4020);
    // 0x8003592C: addu        $s1, $t8, $t6
    ctx->r17 = ADD32(ctx->r24, ctx->r14);
    // 0x80035930: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80035934: addiu       $t9, $t9, -0x614
    ctx->r25 = ADD32(ctx->r25, -0X614);
    // 0x80035938: addu        $v0, $s5, $t9
    ctx->r2 = ADD32(ctx->r21, ctx->r25);
    // 0x8003593C: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x80035940: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80035944: sll         $t6, $s6, 4
    ctx->r14 = S32(ctx->r22 << 4);
    // 0x80035948: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x8003594C: subu        $t6, $t6, $s6
    ctx->r14 = SUB32(ctx->r14, ctx->r22);
    // 0x80035950: cvt.s.w     $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80035954: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x80035958: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8003595C: lw          $s3, 0x0($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X0);
    // 0x80035960: cvt.s.w     $f22, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    ctx->f22.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80035964: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x80035968: addiu       $a0, $zero, 0x906
    ctx->r4 = ADD32(0, 0X906);
    // 0x8003596C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80035970: jal         0x80015784
    // 0x80035974: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_20;
    // 0x80035974: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_20:
    // 0x80035978: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8003597C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80035980: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80035984: jal         0x80014B64
    // 0x80035988: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_21;
    // 0x80035988: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_21:
    // 0x8003598C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80035990: jal         0x80014AC4
    // 0x80035994: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_22;
    // 0x80035994: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_22:
    // 0x80035998: sll         $a2, $s4, 4
    ctx->r6 = S32(ctx->r20 << 4);
    // 0x8003599C: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x800359A0: subu        $a2, $a2, $s4
    ctx->r6 = SUB32(ctx->r6, ctx->r20);
    // 0x800359A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800359A8: jal         0x80015898
    // 0x800359AC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80015898(rdram, ctx);
        goto after_23;
    // 0x800359AC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_23:
    // 0x800359B0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800359B4: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x800359B8: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x800359BC: jal         0x800157C8
    // 0x800359C0: nop

    func_800157C8(rdram, ctx);
        goto after_24;
    // 0x800359C0: nop

    after_24:
    // 0x800359C4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800359C8: jal         0x80014A7C
    // 0x800359CC: addiu       $a1, $zero, 0xA6
    ctx->r5 = ADD32(0, 0XA6);
    func_80014A7C(rdram, ctx);
        goto after_25;
    // 0x800359CC: addiu       $a1, $zero, 0xA6
    ctx->r5 = ADD32(0, 0XA6);
    after_25:
    // 0x800359D0: beq         $s3, $zero, L_800359E4
    if (ctx->r19 == 0) {
        // 0x800359D4: lw          $v0, 0x8C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X8C);
            goto L_800359E4;
    }
    // 0x800359D4: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x800359D8: jal         0x80014BF4
    // 0x800359DC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80014BF4(rdram, ctx);
        goto after_26;
    // 0x800359DC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_26:
L_800359E0:
    // 0x800359E0: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
L_800359E4:
    // 0x800359E4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800359E8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800359EC: sw          $v0, -0x6F0($at)
    MEM_W(-0X6F0, ctx->r1) = ctx->r2;
    // 0x800359F0: sw          $s6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r22;
    // 0x800359F4: lw          $s3, 0x90($s7)
    ctx->r19 = MEM_W(ctx->r23, 0X90);
    // 0x800359F8: bne         $s2, $zero, L_80035A54
    if (ctx->r18 != 0) {
        // 0x800359FC: sw          $zero, 0x90($s7)
        MEM_W(0X90, ctx->r23) = 0;
            goto L_80035A54;
    }
    // 0x800359FC: sw          $zero, 0x90($s7)
    MEM_W(0X90, ctx->r23) = 0;
    // 0x80035A00: lw          $t8, 0x0($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X0);
    // 0x80035A04: lw          $t6, 0x4($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X4);
    // 0x80035A08: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x80035A0C: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x80035A10: cvt.s.w     $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80035A14: addiu       $a0, $zero, 0x916
    ctx->r4 = ADD32(0, 0X916);
    // 0x80035A18: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80035A1C: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80035A20: jal         0x80015784
    // 0x80035A24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_27;
    // 0x80035A24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_27:
    // 0x80035A28: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80035A2C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80035A30: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80035A34: jal         0x80014B64
    // 0x80035A38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_28;
    // 0x80035A38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_28:
    // 0x80035A3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80035A40: jal         0x80014AC4
    // 0x80035A44: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_29;
    // 0x80035A44: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_29:
    // 0x80035A48: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80035A4C: b           L_80035AA8
    // 0x80035A50: sw          $s0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r16;
        goto L_80035AA8;
    // 0x80035A50: sw          $s0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r16;
L_80035A54:
    // 0x80035A54: lw          $t7, 0x0($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X0);
    // 0x80035A58: lw          $t8, 0x4($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X4);
    // 0x80035A5C: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80035A60: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x80035A64: cvt.s.w     $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    ctx->f20.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80035A68: addiu       $a0, $zero, 0x917
    ctx->r4 = ADD32(0, 0X917);
    // 0x80035A6C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80035A70: cvt.s.w     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    ctx->f22.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80035A74: jal         0x80015784
    // 0x80035A78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80015784(rdram, ctx);
        goto after_30;
    // 0x80035A78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_30:
    // 0x80035A7C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80035A80: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80035A84: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80035A88: jal         0x80014B64
    // 0x80035A8C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80014B64(rdram, ctx);
        goto after_31;
    // 0x80035A8C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_31:
    // 0x80035A90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80035A94: jal         0x80014AC4
    // 0x80035A98: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_32;
    // 0x80035A98: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_32:
    // 0x80035A9C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80035AA0: nop

    // 0x80035AA4: sw          $s0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r16;
L_80035AA8:
    // 0x80035AA8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80035AAC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x80035AB0: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80035AB4: jal         0x80015898
    // 0x80035AB8: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    func_80015898(rdram, ctx);
        goto after_33;
    // 0x80035AB8: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    after_33:
    // 0x80035ABC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80035AC0: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x80035AC4: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x80035AC8: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x80035ACC: jal         0x800157C8
    // 0x80035AD0: nop

    func_800157C8(rdram, ctx);
        goto after_34;
    // 0x80035AD0: nop

    after_34:
    // 0x80035AD4: beq         $s3, $zero, L_80035AE8
    if (ctx->r19 == 0) {
        // 0x80035AD8: lw          $t8, 0x38($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X38);
            goto L_80035AE8;
    }
    // 0x80035AD8: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80035ADC: jal         0x80014BF4
    // 0x80035AE0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80014BF4(rdram, ctx);
        goto after_35;
    // 0x80035AE0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_35:
    // 0x80035AE4: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
L_80035AE8:
    // 0x80035AE8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80035AEC: addiu       $t6, $t8, 0x4
    ctx->r14 = ADD32(ctx->r24, 0X4);
    // 0x80035AF0: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80035AF4: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x80035AF8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80035AFC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80035B00: addiu       $t7, $t9, 0x4
    ctx->r15 = ADD32(ctx->r25, 0X4);
    // 0x80035B04: addiu       $t6, $t8, 0x4
    ctx->r14 = ADD32(ctx->r24, 0X4);
    // 0x80035B08: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80035B0C: bne         $s2, $at, L_80035644
    if (ctx->r18 != ctx->r1) {
        // 0x80035B10: sw          $t7, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r15;
            goto L_80035644;
    }
    // 0x80035B10: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x80035B14: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80035B18: lw          $t9, -0x415C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X415C);
    // 0x80035B1C: nop

    // 0x80035B20: bltz        $t9, L_80035B34
    if (SIGNED(ctx->r25) < 0) {
        // 0x80035B24: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_80035B34;
    }
    // 0x80035B24: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80035B28: jal         0x80034A88
    // 0x80035B2C: nop

    func_80034A88(rdram, ctx);
        goto after_36;
    // 0x80035B2C: nop

    after_36:
    // 0x80035B30: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_80035B34:
    // 0x80035B34: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80035B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035B3C: sw          $t7, -0x6E0($at)
    MEM_W(-0X6E0, ctx->r1) = ctx->r15;
    // 0x80035B40: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80035B44: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80035B48: sw          $t8, -0x6E4($at)
    MEM_W(-0X6E4, ctx->r1) = ctx->r24;
    // 0x80035B4C: jr          $ra
    // 0x80035B50: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x80035B50: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_80035B54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035B54: jr          $ra
    // 0x80035B58: nop

    return;
    // 0x80035B58: nop

;}
