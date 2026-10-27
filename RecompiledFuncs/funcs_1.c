#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80002228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002228: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000222C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002230: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80002234: addiu       $a1, $a1, -0x18B0
    ctx->r5 = ADD32(ctx->r5, -0X18B0);
    // 0x80002238: jal         0x80073EF0
    // 0x8000223C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80073EF0(rdram, ctx);
        goto after_0;
    // 0x8000223C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x80002240: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80002244: addiu       $v1, $v1, 0x130
    ctx->r3 = ADD32(ctx->r3, 0X130);
    // 0x80002248: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8000224C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80002250: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80002254: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80002258: sw          $t6, 0x134($at)
    MEM_W(0X134, ctx->r1) = ctx->r14;
    // 0x8000225C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80002260: sw          $v0, 0x138($at)
    MEM_W(0X138, ctx->r1) = ctx->r2;
    // 0x80002264: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80002268: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x8000226C: bne         $v0, $t7, L_80002290
    if (ctx->r2 != ctx->r15) {
        // 0x80002270: addiu       $a0, $a0, -0xDB0
        ctx->r4 = ADD32(ctx->r4, -0XDB0);
            goto L_80002290;
    }
    // 0x80002270: addiu       $a0, $a0, -0xDB0
    ctx->r4 = ADD32(ctx->r4, -0XDB0);
    // 0x80002274: lui         $a2, 0xF
    ctx->r6 = S32(0XF << 16);
    // 0x80002278: ori         $a2, $a2, 0xF000
    ctx->r6 = ctx->r6 | 0XF000;
    // 0x8000227C: jal         0x80000698
    // 0x80002280: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    func_80000698(rdram, ctx);
        goto after_1;
    // 0x80002280: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    after_1:
    // 0x80002284: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80002288: addiu       $v1, $v1, 0x130
    ctx->r3 = ADD32(ctx->r3, 0X130);
    // 0x8000228C: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_80002290:
    // 0x80002290: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80002294: lw          $t8, 0x134($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X134);
    // 0x80002298: lui         $a0, 0x2A
    ctx->r4 = S32(0X2A << 16);
    // 0x8000229C: beq         $a0, $t8, L_800022AC
    if (ctx->r4 == ctx->r24) {
        // 0x800022A0: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_800022AC;
    }
    // 0x800022A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800022A4: jal         0x80001F9C
    // 0x800022A8: sw          $a0, 0x134($at)
    MEM_W(0X134, ctx->r1) = ctx->r4;
    func_80001F9C(rdram, ctx);
        goto after_2;
    // 0x800022A8: sw          $a0, 0x134($at)
    MEM_W(0X134, ctx->r1) = ctx->r4;
    after_2:
L_800022AC:
    // 0x800022AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800022B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800022B4: jr          $ra
    // 0x800022B8: nop

    return;
    // 0x800022B8: nop

;}
RECOMP_FUNC void func_800022BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800022BC: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x800022C0: lw          $t9, 0x13C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X13C);
    // 0x800022C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800022C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800022CC: jalr        $t9
    // 0x800022D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x800022D0: nop

    after_0:
    // 0x800022D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800022D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800022DC: jr          $ra
    // 0x800022E0: nop

    return;
    // 0x800022E0: nop

;}
RECOMP_FUNC void func_800022E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800022E4: lui         $t7, 0x800F
    ctx->r15 = S32(0X800F << 16);
    // 0x800022E8: addiu       $t7, $t7, -0xDB0
    ctx->r15 = ADD32(ctx->r15, -0XDB0);
    // 0x800022EC: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x800022F0: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800022F4: lbu         $t8, 0x1($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X1);
    // 0x800022F8: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    // 0x800022FC: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x80002300: lw          $t3, 0x134($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X134);
    // 0x80002304: sll         $t9, $t8, 11
    ctx->r25 = S32(ctx->r24 << 11);
    // 0x80002308: sll         $t2, $t1, 17
    ctx->r10 = S32(ctx->r9 << 17);
    // 0x8000230C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80002310: addu        $a1, $t9, $t2
    ctx->r5 = ADD32(ctx->r25, ctx->r10);
    // 0x80002314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002318: beq         $a1, $t3, L_80002344
    if (ctx->r5 == ctx->r11) {
        // 0x8000231C: or          $t0, $a0, $zero
        ctx->r8 = ctx->r4 | 0;
            goto L_80002344;
    }
    // 0x8000231C: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80002320: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80002324: sw          $a1, 0x134($at)
    MEM_W(0X134, ctx->r1) = ctx->r5;
    // 0x80002328: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8000232C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80002330: jal         0x80001F9C
    // 0x80002334: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    func_80001F9C(rdram, ctx);
        goto after_0;
    // 0x80002334: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    after_0:
    // 0x80002338: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8000233C: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x80002340: nop

L_80002344:
    // 0x80002344: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80002348: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8000234C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80002350: jal         0x80001E6C
    // 0x80002354: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    func_80001E6C(rdram, ctx);
        goto after_1;
    // 0x80002354: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    after_1:
    // 0x80002358: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x8000235C: jal         0x80001F90
    // 0x80002360: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80001F90(rdram, ctx);
        goto after_2;
    // 0x80002360: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80002364: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80002368: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8000236C: slti        $at, $v0, 0x202
    ctx->r1 = SIGNED(ctx->r2) < 0X202 ? 1 : 0;
    // 0x80002370: bne         $at, $zero, L_80002394
    if (ctx->r1 != 0) {
        // 0x80002374: sw          $v0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r2;
            goto L_80002394;
    }
    // 0x80002374: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80002378: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8000237C: lbu         $a1, 0x0($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X0);
    // 0x80002380: addiu       $a0, $a0, 0x4ADC
    ctx->r4 = ADD32(ctx->r4, 0X4ADC);
    // 0x80002384: jal         0x80000FBC
    // 0x80002388: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    func_80000FBC(rdram, ctx);
        goto after_3;
    // 0x80002388: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    after_3:
    // 0x8000238C: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x80002390: nop

L_80002394:
    // 0x80002394: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80002398: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x8000239C: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x800023A0: addiu       $a0, $a0, 0x250
    ctx->r4 = ADD32(ctx->r4, 0X250);
    // 0x800023A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800023A8: jal         0x80001A88
    // 0x800023AC: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    func_80001A88(rdram, ctx);
        goto after_4;
    // 0x800023AC: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    after_4:
    // 0x800023B0: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x800023B4: lbu         $v1, 0x250($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X250);
    // 0x800023B8: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x800023BC: blez        $v1, L_80002410
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800023C0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80002410;
    }
    // 0x800023C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800023C4: sll         $t4, $zero, 2
    ctx->r12 = S32(0 << 2);
    // 0x800023C8: lui         $t5, 0x800F
    ctx->r13 = S32(0X800F << 16);
    // 0x800023CC: addiu       $t5, $t5, 0x250
    ctx->r13 = ADD32(ctx->r13, 0X250);
    // 0x800023D0: subu        $t4, $t4, $zero
    ctx->r12 = SUB32(ctx->r12, 0);
    // 0x800023D4: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
L_800023D8:
    // 0x800023D8: lbu         $t7, 0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1);
    // 0x800023DC: lbu         $t6, 0x2($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2);
    // 0x800023E0: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x800023E4: addu        $a3, $t6, $t8
    ctx->r7 = ADD32(ctx->r14, ctx->r24);
    // 0x800023E8: bne         $a3, $t0, L_800023FC
    if (ctx->r7 != ctx->r8) {
        // 0x800023EC: nop
    
            goto L_800023FC;
    }
    // 0x800023EC: nop

    // 0x800023F0: lbu         $a3, 0x3($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X3);
    // 0x800023F4: b           L_80002410
    // 0x800023F8: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
        goto L_80002410;
    // 0x800023F8: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
L_800023FC:
    // 0x800023FC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80002400: slt         $at, $a2, $v1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80002404: bne         $at, $zero, L_800023D8
    if (ctx->r1 != 0) {
        // 0x80002408: addiu       $v0, $v0, 0x3
        ctx->r2 = ADD32(ctx->r2, 0X3);
            goto L_800023D8;
    }
    // 0x80002408: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x8000240C: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
L_80002410:
    // 0x80002410: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x80002414: slt         $at, $a2, $v1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80002418: bne         $at, $zero, L_8000243C
    if (ctx->r1 != 0) {
        // 0x8000241C: sw          $a2, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r6;
            goto L_8000243C;
    }
    // 0x8000241C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80002420: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80002424: addiu       $a0, $a0, 0x4B04
    ctx->r4 = ADD32(ctx->r4, 0X4B04);
    // 0x80002428: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8000242C: jal         0x80000FBC
    // 0x80002430: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    func_80000FBC(rdram, ctx);
        goto after_5;
    // 0x80002430: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_5:
    // 0x80002434: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x80002438: nop

L_8000243C:
    // 0x8000243C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80002440: jal         0x80001C84
    // 0x80002444: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    func_80001C84(rdram, ctx);
        goto after_6;
    // 0x80002444: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_6:
    // 0x80002448: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8000244C: jal         0x80001E6C
    // 0x80002450: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80001E6C(rdram, ctx);
        goto after_7;
    // 0x80002450: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80002454: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x80002458: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8000245C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80002460: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80002464: jal         0x80001A88
    // 0x80002468: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_80001A88(rdram, ctx);
        goto after_8;
    // 0x80002468: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_8:
    // 0x8000246C: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x80002470: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x80002474: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80002478: jal         0x80001A88
    // 0x8000247C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80001A88(rdram, ctx);
        goto after_9;
    // 0x8000247C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x80002480: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80002484: jal         0x80001C84
    // 0x80002488: nop

    func_80001C84(rdram, ctx);
        goto after_10;
    // 0x80002488: nop

    after_10:
    // 0x8000248C: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x80002490: lw          $t1, 0x134($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X134);
    // 0x80002494: lui         $a0, 0x2A
    ctx->r4 = S32(0X2A << 16);
    // 0x80002498: beq         $a0, $t1, L_800024A8
    if (ctx->r4 == ctx->r9) {
        // 0x8000249C: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_800024A8;
    }
    // 0x8000249C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800024A0: jal         0x80001F9C
    // 0x800024A4: sw          $a0, 0x134($at)
    MEM_W(0X134, ctx->r1) = ctx->r4;
    func_80001F9C(rdram, ctx);
        goto after_11;
    // 0x800024A4: sw          $a0, 0x134($at)
    MEM_W(0X134, ctx->r1) = ctx->r4;
    after_11:
L_800024A8:
    // 0x800024A8: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x800024AC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800024B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800024B4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800024B8: jr          $ra
    // 0x800024BC: addu        $v0, $a2, $t9
    ctx->r2 = ADD32(ctx->r6, ctx->r25);
    return;
    // 0x800024BC: addu        $v0, $a2, $t9
    ctx->r2 = ADD32(ctx->r6, ctx->r25);
;}
RECOMP_FUNC void func_800024C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800024C0: lui         $t7, 0x800F
    ctx->r15 = S32(0X800F << 16);
    // 0x800024C4: addiu       $t7, $t7, -0xDB0
    ctx->r15 = ADD32(ctx->r15, -0XDB0);
    // 0x800024C8: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x800024CC: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x800024D0: lbu         $t8, 0x1($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X1);
    // 0x800024D4: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    // 0x800024D8: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x800024DC: lw          $t3, 0x134($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X134);
    // 0x800024E0: sll         $t9, $t8, 11
    ctx->r25 = S32(ctx->r24 << 11);
    // 0x800024E4: sll         $t2, $t1, 17
    ctx->r10 = S32(ctx->r9 << 17);
    // 0x800024E8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800024EC: addu        $a2, $t9, $t2
    ctx->r6 = ADD32(ctx->r25, ctx->r10);
    // 0x800024F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800024F4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x800024F8: beq         $a2, $t3, L_80002524
    if (ctx->r6 == ctx->r11) {
        // 0x800024FC: or          $t0, $a0, $zero
        ctx->r8 = ctx->r4 | 0;
            goto L_80002524;
    }
    // 0x800024FC: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80002500: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80002504: sw          $a2, 0x134($at)
    MEM_W(0X134, ctx->r1) = ctx->r6;
    // 0x80002508: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8000250C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80002510: jal         0x80001F9C
    // 0x80002514: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    func_80001F9C(rdram, ctx);
        goto after_0;
    // 0x80002514: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    after_0:
    // 0x80002518: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8000251C: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x80002520: nop

L_80002524:
    // 0x80002524: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80002528: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8000252C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80002530: jal         0x80001E6C
    // 0x80002534: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    func_80001E6C(rdram, ctx);
        goto after_1;
    // 0x80002534: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    after_1:
    // 0x80002538: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x8000253C: jal         0x80001F90
    // 0x80002540: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80001F90(rdram, ctx);
        goto after_2;
    // 0x80002540: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80002544: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80002548: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8000254C: slti        $at, $v0, 0x202
    ctx->r1 = SIGNED(ctx->r2) < 0X202 ? 1 : 0;
    // 0x80002550: bne         $at, $zero, L_80002574
    if (ctx->r1 != 0) {
        // 0x80002554: sw          $v0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r2;
            goto L_80002574;
    }
    // 0x80002554: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80002558: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8000255C: lbu         $a1, 0x0($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X0);
    // 0x80002560: addiu       $a0, $a0, 0x4A90
    ctx->r4 = ADD32(ctx->r4, 0X4A90);
    // 0x80002564: jal         0x80000FBC
    // 0x80002568: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    func_80000FBC(rdram, ctx);
        goto after_3;
    // 0x80002568: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    after_3:
    // 0x8000256C: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x80002570: nop

L_80002574:
    // 0x80002574: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80002578: lui         $a0, 0x800F
    ctx->r4 = S32(0X800F << 16);
    // 0x8000257C: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x80002580: addiu       $a0, $a0, 0x250
    ctx->r4 = ADD32(ctx->r4, 0X250);
    // 0x80002584: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80002588: jal         0x80001A88
    // 0x8000258C: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    func_80001A88(rdram, ctx);
        goto after_4;
    // 0x8000258C: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    after_4:
    // 0x80002590: lui         $v1, 0x800F
    ctx->r3 = S32(0X800F << 16);
    // 0x80002594: lbu         $v1, 0x250($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X250);
    // 0x80002598: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8000259C: blez        $v1, L_800025F0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800025A0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_800025F0;
    }
    // 0x800025A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800025A4: sll         $t4, $zero, 2
    ctx->r12 = S32(0 << 2);
    // 0x800025A8: lui         $t5, 0x800F
    ctx->r13 = S32(0X800F << 16);
    // 0x800025AC: addiu       $t5, $t5, 0x250
    ctx->r13 = ADD32(ctx->r13, 0X250);
    // 0x800025B0: subu        $t4, $t4, $zero
    ctx->r12 = SUB32(ctx->r12, 0);
    // 0x800025B4: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
L_800025B8:
    // 0x800025B8: lbu         $t7, 0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1);
    // 0x800025BC: lbu         $t6, 0x2($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2);
    // 0x800025C0: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x800025C4: addu        $a3, $t6, $t8
    ctx->r7 = ADD32(ctx->r14, ctx->r24);
    // 0x800025C8: bne         $a3, $t0, L_800025DC
    if (ctx->r7 != ctx->r8) {
        // 0x800025CC: nop
    
            goto L_800025DC;
    }
    // 0x800025CC: nop

    // 0x800025D0: lbu         $a3, 0x3($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X3);
    // 0x800025D4: b           L_800025F0
    // 0x800025D8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
        goto L_800025F0;
    // 0x800025D8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
L_800025DC:
    // 0x800025DC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800025E0: slt         $at, $a2, $v1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800025E4: bne         $at, $zero, L_800025B8
    if (ctx->r1 != 0) {
        // 0x800025E8: addiu       $v0, $v0, 0x3
        ctx->r2 = ADD32(ctx->r2, 0X3);
            goto L_800025B8;
    }
    // 0x800025E8: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x800025EC: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
L_800025F0:
    // 0x800025F0: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x800025F4: slt         $at, $a2, $v1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800025F8: bne         $at, $zero, L_8000261C
    if (ctx->r1 != 0) {
        // 0x800025FC: sw          $a2, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r6;
            goto L_8000261C;
    }
    // 0x800025FC: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80002600: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80002604: addiu       $a0, $a0, 0x4AB8
    ctx->r4 = ADD32(ctx->r4, 0X4AB8);
    // 0x80002608: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8000260C: jal         0x80000FBC
    // 0x80002610: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    func_80000FBC(rdram, ctx);
        goto after_5;
    // 0x80002610: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_5:
    // 0x80002614: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x80002618: nop

L_8000261C:
    // 0x8000261C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80002620: jal         0x80001C84
    // 0x80002624: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    func_80001C84(rdram, ctx);
        goto after_6;
    // 0x80002624: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_6:
    // 0x80002628: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8000262C: jal         0x80001E6C
    // 0x80002630: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80001E6C(rdram, ctx);
        goto after_7;
    // 0x80002630: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80002634: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x80002638: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8000263C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80002640: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80002644: jal         0x80001A88
    // 0x80002648: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_80001A88(rdram, ctx);
        goto after_8;
    // 0x80002648: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_8:
    // 0x8000264C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80002650: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80002654: jal         0x800016BC
    // 0x80002658: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800016BC(rdram, ctx);
        goto after_9;
    // 0x80002658: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x8000265C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80002660: lui         $a1, 0x8
    ctx->r5 = S32(0X8 << 16);
    // 0x80002664: addiu       $a0, $a0, 0xF
    ctx->r4 = ADD32(ctx->r4, 0XF);
    // 0x80002668: srl         $t1, $a0, 4
    ctx->r9 = S32(U32(ctx->r4) >> 4);
    // 0x8000266C: sll         $a0, $t1, 4
    ctx->r4 = S32(ctx->r9 << 4);
    // 0x80002670: jal         0x800756B0
    // 0x80002674: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    osInvalICache_recomp(rdram, ctx);
        goto after_10;
    // 0x80002674: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_10:
    // 0x80002678: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8000267C: jal         0x80075600
    // 0x80002680: lui         $a1, 0x8
    ctx->r5 = S32(0X8 << 16);
    osInvalDCache_recomp(rdram, ctx);
        goto after_11;
    // 0x80002680: lui         $a1, 0x8
    ctx->r5 = S32(0X8 << 16);
    after_11:
    // 0x80002684: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80002688: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8000268C: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80002690: jal         0x80002730
    // 0x80002694: nop

    func_80002730(rdram, ctx);
        goto after_12;
    // 0x80002694: nop

    after_12:
    // 0x80002698: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8000269C: jal         0x80075580
    // 0x800026A0: lui         $a1, 0x8
    ctx->r5 = S32(0X8 << 16);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_13;
    // 0x800026A0: lui         $a1, 0x8
    ctx->r5 = S32(0X8 << 16);
    after_13:
    // 0x800026A4: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x800026A8: jal         0x80001C84
    // 0x800026AC: nop

    func_80001C84(rdram, ctx);
        goto after_14;
    // 0x800026AC: nop

    after_14:
    // 0x800026B0: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x800026B4: lw          $t2, 0x134($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X134);
    // 0x800026B8: lui         $a0, 0x2A
    ctx->r4 = S32(0X2A << 16);
    // 0x800026BC: beq         $a0, $t2, L_800026CC
    if (ctx->r4 == ctx->r10) {
        // 0x800026C0: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_800026CC;
    }
    // 0x800026C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800026C4: jal         0x80001F9C
    // 0x800026C8: sw          $a0, 0x134($at)
    MEM_W(0X134, ctx->r1) = ctx->r4;
    func_80001F9C(rdram, ctx);
        goto after_15;
    // 0x800026C8: sw          $a0, 0x134($at)
    MEM_W(0X134, ctx->r1) = ctx->r4;
    after_15:
L_800026CC:
    // 0x800026CC: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800026D0: nop

    // 0x800026D4: jalr        $t9
    // 0x800026D8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x800026D8: nop

    after_16:
    // 0x800026DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800026E0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800026E4: jr          $ra
    // 0x800026E8: nop

    return;
    // 0x800026E8: nop

;}
RECOMP_FUNC void func_800026EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800026EC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x800026F0: addiu       $v0, $v0, 0x138
    ctx->r2 = ADD32(ctx->r2, 0X138);
    // 0x800026F4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800026F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800026FC: beq         $a0, $t6, L_80002718
    if (ctx->r4 == ctx->r14) {
        // 0x80002700: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80002718;
    }
    // 0x80002700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002704: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x80002708: jal         0x800024C0
    // 0x8000270C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    func_800024C0(rdram, ctx);
        goto after_0;
    // 0x8000270C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    after_0:
    // 0x80002710: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80002714: sw          $v0, 0x13C($at)
    MEM_W(0X13C, ctx->r1) = ctx->r2;
L_80002718:
    // 0x80002718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000271C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80002720: jr          $ra
    // 0x80002724: nop

    return;
    // 0x80002724: nop

