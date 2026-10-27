#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80018448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018448: jr          $ra
    // 0x8001844C: nop

    return;
    // 0x8001844C: nop

;}
RECOMP_FUNC void func_80018450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018450: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80018454: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018458: jal         0x800106D8
    // 0x8001845C: nop

    func_800106D8(rdram, ctx);
        goto after_0;
    // 0x8001845C: nop

    after_0:
    // 0x80018460: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80018464: lw          $a0, -0x5C50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5C50);
    // 0x80018468: nop

    // 0x8001846C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80018470: nop

    // 0x80018474: beq         $v0, $a0, L_80018514
    if (ctx->r2 == ctx->r4) {
        // 0x80018478: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80018514;
    }
    // 0x80018478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001847C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80018480: ori         $a1, $zero, 0xC000
    ctx->r5 = 0 | 0XC000;
L_80018484:
    // 0x80018484: lhu         $v1, 0x24($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X24);
    // 0x80018488: nop

    // 0x8001848C: andi        $t6, $v1, 0xC000
    ctx->r14 = ctx->r3 & 0XC000;
    // 0x80018490: bne         $a1, $t6, L_80018500
    if (ctx->r5 != ctx->r14) {
        // 0x80018494: nop
    
            goto L_80018500;
    }
    // 0x80018494: nop

    // 0x80018498: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8001849C: lwc1        $f6, 0x30($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X30);
    // 0x800184A0: lwc1        $f8, 0x2C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x800184A4: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800184A8: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x800184AC: nop

    // 0x800184B0: bc1t        L_80018500
    if (c1cs) {
        // 0x800184B4: nop
    
            goto L_80018500;
    }
    // 0x800184B4: nop

    // 0x800184B8: lh          $t7, 0x34($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X34);
    // 0x800184BC: andi        $t8, $v1, 0x2000
    ctx->r24 = ctx->r3 & 0X2000;
    // 0x800184C0: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x800184C4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800184C8: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800184CC: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x800184D0: nop

    // 0x800184D4: bc1f        L_800184F0
    if (!c1cs) {
        // 0x800184D8: nop
    
            goto L_800184F0;
    }
    // 0x800184D8: nop

    // 0x800184DC: beq         $t8, $zero, L_800184EC
    if (ctx->r24 == 0) {
        // 0x800184E0: nop
    
            goto L_800184EC;
    }
    // 0x800184E0: nop

    // 0x800184E4: b           L_800184F0
    // 0x800184E8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_800184F0;
    // 0x800184E8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_800184EC:
    // 0x800184EC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_800184F0:
    // 0x800184F0: swc1        $f0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f0.u32l;
    // 0x800184F4: swc1        $f0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f0.u32l;
    // 0x800184F8: lw          $a0, -0x5C50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5C50);
    // 0x800184FC: nop

L_80018500:
    // 0x80018500: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80018504: nop

    // 0x80018508: bne         $v0, $a0, L_80018484
    if (ctx->r2 != ctx->r4) {
        // 0x8001850C: nop
    
            goto L_80018484;
    }
    // 0x8001850C: nop

    // 0x80018510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80018514:
    // 0x80018514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80018518: jr          $ra
    // 0x8001851C: nop

    return;
    // 0x8001851C: nop

;}
RECOMP_FUNC void func_80018520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018520: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80018524: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018528: lhu         $t6, 0x34($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X34);
    // 0x8001852C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80018530: bne         $t6, $zero, L_8001854C
    if (ctx->r14 != 0) {
        // 0x80018534: nop
    
            goto L_8001854C;
    }
    // 0x80018534: nop

    // 0x80018538: lw          $a0, 0x98($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X98);
    // 0x8001853C: jal         0x800117E0
    // 0x80018540: nop

    func_800117E0(rdram, ctx);
        goto after_0;
    // 0x80018540: nop

    after_0:
    // 0x80018544: b           L_80018550
    // 0x80018548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80018550;
    // 0x80018548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001854C:
    // 0x8001854C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80018550:
    // 0x80018550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80018554: jr          $ra
    // 0x80018558: nop

    return;
    // 0x80018558: nop

;}
RECOMP_FUNC void func_8001855C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001855C: lhu         $v0, 0x4C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4C);
    // 0x80018560: nop

    // 0x80018564: beq         $v0, $zero, L_800185FC
    if (ctx->r2 == 0) {
        // 0x80018568: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_800185FC;
    }
    // 0x80018568: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x8001856C: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x80018570: beq         $at, $zero, L_800185FC
    if (ctx->r1 == 0) {
        // 0x80018574: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_800185FC;
    }
    // 0x80018574: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80018578: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8001857C: addu        $at, $at, $t6
    gpr jr_addend_80018588 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80018580: lw          $t6, 0x50F8($at)
    ctx->r14 = ADD32(ctx->r1, 0X50F8);
    // 0x80018584: nop

    // 0x80018588: jr          $t6
    // 0x8001858C: nop

    switch (jr_addend_80018588 >> 2) {
        case 0: goto L_80018590; break;
        case 1: goto L_800185D8; break;
        case 2: goto L_800185FC; break;
        case 3: goto L_80018590; break;
        case 4: goto L_80018590; break;
        case 5: goto L_80018590; break;
        default: switch_error(__func__, 0x80018588, 0x800950F8);
    }
    // 0x8001858C: nop

L_80018590:
    // 0x80018590: addiu       $v1, $a0, 0x58
    ctx->r3 = ADD32(ctx->r4, 0X58);
    // 0x80018594: addiu       $v0, $a0, 0x4C
    ctx->r2 = ADD32(ctx->r4, 0X4C);
    // 0x80018598: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x8001859C: lw          $t7, 0x14($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X14);
    // 0x800185A0: addiu       $a2, $zero, -0x100
    ctx->r6 = ADD32(0, -0X100);
    // 0x800185A4: and         $t6, $t9, $a2
    ctx->r14 = ctx->r25 & ctx->r6;
    // 0x800185A8: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x800185AC: or          $a1, $t8, $t6
    ctx->r5 = ctx->r24 | ctx->r14;
    // 0x800185B0: sw          $a1, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r5;
    // 0x800185B4: sw          $a1, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r5;
    // 0x800185B8: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x800185BC: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x800185C0: andi        $t6, $t8, 0xFF
    ctx->r14 = ctx->r24 & 0XFF;
    // 0x800185C4: and         $t9, $t7, $a2
    ctx->r25 = ctx->r15 & ctx->r6;
    // 0x800185C8: or          $a1, $t9, $t6
    ctx->r5 = ctx->r25 | ctx->r14;
    // 0x800185CC: sw          $a1, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r5;
    // 0x800185D0: jr          $ra
    // 0x800185D4: sw          $a1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r5;
    return;
    // 0x800185D4: sw          $a1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r5;
L_800185D8:
    // 0x800185D8: addiu       $v1, $a0, 0x58
    ctx->r3 = ADD32(ctx->r4, 0X58);
    // 0x800185DC: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x800185E0: lw          $t9, 0x50($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X50);
    // 0x800185E4: addiu       $a2, $zero, -0x100
    ctx->r6 = ADD32(0, -0X100);
    // 0x800185E8: and         $t8, $t7, $a2
    ctx->r24 = ctx->r15 & ctx->r6;
    // 0x800185EC: andi        $t6, $t9, 0xFF
    ctx->r14 = ctx->r25 & 0XFF;
    // 0x800185F0: or          $a1, $t8, $t6
    ctx->r5 = ctx->r24 | ctx->r14;
    // 0x800185F4: sw          $a1, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r5;
    // 0x800185F8: sw          $a1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r5;
L_800185FC:
    // 0x800185FC: jr          $ra
    // 0x80018600: nop

    return;
    // 0x80018600: nop

;}
RECOMP_FUNC void func_80018604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018604: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80018608: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001860C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80018610: jal         0x8001855C
    // 0x80018614: sb          $a1, 0x53($a0)
    MEM_B(0X53, ctx->r4) = ctx->r5;
    func_8001855C(rdram, ctx);
        goto after_0;
    // 0x80018614: sb          $a1, 0x53($a0)
    MEM_B(0X53, ctx->r4) = ctx->r5;
    after_0:
    // 0x80018618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001861C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80018620: jr          $ra
    // 0x80018624: nop

    return;
    // 0x80018624: nop

;}
RECOMP_FUNC void func_80018628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018628: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001862C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018630: lbu         $t6, 0x53($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X53);
    // 0x80018634: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x80018638: and         $t7, $a1, $at
    ctx->r15 = ctx->r5 & ctx->r1;
    // 0x8001863C: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80018640: jal         0x8001855C
    // 0x80018644: sw          $t8, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r24;
    func_8001855C(rdram, ctx);
        goto after_0;
    // 0x80018644: sw          $t8, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r24;
    after_0:
    // 0x80018648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001864C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80018650: jr          $ra
    // 0x80018654: nop

    return;
    // 0x80018654: nop

;}
RECOMP_FUNC void func_80018658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018658: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001865C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018660: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80018664: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80018668: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
    // 0x8001866C: beq         $a1, $zero, L_800186E4
    if (ctx->r5 == 0) {
        // 0x80018670: sh          $a1, 0x4C($a0)
        MEM_H(0X4C, ctx->r4) = ctx->r5;
            goto L_800186E4;
    }
    // 0x80018670: sh          $a1, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = ctx->r5;
    // 0x80018674: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80018678: beq         $a1, $at, L_800186E4
    if (ctx->r5 == ctx->r1) {
        // 0x8001867C: addiu       $a0, $a0, 0x58
        ctx->r4 = ADD32(ctx->r4, 0X58);
            goto L_800186E4;
    }
    // 0x8001867C: addiu       $a0, $a0, 0x58
    ctx->r4 = ADD32(ctx->r4, 0X58);
    // 0x80018680: sll         $v0, $a1, 5
    ctx->r2 = S32(ctx->r5 << 5);
    // 0x80018684: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80018688: addiu       $t7, $t7, -0xFA8
    ctx->r15 = ADD32(ctx->r15, -0XFA8);
    // 0x8001868C: addiu       $t6, $v0, -0x20
    ctx->r14 = ADD32(ctx->r2, -0X20);
    // 0x80018690: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x80018694: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80018698: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8001869C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x800186A0: jal         0x8000E4A8
    // 0x800186A4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_8000E4A8(rdram, ctx);
        goto after_0;
    // 0x800186A4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_0:
    // 0x800186A8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800186AC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800186B0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x800186B4: addiu       $t9, $t9, -0xEE8
    ctx->r25 = ADD32(ctx->r25, -0XEE8);
    // 0x800186B8: addiu       $t8, $v0, -0x20
    ctx->r24 = ADD32(ctx->r2, -0X20);
    // 0x800186BC: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x800186C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x800186C4: jal         0x8000E4A8
    // 0x800186C8: addiu       $a0, $t0, 0x78
    ctx->r4 = ADD32(ctx->r8, 0X78);
    func_8000E4A8(rdram, ctx);
        goto after_1;
    // 0x800186C8: addiu       $a0, $t0, 0x78
    ctx->r4 = ADD32(ctx->r8, 0X78);
    after_1:
    // 0x800186CC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800186D0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800186D4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800186D8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x800186DC: jal         0x8001855C
    // 0x800186E0: sw          $t6, 0x50($t0)
    MEM_W(0X50, ctx->r8) = ctx->r14;
    func_8001855C(rdram, ctx);
        goto after_2;
    // 0x800186E0: sw          $t6, 0x50($t0)
    MEM_W(0X50, ctx->r8) = ctx->r14;
    after_2:
L_800186E4:
    // 0x800186E4: lhu         $t7, 0x34($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X34);
    // 0x800186E8: nop

    // 0x800186EC: bne         $t7, $zero, L_80018730
    if (ctx->r15 != 0) {
        // 0x800186F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80018730;
    }
    // 0x800186F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800186F4: bne         $t1, $zero, L_80018710
    if (ctx->r9 != 0) {
        // 0x800186F8: addiu       $a1, $t0, 0x58
        ctx->r5 = ADD32(ctx->r8, 0X58);
            goto L_80018710;
    }
    // 0x800186F8: addiu       $a1, $t0, 0x58
    ctx->r5 = ADD32(ctx->r8, 0X58);
    // 0x800186FC: lw          $a0, 0x98($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X98);
    // 0x80018700: jal         0x80012294
    // 0x80018704: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80012294(rdram, ctx);
        goto after_3;
    // 0x80018704: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80018708: b           L_80018730
    // 0x8001870C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80018730;
    // 0x8001870C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80018710:
    // 0x80018710: sll         $t8, $t1, 1
    ctx->r24 = S32(ctx->r9 << 1);
    // 0x80018714: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80018718: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x8001871C: lhu         $a2, -0xFBE($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0XFBE);
    // 0x80018720: lw          $a0, 0x98($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X98);
    // 0x80018724: jal         0x80012304
    // 0x80018728: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80012304(rdram, ctx);
        goto after_4;
    // 0x80018728: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_4:
    // 0x8001872C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80018730:
    // 0x80018730: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80018734: jr          $ra
    // 0x80018738: nop

    return;
    // 0x80018738: nop

;}
RECOMP_FUNC void func_8001873C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001873C: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x80018740: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80018744: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80018748: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001874C: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x80018750: nop

    // 0x80018754: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x80018758: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x8001875C: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x80018760: lw          $t6, 0x6280($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6280);
    // 0x80018764: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80018768: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8001876C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80018770: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80018774: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80018778: addiu       $v0, $v0, 0x9C
    ctx->r2 = ADD32(ctx->r2, 0X9C);
    // 0x8001877C: swc1        $f16, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f16.u32l;
    // 0x80018780: swc1        $f12, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f12.u32l;
    // 0x80018784: swc1        $f14, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f14.u32l;
    // 0x80018788: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8001878C: jr          $ra
    // 0x80018790: swc1        $f10, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f10.u32l;
    return;
    // 0x80018790: swc1        $f10, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_80018794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018794: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80018798: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x8001879C: lw          $t6, 0x6280($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6280);
    // 0x800187A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800187A4: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x800187A8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800187AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800187B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800187B4: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x800187B8: addiu       $a0, $a0, 0xA8
    ctx->r4 = ADD32(ctx->r4, 0XA8);
    // 0x800187BC: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x800187C0: jal         0x8000E4A8
    // 0x800187C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8000E4A8(rdram, ctx);
        goto after_0;
    // 0x800187C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x800187C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800187CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800187D0: jr          $ra
    // 0x800187D4: nop

    return;
    // 0x800187D4: nop