;}
RECOMP_FUNC void func_80002730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002730: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80002734: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80002738: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x8000273C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80002740: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80002744: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80002748: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8000274C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80002750: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80002754: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x80002758: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8000275C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80002760: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80002764: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80002768: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8000276C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80002770: sw          $t6, -0x18A0($at)
    MEM_W(-0X18A0, ctx->r1) = ctx->r14;
    // 0x80002774: jal         0x80006DFC
    // 0x80002778: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    func_80006DFC(rdram, ctx);
        goto after_0;
    // 0x80002778: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    after_0:
    // 0x8000277C: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x80002780: lui         $s3, 0x800A
    ctx->r19 = S32(0X800A << 16);
    // 0x80002784: addiu       $s3, $s3, 0x140
    ctx->r19 = ADD32(ctx->r19, 0X140);
    // 0x80002788: addiu       $s0, $s0, 0x144
    ctx->r16 = ADD32(ctx->r16, 0X144);
    // 0x8000278C: addiu       $t7, $zero, 0x3BE
    ctx->r15 = ADD32(0, 0X3BE);
    // 0x80002790: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x80002794: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
    // 0x80002798: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8000279C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800027A0: jal         0x8000167C
    // 0x800027A4: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    func_8000167C(rdram, ctx);
        goto after_1;
    // 0x800027A4: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    after_1:
    // 0x800027A8: beq         $s6, $zero, L_800028A8
    if (ctx->r22 == 0) {
        // 0x800027AC: or          $s5, $zero, $zero
        ctx->r21 = 0 | 0;
            goto L_800028A8;
    }
    // 0x800027AC: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x800027B0: addiu       $fp, $zero, -0x40
    ctx->r30 = ADD32(0, -0X40);
    // 0x800027B4: srl         $v1, $s5, 1
    ctx->r3 = S32(U32(ctx->r21) >> 1);
L_800027B8:
    // 0x800027B8: andi        $s5, $v1, 0xFFFF
    ctx->r21 = ctx->r3 & 0XFFFF;
    // 0x800027BC: andi        $t9, $s5, 0x100
    ctx->r25 = ctx->r21 & 0X100;
    // 0x800027C0: bne         $t9, $zero, L_800027DC
    if (ctx->r25 != 0) {
        // 0x800027C4: andi        $t1, $s5, 0x1
        ctx->r9 = ctx->r21 & 0X1;
            goto L_800027DC;
    }
    // 0x800027C4: andi        $t1, $s5, 0x1
    ctx->r9 = ctx->r21 & 0X1;
    // 0x800027C8: jal         0x80001C20
    // 0x800027CC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_80001C20(rdram, ctx);
        goto after_2;
    // 0x800027CC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_2:
    // 0x800027D0: ori         $v1, $v0, 0xFF00
    ctx->r3 = ctx->r2 | 0XFF00;
    // 0x800027D4: andi        $s5, $v1, 0xFFFF
    ctx->r21 = ctx->r3 & 0XFFFF;
    // 0x800027D8: andi        $t1, $s5, 0x1
    ctx->r9 = ctx->r21 & 0X1;
L_800027DC:
    // 0x800027DC: beq         $t1, $zero, L_80002820
    if (ctx->r9 == 0) {
        // 0x800027E0: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_80002820;
    }
    // 0x800027E0: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x800027E4: jal         0x80001C20
    // 0x800027E8: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_80001C20(rdram, ctx);
        goto after_3;
    // 0x800027E8: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_3:
    // 0x800027EC: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x800027F0: lhu         $t3, 0x0($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X0);
    // 0x800027F4: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x800027F8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800027FC: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80002800: sb          $v0, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r2;
    // 0x80002804: lhu         $t5, 0x0($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X0);
    // 0x80002808: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
    // 0x8000280C: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x80002810: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
    // 0x80002814: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x80002818: b           L_800028A0
    // 0x8000281C: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
        goto L_800028A0;
    // 0x8000281C: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
L_80002820:
    // 0x80002820: jal         0x80001C20
    // 0x80002824: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_80001C20(rdram, ctx);
        goto after_4;
    // 0x80002824: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_4:
    // 0x80002828: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x8000282C: jal         0x80001C20
    // 0x80002830: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_80001C20(rdram, ctx);
        goto after_5;
    // 0x80002830: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_5:
    // 0x80002834: and         $t9, $v0, $fp
    ctx->r25 = ctx->r2 & ctx->r30;
    // 0x80002838: andi        $v1, $v0, 0x3F
    ctx->r3 = ctx->r2 & 0X3F;
    // 0x8000283C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80002840: addiu       $a0, $v1, 0x3
    ctx->r4 = ADD32(ctx->r3, 0X3);
    // 0x80002844: blez        $a0, L_8000289C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80002848: or          $s4, $s4, $t0
        ctx->r20 = ctx->r20 | ctx->r8;
            goto L_8000289C;
    }
    // 0x80002848: or          $s4, $s4, $t0
    ctx->r20 = ctx->r20 | ctx->r8;
    // 0x8000284C: or          $v1, $s4, $zero
    ctx->r3 = ctx->r20 | 0;
L_80002850:
    // 0x80002850: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x80002854: andi        $t1, $v1, 0x3FF
    ctx->r9 = ctx->r3 & 0X3FF;
    // 0x80002858: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8000285C: lbu         $v0, 0x0($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X0);
    // 0x80002860: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80002864: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80002868: lhu         $t5, 0x0($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X0);
    // 0x8000286C: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    // 0x80002870: slt         $at, $s1, $a0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80002874: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80002878: sb          $v0, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r2;
    // 0x8000287C: lhu         $t7, 0x0($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X0);
    // 0x80002880: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80002884: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80002888: sh          $t9, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r25;
    // 0x8000288C: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x80002890: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80002894: bne         $at, $zero, L_80002850
    if (ctx->r1 != 0) {
        // 0x80002898: sh          $t0, 0x0($s0)
        MEM_H(0X0, ctx->r16) = ctx->r8;
            goto L_80002850;
    }
    // 0x80002898: sh          $t0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r8;
L_8000289C:
    // 0x8000289C: subu        $s6, $s6, $s1
    ctx->r22 = SUB32(ctx->r22, ctx->r17);
L_800028A0:
    // 0x800028A0: bne         $s6, $zero, L_800027B8
    if (ctx->r22 != 0) {
        // 0x800028A4: srl         $v1, $s5, 1
        ctx->r3 = S32(U32(ctx->r21) >> 1);
            goto L_800027B8;
    }
    // 0x800028A4: srl         $v1, $s5, 1
    ctx->r3 = S32(U32(ctx->r21) >> 1);
L_800028A8:
    // 0x800028A8: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x800028AC: jal         0x80006DC0
    // 0x800028B0: nop

    func_80006DC0(rdram, ctx);
        goto after_6;
    // 0x800028B0: nop

    after_6:
    // 0x800028B4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800028B8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800028BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800028C0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800028C4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800028C8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800028CC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800028D0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800028D4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800028D8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800028DC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800028E0: sw          $zero, -0x18A0($at)
    MEM_W(-0X18A0, ctx->r1) = 0;
    // 0x800028E4: jr          $ra
    // 0x800028E8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800028E8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800028F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800028F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800028F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800028F8: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x800028FC: addiu       $a1, $a1, -0x1890
    ctx->r5 = ADD32(ctx->r5, -0X1890);
    // 0x80002900: jal         0x80073EF0
    // 0x80002904: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80073EF0(rdram, ctx);
        goto after_0;
    // 0x80002904: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x80002908: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8000290C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80002910: addiu       $a1, $a1, 0x5558
    ctx->r5 = ADD32(ctx->r5, 0X5558);
    // 0x80002914: addiu       $v0, $v0, 0x44F0
    ctx->r2 = ADD32(ctx->r2, 0X44F0);
    // 0x80002918: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8000291C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_80002920:
    // 0x80002920: addiu       $v0, $v0, 0x1C
    ctx->r2 = ADD32(ctx->r2, 0X1C);
    // 0x80002924: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x80002928: sw          $v1, -0x14($v0)
    MEM_W(-0X14, ctx->r2) = ctx->r3;
    // 0x8000292C: sw          $a0, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->r4;
    // 0x80002930: bne         $at, $zero, L_80002920
    if (ctx->r1 != 0) {
        // 0x80002934: sw          $zero, -0x8($v0)
        MEM_W(-0X8, ctx->r2) = 0;
            goto L_80002920;
    }
    // 0x80002934: sw          $zero, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = 0;
    // 0x80002938: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x8000293C: addiu       $t1, $t1, 0x44F0
    ctx->r9 = ADD32(ctx->r9, 0X44F0);
    // 0x80002940: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80002944: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80002948: sw          $t1, 0x160($at)
    MEM_W(0X160, ctx->r1) = ctx->r9;
    // 0x8000294C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80002950: addiu       $v0, $v0, 0x168
    ctx->r2 = ADD32(ctx->r2, 0X168);
    // 0x80002954: addiu       $t6, $t6, 0x450C
    ctx->r14 = ADD32(ctx->r14, 0X450C);
    // 0x80002958: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8000295C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80002960: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x80002964: sw          $t6, 0x164($at)
    MEM_W(0X164, ctx->r1) = ctx->r14;
    // 0x80002968: addiu       $t2, $t2, 0x4528
    ctx->r10 = ADD32(ctx->r10, 0X4528);
    // 0x8000296C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80002970: sw          $t2, 0x15C($at)
    MEM_W(0X15C, ctx->r1) = ctx->r10;
    // 0x80002974: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80002978: addiu       $a2, $t8, 0x4560
    ctx->r6 = ADD32(ctx->r24, 0X4560);
    // 0x8000297C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80002980: sw          $a2, 0x4548($at)
    MEM_W(0X4548, ctx->r1) = ctx->r6;
    // 0x80002984: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80002988: sw          $t2, 0x4544($at)
    MEM_W(0X4544, ctx->r1) = ctx->r10;
    // 0x8000298C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80002990: addiu       $v0, $t9, 0x457C
    ctx->r2 = ADD32(ctx->r25, 0X457C);
    // 0x80002994: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80002998: sw          $v0, 0x4564($at)
    MEM_W(0X4564, ctx->r1) = ctx->r2;
    // 0x8000299C: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x800029A0: addiu       $t3, $t3, 0x4544
    ctx->r11 = ADD32(ctx->r11, 0X4544);
    // 0x800029A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800029A8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800029AC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800029B0: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x800029B4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800029B8: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x800029BC: addiu       $t0, $t0, 0x55AC
    ctx->r8 = ADD32(ctx->r8, 0X55AC);
    // 0x800029C0: addiu       $a1, $a1, 0x45EC
    ctx->r5 = ADD32(ctx->r5, 0X45EC);
    // 0x800029C4: addiu       $a3, $a3, 0x45D0
    ctx->r7 = ADD32(ctx->r7, 0X45D0);
    // 0x800029C8: addiu       $a0, $a0, 0x45B4
    ctx->r4 = ADD32(ctx->r4, 0X45B4);
    // 0x800029CC: addiu       $v1, $v1, 0x4598
    ctx->r3 = ADD32(ctx->r3, 0X4598);
    // 0x800029D0: sw          $t3, 0x4560($at)
    MEM_W(0X4560, ctx->r1) = ctx->r11;
L_800029D4:
    // 0x800029D4: sw          $a1, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r5;
    // 0x800029D8: addiu       $a1, $a1, 0x70
    ctx->r5 = ADD32(ctx->r5, 0X70);
    // 0x800029DC: sw          $a0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r4;
    // 0x800029E0: sw          $v0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r2;
    // 0x800029E4: sw          $a3, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r7;
    // 0x800029E8: sw          $v1, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r3;
    // 0x800029EC: sw          $a0, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->r4;
    // 0x800029F0: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x800029F4: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x800029F8: addiu       $a2, $a2, 0x70
    ctx->r6 = ADD32(ctx->r6, 0X70);
    // 0x800029FC: addiu       $v1, $v1, 0x70
    ctx->r3 = ADD32(ctx->r3, 0X70);
    // 0x80002A00: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x80002A04: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x80002A08: bne         $a1, $t0, L_800029D4
    if (ctx->r5 != ctx->r8) {
        // 0x80002A0C: addiu       $v0, $v0, 0x70
        ctx->r2 = ADD32(ctx->r2, 0X70);
            goto L_800029D4;
    }
    // 0x80002A0C: addiu       $v0, $v0, 0x70
    ctx->r2 = ADD32(ctx->r2, 0X70);
    // 0x80002A10: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x80002A14: addiu       $t5, $t5, 0x5520
    ctx->r13 = ADD32(ctx->r13, 0X5520);
    // 0x80002A18: sw          $zero, 0x1050($t1)
    MEM_W(0X1050, ctx->r9) = 0;
    // 0x80002A1C: sw          $zero, 0x38($t1)
    MEM_W(0X38, ctx->r9) = 0;
    // 0x80002A20: sw          $t3, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->r11;
    // 0x80002A24: sw          $t5, 0x104C($t1)
    MEM_W(0X104C, ctx->r9) = ctx->r13;
    // 0x80002A28: sw          $zero, 0x20($t1)
    MEM_W(0X20, ctx->r9) = 0;
    // 0x80002A2C: sw          $zero, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = 0;
    // 0x80002A30: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x80002A34: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    // 0x80002A38: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80002A3C: sw          $zero, 0x154($at)
    MEM_W(0X154, ctx->r1) = 0;
    // 0x80002A40: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80002A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80002A48: sw          $zero, 0x158($at)
    MEM_W(0X158, ctx->r1) = 0;
    // 0x80002A4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80002A50: sw          $zero, 0x150($at)
    MEM_W(0X150, ctx->r1) = 0;
    // 0x80002A54: jr          $ra
    // 0x80002A58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80002A58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80002A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002A5C: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80002A60: lw          $t6, 0x160($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X160);
    // 0x80002A64: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80002A68: lw          $v1, 0x4($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X4);
    // 0x80002A6C: nop

    // 0x80002A70: beq         $v1, $zero, L_80002AA4
    if (ctx->r3 == 0) {
        // 0x80002A74: nop
    
            goto L_80002AA4;
    }
    // 0x80002A74: nop

L_80002A78:
    // 0x80002A78: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x80002A7C: nop

    // 0x80002A80: bne         $a0, $t7, L_80002A94
    if (ctx->r4 != ctx->r15) {
        // 0x80002A84: nop
    
            goto L_80002A94;
    }
    // 0x80002A84: nop

    // 0x80002A88: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x80002A8C: jr          $ra
    // 0x80002A90: nop

    return;
    // 0x80002A90: nop

L_80002A94:
    // 0x80002A94: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x80002A98: nop

    // 0x80002A9C: bne         $v1, $zero, L_80002A78
    if (ctx->r3 != 0) {
        // 0x80002AA0: nop
    
            goto L_80002A78;
    }
    // 0x80002AA0: nop

L_80002AA4:
    // 0x80002AA4: jr          $ra
    // 0x80002AA8: nop

    return;
    // 0x80002AA8: nop

;}
RECOMP_FUNC void func_80002AAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002AAC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80002AB0: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80002AB4: lw          $t6, 0x164($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X164);
    // 0x80002AB8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80002ABC: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80002AC0: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80002AC4: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80002AC8: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80002ACC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80002AD0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80002AD4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80002AD8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80002ADC: lw          $s0, 0x4($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X4);
    // 0x80002AE0: lui         $s7, 0x800A
    ctx->r23 = S32(0X800A << 16);
    // 0x80002AE4: beq         $s0, $zero, L_80002BE4
    if (ctx->r16 == 0) {
        // 0x80002AE8: addiu       $s7, $s7, 0x168
        ctx->r23 = ADD32(ctx->r23, 0X168);
            goto L_80002BE4;
    }
    // 0x80002AE8: addiu       $s7, $s7, 0x168
    ctx->r23 = ADD32(ctx->r23, 0X168);
    // 0x80002AEC: lui         $s5, 0x800A
    ctx->r21 = S32(0X800A << 16);
    // 0x80002AF0: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x80002AF4: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x80002AF8: addiu       $s2, $s2, 0x15C
    ctx->r18 = ADD32(ctx->r18, 0X15C);
    // 0x80002AFC: addiu       $s4, $s4, 0x150
    ctx->r20 = ADD32(ctx->r20, 0X150);
    // 0x80002B00: addiu       $s5, $s5, 0x158
    ctx->r21 = ADD32(ctx->r21, 0X158);
    // 0x80002B04: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x80002B08: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
L_80002B0C:
    // 0x80002B0C: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x80002B10: lw          $s1, 0x4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X4);
    // 0x80002B14: beq         $s3, $t7, L_80002BDC
    if (ctx->r19 == ctx->r15) {
        // 0x80002B18: nop
    
            goto L_80002BDC;
    }
    // 0x80002B18: nop

    // 0x80002B1C: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x80002B20: nop

    // 0x80002B24: bne         $t8, $zero, L_80002BDC
    if (ctx->r24 != 0) {
        // 0x80002B28: nop
    
            goto L_80002BDC;
    }
    // 0x80002B28: nop

    // 0x80002B2C: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x80002B30: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x80002B34: nop

    // 0x80002B38: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x80002B3C: sw          $t1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r9;
    // 0x80002B40: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x80002B44: jal         0x80006DC0
    // 0x80002B48: nop

    func_80006DC0(rdram, ctx);
        goto after_0;
    // 0x80002B48: nop

    after_0:
    // 0x80002B4C: sw          $s6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r22;
    // 0x80002B50: sw          $s3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r19;
    // 0x80002B54: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
    // 0x80002B58: nop

    // 0x80002B5C: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x80002B60: sw          $t3, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r11;
    // 0x80002B64: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x80002B68: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x80002B6C: nop

    // 0x80002B70: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80002B74: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80002B78: nop

    // 0x80002B7C: beq         $v0, $zero, L_80002B90
    if (ctx->r2 == 0) {
        // 0x80002B80: nop
    
            goto L_80002B90;
    }
    // 0x80002B80: nop

    // 0x80002B84: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80002B88: b           L_80002B9C
    // 0x80002B8C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
        goto L_80002B9C;
    // 0x80002B8C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_80002B90:
    // 0x80002B90: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80002B94: nop

    // 0x80002B98: sw          $t7, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r15;
L_80002B9C:
    // 0x80002B9C: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x80002BA0: nop

    // 0x80002BA4: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80002BA8: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x80002BAC: nop

    // 0x80002BB0: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x80002BB4: nop

    // 0x80002BB8: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x80002BBC: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x80002BC0: nop

    // 0x80002BC4: sw          $s0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r16;
    // 0x80002BC8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80002BCC: nop

    // 0x80002BD0: beq         $v0, $zero, L_80002BDC
    if (ctx->r2 == 0) {
        // 0x80002BD4: nop
    
            goto L_80002BDC;
    }
    // 0x80002BD4: nop

    // 0x80002BD8: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
L_80002BDC:
    // 0x80002BDC: bne         $s1, $zero, L_80002B0C
    if (ctx->r17 != 0) {
        // 0x80002BE0: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80002B0C;
    }
    // 0x80002BE0: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_80002BE4:
    // 0x80002BE4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80002BE8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80002BEC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80002BF0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80002BF4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80002BF8: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80002BFC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80002C00: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80002C04: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80002C08: jr          $ra
    // 0x80002C0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80002C0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80002C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002C10: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80002C14: lw          $t6, 0x160($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X160);
    // 0x80002C18: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80002C1C: lw          $v0, 0x4($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X4);
    // 0x80002C20: addiu       $a1, $a1, 0x164
    ctx->r5 = ADD32(ctx->r5, 0X164);
    // 0x80002C24: beq         $v0, $zero, L_80002CF8
    if (ctx->r2 == 0) {
        // 0x80002C28: nop
    
            goto L_80002CF8;
    }
    // 0x80002C28: nop

L_80002C2C:
    // 0x80002C2C: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x80002C30: nop

    // 0x80002C34: bne         $a0, $t7, L_80002CE8
    if (ctx->r4 != ctx->r15) {
        // 0x80002C38: nop
    
            goto L_80002CE8;
    }
    // 0x80002C38: nop

    // 0x80002C3C: lw          $t8, 0x14($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X14);
    // 0x80002C40: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80002C44: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80002C48: bne         $t9, $zero, L_80002CF8
    if (ctx->r25 != 0) {
        // 0x80002C4C: sw          $t9, 0x14($v0)
        MEM_W(0X14, ctx->r2) = ctx->r25;
            goto L_80002CF8;
    }
    // 0x80002C4C: sw          $t9, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r25;
    // 0x80002C50: addiu       $a0, $a0, 0x154
    ctx->r4 = ADD32(ctx->r4, 0X154);
    // 0x80002C54: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80002C58: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x80002C5C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80002C60: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80002C64: lw          $t3, -0x19B0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X19B0);
    // 0x80002C68: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x80002C6C: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x80002C70: sw          $t3, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r11;
    // 0x80002C74: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80002C78: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x80002C7C: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80002C80: beq         $v1, $zero, L_80002C94
    if (ctx->r3 == 0) {
        // 0x80002C84: addiu       $a0, $a0, 0x158
        ctx->r4 = ADD32(ctx->r4, 0X158);
            goto L_80002C94;
    }
    // 0x80002C84: addiu       $a0, $a0, 0x158
    ctx->r4 = ADD32(ctx->r4, 0X158);
    // 0x80002C88: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80002C8C: nop

    // 0x80002C90: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_80002C94:
    // 0x80002C94: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80002C98: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x80002C9C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80002CA0: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80002CA4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80002CA8: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x80002CAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80002CB0: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x80002CB4: nop

    // 0x80002CB8: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80002CBC: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x80002CC0: nop

    // 0x80002CC4: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    // 0x80002CC8: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x80002CCC: nop

    // 0x80002CD0: beq         $v1, $zero, L_80002CE0
    if (ctx->r3 == 0) {
        // 0x80002CD4: nop
    
            goto L_80002CE0;
    }
    // 0x80002CD4: nop

    // 0x80002CD8: jr          $ra
    // 0x80002CDC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    return;
    // 0x80002CDC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_80002CE0:
    // 0x80002CE0: jr          $ra
    // 0x80002CE4: sw          $v0, 0x168($at)
    MEM_W(0X168, ctx->r1) = ctx->r2;
    return;
    // 0x80002CE4: sw          $v0, 0x168($at)
    MEM_W(0X168, ctx->r1) = ctx->r2;