;}
RECOMP_FUNC void func_800187D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800187D8: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x800187DC: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x800187E0: lw          $t6, 0x6280($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6280);
    // 0x800187E4: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x800187E8: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800187EC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800187F0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800187F4: swc1        $f4, 0xB8($v0)
    MEM_W(0XB8, ctx->r2) = ctx->f4.u32l;
    // 0x800187F8: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800187FC: addiu       $v0, $v0, 0xB8
    ctx->r2 = ADD32(ctx->r2, 0XB8);
    // 0x80018800: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x80018804: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80018808: jr          $ra
    // 0x8001880C: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    return;
    // 0x8001880C: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80018810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018810: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80018814: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x80018818: lw          $t6, 0x6280($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6280);
    // 0x8001881C: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80018820: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80018824: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80018828: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8001882C: swc1        $f4, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->f4.u32l;
    // 0x80018830: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80018834: addiu       $v0, $v0, 0xAC
    ctx->r2 = ADD32(ctx->r2, 0XAC);
    // 0x80018838: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x8001883C: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80018840: jr          $ra
    // 0x80018844: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    return;
    // 0x80018844: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80018848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018848: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x8001884C: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x80018850: lw          $t6, 0x6280($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6280);
    // 0x80018854: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80018858: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8001885C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80018860: beq         $a1, $zero, L_8001887C
    if (ctx->r5 == 0) {
        // 0x80018864: addiu       $v0, $v0, 0x9C
        ctx->r2 = ADD32(ctx->r2, 0X9C);
            goto L_8001887C;
    }
    // 0x80018864: addiu       $v0, $v0, 0x9C
    ctx->r2 = ADD32(ctx->r2, 0X9C);
    // 0x80018868: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x8001886C: nop

    // 0x80018870: ori         $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 | 0X8000;
    // 0x80018874: jr          $ra
    // 0x80018878: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    return;
    // 0x80018878: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
L_8001887C:
    // 0x8001887C: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x80018880: nop

    // 0x80018884: andi        $t1, $t0, 0x7FFF
    ctx->r9 = ctx->r8 & 0X7FFF;
    // 0x80018888: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
    // 0x8001888C: jr          $ra
    // 0x80018890: nop

    return;
    // 0x80018890: nop

;}
RECOMP_FUNC void func_80018894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018894: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80018898: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x8001889C: lw          $t6, 0x6280($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6280);
    // 0x800188A0: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x800188A4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800188A8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800188AC: jr          $ra
    // 0x800188B0: sh          $a1, 0x9C($t8)
    MEM_H(0X9C, ctx->r24) = ctx->r5;
    return;
    // 0x800188B0: sh          $a1, 0x9C($t8)
    MEM_H(0X9C, ctx->r24) = ctx->r5;
;}
RECOMP_FUNC void func_800188B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800188B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800188B8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x800188BC: lw          $v0, 0x6280($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6280);
    // 0x800188C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800188C4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800188C8: lw          $t6, 0x224($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X224);
    // 0x800188CC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800188D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800188D4: addiu       $a0, $v0, 0x224
    ctx->r4 = ADD32(ctx->r2, 0X224);
    // 0x800188D8: jal         0x8000E4A8
    // 0x800188DC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_8000E4A8(rdram, ctx);
        goto after_0;
    // 0x800188DC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x800188E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800188E4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800188E8: jr          $ra
    // 0x800188EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800188EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800188F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800188F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800188F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800188F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800188FC: lhu         $t7, 0x34($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X34);
    // 0x80018900: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80018904: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80018908: bne         $t7, $at, L_8001891C
    if (ctx->r15 != ctx->r1) {
        // 0x8001890C: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_8001891C;
    }
    // 0x8001890C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80018910: lw          $a0, 0x98($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X98);
    // 0x80018914: jal         0x80012398
    // 0x80018918: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80012398(rdram, ctx);
        goto after_0;
    // 0x80018918: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
L_8001891C:
    // 0x8001891C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80018920: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80018924: jr          $ra
    // 0x80018928: nop

    return;
    // 0x80018928: nop

;}
RECOMP_FUNC void func_8001892C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001892C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80018930: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80018934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018938: addu        $s1, $a2, $t6
    ctx->r17 = ADD32(ctx->r6, ctx->r14);
    // 0x8001893C: lw          $s0, 0x3C($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X3C);
    // 0x80018940: nop

    // 0x80018944: beq         $s0, $zero, L_800189CC
    if (ctx->r16 == 0) {
        // 0x80018948: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800189CC;
    }
    // 0x80018948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001894C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x80018950: sh          $zero, 0x24($s0)
    MEM_H(0X24, ctx->r16) = 0;
    // 0x80018954: lhu         $t7, 0x38($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X38);
    // 0x80018958: nop

    // 0x8001895C: ori         $t8, $t7, 0x1000
    ctx->r24 = ctx->r15 | 0X1000;
    // 0x80018960: sh          $t8, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r24;
    // 0x80018964: lhu         $t9, 0x34($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X34);
    // 0x80018968: nop

    // 0x8001896C: bne         $t9, $zero, L_80018984
    if (ctx->r25 != 0) {
        // 0x80018970: nop
    
            goto L_80018984;
    }
    // 0x80018970: nop

    // 0x80018974: lw          $a0, 0x98($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X98);
    // 0x80018978: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x8001897C: jal         0x80012524
    // 0x80018980: nop

    func_80012524(rdram, ctx);
        goto after_0;
    // 0x80018980: nop

    after_0:
L_80018984:
    // 0x80018984: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x80018988: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8001898C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80018990: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x80018994: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x80018998: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8001899C: addiu       $v0, $v0, -0x5C48
    ctx->r2 = ADD32(ctx->r2, -0X5C48);
    // 0x800189A0: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x800189A4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800189A8: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x800189AC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800189B0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800189B4: lw          $t8, -0x5C4C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5C4C);
    // 0x800189B8: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x800189BC: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x800189C0: sw          $s0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r16;
    // 0x800189C4: sw          $zero, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = 0;
    // 0x800189C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800189CC:
    // 0x800189CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800189D0: jr          $ra
    // 0x800189D4: nop

    return;
    // 0x800189D4: nop

    // 0x800189D8: jr          $ra
    // 0x800189DC: nop

    return;
    // 0x800189DC: nop

    // 0x800189E0: jr          $ra
    // 0x800189E4: nop

    return;
    // 0x800189E4: nop

    // 0x800189E8: jr          $ra
    // 0x800189EC: nop

    return;
    // 0x800189EC: nop

;}
RECOMP_FUNC void func_800189F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800189F0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800189F4: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x800189F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800189FC: lhu         $t9, 0x36($s5)
    ctx->r25 = MEM_HU(ctx->r21, 0X36);
    // 0x80018A00: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80018A04: sll         $t8, $t7, 10
    ctx->r24 = S32(ctx->r15 << 10);
    // 0x80018A08: bgez        $s0, L_80018A18
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80018A0C: or          $s1, $t8, $t9
        ctx->r17 = ctx->r24 | ctx->r25;
            goto L_80018A18;
    }
    // 0x80018A0C: or          $s1, $t8, $t9
    ctx->r17 = ctx->r24 | ctx->r25;
    // 0x80018A10: lw          $s0, 0x2C($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X2C);
    // 0x80018A14: nop

L_80018A18:
    // 0x80018A18: lhu         $t6, 0x34($s5)
    ctx->r14 = MEM_HU(ctx->r21, 0X34);
    // 0x80018A1C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80018A20: bne         $t6, $zero, L_80018A44
    if (ctx->r14 != 0) {
        // 0x80018A24: sll         $t8, $s0, 2
        ctx->r24 = S32(ctx->r16 << 2);
            goto L_80018A44;
    }
    // 0x80018A24: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x80018A28: lw          $t7, -0x5C70($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5C70);
    // 0x80018A2C: lw          $a0, 0x98($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X98);
    // 0x80018A30: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80018A34: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    // 0x80018A38: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80018A3C: jal         0x80011C14
    // 0x80018A40: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80011C14(rdram, ctx);
        goto after_0;
    // 0x80018A40: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
L_80018A44:
    // 0x80018A44: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80018A48: lw          $t6, -0x5C70($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5C70);
    // 0x80018A4C: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x80018A50: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80018A54: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x80018A58: nop

    // 0x80018A5C: lhu         $t9, 0x34($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X34);
    // 0x80018A60: nop

    // 0x80018A64: beq         $t9, $zero, L_80018CC8
    if (ctx->r25 == 0) {
        // 0x80018A68: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80018CC8;
    }
    // 0x80018A68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80018A6C: lhu         $t1, 0x34($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X34);
    // 0x80018A70: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80018A74: blez        $t1, L_80018CC4
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80018A78: or          $fp, $v0, $zero
        ctx->r30 = ctx->r2 | 0;
            goto L_80018CC4;
    }
    // 0x80018A78: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x80018A7C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80018A80: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80018A84: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x80018A88: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80018A8C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80018A90: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80018A94: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80018A98: addiu       $s0, $s0, -0x5C48
    ctx->r16 = ADD32(ctx->r16, -0X5C48);
    // 0x80018A9C: addiu       $s7, $s7, -0x5C50
    ctx->r23 = ADD32(ctx->r23, -0X5C50);
    // 0x80018AA0: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
L_80018AA4:
    // 0x80018AA4: lw          $t7, 0x30($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X30);
    // 0x80018AA8: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80018AAC: addu        $t8, $t7, $s6
    ctx->r24 = ADD32(ctx->r15, ctx->r22);
    // 0x80018AB0: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x80018AB4: lw          $t6, 0x7D30($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7D30);
    // 0x80018AB8: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x80018ABC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80018AC0: lw          $t6, 0x2C($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X2C);
    // 0x80018AC4: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80018AC8: lw          $t9, -0x5C70($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5C70);
    // 0x80018ACC: lw          $s3, 0x0($t8)
    ctx->r19 = MEM_W(ctx->r24, 0X0);
    // 0x80018AD0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80018AD4: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x80018AD8: lw          $a3, 0x0($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X0);
    // 0x80018ADC: lhu         $t0, 0xE($s3)
    ctx->r8 = MEM_HU(ctx->r19, 0XE);
    // 0x80018AE0: lhu         $a2, 0x1C($a3)
    ctx->r6 = MEM_HU(ctx->r7, 0X1C);
    // 0x80018AE4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80018AE8: blez        $a2, L_80018B38
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80018AEC: addiu       $a3, $a3, 0x18
        ctx->r7 = ADD32(ctx->r7, 0X18);
            goto L_80018B38;
    }
    // 0x80018AEC: addiu       $a3, $a3, 0x18
    ctx->r7 = ADD32(ctx->r7, 0X18);
    // 0x80018AF0: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80018AF4: lw          $a0, 0x7D18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7D18);
    // 0x80018AF8: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80018AFC: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
L_80018B00:
    // 0x80018B00: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x80018B04: nop

    // 0x80018B08: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80018B0C: addu        $t7, $a0, $t9
    ctx->r15 = ADD32(ctx->r4, ctx->r25);
    // 0x80018B10: lw          $s2, 0x0($t7)
    ctx->r18 = MEM_W(ctx->r15, 0X0);
    // 0x80018B14: nop

    // 0x80018B18: lhu         $t8, 0x14($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X14);
    // 0x80018B1C: nop

    // 0x80018B20: beq         $a1, $t8, L_80018B3C
    if (ctx->r5 == ctx->r24) {
        // 0x80018B24: slt         $at, $v1, $a2
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_80018B3C;
    }
    // 0x80018B24: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80018B28: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80018B2C: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80018B30: bne         $at, $zero, L_80018B00
    if (ctx->r1 != 0) {
        // 0x80018B34: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_80018B00;
    }
    // 0x80018B34: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_80018B38:
    // 0x80018B38: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
L_80018B3C:
    // 0x80018B3C: beq         $at, $zero, L_80018B4C
    if (ctx->r1 == 0) {
        // 0x80018B40: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80018B4C;
    }
    // 0x80018B40: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80018B44: b           L_80018B4C
    // 0x80018B48: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
        goto L_80018B4C;
    // 0x80018B48: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
L_80018B4C:
    // 0x80018B4C: bne         $v1, $zero, L_80018B5C
    if (ctx->r3 != 0) {
        // 0x80018B50: or          $s4, $v1, $zero
        ctx->r20 = ctx->r3 | 0;
            goto L_80018B5C;
    }
    // 0x80018B50: or          $s4, $v1, $zero
    ctx->r20 = ctx->r3 | 0;
    // 0x80018B54: b           L_80018CB0
    // 0x80018B58: sll         $v0, $t1, 1
    ctx->r2 = S32(ctx->r9 << 1);
        goto L_80018CB0;
    // 0x80018B58: sll         $v0, $t1, 1
    ctx->r2 = S32(ctx->r9 << 1);
L_80018B5C:
    // 0x80018B5C: lbu         $a0, 0xC($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0XC);
    // 0x80018B60: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x80018B64: jal         0x8001892C
    // 0x80018B68: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_8001892C(rdram, ctx);
        goto after_1;
    // 0x80018B68: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_1:
    // 0x80018B6C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80018B70: addiu       $s0, $s0, -0x5C48
    ctx->r16 = ADD32(ctx->r16, -0X5C48);
    // 0x80018B74: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80018B78: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x80018B7C: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x80018B80: bne         $v1, $at, L_80018B98
    if (ctx->r3 != ctx->r1) {
        // 0x80018B84: lui         $a0, 0x8009
        ctx->r4 = S32(0X8009 << 16);
            goto L_80018B98;
    }
    // 0x80018B84: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80018B88: jal         0x80000FBC
    // 0x80018B8C: addiu       $a0, $a0, 0x50A8
    ctx->r4 = ADD32(ctx->r4, 0X50A8);
    func_80000FBC(rdram, ctx);
        goto after_2;
    // 0x80018B8C: addiu       $a0, $a0, 0x50A8
    ctx->r4 = ADD32(ctx->r4, 0X50A8);
    after_2:
    // 0x80018B90: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80018B94: nop

L_80018B98:
    // 0x80018B98: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80018B9C: lw          $t6, -0x5C4C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5C4C);
    // 0x80018BA0: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x80018BA4: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x80018BA8: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x80018BAC: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x80018BB0: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80018BB4: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80018BB8: lw          $t9, 0x0($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X0);
    // 0x80018BBC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80018BC0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80018BC4: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    // 0x80018BC8: nop

    // 0x80018BCC: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80018BD0: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x80018BD4: nop

    // 0x80018BD8: sw          $v0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r2;
    // 0x80018BDC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80018BE0: nop

    // 0x80018BE4: sw          $v0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r2;
    // 0x80018BE8: lbu         $t9, 0xC($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0XC);
    // 0x80018BEC: nop

    // 0x80018BF0: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x80018BF4: addu        $t8, $s5, $t7
    ctx->r24 = ADD32(ctx->r21, ctx->r15);
    // 0x80018BF8: sw          $v0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->r2;
    // 0x80018BFC: sw          $s3, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r19;
    // 0x80018C00: lw          $t6, 0x18($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X18);
    // 0x80018C04: sw          $s1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r17;
    // 0x80018C08: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x80018C0C: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x80018C10: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x80018C14: lbu         $t9, 0x16($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X16);
    // 0x80018C18: ori         $t8, $zero, 0xC000
    ctx->r24 = 0 | 0XC000;
    // 0x80018C1C: sb          $t9, 0x1C($v0)
    MEM_B(0X1C, ctx->r2) = ctx->r25;
    // 0x80018C20: lbu         $t7, 0x17($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X17);
    // 0x80018C24: sw          $s5, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r21;
    // 0x80018C28: sh          $t8, 0x24($v0)
    MEM_H(0X24, ctx->r2) = ctx->r24;
    // 0x80018C2C: sb          $t7, 0x1D($v0)
    MEM_B(0X1D, ctx->r2) = ctx->r15;
    // 0x80018C30: lhu         $t6, 0xA($s3)
    ctx->r14 = MEM_HU(ctx->r19, 0XA);
    // 0x80018C34: nop

    // 0x80018C38: andi        $t9, $t6, 0x1
    ctx->r25 = ctx->r14 & 0X1;
    // 0x80018C3C: beq         $t9, $zero, L_80018C4C
    if (ctx->r25 == 0) {
        // 0x80018C40: nop
    
            goto L_80018C4C;
    }
    // 0x80018C40: nop

    // 0x80018C44: b           L_80018C4C
    // 0x80018C48: addiu       $v1, $zero, 0x2000
    ctx->r3 = ADD32(0, 0X2000);
        goto L_80018C4C;
    // 0x80018C48: addiu       $v1, $zero, 0x2000
    ctx->r3 = ADD32(0, 0X2000);
L_80018C4C:
    // 0x80018C4C: lhu         $t7, 0x24($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X24);
    // 0x80018C50: swc1        $f20, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f20.u32l;
    // 0x80018C54: or          $t8, $t7, $v1
    ctx->r24 = ctx->r15 | ctx->r3;
    // 0x80018C58: sh          $t8, 0x24($v0)
    MEM_H(0X24, ctx->r2) = ctx->r24;
    // 0x80018C5C: swc1        $f22, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f22.u32l;
    // 0x80018C60: swc1        $f24, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f24.u32l;
    // 0x80018C64: sh          $zero, 0x26($v0)
    MEM_H(0X26, ctx->r2) = 0;
    // 0x80018C68: lhu         $t9, 0x8($s3)
    ctx->r25 = MEM_HU(ctx->r19, 0X8);
    // 0x80018C6C: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x80018C70: sll         $t7, $t9, 1
    ctx->r15 = S32(ctx->r25 << 1);
    // 0x80018C74: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80018C78: lh          $t9, -0x2($t8)
    ctx->r25 = MEM_H(ctx->r24, -0X2);
    // 0x80018C7C: nop

    // 0x80018C80: sh          $t9, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r25;
    // 0x80018C84: lhu         $t6, 0x34($s5)
    ctx->r14 = MEM_HU(ctx->r21, 0X34);
    // 0x80018C88: nop

    // 0x80018C8C: bne         $t6, $zero, L_80018CA4
    if (ctx->r14 != 0) {
        // 0x80018C90: nop
    
            goto L_80018CA4;
    }
    // 0x80018C90: nop

    // 0x80018C94: lw          $a0, 0x98($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X98);
    // 0x80018C98: lbu         $a1, 0xC($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0XC);
    // 0x80018C9C: jal         0x80012600
    // 0x80018CA0: addiu       $a2, $v0, 0x10
    ctx->r6 = ADD32(ctx->r2, 0X10);
    func_80012600(rdram, ctx);
        goto after_3;
    // 0x80018CA0: addiu       $a2, $v0, 0x10
    ctx->r6 = ADD32(ctx->r2, 0X10);
    after_3:
L_80018CA4:
    // 0x80018CA4: lhu         $t1, 0x34($fp)
    ctx->r9 = MEM_HU(ctx->r30, 0X34);
    // 0x80018CA8: nop

    // 0x80018CAC: sll         $v0, $t1, 1
    ctx->r2 = S32(ctx->r9 << 1);
L_80018CB0:
    // 0x80018CB0: addiu       $s6, $s6, 0x2
    ctx->r22 = ADD32(ctx->r22, 0X2);
    // 0x80018CB4: slt         $at, $s6, $v0
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80018CB8: bne         $at, $zero, L_80018AA4
    if (ctx->r1 != 0) {
        // 0x80018CBC: nop
    
            goto L_80018AA4;
    }
    // 0x80018CBC: nop

    // 0x80018CC0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
L_80018CC4:
    // 0x80018CC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80018CC8:
    // 0x80018CC8: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x80018CCC: jr          $ra
    // 0x80018CD0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80018CD0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80018CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018CD4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80018CD8: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80018CDC: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80018CE0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80018CE4: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x80018CE8: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80018CEC: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80018CF0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80018CF4: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80018CF8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80018CFC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80018D00: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80018D04: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80018D08: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80018D0C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80018D10: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80018D14: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80018D18: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x80018D1C: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x80018D20: jal         0x800189F0
    // 0x80018D24: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    func_800189F0(rdram, ctx);
        goto after_0;
    // 0x80018D24: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    after_0:
    // 0x80018D28: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80018D2C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80018D30: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80018D34: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80018D38: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80018D3C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80018D40: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80018D44: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80018D48: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80018D4C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80018D50: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80018D54: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80018D58: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80018D5C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80018D60: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80018D64: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80018D68: jr          $ra
    // 0x80018D6C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80018D6C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80018D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018D70: jr          $ra
    // 0x80018D74: nop

    return;
    // 0x80018D74: nop

;}
RECOMP_FUNC void func_80018D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018D78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80018D7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018D80: lhu         $t6, 0x3A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X3A);
    // 0x80018D84: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80018D88: sllv        $t8, $t7, $a1
    ctx->r24 = S32(ctx->r15 << (ctx->r5 & 31));
    // 0x80018D8C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80018D90: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x80018D94: bne         $t9, $zero, L_80018DC4
    if (ctx->r25 != 0) {
        // 0x80018D98: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_80018DC4;
    }
    // 0x80018D98: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80018D9C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80018DA0: addiu       $a0, $a0, 0x5078
    ctx->r4 = ADD32(ctx->r4, 0X5078);
    // 0x80018DA4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80018DA8: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x80018DAC: jal         0x80000FBC
    // 0x80018DB0: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x80018DB0: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x80018DB4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80018DB8: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80018DBC: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80018DC0: nop

L_80018DC4:
    // 0x80018DC4: lhu         $t2, 0x36($a3)
    ctx->r10 = MEM_HU(ctx->r7, 0X36);
    // 0x80018DC8: addiu       $t0, $a1, 0x1
    ctx->r8 = ADD32(ctx->r5, 0X1);
    // 0x80018DCC: lhu         $t3, 0x34($a3)
    ctx->r11 = MEM_HU(ctx->r7, 0X34);
    // 0x80018DD0: sll         $t1, $t0, 10
    ctx->r9 = S32(ctx->r8 << 10);
    // 0x80018DD4: or          $v0, $t1, $t2
    ctx->r2 = ctx->r9 | ctx->r10;
    // 0x80018DD8: bne         $t3, $zero, L_80018E08
    if (ctx->r11 != 0) {
        // 0x80018DDC: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80018E08;
    }
    // 0x80018DDC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80018DE0: lw          $a0, 0x98($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X98);
    // 0x80018DE4: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80018DE8: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x80018DEC: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x80018DF0: jal         0x80012668
    // 0x80018DF4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80012668(rdram, ctx);
        goto after_1;
    // 0x80018DF4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x80018DF8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80018DFC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80018E00: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80018E04: nop

L_80018E08:
    // 0x80018E08: lw          $v1, 0x3C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X3C);
    // 0x80018E0C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80018E10: beq         $v1, $zero, L_80018E40
    if (ctx->r3 == 0) {
        // 0x80018E14: nop
    
            goto L_80018E40;
    }
    // 0x80018E14: nop

    // 0x80018E18: lhu         $t4, 0x24($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X24);
    // 0x80018E1C: nop

    // 0x80018E20: andi        $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 & 0X8000;
    // 0x80018E24: beq         $t5, $zero, L_80018E40
    if (ctx->r13 == 0) {
        // 0x80018E28: nop
    
            goto L_80018E40;
    }
    // 0x80018E28: nop

    // 0x80018E2C: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x80018E30: nop

    // 0x80018E34: bne         $a1, $t7, L_80018E40
    if (ctx->r5 != ctx->r15) {
        // 0x80018E38: nop
    
            goto L_80018E40;
    }
    // 0x80018E38: nop

    // 0x80018E3C: swc1        $f12, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f12.u32l;
L_80018E40:
    // 0x80018E40: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80018E44: nop

    // 0x80018E48: beq         $v0, $zero, L_80018E78
    if (ctx->r2 == 0) {
        // 0x80018E4C: nop
    
            goto L_80018E78;
    }
    // 0x80018E4C: nop

    // 0x80018E50: lhu         $t6, 0x24($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X24);
    // 0x80018E54: nop

    // 0x80018E58: andi        $t8, $t6, 0x8000
    ctx->r24 = ctx->r14 & 0X8000;
    // 0x80018E5C: beq         $t8, $zero, L_80018E78
    if (ctx->r24 == 0) {
        // 0x80018E60: nop
    
            goto L_80018E78;
    }
    // 0x80018E60: nop

    // 0x80018E64: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x80018E68: nop

    // 0x80018E6C: bne         $a1, $t9, L_80018E78
    if (ctx->r5 != ctx->r25) {
        // 0x80018E70: nop
    
            goto L_80018E78;
    }
    // 0x80018E70: nop

    // 0x80018E74: swc1        $f12, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f12.u32l;
L_80018E78:
    // 0x80018E78: lw          $v0, 0x44($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X44);
    // 0x80018E7C: nop

    // 0x80018E80: beq         $v0, $zero, L_80018EB0
    if (ctx->r2 == 0) {
        // 0x80018E84: nop
    
            goto L_80018EB0;
    }
    // 0x80018E84: nop

    // 0x80018E88: lhu         $t0, 0x24($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X24);
    // 0x80018E8C: nop

    // 0x80018E90: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x80018E94: beq         $t1, $zero, L_80018EB0
    if (ctx->r9 == 0) {
        // 0x80018E98: nop
    
            goto L_80018EB0;
    }
    // 0x80018E98: nop

    // 0x80018E9C: lw          $t2, 0x10($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X10);
    // 0x80018EA0: nop

    // 0x80018EA4: bne         $a1, $t2, L_80018EB0
    if (ctx->r5 != ctx->r10) {
        // 0x80018EA8: nop
    
            goto L_80018EB0;
    }
    // 0x80018EA8: nop

    // 0x80018EAC: swc1        $f12, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f12.u32l;
L_80018EB0:
    // 0x80018EB0: lw          $v0, 0x48($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X48);
    // 0x80018EB4: nop

    // 0x80018EB8: beq         $v0, $zero, L_80018EEC
    if (ctx->r2 == 0) {
        // 0x80018EBC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80018EEC;
    }
    // 0x80018EBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80018EC0: lhu         $t3, 0x24($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X24);
    // 0x80018EC4: nop

    // 0x80018EC8: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x80018ECC: beq         $t4, $zero, L_80018EEC
    if (ctx->r12 == 0) {
        // 0x80018ED0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80018EEC;
    }
    // 0x80018ED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80018ED4: lw          $t5, 0x10($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X10);
    // 0x80018ED8: nop

    // 0x80018EDC: bne         $a1, $t5, L_80018EEC
    if (ctx->r5 != ctx->r13) {
        // 0x80018EE0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80018EEC;
    }
    // 0x80018EE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80018EE4: swc1        $f12, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f12.u32l;
    // 0x80018EE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80018EEC:
    // 0x80018EEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80018EF0: jr          $ra
    // 0x80018EF4: nop

    return;
    // 0x80018EF4: nop

;}
RECOMP_FUNC void func_80018EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018EF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80018EFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018F00: lhu         $t6, 0x3A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X3A);
    // 0x80018F04: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80018F08: sllv        $t8, $t7, $a1
    ctx->r24 = S32(ctx->r15 << (ctx->r5 & 31));
    // 0x80018F0C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80018F10: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x80018F14: bne         $t9, $zero, L_80018F44
    if (ctx->r25 != 0) {
        // 0x80018F18: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_80018F44;
    }
    // 0x80018F18: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80018F1C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80018F20: addiu       $a0, $a0, 0x5078
    ctx->r4 = ADD32(ctx->r4, 0X5078);
    // 0x80018F24: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80018F28: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x80018F2C: jal         0x80000FBC
    // 0x80018F30: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x80018F30: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x80018F34: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80018F38: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80018F3C: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80018F40: nop

L_80018F44:
    // 0x80018F44: lhu         $t2, 0x36($a3)
    ctx->r10 = MEM_HU(ctx->r7, 0X36);
    // 0x80018F48: addiu       $t0, $a1, 0x1
    ctx->r8 = ADD32(ctx->r5, 0X1);
    // 0x80018F4C: lhu         $t3, 0x34($a3)
    ctx->r11 = MEM_HU(ctx->r7, 0X34);
    // 0x80018F50: sll         $t1, $t0, 10
    ctx->r9 = S32(ctx->r8 << 10);
    // 0x80018F54: or          $v0, $t1, $t2
    ctx->r2 = ctx->r9 | ctx->r10;
    // 0x80018F58: bne         $t3, $zero, L_80018F88
    if (ctx->r11 != 0) {
        // 0x80018F5C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80018F88;
    }
    // 0x80018F5C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80018F60: lw          $a0, 0x98($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X98);
    // 0x80018F64: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80018F68: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x80018F6C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x80018F70: jal         0x800128AC
    // 0x80018F74: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800128AC(rdram, ctx);
        goto after_1;
    // 0x80018F74: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x80018F78: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80018F7C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80018F80: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80018F84: nop

L_80018F88:
    // 0x80018F88: lw          $v1, 0x3C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X3C);
    // 0x80018F8C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80018F90: beq         $v1, $zero, L_80018FC0
    if (ctx->r3 == 0) {
        // 0x80018F94: nop
    
            goto L_80018FC0;
    }
    // 0x80018F94: nop

    // 0x80018F98: lhu         $t4, 0x24($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X24);
    // 0x80018F9C: nop

    // 0x80018FA0: andi        $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 & 0X8000;
    // 0x80018FA4: beq         $t5, $zero, L_80018FC0
    if (ctx->r13 == 0) {
        // 0x80018FA8: nop
    
            goto L_80018FC0;
    }
    // 0x80018FA8: nop

    // 0x80018FAC: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x80018FB0: nop

    // 0x80018FB4: bne         $a1, $t7, L_80018FC0
    if (ctx->r5 != ctx->r15) {
        // 0x80018FB8: nop
    
            goto L_80018FC0;
    }
    // 0x80018FB8: nop

    // 0x80018FBC: swc1        $f12, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f12.u32l;