L_80002CE8:
    // 0x80002CE8: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80002CEC: nop

    // 0x80002CF0: bne         $v0, $zero, L_80002C2C
    if (ctx->r2 != 0) {
        // 0x80002CF4: nop
    
            goto L_80002C2C;
    }
    // 0x80002CF4: nop

L_80002CF8:
    // 0x80002CF8: jr          $ra
    // 0x80002CFC: nop

    return;
    // 0x80002CFC: nop

    // 0x80002D00: jr          $ra
    // 0x80002D04: nop

    return;
    // 0x80002D04: nop

;}
RECOMP_FUNC void func_80002D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002D08: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80002D0C: beq         $a0, $at, L_80002E0C
    if (ctx->r4 == ctx->r1) {
        // 0x80002D10: lui         $t6, 0x800A
        ctx->r14 = S32(0X800A << 16);
            goto L_80002E0C;
    }
    // 0x80002D10: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80002D14: lw          $t6, 0x160($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X160);
    // 0x80002D18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80002D1C: lw          $v1, 0x4($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X4);
    // 0x80002D20: nop

    // 0x80002D24: beq         $v1, $zero, L_80002D54
    if (ctx->r3 == 0) {
        // 0x80002D28: nop
    
            goto L_80002D54;
    }
    // 0x80002D28: nop

L_80002D2C:
    // 0x80002D2C: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x80002D30: nop

    // 0x80002D34: bne         $a0, $t7, L_80002D44
    if (ctx->r4 != ctx->r15) {
        // 0x80002D38: nop
    
            goto L_80002D44;
    }
    // 0x80002D38: nop

    // 0x80002D3C: b           L_80002D54
    // 0x80002D40: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80002D54;
    // 0x80002D40: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80002D44:
    // 0x80002D44: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x80002D48: nop

    // 0x80002D4C: bne         $v1, $zero, L_80002D2C
    if (ctx->r3 != 0) {
        // 0x80002D50: nop
    
            goto L_80002D2C;
    }
    // 0x80002D50: nop

L_80002D54:
    // 0x80002D54: beq         $v0, $zero, L_80002E0C
    if (ctx->r2 == 0) {
        // 0x80002D58: nop
    
            goto L_80002E0C;
    }
    // 0x80002D58: nop

    // 0x80002D5C: lw          $t8, 0x14($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X14);
    // 0x80002D60: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80002D64: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80002D68: bne         $t9, $zero, L_80002E0C
    if (ctx->r25 != 0) {
        // 0x80002D6C: sw          $t9, 0x14($v0)
        MEM_W(0X14, ctx->r2) = ctx->r25;
            goto L_80002E0C;
    }
    // 0x80002D6C: sw          $t9, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r25;
    // 0x80002D70: addiu       $a0, $a0, 0x154
    ctx->r4 = ADD32(ctx->r4, 0X154);
    // 0x80002D74: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80002D78: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x80002D7C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80002D80: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80002D84: lw          $t3, -0x19B0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X19B0);
    // 0x80002D88: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x80002D8C: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x80002D90: sw          $t3, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r11;
    // 0x80002D94: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80002D98: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x80002D9C: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80002DA0: beq         $v1, $zero, L_80002DB4
    if (ctx->r3 == 0) {
        // 0x80002DA4: addiu       $a0, $a0, 0x158
        ctx->r4 = ADD32(ctx->r4, 0X158);
            goto L_80002DB4;
    }
    // 0x80002DA4: addiu       $a0, $a0, 0x158
    ctx->r4 = ADD32(ctx->r4, 0X158);
    // 0x80002DA8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80002DAC: nop

    // 0x80002DB0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_80002DB4:
    // 0x80002DB4: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80002DB8: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80002DBC: addiu       $a1, $a1, 0x164
    ctx->r5 = ADD32(ctx->r5, 0X164);
    // 0x80002DC0: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x80002DC4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80002DC8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80002DCC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80002DD0: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x80002DD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80002DD8: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x80002DDC: nop

    // 0x80002DE0: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80002DE4: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x80002DE8: nop

    // 0x80002DEC: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    // 0x80002DF0: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x80002DF4: nop

    // 0x80002DF8: beq         $v1, $zero, L_80002E08
    if (ctx->r3 == 0) {
        // 0x80002DFC: nop
    
            goto L_80002E08;
    }
    // 0x80002DFC: nop

    // 0x80002E00: jr          $ra
    // 0x80002E04: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    return;
    // 0x80002E04: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_80002E08:
    // 0x80002E08: sw          $v0, 0x168($at)
    MEM_W(0X168, ctx->r1) = ctx->r2;
L_80002E0C:
    // 0x80002E0C: jr          $ra
    // 0x80002E10: nop

    return;
    // 0x80002E10: nop

;}
RECOMP_FUNC void func_80002E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002E14: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80002E18: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80002E1C: lui         $fp, 0x800A
    ctx->r30 = S32(0X800A << 16);
    // 0x80002E20: addiu       $fp, $fp, 0x168
    ctx->r30 = ADD32(ctx->r30, 0X168);
    // 0x80002E24: lw          $v0, 0x0($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X0);
    // 0x80002E28: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80002E2C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80002E30: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80002E34: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80002E38: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80002E3C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80002E40: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80002E44: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80002E48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80002E4C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80002E50: nop

    // 0x80002E54: bne         $t6, $zero, L_80002E64
    if (ctx->r14 != 0) {
        // 0x80002E58: nop
    
            goto L_80002E64;
    }
    // 0x80002E58: nop

    // 0x80002E5C: b           L_80002F50
    // 0x80002E60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80002F50;
    // 0x80002E60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80002E64:
    // 0x80002E64: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80002E68: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80002E6C: beq         $t7, $zero, L_80002F4C
    if (ctx->r15 == 0) {
        // 0x80002E70: lui         $v0, 0x800A
        ctx->r2 = S32(0X800A << 16);
            goto L_80002F4C;
    }
    // 0x80002E70: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80002E74: lui         $s7, 0x5
    ctx->r23 = S32(0X5 << 16);
    // 0x80002E78: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x80002E7C: lui         $s3, 0x800A
    ctx->r19 = S32(0X800A << 16);
    // 0x80002E80: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x80002E84: lw          $v0, 0x150($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X150);
    // 0x80002E88: addiu       $s2, $s2, 0x15C
    ctx->r18 = ADD32(ctx->r18, 0X15C);
    // 0x80002E8C: addiu       $s3, $s3, 0x150
    ctx->r19 = ADD32(ctx->r19, 0X150);
    // 0x80002E90: addiu       $s4, $s4, 0x158
    ctx->r20 = ADD32(ctx->r20, 0X158);
    // 0x80002E94: ori         $s7, $s7, 0x7800
    ctx->r23 = ctx->r23 | 0X7800;
    // 0x80002E98: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x80002E9C: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
L_80002EA0:
    // 0x80002EA0: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x80002EA4: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x80002EA8: subu        $t9, $v0, $t8
    ctx->r25 = SUB32(ctx->r2, ctx->r24);
    // 0x80002EAC: sw          $t9, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r25;
    // 0x80002EB0: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x80002EB4: jal         0x80006DC0
    // 0x80002EB8: nop

    func_80006DC0(rdram, ctx);
        goto after_0;
    // 0x80002EB8: nop

    after_0:
    // 0x80002EBC: sw          $s5, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r21;
    // 0x80002EC0: sw          $s6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r22;
    // 0x80002EC4: lw          $t0, 0x0($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X0);
    // 0x80002EC8: nop

    // 0x80002ECC: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80002ED0: sw          $t1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r9;
    // 0x80002ED4: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x80002ED8: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80002EDC: nop

    // 0x80002EE0: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x80002EE4: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x80002EE8: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x80002EEC: sw          $t4, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r12;
    // 0x80002EF0: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x80002EF4: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x80002EF8: nop

    // 0x80002EFC: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80002F00: nop

    // 0x80002F04: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x80002F08: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x80002F0C: nop

    // 0x80002F10: sw          $s0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r16;
    // 0x80002F14: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80002F18: nop

    // 0x80002F1C: beq         $v0, $zero, L_80002F28
    if (ctx->r2 == 0) {
        // 0x80002F20: nop
    
            goto L_80002F28;
    }
    // 0x80002F20: nop

    // 0x80002F24: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
L_80002F28:
    // 0x80002F28: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x80002F2C: nop

    // 0x80002F30: slt         $at, $v0, $s7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x80002F34: bne         $at, $zero, L_80002F4C
    if (ctx->r1 != 0) {
        // 0x80002F38: nop
    
            goto L_80002F4C;
    }
    // 0x80002F38: nop

    // 0x80002F3C: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80002F40: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x80002F44: bne         $t9, $zero, L_80002EA0
    if (ctx->r25 != 0) {
        // 0x80002F48: nop
    
            goto L_80002EA0;
    }
    // 0x80002F48: nop

L_80002F4C:
    // 0x80002F4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80002F50:
    // 0x80002F50: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80002F54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80002F58: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80002F5C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80002F60: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80002F64: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80002F68: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80002F6C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80002F70: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80002F74: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80002F78: jr          $ra
    // 0x80002F7C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80002F7C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80002F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002F80: jr          $ra
    // 0x80002F84: nop

    return;
    // 0x80002F84: nop

;}
RECOMP_FUNC void func_80002F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002F88: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80002F8C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80002F90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80002F94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80002F98: bne         $a0, $at, L_80002FA8
    if (ctx->r4 != ctx->r1) {
        // 0x80002F9C: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_80002FA8;
    }
    // 0x80002F9C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80002FA0: b           L_8000333C
    // 0x80002FA4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8000333C;
    // 0x80002FA4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80002FA8:
    // 0x80002FA8: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x80002FAC: addiu       $a3, $a3, 0x160
    ctx->r7 = ADD32(ctx->r7, 0X160);
    // 0x80002FB0: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80002FB4: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80002FB8: lw          $v1, 0x4($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X4);
    // 0x80002FBC: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x80002FC0: beq         $v1, $zero, L_80002FF0
    if (ctx->r3 == 0) {
        // 0x80002FC4: lui         $a0, 0x8009
        ctx->r4 = S32(0X8009 << 16);
            goto L_80002FF0;
    }
    // 0x80002FC4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
L_80002FC8:
    // 0x80002FC8: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x80002FCC: nop

    // 0x80002FD0: bne         $a2, $t7, L_80002FE0
    if (ctx->r6 != ctx->r15) {
        // 0x80002FD4: nop
    
            goto L_80002FE0;
    }
    // 0x80002FD4: nop

    // 0x80002FD8: b           L_80003040
    // 0x80002FDC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80003040;
    // 0x80002FDC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80002FE0:
    // 0x80002FE0: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x80002FE4: nop

    // 0x80002FE8: bne         $v1, $zero, L_80002FC8
    if (ctx->r3 != 0) {
        // 0x80002FEC: nop
    
            goto L_80002FC8;
    }
    // 0x80002FEC: nop

L_80002FF0:
    // 0x80002FF0: lw          $t8, 0x164($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X164);
    // 0x80002FF4: nop

    // 0x80002FF8: lw          $v1, 0x4($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X4);
    // 0x80002FFC: nop

    // 0x80003000: beq         $v1, $zero, L_80003030
    if (ctx->r3 == 0) {
        // 0x80003004: nop
    
            goto L_80003030;
    }
    // 0x80003004: nop

L_80003008:
    // 0x80003008: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x8000300C: nop

    // 0x80003010: bne         $a2, $t9, L_80003020
    if (ctx->r6 != ctx->r25) {
        // 0x80003014: nop
    
            goto L_80003020;
    }
    // 0x80003014: nop

    // 0x80003018: b           L_80003040
    // 0x8000301C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80003040;
    // 0x8000301C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80003020:
    // 0x80003020: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x80003024: nop

    // 0x80003028: bne         $v1, $zero, L_80003008
    if (ctx->r3 != 0) {
        // 0x8000302C: nop
    
            goto L_80003008;
    }
    // 0x8000302C: nop

L_80003030:
    // 0x80003030: lw          $t0, 0x15C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X15C);
    // 0x80003034: nop

    // 0x80003038: lw          $v0, 0x4($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X4);
    // 0x8000303C: nop

L_80003040:
    // 0x80003040: bne         $v0, $zero, L_80003064
    if (ctx->r2 != 0) {
        // 0x80003044: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80003064;
    }
    // 0x80003044: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80003048: addiu       $a0, $a0, 0x4B30
    ctx->r4 = ADD32(ctx->r4, 0X4B30);
    // 0x8000304C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80003050: jal         0x80000FBC
    // 0x80003054: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x80003054: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    after_0:
    // 0x80003058: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x8000305C: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x80003060: addiu       $a3, $a3, 0x160
    ctx->r7 = ADD32(ctx->r7, 0X160);
L_80003064:
    // 0x80003064: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x80003068: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x8000306C: beq         $a2, $t1, L_8000328C
    if (ctx->r6 == ctx->r9) {
        // 0x80003070: addiu       $v1, $v1, 0x154
        ctx->r3 = ADD32(ctx->r3, 0X154);
            goto L_8000328C;
    }
    // 0x80003070: addiu       $v1, $v1, 0x154
    ctx->r3 = ADD32(ctx->r3, 0X154);
    // 0x80003074: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x80003078: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x8000307C: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x80003080: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x80003084: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80003088: nop

    // 0x8000308C: beq         $v0, $zero, L_800030A0
    if (ctx->r2 == 0) {
        // 0x80003090: nop
    
            goto L_800030A0;
    }
    // 0x80003090: nop

    // 0x80003094: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x80003098: nop

    // 0x8000309C: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
L_800030A0:
    // 0x800030A0: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x800030A4: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x800030A8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800030AC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800030B0: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x800030B4: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x800030B8: nop

    // 0x800030BC: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x800030C0: nop

    // 0x800030C4: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x800030C8: lw          $t0, 0x0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X0);
    // 0x800030CC: nop

    // 0x800030D0: sw          $s0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r16;
    // 0x800030D4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800030D8: nop

    // 0x800030DC: beq         $v0, $zero, L_800030E8
    if (ctx->r2 == 0) {
        // 0x800030E0: nop
    
            goto L_800030E8;
    }
    // 0x800030E0: nop

    // 0x800030E4: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
L_800030E8:
    // 0x800030E8: sw          $a2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r6;
    // 0x800030EC: jal         0x800021E8
    // 0x800030F0: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    func_800021E8(rdram, ctx);
        goto after_1;
    // 0x800030F0: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    after_1:
    // 0x800030F4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x800030F8: jal         0x80001E6C
    // 0x800030FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80001E6C(rdram, ctx);
        goto after_2;
    // 0x800030FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80003100: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80003104: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x80003108: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8000310C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80003110: jal         0x80001A88
    // 0x80003114: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_80001A88(rdram, ctx);
        goto after_3;
    // 0x80003114: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_3:
    // 0x80003118: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8000311C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80003120: sw          $t1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r9;
    // 0x80003124: addiu       $v1, $v1, 0x150
    ctx->r3 = ADD32(ctx->r3, 0X150);
    // 0x80003128: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x8000312C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80003130: lui         $at, 0x5
    ctx->r1 = S32(0X5 << 16);
    // 0x80003134: ori         $at, $at, 0x7800
    ctx->r1 = ctx->r1 | 0X7800;
    // 0x80003138: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8000313C: slt         $at, $t4, $at
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80003140: bne         $at, $zero, L_80003150
    if (ctx->r1 != 0) {
        // 0x80003144: sw          $t4, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r12;
            goto L_80003150;
    }
    // 0x80003144: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80003148: jal         0x80002E14
    // 0x8000314C: nop

    func_80002E14(rdram, ctx);
        goto after_4;
    // 0x8000314C: nop

    after_4:
L_80003150:
    // 0x80003150: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80003154: jal         0x80006D20
    // 0x80003158: nop

    func_80006D20(rdram, ctx);
        goto after_5;
    // 0x80003158: nop

    after_5:
    // 0x8000315C: bne         $v0, $zero, L_8000318C
    if (ctx->r2 != 0) {
        // 0x80003160: lw          $a0, 0x44($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X44);
            goto L_8000318C;
    }
    // 0x80003160: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
L_80003164:
    // 0x80003164: jal         0x80002E14
    // 0x80003168: nop

    func_80002E14(rdram, ctx);
        goto after_6;
    // 0x80003168: nop

    after_6:
    // 0x8000316C: bne         $v0, $zero, L_8000318C
    if (ctx->r2 != 0) {
        // 0x80003170: lw          $a0, 0x44($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X44);
            goto L_8000318C;
    }
    // 0x80003170: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80003174: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80003178: jal         0x80006D20
    // 0x8000317C: nop

    func_80006D20(rdram, ctx);
        goto after_7;
    // 0x8000317C: nop

    after_7:
    // 0x80003180: beq         $v0, $zero, L_80003164
    if (ctx->r2 == 0) {
        // 0x80003184: nop
    
            goto L_80003164;
    }
    // 0x80003184: nop

    // 0x80003188: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
L_8000318C:
    // 0x8000318C: jal         0x80006DFC
    // 0x80003190: nop

    func_80006DFC(rdram, ctx);
        goto after_8;
    // 0x80003190: nop

    after_8:
    // 0x80003194: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80003198: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8000319C: jal         0x80001F90
    // 0x800031A0: nop

    func_80001F90(rdram, ctx);
        goto after_9;
    // 0x800031A0: nop

    after_9:
    // 0x800031A4: addiu       $t6, $v0, -0x4
    ctx->r14 = ADD32(ctx->r2, -0X4);
    // 0x800031A8: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x800031AC: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x800031B0: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x800031B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800031B8: jal         0x80001A88
    // 0x800031BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80001A88(rdram, ctx);
        goto after_10;
    // 0x800031BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x800031C0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800031C4: addiu       $a1, $zero, -0x4
    ctx->r5 = ADD32(0, -0X4);
    // 0x800031C8: jal         0x800016BC
    // 0x800031CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800016BC(rdram, ctx);
        goto after_11;
    // 0x800031CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x800031D0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800031D4: lui         $at, 0x5961
    ctx->r1 = S32(0X5961 << 16);
    // 0x800031D8: ori         $at, $at, 0x7930
    ctx->r1 = ctx->r1 | 0X7930;
    // 0x800031DC: bne         $t7, $at, L_80003268
    if (ctx->r15 != ctx->r1) {
        // 0x800031E0: lw          $a0, 0x40($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X40);
            goto L_80003268;
    }
    // 0x800031E0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800031E4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800031E8: jal         0x80006D20
    // 0x800031EC: nop

    func_80006D20(rdram, ctx);
        goto after_12;
    // 0x800031EC: nop

    after_12:
    // 0x800031F0: bne         $v0, $zero, L_80003220
    if (ctx->r2 != 0) {
        // 0x800031F4: lw          $a0, 0x34($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X34);
            goto L_80003220;
    }
    // 0x800031F4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
L_800031F8:
    // 0x800031F8: jal         0x80002E14
    // 0x800031FC: nop

    func_80002E14(rdram, ctx);
        goto after_13;
    // 0x800031FC: nop

    after_13:
    // 0x80003200: bne         $v0, $zero, L_80003220
    if (ctx->r2 != 0) {
        // 0x80003204: lw          $a0, 0x34($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X34);
            goto L_80003220;
    }
    // 0x80003204: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80003208: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8000320C: jal         0x80006D20
    // 0x80003210: nop

    func_80006D20(rdram, ctx);
        goto after_14;
    // 0x80003210: nop

    after_14:
    // 0x80003214: beq         $v0, $zero, L_800031F8
    if (ctx->r2 == 0) {
        // 0x80003218: nop
    
            goto L_800031F8;
    }
    // 0x80003218: nop

    // 0x8000321C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
L_80003220:
    // 0x80003220: jal         0x80006DFC
    // 0x80003224: nop

    func_80006DFC(rdram, ctx);
        goto after_15;
    // 0x80003224: nop

    after_15:
    // 0x80003228: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x8000322C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80003230: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80003234: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80003238: jal         0x80001A88
    // 0x8000323C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80001A88(rdram, ctx);
        goto after_16;
    // 0x8000323C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
    // 0x80003240: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80003244: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x80003248: jal         0x80073F10
    // 0x8000324C: nop

    func_80073F10(rdram, ctx);
        goto after_17;
    // 0x8000324C: nop

    after_17:
    // 0x80003250: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80003254: jal         0x80006DC0
    // 0x80003258: nop

    func_80006DC0(rdram, ctx);
        goto after_18;
    // 0x80003258: nop

    after_18:
    // 0x8000325C: b           L_8000327C
    // 0x80003260: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
        goto L_8000327C;
    // 0x80003260: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80003264: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