L_80018FC0:
    // 0x80018FC0: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80018FC4: nop

    // 0x80018FC8: beq         $v0, $zero, L_80018FF8
    if (ctx->r2 == 0) {
        // 0x80018FCC: nop
    
            goto L_80018FF8;
    }
    // 0x80018FCC: nop

    // 0x80018FD0: lhu         $t6, 0x24($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X24);
    // 0x80018FD4: nop

    // 0x80018FD8: andi        $t8, $t6, 0x8000
    ctx->r24 = ctx->r14 & 0X8000;
    // 0x80018FDC: beq         $t8, $zero, L_80018FF8
    if (ctx->r24 == 0) {
        // 0x80018FE0: nop
    
            goto L_80018FF8;
    }
    // 0x80018FE0: nop

    // 0x80018FE4: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x80018FE8: nop

    // 0x80018FEC: bne         $a1, $t9, L_80018FF8
    if (ctx->r5 != ctx->r25) {
        // 0x80018FF0: nop
    
            goto L_80018FF8;
    }
    // 0x80018FF0: nop

    // 0x80018FF4: swc1        $f12, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f12.u32l;
L_80018FF8:
    // 0x80018FF8: lw          $v0, 0x44($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X44);
    // 0x80018FFC: nop

    // 0x80019000: beq         $v0, $zero, L_80019030
    if (ctx->r2 == 0) {
        // 0x80019004: nop
    
            goto L_80019030;
    }
    // 0x80019004: nop

    // 0x80019008: lhu         $t0, 0x24($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X24);
    // 0x8001900C: nop

    // 0x80019010: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x80019014: beq         $t1, $zero, L_80019030
    if (ctx->r9 == 0) {
        // 0x80019018: nop
    
            goto L_80019030;
    }
    // 0x80019018: nop

    // 0x8001901C: lw          $t2, 0x10($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X10);
    // 0x80019020: nop

    // 0x80019024: bne         $a1, $t2, L_80019030
    if (ctx->r5 != ctx->r10) {
        // 0x80019028: nop
    
            goto L_80019030;
    }
    // 0x80019028: nop

    // 0x8001902C: swc1        $f12, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f12.u32l;
L_80019030:
    // 0x80019030: lw          $v0, 0x48($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X48);
    // 0x80019034: nop

    // 0x80019038: beq         $v0, $zero, L_8001906C
    if (ctx->r2 == 0) {
        // 0x8001903C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001906C;
    }
    // 0x8001903C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80019040: lhu         $t3, 0x24($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X24);
    // 0x80019044: nop

    // 0x80019048: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x8001904C: beq         $t4, $zero, L_8001906C
    if (ctx->r12 == 0) {
        // 0x80019050: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001906C;
    }
    // 0x80019050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80019054: lw          $t5, 0x10($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X10);
    // 0x80019058: nop

    // 0x8001905C: bne         $a1, $t5, L_8001906C
    if (ctx->r5 != ctx->r13) {
        // 0x80019060: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001906C;
    }
    // 0x80019060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80019064: swc1        $f12, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f12.u32l;
    // 0x80019068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001906C:
    // 0x8001906C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80019070: jr          $ra
    // 0x80019074: nop

    return;
    // 0x80019074: nop

;}
RECOMP_FUNC void func_80019078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019078: lhu         $t6, 0x34($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X34);
    // 0x8001907C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80019080: bne         $t6, $at, L_80019090
    if (ctx->r14 != ctx->r1) {
        // 0x80019084: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80019090;
    }
    // 0x80019084: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80019088: lw          $v1, 0xDC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XDC);
    // 0x8001908C: sw          $a1, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r5;
L_80019090:
    // 0x80019090: jr          $ra
    // 0x80019094: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80019094: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80019098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019098: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8001909C: lh          $v0, 0x32($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X32);
    // 0x800190A0: jr          $ra
    // 0x800190A4: sh          $a1, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r5;
    return;
    // 0x800190A4: sh          $a1, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_800190A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800190A8: lwc1        $f4, 0x20($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X20);
    // 0x800190AC: nop

    // 0x800190B0: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x800190B4: lwc1        $f6, 0x24($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X24);
    // 0x800190B8: nop

    // 0x800190BC: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x800190C0: lwc1        $f8, 0x28($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X28);
    // 0x800190C4: jr          $ra
    // 0x800190C8: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    return;
    // 0x800190C8: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_800190CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800190CC: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x800190D0: nop

    // 0x800190D4: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x800190D8: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x800190DC: nop

    // 0x800190E0: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x800190E4: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x800190E8: jr          $ra
    // 0x800190EC: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    return;
    // 0x800190EC: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_800190F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800190F0: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800190F4: nop

    // 0x800190F8: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x800190FC: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80019100: nop

    // 0x80019104: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x80019108: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8001910C: jr          $ra
    // 0x80019110: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    return;
    // 0x80019110: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80019114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019114: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80019118: lhu         $t6, 0x38($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X38);
    // 0x8001911C: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
    // 0x80019120: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80019124: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x80019128: swc1        $f6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f6.u32l;
    // 0x8001912C: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80019130: sh          $t7, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r15;
    // 0x80019134: jr          $ra
    // 0x80019138: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x80019138: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8001913C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001913C: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80019140: lhu         $t6, 0x38($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X38);
    // 0x80019144: swc1        $f4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f4.u32l;
    // 0x80019148: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8001914C: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x80019150: swc1        $f6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f6.u32l;
    // 0x80019154: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80019158: sh          $t7, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r15;
    // 0x8001915C: jr          $ra
    // 0x80019160: swc1        $f8, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x80019160: swc1        $f8, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80019164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019164: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80019168: lhu         $t6, 0x38($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X38);
    // 0x8001916C: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    // 0x80019170: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80019174: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x80019178: swc1        $f6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f6.u32l;
    // 0x8001917C: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80019180: sh          $t7, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r15;
    // 0x80019184: jr          $ra
    // 0x80019188: swc1        $f8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x80019188: swc1        $f8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8001918C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001918C: beq         $a1, $zero, L_800191A8
    if (ctx->r5 == 0) {
        // 0x80019190: nop
    
            goto L_800191A8;
    }
    // 0x80019190: nop

    // 0x80019194: lhu         $t6, 0x38($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X38);
    // 0x80019198: nop

    // 0x8001919C: ori         $t7, $t6, 0x2000
    ctx->r15 = ctx->r14 | 0X2000;
    // 0x800191A0: jr          $ra
    // 0x800191A4: sh          $t7, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r15;
    return;
    // 0x800191A4: sh          $t7, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r15;
L_800191A8:
    // 0x800191A8: lhu         $t8, 0x38($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X38);
    // 0x800191AC: nop

    // 0x800191B0: andi        $t9, $t8, 0xDFFF
    ctx->r25 = ctx->r24 & 0XDFFF;
    // 0x800191B4: sh          $t9, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r25;
    // 0x800191B8: jr          $ra
    // 0x800191BC: nop

    return;
    // 0x800191BC: nop

;}
RECOMP_FUNC void func_800191C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800191C0: lhu         $t6, 0x38($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X38);
    // 0x800191C4: nop

    // 0x800191C8: andi        $t7, $t6, 0xBFFF
    ctx->r15 = ctx->r14 & 0XBFFF;
    // 0x800191CC: jr          $ra
    // 0x800191D0: sh          $t7, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r15;
    return;
    // 0x800191D0: sh          $t7, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_800191D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800191D4: lhu         $t6, 0x38($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X38);
    // 0x800191D8: nop

    // 0x800191DC: ori         $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 | 0X4000;
    // 0x800191E0: jr          $ra
    // 0x800191E4: sh          $t7, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r15;
    return;
    // 0x800191E4: sh          $t7, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_800191E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800191E8: beq         $a1, $zero, L_80019204
    if (ctx->r5 == 0) {
        // 0x800191EC: nop
    
            goto L_80019204;
    }
    // 0x800191EC: nop

    // 0x800191F0: lhu         $t6, 0x38($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X38);
    // 0x800191F4: nop

    // 0x800191F8: ori         $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 | 0X4000;
    // 0x800191FC: jr          $ra
    // 0x80019200: sh          $t7, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r15;
    return;
    // 0x80019200: sh          $t7, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r15;
L_80019204:
    // 0x80019204: lhu         $t8, 0x38($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X38);
    // 0x80019208: nop

    // 0x8001920C: andi        $t9, $t8, 0xBFFF
    ctx->r25 = ctx->r24 & 0XBFFF;
    // 0x80019210: sh          $t9, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r25;
    // 0x80019214: jr          $ra
    // 0x80019218: nop

    return;
    // 0x80019218: nop

;}
RECOMP_FUNC void func_8001921C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001921C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80019220: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80019224: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
L_80019228:
    // 0x80019228: lw          $a0, 0x3C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X3C);
    // 0x8001922C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80019230: beq         $a0, $zero, L_80019288
    if (ctx->r4 == 0) {
        // 0x80019234: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80019288;
    }
    // 0x80019234: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80019238: lhu         $t6, 0x24($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X24);
    // 0x8001923C: nop

    // 0x80019240: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x80019244: beq         $t7, $zero, L_80019288
    if (ctx->r15 == 0) {
        // 0x80019248: nop
    
            goto L_80019288;
    }
    // 0x80019248: nop

    // 0x8001924C: lw          $t8, 0x10($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X10);
    // 0x80019250: nop

    // 0x80019254: bne         $a2, $t8, L_80019288
    if (ctx->r6 != ctx->r24) {
        // 0x80019258: nop
    
            goto L_80019288;
    }
    // 0x80019258: nop

    // 0x8001925C: beq         $a3, $zero, L_80019278
    if (ctx->r7 == 0) {
        // 0x80019260: nop
    
            goto L_80019278;
    }
    // 0x80019260: nop

    // 0x80019264: lhu         $t9, 0x24($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X24);
    // 0x80019268: nop

    // 0x8001926C: or          $t6, $t9, $t0
    ctx->r14 = ctx->r25 | ctx->r8;
    // 0x80019270: b           L_80019288
    // 0x80019274: sh          $t6, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r14;
        goto L_80019288;
    // 0x80019274: sh          $t6, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r14;
L_80019278:
    // 0x80019278: lhu         $t7, 0x24($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X24);
    // 0x8001927C: nor         $t8, $t0, $zero
    ctx->r24 = ~(ctx->r8 | 0);
    // 0x80019280: and         $t9, $t7, $t8
    ctx->r25 = ctx->r15 & ctx->r24;
    // 0x80019284: sh          $t9, 0x24($v0)
    MEM_H(0X24, ctx->r2) = ctx->r25;
L_80019288:
    // 0x80019288: lw          $v0, 0x40($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X40);
    // 0x8001928C: nop

    // 0x80019290: beq         $v0, $zero, L_800192D8
    if (ctx->r2 == 0) {
        // 0x80019294: nop
    
            goto L_800192D8;
    }
    // 0x80019294: nop

    // 0x80019298: lhu         $a0, 0x24($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X24);
    // 0x8001929C: nop

    // 0x800192A0: andi        $t6, $a0, 0x8000
    ctx->r14 = ctx->r4 & 0X8000;
    // 0x800192A4: beq         $t6, $zero, L_800192D8
    if (ctx->r14 == 0) {
        // 0x800192A8: nop
    
            goto L_800192D8;
    }
    // 0x800192A8: nop

    // 0x800192AC: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x800192B0: nop

    // 0x800192B4: bne         $a2, $t7, L_800192D8
    if (ctx->r6 != ctx->r15) {
        // 0x800192B8: nop
    
            goto L_800192D8;
    }
    // 0x800192B8: nop

    // 0x800192BC: beq         $a3, $zero, L_800192D0
    if (ctx->r7 == 0) {
        // 0x800192C0: nor         $t9, $t0, $zero
        ctx->r25 = ~(ctx->r8 | 0);
            goto L_800192D0;
    }
    // 0x800192C0: nor         $t9, $t0, $zero
    ctx->r25 = ~(ctx->r8 | 0);
    // 0x800192C4: or          $t8, $a0, $t0
    ctx->r24 = ctx->r4 | ctx->r8;
    // 0x800192C8: b           L_800192D8
    // 0x800192CC: sh          $t8, 0x24($v0)
    MEM_H(0X24, ctx->r2) = ctx->r24;
        goto L_800192D8;
    // 0x800192CC: sh          $t8, 0x24($v0)
    MEM_H(0X24, ctx->r2) = ctx->r24;
L_800192D0:
    // 0x800192D0: and         $t6, $a0, $t9
    ctx->r14 = ctx->r4 & ctx->r25;
    // 0x800192D4: sh          $t6, 0x24($v0)
    MEM_H(0X24, ctx->r2) = ctx->r14;
L_800192D8:
    // 0x800192D8: bne         $v1, $t1, L_80019228
    if (ctx->r3 != ctx->r9) {
        // 0x800192DC: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_80019228;
    }
    // 0x800192DC: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x800192E0: jr          $ra
    // 0x800192E4: nop

    return;
    // 0x800192E4: nop

;}
RECOMP_FUNC void func_800192E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800192E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800192EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800192F0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800192F4: lhu         $t6, 0x3A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X3A);
    // 0x800192F8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800192FC: sllv        $t8, $t7, $a1
    ctx->r24 = S32(ctx->r15 << (ctx->r5 & 31));
    // 0x80019300: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x80019304: bne         $t9, $zero, L_8001932C
    if (ctx->r25 != 0) {
        // 0x80019308: or          $t1, $a0, $zero
        ctx->r9 = ctx->r4 | 0;
            goto L_8001932C;
    }
    // 0x80019308: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x8001930C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80019310: addiu       $a0, $a0, 0x5078
    ctx->r4 = ADD32(ctx->r4, 0X5078);
    // 0x80019314: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80019318: jal         0x80000FBC
    // 0x8001931C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x8001931C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_0:
    // 0x80019320: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80019324: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80019328: nop

L_8001932C:
    // 0x8001932C: lhu         $t8, 0x36($t1)
    ctx->r24 = MEM_HU(ctx->r9, 0X36);
    // 0x80019330: addiu       $t7, $a1, 0x1
    ctx->r15 = ADD32(ctx->r5, 0X1);
    // 0x80019334: lhu         $t9, 0x34($t1)
    ctx->r25 = MEM_HU(ctx->r9, 0X34);
    // 0x80019338: sll         $t6, $t7, 10
    ctx->r14 = S32(ctx->r15 << 10);
    // 0x8001933C: or          $v1, $t6, $t8
    ctx->r3 = ctx->r14 | ctx->r24;
    // 0x80019340: bne         $t9, $zero, L_8001936C
    if (ctx->r25 != 0) {
        // 0x80019344: or          $t2, $v1, $zero
        ctx->r10 = ctx->r3 | 0;
            goto L_8001936C;
    }
    // 0x80019344: or          $t2, $v1, $zero
    ctx->r10 = ctx->r3 | 0;
    // 0x80019348: lw          $a0, 0x98($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X98);
    // 0x8001934C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80019350: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80019354: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80019358: jal         0x800127FC
    // 0x8001935C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    func_800127FC(rdram, ctx);
        goto after_1;
    // 0x8001935C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    after_1:
    // 0x80019360: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80019364: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80019368: nop

L_8001936C:
    // 0x8001936C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80019370: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80019374: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x80019378: jal         0x8001921C
    // 0x8001937C: addiu       $t0, $zero, 0x2000
    ctx->r8 = ADD32(0, 0X2000);
    func_8001921C(rdram, ctx);
        goto after_2;
    // 0x8001937C: addiu       $t0, $zero, 0x2000
    ctx->r8 = ADD32(0, 0X2000);
    after_2:
    // 0x80019380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80019384: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80019388: jr          $ra
    // 0x8001938C: nop

    return;
    // 0x8001938C: nop

;}
RECOMP_FUNC void func_80019390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019390: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80019394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019398: lhu         $t6, 0x3A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X3A);
    // 0x8001939C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800193A0: sllv        $t8, $t7, $a1
    ctx->r24 = S32(ctx->r15 << (ctx->r5 & 31));
    // 0x800193A4: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x800193A8: bne         $t9, $zero, L_800193D0
    if (ctx->r25 != 0) {
        // 0x800193AC: or          $t1, $a0, $zero
        ctx->r9 = ctx->r4 | 0;
            goto L_800193D0;
    }
    // 0x800193AC: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x800193B0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800193B4: addiu       $a0, $a0, 0x5078
    ctx->r4 = ADD32(ctx->r4, 0X5078);
    // 0x800193B8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800193BC: jal         0x80000FBC
    // 0x800193C0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x800193C0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_0:
    // 0x800193C4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800193C8: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800193CC: nop

L_800193D0:
    // 0x800193D0: lhu         $t8, 0x36($t1)
    ctx->r24 = MEM_HU(ctx->r9, 0X36);
    // 0x800193D4: addiu       $t7, $a1, 0x1
    ctx->r15 = ADD32(ctx->r5, 0X1);
    // 0x800193D8: lhu         $t9, 0x34($t1)
    ctx->r25 = MEM_HU(ctx->r9, 0X34);
    // 0x800193DC: sll         $t6, $t7, 10
    ctx->r14 = S32(ctx->r15 << 10);
    // 0x800193E0: or          $v0, $t6, $t8
    ctx->r2 = ctx->r14 | ctx->r24;
    // 0x800193E4: bne         $t9, $zero, L_80019408
    if (ctx->r25 != 0) {
        // 0x800193E8: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80019408;
    }
    // 0x800193E8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800193EC: lw          $a0, 0x98($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X98);
    // 0x800193F0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x800193F4: jal         0x80012798
    // 0x800193F8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80012798(rdram, ctx);
        goto after_1;
    // 0x800193F8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800193FC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80019400: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80019404: nop

L_80019408:
    // 0x80019408: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8001940C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80019410: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80019414: jal         0x8001921C
    // 0x80019418: addiu       $t0, $zero, 0x4000
    ctx->r8 = ADD32(0, 0X4000);
    func_8001921C(rdram, ctx);
        goto after_2;
    // 0x80019418: addiu       $t0, $zero, 0x4000
    ctx->r8 = ADD32(0, 0X4000);
    after_2:
    // 0x8001941C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80019420: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80019424: jr          $ra
    // 0x80019428: nop

    return;
    // 0x80019428: nop

;}
RECOMP_FUNC void func_8001942C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001942C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80019430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019434: lhu         $t6, 0x3A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X3A);
    // 0x80019438: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8001943C: sllv        $t8, $t7, $a1
    ctx->r24 = S32(ctx->r15 << (ctx->r5 & 31));
    // 0x80019440: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x80019444: bne         $t9, $zero, L_8001946C
    if (ctx->r25 != 0) {
        // 0x80019448: or          $t1, $a0, $zero
        ctx->r9 = ctx->r4 | 0;
            goto L_8001946C;
    }
    // 0x80019448: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x8001944C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80019450: addiu       $a0, $a0, 0x5078
    ctx->r4 = ADD32(ctx->r4, 0X5078);
    // 0x80019454: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80019458: jal         0x80000FBC
    // 0x8001945C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x8001945C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_0:
    // 0x80019460: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80019464: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80019468: nop

L_8001946C:
    // 0x8001946C: lhu         $t8, 0x36($t1)
    ctx->r24 = MEM_HU(ctx->r9, 0X36);
    // 0x80019470: addiu       $t7, $a1, 0x1
    ctx->r15 = ADD32(ctx->r5, 0X1);
    // 0x80019474: lhu         $t9, 0x34($t1)
    ctx->r25 = MEM_HU(ctx->r9, 0X34);
    // 0x80019478: sll         $t6, $t7, 10
    ctx->r14 = S32(ctx->r15 << 10);
    // 0x8001947C: or          $v0, $t6, $t8
    ctx->r2 = ctx->r14 | ctx->r24;
    // 0x80019480: bne         $t9, $zero, L_800194A4
    if (ctx->r25 != 0) {
        // 0x80019484: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_800194A4;
    }
    // 0x80019484: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80019488: lw          $a0, 0x98($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X98);
    // 0x8001948C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80019490: jal         0x800127CC
    // 0x80019494: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800127CC(rdram, ctx);
        goto after_1;
    // 0x80019494: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x80019498: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8001949C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800194A0: nop

L_800194A4:
    // 0x800194A4: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x800194A8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x800194AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800194B0: jal         0x8001921C
    // 0x800194B4: addiu       $t0, $zero, 0x4000
    ctx->r8 = ADD32(0, 0X4000);
    func_8001921C(rdram, ctx);
        goto after_2;
    // 0x800194B4: addiu       $t0, $zero, 0x4000
    ctx->r8 = ADD32(0, 0X4000);
    after_2:
    // 0x800194B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800194BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800194C0: jr          $ra
    // 0x800194C4: nop

    return;
    // 0x800194C4: nop

;}
RECOMP_FUNC void func_800194C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800194C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800194CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800194D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800194D4: lhu         $t6, 0x34($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X34);
    // 0x800194D8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800194DC: bne         $t6, $zero, L_800194FC
    if (ctx->r14 != 0) {
        // 0x800194E0: andi        $t0, $a1, 0xFFFF
        ctx->r8 = ctx->r5 & 0XFFFF;
            goto L_800194FC;
    }
    // 0x800194E0: andi        $t0, $a1, 0xFFFF
    ctx->r8 = ctx->r5 & 0XFFFF;
    // 0x800194E4: lw          $a0, 0x98($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X98);
    // 0x800194E8: andi        $a1, $t0, 0xFFFF
    ctx->r5 = ctx->r8 & 0XFFFF;
    // 0x800194EC: jal         0x800121EC
    // 0x800194F0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_800121EC(rdram, ctx);
        goto after_0;
    // 0x800194F0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x800194F4: b           L_80019520
    // 0x800194F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80019520;
    // 0x800194F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800194FC:
    // 0x800194FC: lhu         $a0, 0x30($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X30);
    // 0x80019500: sh          $t0, 0x30($a3)
    MEM_H(0X30, ctx->r7) = ctx->r8;
    // 0x80019504: sh          $t0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r8;
    // 0x80019508: jal         0x800148C4
    // 0x8001950C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800148C4(rdram, ctx);
        goto after_1;
    // 0x8001950C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80019510: lhu         $a0, 0x1E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1E);
    // 0x80019514: jal         0x800148E8
    // 0x80019518: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800148E8(rdram, ctx);
        goto after_2;
    // 0x80019518: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8001951C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80019520:
    // 0x80019520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80019524: jr          $ra
    // 0x80019528: nop

    return;
    // 0x80019528: nop

;}
RECOMP_FUNC void func_8001952C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001952C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80019530: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80019534: lhu         $t6, 0x34($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X34);
    // 0x80019538: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8001953C: bne         $t6, $zero, L_80019580
    if (ctx->r14 != 0) {
        // 0x80019540: or          $t1, $a1, $zero
        ctx->r9 = ctx->r5 | 0;
            goto L_80019580;
    }
    // 0x80019540: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
    // 0x80019544: bgez        $a1, L_80019554
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80019548: lui         $t7, 0x800B
        ctx->r15 = S32(0X800B << 16);
            goto L_80019554;
    }
    // 0x80019548: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8001954C: lw          $t1, 0x2C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X2C);
    // 0x80019550: nop

L_80019554:
    // 0x80019554: lw          $t7, -0x5C70($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5C70);
    // 0x80019558: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x8001955C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80019560: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x80019564: lw          $a0, 0x98($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X98);
    // 0x80019568: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8001956C: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x80019570: lhu         $a2, 0xC($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0XC);
    // 0x80019574: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x80019578: jal         0x80012408
    // 0x8001957C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_80012408(rdram, ctx);
        goto after_0;
    // 0x8001957C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_0:
L_80019580:
    // 0x80019580: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80019584: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80019588: jr          $ra
    // 0x8001958C: nop

    return;
    // 0x8001958C: nop

;}
RECOMP_FUNC void func_80019590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80019594: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019598: lhu         $t6, 0x34($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X34);
    // 0x8001959C: nop

    // 0x800195A0: bne         $t6, $zero, L_800195B8
    if (ctx->r14 != 0) {
        // 0x800195A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800195B8;
    }
    // 0x800195A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800195A8: lw          $a0, 0x98($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X98);
    // 0x800195AC: jal         0x80011858
    // 0x800195B0: nop

    func_80011858(rdram, ctx);
        goto after_0;
    // 0x800195B0: nop

    after_0:
    // 0x800195B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800195B8:
    // 0x800195B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800195BC: jr          $ra
    // 0x800195C0: nop

    return;
    // 0x800195C0: nop

;}
RECOMP_FUNC void func_800195C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800195C4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800195C8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800195CC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800195D0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800195D4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800195D8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800195DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800195E0: lhu         $v0, 0x34($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X34);
    // 0x800195E4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x800195E8: bne         $v0, $zero, L_8001960C
    if (ctx->r2 != 0) {
        // 0x800195EC: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_8001960C;
    }
    // 0x800195EC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800195F0: lw          $a0, 0x98($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X98);
    // 0x800195F4: jal         0x80012A5C
    // 0x800195F8: nop

    func_80012A5C(rdram, ctx);
        goto after_0;
    // 0x800195F8: nop

    after_0:
    // 0x800195FC: jal         0x800196D4
    // 0x80019600: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_800196D4(rdram, ctx);
        goto after_1;
    // 0x80019600: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_1:
    // 0x80019604: b           L_80019650
    // 0x80019608: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_80019650;
    // 0x80019608: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8001960C:
    // 0x8001960C: beq         $v0, $at, L_8001961C
    if (ctx->r2 == ctx->r1) {
        // 0x80019610: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_8001961C;
    }
    // 0x80019610: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80019614: bne         $v0, $at, L_80019640
    if (ctx->r2 != ctx->r1) {
        // 0x80019618: nop
    
            goto L_80019640;
    }
    // 0x80019618: nop

L_8001961C:
    // 0x8001961C: lw          $a0, 0xBC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XBC);
    // 0x80019620: jal         0x8000C658
    // 0x80019624: nop

    func_8000C658(rdram, ctx);
        goto after_2;
    // 0x80019624: nop

    after_2:
    // 0x80019628: lw          $a0, 0xC0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC0);
    // 0x8001962C: jal         0x8000C658
    // 0x80019630: nop

    func_8000C658(rdram, ctx);
        goto after_3;
    // 0x80019630: nop

    after_3:
    // 0x80019634: lw          $a0, 0xC4($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC4);
    // 0x80019638: jal         0x8000C658
    // 0x8001963C: nop

    func_8000C658(rdram, ctx);
        goto after_4;
    // 0x8001963C: nop

    after_4:
L_80019640:
    // 0x80019640: lhu         $a0, 0x30($s4)
    ctx->r4 = MEM_HU(ctx->r20, 0X30);
    // 0x80019644: jal         0x800148C4
    // 0x80019648: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800148C4(rdram, ctx);
        goto after_5;
    // 0x80019648: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x8001964C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80019650:
    // 0x80019650: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
    // 0x80019654: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