L_80003268:
    // 0x80003268: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x8000326C: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80003270: jal         0x80002730
    // 0x80003274: nop

    func_80002730(rdram, ctx);
        goto after_19;
    // 0x80003274: nop

    after_19:
    // 0x80003278: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
L_8000327C:
    // 0x8000327C: jal         0x80001C84
    // 0x80003280: nop

    func_80001C84(rdram, ctx);
        goto after_20;
    // 0x80003280: nop

    after_20:
    // 0x80003284: b           L_80003330
    // 0x80003288: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
        goto L_80003330;
    // 0x80003288: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
L_8000328C:
    // 0x8000328C: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x80003290: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80003294: bne         $t8, $zero, L_8000332C
    if (ctx->r24 != 0) {
        // 0x80003298: addiu       $v1, $v1, 0x158
        ctx->r3 = ADD32(ctx->r3, 0X158);
            goto L_8000332C;
    }
    // 0x80003298: addiu       $v1, $v1, 0x158
    ctx->r3 = ADD32(ctx->r3, 0X158);
    // 0x8000329C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x800032A0: nop

    // 0x800032A4: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800032A8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x800032AC: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x800032B0: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x800032B4: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x800032B8: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x800032BC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800032C0: addiu       $v1, $v1, 0x154
    ctx->r3 = ADD32(ctx->r3, 0X154);
    // 0x800032C4: beq         $v0, $zero, L_800032D8
    if (ctx->r2 == 0) {
        // 0x800032C8: nop
    
            goto L_800032D8;
    }
    // 0x800032C8: nop

    // 0x800032CC: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x800032D0: b           L_800032E4
    // 0x800032D4: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
        goto L_800032E4;
    // 0x800032D4: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
L_800032D8:
    // 0x800032D8: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x800032DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800032E0: sw          $t4, 0x168($at)
    MEM_W(0X168, ctx->r1) = ctx->r12;
L_800032E4:
    // 0x800032E4: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x800032E8: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x800032EC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800032F0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800032F4: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x800032F8: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x800032FC: nop

    // 0x80003300: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80003304: nop

    // 0x80003308: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x8000330C: lw          $t0, 0x0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X0);
    // 0x80003310: nop

    // 0x80003314: sw          $s0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r16;
    // 0x80003318: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8000331C: nop

    // 0x80003320: beq         $v0, $zero, L_8000332C
    if (ctx->r2 == 0) {
        // 0x80003324: nop
    
            goto L_8000332C;
    }
    // 0x80003324: nop

    // 0x80003328: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
L_8000332C:
    // 0x8000332C: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
L_80003330:
    // 0x80003330: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80003334: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80003338: sw          $t2, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r10;
L_8000333C:
    // 0x8000333C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80003340: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80003344: jr          $ra
    // 0x80003348: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80003348: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80003350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003350: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80003354: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80003358: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8000335C: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x80003360: lbu         $v0, 0x2F4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2F4);
    // 0x80003364: jr          $ra
    // 0x80003368: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80003368: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_8000336C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000336C: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80003370: lh          $t6, 0x354($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X354);
    // 0x80003374: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80003378: beq         $t6, $zero, L_8000338C
    if (ctx->r14 == 0) {
        // 0x8000337C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8000338C;
    }
    // 0x8000337C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003380: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80003384: jal         0x800052E0
    // 0x80003388: addiu       $a0, $a0, 0x348
    ctx->r4 = ADD32(ctx->r4, 0X348);
    func_800052E0(rdram, ctx);
        goto after_0;
    // 0x80003388: addiu       $a0, $a0, 0x348
    ctx->r4 = ADD32(ctx->r4, 0X348);
    after_0:
L_8000338C:
    // 0x8000338C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80003390: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80003394: sh          $zero, 0x354($at)
    MEM_H(0X354, ctx->r1) = 0;
    // 0x80003398: jr          $ra
    // 0x8000339C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8000339C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800033A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800033A0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x800033A4: lh          $v0, 0x354($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X354);
    // 0x800033A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800033AC: beq         $v0, $zero, L_800033CC
    if (ctx->r2 == 0) {
        // 0x800033B0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800033CC;
    }
    // 0x800033B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800033B4: beq         $v0, $zero, L_800033C4
    if (ctx->r2 == 0) {
        // 0x800033B8: lui         $a0, 0x800A
        ctx->r4 = S32(0X800A << 16);
            goto L_800033C4;
    }
    // 0x800033B8: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800033BC: jal         0x800052E0
    // 0x800033C0: addiu       $a0, $a0, 0x348
    ctx->r4 = ADD32(ctx->r4, 0X348);
    func_800052E0(rdram, ctx);
        goto after_0;
    // 0x800033C0: addiu       $a0, $a0, 0x348
    ctx->r4 = ADD32(ctx->r4, 0X348);
    after_0:
L_800033C4:
    // 0x800033C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800033C8: sh          $zero, 0x354($at)
    MEM_H(0X354, ctx->r1) = 0;
L_800033CC:
    // 0x800033CC: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800033D0: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x800033D4: addiu       $a2, $a2, 0x3ABC
    ctx->r6 = ADD32(ctx->r6, 0X3ABC);
    // 0x800033D8: addiu       $a0, $a0, 0x348
    ctx->r4 = ADD32(ctx->r4, 0X348);
    // 0x800033DC: jal         0x80005344
    // 0x800033E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80005344(rdram, ctx);
        goto after_1;
    // 0x800033E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800033E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800033E8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800033EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800033F0: sh          $t6, 0x354($at)
    MEM_H(0X354, ctx->r1) = ctx->r14;
    // 0x800033F4: jr          $ra
    // 0x800033F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800033F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800033FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800033FC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80003400: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80003404: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80003408: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8000340C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80003410: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80003414: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80003418: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8000341C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80003420: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80003424: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80003428: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000342C: addiu       $a0, $a0, 0x358
    ctx->r4 = ADD32(ctx->r4, 0X358);
    // 0x80003430: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80003434: jal         0x80075330
    // 0x80003438: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80003438: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8000343C: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80003440: addiu       $a1, $a1, 0x2B0
    ctx->r5 = ADD32(ctx->r5, 0X2B0);
    // 0x80003444: lh          $v1, 0x0($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X0);
    // 0x80003448: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8000344C: sh          $v1, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r3;
    // 0x80003450: lh          $t6, 0x40($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X40);
    // 0x80003454: addiu       $a0, $a0, 0x2B2
    ctx->r4 = ADD32(ctx->r4, 0X2B2);
    // 0x80003458: beq         $t6, $zero, L_80003694
    if (ctx->r14 == 0) {
        // 0x8000345C: addiu       $t7, $v1, -0x1
        ctx->r15 = ADD32(ctx->r3, -0X1);
            goto L_80003694;
    }
    // 0x8000345C: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x80003460: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x80003464: sh          $t7, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r15;
    // 0x80003468: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x8000346C: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x80003470: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    // 0x80003474: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x80003478: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x8000347C: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x80003480: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80003484: addiu       $t9, $t9, 0x170
    ctx->r25 = ADD32(ctx->r25, 0X170);
    // 0x80003488: slti        $at, $t7, 0x8
    ctx->r1 = SIGNED(ctx->r15) < 0X8 ? 1 : 0;
    // 0x8000348C: bne         $at, $zero, L_80003498
    if (ctx->r1 != 0) {
        // 0x80003490: addu        $s1, $t8, $t9
        ctx->r17 = ADD32(ctx->r24, ctx->r25);
            goto L_80003498;
    }
    // 0x80003490: addu        $s1, $t8, $t9
    ctx->r17 = ADD32(ctx->r24, ctx->r25);
    // 0x80003494: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
L_80003498:
    // 0x80003498: lui         $fp, 0x800A
    ctx->r30 = S32(0X800A << 16);
    // 0x8000349C: lui         $s7, 0x800A
    ctx->r23 = S32(0X800A << 16);
    // 0x800034A0: lui         $s6, 0x800A
    ctx->r22 = S32(0X800A << 16);
    // 0x800034A4: lui         $s5, 0x800A
    ctx->r21 = S32(0X800A << 16);
    // 0x800034A8: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x800034AC: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x800034B0: lui         $ra, 0x800A
    ctx->r31 = S32(0X800A << 16);
    // 0x800034B4: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x800034B8: addiu       $t5, $t5, 0x2D0
    ctx->r13 = ADD32(ctx->r13, 0X2D0);
    // 0x800034BC: addiu       $ra, $ra, 0x2F4
    ctx->r31 = ADD32(ctx->r31, 0X2F4);
    // 0x800034C0: addiu       $s0, $s0, 0x2F0
    ctx->r16 = ADD32(ctx->r16, 0X2F0);
    // 0x800034C4: addiu       $s4, $s4, 0x2B8
    ctx->r20 = ADD32(ctx->r20, 0X2B8);
    // 0x800034C8: addiu       $s5, $s5, 0x2D8
    ctx->r21 = ADD32(ctx->r21, 0X2D8);
    // 0x800034CC: addiu       $s6, $s6, 0x2E0
    ctx->r22 = ADD32(ctx->r22, 0X2E0);
    // 0x800034D0: addiu       $s7, $s7, 0x2DC
    ctx->r23 = ADD32(ctx->r23, 0X2DC);
    // 0x800034D4: addiu       $fp, $fp, 0x2E8
    ctx->r30 = ADD32(ctx->r30, 0X2E8);
    // 0x800034D8: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x800034DC: addiu       $s3, $zero, 0x6
    ctx->r19 = ADD32(0, 0X6);
    // 0x800034E0: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
L_800034E4:
    // 0x800034E4: multu       $t1, $s3
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800034E8: sll         $v1, $t1, 1
    ctx->r3 = S32(ctx->r9 << 1);
    // 0x800034EC: addu        $v0, $ra, $t1
    ctx->r2 = ADD32(ctx->r31, ctx->r9);
    // 0x800034F0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800034F4: addu        $a3, $s5, $t1
    ctx->r7 = ADD32(ctx->r21, ctx->r9);
    // 0x800034F8: addu        $t2, $s7, $t1
    ctx->r10 = ADD32(ctx->r23, ctx->r9);
    // 0x800034FC: mflo        $t8
    ctx->r24 = lo;
    // 0x80003500: addu        $a2, $t8, $s1
    ctx->r6 = ADD32(ctx->r24, ctx->r17);
    // 0x80003504: lbu         $t9, 0x4($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X4);
    // 0x80003508: addu        $t8, $s4, $v1
    ctx->r24 = ADD32(ctx->r20, ctx->r3);
    // 0x8000350C: bne         $s2, $t9, L_80003520
    if (ctx->r18 != ctx->r25) {
        // 0x80003510: nop
    
            goto L_80003520;
    }
    // 0x80003510: nop

    // 0x80003514: addu        $v0, $ra, $t1
    ctx->r2 = ADD32(ctx->r31, ctx->r9);
    // 0x80003518: b           L_80003524
    // 0x8000351C: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
        goto L_80003524;
    // 0x8000351C: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
L_80003520:
    // 0x80003520: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
L_80003524:
    // 0x80003524: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x80003528: addu        $t9, $s6, $v1
    ctx->r25 = ADD32(ctx->r22, ctx->r3);
    // 0x8000352C: bne         $t7, $zero, L_80003540
    if (ctx->r15 != 0) {
        // 0x80003530: addu        $t6, $fp, $v1
        ctx->r14 = ADD32(ctx->r30, ctx->r3);
            goto L_80003540;
    }
    // 0x80003530: addu        $t6, $fp, $v1
    ctx->r14 = ADD32(ctx->r30, ctx->r3);
    // 0x80003534: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x80003538: sb          $zero, 0x2($a2)
    MEM_B(0X2, ctx->r6) = 0;
    // 0x8000353C: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
L_80003540:
    // 0x80003540: lhu         $t3, 0x0($a2)
    ctx->r11 = MEM_HU(ctx->r6, 0X0);
    // 0x80003544: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x80003548: sh          $t3, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r11;
    // 0x8000354C: lb          $v0, 0x2($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X2);
    // 0x80003550: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80003554: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
    // 0x80003558: sh          $v0, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r2;
    // 0x8000355C: lb          $v0, 0x3($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X3);
    // 0x80003560: addiu       $t8, $t8, 0x2C0
    ctx->r24 = ADD32(ctx->r24, 0X2C0);
    // 0x80003564: addu        $t4, $v1, $t8
    ctx->r12 = ADD32(ctx->r3, ctx->r24);
    // 0x80003568: sh          $v0, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r2;
    // 0x8000356C: lhu         $a1, 0x0($t4)
    ctx->r5 = MEM_HU(ctx->r12, 0X0);
    // 0x80003570: addiu       $t7, $t7, 0x2C8
    ctx->r15 = ADD32(ctx->r15, 0X2C8);
    // 0x80003574: xor         $t9, $a1, $t3
    ctx->r25 = ctx->r5 ^ ctx->r11;
    // 0x80003578: addu        $t0, $v1, $t7
    ctx->r8 = ADD32(ctx->r3, ctx->r15);
    // 0x8000357C: and         $t6, $t9, $t3
    ctx->r14 = ctx->r25 & ctx->r11;
    // 0x80003580: sh          $t6, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r14;
    // 0x80003584: bne         $t3, $a1, L_800035C4
    if (ctx->r11 != ctx->r5) {
        // 0x80003588: sb          $v0, 0x0($t2)
        MEM_B(0X0, ctx->r10) = ctx->r2;
            goto L_800035C4;
    }
    // 0x80003588: sb          $v0, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r2;
    // 0x8000358C: addu        $v0, $s0, $t1
    ctx->r2 = ADD32(ctx->r16, ctx->r9);
    // 0x80003590: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x80003594: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x80003598: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8000359C: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x800035A0: bne         $t9, $zero, L_800035B8
    if (ctx->r25 != 0) {
        // 0x800035A4: sb          $t8, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r24;
            goto L_800035B8;
    }
    // 0x800035A4: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x800035A8: sh          $t3, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r11;
    // 0x800035AC: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x800035B0: b           L_800035DC
    // 0x800035B4: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
        goto L_800035DC;
    // 0x800035B4: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
L_800035B8:
    // 0x800035B8: addu        $t8, $t5, $v1
    ctx->r24 = ADD32(ctx->r13, ctx->r3);
    // 0x800035BC: b           L_800035DC
    // 0x800035C0: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
        goto L_800035DC;
    // 0x800035C0: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
L_800035C4:
    // 0x800035C4: lhu         $t9, 0x0($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X0);
    // 0x800035C8: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x800035CC: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x800035D0: addu        $t8, $s0, $t1
    ctx->r24 = ADD32(ctx->r16, ctx->r9);
    // 0x800035D4: sh          $t9, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r25;
    // 0x800035D8: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
L_800035DC:
    // 0x800035DC: lb          $v0, 0x0($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X0);
    // 0x800035E0: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x800035E4: slti        $at, $v0, -0x9
    ctx->r1 = SIGNED(ctx->r2) < -0X9 ? 1 : 0;
    // 0x800035E8: bne         $at, $zero, L_80003604
    if (ctx->r1 != 0) {
        // 0x800035EC: sll         $t9, $t1, 16
        ctx->r25 = S32(ctx->r9 << 16);
            goto L_80003604;
    }
    // 0x800035EC: sll         $t9, $t1, 16
    ctx->r25 = S32(ctx->r9 << 16);
    // 0x800035F0: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x800035F4: beq         $at, $zero, L_80003604
    if (ctx->r1 == 0) {
        // 0x800035F8: nop
    
            goto L_80003604;
    }
    // 0x800035F8: nop

    // 0x800035FC: b           L_80003634
    // 0x80003600: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
        goto L_80003634;
    // 0x80003600: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
L_80003604:
    // 0x80003604: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80003608: lb          $v1, 0x340($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X340);
    // 0x8000360C: nop

    // 0x80003610: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80003614: beq         $at, $zero, L_80003624
    if (ctx->r1 == 0) {
        // 0x80003618: negu        $a0, $v1
        ctx->r4 = SUB32(0, ctx->r3);
            goto L_80003624;
    }
    // 0x80003618: negu        $a0, $v1
    ctx->r4 = SUB32(0, ctx->r3);
    // 0x8000361C: b           L_80003634
    // 0x80003620: sb          $v1, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r3;
        goto L_80003634;
    // 0x80003620: sb          $v1, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r3;
L_80003624:
    // 0x80003624: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80003628: beq         $at, $zero, L_80003634
    if (ctx->r1 == 0) {
        // 0x8000362C: nop
    
            goto L_80003634;
    }
    // 0x8000362C: nop

    // 0x80003630: sb          $a0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r4;
L_80003634:
    // 0x80003634: lb          $v0, 0x0($t2)
    ctx->r2 = MEM_B(ctx->r10, 0X0);
    // 0x80003638: sra         $t1, $t9, 16
    ctx->r9 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8000363C: slti        $at, $v0, -0x9
    ctx->r1 = SIGNED(ctx->r2) < -0X9 ? 1 : 0;
    // 0x80003640: bne         $at, $zero, L_8000365C
    if (ctx->r1 != 0) {
        // 0x80003644: lui         $v1, 0x800A
        ctx->r3 = S32(0X800A << 16);
            goto L_8000365C;
    }
    // 0x80003644: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80003648: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x8000364C: beq         $at, $zero, L_8000365C
    if (ctx->r1 == 0) {
        // 0x80003650: nop
    
            goto L_8000365C;
    }
    // 0x80003650: nop

    // 0x80003654: b           L_80003688
    // 0x80003658: sb          $zero, 0x0($t2)
    MEM_B(0X0, ctx->r10) = 0;
        goto L_80003688;
    // 0x80003658: sb          $zero, 0x0($t2)
    MEM_B(0X0, ctx->r10) = 0;
L_8000365C:
    // 0x8000365C: lb          $v1, 0x341($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X341);
    // 0x80003660: nop

    // 0x80003664: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80003668: beq         $at, $zero, L_80003678
    if (ctx->r1 == 0) {
        // 0x8000366C: negu        $a0, $v1
        ctx->r4 = SUB32(0, ctx->r3);
            goto L_80003678;
    }
    // 0x8000366C: negu        $a0, $v1
    ctx->r4 = SUB32(0, ctx->r3);
    // 0x80003670: b           L_80003688
    // 0x80003674: sb          $v1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r3;
        goto L_80003688;
    // 0x80003674: sb          $v1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r3;
L_80003678:
    // 0x80003678: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8000367C: beq         $at, $zero, L_8000368C
    if (ctx->r1 == 0) {
        // 0x80003680: slti        $at, $t1, 0x4
        ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
            goto L_8000368C;
    }
    // 0x80003680: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x80003684: sb          $a0, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r4;
L_80003688:
    // 0x80003688: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
L_8000368C:
    // 0x8000368C: bne         $at, $zero, L_800034E4
    if (ctx->r1 != 0) {
        // 0x80003690: sh          $t3, 0x0($t4)
        MEM_H(0X0, ctx->r12) = ctx->r11;
            goto L_800034E4;
    }
    // 0x80003690: sh          $t3, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r11;
L_80003694:
    // 0x80003694: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80003698: addiu       $a0, $a0, 0x358
    ctx->r4 = ADD32(ctx->r4, 0X358);
    // 0x8000369C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800036A0: jal         0x80075F70
    // 0x800036A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x800036A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x800036A8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800036AC: lh          $v0, 0x40($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X40);
    // 0x800036B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800036B4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800036B8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800036BC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800036C0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800036C4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800036C8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800036CC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800036D0: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800036D4: jr          $ra
    // 0x800036D8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800036D8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800036DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800036DC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800036E0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800036E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800036E8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800036EC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800036F0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800036F4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800036F8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800036FC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80003700: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80003704: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80003708: jal         0x800033FC
    // 0x8000370C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_800033FC(rdram, ctx);
        goto after_0;
    // 0x8000370C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_0:
    // 0x80003710: blez        $v0, L_800038E8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80003714: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800038E8;
    }
    // 0x80003714: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80003718: lui         $fp, 0x800A
    ctx->r30 = S32(0X800A << 16);
    // 0x8000371C: lui         $s7, 0x800A
    ctx->r23 = S32(0X800A << 16);
    // 0x80003720: lui         $s6, 0x800A
    ctx->r22 = S32(0X800A << 16);
    // 0x80003724: lui         $s5, 0x800A
    ctx->r21 = S32(0X800A << 16);
    // 0x80003728: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x8000372C: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x80003730: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x80003734: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x80003738: addiu       $t2, $t2, 0x300
    ctx->r10 = ADD32(ctx->r10, 0X300);
    // 0x8000373C: addiu       $t3, $t3, 0x320
    ctx->r11 = ADD32(ctx->r11, 0X320);
    // 0x80003740: addiu       $s2, $s2, 0x2C8
    ctx->r18 = ADD32(ctx->r18, 0X2C8);
    // 0x80003744: addiu       $s4, $s4, 0x2D0
    ctx->r20 = ADD32(ctx->r20, 0X2D0);
    // 0x80003748: addiu       $s5, $s5, 0x2E0
    ctx->r21 = ADD32(ctx->r21, 0X2E0);
    // 0x8000374C: addiu       $s6, $s6, 0x2D8
    ctx->r22 = ADD32(ctx->r22, 0X2D8);
    // 0x80003750: addiu       $s7, $s7, 0x2E8
    ctx->r23 = ADD32(ctx->r23, 0X2E8);
    // 0x80003754: addiu       $fp, $fp, 0x2DC
    ctx->r30 = ADD32(ctx->r30, 0X2DC);
    // 0x80003758: addiu       $s3, $sp, 0x48
    ctx->r19 = ADD32(ctx->r29, 0X48);
    // 0x8000375C: addiu       $s1, $sp, 0x50
    ctx->r17 = ADD32(ctx->r29, 0X50);