L_80019658:
    // 0x80019658: jal         0x8001892C
    // 0x8001965C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8001892C(rdram, ctx);
        goto after_6;
    // 0x8001965C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_6:
    // 0x80019660: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80019664: bne         $s2, $s3, L_80019658
    if (ctx->r18 != ctx->r19) {
        // 0x80019668: or          $a2, $s4, $zero
        ctx->r6 = ctx->r20 | 0;
            goto L_80019658;
    }
    // 0x80019668: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8001966C: lw          $t6, 0x4($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X4);
    // 0x80019670: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x80019674: sh          $zero, 0x38($s4)
    MEM_H(0X38, ctx->r20) = 0;
    // 0x80019678: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8001967C: lw          $t9, 0x4($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X4);
    // 0x80019680: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x80019684: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80019688: addiu       $v0, $v0, -0x5C54
    ctx->r2 = ADD32(ctx->r2, -0X5C54);
    // 0x8001968C: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80019690: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80019694: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80019698: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8001969C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800196A0: lw          $t9, -0x5C58($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5C58);
    // 0x800196A4: lhu         $t8, 0x36($s4)
    ctx->r24 = MEM_HU(ctx->r20, 0X36);
    // 0x800196A8: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x800196AC: addu        $t6, $t9, $t7
    ctx->r14 = ADD32(ctx->r25, ctx->r15);
    // 0x800196B0: sh          $t8, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r24;
    // 0x800196B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800196B8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800196BC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800196C0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800196C4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800196C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800196CC: jr          $ra
    // 0x800196D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800196D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800196D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800196D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800196D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800196DC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800196E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800196E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800196E8: lhu         $t6, 0x34($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X34);
    // 0x800196EC: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800196F0: bne         $t6, $zero, L_80019760
    if (ctx->r14 != 0) {
        // 0x800196F4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80019760;
    }
    // 0x800196F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800196F8: lw          $v0, 0xA4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA4);
    // 0x800196FC: nop

    // 0x80019700: beq         $v0, $zero, L_80019760
    if (ctx->r2 == 0) {
        // 0x80019704: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80019760;
    }
    // 0x80019704: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80019708: blez        $v0, L_80019740
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8001970C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80019740;
    }
    // 0x8001970C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80019710: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80019714:
    // 0x80019714: lw          $t7, 0xA0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0XA0);
    // 0x80019718: nop

    // 0x8001971C: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x80019720: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80019724: jal         0x800195C4
    // 0x80019728: nop

    func_800195C4(rdram, ctx);
        goto after_0;
    // 0x80019728: nop

    after_0:
    // 0x8001972C: lw          $t9, 0xA4($s2)
    ctx->r25 = MEM_W(ctx->r18, 0XA4);
    // 0x80019730: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80019734: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80019738: bne         $at, $zero, L_80019714
    if (ctx->r1 != 0) {
        // 0x8001973C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80019714;
    }
    // 0x8001973C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_80019740:
    // 0x80019740: lw          $a0, 0xA0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XA0);
    // 0x80019744: jal         0x8000C658
    // 0x80019748: nop

    func_8000C658(rdram, ctx);
        goto after_1;
    // 0x80019748: nop

    after_1:
    // 0x8001974C: lw          $a0, 0x9C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X9C);
    // 0x80019750: sw          $zero, 0xA0($s2)
    MEM_W(0XA0, ctx->r18) = 0;
    // 0x80019754: jal         0x80011A38
    // 0x80019758: sw          $zero, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = 0;
    func_80011A38(rdram, ctx);
        goto after_2;
    // 0x80019758: sw          $zero, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = 0;
    after_2:
    // 0x8001975C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80019760:
    // 0x80019760: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80019764: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80019768: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001976C: jr          $ra
    // 0x80019770: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80019770: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80019774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019774: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80019778: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8001977C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80019780: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80019784: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80019788: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001978C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80019790: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80019794: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80019798: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8001979C: lhu         $t9, 0x36($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X36);
    // 0x800197A0: addiu       $t7, $a1, 0x1
    ctx->r15 = ADD32(ctx->r5, 0X1);
    // 0x800197A4: lhu         $t6, 0x34($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X34);
    // 0x800197A8: sll         $t8, $t7, 10
    ctx->r24 = S32(ctx->r15 << 10);
    // 0x800197AC: or          $v0, $t8, $t9
    ctx->r2 = ctx->r24 | ctx->r25;
    // 0x800197B0: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x800197B4: bne         $t6, $zero, L_800197CC
    if (ctx->r14 != 0) {
        // 0x800197B8: or          $s6, $v0, $zero
        ctx->r22 = ctx->r2 | 0;
            goto L_800197CC;
    }
    // 0x800197B8: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x800197BC: lw          $a0, 0x98($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X98);
    // 0x800197C0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800197C4: jal         0x80011680
    // 0x800197C8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80011680(rdram, ctx);
        goto after_0;
    // 0x800197C8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
L_800197CC:
    // 0x800197CC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800197D0: or          $s3, $s5, $zero
    ctx->r19 = ctx->r21 | 0;
    // 0x800197D4: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
L_800197D8:
    // 0x800197D8: lw          $v0, 0x3C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X3C);
    // 0x800197DC: nop

    // 0x800197E0: beq         $v0, $zero, L_80019800
    if (ctx->r2 == 0) {
        // 0x800197E4: nop
    
            goto L_80019800;
    }
    // 0x800197E4: nop

    // 0x800197E8: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x800197EC: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x800197F0: bne         $s6, $t7, L_80019800
    if (ctx->r22 != ctx->r15) {
        // 0x800197F4: nop
    
            goto L_80019800;
    }
    // 0x800197F4: nop

    // 0x800197F8: jal         0x8001892C
    // 0x800197FC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8001892C(rdram, ctx);
        goto after_1;
    // 0x800197FC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
L_80019800:
    // 0x80019800: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80019804: bne         $s2, $s4, L_800197D8
    if (ctx->r18 != ctx->r20) {
        // 0x80019808: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_800197D8;
    }
    // 0x80019808: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8001980C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80019810: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80019814: lhu         $t8, 0x3A($s5)
    ctx->r24 = MEM_HU(ctx->r21, 0X3A);
    // 0x80019818: sllv        $t7, $t6, $t9
    ctx->r15 = S32(ctx->r14 << (ctx->r25 & 31));
    // 0x8001981C: nor         $t6, $t7, $zero
    ctx->r14 = ~(ctx->r15 | 0);
    // 0x80019820: and         $t9, $t8, $t6
    ctx->r25 = ctx->r24 & ctx->r14;
    // 0x80019824: sh          $t9, 0x3A($s5)
    MEM_H(0X3A, ctx->r21) = ctx->r25;
    // 0x80019828: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8001982C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80019830: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80019834: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80019838: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8001983C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80019840: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80019844: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80019848: jr          $ra
    // 0x8001984C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8001984C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80019850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80019854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019858: lhu         $t6, 0x34($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X34);
    // 0x8001985C: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
    // 0x80019860: bne         $t6, $zero, L_80019878
    if (ctx->r14 != 0) {
        // 0x80019864: or          $a3, $a2, $zero
        ctx->r7 = ctx->r6 | 0;
            goto L_80019878;
    }
    // 0x80019864: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80019868: lw          $a0, 0x98($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X98);
    // 0x8001986C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x80019870: jal         0x800118D8
    // 0x80019874: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    func_800118D8(rdram, ctx);
        goto after_0;
    // 0x80019874: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    after_0:
L_80019878:
    // 0x80019878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001987C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80019880: jr          $ra
    // 0x80019884: nop

    return;
    // 0x80019884: nop

    // 0x80019888: jr          $ra
    // 0x8001988C: nop

    return;
    // 0x8001988C: nop

;}
RECOMP_FUNC void func_80019890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019890: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80019894: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80019898: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8001989C: addiu       $s1, $s1, -0x5C54
    ctx->r17 = ADD32(ctx->r17, -0X5C54);
    // 0x800198A0: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x800198A4: addiu       $at, $zero, 0x320
    ctx->r1 = ADD32(0, 0X320);
    // 0x800198A8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800198AC: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x800198B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800198B4: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x800198B8: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x800198BC: bne         $t0, $at, L_800198E0
    if (ctx->r8 != ctx->r1) {
        // 0x800198C0: or          $t2, $a2, $zero
        ctx->r10 = ctx->r6 | 0;
            goto L_800198E0;
    }
    // 0x800198C0: or          $t2, $a2, $zero
    ctx->r10 = ctx->r6 | 0;
    // 0x800198C4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800198C8: addiu       $a0, $a0, 0x5020
    ctx->r4 = ADD32(ctx->r4, 0X5020);
    // 0x800198CC: jal         0x80000FBC
    // 0x800198D0: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x800198D0: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    after_0:
    // 0x800198D4: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    // 0x800198D8: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x800198DC: nop

L_800198E0:
    // 0x800198E0: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800198E4: lw          $t6, -0x5C58($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5C58);
    // 0x800198E8: sll         $t7, $t0, 1
    ctx->r15 = S32(ctx->r8 << 1);
    // 0x800198EC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800198F0: lhu         $a3, 0x0($t8)
    ctx->r7 = MEM_HU(ctx->r24, 0X0);
    // 0x800198F4: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x800198F8: sll         $t3, $a3, 3
    ctx->r11 = S32(ctx->r7 << 3);
    // 0x800198FC: addiu       $t1, $t1, -0x5C5C
    ctx->r9 = ADD32(ctx->r9, -0X5C5C);
    // 0x80019900: subu        $t3, $t3, $a3
    ctx->r11 = SUB32(ctx->r11, ctx->r7);
    // 0x80019904: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x80019908: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x8001990C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80019910: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x80019914: addu        $t3, $t3, $a3
    ctx->r11 = ADD32(ctx->r11, ctx->r7);
    // 0x80019918: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x8001991C: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80019920: addu        $v1, $t3, $v0
    ctx->r3 = ADD32(ctx->r11, ctx->r2);
    // 0x80019924: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80019928: lw          $t5, 0x0($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X0);
    // 0x8001992C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80019930: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x80019934: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x80019938: addiu       $a1, $a1, -0xFE0
    ctx->r5 = ADD32(ctx->r5, -0XFE0);
    // 0x8001993C: sw          $v1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r3;
    // 0x80019940: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80019944: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x80019948: sw          $v1, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r3;
    // 0x8001994C: sw          $t2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r10;
    // 0x80019950: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x80019954: jal         0x8000E4A8
    // 0x80019958: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8000E4A8(rdram, ctx);
        goto after_1;
    // 0x80019958: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_1:
    // 0x8001995C: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80019960: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80019964: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    // 0x80019968: ori         $t8, $zero, 0xD480
    ctx->r24 = 0 | 0XD480;
    // 0x8001996C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80019970: lhu         $t0, 0x36($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X36);
    // 0x80019974: sh          $t8, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r24;
    // 0x80019978: sh          $s0, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r16;
    // 0x8001997C: sh          $zero, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = 0;
    // 0x80019980: sw          $zero, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = 0;
    // 0x80019984: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    // 0x80019988: sw          $zero, 0x44($s1)
    MEM_W(0X44, ctx->r17) = 0;
    // 0x8001998C: sw          $zero, 0x48($s1)
    MEM_W(0X48, ctx->r17) = 0;
    // 0x80019990: sh          $zero, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = 0;
    // 0x80019994: sw          $t1, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r9;
    // 0x80019998: bne         $s0, $at, L_80019A44
    if (ctx->r16 != ctx->r1) {
        // 0x8001999C: sh          $t2, 0x30($s1)
        MEM_H(0X30, ctx->r17) = ctx->r10;
            goto L_80019A44;
    }
    // 0x8001999C: sh          $t2, 0x30($s1)
    MEM_H(0X30, ctx->r17) = ctx->r10;
    // 0x800199A0: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x800199A4: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x800199A8: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
    // 0x800199AC: and         $s0, $t9, $v0
    ctx->r16 = ctx->r25 & ctx->r2;
    // 0x800199B0: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x800199B4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800199B8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x800199BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800199C0: jal         0x800148E8
    // 0x800199C4: sw          $t3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r11;
    func_800148E8(rdram, ctx);
        goto after_2;
    // 0x800199C4: sw          $t3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r11;
    after_2:
    // 0x800199C8: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x800199CC: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x800199D0: lw          $t4, -0x5C70($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X5C70);
    // 0x800199D4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800199D8: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x800199DC: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x800199E0: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x800199E4: lw          $t9, 0x10($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X10);
    // 0x800199E8: sll         $t5, $t3, 1
    ctx->r13 = S32(ctx->r11 << 1);
    // 0x800199EC: addu        $t4, $t9, $t5
    ctx->r12 = ADD32(ctx->r25, ctx->r13);
    // 0x800199F0: lhu         $t6, 0x0($t4)
    ctx->r14 = MEM_HU(ctx->r12, 0X0);
    // 0x800199F4: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x800199F8: sw          $t6, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r14;
    // 0x800199FC: lw          $t7, 0x7D10($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7D10);
    // 0x80019A00: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x80019A04: addu        $t9, $t7, $t3
    ctx->r25 = ADD32(ctx->r15, ctx->r11);
    // 0x80019A08: lw          $t5, 0x0($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X0);
    // 0x80019A0C: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x80019A10: addiu       $t4, $s0, 0x3
    ctx->r12 = ADD32(ctx->r16, 0X3);
    // 0x80019A14: and         $s0, $t4, $v0
    ctx->r16 = ctx->r12 & ctx->r2;
    // 0x80019A18: sw          $t5, 0xD8($s1)
    MEM_W(0XD8, ctx->r17) = ctx->r13;
    // 0x80019A1C: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x80019A20: addiu       $t8, $s0, 0x7
    ctx->r24 = ADD32(ctx->r16, 0X7);
    // 0x80019A24: and         $s0, $t8, $v0
    ctx->r16 = ctx->r24 & ctx->r2;
    // 0x80019A28: sb          $t6, 0xE0($s1)
    MEM_B(0XE0, ctx->r17) = ctx->r14;
    // 0x80019A2C: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80019A30: lhu         $t7, 0x38($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X38);
    // 0x80019A34: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80019A38: or          $t9, $t7, $t3
    ctx->r25 = ctx->r15 | ctx->r11;
    // 0x80019A3C: b           L_80019EF0
    // 0x80019A40: sh          $t9, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r25;
        goto L_80019EF0;
    // 0x80019A40: sh          $t9, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r25;
L_80019A44:
    // 0x80019A44: bne         $s0, $zero, L_80019A9C
    if (ctx->r16 != 0) {
        // 0x80019A48: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80019A9C;
    }
    // 0x80019A48: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80019A4C: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x80019A50: lw          $t5, -0x5C70($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X5C70);
    // 0x80019A54: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80019A58: addu        $t6, $t5, $t4
    ctx->r14 = ADD32(ctx->r13, ctx->r12);
    // 0x80019A5C: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    // 0x80019A60: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80019A64: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x80019A68: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    // 0x80019A6C: lw          $a3, 0x20($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X20);
    // 0x80019A70: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80019A74: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80019A78: jal         0x80010EA0
    // 0x80019A7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80010EA0(rdram, ctx);
        goto after_3;
    // 0x80019A7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80019A80: sw          $v0, 0x98($s1)
    MEM_W(0X98, ctx->r17) = ctx->r2;
    // 0x80019A84: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    // 0x80019A88: sw          $zero, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = 0;
    // 0x80019A8C: sw          $zero, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = 0;
    // 0x80019A90: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x80019A94: b           L_80019EF4
    // 0x80019A98: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
        goto L_80019EF4;
    // 0x80019A98: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
L_80019A9C:
    // 0x80019A9C: bne         $s0, $at, L_80019B7C
    if (ctx->r16 != ctx->r1) {
        // 0x80019AA0: addiu       $v0, $zero, -0x4
        ctx->r2 = ADD32(0, -0X4);
            goto L_80019B7C;
    }
    // 0x80019AA0: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x80019AA4: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x80019AA8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80019AAC: addiu       $t7, $s0, 0x3
    ctx->r15 = ADD32(ctx->r16, 0X3);
    // 0x80019AB0: and         $s0, $t7, $v0
    ctx->r16 = ctx->r15 & ctx->r2;
    // 0x80019AB4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80019AB8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80019ABC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80019AC0: jal         0x800148E8
    // 0x80019AC4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_800148E8(rdram, ctx);
        goto after_4;
    // 0x80019AC4: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_4:
    // 0x80019AC8: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x80019ACC: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x80019AD0: bgez        $v1, L_80019AF0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80019AD4: lui         $t5, 0x800B
        ctx->r13 = S32(0X800B << 16);
            goto L_80019AF0;
    }
    // 0x80019AD4: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x80019AD8: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80019ADC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80019AE0: addiu       $t9, $t9, -0x14C0
    ctx->r25 = ADD32(ctx->r25, -0X14C0);
    // 0x80019AE4: sw          $t3, 0xB0($s1)
    MEM_W(0XB0, ctx->r17) = ctx->r11;
    // 0x80019AE8: b           L_80019B38
    // 0x80019AEC: sw          $t9, 0x98($s1)
    MEM_W(0X98, ctx->r17) = ctx->r25;
        goto L_80019B38;
    // 0x80019AEC: sw          $t9, 0x98($s1)
    MEM_W(0X98, ctx->r17) = ctx->r25;