L_80003760:
    // 0x80003760: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80003764: addu        $t6, $s2, $v0
    ctx->r14 = ADD32(ctx->r18, ctx->r2);
    // 0x80003768: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x8000376C: addu        $t8, $s1, $v0
    ctx->r24 = ADD32(ctx->r17, ctx->r2);
    // 0x80003770: addu        $t9, $s4, $v0
    ctx->r25 = ADD32(ctx->r20, ctx->r2);
    // 0x80003774: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x80003778: lhu         $t4, 0x0($t9)
    ctx->r12 = MEM_HU(ctx->r25, 0X0);
    // 0x8000377C: addu        $t5, $s3, $v0
    ctx->r13 = ADD32(ctx->r19, ctx->r2);
    // 0x80003780: addu        $t6, $s6, $v1
    ctx->r14 = ADD32(ctx->r22, ctx->r3);
    // 0x80003784: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
    // 0x80003788: lb          $t0, 0x0($t6)
    ctx->r8 = MEM_B(ctx->r14, 0X0);
    // 0x8000378C: addu        $t7, $s5, $v0
    ctx->r15 = ADD32(ctx->r21, ctx->r2);
    // 0x80003790: addu        $t8, $fp, $v1
    ctx->r24 = ADD32(ctx->r30, ctx->r3);
    // 0x80003794: sh          $t0, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r8;
    // 0x80003798: lb          $t1, 0x0($t8)
    ctx->r9 = MEM_B(ctx->r24, 0X0);
    // 0x8000379C: sll         $t4, $v1, 3
    ctx->r12 = S32(ctx->r3 << 3);
    // 0x800037A0: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x800037A4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800037A8: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x800037AC: addu        $t9, $s7, $v0
    ctx->r25 = ADD32(ctx->r23, ctx->r2);
    // 0x800037B0: sra         $v1, $t8, 16
    ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800037B4: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x800037B8: sh          $t1, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r9;
    // 0x800037BC: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x800037C0: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x800037C4: sb          $t0, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r8;
    // 0x800037C8: bne         $at, $zero, L_80003760
    if (ctx->r1 != 0) {
        // 0x800037CC: sb          $t1, 0x0($t7)
        MEM_B(0X0, ctx->r15) = ctx->r9;
            goto L_80003760;
    }
    // 0x800037CC: sb          $t1, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r9;
    // 0x800037D0: jal         0x800033FC
    // 0x800037D4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    func_800033FC(rdram, ctx);
        goto after_1;
    // 0x800037D4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    after_1:
    // 0x800037D8: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x800037DC: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x800037E0: addiu       $t3, $t3, 0x320
    ctx->r11 = ADD32(ctx->r11, 0X320);
    // 0x800037E4: beq         $v0, $zero, L_800038AC
    if (ctx->r2 == 0) {
        // 0x800037E8: addiu       $t2, $t2, 0x300
        ctx->r10 = ADD32(ctx->r10, 0X300);
            goto L_800038AC;
    }
    // 0x800037E8: addiu       $t2, $t2, 0x300
    ctx->r10 = ADD32(ctx->r10, 0X300);
L_800037EC:
    // 0x800037EC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800037F0:
    // 0x800037F0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x800037F4: addu        $a0, $s1, $v0
    ctx->r4 = ADD32(ctx->r17, ctx->r2);
    // 0x800037F8: addu        $t5, $s2, $v0
    ctx->r13 = ADD32(ctx->r18, ctx->r2);
    // 0x800037FC: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x80003800: lhu         $t4, 0x0($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X0);
    // 0x80003804: addu        $a1, $s3, $v0
    ctx->r5 = ADD32(ctx->r19, ctx->r2);
    // 0x80003808: addu        $t9, $s4, $v0
    ctx->r25 = ADD32(ctx->r20, ctx->r2);
    // 0x8000380C: lhu         $t5, 0x0($t9)
    ctx->r13 = MEM_HU(ctx->r25, 0X0);
    // 0x80003810: lhu         $t8, 0x0($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X0);
    // 0x80003814: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x80003818: addu        $t6, $s6, $v1
    ctx->r14 = ADD32(ctx->r22, ctx->r3);
    // 0x8000381C: or          $t4, $t8, $t5
    ctx->r12 = ctx->r24 | ctx->r13;
    // 0x80003820: lb          $t0, 0x0($t6)
    ctx->r8 = MEM_B(ctx->r14, 0X0);
    // 0x80003824: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x80003828: addu        $a2, $s5, $v0
    ctx->r6 = ADD32(ctx->r21, ctx->r2);
    // 0x8000382C: addu        $t8, $fp, $v1
    ctx->r24 = ADD32(ctx->r30, ctx->r3);
    // 0x80003830: lh          $t7, 0x0($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X0);
    // 0x80003834: lb          $t1, 0x0($t8)
    ctx->r9 = MEM_B(ctx->r24, 0X0);
    // 0x80003838: addu        $a3, $s7, $v0
    ctx->r7 = ADD32(ctx->r23, ctx->r2);
    // 0x8000383C: lh          $t5, 0x0($a3)
    ctx->r13 = MEM_H(ctx->r7, 0X0);
    // 0x80003840: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x80003844: sh          $t4, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r12;
    // 0x80003848: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x8000384C: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x80003850: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80003854: addu        $t7, $t2, $t6
    ctx->r15 = ADD32(ctx->r10, ctx->r14);
    // 0x80003858: addu        $t4, $t5, $t1
    ctx->r12 = ADD32(ctx->r13, ctx->r9);
    // 0x8000385C: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x80003860: sh          $t9, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r25;
    // 0x80003864: sh          $t4, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r12;
    // 0x80003868: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8000386C: addu        $t9, $t7, $s0
    ctx->r25 = ADD32(ctx->r15, ctx->r16);
    // 0x80003870: addu        $t5, $t3, $t8
    ctx->r13 = ADD32(ctx->r11, ctx->r24);
    // 0x80003874: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80003878: addu        $t4, $t5, $s0
    ctx->r12 = ADD32(ctx->r13, ctx->r16);
    // 0x8000387C: sb          $t0, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r8;
    // 0x80003880: bne         $at, $zero, L_800037F0
    if (ctx->r1 != 0) {
        // 0x80003884: sb          $t1, 0x0($t4)
        MEM_B(0X0, ctx->r12) = ctx->r9;
            goto L_800037F0;
    }
    // 0x80003884: sb          $t1, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r9;
    // 0x80003888: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8000388C: sll         $t9, $s0, 16
    ctx->r25 = S32(ctx->r16 << 16);
    // 0x80003890: jal         0x800033FC
    // 0x80003894: sra         $s0, $t9, 16
    ctx->r16 = S32(SIGNED(ctx->r25) >> 16);
    func_800033FC(rdram, ctx);
        goto after_2;
    // 0x80003894: sra         $s0, $t9, 16
    ctx->r16 = S32(SIGNED(ctx->r25) >> 16);
    after_2:
    // 0x80003898: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x8000389C: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x800038A0: addiu       $t3, $t3, 0x320
    ctx->r11 = ADD32(ctx->r11, 0X320);
    // 0x800038A4: bne         $v0, $zero, L_800037EC
    if (ctx->r2 != 0) {
        // 0x800038A8: addiu       $t2, $t2, 0x300
        ctx->r10 = ADD32(ctx->r10, 0X300);
            goto L_800037EC;
    }
    // 0x800038A8: addiu       $t2, $t2, 0x300
    ctx->r10 = ADD32(ctx->r10, 0X300);
L_800038AC:
    // 0x800038AC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800038B0:
    // 0x800038B0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x800038B4: addu        $t5, $s1, $v0
    ctx->r13 = ADD32(ctx->r17, ctx->r2);
    // 0x800038B8: lhu         $t4, 0x0($t5)
    ctx->r12 = MEM_HU(ctx->r13, 0X0);
    // 0x800038BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800038C0: addu        $t6, $s2, $v0
    ctx->r14 = ADD32(ctx->r18, ctx->r2);
    // 0x800038C4: sll         $t5, $v1, 16
    ctx->r13 = S32(ctx->r3 << 16);
    // 0x800038C8: addu        $t7, $s3, $v0
    ctx->r15 = ADD32(ctx->r19, ctx->r2);
    // 0x800038CC: sh          $t4, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r12;
    // 0x800038D0: lhu         $t9, 0x0($t7)
    ctx->r25 = MEM_HU(ctx->r15, 0X0);
    // 0x800038D4: sra         $v1, $t5, 16
    ctx->r3 = S32(SIGNED(ctx->r13) >> 16);
    // 0x800038D8: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x800038DC: addu        $t8, $s4, $v0
    ctx->r24 = ADD32(ctx->r20, ctx->r2);
    // 0x800038E0: bne         $at, $zero, L_800038B0
    if (ctx->r1 != 0) {
        // 0x800038E4: sh          $t9, 0x0($t8)
        MEM_H(0X0, ctx->r24) = ctx->r25;
            goto L_800038B0;
    }
    // 0x800038E4: sh          $t9, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r25;
L_800038E8:
    // 0x800038E8: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x800038EC: addiu       $v1, $v1, 0x2F8
    ctx->r3 = ADD32(ctx->r3, 0X2F8);
    // 0x800038F0: sh          $s0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r16;
    // 0x800038F4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800038F8: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x800038FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80003900: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80003904: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80003908: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8000390C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80003910: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80003914: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80003918: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8000391C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80003920: jr          $ra
    // 0x80003924: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80003924: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80003928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003928: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8000392C: sb          $a0, 0x340($at)
    MEM_B(0X340, ctx->r1) = ctx->r4;
    // 0x80003930: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80003934: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80003938: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8000393C: jr          $ra
    // 0x80003940: sb          $a1, 0x341($at)
    MEM_B(0X341, ctx->r1) = ctx->r5;
    return;
    // 0x80003940: sb          $a1, 0x341($at)
    MEM_B(0X341, ctx->r1) = ctx->r5;
;}
RECOMP_FUNC void func_80003944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003944: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80003948: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000394C: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80003950: addiu       $a0, $a0, 0x358
    ctx->r4 = ADD32(ctx->r4, 0X358);
    // 0x80003954: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80003958: jal         0x80075330
    // 0x8000395C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8000395C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80003960: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80003964: lh          $t6, 0x2B0($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X2B0);
    // 0x80003968: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x8000396C: slti        $at, $t6, 0x8
    ctx->r1 = SIGNED(ctx->r14) < 0X8 ? 1 : 0;
    // 0x80003970: beq         $at, $zero, L_8000399C
    if (ctx->r1 == 0) {
        // 0x80003974: lui         $t9, 0x800A
        ctx->r25 = S32(0X800A << 16);
            goto L_8000399C;
    }
    // 0x80003974: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x80003978: lh          $t7, 0x2B4($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X2B4);
    // 0x8000397C: addiu       $t9, $t9, 0x230
    ctx->r25 = ADD32(ctx->r25, 0X230);
    // 0x80003980: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80003984: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80003988: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x8000398C: addiu       $a1, $a1, 0x39C0
    ctx->r5 = ADD32(ctx->r5, 0X39C0);
    // 0x80003990: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80003994: jal         0x80004F80
    // 0x80003998: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80004F80(rdram, ctx);
        goto after_1;
    // 0x80003998: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_8000399C:
    // 0x8000399C: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800039A0: addiu       $a0, $a0, 0x358
    ctx->r4 = ADD32(ctx->r4, 0X358);
    // 0x800039A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800039A8: jal         0x80075F70
    // 0x800039AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x800039AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x800039B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800039B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800039B8: jr          $ra
    // 0x800039BC: nop

    return;
    // 0x800039BC: nop

;}
RECOMP_FUNC void func_800039C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800039C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800039C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800039C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800039CC: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800039D0: addiu       $a0, $a0, 0x358
    ctx->r4 = ADD32(ctx->r4, 0X358);
    // 0x800039D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800039D8: jal         0x80075330
    // 0x800039DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x800039DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x800039E0: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x800039E4: lh          $t6, 0x2B0($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X2B0);
    // 0x800039E8: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800039EC: slti        $at, $t6, 0x8
    ctx->r1 = SIGNED(ctx->r14) < 0X8 ? 1 : 0;
    // 0x800039F0: beq         $at, $zero, L_80003A98
    if (ctx->r1 == 0) {
        // 0x800039F4: addiu       $a0, $a0, 0x358
        ctx->r4 = ADD32(ctx->r4, 0X358);
            goto L_80003A98;
    }
    // 0x800039F4: addiu       $a0, $a0, 0x358
    ctx->r4 = ADD32(ctx->r4, 0X358);
    // 0x800039F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800039FC: jal         0x80075F70
    // 0x80003A00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x80003A00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80003A04: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80003A08: jal         0x80076F70
    // 0x80003A0C: addiu       $a0, $a0, 0x47A0
    ctx->r4 = ADD32(ctx->r4, 0X47A0);
    osContStartReadData_recomp(rdram, ctx);
        goto after_2;
    // 0x80003A0C: addiu       $a0, $a0, 0x47A0
    ctx->r4 = ADD32(ctx->r4, 0X47A0);
    after_2:
    // 0x80003A10: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80003A14: addiu       $a0, $a0, 0x47A0
    ctx->r4 = ADD32(ctx->r4, 0X47A0);
    // 0x80003A18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80003A1C: jal         0x80075330
    // 0x80003A20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x80003A20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80003A24: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80003A28: addiu       $v0, $v0, 0x2B4
    ctx->r2 = ADD32(ctx->r2, 0X2B4);
    // 0x80003A2C: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x80003A30: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x80003A34: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80003A38: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80003A3C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80003A40: addiu       $t9, $t9, 0x170
    ctx->r25 = ADD32(ctx->r25, 0X170);
    // 0x80003A44: jal         0x80076FF4
    // 0x80003A48: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    osContGetReadData_recomp(rdram, ctx);
        goto after_4;
    // 0x80003A48: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    after_4:
    // 0x80003A4C: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80003A50: addiu       $a0, $a0, 0x358
    ctx->r4 = ADD32(ctx->r4, 0X358);
    // 0x80003A54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80003A58: jal         0x80075330
    // 0x80003A5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x80003A5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80003A60: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80003A64: addiu       $v0, $v0, 0x2B4
    ctx->r2 = ADD32(ctx->r2, 0X2B4);
    // 0x80003A68: lh          $t2, 0x0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X0);
    // 0x80003A6C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80003A70: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80003A74: addiu       $v1, $v1, 0x2B0
    ctx->r3 = ADD32(ctx->r3, 0X2B0);
    // 0x80003A78: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
    // 0x80003A7C: lh          $t0, 0x0($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X0);
    // 0x80003A80: lh          $t4, 0x0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X0);
    // 0x80003A84: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80003A88: slti        $at, $t4, 0x8
    ctx->r1 = SIGNED(ctx->r12) < 0X8 ? 1 : 0;
    // 0x80003A8C: bne         $at, $zero, L_80003A98
    if (ctx->r1 != 0) {
        // 0x80003A90: sh          $t1, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r9;
            goto L_80003A98;
    }
    // 0x80003A90: sh          $t1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r9;
    // 0x80003A94: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
L_80003A98:
    // 0x80003A98: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80003A9C: addiu       $a0, $a0, 0x358
    ctx->r4 = ADD32(ctx->r4, 0X358);
    // 0x80003AA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80003AA4: jal         0x80075F70
    // 0x80003AA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x80003AA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x80003AAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80003AB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80003AB4: jr          $ra
    // 0x80003AB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80003AB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80003ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003ABC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80003AC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003AC4: jal         0x800039C0
    // 0x80003AC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800039C0(rdram, ctx);
        goto after_0;
    // 0x80003AC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80003ACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80003AD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80003AD4: jr          $ra
    // 0x80003AD8: nop

    return;
    // 0x80003AD8: nop

;}
RECOMP_FUNC void func_80003ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003ADC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80003AE0: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80003AE4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80003AE8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80003AEC: addiu       $s5, $sp, 0x48
    ctx->r21 = ADD32(ctx->r29, 0X48);
    // 0x80003AF0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80003AF4: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80003AF8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80003AFC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80003B00: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80003B04: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80003B08: addiu       $a0, $a0, 0x47A0
    ctx->r4 = ADD32(ctx->r4, 0X47A0);
    // 0x80003B0C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80003B10: jal         0x80076C30
    // 0x80003B14: addiu       $a1, $sp, 0x45
    ctx->r5 = ADD32(ctx->r29, 0X45);
    osContInit_recomp(rdram, ctx);
        goto after_0;
    // 0x80003B14: addiu       $a1, $sp, 0x45
    ctx->r5 = ADD32(ctx->r29, 0X45);
    after_0:
    // 0x80003B18: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80003B1C: addiu       $v0, $v0, 0x2B4
    ctx->r2 = ADD32(ctx->r2, 0X2B4);
    // 0x80003B20: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x80003B24: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x80003B28: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80003B2C: addiu       $a0, $a0, 0x2B2
    ctx->r4 = ADD32(ctx->r4, 0X2B2);
    // 0x80003B30: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x80003B34: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    // 0x80003B38: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x80003B3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80003B40: addiu       $t0, $t0, 0x2B6
    ctx->r8 = ADD32(ctx->r8, 0X2B6);
    // 0x80003B44: lui         $s3, 0x800A
    ctx->r19 = S32(0X800A << 16);
    // 0x80003B48: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x80003B4C: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x80003B50: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x80003B54: lui         $ra, 0x800A
    ctx->r31 = S32(0X800A << 16);
    // 0x80003B58: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x80003B5C: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x80003B60: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x80003B64: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x80003B68: sh          $t7, 0x2B0($at)
    MEM_H(0X2B0, ctx->r1) = ctx->r15;
    // 0x80003B6C: lbu         $t1, 0x45($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X45);
    // 0x80003B70: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x80003B74: addiu       $t2, $t2, 0x2D0
    ctx->r10 = ADD32(ctx->r10, 0X2D0);
    // 0x80003B78: addiu       $t3, $t3, 0x2C0
    ctx->r11 = ADD32(ctx->r11, 0X2C0);
    // 0x80003B7C: addiu       $t4, $t4, 0x2C8
    ctx->r12 = ADD32(ctx->r12, 0X2C8);
    // 0x80003B80: addiu       $t5, $t5, 0x2B8
    ctx->r13 = ADD32(ctx->r13, 0X2B8);
    // 0x80003B84: addiu       $ra, $ra, 0x2E8
    ctx->r31 = ADD32(ctx->r31, 0X2E8);
    // 0x80003B88: addiu       $s0, $s0, 0x2E0
    ctx->r16 = ADD32(ctx->r16, 0X2E0);
    // 0x80003B8C: addiu       $s1, $s1, 0x2DC
    ctx->r17 = ADD32(ctx->r17, 0X2DC);
    // 0x80003B90: addiu       $s2, $s2, 0x2D8
    ctx->r18 = ADD32(ctx->r18, 0X2D8);
    // 0x80003B94: addiu       $s3, $s3, 0x2F4
    ctx->r19 = ADD32(ctx->r19, 0X2F4);
    // 0x80003B98: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80003B9C:
    // 0x80003B9C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80003BA0: sllv        $t9, $t8, $v1
    ctx->r25 = S32(ctx->r24 << (ctx->r3 & 31));
    // 0x80003BA4: and         $t6, $t1, $t9
    ctx->r14 = ctx->r9 & ctx->r25;
    // 0x80003BA8: beq         $t6, $zero, L_80003BEC
    if (ctx->r14 == 0) {
        // 0x80003BAC: sll         $t7, $v1, 2
        ctx->r15 = S32(ctx->r3 << 2);
            goto L_80003BEC;
    }
    // 0x80003BAC: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x80003BB0: addu        $t8, $s5, $t7
    ctx->r24 = ADD32(ctx->r21, ctx->r15);
    // 0x80003BB4: lbu         $t9, 0x3($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X3);
    // 0x80003BB8: nop

    // 0x80003BBC: andi        $t6, $t9, 0x8
    ctx->r14 = ctx->r25 & 0X8;
    // 0x80003BC0: bne         $t6, $zero, L_80003BF0
    if (ctx->r14 != 0) {
        // 0x80003BC4: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_80003BF0;
    }
    // 0x80003BC4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80003BC8: lh          $t7, 0x0($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X0);
    // 0x80003BCC: nop

    // 0x80003BD0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80003BD4: sh          $t8, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r24;
    // 0x80003BD8: lh          $t9, 0x0($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X0);
    // 0x80003BDC: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x80003BE0: nop

    // 0x80003BE4: beq         $v0, $t9, L_80003C54
    if (ctx->r2 == ctx->r25) {
        // 0x80003BE8: nop
    
            goto L_80003C54;
    }
    // 0x80003BE8: nop

L_80003BEC:
    // 0x80003BEC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
L_80003BF0:
    // 0x80003BF0: addu        $t6, $t3, $v0
    ctx->r14 = ADD32(ctx->r11, ctx->r2);
    // 0x80003BF4: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
    // 0x80003BF8: addu        $t7, $t4, $v0
    ctx->r15 = ADD32(ctx->r12, ctx->r2);
    // 0x80003BFC: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x80003C00: addu        $t8, $t5, $v0
    ctx->r24 = ADD32(ctx->r13, ctx->r2);
    // 0x80003C04: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    // 0x80003C08: addu        $t7, $s2, $v1
    ctx->r15 = ADD32(ctx->r18, ctx->r3);
    // 0x80003C0C: addu        $t6, $s1, $v1
    ctx->r14 = ADD32(ctx->r17, ctx->r3);
    // 0x80003C10: addu        $t9, $s0, $v0
    ctx->r25 = ADD32(ctx->r16, ctx->r2);
    // 0x80003C14: addu        $t8, $s3, $v1
    ctx->r24 = ADD32(ctx->r19, ctx->r3);
    // 0x80003C18: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80003C1C: addu        $a2, $t2, $v0
    ctx->r6 = ADD32(ctx->r10, ctx->r2);
    // 0x80003C20: sh          $zero, 0x0($t9)
    MEM_H(0X0, ctx->r25) = 0;
    // 0x80003C24: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x80003C28: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x80003C2C: sra         $v1, $t9, 16
    ctx->r3 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80003C30: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x80003C34: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80003C38: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x80003C3C: addu        $a3, $ra, $v0
    ctx->r7 = ADD32(ctx->r31, ctx->r2);
    // 0x80003C40: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
    // 0x80003C44: bne         $at, $zero, L_80003B9C
    if (ctx->r1 != 0) {
        // 0x80003C48: sb          $zero, 0x0($t8)
        MEM_B(0X0, ctx->r24) = 0;
            goto L_80003B9C;
    }
    // 0x80003C48: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    // 0x80003C4C: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x80003C50: nop

L_80003C54:
    // 0x80003C54: jal         0x80076F10
    // 0x80003C58: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    osContSetCh_recomp(rdram, ctx);
        goto after_1;
    // 0x80003C58: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_1:
    // 0x80003C5C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80003C60: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80003C64: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80003C68: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80003C6C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80003C70: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80003C74: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80003C78: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80003C7C: jr          $ra
    // 0x80003C80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80003C80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80003C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003C84: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80003C88: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80003C8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003C90: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80003C94: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x80003C98: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80003C9C: sh          $t6, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r14;
    // 0x80003CA0: addiu       $a1, $a1, 0x3ADC
    ctx->r5 = ADD32(ctx->r5, 0X3ADC);
    // 0x80003CA4: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80003CA8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x80003CAC: jal         0x80004F80
    // 0x80003CB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80004F80(rdram, ctx);
        goto after_0;
    // 0x80003CB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80003CB4: lbu         $t7, 0x4F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X4F);
    // 0x80003CB8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80003CBC: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80003CC0: beq         $t8, $zero, L_80003D0C
    if (ctx->r24 == 0) {
        // 0x80003CC4: sh          $zero, 0x354($at)
        MEM_H(0X354, ctx->r1) = 0;
            goto L_80003D0C;
    }
    // 0x80003CC4: sh          $zero, 0x354($at)
    MEM_H(0X354, ctx->r1) = 0;
    // 0x80003CC8: b           L_80003CE8
    // 0x80003CCC: nop

        goto L_80003CE8;
    // 0x80003CCC: nop

    // 0x80003CD0: b           L_80003CE8
    // 0x80003CD4: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
        goto L_80003CE8;
    // 0x80003CD4: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80003CD8: jal         0x800052E0
    // 0x80003CDC: addiu       $a0, $a0, 0x348
    ctx->r4 = ADD32(ctx->r4, 0X348);
    func_800052E0(rdram, ctx);
        goto after_1;
    // 0x80003CDC: addiu       $a0, $a0, 0x348
    ctx->r4 = ADD32(ctx->r4, 0X348);
    after_1:
    // 0x80003CE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80003CE4: sh          $zero, 0x354($at)
    MEM_H(0X354, ctx->r1) = 0;
L_80003CE8:
    // 0x80003CE8: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80003CEC: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x80003CF0: addiu       $a2, $a2, 0x3ABC
    ctx->r6 = ADD32(ctx->r6, 0X3ABC);
    // 0x80003CF4: addiu       $a0, $a0, 0x348
    ctx->r4 = ADD32(ctx->r4, 0X348);
    // 0x80003CF8: jal         0x80005344
    // 0x80003CFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80005344(rdram, ctx);
        goto after_2;
    // 0x80003CFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80003D00: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80003D04: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80003D08: sh          $t9, 0x354($at)
    MEM_H(0X354, ctx->r1) = ctx->r25;
L_80003D0C:
    // 0x80003D0C: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80003D10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80003D14: sb          $v0, 0x340($at)
    MEM_B(0X340, ctx->r1) = ctx->r2;
    // 0x80003D18: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80003D1C: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80003D20: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80003D24: sb          $v0, 0x341($at)
    MEM_B(0X341, ctx->r1) = ctx->r2;
    // 0x80003D28: addiu       $a1, $a1, 0x370
    ctx->r5 = ADD32(ctx->r5, 0X370);
    // 0x80003D2C: addiu       $a0, $a0, 0x358
    ctx->r4 = ADD32(ctx->r4, 0X358);
    // 0x80003D30: jal         0x80075300
    // 0x80003D34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_3;
    // 0x80003D34: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80003D38: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80003D3C: addiu       $a0, $a0, 0x358
    ctx->r4 = ADD32(ctx->r4, 0X358);
    // 0x80003D40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80003D44: jal         0x80075F70
    // 0x80003D48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x80003D48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80003D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80003D50: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80003D54: lh          $v0, 0x2B6($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2B6);
    // 0x80003D58: jr          $ra
    // 0x80003D5C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80003D5C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80003D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003D60: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80003D64: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80003D68: jr          $ra
    // 0x80003D6C: sw          $t6, 0x380($at)
    MEM_W(0X380, ctx->r1) = ctx->r14;
    return;
    // 0x80003D6C: sw          $t6, 0x380($at)
    MEM_W(0X380, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80003D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003D70: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80003D74: addiu       $v0, $v0, 0x384
    ctx->r2 = ADD32(ctx->r2, 0X384);
    // 0x80003D78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80003D7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003D80: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80003D84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80003D88: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80003D8C: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x80003D90: sw          $zero, 0x380($at)
    MEM_W(0X380, ctx->r1) = 0;
    // 0x80003D94: addiu       $a2, $a2, 0x3D60
    ctx->r6 = ADD32(ctx->r6, 0X3D60);
    // 0x80003D98: addiu       $a0, $a0, 0x388
    ctx->r4 = ADD32(ctx->r4, 0X388);
    // 0x80003D9C: jal         0x80005344
    // 0x80003DA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80005344(rdram, ctx);
        goto after_0;
    // 0x80003DA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80003DA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80003DA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80003DAC: jr          $ra
    // 0x80003DB0: nop

    return;
    // 0x80003DB0: nop

;}
RECOMP_FUNC void func_80003DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003DB4: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x80003DB8: addiu       $t1, $t1, 0x380
    ctx->r9 = ADD32(ctx->r9, 0X380);
    // 0x80003DBC: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x80003DC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80003DC4: bne         $v0, $zero, L_80003DD4
    if (ctx->r2 != 0) {
        // 0x80003DC8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80003DD4;
    }
    // 0x80003DC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003DCC: b           L_8000408C
    // 0x80003DD0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_8000408C;
    // 0x80003DD0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80003DD4:
    // 0x80003DD4: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x80003DD8: addiu       $a3, $a3, 0x384
    ctx->r7 = ADD32(ctx->r7, 0X384);
    // 0x80003DDC: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80003DE0: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x80003DE4: slti        $at, $t6, 0x9
    ctx->r1 = SIGNED(ctx->r14) < 0X9 ? 1 : 0;
    // 0x80003DE8: bne         $at, $zero, L_80003DFC
    if (ctx->r1 != 0) {
        // 0x80003DEC: lui         $t2, 0xFA00
        ctx->r10 = S32(0XFA00 << 16);
            goto L_80003DFC;
    }
    // 0x80003DEC: lui         $t2, 0xFA00
    ctx->r10 = S32(0XFA00 << 16);
    // 0x80003DF0: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x80003DF4: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x80003DF8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80003DFC:
    // 0x80003DFC: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80003E00: bne         $at, $zero, L_80003E48
    if (ctx->r1 != 0) {
        // 0x80003E04: lui         $t3, 0x8009
        ctx->r11 = S32(0X8009 << 16);
            goto L_80003E48;
    }
    // 0x80003E04: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x80003E08: jal         0x800040A0
    // 0x80003E0C: nop

    func_800040A0(rdram, ctx);
        goto after_0;
    // 0x80003E0C: nop

    after_0:
    // 0x80003E10: jal         0x80075AA0
    // 0x80003E14: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80075AA0(rdram, ctx);
        goto after_1;
    // 0x80003E14: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80003E18: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x80003E1C: addiu       $t1, $t1, 0x380
    ctx->r9 = ADD32(ctx->r9, 0X380);
    // 0x80003E20: jal         0x80077150
    // 0x80003E24: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    osSpReset(rdram, ctx);
        goto after_2;
    // 0x80003E24: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    after_2:
    // 0x80003E28: beq         $v0, $zero, L_80003E40
    if (ctx->r2 == 0) {
        // 0x80003E2C: nop
    
            goto L_80003E40;
    }
    // 0x80003E2C: nop

L_80003E30:
    // 0x80003E30: jal         0x80077150
    // 0x80003E34: nop

    osSpReset(rdram, ctx);
        goto after_3;
    // 0x80003E34: nop

    after_3:
    // 0x80003E38: bne         $v0, $zero, L_80003E30
    if (ctx->r2 != 0) {
        // 0x80003E3C: nop
    
            goto L_80003E30;
    }
    // 0x80003E3C: nop

L_80003E40:
    // 0x80003E40: b           L_80003E40
    pause_self(rdram);
    // 0x80003E44: nop

L_80003E48:
    // 0x80003E48: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80003E4C: lui         $t8, 0xE200
    ctx->r24 = S32(0XE200 << 16);
    // 0x80003E50: lui         $t9, 0x50
    ctx->r25 = S32(0X50 << 16);
    // 0x80003E54: ori         $t9, $t9, 0x41C8
    ctx->r25 = ctx->r25 | 0X41C8;
    // 0x80003E58: ori         $t8, $t8, 0x1C
    ctx->r24 = ctx->r24 | 0X1C;
    // 0x80003E5C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80003E60: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80003E64: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80003E68: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80003E6C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80003E70: lui         $t4, 0xFCFF
    ctx->r12 = S32(0XFCFF << 16);
    // 0x80003E74: lui         $t5, 0xFFFD
    ctx->r13 = S32(0XFFFD << 16);
    // 0x80003E78: ori         $t5, $t5, 0xF6FB
    ctx->r13 = ctx->r13 | 0XF6FB;
    // 0x80003E7C: ori         $t4, $t4, 0xFFFF
    ctx->r12 = ctx->r12 | 0XFFFF;
    // 0x80003E80: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80003E84: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80003E88: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x80003E8C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80003E90: lui         $t6, 0xFF10
    ctx->r14 = S32(0XFF10 << 16);
    // 0x80003E94: lui         $t7, 0x200
    ctx->r15 = S32(0X200 << 16);
    // 0x80003E98: addiu       $t7, $t7, 0x0
    ctx->r15 = ADD32(ctx->r15, 0X0);
    // 0x80003E9C: ori         $t6, $t6, 0x13F
    ctx->r14 = ctx->r14 | 0X13F;
    // 0x80003EA0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80003EA4: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80003EA8: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x80003EAC: lui         $t9, 0x1
    ctx->r25 = S32(0X1 << 16);
    // 0x80003EB0: ori         $t9, $t9, 0x1
    ctx->r25 = ctx->r25 | 0X1;
    // 0x80003EB4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80003EB8: lui         $t8, 0xF700
    ctx->r24 = S32(0XF700 << 16);
    // 0x80003EBC: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x80003EC0: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x80003EC4: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80003EC8: sw          $t2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r10;
    // 0x80003ECC: lw          $t4, 0x0($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X0);
    // 0x80003ED0: addiu       $t3, $t3, -0x1880
    ctx->r11 = ADD32(ctx->r11, -0X1880);
    // 0x80003ED4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80003ED8: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80003EDC: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80003EE0: lui         $a2, 0xF64F
    ctx->r6 = S32(0XF64F << 16);
    // 0x80003EE4: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x80003EE8: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x80003EEC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80003EF0: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x80003EF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80003EF8:
    // 0x80003EF8: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x80003EFC: andi        $t8, $v0, 0x3FF
    ctx->r24 = ctx->r2 & 0X3FF;
    // 0x80003F00: addu        $t4, $v0, $t9
    ctx->r12 = ADD32(ctx->r2, ctx->r25);
    // 0x80003F04: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x80003F08: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80003F0C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80003F10: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80003F14: slti        $at, $v0, 0xF0
    ctx->r1 = SIGNED(ctx->r2) < 0XF0 ? 1 : 0;
    // 0x80003F18: or          $t7, $t6, $a2
    ctx->r15 = ctx->r14 | ctx->r6;
    // 0x80003F1C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80003F20: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80003F24: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80003F28: bne         $at, $zero, L_80003EF8
    if (ctx->r1 != 0) {
        // 0x80003F2C: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_80003EF8;
    }
    // 0x80003F2C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80003F30: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80003F34: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x80003F38: lw          $t4, 0x0($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X0);
    // 0x80003F3C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80003F40: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80003F44: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x80003F48: lw          $t7, -0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, -0X4);
    // 0x80003F4C: lui         $t9, 0xF64F
    ctx->r25 = S32(0XF64F << 16);
    // 0x80003F50: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x80003F54: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80003F58: ori         $t9, $t9, 0xC020
    ctx->r25 = ctx->r25 | 0XC020;
    // 0x80003F5C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80003F60: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80003F64: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x80003F68: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80003F6C: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x80003F70: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80003F74: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x80003F78: lui         $t7, 0xF64F
    ctx->r15 = S32(0XF64F << 16);
    // 0x80003F7C: ori         $t7, $t7, 0xC040
    ctx->r15 = ctx->r15 | 0XC040;
    // 0x80003F80: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80003F84: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80003F88: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x80003F8C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80003F90: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x80003F94: andi        $t4, $t9, 0x3FF
    ctx->r12 = ctx->r25 & 0X3FF;
    // 0x80003F98: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80003F9C: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x80003FA0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80003FA4: addiu       $t0, $zero, 0xF0
    ctx->r8 = ADD32(0, 0XF0);
L_80003FA8:
    // 0x80003FA8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80003FAC: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x80003FB0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80003FB4: or          $t9, $t8, $a2
    ctx->r25 = ctx->r24 | ctx->r6;
    // 0x80003FB8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80003FBC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80003FC0: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x80003FC4: addiu       $t8, $v0, 0x10
    ctx->r24 = ADD32(ctx->r2, 0X10);
    // 0x80003FC8: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x80003FCC: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x80003FD0: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x80003FD4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80003FD8: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x80003FDC: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80003FE0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80003FE4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80003FE8: or          $t5, $t4, $a2
    ctx->r13 = ctx->r12 | ctx->r6;
    // 0x80003FEC: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x80003FF0: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80003FF4: addiu       $t5, $v0, 0x18
    ctx->r13 = ADD32(ctx->r2, 0X18);
    // 0x80003FF8: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x80003FFC: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80004000: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x80004004: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x80004008: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x8000400C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80004010: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x80004014: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80004018: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8000401C: or          $t8, $t7, $a2
    ctx->r24 = ctx->r15 | ctx->r6;
    // 0x80004020: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80004024: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x80004028: addiu       $a1, $v0, 0x20
    ctx->r5 = ADD32(ctx->r2, 0X20);
    // 0x8000402C: addu        $t4, $v0, $t9
    ctx->r12 = ADD32(ctx->r2, ctx->r25);
    // 0x80004030: addiu       $t5, $t4, 0x10
    ctx->r13 = ADD32(ctx->r12, 0X10);
    // 0x80004034: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x80004038: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000403C: andi        $t8, $a1, 0x3FF
    ctx->r24 = ctx->r5 & 0X3FF;
    // 0x80004040: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80004044: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80004048: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8000404C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80004050: or          $t4, $t9, $a2
    ctx->r12 = ctx->r25 | ctx->r6;
    // 0x80004054: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80004058: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x8000405C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80004060: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x80004064: addiu       $t7, $t6, 0x18
    ctx->r15 = ADD32(ctx->r14, 0X18);
    // 0x80004068: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x8000406C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80004070: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80004074: bne         $a1, $t0, L_80003FA8
    if (ctx->r5 != ctx->r8) {
        // 0x80004078: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_80003FA8;
    }
    // 0x80004078: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8000407C: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x80004080: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80004084: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x80004088: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
L_8000408C:
    // 0x8000408C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80004090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80004094: jr          $ra
    // 0x80004098: nop

    return;
    // 0x80004098: nop

;}
RECOMP_FUNC void func_800040A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800040A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800040A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800040A8: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800040AC: jal         0x80077200
    // 0x800040B0: addiu       $a0, $a0, 0x438
    ctx->r4 = ADD32(ctx->r4, 0X438);
    osDestroyThread_recomp(rdram, ctx);
        goto after_0;
    // 0x800040B0: addiu       $a0, $a0, 0x438
    ctx->r4 = ADD32(ctx->r4, 0X438);
    after_0:
    // 0x800040B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800040B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800040BC: jr          $ra
    // 0x800040C0: nop

    return;
    // 0x800040C0: nop

;}
RECOMP_FUNC void func_800040CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800040CC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x800040D0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800040D4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800040D8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800040DC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800040E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800040E4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800040E8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800040EC: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x800040F0: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x800040F4: lui         $s5, 0x800A
    ctx->r21 = S32(0X800A << 16);
    // 0x800040F8: lui         $s6, 0x800A
    ctx->r22 = S32(0X800A << 16);
    // 0x800040FC: lui         $s7, 0x800A
    ctx->r23 = S32(0X800A << 16);
    // 0x80004100: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80004104: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80004108: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8000410C: addiu       $s7, $s7, 0x4608
    ctx->r23 = ADD32(ctx->r23, 0X4608);
    // 0x80004110: addiu       $s6, $s6, 0x46CC
    ctx->r22 = ADD32(ctx->r22, 0X46CC);
    // 0x80004114: addiu       $s5, $s5, 0x4648
    ctx->r21 = ADD32(ctx->r21, 0X4648);
    // 0x80004118: addiu       $s4, $s4, 0x46D0
    ctx->r20 = ADD32(ctx->r20, 0X46D0);
    // 0x8000411C: addiu       $s0, $s0, 0x4700
    ctx->r16 = ADD32(ctx->r16, 0X4700);
    // 0x80004120: lui         $s3, 0xDB06
    ctx->r19 = S32(0XDB06 << 16);
    // 0x80004124: addiu       $fp, $sp, 0x68
    ctx->r30 = ADD32(ctx->r29, 0X68);
    // 0x80004128: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
L_8000412C:
    // 0x8000412C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80004130: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x80004134: jal         0x80075330
    // 0x80004138: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80004138: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8000413C: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x80004140: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80004144: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80004148: jal         0x80075330
    // 0x8000414C: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8000414C: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_1:
    // 0x80004150: jal         0x800771C0
    // 0x80004154: nop

    osViGetNextFramebuffer_recomp(rdram, ctx);
        goto after_2;
    // 0x80004154: nop

    after_2:
    // 0x80004158: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x8000415C: nop

    // 0x80004160: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x80004164: nop

    // 0x80004168: bne         $v0, $t7, L_8000419C
    if (ctx->r2 != ctx->r15) {
        // 0x8000416C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8000419C;
    }
    // 0x8000416C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80004170:
    // 0x80004170: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80004174: jal         0x80075330
    // 0x80004178: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x80004178: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x8000417C: jal         0x800771C0
    // 0x80004180: nop

    osViGetNextFramebuffer_recomp(rdram, ctx);
        goto after_4;
    // 0x80004180: nop

    after_4:
    // 0x80004184: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x80004188: nop

    // 0x8000418C: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x80004190: nop

    // 0x80004194: beq         $v0, $t9, L_80004170
    if (ctx->r2 == ctx->r25) {
        // 0x80004198: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80004170;
    }
    // 0x80004198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8000419C:
    // 0x8000419C: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x800041A0: lhu         $t1, 0x0($s6)
    ctx->r9 = MEM_HU(ctx->r22, 0X0);
    // 0x800041A4: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x800041A8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800041AC: andi        $t3, $t2, 0xFFFF
    ctx->r11 = ctx->r10 & 0XFFFF;
    // 0x800041B0: or          $t4, $t3, $s3
    ctx->r12 = ctx->r11 | ctx->r19;
    // 0x800041B4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800041B8: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x800041BC: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x800041C0: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x800041C4: lw          $t6, 0xC($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XC);
    // 0x800041C8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800041CC: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x800041D0: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x800041D4: nop

    // 0x800041D8: lw          $a0, 0x20($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X20);
    // 0x800041DC: nop

    // 0x800041E0: beq         $a0, $zero, L_80004214
    if (ctx->r4 == 0) {
        // 0x800041E4: nop
    
            goto L_80004214;
    }
    // 0x800041E4: nop

    // 0x800041E8: lhu         $t8, 0x0($s6)
    ctx->r24 = MEM_HU(ctx->r22, 0X0);
    // 0x800041EC: nop

    // 0x800041F0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800041F4: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x800041F8: or          $t1, $t0, $s3
    ctx->r9 = ctx->r8 | ctx->r19;
    // 0x800041FC: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x80004200: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x80004204: nop

    // 0x80004208: lw          $t3, 0xC($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XC);
    // 0x8000420C: nop

    // 0x80004210: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