L_80019AF0:
    // 0x80019AF0: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x80019AF4: lw          $t5, -0x5C70($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X5C70);
    // 0x80019AF8: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80019AFC: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x80019B00: lw          $t7, 0x0($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X0);
    // 0x80019B04: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x80019B08: lw          $t3, 0x18($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X18);
    // 0x80019B0C: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80019B10: addu        $t4, $t3, $t9
    ctx->r12 = ADD32(ctx->r11, ctx->r25);
    // 0x80019B14: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x80019B18: nop

    // 0x80019B1C: sw          $t5, 0xB0($s1)
    MEM_W(0XB0, ctx->r17) = ctx->r13;
    // 0x80019B20: lw          $t6, 0x7D18($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7D18);
    // 0x80019B24: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80019B28: addu        $t3, $t6, $t7
    ctx->r11 = ADD32(ctx->r14, ctx->r15);
    // 0x80019B2C: lw          $t9, 0x0($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X0);
    // 0x80019B30: nop

    // 0x80019B34: sw          $t9, 0x98($s1)
    MEM_W(0X98, ctx->r17) = ctx->r25;
L_80019B38:
    // 0x80019B38: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80019B3C: addiu       $t7, $s0, 0x3
    ctx->r15 = ADD32(ctx->r16, 0X3);
    // 0x80019B40: sh          $t5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r13;
    // 0x80019B44: sh          $t5, 0x9C($s1)
    MEM_H(0X9C, ctx->r17) = ctx->r13;
    // 0x80019B48: sh          $zero, 0xA2($s1)
    MEM_H(0XA2, ctx->r17) = 0;
    // 0x80019B4C: sh          $zero, 0xA0($s1)
    MEM_H(0XA0, ctx->r17) = 0;
    // 0x80019B50: sh          $zero, 0xA6($s1)
    MEM_H(0XA6, ctx->r17) = 0;
    // 0x80019B54: sh          $zero, 0xA4($s1)
    MEM_H(0XA4, ctx->r17) = 0;
    // 0x80019B58: and         $s0, $t7, $v0
    ctx->r16 = ctx->r15 & ctx->r2;
    // 0x80019B5C: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80019B60: addiu       $t9, $s0, 0x7
    ctx->r25 = ADD32(ctx->r16, 0X7);
    // 0x80019B64: and         $s0, $t9, $v0
    ctx->r16 = ctx->r25 & ctx->r2;
    // 0x80019B68: sw          $t3, 0xA8($s1)
    MEM_W(0XA8, ctx->r17) = ctx->r11;
    // 0x80019B6C: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x80019B70: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80019B74: b           L_80019EF0
    // 0x80019B78: sw          $t4, 0xAC($s1)
    MEM_W(0XAC, ctx->r17) = ctx->r12;
        goto L_80019EF0;
    // 0x80019B78: sw          $t4, 0xAC($s1)
    MEM_W(0XAC, ctx->r17) = ctx->r12;
L_80019B7C:
    // 0x80019B7C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80019B80: bne         $s0, $at, L_80019C58
    if (ctx->r16 != ctx->r1) {
        // 0x80019B84: addiu       $a3, $zero, 0x6
        ctx->r7 = ADD32(0, 0X6);
            goto L_80019C58;
    }
    // 0x80019B84: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x80019B88: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x80019B8C: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x80019B90: addiu       $t5, $s0, 0x3
    ctx->r13 = ADD32(ctx->r16, 0X3);
    // 0x80019B94: and         $s0, $t5, $v0
    ctx->r16 = ctx->r13 & ctx->r2;
    // 0x80019B98: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80019B9C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80019BA0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80019BA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80019BA8: jal         0x800148E8
    // 0x80019BAC: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    func_800148E8(rdram, ctx);
        goto after_5;
    // 0x80019BAC: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    after_5:
    // 0x80019BB0: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x80019BB4: addiu       $t6, $s0, 0x3
    ctx->r14 = ADD32(ctx->r16, 0X3);
    // 0x80019BB8: and         $s0, $t6, $v0
    ctx->r16 = ctx->r14 & ctx->r2;
    // 0x80019BBC: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80019BC0: addiu       $t3, $s0, 0x7
    ctx->r11 = ADD32(ctx->r16, 0X7);
    // 0x80019BC4: and         $s0, $t3, $v0
    ctx->r16 = ctx->r11 & ctx->r2;
    // 0x80019BC8: sw          $t7, 0x98($s1)
    MEM_W(0X98, ctx->r17) = ctx->r15;
    // 0x80019BCC: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80019BD0: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x80019BD4: sw          $t9, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->r25;
    // 0x80019BD8: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x80019BDC: lw          $t4, -0x5C70($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X5C70);
    // 0x80019BE0: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80019BE4: addu        $t6, $t4, $t8
    ctx->r14 = ADD32(ctx->r12, ctx->r24);
    // 0x80019BE8: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80019BEC: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x80019BF0: lw          $t3, 0x10($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X10);
    // 0x80019BF4: sll         $t5, $t9, 1
    ctx->r13 = S32(ctx->r25 << 1);
    // 0x80019BF8: addu        $t4, $t3, $t5
    ctx->r12 = ADD32(ctx->r11, ctx->r13);
    // 0x80019BFC: lhu         $t8, 0x0($t4)
    ctx->r24 = MEM_HU(ctx->r12, 0X0);
    // 0x80019C00: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80019C04: sw          $t8, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r24;
    // 0x80019C08: lw          $t6, 0x7D10($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7D10);
    // 0x80019C0C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80019C10: addu        $t3, $t6, $t9
    ctx->r11 = ADD32(ctx->r14, ctx->r25);
    // 0x80019C14: lw          $t5, 0x0($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X0);
    // 0x80019C18: addiu       $t4, $s0, 0x7
    ctx->r12 = ADD32(ctx->r16, 0X7);
    // 0x80019C1C: and         $s0, $t4, $v0
    ctx->r16 = ctx->r12 & ctx->r2;
    // 0x80019C20: sw          $t5, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r13;
    // 0x80019C24: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80019C28: addiu       $t7, $s0, 0x7
    ctx->r15 = ADD32(ctx->r16, 0X7);
    // 0x80019C2C: and         $s0, $t7, $v0
    ctx->r16 = ctx->r15 & ctx->r2;
    // 0x80019C30: sw          $t8, 0xA8($s1)
    MEM_W(0XA8, ctx->r17) = ctx->r24;
    // 0x80019C34: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80019C38: addiu       $t9, $s0, 0x7
    ctx->r25 = ADD32(ctx->r16, 0X7);
    // 0x80019C3C: sw          $zero, 0xB0($s1)
    MEM_W(0XB0, ctx->r17) = 0;
    // 0x80019C40: and         $s0, $t9, $v0
    ctx->r16 = ctx->r25 & ctx->r2;
    // 0x80019C44: sw          $t6, 0xAC($s1)
    MEM_W(0XAC, ctx->r17) = ctx->r14;
    // 0x80019C48: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80019C4C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80019C50: b           L_80019EF0
    // 0x80019C54: sw          $t3, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r11;
        goto L_80019EF0;
    // 0x80019C54: sw          $t3, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r11;
L_80019C58:
    // 0x80019C58: beq         $s0, $a3, L_80019C64
    if (ctx->r16 == ctx->r7) {
        // 0x80019C5C: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_80019C64;
    }
    // 0x80019C5C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80019C60: bne         $s0, $at, L_80019E8C
    if (ctx->r16 != ctx->r1) {
        // 0x80019C64: or          $a0, $t2, $zero
        ctx->r4 = ctx->r10 | 0;
            goto L_80019E8C;
    }
L_80019C64:
    // 0x80019C64: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80019C68: jal         0x800148E8
    // 0x80019C6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800148E8(rdram, ctx);
        goto after_6;
    // 0x80019C6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x80019C70: lui         $t5, 0x8002
    ctx->r13 = S32(0X8002 << 16);
    // 0x80019C74: lui         $t4, 0x8002
    ctx->r12 = S32(0X8002 << 16);
    // 0x80019C78: lui         $t8, 0x8001
    ctx->r24 = S32(0X8001 << 16);
    // 0x80019C7C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x80019C80: addiu       $t5, $t5, -0x7ED4
    ctx->r13 = ADD32(ctx->r13, -0X7ED4);
    // 0x80019C84: addiu       $t4, $t4, -0x7F44
    ctx->r12 = ADD32(ctx->r12, -0X7F44);
    // 0x80019C88: addiu       $t8, $t8, 0x7F9C
    ctx->r24 = ADD32(ctx->r24, 0X7F9C);
    // 0x80019C8C: sw          $t5, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r13;
    // 0x80019C90: sw          $t4, 0xAC($s1)
    MEM_W(0XAC, ctx->r17) = ctx->r12;
    // 0x80019C94: bne         $s0, $a3, L_80019CF0
    if (ctx->r16 != ctx->r7) {
        // 0x80019C98: sw          $t8, 0xB4($s1)
        MEM_W(0XB4, ctx->r17) = ctx->r24;
            goto L_80019CF0;
    }
    // 0x80019C98: sw          $t8, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r24;
    // 0x80019C9C: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x80019CA0: lui         $t7, 0x8001
    ctx->r15 = S32(0X8001 << 16);
    // 0x80019CA4: lui         $t6, 0x8001
    ctx->r14 = S32(0X8001 << 16);
    // 0x80019CA8: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x80019CAC: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x80019CB0: addiu       $t7, $t7, 0x7EE0
    ctx->r15 = ADD32(ctx->r15, 0X7EE0);
    // 0x80019CB4: addiu       $t6, $t6, 0x7EB0
    ctx->r14 = ADD32(ctx->r14, 0X7EB0);
    // 0x80019CB8: addiu       $t9, $t9, 0x7E74
    ctx->r25 = ADD32(ctx->r25, 0X7E74);
    // 0x80019CBC: addiu       $t3, $s0, 0x3
    ctx->r11 = ADD32(ctx->r16, 0X3);
    // 0x80019CC0: sw          $t7, 0xA8($s1)
    MEM_W(0XA8, ctx->r17) = ctx->r15;
    // 0x80019CC4: sw          $t6, 0xB0($s1)
    MEM_W(0XB0, ctx->r17) = ctx->r14;
    // 0x80019CC8: sw          $t9, 0xB8($s1)
    MEM_W(0XB8, ctx->r17) = ctx->r25;
    // 0x80019CCC: and         $s0, $t3, $v0
    ctx->r16 = ctx->r11 & ctx->r2;
    // 0x80019CD0: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x80019CD4: addiu       $t4, $s0, 0x7
    ctx->r12 = ADD32(ctx->r16, 0X7);
    // 0x80019CD8: and         $s0, $t4, $v0
    ctx->r16 = ctx->r12 & ctx->r2;
    // 0x80019CDC: sw          $t5, 0x98($s1)
    MEM_W(0X98, ctx->r17) = ctx->r13;
    // 0x80019CE0: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80019CE4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80019CE8: b           L_80019D30
    // 0x80019CEC: sw          $t8, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r24;
        goto L_80019D30;
    // 0x80019CEC: sw          $t8, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r24;
L_80019CF0:
    // 0x80019CF0: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x80019CF4: lui         $t7, 0x8001
    ctx->r15 = S32(0X8001 << 16);
    // 0x80019CF8: lui         $t6, 0x8001
    ctx->r14 = S32(0X8001 << 16);
    // 0x80019CFC: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x80019D00: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x80019D04: addiu       $t7, $t7, 0x7E1C
    ctx->r15 = ADD32(ctx->r15, 0X7E1C);
    // 0x80019D08: addiu       $t6, $t6, 0x7DC8
    ctx->r14 = ADD32(ctx->r14, 0X7DC8);
    // 0x80019D0C: addiu       $t9, $t9, 0x7D64
    ctx->r25 = ADD32(ctx->r25, 0X7D64);
    // 0x80019D10: addiu       $t3, $s0, 0x3
    ctx->r11 = ADD32(ctx->r16, 0X3);
    // 0x80019D14: sw          $t7, 0xA8($s1)
    MEM_W(0XA8, ctx->r17) = ctx->r15;
    // 0x80019D18: sw          $t6, 0xB0($s1)
    MEM_W(0XB0, ctx->r17) = ctx->r14;
    // 0x80019D1C: sw          $t9, 0xB8($s1)
    MEM_W(0XB8, ctx->r17) = ctx->r25;
    // 0x80019D20: and         $s0, $t3, $v0
    ctx->r16 = ctx->r11 & ctx->r2;
    // 0x80019D24: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x80019D28: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80019D2C: sw          $t5, 0x98($s1)
    MEM_W(0X98, ctx->r17) = ctx->r13;
L_80019D30:
    // 0x80019D30: addiu       $t4, $s0, 0x3
    ctx->r12 = ADD32(ctx->r16, 0X3);
    // 0x80019D34: and         $s0, $t4, $v0
    ctx->r16 = ctx->r12 & ctx->r2;
    // 0x80019D38: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80019D3C: addiu       $t8, $s0, 0x7
    ctx->r24 = ADD32(ctx->r16, 0X7);
    // 0x80019D40: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80019D44: and         $s0, $t8, $v0
    ctx->r16 = ctx->r24 & ctx->r2;
    // 0x80019D48: sw          $v1, 0xC8($s1)
    MEM_W(0XC8, ctx->r17) = ctx->r3;
    // 0x80019D4C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80019D50: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80019D54: sw          $a1, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = ctx->r5;
    // 0x80019D58: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    // 0x80019D5C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80019D60: mflo        $a2
    ctx->r6 = lo;
    // 0x80019D64: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x80019D68: nop

    // 0x80019D6C: multu       $a2, $a1
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80019D70: mflo        $a0
    ctx->r4 = lo;
    // 0x80019D74: jal         0x8000C734
    // 0x80019D78: nop

    func_8000C734(rdram, ctx);
        goto after_7;
    // 0x80019D78: nop

    after_7:
    // 0x80019D7C: sw          $v0, 0xBC($s1)
    MEM_W(0XBC, ctx->r17) = ctx->r2;
    // 0x80019D80: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x80019D84: lw          $t9, 0xA8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XA8);
    // 0x80019D88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80019D8C: jalr        $t9
    // 0x80019D90: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x80019D90: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_8:
    // 0x80019D94: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x80019D98: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80019D9C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80019DA0: multu       $t5, $v0
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80019DA4: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80019DA8: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x80019DAC: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80019DB0: subu        $t6, $t6, $t7
    ctx->r14 = SUB32(ctx->r14, ctx->r15);
    // 0x80019DB4: sll         $t3, $t6, 1
    ctx->r11 = S32(ctx->r14 << 1);
    // 0x80019DB8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80019DBC: addu        $a0, $t3, $a1
    ctx->r4 = ADD32(ctx->r11, ctx->r5);
    // 0x80019DC0: mflo        $a2
    ctx->r6 = lo;
    // 0x80019DC4: srl         $t4, $a2, 1
    ctx->r12 = S32(U32(ctx->r6) >> 1);
    // 0x80019DC8: jal         0x8000F640
    // 0x80019DCC: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    func_8000F640(rdram, ctx);
        goto after_9;
    // 0x80019DCC: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    after_9:
    // 0x80019DD0: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x80019DD4: nop

    // 0x80019DD8: sll         $a0, $v0, 6
    ctx->r4 = S32(ctx->r2 << 6);
    // 0x80019DDC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80019DE0: jal         0x8000C734
    // 0x80019DE4: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_8000C734(rdram, ctx);
        goto after_10;
    // 0x80019DE4: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_10:
    // 0x80019DE8: sw          $v0, 0xC0($s1)
    MEM_W(0XC0, ctx->r17) = ctx->r2;
    // 0x80019DEC: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x80019DF0: lw          $t9, 0xB0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XB0);
    // 0x80019DF4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80019DF8: jalr        $t9
    // 0x80019DFC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x80019DFC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_11:
    // 0x80019E00: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80019E04: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x80019E08: addiu       $a2, $a2, -0x40
    ctx->r6 = ADD32(ctx->r6, -0X40);
    // 0x80019E0C: srl         $t7, $a2, 2
    ctx->r15 = S32(U32(ctx->r6) >> 2);
    // 0x80019E10: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80019E14: jal         0x8000E4A8
    // 0x80019E18: addiu       $a0, $a1, 0x40
    ctx->r4 = ADD32(ctx->r5, 0X40);
    func_8000E4A8(rdram, ctx);
        goto after_12;
    // 0x80019E18: addiu       $a0, $a1, 0x40
    ctx->r4 = ADD32(ctx->r5, 0X40);
    after_12:
    // 0x80019E1C: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x80019E20: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80019E24: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80019E28: multu       $t6, $t3
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80019E2C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80019E30: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80019E34: mflo        $a0
    ctx->r4 = lo;
    // 0x80019E38: jal         0x8000C734
    // 0x80019E3C: nop

    func_8000C734(rdram, ctx);
        goto after_13;
    // 0x80019E3C: nop

    after_13:
    // 0x80019E40: sw          $v0, 0xC4($s1)
    MEM_W(0XC4, ctx->r17) = ctx->r2;
    // 0x80019E44: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x80019E48: lw          $t9, 0xB8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XB8);
    // 0x80019E4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80019E50: jalr        $t9
    // 0x80019E54: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x80019E54: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_14:
    // 0x80019E58: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80019E5C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80019E60: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x80019E64: multu       $t8, $t7
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80019E68: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x80019E6C: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x80019E70: addu        $a0, $t4, $a1
    ctx->r4 = ADD32(ctx->r12, ctx->r5);
    // 0x80019E74: mflo        $a2
    ctx->r6 = lo;
    // 0x80019E78: srl         $t6, $a2, 2
    ctx->r14 = S32(U32(ctx->r6) >> 2);
    // 0x80019E7C: jal         0x8000E4A8
    // 0x80019E80: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    func_8000E4A8(rdram, ctx);
        goto after_15;
    // 0x80019E80: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_15:
    // 0x80019E84: b           L_80019EF4
    // 0x80019E88: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
        goto L_80019EF4;
    // 0x80019E88: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
L_80019E8C:
    // 0x80019E8C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80019E90: beq         $s0, $at, L_80019EA4
    if (ctx->r16 == ctx->r1) {
        // 0x80019E94: or          $a0, $t2, $zero
        ctx->r4 = ctx->r10 | 0;
            goto L_80019EA4;
    }
    // 0x80019E94: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80019E98: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80019E9C: bne         $s0, $at, L_80019EDC
    if (ctx->r16 != ctx->r1) {
        // 0x80019EA0: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_80019EDC;
    }
    // 0x80019EA0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
L_80019EA4:
    // 0x80019EA4: jal         0x800148E8
    // 0x80019EA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800148E8(rdram, ctx);
        goto after_16;
    // 0x80019EA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
    // 0x80019EAC: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x80019EB0: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x80019EB4: addiu       $t3, $s0, 0x3
    ctx->r11 = ADD32(ctx->r16, 0X3);
    // 0x80019EB8: and         $s0, $t3, $v0
    ctx->r16 = ctx->r11 & ctx->r2;
    // 0x80019EBC: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80019EC0: addiu       $t5, $s0, 0x7
    ctx->r13 = ADD32(ctx->r16, 0X7);
    // 0x80019EC4: and         $s0, $t5, $v0
    ctx->r16 = ctx->r13 & ctx->r2;
    // 0x80019EC8: sw          $t9, 0xD8($s1)
    MEM_W(0XD8, ctx->r17) = ctx->r25;
    // 0x80019ECC: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x80019ED0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80019ED4: b           L_80019EF0
    // 0x80019ED8: sw          $t4, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r12;
        goto L_80019EF0;
    // 0x80019ED8: sw          $t4, 0xDC($s1)
    MEM_W(0XDC, ctx->r17) = ctx->r12;
L_80019EDC:
    // 0x80019EDC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80019EE0: jal         0x80000FBC
    // 0x80019EE4: addiu       $a0, $a0, 0x503C
    ctx->r4 = ADD32(ctx->r4, 0X503C);
    func_80000FBC(rdram, ctx);
        goto after_17;
    // 0x80019EE4: addiu       $a0, $a0, 0x503C
    ctx->r4 = ADD32(ctx->r4, 0X503C);
    after_17:
    // 0x80019EE8: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x80019EEC: nop

L_80019EF0:
    // 0x80019EF0: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
L_80019EF4:
    // 0x80019EF4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80019EF8: sw          $s1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r17;
    // 0x80019EFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80019F00: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80019F04: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80019F08: jr          $ra
    // 0x80019F0C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x80019F0C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_80019F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019F10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80019F14: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80019F18: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80019F1C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80019F20: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80019F24: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80019F28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80019F2C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80019F30: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80019F34: addiu       $t6, $sp, 0x34
    ctx->r14 = ADD32(ctx->r29, 0X34);
    // 0x80019F38: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80019F3C: jal         0x80019890
    // 0x80019F40: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_80019890(rdram, ctx);
        goto after_0;
    // 0x80019F40: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x80019F44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80019F48: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80019F4C: jr          $ra
    // 0x80019F50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80019F50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80019F54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019F54: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80019F58: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80019F5C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80019F60: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80019F64: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80019F68: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80019F6C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80019F70: lhu         $t6, 0x34($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X34);
    // 0x80019F74: andi        $s0, $a1, 0xFFFF
    ctx->r16 = ctx->r5 & 0XFFFF;
    // 0x80019F78: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x80019F7C: bne         $t6, $zero, L_8001A028
    if (ctx->r14 != 0) {
        // 0x80019F80: or          $s3, $a0, $zero
        ctx->r19 = ctx->r4 | 0;
            goto L_8001A028;
    }
    // 0x80019F80: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80019F84: lw          $t7, 0xA4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XA4);
    // 0x80019F88: nop

    // 0x80019F8C: beq         $t7, $zero, L_80019F9C
    if (ctx->r15 == 0) {
        // 0x80019F90: nop
    
            goto L_80019F9C;
    }
    // 0x80019F90: nop

    // 0x80019F94: jal         0x800196D4
    // 0x80019F98: nop

    func_800196D4(rdram, ctx);
        goto after_0;
    // 0x80019F98: nop

    after_0:
L_80019F9C:
    // 0x80019F9C: lw          $a1, 0x98($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X98);
    // 0x80019FA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80019FA4: jal         0x80011A70
    // 0x80019FA8: andi        $a2, $s0, 0xFFFF
    ctx->r6 = ctx->r16 & 0XFFFF;
    func_80011A70(rdram, ctx);
        goto after_1;
    // 0x80019FA8: andi        $a2, $s0, 0xFFFF
    ctx->r6 = ctx->r16 & 0XFFFF;
    after_1:
    // 0x80019FAC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80019FB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80019FB4: beq         $v0, $zero, L_80019FCC
    if (ctx->r2 == 0) {
        // 0x80019FB8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80019FCC;
    }
    // 0x80019FB8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80019FBC:
    // 0x80019FBC: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80019FC0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80019FC4: bne         $v1, $zero, L_80019FBC
    if (ctx->r3 != 0) {
        // 0x80019FC8: nop
    
            goto L_80019FBC;
    }
    // 0x80019FC8: nop

L_80019FCC:
    // 0x80019FCC: beq         $a1, $zero, L_8001A028
    if (ctx->r5 == 0) {
        // 0x80019FD0: sll         $a0, $a1, 2
        ctx->r4 = S32(ctx->r5 << 2);
            goto L_8001A028;
    }
    // 0x80019FD0: sll         $a0, $a1, 2
    ctx->r4 = S32(ctx->r5 << 2);
    // 0x80019FD4: sw          $s1, 0x9C($s3)
    MEM_W(0X9C, ctx->r19) = ctx->r17;
    // 0x80019FD8: jal         0x8000C734
    // 0x80019FDC: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    func_8000C734(rdram, ctx);
        goto after_2;
    // 0x80019FDC: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    after_2:
    // 0x80019FE0: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80019FE4: sw          $v0, 0xA0($s3)
    MEM_W(0XA0, ctx->r19) = ctx->r2;
    // 0x80019FE8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80019FEC: beq         $s1, $zero, L_8001A028
    if (ctx->r17 == 0) {
        // 0x80019FF0: sw          $a1, 0xA4($s3)
        MEM_W(0XA4, ctx->r19) = ctx->r5;
            goto L_8001A028;
    }
    // 0x80019FF0: sw          $a1, 0xA4($s3)
    MEM_W(0XA4, ctx->r19) = ctx->r5;
L_80019FF4:
    // 0x80019FF4: lhu         $t8, 0xC($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0XC);
    // 0x80019FF8: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x80019FFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001A000: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x8001A004: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x8001A008: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x8001A00C: jal         0x80019F10
    // 0x8001A010: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_80019F10(rdram, ctx);
        goto after_3;
    // 0x8001A010: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_3:
    // 0x8001A014: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8001A018: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x8001A01C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8001A020: bne         $s1, $zero, L_80019FF4
    if (ctx->r17 != 0) {
        // 0x8001A024: nop
    
            goto L_80019FF4;
    }
    // 0x8001A024: nop

L_8001A028:
    // 0x8001A028: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8001A02C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A030: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8001A034: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8001A038: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8001A03C: jr          $ra
    // 0x8001A040: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8001A040: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8001A044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A044: jr          $ra
    // 0x8001A048: nop

    return;
    // 0x8001A048: nop

;}
RECOMP_FUNC void func_8001A04C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A04C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8001A050: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8001A054: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8001A058: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8001A05C: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8001A060: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8001A064: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8001A068: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8001A06C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8001A070: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8001A074: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8001A078: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8001A07C: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8001A080: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8001A084: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8001A088: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8001A08C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8001A090: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x8001A094: lhu         $a2, 0x3A($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X3A);
    // 0x8001A098: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8001A09C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x8001A0A0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8001A0A4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8001A0A8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_8001A0AC:
    // 0x8001A0AC: sllv        $a1, $t6, $v1
    ctx->r5 = S32(ctx->r14 << (ctx->r3 & 31));
    // 0x8001A0B0: and         $t7, $a1, $v0
    ctx->r15 = ctx->r5 & ctx->r2;
    // 0x8001A0B4: beq         $t7, $zero, L_8001A0D0
    if (ctx->r15 == 0) {
        // 0x8001A0B8: nop
    
            goto L_8001A0D0;
    }
    // 0x8001A0B8: nop

    // 0x8001A0BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8001A0C0: bne         $v1, $a0, L_8001A0AC
    if (ctx->r3 != ctx->r4) {
        // 0x8001A0C4: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_8001A0AC;
    }
    // 0x8001A0C4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001A0C8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8001A0CC: sllv        $a1, $t8, $v1
    ctx->r5 = S32(ctx->r24 << (ctx->r3 & 31));
L_8001A0D0:
    // 0x8001A0D0: bne         $v1, $a0, L_8001A100
    if (ctx->r3 != ctx->r4) {
        // 0x8001A0D4: lui         $a0, 0x8009
        ctx->r4 = S32(0X8009 << 16);
            goto L_8001A100;
    }
    // 0x8001A0D4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8001A0D8: addiu       $a0, $a0, 0x5060
    ctx->r4 = ADD32(ctx->r4, 0X5060);
    // 0x8001A0DC: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    // 0x8001A0E0: sw          $a1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r5;
    // 0x8001A0E4: jal         0x80000FBC
    // 0x8001A0E8: sw          $a3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r7;
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x8001A0E8: sw          $a3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r7;
    after_0:
    // 0x8001A0EC: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x8001A0F0: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x8001A0F4: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x8001A0F8: lhu         $a2, 0x3A($a3)
    ctx->r6 = MEM_HU(ctx->r7, 0X3A);
    // 0x8001A0FC: nop

L_8001A100:
    // 0x8001A100: or          $t9, $a2, $a1
    ctx->r25 = ctx->r6 | ctx->r5;
    // 0x8001A104: sh          $t9, 0x3A($a3)
    MEM_H(0X3A, ctx->r7) = ctx->r25;
    // 0x8001A108: lw          $s0, 0x7C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X7C);
    // 0x8001A10C: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
    // 0x8001A110: jal         0x800189F0
    // 0x8001A114: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    func_800189F0(rdram, ctx);
        goto after_1;
    // 0x8001A114: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    after_1:
    // 0x8001A118: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8001A11C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8001A120: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8001A124: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8001A128: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8001A12C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8001A130: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8001A134: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8001A138: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8001A13C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8001A140: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8001A144: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8001A148: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8001A14C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8001A150: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8001A154: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8001A158: jr          $ra
    // 0x8001A15C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8001A15C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_8001A160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A160: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8001A164: lw          $t6, -0x5C70($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5C70);
    // 0x8001A168: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8001A16C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001A170: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x8001A174: jr          $ra
    // 0x8001A178: nop

    return;
    // 0x8001A178: nop

;}