L_80004214:
    // 0x80004214: lhu         $t4, 0x46CE($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X46CE);
    // 0x80004218: lui         $t0, 0xE900
    ctx->r8 = S32(0XE900 << 16);
    // 0x8000421C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80004220: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x80004224: or          $t7, $t6, $s3
    ctx->r15 = ctx->r14 | ctx->r19;
    // 0x80004228: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000422C: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x80004230: lui         $t1, 0xDF00
    ctx->r9 = S32(0XDF00 << 16);
    // 0x80004234: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80004238: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x8000423C: nop

    // 0x80004240: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x80004244: nop

    // 0x80004248: addiu       $a2, $a0, 0x8
    ctx->r6 = ADD32(ctx->r4, 0X8);
    // 0x8000424C: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x80004250: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80004254: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x80004258: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    // 0x8000425C: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x80004260: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x80004264: lw          $a1, 0x24($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X24);
    // 0x80004268: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x8000426C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80004270: sw          $t3, 0x44($a1)
    MEM_W(0X44, ctx->r5) = ctx->r11;
    // 0x80004274: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x80004278: addiu       $a0, $a0, -0x21F0
    ctx->r4 = ADD32(ctx->r4, -0X21F0);
    // 0x8000427C: lw          $t5, 0x10($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X10);
    // 0x80004280: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80004284: sw          $t5, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r13;
    // 0x80004288: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x8000428C: nop

    // 0x80004290: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x80004294: nop

    // 0x80004298: sw          $t7, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r15;
    // 0x8000429C: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x800042A0: nop

    // 0x800042A4: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x800042A8: nop

    // 0x800042AC: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
    // 0x800042B0: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x800042B4: nop

    // 0x800042B8: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x800042BC: nop

    // 0x800042C0: subu        $t2, $v0, $t1
    ctx->r10 = SUB32(ctx->r2, ctx->r9);
    // 0x800042C4: jal         0x80075F70
    // 0x800042C8: sw          $t2, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r10;
    osSendMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x800042C8: sw          $t2, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r10;
    after_5:
    // 0x800042CC: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800042D0: addiu       $a0, $a0, 0x45E8
    ctx->r4 = ADD32(ctx->r4, 0X45E8);
    // 0x800042D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800042D8: jal         0x80075330
    // 0x800042DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x800042DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x800042E0: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x800042E4: lw          $s2, 0x0($s4)
    ctx->r18 = MEM_W(ctx->r20, 0X0);
    // 0x800042E8: lw          $s1, 0xC($t3)
    ctx->r17 = MEM_W(ctx->r11, 0XC);
    // 0x800042EC: jal         0x80077170
    // 0x800042F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    osViSwapBuffer_recomp(rdram, ctx);
        goto after_7;
    // 0x800042F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x800042F4: sw          $s1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r17;
    // 0x800042F8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800042FC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80004300: jal         0x80075F70
    // 0x80004304: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_8;
    // 0x80004304: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x80004308: jal         0x80075AA0
    // 0x8000430C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80075AA0(rdram, ctx);
        goto after_9;
    // 0x8000430C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x80004310: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x80004314: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80004318: lw          $t5, 0x28($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X28);
    // 0x8000431C: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80004320: addiu       $a0, $a0, 0x4628
    ctx->r4 = ADD32(ctx->r4, 0X4628);
    // 0x80004324: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80004328: jal         0x80075F70
    // 0x8000432C: sw          $t5, 0x3A4($at)
    MEM_W(0X3A4, ctx->r1) = ctx->r13;
    osSendMesg_recomp(rdram, ctx);
        goto after_10;
    // 0x8000432C: sw          $t5, 0x3A4($at)
    MEM_W(0X3A4, ctx->r1) = ctx->r13;
    after_10:
    // 0x80004330: b           L_8000412C
    // 0x80004334: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
        goto L_8000412C;
    // 0x80004334: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x80004338: nop

    // 0x8000433C: nop

    // 0x80004340: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80004344: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80004348: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000434C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80004350: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80004354: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80004358: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8000435C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80004360: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80004364: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80004368: jr          $ra
    // 0x8000436C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8000436C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80004370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004370: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80004374: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80004378: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8000437C: addiu       $v0, $v0, -0x5500
    ctx->r2 = ADD32(ctx->r2, -0X5500);
    // 0x80004380: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80004384: addiu       $t7, $t7, -0x5430
    ctx->r15 = ADD32(ctx->r15, -0X5430);
    // 0x80004388: lui         $t1, 0x800F
    ctx->r9 = S32(0X800F << 16);
    // 0x8000438C: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x80004390: lui         $t4, 0x800F
    ctx->r12 = S32(0X800F << 16);
    // 0x80004394: lui         $t5, 0x800F
    ctx->r13 = S32(0X800F << 16);
    // 0x80004398: subu        $t8, $t7, $v0
    ctx->r24 = SUB32(ctx->r15, ctx->r2);
    // 0x8000439C: addiu       $t9, $zero, 0x1000
    ctx->r25 = ADD32(0, 0X1000);
    // 0x800043A0: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
    // 0x800043A4: addiu       $t1, $t1, -0x15B0
    ctx->r9 = ADD32(ctx->r9, -0X15B0);
    // 0x800043A8: addiu       $t2, $zero, 0x400
    ctx->r10 = ADD32(0, 0X400);
    // 0x800043AC: addiu       $t3, $t3, -0x21C0
    ctx->r11 = ADD32(ctx->r11, -0X21C0);
    // 0x800043B0: addiu       $t4, $t4, -0x21C0
    ctx->r12 = ADD32(ctx->r12, -0X21C0);
    // 0x800043B4: addiu       $t5, $t5, -0x21B0
    ctx->r13 = ADD32(ctx->r13, -0X21B0);
    // 0x800043B8: addiu       $t6, $zero, 0xC00
    ctx->r14 = ADD32(0, 0XC00);
    // 0x800043BC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x800043C0: sw          $t8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r24;
    // 0x800043C4: sw          $t9, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r25;
    // 0x800043C8: sw          $t0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r8;
    // 0x800043CC: sw          $t1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r9;
    // 0x800043D0: sw          $t2, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r10;
    // 0x800043D4: sw          $t3, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r11;
    // 0x800043D8: sw          $t4, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r12;
    // 0x800043DC: sw          $t5, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r13;
    // 0x800043E0: jr          $ra
    // 0x800043E4: sw          $t6, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r14;
    return;
    // 0x800043E4: sw          $t6, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_800043E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800043E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800043EC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800043F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800043F4: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800043F8: addiu       $a0, $a0, 0x4648
    ctx->r4 = ADD32(ctx->r4, 0X4648);
    // 0x800043FC: jal         0x80075F70
    // 0x80004400: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80004400: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80004404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80004408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000440C: jr          $ra
    // 0x80004410: nop

    return;
    // 0x80004410: nop

;}
RECOMP_FUNC void func_80004414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004414: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80004418: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8000441C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80004420: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80004424: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80004428: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8000442C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80004430: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80004434: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80004438: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8000443C: addiu       $a1, $a1, -0x1868
    ctx->r5 = ADD32(ctx->r5, -0X1868);
    // 0x80004440: jal         0x80073EF0
    // 0x80004444: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80073EF0(rdram, ctx);
        goto after_0;
    // 0x80004444: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x80004448: lui         $s6, 0x800A
    ctx->r22 = S32(0X800A << 16);
    // 0x8000444C: addiu       $s6, $s6, 0x45E8
    ctx->r22 = ADD32(ctx->r22, 0X45E8);
    // 0x80004450: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80004454: addiu       $a1, $a1, 0x4600
    ctx->r5 = ADD32(ctx->r5, 0X4600);
    // 0x80004458: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8000445C: jal         0x80075300
    // 0x80004460: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x80004460: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80004464: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x80004468: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8000446C: addiu       $a0, $a0, 0x46D8
    ctx->r4 = ADD32(ctx->r4, 0X46D8);
    // 0x80004470: addiu       $v1, $v1, -0x4DB0
    ctx->r3 = ADD32(ctx->r3, -0X4DB0);
    // 0x80004474: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80004478:
    // 0x80004478: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8000447C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80004480: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x80004484: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    // 0x80004488: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8000448C: bne         $at, $zero, L_80004478
    if (ctx->r1 != 0) {
        // 0x80004490: sw          $zero, -0x18($v1)
        MEM_W(-0X18, ctx->r3) = 0;
            goto L_80004478;
    }
    // 0x80004490: sw          $zero, -0x18($v1)
    MEM_W(-0X18, ctx->r3) = 0;
    // 0x80004494: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80004498: sh          $zero, 0x46EC($at)
    MEM_H(0X46EC, ctx->r1) = 0;
    // 0x8000449C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800044A0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800044A4: sh          $t6, 0x3A0($at)
    MEM_H(0X3A0, ctx->r1) = ctx->r14;
    // 0x800044A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800044AC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800044B0: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x800044B4: sh          $t7, 0x46CC($at)
    MEM_H(0X46CC, ctx->r1) = ctx->r15;
    // 0x800044B8: addiu       $s0, $s0, 0x4648
    ctx->r16 = ADD32(ctx->r16, 0X4648);
    // 0x800044BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800044C0: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x800044C4: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x800044C8: sh          $t8, 0x46CE($at)
    MEM_H(0X46CE, ctx->r1) = ctx->r24;
    // 0x800044CC: addiu       $a1, $a1, 0x4660
    ctx->r5 = ADD32(ctx->r5, 0X4660);
    // 0x800044D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800044D4: jal         0x80075300
    // 0x800044D8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_2;
    // 0x800044D8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x800044DC: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x800044E0: addiu       $a1, $a1, 0x1000
    ctx->r5 = ADD32(ctx->r5, 0X1000);
    // 0x800044E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800044E8: jal         0x80075F70
    // 0x800044EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x800044EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x800044F0: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x800044F4: addiu       $t9, $t9, 0x6800
    ctx->r25 = ADD32(ctx->r25, 0X6800);
    // 0x800044F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800044FC: sw          $t9, 0x46D0($at)
    MEM_W(0X46D0, ctx->r1) = ctx->r25;
    // 0x80004500: jal         0x80075AA0
    // 0x80004504: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80075AA0(rdram, ctx);
        goto after_4;
    // 0x80004504: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x80004508: lui         $s3, 0x800A
    ctx->r19 = S32(0X800A << 16);
    // 0x8000450C: addiu       $s3, $s3, 0x4628
    ctx->r19 = ADD32(ctx->r19, 0X4628);
    // 0x80004510: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80004514: addiu       $a1, $a1, 0x4640
    ctx->r5 = ADD32(ctx->r5, 0X4640);
    // 0x80004518: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8000451C: jal         0x80075300
    // 0x80004520: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_5;
    // 0x80004520: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_5:
    // 0x80004524: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x80004528: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x8000452C: lui         $s2, 0x800F
    ctx->r18 = S32(0X800F << 16);
    // 0x80004530: lui         $s5, 0x8014
    ctx->r21 = S32(0X8014 << 16);
    // 0x80004534: addiu       $s5, $s5, 0x1D40
    ctx->r21 = ADD32(ctx->r21, 0X1D40);
    // 0x80004538: addiu       $s2, $s2, 0x2CC0
    ctx->r18 = ADD32(ctx->r18, 0X2CC0);
    // 0x8000453C: addiu       $s1, $s1, 0x4670
    ctx->r17 = ADD32(ctx->r17, 0X4670);
    // 0x80004540: addiu       $s0, $s0, 0x3A8
    ctx->r16 = ADD32(ctx->r16, 0X3A8);
    // 0x80004544: addiu       $s4, $zero, 0x6
    ctx->r20 = ADD32(0, 0X6);
L_80004548:
    // 0x80004548: jal         0x80004370
    // 0x8000454C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80004370(rdram, ctx);
        goto after_6;
    // 0x8000454C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80004550: sw          $s6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r22;
    // 0x80004554: sw          $s4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r20;
    // 0x80004558: sw          $s0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r16;
    // 0x8000455C: sw          $s2, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r18;
    // 0x80004560: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80004564: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80004568: jal         0x80075F70
    // 0x8000456C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x8000456C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80004570: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80004574: ori         $at, $at, 0x7840
    ctx->r1 = ctx->r1 | 0X7840;
    // 0x80004578: addu        $s2, $s2, $at
    ctx->r18 = ADD32(ctx->r18, ctx->r1);
    // 0x8000457C: addiu       $s0, $s0, 0x48
    ctx->r16 = ADD32(ctx->r16, 0X48);
    // 0x80004580: bne         $s2, $s5, L_80004548
    if (ctx->r18 != ctx->r21) {
        // 0x80004584: addiu       $s1, $s1, 0x2C
        ctx->r17 = ADD32(ctx->r17, 0X2C);
            goto L_80004548;
    }
    // 0x80004584: addiu       $s1, $s1, 0x2C
    ctx->r17 = ADD32(ctx->r17, 0X2C);
    // 0x80004588: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8000458C: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80004590: addiu       $a1, $a1, 0x4620
    ctx->r5 = ADD32(ctx->r5, 0X4620);
    // 0x80004594: addiu       $a0, $a0, 0x4608
    ctx->r4 = ADD32(ctx->r4, 0X4608);
    // 0x80004598: jal         0x80075300
    // 0x8000459C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_8;
    // 0x8000459C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_8:
    // 0x800045A0: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x800045A4: addiu       $s0, $s0, 0x4700
    ctx->r16 = ADD32(ctx->r16, 0X4700);
    // 0x800045A8: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800045AC: addiu       $a1, $a1, -0x4CC0
    ctx->r5 = ADD32(ctx->r5, -0X4CC0);
    // 0x800045B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800045B4: jal         0x80075300
    // 0x800045B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_9;
    // 0x800045B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x800045BC: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800045C0: addiu       $a0, $a0, 0x46F0
    ctx->r4 = ADD32(ctx->r4, 0X46F0);
    // 0x800045C4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800045C8: jal         0x80000960
    // 0x800045CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80000960(rdram, ctx);
        goto after_10;
    // 0x800045CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x800045D0: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x800045D4: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x800045D8: addiu       $s0, $s0, 0x438
    ctx->r16 = ADD32(ctx->r16, 0X438);
    // 0x800045DC: addiu       $t0, $t0, 0xDE8
    ctx->r8 = ADD32(ctx->r8, 0XDE8);
    // 0x800045E0: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x800045E4: addiu       $t1, $zero, 0x64
    ctx->r9 = ADD32(0, 0X64);
    // 0x800045E8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x800045EC: addiu       $a2, $a2, 0x40CC
    ctx->r6 = ADD32(ctx->r6, 0X40CC);
    // 0x800045F0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800045F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800045F8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x800045FC: jal         0x80075C30
    // 0x80004600: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    osCreateThread_recomp(rdram, ctx);
        goto after_11;
    // 0x80004600: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x80004604: jal         0x80075D80
    // 0x80004608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osStartThread_recomp(rdram, ctx);
        goto after_12;
    // 0x80004608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8000460C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80004610: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80004614: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80004618: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8000461C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80004620: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80004624: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80004628: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8000462C: jr          $ra
    // 0x80004630: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80004630: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80004634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004634: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x80004638: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x8000463C: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80004640: sll         $t7, $t6, 24
    ctx->r15 = S32(ctx->r14 << 24);
    // 0x80004644: andi        $t1, $a2, 0xFF
    ctx->r9 = ctx->r6 & 0XFF;
    // 0x80004648: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x8000464C: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x80004650: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80004654: or          $a0, $t0, $t2
    ctx->r4 = ctx->r8 | ctx->r10;
    // 0x80004658: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000465C: ori         $t3, $a0, 0xFF
    ctx->r11 = ctx->r4 | 0XFF;
    // 0x80004660: jal         0x8000CA44
    // 0x80004664: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_8000CA44(rdram, ctx);
        goto after_0;
    // 0x80004664: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_0:
    // 0x80004668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000466C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80004670: sh          $v0, 0x3A0($at)
    MEM_H(0X3A0, ctx->r1) = ctx->r2;
    // 0x80004674: jr          $ra
    // 0x80004678: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80004678: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8000467C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000467C: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80004680: jr          $ra
    // 0x80004684: addiu       $v0, $v0, -0x4000
    ctx->r2 = ADD32(ctx->r2, -0X4000);
    return;
    // 0x80004684: addiu       $v0, $v0, -0x4000
    ctx->r2 = ADD32(ctx->r2, -0X4000);
;}
RECOMP_FUNC void func_80004688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004688: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8000468C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80004690: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80004694: addiu       $t7, $t7, -0x4DB0
    ctx->r15 = ADD32(ctx->r15, -0X4DB0);
    // 0x80004698: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8000469C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800046A0: lw          $a2, 0x14($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X14);
    // 0x800046A4: lui         $at, 0xE000
    ctx->r1 = S32(0XE000 << 16);
    // 0x800046A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800046AC: addu        $t8, $a1, $at
    ctx->r24 = ADD32(ctx->r5, ctx->r1);
    // 0x800046B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800046B4: beq         $a2, $zero, L_800046E0
    if (ctx->r6 == 0) {
        // 0x800046B8: sw          $t8, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->r24;
            goto L_800046E0;
    }
    // 0x800046B8: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x800046BC: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
    // 0x800046C0: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x800046C4: subu        $t1, $t8, $t0
    ctx->r9 = SUB32(ctx->r24, ctx->r8);
    // 0x800046C8: sra         $t2, $t1, 3
    ctx->r10 = S32(SIGNED(ctx->r9) >> 3);
    // 0x800046CC: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x800046D0: bne         $at, $zero, L_800046E4
    if (ctx->r1 != 0) {
        // 0x800046D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800046E4;
    }
    // 0x800046D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800046D8: jal         0x80000FBC
    // 0x800046DC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x800046DC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
L_800046E0:
    // 0x800046E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800046E4:
    // 0x800046E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800046E8: jr          $ra
    // 0x800046EC: nop

    return;
    // 0x800046EC: nop

;}
RECOMP_FUNC void func_800046F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800046F0: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x800046F4: addiu       $a2, $a2, 0x46C8
    ctx->r6 = ADD32(ctx->r6, 0X46C8);
    // 0x800046F8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x800046FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80004700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80004704: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x80004708: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x8000470C: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x80004710: sw          $t7, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r15;
    // 0x80004714: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80004718: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8000471C: lw          $t8, 0x1C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X1C);
    // 0x80004720: lw          $t9, 0x18($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X18);
    // 0x80004724: addiu       $a0, $a0, 0x4B60
    ctx->r4 = ADD32(ctx->r4, 0X4B60);
    // 0x80004728: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x8000472C: sra         $t1, $t0, 3
    ctx->r9 = S32(SIGNED(ctx->r8) >> 3);
    // 0x80004730: sltiu       $at, $t1, 0x4F09
    ctx->r1 = ctx->r9 < 0X4F09 ? 1 : 0;
    // 0x80004734: bne         $at, $zero, L_8000474C
    if (ctx->r1 != 0) {
        // 0x80004738: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_8000474C;
    }
    // 0x80004738: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x8000473C: jal         0x80000FBC
    // 0x80004740: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x80004740: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80004744: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80004748: nop

L_8000474C:
    // 0x8000474C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80004750: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80004754: jr          $ra
    // 0x80004758: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x80004758: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
;}
RECOMP_FUNC void func_8000475C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000475C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80004760: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80004764: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80004768: nop

    // 0x8000476C: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x80004770: bne         $t6, $zero, L_8000478C
    if (ctx->r14 != 0) {
        // 0x80004774: ori         $t7, $v0, 0x2
        ctx->r15 = ctx->r2 | 0X2;
            goto L_8000478C;
    }
    // 0x80004774: ori         $t7, $v0, 0x2
    ctx->r15 = ctx->r2 | 0X2;
    // 0x80004778: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8000477C: jal         0x800046F0
    // 0x80004780: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    func_800046F0(rdram, ctx);
        goto after_0;
    // 0x80004780: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    after_0:
    // 0x80004784: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80004788: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_8000478C:
    // 0x8000478C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80004790: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80004794: jr          $ra
    // 0x80004798: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    return;
    // 0x80004798: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
;}
RECOMP_FUNC void func_8000479C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000479C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800047A0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800047A4: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800047A8: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x800047AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800047B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800047B4: addiu       $t7, $t7, -0x4DB0
    ctx->r15 = ADD32(ctx->r15, -0X4DB0);
    // 0x800047B8: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800047BC: jal         0x8000475C
    // 0x800047C0: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    func_8000475C(rdram, ctx);
        goto after_0;
    // 0x800047C0: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x800047C4: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x800047C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800047CC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x800047D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800047D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800047D8: jr          $ra
    // 0x800047DC: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    return;
    // 0x800047DC: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
;}
RECOMP_FUNC void func_800047E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800047E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800047E4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800047E8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800047EC: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x800047F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800047F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800047F8: addiu       $t7, $t7, -0x4DB0
    ctx->r15 = ADD32(ctx->r15, -0X4DB0);
    // 0x800047FC: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80004800: jal         0x8000475C
    // 0x80004804: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    func_8000475C(rdram, ctx);
        goto after_0;
    // 0x80004804: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x80004808: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x8000480C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80004810: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80004814: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80004818: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000481C: jr          $ra
    // 0x80004820: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    return;
    // 0x80004820: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
;}
RECOMP_FUNC void func_8000486C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000486C: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x80004870: lh          $a2, 0x46EC($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X46EC);
    // 0x80004874: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80004878: slti        $at, $a2, 0xA
    ctx->r1 = SIGNED(ctx->r6) < 0XA ? 1 : 0;
    // 0x8000487C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80004880: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80004884: bne         $at, $zero, L_800048A4
    if (ctx->r1 != 0) {
        // 0x80004888: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_800048A4;
    }
    // 0x80004888: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8000488C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80004890: jal         0x80000FBC
    // 0x80004894: addiu       $a0, $a0, 0x4B78
    ctx->r4 = ADD32(ctx->r4, 0X4B78);
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x80004894: addiu       $a0, $a0, 0x4B78
    ctx->r4 = ADD32(ctx->r4, 0X4B78);
    after_0:
    // 0x80004898: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x8000489C: lh          $a2, 0x46EC($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X46EC);
    // 0x800048A0: nop

L_800048A4:
    // 0x800048A4: sll         $t6, $a2, 1
    ctx->r14 = S32(ctx->r6 << 1);
    // 0x800048A8: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800048AC: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x800048B0: lh          $v0, 0x46D8($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X46D8);
    // 0x800048B4: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x800048B8: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x800048BC: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x800048C0: addiu       $t7, $a2, 0x1
    ctx->r15 = ADD32(ctx->r6, 0X1);
    // 0x800048C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800048C8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800048CC: addiu       $t9, $t9, -0x4DB0
    ctx->r25 = ADD32(ctx->r25, -0X4DB0);
    // 0x800048D0: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x800048D4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800048D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800048DC: sh          $t7, 0x46EC($at)
    MEM_H(0X46EC, ctx->r1) = ctx->r15;
    // 0x800048E0: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x800048E4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800048E8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x800048EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800048F0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x800048F4: jr          $ra
    // 0x800048F8: sw          $t2, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r10;
    return;
    // 0x800048F8: sw          $t2, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r10;
;}
RECOMP_FUNC void func_800048FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800048FC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80004900: addiu       $v0, $v0, 0x46C8
    ctx->r2 = ADD32(ctx->r2, 0X46C8);
    // 0x80004904: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80004908: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000490C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80004910: sw          $a0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r4;
    // 0x80004914: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80004918: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8000491C: sw          $a1, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->r5;
    // 0x80004920: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80004924: addiu       $t8, $t8, -0x5430
    ctx->r24 = ADD32(ctx->r24, -0X5430);
    // 0x80004928: sw          $t8, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r24;
    // 0x8000492C: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x80004930: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80004934: addiu       $t1, $t1, 0x6EA0
    ctx->r9 = ADD32(ctx->r9, 0X6EA0);
    // 0x80004938: sw          $t1, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r9;
    // 0x8000493C: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x80004940: lw          $t3, -0x19AC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X19AC);
    // 0x80004944: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x80004948: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8000494C: sw          $t3, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->r11;
    // 0x80004950: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x80004954: ori         $at, $at, 0x7840
    ctx->r1 = ctx->r1 | 0X7840;
    // 0x80004958: lw          $t5, 0x18($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X18);
    // 0x8000495C: lw          $t6, 0x1C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X1C);
    // 0x80004960: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80004964: subu        $t7, $t5, $t6
    ctx->r15 = SUB32(ctx->r13, ctx->r14);
    // 0x80004968: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x8000496C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80004970: addiu       $a0, $a0, 0x4608
    ctx->r4 = ADD32(ctx->r4, 0X4608);
    // 0x80004974: jal         0x80075F70
    // 0x80004978: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80004978: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8000497C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80004980: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80004984: jr          $ra
    // 0x80004988: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80004988: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8000498C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000498C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80004990: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80004994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80004998: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8000499C: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x800049A0: addiu       $a1, $a1, 0x46C8
    ctx->r5 = ADD32(ctx->r5, 0X46C8);
    // 0x800049A4: addiu       $a0, $a0, 0x4628
    ctx->r4 = ADD32(ctx->r4, 0X4628);
    // 0x800049A8: jal         0x80075330
    // 0x800049AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x800049AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800049B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800049B4: bne         $v0, $at, L_800049C4
    if (ctx->r2 != ctx->r1) {
        // 0x800049B8: lui         $v1, 0x800A
        ctx->r3 = S32(0X800A << 16);
            goto L_800049C4;
    }
    // 0x800049B8: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x800049BC: b           L_80004A5C
    // 0x800049C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80004A5C;
    // 0x800049C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800049C4:
    // 0x800049C4: lw          $v1, 0x46C8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46C8);
    // 0x800049C8: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x800049CC: lw          $t6, 0x18($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X18);
    // 0x800049D0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800049D4: sw          $t6, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r14;
    // 0x800049D8: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x800049DC: addiu       $a0, $a0, -0x4CC0
    ctx->r4 = ADD32(ctx->r4, -0X4CC0);
    // 0x800049E0: addiu       $v0, $v0, -0x4DB0
    ctx->r2 = ADD32(ctx->r2, -0X4DB0);
L_800049E4:
    // 0x800049E4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800049E8: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x800049EC: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x800049F0: and         $t8, $t7, $v1
    ctx->r24 = ctx->r15 & ctx->r3;
    // 0x800049F4: bne         $at, $zero, L_800049E4
    if (ctx->r1 != 0) {
        // 0x800049F8: sw          $t8, -0x18($v0)
        MEM_W(-0X18, ctx->r2) = ctx->r24;
            goto L_800049E4;
    }
    // 0x800049F8: sw          $t8, -0x18($v0)
    MEM_W(-0X18, ctx->r2) = ctx->r24;
    // 0x800049FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80004A00: jal         0x800046F0
    // 0x80004A04: nop

    func_800046F0(rdram, ctx);
        goto after_1;
    // 0x80004A04: nop

    after_1:
    // 0x80004A08: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x80004A0C: lw          $t9, 0x46C8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X46C8);
    // 0x80004A10: lui         $a1, 0xE000
    ctx->r5 = S32(0XE000 << 16);
    // 0x80004A14: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
    // 0x80004A18: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80004A1C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80004A20: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x80004A24: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80004A28: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x80004A2C: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x80004A30: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80004A34: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x80004A38: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80004A3C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80004A40: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80004A44: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x80004A48: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80004A4C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80004A50: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x80004A54: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80004A58: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
L_80004A5C:
    // 0x80004A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80004A60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80004A64: jr          $ra
    // 0x80004A68: nop

    return;
    // 0x80004A68: nop

;}
RECOMP_FUNC void func_80004A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004A6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80004A70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80004A74: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80004A78: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80004A7C: jal         0x800046F0
    // 0x80004A80: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800046F0(rdram, ctx);
        goto after_0;
    // 0x80004A80: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80004A84: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80004A88: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80004A8C: sll         $t6, $a2, 3
    ctx->r14 = S32(ctx->r6 << 3);
    // 0x80004A90: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80004A94: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80004A98: jal         0x80076BF8
    // 0x80004A9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80004A9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80004AA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80004AA4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80004AA8: jr          $ra
    // 0x80004AAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80004AAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80004AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004AB0: jr          $ra
    // 0x80004AB4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80004AB4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80004AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004AB8: jr          $ra
    // 0x80004ABC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80004ABC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80004AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004AC0: jr          $ra
    // 0x80004AC4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80004AC4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80004AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004AD0: jr          $ra
    // 0x80004AD4: nop

    return;
    // 0x80004AD4: nop

;}
RECOMP_FUNC void func_80004AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004AE0: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80004AE4: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x80004AE8: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x80004AEC: addiu       $t1, $t1, 0x4724
    ctx->r9 = ADD32(ctx->r9, 0X4724);
    // 0x80004AF0: addiu       $t0, $t0, 0x4720
    ctx->r8 = ADD32(ctx->r8, 0X4720);
    // 0x80004AF4: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x80004AF8: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80004AFC: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80004B00: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x80004B04: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x80004B08: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x80004B0C: addiu       $t2, $t2, 0x472C
    ctx->r10 = ADD32(ctx->r10, 0X472C);
    // 0x80004B10: addiu       $v1, $v1, 0x4728
    ctx->r3 = ADD32(ctx->r3, 0X4728);
    // 0x80004B14: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80004B18: lw          $t6, 0x0($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X0);
    // 0x80004B1C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80004B20: sh          $t7, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r15;
    // 0x80004B24: sh          $t8, 0x82($sp)
    MEM_H(0X82, ctx->r29) = ctx->r24;
    // 0x80004B28: sh          $t6, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r14;
    // 0x80004B2C: sh          $t9, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r25;
    // 0x80004B30: lui         $t8, 0xFFFC
    ctx->r24 = S32(0XFFFC << 16);
    // 0x80004B34: lui         $a3, 0xE300
    ctx->r7 = S32(0XE300 << 16);
    // 0x80004B38: lui         $t5, 0xE200
    ctx->r13 = S32(0XE200 << 16);
    // 0x80004B3C: ori         $t8, $t8, 0xFFFC
    ctx->r24 = ctx->r24 | 0XFFFC;
    // 0x80004B40: lui         $t7, 0xF700
    ctx->r15 = S32(0XF700 << 16);
    // 0x80004B44: ori         $t5, $t5, 0x1C
    ctx->r13 = ctx->r13 | 0X1C;
    // 0x80004B48: ori         $a3, $a3, 0xA01
    ctx->r7 = ctx->r7 | 0XA01;
    // 0x80004B4C: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x80004B50: lui         $t4, 0x30
    ctx->r12 = S32(0X30 << 16);
    // 0x80004B54: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x80004B58: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80004B5C: sw          $t4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r12;
    // 0x80004B60: sw          $a3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r7;
    // 0x80004B64: sw          $t5, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r13;
    // 0x80004B68: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x80004B6C: sw          $t7, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r15;
    // 0x80004B70: sw          $t8, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r24;
    // 0x80004B74: lhu         $t9, 0x86($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X86);
    // 0x80004B78: lui         $a2, 0xFF10
    ctx->r6 = S32(0XFF10 << 16);
    // 0x80004B7C: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x80004B80: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x80004B84: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
    // 0x80004B88: lui         $t9, 0x22
    ctx->r25 = S32(0X22 << 16);
    // 0x80004B8C: or          $t8, $t7, $a2
    ctx->r24 = ctx->r15 | ctx->r6;
    // 0x80004B90: sw          $t8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r24;
    // 0x80004B94: addiu       $t9, $t9, -0x4000
    ctx->r25 = ADD32(ctx->r25, -0X4000);
    // 0x80004B98: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80004B9C: sw          $t9, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r25;
    // 0x80004BA0: lhu         $t6, 0x7E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X7E);
    // 0x80004BA4: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x80004BA8: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x80004BAC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80004BB0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80004BB4: andi        $t6, $t9, 0x3FF
    ctx->r14 = ctx->r25 & 0X3FF;
    // 0x80004BB8: sll         $t7, $t6, 14
    ctx->r15 = S32(ctx->r14 << 14);
    // 0x80004BBC: lhu         $t6, 0x8A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X8A);
    // 0x80004BC0: lhu         $t9, 0x82($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X82);
    // 0x80004BC4: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80004BC8: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x80004BCC: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x80004BD0: andi        $t6, $t9, 0x3FF
    ctx->r14 = ctx->r25 & 0X3FF;
    // 0x80004BD4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80004BD8: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x80004BDC: sw          $t9, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r25;
    // 0x80004BE0: lhu         $t6, 0x7E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X7E);
    // 0x80004BE4: lhu         $t9, 0x82($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X82);
    // 0x80004BE8: andi        $t8, $t6, 0x3FF
    ctx->r24 = ctx->r14 & 0X3FF;
    // 0x80004BEC: sll         $t7, $t8, 14
    ctx->r15 = S32(ctx->r24 << 14);
    // 0x80004BF0: andi        $t6, $t9, 0x3FF
    ctx->r14 = ctx->r25 & 0X3FF;
    // 0x80004BF4: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80004BF8: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x80004BFC: lui         $t6, 0xFE00
    ctx->r14 = S32(0XFE00 << 16);
    // 0x80004C00: sw          $t9, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r25;
    // 0x80004C04: sw          $t6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r14;
    // 0x80004C08: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80004C0C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80004C10: sw          $t7, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r15;
    // 0x80004C14: lw          $t8, -0x16C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X16C0);
    // 0x80004C18: addiu       $v0, $a0, 0x38
    ctx->r2 = ADD32(ctx->r4, 0X38);
    // 0x80004C1C: beq         $t8, $zero, L_80004D00
    if (ctx->r24 == 0) {
        // 0x80004C20: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80004D00;
    }
    // 0x80004C20: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80004C24: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x80004C28: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80004C2C: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x80004C30: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x80004C34: sh          $t9, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r25;
    // 0x80004C38: sh          $t7, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r15;
    // 0x80004C3C: sh          $t6, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r14;
    // 0x80004C40: sh          $t8, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r24;
    // 0x80004C44: lui         $t9, 0xF700
    ctx->r25 = S32(0XF700 << 16);
    // 0x80004C48: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80004C4C: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x80004C50: sw          $t4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r12;
    // 0x80004C54: sw          $a3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r7;
    // 0x80004C58: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x80004C5C: sw          $t5, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r13;
    // 0x80004C60: sw          $t9, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r25;
    // 0x80004C64: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x80004C68: or          $t8, $a1, $t7
    ctx->r24 = ctx->r5 | ctx->r15;
    // 0x80004C6C: sw          $a1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r5;
    // 0x80004C70: sw          $t8, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r24;
    // 0x80004C74: lhu         $t9, 0x3E($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X3E);
    // 0x80004C78: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x80004C7C: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
    // 0x80004C80: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x80004C84: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x80004C88: or          $t8, $t7, $a2
    ctx->r24 = ctx->r15 | ctx->r6;
    // 0x80004C8C: lui         $t9, 0x200
    ctx->r25 = S32(0X200 << 16);
    // 0x80004C90: sw          $t9, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r25;
    // 0x80004C94: sw          $t8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r24;
    // 0x80004C98: lhu         $t6, 0x36($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X36);
    // 0x80004C9C: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x80004CA0: addiu       $v0, $a0, 0x30
    ctx->r2 = ADD32(ctx->r4, 0X30);
    // 0x80004CA4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80004CA8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80004CAC: andi        $t6, $t9, 0x3FF
    ctx->r14 = ctx->r25 & 0X3FF;
    // 0x80004CB0: sll         $t7, $t6, 14
    ctx->r15 = S32(ctx->r14 << 14);
    // 0x80004CB4: lhu         $t6, 0x42($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X42);
    // 0x80004CB8: lhu         $t9, 0x3A($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X3A);
    // 0x80004CBC: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80004CC0: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x80004CC4: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x80004CC8: andi        $t6, $t9, 0x3FF
    ctx->r14 = ctx->r25 & 0X3FF;
    // 0x80004CCC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80004CD0: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x80004CD4: sw          $t9, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r25;
    // 0x80004CD8: lhu         $t6, 0x36($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X36);
    // 0x80004CDC: lhu         $t9, 0x3A($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X3A);
    // 0x80004CE0: andi        $t8, $t6, 0x3FF
    ctx->r24 = ctx->r14 & 0X3FF;
    // 0x80004CE4: sll         $t7, $t8, 14
    ctx->r15 = S32(ctx->r24 << 14);
    // 0x80004CE8: andi        $t6, $t9, 0x3FF
    ctx->r14 = ctx->r25 & 0X3FF;
    // 0x80004CEC: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80004CF0: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x80004CF4: sw          $t9, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r25;
    // 0x80004CF8: b           L_80004D20
    // 0x80004CFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_80004D20;
    // 0x80004CFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80004D00:
    // 0x80004D00: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80004D04: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x80004D08: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80004D0C: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x80004D10: or          $t9, $t8, $a2
    ctx->r25 = ctx->r24 | ctx->r6;
    // 0x80004D14: lui         $t6, 0x200
    ctx->r14 = S32(0X200 << 16);
    // 0x80004D18: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80004D1C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
L_80004D20:
    // 0x80004D20: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x80004D24: sw          $a3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r7;
    // 0x80004D28: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80004D2C: jr          $ra
    // 0x80004D30: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x80004D30: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_80004D34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004D34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80004D38: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80004D3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80004D40: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80004D44: lui         $t6, 0xDB06
    ctx->r14 = S32(0XDB06 << 16);
    // 0x80004D48: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80004D4C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80004D50: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80004D54: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80004D58: addiu       $t8, $t8, -0x16F8
    ctx->r24 = ADD32(ctx->r24, -0X16F8);
    // 0x80004D5C: lui         $t7, 0xDE00
    ctx->r15 = S32(0XDE00 << 16);
    // 0x80004D60: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80004D64: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80004D68: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80004D6C: lw          $t9, -0x16B0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X16B0);
    // 0x80004D70: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80004D74: beq         $t9, $zero, L_80004D9C
    if (ctx->r25 == 0) {
        // 0x80004D78: lui         $t3, 0xFE00
        ctx->r11 = S32(0XFE00 << 16);
            goto L_80004D9C;
    }
    // 0x80004D78: lui         $t3, 0xFE00
    ctx->r11 = S32(0XFE00 << 16);
    // 0x80004D7C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80004D80: lui         $t0, 0xE300
    ctx->r8 = S32(0XE300 << 16);
    // 0x80004D84: ori         $t0, $t0, 0x1801
    ctx->r8 = ctx->r8 | 0X1801;
    // 0x80004D88: addiu       $t1, $zero, 0xC0
    ctx->r9 = ADD32(0, 0XC0);
    // 0x80004D8C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80004D90: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x80004D94: b           L_80004DB4
    // 0x80004D98: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
        goto L_80004DB4;
    // 0x80004D98: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_80004D9C:
    // 0x80004D9C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80004DA0: lui         $t2, 0xE300
    ctx->r10 = S32(0XE300 << 16);
    // 0x80004DA4: ori         $t2, $t2, 0x1801
    ctx->r10 = ctx->r10 | 0X1801;
    // 0x80004DA8: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x80004DAC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80004DB0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_80004DB4:
    // 0x80004DB4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80004DB8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80004DBC: lui         $t4, 0x22
    ctx->r12 = S32(0X22 << 16);
    // 0x80004DC0: addiu       $t4, $t4, -0x4000
    ctx->r12 = ADD32(ctx->r12, -0X4000);
    // 0x80004DC4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80004DC8: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x80004DCC: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80004DD0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80004DD4: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x80004DD8: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x80004DDC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80004DE0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80004DE4: lui         $t7, 0x50
    ctx->r15 = S32(0X50 << 16);
    // 0x80004DE8: ori         $t7, $t7, 0x3C0
    ctx->r15 = ctx->r15 | 0X3C0;
    // 0x80004DEC: lui         $t6, 0xED00
    ctx->r14 = S32(0XED00 << 16);
    // 0x80004DF0: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80004DF4: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x80004DF8: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80004DFC: lhu         $a1, 0x3A0($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X3A0);
    // 0x80004E00: jal         0x80004AE0
    // 0x80004E04: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_80004AE0(rdram, ctx);
        goto after_0;
    // 0x80004E04: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x80004E08: lui         $t8, 0xD9FF
    ctx->r24 = S32(0XD9FF << 16);
    // 0x80004E0C: lui         $t9, 0x2
    ctx->r25 = S32(0X2 << 16);
    // 0x80004E10: lui         $t0, 0xE200
    ctx->r8 = S32(0XE200 << 16);
    // 0x80004E14: lui         $t1, 0x55
    ctx->r9 = S32(0X55 << 16);
    // 0x80004E18: ori         $t9, $t9, 0x401
    ctx->r25 = ctx->r25 | 0X401;
    // 0x80004E1C: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x80004E20: ori         $t1, $t1, 0x3078
    ctx->r9 = ctx->r9 | 0X3078;
    // 0x80004E24: ori         $t0, $t0, 0x1C
    ctx->r8 = ctx->r8 | 0X1C;
    // 0x80004E28: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80004E2C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80004E30: sw          $t0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r8;
    // 0x80004E34: sw          $t1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r9;
    // 0x80004E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80004E3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80004E40: jr          $ra
    // 0x80004E44: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    return;
    // 0x80004E44: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
;}
